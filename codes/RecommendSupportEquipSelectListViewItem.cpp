void __fastcall RecommendSupportEquipSelectListViewItem___ctor(
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
  IconLabelInfo_o *v18; // x27
  struct IconLabelInfo_o **p_iconLabelInfo2; // x20
  int32_t v20; // w2
  int32_t v21; // w3
  struct UserServantEntity_o **p_equippedUserSvtEntity; // x22
  int32_t v23; // w2
  int32_t v24; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_userSvtEntity; // x21
  int32_t v26; // w2
  int32_t v27; // w3
  int64_t Instance; // x0
  __int64 v29; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v30; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v31; // x26
  __int64 v32; // x27
  __int64 v33; // x28
  Il2CppObject *v34; // x0
  struct ServantEntity_o **p_servantEntity; // x26
  int32_t v36; // w2
  int32_t v37; // w3
  ServantLimitMaster_o *v38; // x27
  int32_t v39; // w28
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v41; // q1
  char isBase; // w8
  struct UserServantEntity_o *v43; // x8
  __int128 v44; // q0
  bool v45; // w9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v46; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v47; // q0
  UserServantEntity_o *v48; // x8
  struct ServantEntity_o *servantEntity; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v50; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v51; // q0
  UserServantEntity_o *v52; // x8
  bool IsChocolateSvtEquip; // w0
  struct UserServantEntity_o *equippedUserSvtEntity; // x8
  __int64 v55; // x23
  __int64 v56; // x24
  struct UserServantEntity_o *v57; // x8
  PartyOrganizationUtility_o *v58; // x23
  __int64 v59; // x24
  __int64 v60; // x25
  UserServantEntity_o *v61; // x8
  int32_t v62; // w22
  int32_t v63; // w24
  struct System_Int32_array *EquipCategoryIdList; // x0
  ServantStatusBattleListViewItem_o *p_categoryIdList; // x19
  int32_t v66; // w2
  int32_t v67; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v68; // [xsp+10h] [xbp-110h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v69; // [xsp+30h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v70; // [xsp+50h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v71; // [xsp+70h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v72; // [xsp+90h] [xbp-90h]
  int32_t actMaxRarity; // [xsp+B4h] [xbp-6Ch] BYREF
  System_String_o *skillName; // [xsp+B8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v75; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v76; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v77; // 0:x0.16

  if ( (byte_4A57377 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&IconLabelInfo_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4A57377 = 1;
  }
  skillName = 0LL;
  actMaxRarity = 0;
  v15 = (IconLabelInfo_o *)sub_1B887FC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v15, 0LL);
  this->fields.iconLabelInfo1 = v15;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.iconLabelInfo1, (int32_t)v15, v16, v17);
  v18 = (IconLabelInfo_o *)sub_1B887FC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v18, 0LL);
  this->fields.iconLabelInfo2 = v18;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.iconLabelInfo2, (int32_t)v18, v20, v21);
  ListViewItem___ctor_40706472((ListViewItem_o *)this, index, 0LL);
  this->fields.equippedUserSvtEntity = equipEntity;
  p_equippedUserSvtEntity = &this->fields.equippedUserSvtEntity;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.equippedUserSvtEntity, (int32_t)equipEntity, v23, v24);
  this->fields.userSvtEntity = entity;
  p_userSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userSvtEntity;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.userSvtEntity, (int32_t)entity, v26, v27);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_52;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
  v30 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_52;
  v31 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v33 = *(_QWORD *)&v30[5].fields.currentCryptoKey;
  v32 = *(_QWORD *)&v30[5].fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v75.fields.currentCryptoKey = v33;
  *(_QWORD *)&v75.fields.fakeValue = v32;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v75, 0LL);
  if ( !v31 )
    goto LABEL_52;
  v34 = DataMasterBase_object__object__int___GetEntity(
          v31,
          Instance,
          (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)v34;
  p_servantEntity = &this->fields.servantEntity;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.servantEntity, (int32_t)v34, v36, v37);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_52;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtEntity )
    goto LABEL_52;
  v38 = (ServantLimitMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800((*p_userSvtEntity)[5], 0LL);
  if ( !*p_userSvtEntity )
    goto LABEL_52;
  v39 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800((*p_userSvtEntity)[6], 0LL);
  if ( !v38 )
    goto LABEL_52;
  Instance = (int64_t)ServantLimitMaster__GetEntity(v38, v39, Instance, 0LL);
  if ( !*p_servantEntity )
    goto LABEL_52;
  this->fields.classId = (*p_servantEntity)->fields.classId;
  if ( !Instance )
    goto LABEL_52;
  userSvtEntity = this->fields.userSvtEntity;
  this->fields.rarity = *(_DWORD *)(Instance + 24);
  if ( !userSvtEntity )
    goto LABEL_52;
  v41 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v72.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v72.fields.fakeValue = v41;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v71 = v72;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v71, 0LL);
  if ( Instance == targetSvtEquipId )
  {
    isBase = 1;
    *(_WORD *)&this->fields.isBase = 1;
  }
  else
  {
    v43 = this->fields.userSvtEntity;
    this->fields.isBase = 0;
    if ( !v43 )
      goto LABEL_52;
    v44 = *(_OWORD *)&v43->fields.id.fields.fakeValue;
    *(_OWORD *)&v72.fields.currentCryptoKey = *(_OWORD *)&v43->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v72.fields.fakeValue = v44;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v70 = v72;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v70, 0LL);
    if ( Instance == oldTargetSvtEquipId )
    {
      v45 = 0;
    }
    else
    {
      v46 = *p_userSvtEntity;
      if ( !*p_userSvtEntity )
        goto LABEL_52;
      v47 = v46[2];
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v72.fields.currentCryptoKey = v46[1];
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v72.fields.fakeValue = v47;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v69 = v72;
      v45 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v69, 0LL) == useSvtEquipId;
    }
    isBase = this->fields.isBase;
    this->fields.isUse = v45;
  }
  Instance = (int64_t)this->fields.userSvtEntity;
  this->fields.isOldBase = isBase;
  if ( !Instance )
    goto LABEL_52;
  Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL);
  v48 = this->fields.userSvtEntity;
  this->fields.isLock = Instance & 1;
  if ( !v48 )
    goto LABEL_52;
  Instance = UserServantEntity__IsChoice(v48, 0LL);
  servantEntity = this->fields.servantEntity;
  this->fields.isChoice = Instance & 1;
  *(_QWORD *)&this->fields.bonusKind = 1LL;
  this->fields.isEventUpVal = 0;
  if ( !servantEntity )
    goto LABEL_52;
  v50 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_52;
  this->fields.sortValue2 = ((__int64)servantEntity->fields.collectionNo << 16) | ((unsigned __int64)(unsigned int)this->fields.rarity << 48) | v50[16].fields.currentCryptoKey;
  v51 = v50[2];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v72.fields.currentCryptoKey = v50[1];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v72.fields.fakeValue = v51;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v68 = v72;
  this->fields.sortValue2B = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v68, 0LL);
  this->fields.amountSortValue = -1LL;
  *(_WORD *)&this->fields.isSwapLock = 0;
  Instance = (int64_t)this->fields.userSvtEntity;
  if ( !Instance )
    goto LABEL_52;
  Instance = UserServantEntity__IsFriendShipSvtEquip((UserServantEntity_o *)Instance, 0LL);
  v52 = this->fields.userSvtEntity;
  this->fields._IsFriendShipSvtEq_k__BackingField = Instance & 1;
  if ( !v52 )
    goto LABEL_52;
  IsChocolateSvtEquip = UserServantEntity__IsChocolateSvtEquip(v52, 0LL);
  equippedUserSvtEntity = this->fields.equippedUserSvtEntity;
  this->fields._IsChocolateSvtEquip_k__BackingField = IsChocolateSvtEquip;
  if ( equippedUserSvtEntity )
  {
    v56 = *(_QWORD *)&equippedUserSvtEntity->fields.svtId.fields.currentCryptoKey;
    v55 = *(_QWORD *)&equippedUserSvtEntity->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v76.fields.currentCryptoKey = v56;
    *(_QWORD *)&v76.fields.fakeValue = v55;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v76, 0LL) >= 1 )
    {
      Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      v57 = *p_equippedUserSvtEntity;
      if ( *p_equippedUserSvtEntity )
      {
        v58 = (PartyOrganizationUtility_o *)Instance;
        v60 = *(_QWORD *)&v57->fields.svtId.fields.currentCryptoKey;
        v59 = *(_QWORD *)&v57->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v77.fields.currentCryptoKey = v60;
        *(_QWORD *)&v77.fields.fakeValue = v59;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v77, 0LL);
        v61 = *p_equippedUserSvtEntity;
        if ( *p_equippedUserSvtEntity )
        {
          v62 = Instance;
          Instance = UserServantEntity__getRarity(v61, 0LL);
          if ( *p_userSvtEntity )
          {
            v63 = Instance;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800((*p_userSvtEntity)[5], 0LL);
            if ( v58 )
            {
              this->fields.isInvalidRarity = PartyOrganizationUtility__IsRarityRestriction(
                                               v58,
                                               &skillName,
                                               &actMaxRarity,
                                               v62,
                                               v63,
                                               Instance,
                                               -1,
                                               0LL);
              goto LABEL_48;
            }
          }
        }
      }
