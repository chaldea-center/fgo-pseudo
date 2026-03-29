void SupportServantEquipListViewItem___ctor(
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
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  IconLabelInfo_o *v29; // x28
  struct IconLabelInfo_o **p_iconLabelInfo2; // x21
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7
  int32_t v37; // w2
  int32_t v38; // w3
  System_String_o *v39; // x4
  int32_t v40; // w5
  int64_t v41; // x6
  System_String_o *v42; // x7
  struct UserServantEntity_o **p_equippedUserSvtEntity; // x23
  int32_t v44; // w2
  int32_t v45; // w3
  System_String_o *v46; // x4
  int32_t v47; // w5
  int64_t v48; // x6
  System_String_o *v49; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_userSvtEntity; // x22
  int32_t v51; // w2
  int32_t v52; // w3
  System_String_o *v53; // x4
  int32_t v54; // w5
  int64_t v55; // x6
  System_String_o *v56; // x7
  int64_t Instance; // x0
  __int64 v58; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v59; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v60; // x27
  __int64 v61; // x28
  __int64 v62; // x29
  Il2CppObject *Entity; // x0
  struct ServantEntity_o **p_servantEntity; // x27
  int32_t v65; // w2
  int32_t v66; // w3
  System_String_o *v67; // x4
  int32_t v68; // w5
  int64_t v69; // x6
  System_String_o *v70; // x7
  ServantLimitMaster_o *v71; // x28
  int32_t v72; // w29
  __int128 v73; // q1
  const MethodInfo *v74; // x3
  __int128 v75; // q0
  unsigned int v76; // w26
  __int128 v77; // q0
  int64_t v78; // x0
  il2cpp_array_size_t max_length; // x8
  UserServantEntity_o *v80; // x8
  struct ServantEntity_o *servantEntity; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v82; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v83; // q0
  UserServantEntity_o *v84; // x8
  bool IsChocolateSvtEquip; // w0
  struct UserServantEntity_o *v86; // x8
  __int64 v87; // x24
  __int64 v88; // x25
  struct UserServantEntity_o *v89; // x8
  PartyOrganizationUtility_o *v90; // x24
  __int64 v91; // x25
  __int64 v92; // x26
  UserServantEntity_o *v93; // x8
  int32_t v94; // w23
  int32_t Rarity; // w0
  __int64 v96; // x8
  int32_t v97; // w20
  struct System_Int32_array *EquipCategoryIdList; // x0
  GrandQuestFolderBoardItem_o *p_categoryIdList; // x19
  int32_t v100; // w2
  int32_t v101; // w3
  System_String_o *v102; // x4
  int32_t v103; // w5
  int64_t v104; // x6
  System_String_o *v105; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v107; // [xsp+10h] [xbp-110h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v108; // [xsp+30h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v109; // [xsp+50h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v110; // [xsp+70h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v111; // [xsp+90h] [xbp-90h]
  int32_t actMaxRarity; // [xsp+B4h] [xbp-6Ch] BYREF
  System_String_o *skillName; // [xsp+B8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v114; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v115; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v116; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v117; // 0:x0.16

  if ( (byte_4D2CF8C & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C93AD4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C93AD4(&IconLabelInfo_TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4D2CF8C = 1;
  }
  skillName = 0;
  actMaxRarity = 0;
  v22 = (IconLabelInfo_o *)sub_1C93D20(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v22, 0);
  this->fields.iconLabelInfo1 = v22;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.iconLabelInfo1, (int32_t)v22, v23, v24, v25, v26, v27, v28);
  v29 = (IconLabelInfo_o *)sub_1C93D20(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v29, 0);
  this->fields.iconLabelInfo2 = v29;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.iconLabelInfo2, (int32_t)v29, v31, v32, v33, v34, v35, v36);
  ListViewItem___ctor_44487500((ListViewItem_o *)this, index, 0);
  this->fields.eventSetupInfo = eventSetupInfo;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.eventSetupInfo,
    (int32_t)eventSetupInfo,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  this->fields.equippedUserSvtEntity = equippedUserSvtEntity;
  p_equippedUserSvtEntity = &this->fields.equippedUserSvtEntity;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.equippedUserSvtEntity,
    (int32_t)equippedUserSvtEntity,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
  this->fields.userSvtEntity = userSvtEntity;
  p_userSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userSvtEntity;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.userSvtEntity,
    (int32_t)userSvtEntity,
    v51,
    v52,
    v53,
    v54,
    v55,
    v56);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_56;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantMaster___);
  v59 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_56;
  v60 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v62 = *(_QWORD *)&v59[5].fields.currentCryptoKey;
  v61 = *(_QWORD *)&v59[5].fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v114.fields.currentCryptoKey = v62;
  *(_QWORD *)&v114.fields.fakeValue = v61;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v114, 0);
  if ( !v60 )
    goto LABEL_56;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v60,
             Instance,
             (const MethodInfo_3463274 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)Entity;
  p_servantEntity = &this->fields.servantEntity;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.servantEntity, (int32_t)Entity, v65, v66, v67, v68, v69, v70);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_56;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtEntity )
    goto LABEL_56;
  v71 = (ServantLimitMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028((*p_userSvtEntity)[5], 0);
  if ( !*p_userSvtEntity )
    goto LABEL_56;
  v72 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028((*p_userSvtEntity)[6], 0);
  if ( !v71 )
    goto LABEL_56;
  Instance = (int64_t)ServantLimitMaster__GetEntity(v71, v72, Instance, 0);
  if ( !*p_servantEntity )
    goto LABEL_56;
  this->fields.classId = (*p_servantEntity)->fields.classId;
  if ( !Instance )
    goto LABEL_56;
  this->fields.rarity = *(_DWORD *)(Instance + 24);
  if ( !userSvtEntity )
    goto LABEL_56;
  v73 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v111.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v111.fields.fakeValue = v73;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v110 = v111;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(&v110, 0) == targetSvtEquipId )
  {
    *(_WORD *)&this->fields.isBase = 1;
  }
  else
  {
    *(_WORD *)&this->fields.isBase = 0;
    v75 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
    *(_OWORD *)&v111.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v111.fields.fakeValue = v75;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v109 = v111;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(&v109, 0);
    if ( Instance != oldTargetSvtEquipId )
    {
      if ( !useSvtEquipList )
        goto LABEL_56;
      if ( SLODWORD(useSvtEquipList->max_length) >= 1 )
      {
        v76 = 0;
        while ( 1 )
        {
          v77 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
          *(_OWORD *)&v111.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v111.fields.fakeValue = v77;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v108 = v111;
          v78 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(&v108, 0);
          max_length = useSvtEquipList->max_length;
          if ( v76 >= (unsigned int)max_length )
            sub_1C93D34(v78);
          if ( v78 == useSvtEquipList->m_Items[v76] )
            break;
          if ( (int)++v76 >= (int)max_length )
            goto LABEL_32;
        }
        this->fields.isUse = 1;
      }
    }
  }
