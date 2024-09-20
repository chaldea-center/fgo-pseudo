void __fastcall SupportServantEquipListViewItem___ctor(
        SupportServantEquipListViewItem_o *this,
        int32_t index,
        UserServantEntity_o *userSvtEntity,
        int64_t targetSvtEquipId,
        int64_t oldTargetSvtEquipId,
        System_Int64_array *useSvtEquipList,
        UserServantEntity_o *equippedUserSvtEntity,
        EventUpValSetupInfo_o *eventSetupInfo,
        SupportServantData_array *supportServantData,
        int32_t nowDeckId,
        System_Int32_array *fixMainDeckIds,
        System_Int32_array *fixEventDeckIds,
        bool isFixMainDeck,
        bool isFixEventDeck,
        const MethodInfo *method)
{
  IconLabelInfo_o *v22; // x21
  int32_t v23; // w2
  int32_t v24; // w3
  IconLabelInfo_o *v25; // x28
  struct IconLabelInfo_o **p_iconLabelInfo2; // x21
  int32_t v27; // w2
  int32_t v28; // w3
  int32_t v29; // w2
  int32_t v30; // w3
  struct UserServantEntity_o **p_equippedUserSvtEntity; // x23
  int32_t v32; // w2
  int32_t v33; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_userSvtEntity; // x22
  int32_t v35; // w2
  int32_t v36; // w3
  int64_t Instance; // x0
  __int64 v38; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v39; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v40; // x27
  __int64 v41; // x28
  __int64 v42; // x29
  Il2CppObject *Entity; // x0
  struct ServantEntity_o **p_servantEntity; // x27
  int32_t v45; // w2
  int32_t v46; // w3
  ServantLimitMaster_o *v47; // x28
  int32_t v48; // w29
  __int128 v49; // q1
  __int128 v50; // q0
  unsigned int v51; // w26
  __int128 v52; // q0
  int64_t v53; // x0
  __int64 v54; // x8
  UserServantEntity_o *v55; // x8
  struct ServantEntity_o *servantEntity; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v57; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v58; // q0
  UserServantEntity_o *v59; // x8
  bool IsChocolateSvtEquip; // w0
  struct UserServantEntity_o *v61; // x8
  __int64 v62; // x24
  __int64 v63; // x25
  struct UserServantEntity_o *v64; // x8
  PartyOrganizationUtility_o *v65; // x24
  __int64 v66; // x25
  __int64 v67; // x26
  UserServantEntity_o *v68; // x8
  int32_t v69; // w23
  int32_t Rarity; // w0
  __int64 v71; // x8
  int32_t v72; // w20
  struct System_Int32_array *EquipCategoryIdList; // x0
  ServantStatusBattleListViewItem_o *p_categoryIdList; // x19
  int32_t v75; // w2
  int32_t v76; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v78; // [xsp+10h] [xbp-110h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v79; // [xsp+30h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v80; // [xsp+50h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v81; // [xsp+70h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v82; // [xsp+90h] [xbp-90h]
  int32_t actMaxRarity; // [xsp+B4h] [xbp-6Ch] BYREF
  System_String_o *skillName; // [xsp+B8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v85; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v86; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v87; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v88; // 0:x0.16

  if ( (byte_4A57BB4 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&IconLabelInfo_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4A57BB4 = 1;
  }
  skillName = 0LL;
  actMaxRarity = 0;
  v22 = (IconLabelInfo_o *)sub_1B887FC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v22, 0LL);
  this->fields.iconLabelInfo1 = v22;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.iconLabelInfo1, (int32_t)v22, v23, v24);
  v25 = (IconLabelInfo_o *)sub_1B887FC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v25, 0LL);
  this->fields.iconLabelInfo2 = v25;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.iconLabelInfo2, (int32_t)v25, v27, v28);
  ListViewItem___ctor_40706472((ListViewItem_o *)this, index, 0LL);
  this->fields.eventSetupInfo = eventSetupInfo;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.eventSetupInfo, (int32_t)eventSetupInfo, v29, v30);
  this->fields.equippedUserSvtEntity = equippedUserSvtEntity;
  p_equippedUserSvtEntity = &this->fields.equippedUserSvtEntity;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.equippedUserSvtEntity,
    (int32_t)equippedUserSvtEntity,
    v32,
    v33);
  this->fields.userSvtEntity = userSvtEntity;
  p_userSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userSvtEntity;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.userSvtEntity, (int32_t)userSvtEntity, v35, v36);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_54;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
  v39 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_54;
  v40 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v42 = *(_QWORD *)&v39[5].fields.currentCryptoKey;
  v41 = *(_QWORD *)&v39[5].fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v85.fields.currentCryptoKey = v42;
  *(_QWORD *)&v85.fields.fakeValue = v41;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v85, 0LL);
  if ( !v40 )
    goto LABEL_54;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v40,
             Instance,
             (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)Entity;
  p_servantEntity = &this->fields.servantEntity;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.servantEntity, (int32_t)Entity, v45, v46);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_54;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtEntity )
    goto LABEL_54;
  v47 = (ServantLimitMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800((*p_userSvtEntity)[5], 0LL);
  if ( !*p_userSvtEntity )
    goto LABEL_54;
  v48 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800((*p_userSvtEntity)[6], 0LL);
  if ( !v47 )
    goto LABEL_54;
  Instance = (int64_t)ServantLimitMaster__GetEntity(v47, v48, Instance, 0LL);
  if ( !*p_servantEntity )
    goto LABEL_54;
  this->fields.classId = (*p_servantEntity)->fields.classId;
  if ( !Instance )
    goto LABEL_54;
  this->fields.rarity = *(_DWORD *)(Instance + 24);
  if ( !userSvtEntity )
    goto LABEL_54;
  v49 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v82.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v82.fields.fakeValue = v49;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v81 = v82;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v81, 0LL) == targetSvtEquipId )
  {
    *(_WORD *)&this->fields.isBase = 1;
  }
  else
  {
    *(_WORD *)&this->fields.isBase = 0;
    v50 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
    *(_OWORD *)&v82.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v82.fields.fakeValue = v50;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v80 = v82;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v80, 0LL);
    if ( Instance != oldTargetSvtEquipId )
    {
      if ( !useSvtEquipList )
        goto LABEL_54;
      if ( (int)useSvtEquipList->max_length >= 1 )
      {
        v51 = 0;
        while ( 1 )
        {
          v52 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
          *(_OWORD *)&v82.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v82.fields.fakeValue = v52;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v79 = v82;
          v53 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v79, 0LL);
          v54 = *(_QWORD *)&useSvtEquipList->max_length;
          if ( v51 >= (unsigned int)v54 )
            sub_1B88814(v53, v38);
          if ( v53 == useSvtEquipList->m_Items[v51] )
            break;
          if ( (int)++v51 >= (int)v54 )
            goto LABEL_32;
        }
        this->fields.isUse = 1;
      }
    }
  }
