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
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  IconLabelInfo_o *v36; // x28
  struct IconLabelInfo_o **p_iconLabelInfo2; // x21
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  struct UserServantEntity_o **p_equippedUserSvtEntity; // x23
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_userSvtEntity; // x22
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  int64_t Instance; // x0
  __int64 v65; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v66; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v67; // x27
  __int64 v68; // x28
  __int64 v69; // x29
  Il2CppObject *Entity; // x0
  struct ServantEntity_o **p_servantEntity; // x27
  int64_t v72; // x2
  int32_t v73; // w3
  System_String_o *v74; // x4
  BattleSetupInfo_o *v75; // x5
  FollowerInfo_o *v76; // x6
  PartyListViewItem_o *v77; // x7
  ServantLimitMaster_o *v78; // x28
  int32_t v79; // w29
  __int128 v80; // q1
  __int128 v81; // q0
  unsigned int v82; // w26
  __int128 v83; // q0
  int64_t v84; // x0
  __int64 v85; // x8
  UserServantEntity_o *v86; // x8
  struct ServantEntity_o *servantEntity; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v88; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v89; // q0
  UserServantEntity_o *v90; // x8
  bool IsChocolateSvtEquip; // w0
  struct UserServantEntity_o *v92; // x8
  __int64 v93; // x24
  __int64 v94; // x25
  struct UserServantEntity_o *v95; // x8
  PartyOrganizationUtility_o *v96; // x24
  __int64 v97; // x25
  __int64 v98; // x26
  UserServantEntity_o *v99; // x8
  int32_t v100; // w23
  int32_t Rarity; // w0
  __int64 v102; // x8
  int32_t v103; // w20
  struct System_Int32_array *EquipCategoryIdList; // x0
  PartyOrganizationUtility_o *p_categoryIdList; // x19
  int64_t v106; // x2
  int32_t v107; // w3
  System_String_o *v108; // x4
  BattleSetupInfo_o *v109; // x5
  FollowerInfo_o *v110; // x6
  PartyListViewItem_o *v111; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v113; // [xsp+10h] [xbp-110h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v114; // [xsp+30h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v115; // [xsp+50h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v116; // [xsp+70h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v117; // [xsp+90h] [xbp-90h]
  int32_t actMaxRarity; // [xsp+B4h] [xbp-6Ch] BYREF
  System_String_o *skillName; // [xsp+B8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v120; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v121; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v122; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v123; // 0:x0.16

  if ( (byte_4BB1042 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMasterData_ServantLimitMaster___, *(_QWORD *)&index);
    sub_1C13D24(&Method_DataManager_GetMasterData_ServantMaster___, v22);
    sub_1C13D24(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v23);
    sub_1C13D24(&IconLabelInfo_TypeInfo, v24);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v25);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v26);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v27);
    sub_1C13D24(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v28);
    byte_4BB1042 = 1;
  }
  skillName = 0LL;
  actMaxRarity = 0;
  v29 = (IconLabelInfo_o *)sub_1C13F70(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v29, 0LL);
  this->fields.iconLabelInfo1 = v29;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.iconLabelInfo1, (int64_t)v29, v30, v31, v32, v33, v34, v35);
  v36 = (IconLabelInfo_o *)sub_1C13F70(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v36, 0LL);
  this->fields.iconLabelInfo2 = v36;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.iconLabelInfo2, (int64_t)v36, v38, v39, v40, v41, v42, v43);
  ListViewItem___ctor_41884928((ListViewItem_o *)this, index, 0LL);
  this->fields.eventSetupInfo = eventSetupInfo;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.eventSetupInfo,
    (int64_t)eventSetupInfo,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
  this->fields.equippedUserSvtEntity = equippedUserSvtEntity;
  p_equippedUserSvtEntity = &this->fields.equippedUserSvtEntity;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.equippedUserSvtEntity,
    (int64_t)equippedUserSvtEntity,
    v51,
    v52,
    v53,
    v54,
    v55,
    v56);
  this->fields.userSvtEntity = userSvtEntity;
  p_userSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userSvtEntity;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.userSvtEntity,
    (int64_t)userSvtEntity,
    v58,
    v59,
    v60,
    v61,
    v62,
    v63);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_54;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_ServantMaster___);
  v66 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_54;
  v67 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v69 = *(_QWORD *)&v66[5].fields.currentCryptoKey;
  v68 = *(_QWORD *)&v66[5].fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v120.fields.currentCryptoKey = v69;
  *(_QWORD *)&v120.fields.fakeValue = v68;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v120, 0LL);
  if ( !v67 )
    goto LABEL_54;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v67,
             Instance,
             (const MethodInfo_3238624 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)Entity;
  p_servantEntity = &this->fields.servantEntity;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.servantEntity, (int64_t)Entity, v72, v73, v74, v75, v76, v77);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_54;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtEntity )
    goto LABEL_54;
  v78 = (ServantLimitMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608((*p_userSvtEntity)[5], 0LL);
  if ( !*p_userSvtEntity )
    goto LABEL_54;
  v79 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608((*p_userSvtEntity)[6], 0LL);
  if ( !v78 )
    goto LABEL_54;
  Instance = (int64_t)ServantLimitMaster__GetEntity(v78, v79, Instance, 0LL);
  if ( !*p_servantEntity )
    goto LABEL_54;
  this->fields.classId = (*p_servantEntity)->fields.classId;
  if ( !Instance )
    goto LABEL_54;
  this->fields.rarity = *(_DWORD *)(Instance + 24);
  if ( !userSvtEntity )
    goto LABEL_54;
  v80 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v117.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v117.fields.fakeValue = v80;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v116 = v117;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47494132(&v116, 0LL) == targetSvtEquipId )
  {
    *(_WORD *)&this->fields.isBase = 1;
  }
  else
  {
    *(_WORD *)&this->fields.isBase = 0;
    v81 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
    *(_OWORD *)&v117.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v117.fields.fakeValue = v81;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v115 = v117;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47494132(&v115, 0LL);
    if ( Instance != oldTargetSvtEquipId )
    {
      if ( !useSvtEquipList )
        goto LABEL_54;
      if ( (int)useSvtEquipList->max_length >= 1 )
      {
        v82 = 0;
        while ( 1 )
        {
          v83 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
          *(_OWORD *)&v117.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v117.fields.fakeValue = v83;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v114 = v117;
          v84 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47494132(&v114, 0LL);
          v85 = *(_QWORD *)&useSvtEquipList->max_length;
          if ( v82 >= (unsigned int)v85 )
            sub_1C13F88(v84, v65);
          if ( v84 == useSvtEquipList->m_Items[v82] )
            break;
          if ( (int)++v82 >= (int)v85 )
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
  v86 = this->fields.userSvtEntity;
  this->fields.isLock = Instance & 1;
  if ( !v86 )
    goto LABEL_54;
  Instance = UserServantEntity__IsChoice(v86, 0LL);
  servantEntity = this->fields.servantEntity;
  this->fields.isChoice = Instance & 1;
  *(_QWORD *)&this->fields.bonusKind = 1LL;
  this->fields.isEventUpVal = 0;
  if ( !servantEntity )
    goto LABEL_54;
  v88 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_54;
  this->fields.sortValue2 = ((__int64)servantEntity->fields.collectionNo << 16) | ((unsigned __int64)(unsigned int)this->fields.rarity << 48) | v88[16].fields.currentCryptoKey;
  v89 = v88[2];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v117.fields.currentCryptoKey = v88[1];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v117.fields.fakeValue = v89;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v113 = v117;
  this->fields.sortValue2B = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47494132(&v113, 0LL);
  this->fields.amountSortValue = -1LL;
  *(_WORD *)&this->fields.isSwapLock = 0;
  Instance = (int64_t)this->fields.userSvtEntity;
  if ( !Instance )
    goto LABEL_54;
  Instance = UserServantEntity__IsFriendShipSvtEquip((UserServantEntity_o *)Instance, 0LL);
  v90 = this->fields.userSvtEntity;
  this->fields.isFriendShipSvtEq = Instance & 1;
  if ( !v90 )
    goto LABEL_54;
  IsChocolateSvtEquip = UserServantEntity__IsChocolateSvtEquip(v90, 0LL);
  v92 = this->fields.equippedUserSvtEntity;
  this->fields.isChocolateSvtEquip = IsChocolateSvtEquip;
  if ( v92 )
  {
    v94 = *(_QWORD *)&v92->fields.svtId.fields.currentCryptoKey;
    v93 = *(_QWORD *)&v92->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v121.fields.currentCryptoKey = v94;
    *(_QWORD *)&v121.fields.fakeValue = v93;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v121, 0LL) >= 1 )
    {
      Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_386A7A8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      v95 = *p_equippedUserSvtEntity;
      if ( *p_equippedUserSvtEntity )
      {
        v96 = (PartyOrganizationUtility_o *)Instance;
        v98 = *(_QWORD *)&v95->fields.svtId.fields.currentCryptoKey;
        v97 = *(_QWORD *)&v95->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v122.fields.currentCryptoKey = v98;
        *(_QWORD *)&v122.fields.fakeValue = v97;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v122, 0LL);
        v99 = *p_equippedUserSvtEntity;
        if ( *p_equippedUserSvtEntity )
        {
          v100 = Instance;
          Rarity = UserServantEntity__getRarity(v99, 0LL);
          v102 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
          *(_QWORD *)&v123.fields.fakeValue = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
          v103 = Rarity;
          *(_QWORD *)&v123.fields.currentCryptoKey = v102;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v123, 0LL);
          if ( v96 )
          {
            this->fields.isInvalidRarity = PartyOrganizationUtility__IsRarityRestriction(
                                             v96,
                                             &skillName,
                                             &actMaxRarity,
                                             v100,
                                             v103,
                                             Instance,
                                             -1,
                                             0LL);
            goto LABEL_50;
          }
        }
      }
LABEL_54:
      sub_1C13F80(Instance, v65);
    }
  }