LABEL_32:
  if ( this->fields.isUse )
    SupportServantEquipListViewItem__SetUseServantId(this, supportServantData, nowDeckId, v74);
  Instance = (int64_t)this->fields.userSvtEntity;
  this->fields.isOldBase = this->fields.isBase;
  if ( !Instance )
    goto LABEL_56;
  Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0);
  v80 = this->fields.userSvtEntity;
  this->fields.isLock = Instance & 1;
  if ( !v80 )
    goto LABEL_56;
  Instance = UserServantEntity__IsChoice(v80, 0);
  servantEntity = this->fields.servantEntity;
  this->fields.isChoice = Instance & 1;
  *(_QWORD *)&this->fields.bonusKind = 1;
  this->fields.isEventUpVal = 0;
  if ( !servantEntity )
    goto LABEL_56;
  v82 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_56;
  this->fields.sortValue2 = ((__int64)servantEntity->fields.collectionNo << 16)
                          | ((unsigned __int64)(unsigned int)this->fields.rarity << 48)
                          | v82[16].fields.currentCryptoKey;
  v83 = v82[2];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v111.fields.currentCryptoKey = v82[1];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v111.fields.fakeValue = v83;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v107 = v111;
  this->fields.sortValue2B = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(&v107, 0);
  this->fields.amountSortValue = -1;
  *(_WORD *)&this->fields.isSwapLock = 0;
  Instance = (int64_t)this->fields.userSvtEntity;
  if ( !Instance )
    goto LABEL_56;
  Instance = UserServantEntity__IsFriendShipSvtEquip((UserServantEntity_o *)Instance, 0);
  v84 = this->fields.userSvtEntity;
  this->fields.isFriendShipSvtEq = Instance & 1;
  if ( !v84 )
    goto LABEL_56;
  IsChocolateSvtEquip = UserServantEntity__IsChocolateSvtEquip(v84, 0);
  v86 = this->fields.equippedUserSvtEntity;
  this->fields.isChocolateSvtEquip = IsChocolateSvtEquip;
  if ( v86 )
  {
    v88 = *(_QWORD *)&v86->fields.svtId.fields.currentCryptoKey;
    v87 = *(_QWORD *)&v86->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v115.fields.currentCryptoKey = v88;
    *(_QWORD *)&v115.fields.fakeValue = v87;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v115, 0) >= 1 )
    {
      Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_3AC57EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      v89 = *p_equippedUserSvtEntity;
      if ( *p_equippedUserSvtEntity )
      {
        v90 = (PartyOrganizationUtility_o *)Instance;
        v92 = *(_QWORD *)&v89->fields.svtId.fields.currentCryptoKey;
        v91 = *(_QWORD *)&v89->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v116.fields.currentCryptoKey = v92;
        *(_QWORD *)&v116.fields.fakeValue = v91;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v116, 0);
        v93 = *p_equippedUserSvtEntity;
        if ( *p_equippedUserSvtEntity )
        {
          v94 = Instance;
          Rarity = UserServantEntity__getRarity(v93, 0);
          v96 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
          *(_QWORD *)&v117.fields.fakeValue = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
          v97 = Rarity;
          *(_QWORD *)&v117.fields.currentCryptoKey = v96;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v117, 0);
          if ( v90 )
          {
            this->fields.isInvalidRarity = PartyOrganizationUtility__IsRarityRestriction(
                                             v90,
                                             &skillName,
                                             &actMaxRarity,
                                             v94,
                                             v97,
                                             Instance,
                                             -1,
                                             0);
            goto LABEL_52;
          }
        }
      }