LABEL_52:
      sub_1B8880C(Instance, v29);
    }
  }
LABEL_48:
  Instance = (int64_t)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_52;
  EquipCategoryIdList = UserServantEntity__GetEquipCategoryIdList((UserServantEntity_o *)Instance, 1, 0LL);
  this->fields.categoryIdList = EquipCategoryIdList;
  p_categoryIdList = (ServantStatusBattleListViewItem_o *)&this->fields.categoryIdList;
  sub_1B88554(p_categoryIdList, (int32_t)EquipCategoryIdList, v66, v67);
  Instance = (int64_t)p_categoryIdList->monitor;
  if ( !Instance )
    goto LABEL_52;
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0LL);
  Instance = (int64_t)*p_iconLabelInfo2;
  if ( !*p_iconLabelInfo2 )
    goto LABEL_52;
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0LL);
}


bool __fastcall RecommendSupportEquipSelectListViewItem__GetNpInfo(
        RecommendSupportEquipSelectListViewItem_o *this,
        TreasureDvcInfo_o **tdInfo,
        const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0
  TreasureDvcInfo_o *v7; // x20
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_4A5737C & 1) == 0 )
  {
    sub_1B885B0(&TreasureDvcInfo_TypeInfo);
    byte_4A5737C = 1;
  }
  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
    return UserServantEntity__getTreasureDeviceInfo(userSvtEntity, tdInfo, -1, -1, 0, 0LL);
  v7 = (TreasureDvcInfo_o *)sub_1B887FC(TreasureDvcInfo_TypeInfo);
  TreasureDvcInfo___ctor(v7, 0LL);
  *tdInfo = v7;
  sub_1B88554((ServantStatusBattleListViewItem_o *)tdInfo, (int32_t)v7, v8, v9);
  return 0;
}


