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
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  IconLabelInfo_o *v29; // x20
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  IconLabelInfo_o *v39; // x27
  struct IconLabelInfo_o **p_iconLabelInfo2; // x20
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  struct UserServantEntity_o **p_equippedUserSvtEntity; // x22
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_userSvtEntity; // x21
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  int64_t Instance; // x0
  __int64 v62; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v63; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v64; // x26
  __int64 v65; // x27
  __int64 v66; // x28
  Il2CppObject *v67; // x0
  struct ServantEntity_o **p_servantEntity; // x26
  int64_t v69; // x2
  int32_t v70; // w3
  System_String_o *v71; // x4
  BattleSetupInfo_o *v72; // x5
  FollowerInfo_o *v73; // x6
  PartyListViewItem_o *v74; // x7
  ServantLimitMaster_o *v75; // x27
  int32_t v76; // w28
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v78; // q1
  char isBase; // w8
  struct UserServantEntity_o *v80; // x8
  __int128 v81; // q0
  bool v82; // w9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v83; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v84; // q0
  UserServantEntity_o *v85; // x8
  struct ServantEntity_o *servantEntity; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v87; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v88; // q0
  UserServantEntity_o *v89; // x8
  bool IsChocolateSvtEquip; // w0
  struct UserServantEntity_o *equippedUserSvtEntity; // x8
  __int64 v92; // x23
  __int64 v93; // x24
  struct UserServantEntity_o *v94; // x8
  PartyOrganizationUtility_o *v95; // x23
  __int64 v96; // x24
  __int64 v97; // x25
  UserServantEntity_o *v98; // x8
  int32_t v99; // w22
  int32_t v100; // w24
  struct System_Int32_array *EquipCategoryIdList; // x0
  PartyOrganizationUtility_o *p_categoryIdList; // x19
  int64_t v103; // x2
  int32_t v104; // w3
  System_String_o *v105; // x4
  BattleSetupInfo_o *v106; // x5
  FollowerInfo_o *v107; // x6
  PartyListViewItem_o *v108; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v109; // [xsp+10h] [xbp-110h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v110; // [xsp+30h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v111; // [xsp+50h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v112; // [xsp+70h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v113; // [xsp+90h] [xbp-90h]
  int32_t actMaxRarity; // [xsp+B4h] [xbp-6Ch] BYREF
  System_String_o *skillName; // [xsp+B8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v116; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v117; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v118; // 0:x0.16

  if ( (byte_4B12355 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitMaster___, *(_QWORD *)&index, entity);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v15, v16);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v17, v18);
    sub_1BCA7E0(&IconLabelInfo_TypeInfo, v19, v20);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v21, v22);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v23, v24);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25, v26);
    sub_1BCA7E0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v27, v28);
    byte_4B12355 = 1;
  }
  skillName = 0LL;
  actMaxRarity = 0;
  v29 = (IconLabelInfo_o *)sub_1BCAA2C(IconLabelInfo_TypeInfo, *(_QWORD *)&index, entity, targetSvtEquipId);
  IconLabelInfo___ctor(v29, 0LL);
  this->fields.iconLabelInfo1 = v29;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.iconLabelInfo1, (int64_t)v29, v30, v31, v32, v33, v34, v35);
  v39 = (IconLabelInfo_o *)sub_1BCAA2C(IconLabelInfo_TypeInfo, v36, v37, v38);
  IconLabelInfo___ctor(v39, 0LL);
  this->fields.iconLabelInfo2 = v39;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.iconLabelInfo2, (int64_t)v39, v41, v42, v43, v44, v45, v46);
  ListViewItem___ctor_41447164((ListViewItem_o *)this, index, 0LL);
  this->fields.equippedUserSvtEntity = equipEntity;
  p_equippedUserSvtEntity = &this->fields.equippedUserSvtEntity;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.equippedUserSvtEntity,
    (int64_t)equipEntity,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53);
  this->fields.userSvtEntity = entity;
  p_userSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userSvtEntity;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.userSvtEntity, (int64_t)entity, v55, v56, v57, v58, v59, v60);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_52;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  v63 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_52;
  v64 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v66 = *(_QWORD *)&v63[5].fields.currentCryptoKey;
  v65 = *(_QWORD *)&v63[5].fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v62);
  *(_QWORD *)&v116.fields.currentCryptoKey = v66;
  *(_QWORD *)&v116.fields.fakeValue = v65;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v116, 0LL);
  if ( !v64 )
    goto LABEL_52;
  v67 = DataMasterBase_object__object__int___GetEntity(
          v64,
          Instance,
          (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)v67;
  p_servantEntity = &this->fields.servantEntity;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.servantEntity, (int64_t)v67, v69, v70, v71, v72, v73, v74);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_52;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtEntity )
    goto LABEL_52;
  v75 = (ServantLimitMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428((*p_userSvtEntity)[5], 0LL);
  if ( !*p_userSvtEntity )
    goto LABEL_52;
  v76 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428((*p_userSvtEntity)[6], 0LL);
  if ( !v75 )
    goto LABEL_52;
  Instance = (int64_t)ServantLimitMaster__GetEntity(v75, v76, Instance, 0LL);
  if ( !*p_servantEntity )
    goto LABEL_52;
  this->fields.classId = (*p_servantEntity)->fields.classId;
  if ( !Instance )
    goto LABEL_52;
  userSvtEntity = this->fields.userSvtEntity;
  this->fields.rarity = *(_DWORD *)(Instance + 24);
  if ( !userSvtEntity )
    goto LABEL_52;
  v78 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v113.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v113.fields.fakeValue = v78;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v62);
  v112 = v113;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v112, 0LL);
  if ( Instance == targetSvtEquipId )
  {
    isBase = 1;
    *(_WORD *)&this->fields.isBase = 1;
  }
  else
  {
    v80 = this->fields.userSvtEntity;
    this->fields.isBase = 0;
    if ( !v80 )
      goto LABEL_52;
    v81 = *(_OWORD *)&v80->fields.id.fields.fakeValue;
    *(_OWORD *)&v113.fields.currentCryptoKey = *(_OWORD *)&v80->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v113.fields.fakeValue = v81;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v62);
    v111 = v113;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v111, 0LL);
    if ( Instance == oldTargetSvtEquipId )
    {
      v82 = 0;
    }
    else
    {
      v83 = *p_userSvtEntity;
      if ( !*p_userSvtEntity )
        goto LABEL_52;
      v84 = v83[2];
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v113.fields.currentCryptoKey = v83[1];
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v113.fields.fakeValue = v84;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v62);
      v110 = v113;
      v82 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v110, 0LL) == useSvtEquipId;
    }
    isBase = this->fields.isBase;
    this->fields.isUse = v82;
  }
  Instance = (int64_t)this->fields.userSvtEntity;
  this->fields.isOldBase = isBase;
  if ( !Instance )
    goto LABEL_52;
  Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL);
  v85 = this->fields.userSvtEntity;
  this->fields.isLock = Instance & 1;
  if ( !v85 )
    goto LABEL_52;
  Instance = UserServantEntity__IsChoice(v85, 0LL);
  servantEntity = this->fields.servantEntity;
  this->fields.isChoice = Instance & 1;
  *(_QWORD *)&this->fields.bonusKind = 1LL;
  this->fields.isEventUpVal = 0;
  if ( !servantEntity )
    goto LABEL_52;
  v87 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_52;
  this->fields.sortValue2 = ((__int64)servantEntity->fields.collectionNo << 16) | ((unsigned __int64)(unsigned int)this->fields.rarity << 48) | v87[16].fields.currentCryptoKey;
  v88 = v87[2];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v113.fields.currentCryptoKey = v87[1];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v113.fields.fakeValue = v88;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v62);
  v109 = v113;
  this->fields.sortValue2B = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v109, 0LL);
  this->fields.amountSortValue = -1LL;
  *(_WORD *)&this->fields.isSwapLock = 0;
  Instance = (int64_t)this->fields.userSvtEntity;
  if ( !Instance )
    goto LABEL_52;
  Instance = UserServantEntity__IsFriendShipSvtEquip((UserServantEntity_o *)Instance, 0LL);
  v89 = this->fields.userSvtEntity;
  this->fields._IsFriendShipSvtEq_k__BackingField = Instance & 1;
  if ( !v89 )
    goto LABEL_52;
  IsChocolateSvtEquip = UserServantEntity__IsChocolateSvtEquip(v89, 0LL);
  equippedUserSvtEntity = this->fields.equippedUserSvtEntity;
  this->fields._IsChocolateSvtEquip_k__BackingField = IsChocolateSvtEquip;
  if ( equippedUserSvtEntity )
  {
    v93 = *(_QWORD *)&equippedUserSvtEntity->fields.svtId.fields.currentCryptoKey;
    v92 = *(_QWORD *)&equippedUserSvtEntity->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v62);
    *(_QWORD *)&v117.fields.currentCryptoKey = v93;
    *(_QWORD *)&v117.fields.fakeValue = v92;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v117, 0LL) >= 1 )
    {
      Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      v94 = *p_equippedUserSvtEntity;
      if ( *p_equippedUserSvtEntity )
      {
        v95 = (PartyOrganizationUtility_o *)Instance;
        v97 = *(_QWORD *)&v94->fields.svtId.fields.currentCryptoKey;
        v96 = *(_QWORD *)&v94->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v62);
        *(_QWORD *)&v118.fields.currentCryptoKey = v97;
        *(_QWORD *)&v118.fields.fakeValue = v96;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v118, 0LL);
        v98 = *p_equippedUserSvtEntity;
        if ( *p_equippedUserSvtEntity )
        {
          v99 = Instance;
          Instance = UserServantEntity__getRarity(v98, 0LL);
          if ( *p_userSvtEntity )
          {
            v100 = Instance;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428((*p_userSvtEntity)[5], 0LL);
            if ( v95 )
            {
              this->fields.isInvalidRarity = PartyOrganizationUtility__IsRarityRestriction(
                                               v95,
                                               &skillName,
                                               &actMaxRarity,
                                               v99,
                                               v100,
                                               Instance,
                                               -1,
                                               0LL);
              goto LABEL_48;
            }
          }
        }
      }
