// local variable allocation has failed, the output may be wrong!
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
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  IconLabelInfo_o *v22; // x20
  int32_t v23; // w2
  int32_t v24; // w3
  __int64 v25; // x1
  __int64 v26; // x2
  IconLabelInfo_o *v27; // x27
  struct IconLabelInfo_o **p_iconLabelInfo2; // x20
  int32_t v29; // w2
  int32_t v30; // w3
  struct UserServantEntity_o **p_equippedUserSvtEntity; // x22
  int32_t v32; // w2
  int32_t v33; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_userSvtEntity; // x21
  int32_t v35; // w2
  int32_t v36; // w3
  int64_t Instance; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v38; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v39; // x26
  __int64 v40; // x27
  __int64 v41; // x28
  Il2CppObject *v42; // x0
  struct ServantEntity_o **p_servantEntity; // x26
  int32_t v44; // w2
  int32_t v45; // w3
  ServantLimitMaster_o *v46; // x27
  int32_t v47; // w28
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v49; // q1
  char isBase; // w8
  struct UserServantEntity_o *v51; // x8
  __int128 v52; // q0
  bool v53; // w9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v54; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v55; // q0
  UserServantEntity_o *v56; // x8
  struct ServantEntity_o *servantEntity; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v58; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v59; // q0
  UserServantEntity_o *v60; // x8
  bool IsChocolateSvtEquip; // w0
  struct UserServantEntity_o *equippedUserSvtEntity; // x8
  __int64 v63; // x23
  __int64 v64; // x24
  struct UserServantEntity_o *v65; // x8
  PartyOrganizationUtility_o *v66; // x23
  __int64 v67; // x24
  __int64 v68; // x25
  UserServantEntity_o *v69; // x8
  int32_t v70; // w22
  int32_t v71; // w24
  struct System_Int32_array *EquipCategoryIdList; // x0
  ServantStatusBattleListViewItem_o *p_categoryIdList; // x19
  int32_t v74; // w2
  int32_t v75; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v76; // [xsp+10h] [xbp-110h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v77; // [xsp+30h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v78; // [xsp+50h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v79; // [xsp+70h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v80; // [xsp+90h] [xbp-90h]
  int32_t actMaxRarity; // [xsp+B4h] [xbp-6Ch] BYREF
  System_String_o *skillName; // [xsp+B8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v83; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v84; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v85; // 0:x0.16

  if ( (byte_49F86A8 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantLimitMaster___, *(_QWORD *)&index);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, v15);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v16);
    sub_1B640C8(&IconLabelInfo_TypeInfo, v17);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v19);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    sub_1B640C8(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v21);
    byte_49F86A8 = 1;
  }
  skillName = 0LL;
  actMaxRarity = 0;
  v22 = (IconLabelInfo_o *)sub_1B64314(IconLabelInfo_TypeInfo, *(_QWORD *)&index, entity);
  IconLabelInfo___ctor(v22, 0LL);
  this->fields.iconLabelInfo1 = v22;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.iconLabelInfo1, (int32_t)v22, v23, v24);
  v27 = (IconLabelInfo_o *)sub_1B64314(IconLabelInfo_TypeInfo, v25, v26);
  IconLabelInfo___ctor(v27, 0LL);
  this->fields.iconLabelInfo2 = v27;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.iconLabelInfo2, (int32_t)v27, v29, v30);
  ListViewItem___ctor_40370988((ListViewItem_o *)this, index, 0LL);
  this->fields.equippedUserSvtEntity = equipEntity;
  p_equippedUserSvtEntity = &this->fields.equippedUserSvtEntity;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.equippedUserSvtEntity, (int32_t)equipEntity, v32, v33);
  this->fields.userSvtEntity = entity;
  p_userSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userSvtEntity;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.userSvtEntity, (int32_t)entity, v35, v36);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_52;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
  v38 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_52;
  v39 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v41 = *(_QWORD *)&v38[5].fields.currentCryptoKey;
  v40 = *(_QWORD *)&v38[5].fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v83.fields.currentCryptoKey = v41;
  *(_QWORD *)&v83.fields.fakeValue = v40;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v83, 0LL);
  if ( !v39 )
    goto LABEL_52;
  v42 = DataMasterBase_object__object__int___GetEntity(
          v39,
          Instance,
          (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)v42;
  p_servantEntity = &this->fields.servantEntity;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.servantEntity, (int32_t)v42, v44, v45);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_52;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtEntity )
    goto LABEL_52;
  v46 = (ServantLimitMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608((*p_userSvtEntity)[5], 0LL);
  if ( !*p_userSvtEntity )
    goto LABEL_52;
  v47 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608((*p_userSvtEntity)[6], 0LL);
  if ( !v46 )
    goto LABEL_52;
  Instance = (int64_t)ServantLimitMaster__GetEntity(v46, v47, Instance, 0LL);
  if ( !*p_servantEntity )
    goto LABEL_52;
  this->fields.classId = (*p_servantEntity)->fields.classId;
  if ( !Instance )
    goto LABEL_52;
  userSvtEntity = this->fields.userSvtEntity;
  this->fields.rarity = *(_DWORD *)(Instance + 24);
  if ( !userSvtEntity )
    goto LABEL_52;
  v49 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v80.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v80.fields.fakeValue = v49;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v79 = v80;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v79, 0LL);
  if ( Instance == targetSvtEquipId )
  {
    isBase = 1;
    *(_WORD *)&this->fields.isBase = 1;
  }
  else
  {
    v51 = this->fields.userSvtEntity;
    this->fields.isBase = 0;
    if ( !v51 )
      goto LABEL_52;
    v52 = *(_OWORD *)&v51->fields.id.fields.fakeValue;
    *(_OWORD *)&v80.fields.currentCryptoKey = *(_OWORD *)&v51->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v80.fields.fakeValue = v52;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v78 = v80;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v78, 0LL);
    if ( Instance == oldTargetSvtEquipId )
    {
      v53 = 0;
    }
    else
    {
      v54 = *p_userSvtEntity;
      if ( !*p_userSvtEntity )
        goto LABEL_52;
      v55 = v54[2];
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v80.fields.currentCryptoKey = v54[1];
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v80.fields.fakeValue = v55;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v77 = v80;
      v53 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v77, 0LL) == useSvtEquipId;
    }
    isBase = this->fields.isBase;
    this->fields.isUse = v53;
  }
  Instance = (int64_t)this->fields.userSvtEntity;
  this->fields.isOldBase = isBase;
  if ( !Instance )
    goto LABEL_52;
  Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL);
  v56 = this->fields.userSvtEntity;
  this->fields.isLock = Instance & 1;
  if ( !v56 )
    goto LABEL_52;
  Instance = UserServantEntity__IsChoice(v56, 0LL);
  servantEntity = this->fields.servantEntity;
  this->fields.isChoice = Instance & 1;
  *(_QWORD *)&this->fields.bonusKind = 1LL;
  this->fields.isEventUpVal = 0;
  if ( !servantEntity )
    goto LABEL_52;
  v58 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_52;
  this->fields.sortValue2 = ((__int64)servantEntity->fields.collectionNo << 16) | ((unsigned __int64)(unsigned int)this->fields.rarity << 48) | v58[16].fields.currentCryptoKey;
  v59 = v58[2];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v80.fields.currentCryptoKey = v58[1];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v80.fields.fakeValue = v59;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v76 = v80;
  this->fields.sortValue2B = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v76, 0LL);
  this->fields.amountSortValue = -1LL;
  *(_WORD *)&this->fields.isSwapLock = 0;
  Instance = (int64_t)this->fields.userSvtEntity;
  if ( !Instance )
    goto LABEL_52;
  Instance = UserServantEntity__IsFriendShipSvtEquip((UserServantEntity_o *)Instance, 0LL);
  v60 = this->fields.userSvtEntity;
  this->fields._IsFriendShipSvtEq_k__BackingField = Instance & 1;
  if ( !v60 )
    goto LABEL_52;
  IsChocolateSvtEquip = UserServantEntity__IsChocolateSvtEquip(v60, 0LL);
  equippedUserSvtEntity = this->fields.equippedUserSvtEntity;
  this->fields._IsChocolateSvtEquip_k__BackingField = IsChocolateSvtEquip;
  if ( equippedUserSvtEntity )
  {
    v64 = *(_QWORD *)&equippedUserSvtEntity->fields.svtId.fields.currentCryptoKey;
    v63 = *(_QWORD *)&equippedUserSvtEntity->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v84.fields.currentCryptoKey = v64;
    *(_QWORD *)&v84.fields.fakeValue = v63;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v84, 0LL) >= 1 )
    {
      Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      v65 = *p_equippedUserSvtEntity;
      if ( *p_equippedUserSvtEntity )
      {
        v66 = (PartyOrganizationUtility_o *)Instance;
        v68 = *(_QWORD *)&v65->fields.svtId.fields.currentCryptoKey;
        v67 = *(_QWORD *)&v65->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v85.fields.currentCryptoKey = v68;
        *(_QWORD *)&v85.fields.fakeValue = v67;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v85, 0LL);
        v69 = *p_equippedUserSvtEntity;
        if ( *p_equippedUserSvtEntity )
        {
          v70 = Instance;
          Instance = UserServantEntity__getRarity(v69, 0LL);
          if ( *p_userSvtEntity )
          {
            v71 = Instance;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608((*p_userSvtEntity)[5], 0LL);
            if ( v66 )
            {
              this->fields.isInvalidRarity = PartyOrganizationUtility__IsRarityRestriction(
                                               v66,
                                               &skillName,
                                               &actMaxRarity,
                                               v70,
                                               v71,
                                               Instance,
                                               -1,
                                               0LL);
              goto LABEL_48;
            }
          }
        }
      }