LABEL_32:
  Instance = (int64_t)this->fields.userSvtEntity;
  this->fields.isOldBase = this->fields.isBase;
  if ( !Instance )
    goto LABEL_54;
  Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL);
  v55 = this->fields.userSvtEntity;
  this->fields.isLock = Instance & 1;
  if ( !v55 )
    goto LABEL_54;
  Instance = UserServantEntity__IsChoice(v55, 0LL);
  servantEntity = this->fields.servantEntity;
  this->fields.isChoice = Instance & 1;
  *(_QWORD *)&this->fields.bonusKind = 1LL;
  this->fields.isEventUpVal = 0;
  if ( !servantEntity )
    goto LABEL_54;
  v57 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_54;
  this->fields.sortValue2 = ((__int64)servantEntity->fields.collectionNo << 16) | ((unsigned __int64)(unsigned int)this->fields.rarity << 48) | v57[16].fields.currentCryptoKey;
  v58 = v57[2];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v82.fields.currentCryptoKey = v57[1];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v82.fields.fakeValue = v58;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v78 = v82;
  this->fields.sortValue2B = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v78, 0LL);
  this->fields.amountSortValue = -1LL;
  *(_WORD *)&this->fields.isSwapLock = 0;
  Instance = (int64_t)this->fields.userSvtEntity;
  if ( !Instance )
    goto LABEL_54;
  Instance = UserServantEntity__IsFriendShipSvtEquip((UserServantEntity_o *)Instance, 0LL);
  v59 = this->fields.userSvtEntity;
  this->fields.isFriendShipSvtEq = Instance & 1;
  if ( !v59 )
    goto LABEL_54;
  IsChocolateSvtEquip = UserServantEntity__IsChocolateSvtEquip(v59, 0LL);
  v61 = this->fields.equippedUserSvtEntity;
  this->fields.isChocolateSvtEquip = IsChocolateSvtEquip;
  if ( v61 )
  {
    v63 = *(_QWORD *)&v61->fields.svtId.fields.currentCryptoKey;
    v62 = *(_QWORD *)&v61->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v86.fields.currentCryptoKey = v63;
    *(_QWORD *)&v86.fields.fakeValue = v62;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v86, 0LL) >= 1 )
    {
      Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      v64 = *p_equippedUserSvtEntity;
      if ( *p_equippedUserSvtEntity )
      {
        v65 = (PartyOrganizationUtility_o *)Instance;
        v67 = *(_QWORD *)&v64->fields.svtId.fields.currentCryptoKey;
        v66 = *(_QWORD *)&v64->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v87.fields.currentCryptoKey = v67;
        *(_QWORD *)&v87.fields.fakeValue = v66;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v87, 0LL);
        v68 = *p_equippedUserSvtEntity;
        if ( *p_equippedUserSvtEntity )
        {
          v69 = Instance;
          Rarity = UserServantEntity__getRarity(v68, 0LL);
          v71 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
          *(_QWORD *)&v88.fields.fakeValue = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
          v72 = Rarity;
          *(_QWORD *)&v88.fields.currentCryptoKey = v71;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v88, 0LL);
          if ( v65 )
          {
            this->fields.isInvalidRarity = PartyOrganizationUtility__IsRarityRestriction(
                                             v65,
                                             &skillName,
                                             &actMaxRarity,
                                             v69,
                                             v72,
                                             Instance,
                                             -1,
                                             0LL);
            goto LABEL_50;
          }
        }
      }