LABEL_52:
      sub_1BCAA3C(Instance, v62);
    }
  }
LABEL_48:
  Instance = (int64_t)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_52;
  EquipCategoryIdList = UserServantEntity__GetEquipCategoryIdList((UserServantEntity_o *)Instance, 1, 0LL);
  this->fields.categoryIdList = EquipCategoryIdList;
  p_categoryIdList = (PartyOrganizationUtility_o *)&this->fields.categoryIdList;
  sub_1BCA784(p_categoryIdList, (int64_t)EquipCategoryIdList, v103, v104, v105, v106, v107, v108);
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
  __int64 v3; // x3
  UserServantEntity_o *userSvtEntity; // x0
  TreasureDvcInfo_o *v8; // x20
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  if ( (byte_4B1235A & 1) == 0 )
  {
    sub_1BCA7E0(&TreasureDvcInfo_TypeInfo, tdInfo, method);
    byte_4B1235A = 1;
  }
  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
    return UserServantEntity__getTreasureDeviceInfo(userSvtEntity, tdInfo, -1, -1, 0, 0LL);
  v8 = (TreasureDvcInfo_o *)sub_1BCAA2C(TreasureDvcInfo_TypeInfo, tdInfo, method, v3);
  TreasureDvcInfo___ctor(v8, 0LL);
  *tdInfo = v8;
  sub_1BCA784((PartyOrganizationUtility_o *)tdInfo, (int64_t)v8, v9, v10, v11, v12, v13, v14);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  FilterKindList_c *v9; // x0
  System_Int32Enum_array *RarityFilterKindList; // x0
  FilterKindList_c *v11; // x0
  ListViewSort_FilterKind_array *v12; // x0
  FilterKindList_c *v13; // x0
  ListViewSort_FilterKind_array *v14; // x0
  bool IsMatchServantEquipCombineStatusFilter; // w8
  bool result; // w0
  FilterKindList_c *v17; // x0
  ListViewSort_FilterKind_array *v18; // x0
  bool HaveStatusFilter; // w8
  _BOOL4 v20; // w8

  if ( (byte_4B12358 & 1) == 0 )
  {
    sub_1BCA7E0(&FilterKindList_TypeInfo, sort, method);
    sub_1BCA7E0(&ListViewSort_FilterKind___TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v7, v8);
    byte_4B12358 = 1;
  }
  v9 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort);
    v9 = FilterKindList_TypeInfo;
  }
  RarityFilterKindList = (System_Int32Enum_array *)v9->static_fields->RarityFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_36;
  RarityFilterKindList = System_Collections_Generic_List_Int32Enum___ToArray(
                           (System_Collections_Generic_List_T__o *)RarityFilterKindList,
                           (const MethodInfo_3588F1C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_36;
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)RarityFilterKindList, 0LL)
    && !ListViewSort__IsMatchRarityFilter(sort, this->fields.rarity, 0LL)
    || !ListViewSort__CheckSvtEquipEffectFilterDefaultAll(sort, 0LL)
    && !ServantEquipEffectFilterController__IsMatchEffectCategory(this->fields.categoryIdList, sort, 0LL) )
  {
    return 0;
  }
  v11 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort);
    v11 = FilterKindList_TypeInfo;
  }
  RarityFilterKindList = (System_Int32Enum_array *)v11->static_fields->ServantEquipTypeFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_36;
  v12 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)RarityFilterKindList,
                                           (const MethodInfo_3588F1C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v12, 0LL)
    && !ListViewSort__IsMatchServantEquipTypeFilter(sort, this->fields.servantEntity, 0LL) )
  {
    return 0;
  }
  v13 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort);
    v13 = FilterKindList_TypeInfo;
  }
  RarityFilterKindList = (System_Int32Enum_array *)v13->static_fields->ServantEquipCombineStatusFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_36;
  v14 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)RarityFilterKindList,
                                           (const MethodInfo_3588F1C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, v14, 0LL)
    || (IsMatchServantEquipCombineStatusFilter = ListViewSort__IsMatchServantEquipCombineStatusFilter(
                                                   sort,
                                                   this->fields.userSvtEntity,
                                                   this->fields.servantEntity,
                                                   0,
                                                   0LL),
        result = 0,
        IsMatchServantEquipCombineStatusFilter) )
  {
    v17 = FilterKindList_TypeInfo;
    if ( !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort);
      v17 = FilterKindList_TypeInfo;
    }
    RarityFilterKindList = (System_Int32Enum_array *)v17->static_fields->ServantEquipHaveStatusFilterKindList;
    if ( !RarityFilterKindList )
      goto LABEL_36;
    v18 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                             (System_Collections_Generic_List_T__o *)RarityFilterKindList,
                                             (const MethodInfo_3588F1C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, v18, 0LL)
      || (HaveStatusFilter = ListViewSort__IsMatchServantEquipHaveStatusFilter(
                               sort,
                               this->fields.userSvtEntity,
                               this->fields.servantEntity,
                               0,
                               0LL),
          result = 0,
          HaveStatusFilter) )
    {
      RarityFilterKindList = (System_Int32Enum_array *)sub_1BCA888(ListViewSort_FilterKind___TypeInfo, 1LL);
      if ( RarityFilterKindList )
      {
        if ( !RarityFilterKindList->max_length )
          sub_1BCAA44(RarityFilterKindList, RarityFilterKindList);
        RarityFilterKindList->m_Items[1] = 39;
        if ( ListViewSort__IsUnSelectedAllTargetFilters(
               sort,
               (ListViewSort_FilterKind_array *)RarityFilterKindList,
               0LL)
          || !ListViewSort__GetFilter(sort, 39, 0LL) )
        {
          return 1;
        }
        v20 = !this->fields.isChoice;
        if ( !this->fields.isSwapChoice )
          return this->fields.isChoice;
        return v20;
      }
LABEL_36:
      sub_1BCAA3C(RarityFilterKindList, sort);
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
    sub_1BCAA3C(0LL, method);
  this->fields.isChoice = UserServantEntity__IsChoice(userSvtEntity, 0LL);
  this->fields.isSwapChoice = 0;
}