LABEL_52:
      sub_1B64324(Instance);
    }
  }
LABEL_48:
  Instance = (int64_t)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_52;
  EquipCategoryIdList = UserServantEntity__GetEquipCategoryIdList((UserServantEntity_o *)Instance, 1, 0LL);
  this->fields.categoryIdList = EquipCategoryIdList;
  p_categoryIdList = (ServantStatusBattleListViewItem_o *)&this->fields.categoryIdList;
  sub_1B6406C(p_categoryIdList, (int32_t)EquipCategoryIdList, v74, v75);
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

  if ( (byte_49F86AD & 1) == 0 )
  {
    sub_1B640C8(&TreasureDvcInfo_TypeInfo, tdInfo);
    byte_49F86AD = 1;
  }
  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
    return UserServantEntity__getTreasureDeviceInfo(userSvtEntity, tdInfo, -1, -1, 0, 0LL);
  v7 = (TreasureDvcInfo_o *)sub_1B64314(TreasureDvcInfo_TypeInfo, tdInfo, method);
  TreasureDvcInfo___ctor(v7, 0LL);
  *tdInfo = v7;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)tdInfo, (int32_t)v7, v8, v9);
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
  __int64 v5; // x1
  __int64 v6; // x1
  FilterKindList_c *v7; // x0
  System_Int32Enum_array *RarityFilterKindList; // x0
  FilterKindList_c *v9; // x0
  ListViewSort_FilterKind_array *v10; // x0
  FilterKindList_c *v11; // x0
  ListViewSort_FilterKind_array *v12; // x0
  bool IsMatchServantEquipCombineStatusFilter; // w8
  bool result; // w0
  FilterKindList_c *v15; // x0
  ListViewSort_FilterKind_array *v16; // x0
  bool HaveStatusFilter; // w8
  _BOOL4 v18; // w8

  if ( (byte_49F86AB & 1) == 0 )
  {
    sub_1B640C8(&FilterKindList_TypeInfo, sort);
    sub_1B640C8(&ListViewSort_FilterKind___TypeInfo, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v6);
    byte_49F86AB = 1;
  }
  v7 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v7 = FilterKindList_TypeInfo;
  }
  RarityFilterKindList = (System_Int32Enum_array *)v7->static_fields->RarityFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_36;
  RarityFilterKindList = System_Collections_Generic_List_Int32Enum___ToArray(
                           (System_Collections_Generic_List_T__o *)RarityFilterKindList,
                           (const MethodInfo_3494300 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_36;
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)RarityFilterKindList, 0LL)
    && !ListViewSort__IsMatchRarityFilter(sort, this->fields.rarity, 0LL)
    || !ListViewSort__CheckSvtEquipEffectFilterDefaultAll(sort, 0LL)
    && !ServantEquipEffectFilterController__IsMatchEffectCategory(this->fields.categoryIdList, sort, 0LL) )
  {
    return 0;
  }
  v9 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v9 = FilterKindList_TypeInfo;
  }
  RarityFilterKindList = (System_Int32Enum_array *)v9->static_fields->ServantEquipTypeFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_36;
  v10 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)RarityFilterKindList,
                                           (const MethodInfo_3494300 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v10, 0LL)
    && !ListViewSort__IsMatchServantEquipTypeFilter(sort, this->fields.servantEntity, 0LL) )
  {
    return 0;
  }
  v11 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v11 = FilterKindList_TypeInfo;
  }
  RarityFilterKindList = (System_Int32Enum_array *)v11->static_fields->ServantEquipCombineStatusFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_36;
  v12 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)RarityFilterKindList,
                                           (const MethodInfo_3494300 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, v12, 0LL)
    || (IsMatchServantEquipCombineStatusFilter = ListViewSort__IsMatchServantEquipCombineStatusFilter(
                                                   sort,
                                                   this->fields.userSvtEntity,
                                                   this->fields.servantEntity,
                                                   0,
                                                   0LL),
        result = 0,
        IsMatchServantEquipCombineStatusFilter) )
  {
    v15 = FilterKindList_TypeInfo;
    if ( !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
      v15 = FilterKindList_TypeInfo;
    }
    RarityFilterKindList = (System_Int32Enum_array *)v15->static_fields->ServantEquipHaveStatusFilterKindList;
    if ( !RarityFilterKindList )
      goto LABEL_36;
    v16 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                             (System_Collections_Generic_List_T__o *)RarityFilterKindList,
                                             (const MethodInfo_3494300 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, v16, 0LL)
      || (HaveStatusFilter = ListViewSort__IsMatchServantEquipHaveStatusFilter(
                               sort,
                               this->fields.userSvtEntity,
                               this->fields.servantEntity,
                               0,
                               0LL),
          result = 0,
          HaveStatusFilter) )
    {
      RarityFilterKindList = (System_Int32Enum_array *)sub_1B64170(ListViewSort_FilterKind___TypeInfo, 1LL);
      if ( RarityFilterKindList )
      {
        if ( !RarityFilterKindList->max_length )
          sub_1B6432C(RarityFilterKindList, RarityFilterKindList);
        RarityFilterKindList->m_Items[1] = 39;
        if ( ListViewSort__IsUnSelectedAllTargetFilters(
               sort,
               (ListViewSort_FilterKind_array *)RarityFilterKindList,
               0LL)
          || !ListViewSort__GetFilter(sort, 39, 0LL) )
        {
          return 1;
        }
        v18 = !this->fields.isChoice;
        if ( !this->fields.isSwapChoice )
          return this->fields.isChoice;
        return v18;
      }
LABEL_36:
      sub_1B64324(RarityFilterKindList);
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
    sub_1B64324(0LL);
  this->fields.isChoice = UserServantEntity__IsChoice(userSvtEntity, 0LL);
  this->fields.isSwapChoice = 0;
}


