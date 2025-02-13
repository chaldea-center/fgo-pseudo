void __fastcall EquipGraphListViewItem___ctor(
        EquipGraphListViewItem_o *this,
        int32_t index,
        UserServantEntity_o *userSvtEntity,
        int64_t targetSvtEquipId,
        int64_t oldTargetSvtEquipId,
        PartyListViewItem_array *baseDeckItemList,
        PartyListViewItem_o *partyItem,
        EventUpValSetupInfo_o *setupInfo,
        int32_t memberIdx,
        const MethodInfo *method)
{
  IconLabelInfo_o *v16; // x20
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  IconLabelInfo_o *v23; // x27
  struct IconLabelInfo_o **p_iconLabelInfo2; // x20
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_userSvtEntity; // x21
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  int64_t Instance; // x0
  __int64 v45; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v46; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v47; // x26
  __int64 v48; // x27
  __int64 v49; // x28
  Il2CppObject *Entity; // x0
  struct ServantEntity_o **p_servantEntity; // x26
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  ServantLimitMaster_o *v58; // x27
  int32_t v59; // w28
  __int128 v60; // q1
  const MethodInfo *v61; // x5
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  __int128 v68; // q0
  int64_t v69; // x0
  int32_t WeareMember; // w0
  int32_t wearerMember; // w1
  struct System_String_o *ServantName; // x0
  int64_t v73; // x2
  int32_t v74; // w3
  System_String_o *v75; // x4
  BattleSetupInfo_o *v76; // x5
  FollowerInfo_o *v77; // x6
  PartyListViewItem_o *v78; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  UserServantEntity_o *v80; // x8
  UserServantEntity_o *v81; // x8
  bool IsChoice; // w8
  UserServantEntity_o *v83; // x8
  struct EventUpValSetupInfo_o *v84; // x8
  int32_t EventId; // w23
  PartyOrganizationListViewItem_o *Member; // x24
  struct UserServantEntity_o *userServantEntity; // x8
  PartyOrganizationUtility_o *v88; // x22
  __int64 v89; // x25
  __int64 v90; // x26
  UserServantEntity_o *v91; // x8
  int32_t v92; // w24
  int32_t v93; // w25
  struct ServantEntity_o *servantEntity; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v95; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v96; // q0
  int64_t v97; // x8
  struct System_Int32_array *EquipCategoryIdList; // x0
  PartyOrganizationUtility_o *p_categoryIdList; // x19
  int64_t v100; // x2
  int32_t v101; // w3
  System_String_o *v102; // x4
  BattleSetupInfo_o *v103; // x5
  FollowerInfo_o *v104; // x6
  PartyListViewItem_o *v105; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v107; // [xsp+10h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v108; // [xsp+30h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v109; // [xsp+50h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v110; // [xsp+70h] [xbp-A0h]
  int32_t actMaxRarity; // [xsp+9Ch] [xbp-74h] BYREF
  System_String_o *skillName; // [xsp+A0h] [xbp-70h] BYREF
  PartyOrganizationListViewItem_o *equippedMemberItem; // [xsp+A8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v114; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v115; // 0:x0.16

  if ( (byte_4BDBCE6 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C21E38(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C21E38(&IconLabelInfo_TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4BDBCE6 = 1;
  }
  skillName = 0LL;
  equippedMemberItem = 0LL;
  actMaxRarity = 0;
  v16 = (IconLabelInfo_o *)sub_1C22084(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v16, 0LL);
  this->fields.iconLabelInfo1 = v16;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.iconLabelInfo1, (int64_t)v16, v17, v18, v19, v20, v21, v22);
  v23 = (IconLabelInfo_o *)sub_1C22084(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v23, 0LL);
  this->fields.iconLabelInfo2 = v23;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.iconLabelInfo2, (int64_t)v23, v25, v26, v27, v28, v29, v30);
  ListViewItem___ctor_41996612((ListViewItem_o *)this, index, 0LL);
  this->fields.userSvtEntity = userSvtEntity;
  p_userSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userSvtEntity;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.userSvtEntity,
    (int64_t)userSvtEntity,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  this->fields.setupInfo = setupInfo;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.setupInfo, (int64_t)setupInfo, v38, v39, v40, v41, v42, v43);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_58;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantMaster___);
  v46 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_58;
  v47 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v49 = *(_QWORD *)&v46[5].fields.currentCryptoKey;
  v48 = *(_QWORD *)&v46[5].fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v114.fields.currentCryptoKey = v49;
  *(_QWORD *)&v114.fields.fakeValue = v48;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v114, 0LL);
  if ( !v47 )
    goto LABEL_58;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v47,
             Instance,
             (const MethodInfo_325BDC8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)Entity;
  p_servantEntity = &this->fields.servantEntity;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.servantEntity, (int64_t)Entity, v52, v53, v54, v55, v56, v57);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_58;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtEntity )
    goto LABEL_58;
  v58 = (ServantLimitMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364((*p_userSvtEntity)[5], 0LL);
  if ( !*p_userSvtEntity )
    goto LABEL_58;
  v59 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364((*p_userSvtEntity)[6], 0LL);
  if ( !v58 )
    goto LABEL_58;
  Instance = (int64_t)ServantLimitMaster__GetEntity(v58, v59, Instance, 0LL);
  if ( !*p_servantEntity )
    goto LABEL_58;
  this->fields.classId = (*p_servantEntity)->fields.classId;
  if ( !Instance )
    goto LABEL_58;
  this->fields.rarity = *(_DWORD *)(Instance + 24);
  if ( !userSvtEntity )
    goto LABEL_58;
  v60 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v110.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v110.fields.fakeValue = v60;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v109 = v110;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47624888(&v109, 0LL);
  this->fields.isOldBase = Instance == targetSvtEquipId;
  this->fields.isBase = Instance == targetSvtEquipId;
  equippedMemberItem = 0LL;
  this->fields._OrganizedWave_k__BackingField = 0;
  this->fields._UniqueOrganizedWave_k__BackingField = 0;
  this->fields._IsUnique_k__BackingField = 0;
  if ( !partyItem )
    goto LABEL_58;
  if ( partyItem->fields.menuKind == 9 )
  {
    EquipGraphListViewItem__SetWaveBattleInfo(this, &equippedMemberItem, baseDeckItemList, partyItem, memberIdx, v61);
  }
  else
  {
    v68 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
    *(_OWORD *)&v110.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v110.fields.fakeValue = v68;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v108 = v110;
    v69 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47624888(&v108, 0LL);
    WeareMember = PartyListViewItem__GetWeareMember(partyItem, v69, 0LL);
    this->fields.wearerMember = WeareMember;
    if ( (WeareMember & 0x80000000) == 0 )
      equippedMemberItem = PartyListViewItem__GetMember(partyItem, WeareMember, 0LL);
  }
  wearerMember = this->fields.wearerMember;
  if ( (wearerMember & 0x80000000) != 0 )
  {
    this->fields.wearerServantName = 0LL;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.wearerServantName, 0LL, v62, v63, v64, v65, v66, v67);
    Instance = 0LL;
    *(_QWORD *)&this->fields.weareClassId = 0LL;
  }
  else
  {
    Instance = (int64_t)equippedMemberItem;
    if ( !equippedMemberItem )
    {
      Instance = (int64_t)PartyListViewItem__GetMember(partyItem, wearerMember, 0LL);
      equippedMemberItem = (PartyOrganizationListViewItem_o *)Instance;
      if ( !Instance )
        goto LABEL_58;
    }
    ServantName = PartyOrganizationListViewItem__get_ServantName((PartyOrganizationListViewItem_o *)Instance, 0LL);
    this->fields.wearerServantName = ServantName;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&this->fields.wearerServantName,
      (int64_t)ServantName,
      v73,
      v74,
      v75,
      v76,
      v77,
      v78);
    Instance = (int64_t)equippedMemberItem;
    if ( !equippedMemberItem )
      goto LABEL_58;
    this->fields.weareClassId = equippedMemberItem->fields.classId;
    SvtId = PartyOrganizationListViewItem__get_SvtId((PartyOrganizationListViewItem_o *)Instance, 0LL);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(SvtId, 0LL);
    this->fields.wearersSvtId = Instance;
    if ( !equippedMemberItem )
      goto LABEL_58;
    Instance = (int64_t)equippedMemberItem->fields.userServantEntity;
    if ( !Instance )
      goto LABEL_58;
    Instance = UserServantEntity__getRarity((UserServantEntity_o *)Instance, 0LL);
  }
  v80 = this->fields.userSvtEntity;
  this->fields.weareRarity = Instance;
  if ( !v80 )
    goto LABEL_58;
  Instance = UserServantEntity__IsLock(v80, 0LL);
  v81 = this->fields.userSvtEntity;
  this->fields.isLock = Instance & 1;
  if ( !v81 )
    goto LABEL_58;
  IsChoice = UserServantEntity__IsChoice(v81, 0LL);
  Instance = (int64_t)this->fields.userSvtEntity;
  this->fields.isChoice = IsChoice;
  *(_WORD *)&this->fields.isSwapLock = 0;
  if ( !Instance )
    goto LABEL_58;
  Instance = UserServantEntity__IsFriendShipSvtEquip((UserServantEntity_o *)Instance, 0LL);
  v83 = this->fields.userSvtEntity;
  this->fields.isFriendShipSvtEq = Instance & 1;
  if ( !v83 )
    goto LABEL_58;
  Instance = UserServantEntity__IsChocolateSvtEquip(v83, 0LL);
  v84 = this->fields.setupInfo;
  this->fields.isChocolateSvtEquip = Instance & 1;
  if ( v84 )
  {
    if ( v84->fields.isQuestStart )
      EventId = EventUpValSetupInfo__get_EventId(v84, 0LL);
    else
      EventId = -1;
    Member = PartyListViewItem__GetMember(partyItem, memberIdx, 0LL);
    Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( Member )
    {
      userServantEntity = Member->fields.userServantEntity;
      if ( userServantEntity )
      {
        v88 = (PartyOrganizationUtility_o *)Instance;
        v90 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
        v89 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v115.fields.currentCryptoKey = v90;
        *(_QWORD *)&v115.fields.fakeValue = v89;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v115, 0LL);
        v91 = Member->fields.userServantEntity;
        if ( v91 )
        {
          v92 = Instance;
          Instance = UserServantEntity__getRarity(v91, 0LL);
          if ( *p_userSvtEntity )
          {
            v93 = Instance;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364((*p_userSvtEntity)[5], 0LL);
            if ( v88 )
            {
              Instance = PartyOrganizationUtility__IsRarityRestriction(
                           v88,
                           &skillName,
                           &actMaxRarity,
                           v92,
                           v93,
                           Instance,
                           EventId,
                           0LL);
              LOBYTE(v84) = Instance & 1;
              goto LABEL_50;
            }
          }
        }
      }
    }