void __fastcall RecommendSupportEquipSelectListViewItem__ModifyItem(
        RecommendSupportEquipSelectListViewItem_o *this,
        UserServantEntity_o *entity,
        int64_t targetSvtEquipId,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_userSvtEntity; // x21
  int64_t Instance; // x0
  __int64 v23; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v24; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v25; // x22
  __int64 v26; // x23
  __int64 v27; // x24
  Il2CppObject *v28; // x0
  struct ServantEntity_o **p_servantEntity; // x22
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  ServantLimitMaster_o *v36; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v37; // x8
  int32_t v38; // w21
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v40; // q1
  int64_t rarity; // x9
  struct ServantEntity_o *servantEntity; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v43; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v44; // [xsp+20h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16

  if ( (byte_4B12356 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitMaster___, entity, targetSvtEquipId);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v11, v12);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v13, v14);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15, v16);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19, v20);
    byte_4B12356 = 1;
  }
  this->fields.userSvtEntity = entity;
  p_userSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userSvtEntity;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.userSvtEntity,
    (int64_t)entity,
    targetSvtEquipId,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  v24 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_19;
  v25 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v27 = *(_QWORD *)&v24[5].fields.currentCryptoKey;
  v26 = *(_QWORD *)&v24[5].fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v23);
  *(_QWORD *)&v45.fields.currentCryptoKey = v27;
  *(_QWORD *)&v45.fields.fakeValue = v26;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v45, 0LL);
  if ( !v25 )
    goto LABEL_19;
  v28 = DataMasterBase_object__object__int___GetEntity(
          v25,
          Instance,
          (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)v28;
  p_servantEntity = &this->fields.servantEntity;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.servantEntity, (int64_t)v28, v30, v31, v32, v33, v34, v35);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtEntity )
    goto LABEL_19;
  v36 = (ServantLimitMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428((*p_userSvtEntity)[5], 0LL);
  v37 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_19;
  v38 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v37[6], 0LL);
  if ( !v36 )
    goto LABEL_19;
  Instance = (int64_t)ServantLimitMaster__GetEntity(v36, v38, Instance, 0LL);
  if ( !*p_servantEntity )
    goto LABEL_19;
  this->fields.classId = (*p_servantEntity)->fields.classId;
  if ( !Instance )
    goto LABEL_19;
  userSvtEntity = this->fields.userSvtEntity;
  this->fields.rarity = *(_DWORD *)(Instance + 24);
  if ( !userSvtEntity )
    goto LABEL_19;
  v40 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v44.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v44.fields.fakeValue = v40;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v23);
  v43 = v44;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v43, 0LL);
  rarity = this->fields.rarity;
  servantEntity = this->fields.servantEntity;
  this->fields.isBase = Instance == targetSvtEquipId;
  this->fields.isOldBase = Instance == targetSvtEquipId;
  this->fields.sortValue1B = rarity;
  if ( !servantEntity )