bool __fastcall RecommendSupportEquipSelectListViewItem__IsMatchFilter(
        RecommendSupportEquipSelectListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  if ( this->fields.isBase )
    return (unsigned __int8)&dword_0 + 1;
  else
    return RecommendSupportEquipSelectListViewItem__IsMatchServantEquipFilter(this, sort, method);
}


bool __fastcall RecommendSupportEquipSelectListViewItem__IsMatchServantEquipFilter(
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

  if ( (byte_4A5737A & 1) == 0 )
  {
    sub_1B885B0(&FilterKindList_TypeInfo);
    sub_1B885B0(&ListViewSort_FilterKind___TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    byte_4A5737A = 1;
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
                           (const MethodInfo_34E4AF4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_36;
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)RarityFilterKindList, 0LL)
    && !ListViewSort__IsMatchRarityFilter(sort, this->fields.rarity, 0LL)
    || !ListViewSort__CheckSvtEquipEffectFilterDefaultAll(sort, 0LL)
    && !ServantEquipEffectFilterController__IsMatchEffectCategory(this->fields.categoryIdList, sort, 0LL) )
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
                                          (const MethodInfo_34E4AF4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v8, 0LL)
    && !ListViewSort__IsMatchServantEquipTypeFilter(sort, this->fields.servantEntity, 0LL) )
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
                                           (const MethodInfo_34E4AF4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, v10, 0LL)
    || (IsMatchServantEquipCombineStatusFilter = ListViewSort__IsMatchServantEquipCombineStatusFilter(
                                                   sort,
                                                   this->fields.userSvtEntity,
                                                   this->fields.servantEntity,
                                                   0,
                                                   0LL),
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
                                             (const MethodInfo_34E4AF4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, v14, 0LL)
      || (HaveStatusFilter = ListViewSort__IsMatchServantEquipHaveStatusFilter(
                               sort,
                               this->fields.userSvtEntity,
                               this->fields.servantEntity,
                               0,
                               0LL),
          result = 0,
          HaveStatusFilter) )
    {
      RarityFilterKindList = (System_Int32Enum_array *)sub_1B88658(ListViewSort_FilterKind___TypeInfo, 1LL);
      if ( RarityFilterKindList )
      {
        if ( !RarityFilterKindList->max_length )
          sub_1B88814(RarityFilterKindList, RarityFilterKindList);
        RarityFilterKindList->m_Items[1] = 39;
        if ( ListViewSort__IsUnSelectedAllTargetFilters(
               sort,
               (ListViewSort_FilterKind_array *)RarityFilterKindList,
               0LL)
          || !ListViewSort__GetFilter(sort, 39, 0LL) )
        {
          return 1;
        }
        v16 = !this->fields.isChoice;
        if ( !this->fields.isSwapChoice )
          return this->fields.isChoice;
        return v16;
      }
LABEL_36:
      sub_1B8880C(RarityFilterKindList, sort);
    }
  }
  return result;
}


