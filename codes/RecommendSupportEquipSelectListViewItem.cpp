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
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  IconLabelInfo_o *v22; // x27
  struct IconLabelInfo_o **p_iconLabelInfo2; // x20
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  struct UserServantEntity_o **p_equippedUserSvtEntity; // x22
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_userSvtEntity; // x21
  int32_t v38; // w2
  int32_t v39; // w3
  System_String_o *v40; // x4
  int32_t v41; // w5
  int64_t v42; // x6
  System_String_o *v43; // x7
  __int64 v44; // x1
  int64_t userSvtEntity; // x0
  struct ServantEntity_o *ServantEntity; // x0
  int32_t v47; // w2
  int32_t v48; // w3
  System_String_o *v49; // x4
  int32_t v50; // w5
  int64_t v51; // x6
  System_String_o *v52; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v53; // x8
  ServantLimitMaster_o *v54; // x26
  __int64 v55; // x27
  __int64 v56; // x28
  int32_t v57; // w27
  struct UserServantEntity_o *v58; // x8
  __int128 v59; // q1
  struct UserServantEntity_o *v60; // x8
  __int128 v61; // q0
  bool v62; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v63; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v64; // q0
  UserServantEntity_o *v65; // x8
  struct ServantEntity_o *v66; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v67; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v68; // q0
  int64_t v69; // x8
  UserServantEntity_o *v70; // x8
  bool IsChocolateSvtEquip; // w0
  struct UserServantEntity_o *equippedUserSvtEntity; // x8
  __int64 v73; // x23
  __int64 v74; // x24
  struct UserServantEntity_o *v75; // x8
  PartyOrganizationUtility_o *v76; // x23
  __int64 v77; // x24
  __int64 v78; // x25
  UserServantEntity_o *v79; // x8
  int32_t v80; // w22
  int32_t v81; // w24
  struct System_Int32_array *EquipCategoryIdList; // x0
  GrandQuestFolderBoardItem_o *p_categoryIdList; // x19
  int32_t v84; // w2
  int32_t v85; // w3
  System_String_o *v86; // x4
  int32_t v87; // w5
  int64_t v88; // x6
  System_String_o *v89; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v90; // [xsp+10h] [xbp-110h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v91; // [xsp+30h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v92; // [xsp+50h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v93; // [xsp+70h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v94; // [xsp+90h] [xbp-90h]
  int32_t actMaxRarity; // [xsp+B4h] [xbp-6Ch] BYREF
  System_String_o *skillName; // [xsp+B8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v97; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v98; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v99; // 0:x0.16

  if ( (byte_4E00711 & 1) == 0 )
  {
    sub_1CE6700(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1CE6700(&IconLabelInfo_TypeInfo);
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1CE6700(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4E00711 = 1;
  }
  skillName = 0;
  actMaxRarity = 0;
  v15 = (IconLabelInfo_o *)sub_1CE694C(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v15, 0);
  this->fields.iconLabelInfo1 = v15;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.iconLabelInfo1, (int32_t)v15, v16, v17, v18, v19, v20, v21);
  v22 = (IconLabelInfo_o *)sub_1CE694C(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v22, 0);
  this->fields.iconLabelInfo2 = v22;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.iconLabelInfo2, (int32_t)v22, v24, v25, v26, v27, v28, v29);
  ListViewItem___ctor_44921328((ListViewItem_o *)this, index, 0);
  this->fields.equippedUserSvtEntity = equipEntity;
  p_equippedUserSvtEntity = &this->fields.equippedUserSvtEntity;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields.equippedUserSvtEntity,
    (int32_t)equipEntity,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  this->fields.userSvtEntity = entity;
  p_userSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userSvtEntity;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.userSvtEntity, (int32_t)entity, v38, v39, v40, v41, v42, v43);
  userSvtEntity = (int64_t)this->fields.userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_49;
  ServantEntity = UserServantEntity__GetServantEntity((UserServantEntity_o *)userSvtEntity, -1, 0);
  this->fields.servantEntity = ServantEntity;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields.servantEntity,
    (int32_t)ServantEntity,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52);
  userSvtEntity = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !userSvtEntity )
    goto LABEL_49;
  userSvtEntity = (int64_t)DataManager__GetMasterData_object_(
                             (DataManager_o *)userSvtEntity,
                             (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v53 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_49;
  v54 = (ServantLimitMaster_o *)userSvtEntity;
  v56 = *(_QWORD *)&v53[5].fields.currentCryptoKey;
  v55 = *(_QWORD *)&v53[5].fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v97.fields.currentCryptoKey = v56;
  *(_QWORD *)&v97.fields.fakeValue = v55;
  userSvtEntity = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v97, 0);
  if ( !*p_userSvtEntity )
    goto LABEL_49;
  v57 = userSvtEntity;
  userSvtEntity = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008((*p_userSvtEntity)[6], 0);
  if ( !v54 )
    goto LABEL_49;
  userSvtEntity = (int64_t)ServantLimitMaster__GetEntity(v54, v57, userSvtEntity, 0);
  if ( !userSvtEntity )
    goto LABEL_49;
  v58 = this->fields.userSvtEntity;
  this->fields.rarity = *(_DWORD *)(userSvtEntity + 24);
  if ( !v58 )
    goto LABEL_49;
  v59 = *(_OWORD *)&v58->fields.id.fields.fakeValue;
  *(_OWORD *)&v94.fields.currentCryptoKey = *(_OWORD *)&v58->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v94.fields.fakeValue = v59;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v93 = v94;
  userSvtEntity = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50041532(&v93, 0);
  if ( userSvtEntity == targetSvtEquipId )
  {
    *(_WORD *)&this->fields.isBase = 1;
  }
  else
  {
    v60 = this->fields.userSvtEntity;
    this->fields.isBase = 0;
    if ( !v60 )
      goto LABEL_49;
    v61 = *(_OWORD *)&v60->fields.id.fields.fakeValue;
    *(_OWORD *)&v94.fields.currentCryptoKey = *(_OWORD *)&v60->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v94.fields.fakeValue = v61;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v92 = v94;
    userSvtEntity = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50041532(&v92, 0);
    if ( userSvtEntity == oldTargetSvtEquipId )
    {
      v62 = 0;
    }
    else
    {
      v63 = *p_userSvtEntity;
      if ( !*p_userSvtEntity )
        goto LABEL_49;
      v64 = v63[2];
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v94.fields.currentCryptoKey = v63[1];
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v94.fields.fakeValue = v64;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v91 = v94;
      v62 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50041532(&v91, 0) == useSvtEquipId;
    }
    this->fields.isUse = v62;
  }
  userSvtEntity = (int64_t)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_49;
  userSvtEntity = UserServantEntity__IsLock((UserServantEntity_o *)userSvtEntity, 0);
  v65 = this->fields.userSvtEntity;
  this->fields.isLock = userSvtEntity & 1;
  if ( !v65 )
    goto LABEL_49;
  userSvtEntity = UserServantEntity__IsChoice(v65, 0);
  v66 = this->fields.servantEntity;
  this->fields.isChoice = userSvtEntity & 1;
  *(_QWORD *)&this->fields.bonusKind = 1;
  this->fields.isEventUpVal = 0;
  if ( !v66 )
    goto LABEL_49;
  v67 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_49;
  this->fields.sortValue2 = ((__int64)v66->fields.collectionNo << 16)
                          | ((unsigned __int64)(unsigned int)this->fields.rarity << 48)
                          | v67[25].fields.currentCryptoKey;
  v68 = v67[2];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v94.fields.currentCryptoKey = v67[1];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v94.fields.fakeValue = v68;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v90 = v94;
  v69 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50041532(&v90, 0);
  userSvtEntity = (int64_t)this->fields.userSvtEntity;
  this->fields.sortValue2B = v69;
  this->fields.amountSortValue = -1;
  *(_WORD *)&this->fields.isSwapLock = 0;
  if ( !userSvtEntity )
    goto LABEL_49;
  userSvtEntity = UserServantEntity__IsFriendShipSvtEquip((UserServantEntity_o *)userSvtEntity, 0);
  v70 = this->fields.userSvtEntity;
  this->fields._IsFriendShipSvtEq_k__BackingField = userSvtEntity & 1;
  if ( !v70 )
    goto LABEL_49;
  IsChocolateSvtEquip = UserServantEntity__IsChocolateSvtEquip(v70, 0);
  equippedUserSvtEntity = this->fields.equippedUserSvtEntity;
  this->fields._IsChocolateSvtEquip_k__BackingField = IsChocolateSvtEquip;
  if ( equippedUserSvtEntity )
  {
    v74 = *(_QWORD *)&equippedUserSvtEntity->fields.svtId.fields.currentCryptoKey;
    v73 = *(_QWORD *)&equippedUserSvtEntity->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v98.fields.currentCryptoKey = v74;
    *(_QWORD *)&v98.fields.fakeValue = v73;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v98, 0) >= 1 )
    {
      userSvtEntity = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_3B55234 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      v75 = *p_equippedUserSvtEntity;
      if ( *p_equippedUserSvtEntity )
      {
        v76 = (PartyOrganizationUtility_o *)userSvtEntity;
        v78 = *(_QWORD *)&v75->fields.svtId.fields.currentCryptoKey;
        v77 = *(_QWORD *)&v75->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v99.fields.currentCryptoKey = v78;
        *(_QWORD *)&v99.fields.fakeValue = v77;
        userSvtEntity = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v99, 0);
        v79 = *p_equippedUserSvtEntity;
        if ( *p_equippedUserSvtEntity )
        {
          v80 = userSvtEntity;
          userSvtEntity = UserServantEntity__getRarity(v79, 0);
          if ( *p_userSvtEntity )
          {
            v81 = userSvtEntity;
            userSvtEntity = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(
                              (*p_userSvtEntity)[5],
                              0);
            if ( v76 )
            {
              this->fields.isInvalidRarity = PartyOrganizationUtility__IsRarityRestriction(
                                               v76,
                                               &skillName,
                                               &actMaxRarity,
                                               v80,
                                               v81,
                                               userSvtEntity,
                                               -1,
                                               0);
              goto LABEL_45;
            }
          }
        }
      }