LABEL_19:
    sub_1BCAA3C(Instance, v23);
  this->fields.sortValue2 = servantEntity->fields.collectionNo;
}


void __fastcall RecommendSupportEquipSelectListViewItem__ModifyLockItem(
        RecommendSupportEquipSelectListViewItem_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0

  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_1BCAA3C(0LL, method);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  _BOOL4 isChoice; // w8
  _BOOL4 isSwapChoice; // w9
  bool v29; // zf
  _BOOL4 v30; // w8
  int v31; // w10
  struct UserServantEntity_o *v32; // x8
  __int128 v33; // q1
  struct UserServantEntity_o *v34; // x8
  int32_t bonusKind2; // w8
  int32_t v36; // w8
  int32_t bonusKind2Id; // w9
  int isEventUpVal; // w8
  unsigned __int64 rarity; // x8
  int64_t sortValue0B_low; // x20
  IconLabelInfo_o *iconLabelInfo1; // x21
  struct UserServantEntity_o *v42; // x8
  int64_t hp; // x2
  int32_t adjustHp; // w3
  int32_t v45; // w1
  struct UserServantEntity_o *v46; // x8
  struct ServantEntity_o *servantEntity; // x8
  int64_t cost; // x2
  IconLabelInfo_o *iconLabelInfo2; // x19
  struct ListViewManager_o *manager; // x8
  __int64 methodPtr_low; // x11
  UnityEngine_Object_o *v52; // x20
  int32_t v53; // w8
  int v54; // w8
  UserServantEntity_o *userSvtEntity; // x21
  bool EventUpVal_40936896; // w0
  struct UserServantEntity_o *v57; // x8
  EventCampaignMaster_o *v58; // x21
  __int64 v59; // x22
  __int64 v60; // x23
  bool IsEnableServant; // w0
  System_Collections_Generic_List_EventGroupEntity__o *EntitiesByGroupId; // x21
  __int64 v63; // x2
  __int64 v64; // x3
  System_Func_object__bool__o *v65; // x22
  struct UserServantEntity_o *v66; // x8
  __int64 v67; // x21
  __int64 v68; // x22
  const MethodInfo *v69; // x2
  struct ServantEntity_o *v70; // x8
  int32_t sortValue0B; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v73; // [xsp+10h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v74; // [xsp+30h] [xbp-50h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v75; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v76; // 0:x0.16

  v4 = this;
  if ( (byte_4B12357 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Any_EventGroupEntity___, sort, method);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventCampaignMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventGroupMaster___, v7, v8);
    sub_1BCA7E0(&DataManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&System_Func_EventGroupEntity__bool__TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventGroupEntity__get_Count__, v13, v14);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v15, v16);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17, v18);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_RecommendSupportEquipSelectListViewItem__SetSortValue_b__25_0__, v21, v22);
    sub_1BCA7E0(&RecommendSupportEquipSelectListViewManager_TypeInfo, v23, v24);
    this = (RecommendSupportEquipSelectListViewItem_o *)sub_1BCA7E0(
                                                          &Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__,
                                                          v25,
                                                          v26);
    byte_4B12357 = 1;
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
    this = (RecommendSupportEquipSelectListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    if ( !this || !userSvtEntity )
      goto LABEL_99;
    EventUpVal_40936896 = UserServantEntity__getEventUpVal_40936896(
                            userSvtEntity,
                            -1,
                            0,
                            0,
                            (EventUpValSetupInfo_o *)this->fields.viewObject,
                            v4->fields.bonusKindId,
                            0,
                            0LL);
    isEventUpVal = EventUpVal_40936896;
    v4->fields.isEventUpVal = EventUpVal_40936896;
LABEL_58:
    if ( !isEventUpVal || v4->fields.isInvalidRarity )
      goto LABEL_80;
    goto LABEL_6;
  }
  if ( bonusKind2 == 3 )
  {
    if ( v4->fields.bonusKind == 3 )
    {
      v53 = sort->fields.bonusKind2Id;
      if ( v4->fields.bonusKindId == v53 )
      {
        v54 = v4->fields.isEventUpVal;
        goto LABEL_69;
      }
    }
    else
    {
      v53 = sort->fields.bonusKind2Id;
    }
    v4->fields.bonusKind = 3;
    v4->fields.bonusKindId = v53;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, sort);
    this = (RecommendSupportEquipSelectListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventCampaignMaster___);
    v57 = v4->fields.userSvtEntity;
    if ( !v57 )
      goto LABEL_99;
    v58 = (EventCampaignMaster_o *)this;
    v60 = *(_QWORD *)&v57->fields.svtId.fields.currentCryptoKey;
    v59 = *(_QWORD *)&v57->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, sort);
    *(_QWORD *)&v75.fields.currentCryptoKey = v60;
    *(_QWORD *)&v75.fields.fakeValue = v59;
    this = (RecommendSupportEquipSelectListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                                          v75,
                                                          0LL);
    if ( !v58 )
      goto LABEL_99;
    IsEnableServant = EventCampaignMaster__IsEnableServant(v58, (int32_t)this, v4->fields.bonusKindId, 0LL);
    v54 = IsEnableServant;
    v4->fields.isEventUpVal = IsEnableServant;
