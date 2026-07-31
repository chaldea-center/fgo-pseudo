void RecommendSupportEquipSelectListViewItem___ctor(
        RecommendSupportEquipSelectListViewItem_o *this,
        int32_t index,
        UserServantEntity_o *entity,
        int64_t targetSvtEquipId,
        int64_t oldTargetSvtEquipId,
        int64_t useSvtEquipId,
        UserServantEntity_o *equipEntity,
        const MethodInfo *method)
{
  IconLabelInfo_o *v15; // x20
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  IconLabelInfo_o *v22; // x27
  struct IconLabelInfo_o **p_iconLabelInfo2; // x20
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  struct UserServantEntity_o **p_equippedUserSvtEntity; // x22
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_userSvtEntity; // x21
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7
  __int64 v44; // x1
  int64_t userSvtEntity; // x0
  struct ServantEntity_o *ServantEntity; // x0
  System_String_o *v47; // x2
  System_String_o *v48; // x3
  int32_t v49; // w4
  int32_t v50; // w5
  bool v51; // w6
  bool v52; // w7
  __int64 v53; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v54; // x8
  ServantLimitMaster_o *v55; // x26
  __int64 v56; // x27
  __int64 v57; // x28
  int32_t v58; // w27
  __int64 v59; // x2
  struct UserServantEntity_o *v60; // x8
  __int128 v61; // q1
  __int64 v62; // x2
  struct UserServantEntity_o *v63; // x8
  __int128 v64; // q0
  __int128 v65; // q1
  int v66; // w8
  __int64 v67; // x2
  bool v68; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v69; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v70; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v71; // q1
  int v72; // w8
  bool IsLock; // w8
  __int64 v74; // x2
  struct ServantEntity_o *v75; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v76; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c *v77; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v78; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v79; // q1
  int v80; // w8
  int64_t v81; // x8
  bool IsFriendShipSvtEquip; // w8
  bool IsChocolateSvtEquip; // w0
  __int64 v84; // x2
  struct UserServantEntity_o *equippedUserSvtEntity; // x8
  __int64 v86; // x23
  __int64 v87; // x24
  __int64 v88; // x2
  struct UserServantEntity_o *v89; // x8
  PartyOrganizationUtility_o *v90; // x23
  __int64 v91; // x24
  __int64 v92; // x25
  UserServantEntity_o *v93; // x8
  int32_t v94; // w22
  int32_t v95; // w24
  struct System_Int32_array *EquipCategoryIdList; // x0
  MissionNaviTransitionBoardItem_o *p_categoryIdList; // x19
  System_String_o *v98; // x2
  System_String_o *v99; // x3
  int32_t v100; // w4
  int32_t v101; // w5
  bool v102; // w6
  bool v103; // w7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v104; // [xsp+10h] [xbp-110h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v105; // [xsp+30h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v106; // [xsp+50h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v107; // [xsp+70h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v108; // [xsp+90h] [xbp-90h]
  int32_t actMaxRarity; // [xsp+B4h] [xbp-6Ch] BYREF
  System_String_o *skillName; // [xsp+B8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v111; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v112; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v113; // 0:x0.16

  if ( (byte_5934316 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_21FFC50(&IconLabelInfo_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_5934316 = 1;
  }
  skillName = 0;
  actMaxRarity = 0;
  v15 = (IconLabelInfo_o *)sub_21FFEBC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v15, 0);
  this->fields.iconLabelInfo1 = v15;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.iconLabelInfo1,
    (int32_t)v15,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  v22 = (IconLabelInfo_o *)sub_21FFEBC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v22, 0);
  this->fields.iconLabelInfo2 = v22;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.iconLabelInfo2,
    (int32_t)v22,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  ListViewItem___ctor_50749276((ListViewItem_o *)this, index, 0);
  this->fields.equippedUserSvtEntity = equipEntity;
  p_equippedUserSvtEntity = &this->fields.equippedUserSvtEntity;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.equippedUserSvtEntity,
    (int32_t)equipEntity,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  this->fields.userSvtEntity = entity;
  p_userSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userSvtEntity;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.userSvtEntity,
    (int32_t)entity,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  userSvtEntity = (int64_t)this->fields.userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_49;
  ServantEntity = UserServantEntity__GetServantEntity((UserServantEntity_o *)userSvtEntity, -1, 0);
  this->fields.servantEntity = ServantEntity;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.servantEntity,
    (int32_t)ServantEntity,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52);
  userSvtEntity = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !userSvtEntity )
    goto LABEL_49;
  userSvtEntity = (int64_t)DataManager__GetMasterData_object_(
                             (DataManager_o *)userSvtEntity,
                             (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v54 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_49;
  v55 = (ServantLimitMaster_o *)userSvtEntity;
  v56 = *(_QWORD *)&v54[5].fields.currentCryptoKey;
  v57 = *(_QWORD *)&v54[5].fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v44, v53);
  *(_QWORD *)&v111.fields.currentCryptoKey = v56;
  *(_QWORD *)&v111.fields.fakeValue = v57;
  userSvtEntity = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v111, 0);
  if ( !*p_userSvtEntity )
    goto LABEL_49;
  v58 = userSvtEntity;
  userSvtEntity = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412((*p_userSvtEntity)[6], 0);
  if ( !v55 )
    goto LABEL_49;
  userSvtEntity = (int64_t)ServantLimitMaster__GetEntity(v55, v58, userSvtEntity, 0);
  if ( !userSvtEntity )
    goto LABEL_49;
  v60 = this->fields.userSvtEntity;
  this->fields.rarity = *(_DWORD *)(userSvtEntity + 24);
  if ( !v60 )
    goto LABEL_49;
  v61 = *(_OWORD *)&v60->fields.id.fields.fakeValue;
  *(_OWORD *)&v108.fields.currentCryptoKey = *(_OWORD *)&v60->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v108.fields.fakeValue = v61;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v44, v59);
  v107 = v108;
  userSvtEntity = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v107, 0);
  if ( userSvtEntity == targetSvtEquipId )
  {
    *(_WORD *)&this->fields.isBase = 1;
  }
  else
  {
    v63 = this->fields.userSvtEntity;
    this->fields.isBase = 0;
    if ( !v63 )
      goto LABEL_49;
    v64 = *(_OWORD *)&v63->fields.id.fields.currentCryptoKey;
    v65 = *(_OWORD *)&v63->fields.id.fields.fakeValue;
    v66 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
    *(_OWORD *)&v108.fields.currentCryptoKey = v64;
    *(_OWORD *)&v108.fields.fakeValue = v65;
    if ( !v66 )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v44, v62);
    v106 = v108;
    userSvtEntity = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v106, 0);
    if ( userSvtEntity == oldTargetSvtEquipId )
    {
      v68 = 0;
    }
    else
    {
      v69 = *p_userSvtEntity;
      if ( !*p_userSvtEntity )
        goto LABEL_49;
      v70 = v69[1];
      v71 = v69[2];
      v72 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v108.fields.currentCryptoKey = v70;
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v108.fields.fakeValue = v71;
      if ( !v72 )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v44, v67);
      v105 = v108;
      v68 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v105, 0) == useSvtEquipId;
    }
    this->fields.isUse = v68;
  }
  userSvtEntity = (int64_t)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_49;
  IsLock = UserServantEntity__IsLock((UserServantEntity_o *)userSvtEntity, 0);
  userSvtEntity = (int64_t)this->fields.userSvtEntity;
  this->fields.isLock = IsLock;
  if ( !userSvtEntity )
    goto LABEL_49;
  userSvtEntity = UserServantEntity__IsChoice((UserServantEntity_o *)userSvtEntity, 0);
  v75 = this->fields.servantEntity;
  this->fields.isChoice = userSvtEntity & 1;
  this->fields.isEventUpVal = 0;
  *(_QWORD *)&this->fields.bonusKind = 1;
  if ( !v75 )
    goto LABEL_49;
  v76 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_49;
  v77 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo;
  this->fields.sortValue2 = ((__int64)v75->fields.collectionNo << 16)
                          | ((unsigned __int64)(unsigned int)this->fields.rarity << 48)
                          | v76[25].fields.currentCryptoKey;
  v78 = v76[1];
  v79 = v76[2];
  v80 = *(&v77->_2.cctor_finished + 1);
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v108.fields.currentCryptoKey = v78;
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v108.fields.fakeValue = v79;
  if ( !v80 )
    j_il2cpp_runtime_class_init_0(v77, v44, v74);
  v104 = v108;
  v81 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v104, 0);
  userSvtEntity = (int64_t)this->fields.userSvtEntity;
  this->fields.sortValue2B = v81;
  this->fields.amountSortValue = -1;
  *(_WORD *)&this->fields.isSwapLock = 0;
  if ( !userSvtEntity )
    goto LABEL_49;
  IsFriendShipSvtEquip = UserServantEntity__IsFriendShipSvtEquip((UserServantEntity_o *)userSvtEntity, 0);
  userSvtEntity = (int64_t)this->fields.userSvtEntity;
  this->fields._IsFriendShipSvtEq_k__BackingField = IsFriendShipSvtEquip;
  if ( !userSvtEntity )
    goto LABEL_49;
  IsChocolateSvtEquip = UserServantEntity__IsChocolateSvtEquip((UserServantEntity_o *)userSvtEntity, 0);
  equippedUserSvtEntity = this->fields.equippedUserSvtEntity;
  this->fields._IsChocolateSvtEquip_k__BackingField = IsChocolateSvtEquip;
  if ( equippedUserSvtEntity )
  {
    v86 = *(_QWORD *)&equippedUserSvtEntity->fields.svtId.fields.currentCryptoKey;
    v87 = *(_QWORD *)&equippedUserSvtEntity->fields.svtId.fields.fakeValue;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v44, v84);
    *(_QWORD *)&v112.fields.currentCryptoKey = v86;
    *(_QWORD *)&v112.fields.fakeValue = v87;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v112, 0) >= 1 )
    {
      userSvtEntity = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      v89 = *p_equippedUserSvtEntity;
      if ( *p_equippedUserSvtEntity )
      {
        v90 = (PartyOrganizationUtility_o *)userSvtEntity;
        v91 = *(_QWORD *)&v89->fields.svtId.fields.currentCryptoKey;
        v92 = *(_QWORD *)&v89->fields.svtId.fields.fakeValue;
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v44, v88);
        *(_QWORD *)&v113.fields.currentCryptoKey = v91;
        *(_QWORD *)&v113.fields.fakeValue = v92;
        userSvtEntity = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v113, 0);
        v93 = *p_equippedUserSvtEntity;
        if ( *p_equippedUserSvtEntity )
        {
          v94 = userSvtEntity;
          userSvtEntity = UserServantEntity__getRarity(v93, 0);
          if ( *p_userSvtEntity )
          {
            v95 = userSvtEntity;
            userSvtEntity = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(
                              (*p_userSvtEntity)[5],
                              0);
            if ( v90 )
            {
              this->fields.isInvalidRarity = PartyOrganizationUtility__IsRarityRestriction(
                                               v90,
                                               &skillName,
                                               &actMaxRarity,
                                               v94,
                                               v95,
                                               userSvtEntity,
                                               -1,
                                               0);
              goto LABEL_45;
            }
          }
        }
      }
