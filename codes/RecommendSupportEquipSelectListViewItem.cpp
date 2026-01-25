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
  int64_t Instance; // x0
  __int64 v45; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v46; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v47; // x26
  __int64 v48; // x27
  __int64 v49; // x28
  Il2CppObject *v50; // x0
  int32_t v51; // w2
  int32_t v52; // w3
  System_String_o *v53; // x4
  int32_t v54; // w5
  int64_t v55; // x6
  System_String_o *v56; // x7
  ServantLimitMaster_o *v57; // x26
  int32_t v58; // w27
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v60; // q1
  struct UserServantEntity_o *v61; // x8
  __int128 v62; // q0
  bool v63; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v64; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v65; // q0
  UserServantEntity_o *v66; // x8
  struct ServantEntity_o *servantEntity; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v68; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v69; // q0
  int64_t v70; // x8
  UserServantEntity_o *v71; // x8
  bool IsChocolateSvtEquip; // w0
  struct UserServantEntity_o *equippedUserSvtEntity; // x8
  __int64 v74; // x23
  __int64 v75; // x24
  struct UserServantEntity_o *v76; // x8
  PartyOrganizationUtility_o *v77; // x23
  __int64 v78; // x24
  __int64 v79; // x25
  UserServantEntity_o *v80; // x8
  int32_t v81; // w22
  int32_t v82; // w24
  struct System_Int32_array *EquipCategoryIdList; // x0
  GrandQuestFolderBoardItem_o *p_categoryIdList; // x19
  int32_t v85; // w2
  int32_t v86; // w3
  System_String_o *v87; // x4
  int32_t v88; // w5
  int64_t v89; // x6
  System_String_o *v90; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v91; // [xsp+10h] [xbp-110h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v92; // [xsp+30h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v93; // [xsp+50h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v94; // [xsp+70h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v95; // [xsp+90h] [xbp-90h]
  int32_t actMaxRarity; // [xsp+B4h] [xbp-6Ch] BYREF
  System_String_o *skillName; // [xsp+B8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v98; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v99; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v100; // 0:x0.16

  if ( (byte_4CEA3A6 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C7BAE8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C7BAE8(&IconLabelInfo_TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C7BAE8(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4CEA3A6 = 1;
  }
  skillName = 0;
  actMaxRarity = 0;
  v15 = (IconLabelInfo_o *)sub_1C7BD34(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v15, 0);
  this->fields.iconLabelInfo1 = v15;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.iconLabelInfo1, (int32_t)v15, v16, v17, v18, v19, v20, v21);
  v22 = (IconLabelInfo_o *)sub_1C7BD34(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v22, 0);
  this->fields.iconLabelInfo2 = v22;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.iconLabelInfo2, (int32_t)v22, v24, v25, v26, v27, v28, v29);
  ListViewItem___ctor_44325320((ListViewItem_o *)this, index, 0);
  this->fields.equippedUserSvtEntity = equipEntity;
  p_equippedUserSvtEntity = &this->fields.equippedUserSvtEntity;
  sub_1C7BA8C(
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
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.userSvtEntity, (int32_t)entity, v38, v39, v40, v41, v42, v43);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_51;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ServantMaster___);
  v46 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_51;
  v47 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v49 = *(_QWORD *)&v46[5].fields.currentCryptoKey;
  v48 = *(_QWORD *)&v46[5].fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v98.fields.currentCryptoKey = v49;
  *(_QWORD *)&v98.fields.fakeValue = v48;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v98, 0);
  if ( !v47 )
    goto LABEL_51;
  v50 = DataMasterBase_object__object__int___GetEntity(
          v47,
          Instance,
          (const MethodInfo_342E2FC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)v50;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.servantEntity, (int32_t)v50, v51, v52, v53, v54, v55, v56);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_51;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtEntity )
    goto LABEL_51;
  v57 = (ServantLimitMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776((*p_userSvtEntity)[5], 0);
  if ( !*p_userSvtEntity )
    goto LABEL_51;
  v58 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776((*p_userSvtEntity)[6], 0);
  if ( !v57 )
    goto LABEL_51;
  Instance = (int64_t)ServantLimitMaster__GetEntity(v57, v58, Instance, 0);
  if ( !Instance )
    goto LABEL_51;
  userSvtEntity = this->fields.userSvtEntity;
  this->fields.rarity = *(_DWORD *)(Instance + 24);
  if ( !userSvtEntity )
    goto LABEL_51;
  v60 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v95.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v95.fields.fakeValue = v60;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v94 = v95;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v94, 0);
  if ( Instance == targetSvtEquipId )
  {
    *(_WORD *)&this->fields.isBase = 1;
  }
  else
  {
    v61 = this->fields.userSvtEntity;
    this->fields.isBase = 0;
    if ( !v61 )
      goto LABEL_51;
    v62 = *(_OWORD *)&v61->fields.id.fields.fakeValue;
    *(_OWORD *)&v95.fields.currentCryptoKey = *(_OWORD *)&v61->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v95.fields.fakeValue = v62;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v93 = v95;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v93, 0);
    if ( Instance == oldTargetSvtEquipId )
    {
      v63 = 0;
    }
    else
    {
      v64 = *p_userSvtEntity;
      if ( !*p_userSvtEntity )
        goto LABEL_51;
      v65 = v64[2];
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v95.fields.currentCryptoKey = v64[1];
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v95.fields.fakeValue = v65;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v92 = v95;
      v63 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v92, 0) == useSvtEquipId;
    }
    this->fields.isUse = v63;
  }
  Instance = (int64_t)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_51;
  Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0);
  v66 = this->fields.userSvtEntity;
  this->fields.isLock = Instance & 1;
  if ( !v66 )
    goto LABEL_51;
  Instance = UserServantEntity__IsChoice(v66, 0);
  servantEntity = this->fields.servantEntity;
  this->fields.isChoice = Instance & 1;
  *(_QWORD *)&this->fields.bonusKind = 1;
  this->fields.isEventUpVal = 0;
  if ( !servantEntity )
    goto LABEL_51;
  v68 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_51;
  this->fields.sortValue2 = ((__int64)servantEntity->fields.collectionNo << 16)
                          | ((unsigned __int64)(unsigned int)this->fields.rarity << 48)
                          | v68[16].fields.currentCryptoKey;
  v69 = v68[2];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v95.fields.currentCryptoKey = v68[1];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v95.fields.fakeValue = v69;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v91 = v95;
  v70 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v91, 0);
  Instance = (int64_t)this->fields.userSvtEntity;
  this->fields.sortValue2B = v70;
  this->fields.amountSortValue = -1;
  *(_WORD *)&this->fields.isSwapLock = 0;
  if ( !Instance )
    goto LABEL_51;
  Instance = UserServantEntity__IsFriendShipSvtEquip((UserServantEntity_o *)Instance, 0);
  v71 = this->fields.userSvtEntity;
  this->fields._IsFriendShipSvtEq_k__BackingField = Instance & 1;
  if ( !v71 )
    goto LABEL_51;
  IsChocolateSvtEquip = UserServantEntity__IsChocolateSvtEquip(v71, 0);
  equippedUserSvtEntity = this->fields.equippedUserSvtEntity;
  this->fields._IsChocolateSvtEquip_k__BackingField = IsChocolateSvtEquip;
  if ( equippedUserSvtEntity )
  {
    v75 = *(_QWORD *)&equippedUserSvtEntity->fields.svtId.fields.currentCryptoKey;
    v74 = *(_QWORD *)&equippedUserSvtEntity->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v99.fields.currentCryptoKey = v75;
    *(_QWORD *)&v99.fields.fakeValue = v74;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v99, 0) >= 1 )
    {
      Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_3A8CA98 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      v76 = *p_equippedUserSvtEntity;
      if ( *p_equippedUserSvtEntity )
      {
        v77 = (PartyOrganizationUtility_o *)Instance;
        v79 = *(_QWORD *)&v76->fields.svtId.fields.currentCryptoKey;
        v78 = *(_QWORD *)&v76->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v100.fields.currentCryptoKey = v79;
        *(_QWORD *)&v100.fields.fakeValue = v78;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v100, 0);
        v80 = *p_equippedUserSvtEntity;
        if ( *p_equippedUserSvtEntity )
        {
          v81 = Instance;
          Instance = UserServantEntity__getRarity(v80, 0);
          if ( *p_userSvtEntity )
          {
            v82 = Instance;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776((*p_userSvtEntity)[5], 0);
            if ( v77 )
            {
              this->fields.isInvalidRarity = PartyOrganizationUtility__IsRarityRestriction(
                                               v77,
                                               &skillName,
                                               &actMaxRarity,
                                               v81,
                                               v82,
                                               Instance,
                                               -1,
                                               0);
              goto LABEL_47;
            }
          }
        }
      }