LABEL_69:
    if ( !v54 )
      goto LABEL_80;
    goto LABEL_6;
  }
  if ( bonusKind2 )
    goto LABEL_6;
  if ( v4->fields.bonusKind )
  {
    v36 = sort->fields.bonusKind2Id;
  }
  else
  {
    v36 = sort->fields.bonusKind2Id;
    if ( v4->fields.bonusKindId == v36 )
      goto LABEL_79;
  }
  v4->fields.bonusKind = 0;
  v4->fields.bonusKindId = v36;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, sort);
  this = (RecommendSupportEquipSelectListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventGroupMaster___);
  if ( !this )
LABEL_99:
    sub_1BCAA3C(this, sort);
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
      v65 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_EventGroupEntity__bool__TypeInfo, sort, v63, v64);
      System_Func_object__bool____ctor(
        v65,
        (Il2CppObject *)v4,
        Method_RecommendSupportEquipSelectListViewItem__SetSortValue_b__25_0__,
        0LL);
      v4->fields.isEventUpVal = BasicHelper__Any_object_(
                                  (System_Collections_Generic_List_T__o *)EntitiesByGroupId,
                                  (System_Func_T__bool__o *)v65,
                                  (const MethodInfo_2EFDC94 *)Method_BasicHelper_Any_EventGroupEntity___);
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
  v29 = !isChoice;
  v30 = !isChoice;
  v31 = !v29;
  if ( !isSwapChoice )
    v30 = v31;
  if ( v30 && sort->fields.isChoiceSort )
    v4->fields.sortValue0 = 10LL;
  this = (RecommendSupportEquipSelectListViewItem_o *)v4->fields.iconLabelInfo2;
  if ( !this )
    goto LABEL_99;
  IconLabelInfo__Clear((IconLabelInfo_o *)this, 0LL);
  this = (RecommendSupportEquipSelectListViewItem_o *)(&dword_0 + 1);
  switch ( sort->fields.sortKind )
  {
    case 1:
      v32 = v4->fields.userSvtEntity;
      if ( !v32 )
        goto LABEL_99;
      v33 = *(_OWORD *)&v32->fields.id.fields.fakeValue;
      *(_OWORD *)&v74.fields.currentCryptoKey = *(_OWORD *)&v32->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v74.fields.fakeValue = v33;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, sort);
      v73 = v74;
      this = (RecommendSupportEquipSelectListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(
                                                            &v73,
                                                            0LL);
      v34 = v4->fields.userSvtEntity;
      v4->fields.sortValue1 = (int64_t)this;
      if ( !v34 )
        goto LABEL_99;
      this = (RecommendSupportEquipSelectListViewItem_o *)v4->fields.iconLabelInfo1;
      if ( !this )
        goto LABEL_99;
      IconLabelInfo__SetTime((IconLabelInfo_o *)this, 49, v34->fields.createdAt, 0, 0, 0, 0LL);
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
      IconLabelInfo__Set_38850420(iconLabelInfo1, 2, sortValue0B_low, (int32_t)this, 0, 0, 0, 0, 0LL);
      goto LABEL_98;
    case 5:
      v42 = v4->fields.userSvtEntity;
      if ( !v42 )
        goto LABEL_99;
      hp = v42->fields.hp;
      this = (RecommendSupportEquipSelectListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = hp;
      if ( !this )
        goto LABEL_99;
      adjustHp = v42->fields.adjustHp;
      v45 = 3;
      goto LABEL_41;
    case 6:
      v46 = v4->fields.userSvtEntity;
      if ( !v46 )
        goto LABEL_99;
      hp = v46->fields.atk;
      this = (RecommendSupportEquipSelectListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = hp;
      if ( !this )
        goto LABEL_99;
      adjustHp = v46->fields.adjustAtk;
      v45 = 5;
LABEL_41:
      IconLabelInfo__Set_38850420((IconLabelInfo_o *)this, v45, hp, adjustHp, 0, 0, 0, 0, 0LL);
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
      IconLabelInfo__Set_38850420((IconLabelInfo_o *)this, 7, cost, 0, 0, 0, 0, 0, 0LL);
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
          v52 = (UnityEngine_Object_o *)sort->fields.manager;
        else
          v52 = 0LL;
      }
      else
      {
        v52 = 0LL;
      }
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, sort);
      this = (RecommendSupportEquipSelectListViewItem_o *)UnityEngine_Object__op_Inequality(v52, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_92;
      v66 = v4->fields.userSvtEntity;
      if ( !v66 )
        goto LABEL_99;
      v68 = *(_QWORD *)&v66->fields.svtId.fields.currentCryptoKey;
      v67 = *(_QWORD *)&v66->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, sort);
      *(_QWORD *)&v76.fields.currentCryptoKey = v68;
      *(_QWORD *)&v76.fields.fakeValue = v67;
      this = (RecommendSupportEquipSelectListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                                            v76,
                                                            0LL);
      if ( !v52 )
        goto LABEL_99;
      this = (RecommendSupportEquipSelectListViewItem_o *)RecommendSupportEquipSelectListViewManager__GetAmountSortValue(
                                                            (RecommendSupportEquipSelectListViewManager_o *)v52,
                                                            (int32_t)this,
                                                            v69);
      v4->fields.amountSortValue = (int64_t)this;
LABEL_92:
      v70 = v4->fields.servantEntity;
      if ( !v70 )
        goto LABEL_99;
      this = (RecommendSupportEquipSelectListViewItem_o *)v4->fields.userSvtEntity;
      rarity = (((unsigned __int64)(unsigned int)v4->fields.rarity << 32) + (v4->fields.amountSortValue << 48)) | v70->fields.collectionNo;
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
  IconLabelInfo__Set_38850420(iconLabelInfo2, 2, sortValue0B, (int32_t)this, 0, 0, 0, 0, 0LL);
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
  __int64 v2; // x2
  System_String_o *NameText; // x0

  if ( (byte_4B1235B & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_10196/*"Other "*/, method, v2);
    byte_4B1235B = 1;
  }
  NameText = RecommendSupportEquipSelectListViewItem__get_NameText(this, method);
  return System_String__Concat_62401220((System_String_o *)StringLiteral_10196/*"Other "*/, NameText, 0LL);
}


