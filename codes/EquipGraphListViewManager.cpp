void EquipGraphListViewManager___cctor(const MethodInfo *method)
{
  ListViewSort_o *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  ListViewSort_o *v8; // x19
  struct EquipGraphListViewManager_StaticFields *static_fields; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  ListViewSort_o *v16; // x19
  struct EquipGraphListViewManager_StaticFields *v17; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  ListViewSort_o *v24; // x19
  struct EquipGraphListViewManager_StaticFields *v25; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7

  if ( (byte_4D2FEC8 & 1) == 0 )
  {
    sub_1C93AD4(&EquipGraphListViewManager_TypeInfo);
    sub_1C93AD4(&ListViewSort_TypeInfo);
    sub_1C93AD4(&StringLiteral_11494/*"RewardUpEquipGraph"*/);
    sub_1C93AD4(&StringLiteral_6141/*"EquipGraph"*/);
    sub_1C93AD4(&StringLiteral_3208/*"BondEquipGraph"*/);
    sub_1C93AD4(&StringLiteral_15682/*"WarBoardEquipGraph"*/);
    byte_4D2FEC8 = 1;
  }
  v1 = (ListViewSort_o *)sub_1C93D20(ListViewSort_TypeInfo);
  ListViewSort___ctor_44521036(v1, (System_String_o *)StringLiteral_6141/*"EquipGraph"*/, 3, 0, 0);
  EquipGraphListViewManager_TypeInfo->static_fields->sortStatus = v1;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)EquipGraphListViewManager_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v8 = (ListViewSort_o *)sub_1C93D20(ListViewSort_TypeInfo);
  ListViewSort___ctor_44521036(v8, (System_String_o *)StringLiteral_3208/*"BondEquipGraph"*/, 3, 0, 0);
  static_fields = EquipGraphListViewManager_TypeInfo->static_fields;
  static_fields->bondSortStatus = v8;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&static_fields->bondSortStatus, (int32_t)v8, v10, v11, v12, v13, v14, v15);
  v16 = (ListViewSort_o *)sub_1C93D20(ListViewSort_TypeInfo);
  ListViewSort___ctor_44521036(v16, (System_String_o *)StringLiteral_11494/*"RewardUpEquipGraph"*/, 3, 0, 0);
  v17 = EquipGraphListViewManager_TypeInfo->static_fields;
  v17->rewardUpSortStatus = v16;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v17->rewardUpSortStatus, (int32_t)v16, v18, v19, v20, v21, v22, v23);
  v24 = (ListViewSort_o *)sub_1C93D20(ListViewSort_TypeInfo);
  ListViewSort___ctor_44521036(v24, (System_String_o *)StringLiteral_15682/*"WarBoardEquipGraph"*/, 3, 0, 0);
  v25 = EquipGraphListViewManager_TypeInfo->static_fields;
  v25->warBoardSortStatus = v24;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v25->warBoardSortStatus, (int32_t)v24, v26, v27, v28, v29, v30, v31);
}