LABEL_56:
      sub_1C93D2C(Instance, v58);
    }
  }
LABEL_52:
  Instance = (int64_t)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_56;
  EquipCategoryIdList = UserServantEntity__GetEquipCategoryIdList((UserServantEntity_o *)Instance, 1, 0);
  this->fields.categoryIdList = EquipCategoryIdList;
  p_categoryIdList = (GrandQuestFolderBoardItem_o *)&this->fields.categoryIdList;
  sub_1C93A78(p_categoryIdList, (int32_t)EquipCategoryIdList, v100, v101, v102, v103, v104, v105);
  Instance = (int64_t)p_categoryIdList->monitor;
  if ( !Instance )
    goto LABEL_56;
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0);
  Instance = (int64_t)*p_iconLabelInfo2;
  if ( !*p_iconLabelInfo2 )
    goto LABEL_56;
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0);
}


void SupportServantEquipListViewItem__Finalize(SupportServantEquipListViewItem_o *this, const MethodInfo *method)
{
  ListViewItem__Finalize((ListViewItem_o *)this, 0);
}


bool SupportServantEquipListViewItem__IsMatchFilter(
        SupportServantEquipListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  return this->fields.isBase || SupportServantEquipListViewItem__IsMatchServantEquipFilter(this, sort, method);
}