bool __fastcall RecommendSupportEquipSelectListViewItem___SetSortValue_b__25_0(
        RecommendSupportEquipSelectListViewItem_o *this,
        EventGroupEntity_o *entity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  Il2CppObject *Master_object; // x0
  __int64 v12; // x1
  struct UserServantEntity_o *userSvtEntity; // x8
  EventCampaignMaster_o *v14; // x21
  __int64 v15; // x22
  __int64 v16; // x23
  bool result; // w0
  UserServantEntity_o *v18; // x21
  bool EventUpVal_40936896; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_4B1235C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventCampaignMaster___, entity, method);
    sub_1BCA7E0(&DataManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v9, v10);
    byte_4B1235C = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, entity);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventCampaignMaster___);
  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_17;
  v14 = (EventCampaignMaster_o *)Master_object;
  v16 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v15 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
  *(_QWORD *)&v20.fields.currentCryptoKey = v16;
  *(_QWORD *)&v20.fields.fakeValue = v15;
  Master_object = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v20, 0LL);
  if ( !entity || !v14 )
    goto LABEL_17;
  if ( EventCampaignMaster__IsEnableServant(v14, (int32_t)Master_object, entity->fields.eventId, 0LL) )
    return 1;
  v18 = this->fields.userSvtEntity;
  Master_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Master_object || !v18 )
LABEL_17:
    sub_1BCAA3C(Master_object, v12);
  EventUpVal_40936896 = UserServantEntity__getEventUpVal_40936896(
                          v18,
                          -1,
                          0,
                          0,
                          (EventUpValSetupInfo_o *)Master_object[6].monitor,
                          entity->fields.eventId,
                          0,
                          0LL);
  result = 0;
  if ( EventUpVal_40936896 )
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  ServantEntity_o *servantEntity; // x19
  struct UserServantEntity_o *userSvtEntity; // x8
  __int64 v8; // x20
  __int64 v9; // x21
  int32_t v10; // w1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16

  if ( (byte_4B12359 & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_19249/*"error"*/, v4, v5);
    byte_4B12359 = 1;
  }
  servantEntity = this->fields.servantEntity;
  if ( !servantEntity )
    return (System_String_o *)StringLiteral_19249/*"error"*/;
  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
  {
    v9 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.currentCryptoKey;
    v8 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    *(_QWORD *)&v12.fields.currentCryptoKey = v9;
    *(_QWORD *)&v12.fields.fakeValue = v8;
    v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v12, 0LL);
  }
  else
  {
    v10 = -1;
  }
  return ServantEntity__getName(servantEntity, v10, -1, 0LL);
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