void EquipGraphListViewManager___ctor(EquipGraphListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


void EquipGraphListViewManager__ChangeIconScale(EquipGraphListViewManager_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  unsigned int scaleType; // w8
  struct ListViewItemSeed_o *smallSizeSeed; // x1
  int v11; // w8
  GrandQuestFolderBoardItem_o *p_seed; // x0
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
  p_seed = (GrandQuestFolderBoardItem_o *)&this->fields.seed;
  p_seed[2].fields.loopIndex = v11;
  sub_1C93A78(p_seed, (int32_t)smallSizeSeed, v2, v3, v4, v5, v6, v7);
LABEL_8:
  sort = this->fields.sort;
  if ( !sort )
    sub_1C93D2C(0, method);
  sort->fields.iconScaleKind = this->fields.scaleType;
  ListViewSort__Save(sort, 0);
  EquipGraphListViewManager__ModifyList(this, 1, v14);
  EquipGraphListViewManager__SetMode_41693012(this, 2, v15);
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
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  int32_t v34; // w8
  EquipGraphListViewManager_c *v35; // x0
  struct ListViewSort_o **p_rewardUpSortStatus; // x8
  EquipGraphListViewManager_c *v37; // x0
  EquipGraphListViewManager_c *v38; // x0
  struct ListViewSort_o *v39; // x1
  struct ListViewSort_o **p_sort; // x26
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *v43; // x4
  int32_t v44; // w5
  int64_t v45; // x6
  System_String_o *v46; // x7
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x1
  int32_t v48; // w2
  int32_t v49; // w3
  System_String_o *v50; // x4
  int32_t v51; // w5
  int64_t v52; // x6
  System_String_o *v53; // x7
  struct ListViewSort_o *v54; // x8
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  _BOOL4 isQuestStart; // w8
  struct ListViewSort_BonusFilterInfo_array *AlignedBonusFilter; // x0
  int32_t v59; // w2
  int32_t v60; // w3
  System_String_o *v61; // x4
  int32_t v62; // w5
  int64_t v63; // x6
  System_String_o *v64; // x7
  struct ListViewSort_o *v65; // x20
  bool v66; // w8
  struct PartyOrganizationListViewItem_o *v67; // x0
  struct PartyOrganizationListViewItem_o **p_baseItem; // x27
  int32_t v69; // w2
  int32_t v70; // w3
  System_String_o *v71; // x4
  int32_t v72; // w5
  int64_t v73; // x6
  System_String_o *v74; // x7
  struct PartyOrganizationListViewItem_o *baseItem; // x20
  int32_t v76; // w22
  bool IsTempGrandServant_k__BackingField; // w24
  EquipGraphServantItem_o *v78; // x25
  int32_t v79; // w2
  int32_t v80; // w3
  System_String_o *v81; // x4
  int32_t v82; // w5
  int64_t v83; // x6
  System_String_o *v84; // x7
  System_Int64_array *EquipList; // x0
  __int64 *v86; // x22
  int32_t v87; // w2
  int32_t v88; // w3
  System_String_o *v89; // x4
  int32_t v90; // w5
  int64_t v91; // x6
  System_String_o *v92; // x7
  EquipGraphServantItem_o *v93; // x20
  __int64 v94; // x8
  __int64 v95; // x9
  __int64 v96; // x20
  System_Collections_Generic_IEnumerable_T__o *v97; // x20
  System_Func_object__bool__o *v98; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v99; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v100; // x24
  EquipGraphListViewManager___c_c *v101; // x8
  System_Func_object__int__o *_9__66_2; // x20
  Il2CppObject *v103; // x22
  struct EquipGraphListViewManager___c_StaticFields *static_fields; // x0
  int32_t v105; // w2
  int32_t v106; // w3
  System_String_o *v107; // x4
  int32_t v108; // w5
  int64_t v109; // x6
  System_String_o *v110; // x7
  EquipGraphListViewManager___c_c *v111; // x0
  System_Func_object__int__o *_9__66_3; // x20
  Il2CppObject *v113; // x22
  struct EquipGraphListViewManager___c_StaticFields *v114; // x0
  int32_t v115; // w2
  int32_t v116; // w3
  System_String_o *v117; // x4
  int32_t v118; // w5
  int64_t v119; // x6
  System_String_o *v120; // x7
  UserGameEntity_o *SelfUserGame; // x24
  int32_t cost; // w20
  UserServantEntity_array *ServantEquipList; // x0
  UnityEngine_Object_o *infoDataLabel; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v125; // x25
  UILabel_o *v126; // x22
  System_String_o *v127; // x20
  Il2CppObject *v128; // x28
  Il2CppObject *v129; // x0
  UnityEngine_GameObject_o *bondSkillChangeMessageLabel; // x20
  System_Collections_Generic_List_object__o *v131; // x26
  __int64 v132; // x23
  int v133; // w8
  void *v134; // x8
  unsigned __int64 v135; // x24
  UserServantEntity_o *v136; // x20
  int64_t v137; // x0
  int32_t v138; // w27
  int64_t v139; // x28
  int32_t v140; // w29
  EquipGraphListViewItem_o *v141; // x22
  int32_t v142; // w2
  int32_t v143; // w3
  System_String_o *v144; // x4
  int32_t v145; // w5
  int64_t v146; // x6
  System_String_o *v147; // x7
  struct System_Object_array *v148; // x8
  _QWORD *v149; // x9
  __int64 v150; // x10
  Il2CppClass **v151; // x0
  Il2CppObject *v152; // x20
  ServantSkillMaster_o *v153; // x28
  System_Collections_Generic_IEnumerable_TSource__o *RewardUpFuncCategory; // x0
  int32_t v155; // w2
  int32_t v156; // w3
  System_String_o *v157; // x4
  int32_t v158; // w5
  int64_t v159; // x6
  System_String_o *v160; // x7
  System_Collections_Generic_IEnumerable_TSource__o *RewardUpIgnoreSvtId; // x0
  int v162; // w8
  System_Collections_Generic_HashSet_int__o *v163; // x21
  unsigned int v164; // w27
  GrandQuestFolderBoardItem_o *v165; // x29
  __int64 v166; // x24
  __int64 v167; // x20
  __int64 v168; // x22
  __int64 v169; // x20
  __int64 v170; // x22
  ServantSkillEntity_array *ServantSkillList; // x0
  System_Func_int__bool__o *klass; // x20
  System_Collections_Generic_IEnumerable_TSource__o *preLoadCategoryIdList; // x22
  int32_t v174; // w2
  int32_t v175; // w3
  System_String_o *v176; // x4
  int32_t v177; // w5
  int64_t v178; // x6
  System_String_o *v179; // x7
  System_Collections_Generic_HashSet_int__o *v180; // x29
  __int64 v181; // x25
  int64_t v182; // x0
  int32_t v183; // w23
  int64_t v184; // x21
  EquipGraphListViewItem_o *v185; // x20
  int32_t v186; // w2
  int32_t v187; // w3
  System_String_o *v188; // x4
  int32_t v189; // w5
  int64_t v190; // x6
  System_String_o *v191; // x7
  struct System_Object_array *v192; // x8
  _QWORD *v193; // x9
  __int64 v194; // x10
  Il2CppClass **v195; // x0
  int32_t v196; // w2
  int32_t v197; // w3
  System_String_o *v198; // x4
  int32_t v199; // w5
  int64_t v200; // x6
  System_String_o *v201; // x7
  Il2CppObject *Master_object; // x0
  int32_t v203; // w2
  int32_t v204; // w3
  System_String_o *v205; // x4
  int32_t v206; // w5
  int64_t v207; // x6
  System_String_o *v208; // x7
  int32_t v209; // w2
  int32_t v210; // w3
  System_String_o *v211; // x4
  int32_t v212; // w5
  int64_t v213; // x6
  System_String_o *v214; // x7
  struct ServantEntity_o *servantEntity; // x8
  struct System_Int32_array *individuality; // x1
  System_Func_object__bool__o *v217; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v218; // x0
  System_Collections_Generic_List_object__o *v219; // x24
  int32_t v220; // w25
  UserServantEntity_o *v221; // x22
  int64_t EquipUserSvtId; // x0
  int32_t memberIndex; // w27
  int64_t v224; // x28
  int32_t v225; // w21
  EquipGraphListViewItem_o *v226; // x20
  int32_t v227; // w2
  int32_t v228; // w3
  System_String_o *v229; // x4
  int32_t v230; // w5
  int64_t v231; // x6
  System_String_o *v232; // x7
  struct System_Object_array *items; // x8
  _QWORD *v234; // x9
  __int64 size; // x10
  Il2CppClass **v236; // x0
  System_Action_object__o *v237; // x20
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  UILabel_o *emptyMessageLabel; // x20
  System_String_o **v240; // x8
  System_String_o *v241; // x21
  const MethodInfo *v242; // x1
  const MethodInfo *v243; // x1
  const MethodInfo *v244; // [xsp+10h] [xbp-B0h]
  GrandQuestFolderBoardItem_o *v245; // [xsp+18h] [xbp-A8h]
  System_Collections_Generic_IEnumerable_TSource__o *v246; // [xsp+20h] [xbp-A0h]
  int32_t v247; // [xsp+28h] [xbp-98h]
  int32_t v248; // [xsp+2Ch] [xbp-94h]
  EventUpValSetupInfo_o *setupInfoa; // [xsp+30h] [xbp-90h]
  PartyListViewItem_o *v250; // [xsp+38h] [xbp-88h]
  PartyListViewItem_array *v251; // [xsp+40h] [xbp-80h]
  EquipGraphServantItem_o **p_servantItemInfo; // [xsp+48h] [xbp-78h]
  Il2CppObject *object; // [xsp+50h] [xbp-70h]
  int32_t svtEquipKeep; // [xsp+58h] [xbp-68h] BYREF
  int monitor; // [xsp+5Ch] [xbp-64h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v256; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v257; // 0:x0.16

  if ( (byte_4D2FEAF & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_EquipGraphListViewItem__TypeInfo);
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    sub_1C93AD4(&Method_BasicHelper_ExcludeNull_UserServantEntity___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_ConstantStrMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_ServantSkillMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_SkillMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_System_Linq_Enumerable_All_int___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Sum_UserServantEntity___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_ToHashSet_int___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_ToList_UserServantEntity___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Where_UserServantEntity___);
    sub_1C93AD4(&EquipGraphListViewItem_TypeInfo);
    sub_1C93AD4(&EquipGraphListViewManager_TypeInfo);
    sub_1C93AD4(&EquipGraphServantItem_TypeInfo);
    sub_1C93AD4(&System_Func_UserServantEntity__bool__TypeInfo);
    sub_1C93AD4(&System_Func_int__bool__TypeInfo);
    sub_1C93AD4(&System_Func_UserServantEntity__int__TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_HashSet_int__Contains__);
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EquipGraphListViewItem__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EquipGraphListViewItem__ForEach__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EquipGraphListViewItem___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
    sub_1C93AD4(&System_Collections_Generic_List_EquipGraphListViewItem__TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&Method_EquipGraphListViewManager___c__CreateList_b__66_2__);
    sub_1C93AD4(&Method_EquipGraphListViewManager___c__CreateList_b__66_3__);
    sub_1C93AD4(&Method_EquipGraphListViewManager___c__DisplayClass66_0__CreateList_b__0__);
    sub_1C93AD4(&Method_EquipGraphListViewManager___c__DisplayClass66_0__CreateList_b__1__);
    sub_1C93AD4(&EquipGraphListViewManager___c__DisplayClass66_0_TypeInfo);
    sub_1C93AD4(&Method_EquipGraphListViewManager___c__DisplayClass66_1__CreateList_b__4__);
    sub_1C93AD4(&Method_EquipGraphListViewManager___c__DisplayClass66_1__CreateList_b__6__);
    sub_1C93AD4(&EquipGraphListViewManager___c__DisplayClass66_1_TypeInfo);
    sub_1C93AD4(&EquipGraphListViewManager___c_TypeInfo);
    sub_1C93AD4(&StringLiteral_11695/*"SERVANT_EQUIP_EMPTY"*/);
    sub_1C93AD4(&StringLiteral_11895/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/);
    sub_1C93AD4(&StringLiteral_12573/*"SUM_INFO"*/);
    byte_4D2FEAF = 1;
  }
  v13 = sub_1C93D20(EquipGraphListViewManager___c__DisplayClass66_0_TypeInfo);
  EquipGraphListViewManager___c__DisplayClass66_0___ctor((EquipGraphListViewManager___c__DisplayClass66_0_o *)v13, 0);
  if ( !v13 )
    goto LABEL_151;
  *(_QWORD *)(v13 + 32) = this;
  *(_DWORD *)(v13 + 24) = type;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v13 + 32), (int32_t)this, v16, v17, v18, v19, v20, v21);
  this->fields.waveDeckItemList = baseDeckItemList;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.waveDeckItemList,
    (int32_t)baseDeckItemList,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  v34 = *(_DWORD *)(v13 + 24);
  this->fields.equipGraphType = v34;
  if ( v34 == 2 )
  {
    v37 = EquipGraphListViewManager_TypeInfo;
    if ( !EquipGraphListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EquipGraphListViewManager_TypeInfo);
      v37 = EquipGraphListViewManager_TypeInfo;
    }
    p_rewardUpSortStatus = &v37->static_fields->rewardUpSortStatus;
  }
  else if ( v34 == 1 )
  {
    v38 = EquipGraphListViewManager_TypeInfo;
    if ( !EquipGraphListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EquipGraphListViewManager_TypeInfo);
      v38 = EquipGraphListViewManager_TypeInfo;
    }
    p_rewardUpSortStatus = &v38->static_fields->bondSortStatus;
  }
  else
  {
    v35 = EquipGraphListViewManager_TypeInfo;
    if ( !EquipGraphListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EquipGraphListViewManager_TypeInfo);
      v35 = EquipGraphListViewManager_TypeInfo;
    }
    p_rewardUpSortStatus = &v35->static_fields->sortStatus;
  }
  v39 = *p_rewardUpSortStatus;
  this->fields.sort = *p_rewardUpSortStatus;
  p_sort = &this->fields.sort;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.sort, (int32_t)v39, v28, v29, v30, v31, v32, v33);
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
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.questRestrictionInfo,
    (int32_t)questRestrictionInfo,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  v54 = this->fields.sort;
  if ( !v54 )
    goto LABEL_151;
  iconScaleKind = v54->fields.iconScaleKind;
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
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.seed, (int32_t)normalSizeSeed, v48, v49, v50, v51, v52, v53);
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
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields.alignedBonusFilterInfos,
      (int32_t)AlignedBonusFilter,
      v59,
      v60,
      v61,
      v62,
      v63,
      v64);
    v65 = this->fields.sort;
    sort = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.alignedBonusFilterInfos, 0);
    if ( !v65 )
      goto LABEL_151;
    v66 = (sort & 1) == 0;
  }
  else
  {
    this->fields.isQuestStart = 1;
    this->fields.alignedBonusFilterInfos = 0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.alignedBonusFilterInfos, 0, v48, v49, v50, v51, v52, v53);
    v65 = this->fields.sort;
    if ( !v65 )
      goto LABEL_151;
    v66 = 0;
  }
  v65->fields.isBonusKind = v66;
  v67 = PartyListViewItem__GetMember(partyItem, this->fields.memberIndex, 0);
  p_baseItem = &this->fields.baseItem;
  this->fields.baseItem = v67;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.baseItem, (int32_t)v67, v69, v70, v71, v72, v73, v74);
  baseItem = this->fields.baseItem;
  if ( !baseItem )
    goto LABEL_151;
  if ( !baseItem->fields.isFollower )
  {
    v76 = *(_DWORD *)(v13 + 24);
    IsTempGrandServant_k__BackingField = baseItem->fields._IsTempGrandServant_k__BackingField;
    v78 = (EquipGraphServantItem_o *)sub_1C93D20(EquipGraphServantItem_TypeInfo);
    EquipGraphServantItem___ctor(v78, baseItem, v76, IsTempGrandServant_k__BackingField, 0);
    this->fields.servantItemInfo = v78;
    p_servantItemInfo = &this->fields.servantItemInfo;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields.servantItemInfo,
      (int32_t)v78,
      v79,
      v80,
      v81,
      v82,
      v83,
      v84);
    sort = (__int64)this->fields.baseItem;
    if ( !sort )
      goto LABEL_151;
    EquipList = PartyOrganizationListViewItem__GetEquipList((PartyOrganizationListViewItem_o *)sort, 0);
    *(_QWORD *)(v13 + 16) = EquipList;
    v86 = (__int64 *)(v13 + 16);
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v13 + 16), (int32_t)EquipList, v87, v88, v89, v90, v91, v92);
    sort = (__int64)*p_baseItem;
    if ( !*p_baseItem )
      goto LABEL_151;
    v93 = *p_servantItemInfo;
    if ( *(_BYTE *)(sort + 402) )
    {
      sort = PartyOrganizationListViewItem__get_EquipUserSvtId((PartyOrganizationListViewItem_o *)sort, 0);
      v15 = sort;
      if ( !v93 )
        goto LABEL_151;
    }
    else
    {
      v94 = *(_QWORD *)(v13 + 16);
      if ( !v94 )
        goto LABEL_151;
      v95 = *(int *)(v13 + 24);
      if ( (unsigned int)v95 >= *(_DWORD *)(v94 + 24) )
        goto LABEL_152;
      v15 = *(_QWORD *)(v94 + 8 * v95 + 32);
      if ( !v93 )
        goto LABEL_151;
    }
    object = (Il2CppObject *)v13;
    EquipGraphServantItem__SetEquipTarget(v93, v15, 0);
    *(_QWORD *)&this->fields.addBaseAtk = 0;
    v96 = *v86;
    if ( !*v86 )
      goto LABEL_151;
    sort = (__int64)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      sort = (__int64)BalanceConfig_TypeInfo;
    }
    if ( *(_DWORD *)(*(_QWORD *)(sort + 184) + 52LL) == *(_DWORD *)(v96 + 24) )
    {
      if ( !*p_baseItem )
        goto LABEL_151;
      v97 = BasicHelper__ExcludeNull_object_(
              (System_Collections_Generic_IEnumerable_T__o *)(*p_baseItem)->fields.equipUserServantEntityList,
              (const MethodInfo_318E4CC *)Method_BasicHelper_ExcludeNull_UserServantEntity___);
      v98 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_UserServantEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v98,
        (Il2CppObject *)v13,
        Method_EquipGraphListViewManager___c__DisplayClass66_0__CreateList_b__1__,
        0);
      v99 = System_Linq_Enumerable__Where_object_(
              (System_Collections_Generic_IEnumerable_TSource__o *)v97,
              (System_Func_TSource__bool__o *)v98,
              (const MethodInfo_31EB2BC *)Method_System_Linq_Enumerable_Where_UserServantEntity___);
      v100 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToList_object_(
                                                                    v99,
                                                                    (const MethodInfo_31E8E3C *)Method_System_Linq_Enumerable_ToList_UserServantEntity___);
      v101 = EquipGraphListViewManager___c_TypeInfo;
      if ( !EquipGraphListViewManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EquipGraphListViewManager___c_TypeInfo);
        v101 = EquipGraphListViewManager___c_TypeInfo;
      }
      _9__66_2 = (System_Func_object__int__o *)v101->static_fields->__9__66_2;
      if ( !_9__66_2 )
      {
        if ( !v101->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v101);
          v101 = EquipGraphListViewManager___c_TypeInfo;
        }
        v103 = (Il2CppObject *)v101->static_fields->__9;
        _9__66_2 = (System_Func_object__int__o *)sub_1C93D20(System_Func_UserServantEntity__int__TypeInfo);
        System_Func_object__int____ctor(_9__66_2, v103, Method_EquipGraphListViewManager___c__CreateList_b__66_2__, 0);
        static_fields = EquipGraphListViewManager___c_TypeInfo->static_fields;
        static_fields->__9__66_2 = (struct System_Func_UserServantEntity__int__o *)_9__66_2;
        sub_1C93A78(
          (GrandQuestFolderBoardItem_o *)&static_fields->__9__66_2,
          (int32_t)_9__66_2,
          v105,
          v106,
          v107,
          v108,
          v109,
          v110);
      }
      this->fields.addBaseAtk = System_Linq_Enumerable__Sum_object_(
                                  v100,
                                  (System_Func_TSource__int__o *)_9__66_2,
                                  (const MethodInfo_31E23D0 *)Method_System_Linq_Enumerable_Sum_UserServantEntity___);
      v111 = EquipGraphListViewManager___c_TypeInfo;
      if ( !EquipGraphListViewManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EquipGraphListViewManager___c_TypeInfo);
        v111 = EquipGraphListViewManager___c_TypeInfo;
      }
      _9__66_3 = (System_Func_object__int__o *)v111->static_fields->__9__66_3;
      if ( !_9__66_3 )
      {
        if ( !v111->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v111);
          v111 = EquipGraphListViewManager___c_TypeInfo;
        }
        v113 = (Il2CppObject *)v111->static_fields->__9;
        _9__66_3 = (System_Func_object__int__o *)sub_1C93D20(System_Func_UserServantEntity__int__TypeInfo);
        System_Func_object__int____ctor(_9__66_3, v113, Method_EquipGraphListViewManager___c__CreateList_b__66_3__, 0);
        v114 = EquipGraphListViewManager___c_TypeInfo->static_fields;
        v114->__9__66_3 = (struct System_Func_UserServantEntity__int__o *)_9__66_3;
        sub_1C93A78(
          (GrandQuestFolderBoardItem_o *)&v114->__9__66_3,
          (int32_t)_9__66_3,
          v115,
          v116,
          v117,
          v118,
          v119,
          v120);
      }
      this->fields.addBaseHp = System_Linq_Enumerable__Sum_object_(
                                 v100,
                                 (System_Func_TSource__int__o *)_9__66_3,
                                 (const MethodInfo_31E23D0 *)Method_System_Linq_Enumerable_Sum_UserServantEntity___);
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
    v251 = baseDeckItemList;
    this->fields.maxWave = baseDeckItemList->max_length;
    sort = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !sort )
      goto LABEL_151;
    sort = (__int64)DataManager__GetMasterData_object_(
                      (DataManager_o *)sort,
                      (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !sort )
      goto LABEL_151;
    ServantEquipList = UserServantMaster__getServantEquipList((UserServantMaster_o *)sort, 0);
    infoDataLabel = (UnityEngine_Object_o *)this->fields.infoDataLabel;
    v125 = (System_Collections_Generic_IEnumerable_TSource__o *)ServantEquipList;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v250 = partyItem;
    if ( UnityEngine_Object__op_Inequality(infoDataLabel, 0, 0) )
    {
      v126 = this->fields.infoDataLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      sort = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12573/*"SUM_INFO"*/, 0);
      if ( !v125 )
        goto LABEL_151;
      v127 = (System_String_o *)sort;
      monitor = (int)v125[1].monitor;
      sort = j_il2cpp_value_box_0(int_TypeInfo, &monitor);
      if ( !SelfUserGame )
        goto LABEL_151;
      v128 = (Il2CppObject *)sort;
      svtEquipKeep = SelfUserGame->fields.svtEquipKeep;
      v129 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtEquipKeep);
      sort = (__int64)System_String__Format_64467032(v127, v128, v129, 0);
      if ( !v126 )
        goto LABEL_151;
      UILabel__set_text(v126, (System_String_o *)sort, 0);
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
      sub_1C93D2C(sort, v15);
    UnityEngine_GameObject__SetActive(bondSkillChangeMessageLabel, v15, 0);
    ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
    v131 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_EquipGraphListViewItem__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v131,
      (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_EquipGraphListViewItem___ctor__);
    v132 = sub_1C93D20(EquipGraphListViewManager___c__DisplayClass66_1_TypeInfo);
    EquipGraphListViewManager___c__DisplayClass66_1___ctor((EquipGraphListViewManager___c__DisplayClass66_1_o *)v132, 0);
    v133 = *(_DWORD *)(v13 + 24);
    setupInfoa = setupInfo;
    if ( v133 != 2 )
    {
      if ( v133 == 1 )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        sort = (__int64)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ServantSkillMaster___);
        if ( !v132 )
          goto LABEL_151;
        *(_QWORD *)(v132 + 24) = sort;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v132 + 24), sort, v196, v197, v198, v199, v200, v201);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_SkillMaster___);
        *(_QWORD *)(v132 + 16) = Master_object;
        sub_1C93A78(
          (GrandQuestFolderBoardItem_o *)(v132 + 16),
          (int32_t)Master_object,
          v203,
          v204,
          v205,
          v206,
          v207,
          v208);
        if ( !*p_baseItem )
          goto LABEL_151;
        servantEntity = (*p_baseItem)->fields.servantEntity;
        if ( !servantEntity )
          goto LABEL_151;
        individuality = servantEntity->fields.individuality;
        *(_QWORD *)(v132 + 32) = individuality;
        sub_1C93A78(
          (GrandQuestFolderBoardItem_o *)(v132 + 32),
          (int32_t)individuality,
          v209,
          v210,
          v211,
          v212,
          v213,
          v214);
        v217 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_UserServantEntity__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v217,
          (Il2CppObject *)v132,
          Method_EquipGraphListViewManager___c__DisplayClass66_1__CreateList_b__4__,
          0);
        v218 = System_Linq_Enumerable__Where_object_(
                 v125,
                 (System_Func_TSource__bool__o *)v217,
                 (const MethodInfo_31EB2BC *)Method_System_Linq_Enumerable_Where_UserServantEntity___);
        sort = (__int64)System_Linq_Enumerable__ToList_object_(
                          v218,
                          (const MethodInfo_31E8E3C *)Method_System_Linq_Enumerable_ToList_UserServantEntity___);
        if ( !sort )
          goto LABEL_151;
        v219 = (System_Collections_Generic_List_object__o *)sort;
        if ( *(int *)(sort + 24) >= 1 )
        {
          v220 = 0;
          while ( 1 )
          {
            sort = (__int64)System_Collections_Generic_List_object___get_Item(
                              v219,
                              v220,
                              (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
            if ( !*p_servantItemInfo )
              goto LABEL_151;
            v221 = (UserServantEntity_o *)sort;
            EquipUserSvtId = EquipGraphServantItem__get_EquipUserSvtId(*p_servantItemInfo, 0);
            memberIndex = this->fields.memberIndex;
            v224 = EquipUserSvtId;
            v225 = (int32_t)object[1].monitor;
            v226 = (EquipGraphListViewItem_o *)sub_1C93D20(EquipGraphListViewItem_TypeInfo);
            EquipGraphListViewItem___ctor(v226, v220, v221, v224, v251, v250, setupInfo, memberIndex, 0, v225, v244);
            if ( !v131 )
              goto LABEL_151;
            items = v131->fields._items;
            v234 = Method_System_Collections_Generic_List_EquipGraphListViewItem__Add__;
            ++v131->fields._version;
            if ( !items )
              goto LABEL_151;
            size = v131->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v131,
                (Il2CppObject *)v226,
                *(const MethodInfo_387999C **)(*(_QWORD *)(v234[4] + 192LL) + 112LL));
            }
            else
            {
              v236 = &items->obj.klass + size;
              v131->fields._size = size + 1;
              v236[4] = (Il2CppClass *)v226;
              sub_1C93A78((GrandQuestFolderBoardItem_o *)(v236 + 4), (int32_t)v226, v227, v228, v229, v230, v231, v232);
            }
            if ( ++v220 >= v219->fields._size )
              goto LABEL_141;
          }
        }
      }
      else if ( !v133 )
      {
        if ( !v125 )
          goto LABEL_151;
        v134 = v125[1].monitor;
        if ( (int)v134 >= 1 )
        {
          v135 = 0;
          while ( v135 < (unsigned int)v134 )
          {
            sort = (__int64)*p_servantItemInfo;
            if ( !*p_servantItemInfo )
              goto LABEL_151;
            v136 = (UserServantEntity_o *)*((_QWORD *)&v125[2].klass + v135);
            v137 = EquipGraphServantItem__get_EquipUserSvtId((EquipGraphServantItem_o *)sort, 0);
            v138 = this->fields.memberIndex;
            v139 = v137;
            v140 = *(_DWORD *)(v13 + 24);
            v141 = (EquipGraphListViewItem_o *)sub_1C93D20(EquipGraphListViewItem_TypeInfo);
            EquipGraphListViewItem___ctor(v141, v135, v136, v139, v251, v250, setupInfoa, v138, 0, v140, v244);
            if ( !v131 )
              goto LABEL_151;
            v148 = v131->fields._items;
            v149 = Method_System_Collections_Generic_List_EquipGraphListViewItem__Add__;
            ++v131->fields._version;
            if ( !v148 )
              goto LABEL_151;
            v150 = v131->fields._size;
            if ( (unsigned int)v150 >= LODWORD(v148->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v131,
                (Il2CppObject *)v141,
                *(const MethodInfo_387999C **)(*(_QWORD *)(v149[4] + 192LL) + 112LL));
            }
            else
            {
              v151 = &v148->obj.klass + v150;
              v131->fields._size = v150 + 1;
              v151[4] = (Il2CppClass *)v141;
              sub_1C93A78((GrandQuestFolderBoardItem_o *)(v151 + 4), (int32_t)v141, v142, v143, v144, v145, v146, v147);
            }
            LODWORD(v134) = v125[1].monitor;
            if ( (__int64)++v135 >= (int)v134 )
              goto LABEL_141;
          }
          goto LABEL_152;
        }
      }
      goto LABEL_141;
    }
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v152 = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ConstantStrMaster___);
    sort = (__int64)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ServantSkillMaster___);
    if ( !v152 )
      goto LABEL_151;
    v153 = (ServantSkillMaster_o *)sort;
    RewardUpFuncCategory = (System_Collections_Generic_IEnumerable_TSource__o *)ConstantStrMaster__GetRewardUpFuncCategory(
                                                                                  (ConstantStrMaster_o *)v152,
                                                                                  0);
    sort = (__int64)System_Linq_Enumerable__ToHashSet_int_(
                      RewardUpFuncCategory,
                      (const MethodInfo_31E8950 *)Method_System_Linq_Enumerable_ToHashSet_int___);
    if ( !v132 )
      goto LABEL_151;
    *(_QWORD *)(v132 + 40) = sort;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v132 + 40), sort, v155, v156, v157, v158, v159, v160);
    RewardUpIgnoreSvtId = (System_Collections_Generic_IEnumerable_TSource__o *)ConstantStrMaster__GetRewardUpIgnoreSvtId(
                                                                                 (ConstantStrMaster_o *)v152,
                                                                                 0);
    sort = (__int64)System_Linq_Enumerable__ToHashSet_int_(
                      RewardUpIgnoreSvtId,
                      (const MethodInfo_31E8950 *)Method_System_Linq_Enumerable_ToHashSet_int___);
    if ( !v125 )
      goto LABEL_151;
    v162 = (int)v125[1].monitor;
    if ( v162 < 1 )
    {
LABEL_141:
      v237 = (System_Action_object__o *)sub_1C93D20(System_Action_EquipGraphListViewItem__TypeInfo);
      System_Action_object____ctor(
        v237,
        object,
        Method_EquipGraphListViewManager___c__DisplayClass66_0__CreateList_b__0__,
        0);
      if ( v131 )
      {
        System_Collections_Generic_List_object___ForEach(
          v131,
          (System_Action_T__o *)v237,
          (const MethodInfo_387A3DC *)Method_System_Collections_Generic_List_EquipGraphListViewItem__ForEach__);
        itemList = this->fields.itemList;
        if ( itemList )
        {
          emptyMessageLabel = this->fields.emptyMessageLabel;
          v240 = (System_String_o **)(itemList->fields._size <= 0 ? &StringLiteral_11695/*"SERVANT_EQUIP_EMPTY"*/ : &StringLiteral_11895/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/);
          v241 = *v240;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          sort = (__int64)LocalizationManager__Get(v241, 0);
          if ( emptyMessageLabel )
          {
            UILabel__set_text(emptyMessageLabel, (System_String_o *)sort, 0);
            EquipGraphListViewManager__RefrashListDisp(this, v242);
            ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
            EquipGraphListViewManager__SetFilterButtonImage(this, v243);
            return;
          }
        }
      }
      goto LABEL_151;
    }
    v163 = (System_Collections_Generic_HashSet_int__o *)sort;
    v164 = 0;
    v165 = (GrandQuestFolderBoardItem_o *)(v132 + 56);
    v248 = 0;
    v245 = (GrandQuestFolderBoardItem_o *)(v132 + 56);
    v246 = v125;
    while ( v164 < v162 )
    {
      v166 = *((_QWORD *)&v125[2].klass + (int)v164);
      if ( !v166 )
        goto LABEL_151;
      v168 = *(_QWORD *)(v166 + 80);
      v167 = *(_QWORD *)(v166 + 88);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v256.fields.currentCryptoKey = v168;
      *(_QWORD *)&v256.fields.fakeValue = v167;
      sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v256, 0);
      if ( !v163 )
        goto LABEL_151;
      sort = System_Collections_Generic_HashSet_int___Contains(
               v163,
               sort,
               (const MethodInfo_3725A9C *)Method_System_Collections_Generic_HashSet_int__Contains__);
      if ( (sort & 1) == 0 )
      {
        v170 = *(_QWORD *)(v166 + 80);
        v169 = *(_QWORD *)(v166 + 88);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v257.fields.currentCryptoKey = v170;
        *(_QWORD *)&v257.fields.fakeValue = v169;
        sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v257, 0);
        if ( !v153 )
          goto LABEL_151;
        ServantSkillList = ServantSkillMaster__getServantSkillList(v153, sort, 0);
        sort = (__int64)UserServantEntity__GetEquipAllCategoryIdList((UserServantEntity_o *)v166, ServantSkillList, 0);
        if ( sort )
        {
          klass = (System_Func_int__bool__o *)v165->klass;
          preLoadCategoryIdList = (System_Collections_Generic_IEnumerable_TSource__o *)sort;
          if ( !v165->klass )
          {
            klass = (System_Func_int__bool__o *)sub_1C93D20(System_Func_int__bool__TypeInfo);
            System_Func_int__bool____ctor(
              klass,
              (Il2CppObject *)v132,
              Method_EquipGraphListViewManager___c__DisplayClass66_1__CreateList_b__6__,
              0);
            *(_QWORD *)(v132 + 56) = klass;
            sub_1C93A78(v165, (int32_t)klass, v174, v175, v176, v177, v178, v179);
          }
          sort = System_Linq_Enumerable__All_int_(
                   preLoadCategoryIdList,
                   (System_Func_TSource__bool__o *)klass,
                   (const MethodInfo_31AE9F4 *)Method_System_Linq_Enumerable_All_int___);
          if ( (sort & 1) != 0 )
          {
            sort = (__int64)*p_servantItemInfo;
            if ( !*p_servantItemInfo )
              goto LABEL_151;
            v180 = v163;
            v181 = v132;
            v182 = EquipGraphServantItem__get_EquipUserSvtId((EquipGraphServantItem_o *)sort, 0);
            v183 = (int32_t)object[1].monitor;
            v184 = v182;
            v247 = this->fields.memberIndex;
            v185 = (EquipGraphListViewItem_o *)sub_1C93D20(EquipGraphListViewItem_TypeInfo);
            EquipGraphListViewItem___ctor(
              v185,
              v248,
              (UserServantEntity_o *)v166,
              v184,
              v251,
              v250,
              setupInfoa,
              v247,
              (System_Int32_array *)preLoadCategoryIdList,
              v183,
              v244);
            if ( !v131 )
              goto LABEL_151;
            v192 = v131->fields._items;
            v193 = Method_System_Collections_Generic_List_EquipGraphListViewItem__Add__;
            ++v131->fields._version;
            if ( !v192 )
              goto LABEL_151;
            v194 = v131->fields._size;
            v132 = v181;
            v163 = v180;
            if ( (unsigned int)v194 >= LODWORD(v192->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v131,
                (Il2CppObject *)v185,
                *(const MethodInfo_387999C **)(*(_QWORD *)(v193[4] + 192LL) + 112LL));
            }
            else
            {
              v195 = &v192->obj.klass + v194;
              v131->fields._size = v194 + 1;
              v195[4] = (Il2CppClass *)v185;
              sub_1C93A78((GrandQuestFolderBoardItem_o *)(v195 + 4), (int32_t)v185, v186, v187, v188, v189, v190, v191);
            }
            v165 = v245;
            v125 = v246;
            ++v248;
          }
        }
      }
      v162 = (int)v125[1].monitor;
      if ( (int)++v164 >= v162 )
        goto LABEL_141;
    }
LABEL_152:
    sub_1C93D34(sort);
  }
}