void __fastcall RecommendSupportEquipSelectListViewItem__Modify(
        RecommendSupportEquipSelectListViewItem_o *this,
        UserServantEntity_o *entity,
        int64_t targetSvtEquipId,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1

  RecommendSupportEquipSelectListViewItem__ModifyItem(this, entity, targetSvtEquipId, method);
  RecommendSupportEquipSelectListViewItem__ModifyLockItem(this, v5);
  RecommendSupportEquipSelectListViewItem__ModifyChoiceItem(this, v6);
}


void __fastcall RecommendSupportEquipSelectListViewItem__ModifyChoiceItem(
        RecommendSupportEquipSelectListViewItem_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0

  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_1B8880C(0LL, method);
  this->fields.isChoice = UserServantEntity__IsChoice(userSvtEntity, 0LL);
  this->fields.isSwapChoice = 0;
}


void __fastcall RecommendSupportEquipSelectListViewItem__ModifyItem(
        RecommendSupportEquipSelectListViewItem_o *this,
        UserServantEntity_o *entity,
        int64_t targetSvtEquipId,
        const MethodInfo *method)
{
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_userSvtEntity; // x21
  int64_t Instance; // x0
  __int64 v9; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v10; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v11; // x22
  __int64 v12; // x23
  __int64 v13; // x24
  Il2CppObject *v14; // x0
  struct ServantEntity_o **p_servantEntity; // x22
  int32_t v16; // w2
  int32_t v17; // w3
  ServantLimitMaster_o *v18; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v19; // x8
  int32_t v20; // w21
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v22; // q1
  int64_t rarity; // x9
  struct ServantEntity_o *servantEntity; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v25; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+20h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16

  if ( (byte_4A57378 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A57378 = 1;
  }
  this->fields.userSvtEntity = entity;
  p_userSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userSvtEntity;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.userSvtEntity,
    (int32_t)entity,
    targetSvtEquipId,
    (int32_t)method);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
  v10 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_19;
  v11 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v13 = *(_QWORD *)&v10[5].fields.currentCryptoKey;
  v12 = *(_QWORD *)&v10[5].fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v27.fields.currentCryptoKey = v13;
  *(_QWORD *)&v27.fields.fakeValue = v12;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v27, 0LL);
  if ( !v11 )
    goto LABEL_19;
  v14 = DataMasterBase_object__object__int___GetEntity(
          v11,
          Instance,
          (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)v14;
  p_servantEntity = &this->fields.servantEntity;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.servantEntity, (int32_t)v14, v16, v17);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtEntity )
    goto LABEL_19;
  v18 = (ServantLimitMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800((*p_userSvtEntity)[5], 0LL);
  v19 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_19;
  v20 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v19[6], 0LL);
  if ( !v18 )
    goto LABEL_19;
  Instance = (int64_t)ServantLimitMaster__GetEntity(v18, v20, Instance, 0LL);
  if ( !*p_servantEntity )
    goto LABEL_19;
  this->fields.classId = (*p_servantEntity)->fields.classId;
  if ( !Instance )
    goto LABEL_19;
  userSvtEntity = this->fields.userSvtEntity;
  this->fields.rarity = *(_DWORD *)(Instance + 24);
  if ( !userSvtEntity )
    goto LABEL_19;
  v22 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v26.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v26.fields.fakeValue = v22;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v25 = v26;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v25, 0LL);
  rarity = this->fields.rarity;
  servantEntity = this->fields.servantEntity;
  this->fields.isBase = Instance == targetSvtEquipId;
  this->fields.isOldBase = Instance == targetSvtEquipId;
  this->fields.sortValue1B = rarity;
  if ( !servantEntity )
LABEL_19:
    sub_1B8880C(Instance, v9);
  this->fields.sortValue2 = servantEntity->fields.collectionNo;
}


void __fastcall RecommendSupportEquipSelectListViewItem__ModifyLockItem(
        RecommendSupportEquipSelectListViewItem_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0

  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_1B8880C(0LL, method);
  this->fields.isLock = UserServantEntity__IsLock(userSvtEntity, 0LL);
  this->fields.isSwapLock = 0;
}