LABEL_49:
      sub_21FFECC(userSvtEntity, v44);
    }
  }
LABEL_45:
  userSvtEntity = (int64_t)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_49;
  EquipCategoryIdList = UserServantEntity__GetEquipCategoryIdList((UserServantEntity_o *)userSvtEntity, 1, 0);
  this->fields.categoryIdList = EquipCategoryIdList;
  p_categoryIdList = (MissionNaviTransitionBoardItem_o *)&this->fields.categoryIdList;
  sub_21FFBF4(p_categoryIdList, (int32_t)EquipCategoryIdList, v98, v99, v100, v101, v102, v103);
  userSvtEntity = (int64_t)p_categoryIdList->monitor;
  if ( !userSvtEntity )
    goto LABEL_49;
  IconLabelInfo__Clear((IconLabelInfo_o *)userSvtEntity, 0);
  userSvtEntity = (int64_t)*p_iconLabelInfo2;
  if ( !*p_iconLabelInfo2 )
    goto LABEL_49;
  IconLabelInfo__Clear((IconLabelInfo_o *)userSvtEntity, 0);
}


bool RecommendSupportEquipSelectListViewItem__IsMatchFilter(
        RecommendSupportEquipSelectListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  _BOOL8 v3; // x0

  if ( this->fields.isBase )
    return (char)&dword_0 + 1;
  else
    LOBYTE(v3) = RecommendSupportEquipSelectListViewItem__IsMatchServantEquipFilter(this, sort, method);
  return v3;
}