LABEL_58:
    sub_1C22094(Instance, v45);
  }
LABEL_50:
  servantEntity = this->fields.servantEntity;
  this->fields.isInvalidRarity = (char)v84;
  this->fields.isEventUpVal = 0;
  *(_QWORD *)&this->fields.bonusKind = 1LL;
  if ( !servantEntity )
    goto LABEL_58;
  v95 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_58;
  this->fields.sortValue2 = ((__int64)servantEntity->fields.collectionNo << 16) | ((unsigned __int64)(unsigned int)this->fields.rarity << 48) | v95[16].fields.currentCryptoKey;
  v96 = v95[2];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v110.fields.currentCryptoKey = v95[1];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v110.fields.fakeValue = v96;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v107 = v110;
  v97 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47624888(&v107, 0LL);
  Instance = (int64_t)this->fields.userSvtEntity;
  this->fields.sortValue2B = v97;
  this->fields.amountSortValue = -1LL;
  if ( !Instance )
    goto LABEL_58;
  EquipCategoryIdList = UserServantEntity__GetEquipCategoryIdList((UserServantEntity_o *)Instance, 1, 0LL);
  this->fields.categoryIdList = EquipCategoryIdList;
  p_categoryIdList = (PartyOrganizationUtility_o *)&this->fields.categoryIdList;
  sub_1C21DDC(p_categoryIdList, (int64_t)EquipCategoryIdList, v100, v101, v102, v103, v104, v105);
  Instance = (int64_t)p_categoryIdList->monitor;
  if ( !Instance )
    goto LABEL_58;
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0LL);
  Instance = (int64_t)*p_iconLabelInfo2;
  if ( !*p_iconLabelInfo2 )
    goto LABEL_58;
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0LL);
}


void __fastcall EquipGraphListViewItem___ctor_39727992(
        EquipGraphListViewItem_o *this,
        int32_t index,
        UserServantEntity_o *userSvtEntity,
        int64_t targetSvtEquipId,
        int64_t oldTargetSvtEquipId,
        WarBoardPartyListViewItem_o *partyItem,
        EventUpValSetupInfo_o *setupInfo,
        const MethodInfo *method)
{
  IconLabelInfo_o *v14; // x20
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  IconLabelInfo_o *v21; // x26
  struct IconLabelInfo_o **p_iconLabelInfo2; // x20
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_userSvtEntity; // x21
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  int64_t Instance; // x0
  __int64 v43; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v44; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v45; // x25
  __int64 v46; // x26
  __int64 v47; // x27
  Il2CppObject *Entity; // x0
  struct ServantEntity_o **p_servantEntity; // x25
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  ServantLimitMaster_o *v56; // x26
  int32_t v57; // w27
  UserServantEntity_Fields *p_fields; // x24
  __int128 v59; // q0
  __int128 v60; // q1
  bool v61; // w8
  __int128 v62; // q1
  int32_t WeareMember; // w0
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  PartyOrganizationListViewItem_o *v70; // x22
  struct System_String_o *ServantName; // x0
  int64_t v72; // x2
  int32_t v73; // w3
  System_String_o *v74; // x4
  BattleSetupInfo_o *v75; // x5
  FollowerInfo_o *v76; // x6
  PartyListViewItem_o *v77; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  UserServantEntity_o *v79; // x8
  UserServantEntity_o *v80; // x8
  bool IsChoice; // w8
  UserServantEntity_o *v82; // x8
  struct ServantEntity_o *servantEntity; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v84; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v85; // q0
  int64_t v86; // x8
  struct System_Int32_array *EquipCategoryIdList; // x0
  PartyOrganizationUtility_o *p_categoryIdList; // x19
  int64_t v89; // x2
  int32_t v90; // w3
  System_String_o *v91; // x4
  BattleSetupInfo_o *v92; // x5
  FollowerInfo_o *v93; // x6
  PartyListViewItem_o *v94; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v95; // [xsp+0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v96; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v97; // [xsp+40h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v98; // [xsp+60h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v99; // 0:x0.16

  if ( (byte_4BDBCE7 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C21E38(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C21E38(&IconLabelInfo_TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BDBCE7 = 1;
  }
  v14 = (IconLabelInfo_o *)sub_1C22084(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v14, 0LL);
  this->fields.iconLabelInfo1 = v14;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.iconLabelInfo1, (int64_t)v14, v15, v16, v17, v18, v19, v20);
  v21 = (IconLabelInfo_o *)sub_1C22084(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v21, 0LL);
  this->fields.iconLabelInfo2 = v21;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.iconLabelInfo2, (int64_t)v21, v23, v24, v25, v26, v27, v28);
  ListViewItem___ctor_41996612((ListViewItem_o *)this, index, 0LL);
  this->fields.userSvtEntity = userSvtEntity;
  p_userSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userSvtEntity;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.userSvtEntity,
    (int64_t)userSvtEntity,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  this->fields.setupInfo = setupInfo;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.setupInfo, (int64_t)setupInfo, v36, v37, v38, v39, v40, v41);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantMaster___);
  v44 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_37;
  v45 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v47 = *(_QWORD *)&v44[5].fields.currentCryptoKey;
  v46 = *(_QWORD *)&v44[5].fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v99.fields.currentCryptoKey = v47;
  *(_QWORD *)&v99.fields.fakeValue = v46;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v99, 0LL);
  if ( !v45 )
    goto LABEL_37;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v45,
             Instance,
             (const MethodInfo_325BDC8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)Entity;
  p_servantEntity = &this->fields.servantEntity;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.servantEntity, (int64_t)Entity, v50, v51, v52, v53, v54, v55);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtEntity )
    goto LABEL_37;
  v56 = (ServantLimitMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364((*p_userSvtEntity)[5], 0LL);
  if ( !*p_userSvtEntity )
    goto LABEL_37;
  v57 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364((*p_userSvtEntity)[6], 0LL);
  if ( !v56 )
    goto LABEL_37;
  Instance = (int64_t)ServantLimitMaster__GetEntity(v56, v57, Instance, 0LL);
  if ( !*p_servantEntity )
    goto LABEL_37;
  this->fields.classId = (*p_servantEntity)->fields.classId;
  if ( !Instance )
    goto LABEL_37;
  this->fields.rarity = *(_DWORD *)(Instance + 24);
  if ( !userSvtEntity )
    goto LABEL_37;
  v59 = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  v60 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  p_fields = &userSvtEntity->fields;
  *(_OWORD *)&v98.fields.currentCryptoKey = v59;
  *(_OWORD *)&v98.fields.fakeValue = v60;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v97 = v98;
  v61 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47624888(&v97, 0LL) == targetSvtEquipId;
  this->fields.isOldBase = v61;
  this->fields.isBase = v61;
  v62 = *(_OWORD *)&p_fields->id.fields.fakeValue;
  *(_OWORD *)&v96.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v96.fields.fakeValue = v62;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47624888(&v96, 0LL);
  if ( !partyItem )
    goto LABEL_37;
  WeareMember = WarBoardPartyListViewItem__GetWeareMember(partyItem, Instance, 0LL);
  this->fields.wearerMember = WeareMember;
  if ( (WeareMember & 0x80000000) == 0 )
  {
    Instance = (int64_t)WarBoardPartyListViewItem__GetMemberItem(partyItem, WeareMember, 0LL);
    if ( Instance )
    {
      v70 = (PartyOrganizationListViewItem_o *)Instance;
      ServantName = PartyOrganizationListViewItem__get_ServantName((PartyOrganizationListViewItem_o *)Instance, 0LL);
      this->fields.wearerServantName = ServantName;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&this->fields.wearerServantName,
        (int64_t)ServantName,
        v72,
        v73,
        v74,
        v75,
        v76,
        v77);
      this->fields.weareClassId = v70->fields.classId;
      SvtId = PartyOrganizationListViewItem__get_SvtId(v70, 0LL);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      this->fields.wearersSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(SvtId, 0LL);
      Instance = (int64_t)v70->fields.userServantEntity;
      if ( Instance )
      {
        Instance = UserServantEntity__getRarity((UserServantEntity_o *)Instance, 0LL);
        goto LABEL_25;
      }
    }
LABEL_37:
    sub_1C22094(Instance, v43);
  }
  this->fields.wearerServantName = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.wearerServantName, 0LL, v64, v65, v66, v67, v68, v69);
  Instance = 0LL;
  *(_QWORD *)&this->fields.weareClassId = 0LL;