LABEL_51:
      sub_1C7BD40(Instance, v45);
    }
  }
LABEL_47:
  Instance = (int64_t)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_51;
  EquipCategoryIdList = UserServantEntity__GetEquipCategoryIdList((UserServantEntity_o *)Instance, 1, 0);
  this->fields.categoryIdList = EquipCategoryIdList;
  p_categoryIdList = (GrandQuestFolderBoardItem_o *)&this->fields.categoryIdList;
  sub_1C7BA8C(p_categoryIdList, (int32_t)EquipCategoryIdList, v85, v86, v87, v88, v89, v90);
  Instance = (int64_t)p_categoryIdList->monitor;
  if ( !Instance )
    goto LABEL_51;
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0);
  Instance = (int64_t)*p_iconLabelInfo2;
  if ( !*p_iconLabelInfo2 )
    goto LABEL_51;
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0);
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

  if ( (byte_4CEA3A9 & 1) == 0 )
  {
    sub_1C7BAE8(&FilterKindList_TypeInfo);
    sub_1C7BAE8(&ListViewSort_FilterKind___TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    byte_4CEA3A9 = 1;
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
                           (const MethodInfo_38260BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                          (const MethodInfo_38260BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                           (const MethodInfo_38260BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                             (const MethodInfo_38260BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
      RarityFilterKindList = (System_Int32Enum_array *)sub_1C7BB90(ListViewSort_FilterKind___TypeInfo, 1);
      if ( RarityFilterKindList )
      {
        if ( !LODWORD(RarityFilterKindList->max_length) )
          sub_1C7BD48(RarityFilterKindList);
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
      sub_1C7BD40(RarityFilterKindList, sort);
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
    sub_1C7BD40(0, method);
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
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_userSvtEntity; // x21
  int64_t Instance; // x0
  __int64 v13; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v14; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v15; // x22
  __int64 v16; // x23
  __int64 v17; // x24
  Il2CppObject *v18; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  ServantLimitMaster_o *v25; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v26; // x8
  int32_t v27; // w21
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v29; // q1
  int64_t rarity; // x9
  struct ServantEntity_o *servantEntity; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33; // [xsp+20h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16

  if ( (byte_4CEA3A7 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C7BAE8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CEA3A7 = 1;
  }
  this->fields.userSvtEntity = entity;
  p_userSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userSvtEntity;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.userSvtEntity,
    (int32_t)entity,
    targetSvtEquipId,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ServantMaster___);
  v14 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_18;
  v15 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v17 = *(_QWORD *)&v14[5].fields.currentCryptoKey;
  v16 = *(_QWORD *)&v14[5].fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v34.fields.currentCryptoKey = v17;
  *(_QWORD *)&v34.fields.fakeValue = v16;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v34, 0);
  if ( !v15 )
    goto LABEL_18;
  v18 = DataMasterBase_object__object__int___GetEntity(
          v15,
          Instance,
          (const MethodInfo_342E2FC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)v18;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.servantEntity, (int32_t)v18, v19, v20, v21, v22, v23, v24);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtEntity )
    goto LABEL_18;
  v25 = (ServantLimitMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776((*p_userSvtEntity)[5], 0);
  v26 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_18;
  v27 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v26[6], 0);
  if ( !v25 )
    goto LABEL_18;
  Instance = (int64_t)ServantLimitMaster__GetEntity(v25, v27, Instance, 0);
  if ( !Instance )
    goto LABEL_18;
  userSvtEntity = this->fields.userSvtEntity;
  this->fields.rarity = *(_DWORD *)(Instance + 24);
  if ( !userSvtEntity )
    goto LABEL_18;
  v29 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v33.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v33.fields.fakeValue = v29;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v32 = v33;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v32, 0);
  rarity = this->fields.rarity;
  servantEntity = this->fields.servantEntity;
  this->fields.isBase = Instance == targetSvtEquipId;
  this->fields.sortValue1B = rarity;
  if ( !servantEntity )
LABEL_18:
    sub_1C7BD40(Instance, v13);
  this->fields.sortValue2 = servantEntity->fields.collectionNo;
}


void RecommendSupportEquipSelectListViewItem__ModifyLockItem(
        RecommendSupportEquipSelectListViewItem_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0

  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_1C7BD40(0, method);
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
  int64_t sortValue0B_low; // x20
  IconLabelInfo_o *iconLabelInfo1; // x21
  int64_t sortValue1_high; // x20
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
  bool EventUpVal_43708596; // w0
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
  int32_t sortValue0B; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v48; // [xsp+10h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v49; // [xsp+30h] [xbp-50h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v50; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v51; // 0:x0.16

  v4 = this;
  if ( (byte_4CEA3A8 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_BasicHelper_Any_EventGroupEntity___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_EventGroupMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&System_Func_EventGroupEntity__bool__TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventGroupEntity__get_Count__);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C7BAE8(&Method_RecommendSupportEquipSelectListViewItem__SetSortValue_b__22_0__);
    sub_1C7BAE8(&RecommendSupportEquipSelectListViewManager_TypeInfo);
    this = (RecommendSupportEquipSelectListViewItem_o *)sub_1C7BAE8(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    byte_4CEA3A8 = 1;
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
    this = (RecommendSupportEquipSelectListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    if ( !this || !userSvtEntity )
      goto LABEL_99;
    EventUpVal_43708596 = UserServantEntity__getEventUpVal_43708596(
                            userSvtEntity,
                            -1,
                            0,
                            0,
                            *(EventUpValSetupInfo_o **)&this->fields.basePosition.fields.y,
                            v4->fields.bonusKindId,
                            0,
                            0);
    isEventUpVal = EventUpVal_43708596;
    v4->fields.isEventUpVal = EventUpVal_43708596;
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
    this = (RecommendSupportEquipSelectListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_EventCampaignMaster___);
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
    this = (RecommendSupportEquipSelectListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(
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
  this = (RecommendSupportEquipSelectListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_EventGroupMaster___);
  if ( !this )
LABEL_99:
    sub_1C7BD40(this, sort);
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
      v40 = (System_Func_object__bool__o *)sub_1C7BD34(System_Func_EventGroupEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v40,
        (Il2CppObject *)v4,
        Method_RecommendSupportEquipSelectListViewItem__SetSortValue_b__22_0__,
        0);
      v4->fields.isEventUpVal = BasicHelper__Any_object_(
                                  (System_Collections_Generic_List_T__o *)EntitiesByGroupId,
                                  (System_Func_T__bool__o *)v40,
                                  (const MethodInfo_3159728 *)Method_BasicHelper_Any_EventGroupEntity___);
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
      this = (RecommendSupportEquipSelectListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(
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
      sortValue0B_low = SLODWORD(this[1].fields.sortValue0B);
      iconLabelInfo1 = v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = sortValue0B_low;
      this = (RecommendSupportEquipSelectListViewItem_o *)UserServantEntity__getLevelMax((UserServantEntity_o *)this, 0);
      if ( !iconLabelInfo1 )
        goto LABEL_99;
      IconLabelInfo__Set_41483756(iconLabelInfo1, 2, sortValue0B_low, (int32_t)this, 0, 0, 0, 0, 0, 0);
      goto LABEL_98;
    case 5:
      this = (RecommendSupportEquipSelectListViewItem_o *)v4->fields.userSvtEntity;
      if ( !this )
        goto LABEL_99;
      sortValue1_high = SHIDWORD(this[1].fields.sortValue1);
      v21 = v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = sortValue1_high;
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
      sortValue1_high = SLODWORD(this[1].fields.sortValue1);
      v21 = v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = sortValue1_high;
      this = (RecommendSupportEquipSelectListViewItem_o *)UserServantEntity__get_AtkBoostValue(
                                                            (UserServantEntity_o *)this,
                                                            0);
      if ( !v21 )
        goto LABEL_99;
      v22 = (int)this;
      v23 = 5;
LABEL_41:
      IconLabelInfo__Set_41483756(v21, v23, sortValue1_high, v22, 0, 0, 0, 0, 0, 0);
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
      IconLabelInfo__Set_41483756((IconLabelInfo_o *)this, 7, cost, 0, 0, 0, 0, 0, 0, 0);
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
      this = (RecommendSupportEquipSelectListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(
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
  sortValue0B = this[1].fields.sortValue0B;
  this = (RecommendSupportEquipSelectListViewItem_o *)UserServantEntity__getLevelMax((UserServantEntity_o *)this, 0);
  if ( !iconLabelInfo2 )
    goto LABEL_99;
  IconLabelInfo__Set_41483756(iconLabelInfo2, 2, sortValue0B, (int32_t)this, 0, 0, 0, 0, 0, 0);
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
  bool EventUpVal_43708596; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_4CEA3AA & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    byte_4CEA3AA = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_EventCampaignMaster___);
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
  Master_object = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v14, 0);
  if ( !entity || !v8 )
    goto LABEL_17;
  if ( EventCampaignMaster__IsEnableServant(v8, (int32_t)Master_object, entity->fields.eventId, 0) )
    return 1;
  v12 = this->fields.userSvtEntity;
  Master_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Master_object || !v12 )
LABEL_17:
    sub_1C7BD40(Master_object, v6);
  EventUpVal_43708596 = UserServantEntity__getEventUpVal_43708596(
                          v12,
                          -1,
                          0,
                          0,
                          (EventUpValSetupInfo_o *)Master_object[6].monitor,
                          entity->fields.eventId,
                          0,
                          0);
  result = 0;
  if ( EventUpVal_43708596 )
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