bool RecommendSupportEquipSelectListViewItem__IsMatchServantEquipFilter(
        RecommendSupportEquipSelectListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  FilterKindList_c *v5; // x0
  System_Int32Enum_array *RarityFilterKindList; // x0
  __int64 v7; // x2
  FilterKindList_c *v8; // x0
  ListViewSort_FilterKind_array *v9; // x0
  __int64 v10; // x2
  FilterKindList_c *v11; // x0
  ListViewSort_FilterKind_array *v12; // x0
  __int64 v13; // x2
  bool IsMatchServantEquipCombineStatusFilter; // w8
  bool result; // w0
  FilterKindList_c *v16; // x0
  ListViewSort_FilterKind_array *v17; // x0
  bool HaveStatusFilter; // w8
  _BOOL4 isChoice; // w8

  if ( (byte_5934319 & 1) == 0 )
  {
    sub_21FFC50(&FilterKindList_TypeInfo);
    sub_21FFC50(&ListViewSort_FilterKind___TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    byte_5934319 = 1;
  }
  v5 = FilterKindList_TypeInfo;
  if ( !*(&FilterKindList_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort, method);
    v5 = FilterKindList_TypeInfo;
  }
  RarityFilterKindList = (System_Int32Enum_array *)v5->static_fields->RarityFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_36;
  RarityFilterKindList = System_Collections_Generic_List_Int32Enum___ToArray(
                           (System_Collections_Generic_List_T__o *)RarityFilterKindList,
                           (const MethodInfo_44373D0 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_36;
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)RarityFilterKindList, 0)
    && !ListViewSort__IsMatchRarityFilter(sort, this->fields.rarity, 0)
    || !ListViewSort__CheckSvtEquipEffectFilterDefaultAll(sort, 0)
    && !ServantEquipEffectFilterController__IsMatchEffectCategory(this->fields.categoryIdList, sort, 0) )
  {
    return 0;
  }
  v8 = FilterKindList_TypeInfo;
  if ( !*(&FilterKindList_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort, v7);
    v8 = FilterKindList_TypeInfo;
  }
  RarityFilterKindList = (System_Int32Enum_array *)v8->static_fields->ServantEquipTypeFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_36;
  v9 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                          (System_Collections_Generic_List_T__o *)RarityFilterKindList,
                                          (const MethodInfo_44373D0 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v9, 0)
    && !ListViewSort__IsMatchServantEquipTypeFilter(sort, this->fields.servantEntity, 0) )
  {
    return 0;
  }
  v11 = FilterKindList_TypeInfo;
  if ( !*(&FilterKindList_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort, v10);
    v11 = FilterKindList_TypeInfo;
  }
  RarityFilterKindList = (System_Int32Enum_array *)v11->static_fields->ServantEquipCombineStatusFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_36;
  v12 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)RarityFilterKindList,
                                           (const MethodInfo_44373D0 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, v12, 0)
    || (IsMatchServantEquipCombineStatusFilter = ListViewSort__IsMatchServantEquipCombineStatusFilter(
                                                   sort,
                                                   this->fields.userSvtEntity,
                                                   this->fields.servantEntity,
                                                   0,
                                                   0),
        result = 0,
        IsMatchServantEquipCombineStatusFilter) )
  {
    v16 = FilterKindList_TypeInfo;
    if ( !*(&FilterKindList_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort, v13);
      v16 = FilterKindList_TypeInfo;
    }
    RarityFilterKindList = (System_Int32Enum_array *)v16->static_fields->ServantEquipHaveStatusFilterKindList;
    if ( !RarityFilterKindList )
      goto LABEL_36;
    v17 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                             (System_Collections_Generic_List_T__o *)RarityFilterKindList,
                                             (const MethodInfo_44373D0 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, v17, 0)
      || (HaveStatusFilter = ListViewSort__IsMatchServantEquipHaveStatusFilter(
                               sort,
                               this->fields.userSvtEntity,
                               this->fields.servantEntity,
                               0,
                               0),
          result = 0,
          HaveStatusFilter) )
    {
      RarityFilterKindList = (System_Int32Enum_array *)sub_21FFD10(ListViewSort_FilterKind___TypeInfo, 1);
      if ( RarityFilterKindList )
      {
        if ( !LODWORD(RarityFilterKindList->max_length) )
          sub_21FFED4(RarityFilterKindList);
        RarityFilterKindList->m_Items[0] = 39;
        if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)RarityFilterKindList, 0)
          || !ListViewSort__GetFilter(sort, 39, 0) )
        {
          return 1;
        }
        isChoice = this->fields.isChoice;
        if ( this->fields.isSwapChoice )
          return !this->fields.isChoice;
        return isChoice;
      }