void __fastcall RecommendSupportEquipSelectListViewItem__ModifyItem(
        RecommendSupportEquipSelectListViewItem_o *this,
        UserServantEntity_o *entity,
        int64_t targetSvtEquipId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_userSvtEntity; // x21
  int64_t Instance; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v14; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v15; // x22
  __int64 v16; // x23
  __int64 v17; // x24
  Il2CppObject *v18; // x0
  struct ServantEntity_o **p_servantEntity; // x22
  int32_t v20; // w2
  int32_t v21; // w3
  ServantLimitMaster_o *v22; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v23; // x8
  int32_t v24; // w21
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v26; // q1
  int64_t rarity; // x9
  struct ServantEntity_o *servantEntity; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+20h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v31; // 0:x0.16

  if ( (byte_49F86A9 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantLimitMaster___, entity);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, v7);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v8);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_49F86A9 = 1;
  }
  this->fields.userSvtEntity = entity;
  p_userSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userSvtEntity;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.userSvtEntity,
    (int32_t)entity,
    targetSvtEquipId,
    (int32_t)method);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
  v14 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_19;
  v15 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v17 = *(_QWORD *)&v14[5].fields.currentCryptoKey;
  v16 = *(_QWORD *)&v14[5].fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v31.fields.currentCryptoKey = v17;
  *(_QWORD *)&v31.fields.fakeValue = v16;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v31, 0LL);
  if ( !v15 )
    goto LABEL_19;
  v18 = DataMasterBase_object__object__int___GetEntity(
          v15,
          Instance,
          (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)v18;
  p_servantEntity = &this->fields.servantEntity;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.servantEntity, (int32_t)v18, v20, v21);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtEntity )
    goto LABEL_19;
  v22 = (ServantLimitMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608((*p_userSvtEntity)[5], 0LL);
  v23 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_19;
  v24 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v23[6], 0LL);
  if ( !v22 )
    goto LABEL_19;
  Instance = (int64_t)ServantLimitMaster__GetEntity(v22, v24, Instance, 0LL);
  if ( !*p_servantEntity )
    goto LABEL_19;
  this->fields.classId = (*p_servantEntity)->fields.classId;
  if ( !Instance )
    goto LABEL_19;
  userSvtEntity = this->fields.userSvtEntity;
  this->fields.rarity = *(_DWORD *)(Instance + 24);
  if ( !userSvtEntity )
    goto LABEL_19;
  v26 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v30.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v30.fields.fakeValue = v26;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v29 = v30;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v29, 0LL);
  rarity = this->fields.rarity;
  servantEntity = this->fields.servantEntity;
  this->fields.isBase = Instance == targetSvtEquipId;
  this->fields.isOldBase = Instance == targetSvtEquipId;
  this->fields.sortValue1B = rarity;
  if ( !servantEntity )