void EquipGraphListViewManager__CreateList_41690924(
        EquipGraphListViewManager_o *this,
        WarBoardPartyListViewItem_o *partyItem,
        int32_t member,
        EventUpValSetupInfo_o *setupInfo,
        const MethodInfo *method)
{
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  EquipGraphListViewManager_c *v12; // x0
  struct ListViewSort_o *warBoardSortStatus; // x1
  struct ListViewSort_o **p_sort; // x22
  __int64 v15; // x1
  __int64 sort; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  _BOOL4 isQuestStart; // w8
  struct ListViewSort_BonusFilterInfo_array *AlignedBonusFilter; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  struct ListViewSort_o *v33; // x21
  bool v34; // w8
  struct PartyOrganizationListViewItem_o *MemberItem; // x0
  int32_t v36; // w2
  int32_t v37; // w3
  System_String_o *v38; // x4
  int32_t v39; // w5
  int64_t v40; // x6
  System_String_o *v41; // x7
  struct PartyOrganizationListViewItem_o *baseItem; // x23
  EquipGraphServantItem_o *v43; // x24
  int32_t v44; // w2
  int32_t v45; // w3
  System_String_o *v46; // x4
  int32_t v47; // w5
  int64_t v48; // x6
  System_String_o *v49; // x7
  EquipGraphServantItem_o *servantItemInfo; // x24
  UserGameEntity_o *SelfUserGame; // x25
  int32_t cost; // w21
  UserServantEntity_array *ServantEquipList; // x0
  UnityEngine_Object_o *infoDataLabel; // x26
  UserServantEntity_array *v55; // x24
  UILabel_o *v56; // x26
  System_String_o *v57; // x27
  Il2CppObject *v58; // x28
  Il2CppObject *v59; // x0
  il2cpp_array_size_t v60; // x8
  unsigned __int64 v61; // x22
  UserServantEntity_o *v62; // x26
  int64_t EquipUserSvtId; // x27
  EquipGraphListViewItem_o *v64; // x25
  const MethodInfo *v65; // x6
  int32_t v66; // w2
  int32_t v67; // w3
  System_String_o *v68; // x4
  int32_t v69; // w5
  int64_t v70; // x6
  System_String_o *v71; // x7
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
  struct EquipGraphServantItem_o **p_servantItemInfo; // [xsp+0h] [xbp-70h]
  int32_t svtEquipKeep; // [xsp+8h] [xbp-68h] BYREF
  int max_length; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4D2FEB0 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C93AD4(&EquipGraphListViewItem_TypeInfo);
    sub_1C93AD4(&EquipGraphListViewManager_TypeInfo);
    sub_1C93AD4(&EquipGraphServantItem_TypeInfo);
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&StringLiteral_11695/*"SERVANT_EQUIP_EMPTY"*/);
    sub_1C93AD4(&StringLiteral_11895/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/);
    sub_1C93AD4(&StringLiteral_12573/*"SUM_INFO"*/);
    byte_4D2FEB0 = 1;
  }
  v12 = EquipGraphListViewManager_TypeInfo;
  if ( !EquipGraphListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EquipGraphListViewManager_TypeInfo);
    v12 = EquipGraphListViewManager_TypeInfo;
  }
  warBoardSortStatus = v12->static_fields->warBoardSortStatus;
  this->fields.sort = warBoardSortStatus;
  p_sort = &this->fields.sort;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.sort,
    (int32_t)warBoardSortStatus,
    member,
    (int32_t)setupInfo,
    (System_String_o *)method,
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
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.seed, (int32_t)normalSizeSeed, v17, v18, v19, v20, v21, v22);
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
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields.alignedBonusFilterInfos,
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
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.alignedBonusFilterInfos, 0, v17, v18, v19, v20, v21, v22);
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
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.baseItem, (int32_t)MemberItem, v36, v37, v38, v39, v40, v41);
  baseItem = this->fields.baseItem;
  if ( !baseItem )
    goto LABEL_63;
  if ( !baseItem->fields.isFollower )
  {
    v43 = (EquipGraphServantItem_o *)sub_1C93D20(EquipGraphServantItem_TypeInfo);
    EquipGraphServantItem___ctor(v43, baseItem, 0, 0, 0);
    this->fields.servantItemInfo = v43;
    p_servantItemInfo = &this->fields.servantItemInfo;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields.servantItemInfo,
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
    sort = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !sort )
      goto LABEL_63;
    sort = (__int64)DataManager__GetMasterData_object_(
                      (DataManager_o *)sort,
                      (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !sort )
      goto LABEL_63;
    ServantEquipList = UserServantMaster__getServantEquipList((UserServantMaster_o *)sort, 0);
    infoDataLabel = (UnityEngine_Object_o *)this->fields.infoDataLabel;
    v55 = ServantEquipList;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(infoDataLabel, 0, 0) )
    {
      v56 = this->fields.infoDataLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      sort = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12573/*"SUM_INFO"*/, 0);
      if ( !v55 )
        goto LABEL_63;
      v57 = (System_String_o *)sort;
      max_length = v55->max_length;
      sort = j_il2cpp_value_box_0(int_TypeInfo, &max_length);
      if ( !SelfUserGame )
        goto LABEL_63;
      v58 = (Il2CppObject *)sort;
      svtEquipKeep = SelfUserGame->fields.svtEquipKeep;
      v59 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtEquipKeep);
      sort = (__int64)System_String__Format_64467032(v57, v58, v59, 0);
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
    if ( !v55 )
      goto LABEL_63;
    v60 = v55->max_length;
    if ( (int)v60 >= 1 )
    {
      v61 = 0;
      while ( 1 )
      {
        if ( v61 >= (unsigned int)v60 )
          sub_1C93D34(sort);
        sort = (__int64)*p_servantItemInfo;
        if ( !*p_servantItemInfo )
          break;
        v62 = v55->m_Items[v61];
        EquipUserSvtId = EquipGraphServantItem__get_EquipUserSvtId((EquipGraphServantItem_o *)sort, 0);
        v64 = (EquipGraphListViewItem_o *)sub_1C93D20(EquipGraphListViewItem_TypeInfo);
        EquipGraphListViewItem___ctor_41715268(v64, v61, v62, EquipUserSvtId, partyItem, setupInfo, v65);
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
            *(const MethodInfo_387999C **)(*(_QWORD *)(v73[4] + 192LL) + 112LL));
        }
        else
        {
          v75 = v72 + 8 * v74;
          *(_DWORD *)(sort + 24) = v74 + 1;
          *(_QWORD *)(v75 + 32) = v64;
          sub_1C93A78((GrandQuestFolderBoardItem_o *)(v75 + 32), (int32_t)v64, v66, v67, v68, v69, v70, v71);
        }
        LODWORD(v60) = v55->max_length;
        if ( (__int64)++v61 >= (int)v60 )
          goto LABEL_54;
      }
LABEL_63:
      sub_1C93D2C(sort, v15);
    }
LABEL_54:
    itemList = this->fields.itemList;
    if ( !itemList )
      goto LABEL_63;
    emptyMessageLabel = this->fields.emptyMessageLabel;
    v78 = (System_String_o **)(itemList->fields._size <= 0 ? &StringLiteral_11695/*"SERVANT_EQUIP_EMPTY"*/ : &StringLiteral_11895/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/);
    v79 = *v78;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
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

  if ( (byte_4D2FEAB & 1) == 0 )
  {
    sub_1C93AD4(&EquipGraphListViewManager_TypeInfo);
    byte_4D2FEAB = 1;
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
    sub_1C93D2C(sortStatus, v1);
  }
  ListViewSort__DeleteContinueData(sortStatus, 0);
}