LABEL_49:
      sub_1CE6958(userSvtEntity, v44);
    }
  }
LABEL_45:
  userSvtEntity = (int64_t)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_49;
  EquipCategoryIdList = UserServantEntity__GetEquipCategoryIdList((UserServantEntity_o *)userSvtEntity, 1, 0);
  this->fields.categoryIdList = EquipCategoryIdList;
  p_categoryIdList = (GrandQuestFolderBoardItem_o *)&this->fields.categoryIdList;
  sub_1CE66A4(p_categoryIdList, (int32_t)EquipCategoryIdList, v84, v85, v86, v87, v88, v89);
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
  FilterKindList_c *v7; // x0
  ListViewSort_FilterKind_array *v8; // x0
  FilterKindList_c *v9; // x0
  ListViewSort_FilterKind_array *v10; // x0
  bool IsMatchServantEquipCombineStatusFilter; // w8
  bool result; // w0
  FilterKindList_c *v13; // x0
  ListViewSort_FilterKind_array *v14; // x0
  bool HaveStatusFilter; // w8
  _BOOL4 v16; // w8

  if ( (byte_4E00714 & 1) == 0 )
  {
    sub_1CE6700(&FilterKindList_TypeInfo);
    sub_1CE6700(&ListViewSort_FilterKind___TypeInfo);
    sub_1CE6700(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    byte_4E00714 = 1;
  }
  v5 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v5 = FilterKindList_TypeInfo;
  }
  RarityFilterKindList = (System_Int32Enum_array *)v5->static_fields->RarityFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_36;
  RarityFilterKindList = System_Collections_Generic_List_Int32Enum___ToArray(
                           (System_Collections_Generic_List_T__o *)RarityFilterKindList,
                           (const MethodInfo_38ED228 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_36;
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)RarityFilterKindList, 0)
    && !ListViewSort__IsMatchRarityFilter(sort, this->fields.rarity, 0)
    || !ListViewSort__CheckSvtEquipEffectFilterDefaultAll(sort, 0)
    && !ServantEquipEffectFilterController__IsMatchEffectCategory(this->fields.categoryIdList, sort, 0) )
  {
    return 0;
  }
  v7 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v7 = FilterKindList_TypeInfo;
  }
  RarityFilterKindList = (System_Int32Enum_array *)v7->static_fields->ServantEquipTypeFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_36;
  v8 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                          (System_Collections_Generic_List_T__o *)RarityFilterKindList,
                                          (const MethodInfo_38ED228 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v8, 0)
    && !ListViewSort__IsMatchServantEquipTypeFilter(sort, this->fields.servantEntity, 0) )
  {
    return 0;
  }
  v9 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v9 = FilterKindList_TypeInfo;
  }
  RarityFilterKindList = (System_Int32Enum_array *)v9->static_fields->ServantEquipCombineStatusFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_36;
  v10 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)RarityFilterKindList,
                                           (const MethodInfo_38ED228 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, v10, 0)
    || (IsMatchServantEquipCombineStatusFilter = ListViewSort__IsMatchServantEquipCombineStatusFilter(
                                                   sort,
                                                   this->fields.userSvtEntity,
                                                   this->fields.servantEntity,
                                                   0,
                                                   0),
        result = 0,
        IsMatchServantEquipCombineStatusFilter) )
  {
    v13 = FilterKindList_TypeInfo;
    if ( !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
      v13 = FilterKindList_TypeInfo;
    }
    RarityFilterKindList = (System_Int32Enum_array *)v13->static_fields->ServantEquipHaveStatusFilterKindList;
    if ( !RarityFilterKindList )
      goto LABEL_36;
    v14 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                             (System_Collections_Generic_List_T__o *)RarityFilterKindList,
                                             (const MethodInfo_38ED228 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, v14, 0)
      || (HaveStatusFilter = ListViewSort__IsMatchServantEquipHaveStatusFilter(
                               sort,
                               this->fields.userSvtEntity,
                               this->fields.servantEntity,
                               0,
                               0),
          result = 0,
          HaveStatusFilter) )
    {
      RarityFilterKindList = (System_Int32Enum_array *)sub_1CE67A8(ListViewSort_FilterKind___TypeInfo, 1);
      if ( RarityFilterKindList )
      {
        if ( !LODWORD(RarityFilterKindList->max_length) )
          sub_1CE6960(RarityFilterKindList);
        RarityFilterKindList->m_Items[0] = 39;
        if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)RarityFilterKindList, 0)
          || !ListViewSort__GetFilter(sort, 39, 0) )
        {
          return 1;
        }
        v16 = !this->fields.isChoice;
        if ( !this->fields.isSwapChoice )
          return this->fields.isChoice;
        return v16;
      }