bool __fastcall RecommendSupportEquipSelectListViewItem__SetSortValue(
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
  struct UserServantEntity_o *v20; // x8
  int64_t hp; // x2
  int32_t adjustHp; // w3
  int32_t v23; // w1
  struct UserServantEntity_o *v24; // x8
  struct ServantEntity_o *servantEntity; // x8
  int64_t cost; // x2
  IconLabelInfo_o *iconLabelInfo2; // x19
  struct ListViewManager_o *manager; // x8
  __int64 methodPtr_low; // x11
  UnityEngine_Object_o *v30; // x20
  int32_t v31; // w8
  int v32; // w8
  UserServantEntity_o *userSvtEntity; // x21
  bool EventUpVal_40205464; // w0
  struct UserServantEntity_o *v35; // x8
  EventCampaignMaster_o *v36; // x21
  __int64 v37; // x22
  __int64 v38; // x23
  bool IsEnableServant; // w0
  System_Collections_Generic_List_EventGroupEntity__o *EntitiesByGroupId; // x21
  System_Func_object__bool__o *v41; // x22
  struct UserServantEntity_o *v42; // x8
  __int64 v43; // x21
  __int64 v44; // x22
  const MethodInfo *v45; // x2
  struct ServantEntity_o *v46; // x8
  int32_t sortValue0B; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v49; // [xsp+10h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v50; // [xsp+30h] [xbp-50h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v51; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v52; // 0:x0.16

  v4 = this;
  if ( (byte_4A57379 & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_Any_EventGroupEntity___);
    sub_1B885B0(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_EventGroupMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&System_Func_EventGroupEntity__bool__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventGroupEntity__get_Count__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Method_RecommendSupportEquipSelectListViewItem__SetSortValue_b__25_0__);
    sub_1B885B0(&RecommendSupportEquipSelectListViewManager_TypeInfo);
    this = (RecommendSupportEquipSelectListViewItem_o *)sub_1B885B0(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    byte_4A57379 = 1;
  }
  *(_WORD *)&v4->fields.isTermination = 0;
  v4->fields.sortValue1 = -1LL;
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
    this = (RecommendSupportEquipSelectListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    if ( !this || !userSvtEntity )
      goto LABEL_99;
    EventUpVal_40205464 = UserServantEntity__getEventUpVal_40205464(
                            userSvtEntity,
                            -1,
                            0,
                            0,
                            (EventUpValSetupInfo_o *)this->fields.viewObject,
                            v4->fields.bonusKindId,
                            0,
                            0LL);
    isEventUpVal = EventUpVal_40205464;
    v4->fields.isEventUpVal = EventUpVal_40205464;
LABEL_58:
    if ( !isEventUpVal || v4->fields.isInvalidRarity )
      goto LABEL_80;
    goto LABEL_6;
  }
  if ( bonusKind2 == 3 )
  {
    if ( v4->fields.bonusKind == 3 )
    {
      v31 = sort->fields.bonusKind2Id;
      if ( v4->fields.bonusKindId == v31 )
      {
        v32 = v4->fields.isEventUpVal;
        goto LABEL_69;
      }
    }
    else
    {
      v31 = sort->fields.bonusKind2Id;
    }
    v4->fields.bonusKind = 3;
    v4->fields.bonusKindId = v31;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (RecommendSupportEquipSelectListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventCampaignMaster___);
    v35 = v4->fields.userSvtEntity;
    if ( !v35 )
      goto LABEL_99;
    v36 = (EventCampaignMaster_o *)this;
    v38 = *(_QWORD *)&v35->fields.svtId.fields.currentCryptoKey;
    v37 = *(_QWORD *)&v35->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v51.fields.currentCryptoKey = v38;
    *(_QWORD *)&v51.fields.fakeValue = v37;
    this = (RecommendSupportEquipSelectListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                                          v51,
                                                          0LL);
    if ( !v36 )
      goto LABEL_99;
    IsEnableServant = EventCampaignMaster__IsEnableServant(v36, (int32_t)this, v4->fields.bonusKindId, 0LL);
    v32 = IsEnableServant;
    v4->fields.isEventUpVal = IsEnableServant;
LABEL_69:
    if ( !v32 )
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
  this = (RecommendSupportEquipSelectListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventGroupMaster___);
  if ( !this )
LABEL_99:
    sub_1B8880C(this, sort);
  EntitiesByGroupId = EventGroupMaster__GetEntitiesByGroupId((EventGroupMaster_o *)this, v4->fields.bonusKindId, 0LL);
  this = (RecommendSupportEquipSelectListViewItem_o *)BasicHelper__IsNullOrEmpty(
                                                        (System_Collections_ICollection_o *)EntitiesByGroupId,
                                                        0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( !EntitiesByGroupId )
      goto LABEL_99;
    if ( EntitiesByGroupId->fields._size >= 2 )
    {
      v41 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_EventGroupEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v41,
        (Il2CppObject *)v4,
        Method_RecommendSupportEquipSelectListViewItem__SetSortValue_b__25_0__,
        0LL);
      v4->fields.isEventUpVal = BasicHelper__Any_object_(
                                  (System_Collections_Generic_List_T__o *)EntitiesByGroupId,
                                  (System_Func_T__bool__o *)v41,
                                  (const MethodInfo_2E6ACD0 *)Method_BasicHelper_Any_EventGroupEntity___);
    }
  }
LABEL_79:
  if ( !v4->fields.isEventUpVal )
    goto LABEL_80;
LABEL_6:
  if ( (((__int64 (__fastcall *)(RecommendSupportEquipSelectListViewItem_o *, ListViewSort_o *, void *))v4->klass->vtable._5_IsMatchFilter.method)(
          v4,
          sort,
          v4->klass[1]._1.image) & 1) == 0 )
  {
LABEL_80:
    LOBYTE(this) = 0;
    return (char)this;
  }
  isChoice = v4->fields.isChoice;
  isSwapChoice = v4->fields.isSwapChoice;
  v4->fields.sortValue0 = 0LL;
  v7 = !isChoice;
  v8 = !isChoice;
  v9 = !v7;
  if ( !isSwapChoice )
    v8 = v9;
  if ( v8 && sort->fields.isChoiceSort )
    v4->fields.sortValue0 = 10LL;
  this = (RecommendSupportEquipSelectListViewItem_o *)v4->fields.iconLabelInfo2;
  if ( !this )
    goto LABEL_99;
  IconLabelInfo__Clear((IconLabelInfo_o *)this, 0LL);
  this = (RecommendSupportEquipSelectListViewItem_o *)(&dword_0 + 1);
  switch ( sort->fields.sortKind )
  {
    case 1:
      v10 = v4->fields.userSvtEntity;
      if ( !v10 )
        goto LABEL_99;
      v11 = *(_OWORD *)&v10->fields.id.fields.fakeValue;
      *(_OWORD *)&v50.fields.currentCryptoKey = *(_OWORD *)&v10->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v50.fields.fakeValue = v11;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v49 = v50;
      this = (RecommendSupportEquipSelectListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(
                                                            &v49,
                                                            0LL);
      v12 = v4->fields.userSvtEntity;
      v4->fields.sortValue1 = (int64_t)this;
      if ( !v12 )
        goto LABEL_99;
      this = (RecommendSupportEquipSelectListViewItem_o *)v4->fields.iconLabelInfo1;
      if ( !this )
        goto LABEL_99;
      IconLabelInfo__SetTime((IconLabelInfo_o *)this, 49, v12->fields.createdAt, 0, 0, 0, 0LL);
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
      this = (RecommendSupportEquipSelectListViewItem_o *)UserServantEntity__getLevelMax(
                                                            (UserServantEntity_o *)this,
                                                            0LL);
      if ( !iconLabelInfo1 )
        goto LABEL_99;
      IconLabelInfo__Set_38140136(iconLabelInfo1, 2, sortValue0B_low, (int32_t)this, 0, 0, 0, 0, 0LL);
      goto LABEL_98;
    case 5:
      v20 = v4->fields.userSvtEntity;
      if ( !v20 )
        goto LABEL_99;
      hp = v20->fields.hp;
      this = (RecommendSupportEquipSelectListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = hp;
      if ( !this )
        goto LABEL_99;
      adjustHp = v20->fields.adjustHp;
      v23 = 3;
      goto LABEL_41;
    case 6:
      v24 = v4->fields.userSvtEntity;
      if ( !v24 )
        goto LABEL_99;
      hp = v24->fields.atk;
      this = (RecommendSupportEquipSelectListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = hp;
      if ( !this )
        goto LABEL_99;
      adjustHp = v24->fields.adjustAtk;
      v23 = 5;
LABEL_41:
      IconLabelInfo__Set_38140136((IconLabelInfo_o *)this, v23, hp, adjustHp, 0, 0, 0, 0, 0LL);
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
      IconLabelInfo__Set_38140136((IconLabelInfo_o *)this, 7, cost, 0, 0, 0, 0, 0, 0LL);
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
        && (methodPtr_low = LOBYTE(RecommendSupportEquipSelectListViewManager_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(manager->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
      {
        if ( (RecommendSupportEquipSelectListViewManager_c *)manager->klass->_2.typeHierarchy[methodPtr_low - 1] == RecommendSupportEquipSelectListViewManager_TypeInfo )
          v30 = (UnityEngine_Object_o *)sort->fields.manager;
        else
          v30 = 0LL;
      }
      else
      {
        v30 = 0LL;
      }
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (RecommendSupportEquipSelectListViewItem_o *)UnityEngine_Object__op_Inequality(v30, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_92;
      v42 = v4->fields.userSvtEntity;
      if ( !v42 )
        goto LABEL_99;
      v44 = *(_QWORD *)&v42->fields.svtId.fields.currentCryptoKey;
      v43 = *(_QWORD *)&v42->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v52.fields.currentCryptoKey = v44;
      *(_QWORD *)&v52.fields.fakeValue = v43;
      this = (RecommendSupportEquipSelectListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                                            v52,
                                                            0LL);
      if ( !v30 )
        goto LABEL_99;
      this = (RecommendSupportEquipSelectListViewItem_o *)RecommendSupportEquipSelectListViewManager__GetAmountSortValue(
                                                            (RecommendSupportEquipSelectListViewManager_o *)v30,
                                                            (int32_t)this,
                                                            v45);
      v4->fields.amountSortValue = (int64_t)this;
LABEL_92:
      v46 = v4->fields.servantEntity;
      if ( !v46 )
        goto LABEL_99;
      this = (RecommendSupportEquipSelectListViewItem_o *)v4->fields.userSvtEntity;
      rarity = (((unsigned __int64)(unsigned int)v4->fields.rarity << 32) + (v4->fields.amountSortValue << 48)) | v46->fields.collectionNo;
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
  this = (RecommendSupportEquipSelectListViewItem_o *)UserServantEntity__getLevelMax((UserServantEntity_o *)this, 0LL);
  if ( !iconLabelInfo2 )
    goto LABEL_99;
  IconLabelInfo__Set_38140136(iconLabelInfo2, 2, sortValue0B, (int32_t)this, 0, 0, 0, 0, 0LL);
LABEL_98:
  LOBYTE(this) = 1;
  return (char)this;
}


bool __fastcall RecommendSupportEquipSelectListViewItem__SwapChoice(
        RecommendSupportEquipSelectListViewItem_o *this,
        const MethodInfo *method)
{
  bool v2; // w8

  v2 = !this->fields.isSwapChoice;
  this->fields.isSwapChoice ^= 1u;
  return v2;
}


bool __fastcall RecommendSupportEquipSelectListViewItem__SwapLock(
        RecommendSupportEquipSelectListViewItem_o *this,
        const MethodInfo *method)
{
  bool v2; // w8

  v2 = !this->fields.isSwapLock;
  this->fields.isSwapLock ^= 1u;
  return v2;
}


System_String_o *__fastcall RecommendSupportEquipSelectListViewItem__ToString(
        RecommendSupportEquipSelectListViewItem_o *this,
        const MethodInfo *method)
{
  System_String_o *NameText; // x0

  if ( (byte_4A5737D & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_10063/*"Other "*/);
    byte_4A5737D = 1;
  }
  NameText = RecommendSupportEquipSelectListViewItem__get_NameText(this, method);
  return System_String__Concat_61707032((System_String_o *)StringLiteral_10063/*"Other "*/, NameText, 0LL);
}


bool __fastcall RecommendSupportEquipSelectListViewItem___SetSortValue_b__25_0(
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
  bool EventUpVal_40205464; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_4A5737E & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    byte_4A5737E = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventCampaignMaster___);
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
  Master_object = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v14, 0LL);
  if ( !entity || !v8 )
    goto LABEL_17;
  if ( EventCampaignMaster__IsEnableServant(v8, (int32_t)Master_object, entity->fields.eventId, 0LL) )
    return 1;
  v12 = this->fields.userSvtEntity;
  Master_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Master_object || !v12 )
LABEL_17:
    sub_1B8880C(Master_object, v6);
  EventUpVal_40205464 = UserServantEntity__getEventUpVal_40205464(
                          v12,
                          -1,
                          0,
                          0,
                          (EventUpValSetupInfo_o *)Master_object[6].monitor,
                          entity->fields.eventId,
                          0,
                          0LL);
  result = 0;
  if ( EventUpVal_40205464 )
    return !this->fields.isInvalidRarity;
  return result;
}


int32_t __fastcall RecommendSupportEquipSelectListViewItem__get_AdjustAttack(
        RecommendSupportEquipSelectListViewItem_o *this,
        const MethodInfo *method)
{
  struct UserServantEntity_o *userSvtEntity; // x8

  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
    return userSvtEntity->fields.adjustAtk;
  else
    return 0;
}


int32_t __fastcall RecommendSupportEquipSelectListViewItem__get_AdjustHp(
        RecommendSupportEquipSelectListViewItem_o *this,
        const MethodInfo *method)
{
  struct UserServantEntity_o *userSvtEntity; // x8

  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
    return userSvtEntity->fields.adjustHp;
  else
    return 0;
}


int32_t __fastcall RecommendSupportEquipSelectListViewItem__get_Attack(
        RecommendSupportEquipSelectListViewItem_o *this,
        const MethodInfo *method)
{
  struct UserServantEntity_o *userSvtEntity; // x8

  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
    return userSvtEntity->fields.atk;
  else
    return 0;
}


int32_t __fastcall RecommendSupportEquipSelectListViewItem__get_Cost(
        RecommendSupportEquipSelectListViewItem_o *this,
        const MethodInfo *method)
{
  struct ServantEntity_o *servantEntity; // x8

  servantEntity = this->fields.servantEntity;
  if ( servantEntity )
    return servantEntity->fields.cost;
  else
    return 0;
}


int32_t __fastcall RecommendSupportEquipSelectListViewItem__get_Hp(
        RecommendSupportEquipSelectListViewItem_o *this,
        const MethodInfo *method)
{
  struct UserServantEntity_o *userSvtEntity; // x8

  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
    return userSvtEntity->fields.hp;
  else
    return 0;
}


IconLabelInfo_o *__fastcall RecommendSupportEquipSelectListViewItem__get_IconInfo1(
        RecommendSupportEquipSelectListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.iconLabelInfo1;
}


IconLabelInfo_o *__fastcall RecommendSupportEquipSelectListViewItem__get_IconInfo2(
        RecommendSupportEquipSelectListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.iconLabelInfo2;
}


bool __fastcall RecommendSupportEquipSelectListViewItem__get_IsBase(
        RecommendSupportEquipSelectListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isBase;
}


bool __fastcall RecommendSupportEquipSelectListViewItem__get_IsCanNotSelect(
        RecommendSupportEquipSelectListViewItem_o *this,
        const MethodInfo *method)
{
  return !this->fields.isBase && this->fields.isUse;
}


bool __fastcall RecommendSupportEquipSelectListViewItem__get_IsChocolateSvtEquip(
        RecommendSupportEquipSelectListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsChocolateSvtEquip_k__BackingField;
}


bool __fastcall RecommendSupportEquipSelectListViewItem__get_IsChoice(
        RecommendSupportEquipSelectListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isChoice;
}


bool __fastcall RecommendSupportEquipSelectListViewItem__get_IsDispChoice(
        RecommendSupportEquipSelectListViewItem_o *this,
        const MethodInfo *method)
{
  if ( this->fields.isSwapChoice )
    return !this->fields.isChoice;
  else
    return this->fields.isChoice;
}


bool __fastcall RecommendSupportEquipSelectListViewItem__get_IsDispLock(
        RecommendSupportEquipSelectListViewItem_o *this,
        const MethodInfo *method)
{
  if ( this->fields.isSwapLock )
    return !this->fields.isLock;
  else
    return this->fields.isLock;
}


bool __fastcall RecommendSupportEquipSelectListViewItem__get_IsFriendShipSvtEq(
        RecommendSupportEquipSelectListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsFriendShipSvtEq_k__BackingField;
}


bool __fastcall RecommendSupportEquipSelectListViewItem__get_IsInvalidRarity(
        RecommendSupportEquipSelectListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isInvalidRarity;
}


bool __fastcall RecommendSupportEquipSelectListViewItem__get_IsLock(
        RecommendSupportEquipSelectListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isLock;
}


bool __fastcall RecommendSupportEquipSelectListViewItem__get_IsSwapChoice(
        RecommendSupportEquipSelectListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isSwapChoice;
}


bool __fastcall RecommendSupportEquipSelectListViewItem__get_IsSwapLock(
        RecommendSupportEquipSelectListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isSwapLock;
}


bool __fastcall RecommendSupportEquipSelectListViewItem__get_IsUse(
        RecommendSupportEquipSelectListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isUse;
}


System_String_o *__fastcall RecommendSupportEquipSelectListViewItem__get_NameText(
        RecommendSupportEquipSelectListViewItem_o *this,
        const MethodInfo *method)
{
  ServantEntity_o *servantEntity; // x19
  struct UserServantEntity_o *userSvtEntity; // x8
  __int64 v5; // x20
  __int64 v6; // x21
  int32_t v7; // w1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  if ( (byte_4A5737B & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&StringLiteral_19052/*"error"*/);
    byte_4A5737B = 1;
  }
  servantEntity = this->fields.servantEntity;
  if ( !servantEntity )
    return (System_String_o *)StringLiteral_19052/*"error"*/;
  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
  {
    v6 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.currentCryptoKey;
    v5 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v9.fields.currentCryptoKey = v6;
    *(_QWORD *)&v9.fields.fakeValue = v5;
    v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v9, 0LL);
  }
  else
  {
    v7 = -1;
  }
  return ServantEntity__getName(servantEntity, v7, -1, 0LL);
}


ServantEntity_o *__fastcall RecommendSupportEquipSelectListViewItem__get_Servant(
        RecommendSupportEquipSelectListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.servantEntity;
}


UserServantEntity_o *__fastcall RecommendSupportEquipSelectListViewItem__get_UserServant(
        RecommendSupportEquipSelectListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.userSvtEntity;
}


void __fastcall RecommendSupportEquipSelectListViewItem__set_IsBase(
        RecommendSupportEquipSelectListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields.isBase = value;
}