LABEL_25:
  v79 = this->fields.userSvtEntity;
  this->fields.weareRarity = Instance;
  if ( !v79 )
    goto LABEL_37;
  Instance = UserServantEntity__IsLock(v79, 0LL);
  v80 = this->fields.userSvtEntity;
  this->fields.isLock = Instance & 1;
  if ( !v80 )
    goto LABEL_37;
  IsChoice = UserServantEntity__IsChoice(v80, 0LL);
  Instance = (int64_t)this->fields.userSvtEntity;
  this->fields.isChoice = IsChoice;
  *(_WORD *)&this->fields.isSwapLock = 0;
  this->fields.isInvalidRarity = 0;
  if ( !Instance )
    goto LABEL_37;
  Instance = UserServantEntity__IsFriendShipSvtEquip((UserServantEntity_o *)Instance, 0LL);
  v82 = this->fields.userSvtEntity;
  this->fields.isFriendShipSvtEq = Instance & 1;
  if ( !v82 )
    goto LABEL_37;
  Instance = UserServantEntity__IsChocolateSvtEquip(v82, 0LL);
  servantEntity = this->fields.servantEntity;
  this->fields.isChocolateSvtEquip = Instance & 1;
  *(_QWORD *)&this->fields.bonusKind = 1LL;
  this->fields.isEventUpVal = 0;
  if ( !servantEntity )
    goto LABEL_37;
  v84 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_37;
  this->fields.sortValue2 = ((__int64)servantEntity->fields.collectionNo << 16) | ((unsigned __int64)(unsigned int)this->fields.rarity << 48) | v84[16].fields.currentCryptoKey;
  v85 = v84[2];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v98.fields.currentCryptoKey = v84[1];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v98.fields.fakeValue = v85;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v95 = v98;
  v86 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47624888(&v95, 0LL);
  Instance = (int64_t)this->fields.userSvtEntity;
  this->fields.sortValue2B = v86;
  this->fields.amountSortValue = -1LL;
  if ( !Instance )
    goto LABEL_37;
  EquipCategoryIdList = UserServantEntity__GetEquipCategoryIdList((UserServantEntity_o *)Instance, 1, 0LL);
  this->fields.categoryIdList = EquipCategoryIdList;
  p_categoryIdList = (PartyOrganizationUtility_o *)&this->fields.categoryIdList;
  sub_1C21DDC(p_categoryIdList, (int64_t)EquipCategoryIdList, v89, v90, v91, v92, v93, v94);
  Instance = (int64_t)p_categoryIdList->monitor;
  if ( !Instance )
    goto LABEL_37;
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0LL);
  Instance = (int64_t)*p_iconLabelInfo2;
  if ( !*p_iconLabelInfo2 )
    goto LABEL_37;
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0LL);
}


void __fastcall EquipGraphListViewItem__Finalize(EquipGraphListViewItem_o *this, const MethodInfo *method)
{
  ListViewItem__Finalize((ListViewItem_o *)this, 0LL);
}


bool __fastcall EquipGraphListViewItem__GetNpInfo(
        EquipGraphListViewItem_o *this,
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

  if ( (byte_4BDBCEE & 1) == 0 )
  {
    sub_1C21E38(&TreasureDvcInfo_TypeInfo);
    byte_4BDBCEE = 1;
  }
  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
    return UserServantEntity__getTreasureDeviceInfo(userSvtEntity, tdInfo, -1, -1, 0, 0LL);
  v7 = (TreasureDvcInfo_o *)sub_1C22084(TreasureDvcInfo_TypeInfo);
  TreasureDvcInfo___ctor(v7, 0LL);
  *tdInfo = v7;
  sub_1C21DDC((PartyOrganizationUtility_o *)tdInfo, (int64_t)v7, v8, v9, v10, v11, v12, v13);
  return 0;
}


int32_t __fastcall EquipGraphListViewItem__GetWeareMemberCost(EquipGraphListViewItem_o *this, const MethodInfo *method)
{
  struct ServantEntity_o *servantEntity; // x8

  if ( (this->fields.wearerMember & 0x80000000) != 0 )
    return 0;
  servantEntity = this->fields.servantEntity;
  if ( !servantEntity )
    return 0;
  else
    return servantEntity->fields.cost;
}


bool __fastcall EquipGraphListViewItem__IsMatchFilter(
        EquipGraphListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  return this->fields.isBase || EquipGraphListViewItem__IsMatchServantEquipFilter(this, sort, method);
}