void EquipGraphListViewManager__DestroyList(EquipGraphListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewSort_o *sort; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7

  ListViewManager__DestroyList((ListViewManager_o *)this, 0);
  sort = this->fields.sort;
  if ( !sort )
    sub_1C93D2C(0, v3);
  ListViewSort__Save(sort, 0);
  this->fields.alignedBonusFilterInfos = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.alignedBonusFilterInfos, 0, v5, v6, v7, v8, v9, v10);
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
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  struct EquipGraphListViewItem_o *selectItem; // x8
  int64_t EquipUserSvtId; // x20
  struct PartyListViewItem_array *v15; // x8
  int v16; // w9
  PartyListViewItem_o *v17; // x21
  struct PartyListViewItem_array *v18; // x8
  int v19; // w9
  struct EquipGraphListViewItem_o *v20; // x10
  struct UserServantEntity_o *userSvtEntity; // x10
  int32_t memberIndex; // w21
  __int128 v23; // q1
  PartyListViewItem_o *v24; // x20
  _BOOL8 v25; // x0
  __int64 v26; // x1
  const MethodInfo *v27; // x4
  Il2CppObject *v28; // x21
  __int64 v29; // x10
  UnityEngine_Object_o *v30; // x22
  _BOOL8 v31; // x0
  __int64 v32; // x1
  Il2CppClass *v33; // x8
  __int64 v34; // x11
  struct EquipGraphListViewItem_o *v35; // x8
  struct ServantEntity_o *v36; // x9
  _BOOL8 v37; // x0
  const MethodInfo *v38; // x1
  Il2CppObject *current; // x20
  __int64 naturalAligment; // x10
  System_Collections_Generic_List_object__o *klass; // x21
  System_Action_object__o *v42; // x22
  __int64 v43; // x0
  __int64 v44; // x1
  UnityEngine_Object_o *v45; // x21
  _BOOL8 v46; // x0
  __int64 v47; // x1
  Il2CppClass *v48; // x8
  __int64 v49; // x11
  struct EquipGraphListViewItem_o *v50; // x8
  System_Collections_Generic_List_object__o *wearerMemberInfoList; // x20
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
  UnityEngine_Object_o *viewObject; // x20
  struct EquipGraphListViewItem_o *v65; // x8
  __int64 v66; // x10
  struct System_Action_o *selectItemCallbackFunc; // x20
  struct PartyListViewItem_array *waveDeckItemList; // x25
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v70; // x26
  PartyListViewItem_o *v71; // x20
  int32_t i; // w21
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

  if ( (byte_4D2FEBD & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_EquipGraphListViewItem_WearerMemberInfo__TypeInfo);
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    sub_1C93AD4(&Method_BasicHelper_Any_EquipGraphListViewItem_WearerMemberInfo___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C93AD4(&EquipGraphListViewItem_TypeInfo);
    sub_1C93AD4(&Method_EquipGraphListViewManager__EndSelectConfirm_b__88_0__);
    sub_1C93AD4(&Method_EquipGraphListViewManager__EndSelectConfirm_b__88_1__);
    sub_1C93AD4(&Method_EquipGraphListViewManager__EndSelectConfirm_b__88_2__);
    sub_1C93AD4(&EquipGraphListViewObject_TypeInfo);
    sub_1C93AD4(&System_Func_EquipGraphListViewItem_WearerMemberInfo__bool__TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo__ForEach__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D2FEBD = 1;
  }
  memset(&v83, 0, sizeof(v83));
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
      (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v83 = *(System_Collections_Generic_List_Enumerator_object__o *)&v82.fields.currentCryptoKey;
    while ( 1 )
    {
      v37 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v83,
              (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v37 )
        break;
      current = v83.fields._current;
      if ( !v83.fields._current
        || (naturalAligment = EquipGraphListViewItem_TypeInfo->_2.naturalAligment,
            v83.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment)
        || (EquipGraphListViewItem_c *)v83.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != EquipGraphListViewItem_TypeInfo )
      {
        sub_1C93D2C(v37, v38);
      }
      if ( BYTE1(v83.fields._current[9].monitor) )
      {
        BYTE1(v83.fields._current[9].monitor) = 0;
        if ( EquipGraphListViewItem__get_IsUse((EquipGraphListViewItem_o *)current, v38) )
        {
          klass = (System_Collections_Generic_List_object__o *)current[17].klass;
          v42 = (System_Action_object__o *)sub_1C93D20(System_Action_EquipGraphListViewItem_WearerMemberInfo__TypeInfo);
          System_Action_object____ctor(
            v42,
            (Il2CppObject *)this,
            Method_EquipGraphListViewManager__EndSelectConfirm_b__88_2__,
            0);
          if ( !klass )
            sub_1C93D2C(v43, v44);
          System_Collections_Generic_List_object___ForEach(
            klass,
            (System_Action_T__o *)v42,
            (const MethodInfo_387A3DC *)Method_System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo__ForEach__);
          v45 = (UnityEngine_Object_o *)current[7].klass;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          v46 = UnityEngine_Object__op_Inequality(v45, 0, 0);
          if ( v46 )
          {
            v48 = current[7].klass;
            if ( !v48
              || (v49 = EquipGraphListViewObject_TypeInfo->_2.naturalAligment,
                  *((unsigned __int8 *)v48->_1.image + 304) < (unsigned int)v49)
              || *(EquipGraphListViewObject_c **)(*((_QWORD *)v48->_1.image + 25) + 8 * v49 - 8) != EquipGraphListViewObject_TypeInfo )
            {
              sub_1C93D2C(v46, v47);
            }
            EquipGraphListViewObject__Init_42868720((EquipGraphListViewObject_o *)current[7].klass, 4, 0, 0);
          }
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v83,
      (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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
          v71 = waveDeckItemList->m_Items[v70];
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
            if ( !v71 )
              goto LABEL_109;
            Instance = (int64_t)PartyListViewItem__GetMember(v71, i, 0);
            v73 = this->fields.selectItem;
            if ( !v73 )
              goto LABEL_109;
            servantEntity = v73->fields.servantEntity;
            if ( !servantEntity )
              goto LABEL_109;
            v75 = (PartyOrganizationListViewItem_o *)Instance;
            v77 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
            v76 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v84.fields.currentCryptoKey = v77;
            *(_QWORD *)&v84.fields.fakeValue = v76;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v84, 0);
            if ( !v75 )
              goto LABEL_109;
            v78 = Instance;
            EquipSvtId = PartyOrganizationListViewItem__get_EquipSvtId(v75, 0);
            if ( v78 == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(EquipSvtId, 0) )
              PartyListViewItem__SetEquip(v71, i, 0, 0, 0);
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
      sub_1C93D2C(Instance, v6);
    v16 = *(_DWORD *)(Instance + 224) - 1;
    if ( (unsigned int)v16 >= LODWORD(v15->max_length) )
LABEL_114:
      sub_1C93D34(Instance);
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
  memberIndex = this->fields.memberIndex;
  v23 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  v24 = v18->m_Items[v19];
  *(_OWORD *)&v82.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v82.fields.fakeValue = v23;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v81 = v82;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(&v81, 0);
  if ( !v24 )
    goto LABEL_109;
  PartyListViewItem__SetEquip(v24, memberIndex, Instance, 0, 0);
  Instance = (int64_t)this->fields.itemList;
  if ( !Instance )
    goto LABEL_109;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v80,
    (System_Collections_Generic_List_object__o *)Instance,
    (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v83 = v80;
  while ( 1 )
  {
    v25 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v83,
            (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v25 )
      break;
    v28 = v83.fields._current;
    if ( !v83.fields._current
      || (v29 = EquipGraphListViewItem_TypeInfo->_2.naturalAligment,
          v83.fields._current->klass->_2.naturalAligment < (unsigned int)v29)
      || (EquipGraphListViewItem_c *)v83.fields._current->klass->_2.typeHierarchy[v29 - 1] != EquipGraphListViewItem_TypeInfo )
    {
      sub_1C93D2C(v25, v26);
    }
    if ( BYTE1(v83.fields._current[9].monitor) )
      LOWORD(v83.fields._current[9].monitor) = 0;
    EquipGraphListViewItem__UpdateWaveBattleInfo(
      (EquipGraphListViewItem_o *)v28,
      this->fields.waveDeckItemList,
      v24,
      this->fields.memberIndex,
      v27);
    v30 = (UnityEngine_Object_o *)v28[7].klass;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v31 = UnityEngine_Object__op_Inequality(v30, 0, 0);
    if ( v31 )
    {
      v33 = v28[7].klass;
      if ( !v33
        || (v34 = EquipGraphListViewObject_TypeInfo->_2.naturalAligment,
            *((unsigned __int8 *)v33->_1.image + 304) < (unsigned int)v34)
        || *(EquipGraphListViewObject_c **)(*((_QWORD *)v33->_1.image + 25) + 8 * v34 - 8) != EquipGraphListViewObject_TypeInfo )
      {
        sub_1C93D2C(v31, v32);
      }
      EquipGraphListViewObject__Init_42868720((EquipGraphListViewObject_o *)v28[7].klass, 4, 0, 0);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v83,
    (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  v35 = this->fields.selectItem;
  if ( !v35 )
    goto LABEL_109;
  v36 = v35->fields.servantEntity;
  if ( v36 )
    LODWORD(v36) = v36->fields.cost;
  this->fields.baseCost = v24->fields.cost - (_DWORD)v36;
LABEL_61:
  v50 = this->fields.selectItem;
  if ( !v50 )
    goto LABEL_109;
  wearerMemberInfoList = (System_Collections_Generic_List_object__o *)v50->fields.wearerMemberInfoList;
  v50->fields.isBase = 1;
  v52 = (System_Action_object__o *)sub_1C93D20(System_Action_EquipGraphListViewItem_WearerMemberInfo__TypeInfo);
  System_Action_object____ctor(
    v52,
    (Il2CppObject *)this,
    Method_EquipGraphListViewManager__EndSelectConfirm_b__88_0__,
    0);
  if ( !wearerMemberInfoList )
    goto LABEL_109;
  System_Collections_Generic_List_object___ForEach(
    wearerMemberInfoList,
    (System_Action_T__o *)v52,
    (const MethodInfo_387A3DC *)Method_System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo__ForEach__);
  v53 = this->fields.selectItem;
  if ( !v53 )
    goto LABEL_109;
  v54 = (System_Collections_Generic_List_T__o *)v53->fields.wearerMemberInfoList;
  v55 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_EquipGraphListViewItem_WearerMemberInfo__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v55,
    (Il2CppObject *)this,
    Method_EquipGraphListViewManager__EndSelectConfirm_b__88_1__,
    0);
  Instance = BasicHelper__Any_object_(
               v54,
               (System_Func_T__bool__o *)v55,
               (const MethodInfo_318DB78 *)Method_BasicHelper_Any_EquipGraphListViewItem_WearerMemberInfo___);
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
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v79 = v82;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(&v79, 0);
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
  viewObject = (UnityEngine_Object_o *)v63->fields.viewObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = UnityEngine_Object__op_Inequality(viewObject, 0, 0);
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
  EquipGraphListViewObject__Init_42868720((EquipGraphListViewObject_o *)Instance, 4, 1, 0);
LABEL_85:
  EquipGraphListViewManager__RefrashListDisp(this, v6);
LABEL_86:
  selectItemCallbackFunc = this->fields.selectItemCallbackFunc;
  if ( selectItemCallbackFunc )
  {
    this->fields.selectItemCallbackFunc = 0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.selectItemCallbackFunc, 0, v7, v8, v9, v10, v11, v12);
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

  if ( (byte_4D2FEBF & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_EquipGraphListViewManager_EndCloseSelectFilterKind__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D2FEBF = 1;
  }
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
    EquipGraphListViewManager__SetFilterButtonImage(this, v5);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_EquipGraphListViewManager_EndCloseSelectFilterKind__, 0);
  if ( !Instance )
    sub_1C93D2C(v8, v9);
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

  if ( (byte_4D2FEC3 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_EquipGraphListViewManager_EndCloseSelectSortKind__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D2FEC3 = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_EquipGraphListViewManager_EndCloseSelectSortKind__, 0);
  if ( !Instance )
    sub_1C93D2C(v7, v8);
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

  if ( (byte_4D2FEC6 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C93AD4(&EquipGraphListViewItem_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4D2FEC6 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_1C93D2C(0, *(_QWORD *)&svtId);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v14,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v6 = 0;
  v15 = v14;
  while ( 1 )
  {
    v7 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v15,
           (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v7 )
      break;
    if ( !v15.fields._current
      || (naturalAligment = EquipGraphListViewItem_TypeInfo->_2.naturalAligment,
          v15.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment)
      || (EquipGraphListViewItem_c *)v15.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != EquipGraphListViewItem_TypeInfo )
    {
      sub_1C93D2C(v7, v8);
    }
    monitor = v15.fields._current[7].monitor;
    if ( !monitor )
      sub_1C93D2C(v7, v8);
    v12 = monitor[10];
    v11 = monitor[11];
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v16.fields.currentCryptoKey = v12;
    *(_QWORD *)&v16.fields.fakeValue = v11;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v16, 0) == svtId )
      ++v6;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v15,
    (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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

  if ( (byte_4D2FEC7 & 1) == 0 )
  {
    sub_1C93AD4(&EquipGraphListViewItem_TypeInfo);
    this = (EquipGraphListViewManager_o *)sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_4D2FEC7 = 1;
  }
  *index = -1;
  if ( sum >= 1 )
  {
    if ( !list )
LABEL_14:
      sub_1C93D2C(this, index);
    v8 = 0;
    while ( 1 )
    {
      this = (EquipGraphListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                              (System_Collections_Generic_List_object__o *)list,
                                              v8,
                                              (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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

  if ( (byte_4D2FEB2 & 1) == 0 )
  {
    sub_1C93AD4(&EquipGraphListViewItem_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_4D2FEB2 = 1;
  }
  result = (EquipGraphListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (EquipGraphListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                           (System_Collections_Generic_List_object__o *)result,
                                           index,
                                           (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
    sub_1C93D2C(0, method);
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

  if ( (byte_4D2FEBA & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C93AD4(&EquipGraphListViewItem_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    byte_4D2FEBA = 1;
  }
  memset(&v9, 0, sizeof(v9));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_1C93D2C(0, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v9,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v9,
           (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v4 )
      break;
    if ( !v9.fields._current
      || (naturalAligment = EquipGraphListViewItem_TypeInfo->_2.naturalAligment,
          v9.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment)
      || (EquipGraphListViewItem_c *)v9.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != EquipGraphListViewItem_TypeInfo )
    {
      sub_1C93D2C(v4, v5);
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
    (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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

  if ( (byte_4D2FEBB & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C93AD4(&EquipGraphListViewItem_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    byte_4D2FEBB = 1;
  }
  memset(&v9, 0, sizeof(v9));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_1C93D2C(0, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v9,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v9,
           (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v4 )
      break;
    current = v9.fields._current;
    if ( !v9.fields._current
      || (naturalAligment = EquipGraphListViewItem_TypeInfo->_2.naturalAligment,
          v9.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment)
      || (EquipGraphListViewItem_c *)v9.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != EquipGraphListViewItem_TypeInfo )
    {
      sub_1C93D2C(v4, v5);
    }
    if ( *((_BYTE *)&v9.fields._current->klass + (unsigned __int64)&qword_98 + 1) )
      goto LABEL_12;
  }
  current = 0;
LABEL_12:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v9,
    (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  int64_t itemList; // x0
  int v17; // w25
  int32_t v18; // w24
  __int64 naturalAligment; // x10
  __int64 v20; // x8
  __int128 v21; // q0
  struct System_Int64_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x8
  __int128 v26; // q0
  struct System_Int64_array *v27; // x8
  _QWORD *v28; // x9
  __int64 v29; // x10
  __int64 v30; // x8
  System_Collections_Generic_List_long__o *v31; // x0
  int v32; // w21
  System_Int64_array *v33; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  System_Int64_array *v40; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *v43; // x4
  int32_t v44; // w5
  int64_t v45; // x6
  System_String_o *v46; // x7
  int32_t v47; // w1
  System_Int64_array **v48; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v50; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v51; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v52; // [xsp+40h] [xbp-80h]

  if ( (byte_4D2FEB4 & 1) == 0 )
  {
    sub_1C93AD4(&EquipGraphListViewItem_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C93AD4(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4D2FEB4 = 1;
  }
  v7 = (System_Collections_Generic_List_long__o *)sub_1C93D20(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v7,
    (const MethodInfo_386117C *)Method_System_Collections_Generic_List_long___ctor__);
  v8 = (System_Collections_Generic_List_long__o *)sub_1C93D20(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v8,
    (const MethodInfo_386117C *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = (int64_t)this->fields.itemList;
  if ( !itemList )
    goto LABEL_37;
  v17 = *(_DWORD *)(itemList + 24);
  if ( v17 >= 1 )
  {
    v18 = 0;
    while ( 1 )
    {
      itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)itemList,
                            v18,
                            (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_37;
      naturalAligment = EquipGraphListViewItem_TypeInfo->_2.naturalAligment;
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)naturalAligment
        || *(EquipGraphListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * naturalAligment - 8) != EquipGraphListViewItem_TypeInfo )
      {
        goto LABEL_37;
      }
      v20 = *(_QWORD *)(itemList + 120);
      if ( v20 && *(_BYTE *)(itemList + 185) )
      {
        if ( *(_BYTE *)(itemList + 155) )
        {
          v21 = *(_OWORD *)(v20 + 32);
          *(_OWORD *)&v52.fields.currentCryptoKey = *(_OWORD *)(v20 + 16);
          *(_OWORD *)&v52.fields.fakeValue = v21;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v51 = v52;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(&v51, 0);
          if ( !v8 )
            goto LABEL_37;
          items = v8->fields._items;
          v23 = Method_System_Collections_Generic_List_long__Add__;
          ++v8->fields._version;
          if ( !items )
            goto LABEL_37;
          size = v8->fields._size;
          v9 = itemList;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            v30 = v23[4];
            v31 = v8;
LABEL_27:
            System_Collections_Generic_List_long___AddWithResize(
              v31,
              v9,
              *(const MethodInfo_38619D0 **)(*(_QWORD *)(v30 + 192) + 112LL));
            goto LABEL_28;
          }
          v25 = &items->obj.klass + size;
          v8->fields._size = size + 1;
        }
        else
        {
          v26 = *(_OWORD *)(v20 + 32);
          *(_OWORD *)&v52.fields.currentCryptoKey = *(_OWORD *)(v20 + 16);
          *(_OWORD *)&v52.fields.fakeValue = v26;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v50 = v52;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(&v50, 0);
          if ( !v7 )
            goto LABEL_37;
          v27 = v7->fields._items;
          v28 = Method_System_Collections_Generic_List_long__Add__;
          ++v7->fields._version;
          if ( !v27 )
            goto LABEL_37;
          v29 = v7->fields._size;
          v9 = itemList;
          if ( (unsigned int)v29 >= LODWORD(v27->max_length) )
          {
            v30 = v28[4];
            v31 = v7;
            goto LABEL_27;
          }
          v25 = &v27->obj.klass + v29;
          v7->fields._size = v29 + 1;
        }
        v25[4] = (Il2CppClass *)v9;
      }
LABEL_28:
      if ( v17 == ++v18 )
        break;
      itemList = (int64_t)this->fields.itemList;
      if ( !itemList )
        goto LABEL_37;
    }
  }
  if ( !v7 || !v8 )
LABEL_37:
    sub_1C93D2C(itemList, v9);
  v32 = v8->fields._size + v7->fields._size;
  if ( v32 < 1 )
  {
    *choiceList = 0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)choiceList, 0, v10, v11, v12, v13, v14, v15);
    v48 = unchoiceList;
    v47 = 0;
    *unchoiceList = 0;
  }
  else
  {
    v33 = System_Collections_Generic_List_long___ToArray(
            v7,
            (const MethodInfo_3863488 *)Method_System_Collections_Generic_List_long__ToArray__);
    *choiceList = v33;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)choiceList, (int32_t)v33, v34, v35, v36, v37, v38, v39);
    v40 = System_Collections_Generic_List_long___ToArray(
            v8,
            (const MethodInfo_3863488 *)Method_System_Collections_Generic_List_long__ToArray__);
    v47 = (int)v40;
    *unchoiceList = v40;
    v48 = unchoiceList;
  }
  sub_1C93A78((GrandQuestFolderBoardItem_o *)v48, v47, v41, v42, v43, v44, v45, v46);
  return v32 > 0;
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
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  int64_t itemList; // x0
  int v17; // w25
  int32_t v18; // w24
  __int64 naturalAligment; // x10
  __int64 v20; // x8
  __int128 v21; // q0
  struct System_Int64_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x8
  __int128 v26; // q0
  struct System_Int64_array *v27; // x8
  _QWORD *v28; // x9
  __int64 v29; // x10
  __int64 v30; // x8
  System_Collections_Generic_List_long__o *v31; // x0
  int v32; // w21
  System_Int64_array *v33; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  System_Int64_array *v40; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *v43; // x4
  int32_t v44; // w5
  int64_t v45; // x6
  System_String_o *v46; // x7
  int32_t v47; // w1
  System_Int64_array **v48; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v50; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v51; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v52; // [xsp+40h] [xbp-80h]

  if ( (byte_4D2FEB3 & 1) == 0 )
  {
    sub_1C93AD4(&EquipGraphListViewItem_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C93AD4(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4D2FEB3 = 1;
  }
  v7 = (System_Collections_Generic_List_long__o *)sub_1C93D20(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v7,
    (const MethodInfo_386117C *)Method_System_Collections_Generic_List_long___ctor__);
  v8 = (System_Collections_Generic_List_long__o *)sub_1C93D20(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v8,
    (const MethodInfo_386117C *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = (int64_t)this->fields.itemList;
  if ( !itemList )
    goto LABEL_37;
  v17 = *(_DWORD *)(itemList + 24);
  if ( v17 >= 1 )
  {
    v18 = 0;
    while ( 1 )
    {
      itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)itemList,
                            v18,
                            (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_37;
      naturalAligment = EquipGraphListViewItem_TypeInfo->_2.naturalAligment;
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)naturalAligment
        || *(EquipGraphListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * naturalAligment - 8) != EquipGraphListViewItem_TypeInfo )
      {
        goto LABEL_37;
      }
      v20 = *(_QWORD *)(itemList + 120);
      if ( v20 && *(_BYTE *)(itemList + 184) )
      {
        if ( *(_BYTE *)(itemList + 154) )
        {
          v21 = *(_OWORD *)(v20 + 32);
          *(_OWORD *)&v52.fields.currentCryptoKey = *(_OWORD *)(v20 + 16);
          *(_OWORD *)&v52.fields.fakeValue = v21;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v51 = v52;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(&v51, 0);
          if ( !v8 )
            goto LABEL_37;
          items = v8->fields._items;
          v23 = Method_System_Collections_Generic_List_long__Add__;
          ++v8->fields._version;
          if ( !items )
            goto LABEL_37;
          size = v8->fields._size;
          v9 = itemList;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            v30 = v23[4];
            v31 = v8;
LABEL_27:
            System_Collections_Generic_List_long___AddWithResize(
              v31,
              v9,
              *(const MethodInfo_38619D0 **)(*(_QWORD *)(v30 + 192) + 112LL));
            goto LABEL_28;
          }
          v25 = &items->obj.klass + size;
          v8->fields._size = size + 1;
        }
        else
        {
          v26 = *(_OWORD *)(v20 + 32);
          *(_OWORD *)&v52.fields.currentCryptoKey = *(_OWORD *)(v20 + 16);
          *(_OWORD *)&v52.fields.fakeValue = v26;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v50 = v52;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(&v50, 0);
          if ( !v7 )
            goto LABEL_37;
          v27 = v7->fields._items;
          v28 = Method_System_Collections_Generic_List_long__Add__;
          ++v7->fields._version;
          if ( !v27 )
            goto LABEL_37;
          v29 = v7->fields._size;
          v9 = itemList;
          if ( (unsigned int)v29 >= LODWORD(v27->max_length) )
          {
            v30 = v28[4];
            v31 = v7;
            goto LABEL_27;
          }
          v25 = &v27->obj.klass + v29;
          v7->fields._size = v29 + 1;
        }
        v25[4] = (Il2CppClass *)v9;
      }
LABEL_28:
      if ( v17 == ++v18 )
        break;
      itemList = (int64_t)this->fields.itemList;
      if ( !itemList )
        goto LABEL_37;
    }
  }
  if ( !v7 || !v8 )
LABEL_37:
    sub_1C93D2C(itemList, v9);
  v32 = v8->fields._size + v7->fields._size;
  if ( v32 < 1 )
  {
    *lockList = 0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)lockList, 0, v10, v11, v12, v13, v14, v15);
    v48 = unlockList;
    v47 = 0;
    *unlockList = 0;
  }
  else
  {
    v33 = System_Collections_Generic_List_long___ToArray(
            v7,
            (const MethodInfo_3863488 *)Method_System_Collections_Generic_List_long__ToArray__);
    *lockList = v33;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)lockList, (int32_t)v33, v34, v35, v36, v37, v38, v39);
    v40 = System_Collections_Generic_List_long___ToArray(
            v8,
            (const MethodInfo_3863488 *)Method_System_Collections_Generic_List_long__ToArray__);
    v47 = (int)v40;
    *unlockList = v40;
    v48 = unlockList;
  }
  sub_1C93A78((GrandQuestFolderBoardItem_o *)v48, v47, v41, v42, v43, v44, v45, v46);
  return v32 > 0;
}


void EquipGraphListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  EquipGraphListViewManager_c *v2; // x0
  ListViewSort_o *sortStatus; // x0

  if ( (byte_4D2FEAC & 1) == 0 )
  {
    sub_1C93AD4(&EquipGraphListViewManager_TypeInfo);
    byte_4D2FEAC = 1;
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
    sub_1C93D2C(sortStatus, v1);
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
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  struct System_Threading_SynchronizationContext_o *v27; // x1
  const MethodInfo *v28; // x1
  int32_t v29; // w20
  Il2CppObject *Item; // x0
  ListViewItem_o *v31; // x21
  __int64 v32; // x10
  UnityEngine_Object_o *klass; // x22
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // [xsp+10h] [xbp-D0h]
  DataManager_o *v36; // [xsp+18h] [xbp-C8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v37; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+40h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+60h] [xbp-80h]

  if ( (byte_4D2FEB1 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C93AD4(&EquipGraphListViewItem_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2FEB1 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_44;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_UserServantMaster___);
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
    v36 = Instance;
    while ( 1 )
    {
      v9 = &Instance->klass + (int)v8;
      v12 = v9[4];
      v11 = (struct System_Threading_SynchronizationContext_o **)(v9 + 4);
      v10 = v12;
      if ( !v12 )
        break;
      byval_arg = v10->_1.byval_arg;
      *(_OWORD *)&v39.fields.currentCryptoKey = *(_OWORD *)&v10->_1.name;
      *(Il2CppType *)&v39.fields.fakeValue = byval_arg;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v38 = v39;
      v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(&v38, 0);
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
                                        (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
            *(_OWORD *)&v39.fields.currentCryptoKey = *(_OWORD *)&context->fields._props;
            *(_OWORD *)&v39.fields.fakeValue = v20;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v37 = v39;
            Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(&v37, 0);
            if ( Instance == v15 )
              break;
          }
          if ( size == ++v16 )
            goto LABEL_27;
        }
        if ( v8 >= LODWORD(v36->fields.m_CancellationTokenSource) )
          goto LABEL_29;
        v27 = *v11;
        v17->fields.context = *v11;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)&v17->fields.context, (int32_t)v27, v21, v22, v23, v24, v25, v26);
        if ( !isIconSizeChange )
        {
          EquipGraphListViewItem__ModifyLockItem((EquipGraphListViewItem_o *)v17, v5);
          EquipGraphListViewItem__ModifyChoiceItem((EquipGraphListViewItem_o *)v17, v28);
        }
      }
LABEL_27:
      Instance = v36;
      if ( ++v8 == (_DWORD)m_CancellationTokenSource )
        goto LABEL_30;
      if ( v8 >= LODWORD(v36->fields.m_CancellationTokenSource) )
LABEL_29:
        sub_1C93D34(Instance);
    }
LABEL_44:
    sub_1C93D2C(Instance, v5);
  }
LABEL_30:
  if ( size >= 1 && isIconSizeChange )
  {
    v29 = 0;
    while ( 1 )
    {
      Instance = (DataManager_o *)this->fields.itemList;
      if ( !Instance )
        goto LABEL_44;
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)Instance,
               v29,
               (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( Item )
      {
        v31 = (ListViewItem_o *)Item;
        v32 = EquipGraphListViewItem_TypeInfo->_2.naturalAligment;
        if ( Item->klass->_2.naturalAligment >= (unsigned int)v32
          && (EquipGraphListViewItem_c *)Item->klass->_2.typeHierarchy[v32 - 1] == EquipGraphListViewItem_TypeInfo )
        {
          klass = (UnityEngine_Object_o *)Item[7].klass;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( !UnityEngine_Object__op_Equality(klass, 0, 0) )
          {
            Instance = (DataManager_o *)v31->fields.viewObject;
            if ( !Instance )
              goto LABEL_44;
            ListViewObject__SetItemSeed((ListViewObject_o *)Instance, v31, this->fields.seed, 0);
          }
        }
      }
      if ( size == ++v29 )
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

  if ( (byte_4D2FEC1 & 1) == 0 )
  {
    sub_1C93AD4(&Method_EquipGraphListViewManager_OnClickBonusFilterKind__);
    byte_4D2FEC1 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_EquipGraphListViewManager_OnClickBonusFilterKind__;
    if ( (*((_BYTE *)Method_EquipGraphListViewManager_OnClickBonusFilterKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_EquipGraphListViewManager_OnClickBonusFilterKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    sort = this->fields.sort;
    if ( !sort )
      sub_1C93D2C(0, v5);
    ListViewSort__IncrementBonusFilter(sort, this->fields.alignedBonusFilterInfos, this->fields.isQuestStart, 0, 0);
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  }
}


void EquipGraphListViewManager__OnClickDecide(EquipGraphListViewManager_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct EquipGraphListViewManager_CallbackFunc_o *callbackFunc; // x20
  const MethodInfo *v10; // x1
  unsigned int Select; // w0

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc, 0, v2, v3, v4, v5, v6, v7);
  if ( callbackFunc )
  {
    Select = EquipGraphListViewManager__GetSelect(this, v10);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct EquipGraphListMenu_o *equipGraphListMenu; // x8
  struct EquipGraphListViewManager_CallbackFunc_o *callbackFunc; // x20
  const MethodInfo *v11; // x1
  unsigned int Select; // w0

  equipGraphListMenu = this->fields.equipGraphListMenu;
  if ( !equipGraphListMenu )
    sub_1C93D2C(this, method);
  if ( !equipGraphListMenu->fields.modeKind )
  {
    callbackFunc = this->fields.callbackFunc;
    this->fields.callbackFunc = 0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc, 0, v2, v3, v4, v5, v6, v7);
    if ( callbackFunc )
    {
      Select = EquipGraphListViewManager__GetSelect(this, v11);
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

  if ( (byte_4D2FEBE & 1) == 0 )
  {
    sub_1C93AD4(&ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    sub_1C93AD4(&Method_EquipGraphListViewManager_EndSelectFilterKind__);
    sub_1C93AD4(&Method_EquipGraphListViewManager_OnClickFilterKind__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D2FEBE = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_EquipGraphListViewManager_OnClickFilterKind__;
    if ( (*((_BYTE *)Method_EquipGraphListViewManager_OnClickFilterKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_EquipGraphListViewManager_OnClickFilterKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    equipGraphType = this->fields.equipGraphType;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v8 = (CommonUI_o *)Instance;
    v9 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_1C93D20(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    ServantFilterSelectMenu_CallbackFunc___ctor(
      v9,
      (Il2CppObject *)this,
      Method_EquipGraphListViewManager_EndSelectFilterKind__,
      0);
    if ( !v8 )
      sub_1C93D2C(v10, v11);
    if ( equipGraphType == 2 )
      v12 = 16;
    else
      v12 = 5;
    CommonUI__OpenServantFilterSelectMenu_31587716(v8, v12, sort, (ListViewManager_o *)this, v9, -1, 0);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct EquipGraphListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  unsigned int Index; // w0

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc, 0, (int32_t)method, v3, v4, v5, v6, v7);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1C93D2C(v10, v11);
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

  if ( (byte_4D2FEC4 & 1) == 0 )
  {
    sub_1C93AD4(&Method_EquipGraphListViewManager_OnClickSortAscendingOrder__);
    byte_4D2FEC4 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_EquipGraphListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_EquipGraphListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_EquipGraphListViewManager_OnClickSortAscendingOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    sort = this->fields.sort;
    if ( !sort )
      sub_1C93D2C(v5, v6);
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

  if ( (byte_4D2FEC2 & 1) == 0 )
  {
    sub_1C93AD4(&ServantSortSelectMenu_CallbackFunc_TypeInfo);
    sub_1C93AD4(&Method_EquipGraphListViewManager_EndSelectSortKind__);
    sub_1C93AD4(&Method_EquipGraphListViewManager_OnClickSortKind__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D2FEC2 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_EquipGraphListViewManager_OnClickSortKind__;
    if ( (*((_BYTE *)Method_EquipGraphListViewManager_OnClickSortKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_EquipGraphListViewManager_OnClickSortKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v7 = (CommonUI_o *)Instance;
    v8 = (ServantSortSelectMenu_CallbackFunc_o *)sub_1C93D20(ServantSortSelectMenu_CallbackFunc_TypeInfo);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v8,
      (Il2CppObject *)this,
      Method_EquipGraphListViewManager_EndSelectSortKind__,
      0);
    if ( !v7 )
      sub_1C93D2C(v9, v10);
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
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
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
    sub_1C93D2C(this, obj);
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0);
  callbackFunc = v4->fields.callbackFunc;
  v4->fields.callbackFunc = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v4->fields.callbackFunc, 0, v7, v8, v9, v10, v11, v12);
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
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  struct UIScrollView_o *v14; // x0
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_4D2FEB9 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2FEB9 = 1;
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
        v14 = this->fields.scrollView;
        if ( !v14 )
          sub_1C93D2C(0, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, const MethodInfo *))v14->klass->vtable._8_UpdateScrollbars.methodPtr)(
          v14,
          1,
          v14->klass->vtable._8_UpdateScrollbars.method);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc2, 0, v8, v9, v10, v11, v12, v13);
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
  int32_t EquipCost; // w0
  int32_t maxCost; // w23
  int32_t v11; // w20
  BalanceConfig_c *v12; // x8
  int32_t InfinityCostValue; // w24
  int32_t v14; // w22
  float v15; // s0
  float v16; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  BalanceConfig_c *v18; // x0
  int32_t v19; // w23
  Il2CppObject *v20; // x21
  UILabel_o *v21; // x20
  System_String_o **v22; // x8
  System_String_o *v23; // x19
  System_String_o *v24; // x19
  Il2CppObject *v25; // x0
  int32_t v26; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4D2FEB5 & 1) == 0 )
  {
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EquipGraphListViewObject__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EquipGraphListViewObject__get_Item__);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&StringLiteral_12574/*"SUM_OVER_INFO"*/);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    sub_1C93AD4(&StringLiteral_12573/*"SUM_INFO"*/);
    byte_4D2FEB5 = 1;
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
                            (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_EquipGraphListViewObject__get_Item__);
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
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(infoData2Label, 0, 0) )
  {
    ObjectList = (int *)this->fields.servantItemInfo;
    if ( !ObjectList )
      goto LABEL_37;
    baseCost = this->fields.baseCost;
    EquipCost = EquipGraphServantItem__get_EquipCost((EquipGraphServantItem_o *)ObjectList, 0);
    maxCost = this->fields.maxCost;
    v11 = EquipCost;
    v12 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v12 = BalanceConfig_TypeInfo;
    }
    ObjectList = (int *)this->fields.infinityCostLabel;
    if ( !ObjectList )
      goto LABEL_37;
    InfinityCostValue = v12->static_fields->InfinityCostValue;
    ObjectList = (int *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)ObjectList, 0);
    if ( !ObjectList )
      goto LABEL_37;
    v14 = v11 + baseCost;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)ObjectList, maxCost >= InfinityCostValue, 0);
    if ( maxCost >= InfinityCostValue )
    {
      ObjectList = (int *)this->fields.infinityCostLabel;
      if ( !ObjectList )
        goto LABEL_37;
      v15 = 49.0;
      if ( v14 < 10 )
        v15 = 38.0;
      if ( v14 >= 100 )
        v16 = 60.0;
      else
        v16 = v15;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)ObjectList, 0);
      GameObjectExtensions__SetLocalPositionX(gameObject, v16, 0);
    }
    v18 = BalanceConfig_TypeInfo;
    v19 = this->fields.maxCost;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v18 = BalanceConfig_TypeInfo;
    }
    v20 = v19 >= v18->static_fields->InfinityCostValue
        ? (Il2CppObject *)StringLiteral_1/*""*/
        : (Il2CppObject *)System_Int32__ToString((int)this + 504, 0);
    v21 = this->fields.infoData2Label;
    v22 = v14 <= this->fields.maxCost
        ? (System_String_o **)&StringLiteral_12573/*"SUM_INFO"*/
        : (System_String_o **)&StringLiteral_12574/*"SUM_OVER_INFO"*/;
    v23 = *v22;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v24 = LocalizationManager__Get(v23, 0);
    v26 = v14;
    v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v26);
    ObjectList = (int *)System_String__Format_64467032(v24, v25, v20, 0);
    if ( !v21 )
LABEL_37:
      sub_1C93D2C(ObjectList, v4);
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
  Il2CppObject *current; // x21
  System_Action_o *v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4D2FEB7 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__get_Current__);
    sub_1C93AD4(&Method_EquipGraphListViewManager_OnMoveEnd__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EquipGraphListViewObject__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EquipGraphListViewObject__get_Count__);
    sub_1C93AD4(&StringLiteral_9998/*"OnMoveEnd"*/);
    byte_4D2FEB7 = 1;
  }
  memset(&v14, 0, sizeof(v14));
  ObjectList = (System_Collections_Generic_List_object__o *)EquipGraphListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C93D2C(0, v8);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9998/*"OnMoveEnd"*/,
      delay,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v14,
      ObjectList,
      (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_EquipGraphListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v14,
              (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__MoveNext__) )
    {
      current = v14.fields._current;
      v11 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_EquipGraphListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C93D2C(v12, v13);
      EquipGraphListViewObject__Init_42869516((EquipGraphListViewObject_o *)current, mode, v11, delay, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v14,
      (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void EquipGraphListViewManager__RequestListObject_41732396(
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

  if ( (byte_4D2FEB8 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__get_Current__);
    sub_1C93AD4(&Method_EquipGraphListViewManager_OnMoveEnd__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EquipGraphListViewObject__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EquipGraphListViewObject__get_Count__);
    sub_1C93AD4(&StringLiteral_9998/*"OnMoveEnd"*/);
    byte_4D2FEB8 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  ObjectList = (System_Collections_Generic_List_object__o *)EquipGraphListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C93D2C(0, v6);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9998/*"OnMoveEnd"*/,
      0.0,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v12,
      ObjectList,
      (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_EquipGraphListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v12,
              (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__MoveNext__) )
    {
      current = v12.fields._current;
      v9 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_EquipGraphListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C93D2C(v10, v11);
      EquipGraphListViewObject__Init_42869604((EquipGraphListViewObject_o *)current, mode, v9, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v12,
      (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__Dispose__);
  }
}


void EquipGraphListViewManager__SelectEquip(
        EquipGraphListViewManager_o *this,
        EquipGraphListViewItem_o *item,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct EquipGraphListViewItem_o **p_selectItem; // x21
  GrandQuestFolderBoardItem_o *p_selectItemCallbackFunc; // x22
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  const MethodInfo *v19; // x1
  __int64 selectItem; // x0
  int v21; // w25
  EquipGraphListViewObject_o *v22; // x8
  __int64 naturalAligment; // x11
  EquipGraphListViewObject_o *v24; // x24
  _QWORD *v25; // x0
  System_Reflection_MethodBase_o *v26; // x0
  struct PartyListViewItem_array *waveDeckItemList; // x8
  int v28; // w9
  struct EquipGraphListViewItem_o *v29; // x8
  _QWORD *v30; // x0
  _BOOL4 IsClearedWave_k__BackingField; // w20
  System_Reflection_MethodBase_o *v32; // x0
  const MethodInfo *v33; // x2
  struct PartyListViewItem_array *v34; // x8
  int v35; // w9
  PartyListViewItem_o *v36; // x20
  int32_t cost; // w23
  Il2CppObject *Instance; // x20
  System_String_o *v39; // x21
  System_String_o *v40; // x22
  NotificationDialog_ClickDelegate_o *v41; // x23
  System_Collections_Generic_List_object__o *wearerMemberInfoList; // x21
  System_Action_object__o *v43; // x23
  bool v44; // w1
  const MethodInfo *v45; // x1
  int32_t v46; // w2
  int32_t v47; // w3
  System_String_o *v48; // x4
  int32_t v49; // w5
  int64_t v50; // x6
  System_String_o *v51; // x7
  _QWORD *v52; // x0
  _BOOL4 v53; // w20
  int32_t v54; // w2
  int32_t v55; // w3
  System_String_o *v56; // x4
  int32_t v57; // w5
  int64_t v58; // x6
  System_String_o *v59; // x7
  GrandQuestFolderBoardItem_c *klass; // x19
  bool IsUse; // w0
  _QWORD *v62; // x8
  bool v63; // w23
  System_Reflection_MethodBase_o *v64; // x0
  System_Collections_Generic_List_object__o *v65; // x20
  __int64 v66; // x21
  System_String_o *v67; // x20
  System_Object_array *v68; // x22
  int32_t v69; // w2
  int32_t v70; // w3
  System_String_o *v71; // x4
  int32_t v72; // w5
  int64_t v73; // x6
  System_String_o *v74; // x7
  __int64 v75; // x23
  int32_t v76; // w2
  int32_t v77; // w3
  System_String_o *v78; // x4
  int32_t v79; // w5
  int64_t v80; // x6
  System_String_o *v81; // x7
  Il2CppObject *v82; // x23
  int32_t v83; // w2
  int32_t v84; // w3
  System_String_o *v85; // x4
  int32_t v86; // w5
  int64_t v87; // x6
  System_String_o *v88; // x7
  __int64 v89; // x23
  int32_t v90; // w2
  int32_t v91; // w3
  System_String_o *v92; // x4
  int32_t v93; // w5
  int64_t v94; // x6
  System_String_o *v95; // x7
  Il2CppObject *v96; // x23
  struct EquipGraphServantItem_o *v97; // x8
  int32_t rarityId; // w23
  int32_t v99; // w2
  int32_t v100; // w3
  System_String_o *v101; // x4
  int32_t v102; // w5
  int64_t v103; // x6
  System_String_o *v104; // x7
  __int64 v105; // x23
  int32_t v106; // w2
  int32_t v107; // w3
  System_String_o *v108; // x4
  int32_t v109; // w5
  int64_t v110; // x6
  System_String_o *v111; // x7
  __int64 v112; // x21
  System_String_o *v113; // x0
  System_Object_array *v114; // x1
  struct PartyListViewItem_array *v115; // x9
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v117; // x29
  int32_t v118; // w22
  PartyListViewItem_o *v119; // x20
  int32_t v120; // w23
  struct ServantEntity_o *servantEntity; // x8
  PartyOrganizationListViewItem_o *v122; // x24
  __int64 v123; // x25
  __int64 v124; // x26
  int v125; // w25
  ServantEntity_o *v126; // x20
  struct PartyListViewItem_array *v127; // x8
  int v128; // w9
  struct EquipGraphListViewItem_o *v129; // x10
  struct UserServantEntity_o *userSvtEntity; // x10
  int32_t memberIndex; // w23
  __int128 v132; // q1
  PartyListViewItem_o *v133; // x24
  _BOOL8 v134; // x0
  const MethodInfo *v135; // x1
  Il2CppObject *current; // x23
  __int64 v137; // x10
  int monitor_low; // w8
  int v139; // w24
  _BOOL4 v140; // w0
  System_Collections_Generic_List_object__o *v141; // x24
  System_Action_object__o *v142; // x25
  __int64 v143; // x0
  __int64 v144; // x1
  UnityEngine_Object_o *v145; // x24
  _BOOL8 v146; // x0
  __int64 v147; // x1
  Il2CppClass *v148; // x8
  __int64 v149; // x11
  struct EquipGraphListViewItem_o *v150; // x8
  struct UserServantEntity_o *v151; // x9
  __int128 v152; // q1
  EquipGraphServantItem_o *v153; // x21
  EquipGraphListViewItem_WearerMemberInfo_o *WearerMemberInfo; // x22
  System_String_o *v155; // x20
  struct EquipGraphListViewItem_o *v156; // x8
  System_Object_array *v157; // x21
  int32_t v158; // w2
  int32_t v159; // w3
  System_String_o *v160; // x4
  int32_t v161; // w5
  int64_t v162; // x6
  System_String_o *v163; // x7
  Il2CppObject *v164; // x23
  int32_t WearerSvtRarity_k__BackingField; // w23
  int32_t v166; // w2
  int32_t v167; // w3
  System_String_o *v168; // x4
  int32_t v169; // w5
  int64_t v170; // x6
  System_String_o *v171; // x7
  Il2CppObject *v172; // x23
  int32_t v173; // w2
  int32_t v174; // w3
  System_String_o *v175; // x4
  int32_t v176; // w5
  int64_t v177; // x6
  System_String_o *v178; // x7
  Il2CppObject *WearerServantClassName_k__BackingField; // x23
  int32_t v180; // w2
  int32_t v181; // w3
  System_String_o *v182; // x4
  int32_t v183; // w5
  int64_t v184; // x6
  System_String_o *v185; // x7
  Il2CppObject *WearerServantName_k__BackingField; // x22
  int32_t v187; // w2
  int32_t v188; // w3
  System_String_o *v189; // x4
  int32_t v190; // w5
  int64_t v191; // x6
  System_String_o *v192; // x7
  Il2CppObject *v193; // x22
  struct EquipGraphServantItem_o *servantItemInfo; // x8
  int32_t v195; // w2
  int32_t v196; // w3
  System_String_o *v197; // x4
  int32_t v198; // w5
  int64_t v199; // x6
  System_String_o *v200; // x7
  Il2CppObject *v201; // x22
  int32_t v202; // w2
  int32_t v203; // w3
  System_String_o *v204; // x4
  int32_t v205; // w5
  int64_t v206; // x6
  System_String_o *v207; // x7
  Il2CppObject *v208; // x22
  int32_t v209; // w2
  int32_t v210; // w3
  System_String_o *v211; // x4
  int32_t v212; // w5
  int64_t v213; // x6
  System_String_o *v214; // x7
  Il2CppObject *v215; // x22
  GrandQuestFolderBoardItem_o *v216; // x0
  struct EquipGraphListViewItem_o *v217; // x8
  int32_t v218; // w2
  int32_t v219; // w3
  System_String_o *v220; // x4
  int32_t v221; // w5
  int64_t v222; // x6
  System_String_o *v223; // x7
  Il2CppObject *v224; // x23
  int32_t v225; // w2
  int32_t v226; // w3
  System_String_o *v227; // x4
  int32_t v228; // w5
  int64_t v229; // x6
  System_String_o *v230; // x7
  Il2CppObject *v231; // x23
  int32_t v232; // w23
  int32_t v233; // w2
  int32_t v234; // w3
  System_String_o *v235; // x4
  int32_t v236; // w5
  int64_t v237; // x6
  System_String_o *v238; // x7
  Il2CppObject *v239; // x23
  int32_t v240; // w2
  int32_t v241; // w3
  System_String_o *v242; // x4
  int32_t v243; // w5
  int64_t v244; // x6
  System_String_o *v245; // x7
  Il2CppObject *v246; // x23
  int32_t v247; // w2
  int32_t v248; // w3
  System_String_o *v249; // x4
  int32_t v250; // w5
  int64_t v251; // x6
  System_String_o *v252; // x7
  Il2CppObject *v253; // x22
  int32_t v254; // w2
  int32_t v255; // w3
  System_String_o *v256; // x4
  int32_t v257; // w5
  int64_t v258; // x6
  System_String_o *v259; // x7
  Il2CppObject *v260; // x22
  int32_t v261; // w2
  int32_t v262; // w3
  System_String_o *v263; // x4
  int32_t v264; // w5
  int64_t v265; // x6
  System_String_o *v266; // x7
  Il2CppObject *v267; // x22
  struct EquipGraphServantItem_o *v268; // x8
  int32_t v269; // w2
  int32_t v270; // w3
  System_String_o *v271; // x4
  int32_t v272; // w5
  int64_t v273; // x6
  System_String_o *v274; // x7
  Il2CppObject *v275; // x22
  int32_t v276; // w2
  int32_t v277; // w3
  System_String_o *v278; // x4
  int32_t v279; // w5
  int64_t v280; // x6
  System_String_o *v281; // x7
  Il2CppObject *v282; // x22
  System_String_o *v283; // x20
  Il2CppObject *v284; // x21
  System_String_o *v285; // x22
  System_String_o *v286; // x23
  System_String_o *v287; // x24
  CommonConfirmDialog_ClickDelegate_o *v288; // x25
  System_Func_object__bool__o *v289; // x21
  Il2CppObject *v290; // x22
  System_String_o *v291; // x20
  System_Object_array *v292; // x21
  int32_t v293; // w2
  int32_t v294; // w3
  System_String_o *v295; // x4
  int32_t v296; // w5
  int64_t v297; // x6
  System_String_o *v298; // x7
  __int64 v299; // x23
  int32_t v300; // w2
  int32_t v301; // w3
  System_String_o *v302; // x4
  int32_t v303; // w5
  int64_t v304; // x6
  System_String_o *v305; // x7
  Il2CppClass *v306; // x23
  int32_t v307; // w2
  int32_t v308; // w3
  System_String_o *v309; // x4
  int32_t v310; // w5
  int64_t v311; // x6
  System_String_o *v312; // x7
  __int64 v313; // x23
  int32_t v314; // w2
  int32_t v315; // w3
  System_String_o *v316; // x4
  int32_t v317; // w5
  int64_t v318; // x6
  System_String_o *v319; // x7
  Il2CppClass *v320; // x23
  struct EquipGraphServantItem_o *v321; // x8
  int32_t v322; // w23
  int32_t v323; // w2
  int32_t v324; // w3
  System_String_o *v325; // x4
  int32_t v326; // w5
  int64_t v327; // x6
  System_String_o *v328; // x7
  __int64 v329; // x23
  int32_t v330; // w2
  int32_t v331; // w3
  System_String_o *v332; // x4
  int32_t v333; // w5
  int64_t v334; // x6
  System_String_o *v335; // x7
  __int64 v336; // x22
  System_String_o *v337; // x20
  Il2CppObject *v338; // x21
  System_String_o *v339; // x22
  CommonConfirmDialog_ClickDelegate_o *v340; // x23
  struct UserServantEntity_o *userServantEntity; // x25
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  int32_t v343; // w24
  System_String_o *v344; // x21
  System_Object_array *v345; // x23
  int32_t v346; // w2
  int32_t v347; // w3
  System_String_o *v348; // x4
  int32_t v349; // w5
  int64_t v350; // x6
  System_String_o *v351; // x7
  Il2CppObject *v352; // x22
  int32_t v353; // w2
  int32_t v354; // w3
  System_String_o *v355; // x4
  int32_t v356; // w5
  int64_t v357; // x6
  System_String_o *v358; // x7
  Il2CppObject *v359; // x22
  int32_t v360; // w2
  int32_t v361; // w3
  System_String_o *v362; // x4
  int32_t v363; // w5
  int64_t v364; // x6
  System_String_o *v365; // x7
  Il2CppObject *v366; // x22
  __int64 v367; // x22
  __int64 v368; // x24
  int32_t v369; // w0
  int32_t v370; // w2
  int32_t v371; // w3
  System_String_o *v372; // x4
  int32_t v373; // w5
  int64_t v374; // x6
  System_String_o *v375; // x7
  Il2CppObject *v376; // x20
  GrandQuestFolderBoardItem_o *v377; // x0
  int32_t v378; // w2
  int32_t v379; // w3
  System_String_o *v380; // x4
  int32_t v381; // w5
  int64_t v382; // x6
  System_String_o *v383; // x7
  Il2CppObject *v384; // x22
  int32_t v385; // w2
  int32_t v386; // w3
  System_String_o *v387; // x4
  int32_t v388; // w5
  int64_t v389; // x6
  System_String_o *v390; // x7
  Il2CppObject *v391; // x22
  int32_t v392; // w2
  int32_t v393; // w3
  System_String_o *v394; // x4
  int32_t v395; // w5
  int64_t v396; // x6
  System_String_o *v397; // x7
  Il2CppObject *v398; // x22
  int32_t v399; // w2
  int32_t v400; // w3
  System_String_o *v401; // x4
  int32_t v402; // w5
  int64_t v403; // x6
  System_String_o *v404; // x7
  Il2CppObject *v405; // x22
  __int64 v406; // x22
  __int64 v407; // x24
  int32_t v408; // w0
  System_String_o *v409; // x20
  Il2CppObject *v410; // x21
  System_String_o *v411; // x22
  System_String_o *v412; // x23
  System_String_o *v413; // x24
  CommonConfirmDialog_ClickDelegate_o *v414; // x25
  __int64 v415; // x0
  struct PartyListViewItem_array *v416; // [xsp+68h] [xbp-F8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v417; // [xsp+70h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v418; // [xsp+90h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v419; // [xsp+B0h] [xbp-B0h] BYREF
  int32_t v420; // [xsp+D4h] [xbp-8Ch] BYREF
  int32_t partyNumber; // [xsp+D8h] [xbp-88h] BYREF
  int32_t maxWave; // [xsp+DCh] [xbp-84h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v423; // [xsp+E0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v424; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o EquipSvtId; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v426; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v427; // 0:x0.16

  if ( (byte_4D2FEBC & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_EquipGraphListViewItem_WearerMemberInfo__TypeInfo);
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    sub_1C93AD4(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C93AD4(&NotificationDialog_ClickDelegate_TypeInfo);
    sub_1C93AD4(&Method_System_Linq_Enumerable_FirstOrDefault_EquipGraphListViewItem_WearerMemberInfo___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C93AD4(&EquipGraphListViewItem_TypeInfo);
    sub_1C93AD4(&Method_EquipGraphListViewManager_EndSelectConfirm__);
    sub_1C93AD4(&Method_EquipGraphListViewManager_SelectEquip__);
    sub_1C93AD4(&Method_EquipGraphListViewManager__SelectEquip_b__87_0__);
    sub_1C93AD4(&Method_EquipGraphListViewManager__SelectEquip_b__87_1__);
    sub_1C93AD4(&Method_EquipGraphListViewManager__SelectEquip_b__87_2__);
    sub_1C93AD4(&Method_EquipGraphListViewManager__SelectEquip_b__87_3__);
    sub_1C93AD4(&EquipGraphListViewObject_TypeInfo);
    sub_1C93AD4(&System_Func_EquipGraphListViewItem_WearerMemberInfo__bool__TypeInfo);
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo__ForEach__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo__get_Item__);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&object___TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C93AD4(&Rarity_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&string_TypeInfo);
    sub_1C93AD4(&StringLiteral_15602/*"WAVE_BATTLE_EQUIP_SWAP_MESSAGE"*/);
    sub_1C93AD4(&StringLiteral_15603/*"WAVE_BATTLE_EQUIP_SWAP_TITLE"*/);
    sub_1C93AD4(&StringLiteral_15596/*"WAVE_BATTLE_EQUIP_MOVE_MESSAGE"*/);
    sub_1C93AD4(&StringLiteral_15598/*"WAVE_BATTLE_EQUIP_PARTY_MOVE_MESSAGE"*/);
    sub_1C93AD4(&StringLiteral_5520/*"EQUIP_GRAPH_USE_WARNING_TITLE"*/);
    sub_1C93AD4(&StringLiteral_5518/*"EQUIP_GRAPH_USE_WARNING_MESSAGE"*/);
    sub_1C93AD4(&StringLiteral_15599/*"WAVE_BATTLE_EQUIP_PARTY_SWAP_MESSAGE"*/);
    sub_1C93AD4(&StringLiteral_15592/*"WAVE_BATTLE_COST_OVER_TITLE"*/);
    sub_1C93AD4(&StringLiteral_3710/*"COMMON_CONFIRM_NO"*/);
    sub_1C93AD4(&StringLiteral_3715/*"COMMON_CONFIRM_YES"*/);
    sub_1C93AD4(&StringLiteral_5519/*"EQUIP_GRAPH_USE_WARNING_MESSAGE_MULTI"*/);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    sub_1C93AD4(&StringLiteral_15591/*"WAVE_BATTLE_COST_OVER_MESSAGE"*/);
    byte_4D2FEBC = 1;
  }
  p_selectItem = &this->fields.selectItem;
  memset(&v423, 0, sizeof(v423));
  this->fields.selectItem = item;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.selectItem,
    (int32_t)item,
    (int32_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  p_selectItemCallbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.selectItemCallbackFunc;
  this->fields.selectItemCallbackFunc = callback;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.selectItemCallbackFunc,
    (int32_t)callback,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  selectItem = (__int64)this->fields.selectItem;
  if ( !selectItem )
    goto LABEL_327;
  if ( *(_BYTE *)(selectItem + 264) )
    v21 = *(unsigned __int8 *)(selectItem + 265) ^ 1;
  else
    v21 = 0;
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
      v25 = (_QWORD *)sub_1C93AEC(Method_EquipGraphListViewManager_SelectEquip__);
    v26 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v25, v25[4]);
    OverwriteAssetSoundName__PlaySystemSe(v26, 0, 0, 0);
    if ( !this->fields.isWaveBattle )
      goto LABEL_21;
    waveDeckItemList = this->fields.waveDeckItemList;
    if ( !waveDeckItemList )
      goto LABEL_327;
    v28 = this->fields.partyNumber - 1;
    if ( (unsigned int)v28 < LODWORD(waveDeckItemList->max_length) )
    {
      selectItem = (__int64)waveDeckItemList->m_Items[v28];
      if ( !selectItem )
        goto LABEL_327;
      PartyListViewItem__SetEquip((PartyListViewItem_o *)selectItem, this->fields.memberIndex, 0, 0, 0);
LABEL_21:
      selectItem = (__int64)*p_selectItem;
      if ( !*p_selectItem )
        goto LABEL_327;
      *(_BYTE *)(selectItem + 153) = 0;
      selectItem = EquipGraphListViewItem__get_IsUse((EquipGraphListViewItem_o *)selectItem, v19);
      v29 = *p_selectItem;
      if ( v21 || (selectItem & 1) == 0 )
      {
        if ( !v29 )
          goto LABEL_327;
        if ( v29->fields._OrganizedWave_k__BackingField <= 0 && !v29->fields._IsUnique_k__BackingField )
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
                v44 = 0;
                goto LABEL_55;
              }
            }
          }
          goto LABEL_327;
        }
      }
      else if ( !v29 )
      {
        goto LABEL_327;
      }
      wearerMemberInfoList = (System_Collections_Generic_List_object__o *)v29->fields.wearerMemberInfoList;
      v43 = (System_Action_object__o *)sub_1C93D20(System_Action_EquipGraphListViewItem_WearerMemberInfo__TypeInfo);
      System_Action_object____ctor(
        v43,
        (Il2CppObject *)this,
        Method_EquipGraphListViewManager__SelectEquip_b__87_0__,
        0);
      if ( !wearerMemberInfoList )
        goto LABEL_327;
      System_Collections_Generic_List_object___ForEach(
        wearerMemberInfoList,
        (System_Action_T__o *)v43,
        (const MethodInfo_387A3DC *)Method_System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo__ForEach__);
      if ( !v24 )
        goto LABEL_327;
      EquipGraphListViewObject__Init_42868720(v24, 4, 0, 0);
      goto LABEL_51;
    }
LABEL_329:
    sub_1C93D34(selectItem);
  }
  if ( *(int *)(selectItem + 224) >= 1 )
  {
    if ( !item )
      goto LABEL_327;
    v30 = Method_EquipGraphListViewManager_SelectEquip__;
    IsClearedWave_k__BackingField = item->fields._IsClearedWave_k__BackingField;
    if ( (*((_BYTE *)Method_EquipGraphListViewManager_SelectEquip__ + 83) & 2) != 0 )
      v30 = (_QWORD *)sub_1C93AEC(Method_EquipGraphListViewManager_SelectEquip__);
    v32 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v30, v30[4]);
    if ( !IsClearedWave_k__BackingField )
    {
      OverwriteAssetSoundName__PlaySystemSe(v32, 0, 0, 0);
      selectItem = (__int64)this->fields.servantItemInfo;
      if ( !selectItem )
        goto LABEL_327;
      selectItem = EquipGraphServantItem__get_IsEquip((EquipGraphServantItem_o *)selectItem, 0);
      if ( (selectItem & 1) != 0 )
      {
        v34 = this->fields.waveDeckItemList;
        if ( !v34 )
          goto LABEL_327;
        v35 = item->fields._OrganizedWave_k__BackingField - 1;
        if ( (unsigned int)v35 >= LODWORD(v34->max_length) )
          goto LABEL_329;
        selectItem = (__int64)*p_selectItem;
        if ( !*p_selectItem )
          goto LABEL_327;
        v36 = v34->m_Items[v35];
        selectItem = (__int64)EquipGraphListViewItem__GetWearerMemberInfo((EquipGraphListViewItem_o *)selectItem, v19);
        if ( !selectItem )
          goto LABEL_327;
        if ( !v36 )
          goto LABEL_327;
        selectItem = (__int64)PartyListViewItem__GetMember(v36, *(_DWORD *)(selectItem + 16), 0);
        if ( !selectItem )
          goto LABEL_327;
        cost = v36->fields.cost;
        selectItem = PartyOrganizationListViewItem__get_EquipCost((PartyOrganizationListViewItem_o *)selectItem, 0);
        if ( !this->fields.servantItemInfo )
          goto LABEL_327;
        if ( cost - (int)selectItem + EquipGraphServantItem__get_EquipCost(this->fields.servantItemInfo, 0) > v36->fields.maxCost )
        {
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v39 = LocalizationManager__Get((System_String_o *)StringLiteral_15592/*"WAVE_BATTLE_COST_OVER_TITLE"*/, 0);
          v40 = LocalizationManager__Get((System_String_o *)StringLiteral_15591/*"WAVE_BATTLE_COST_OVER_MESSAGE"*/, 0);
          v41 = (NotificationDialog_ClickDelegate_o *)sub_1C93D20(NotificationDialog_ClickDelegate_TypeInfo);
          NotificationDialog_ClickDelegate___ctor(
            v41,
            (Il2CppObject *)this,
            Method_EquipGraphListViewManager__SelectEquip_b__87_1__,
            0);
          if ( Instance )
          {
            CommonUI__OpenNotificationDialog_31583416(
              (CommonUI_o *)Instance,
              v39,
              v40,
              v41,
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
        WearerMemberInfo = EquipGraphListViewItem__GetWearerMemberInfo((EquipGraphListViewItem_o *)selectItem, v19);
        if ( this->fields.questRestrictionInfo
          && QuestRestrictionInfo__IsWaveSetupSwitchParty(this->fields.questRestrictionInfo, 0) )
        {
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v155 = LocalizationManager__Get((System_String_o *)StringLiteral_15599/*"WAVE_BATTLE_EQUIP_PARTY_SWAP_MESSAGE"*/, 0);
          selectItem = sub_1C93B7C(object___TypeInfo, 8);
          v156 = *p_selectItem;
          if ( !*p_selectItem )
            goto LABEL_327;
          v157 = (System_Object_array *)selectItem;
          selectItem = (__int64)LocalizationManager__ConvertNumberToRomaNumber(
                                  v156->fields._OrganizedWave_k__BackingField,
                                  0);
          if ( !v157 )
            goto LABEL_327;
          v164 = (Il2CppObject *)selectItem;
          if ( !selectItem || (selectItem = sub_1C93C10(selectItem, v157->obj.klass->_1.element_class)) != 0 )
          {
            if ( !LODWORD(v157->max_length) )
              goto LABEL_329;
            v157->m_Items[0] = v164;
            sub_1C93A78((GrandQuestFolderBoardItem_o *)v157->m_Items, (int32_t)v164, v158, v159, v160, v161, v162, v163);
            if ( !WearerMemberInfo )
              goto LABEL_327;
            WearerSvtRarity_k__BackingField = WearerMemberInfo->fields._WearerSvtRarity_k__BackingField;
            if ( !Rarity_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
            selectItem = (__int64)Rarity__getRarityType(WearerSvtRarity_k__BackingField, 0);
            v172 = (Il2CppObject *)selectItem;
            if ( !selectItem || (selectItem = sub_1C93C10(selectItem, v157->obj.klass->_1.element_class)) != 0 )
            {
              if ( LODWORD(v157->max_length) <= 1 )
                goto LABEL_329;
              v157->m_Items[1] = v172;
              sub_1C93A78(
                (GrandQuestFolderBoardItem_o *)&v157->m_Items[1],
                (int32_t)v172,
                v166,
                v167,
                v168,
                v169,
                v170,
                v171);
              WearerServantClassName_k__BackingField = (Il2CppObject *)WearerMemberInfo->fields._WearerServantClassName_k__BackingField;
              if ( !WearerServantClassName_k__BackingField
                || (selectItem = sub_1C93C10(
                                   WearerMemberInfo->fields._WearerServantClassName_k__BackingField,
                                   v157->obj.klass->_1.element_class)) != 0 )
              {
                if ( LODWORD(v157->max_length) <= 2 )
                  goto LABEL_329;
                v157->m_Items[2] = WearerServantClassName_k__BackingField;
                sub_1C93A78(
                  (GrandQuestFolderBoardItem_o *)&v157->m_Items[2],
                  (int32_t)WearerServantClassName_k__BackingField,
                  v173,
                  v174,
                  v175,
                  v176,
                  v177,
                  v178);
                WearerServantName_k__BackingField = (Il2CppObject *)WearerMemberInfo->fields._WearerServantName_k__BackingField;
                if ( !WearerServantName_k__BackingField
                  || (selectItem = sub_1C93C10(WearerServantName_k__BackingField, v157->obj.klass->_1.element_class)) != 0 )
                {
                  if ( LODWORD(v157->max_length) <= 3 )
                    goto LABEL_329;
                  v157->m_Items[3] = WearerServantName_k__BackingField;
                  sub_1C93A78(
                    (GrandQuestFolderBoardItem_o *)&v157->m_Items[3],
                    (int32_t)WearerServantName_k__BackingField,
                    v180,
                    v181,
                    v182,
                    v183,
                    v184,
                    v185);
                  selectItem = (__int64)LocalizationManager__ConvertNumberToRomaNumber(this->fields.partyNumber, 0);
                  v193 = (Il2CppObject *)selectItem;
                  if ( !selectItem || (selectItem = sub_1C93C10(selectItem, v157->obj.klass->_1.element_class)) != 0 )
                  {
                    if ( LODWORD(v157->max_length) <= 4 )
                      goto LABEL_329;
                    v157->m_Items[4] = v193;
                    sub_1C93A78(
                      (GrandQuestFolderBoardItem_o *)&v157->m_Items[4],
                      (int32_t)v193,
                      v187,
                      v188,
                      v189,
                      v190,
                      v191,
                      v192);
                    servantItemInfo = this->fields.servantItemInfo;
                    if ( !servantItemInfo )
                      goto LABEL_327;
                    selectItem = (__int64)Rarity__getRarityType(servantItemInfo->fields.rarityId, 0);
                    v201 = (Il2CppObject *)selectItem;
                    if ( !selectItem || (selectItem = sub_1C93C10(selectItem, v157->obj.klass->_1.element_class)) != 0 )
                    {
                      if ( LODWORD(v157->max_length) <= 5 )
                        goto LABEL_329;
                      v157->m_Items[5] = v201;
                      sub_1C93A78(
                        (GrandQuestFolderBoardItem_o *)&v157->m_Items[5],
                        (int32_t)v201,
                        v195,
                        v196,
                        v197,
                        v198,
                        v199,
                        v200);
                      selectItem = (__int64)this->fields.servantItemInfo;
                      if ( !selectItem )
                        goto LABEL_327;
                      selectItem = (__int64)EquipGraphServantItem__get_ClassName(
                                              (EquipGraphServantItem_o *)selectItem,
                                              0);
                      v208 = (Il2CppObject *)selectItem;
                      if ( !selectItem || (selectItem = sub_1C93C10(selectItem, v157->obj.klass->_1.element_class)) != 0 )
                      {
                        if ( LODWORD(v157->max_length) <= 6 )
                          goto LABEL_329;
                        v157->m_Items[6] = v208;
                        sub_1C93A78(
                          (GrandQuestFolderBoardItem_o *)&v157->m_Items[6],
                          (int32_t)v208,
                          v202,
                          v203,
                          v204,
                          v205,
                          v206,
                          v207);
                        selectItem = (__int64)this->fields.servantItemInfo;
                        if ( !selectItem )
                          goto LABEL_327;
                        selectItem = (__int64)EquipGraphServantItem__get_NameText(
                                                (EquipGraphServantItem_o *)selectItem,
                                                0);
                        v215 = (Il2CppObject *)selectItem;
                        if ( !selectItem
                          || (selectItem = sub_1C93C10(selectItem, v157->obj.klass->_1.element_class)) != 0 )
                        {
                          if ( LODWORD(v157->max_length) <= 7 )
                            goto LABEL_329;
                          v157->m_Items[7] = v215;
                          v216 = (GrandQuestFolderBoardItem_o *)&v157->m_Items[7];
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
          v155 = LocalizationManager__Get((System_String_o *)StringLiteral_15602/*"WAVE_BATTLE_EQUIP_SWAP_MESSAGE"*/, 0);
          selectItem = sub_1C93B7C(object___TypeInfo, 10);
          v217 = *p_selectItem;
          if ( !*p_selectItem )
            goto LABEL_327;
          v157 = (System_Object_array *)selectItem;
          LODWORD(v419.fields.currentCryptoKey) = v217->fields._OrganizedWave_k__BackingField;
          selectItem = j_il2cpp_value_box_0(int_TypeInfo, &v419);
          if ( !v157 )
            goto LABEL_327;
          v224 = (Il2CppObject *)selectItem;
          if ( !selectItem || (selectItem = sub_1C93C10(selectItem, v157->obj.klass->_1.element_class)) != 0 )
          {
            if ( !LODWORD(v157->max_length) )
              goto LABEL_329;
            v157->m_Items[0] = v224;
            sub_1C93A78((GrandQuestFolderBoardItem_o *)v157->m_Items, (int32_t)v224, v218, v219, v220, v221, v222, v223);
            maxWave = this->fields.maxWave;
            selectItem = j_il2cpp_value_box_0(int_TypeInfo, &maxWave);
            v231 = (Il2CppObject *)selectItem;
            if ( !selectItem || (selectItem = sub_1C93C10(selectItem, v157->obj.klass->_1.element_class)) != 0 )
            {
              if ( LODWORD(v157->max_length) <= 1 )
                goto LABEL_329;
              v157->m_Items[1] = v231;
              sub_1C93A78(
                (GrandQuestFolderBoardItem_o *)&v157->m_Items[1],
                (int32_t)v231,
                v225,
                v226,
                v227,
                v228,
                v229,
                v230);
              if ( !WearerMemberInfo )
                goto LABEL_327;
              v232 = WearerMemberInfo->fields._WearerSvtRarity_k__BackingField;
              if ( !Rarity_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
              selectItem = (__int64)Rarity__getRarityType(v232, 0);
              v239 = (Il2CppObject *)selectItem;
              if ( !selectItem || (selectItem = sub_1C93C10(selectItem, v157->obj.klass->_1.element_class)) != 0 )
              {
                if ( LODWORD(v157->max_length) <= 2 )
                  goto LABEL_329;
                v157->m_Items[2] = v239;
                sub_1C93A78(
                  (GrandQuestFolderBoardItem_o *)&v157->m_Items[2],
                  (int32_t)v239,
                  v233,
                  v234,
                  v235,
                  v236,
                  v237,
                  v238);
                v246 = (Il2CppObject *)WearerMemberInfo->fields._WearerServantClassName_k__BackingField;
                if ( !v246
                  || (selectItem = sub_1C93C10(
                                     WearerMemberInfo->fields._WearerServantClassName_k__BackingField,
                                     v157->obj.klass->_1.element_class)) != 0 )
                {
                  if ( LODWORD(v157->max_length) <= 3 )
                    goto LABEL_329;
                  v157->m_Items[3] = v246;
                  sub_1C93A78(
                    (GrandQuestFolderBoardItem_o *)&v157->m_Items[3],
                    (int32_t)v246,
                    v240,
                    v241,
                    v242,
                    v243,
                    v244,
                    v245);
                  v253 = (Il2CppObject *)WearerMemberInfo->fields._WearerServantName_k__BackingField;
                  if ( !v253 || (selectItem = sub_1C93C10(v253, v157->obj.klass->_1.element_class)) != 0 )
                  {
                    if ( LODWORD(v157->max_length) <= 4 )
                      goto LABEL_329;
                    v157->m_Items[4] = v253;
                    sub_1C93A78(
                      (GrandQuestFolderBoardItem_o *)&v157->m_Items[4],
                      (int32_t)v253,
                      v247,
                      v248,
                      v249,
                      v250,
                      v251,
                      v252);
                    partyNumber = this->fields.partyNumber;
                    selectItem = j_il2cpp_value_box_0(int_TypeInfo, &partyNumber);
                    v260 = (Il2CppObject *)selectItem;
                    if ( !selectItem || (selectItem = sub_1C93C10(selectItem, v157->obj.klass->_1.element_class)) != 0 )
                    {
                      if ( LODWORD(v157->max_length) <= 5 )
                        goto LABEL_329;
                      v157->m_Items[5] = v260;
                      sub_1C93A78(
                        (GrandQuestFolderBoardItem_o *)&v157->m_Items[5],
                        (int32_t)v260,
                        v254,
                        v255,
                        v256,
                        v257,
                        v258,
                        v259);
                      v420 = this->fields.maxWave;
                      selectItem = j_il2cpp_value_box_0(int_TypeInfo, &v420);
                      v267 = (Il2CppObject *)selectItem;
                      if ( !selectItem || (selectItem = sub_1C93C10(selectItem, v157->obj.klass->_1.element_class)) != 0 )
                      {
                        if ( LODWORD(v157->max_length) <= 6 )
                          goto LABEL_329;
                        v157->m_Items[6] = v267;
                        sub_1C93A78(
                          (GrandQuestFolderBoardItem_o *)&v157->m_Items[6],
                          (int32_t)v267,
                          v261,
                          v262,
                          v263,
                          v264,
                          v265,
                          v266);
                        v268 = this->fields.servantItemInfo;
                        if ( !v268 )
                          goto LABEL_327;
                        selectItem = (__int64)Rarity__getRarityType(v268->fields.rarityId, 0);
                        v275 = (Il2CppObject *)selectItem;
                        if ( !selectItem
                          || (selectItem = sub_1C93C10(selectItem, v157->obj.klass->_1.element_class)) != 0 )
                        {
                          if ( LODWORD(v157->max_length) <= 7 )
                            goto LABEL_329;
                          v157->m_Items[7] = v275;
                          sub_1C93A78(
                            (GrandQuestFolderBoardItem_o *)&v157->m_Items[7],
                            (int32_t)v275,
                            v269,
                            v270,
                            v271,
                            v272,
                            v273,
                            v274);
                          selectItem = (__int64)this->fields.servantItemInfo;
                          if ( !selectItem )
                            goto LABEL_327;
                          selectItem = (__int64)EquipGraphServantItem__get_ClassName(
                                                  (EquipGraphServantItem_o *)selectItem,
                                                  0);
                          v282 = (Il2CppObject *)selectItem;
                          if ( !selectItem
                            || (selectItem = sub_1C93C10(selectItem, v157->obj.klass->_1.element_class)) != 0 )
                          {
                            if ( LODWORD(v157->max_length) <= 8 )
                              goto LABEL_329;
                            v157->m_Items[8] = v282;
                            sub_1C93A78(
                              (GrandQuestFolderBoardItem_o *)&v157->m_Items[8],
                              (int32_t)v282,
                              v276,
                              v277,
                              v278,
                              v279,
                              v280,
                              v281);
                            selectItem = (__int64)this->fields.servantItemInfo;
                            if ( !selectItem )
                              goto LABEL_327;
                            selectItem = (__int64)EquipGraphServantItem__get_NameText(
                                                    (EquipGraphServantItem_o *)selectItem,
                                                    0);
                            v215 = (Il2CppObject *)selectItem;
                            if ( !selectItem
                              || (selectItem = sub_1C93C10(selectItem, v157->obj.klass->_1.element_class)) != 0 )
                            {
                              if ( LODWORD(v157->max_length) <= 9 )
                                goto LABEL_329;
                              v157->m_Items[9] = v215;
                              v216 = (GrandQuestFolderBoardItem_o *)&v157->m_Items[9];
LABEL_239:
                              sub_1C93A78(v216, (int32_t)v215, v209, v210, v211, v212, v213, v214);
                              v283 = System_String__Format_64467168(v155, v157, 0);
                              v284 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                              v285 = LocalizationManager__Get((System_String_o *)StringLiteral_15603/*"WAVE_BATTLE_EQUIP_SWAP_TITLE"*/, 0);
                              v286 = LocalizationManager__Get((System_String_o *)StringLiteral_3715/*"COMMON_CONFIRM_YES"*/, 0);
                              v287 = LocalizationManager__Get((System_String_o *)StringLiteral_3710/*"COMMON_CONFIRM_NO"*/, 0);
                              v288 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C93D20(CommonConfirmDialog_ClickDelegate_TypeInfo);
                              CommonConfirmDialog_ClickDelegate___ctor(
                                v288,
                                (Il2CppObject *)this,
                                Method_EquipGraphListViewManager_EndSelectConfirm__,
                                0);
                              if ( v284 )
                              {
                                CommonUI__OpenConfirmDialog_31581040(
                                  (CommonUI_o *)v284,
                                  v285,
                                  v283,
                                  v286,
                                  v287,
                                  v288,
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
        v415 = sub_1C93D50(selectItem);
        sub_1C93BFC(v415, 0);
      }
LABEL_120:
      EquipGraphListViewManager__EndSelectConfirm(this, 1, v33);
      return;
    }
LABEL_62:
    OverwriteAssetSoundName__PlaySystemSe(v32, 2, 0, 0);
    klass = p_selectItemCallbackFunc->klass;
    if ( p_selectItemCallbackFunc->klass )
    {
      p_selectItemCallbackFunc->klass = 0;
      sub_1C93A78(p_selectItemCallbackFunc, 0, v54, v55, v56, v57, v58, v59);
      ((void (__fastcall *)(Il2CppClass *, _QWORD))klass->_1.namespaze)(
        klass->_1.element_class,
        *(_QWORD *)&klass->_1.byval_arg.bits);
    }
    return;
  }
  if ( !*(_BYTE *)(selectItem + 236) )
  {
    IsUse = EquipGraphListViewItem__get_IsUse((EquipGraphListViewItem_o *)selectItem, v19);
    v62 = Method_EquipGraphListViewManager_SelectEquip__;
    v63 = IsUse;
    if ( (*((_BYTE *)Method_EquipGraphListViewManager_SelectEquip__ + 83) & 2) != 0 )
      v62 = (_QWORD *)sub_1C93AEC(Method_EquipGraphListViewManager_SelectEquip__);
    v64 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v62, v62[4]);
    OverwriteAssetSoundName__PlaySystemSe(v64, 0, 0, 0);
    if ( !v63 )
    {
      if ( this->fields.isWaveBattle )
      {
        v127 = this->fields.waveDeckItemList;
        if ( !v127 )
          goto LABEL_327;
        v128 = this->fields.partyNumber - 1;
        if ( (unsigned int)v128 >= LODWORD(v127->max_length) )
          goto LABEL_329;
        v129 = this->fields.selectItem;
        if ( !v129 )
          goto LABEL_327;
        userSvtEntity = v129->fields.userSvtEntity;
        if ( !userSvtEntity )
          goto LABEL_327;
        memberIndex = this->fields.memberIndex;
        v132 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
        v133 = v127->m_Items[v128];
        *(_OWORD *)&v419.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v419.fields.fakeValue = v132;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v418 = v419;
        selectItem = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(&v418, 0);
        if ( !v133 )
          goto LABEL_327;
        PartyListViewItem__SetEquip(v133, memberIndex, selectItem, 0, 0);
      }
      selectItem = (__int64)this->fields.itemList;
      if ( selectItem )
      {
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v419,
          (System_Collections_Generic_List_object__o *)selectItem,
          (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
        v423 = *(System_Collections_Generic_List_Enumerator_object__o *)&v419.fields.currentCryptoKey;
        while ( 1 )
        {
          v134 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                   &v423,
                   (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
          if ( !v134 )
            break;
          current = v423.fields._current;
          if ( !v423.fields._current
            || (v137 = EquipGraphListViewItem_TypeInfo->_2.naturalAligment,
                v423.fields._current->klass->_2.naturalAligment < (unsigned int)v137)
            || (EquipGraphListViewItem_c *)v423.fields._current->klass->_2.typeHierarchy[v137 - 1] != EquipGraphListViewItem_TypeInfo )
          {
            sub_1C93D2C(v134, v135);
          }
          if ( BYTE1(v423.fields._current[9].monitor) )
          {
            monitor_low = LOBYTE(v423.fields._current[16].monitor);
            BYTE1(v423.fields._current[9].monitor) = 0;
            v139 = monitor_low ? BYTE1(current[16].monitor) ^ 1 : 0;
            if ( (v140 = EquipGraphListViewItem__get_IsUse((EquipGraphListViewItem_o *)current, v135), !v139) && v140
              || SLODWORD(current[14].klass) > 0
              || BYTE4(current[14].monitor) )
            {
              v141 = (System_Collections_Generic_List_object__o *)current[17].klass;
              v142 = (System_Action_object__o *)sub_1C93D20(System_Action_EquipGraphListViewItem_WearerMemberInfo__TypeInfo);
              System_Action_object____ctor(
                v142,
                (Il2CppObject *)this,
                Method_EquipGraphListViewManager__SelectEquip_b__87_3__,
                0);
              if ( !v141 )
                sub_1C93D2C(v143, v144);
              System_Collections_Generic_List_object___ForEach(
                v141,
                (System_Action_T__o *)v142,
                (const MethodInfo_387A3DC *)Method_System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo__ForEach__);
              v145 = (UnityEngine_Object_o *)current[7].klass;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              v146 = UnityEngine_Object__op_Inequality(v145, 0, 0);
              if ( v146 )
              {
                v148 = current[7].klass;
                if ( !v148
                  || (v149 = EquipGraphListViewObject_TypeInfo->_2.naturalAligment,
                      *((unsigned __int8 *)v148->_1.image + 304) < (unsigned int)v149)
                  || *(EquipGraphListViewObject_c **)(*((_QWORD *)v148->_1.image + 25) + 8 * v149 - 8) != EquipGraphListViewObject_TypeInfo )
                {
                  sub_1C93D2C(v146, v147);
                }
                EquipGraphListViewObject__Init_42868720((EquipGraphListViewObject_o *)current[7].klass, 4, 0, 0);
              }
            }
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v423,
          (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
        v150 = *p_selectItem;
        if ( *p_selectItem )
        {
          v151 = v150->fields.userSvtEntity;
          v150->fields.isBase = 1;
          if ( v151 )
          {
            v152 = *(_OWORD *)&v151->fields.id.fields.fakeValue;
            v153 = this->fields.servantItemInfo;
            *(_OWORD *)&v419.fields.currentCryptoKey = *(_OWORD *)&v151->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v419.fields.fakeValue = v152;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v417 = v419;
            selectItem = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(&v417, 0);
            if ( v153 )
            {
              EquipGraphServantItem__SetEquipTarget(v153, selectItem, 0);
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
                  v44 = this->fields.equipGraphType == 1;
LABEL_55:
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)selectItem, v44, 0);
                  EquipGraphListViewManager__RefrashListDisp(this, v45);
                  if ( callback )
                  {
                    p_selectItemCallbackFunc->klass = 0;
                    sub_1C93A78(
                      (GrandQuestFolderBoardItem_o *)&this->fields.selectItemCallbackFunc,
                      0,
                      v46,
                      v47,
                      v48,
                      v49,
                      v50,
                      v51);
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
      sub_1C93D2C(selectItem, v19);
    }
    if ( !*p_selectItem )
      goto LABEL_327;
    v65 = (System_Collections_Generic_List_object__o *)(*p_selectItem)->fields.wearerMemberInfoList;
    if ( !v65 )
      goto LABEL_327;
    if ( v65->fields._size == 1 )
    {
      selectItem = (__int64)System_Collections_Generic_List_object___get_Item(
                              v65,
                              0,
                              (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo__get_Item__);
      if ( !selectItem )
        goto LABEL_327;
      v66 = selectItem;
      if ( *(_DWORD *)(selectItem + 16) == this->fields.memberIndex )
        goto LABEL_120;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v67 = LocalizationManager__Get((System_String_o *)StringLiteral_5518/*"EQUIP_GRAPH_USE_WARNING_MESSAGE"*/, 0);
      selectItem = sub_1C93B7C(object___TypeInfo, 6);
      if ( !this->fields.servantItemInfo )
        goto LABEL_327;
      v68 = (System_Object_array *)selectItem;
      selectItem = (__int64)EquipGraphServantItem__get_NameText(this->fields.servantItemInfo, 0);
      if ( !v68 )
        goto LABEL_327;
      v75 = selectItem;
      if ( selectItem )
      {
        selectItem = sub_1C93C10(selectItem, v68->obj.klass->_1.element_class);
        if ( !selectItem )
          goto LABEL_332;
      }
      if ( !LODWORD(v68->max_length) )
        goto LABEL_329;
      v68->m_Items[0] = (Il2CppObject *)v75;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)v68->m_Items, v75, v69, v70, v71, v72, v73, v74);
      v82 = *(Il2CppObject **)(v66 + 32);
      if ( v82 )
      {
        selectItem = sub_1C93C10(*(_QWORD *)(v66 + 32), v68->obj.klass->_1.element_class);
        if ( !selectItem )
          goto LABEL_332;
      }
      if ( LODWORD(v68->max_length) <= 1 )
        goto LABEL_329;
      v68->m_Items[1] = v82;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&v68->m_Items[1], (int32_t)v82, v76, v77, v78, v79, v80, v81);
      selectItem = (__int64)this->fields.servantItemInfo;
      if ( !selectItem )
        goto LABEL_327;
      selectItem = (__int64)EquipGraphServantItem__get_ClassName((EquipGraphServantItem_o *)selectItem, 0);
      v89 = selectItem;
      if ( selectItem )
      {
        selectItem = sub_1C93C10(selectItem, v68->obj.klass->_1.element_class);
        if ( !selectItem )
          goto LABEL_332;
      }
      if ( LODWORD(v68->max_length) <= 2 )
        goto LABEL_329;
      v68->m_Items[2] = (Il2CppObject *)v89;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&v68->m_Items[2], v89, v83, v84, v85, v86, v87, v88);
      v96 = *(Il2CppObject **)(v66 + 48);
      if ( v96 )
      {
        selectItem = sub_1C93C10(*(_QWORD *)(v66 + 48), v68->obj.klass->_1.element_class);
        if ( !selectItem )
          goto LABEL_332;
      }
      if ( LODWORD(v68->max_length) <= 3 )
        goto LABEL_329;
      v68->m_Items[3] = v96;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&v68->m_Items[3], (int32_t)v96, v90, v91, v92, v93, v94, v95);
      v97 = this->fields.servantItemInfo;
      if ( !v97 )
        goto LABEL_327;
      rarityId = v97->fields.rarityId;
      if ( !Rarity_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
      selectItem = (__int64)Rarity__getRarityType(rarityId, 0);
      v105 = selectItem;
      if ( selectItem )
      {
        selectItem = sub_1C93C10(selectItem, v68->obj.klass->_1.element_class);
        if ( !selectItem )
          goto LABEL_332;
      }
      if ( LODWORD(v68->max_length) <= 4 )
        goto LABEL_329;
      v68->m_Items[4] = (Il2CppObject *)v105;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&v68->m_Items[4], v105, v99, v100, v101, v102, v103, v104);
      selectItem = (__int64)Rarity__getRarityType(*(_DWORD *)(v66 + 60), 0);
      v112 = selectItem;
      if ( selectItem )
      {
        selectItem = sub_1C93C10(selectItem, v68->obj.klass->_1.element_class);
        if ( !selectItem )
          goto LABEL_332;
      }
      if ( LODWORD(v68->max_length) <= 5 )
        goto LABEL_329;
      v68->m_Items[5] = (Il2CppObject *)v112;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&v68->m_Items[5], v112, v106, v107, v108, v109, v110, v111);
      v113 = v67;
      v114 = v68;
    }
    else
    {
      v289 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_EquipGraphListViewItem_WearerMemberInfo__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v289,
        (Il2CppObject *)this,
        Method_EquipGraphListViewManager__SelectEquip_b__87_2__,
        0);
      v290 = System_Linq_Enumerable__FirstOrDefault_object__52221724(
               (System_Collections_Generic_IEnumerable_TSource__o *)v65,
               (System_Func_TSource__bool__o *)v289,
               (const MethodInfo_31CD71C *)Method_System_Linq_Enumerable_FirstOrDefault_EquipGraphListViewItem_WearerMemberInfo___);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v291 = LocalizationManager__Get((System_String_o *)StringLiteral_5519/*"EQUIP_GRAPH_USE_WARNING_MESSAGE_MULTI"*/, 0);
      selectItem = sub_1C93B7C(object___TypeInfo, 6);
      if ( !this->fields.servantItemInfo )
        goto LABEL_327;
      v292 = (System_Object_array *)selectItem;
      selectItem = (__int64)EquipGraphServantItem__get_NameText(this->fields.servantItemInfo, 0);
      if ( !v292 )
        goto LABEL_327;
      v299 = selectItem;
      if ( selectItem )
      {
        selectItem = sub_1C93C10(selectItem, v292->obj.klass->_1.element_class);
        if ( !selectItem )
          goto LABEL_332;
      }
      if ( !LODWORD(v292->max_length) )
        goto LABEL_329;
      v292->m_Items[0] = (Il2CppObject *)v299;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)v292->m_Items, v299, v293, v294, v295, v296, v297, v298);
      if ( !v290 )
        goto LABEL_327;
      v306 = v290[2].klass;
      if ( v306 )
      {
        selectItem = sub_1C93C10(v290[2].klass, v292->obj.klass->_1.element_class);
        if ( !selectItem )
          goto LABEL_332;
      }
      if ( LODWORD(v292->max_length) <= 1 )
        goto LABEL_329;
      v292->m_Items[1] = (Il2CppObject *)v306;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&v292->m_Items[1], (int32_t)v306, v300, v301, v302, v303, v304, v305);
      selectItem = (__int64)this->fields.servantItemInfo;
      if ( !selectItem )
        goto LABEL_327;
      selectItem = (__int64)EquipGraphServantItem__get_ClassName((EquipGraphServantItem_o *)selectItem, 0);
      v313 = selectItem;
      if ( selectItem )
      {
        selectItem = sub_1C93C10(selectItem, v292->obj.klass->_1.element_class);
        if ( !selectItem )
          goto LABEL_332;
      }
      if ( LODWORD(v292->max_length) <= 2 )
        goto LABEL_329;
      v292->m_Items[2] = (Il2CppObject *)v313;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&v292->m_Items[2], v313, v307, v308, v309, v310, v311, v312);
      v320 = v290[3].klass;
      if ( v320 )
      {
        selectItem = sub_1C93C10(v290[3].klass, v292->obj.klass->_1.element_class);
        if ( !selectItem )
          goto LABEL_332;
      }
      if ( LODWORD(v292->max_length) <= 3 )
        goto LABEL_329;
      v292->m_Items[3] = (Il2CppObject *)v320;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&v292->m_Items[3], (int32_t)v320, v314, v315, v316, v317, v318, v319);
      v321 = this->fields.servantItemInfo;
      if ( !v321 )
        goto LABEL_327;
      v322 = v321->fields.rarityId;
      if ( !Rarity_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
      selectItem = (__int64)Rarity__getRarityType(v322, 0);
      v329 = selectItem;
      if ( selectItem )
      {
        selectItem = sub_1C93C10(selectItem, v292->obj.klass->_1.element_class);
        if ( !selectItem )
          goto LABEL_332;
      }
      if ( LODWORD(v292->max_length) <= 4 )
        goto LABEL_329;
      v292->m_Items[4] = (Il2CppObject *)v329;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&v292->m_Items[4], v329, v323, v324, v325, v326, v327, v328);
      selectItem = (__int64)Rarity__getRarityType(HIDWORD(v290[3].monitor), 0);
      v336 = selectItem;
      if ( selectItem )
      {
        selectItem = sub_1C93C10(selectItem, v292->obj.klass->_1.element_class);
        if ( !selectItem )
          goto LABEL_332;
      }
      if ( LODWORD(v292->max_length) <= 5 )
        goto LABEL_329;
      v292->m_Items[5] = (Il2CppObject *)v336;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&v292->m_Items[5], v336, v330, v331, v332, v333, v334, v335);
      v113 = v291;
      v114 = v292;
    }
    v337 = System_String__Format_64467168(v113, v114, 0);
    v338 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v339 = LocalizationManager__Get((System_String_o *)StringLiteral_5520/*"EQUIP_GRAPH_USE_WARNING_TITLE"*/, 0);
    v340 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C93D20(CommonConfirmDialog_ClickDelegate_TypeInfo);
    CommonConfirmDialog_ClickDelegate___ctor(
      v340,
      (Il2CppObject *)this,
      Method_EquipGraphListViewManager_EndSelectConfirm__,
      0);
    selectItem = (__int64)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    if ( v338 )
    {
      CommonUI__OpenConfirmDialog(
        (CommonUI_o *)v338,
        v339,
        v337,
        v340,
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
  v52 = Method_EquipGraphListViewManager_SelectEquip__;
  v53 = item->fields._IsClearedWave_k__BackingField;
  if ( (*((_BYTE *)Method_EquipGraphListViewManager_SelectEquip__ + 83) & 2) != 0 )
    v52 = (_QWORD *)sub_1C93AEC(Method_EquipGraphListViewManager_SelectEquip__);
  v32 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v52, v52[4]);
  if ( v53 )
    goto LABEL_62;
  OverwriteAssetSoundName__PlaySystemSe(v32, 0, 0, 0);
  selectItem = (__int64)this->fields.servantItemInfo;
  if ( !selectItem )
    goto LABEL_327;
  selectItem = EquipGraphServantItem__get_IsEquip((EquipGraphServantItem_o *)selectItem, 0);
  if ( (selectItem & 1) == 0 )
    goto LABEL_120;
  v115 = this->fields.waveDeckItemList;
  if ( !v115 )
    goto LABEL_327;
  max_length = v115->max_length;
  if ( (int)max_length >= 1 )
  {
    v117 = 0;
    v118 = 1;
    v416 = this->fields.waveDeckItemList;
    while ( 1 )
    {
      if ( v117 >= (unsigned int)max_length )
        goto LABEL_329;
      v119 = v115->m_Items[v117];
      v120 = 0;
      do
      {
        selectItem = (__int64)BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          selectItem = (__int64)BalanceConfig_TypeInfo;
        }
        if ( v120 >= *(_DWORD *)(*(_QWORD *)(selectItem + 184) + 176LL) )
          goto LABEL_118;
        if ( !v119 )
          goto LABEL_327;
        selectItem = (__int64)PartyListViewItem__GetMember(v119, v120, 0);
        if ( !*p_selectItem )
          goto LABEL_327;
        servantEntity = (*p_selectItem)->fields.servantEntity;
        if ( !servantEntity )
          goto LABEL_327;
        v122 = (PartyOrganizationListViewItem_o *)selectItem;
        v124 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
        v123 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v424.fields.currentCryptoKey = v124;
        *(_QWORD *)&v424.fields.fakeValue = v123;
        selectItem = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v424, 0);
        if ( !v122 )
          goto LABEL_327;
        v125 = selectItem;
        EquipSvtId = PartyOrganizationListViewItem__get_EquipSvtId(v122, 0);
        selectItem = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(EquipSvtId, 0);
        ++v120;
      }
      while ( v125 != (_DWORD)selectItem );
      v126 = v122->fields.servantEntity;
      if ( v126 )
        break;
LABEL_118:
      v115 = v416;
      ++v117;
      ++v118;
      LODWORD(max_length) = v416->max_length;
      if ( (__int64)v117 >= (int)max_length )
        return;
    }
    userServantEntity = v122->fields.userServantEntity;
    if ( userServantEntity )
    {
      questRestrictionInfo = this->fields.questRestrictionInfo;
      v343 = v122->fields.rarityId;
      if ( questRestrictionInfo && QuestRestrictionInfo__IsWaveSetupSwitchParty(questRestrictionInfo, 0) )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v344 = LocalizationManager__Get((System_String_o *)StringLiteral_15598/*"WAVE_BATTLE_EQUIP_PARTY_MOVE_MESSAGE"*/, 0);
        v345 = (System_Object_array *)sub_1C93B7C(object___TypeInfo, 4);
        selectItem = (__int64)LocalizationManager__ConvertNumberToRomaNumber(v118, 0);
        if ( !v345 )
          goto LABEL_327;
        v352 = (Il2CppObject *)selectItem;
        if ( selectItem )
        {
          selectItem = sub_1C93C10(selectItem, v345->obj.klass->_1.element_class);
          if ( !selectItem )
            goto LABEL_332;
        }
        if ( !LODWORD(v345->max_length) )
          goto LABEL_329;
        v345->m_Items[0] = v352;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)v345->m_Items, (int32_t)v352, v346, v347, v348, v349, v350, v351);
        if ( !Rarity_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
        selectItem = (__int64)Rarity__getRarityType(v343, 0);
        v359 = (Il2CppObject *)selectItem;
        if ( selectItem )
        {
          selectItem = sub_1C93C10(selectItem, v345->obj.klass->_1.element_class);
          if ( !selectItem )
            goto LABEL_332;
        }
        if ( LODWORD(v345->max_length) <= 1 )
          goto LABEL_329;
        v345->m_Items[1] = v359;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)&v345->m_Items[1], (int32_t)v359, v353, v354, v355, v356, v357, v358);
        selectItem = (__int64)ServantEntity__getClassName(v126, 0);
        v366 = (Il2CppObject *)selectItem;
        if ( selectItem )
        {
          selectItem = sub_1C93C10(selectItem, v345->obj.klass->_1.element_class);
          if ( !selectItem )
            goto LABEL_332;
        }
        if ( LODWORD(v345->max_length) <= 2 )
          goto LABEL_329;
        v345->m_Items[2] = v366;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)&v345->m_Items[2], (int32_t)v366, v360, v361, v362, v363, v364, v365);
        v368 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.currentCryptoKey;
        v367 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v426.fields.currentCryptoKey = v368;
        *(_QWORD *)&v426.fields.fakeValue = v367;
        v369 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v426, 0);
        selectItem = (__int64)ServantEntity__getName(v126, v369, -1, 0, 0);
        v376 = (Il2CppObject *)selectItem;
        if ( selectItem )
        {
          selectItem = sub_1C93C10(selectItem, v345->obj.klass->_1.element_class);
          if ( !selectItem )
            goto LABEL_332;
        }
        if ( LODWORD(v345->max_length) <= 3 )
          goto LABEL_329;
        v345->m_Items[3] = v376;
        v377 = (GrandQuestFolderBoardItem_o *)&v345->m_Items[3];
      }
      else
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v344 = LocalizationManager__Get((System_String_o *)StringLiteral_15596/*"WAVE_BATTLE_EQUIP_MOVE_MESSAGE"*/, 0);
        v345 = (System_Object_array *)sub_1C93B7C(object___TypeInfo, 5);
        LODWORD(v419.fields.currentCryptoKey) = v118;
        selectItem = j_il2cpp_value_box_0(int_TypeInfo, &v419);
        if ( !v345 )
          goto LABEL_327;
        v384 = (Il2CppObject *)selectItem;
        if ( selectItem )
        {
          selectItem = sub_1C93C10(selectItem, v345->obj.klass->_1.element_class);
          if ( !selectItem )
            goto LABEL_332;
        }
        if ( !LODWORD(v345->max_length) )
          goto LABEL_329;
        v345->m_Items[0] = v384;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)v345->m_Items, (int32_t)v384, v378, v379, v380, v381, v382, v383);
        maxWave = this->fields.maxWave;
        selectItem = j_il2cpp_value_box_0(int_TypeInfo, &maxWave);
        v391 = (Il2CppObject *)selectItem;
        if ( selectItem )
        {
          selectItem = sub_1C93C10(selectItem, v345->obj.klass->_1.element_class);
          if ( !selectItem )
            goto LABEL_332;
        }
        if ( LODWORD(v345->max_length) <= 1 )
          goto LABEL_329;
        v345->m_Items[1] = v391;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)&v345->m_Items[1], (int32_t)v391, v385, v386, v387, v388, v389, v390);
        if ( !Rarity_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
        selectItem = (__int64)Rarity__getRarityType(v343, 0);
        v398 = (Il2CppObject *)selectItem;
        if ( selectItem )
        {
          selectItem = sub_1C93C10(selectItem, v345->obj.klass->_1.element_class);
          if ( !selectItem )
            goto LABEL_332;
        }
        if ( LODWORD(v345->max_length) <= 2 )
          goto LABEL_329;
        v345->m_Items[2] = v398;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)&v345->m_Items[2], (int32_t)v398, v392, v393, v394, v395, v396, v397);
        selectItem = (__int64)ServantEntity__getClassName(v126, 0);
        v405 = (Il2CppObject *)selectItem;
        if ( selectItem )
        {
          selectItem = sub_1C93C10(selectItem, v345->obj.klass->_1.element_class);
          if ( !selectItem )
            goto LABEL_332;
        }
        if ( LODWORD(v345->max_length) <= 3 )
          goto LABEL_329;
        v345->m_Items[3] = v405;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)&v345->m_Items[3], (int32_t)v405, v399, v400, v401, v402, v403, v404);
        v407 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.currentCryptoKey;
        v406 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v427.fields.currentCryptoKey = v407;
        *(_QWORD *)&v427.fields.fakeValue = v406;
        v408 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v427, 0);
        selectItem = (__int64)ServantEntity__getName(v126, v408, -1, 0, 0);
        v376 = (Il2CppObject *)selectItem;
        if ( selectItem )
        {
          selectItem = sub_1C93C10(selectItem, v345->obj.klass->_1.element_class);
          if ( !selectItem )
            goto LABEL_332;
        }
        if ( LODWORD(v345->max_length) <= 4 )
          goto LABEL_329;
        v345->m_Items[4] = v376;
        v377 = (GrandQuestFolderBoardItem_o *)&v345->m_Items[4];
      }
      sub_1C93A78(v377, (int32_t)v376, v370, v371, v372, v373, v374, v375);
      v409 = System_String__Format_64467168(v344, v345, 0);
      v410 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v411 = LocalizationManager__Get((System_String_o *)StringLiteral_5520/*"EQUIP_GRAPH_USE_WARNING_TITLE"*/, 0);
      v412 = LocalizationManager__Get((System_String_o *)StringLiteral_3715/*"COMMON_CONFIRM_YES"*/, 0);
      v413 = LocalizationManager__Get((System_String_o *)StringLiteral_3710/*"COMMON_CONFIRM_NO"*/, 0);
      v414 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C93D20(CommonConfirmDialog_ClickDelegate_TypeInfo);
      CommonConfirmDialog_ClickDelegate___ctor(
        v414,
        (Il2CppObject *)this,
        Method_EquipGraphListViewManager_EndSelectConfirm__,
        0);
      if ( v410 )
      {
        CommonUI__OpenConfirmDialog_31581040(
          (CommonUI_o *)v410,
          v411,
          v409,
          v412,
          v413,
          v414,
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

  if ( (byte_4D2FEC0 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_17618/*"btn_filter_on"*/);
    sub_1C93AD4(&StringLiteral_17617/*"btn_filter"*/);
    byte_4D2FEC0 = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0),
        !filterSprite) )
  {
    sub_1C93D2C(sort, method);
  }
  v5 = (System_String_o **)&StringLiteral_17617/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v5 = (System_String_o **)&StringLiteral_17618/*"btn_filter_on"*/;
  UISprite__set_spriteName(filterSprite, *v5, 0);
}


void EquipGraphListViewManager__SetMode(
        EquipGraphListViewManager_o *this,
        int32_t mode,
        EquipGraphListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc = callback;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  EquipGraphListViewManager__SetMode_41693012(this, mode, v10);
}


void EquipGraphListViewManager__SetMode_41693012(
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
    sub_1C93D2C(servantItemDraw, v5);
  }
  UIScrollView__UpdatePosition((UIScrollView_o *)servantItemDraw, 0);
LABEL_7:
  if ( (unsigned int)(mode - 1) <= 2 )
    EquipGraphListViewManager__RequestListObject_41732396(this, mode + 1, v7);
}


void EquipGraphListViewManager__SetMode_41732344(
        EquipGraphListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc2 = callback;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc2,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  EquipGraphListViewManager__SetMode_41693012(this, mode, v10);
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
  if ( (byte_4D2FEB6 & 1) == 0 )
  {
    this = (EquipGraphListViewManager_o *)sub_1C93AD4(&EquipGraphListViewObject_TypeInfo);
    byte_4D2FEB6 = 1;
  }
  if ( !obj
    || (naturalAligment = EquipGraphListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (EquipGraphListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != EquipGraphListViewObject_TypeInfo )
  {
    sub_1C93D2C(this, obj);
  }
  if ( v5->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  EquipGraphListViewObject__Init_42868720((EquipGraphListViewObject_o *)obj, v7, 0, 0);
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
  UnityEngine_Color_o v19; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4D2FEC5 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&StringLiteral_17654/*"btn_sort_up"*/);
    sub_1C93AD4(&StringLiteral_17756/*"btn_txt_up"*/);
    sub_1C93AD4(&StringLiteral_17707/*"btn_txt_new"*/);
    sub_1C93AD4(&StringLiteral_17697/*"btn_txt_down"*/);
    sub_1C93AD4(&StringLiteral_17714/*"btn_txt_old"*/);
    sub_1C93AD4(&StringLiteral_17651/*"btn_sort_down"*/);
    byte_4D2FEC5 = 1;
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
      v10 = (System_String_o **)(v8->fields.isAscendingOrder ? &StringLiteral_17714/*"btn_txt_old"*/ : &StringLiteral_17707/*"btn_txt_new"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v10, 0);
      v11 = this->fields.sort;
      if ( !v11 )
        goto LABEL_47;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_47;
      v12 = (System_String_o **)&StringLiteral_17651/*"btn_sort_down"*/;
      v13 = (System_String_o **)&StringLiteral_17654/*"btn_sort_up"*/;
    }
    else
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_47;
      v14 = (System_String_o **)(v8->fields.isAscendingOrder ? &StringLiteral_17756/*"btn_txt_up"*/ : &StringLiteral_17697/*"btn_txt_down"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v14, 0);
      v11 = this->fields.sort;
      if ( !v11 )
        goto LABEL_47;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_47;
      v12 = (System_String_o **)&StringLiteral_17654/*"btn_sort_up"*/;
      v13 = (System_String_o **)&StringLiteral_17651/*"btn_sort_down"*/;
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
    v19.fields.r = 1.0;
    if ( equipGraphType == 1 )
      v19.fields.r = 0.5;
    if ( !sort )
      goto LABEL_47;
    v19.fields.a = 1.0;
    v19.fields.g = v19.fields.r;
    v19.fields.b = v19.fields.r;
    UIWidget__set_color((UIWidget_o *)sort, v19, 0);
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
    sub_1C93D2C(sort, v4);
  }
}


void EquipGraphListViewManager___EndSelectConfirm_b__88_0(
        EquipGraphListViewManager_o *this,
        EquipGraphListViewItem_WearerMemberInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C93D2C(this, 0);
  this->fields.baseCost -= x->fields._WearerEquipCost_k__BackingField;
}


bool EquipGraphListViewManager___EndSelectConfirm_b__88_1(
        EquipGraphListViewManager_o *this,
        EquipGraphListViewItem_WearerMemberInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C93D2C(this, 0);
  return x->fields._WearerMember_k__BackingField == this->fields.memberIndex;
}


void EquipGraphListViewManager___EndSelectConfirm_b__88_2(
        EquipGraphListViewManager_o *this,
        EquipGraphListViewItem_WearerMemberInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C93D2C(this, 0);
  this->fields.baseCost += x->fields._WearerEquipCost_k__BackingField;
}


void EquipGraphListViewManager___SelectEquip_b__87_0(
        EquipGraphListViewManager_o *this,
        EquipGraphListViewItem_WearerMemberInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C93D2C(this, 0);
  this->fields.baseCost += x->fields._WearerEquipCost_k__BackingField;
}


void EquipGraphListViewManager___SelectEquip_b__87_1(
        EquipGraphListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  struct System_Action_o *selectItemCallbackFunc; // x20

  if ( (byte_4D2FEC9 & 1) == 0 )
  {
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D2FEC9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C93D2C(0, v5);
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0);
  selectItemCallbackFunc = this->fields.selectItemCallbackFunc;
  if ( selectItemCallbackFunc )
  {
    this->fields.selectItemCallbackFunc = 0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.selectItemCallbackFunc, 0, v6, v7, v8, v9, v10, v11);
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
    sub_1C93D2C(this, 0);
  return x->fields._WearerMember_k__BackingField != this->fields.memberIndex;
}


void EquipGraphListViewManager___SelectEquip_b__87_3(
        EquipGraphListViewManager_o *this,
        EquipGraphListViewItem_WearerMemberInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C93D2C(this, 0);
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

  if ( (byte_4D2FEA5 & 1) == 0 )
  {
    sub_1C93AD4(&EquipGraphListViewManager_CallbackFunc_TypeInfo);
    byte_4D2FEA5 = 1;
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
    v8 = sub_1CEF8A8(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C940C8(v7);
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

  if ( (byte_4D2FEA7 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    byte_4D2FEA7 = 1;
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
    v8 = sub_1CEF8A8(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C940C8(v7);
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

  if ( (byte_4D2FEA9 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    byte_4D2FEA9 = 1;
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
    v8 = sub_1CEF8A8(p_selectItemCallbackFunc, v7, selectItemCallbackFunc);
    v9 = selectItemCallbackFunc == (System_Delegate_o *)v8;
    selectItemCallbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C940C8(v7);
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
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  _BOOL8 v20; // x0
  __int64 v21; // x1
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4D2FEAE & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_EquipGraphListViewObject___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EquipGraphListViewObject__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EquipGraphListViewObject___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_EquipGraphListViewObject__TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2FEAE = 1;
  }
  memset(&v28, 0, sizeof(v28));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_EquipGraphListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_EquipGraphListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C93D2C(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v27,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v28 = v27;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v28,
            (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v28.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v7 )
    {
      if ( !current )
        sub_1C93D2C(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_EquipGraphListViewObject___);
      v11 = Component_object;
      if ( !Component_object )
        sub_1C93D2C(0, v10);
      Item = (ListViewItem_o *)EquipGraphListViewObject__GetItem((EquipGraphListViewObject_o *)Component_object, 0);
      if ( !Item )
        sub_1C93D2C(0, v13);
      if ( Item->fields.isTermination )
      {
        v20 = ListViewManager__ClippingItem_44503492((ListViewManager_o *)this, Item, 0);
        if ( v20 )
        {
          if ( !v3 )
            sub_1C93D2C(v20, v21);
          items = v3->fields._items;
          v23 = Method_System_Collections_Generic_List_EquipGraphListViewObject__Add__;
          ++v3->fields._version;
          if ( !items )
            sub_1C93D2C(v20, v21);
          size = v3->fields._size;
          if ( (unsigned int)size < LODWORD(items->max_length) )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v11,
            *(const MethodInfo_387999C **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v3 )
          sub_1C93D2C(Item, v13);
        items = v3->fields._items;
        v23 = Method_System_Collections_Generic_List_EquipGraphListViewObject__Add__;
        ++v3->fields._version;
        if ( !items )
          sub_1C93D2C(Item, v13);
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
          goto LABEL_21;
LABEL_17:
        v25 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v25[4] = (Il2CppClass *)v11;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v25 + 4), (int32_t)v11, v14, v15, v16, v17, v18, v19);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v28,
    (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  Il2CppObject *v16; // x1
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4D2FEAD & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_EquipGraphListViewObject___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EquipGraphListViewObject__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EquipGraphListViewObject___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_EquipGraphListViewObject__TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2FEAD = 1;
  }
  memset(&v23, 0, sizeof(v23));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_EquipGraphListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_EquipGraphListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C93D2C(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v22,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v23 = v22;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v23,
            (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v23.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v7 )
    {
      if ( !current )
        sub_1C93D2C(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_EquipGraphListViewObject___);
      v16 = Component_object;
      if ( !v3 )
        sub_1C93D2C(Component_object, Component_object);
      items = v3->fields._items;
      v18 = Method_System_Collections_Generic_List_EquipGraphListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1C93D2C(Component_object, Component_object);
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_387999C **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
      }
      else
      {
        v20 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v20[4] = (Il2CppClass *)v16;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v20 + 4), (int32_t)v16, v10, v11, v12, v13, v14, v15);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v23,
    (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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

  if ( (byte_4D2FEA6 & 1) == 0 )
  {
    sub_1C93AD4(&EquipGraphListViewManager_CallbackFunc_TypeInfo);
    byte_4D2FEA6 = 1;
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
    v8 = sub_1CEF8A8(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C940C8(v7);
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

  if ( (byte_4D2FEA8 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    byte_4D2FEA8 = 1;
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
    v8 = sub_1CEF8A8(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C940C8(v7);
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

  if ( (byte_4D2FEAA & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    byte_4D2FEAA = 1;
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
    v8 = sub_1CEF8A8(p_selectItemCallbackFunc, v7, selectItemCallbackFunc);
    v9 = selectItemCallbackFunc == (System_Delegate_o *)v8;
    selectItemCallbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C940C8(v7);
  EquipGraphListViewManager__DeleteContinueData(v10);
}


void EquipGraphListViewManager_CallbackFunc___ctor(
        EquipGraphListViewManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C93B94(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C93D48(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C93BFC(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1AC94B8;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AC9460;
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
  if ( (byte_4D30BB2 & 1) == 0 )
  {
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&EquipGraphListViewManager_ResultKind_TypeInfo);
    byte_4D30BB2 = 1;
  }
  v10[2] = 0;
  v10[0] = j_il2cpp_value_box_0(EquipGraphListViewManager_ResultKind_TypeInfo, &v12);
  v10[1] = j_il2cpp_value_box_0(int_TypeInfo, &v11);
  return sub_1C93A88(this, v10, callback, object);
}


void EquipGraphListViewManager_CallbackFunc__EndInvoke(
        EquipGraphListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C93A8C(result, 0, method);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D30BB3 & 1) == 0 )
  {
    sub_1C93AD4(&EquipGraphListViewManager___c_TypeInfo);
    byte_4D30BB3 = 1;
  }
  v1 = (Il2CppObject *)sub_1C93D20(EquipGraphListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EquipGraphListViewManager___c_TypeInfo->static_fields->__9 = (struct EquipGraphListViewManager___c_o *)v1;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)EquipGraphListViewManager___c_TypeInfo->static_fields,
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
    sub_1C93D2C(this, 0);
  return y->fields.atk;
}


int32_t EquipGraphListViewManager___c___CreateList_b__66_3(
        EquipGraphListViewManager___c_o *this,
        UserServantEntity_o *y,
        const MethodInfo *method)
{
  if ( !y )
    sub_1C93D2C(this, 0);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  EquipGraphListViewManager___c__DisplayClass66_0_o *v9; // x20
  struct EquipGraphListViewManager_o *_4__this; // x8
  struct System_Int64_array *equipList; // x8
  _QWORD *v12; // x9
  __int64 type; // x10
  Il2CppClass **v14; // x8

  v9 = this;
  if ( (byte_4D30BB5 & 1) == 0 )
  {
    this = (EquipGraphListViewManager___c__DisplayClass66_0_o *)sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    byte_4D30BB5 = 1;
  }
  _4__this = v9->fields.__4__this;
  if ( !_4__this
    || (this = (EquipGraphListViewManager___c__DisplayClass66_0_o *)_4__this->fields.itemList) == 0
    || (equipList = this->fields.equipList,
        v12 = Method_System_Collections_Generic_List_ListViewItem__Add__,
        ++*(&this->fields.type + 1),
        !equipList) )
  {
    sub_1C93D2C(this, x);
  }
  type = this->fields.type;
  if ( (unsigned int)type >= LODWORD(equipList->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)x,
      *(const MethodInfo_387999C **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    v14 = &equipList->obj.klass + type;
    this->fields.type = type + 1;
    v14[4] = (Il2CppClass *)x;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v14 + 4), (int32_t)x, (int32_t)method, v3, v4, v5, v6, v7);
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
  if ( (byte_4D30BB4 & 1) == 0 )
  {
    this = (EquipGraphListViewManager___c__DisplayClass66_0_o *)sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4D30BB4 = 1;
  }
  if ( !x )
    goto LABEL_9;
  v5 = *(_OWORD *)&x->fields.id.fields.fakeValue;
  *(_OWORD *)&v10.fields.currentCryptoKey = *(_OWORD *)&x->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v10.fields.fakeValue = v5;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v9 = v10;
  this = (EquipGraphListViewManager___c__DisplayClass66_0_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(
                                                                &v9,
                                                                0);
  equipList = v4->fields.equipList;
  if ( !equipList )
LABEL_9:
    sub_1C93D2C(this, x);
  type = v4->fields.type;
  if ( (unsigned int)type >= LODWORD(equipList->max_length) )
    sub_1C93D34(this);
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
  DataMasterBase_TMaster__TEntity__PKType__o *skillMaster; // x21
  ServantSkillMaster_o *svtSkillMaster; // x22
  __int64 v7; // x20
  __int64 v8; // x23
  System_Int32_array *ActIndividuality; // x0
  System_Func_int__bool__o *_9__5; // x22
  System_Int32_array *v11; // x20
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  v4 = this;
  if ( (byte_4D30BB6 & 1) == 0 )
  {
    sub_1C93AD4(&Method_BasicHelper_Any_int____79060720);
    sub_1C93AD4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1C93AD4(&System_Func_int__bool__TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (EquipGraphListViewManager___c__DisplayClass66_1_o *)sub_1C93AD4(&Method_EquipGraphListViewManager___c__DisplayClass66_1__CreateList_b__5__);
    byte_4D30BB6 = 1;
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
  *(_QWORD *)&v19.fields.currentCryptoKey = v8;
  *(_QWORD *)&v19.fields.fakeValue = v7;
  this = (EquipGraphListViewManager___c__DisplayClass66_1_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(
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
                                                                      (const MethodInfo_3463274 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__)) == 0 )
  {
LABEL_15:
    sub_1C93D2C(this, x);
  }
  ActIndividuality = SkillEntity__getActIndividuality((SkillEntity_o *)this, 0);
  _9__5 = v4->fields.__9__5;
  v11 = ActIndividuality;
  if ( !_9__5 )
  {
    _9__5 = (System_Func_int__bool__o *)sub_1C93D20(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      _9__5,
      (Il2CppObject *)v4,
      Method_EquipGraphListViewManager___c__DisplayClass66_1__CreateList_b__5__,
      0);
    v4->fields.__9__5 = _9__5;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&v4->fields.__9__5, (int32_t)_9__5, v12, v13, v14, v15, v16, v17);
  }
  return BasicHelper__Any_int__51960056(
           v11,
           (System_Func_T__bool__o *)_9__5,
           (const MethodInfo_318D8F8 *)Method_BasicHelper_Any_int____79060720);
}


bool EquipGraphListViewManager___c__DisplayClass66_1___CreateList_b__5(
        EquipGraphListViewManager___c__DisplayClass66_1_o *this,
        int32_t y,
        const MethodInfo *method)
{
  if ( (byte_4D30BB7 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Linq_Enumerable_Contains_int___);
    byte_4D30BB7 = 1;
  }
  return System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.svtInvIndividuality,
           y,
           (const MethodInfo_31C106C *)Method_System_Linq_Enumerable_Contains_int___);
}


// local variable allocation has failed, the output may be wrong!
bool EquipGraphListViewManager___c__DisplayClass66_1___CreateList_b__6(
        EquipGraphListViewManager___c__DisplayClass66_1_o *this,
        int32_t x,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *rewardUpCategoryList; // x0

  if ( (byte_4D30BB8 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_HashSet_int__Contains__);
    byte_4D30BB8 = 1;
  }
  rewardUpCategoryList = this->fields.rewardUpCategoryList;
  if ( !rewardUpCategoryList )
    sub_1C93D2C(0, *(_QWORD *)&x);
  return System_Collections_Generic_HashSet_int___Contains(
           rewardUpCategoryList,
           x,
           (const MethodInfo_3725A9C *)Method_System_Collections_Generic_HashSet_int__Contains__);
}