LABEL_36:
      sub_21FFECC(RarityFilterKindList, sort);
    }
  }
  return result;
}


void RecommendSupportEquipSelectListViewItem__ModifyChoiceItem(
        RecommendSupportEquipSelectListViewItem_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0
  bool IsChoice; // w0

  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_21FFECC(0, method);
  IsChoice = UserServantEntity__IsChoice(userSvtEntity, 0);
  this->fields.isSwapChoice = 0;
  this->fields.isChoice = IsChoice;
}


void RecommendSupportEquipSelectListViewItem__ModifyItem(
        RecommendSupportEquipSelectListViewItem_o *this,
        UserServantEntity_o *entity,
        int64_t targetSvtEquipId,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct UserServantEntity_o **p_userSvtEntity; // x21
  __int64 v12; // x1
  int64_t userSvtEntity; // x0
  struct ServantEntity_o *ServantEntity; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  __int64 v21; // x2
  struct UserServantEntity_o *v22; // x8
  ServantLimitMaster_o *v23; // x22
  __int64 v24; // x23
  __int64 v25; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v26; // x8
  int32_t v27; // w21
  __int64 v28; // x2
  struct UserServantEntity_o *v29; // x8
  __int128 v30; // q1
  int64_t rarity; // x9
  struct ServantEntity_o *v32; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v34; // [xsp+20h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v35; // 0:x0.16

  if ( (byte_5934317 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5934317 = 1;
  }
  this->fields.userSvtEntity = entity;
  p_userSvtEntity = &this->fields.userSvtEntity;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.userSvtEntity,
    (int32_t)entity,
    (System_String_o *)targetSvtEquipId,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  userSvtEntity = (int64_t)this->fields.userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_16;
  ServantEntity = UserServantEntity__GetServantEntity((UserServantEntity_o *)userSvtEntity, -1, 0);
  this->fields.servantEntity = ServantEntity;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.servantEntity,
    (int32_t)ServantEntity,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  userSvtEntity = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !userSvtEntity )
    goto LABEL_16;
  userSvtEntity = (int64_t)DataManager__GetMasterData_object_(
                             (DataManager_o *)userSvtEntity,
                             (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v22 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_16;
  v23 = (ServantLimitMaster_o *)userSvtEntity;
  v24 = *(_QWORD *)&v22->fields.svtId.fields.currentCryptoKey;
  v25 = *(_QWORD *)&v22->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12, v21);
  *(_QWORD *)&v35.fields.currentCryptoKey = v24;
  *(_QWORD *)&v35.fields.fakeValue = v25;
  userSvtEntity = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v35, 0);
  v26 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_16;
  v27 = userSvtEntity;
  userSvtEntity = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v26[6], 0);
  if ( !v23 )
    goto LABEL_16;
  userSvtEntity = (int64_t)ServantLimitMaster__GetEntity(v23, v27, userSvtEntity, 0);
  if ( !userSvtEntity )
    goto LABEL_16;
  v29 = this->fields.userSvtEntity;
  this->fields.rarity = *(_DWORD *)(userSvtEntity + 24);
  if ( !v29 )
    goto LABEL_16;
  v30 = *(_OWORD *)&v29->fields.id.fields.fakeValue;
  *(_OWORD *)&v34.fields.currentCryptoKey = *(_OWORD *)&v29->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v34.fields.fakeValue = v30;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12, v28);
  v33 = v34;
  userSvtEntity = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v33, 0);
  rarity = this->fields.rarity;
  v32 = this->fields.servantEntity;
  this->fields.isBase = userSvtEntity == targetSvtEquipId;
  this->fields.sortValue1B = rarity;
  if ( !v32 )
LABEL_16:
    sub_21FFECC(userSvtEntity, v12);
  this->fields.sortValue2 = v32->fields.collectionNo;
}


void RecommendSupportEquipSelectListViewItem__ModifyLockItem(
        RecommendSupportEquipSelectListViewItem_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0
  bool IsLock; // w0

  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_21FFECC(0, method);
  IsLock = UserServantEntity__IsLock(userSvtEntity, 0);
  this->fields.isSwapLock = 0;
  this->fields.isLock = IsLock;
}


