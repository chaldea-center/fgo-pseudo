// local variable allocation has failed, the output may be wrong!
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
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  IconLabelInfo_o *v29; // x21
  int32_t v30; // w2
  int32_t v31; // w3
  IconLabelInfo_o *v32; // x28
  struct IconLabelInfo_o **p_iconLabelInfo2; // x21
  int32_t v34; // w2
  int32_t v35; // w3
  int32_t v36; // w2
  int32_t v37; // w3
  struct UserServantEntity_o **p_equippedUserSvtEntity; // x23
  int32_t v39; // w2
  int32_t v40; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_userSvtEntity; // x22
  int32_t v42; // w2
  int32_t v43; // w3
  int64_t Instance; // x0
  __int64 v45; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v46; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v47; // x27
  __int64 v48; // x28
  __int64 v49; // x29
  Il2CppObject *Entity; // x0
  struct ServantEntity_o **p_servantEntity; // x27
  int32_t v52; // w2
  int32_t v53; // w3
  ServantLimitMaster_o *v54; // x28
  int32_t v55; // w29
  __int128 v56; // q1
  __int128 v57; // q0
  unsigned int v58; // w26
  __int128 v59; // q0
  int64_t v60; // x0
  __int64 v61; // x8
  UserServantEntity_o *v62; // x8
  struct ServantEntity_o *servantEntity; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v64; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v65; // q0
  UserServantEntity_o *v66; // x8
  bool IsChocolateSvtEquip; // w0
  struct UserServantEntity_o *v68; // x8
  __int64 v69; // x24
  __int64 v70; // x25
  struct UserServantEntity_o *v71; // x8
  PartyOrganizationUtility_o *v72; // x24
  __int64 v73; // x25
  __int64 v74; // x26
  UserServantEntity_o *v75; // x8
  int32_t v76; // w23
  int32_t Rarity; // w0
  __int64 v78; // x8
  int32_t v79; // w20
  struct System_Int32_array *EquipCategoryIdList; // x0
  ServantStatusBattleListViewItem_o *p_categoryIdList; // x19
  int32_t v82; // w2
  int32_t v83; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v85; // [xsp+10h] [xbp-110h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v86; // [xsp+30h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v87; // [xsp+50h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v88; // [xsp+70h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v89; // [xsp+90h] [xbp-90h]
  int32_t actMaxRarity; // [xsp+B4h] [xbp-6Ch] BYREF
  System_String_o *skillName; // [xsp+B8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v92; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v93; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v94; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v95; // 0:x0.16

  if ( (byte_4A6C8AE & 1) == 0 )
  {
    sub_1B90010(&Method_DataManager_GetMasterData_ServantLimitMaster___, *(_QWORD *)&index);
    sub_1B90010(&Method_DataManager_GetMasterData_ServantMaster___, v22);
    sub_1B90010(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v23);
    sub_1B90010(&IconLabelInfo_TypeInfo, v24);
    sub_1B90010(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v25);
    sub_1B90010(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v26);
    sub_1B90010(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v27);
    sub_1B90010(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v28);
    byte_4A6C8AE = 1;
  }
  skillName = 0LL;
  actMaxRarity = 0;
  v29 = (IconLabelInfo_o *)sub_1B9025C(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v29, 0LL);
  this->fields.iconLabelInfo1 = v29;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.iconLabelInfo1, (int32_t)v29, v30, v31);
  v32 = (IconLabelInfo_o *)sub_1B9025C(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v32, 0LL);
  this->fields.iconLabelInfo2 = v32;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.iconLabelInfo2, (int32_t)v32, v34, v35);
  ListViewItem___ctor_40760684((ListViewItem_o *)this, index, 0LL);
  this->fields.eventSetupInfo = eventSetupInfo;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.eventSetupInfo, (int32_t)eventSetupInfo, v36, v37);
  this->fields.equippedUserSvtEntity = equippedUserSvtEntity;
  p_equippedUserSvtEntity = &this->fields.equippedUserSvtEntity;
  sub_1B8FFB4(
    (ServantStatusBattleListViewItem_o *)&this->fields.equippedUserSvtEntity,
    (int32_t)equippedUserSvtEntity,
    v39,
    v40);
  this->fields.userSvtEntity = userSvtEntity;
  p_userSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userSvtEntity;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.userSvtEntity, (int32_t)userSvtEntity, v42, v43);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_54;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_ServantMaster___);
  v46 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_54;
  v47 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v49 = *(_QWORD *)&v46[5].fields.currentCryptoKey;
  v48 = *(_QWORD *)&v46[5].fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v92.fields.currentCryptoKey = v49;
  *(_QWORD *)&v92.fields.fakeValue = v48;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(v92, 0LL);
  if ( !v47 )
    goto LABEL_54;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v47,
             Instance,
             (const MethodInfo_312C5A8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)Entity;
  p_servantEntity = &this->fields.servantEntity;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.servantEntity, (int32_t)Entity, v52, v53);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_54;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtEntity )
    goto LABEL_54;
  v54 = (ServantLimitMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376((*p_userSvtEntity)[5], 0LL);
  if ( !*p_userSvtEntity )
    goto LABEL_54;
  v55 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376((*p_userSvtEntity)[6], 0LL);
  if ( !v54 )
    goto LABEL_54;
  Instance = (int64_t)ServantLimitMaster__GetEntity(v54, v55, Instance, 0LL);
  if ( !*p_servantEntity )
    goto LABEL_54;
  this->fields.classId = (*p_servantEntity)->fields.classId;
  if ( !Instance )
    goto LABEL_54;
  this->fields.rarity = *(_DWORD *)(Instance + 24);
  if ( !userSvtEntity )
    goto LABEL_54;
  v56 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v89.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v89.fields.fakeValue = v56;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v88 = v89;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46509900(&v88, 0LL) == targetSvtEquipId )
  {
    *(_WORD *)&this->fields.isBase = 1;
  }
  else
  {
    *(_WORD *)&this->fields.isBase = 0;
    v57 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
    *(_OWORD *)&v89.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v89.fields.fakeValue = v57;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v87 = v89;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46509900(&v87, 0LL);
    if ( Instance != oldTargetSvtEquipId )
    {
      if ( !useSvtEquipList )
        goto LABEL_54;
      if ( (int)useSvtEquipList->max_length >= 1 )
      {
        v58 = 0;
        while ( 1 )
        {
          v59 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
          *(_OWORD *)&v89.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v89.fields.fakeValue = v59;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v86 = v89;
          v60 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46509900(&v86, 0LL);
          v61 = *(_QWORD *)&useSvtEquipList->max_length;
          if ( v58 >= (unsigned int)v61 )
            sub_1B90274(v60, v45);
          if ( v60 == useSvtEquipList->m_Items[v58] )
            break;
          if ( (int)++v58 >= (int)v61 )
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
  v62 = this->fields.userSvtEntity;
  this->fields.isLock = Instance & 1;
  if ( !v62 )
    goto LABEL_54;
  Instance = UserServantEntity__IsChoice(v62, 0LL);
  servantEntity = this->fields.servantEntity;
  this->fields.isChoice = Instance & 1;
  *(_QWORD *)&this->fields.bonusKind = 1LL;
  this->fields.isEventUpVal = 0;
  if ( !servantEntity )
    goto LABEL_54;
  v64 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_54;
  this->fields.sortValue2 = ((__int64)servantEntity->fields.collectionNo << 16) | ((unsigned __int64)(unsigned int)this->fields.rarity << 48) | v64[16].fields.currentCryptoKey;
  v65 = v64[2];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v89.fields.currentCryptoKey = v64[1];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v89.fields.fakeValue = v65;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v85 = v89;
  this->fields.sortValue2B = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46509900(&v85, 0LL);
  this->fields.amountSortValue = -1LL;
  *(_WORD *)&this->fields.isSwapLock = 0;
  Instance = (int64_t)this->fields.userSvtEntity;
  if ( !Instance )
    goto LABEL_54;
  Instance = UserServantEntity__IsFriendShipSvtEquip((UserServantEntity_o *)Instance, 0LL);
  v66 = this->fields.userSvtEntity;
  this->fields.isFriendShipSvtEq = Instance & 1;
  if ( !v66 )
    goto LABEL_54;
  IsChocolateSvtEquip = UserServantEntity__IsChocolateSvtEquip(v66, 0LL);
  v68 = this->fields.equippedUserSvtEntity;
  this->fields.isChocolateSvtEquip = IsChocolateSvtEquip;
  if ( v68 )
  {
    v70 = *(_QWORD *)&v68->fields.svtId.fields.currentCryptoKey;
    v69 = *(_QWORD *)&v68->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v93.fields.currentCryptoKey = v70;
    *(_QWORD *)&v93.fields.fakeValue = v69;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(v93, 0LL) >= 1 )
    {
      Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_374D460 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      v71 = *p_equippedUserSvtEntity;
      if ( *p_equippedUserSvtEntity )
      {
        v72 = (PartyOrganizationUtility_o *)Instance;
        v74 = *(_QWORD *)&v71->fields.svtId.fields.currentCryptoKey;
        v73 = *(_QWORD *)&v71->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v94.fields.currentCryptoKey = v74;
        *(_QWORD *)&v94.fields.fakeValue = v73;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(v94, 0LL);
        v75 = *p_equippedUserSvtEntity;
        if ( *p_equippedUserSvtEntity )
        {
          v76 = Instance;
          Rarity = UserServantEntity__getRarity(v75, 0LL);
          v78 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
          *(_QWORD *)&v95.fields.fakeValue = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
          v79 = Rarity;
          *(_QWORD *)&v95.fields.currentCryptoKey = v78;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(v95, 0LL);
          if ( v72 )
          {
            this->fields.isInvalidRarity = PartyOrganizationUtility__IsRarityRestriction(
                                             v72,
                                             &skillName,
                                             &actMaxRarity,
                                             v76,
                                             v79,
                                             Instance,
                                             -1,
                                             0LL);
            goto LABEL_50;
          }
        }
      }
LABEL_54:
      sub_1B9026C(Instance, v45);
    }
  }
LABEL_50:
  Instance = (int64_t)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_54;
  EquipCategoryIdList = UserServantEntity__GetEquipCategoryIdList((UserServantEntity_o *)Instance, 1, 0LL);
  this->fields.categoryIdList = EquipCategoryIdList;
  p_categoryIdList = (ServantStatusBattleListViewItem_o *)&this->fields.categoryIdList;
  sub_1B8FFB4(p_categoryIdList, (int32_t)EquipCategoryIdList, v82, v83);
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

  if ( (byte_4A6C8B3 & 1) == 0 )
  {
    sub_1B90010(&TreasureDvcInfo_TypeInfo, tdInfo);
    byte_4A6C8B3 = 1;
  }
  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
    return UserServantEntity__getTreasureDeviceInfo(userSvtEntity, tdInfo, -1, -1, 0, 0LL);
  v7 = (TreasureDvcInfo_o *)sub_1B9025C(TreasureDvcInfo_TypeInfo);
  TreasureDvcInfo___ctor(v7, 0LL);
  *tdInfo = v7;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)tdInfo, (int32_t)v7, v8, v9);
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

  if ( (byte_4A6C8B1 & 1) == 0 )
  {
    sub_1B90010(&FilterKindList_TypeInfo, sort);
    sub_1B90010(&ListViewSort_FilterKind___TypeInfo, v5);
    sub_1B90010(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v6);
    byte_4A6C8B1 = 1;
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
                           (const MethodInfo_34F7C80 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                           (const MethodInfo_34F7C80 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                           (const MethodInfo_34F7C80 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                             (const MethodInfo_34F7C80 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
      RarityFilterKindList = (System_Int32Enum_array *)sub_1B900B8(ListViewSort_FilterKind___TypeInfo, 1LL);
      if ( RarityFilterKindList )
      {
        if ( !RarityFilterKindList->max_length )
          sub_1B90274(RarityFilterKindList, RarityFilterKindList);
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
      sub_1B9026C(RarityFilterKindList, sort);
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
    sub_1B9026C(0LL, method);
  this->fields.isChoice = UserServantEntity__IsChoice(userSvtEntity, 0LL);
  this->fields.isSwapChoice = 0;
}


void __fastcall SupportServantEquipListViewItem__ModifyItem(
        SupportServantEquipListViewItem_o *this,
        UserServantEntity_o *userSvtEntity,
        int64_t targetSvtEquipId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_userSvtEntity; // x22
  int64_t Instance; // x0
  __int64 v14; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v15; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v16; // x23
  __int64 v17; // x24
  __int64 v18; // x25
  Il2CppObject *Entity; // x0
  struct ServantEntity_o **p_servantEntity; // x23
  int32_t v21; // w2
  int32_t v22; // w3
  ServantLimitMaster_o *v23; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v24; // x8
  int32_t v25; // w22
  __int128 v26; // q1
  int64_t rarity; // x9
  struct ServantEntity_o *servantEntity; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+20h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v31; // 0:x0.16

  if ( (byte_4A6C8AF & 1) == 0 )
  {
    sub_1B90010(&Method_DataManager_GetMasterData_ServantLimitMaster___, userSvtEntity);
    sub_1B90010(&Method_DataManager_GetMasterData_ServantMaster___, v7);
    sub_1B90010(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v8);
    sub_1B90010(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_1B90010(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10);
    sub_1B90010(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_4A6C8AF = 1;
  }
  this->fields.userSvtEntity = userSvtEntity;
  p_userSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userSvtEntity;
  sub_1B8FFB4(
    (ServantStatusBattleListViewItem_o *)&this->fields.userSvtEntity,
    (int32_t)userSvtEntity,
    targetSvtEquipId,
    (int32_t)method);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_ServantMaster___);
  v15 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_19;
  v16 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v18 = *(_QWORD *)&v15[5].fields.currentCryptoKey;
  v17 = *(_QWORD *)&v15[5].fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v31.fields.currentCryptoKey = v18;
  *(_QWORD *)&v31.fields.fakeValue = v17;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(v31, 0LL);
  if ( !v16 )
    goto LABEL_19;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v16,
             Instance,
             (const MethodInfo_312C5A8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)Entity;
  p_servantEntity = &this->fields.servantEntity;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.servantEntity, (int32_t)Entity, v21, v22);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtEntity )
    goto LABEL_19;
  v23 = (ServantLimitMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376((*p_userSvtEntity)[5], 0LL);
  v24 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_19;
  v25 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(v24[6], 0LL);
  if ( !v23 )
    goto LABEL_19;
  Instance = (int64_t)ServantLimitMaster__GetEntity(v23, v25, Instance, 0LL);
  if ( !*p_servantEntity )
    goto LABEL_19;
  this->fields.classId = (*p_servantEntity)->fields.classId;
  if ( !Instance )
    goto LABEL_19;
  this->fields.rarity = *(_DWORD *)(Instance + 24);
  if ( !userSvtEntity )
    goto LABEL_19;
  v26 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v30.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v30.fields.fakeValue = v26;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v29 = v30;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46509900(&v29, 0LL);
  rarity = this->fields.rarity;
  servantEntity = this->fields.servantEntity;
  this->fields.isBase = Instance == targetSvtEquipId;
  this->fields.isOldBase = Instance == targetSvtEquipId;
  this->fields.sortValue1B = rarity;
  if ( !servantEntity )
LABEL_19:
    sub_1B9026C(Instance, v14);
  this->fields.sortValue2 = servantEntity->fields.collectionNo;
}


void __fastcall SupportServantEquipListViewItem__ModifyLockItem(
        SupportServantEquipListViewItem_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0

  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_1B9026C(0LL, method);
  this->fields.isLock = UserServantEntity__IsLock(userSvtEntity, 0LL);
  this->fields.isSwapLock = 0;
}


bool __fastcall SupportServantEquipListViewItem__SetSortValue(
        SupportServantEquipListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  SupportServantEquipListViewItem_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  _BOOL4 isChoice; // w8
  _BOOL4 isSwapChoice; // w9
  bool v16; // zf
  _BOOL4 v17; // w8
  int v18; // w10
  struct UserServantEntity_o *v19; // x8
  __int128 v20; // q1
  struct UserServantEntity_o *v21; // x8
  int32_t bonusKind2; // w8
  int32_t v23; // w8
  int32_t bonusKind2Id; // w5
  int isEventUpVal; // w8
  IconLabelInfo_o *iconLabelInfo1; // x19
  int64_t sortValue0_low; // x20
  IconLabelInfo_o *v28; // x21
  struct UserServantEntity_o *v29; // x8
  int64_t hp; // x2
  int32_t adjustHp; // w3
  int32_t v32; // w1
  struct UserServantEntity_o *v33; // x8
  struct ServantEntity_o *servantEntity; // x8
  int64_t cost; // x2
  int32_t sortValue0; // w20
  struct ListViewManager_o *manager; // x8
  __int64 methodPtr_low; // x11
  struct ListViewManager_o *v39; // x20
  int32_t v40; // w8
  int v41; // w8
  bool EventUpVal_40259204; // w0
  struct UserServantEntity_o *userSvtEntity; // x8
  EventCampaignMaster_o *v44; // x21
  __int64 v45; // x22
  __int64 v46; // x23
  bool IsEnableServant; // w0
  System_Collections_Generic_List_EventGroupEntity__o *EntitiesByGroupId; // x21
  System_Func_object__bool__o *v49; // x22
  struct UserServantEntity_o *v50; // x8
  __int64 v51; // x21
  __int64 v52; // x22
  const MethodInfo *v53; // x2
  struct ServantEntity_o *v54; // x8
  __int64 collectionNo; // x10
  struct UserServantEntity_o *v56; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v58; // [xsp+10h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v59; // [xsp+30h] [xbp-50h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v60; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v61; // 0:x0.16

  v4 = this;
  if ( (byte_4A6C8B0 & 1) == 0 )
  {
    sub_1B90010(&Method_BasicHelper_Any_EventGroupEntity___, sort);
    sub_1B90010(&Method_DataManager_GetMaster_EventCampaignMaster___, v5);
    sub_1B90010(&Method_DataManager_GetMaster_EventGroupMaster___, v6);
    sub_1B90010(&DataManager_TypeInfo, v7);
    sub_1B90010(&System_Func_EventGroupEntity__bool__TypeInfo, v8);
    sub_1B90010(&Method_System_Collections_Generic_List_EventGroupEntity__get_Count__, v9);
    sub_1B90010(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    sub_1B90010(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v11);
    sub_1B90010(&Method_SupportServantEquipListViewItem__SetSortValue_b__29_0__, v12);
    this = (SupportServantEquipListViewItem_o *)sub_1B90010(&SupportServantEquipListViewManager_TypeInfo, v13);
    byte_4A6C8B0 = 1;
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
    EventUpVal_40259204 = UserServantEntity__getEventUpVal_40259204(
                            (UserServantEntity_o *)this,
                            -1,
                            0,
                            0,
                            v4->fields.eventSetupInfo,
                            bonusKind2Id,
                            0,
                            0LL);
    isEventUpVal = EventUpVal_40259204;
    v4->fields.isEventUpVal = EventUpVal_40259204;
LABEL_62:
    if ( !isEventUpVal || v4->fields.isInvalidRarity )
      goto LABEL_84;
    goto LABEL_6;
  }
  if ( bonusKind2 == 3 )
  {
    if ( v4->fields.bonusKind == 3 )
    {
      v40 = sort->fields.bonusKind2Id;
      if ( v4->fields.bonusKindId == v40 )
      {
        v41 = v4->fields.isEventUpVal;
        goto LABEL_73;
      }
    }
    else
    {
      v40 = sort->fields.bonusKind2Id;
    }
    v4->fields.bonusKind = 3;
    v4->fields.bonusKindId = v40;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (SupportServantEquipListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_2E8E1C8 *)Method_DataManager_GetMaster_EventCampaignMaster___);
    userSvtEntity = v4->fields.userSvtEntity;
    if ( !userSvtEntity )
      goto LABEL_96;
    v44 = (EventCampaignMaster_o *)this;
    v46 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
    v45 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v60.fields.currentCryptoKey = v46;
    *(_QWORD *)&v60.fields.fakeValue = v45;
    this = (SupportServantEquipListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(
                                                  v60,
                                                  0LL);
    if ( !v44 )
      goto LABEL_96;
    IsEnableServant = EventCampaignMaster__IsEnableServant(v44, (int32_t)this, v4->fields.bonusKindId, 0LL);
    v41 = IsEnableServant;
    v4->fields.isEventUpVal = IsEnableServant;
LABEL_73:
    if ( !v41 )
      goto LABEL_84;
    goto LABEL_6;
  }
  if ( bonusKind2 )
    goto LABEL_6;
  if ( v4->fields.bonusKind )
  {
    v23 = sort->fields.bonusKind2Id;
  }
  else
  {
    v23 = sort->fields.bonusKind2Id;
    if ( v4->fields.bonusKindId == v23 )
      goto LABEL_83;
  }
  v4->fields.bonusKind = 0;
  v4->fields.bonusKindId = v23;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (SupportServantEquipListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_2E8E1C8 *)Method_DataManager_GetMaster_EventGroupMaster___);
  if ( !this )
LABEL_96:
    sub_1B9026C(this, sort);
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
      v49 = (System_Func_object__bool__o *)sub_1B9025C(System_Func_EventGroupEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v49,
        (Il2CppObject *)v4,
        Method_SupportServantEquipListViewItem__SetSortValue_b__29_0__,
        0LL);
      v4->fields.isEventUpVal = BasicHelper__Any_object_(
                                  (System_Collections_Generic_List_T__o *)EntitiesByGroupId,
                                  (System_Func_T__bool__o *)v49,
                                  (const MethodInfo_2E795E4 *)Method_BasicHelper_Any_EventGroupEntity___);
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
  v16 = !isChoice;
  v17 = !isChoice;
  v18 = !v16;
  if ( !isSwapChoice )
    v17 = v18;
  if ( v17 && sort->fields.isChoiceSort )
    v4->fields.sortValue0 = 10LL;
  this = (SupportServantEquipListViewItem_o *)v4->fields.iconLabelInfo2;
  if ( !this )
    goto LABEL_96;
  IconLabelInfo__Clear((IconLabelInfo_o *)this, 0LL);
  this = (SupportServantEquipListViewItem_o *)(&dword_0 + 1);
  switch ( sort->fields.sortKind )
  {
    case 1:
      v19 = v4->fields.userSvtEntity;
      if ( !v19 )
        goto LABEL_96;
      v20 = *(_OWORD *)&v19->fields.id.fields.fakeValue;
      *(_OWORD *)&v59.fields.currentCryptoKey = *(_OWORD *)&v19->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v59.fields.fakeValue = v20;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v58 = v59;
      this = (SupportServantEquipListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46509900(
                                                    &v58,
                                                    0LL);
      v21 = v4->fields.userSvtEntity;
      v4->fields.sortValue1 = (int64_t)this;
      if ( !v21 )
        goto LABEL_96;
      this = (SupportServantEquipListViewItem_o *)v4->fields.iconLabelInfo1;
      if ( !this )
        goto LABEL_96;
      IconLabelInfo__SetTime((IconLabelInfo_o *)this, 49, v21->fields.createdAt, 0, 0, 0, 0LL);
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
      v28 = v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = sortValue0_low;
      this = (SupportServantEquipListViewItem_o *)UserServantEntity__getLevelMax((UserServantEntity_o *)this, 0LL);
      if ( !v28 )
        goto LABEL_96;
      IconLabelInfo__Set_38192256(v28, 2, sortValue0_low, (int32_t)this, 0, 0, 0, 0, 0LL);
      goto LABEL_51;
    case 5:
      v29 = v4->fields.userSvtEntity;
      if ( !v29 )
        goto LABEL_96;
      hp = v29->fields.hp;
      this = (SupportServantEquipListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = hp;
      if ( !this )
        goto LABEL_96;
      adjustHp = v29->fields.adjustHp;
      v32 = 3;
      goto LABEL_42;
    case 6:
      v33 = v4->fields.userSvtEntity;
      if ( !v33 )
        goto LABEL_96;
      hp = v33->fields.atk;
      this = (SupportServantEquipListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = hp;
      if ( !this )
        goto LABEL_96;
      adjustHp = v33->fields.adjustAtk;
      v32 = 5;
LABEL_42:
      IconLabelInfo__Set_38192256((IconLabelInfo_o *)this, v32, hp, adjustHp, 0, 0, 0, 0, 0LL);
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
      IconLabelInfo__Set_38192256((IconLabelInfo_o *)this, 7, cost, 0, 0, 0, 0, 0, 0LL);
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
          v39 = sort->fields.manager;
        else
          v39 = 0LL;
      }
      else
      {
        v39 = 0LL;
      }
      v50 = v4->fields.userSvtEntity;
      if ( !v50 )
        goto LABEL_96;
      v52 = *(_QWORD *)&v50->fields.svtId.fields.currentCryptoKey;
      v51 = *(_QWORD *)&v50->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v61.fields.currentCryptoKey = v52;
      *(_QWORD *)&v61.fields.fakeValue = v51;
      this = (SupportServantEquipListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(
                                                    v61,
                                                    0LL);
      if ( !v39 )
        goto LABEL_96;
      this = (SupportServantEquipListViewItem_o *)SupportServantEquipListViewManager__GetAmountSortValue(
                                                    (SupportServantEquipListViewManager_o *)v39,
                                                    (int32_t)this,
                                                    v53);
      v4->fields.amountSortValue = (int64_t)this;
LABEL_93:
      v54 = v4->fields.servantEntity;
      if ( !v54 )
        goto LABEL_96;
      collectionNo = v54->fields.collectionNo;
      v56 = v4->fields.userSvtEntity;
      v4->fields.sortValue1 = (((unsigned __int64)(unsigned int)v4->fields.rarity << 32) + ((_QWORD)this << 48)) | collectionNo;
      if ( !v56 )
        goto LABEL_96;
      iconLabelInfo1 = v4->fields.iconLabelInfo1;
      sortValue0 = v56->fields.lv;
      this = (SupportServantEquipListViewItem_o *)v56;
      break;
    default:
      return (char)this;
  }
  this = (SupportServantEquipListViewItem_o *)UserServantEntity__getLevelMax((UserServantEntity_o *)this, 0LL);
  if ( !iconLabelInfo1 )
    goto LABEL_96;
  IconLabelInfo__Set_38192256(iconLabelInfo1, 2, sortValue0, (int32_t)this, 0, 0, 0, 0, 0LL);
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

  if ( (byte_4A6C8B4 & 1) == 0 )
  {
    sub_1B90010(&StringLiteral_10069/*"Other "*/, method);
    byte_4A6C8B4 = 1;
  }
  NameText = SupportServantEquipListViewItem__get_NameText(this, method);
  return System_String__Concat_61787092((System_String_o *)StringLiteral_10069/*"Other "*/, NameText, 0LL);
}


bool __fastcall SupportServantEquipListViewItem___SetSortValue_b__29_0(
        SupportServantEquipListViewItem_o *this,
        EventGroupEntity_o *entity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  EventCampaignMaster_o *Master_object; // x0
  __int64 v8; // x1
  struct UserServantEntity_o *userSvtEntity; // x8
  EventCampaignMaster_o *v10; // x21
  __int64 v11; // x22
  __int64 v12; // x23
  bool result; // w0
  bool EventUpVal_40259204; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_4A6C8B5 & 1) == 0 )
  {
    sub_1B90010(&Method_DataManager_GetMaster_EventCampaignMaster___, entity);
    sub_1B90010(&DataManager_TypeInfo, v5);
    sub_1B90010(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    byte_4A6C8B5 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (EventCampaignMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E8E1C8 *)Method_DataManager_GetMaster_EventCampaignMaster___);
  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_16;
  v10 = Master_object;
  v12 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v15.fields.currentCryptoKey = v12;
  *(_QWORD *)&v15.fields.fakeValue = v11;
  Master_object = (EventCampaignMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(v15, 0LL);
  if ( !entity || !v10 )
    goto LABEL_16;
  if ( EventCampaignMaster__IsEnableServant(v10, (int32_t)Master_object, entity->fields.eventId, 0LL) )
    return 1;
  Master_object = (EventCampaignMaster_o *)this->fields.userSvtEntity;
  if ( !Master_object )
LABEL_16:
    sub_1B9026C(Master_object, v8);
  EventUpVal_40259204 = UserServantEntity__getEventUpVal_40259204(
                          (UserServantEntity_o *)Master_object,
                          -1,
                          0,
                          0,
                          this->fields.eventSetupInfo,
                          entity->fields.eventId,
                          0,
                          0LL);
  result = 0;
  if ( EventUpVal_40259204 )
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
  __int64 v3; // x1
  ServantEntity_o *servantEntity; // x19
  struct UserServantEntity_o *userSvtEntity; // x8
  __int64 v6; // x20
  __int64 v7; // x21
  int32_t v8; // w1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  if ( (byte_4A6C8B2 & 1) == 0 )
  {
    sub_1B90010(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    sub_1B90010(&StringLiteral_19079/*"error"*/, v3);
    byte_4A6C8B2 = 1;
  }
  servantEntity = this->fields.servantEntity;
  if ( !servantEntity )
    return (System_String_o *)StringLiteral_19079/*"error"*/;
  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
  {
    v7 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.currentCryptoKey;
    v6 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v10.fields.currentCryptoKey = v7;
    *(_QWORD *)&v10.fields.fakeValue = v6;
    v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(v10, 0LL);
  }
  else
  {
    v8 = -1;
  }
  return ServantEntity__getName(servantEntity, v8, -1, 0LL);
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