LABEL_50:
  Instance = (int64_t)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_54;
  EquipCategoryIdList = UserServantEntity__GetEquipCategoryIdList((UserServantEntity_o *)Instance, 1, 0LL);
  this->fields.categoryIdList = EquipCategoryIdList;
  p_categoryIdList = (PartyOrganizationUtility_o *)&this->fields.categoryIdList;
  sub_1C13CC8(p_categoryIdList, (int64_t)EquipCategoryIdList, v106, v107, v108, v109, v110, v111);
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
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4BB1047 & 1) == 0 )
  {
    sub_1C13D24(&TreasureDvcInfo_TypeInfo, tdInfo);
    byte_4BB1047 = 1;
  }
  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
    return UserServantEntity__getTreasureDeviceInfo(userSvtEntity, tdInfo, -1, -1, 0, 0LL);
  v7 = (TreasureDvcInfo_o *)sub_1C13F70(TreasureDvcInfo_TypeInfo);
  TreasureDvcInfo___ctor(v7, 0LL);
  *tdInfo = v7;
  sub_1C13CC8((PartyOrganizationUtility_o *)tdInfo, (int64_t)v7, v8, v9, v10, v11, v12, v13);
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

  if ( (byte_4BB1045 & 1) == 0 )
  {
    sub_1C13D24(&FilterKindList_TypeInfo, sort);
    sub_1C13D24(&ListViewSort_FilterKind___TypeInfo, v5);
    sub_1C13D24(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v6);
    byte_4BB1045 = 1;
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
                           (const MethodInfo_361448C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                           (const MethodInfo_361448C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                           (const MethodInfo_361448C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                             (const MethodInfo_361448C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
      RarityFilterKindList = (System_Int32Enum_array *)sub_1C13DCC(ListViewSort_FilterKind___TypeInfo, 1LL);
      if ( RarityFilterKindList )
      {
        if ( !RarityFilterKindList->max_length )
          sub_1C13F88(RarityFilterKindList, RarityFilterKindList);
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
      sub_1C13F80(RarityFilterKindList, sort);
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
    sub_1C13F80(0LL, method);
  this->fields.isChoice = UserServantEntity__IsChoice(userSvtEntity, 0LL);
  this->fields.isSwapChoice = 0;
}


void __fastcall SupportServantEquipListViewItem__ModifyItem(
        SupportServantEquipListViewItem_o *this,
        UserServantEntity_o *userSvtEntity,
        int64_t targetSvtEquipId,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_userSvtEntity; // x22
  int64_t Instance; // x0
  __int64 v18; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v19; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v20; // x23
  __int64 v21; // x24
  __int64 v22; // x25
  Il2CppObject *Entity; // x0
  struct ServantEntity_o **p_servantEntity; // x23
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  ServantLimitMaster_o *v31; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v32; // x8
  int32_t v33; // w22
  __int128 v34; // q1
  int64_t rarity; // x9
  struct ServantEntity_o *servantEntity; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v37; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+20h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v39; // 0:x0.16

  if ( (byte_4BB1043 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMasterData_ServantLimitMaster___, userSvtEntity);
    sub_1C13D24(&Method_DataManager_GetMasterData_ServantMaster___, v11);
    sub_1C13D24(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v14);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_4BB1043 = 1;
  }
  this->fields.userSvtEntity = userSvtEntity;
  p_userSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userSvtEntity;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.userSvtEntity,
    (int64_t)userSvtEntity,
    targetSvtEquipId,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_ServantMaster___);
  v19 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_19;
  v20 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v22 = *(_QWORD *)&v19[5].fields.currentCryptoKey;
  v21 = *(_QWORD *)&v19[5].fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v39.fields.currentCryptoKey = v22;
  *(_QWORD *)&v39.fields.fakeValue = v21;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v39, 0LL);
  if ( !v20 )
    goto LABEL_19;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v20,
             Instance,
             (const MethodInfo_3238624 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)Entity;
  p_servantEntity = &this->fields.servantEntity;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.servantEntity, (int64_t)Entity, v25, v26, v27, v28, v29, v30);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtEntity )
    goto LABEL_19;
  v31 = (ServantLimitMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608((*p_userSvtEntity)[5], 0LL);
  v32 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_19;
  v33 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v32[6], 0LL);
  if ( !v31 )
    goto LABEL_19;
  Instance = (int64_t)ServantLimitMaster__GetEntity(v31, v33, Instance, 0LL);
  if ( !*p_servantEntity )
    goto LABEL_19;
  this->fields.classId = (*p_servantEntity)->fields.classId;
  if ( !Instance )
    goto LABEL_19;
  this->fields.rarity = *(_DWORD *)(Instance + 24);
  if ( !userSvtEntity )
    goto LABEL_19;
  v34 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v38.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v38.fields.fakeValue = v34;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v37 = v38;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47494132(&v37, 0LL);
  rarity = this->fields.rarity;
  servantEntity = this->fields.servantEntity;
  this->fields.isBase = Instance == targetSvtEquipId;
  this->fields.isOldBase = Instance == targetSvtEquipId;
  this->fields.sortValue1B = rarity;
  if ( !servantEntity )
LABEL_19:
    sub_1C13F80(Instance, v18);
  this->fields.sortValue2 = servantEntity->fields.collectionNo;
}


void __fastcall SupportServantEquipListViewItem__ModifyLockItem(
        SupportServantEquipListViewItem_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0

  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_1C13F80(0LL, method);
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
  bool EventUpVal_41371212; // w0
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
  if ( (byte_4BB1044 & 1) == 0 )
  {
    sub_1C13D24(&Method_BasicHelper_Any_EventGroupEntity___, sort);
    sub_1C13D24(&Method_DataManager_GetMaster_EventCampaignMaster___, v5);
    sub_1C13D24(&Method_DataManager_GetMaster_EventGroupMaster___, v6);
    sub_1C13D24(&DataManager_TypeInfo, v7);
    sub_1C13D24(&System_Func_EventGroupEntity__bool__TypeInfo, v8);
    sub_1C13D24(&Method_System_Collections_Generic_List_EventGroupEntity__get_Count__, v9);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v11);
    sub_1C13D24(&Method_SupportServantEquipListViewItem__SetSortValue_b__29_0__, v12);
    this = (SupportServantEquipListViewItem_o *)sub_1C13D24(&SupportServantEquipListViewManager_TypeInfo, v13);
    byte_4BB1044 = 1;
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
    EventUpVal_41371212 = UserServantEntity__getEventUpVal_41371212(
                            (UserServantEntity_o *)this,
                            -1,
                            0,
                            0,
                            v4->fields.eventSetupInfo,
                            bonusKind2Id,
                            0,
                            0LL);
    isEventUpVal = EventUpVal_41371212;
    v4->fields.isEventUpVal = EventUpVal_41371212;
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
    this = (SupportServantEquipListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_EventCampaignMaster___);
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
    this = (SupportServantEquipListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(
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
  this = (SupportServantEquipListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_EventGroupMaster___);
  if ( !this )
LABEL_96:
    sub_1C13F80(this, sort);
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
      v49 = (System_Func_object__bool__o *)sub_1C13F70(System_Func_EventGroupEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v49,
        (Il2CppObject *)v4,
        Method_SupportServantEquipListViewItem__SetSortValue_b__29_0__,
        0LL);
      v4->fields.isEventUpVal = BasicHelper__Any_object_(
                                  (System_Collections_Generic_List_T__o *)EntitiesByGroupId,
                                  (System_Func_T__bool__o *)v49,
                                  (const MethodInfo_2F7A3D8 *)Method_BasicHelper_Any_EventGroupEntity___);
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
      this = (SupportServantEquipListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47494132(
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
      IconLabelInfo__Set_39281744(v28, 2, sortValue0_low, (int32_t)this, 0, 0, 0, 0, 0LL);
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
      IconLabelInfo__Set_39281744((IconLabelInfo_o *)this, v32, hp, adjustHp, 0, 0, 0, 0, 0LL);
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
      IconLabelInfo__Set_39281744((IconLabelInfo_o *)this, 7, cost, 0, 0, 0, 0, 0, 0LL);
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
      this = (SupportServantEquipListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(
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
  IconLabelInfo__Set_39281744(iconLabelInfo1, 2, sortValue0, (int32_t)this, 0, 0, 0, 0, 0LL);
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

  if ( (byte_4BB1048 & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_10244/*"Ordinal"*/, method);
    byte_4BB1048 = 1;
  }
  NameText = SupportServantEquipListViewItem__get_NameText(this, method);
  return System_String__Concat_62967944((System_String_o *)StringLiteral_10244/*"Ordinal"*/, NameText, 0LL);
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
  bool EventUpVal_41371212; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_4BB1049 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMaster_EventCampaignMaster___, entity);
    sub_1C13D24(&DataManager_TypeInfo, v5);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    byte_4BB1049 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (EventCampaignMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_EventCampaignMaster___);
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
  Master_object = (EventCampaignMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v15, 0LL);
  if ( !entity || !v10 )
    goto LABEL_16;
  if ( EventCampaignMaster__IsEnableServant(v10, (int32_t)Master_object, entity->fields.eventId, 0LL) )
    return 1;
  Master_object = (EventCampaignMaster_o *)this->fields.userSvtEntity;
  if ( !Master_object )
LABEL_16:
    sub_1C13F80(Master_object, v8);
  EventUpVal_41371212 = UserServantEntity__getEventUpVal_41371212(
                          (UserServantEntity_o *)Master_object,
                          -1,
                          0,
                          0,
                          this->fields.eventSetupInfo,
                          entity->fields.eventId,
                          0,
                          0LL);
  result = 0;
  if ( EventUpVal_41371212 )
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

  if ( (byte_4BB1046 & 1) == 0 )
  {
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    sub_1C13D24(&StringLiteral_19351/*"enumerable"*/, v3);
    byte_4BB1046 = 1;
  }
  servantEntity = this->fields.servantEntity;
  if ( !servantEntity )
    return (System_String_o *)StringLiteral_19351/*"enumerable"*/;
  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
  {
    v7 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.currentCryptoKey;
    v6 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v10.fields.currentCryptoKey = v7;
    *(_QWORD *)&v10.fields.fakeValue = v6;
    v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v10, 0LL);
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