bool RecommendSupportEquipSelectListViewItem__SetSortValue(
        RecommendSupportEquipSelectListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  RecommendSupportEquipSelectListViewItem_o *v4; // x19
  _BOOL4 isChoice; // w8
  _BOOL4 isSwapChoice; // w9
  bool v7; // zf
  _BOOL4 v8; // w8
  int v9; // w10
  __int64 v10; // x2
  int32_t sortKind; // w8
  int64_t iconLabelInfo1_high; // x20
  RecommendSupportEquipSelectListViewItem_o *v13; // x21
  int32_t v14; // w3
  int32_t v15; // w1
  int32_t bonusKind2; // w8
  int32_t v17; // w8
  int64_t categoryIdList_low; // x20
  IconLabelInfo_o *v19; // x21
  struct ListViewManager_o *manager; // x8
  __int64 naturalAligment; // x11
  UnityEngine_Object_o *v22; // x20
  int32_t bonusKind2Id; // w9
  int isEventUpVal; // w8
  struct UserServantEntity_o *v25; // x8
  __int128 v26; // q1
  struct UserServantEntity_o *v27; // x8
  RecommendSupportEquipSelectListViewItem_o *v28; // x21
  int64_t cost; // x2
  struct ServantEntity_o *servantEntity; // x8
  IconLabelInfo_o *iconLabelInfo1; // x19
  unsigned __int64 rarity; // x8
  int32_t v33; // w8
  int v34; // w8
  UserServantEntity_o *userSvtEntity; // x21
  bool EventUpVal_50122796; // w0
  DataManager_c *v37; // x0
  __int64 v38; // x2
  struct UserServantEntity_o *v39; // x8
  EventCampaignMaster_o *v40; // x21
  __int64 v41; // x22
  __int64 v42; // x23
  bool IsEnableServant; // w0
  System_Collections_Generic_List_EventGroupEntity__o *EntitiesByGroupId; // x21
  System_Func_object__bool__o *v45; // x22
  __int64 v46; // x2
  struct UserServantEntity_o *v47; // x8
  __int64 v48; // x21
  __int64 v49; // x22
  const MethodInfo *v50; // x2
  struct ServantEntity_o *v51; // x8
  int32_t categoryIdList; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v54; // [xsp+10h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v55; // [xsp+30h] [xbp-50h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v56; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v57; // 0:x0.16

  v4 = this;
  if ( (byte_5934318 & 1) == 0 )
  {
    sub_21FFC50(&Method_BasicHelper_Any_EventGroupEntity___);
    sub_21FFC50(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_EventGroupMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&System_Func_EventGroupEntity__bool__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventGroupEntity__get_Count__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_21FFC50(&Method_RecommendSupportEquipSelectListViewItem__SetSortValue_b__22_0__);
    sub_21FFC50(&RecommendSupportEquipSelectListViewManager_TypeInfo);
    this = (RecommendSupportEquipSelectListViewItem_o *)sub_21FFC50(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    byte_5934318 = 1;
  }
  *(_WORD *)&v4->fields.isTermination = 0;
  v4->fields.sortValue1 = -1;
  if ( !sort )
    goto LABEL_108;
  if ( !sort->fields.isBonusKind || v4->fields.isBase )
    goto LABEL_6;
  bonusKind2 = sort->fields.bonusKind2;
  if ( (unsigned int)(bonusKind2 - 4) < 2 )
  {
    if ( v4->fields.bonusKind == bonusKind2 )
    {
      bonusKind2Id = sort->fields.bonusKind2Id;
      if ( v4->fields.bonusKindId == bonusKind2Id )
      {
        isEventUpVal = v4->fields.isEventUpVal;
        goto LABEL_66;
      }
    }
    else
    {
      bonusKind2Id = sort->fields.bonusKind2Id;
    }
    userSvtEntity = v4->fields.userSvtEntity;
    v4->fields.bonusKind = bonusKind2;
    v4->fields.bonusKindId = bonusKind2Id;
    this = (RecommendSupportEquipSelectListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    if ( !this || !userSvtEntity )
      goto LABEL_108;
    EventUpVal_50122796 = UserServantEntity__getEventUpVal_50122796(
                            userSvtEntity,
                            -1,
                            0,
                            0,
                            *(EventUpValSetupInfo_o **)&this->fields.basePosition.fields.y,
                            v4->fields.bonusKindId,
                            0,
                            0);
    isEventUpVal = EventUpVal_50122796;
    v4->fields.isEventUpVal = EventUpVal_50122796;
LABEL_66:
    if ( !isEventUpVal || v4->fields.isInvalidRarity )
      goto LABEL_88;
    goto LABEL_6;
  }
  if ( bonusKind2 == 3 )
  {
    if ( v4->fields.bonusKind == 3 )
    {
      v33 = sort->fields.bonusKind2Id;
      if ( v4->fields.bonusKindId == v33 )
      {
        v34 = v4->fields.isEventUpVal;
        goto LABEL_77;
      }
    }
    else
    {
      v33 = sort->fields.bonusKind2Id;
    }
    v37 = DataManager_TypeInfo;
    v4->fields.bonusKind = 3;
    v4->fields.bonusKindId = v33;
    if ( !*(&v37->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(v37, sort, method);
    this = (RecommendSupportEquipSelectListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_EventCampaignMaster___);
    v39 = v4->fields.userSvtEntity;
    if ( !v39 )
      goto LABEL_108;
    v40 = (EventCampaignMaster_o *)this;
    v41 = *(_QWORD *)&v39->fields.svtId.fields.currentCryptoKey;
    v42 = *(_QWORD *)&v39->fields.svtId.fields.fakeValue;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, sort, v38);
    *(_QWORD *)&v56.fields.currentCryptoKey = v41;
    *(_QWORD *)&v56.fields.fakeValue = v42;
    this = (RecommendSupportEquipSelectListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(
                                                          v56,
                                                          0);
    if ( !v40 )
      goto LABEL_108;
    IsEnableServant = EventCampaignMaster__IsEnableServant(v40, (int32_t)this, v4->fields.bonusKindId, 0);
    v34 = IsEnableServant;
    v4->fields.isEventUpVal = IsEnableServant;
LABEL_77:
    if ( !v34 )
      goto LABEL_88;
    goto LABEL_6;
  }
  if ( bonusKind2 )
    goto LABEL_6;
  if ( v4->fields.bonusKind )
  {
    v17 = sort->fields.bonusKind2Id;
  }
  else
  {
    v17 = sort->fields.bonusKind2Id;
    if ( v4->fields.bonusKindId == v17 )
      goto LABEL_87;
  }
  v4->fields.bonusKind = 0;
  v4->fields.bonusKindId = v17;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, sort, method);
  this = (RecommendSupportEquipSelectListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_EventGroupMaster___);
  if ( !this )
    goto LABEL_108;
  EntitiesByGroupId = EventGroupMaster__GetEntitiesByGroupId((EventGroupMaster_o *)this, v4->fields.bonusKindId, 0);
  this = (RecommendSupportEquipSelectListViewItem_o *)BasicHelper__IsNullOrEmpty(
                                                        (System_Collections_ICollection_o *)EntitiesByGroupId,
                                                        0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( !EntitiesByGroupId )
      goto LABEL_108;
    if ( EntitiesByGroupId->fields._size >= 2 )
    {
      v45 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_EventGroupEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v45,
        (Il2CppObject *)v4,
        Method_RecommendSupportEquipSelectListViewItem__SetSortValue_b__22_0__,
        0);
      v4->fields.isEventUpVal = BasicHelper__Any_object_(
                                  (System_Collections_Generic_List_T__o *)EntitiesByGroupId,
                                  (System_Func_T__bool__o *)v45,
                                  (const MethodInfo_37DCA30 *)Method_BasicHelper_Any_EventGroupEntity___);
    }
  }
LABEL_87:
  if ( !v4->fields.isEventUpVal )
    goto LABEL_88;
LABEL_6:
  if ( (((__int64 (__fastcall *)(RecommendSupportEquipSelectListViewItem_o *, ListViewSort_o *, const MethodInfo *))v4->klass->vtable._5_IsMatchFilter.methodPtr)(
          v4,
          sort,
          v4->klass->vtable._5_IsMatchFilter.method)
      & 1) == 0 )
  {
LABEL_88:
    LOBYTE(this) = 0;
    return (char)this;
  }
  isChoice = v4->fields.isChoice;
  isSwapChoice = v4->fields.isSwapChoice;
  v4->fields.sortValue0 = 0;
  v7 = !isChoice;
  v8 = isChoice;
  v9 = v7;
  if ( isSwapChoice )
    v8 = v9;
  if ( v8 && sort->fields.isChoiceSort )
    v4->fields.sortValue0 = 10;
  this = (RecommendSupportEquipSelectListViewItem_o *)v4->fields.iconLabelInfo2;
  if ( !this )
    goto LABEL_108;
  IconLabelInfo__Clear((IconLabelInfo_o *)this, 0);
  sortKind = sort->fields.sortKind;
  this = (RecommendSupportEquipSelectListViewItem_o *)(&dword_0 + 1);
  if ( sortKind <= 4 )
  {
    switch ( sortKind )
    {
      case 1:
        v25 = v4->fields.userSvtEntity;
        if ( !v25 )
          goto LABEL_108;
        v26 = *(_OWORD *)&v25->fields.id.fields.fakeValue;
        *(_OWORD *)&v55.fields.currentCryptoKey = *(_OWORD *)&v25->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v55.fields.fakeValue = v26;
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, sort, v10);
        v54 = v55;
        this = (RecommendSupportEquipSelectListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(
                                                              &v54,
                                                              0);
        v27 = v4->fields.userSvtEntity;
        v4->fields.sortValue1 = (int64_t)this;
        if ( !v27 )
          goto LABEL_108;
        this = (RecommendSupportEquipSelectListViewItem_o *)v4->fields.iconLabelInfo1;
        if ( !this )
          goto LABEL_108;
        IconLabelInfo__SetTime((IconLabelInfo_o *)this, 49, v27->fields.createdAt, 0, 0, 0, 0);
        goto LABEL_56;
      case 2:
        rarity = v4->fields.rarity;
        this = (RecommendSupportEquipSelectListViewItem_o *)v4->fields.userSvtEntity;
LABEL_102:
        v4->fields.sortValue1 = rarity;
        if ( !this )
          goto LABEL_108;
        iconLabelInfo1 = v4->fields.iconLabelInfo1;
        goto LABEL_104;
      case 3:
        this = (RecommendSupportEquipSelectListViewItem_o *)v4->fields.userSvtEntity;
        if ( this )
        {
          categoryIdList_low = SLODWORD(this[1].fields.categoryIdList);
          v19 = v4->fields.iconLabelInfo1;
          v4->fields.sortValue1 = categoryIdList_low;
          this = (RecommendSupportEquipSelectListViewItem_o *)UserServantEntity__getLevelMax(
                                                                (UserServantEntity_o *)this,
                                                                0);
          if ( v19 )
          {
            IconLabelInfo__Set_47932852(v19, 2, categoryIdList_low, (int32_t)this, 0, 0, 0, 0, 0, 0);
LABEL_106:
            LOBYTE(this) = 1;
            return (char)this;
          }
        }
LABEL_108:
        sub_21FFECC(this, sort);
    }
  }
  else
  {
    if ( sortKind <= 6 )
    {
      if ( sortKind == 5 )
      {
        this = (RecommendSupportEquipSelectListViewItem_o *)v4->fields.userSvtEntity;
        if ( !this )
          goto LABEL_108;
        iconLabelInfo1_high = SHIDWORD(this[1].fields.iconLabelInfo1);
        v28 = (RecommendSupportEquipSelectListViewItem_o *)v4->fields.iconLabelInfo1;
        v4->fields.sortValue1 = iconLabelInfo1_high;
        this = (RecommendSupportEquipSelectListViewItem_o *)UserServantEntity__get_HpBoostValue(
                                                              (UserServantEntity_o *)this,
                                                              0);
        if ( !v28 )
          goto LABEL_108;
        v14 = (int)this;
        this = v28;
        v15 = 3;
      }
      else
      {
        this = (RecommendSupportEquipSelectListViewItem_o *)v4->fields.userSvtEntity;
        if ( !this )
          goto LABEL_108;
        iconLabelInfo1_high = SLODWORD(this[1].fields.iconLabelInfo1);
        v13 = (RecommendSupportEquipSelectListViewItem_o *)v4->fields.iconLabelInfo1;
        v4->fields.sortValue1 = iconLabelInfo1_high;
        this = (RecommendSupportEquipSelectListViewItem_o *)UserServantEntity__get_AtkBoostValue(
                                                              (UserServantEntity_o *)this,
                                                              0);
        if ( !v13 )
          goto LABEL_108;
        v14 = (int)this;
        this = v13;
        v15 = 5;
      }
      LODWORD(cost) = iconLabelInfo1_high;
LABEL_55:
      IconLabelInfo__Set_47932852((IconLabelInfo_o *)this, v15, cost, v14, 0, 0, 0, 0, 0, 0);
LABEL_56:
      this = (RecommendSupportEquipSelectListViewItem_o *)v4->fields.userSvtEntity;
      if ( !this )
        goto LABEL_108;
      iconLabelInfo1 = v4->fields.iconLabelInfo2;
LABEL_104:
      categoryIdList = (int32_t)this[1].fields.categoryIdList;
      this = (RecommendSupportEquipSelectListViewItem_o *)UserServantEntity__getLevelMax((UserServantEntity_o *)this, 0);
      if ( iconLabelInfo1 )
      {
        IconLabelInfo__Set_47932852(iconLabelInfo1, 2, categoryIdList, (int32_t)this, 0, 0, 0, 0, 0, 0);
        goto LABEL_106;
      }
      goto LABEL_108;
    }
    if ( sortKind == 7 )
    {
      servantEntity = v4->fields.servantEntity;
      if ( !servantEntity )
        goto LABEL_108;
      cost = servantEntity->fields.cost;
      this = (RecommendSupportEquipSelectListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = cost;
      if ( !this )
        goto LABEL_108;
      v14 = 0;
      v15 = 7;
      goto LABEL_55;
    }
    if ( sortKind == 14 )
    {
      if ( v4->fields.amountSortValue < 0 )
      {
        manager = sort->fields.manager;
        if ( manager
          && (naturalAligment = RecommendSupportEquipSelectListViewManager_TypeInfo->_2.naturalAligment,
              manager->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
        {
          if ( (RecommendSupportEquipSelectListViewManager_c *)manager->klass->_2.typeHierarchy[naturalAligment - 1] == RecommendSupportEquipSelectListViewManager_TypeInfo )
            v22 = (UnityEngine_Object_o *)sort->fields.manager;
          else
            v22 = 0;
        }
        else
        {
          v22 = 0;
        }
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, sort, v10);
        this = (RecommendSupportEquipSelectListViewItem_o *)UnityEngine_Object__op_Inequality(v22, 0, 0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v47 = v4->fields.userSvtEntity;
          if ( !v47 )
            goto LABEL_108;
          v48 = *(_QWORD *)&v47->fields.svtId.fields.currentCryptoKey;
          v49 = *(_QWORD *)&v47->fields.svtId.fields.fakeValue;
          if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, sort, v46);
          *(_QWORD *)&v57.fields.currentCryptoKey = v48;
          *(_QWORD *)&v57.fields.fakeValue = v49;
          this = (RecommendSupportEquipSelectListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(
                                                                v57,
                                                                0);
          if ( !v22 )
            goto LABEL_108;
          this = (RecommendSupportEquipSelectListViewItem_o *)RecommendSupportEquipSelectListViewManager__GetAmountSortValue(
                                                                (RecommendSupportEquipSelectListViewManager_o *)v22,
                                                                (int32_t)this,
                                                                v50);
          v4->fields.amountSortValue = (int64_t)this;
        }
      }
      v51 = v4->fields.servantEntity;
      if ( !v51 )
        goto LABEL_108;
      this = (RecommendSupportEquipSelectListViewItem_o *)v4->fields.userSvtEntity;
      rarity = (((unsigned __int64)(unsigned int)v4->fields.rarity << 32) + (v4->fields.amountSortValue << 48))
             | v51->fields.collectionNo;
      goto LABEL_102;
    }
  }
  return (char)this;
}


bool RecommendSupportEquipSelectListViewItem__SwapChoice(
        RecommendSupportEquipSelectListViewItem_o *this,
        const MethodInfo *method)
{
  _BOOL4 isSwapChoice; // w9
  bool v4; // zf
  bool v5; // w9
  bool result; // w0

  isSwapChoice = this->fields.isSwapChoice;
  v4 = !isSwapChoice;
  v5 = !isSwapChoice;
  result = v4;
  this->fields.isSwapChoice = v5;
  return result;
}


bool RecommendSupportEquipSelectListViewItem__SwapLock(
        RecommendSupportEquipSelectListViewItem_o *this,
        const MethodInfo *method)
{
  _BOOL4 isSwapLock; // w9
  bool v4; // zf
  bool v5; // w9
  bool result; // w0

  isSwapLock = this->fields.isSwapLock;
  v4 = !isSwapLock;
  v5 = !isSwapLock;
  result = v4;
  this->fields.isSwapLock = v5;
  return result;
}


bool RecommendSupportEquipSelectListViewItem___SetSortValue_b__22_0(
        RecommendSupportEquipSelectListViewItem_o *this,
        EventGroupEntity_o *entity,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  struct UserServantEntity_o *userSvtEntity; // x8
  EventCampaignMaster_o *v9; // x21
  __int64 v10; // x22
  __int64 v11; // x23
  bool result; // w0
  UserServantEntity_o *v13; // x21
  bool EventUpVal_50122796; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_593431A & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    byte_593431A = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, entity, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_EventCampaignMaster___);
  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_17;
  v9 = (EventCampaignMaster_o *)Master_object;
  v10 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6, v7);
  *(_QWORD *)&v15.fields.currentCryptoKey = v10;
  *(_QWORD *)&v15.fields.fakeValue = v11;
  Master_object = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v15, 0);
  if ( !entity || !v9 )
    goto LABEL_17;
  if ( EventCampaignMaster__IsEnableServant(v9, (int32_t)Master_object, entity->fields.eventId, 0) )
    return 1;
  v13 = this->fields.userSvtEntity;
  Master_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Master_object || !v13 )
LABEL_17:
    sub_21FFECC(Master_object, v6);
  EventUpVal_50122796 = UserServantEntity__getEventUpVal_50122796(
                          v13,
                          -1,
                          0,
                          0,
                          (EventUpValSetupInfo_o *)Master_object[6].monitor,
                          entity->fields.eventId,
                          0,
                          0);
  result = 0;
  if ( EventUpVal_50122796 )
    return !this->fields.isInvalidRarity;
  return result;
}


IconLabelInfo_o *RecommendSupportEquipSelectListViewItem__get_IconInfo1(
        RecommendSupportEquipSelectListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.iconLabelInfo1;
}


IconLabelInfo_o *RecommendSupportEquipSelectListViewItem__get_IconInfo2(
        RecommendSupportEquipSelectListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.iconLabelInfo2;
}


bool RecommendSupportEquipSelectListViewItem__get_IsBase(
        RecommendSupportEquipSelectListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isBase;
}


bool RecommendSupportEquipSelectListViewItem__get_IsChocolateSvtEquip(
        RecommendSupportEquipSelectListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsChocolateSvtEquip_k__BackingField;
}


bool RecommendSupportEquipSelectListViewItem__get_IsChoice(
        RecommendSupportEquipSelectListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isChoice;
}


bool RecommendSupportEquipSelectListViewItem__get_IsDispChoice(
        RecommendSupportEquipSelectListViewItem_o *this,
        const MethodInfo *method)
{
  if ( this->fields.isSwapChoice )
    return !this->fields.isChoice;
  else
    return this->fields.isChoice;
}


bool RecommendSupportEquipSelectListViewItem__get_IsDispLock(
        RecommendSupportEquipSelectListViewItem_o *this,
        const MethodInfo *method)
{
  if ( this->fields.isSwapLock )
    return !this->fields.isLock;
  else
    return this->fields.isLock;
}


bool RecommendSupportEquipSelectListViewItem__get_IsFriendShipSvtEq(
        RecommendSupportEquipSelectListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsFriendShipSvtEq_k__BackingField;
}


bool RecommendSupportEquipSelectListViewItem__get_IsInvalidRarity(
        RecommendSupportEquipSelectListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isInvalidRarity;
}


bool RecommendSupportEquipSelectListViewItem__get_IsLock(
        RecommendSupportEquipSelectListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isLock;
}


bool RecommendSupportEquipSelectListViewItem__get_IsSwapChoice(
        RecommendSupportEquipSelectListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isSwapChoice;
}


bool RecommendSupportEquipSelectListViewItem__get_IsSwapLock(
        RecommendSupportEquipSelectListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isSwapLock;
}


bool RecommendSupportEquipSelectListViewItem__get_IsUse(
        RecommendSupportEquipSelectListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isUse;
}


UserServantEntity_o *RecommendSupportEquipSelectListViewItem__get_UserServant(
        RecommendSupportEquipSelectListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.userSvtEntity;
}


void RecommendSupportEquipSelectListViewItem__set_IsBase(
        RecommendSupportEquipSelectListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields.isBase = value;
}