LABEL_36:
      sub_1CE6958(RarityFilterKindList, sort);
    }
  }
  return result;
}


void RecommendSupportEquipSelectListViewItem__ModifyChoiceItem(
        RecommendSupportEquipSelectListViewItem_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0

  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_1CE6958(0, method);
  this->fields.isChoice = UserServantEntity__IsChoice(userSvtEntity, 0);
  this->fields.isSwapChoice = 0;
}


void RecommendSupportEquipSelectListViewItem__ModifyItem(
        RecommendSupportEquipSelectListViewItem_o *this,
        UserServantEntity_o *entity,
        int64_t targetSvtEquipId,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct UserServantEntity_o **p_userSvtEntity; // x21
  __int64 v12; // x1
  int64_t userSvtEntity; // x0
  struct ServantEntity_o *ServantEntity; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  struct UserServantEntity_o *v21; // x8
  ServantLimitMaster_o *v22; // x22
  __int64 v23; // x23
  __int64 v24; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v25; // x8
  int32_t v26; // w21
  struct UserServantEntity_o *v27; // x8
  __int128 v28; // q1
  int64_t rarity; // x9
  struct ServantEntity_o *v30; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+20h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v33; // 0:x0.16

  if ( (byte_4E00712 & 1) == 0 )
  {
    sub_1CE6700(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4E00712 = 1;
  }
  this->fields.userSvtEntity = entity;
  p_userSvtEntity = &this->fields.userSvtEntity;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields.userSvtEntity,
    (int32_t)entity,
    targetSvtEquipId,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  userSvtEntity = (int64_t)this->fields.userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_16;
  ServantEntity = UserServantEntity__GetServantEntity((UserServantEntity_o *)userSvtEntity, -1, 0);
  this->fields.servantEntity = ServantEntity;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields.servantEntity,
    (int32_t)ServantEntity,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  userSvtEntity = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !userSvtEntity )
    goto LABEL_16;
  userSvtEntity = (int64_t)DataManager__GetMasterData_object_(
                             (DataManager_o *)userSvtEntity,
                             (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v21 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_16;
  v22 = (ServantLimitMaster_o *)userSvtEntity;
  v24 = *(_QWORD *)&v21->fields.svtId.fields.currentCryptoKey;
  v23 = *(_QWORD *)&v21->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v33.fields.currentCryptoKey = v24;
  *(_QWORD *)&v33.fields.fakeValue = v23;
  userSvtEntity = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v33, 0);
  v25 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_16;
  v26 = userSvtEntity;
  userSvtEntity = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v25[6], 0);
  if ( !v22 )
    goto LABEL_16;
  userSvtEntity = (int64_t)ServantLimitMaster__GetEntity(v22, v26, userSvtEntity, 0);
  if ( !userSvtEntity )
    goto LABEL_16;
  v27 = this->fields.userSvtEntity;
  this->fields.rarity = *(_DWORD *)(userSvtEntity + 24);
  if ( !v27 )
    goto LABEL_16;
  v28 = *(_OWORD *)&v27->fields.id.fields.fakeValue;
  *(_OWORD *)&v32.fields.currentCryptoKey = *(_OWORD *)&v27->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v32.fields.fakeValue = v28;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v31 = v32;
  userSvtEntity = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50041532(&v31, 0);
  rarity = this->fields.rarity;
  v30 = this->fields.servantEntity;
  this->fields.isBase = userSvtEntity == targetSvtEquipId;
  this->fields.sortValue1B = rarity;
  if ( !v30 )
LABEL_16:
    sub_1CE6958(userSvtEntity, v12);
  this->fields.sortValue2 = v30->fields.collectionNo;
}