bool __fastcall EquipGraphListViewItem__IsMatchServantEquipFilter(
        EquipGraphListViewItem_o *this,
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

  if ( (byte_4BDBCEA & 1) == 0 )
  {
    sub_1C21E38(&FilterKindList_TypeInfo);
    sub_1C21E38(&ListViewSort_FilterKind___TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    byte_4BDBCEA = 1;
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
                           (const MethodInfo_3636374 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                          (const MethodInfo_3636374 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                           (const MethodInfo_3636374 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                             (const MethodInfo_3636374 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
      RarityFilterKindList = (System_Int32Enum_array *)sub_1C21EE0(ListViewSort_FilterKind___TypeInfo, 1LL);
      if ( RarityFilterKindList )
      {
        if ( !RarityFilterKindList->max_length )
          sub_1C2209C(RarityFilterKindList, RarityFilterKindList);
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
      sub_1C22094(RarityFilterKindList, sort);
    }
  }
  return result;
}


bool __fastcall EquipGraphListViewItem__IsWeareMember(
        EquipGraphListViewItem_o *this,
        int32_t member,
        const MethodInfo *method)
{
  return this->fields.wearerMember >= 0 && this->fields.wearerMember != member;
}


void __fastcall EquipGraphListViewItem__Modify(
        EquipGraphListViewItem_o *this,
        UserServantEntity_o *userSvtEntity,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x1

  this->fields.userSvtEntity = userSvtEntity;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.userSvtEntity,
    (int64_t)userSvtEntity,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  EquipGraphListViewItem__ModifyLockItem(this, v9);
  EquipGraphListViewItem__ModifyChoiceItem(this, v10);
}


void __fastcall EquipGraphListViewItem__ModifyChoiceItem(EquipGraphListViewItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0

  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_1C22094(0LL, method);
  this->fields.isChoice = UserServantEntity__IsChoice(userSvtEntity, 0LL);
  this->fields.isSwapChoice = 0;
}


void __fastcall EquipGraphListViewItem__ModifyLockItem(EquipGraphListViewItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0

  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_1C22094(0LL, method);
  this->fields.isLock = UserServantEntity__IsLock(userSvtEntity, 0LL);
  this->fields.isSwapLock = 0;
}


void __fastcall EquipGraphListViewItem__ModifyUserServantEntity(
        EquipGraphListViewItem_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.userSvtEntity = userServantEntity;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.userSvtEntity,
    (int64_t)userServantEntity,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


bool __fastcall EquipGraphListViewItem__SetSortValue(
        EquipGraphListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  EquipGraphListViewItem_o *v4; // x19
  EventUpValSetupInfo_o *setupInfo; // x4
  struct System_Int32_array *servantEquipFilterEventIds; // x8
  _BOOL4 isChoice; // w8
  _BOOL4 isSwapChoice; // w9
  bool v9; // zf
  _BOOL4 v10; // w8
  int v11; // w10
  struct UserServantEntity_o *v12; // x8
  __int128 v13; // q1
  struct UserServantEntity_o *v14; // x8
  int64_t rarity; // x8
  int64_t klass_low; // x20
  IconLabelInfo_o *iconLabelInfo1; // x21
  struct UserServantEntity_o *v18; // x8
  int64_t hp; // x2
  int32_t adjustHp; // w3
  int32_t v21; // w1
  struct UserServantEntity_o *v22; // x8
  IconLabelInfo_o *iconLabelInfo2; // x19
  struct ServantEntity_o *servantEntity; // x8
  int32_t klass; // w20
  struct ListViewManager_o *manager; // x8
  __int64 methodPtr_low; // x11
  struct ListViewManager_o *v28; // x20
  int32_t bonusKind2; // w8
  int32_t v30; // w8
  int32_t bonusKind2Id; // w8
  int32_t v32; // w9
  int32_t v33; // w5
  struct UserServantEntity_o *v34; // x8
  __int64 v35; // x21
  __int64 v36; // x22
  const MethodInfo *v37; // x2
  struct ServantEntity_o *v38; // x8
  __int64 collectionNo; // x10
  struct UserServantEntity_o *v40; // x8
  int isEventUpVal; // w8
  int32_t bonusKindId; // w9
  int32_t v43; // w8
  bool EventUpVal_41479408; // w0
  System_Collections_Generic_List_EventGroupEntity__o *EntitiesByGroupId; // x21
  System_Func_object__bool__o *v46; // x0
  __int64 *v47; // x8
  struct UserServantEntity_o *userSvtEntity; // x8
  EquipGraphListViewItem_o *v49; // x21
  __int64 v50; // x22
  __int64 v51; // x23
  bool IsEnableServant; // w0
  int v53; // w8
  System_Func_T__bool__o *v54; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v56; // [xsp+10h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v57; // [xsp+30h] [xbp-50h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v58; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v59; // 0:x0.16

  v4 = this;
  if ( (byte_4BDBCEB & 1) == 0 )
  {
    sub_1C21E38(&Method_BasicHelper_Any_EventGroupEntity___);
    sub_1C21E38(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_EventGroupMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_EquipGraphListViewItem__SetSortValue_b__58_0__);
    sub_1C21E38(&Method_EquipGraphListViewItem__SetSortValue_b__58_1__);
    sub_1C21E38(&EquipGraphListViewManager_TypeInfo);
    sub_1C21E38(&System_Func_EventGroupEntity__bool__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventGroupEntity__get_Count__);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (EquipGraphListViewItem_o *)sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4BDBCEB = 1;
  }
  setupInfo = v4->fields.setupInfo;
  *(_WORD *)&v4->fields.isTermination = 0;
  v4->fields.sortValue1 = -1LL;
  if ( !setupInfo )
    goto LABEL_8;
  servantEquipFilterEventIds = setupInfo->fields.servantEquipFilterEventIds;
  if ( !servantEquipFilterEventIds
    || !*(_QWORD *)&servantEquipFilterEventIds->max_length
    || v4->fields.isOldBase
    || v4->fields.isBase )
  {
    goto LABEL_8;
  }
  if ( !sort )
    goto LABEL_124;
  if ( !setupInfo->fields.isQuestStart )
  {
    bonusKind2 = sort->fields.bonusKind2;
    if ( (unsigned int)(bonusKind2 - 4) >= 2 )
    {
      if ( bonusKind2 != 3 )
      {
        if ( bonusKind2 )
          goto LABEL_8;
        if ( v4->fields.bonusKind )
        {
          bonusKind2Id = sort->fields.bonusKind2Id;
        }
        else
        {
          bonusKind2Id = sort->fields.bonusKind2Id;
          if ( v4->fields.bonusKindId == bonusKind2Id )
            goto LABEL_120;
        }
        v4->fields.bonusKind = 0;
        v4->fields.bonusKindId = bonusKind2Id;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        this = (EquipGraphListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_EventGroupMaster___);
        if ( !this )
          goto LABEL_124;
        EntitiesByGroupId = EventGroupMaster__GetEntitiesByGroupId(
                              (EventGroupMaster_o *)this,
                              v4->fields.bonusKindId,
                              0LL);
        this = (EquipGraphListViewItem_o *)BasicHelper__IsNullOrEmpty(
                                             (System_Collections_ICollection_o *)EntitiesByGroupId,
                                             0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
          goto LABEL_120;
        if ( !EntitiesByGroupId )
          goto LABEL_124;
        if ( EntitiesByGroupId->fields._size < 2 )
          goto LABEL_120;
        v46 = (System_Func_object__bool__o *)sub_1C22084(System_Func_EventGroupEntity__bool__TypeInfo);
        v47 = &Method_EquipGraphListViewItem__SetSortValue_b__58_1__;
LABEL_119:
        v54 = (System_Func_T__bool__o *)v46;
        System_Func_object__bool____ctor(v46, (Il2CppObject *)v4, *v47, 0LL);
        v4->fields.isEventUpVal = BasicHelper__Any_object_(
                                    (System_Collections_Generic_List_T__o *)EntitiesByGroupId,
                                    v54,
                                    (const MethodInfo_2F9AD70 *)Method_BasicHelper_Any_EventGroupEntity___);
        goto LABEL_120;
      }
      if ( v4->fields.bonusKind != 3 )
      {
        v43 = sort->fields.bonusKind2Id;
        goto LABEL_104;
      }
      bonusKindId = v4->fields.bonusKindId;
      v43 = sort->fields.bonusKind2Id;
      goto LABEL_86;
    }
    if ( v4->fields.bonusKind != bonusKind2 )
    {
      v33 = sort->fields.bonusKind2Id;
      goto LABEL_89;
    }
    v32 = v4->fields.bonusKindId;
    v33 = sort->fields.bonusKind2Id;
    goto LABEL_79;
  }
  bonusKind2 = sort->fields.bonusKind;
  if ( (unsigned int)(bonusKind2 - 4) < 2 )
  {
    if ( v4->fields.bonusKind != bonusKind2 )
    {
      v33 = sort->fields.bonusKindId;
      goto LABEL_89;
    }
    v32 = v4->fields.bonusKindId;
    v33 = sort->fields.bonusKindId;
LABEL_79:
    if ( v32 == v33 )
    {
      isEventUpVal = v4->fields.isEventUpVal;
      goto LABEL_91;
    }
LABEL_89:
    this = (EquipGraphListViewItem_o *)v4->fields.userSvtEntity;
    v4->fields.bonusKind = bonusKind2;
    v4->fields.bonusKindId = v33;
    if ( !this )
      goto LABEL_124;
    EventUpVal_41479408 = UserServantEntity__getEventUpVal_41479408(
                            (UserServantEntity_o *)this,
                            -1,
                            0,
                            0,
                            setupInfo,
                            v33,
                            0,
                            0LL);
    isEventUpVal = EventUpVal_41479408;
    v4->fields.isEventUpVal = EventUpVal_41479408;
LABEL_91:
    if ( !isEventUpVal || v4->fields.isInvalidRarity )
      goto LABEL_122;
    goto LABEL_8;
  }
  if ( bonusKind2 != 3 )
  {
    if ( bonusKind2 )
      goto LABEL_8;
    if ( v4->fields.bonusKind )
    {
      v30 = sort->fields.bonusKindId;
LABEL_96:
      v4->fields.bonusKind = 0;
      v4->fields.bonusKindId = v30;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      this = (EquipGraphListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_EventGroupMaster___);
      if ( !this )
        goto LABEL_124;
      EntitiesByGroupId = EventGroupMaster__GetEntitiesByGroupId(
                            (EventGroupMaster_o *)this,
                            v4->fields.bonusKindId,
                            0LL);
      this = (EquipGraphListViewItem_o *)BasicHelper__IsNullOrEmpty(
                                           (System_Collections_ICollection_o *)EntitiesByGroupId,
                                           0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
        goto LABEL_120;
      if ( !EntitiesByGroupId )
        goto LABEL_124;
      if ( EntitiesByGroupId->fields._size < 2 )
        goto LABEL_120;
      v46 = (System_Func_object__bool__o *)sub_1C22084(System_Func_EventGroupEntity__bool__TypeInfo);
      v47 = &Method_EquipGraphListViewItem__SetSortValue_b__58_0__;
      goto LABEL_119;
    }
    v30 = sort->fields.bonusKindId;
    if ( v4->fields.bonusKindId != v30 )
      goto LABEL_96;
LABEL_120:
    v53 = v4->fields.isEventUpVal;
    goto LABEL_121;
  }
  if ( v4->fields.bonusKind != 3 )
  {
    v43 = sort->fields.bonusKindId;
    goto LABEL_104;
  }
  bonusKindId = v4->fields.bonusKindId;
  v43 = sort->fields.bonusKindId;
LABEL_86:
  if ( bonusKindId == v43 )
    goto LABEL_120;
LABEL_104:
  v4->fields.bonusKind = 3;
  v4->fields.bonusKindId = v43;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (EquipGraphListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_EventCampaignMaster___);
  userSvtEntity = v4->fields.userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_124;
  v49 = this;
  v51 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v50 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v59.fields.currentCryptoKey = v51;
  *(_QWORD *)&v59.fields.fakeValue = v50;
  this = (EquipGraphListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v59, 0LL);
  if ( !v49 )
    goto LABEL_124;
  IsEnableServant = EventCampaignMaster__IsEnableServant(
                      (EventCampaignMaster_o *)v49,
                      (int32_t)this,
                      v4->fields.bonusKindId,
                      0LL);
  v53 = IsEnableServant;
  v4->fields.isEventUpVal = IsEnableServant;
LABEL_121:
  if ( !v53 )
    goto LABEL_122;
LABEL_8:
  this = (EquipGraphListViewItem_o *)((__int64 (__fastcall *)(EquipGraphListViewItem_o *, ListViewSort_o *, void *))v4->klass->vtable._5_IsMatchFilter.method)(
                                       v4,
                                       sort,
                                       v4->klass[1]._1.image);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
LABEL_122:
    LOBYTE(this) = 0;
    return (char)this;
  }
  isChoice = v4->fields.isChoice;
  isSwapChoice = v4->fields.isSwapChoice;
  v4->fields.sortValue0 = 0LL;
  v9 = !isChoice;
  v10 = !isChoice;
  v11 = !v9;
  if ( !isSwapChoice )
    v10 = v11;
  if ( v10 )
  {
    if ( !sort )
      goto LABEL_124;
    if ( sort->fields.isChoiceSort )
      v4->fields.sortValue0 = 10LL;
  }
  this = (EquipGraphListViewItem_o *)v4->fields.iconLabelInfo2;
  if ( !this )
    goto LABEL_124;
  IconLabelInfo__Clear((IconLabelInfo_o *)this, 0LL);
  if ( !sort )
    goto LABEL_124;
  this = (EquipGraphListViewItem_o *)(&dword_0 + 1);
  switch ( sort->fields.sortKind )
  {
    case 1:
      v12 = v4->fields.userSvtEntity;
      if ( !v12 )
        goto LABEL_124;
      v13 = *(_OWORD *)&v12->fields.id.fields.fakeValue;
      *(_OWORD *)&v57.fields.currentCryptoKey = *(_OWORD *)&v12->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v57.fields.fakeValue = v13;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v56 = v57;
      this = (EquipGraphListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47624888(&v56, 0LL);
      v14 = v4->fields.userSvtEntity;
      v4->fields.sortValue1 = (int64_t)this;
      if ( !v14 )
        goto LABEL_124;
      this = (EquipGraphListViewItem_o *)v4->fields.iconLabelInfo1;
      if ( !this )
        goto LABEL_124;
      IconLabelInfo__SetTime((IconLabelInfo_o *)this, 49, v14->fields.createdAt, 0, 0, 0, 0LL);
      goto LABEL_38;
    case 2:
      rarity = v4->fields.rarity;
      goto LABEL_42;
    case 3:
      this = (EquipGraphListViewItem_o *)v4->fields.userSvtEntity;
      if ( !this )
        goto LABEL_124;
      klass_low = SLODWORD(this[1].klass);
      iconLabelInfo1 = v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = klass_low;
      this = (EquipGraphListViewItem_o *)UserServantEntity__getLevelMax((UserServantEntity_o *)this, 0LL);
      if ( !iconLabelInfo1 )
        goto LABEL_124;
      IconLabelInfo__Set_39381772(iconLabelInfo1, 2, klass_low, (int32_t)this, 0, 0, 0, 0, 0LL);
      goto LABEL_47;
    case 5:
      v18 = v4->fields.userSvtEntity;
      if ( !v18 )
        goto LABEL_124;
      hp = v18->fields.hp;
      this = (EquipGraphListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = hp;
      if ( !this )
        goto LABEL_124;
      adjustHp = v18->fields.adjustHp;
      v21 = 3;
      goto LABEL_37;
    case 6:
      v22 = v4->fields.userSvtEntity;
      if ( !v22 )
        goto LABEL_124;
      hp = v22->fields.atk;
      this = (EquipGraphListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = hp;
      if ( !this )
        goto LABEL_124;
      adjustHp = v22->fields.adjustAtk;
      v21 = 5;
LABEL_37:
      IconLabelInfo__Set_39381772((IconLabelInfo_o *)this, v21, hp, adjustHp, 0, 0, 0, 0, 0LL);
LABEL_38:
      this = (EquipGraphListViewItem_o *)v4->fields.userSvtEntity;
      if ( !this )
        goto LABEL_124;
      iconLabelInfo2 = v4->fields.iconLabelInfo2;
      goto LABEL_44;
    case 7:
      servantEntity = v4->fields.servantEntity;
      if ( !servantEntity )
        goto LABEL_124;
      rarity = servantEntity->fields.cost;
LABEL_42:
      this = (EquipGraphListViewItem_o *)v4->fields.userSvtEntity;
      v4->fields.sortValue1 = rarity;
      if ( !this )
        goto LABEL_124;
      iconLabelInfo2 = v4->fields.iconLabelInfo1;
LABEL_44:
      klass = (int32_t)this[1].klass;
      break;
    case 0xE:
      this = (EquipGraphListViewItem_o *)v4->fields.amountSortValue;
      if ( ((unsigned __int64)this & 0x8000000000000000LL) == 0 )
        goto LABEL_74;
      manager = sort->fields.manager;
      if ( manager
        && (methodPtr_low = LOBYTE(EquipGraphListViewManager_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(manager->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
      {
        if ( (EquipGraphListViewManager_c *)manager->klass->_2.typeHierarchy[methodPtr_low - 1] == EquipGraphListViewManager_TypeInfo )
          v28 = sort->fields.manager;
        else
          v28 = 0LL;
      }
      else
      {
        v28 = 0LL;
      }
      v34 = v4->fields.userSvtEntity;
      if ( !v34 )
        goto LABEL_124;
      v36 = *(_QWORD *)&v34->fields.svtId.fields.currentCryptoKey;
      v35 = *(_QWORD *)&v34->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v58.fields.currentCryptoKey = v36;
      *(_QWORD *)&v58.fields.fakeValue = v35;
      this = (EquipGraphListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v58, 0LL);
      if ( !v28 )
        goto LABEL_124;
      this = (EquipGraphListViewItem_o *)EquipGraphListViewManager__GetAmountSortValue(
                                           (EquipGraphListViewManager_o *)v28,
                                           (int32_t)this,
                                           v37);
      v4->fields.amountSortValue = (int64_t)this;
LABEL_74:
      v38 = v4->fields.servantEntity;
      if ( !v38 )
        goto LABEL_124;
      collectionNo = v38->fields.collectionNo;
      v40 = v4->fields.userSvtEntity;
      v4->fields.sortValue1 = ((_QWORD)this << 48) | ((unsigned __int64)(unsigned int)v4->fields.rarity << 32) | collectionNo;
      if ( !v40 )
        goto LABEL_124;
      iconLabelInfo2 = v4->fields.iconLabelInfo1;
      klass = v40->fields.lv;
      this = (EquipGraphListViewItem_o *)v40;
      break;
    default:
      return (char)this;
  }
  this = (EquipGraphListViewItem_o *)UserServantEntity__getLevelMax((UserServantEntity_o *)this, 0LL);
  if ( !iconLabelInfo2 )
LABEL_124:
    sub_1C22094(this, sort);
  IconLabelInfo__Set_39381772(iconLabelInfo2, 2, klass, (int32_t)this, 0, 0, 0, 0, 0LL);
LABEL_47:
  LOBYTE(this) = 1;
  return (char)this;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EquipGraphListViewItem__SetWaveBattleInfo(
        EquipGraphListViewItem_o *this,
        PartyOrganizationListViewItem_o **equippedMemberItem,
        PartyListViewItem_array *baseDeckItemList,
        PartyListViewItem_o *partyItem,
        int32_t memberIdx,
        const MethodInfo *method)
{
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  PartyListViewItem_o *v8; // x23
  PartyListViewItem_array *v9; // x25
  int64_t Member; // x0
  __int64 v13; // x1
  __int64 v14; // x8
  int v15; // w21
  int32_t v16; // w22
  PartyListViewItem_o *v17; // x24
  int32_t i; // w25
  PartyOrganizationListViewItem_o *v19; // x26
  struct UserServantEntity_o *userSvtEntity; // x23
  const MethodInfo *v21; // x4
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o EquipSvtId; // kr00_16
  struct UserServantEntity_o *v23; // x27
  int64_t v24; // x26
  struct UserServantEntity_o *v25; // x8
  __int128 v26; // q0
  int32_t v27; // w0
  PartyOrganizationListViewItem_o *v28; // x0
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  struct UserServantEntity_o *v35; // x8
  __int128 v36; // q0
  int64_t v37; // x0
  int32_t WeareMember; // w0
  PartyOrganizationListViewItem_o *v39; // x0
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // kr10_16
  struct UserServantEntity_o *v47; // x8
  int v48; // w21
  struct UserServantEntity_o *v49; // x8
  __int64 v50; // x21
  __int64 v51; // x22
  int32_t v52; // w0
  PartyListViewItem_array *v54; // [xsp+18h] [xbp-F8h]
  PartyListViewItem_o *v55; // [xsp+20h] [xbp-F0h]
  PartyOrganizationUtility_o *v56; // [xsp+28h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v57; // [xsp+30h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v58; // [xsp+50h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v59; // [xsp+70h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v60; // [xsp+90h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v61; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v62; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v63; // 0:x2.16

  v8 = partyItem;
  v9 = baseDeckItemList;
  if ( (byte_4BDBCE8 & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4BDBCE8 = 1;
  }
  *equippedMemberItem = 0LL;
  v56 = (PartyOrganizationUtility_o *)equippedMemberItem;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)equippedMemberItem,
    0LL,
    (int64_t)baseDeckItemList,
    (int32_t)partyItem,
    *(System_String_o **)&memberIdx,
    (BattleSetupInfo_o *)method,
    v6,
    v7);
  if ( !v9 )
    goto LABEL_56;
  v14 = *(_QWORD *)&v9->max_length;
  this->fields._MaxWave_k__BackingField = v14;
  this->fields.wearerMember = -1;
  if ( (int)v14 >= 1 )
  {
    v15 = 0;
    v16 = 1;
    v54 = v9;
    v55 = v8;
    do
    {
      if ( v15 >= (unsigned int)v14 )
LABEL_57:
        sub_1C2209C(Member, v13);
      if ( !v8 )
        goto LABEL_56;
      v17 = v9->m_Items[v15];
      if ( !v17 )
        goto LABEL_56;
      if ( v8->fields.index != v17->fields.index )
      {
        for ( i = 0; ; ++i )
        {
          Member = (int64_t)BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            Member = (int64_t)BalanceConfig_TypeInfo;
          }
          if ( i >= *(_DWORD *)(*(_QWORD *)(Member + 184) + 160LL) )
            break;
          Member = (int64_t)PartyListViewItem__GetMember(v17, i, 0LL);
          if ( !Member )
            goto LABEL_56;
          v19 = (PartyOrganizationListViewItem_o *)Member;
          Member = (int64_t)PartyOrganizationListViewItem__GetEquipList((PartyOrganizationListViewItem_o *)Member, 0LL);
          if ( !Member )
            goto LABEL_56;
          if ( !*(_DWORD *)(Member + 24) )
            goto LABEL_57;
          if ( *(__int64 *)(Member + 32) >= 1 )
          {
            if ( !this->fields._IsUnique_k__BackingField )
            {
              userSvtEntity = this->fields.userSvtEntity;
              if ( !userSvtEntity )
                goto LABEL_56;
              EquipSvtId = PartyOrganizationListViewItem__get_EquipSvtId(v19, 0LL);
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v61.fields.currentCryptoKey = &userSvtEntity->fields.svtId;
              *(_QWORD *)&v61.fields.fakeValue = *(_QWORD *)&EquipSvtId.fields.currentCryptoKey;
              *(_QWORD *)&v63.fields.currentCryptoKey = *(_QWORD *)&EquipSvtId.fields.fakeValue;
              *(_QWORD *)&v63.fields.fakeValue = 0LL;
              Member = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__Equals_47622512(v61, v63, v21);
              this->fields._IsUnique_k__BackingField = Member & 1;
              if ( (Member & 1) != 0 )
              {
                this->fields._UniqueOrganizedWave_k__BackingField = v16;
                this->fields._IsClearedWave_k__BackingField = v17->fields._IsClearedWave_k__BackingField;
              }
            }
            v23 = this->fields.userSvtEntity;
            if ( !v23 )
              goto LABEL_56;
            Member = (int64_t)PartyOrganizationListViewItem__GetEquipList(v19, 0LL);
            if ( !Member )
              goto LABEL_56;
            if ( !*(_DWORD *)(Member + 24) )
              goto LABEL_57;
            v24 = *(_QWORD *)(Member + 32);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v60, v24, 0LL);
            v59 = v60;
            Member = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__Equals_47625436(&v23->fields.id, &v59, 0LL);
            if ( (Member & 1) != 0 )
            {
              v35 = this->fields.userSvtEntity;
              if ( v35 )
              {
                v36 = *(_OWORD *)&v35->fields.id.fields.fakeValue;
                *(_OWORD *)&v60.fields.currentCryptoKey = *(_OWORD *)&v35->fields.id.fields.currentCryptoKey;
                *(_OWORD *)&v60.fields.fakeValue = v36;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                v58 = v60;
                v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47624888(&v58, 0LL);
                WeareMember = PartyListViewItem__GetWeareMember(v17, v37, 0LL);
                this->fields.wearerMember = WeareMember;
                if ( (WeareMember & 0x80000000) == 0 )
                {
                  v39 = PartyListViewItem__GetMember(v17, WeareMember, 0LL);
                  v56->klass = (PartyOrganizationUtility_c *)v39;
                  sub_1C21DDC(v56, (int64_t)v39, v40, v41, v42, v43, v44, v45);
                }
                this->fields._OrganizedWave_k__BackingField = v16;
                this->fields._IsClearedWave_k__BackingField = v17->fields._IsClearedWave_k__BackingField;
                return;
              }
LABEL_56:
              sub_1C22094(Member, v13);
            }
          }
        }
        v9 = v54;
        v8 = v55;
        v14 = *(_QWORD *)&v54->max_length;
      }
      ++v15;
      ++v16;
    }
    while ( v15 < (int)v14 );
  }
  v25 = this->fields.userSvtEntity;
  if ( !v25 )
    goto LABEL_56;
  v26 = *(_OWORD *)&v25->fields.id.fields.fakeValue;
  *(_OWORD *)&v60.fields.currentCryptoKey = *(_OWORD *)&v25->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v60.fields.fakeValue = v26;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v57 = v60;
  Member = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47624888(&v57, 0LL);
  if ( !v8 )
    goto LABEL_56;
  v27 = PartyListViewItem__GetWeareMember(v8, Member, 0LL);
  this->fields.wearerMember = v27;
  if ( (v27 & 0x80000000) == 0 )
  {
    v28 = PartyListViewItem__GetMember(v8, v27, 0LL);
    v56->klass = (PartyOrganizationUtility_c *)v28;
    sub_1C21DDC(v56, (int64_t)v28, v29, v30, v31, v32, v33, v34);
    return;
  }
  if ( !this->fields._IsUnique_k__BackingField )
  {
    Member = (int64_t)PartyListViewItem__GetMember(v8, memberIdx, 0LL);
    if ( !Member )
      goto LABEL_56;
    v46 = PartyOrganizationListViewItem__get_EquipSvtId((PartyOrganizationListViewItem_o *)Member, 0LL);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    Member = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v46, 0LL);
    v47 = this->fields.userSvtEntity;
    if ( !v47 )
      goto LABEL_56;
    v48 = Member;
    Member = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v47->fields.svtId, 0LL);
    if ( v48 == (_DWORD)Member )
      return;
    v49 = this->fields.userSvtEntity;
    if ( !v49 )
      goto LABEL_56;
    v51 = *(_QWORD *)&v49->fields.svtId.fields.currentCryptoKey;
    v50 = *(_QWORD *)&v49->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v62.fields.currentCryptoKey = v51;
    *(_QWORD *)&v62.fields.fakeValue = v50;
    v52 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v62, 0LL);
    this->fields._IsUnique_k__BackingField = PartyListViewItem__IsIdenticalEquipMember(v8, v52, 0LL);
  }
}


bool __fastcall EquipGraphListViewItem__SwapChoice(EquipGraphListViewItem_o *this, const MethodInfo *method)
{
  bool v2; // w8

  v2 = !this->fields.isSwapChoice;
  this->fields.isSwapChoice ^= 1u;
  return v2;
}


bool __fastcall EquipGraphListViewItem__SwapLock(EquipGraphListViewItem_o *this, const MethodInfo *method)
{
  bool v2; // w8

  v2 = !this->fields.isSwapLock;
  this->fields.isSwapLock ^= 1u;
  return v2;
}


void __fastcall EquipGraphListViewItem__UpdateWaveBattleInfo(
        EquipGraphListViewItem_o *this,
        PartyListViewItem_array *baseDeckItemList,
        PartyListViewItem_o *partyItem,
        int32_t memberIdx,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x5
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  __int64 wearerMember; // x1
  PartyOrganizationListViewItem_o *Member; // x0
  struct System_String_o *ServantName; // x0
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  int32_t Rarity; // w0
  PartyOrganizationListViewItem_o *equippedMemberItem; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4BDBCE9 & 1) == 0 )
  {
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4BDBCE9 = 1;
  }
  equippedMemberItem = 0LL;
  this->fields._OrganizedWave_k__BackingField = 0;
  this->fields._UniqueOrganizedWave_k__BackingField = 0;
  this->fields._IsUnique_k__BackingField = 0;
  EquipGraphListViewItem__SetWaveBattleInfo(this, &equippedMemberItem, baseDeckItemList, partyItem, memberIdx, v5);
  wearerMember = (unsigned int)this->fields.wearerMember;
  if ( (wearerMember & 0x80000000) != 0 )
  {
    this->fields.wearerServantName = 0LL;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.wearerServantName, 0LL, v10, v11, v12, v13, v14, v15);
    Rarity = 0;
    *(_QWORD *)&this->fields.weareClassId = 0LL;
  }
  else
  {
    Member = equippedMemberItem;
    if ( !equippedMemberItem )
    {
      if ( !partyItem )
        goto LABEL_15;
      Member = PartyListViewItem__GetMember(partyItem, wearerMember, 0LL);
      equippedMemberItem = Member;
      if ( !Member )
        goto LABEL_15;
    }
    ServantName = PartyOrganizationListViewItem__get_ServantName(Member, 0LL);
    this->fields.wearerServantName = ServantName;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&this->fields.wearerServantName,
      (int64_t)ServantName,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
    Member = equippedMemberItem;
    if ( !equippedMemberItem )
      goto LABEL_15;
    this->fields.weareClassId = equippedMemberItem->fields.classId;
    SvtId = PartyOrganizationListViewItem__get_SvtId(Member, 0LL);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    Member = (PartyOrganizationListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(
                                                  SvtId,
                                                  0LL);
    this->fields.wearersSvtId = (int)Member;
    if ( !equippedMemberItem
      || (Member = (PartyOrganizationListViewItem_o *)equippedMemberItem->fields.userServantEntity) == 0LL )
    {
LABEL_15:
      sub_1C22094(Member, wearerMember);
    }
    Rarity = UserServantEntity__getRarity((UserServantEntity_o *)Member, 0LL);
  }
  this->fields.weareRarity = Rarity;
}


bool __fastcall EquipGraphListViewItem___SetSortValue_b__58_0(
        EquipGraphListViewItem_o *this,
        EventGroupEntity_o *entity,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1
  struct UserServantEntity_o *userSvtEntity; // x8
  EventCampaignMaster_o *v8; // x21
  __int64 v9; // x22
  __int64 v10; // x23
  UserServantEntity_o *v12; // x21
  EventUpValSetupInfo_o *setupInfo; // x20
  int32_t eventId; // w19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_4BDBCEF & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C21E38(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4BDBCEF = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_EventCampaignMaster___);
  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_15;
  v8 = (EventCampaignMaster_o *)Master_object;
  v10 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v15.fields.currentCryptoKey = v10;
  *(_QWORD *)&v15.fields.fakeValue = v9;
  Master_object = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v15, 0LL);
  if ( !entity || !v8 )
    goto LABEL_15;
  if ( EventCampaignMaster__IsEnableServant(v8, (int32_t)Master_object, entity->fields.eventId, 0LL) )
    return 1;
  v12 = this->fields.userSvtEntity;
  setupInfo = this->fields.setupInfo;
  eventId = entity->fields.eventId;
  Master_object = SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Master_object || !v12 )
LABEL_15:
    sub_1C22094(Master_object, v6);
  return UserServantEntity__getEventUpVal_41479064(v12, setupInfo, eventId, (int64_t)Master_object[6].monitor, 0LL);
}


bool __fastcall EquipGraphListViewItem___SetSortValue_b__58_1(
        EquipGraphListViewItem_o *this,
        EventGroupEntity_o *entity,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1
  struct UserServantEntity_o *userSvtEntity; // x8
  EventCampaignMaster_o *v8; // x21
  __int64 v9; // x22
  __int64 v10; // x23
  UserServantEntity_o *v12; // x21
  EventUpValSetupInfo_o *setupInfo; // x20
  int32_t eventId; // w19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_4BDBCF0 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C21E38(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4BDBCF0 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_EventCampaignMaster___);
  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_15;
  v8 = (EventCampaignMaster_o *)Master_object;
  v10 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v15.fields.currentCryptoKey = v10;
  *(_QWORD *)&v15.fields.fakeValue = v9;
  Master_object = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v15, 0LL);
  if ( !entity || !v8 )
    goto LABEL_15;
  if ( EventCampaignMaster__IsEnableServant(v8, (int32_t)Master_object, entity->fields.eventId, 0LL) )
    return 1;
  v12 = this->fields.userSvtEntity;
  setupInfo = this->fields.setupInfo;
  eventId = entity->fields.eventId;
  Master_object = SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Master_object || !v12 )
LABEL_15:
    sub_1C22094(Master_object, v6);
  return UserServantEntity__getEventUpVal_41479064(v12, setupInfo, eventId, (int64_t)Master_object[6].monitor, 0LL);
}


int32_t __fastcall EquipGraphListViewItem__get_AdjustAttack(EquipGraphListViewItem_o *this, const MethodInfo *method)
{
  struct UserServantEntity_o *userSvtEntity; // x8

  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
    return userSvtEntity->fields.adjustAtk;
  else
    return 0;
}


int32_t __fastcall EquipGraphListViewItem__get_AdjustHp(EquipGraphListViewItem_o *this, const MethodInfo *method)
{
  struct UserServantEntity_o *userSvtEntity; // x8

  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
    return userSvtEntity->fields.adjustHp;
  else
    return 0;
}


int32_t __fastcall EquipGraphListViewItem__get_Attack(EquipGraphListViewItem_o *this, const MethodInfo *method)
{
  struct UserServantEntity_o *userSvtEntity; // x8

  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
    return userSvtEntity->fields.atk;
  else
    return 0;
}


int32_t __fastcall EquipGraphListViewItem__get_Cost(EquipGraphListViewItem_o *this, const MethodInfo *method)
{
  struct ServantEntity_o *servantEntity; // x8

  servantEntity = this->fields.servantEntity;
  if ( servantEntity )
    return servantEntity->fields.cost;
  else
    return 0;
}


int32_t __fastcall EquipGraphListViewItem__get_Hp(EquipGraphListViewItem_o *this, const MethodInfo *method)
{
  struct UserServantEntity_o *userSvtEntity; // x8

  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
    return userSvtEntity->fields.hp;
  else
    return 0;
}


IconLabelInfo_o *__fastcall EquipGraphListViewItem__get_IconInfo1(
        EquipGraphListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.iconLabelInfo1;
}


IconLabelInfo_o *__fastcall EquipGraphListViewItem__get_IconInfo2(
        EquipGraphListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.iconLabelInfo2;
}


bool __fastcall EquipGraphListViewItem__get_IsBase(EquipGraphListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isBase;
}


bool __fastcall EquipGraphListViewItem__get_IsCanNotSelect(EquipGraphListViewItem_o *this, const MethodInfo *method)
{
  return 0;
}


bool __fastcall EquipGraphListViewItem__get_IsChocolateSvtEquip(
        EquipGraphListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isChocolateSvtEquip;
}


bool __fastcall EquipGraphListViewItem__get_IsChoice(EquipGraphListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isChoice;
}


bool __fastcall EquipGraphListViewItem__get_IsClearedWave(EquipGraphListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._IsClearedWave_k__BackingField;
}


bool __fastcall EquipGraphListViewItem__get_IsDispChoice(EquipGraphListViewItem_o *this, const MethodInfo *method)
{
  if ( this->fields.isSwapChoice )
    return !this->fields.isChoice;
  else
    return this->fields.isChoice;
}


bool __fastcall EquipGraphListViewItem__get_IsDispLock(EquipGraphListViewItem_o *this, const MethodInfo *method)
{
  if ( this->fields.isSwapLock )
    return !this->fields.isLock;
  else
    return this->fields.isLock;
}


bool __fastcall EquipGraphListViewItem__get_IsFriendShipSvtEq(EquipGraphListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isFriendShipSvtEq;
}


bool __fastcall EquipGraphListViewItem__get_IsInvalidRarity(EquipGraphListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isInvalidRarity;
}


bool __fastcall EquipGraphListViewItem__get_IsLock(EquipGraphListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isLock;
}


bool __fastcall EquipGraphListViewItem__get_IsOldBase(EquipGraphListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isOldBase;
}


bool __fastcall EquipGraphListViewItem__get_IsSwapChoice(EquipGraphListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isSwapChoice;
}


bool __fastcall EquipGraphListViewItem__get_IsSwapLock(EquipGraphListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isSwapLock;
}


bool __fastcall EquipGraphListViewItem__get_IsUnique(EquipGraphListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._IsUnique_k__BackingField;
}


bool __fastcall EquipGraphListViewItem__get_IsUse(EquipGraphListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.wearerMember >= 0;
}


int32_t __fastcall EquipGraphListViewItem__get_MaxWave(EquipGraphListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._MaxWave_k__BackingField;
}


System_String_o *__fastcall EquipGraphListViewItem__get_NameText(
        EquipGraphListViewItem_o *this,
        const MethodInfo *method)
{
  ServantEntity_o *servantEntity; // x0
  LocalizationManager_c *v5; // x0

  if ( (byte_4BDBCEC & 1) == 0 )
  {
    sub_1C21E38(&LocalizationManager_TypeInfo);
    byte_4BDBCEC = 1;
  }
  servantEntity = this->fields.servantEntity;
  if ( servantEntity )
    return ServantEntity__getName(servantEntity, -1, -1, 0, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !byte_4BD7BC3 )
  {
    sub_1C21E38(&LocalizationManager_TypeInfo);
    byte_4BD7BC3 = 1;
  }
  v5 = LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v5 = LocalizationManager_TypeInfo;
  }
  return v5->static_fields->unknownNameText;
}


int32_t __fastcall EquipGraphListViewItem__get_OrganizedWave(EquipGraphListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._OrganizedWave_k__BackingField;
}


ServantEntity_o *__fastcall EquipGraphListViewItem__get_Servant(
        EquipGraphListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.servantEntity;
}


int32_t __fastcall EquipGraphListViewItem__get_UniqueOrganizedWave(
        EquipGraphListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._UniqueOrganizedWave_k__BackingField;
}


UserServantEntity_o *__fastcall EquipGraphListViewItem__get_UserServant(
        EquipGraphListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.userSvtEntity;
}


int32_t __fastcall EquipGraphListViewItem__get_WeareMember(EquipGraphListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.wearerMember;
}


System_String_o *__fastcall EquipGraphListViewItem__get_WeareServantClassName(
        EquipGraphListViewItem_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *Entity; // x0
  System_String_o **p_monitor; // x8
  LocalizationManager_c *v7; // x0

  if ( (byte_4BDBCED & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_1C21E38(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BDBCED = 1;
  }
  if ( this->fields.weareClassId < 1 )
    goto LABEL_19;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantClassMaster___)) == 0LL )
  {
    sub_1C22094(Instance, v4);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             this->fields.weareClassId,
             (const MethodInfo_325BDC8 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( Entity )
  {
    p_monitor = (System_String_o **)&Entity[1].monitor;
  }
  else
  {
LABEL_19:
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( !byte_4BD7BC3 )
    {
      sub_1C21E38(&LocalizationManager_TypeInfo);
      byte_4BD7BC3 = 1;
    }
    v7 = LocalizationManager_TypeInfo;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v7 = LocalizationManager_TypeInfo;
    }
    p_monitor = &v7->static_fields->unknownNameText;
  }
  return *p_monitor;
}


System_String_o *__fastcall EquipGraphListViewItem__get_WeareServantName(
        EquipGraphListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.wearerServantName;
}


int32_t __fastcall EquipGraphListViewItem__get_WeareServantRarity(
        EquipGraphListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.weareRarity;
}


int32_t __fastcall EquipGraphListViewItem__get_WearerServantId(
        EquipGraphListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.wearersSvtId;
}


void __fastcall EquipGraphListViewItem__set_IsBase(
        EquipGraphListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields.isBase = value;
}


void __fastcall EquipGraphListViewItem__set_IsClearedWave(
        EquipGraphListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsClearedWave_k__BackingField = value;
}


void __fastcall EquipGraphListViewItem__set_IsOldBase(
        EquipGraphListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields.isOldBase = value;
}


void __fastcall EquipGraphListViewItem__set_IsUnique(
        EquipGraphListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsUnique_k__BackingField = value;
}


void __fastcall EquipGraphListViewItem__set_MaxWave(
        EquipGraphListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._MaxWave_k__BackingField = value;
}


void __fastcall EquipGraphListViewItem__set_OrganizedWave(
        EquipGraphListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._OrganizedWave_k__BackingField = value;
}


void __fastcall EquipGraphListViewItem__set_UniqueOrganizedWave(
        EquipGraphListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._UniqueOrganizedWave_k__BackingField = value;
}