LABEL_54:
      sub_1B8880C(Instance, v38);
    }
  }
LABEL_50:
  Instance = (int64_t)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_54;
  EquipCategoryIdList = UserServantEntity__GetEquipCategoryIdList((UserServantEntity_o *)Instance, 1, 0LL);
  this->fields.categoryIdList = EquipCategoryIdList;
  p_categoryIdList = (ServantStatusBattleListViewItem_o *)&this->fields.categoryIdList;
  sub_1B88554(p_categoryIdList, (int32_t)EquipCategoryIdList, v75, v76);
  Instance = (int64_t)p_categoryIdList->monitor;
  if ( !Instance )
    goto LABEL_54;
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0LL);
  Instance = (int64_t)*p_iconLabelInfo2;
  if ( !*p_iconLabelInfo2 )
    goto LABEL_54;
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0LL);
}


void __fastcall SupportServantEquipListViewItem__Finalize(
        SupportServantEquipListViewItem_o *this,
        const MethodInfo *method)
{
  ListViewItem__Finalize((ListViewItem_o *)this, 0LL);
}


bool __fastcall SupportServantEquipListViewItem__GetNpInfo(
        SupportServantEquipListViewItem_o *this,
        TreasureDvcInfo_o **tdInfo,
        const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0
  TreasureDvcInfo_o *v7; // x20
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_4A57BB9 & 1) == 0 )
  {
    sub_1B885B0(&TreasureDvcInfo_TypeInfo);
    byte_4A57BB9 = 1;
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


bool __fastcall SupportServantEquipListViewItem__IsMatchFilter(
        SupportServantEquipListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  return this->fields.isBase || SupportServantEquipListViewItem__IsMatchServantEquipFilter(this, sort, method);
}


bool __fastcall SupportServantEquipListViewItem__IsMatchServantEquipFilter(
        SupportServantEquipListViewItem_o *this,
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

  if ( (byte_4A57BB7 & 1) == 0 )
  {
    sub_1B885B0(&FilterKindList_TypeInfo);
    sub_1B885B0(&ListViewSort_FilterKind___TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    byte_4A57BB7 = 1;
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


void __fastcall SupportServantEquipListViewItem__Modify(
        SupportServantEquipListViewItem_o *this,
        UserServantEntity_o *userSvtEntity,
        int64_t targetSvtEquipId,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1

  SupportServantEquipListViewItem__ModifyItem(this, userSvtEntity, targetSvtEquipId, method);
  SupportServantEquipListViewItem__ModifyLockItem(this, v5);
  SupportServantEquipListViewItem__ModifyChoiceItem(this, v6);
}


void __fastcall SupportServantEquipListViewItem__ModifyChoiceItem(
        SupportServantEquipListViewItem_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0

  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_1B8880C(0LL, method);
  this->fields.isChoice = UserServantEntity__IsChoice(userSvtEntity, 0LL);
  this->fields.isSwapChoice = 0;
}


void __fastcall SupportServantEquipListViewItem__ModifyItem(
        SupportServantEquipListViewItem_o *this,
        UserServantEntity_o *userSvtEntity,
        int64_t targetSvtEquipId,
        const MethodInfo *method)
{
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_userSvtEntity; // x22
  int64_t Instance; // x0
  __int64 v9; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v10; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v11; // x23
  __int64 v12; // x24
  __int64 v13; // x25
  Il2CppObject *Entity; // x0
  struct ServantEntity_o **p_servantEntity; // x23
  int32_t v16; // w2
  int32_t v17; // w3
  ServantLimitMaster_o *v18; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v19; // x8
  int32_t v20; // w22
  __int128 v21; // q1
  int64_t rarity; // x9
  struct ServantEntity_o *servantEntity; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v24; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v25; // [xsp+20h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16

  if ( (byte_4A57BB5 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A57BB5 = 1;
  }
  this->fields.userSvtEntity = userSvtEntity;
  p_userSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userSvtEntity;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.userSvtEntity,
    (int32_t)userSvtEntity,
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
  *(_QWORD *)&v26.fields.currentCryptoKey = v13;
  *(_QWORD *)&v26.fields.fakeValue = v12;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v26, 0LL);
  if ( !v11 )
    goto LABEL_19;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v11,
             Instance,
             (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)Entity;
  p_servantEntity = &this->fields.servantEntity;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.servantEntity, (int32_t)Entity, v16, v17);
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
  this->fields.rarity = *(_DWORD *)(Instance + 24);
  if ( !userSvtEntity )
    goto LABEL_19;
  v21 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v25.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v25.fields.fakeValue = v21;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v24 = v25;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v24, 0LL);
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


void __fastcall SupportServantEquipListViewItem__ModifyLockItem(
        SupportServantEquipListViewItem_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0

  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_1B8880C(0LL, method);
  this->fields.isLock = UserServantEntity__IsLock(userSvtEntity, 0LL);
  this->fields.isSwapLock = 0;
}


bool __fastcall SupportServantEquipListViewItem__SetSortValue(
        SupportServantEquipListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  SupportServantEquipListViewItem_o *v4; // x19
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
  int32_t bonusKind2Id; // w5
  int isEventUpVal; // w8
  IconLabelInfo_o *iconLabelInfo1; // x19
  int64_t sortValue0_low; // x20
  IconLabelInfo_o *v19; // x21
  struct UserServantEntity_o *v20; // x8
  int64_t hp; // x2
  int32_t adjustHp; // w3
  int32_t v23; // w1
  struct UserServantEntity_o *v24; // x8
  struct ServantEntity_o *servantEntity; // x8
  int64_t cost; // x2
  int32_t sortValue0; // w20
  struct ListViewManager_o *manager; // x8
  __int64 methodPtr_low; // x11
  struct ListViewManager_o *v30; // x20
  int32_t v31; // w8
  int v32; // w8
  bool EventUpVal_40205464; // w0
  struct UserServantEntity_o *userSvtEntity; // x8
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
  __int64 collectionNo; // x10
  struct UserServantEntity_o *v47; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v49; // [xsp+10h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v50; // [xsp+30h] [xbp-50h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v51; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v52; // 0:x0.16

  v4 = this;
  if ( (byte_4A57BB6 & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_Any_EventGroupEntity___);
    sub_1B885B0(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_EventGroupMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&System_Func_EventGroupEntity__bool__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventGroupEntity__get_Count__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Method_SupportServantEquipListViewItem__SetSortValue_b__29_0__);
    this = (SupportServantEquipListViewItem_o *)sub_1B885B0(&SupportServantEquipListViewManager_TypeInfo);
    byte_4A57BB6 = 1;
  }
  *(_WORD *)&v4->fields.isTermination = 0;
  v4->fields.sortValue1 = -1LL;
  if ( !sort )
    goto LABEL_96;
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
        goto LABEL_62;
      }
    }
    else
    {
      bonusKind2Id = sort->fields.bonusKind2Id;
    }
    this = (SupportServantEquipListViewItem_o *)v4->fields.userSvtEntity;
    v4->fields.bonusKind = bonusKind2;
    v4->fields.bonusKindId = bonusKind2Id;
    if ( !this )
      goto LABEL_96;
    EventUpVal_40205464 = UserServantEntity__getEventUpVal_40205464(
                            (UserServantEntity_o *)this,
                            -1,
                            0,
                            0,
                            v4->fields.eventSetupInfo,
                            bonusKind2Id,
                            0,
                            0LL);
    isEventUpVal = EventUpVal_40205464;
    v4->fields.isEventUpVal = EventUpVal_40205464;
LABEL_62:
    if ( !isEventUpVal || v4->fields.isInvalidRarity )
      goto LABEL_84;
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
        goto LABEL_73;
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
    this = (SupportServantEquipListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventCampaignMaster___);
    userSvtEntity = v4->fields.userSvtEntity;
    if ( !userSvtEntity )
      goto LABEL_96;
    v35 = (EventCampaignMaster_o *)this;
    v37 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
    v36 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v51.fields.currentCryptoKey = v37;
    *(_QWORD *)&v51.fields.fakeValue = v36;
    this = (SupportServantEquipListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                                  v51,
                                                  0LL);
    if ( !v35 )
      goto LABEL_96;
    IsEnableServant = EventCampaignMaster__IsEnableServant(v35, (int32_t)this, v4->fields.bonusKindId, 0LL);
    v32 = IsEnableServant;
    v4->fields.isEventUpVal = IsEnableServant;
LABEL_73:
    if ( !v32 )
      goto LABEL_84;
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
      goto LABEL_83;
  }
  v4->fields.bonusKind = 0;
  v4->fields.bonusKindId = v14;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (SupportServantEquipListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventGroupMaster___);
  if ( !this )
LABEL_96:
    sub_1B8880C(this, sort);
  EntitiesByGroupId = EventGroupMaster__GetEntitiesByGroupId((EventGroupMaster_o *)this, v4->fields.bonusKindId, 0LL);
  this = (SupportServantEquipListViewItem_o *)BasicHelper__IsNullOrEmpty(
                                                (System_Collections_ICollection_o *)EntitiesByGroupId,
                                                0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( !EntitiesByGroupId )
      goto LABEL_96;
    if ( EntitiesByGroupId->fields._size >= 2 )
    {
      v40 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_EventGroupEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v40,
        (Il2CppObject *)v4,
        Method_SupportServantEquipListViewItem__SetSortValue_b__29_0__,
        0LL);
      v4->fields.isEventUpVal = BasicHelper__Any_object_(
                                  (System_Collections_Generic_List_T__o *)EntitiesByGroupId,
                                  (System_Func_T__bool__o *)v40,
                                  (const MethodInfo_2E6ACD0 *)Method_BasicHelper_Any_EventGroupEntity___);
    }
  }