void RecommendSupportEquipSelectListViewItem__ModifyLockItem(
        RecommendSupportEquipSelectListViewItem_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0

  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_1CE6958(0, method);
  this->fields.isLock = UserServantEntity__IsLock(userSvtEntity, 0);
  this->fields.isSwapLock = 0;
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
  struct UserServantEntity_o *v10; // x8
  __int128 v11; // q1
  struct UserServantEntity_o *v12; // x8
  int32_t bonusKind2; // w8
  int32_t v14; // w8
  int32_t bonusKind2Id; // w9
  int isEventUpVal; // w8
  unsigned __int64 rarity; // x8
  int64_t categoryIdList_low; // x20
  IconLabelInfo_o *iconLabelInfo1; // x21
  int64_t iconLabelInfo1_high; // x20
  IconLabelInfo_o *v21; // x21
  int32_t v22; // w3
  int32_t v23; // w1
  struct ServantEntity_o *servantEntity; // x8
  int64_t cost; // x2
  IconLabelInfo_o *iconLabelInfo2; // x19
  struct ListViewManager_o *manager; // x8
  __int64 naturalAligment; // x11
  UnityEngine_Object_o *v29; // x20
  int32_t v30; // w8
  int v31; // w8
  UserServantEntity_o *userSvtEntity; // x21
  bool EventUpVal_44304936; // w0
  struct UserServantEntity_o *v34; // x8
  EventCampaignMaster_o *v35; // x21
  __int64 v36; // x22
  __int64 v37; // x23
  bool IsEnableServant; // w0
  System_Collections_Generic_List_EventGroupEntity__o *EntitiesByGroupId; // x21
  System_Func_object__bool__o *v40; // x22
  struct UserServantEntity_o *v41; // x8
  __int64 v42; // x21
  __int64 v43; // x22
  const MethodInfo *v44; // x2
  struct ServantEntity_o *v45; // x8
  int32_t categoryIdList; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v48; // [xsp+10h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v49; // [xsp+30h] [xbp-50h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v50; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v51; // 0:x0.16

  v4 = this;
  if ( (byte_4E00713 & 1) == 0 )
  {
    sub_1CE6700(&Method_BasicHelper_Any_EventGroupEntity___);
    sub_1CE6700(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_1CE6700(&Method_DataManager_GetMaster_EventGroupMaster___);
    sub_1CE6700(&DataManager_TypeInfo);
    sub_1CE6700(&System_Func_EventGroupEntity__bool__TypeInfo);
    sub_1CE6700(&Method_System_Collections_Generic_List_EventGroupEntity__get_Count__);
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1CE6700(&Method_RecommendSupportEquipSelectListViewItem__SetSortValue_b__22_0__);
    sub_1CE6700(&RecommendSupportEquipSelectListViewManager_TypeInfo);
    this = (RecommendSupportEquipSelectListViewItem_o *)sub_1CE6700(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    byte_4E00713 = 1;
  }
  *(_WORD *)&v4->fields.isTermination = 0;
  v4->fields.sortValue1 = -1;
  if ( !sort )
    goto LABEL_99;
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
        goto LABEL_58;
      }
    }
    else
    {
      bonusKind2Id = sort->fields.bonusKind2Id;
    }
    v4->fields.bonusKind = bonusKind2;
    v4->fields.bonusKindId = bonusKind2Id;
    userSvtEntity = v4->fields.userSvtEntity;
    this = (RecommendSupportEquipSelectListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    if ( !this || !userSvtEntity )
      goto LABEL_99;
    EventUpVal_44304936 = UserServantEntity__getEventUpVal_44304936(
                            userSvtEntity,
                            -1,
                            0,
                            0,
                            *(EventUpValSetupInfo_o **)&this->fields.basePosition.fields.y,
                            v4->fields.bonusKindId,
                            0,
                            0);
    isEventUpVal = EventUpVal_44304936;
    v4->fields.isEventUpVal = EventUpVal_44304936;
LABEL_58:
    if ( !isEventUpVal || v4->fields.isInvalidRarity )
      goto LABEL_80;
    goto LABEL_6;
  }
  if ( bonusKind2 == 3 )
  {
    if ( v4->fields.bonusKind == 3 )
    {
      v30 = sort->fields.bonusKind2Id;
      if ( v4->fields.bonusKindId == v30 )
      {
        v31 = v4->fields.isEventUpVal;
        goto LABEL_69;
      }
    }
    else
    {
      v30 = sort->fields.bonusKind2Id;
    }
    v4->fields.bonusKind = 3;
    v4->fields.bonusKindId = v30;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (RecommendSupportEquipSelectListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_EventCampaignMaster___);
    v34 = v4->fields.userSvtEntity;
    if ( !v34 )
      goto LABEL_99;
    v35 = (EventCampaignMaster_o *)this;
    v37 = *(_QWORD *)&v34->fields.svtId.fields.currentCryptoKey;
    v36 = *(_QWORD *)&v34->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v50.fields.currentCryptoKey = v37;
    *(_QWORD *)&v50.fields.fakeValue = v36;
    this = (RecommendSupportEquipSelectListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(
                                                          v50,
                                                          0);
    if ( !v35 )
      goto LABEL_99;
    IsEnableServant = EventCampaignMaster__IsEnableServant(v35, (int32_t)this, v4->fields.bonusKindId, 0);
    v31 = IsEnableServant;
    v4->fields.isEventUpVal = IsEnableServant;
LABEL_69:
    if ( !v31 )
      goto LABEL_80;
    goto LABEL_6;
  }
  if ( bonusKind2 )
    goto LABEL_6;
  if ( v4->fields.bonusKind )
  {
    v14 = sort->fields.bonusKind2Id;
  }
  else
  {
    v14 = sort->fields.bonusKind2Id;
    if ( v4->fields.bonusKindId == v14 )
      goto LABEL_79;
  }
  v4->fields.bonusKind = 0;
  v4->fields.bonusKindId = v14;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (RecommendSupportEquipSelectListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_EventGroupMaster___);
  if ( !this )
LABEL_99:
    sub_1CE6958(this, sort);
  EntitiesByGroupId = EventGroupMaster__GetEntitiesByGroupId((EventGroupMaster_o *)this, v4->fields.bonusKindId, 0);
  this = (RecommendSupportEquipSelectListViewItem_o *)BasicHelper__IsNullOrEmpty(
                                                        (System_Collections_ICollection_o *)EntitiesByGroupId,
                                                        0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( !EntitiesByGroupId )
      goto LABEL_99;
    if ( EntitiesByGroupId->fields._size >= 2 )
    {
      v40 = (System_Func_object__bool__o *)sub_1CE694C(System_Func_EventGroupEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v40,
        (Il2CppObject *)v4,
        Method_RecommendSupportEquipSelectListViewItem__SetSortValue_b__22_0__,
        0);
      v4->fields.isEventUpVal = BasicHelper__Any_object_(
                                  (System_Collections_Generic_List_T__o *)EntitiesByGroupId,
                                  (System_Func_T__bool__o *)v40,
                                  (const MethodInfo_31ED4DC *)Method_BasicHelper_Any_EventGroupEntity___);
    }
  }
LABEL_79:
  if ( !v4->fields.isEventUpVal )
    goto LABEL_80;
LABEL_6:
  if ( (((__int64 (__fastcall *)(RecommendSupportEquipSelectListViewItem_o *, ListViewSort_o *, const MethodInfo *))v4->klass->vtable._5_IsMatchFilter.methodPtr)(
          v4,
          sort,
          v4->klass->vtable._5_IsMatchFilter.method)
      & 1) == 0 )
  {
LABEL_80:
    LOBYTE(this) = 0;
    return (char)this;
  }
  isChoice = v4->fields.isChoice;
  isSwapChoice = v4->fields.isSwapChoice;
  v4->fields.sortValue0 = 0;
  v7 = !isChoice;
  v8 = !isChoice;
  v9 = !v7;
  if ( !isSwapChoice )
    v8 = v9;
  if ( v8 && sort->fields.isChoiceSort )
    v4->fields.sortValue0 = 10;
  this = (RecommendSupportEquipSelectListViewItem_o *)v4->fields.iconLabelInfo2;
  if ( !this )
    goto LABEL_99;
  IconLabelInfo__Clear((IconLabelInfo_o *)this, 0);
  this = (RecommendSupportEquipSelectListViewItem_o *)(&dword_0 + 1);
  switch ( sort->fields.sortKind )
  {
    case 1:
      v10 = v4->fields.userSvtEntity;
      if ( !v10 )
        goto LABEL_99;
      v11 = *(_OWORD *)&v10->fields.id.fields.fakeValue;
      *(_OWORD *)&v49.fields.currentCryptoKey = *(_OWORD *)&v10->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v49.fields.fakeValue = v11;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v48 = v49;
      this = (RecommendSupportEquipSelectListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50041532(
                                                            &v48,
                                                            0);
      v12 = v4->fields.userSvtEntity;
      v4->fields.sortValue1 = (int64_t)this;
      if ( !v12 )
        goto LABEL_99;
      this = (RecommendSupportEquipSelectListViewItem_o *)v4->fields.iconLabelInfo1;
      if ( !this )
        goto LABEL_99;
      IconLabelInfo__SetTime((IconLabelInfo_o *)this, 49, v12->fields.createdAt, 0, 0, 0, 0);
      goto LABEL_45;
    case 2:
      rarity = v4->fields.rarity;
      this = (RecommendSupportEquipSelectListViewItem_o *)v4->fields.userSvtEntity;
      goto LABEL_94;
    case 3:
      this = (RecommendSupportEquipSelectListViewItem_o *)v4->fields.userSvtEntity;
      if ( !this )
        goto LABEL_99;
      categoryIdList_low = SLODWORD(this[1].fields.categoryIdList);
      iconLabelInfo1 = v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = categoryIdList_low;
      this = (RecommendSupportEquipSelectListViewItem_o *)UserServantEntity__getLevelMax((UserServantEntity_o *)this, 0);
      if ( !iconLabelInfo1 )
        goto LABEL_99;
      IconLabelInfo__Set_42060700(iconLabelInfo1, 2, categoryIdList_low, (int32_t)this, 0, 0, 0, 0, 0, 0);
      goto LABEL_98;
    case 5:
      this = (RecommendSupportEquipSelectListViewItem_o *)v4->fields.userSvtEntity;
      if ( !this )
        goto LABEL_99;
      iconLabelInfo1_high = SHIDWORD(this[1].fields.iconLabelInfo1);
      v21 = v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = iconLabelInfo1_high;
      this = (RecommendSupportEquipSelectListViewItem_o *)UserServantEntity__get_HpBoostValue(
                                                            (UserServantEntity_o *)this,
                                                            0);
      if ( !v21 )
        goto LABEL_99;
      v22 = (int)this;
      v23 = 3;
      goto LABEL_41;
    case 6:
      this = (RecommendSupportEquipSelectListViewItem_o *)v4->fields.userSvtEntity;
      if ( !this )
        goto LABEL_99;
      iconLabelInfo1_high = SLODWORD(this[1].fields.iconLabelInfo1);
      v21 = v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = iconLabelInfo1_high;
      this = (RecommendSupportEquipSelectListViewItem_o *)UserServantEntity__get_AtkBoostValue(
                                                            (UserServantEntity_o *)this,
                                                            0);
      if ( !v21 )
        goto LABEL_99;
      v22 = (int)this;
      v23 = 5;
LABEL_41:
      IconLabelInfo__Set_42060700(v21, v23, iconLabelInfo1_high, v22, 0, 0, 0, 0, 0, 0);
      goto LABEL_45;
    case 7:
      servantEntity = v4->fields.servantEntity;
      if ( !servantEntity )
        goto LABEL_99;
      cost = servantEntity->fields.cost;
      this = (RecommendSupportEquipSelectListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = cost;
      if ( !this )
        goto LABEL_99;
      IconLabelInfo__Set_42060700((IconLabelInfo_o *)this, 7, cost, 0, 0, 0, 0, 0, 0, 0);
LABEL_45:
      this = (RecommendSupportEquipSelectListViewItem_o *)v4->fields.userSvtEntity;
      if ( !this )
        goto LABEL_99;
      iconLabelInfo2 = v4->fields.iconLabelInfo2;
      break;
    case 0xE:
      if ( (v4->fields.amountSortValue & 0x8000000000000000LL) == 0 )
        goto LABEL_92;
      manager = sort->fields.manager;
      if ( manager
        && (naturalAligment = RecommendSupportEquipSelectListViewManager_TypeInfo->_2.naturalAligment,
            manager->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
      {
        if ( (RecommendSupportEquipSelectListViewManager_c *)manager->klass->_2.typeHierarchy[naturalAligment - 1] == RecommendSupportEquipSelectListViewManager_TypeInfo )
          v29 = (UnityEngine_Object_o *)sort->fields.manager;
        else
          v29 = 0;
      }
      else
      {
        v29 = 0;
      }
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (RecommendSupportEquipSelectListViewItem_o *)UnityEngine_Object__op_Inequality(v29, 0, 0);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_92;
      v41 = v4->fields.userSvtEntity;
      if ( !v41 )
        goto LABEL_99;
      v43 = *(_QWORD *)&v41->fields.svtId.fields.currentCryptoKey;
      v42 = *(_QWORD *)&v41->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v51.fields.currentCryptoKey = v43;
      *(_QWORD *)&v51.fields.fakeValue = v42;
      this = (RecommendSupportEquipSelectListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(
                                                            v51,
                                                            0);
      if ( !v29 )
        goto LABEL_99;
      this = (RecommendSupportEquipSelectListViewItem_o *)RecommendSupportEquipSelectListViewManager__GetAmountSortValue(
                                                            (RecommendSupportEquipSelectListViewManager_o *)v29,
                                                            (int32_t)this,
                                                            v44);
      v4->fields.amountSortValue = (int64_t)this;
LABEL_92:
      v45 = v4->fields.servantEntity;
      if ( !v45 )
        goto LABEL_99;
      this = (RecommendSupportEquipSelectListViewItem_o *)v4->fields.userSvtEntity;
      rarity = (((unsigned __int64)(unsigned int)v4->fields.rarity << 32) + (v4->fields.amountSortValue << 48))
             | v45->fields.collectionNo;
LABEL_94:
      v4->fields.sortValue1 = rarity;
      if ( !this )
        goto LABEL_99;
      iconLabelInfo2 = v4->fields.iconLabelInfo1;
      break;
    default:
      return (char)this;
  }
  categoryIdList = (int32_t)this[1].fields.categoryIdList;
  this = (RecommendSupportEquipSelectListViewItem_o *)UserServantEntity__getLevelMax((UserServantEntity_o *)this, 0);
  if ( !iconLabelInfo2 )
    goto LABEL_99;
  IconLabelInfo__Set_42060700(iconLabelInfo2, 2, categoryIdList, (int32_t)this, 0, 0, 0, 0, 0, 0);
LABEL_98:
  LOBYTE(this) = 1;
  return (char)this;
}


bool RecommendSupportEquipSelectListViewItem__SwapChoice(
        RecommendSupportEquipSelectListViewItem_o *this,
        const MethodInfo *method)
{
  bool v2; // w8

  v2 = !this->fields.isSwapChoice;
  this->fields.isSwapChoice ^= 1u;
  return v2;
}


bool RecommendSupportEquipSelectListViewItem__SwapLock(
        RecommendSupportEquipSelectListViewItem_o *this,
        const MethodInfo *method)
{
  bool v2; // w8

  v2 = !this->fields.isSwapLock;
  this->fields.isSwapLock ^= 1u;
  return v2;
}


bool RecommendSupportEquipSelectListViewItem___SetSortValue_b__22_0(
        RecommendSupportEquipSelectListViewItem_o *this,
        EventGroupEntity_o *entity,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1
  struct UserServantEntity_o *userSvtEntity; // x8
  EventCampaignMaster_o *v8; // x21
  __int64 v9; // x22
  __int64 v10; // x23
  bool result; // w0
  UserServantEntity_o *v12; // x21
  bool EventUpVal_44304936; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_4E00715 & 1) == 0 )
  {
    sub_1CE6700(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_1CE6700(&DataManager_TypeInfo);
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    byte_4E00715 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_EventCampaignMaster___);
  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_17;
  v8 = (EventCampaignMaster_o *)Master_object;
  v10 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v14.fields.currentCryptoKey = v10;
  *(_QWORD *)&v14.fields.fakeValue = v9;
  Master_object = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v14, 0);
  if ( !entity || !v8 )
    goto LABEL_17;
  if ( EventCampaignMaster__IsEnableServant(v8, (int32_t)Master_object, entity->fields.eventId, 0) )
    return 1;
  v12 = this->fields.userSvtEntity;
  Master_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Master_object || !v12 )
LABEL_17:
    sub_1CE6958(Master_object, v6);
  EventUpVal_44304936 = UserServantEntity__getEventUpVal_44304936(
                          v12,
                          -1,
                          0,
                          0,
                          (EventUpValSetupInfo_o *)Master_object[6].monitor,
                          entity->fields.eventId,
                          0,
                          0);
  result = 0;
  if ( EventUpVal_44304936 )
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