bool SupportServantEquipListViewItem__IsMatchServantEquipFilter(
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

  if ( (byte_4D2CF8F & 1) == 0 )
  {
    sub_1C93AD4(&FilterKindList_TypeInfo);
    sub_1C93AD4(&ListViewSort_FilterKind___TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    byte_4D2CF8F = 1;
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
                           (const MethodInfo_3860C5C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                          (const MethodInfo_3860C5C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                           (const MethodInfo_3860C5C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                             (const MethodInfo_3860C5C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
      RarityFilterKindList = (System_Int32Enum_array *)sub_1C93B7C(ListViewSort_FilterKind___TypeInfo, 1);
      if ( RarityFilterKindList )
      {
        if ( !LODWORD(RarityFilterKindList->max_length) )
          sub_1C93D34(RarityFilterKindList);
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
      sub_1C93D2C(RarityFilterKindList, sort);
    }
  }
  return result;
}


void SupportServantEquipListViewItem__ModifyChoiceItem(
        SupportServantEquipListViewItem_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0

  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_1C93D2C(0, method);
  this->fields.isChoice = UserServantEntity__IsChoice(userSvtEntity, 0);
  this->fields.isSwapChoice = 0;
}


void SupportServantEquipListViewItem__ModifyItem(
        SupportServantEquipListViewItem_o *this,
        UserServantEntity_o *userSvtEntity,
        int64_t targetSvtEquipId,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_userSvtEntity; // x22
  int64_t Instance; // x0
  __int64 v13; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v14; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v15; // x23
  __int64 v16; // x24
  __int64 v17; // x25
  Il2CppObject *Entity; // x0
  struct ServantEntity_o **p_servantEntity; // x23
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  ServantLimitMaster_o *v26; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v27; // x8
  int32_t v28; // w22
  __int128 v29; // q1
  int64_t rarity; // x9
  struct ServantEntity_o *servantEntity; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33; // [xsp+20h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16

  if ( (byte_4D2CF8D & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C93AD4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2CF8D = 1;
  }
  this->fields.userSvtEntity = userSvtEntity;
  p_userSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userSvtEntity;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.userSvtEntity,
    (int32_t)userSvtEntity,
    targetSvtEquipId,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantMaster___);
  v14 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_19;
  v15 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v17 = *(_QWORD *)&v14[5].fields.currentCryptoKey;
  v16 = *(_QWORD *)&v14[5].fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v34.fields.currentCryptoKey = v17;
  *(_QWORD *)&v34.fields.fakeValue = v16;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v34, 0);
  if ( !v15 )
    goto LABEL_19;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v15,
             Instance,
             (const MethodInfo_3463274 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)Entity;
  p_servantEntity = &this->fields.servantEntity;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.servantEntity, (int32_t)Entity, v20, v21, v22, v23, v24, v25);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtEntity )
    goto LABEL_19;
  v26 = (ServantLimitMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028((*p_userSvtEntity)[5], 0);
  v27 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_19;
  v28 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v27[6], 0);
  if ( !v26 )
    goto LABEL_19;
  Instance = (int64_t)ServantLimitMaster__GetEntity(v26, v28, Instance, 0);
  if ( !*p_servantEntity )
    goto LABEL_19;
  this->fields.classId = (*p_servantEntity)->fields.classId;
  if ( !Instance )
    goto LABEL_19;
  this->fields.rarity = *(_DWORD *)(Instance + 24);
  if ( !userSvtEntity )
    goto LABEL_19;
  v29 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v33.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v33.fields.fakeValue = v29;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v32 = v33;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(&v32, 0);
  rarity = this->fields.rarity;
  servantEntity = this->fields.servantEntity;
  this->fields.isBase = Instance == targetSvtEquipId;
  this->fields.isOldBase = Instance == targetSvtEquipId;
  this->fields.sortValue1B = rarity;
  if ( !servantEntity )
LABEL_19:
    sub_1C93D2C(Instance, v13);
  this->fields.sortValue2 = servantEntity->fields.collectionNo;
}


void SupportServantEquipListViewItem__ModifyLockItem(SupportServantEquipListViewItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0

  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_1C93D2C(0, method);
  this->fields.isLock = UserServantEntity__IsLock(userSvtEntity, 0);
  this->fields.isSwapLock = 0;
}


bool SupportServantEquipListViewItem__SetSortValue(
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
  int64_t v18; // x20
  IconLabelInfo_o *v19; // x21
  int64_t v20; // x20
  IconLabelInfo_o *v21; // x21
  int32_t v22; // w3
  int32_t v23; // w1
  struct ServantEntity_o *servantEntity; // x8
  int64_t cost; // x2
  int32_t sortIndex; // w20
  struct ListViewManager_o *manager; // x8
  __int64 naturalAligment; // x11
  struct ListViewManager_o *v29; // x20
  int32_t v30; // w8
  int v31; // w8
  bool EventUpVal_43870092; // w0
  struct UserServantEntity_o *userSvtEntity; // x8
  EventCampaignMaster_o *v34; // x21
  __int64 v35; // x22
  __int64 v36; // x23
  bool IsEnableServant; // w0
  System_Collections_Generic_List_EventGroupEntity__o *EntitiesByGroupId; // x21
  System_Func_object__bool__o *v39; // x22
  struct UserServantEntity_o *v40; // x8
  __int64 v41; // x21
  __int64 v42; // x22
  const MethodInfo *v43; // x2
  struct ServantEntity_o *v44; // x8
  __int64 collectionNo; // x10
  SupportServantEquipListViewItem_o *v46; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v48; // [xsp+10h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v49; // [xsp+30h] [xbp-50h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v50; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v51; // 0:x0.16

  v4 = this;
  if ( (byte_4D2CF8E & 1) == 0 )
  {
    sub_1C93AD4(&Method_BasicHelper_Any_EventGroupEntity___);
    sub_1C93AD4(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_EventGroupMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&System_Func_EventGroupEntity__bool__TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventGroupEntity__get_Count__);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C93AD4(&Method_SupportServantEquipListViewItem__SetSortValue_b__29_0__);
    this = (SupportServantEquipListViewItem_o *)sub_1C93AD4(&SupportServantEquipListViewManager_TypeInfo);
    byte_4D2CF8E = 1;
  }
  *(_WORD *)&v4->fields.isTermination = 0;
  v4->fields.sortValue1 = -1;
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
    EventUpVal_43870092 = UserServantEntity__getEventUpVal_43870092(
                            (UserServantEntity_o *)this,
                            -1,
                            0,
                            0,
                            v4->fields.eventSetupInfo,
                            bonusKind2Id,
                            0,
                            0);
    isEventUpVal = EventUpVal_43870092;
    v4->fields.isEventUpVal = EventUpVal_43870092;
LABEL_62:
    if ( !isEventUpVal || v4->fields.isInvalidRarity )
      goto LABEL_84;
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
        goto LABEL_73;
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
    this = (SupportServantEquipListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_EventCampaignMaster___);
    userSvtEntity = v4->fields.userSvtEntity;
    if ( !userSvtEntity )
      goto LABEL_96;
    v34 = (EventCampaignMaster_o *)this;
    v36 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
    v35 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v50.fields.currentCryptoKey = v36;
    *(_QWORD *)&v50.fields.fakeValue = v35;
    this = (SupportServantEquipListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(
                                                  v50,
                                                  0);
    if ( !v34 )
      goto LABEL_96;
    IsEnableServant = EventCampaignMaster__IsEnableServant(v34, (int32_t)this, v4->fields.bonusKindId, 0);
    v31 = IsEnableServant;
    v4->fields.isEventUpVal = IsEnableServant;
LABEL_73:
    if ( !v31 )
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
  this = (SupportServantEquipListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_EventGroupMaster___);
  if ( !this )
LABEL_96:
    sub_1C93D2C(this, sort);
  EntitiesByGroupId = EventGroupMaster__GetEntitiesByGroupId((EventGroupMaster_o *)this, v4->fields.bonusKindId, 0);
  this = (SupportServantEquipListViewItem_o *)BasicHelper__IsNullOrEmpty(
                                                (System_Collections_ICollection_o *)EntitiesByGroupId,
                                                0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( !EntitiesByGroupId )
      goto LABEL_96;
    if ( EntitiesByGroupId->fields._size >= 2 )
    {
      v39 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_EventGroupEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v39,
        (Il2CppObject *)v4,
        Method_SupportServantEquipListViewItem__SetSortValue_b__29_0__,
        0);
      v4->fields.isEventUpVal = BasicHelper__Any_object_(
                                  (System_Collections_Generic_List_T__o *)EntitiesByGroupId,
                                  (System_Func_T__bool__o *)v39,
                                  (const MethodInfo_318DB78 *)Method_BasicHelper_Any_EventGroupEntity___);
    }
  }
LABEL_83:
  if ( !v4->fields.isEventUpVal )
    goto LABEL_84;
LABEL_6:
  if ( (((__int64 (__fastcall *)(SupportServantEquipListViewItem_o *, ListViewSort_o *, const MethodInfo *))v4->klass->vtable._5_IsMatchFilter.methodPtr)(
          v4,
          sort,
          v4->klass->vtable._5_IsMatchFilter.method)
      & 1) == 0 )
  {
LABEL_84:
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
  this = (SupportServantEquipListViewItem_o *)v4->fields.iconLabelInfo2;
  if ( !this )
    goto LABEL_96;
  IconLabelInfo__Clear((IconLabelInfo_o *)this, 0);
  this = (SupportServantEquipListViewItem_o *)(&dword_0 + 1);
  switch ( sort->fields.sortKind )
  {
    case 1:
      v10 = v4->fields.userSvtEntity;
      if ( !v10 )
        goto LABEL_96;
      v11 = *(_OWORD *)&v10->fields.id.fields.fakeValue;
      *(_OWORD *)&v49.fields.currentCryptoKey = *(_OWORD *)&v10->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v49.fields.fakeValue = v11;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v48 = v49;
      this = (SupportServantEquipListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(
                                                    &v48,
                                                    0);
      v12 = v4->fields.userSvtEntity;
      v4->fields.sortValue1 = (int64_t)this;
      if ( !v12 )
        goto LABEL_96;
      this = (SupportServantEquipListViewItem_o *)v4->fields.iconLabelInfo1;
      if ( !this )
        goto LABEL_96;
      IconLabelInfo__SetTime((IconLabelInfo_o *)this, 49, v12->fields.createdAt, 0, 0, 0, 0);
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
      v18 = *((int *)this + 64);
      v19 = v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = v18;
      this = (SupportServantEquipListViewItem_o *)UserServantEntity__getLevelMax((UserServantEntity_o *)this, 0);
      if ( !v19 )
        goto LABEL_96;
      IconLabelInfo__Set_41636824(v19, 2, v18, (int32_t)this, 0, 0, 0, 0, 0, 0);
      goto LABEL_51;
    case 5:
      this = (SupportServantEquipListViewItem_o *)v4->fields.userSvtEntity;
      if ( !this )
        goto LABEL_96;
      v20 = *((int *)this + 67);
      v21 = v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = v20;
      this = (SupportServantEquipListViewItem_o *)UserServantEntity__get_HpBoostValue((UserServantEntity_o *)this, 0);
      if ( !v21 )
        goto LABEL_96;
      v22 = (int)this;
      v23 = 3;
      goto LABEL_42;
    case 6:
      this = (SupportServantEquipListViewItem_o *)v4->fields.userSvtEntity;
      if ( !this )
        goto LABEL_96;
      v20 = *((int *)this + 66);
      v21 = v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = v20;
      this = (SupportServantEquipListViewItem_o *)UserServantEntity__get_AtkBoostValue((UserServantEntity_o *)this, 0);
      if ( !v21 )
        goto LABEL_96;
      v22 = (int)this;
      v23 = 5;
LABEL_42:
      IconLabelInfo__Set_41636824(v21, v23, v20, v22, 0, 0, 0, 0, 0, 0);
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
      IconLabelInfo__Set_41636824((IconLabelInfo_o *)this, 7, cost, 0, 0, 0, 0, 0, 0, 0);
LABEL_46:
      this = (SupportServantEquipListViewItem_o *)v4->fields.userSvtEntity;
      if ( !this )
        goto LABEL_96;
      iconLabelInfo1 = v4->fields.iconLabelInfo2;
LABEL_48:
      sortIndex = *((_DWORD *)this + 64);
      break;
    case 0xE:
      this = (SupportServantEquipListViewItem_o *)v4->fields.amountSortValue;
      if ( ((unsigned __int64)this & 0x8000000000000000LL) == 0 )
        goto LABEL_93;
      manager = sort->fields.manager;
      if ( manager
        && (naturalAligment = SupportServantEquipListViewManager_TypeInfo->_2.naturalAligment,
            manager->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
      {
        if ( (SupportServantEquipListViewManager_c *)manager->klass->_2.typeHierarchy[naturalAligment - 1] == SupportServantEquipListViewManager_TypeInfo )
          v29 = sort->fields.manager;
        else
          v29 = 0;
      }
      else
      {
        v29 = 0;
      }
      v40 = v4->fields.userSvtEntity;
      if ( !v40 )
        goto LABEL_96;
      v42 = *(_QWORD *)&v40->fields.svtId.fields.currentCryptoKey;
      v41 = *(_QWORD *)&v40->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v51.fields.currentCryptoKey = v42;
      *(_QWORD *)&v51.fields.fakeValue = v41;
      this = (SupportServantEquipListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(
                                                    v51,
                                                    0);
      if ( !v29 )
        goto LABEL_96;
      this = (SupportServantEquipListViewItem_o *)SupportServantEquipListViewManager__GetAmountSortValue(
                                                    (SupportServantEquipListViewManager_o *)v29,
                                                    (int32_t)this,
                                                    v43);
      v4->fields.amountSortValue = (int64_t)this;
LABEL_93:
      v44 = v4->fields.servantEntity;
      if ( !v44 )
        goto LABEL_96;
      collectionNo = v44->fields.collectionNo;
      v46 = (SupportServantEquipListViewItem_o *)v4->fields.userSvtEntity;
      v4->fields.sortValue1 = (((unsigned __int64)(unsigned int)v4->fields.rarity << 32) + ((_QWORD)this << 48))
                            | collectionNo;
      if ( !v46 )
        goto LABEL_96;
      iconLabelInfo1 = v4->fields.iconLabelInfo1;
      sortIndex = v46[1].fields.sortIndex;
      this = v46;
      break;
    default:
      return (char)this;
  }
  this = (SupportServantEquipListViewItem_o *)UserServantEntity__getLevelMax((UserServantEntity_o *)this, 0);
  if ( !iconLabelInfo1 )
    goto LABEL_96;
  IconLabelInfo__Set_41636824(iconLabelInfo1, 2, sortIndex, (int32_t)this, 0, 0, 0, 0, 0, 0);
LABEL_51:
  LOBYTE(this) = 1;
  return (char)this;
}


void SupportServantEquipListViewItem__SetUseServantId(
        SupportServantEquipListViewItem_o *this,
        SupportServantData_array *supportServantData,
        int32_t nowDeckId,
        const MethodInfo *method)
{
  SupportServantEquipListViewItem_o *v6; // x19
  unsigned int v7; // w22
  Il2CppClass **v8; // x23
  Il2CppClass *v9; // x8
  SupportServantEquipListViewItem_o **v10; // x23
  Il2CppClass *v11; // t1
  __int64 v12; // x24
  int32_t v13; // w21
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v15; // q1
  SupportServantEquipListViewItem_o *v16; // x27
  const MethodInfo *v17; // x2
  int64_t Servant; // x20
  void *monitor; // x20
  Il2CppClass *klass; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v21; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v22; // [xsp+20h] [xbp-80h]
  Il2CppObject *entity; // [xsp+48h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16

  v6 = this;
  if ( (byte_4D2CF90 & 1) == 0 )
  {
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (SupportServantEquipListViewItem_o *)sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4D2CF90 = 1;
  }
  entity = 0;
  if ( !supportServantData )
    goto LABEL_28;
  v7 = nowDeckId - 1;
  if ( (unsigned int)(nowDeckId - 1) >= LODWORD(supportServantData->max_length) )
    goto LABEL_29;
  v8 = &supportServantData->obj.klass + (int)v7;
  v11 = v8[4];
  v10 = (SupportServantEquipListViewItem_o **)(v8 + 4);
  v9 = v11;
  if ( !v11 )
    goto LABEL_28;
  v12 = *(_QWORD *)&v9->_1.byval_arg.bits;
  v13 = 0;
  v6->fields.useServantId = 0;
  while ( 1 )
  {
    this = (SupportServantEquipListViewItem_o *)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      this = (SupportServantEquipListViewItem_o *)BalanceConfig_TypeInfo;
    }
    if ( v13 >= *(_DWORD *)(this->fields.amountSortValue + 180) )
      return;
    if ( !v12 )
      goto LABEL_28;
    if ( (unsigned int)v13 >= *(_DWORD *)(v12 + 24) )
      goto LABEL_29;
    userSvtEntity = v6->fields.userSvtEntity;
    if ( !userSvtEntity )
      goto LABEL_28;
    v15 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
    v16 = *(SupportServantEquipListViewItem_o **)(v12 + 8LL * v13 + 32);
    *(_OWORD *)&v22.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v22.fields.fakeValue = v15;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v21 = v22;
    this = (SupportServantEquipListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(
                                                  &v21,
                                                  0);
    if ( v16 == this )
      break;
    ++v13;
  }
  if ( v7 >= LODWORD(supportServantData->max_length) )
LABEL_29:
    sub_1C93D34(this);
  this = *v10;
  if ( !*v10 )
    goto LABEL_28;
  Servant = SupportServantData__getServant((SupportServantData_o *)this, v13, v17);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (SupportServantEquipListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !this )
    goto LABEL_28;
  this = (SupportServantEquipListViewItem_o *)DataMasterBase_object__object__long___TryGetEntity(
                                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                &entity,
                                                Servant,
                                                (const MethodInfo_3465A70 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
  if ( ((unsigned __int8)this & 1) == 0 )
    return;
  if ( !entity )
LABEL_28:
    sub_1C93D2C(this, supportServantData);
  klass = entity[5].klass;
  monitor = entity[5].monitor;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v24.fields.currentCryptoKey = klass;
  *(_QWORD *)&v24.fields.fakeValue = monitor;
  v6->fields.useServantId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v24, 0);
}


bool SupportServantEquipListViewItem__SwapChoice(SupportServantEquipListViewItem_o *this, const MethodInfo *method)
{
  bool v2; // w8

  v2 = !this->fields.isSwapChoice;
  this->fields.isSwapChoice ^= 1u;
  return v2;
}


bool SupportServantEquipListViewItem__SwapLock(SupportServantEquipListViewItem_o *this, const MethodInfo *method)
{
  bool v2; // w8

  v2 = !this->fields.isSwapLock;
  this->fields.isSwapLock ^= 1u;
  return v2;
}


bool SupportServantEquipListViewItem___SetSortValue_b__29_0(
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
  bool EventUpVal_43870092; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_4D2CF91 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4D2CF91 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (EventCampaignMaster_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_EventCampaignMaster___);
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
  Master_object = (EventCampaignMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v13, 0);
  if ( !entity || !v8 )
    goto LABEL_16;
  if ( EventCampaignMaster__IsEnableServant(v8, (int32_t)Master_object, entity->fields.eventId, 0) )
    return 1;
  Master_object = (EventCampaignMaster_o *)this->fields.userSvtEntity;
  if ( !Master_object )
LABEL_16:
    sub_1C93D2C(Master_object, v6);
  EventUpVal_43870092 = UserServantEntity__getEventUpVal_43870092(
                          (UserServantEntity_o *)Master_object,
                          -1,
                          0,
                          0,
                          this->fields.eventSetupInfo,
                          entity->fields.eventId,
                          0,
                          0);
  result = 0;
  if ( EventUpVal_43870092 )
    return !this->fields.isInvalidRarity;
  return result;
}


IconLabelInfo_o *SupportServantEquipListViewItem__get_IconInfo1(
        SupportServantEquipListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.iconLabelInfo1;
}


IconLabelInfo_o *SupportServantEquipListViewItem__get_IconInfo2(
        SupportServantEquipListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.iconLabelInfo2;
}


bool SupportServantEquipListViewItem__get_IsBase(SupportServantEquipListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isBase;
}


bool SupportServantEquipListViewItem__get_IsCanNotSelect(
        SupportServantEquipListViewItem_o *this,
        const MethodInfo *method)
{
  return !this->fields.isBase && this->fields.isUse;
}


bool SupportServantEquipListViewItem__get_IsChocolateSvtEquip(
        SupportServantEquipListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isChocolateSvtEquip;
}


bool SupportServantEquipListViewItem__get_IsChoice(SupportServantEquipListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isChoice;
}


bool SupportServantEquipListViewItem__get_IsDispChoice(
        SupportServantEquipListViewItem_o *this,
        const MethodInfo *method)
{
  if ( this->fields.isSwapChoice )
    return !this->fields.isChoice;
  else
    return this->fields.isChoice;
}


bool SupportServantEquipListViewItem__get_IsDispLock(SupportServantEquipListViewItem_o *this, const MethodInfo *method)
{
  if ( this->fields.isSwapLock )
    return !this->fields.isLock;
  else
    return this->fields.isLock;
}


bool SupportServantEquipListViewItem__get_IsFriendShipSvtEq(
        SupportServantEquipListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isFriendShipSvtEq;
}


bool SupportServantEquipListViewItem__get_IsInvalidRarity(
        SupportServantEquipListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isInvalidRarity;
}


bool SupportServantEquipListViewItem__get_IsLock(SupportServantEquipListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isLock;
}


bool SupportServantEquipListViewItem__get_IsSwapChoice(
        SupportServantEquipListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isSwapChoice;
}


bool SupportServantEquipListViewItem__get_IsSwapLock(SupportServantEquipListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isSwapLock;
}


bool SupportServantEquipListViewItem__get_IsUse(SupportServantEquipListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isUse;
}


ServantEntity_o *SupportServantEquipListViewItem__get_Servant(
        SupportServantEquipListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.servantEntity;
}


int32_t SupportServantEquipListViewItem__get_UseServantId(
        SupportServantEquipListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.useServantId;
}


UserServantEntity_o *SupportServantEquipListViewItem__get_UserServant(
        SupportServantEquipListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.userSvtEntity;
}


void SupportServantEquipListViewItem__set_IsBase(
        SupportServantEquipListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields.isBase = value;
}