LABEL_83:
  if ( !v4->fields.isEventUpVal )
    goto LABEL_84;
LABEL_6:
  if ( (((__int64 (__fastcall *)(SupportServantEquipListViewItem_o *, ListViewSort_o *, void *))v4->klass->vtable._5_IsMatchFilter.method)(
          v4,
          sort,
          v4->klass[1]._1.image) & 1) == 0 )
  {
LABEL_84:
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
  this = (SupportServantEquipListViewItem_o *)v4->fields.iconLabelInfo2;
  if ( !this )
    goto LABEL_96;
  IconLabelInfo__Clear((IconLabelInfo_o *)this, 0LL);
  this = (SupportServantEquipListViewItem_o *)(&dword_0 + 1);
  switch ( sort->fields.sortKind )
  {
    case 1:
      v10 = v4->fields.userSvtEntity;
      if ( !v10 )
        goto LABEL_96;
      v11 = *(_OWORD *)&v10->fields.id.fields.fakeValue;
      *(_OWORD *)&v50.fields.currentCryptoKey = *(_OWORD *)&v10->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v50.fields.fakeValue = v11;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v49 = v50;
      this = (SupportServantEquipListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(
                                                    &v49,
                                                    0LL);
      v12 = v4->fields.userSvtEntity;
      v4->fields.sortValue1 = (int64_t)this;
      if ( !v12 )
        goto LABEL_96;
      this = (SupportServantEquipListViewItem_o *)v4->fields.iconLabelInfo1;
      if ( !this )
        goto LABEL_96;
      IconLabelInfo__SetTime((IconLabelInfo_o *)this, 49, v12->fields.createdAt, 0, 0, 0, 0LL);
      goto LABEL_46;
    case 2:
      this = (SupportServantEquipListViewItem_o *)v4->fields.userSvtEntity;
      v4->fields.sortValue1 = v4->fields.rarity;
      if ( !this )
        goto LABEL_96;
      iconLabelInfo1 = v4->fields.iconLabelInfo1;
      goto LABEL_48;
    case 3:
      this = (SupportServantEquipListViewItem_o *)v4->fields.userSvtEntity;
      if ( !this )
        goto LABEL_96;
      sortValue0_low = SLODWORD(this[1].fields.sortValue0);
      v19 = v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = sortValue0_low;
      this = (SupportServantEquipListViewItem_o *)UserServantEntity__getLevelMax((UserServantEntity_o *)this, 0LL);
      if ( !v19 )
        goto LABEL_96;
      IconLabelInfo__Set_38140136(v19, 2, sortValue0_low, (int32_t)this, 0, 0, 0, 0, 0LL);
      goto LABEL_51;
    case 5:
      v20 = v4->fields.userSvtEntity;
      if ( !v20 )
        goto LABEL_96;
      hp = v20->fields.hp;
      this = (SupportServantEquipListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = hp;
      if ( !this )
        goto LABEL_96;
      adjustHp = v20->fields.adjustHp;
      v23 = 3;
      goto LABEL_42;
    case 6:
      v24 = v4->fields.userSvtEntity;
      if ( !v24 )
        goto LABEL_96;
      hp = v24->fields.atk;
      this = (SupportServantEquipListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = hp;
      if ( !this )
        goto LABEL_96;
      adjustHp = v24->fields.adjustAtk;
      v23 = 5;
LABEL_42:
      IconLabelInfo__Set_38140136((IconLabelInfo_o *)this, v23, hp, adjustHp, 0, 0, 0, 0, 0LL);
      goto LABEL_46;
    case 7:
      servantEntity = v4->fields.servantEntity;
      if ( !servantEntity )
        goto LABEL_96;
      cost = servantEntity->fields.cost;
      this = (SupportServantEquipListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = cost;
      if ( !this )
        goto LABEL_96;
      IconLabelInfo__Set_38140136((IconLabelInfo_o *)this, 7, cost, 0, 0, 0, 0, 0, 0LL);
LABEL_46:
      this = (SupportServantEquipListViewItem_o *)v4->fields.userSvtEntity;
      if ( !this )
        goto LABEL_96;
      iconLabelInfo1 = v4->fields.iconLabelInfo2;
LABEL_48:
      sortValue0 = this[1].fields.sortValue0;
      break;
    case 0xE:
      this = (SupportServantEquipListViewItem_o *)v4->fields.amountSortValue;
      if ( ((unsigned __int64)this & 0x8000000000000000LL) == 0 )
        goto LABEL_93;
      manager = sort->fields.manager;
      if ( manager
        && (methodPtr_low = LOBYTE(SupportServantEquipListViewManager_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(manager->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
      {
        if ( (SupportServantEquipListViewManager_c *)manager->klass->_2.typeHierarchy[methodPtr_low - 1] == SupportServantEquipListViewManager_TypeInfo )
          v30 = sort->fields.manager;
        else
          v30 = 0LL;
      }
      else
      {
        v30 = 0LL;
      }
      v41 = v4->fields.userSvtEntity;
      if ( !v41 )
        goto LABEL_96;
      v43 = *(_QWORD *)&v41->fields.svtId.fields.currentCryptoKey;
      v42 = *(_QWORD *)&v41->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v52.fields.currentCryptoKey = v43;
      *(_QWORD *)&v52.fields.fakeValue = v42;
      this = (SupportServantEquipListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                                    v52,
                                                    0LL);
      if ( !v30 )
        goto LABEL_96;
      this = (SupportServantEquipListViewItem_o *)SupportServantEquipListViewManager__GetAmountSortValue(
                                                    (SupportServantEquipListViewManager_o *)v30,
                                                    (int32_t)this,
                                                    v44);
      v4->fields.amountSortValue = (int64_t)this;
LABEL_93:
      v45 = v4->fields.servantEntity;
      if ( !v45 )
        goto LABEL_96;
      collectionNo = v45->fields.collectionNo;
      v47 = v4->fields.userSvtEntity;
      v4->fields.sortValue1 = (((unsigned __int64)(unsigned int)v4->fields.rarity << 32) + ((_QWORD)this << 48)) | collectionNo;
      if ( !v47 )
        goto LABEL_96;
      iconLabelInfo1 = v4->fields.iconLabelInfo1;
      sortValue0 = v47->fields.lv;
      this = (SupportServantEquipListViewItem_o *)v47;
      break;
    default:
      return (char)this;
  }
  this = (SupportServantEquipListViewItem_o *)UserServantEntity__getLevelMax((UserServantEntity_o *)this, 0LL);
  if ( !iconLabelInfo1 )
    goto LABEL_96;
  IconLabelInfo__Set_38140136(iconLabelInfo1, 2, sortValue0, (int32_t)this, 0, 0, 0, 0, 0LL);
LABEL_51:
  LOBYTE(this) = 1;
  return (char)this;
}


bool __fastcall SupportServantEquipListViewItem__SwapChoice(
        SupportServantEquipListViewItem_o *this,
        const MethodInfo *method)
{
  bool v2; // w8

  v2 = !this->fields.isSwapChoice;
  this->fields.isSwapChoice ^= 1u;
  return v2;
}


bool __fastcall SupportServantEquipListViewItem__SwapLock(
        SupportServantEquipListViewItem_o *this,
        const MethodInfo *method)
{
  bool v2; // w8

  v2 = !this->fields.isSwapLock;
  this->fields.isSwapLock ^= 1u;
  return v2;
}


System_String_o *__fastcall SupportServantEquipListViewItem__ToString(
        SupportServantEquipListViewItem_o *this,
        const MethodInfo *method)
{
  System_String_o *NameText; // x0

  if ( (byte_4A57BBA & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_10063/*"Other "*/);
    byte_4A57BBA = 1;
  }
  NameText = SupportServantEquipListViewItem__get_NameText(this, method);
  return System_String__Concat_61707032((System_String_o *)StringLiteral_10063/*"Other "*/, NameText, 0LL);
}


bool __fastcall SupportServantEquipListViewItem___SetSortValue_b__29_0(
        SupportServantEquipListViewItem_o *this,
        EventGroupEntity_o *entity,
        const MethodInfo *method)
{
  EventCampaignMaster_o *Master_object; // x0
  __int64 v6; // x1
  struct UserServantEntity_o *userSvtEntity; // x8
  EventCampaignMaster_o *v8; // x21
  __int64 v9; // x22
  __int64 v10; // x23
  bool result; // w0
  bool EventUpVal_40205464; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_4A57BBB & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A57BBB = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (EventCampaignMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventCampaignMaster___);
  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_16;
  v8 = Master_object;
  v10 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v13.fields.currentCryptoKey = v10;
  *(_QWORD *)&v13.fields.fakeValue = v9;
  Master_object = (EventCampaignMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v13, 0LL);
  if ( !entity || !v8 )
    goto LABEL_16;
  if ( EventCampaignMaster__IsEnableServant(v8, (int32_t)Master_object, entity->fields.eventId, 0LL) )
    return 1;
  Master_object = (EventCampaignMaster_o *)this->fields.userSvtEntity;
  if ( !Master_object )
LABEL_16:
    sub_1B8880C(Master_object, v6);
  EventUpVal_40205464 = UserServantEntity__getEventUpVal_40205464(
                          (UserServantEntity_o *)Master_object,
                          -1,
                          0,
                          0,
                          this->fields.eventSetupInfo,
                          entity->fields.eventId,
                          0,
                          0LL);
  result = 0;
  if ( EventUpVal_40205464 )
    return !this->fields.isInvalidRarity;
  return result;
}


int32_t __fastcall SupportServantEquipListViewItem__get_AdjustAttack(
        SupportServantEquipListViewItem_o *this,
        const MethodInfo *method)
{
  struct UserServantEntity_o *userSvtEntity; // x8

  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
    return userSvtEntity->fields.adjustAtk;
  else
    return 0;
}


int32_t __fastcall SupportServantEquipListViewItem__get_AdjustHp(
        SupportServantEquipListViewItem_o *this,
        const MethodInfo *method)
{
  struct UserServantEntity_o *userSvtEntity; // x8

  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
    return userSvtEntity->fields.adjustHp;
  else
    return 0;
}


int32_t __fastcall SupportServantEquipListViewItem__get_Attack(
        SupportServantEquipListViewItem_o *this,
        const MethodInfo *method)
{
  struct UserServantEntity_o *userSvtEntity; // x8

  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
    return userSvtEntity->fields.atk;
  else
    return 0;
}


int32_t __fastcall SupportServantEquipListViewItem__get_Cost(
        SupportServantEquipListViewItem_o *this,
        const MethodInfo *method)
{
  struct ServantEntity_o *servantEntity; // x8

  servantEntity = this->fields.servantEntity;
  if ( servantEntity )
    return servantEntity->fields.cost;
  else
    return 0;
}


int32_t __fastcall SupportServantEquipListViewItem__get_Hp(
        SupportServantEquipListViewItem_o *this,
        const MethodInfo *method)
{
  struct UserServantEntity_o *userSvtEntity; // x8

  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
    return userSvtEntity->fields.hp;
  else
    return 0;
}


IconLabelInfo_o *__fastcall SupportServantEquipListViewItem__get_IconInfo1(
        SupportServantEquipListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.iconLabelInfo1;
}


IconLabelInfo_o *__fastcall SupportServantEquipListViewItem__get_IconInfo2(
        SupportServantEquipListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.iconLabelInfo2;
}


bool __fastcall SupportServantEquipListViewItem__get_IsBase(
        SupportServantEquipListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isBase;
}


bool __fastcall SupportServantEquipListViewItem__get_IsCanNotSelect(
        SupportServantEquipListViewItem_o *this,
        const MethodInfo *method)
{
  return !this->fields.isBase && this->fields.isUse;
}


bool __fastcall SupportServantEquipListViewItem__get_IsChocolateSvtEquip(
        SupportServantEquipListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isChocolateSvtEquip;
}


bool __fastcall SupportServantEquipListViewItem__get_IsChoice(
        SupportServantEquipListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isChoice;
}


bool __fastcall SupportServantEquipListViewItem__get_IsDispChoice(
        SupportServantEquipListViewItem_o *this,
        const MethodInfo *method)
{
  if ( this->fields.isSwapChoice )
    return !this->fields.isChoice;
  else
    return this->fields.isChoice;
}


bool __fastcall SupportServantEquipListViewItem__get_IsDispLock(
        SupportServantEquipListViewItem_o *this,
        const MethodInfo *method)
{
  if ( this->fields.isSwapLock )
    return !this->fields.isLock;
  else
    return this->fields.isLock;
}


bool __fastcall SupportServantEquipListViewItem__get_IsFriendShipSvtEq(
        SupportServantEquipListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isFriendShipSvtEq;
}


bool __fastcall SupportServantEquipListViewItem__get_IsInvalidRarity(
        SupportServantEquipListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isInvalidRarity;
}


bool __fastcall SupportServantEquipListViewItem__get_IsLock(
        SupportServantEquipListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isLock;
}


bool __fastcall SupportServantEquipListViewItem__get_IsSwapChoice(
        SupportServantEquipListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isSwapChoice;
}


bool __fastcall SupportServantEquipListViewItem__get_IsSwapLock(
        SupportServantEquipListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isSwapLock;
}


bool __fastcall SupportServantEquipListViewItem__get_IsUse(
        SupportServantEquipListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isUse;
}


System_String_o *__fastcall SupportServantEquipListViewItem__get_NameText(
        SupportServantEquipListViewItem_o *this,
        const MethodInfo *method)
{
  ServantEntity_o *servantEntity; // x19
  struct UserServantEntity_o *userSvtEntity; // x8
  __int64 v5; // x20
  __int64 v6; // x21
  int32_t v7; // w1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  if ( (byte_4A57BB8 & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&StringLiteral_19052/*"error"*/);
    byte_4A57BB8 = 1;
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


ServantEntity_o *__fastcall SupportServantEquipListViewItem__get_Servant(
        SupportServantEquipListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.servantEntity;
}


UserServantEntity_o *__fastcall SupportServantEquipListViewItem__get_UserServant(
        SupportServantEquipListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.userSvtEntity;
}


void __fastcall SupportServantEquipListViewItem__set_IsBase(
        SupportServantEquipListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields.isBase = value;
}