LABEL_19:
    sub_1B64324(Instance);
  this->fields.sortValue2 = servantEntity->fields.collectionNo;
}


void __fastcall RecommendSupportEquipSelectListViewItem__ModifyLockItem(
        RecommendSupportEquipSelectListViewItem_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0

  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_1B64324(0LL);
  this->fields.isLock = UserServantEntity__IsLock(userSvtEntity, 0LL);
  this->fields.isSwapLock = 0;
}


bool __fastcall RecommendSupportEquipSelectListViewItem__SetSortValue(
        RecommendSupportEquipSelectListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  RecommendSupportEquipSelectListViewItem_o *v4; // x19
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
  _BOOL4 isChoice; // w8
  _BOOL4 isSwapChoice; // w9
  bool v18; // zf
  _BOOL4 v19; // w8
  int v20; // w10
  struct UserServantEntity_o *v21; // x8
  __int128 v22; // q1
  struct UserServantEntity_o *v23; // x8
  int32_t bonusKind2; // w8
  int32_t v25; // w8
  int32_t bonusKind2Id; // w9
  int isEventUpVal; // w8
  unsigned __int64 rarity; // x8
  int64_t sortValue0B_low; // x20
  IconLabelInfo_o *iconLabelInfo1; // x21
  struct UserServantEntity_o *v31; // x8
  int64_t hp; // x2
  int32_t adjustHp; // w3
  int32_t v34; // w1
  struct UserServantEntity_o *v35; // x8
  struct ServantEntity_o *servantEntity; // x8
  int64_t cost; // x2
  IconLabelInfo_o *iconLabelInfo2; // x19
  struct ListViewManager_o *manager; // x8
  __int64 methodPtr_low; // x11
  UnityEngine_Object_o *v41; // x20
  int32_t v42; // w8
  int v43; // w8
  UserServantEntity_o *userSvtEntity; // x21
  bool EventUpVal_39871880; // w0
  struct UserServantEntity_o *v46; // x8
  EventCampaignMaster_o *v47; // x21
  __int64 v48; // x22
  __int64 v49; // x23
  bool IsEnableServant; // w0
  System_Collections_Generic_List_EventGroupEntity__o *EntitiesByGroupId; // x21
  __int64 v52; // x1
  __int64 v53; // x2
  System_Func_object__bool__o *v54; // x22
  struct UserServantEntity_o *v55; // x8
  __int64 v56; // x21
  __int64 v57; // x22
  const MethodInfo *v58; // x2
  struct ServantEntity_o *v59; // x8
  int32_t sortValue0B; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v62; // [xsp+10h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v63; // [xsp+30h] [xbp-50h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v64; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v65; // 0:x0.16

  v4 = this;
  if ( (byte_49F86AA & 1) == 0 )
  {
    sub_1B640C8(&Method_BasicHelper_Any_EventGroupEntity___, sort);
    sub_1B640C8(&Method_DataManager_GetMaster_EventCampaignMaster___, v5);
    sub_1B640C8(&Method_DataManager_GetMaster_EventGroupMaster___, v6);
    sub_1B640C8(&DataManager_TypeInfo, v7);
    sub_1B640C8(&System_Func_EventGroupEntity__bool__TypeInfo, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventGroupEntity__get_Count__, v9);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v10);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    sub_1B640C8(&Method_RecommendSupportEquipSelectListViewItem__SetSortValue_b__25_0__, v13);
    sub_1B640C8(&RecommendSupportEquipSelectListViewManager_TypeInfo, v14);
    this = (RecommendSupportEquipSelectListViewItem_o *)sub_1B640C8(
                                                          &Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__,
                                                          v15);
    byte_49F86AA = 1;
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
    this = (RecommendSupportEquipSelectListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    if ( !this || !userSvtEntity )
      goto LABEL_99;
    EventUpVal_39871880 = UserServantEntity__getEventUpVal_39871880(
                            userSvtEntity,
                            -1,
                            0,
                            0,
                            (EventUpValSetupInfo_o *)this->fields.viewObject,
                            v4->fields.bonusKindId,
                            0,
                            0LL);
    isEventUpVal = EventUpVal_39871880;
    v4->fields.isEventUpVal = EventUpVal_39871880;
LABEL_58:
    if ( !isEventUpVal || v4->fields.isInvalidRarity )
      goto LABEL_80;
    goto LABEL_6;
  }
  if ( bonusKind2 == 3 )
  {
    if ( v4->fields.bonusKind == 3 )
    {
      v42 = sort->fields.bonusKind2Id;
      if ( v4->fields.bonusKindId == v42 )
      {
        v43 = v4->fields.isEventUpVal;
        goto LABEL_69;
      }
    }
    else
    {
      v42 = sort->fields.bonusKind2Id;
    }
    v4->fields.bonusKind = 3;
    v4->fields.bonusKindId = v42;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (RecommendSupportEquipSelectListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_EventCampaignMaster___);
    v46 = v4->fields.userSvtEntity;
    if ( !v46 )
      goto LABEL_99;
    v47 = (EventCampaignMaster_o *)this;
    v49 = *(_QWORD *)&v46->fields.svtId.fields.currentCryptoKey;
    v48 = *(_QWORD *)&v46->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v64.fields.currentCryptoKey = v49;
    *(_QWORD *)&v64.fields.fakeValue = v48;
    this = (RecommendSupportEquipSelectListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                                          v64,
                                                          0LL);
    if ( !v47 )
      goto LABEL_99;
    IsEnableServant = EventCampaignMaster__IsEnableServant(v47, (int32_t)this, v4->fields.bonusKindId, 0LL);
    v43 = IsEnableServant;
    v4->fields.isEventUpVal = IsEnableServant;
LABEL_69:
    if ( !v43 )
      goto LABEL_80;
    goto LABEL_6;
  }
  if ( bonusKind2 )
    goto LABEL_6;
  if ( v4->fields.bonusKind )
  {
    v25 = sort->fields.bonusKind2Id;
  }
  else
  {
    v25 = sort->fields.bonusKind2Id;
    if ( v4->fields.bonusKindId == v25 )
      goto LABEL_79;
  }
  v4->fields.bonusKind = 0;
  v4->fields.bonusKindId = v25;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (RecommendSupportEquipSelectListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_EventGroupMaster___);
  if ( !this )
LABEL_99:
    sub_1B64324(this);
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
      v54 = (System_Func_object__bool__o *)sub_1B64314(System_Func_EventGroupEntity__bool__TypeInfo, v52, v53);
      System_Func_object__bool____ctor(
        v54,
        (Il2CppObject *)v4,
        Method_RecommendSupportEquipSelectListViewItem__SetSortValue_b__25_0__,
        0LL);
      v4->fields.isEventUpVal = BasicHelper__Any_object_(
                                  (System_Collections_Generic_List_T__o *)EntitiesByGroupId,
                                  (System_Func_T__bool__o *)v54,
                                  (const MethodInfo_2E24870 *)Method_BasicHelper_Any_EventGroupEntity___);
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
  v18 = !isChoice;
  v19 = !isChoice;
  v20 = !v18;
  if ( !isSwapChoice )
    v19 = v20;
  if ( v19 && sort->fields.isChoiceSort )
    v4->fields.sortValue0 = 10LL;
  this = (RecommendSupportEquipSelectListViewItem_o *)v4->fields.iconLabelInfo2;
  if ( !this )
    goto LABEL_99;
  IconLabelInfo__Clear((IconLabelInfo_o *)this, 0LL);
  this = (RecommendSupportEquipSelectListViewItem_o *)(&dword_0 + 1);
  switch ( sort->fields.sortKind )
  {
    case 1:
      v21 = v4->fields.userSvtEntity;
      if ( !v21 )
        goto LABEL_99;
      v22 = *(_OWORD *)&v21->fields.id.fields.fakeValue;
      *(_OWORD *)&v63.fields.currentCryptoKey = *(_OWORD *)&v21->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v63.fields.fakeValue = v22;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v62 = v63;
      this = (RecommendSupportEquipSelectListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(
                                                            &v62,
                                                            0LL);
      v23 = v4->fields.userSvtEntity;
      v4->fields.sortValue1 = (int64_t)this;
      if ( !v23 )
        goto LABEL_99;
      this = (RecommendSupportEquipSelectListViewItem_o *)v4->fields.iconLabelInfo1;
      if ( !this )
        goto LABEL_99;
      IconLabelInfo__SetTime((IconLabelInfo_o *)this, 49, v23->fields.createdAt, 0, 0, 0, 0LL);
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
      IconLabelInfo__Set_37825360(iconLabelInfo1, 2, sortValue0B_low, (int32_t)this, 0, 0, 0, 0, 0LL);
      goto LABEL_98;
    case 5:
      v31 = v4->fields.userSvtEntity;
      if ( !v31 )
        goto LABEL_99;
      hp = v31->fields.hp;
      this = (RecommendSupportEquipSelectListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = hp;
      if ( !this )
        goto LABEL_99;
      adjustHp = v31->fields.adjustHp;
      v34 = 3;
      goto LABEL_41;
    case 6:
      v35 = v4->fields.userSvtEntity;
      if ( !v35 )
        goto LABEL_99;
      hp = v35->fields.atk;
      this = (RecommendSupportEquipSelectListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = hp;
      if ( !this )
        goto LABEL_99;
      adjustHp = v35->fields.adjustAtk;
      v34 = 5;
LABEL_41:
      IconLabelInfo__Set_37825360((IconLabelInfo_o *)this, v34, hp, adjustHp, 0, 0, 0, 0, 0LL);
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
      IconLabelInfo__Set_37825360((IconLabelInfo_o *)this, 7, cost, 0, 0, 0, 0, 0, 0LL);
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
          v41 = (UnityEngine_Object_o *)sort->fields.manager;
        else
          v41 = 0LL;
      }
      else
      {
        v41 = 0LL;
      }
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (RecommendSupportEquipSelectListViewItem_o *)UnityEngine_Object__op_Inequality(v41, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_92;
      v55 = v4->fields.userSvtEntity;
      if ( !v55 )
        goto LABEL_99;
      v57 = *(_QWORD *)&v55->fields.svtId.fields.currentCryptoKey;
      v56 = *(_QWORD *)&v55->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v65.fields.currentCryptoKey = v57;
      *(_QWORD *)&v65.fields.fakeValue = v56;
      this = (RecommendSupportEquipSelectListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                                            v65,
                                                            0LL);
      if ( !v41 )
        goto LABEL_99;
      this = (RecommendSupportEquipSelectListViewItem_o *)RecommendSupportEquipSelectListViewManager__GetAmountSortValue(
                                                            (RecommendSupportEquipSelectListViewManager_o *)v41,
                                                            (int32_t)this,
                                                            v58);
      v4->fields.amountSortValue = (int64_t)this;
LABEL_92:
      v59 = v4->fields.servantEntity;
      if ( !v59 )
        goto LABEL_99;
      this = (RecommendSupportEquipSelectListViewItem_o *)v4->fields.userSvtEntity;
      rarity = (((unsigned __int64)(unsigned int)v4->fields.rarity << 32) + (v4->fields.amountSortValue << 48)) | v59->fields.collectionNo;
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
  IconLabelInfo__Set_37825360(iconLabelInfo2, 2, sortValue0B, (int32_t)this, 0, 0, 0, 0, 0LL);
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

  if ( (byte_49F86AE & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_10014/*"Other "*/, method);
    byte_49F86AE = 1;
  }
  NameText = RecommendSupportEquipSelectListViewItem__get_NameText(this, method);
  return System_String__Concat_61375396((System_String_o *)StringLiteral_10014/*"Other "*/, NameText, 0LL);
}


bool __fastcall RecommendSupportEquipSelectListViewItem___SetSortValue_b__25_0(
        RecommendSupportEquipSelectListViewItem_o *this,
        EventGroupEntity_o *entity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppObject *Master_object; // x0
  struct UserServantEntity_o *userSvtEntity; // x8
  EventCampaignMaster_o *v10; // x21
  __int64 v11; // x22
  __int64 v12; // x23
  bool result; // w0
  UserServantEntity_o *v14; // x21
  bool EventUpVal_39871880; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_49F86AF & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_EventCampaignMaster___, entity);
    sub_1B640C8(&DataManager_TypeInfo, v5);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_1B640C8(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v7);
    byte_49F86AF = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_EventCampaignMaster___);
  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_17;
  v10 = (EventCampaignMaster_o *)Master_object;
  v12 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v16.fields.currentCryptoKey = v12;
  *(_QWORD *)&v16.fields.fakeValue = v11;
  Master_object = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v16, 0LL);
  if ( !entity || !v10 )
    goto LABEL_17;
  if ( EventCampaignMaster__IsEnableServant(v10, (int32_t)Master_object, entity->fields.eventId, 0LL) )
    return 1;
  v14 = this->fields.userSvtEntity;
  Master_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Master_object || !v14 )
LABEL_17:
    sub_1B64324(Master_object);
  EventUpVal_39871880 = UserServantEntity__getEventUpVal_39871880(
                          v14,
                          -1,
                          0,
                          0,
                          (EventUpValSetupInfo_o *)Master_object[6].monitor,
                          entity->fields.eventId,
                          0,
                          0LL);
  result = 0;
  if ( EventUpVal_39871880 )
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
  __int64 v3; // x1
  ServantEntity_o *servantEntity; // x19
  struct UserServantEntity_o *userSvtEntity; // x8
  __int64 v6; // x20
  __int64 v7; // x21
  int32_t v8; // w1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  if ( (byte_49F86AC & 1) == 0 )
  {
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    sub_1B640C8(&StringLiteral_18979/*"error"*/, v3);
    byte_49F86AC = 1;
  }
  servantEntity = this->fields.servantEntity;
  if ( !servantEntity )
    return (System_String_o *)StringLiteral_18979/*"error"*/;
  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
  {
    v7 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.currentCryptoKey;
    v6 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v10.fields.currentCryptoKey = v7;
    *(_QWORD *)&v10.fields.fakeValue = v6;
    v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v10, 0LL);
  }
  else
  {
    v8 = -1;
  }
  return ServantEntity__getName(servantEntity, v8, -1, 0LL);
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