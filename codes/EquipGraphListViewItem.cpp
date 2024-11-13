// local variable allocation has failed, the output may be wrong!
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
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  IconLabelInfo_o *v30; // x20
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  IconLabelInfo_o *v40; // x27
  struct IconLabelInfo_o **p_iconLabelInfo2; // x20
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_userSvtEntity; // x21
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
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
  Il2CppObject *Entity; // x0
  struct ServantEntity_o **p_servantEntity; // x26
  int64_t v69; // x2
  int32_t v70; // w3
  System_String_o *v71; // x4
  BattleSetupInfo_o *v72; // x5
  FollowerInfo_o *v73; // x6
  PartyListViewItem_o *v74; // x7
  ServantLimitMaster_o *v75; // x27
  int32_t v76; // w28
  __int128 v77; // q1
  const MethodInfo *v78; // x5
  int64_t v79; // x2
  int32_t v80; // w3
  System_String_o *v81; // x4
  BattleSetupInfo_o *v82; // x5
  FollowerInfo_o *v83; // x6
  PartyListViewItem_o *v84; // x7
  __int128 v85; // q0
  int64_t v86; // x0
  int32_t WeareMember; // w0
  int32_t wearerMember; // w1
  struct System_String_o *ServantName; // x0
  int64_t v90; // x2
  int32_t v91; // w3
  System_String_o *v92; // x4
  BattleSetupInfo_o *v93; // x5
  FollowerInfo_o *v94; // x6
  PartyListViewItem_o *v95; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  UserServantEntity_o *v97; // x8
  UserServantEntity_o *v98; // x8
  bool IsChoice; // w8
  UserServantEntity_o *v100; // x8
  struct EventUpValSetupInfo_o *v101; // x8
  int32_t EventId; // w23
  PartyOrganizationListViewItem_o *Member; // x24
  struct UserServantEntity_o *userServantEntity; // x8
  PartyOrganizationUtility_o *v105; // x22
  __int64 v106; // x25
  __int64 v107; // x26
  UserServantEntity_o *v108; // x8
  int32_t v109; // w24
  int32_t v110; // w25
  struct ServantEntity_o *servantEntity; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v112; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v113; // q0
  int64_t v114; // x8
  struct System_Int32_array *EquipCategoryIdList; // x0
  PartyOrganizationUtility_o *p_categoryIdList; // x19
  int64_t v117; // x2
  int32_t v118; // w3
  System_String_o *v119; // x4
  BattleSetupInfo_o *v120; // x5
  FollowerInfo_o *v121; // x6
  PartyListViewItem_o *v122; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v124; // [xsp+10h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v125; // [xsp+30h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v126; // [xsp+50h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v127; // [xsp+70h] [xbp-A0h]
  int32_t actMaxRarity; // [xsp+9Ch] [xbp-74h] BYREF
  System_String_o *skillName; // [xsp+A0h] [xbp-70h] BYREF
  PartyOrganizationListViewItem_o *equippedMemberItem; // [xsp+A8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v131; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v132; // 0:x0.16

  if ( (byte_4B159A7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitMaster___, *(_QWORD *)&index, userSvtEntity);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v16, v17);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v18, v19);
    sub_1BCA7E0(&IconLabelInfo_TypeInfo, v20, v21);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v22, v23);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v24, v25);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v26, v27);
    sub_1BCA7E0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v28, v29);
    byte_4B159A7 = 1;
  }
  skillName = 0LL;
  equippedMemberItem = 0LL;
  actMaxRarity = 0;
  v30 = (IconLabelInfo_o *)sub_1BCAA2C(IconLabelInfo_TypeInfo, *(_QWORD *)&index, userSvtEntity, targetSvtEquipId);
  IconLabelInfo___ctor(v30, 0LL);
  this->fields.iconLabelInfo1 = v30;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.iconLabelInfo1, (int64_t)v30, v31, v32, v33, v34, v35, v36);
  v40 = (IconLabelInfo_o *)sub_1BCAA2C(IconLabelInfo_TypeInfo, v37, v38, v39);
  IconLabelInfo___ctor(v40, 0LL);
  this->fields.iconLabelInfo2 = v40;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.iconLabelInfo2, (int64_t)v40, v42, v43, v44, v45, v46, v47);
  ListViewItem___ctor_41447164((ListViewItem_o *)this, index, 0LL);
  this->fields.userSvtEntity = userSvtEntity;
  p_userSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userSvtEntity;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.userSvtEntity,
    (int64_t)userSvtEntity,
    v49,
    v50,
    v51,
    v52,
    v53,
    v54);
  this->fields.setupInfo = setupInfo;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.setupInfo, (int64_t)setupInfo, v55, v56, v57, v58, v59, v60);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_58;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  v63 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_58;
  v64 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v66 = *(_QWORD *)&v63[5].fields.currentCryptoKey;
  v65 = *(_QWORD *)&v63[5].fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v62);
  *(_QWORD *)&v131.fields.currentCryptoKey = v66;
  *(_QWORD *)&v131.fields.fakeValue = v65;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v131, 0LL);
  if ( !v64 )
    goto LABEL_58;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v64,
             Instance,
             (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)Entity;
  p_servantEntity = &this->fields.servantEntity;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.servantEntity, (int64_t)Entity, v69, v70, v71, v72, v73, v74);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_58;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtEntity )
    goto LABEL_58;
  v75 = (ServantLimitMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428((*p_userSvtEntity)[5], 0LL);
  if ( !*p_userSvtEntity )
    goto LABEL_58;
  v76 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428((*p_userSvtEntity)[6], 0LL);
  if ( !v75 )
    goto LABEL_58;
  Instance = (int64_t)ServantLimitMaster__GetEntity(v75, v76, Instance, 0LL);
  if ( !*p_servantEntity )
    goto LABEL_58;
  this->fields.classId = (*p_servantEntity)->fields.classId;
  if ( !Instance )
    goto LABEL_58;
  this->fields.rarity = *(_DWORD *)(Instance + 24);
  if ( !userSvtEntity )
    goto LABEL_58;
  v77 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v127.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v127.fields.fakeValue = v77;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v62);
  v126 = v127;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v126, 0LL);
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
    EquipGraphListViewItem__SetWaveBattleInfo(this, &equippedMemberItem, baseDeckItemList, partyItem, memberIdx, v78);
  }
  else
  {
    v85 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
    *(_OWORD *)&v127.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v127.fields.fakeValue = v85;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v62);
    v125 = v127;
    v86 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v125, 0LL);
    WeareMember = PartyListViewItem__GetWeareMember(partyItem, v86, 0LL);
    this->fields.wearerMember = WeareMember;
    if ( (WeareMember & 0x80000000) == 0 )
      equippedMemberItem = PartyListViewItem__GetMember(partyItem, WeareMember, 0LL);
  }
  wearerMember = this->fields.wearerMember;
  if ( (wearerMember & 0x80000000) != 0 )
  {
    this->fields.wearerServantName = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.wearerServantName, 0LL, v79, v80, v81, v82, v83, v84);
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
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.wearerServantName,
      (int64_t)ServantName,
      v90,
      v91,
      v92,
      v93,
      v94,
      v95);
    Instance = (int64_t)equippedMemberItem;
    if ( !equippedMemberItem )
      goto LABEL_58;
    this->fields.weareClassId = equippedMemberItem->fields.classId;
    SvtId = PartyOrganizationListViewItem__get_SvtId((PartyOrganizationListViewItem_o *)Instance, 0LL);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(
        CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
        *(_QWORD *)&SvtId.fields.fakeValue);
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(SvtId, 0LL);
    this->fields.wearersSvtId = Instance;
    if ( !equippedMemberItem )
      goto LABEL_58;
    Instance = (int64_t)equippedMemberItem->fields.userServantEntity;
    if ( !Instance )
      goto LABEL_58;
    Instance = UserServantEntity__getRarity((UserServantEntity_o *)Instance, 0LL);
  }
  v97 = this->fields.userSvtEntity;
  this->fields.weareRarity = Instance;
  if ( !v97 )
    goto LABEL_58;
  Instance = UserServantEntity__IsLock(v97, 0LL);
  v98 = this->fields.userSvtEntity;
  this->fields.isLock = Instance & 1;
  if ( !v98 )
    goto LABEL_58;
  IsChoice = UserServantEntity__IsChoice(v98, 0LL);
  Instance = (int64_t)this->fields.userSvtEntity;
  this->fields.isChoice = IsChoice;
  *(_WORD *)&this->fields.isSwapLock = 0;
  if ( !Instance )
    goto LABEL_58;
  Instance = UserServantEntity__IsFriendShipSvtEquip((UserServantEntity_o *)Instance, 0LL);
  v100 = this->fields.userSvtEntity;
  this->fields.isFriendShipSvtEq = Instance & 1;
  if ( !v100 )
    goto LABEL_58;
  Instance = UserServantEntity__IsChocolateSvtEquip(v100, 0LL);
  v101 = this->fields.setupInfo;
  this->fields.isChocolateSvtEquip = Instance & 1;
  if ( v101 )
  {
    if ( v101->fields.isQuestStart )
      EventId = EventUpValSetupInfo__get_EventId(v101, 0LL);
    else
      EventId = -1;
    Member = PartyListViewItem__GetMember(partyItem, memberIdx, 0LL);
    Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( Member )
    {
      userServantEntity = Member->fields.userServantEntity;
      if ( userServantEntity )
      {
        v105 = (PartyOrganizationUtility_o *)Instance;
        v107 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
        v106 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v62);
        *(_QWORD *)&v132.fields.currentCryptoKey = v107;
        *(_QWORD *)&v132.fields.fakeValue = v106;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v132, 0LL);
        v108 = Member->fields.userServantEntity;
        if ( v108 )
        {
          v109 = Instance;
          Instance = UserServantEntity__getRarity(v108, 0LL);
          if ( *p_userSvtEntity )
          {
            v110 = Instance;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428((*p_userSvtEntity)[5], 0LL);
            if ( v105 )
            {
              Instance = PartyOrganizationUtility__IsRarityRestriction(
                           v105,
                           &skillName,
                           &actMaxRarity,
                           v109,
                           v110,
                           Instance,
                           EventId,
                           0LL);
              LOBYTE(v101) = Instance & 1;
              goto LABEL_50;
            }
          }
        }
      }
    }
LABEL_58:
    sub_1BCAA3C(Instance, v62);
  }
LABEL_50:
  servantEntity = this->fields.servantEntity;
  this->fields.isInvalidRarity = (char)v101;
  this->fields.isEventUpVal = 0;
  *(_QWORD *)&this->fields.bonusKind = 1LL;
  if ( !servantEntity )
    goto LABEL_58;
  v112 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_58;
  this->fields.sortValue2 = ((__int64)servantEntity->fields.collectionNo << 16) | ((unsigned __int64)(unsigned int)this->fields.rarity << 48) | v112[16].fields.currentCryptoKey;
  v113 = v112[2];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v127.fields.currentCryptoKey = v112[1];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v127.fields.fakeValue = v113;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v62);
  v124 = v127;
  v114 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v124, 0LL);
  Instance = (int64_t)this->fields.userSvtEntity;
  this->fields.sortValue2B = v114;
  this->fields.amountSortValue = -1LL;
  if ( !Instance )
    goto LABEL_58;
  EquipCategoryIdList = UserServantEntity__GetEquipCategoryIdList((UserServantEntity_o *)Instance, 1, 0LL);
  this->fields.categoryIdList = EquipCategoryIdList;
  p_categoryIdList = (PartyOrganizationUtility_o *)&this->fields.categoryIdList;
  sub_1BCA784(p_categoryIdList, (int64_t)EquipCategoryIdList, v117, v118, v119, v120, v121, v122);
  Instance = (int64_t)p_categoryIdList->monitor;
  if ( !Instance )
    goto LABEL_58;
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0LL);
  Instance = (int64_t)*p_iconLabelInfo2;
  if ( !*p_iconLabelInfo2 )
    goto LABEL_58;
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EquipGraphListViewItem___ctor_39192148(
        EquipGraphListViewItem_o *this,
        int32_t index,
        UserServantEntity_o *userSvtEntity,
        int64_t targetSvtEquipId,
        int64_t oldTargetSvtEquipId,
        WarBoardPartyListViewItem_o *partyItem,
        EventUpValSetupInfo_o *setupInfo,
        const MethodInfo *method)
{
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  IconLabelInfo_o *v26; // x20
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  IconLabelInfo_o *v36; // x26
  struct IconLabelInfo_o **p_iconLabelInfo2; // x20
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_userSvtEntity; // x21
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  int64_t Instance; // x0
  __int64 v58; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v59; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v60; // x25
  __int64 v61; // x26
  __int64 v62; // x27
  Il2CppObject *Entity; // x0
  struct ServantEntity_o **p_servantEntity; // x25
  int64_t v65; // x2
  int32_t v66; // w3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7
  ServantLimitMaster_o *v71; // x26
  int32_t v72; // w27
  UserServantEntity_Fields *p_fields; // x24
  __int128 v74; // q0
  __int128 v75; // q1
  bool v76; // w8
  __int128 v77; // q1
  int32_t WeareMember; // w0
  int64_t v79; // x2
  int32_t v80; // w3
  System_String_o *v81; // x4
  BattleSetupInfo_o *v82; // x5
  FollowerInfo_o *v83; // x6
  PartyListViewItem_o *v84; // x7
  PartyOrganizationListViewItem_o *v85; // x22
  struct System_String_o *ServantName; // x0
  int64_t v87; // x2
  int32_t v88; // w3
  System_String_o *v89; // x4
  BattleSetupInfo_o *v90; // x5
  FollowerInfo_o *v91; // x6
  PartyListViewItem_o *v92; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  UserServantEntity_o *v94; // x8
  UserServantEntity_o *v95; // x8
  bool IsChoice; // w8
  UserServantEntity_o *v97; // x8
  struct ServantEntity_o *servantEntity; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v99; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v100; // q0
  int64_t v101; // x8
  struct System_Int32_array *EquipCategoryIdList; // x0
  PartyOrganizationUtility_o *p_categoryIdList; // x19
  int64_t v104; // x2
  int32_t v105; // w3
  System_String_o *v106; // x4
  BattleSetupInfo_o *v107; // x5
  FollowerInfo_o *v108; // x6
  PartyListViewItem_o *v109; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v110; // [xsp+0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v111; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v112; // [xsp+40h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v113; // [xsp+60h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v114; // 0:x0.16

  if ( (byte_4B159A8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitMaster___, *(_QWORD *)&index, userSvtEntity);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v14, v15);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v16, v17);
    sub_1BCA7E0(&IconLabelInfo_TypeInfo, v18, v19);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v20, v21);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v22, v23);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24, v25);
    byte_4B159A8 = 1;
  }
  v26 = (IconLabelInfo_o *)sub_1BCAA2C(IconLabelInfo_TypeInfo, *(_QWORD *)&index, userSvtEntity, targetSvtEquipId);
  IconLabelInfo___ctor(v26, 0LL);
  this->fields.iconLabelInfo1 = v26;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.iconLabelInfo1, (int64_t)v26, v27, v28, v29, v30, v31, v32);
  v36 = (IconLabelInfo_o *)sub_1BCAA2C(IconLabelInfo_TypeInfo, v33, v34, v35);
  IconLabelInfo___ctor(v36, 0LL);
  this->fields.iconLabelInfo2 = v36;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.iconLabelInfo2, (int64_t)v36, v38, v39, v40, v41, v42, v43);
  ListViewItem___ctor_41447164((ListViewItem_o *)this, index, 0LL);
  this->fields.userSvtEntity = userSvtEntity;
  p_userSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userSvtEntity;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.userSvtEntity,
    (int64_t)userSvtEntity,
    v45,
    v46,
    v47,
    v48,
    v49,
    v50);
  this->fields.setupInfo = setupInfo;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.setupInfo, (int64_t)setupInfo, v51, v52, v53, v54, v55, v56);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  v59 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_37;
  v60 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v62 = *(_QWORD *)&v59[5].fields.currentCryptoKey;
  v61 = *(_QWORD *)&v59[5].fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v58);
  *(_QWORD *)&v114.fields.currentCryptoKey = v62;
  *(_QWORD *)&v114.fields.fakeValue = v61;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v114, 0LL);
  if ( !v60 )
    goto LABEL_37;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v60,
             Instance,
             (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)Entity;
  p_servantEntity = &this->fields.servantEntity;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.servantEntity, (int64_t)Entity, v65, v66, v67, v68, v69, v70);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtEntity )
    goto LABEL_37;
  v71 = (ServantLimitMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428((*p_userSvtEntity)[5], 0LL);
  if ( !*p_userSvtEntity )
    goto LABEL_37;
  v72 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428((*p_userSvtEntity)[6], 0LL);
  if ( !v71 )
    goto LABEL_37;
  Instance = (int64_t)ServantLimitMaster__GetEntity(v71, v72, Instance, 0LL);
  if ( !*p_servantEntity )
    goto LABEL_37;
  this->fields.classId = (*p_servantEntity)->fields.classId;
  if ( !Instance )
    goto LABEL_37;
  this->fields.rarity = *(_DWORD *)(Instance + 24);
  if ( !userSvtEntity )
    goto LABEL_37;
  v74 = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  v75 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  p_fields = &userSvtEntity->fields;
  *(_OWORD *)&v113.fields.currentCryptoKey = v74;
  *(_OWORD *)&v113.fields.fakeValue = v75;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v58);
  v112 = v113;
  v76 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v112, 0LL) == targetSvtEquipId;
  this->fields.isOldBase = v76;
  this->fields.isBase = v76;
  v77 = *(_OWORD *)&p_fields->id.fields.fakeValue;
  *(_OWORD *)&v111.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v111.fields.fakeValue = v77;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v111, 0LL);
  if ( !partyItem )
    goto LABEL_37;
  WeareMember = WarBoardPartyListViewItem__GetWeareMember(partyItem, Instance, 0LL);
  this->fields.wearerMember = WeareMember;
  if ( (WeareMember & 0x80000000) == 0 )
  {
    Instance = (int64_t)WarBoardPartyListViewItem__GetMemberItem(partyItem, WeareMember, 0LL);
    if ( Instance )
    {
      v85 = (PartyOrganizationListViewItem_o *)Instance;
      ServantName = PartyOrganizationListViewItem__get_ServantName((PartyOrganizationListViewItem_o *)Instance, 0LL);
      this->fields.wearerServantName = ServantName;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&this->fields.wearerServantName,
        (int64_t)ServantName,
        v87,
        v88,
        v89,
        v90,
        v91,
        v92);
      this->fields.weareClassId = v85->fields.classId;
      SvtId = PartyOrganizationListViewItem__get_SvtId(v85, 0LL);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(
          CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
          *(_QWORD *)&SvtId.fields.fakeValue);
      this->fields.wearersSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(SvtId, 0LL);
      Instance = (int64_t)v85->fields.userServantEntity;
      if ( Instance )
      {
        Instance = UserServantEntity__getRarity((UserServantEntity_o *)Instance, 0LL);
        goto LABEL_25;
      }
    }
LABEL_37:
    sub_1BCAA3C(Instance, v58);
  }
  this->fields.wearerServantName = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.wearerServantName, 0LL, v79, v80, v81, v82, v83, v84);
  Instance = 0LL;
  *(_QWORD *)&this->fields.weareClassId = 0LL;
LABEL_25:
  v94 = this->fields.userSvtEntity;
  this->fields.weareRarity = Instance;
  if ( !v94 )
    goto LABEL_37;
  Instance = UserServantEntity__IsLock(v94, 0LL);
  v95 = this->fields.userSvtEntity;
  this->fields.isLock = Instance & 1;
  if ( !v95 )
    goto LABEL_37;
  IsChoice = UserServantEntity__IsChoice(v95, 0LL);
  Instance = (int64_t)this->fields.userSvtEntity;
  this->fields.isChoice = IsChoice;
  *(_WORD *)&this->fields.isSwapLock = 0;
  this->fields.isInvalidRarity = 0;
  if ( !Instance )
    goto LABEL_37;
  Instance = UserServantEntity__IsFriendShipSvtEquip((UserServantEntity_o *)Instance, 0LL);
  v97 = this->fields.userSvtEntity;
  this->fields.isFriendShipSvtEq = Instance & 1;
  if ( !v97 )
    goto LABEL_37;
  Instance = UserServantEntity__IsChocolateSvtEquip(v97, 0LL);
  servantEntity = this->fields.servantEntity;
  this->fields.isChocolateSvtEquip = Instance & 1;
  *(_QWORD *)&this->fields.bonusKind = 1LL;
  this->fields.isEventUpVal = 0;
  if ( !servantEntity )
    goto LABEL_37;
  v99 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_37;
  this->fields.sortValue2 = ((__int64)servantEntity->fields.collectionNo << 16) | ((unsigned __int64)(unsigned int)this->fields.rarity << 48) | v99[16].fields.currentCryptoKey;
  v100 = v99[2];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v113.fields.currentCryptoKey = v99[1];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v113.fields.fakeValue = v100;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v58);
  v110 = v113;
  v101 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v110, 0LL);
  Instance = (int64_t)this->fields.userSvtEntity;
  this->fields.sortValue2B = v101;
  this->fields.amountSortValue = -1LL;
  if ( !Instance )
    goto LABEL_37;
  EquipCategoryIdList = UserServantEntity__GetEquipCategoryIdList((UserServantEntity_o *)Instance, 1, 0LL);
  this->fields.categoryIdList = EquipCategoryIdList;
  p_categoryIdList = (PartyOrganizationUtility_o *)&this->fields.categoryIdList;
  sub_1BCA784(p_categoryIdList, (int64_t)EquipCategoryIdList, v104, v105, v106, v107, v108, v109);
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
  __int64 v3; // x3
  UserServantEntity_o *userSvtEntity; // x0
  TreasureDvcInfo_o *v8; // x20
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  if ( (byte_4B159AF & 1) == 0 )
  {
    sub_1BCA7E0(&TreasureDvcInfo_TypeInfo, tdInfo, method);
    byte_4B159AF = 1;
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

  if ( (byte_4B159AB & 1) == 0 )
  {
    sub_1BCA7E0(&FilterKindList_TypeInfo, sort, method);
    sub_1BCA7E0(&ListViewSort_FilterKind___TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v7, v8);
    byte_4B159AB = 1;
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
  sub_1BCA784(
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
    sub_1BCAA3C(0LL, method);
  this->fields.isChoice = UserServantEntity__IsChoice(userSvtEntity, 0LL);
  this->fields.isSwapChoice = 0;
}


void __fastcall EquipGraphListViewItem__ModifyLockItem(EquipGraphListViewItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0

  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_1BCAA3C(0LL, method);
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
  sub_1BCA784(
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
  EventUpValSetupInfo_o *setupInfo; // x4
  struct System_Int32_array *servantEquipFilterEventIds; // x8
  _BOOL4 isChoice; // w8
  _BOOL4 isSwapChoice; // w9
  bool v29; // zf
  _BOOL4 v30; // w8
  int v31; // w10
  struct UserServantEntity_o *v32; // x8
  __int128 v33; // q1
  struct UserServantEntity_o *v34; // x8
  int64_t rarity; // x8
  int64_t klass_low; // x20
  IconLabelInfo_o *iconLabelInfo1; // x21
  struct UserServantEntity_o *v38; // x8
  int64_t hp; // x2
  int32_t adjustHp; // w3
  int32_t v41; // w1
  struct UserServantEntity_o *v42; // x8
  IconLabelInfo_o *iconLabelInfo2; // x19
  struct ServantEntity_o *servantEntity; // x8
  int32_t klass; // w20
  struct ListViewManager_o *manager; // x8
  __int64 methodPtr_low; // x11
  struct ListViewManager_o *v48; // x20
  int32_t bonusKind2; // w8
  int32_t v50; // w8
  int32_t bonusKind2Id; // w8
  int32_t v52; // w9
  int32_t v53; // w5
  struct UserServantEntity_o *v54; // x8
  __int64 v55; // x21
  __int64 v56; // x22
  const MethodInfo *v57; // x2
  struct ServantEntity_o *v58; // x8
  __int64 collectionNo; // x10
  struct UserServantEntity_o *v60; // x8
  int isEventUpVal; // w8
  int32_t bonusKindId; // w9
  int32_t v63; // w8
  bool EventUpVal_40936896; // w0
  System_Collections_Generic_List_EventGroupEntity__o *EntitiesByGroupId; // x21
  __int64 v66; // x2
  __int64 v67; // x3
  System_Func_object__bool__o *v68; // x0
  __int64 *v69; // x8
  struct UserServantEntity_o *userSvtEntity; // x8
  EquipGraphListViewItem_o *v71; // x21
  __int64 v72; // x22
  __int64 v73; // x23
  bool IsEnableServant; // w0
  int v75; // w8
  __int64 v76; // x2
  __int64 v77; // x3
  System_Func_T__bool__o *v78; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v80; // [xsp+10h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v81; // [xsp+30h] [xbp-50h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v82; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v83; // 0:x0.16

  v4 = this;
  if ( (byte_4B159AC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Any_EventGroupEntity___, sort, method);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventCampaignMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventGroupMaster___, v7, v8);
    sub_1BCA7E0(&DataManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_EquipGraphListViewItem__SetSortValue_b__58_0__, v11, v12);
    sub_1BCA7E0(&Method_EquipGraphListViewItem__SetSortValue_b__58_1__, v13, v14);
    sub_1BCA7E0(&EquipGraphListViewManager_TypeInfo, v15, v16);
    sub_1BCA7E0(&System_Func_EventGroupEntity__bool__TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventGroupEntity__get_Count__, v19, v20);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v21, v22);
    this = (EquipGraphListViewItem_o *)sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v23, v24);
    byte_4B159AC = 1;
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
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, sort);
        this = (EquipGraphListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventGroupMaster___);
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
        v68 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_EventGroupEntity__bool__TypeInfo, sort, v76, v77);
        v69 = &Method_EquipGraphListViewItem__SetSortValue_b__58_1__;
LABEL_119:
        v78 = (System_Func_T__bool__o *)v68;
        System_Func_object__bool____ctor(v68, (Il2CppObject *)v4, *v69, 0LL);
        v4->fields.isEventUpVal = BasicHelper__Any_object_(
                                    (System_Collections_Generic_List_T__o *)EntitiesByGroupId,
                                    v78,
                                    (const MethodInfo_2EFDC94 *)Method_BasicHelper_Any_EventGroupEntity___);
        goto LABEL_120;
      }
      if ( v4->fields.bonusKind != 3 )
      {
        v63 = sort->fields.bonusKind2Id;
        goto LABEL_104;
      }
      bonusKindId = v4->fields.bonusKindId;
      v63 = sort->fields.bonusKind2Id;
      goto LABEL_86;
    }
    if ( v4->fields.bonusKind != bonusKind2 )
    {
      v53 = sort->fields.bonusKind2Id;
      goto LABEL_89;
    }
    v52 = v4->fields.bonusKindId;
    v53 = sort->fields.bonusKind2Id;
    goto LABEL_79;
  }
  bonusKind2 = sort->fields.bonusKind;
  if ( (unsigned int)(bonusKind2 - 4) < 2 )
  {
    if ( v4->fields.bonusKind != bonusKind2 )
    {
      v53 = sort->fields.bonusKindId;
      goto LABEL_89;
    }
    v52 = v4->fields.bonusKindId;
    v53 = sort->fields.bonusKindId;
LABEL_79:
    if ( v52 == v53 )
    {
      isEventUpVal = v4->fields.isEventUpVal;
      goto LABEL_91;
    }
LABEL_89:
    this = (EquipGraphListViewItem_o *)v4->fields.userSvtEntity;
    v4->fields.bonusKind = bonusKind2;
    v4->fields.bonusKindId = v53;
    if ( !this )
      goto LABEL_124;
    EventUpVal_40936896 = UserServantEntity__getEventUpVal_40936896(
                            (UserServantEntity_o *)this,
                            -1,
                            0,
                            0,
                            setupInfo,
                            v53,
                            0,
                            0LL);
    isEventUpVal = EventUpVal_40936896;
    v4->fields.isEventUpVal = EventUpVal_40936896;
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
      v50 = sort->fields.bonusKindId;
LABEL_96:
      v4->fields.bonusKind = 0;
      v4->fields.bonusKindId = v50;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, sort);
      this = (EquipGraphListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventGroupMaster___);
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
      v68 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_EventGroupEntity__bool__TypeInfo, sort, v66, v67);
      v69 = &Method_EquipGraphListViewItem__SetSortValue_b__58_0__;
      goto LABEL_119;
    }
    v50 = sort->fields.bonusKindId;
    if ( v4->fields.bonusKindId != v50 )
      goto LABEL_96;
LABEL_120:
    v75 = v4->fields.isEventUpVal;
    goto LABEL_121;
  }
  if ( v4->fields.bonusKind != 3 )
  {
    v63 = sort->fields.bonusKindId;
    goto LABEL_104;
  }
  bonusKindId = v4->fields.bonusKindId;
  v63 = sort->fields.bonusKindId;
LABEL_86:
  if ( bonusKindId == v63 )
    goto LABEL_120;
LABEL_104:
  v4->fields.bonusKind = 3;
  v4->fields.bonusKindId = v63;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, sort);
  this = (EquipGraphListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventCampaignMaster___);
  userSvtEntity = v4->fields.userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_124;
  v71 = this;
  v73 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v72 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, sort);
  *(_QWORD *)&v83.fields.currentCryptoKey = v73;
  *(_QWORD *)&v83.fields.fakeValue = v72;
  this = (EquipGraphListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v83, 0LL);
  if ( !v71 )
    goto LABEL_124;
  IsEnableServant = EventCampaignMaster__IsEnableServant(
                      (EventCampaignMaster_o *)v71,
                      (int32_t)this,
                      v4->fields.bonusKindId,
                      0LL);
  v75 = IsEnableServant;
  v4->fields.isEventUpVal = IsEnableServant;
LABEL_121:
  if ( !v75 )
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
  v29 = !isChoice;
  v30 = !isChoice;
  v31 = !v29;
  if ( !isSwapChoice )
    v30 = v31;
  if ( v30 )
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
      v32 = v4->fields.userSvtEntity;
      if ( !v32 )
        goto LABEL_124;
      v33 = *(_OWORD *)&v32->fields.id.fields.fakeValue;
      *(_OWORD *)&v81.fields.currentCryptoKey = *(_OWORD *)&v32->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v81.fields.fakeValue = v33;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, sort);
      v80 = v81;
      this = (EquipGraphListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v80, 0LL);
      v34 = v4->fields.userSvtEntity;
      v4->fields.sortValue1 = (int64_t)this;
      if ( !v34 )
        goto LABEL_124;
      this = (EquipGraphListViewItem_o *)v4->fields.iconLabelInfo1;
      if ( !this )
        goto LABEL_124;
      IconLabelInfo__SetTime((IconLabelInfo_o *)this, 49, v34->fields.createdAt, 0, 0, 0, 0LL);
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
      IconLabelInfo__Set_38850420(iconLabelInfo1, 2, klass_low, (int32_t)this, 0, 0, 0, 0, 0LL);
      goto LABEL_47;
    case 5:
      v38 = v4->fields.userSvtEntity;
      if ( !v38 )
        goto LABEL_124;
      hp = v38->fields.hp;
      this = (EquipGraphListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = hp;
      if ( !this )
        goto LABEL_124;
      adjustHp = v38->fields.adjustHp;
      v41 = 3;
      goto LABEL_37;
    case 6:
      v42 = v4->fields.userSvtEntity;
      if ( !v42 )
        goto LABEL_124;
      hp = v42->fields.atk;
      this = (EquipGraphListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = hp;
      if ( !this )
        goto LABEL_124;
      adjustHp = v42->fields.adjustAtk;
      v41 = 5;
LABEL_37:
      IconLabelInfo__Set_38850420((IconLabelInfo_o *)this, v41, hp, adjustHp, 0, 0, 0, 0, 0LL);
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
          v48 = sort->fields.manager;
        else
          v48 = 0LL;
      }
      else
      {
        v48 = 0LL;
      }
      v54 = v4->fields.userSvtEntity;
      if ( !v54 )
        goto LABEL_124;
      v56 = *(_QWORD *)&v54->fields.svtId.fields.currentCryptoKey;
      v55 = *(_QWORD *)&v54->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, sort);
      *(_QWORD *)&v82.fields.currentCryptoKey = v56;
      *(_QWORD *)&v82.fields.fakeValue = v55;
      this = (EquipGraphListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v82, 0LL);
      if ( !v48 )
        goto LABEL_124;
      this = (EquipGraphListViewItem_o *)EquipGraphListViewManager__GetAmountSortValue(
                                           (EquipGraphListViewManager_o *)v48,
                                           (int32_t)this,
                                           v57);
      v4->fields.amountSortValue = (int64_t)this;
LABEL_74:
      v58 = v4->fields.servantEntity;
      if ( !v58 )
        goto LABEL_124;
      collectionNo = v58->fields.collectionNo;
      v60 = v4->fields.userSvtEntity;
      v4->fields.sortValue1 = ((_QWORD)this << 48) | ((unsigned __int64)(unsigned int)v4->fields.rarity << 32) | collectionNo;
      if ( !v60 )
        goto LABEL_124;
      iconLabelInfo2 = v4->fields.iconLabelInfo1;
      klass = v60->fields.lv;
      this = (EquipGraphListViewItem_o *)v60;
      break;
    default:
      return (char)this;
  }
  this = (EquipGraphListViewItem_o *)UserServantEntity__getLevelMax((UserServantEntity_o *)this, 0LL);
  if ( !iconLabelInfo2 )
LABEL_124:
    sub_1BCAA3C(this, sort);
  IconLabelInfo__Set_38850420(iconLabelInfo2, 2, klass, (int32_t)this, 0, 0, 0, 0, 0LL);
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
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  int64_t Member; // x0
  __int64 v17; // x1
  __int64 v18; // x8
  int v19; // w21
  int32_t v20; // w22
  PartyListViewItem_o *v21; // x24
  int32_t i; // w25
  PartyOrganizationListViewItem_o *v23; // x26
  struct UserServantEntity_o *userSvtEntity; // x23
  const MethodInfo *v25; // x4
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o EquipSvtId; // kr00_16
  struct UserServantEntity_o *v27; // x27
  int64_t v28; // x26
  struct UserServantEntity_o *v29; // x8
  __int128 v30; // q0
  int32_t v31; // w0
  PartyOrganizationListViewItem_o *v32; // x0
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  struct UserServantEntity_o *v39; // x8
  __int128 v40; // q0
  int64_t v41; // x0
  int32_t WeareMember; // w0
  PartyOrganizationListViewItem_o *v43; // x0
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v50; // kr10_16
  struct UserServantEntity_o *v51; // x8
  int v52; // w21
  struct UserServantEntity_o *v53; // x8
  __int64 v54; // x21
  __int64 v55; // x22
  int32_t v56; // w0
  PartyListViewItem_array *v58; // [xsp+18h] [xbp-F8h]
  PartyListViewItem_o *v59; // [xsp+20h] [xbp-F0h]
  PartyOrganizationUtility_o *v60; // [xsp+28h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v61; // [xsp+30h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v62; // [xsp+50h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v63; // [xsp+70h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v64; // [xsp+90h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v65; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v66; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v67; // 0:x2.16

  v8 = partyItem;
  v9 = baseDeckItemList;
  if ( (byte_4B159A9 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, equippedMemberItem, baseDeckItemList);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12, v13);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v14, v15);
    byte_4B159A9 = 1;
  }
  *equippedMemberItem = 0LL;
  v60 = (PartyOrganizationUtility_o *)equippedMemberItem;
  sub_1BCA784(
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
  v18 = *(_QWORD *)&v9->max_length;
  this->fields._MaxWave_k__BackingField = v18;
  this->fields.wearerMember = -1;
  if ( (int)v18 >= 1 )
  {
    v19 = 0;
    v20 = 1;
    v58 = v9;
    v59 = v8;
    do
    {
      if ( v19 >= (unsigned int)v18 )
LABEL_57:
        sub_1BCAA44(Member, v17);
      if ( !v8 )
        goto LABEL_56;
      v21 = v9->m_Items[v19];
      if ( !v21 )
        goto LABEL_56;
      if ( v8->fields.index != v21->fields.index )
      {
        for ( i = 0; ; ++i )
        {
          Member = (int64_t)BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v17);
            Member = (int64_t)BalanceConfig_TypeInfo;
          }
          if ( i >= *(_DWORD *)(*(_QWORD *)(Member + 184) + 160LL) )
            break;
          Member = (int64_t)PartyListViewItem__GetMember(v21, i, 0LL);
          if ( !Member )
            goto LABEL_56;
          v23 = (PartyOrganizationListViewItem_o *)Member;
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
              EquipSvtId = PartyOrganizationListViewItem__get_EquipSvtId(v23, 0LL);
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(
                  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                  *(_QWORD *)&EquipSvtId.fields.fakeValue);
              *(_QWORD *)&v65.fields.currentCryptoKey = &userSvtEntity->fields.svtId;
              *(_QWORD *)&v65.fields.fakeValue = *(_QWORD *)&EquipSvtId.fields.currentCryptoKey;
              *(_QWORD *)&v67.fields.currentCryptoKey = *(_QWORD *)&EquipSvtId.fields.fakeValue;
              *(_QWORD *)&v67.fields.fakeValue = 0LL;
              Member = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__Equals_47012576(v65, v67, v25);
              this->fields._IsUnique_k__BackingField = Member & 1;
              if ( (Member & 1) != 0 )
              {
                this->fields._UniqueOrganizedWave_k__BackingField = v20;
                this->fields._IsClearedWave_k__BackingField = v21->fields._IsClearedWave_k__BackingField;
              }
            }
            v27 = this->fields.userSvtEntity;
            if ( !v27 )
              goto LABEL_56;
            Member = (int64_t)PartyOrganizationListViewItem__GetEquipList(v23, 0LL);
            if ( !Member )
              goto LABEL_56;
            if ( !*(_DWORD *)(Member + 24) )
              goto LABEL_57;
            v28 = *(_QWORD *)(Member + 32);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v17);
            CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v64, v28, 0LL);
            v63 = v64;
            Member = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__Equals_47015500(&v27->fields.id, &v63, 0LL);
            if ( (Member & 1) != 0 )
            {
              v39 = this->fields.userSvtEntity;
              if ( v39 )
              {
                v40 = *(_OWORD *)&v39->fields.id.fields.fakeValue;
                *(_OWORD *)&v64.fields.currentCryptoKey = *(_OWORD *)&v39->fields.id.fields.currentCryptoKey;
                *(_OWORD *)&v64.fields.fakeValue = v40;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v17);
                v62 = v64;
                v41 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v62, 0LL);
                WeareMember = PartyListViewItem__GetWeareMember(v21, v41, 0LL);
                this->fields.wearerMember = WeareMember;
                if ( (WeareMember & 0x80000000) == 0 )
                {
                  v43 = PartyListViewItem__GetMember(v21, WeareMember, 0LL);
                  v60->klass = (PartyOrganizationUtility_c *)v43;
                  sub_1BCA784(v60, (int64_t)v43, v44, v45, v46, v47, v48, v49);
                }
                this->fields._OrganizedWave_k__BackingField = v20;
                this->fields._IsClearedWave_k__BackingField = v21->fields._IsClearedWave_k__BackingField;
                return;
              }
LABEL_56:
              sub_1BCAA3C(Member, v17);
            }
          }
        }
        v9 = v58;
        v8 = v59;
        v18 = *(_QWORD *)&v58->max_length;
      }
      ++v19;
      ++v20;
    }
    while ( v19 < (int)v18 );
  }
  v29 = this->fields.userSvtEntity;
  if ( !v29 )
    goto LABEL_56;
  v30 = *(_OWORD *)&v29->fields.id.fields.fakeValue;
  *(_OWORD *)&v64.fields.currentCryptoKey = *(_OWORD *)&v29->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v64.fields.fakeValue = v30;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v17);
  v61 = v64;
  Member = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v61, 0LL);
  if ( !v8 )
    goto LABEL_56;
  v31 = PartyListViewItem__GetWeareMember(v8, Member, 0LL);
  this->fields.wearerMember = v31;
  if ( (v31 & 0x80000000) == 0 )
  {
    v32 = PartyListViewItem__GetMember(v8, v31, 0LL);
    v60->klass = (PartyOrganizationUtility_c *)v32;
    sub_1BCA784(v60, (int64_t)v32, v33, v34, v35, v36, v37, v38);
    return;
  }
  if ( !this->fields._IsUnique_k__BackingField )
  {
    Member = (int64_t)PartyListViewItem__GetMember(v8, memberIdx, 0LL);
    if ( !Member )
      goto LABEL_56;
    v50 = PartyOrganizationListViewItem__get_EquipSvtId((PartyOrganizationListViewItem_o *)Member, 0LL);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(
        CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
        *(_QWORD *)&v50.fields.fakeValue);
    Member = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v50, 0LL);
    v51 = this->fields.userSvtEntity;
    if ( !v51 )
      goto LABEL_56;
    v52 = Member;
    Member = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v51->fields.svtId, 0LL);
    if ( v52 == (_DWORD)Member )
      return;
    v53 = this->fields.userSvtEntity;
    if ( !v53 )
      goto LABEL_56;
    v55 = *(_QWORD *)&v53->fields.svtId.fields.currentCryptoKey;
    v54 = *(_QWORD *)&v53->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17);
    *(_QWORD *)&v66.fields.currentCryptoKey = v55;
    *(_QWORD *)&v66.fields.fakeValue = v54;
    v56 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v66, 0LL);
    this->fields._IsUnique_k__BackingField = PartyListViewItem__IsIdenticalEquipMember(v8, v56, 0LL);
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

  if ( (byte_4B159AA & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, baseDeckItemList, partyItem);
    byte_4B159AA = 1;
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
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.wearerServantName, 0LL, v10, v11, v12, v13, v14, v15);
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
    sub_1BCA784(
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
      j_il2cpp_runtime_class_init_0(
        CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
        *(_QWORD *)&SvtId.fields.fakeValue);
    Member = (PartyOrganizationListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                                  SvtId,
                                                  0LL);
    this->fields.wearersSvtId = (int)Member;
    if ( !equippedMemberItem
      || (Member = (PartyOrganizationListViewItem_o *)equippedMemberItem->fields.userServantEntity) == 0LL )
    {
LABEL_15:
      sub_1BCAA3C(Member, wearerMember);
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
  UserServantEntity_o *v18; // x21
  EventUpValSetupInfo_o *setupInfo; // x20
  int32_t eventId; // w19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_4B159B0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventCampaignMaster___, entity, method);
    sub_1BCA7E0(&DataManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v9, v10);
    byte_4B159B0 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, entity);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventCampaignMaster___);
  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_15;
  v14 = (EventCampaignMaster_o *)Master_object;
  v16 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v15 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
  *(_QWORD *)&v21.fields.currentCryptoKey = v16;
  *(_QWORD *)&v21.fields.fakeValue = v15;
  Master_object = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v21, 0LL);
  if ( !entity || !v14 )
    goto LABEL_15;
  if ( EventCampaignMaster__IsEnableServant(v14, (int32_t)Master_object, entity->fields.eventId, 0LL) )
    return 1;
  v18 = this->fields.userSvtEntity;
  setupInfo = this->fields.setupInfo;
  eventId = entity->fields.eventId;
  Master_object = SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Master_object || !v18 )
LABEL_15:
    sub_1BCAA3C(Master_object, v12);
  return UserServantEntity__getEventUpVal_40936552(v18, setupInfo, eventId, (int64_t)Master_object[6].monitor, 0LL);
}


bool __fastcall EquipGraphListViewItem___SetSortValue_b__58_1(
        EquipGraphListViewItem_o *this,
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
  UserServantEntity_o *v18; // x21
  EventUpValSetupInfo_o *setupInfo; // x20
  int32_t eventId; // w19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_4B159B1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventCampaignMaster___, entity, method);
    sub_1BCA7E0(&DataManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v9, v10);
    byte_4B159B1 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, entity);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventCampaignMaster___);
  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_15;
  v14 = (EventCampaignMaster_o *)Master_object;
  v16 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v15 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
  *(_QWORD *)&v21.fields.currentCryptoKey = v16;
  *(_QWORD *)&v21.fields.fakeValue = v15;
  Master_object = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v21, 0LL);
  if ( !entity || !v14 )
    goto LABEL_15;
  if ( EventCampaignMaster__IsEnableServant(v14, (int32_t)Master_object, entity->fields.eventId, 0LL) )
    return 1;
  v18 = this->fields.userSvtEntity;
  setupInfo = this->fields.setupInfo;
  eventId = entity->fields.eventId;
  Master_object = SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Master_object || !v18 )
LABEL_15:
    sub_1BCAA3C(Master_object, v12);
  return UserServantEntity__getEventUpVal_40936552(v18, setupInfo, eventId, (int64_t)Master_object[6].monitor, 0LL);
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
  __int64 v2; // x2
  ServantEntity_o *servantEntity; // x0
  LocalizationManager_c *v6; // x0

  if ( (byte_4B159AD & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    byte_4B159AD = 1;
  }
  servantEntity = this->fields.servantEntity;
  if ( servantEntity )
    return ServantEntity__getName(servantEntity, -1, -1, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  if ( !byte_4B1194D )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    byte_4B1194D = 1;
  }
  v6 = LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
    v6 = LocalizationManager_TypeInfo;
  }
  return v6->static_fields->unknownNameText;
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  Il2CppObject *Entity; // x0
  System_String_o **p_monitor; // x8
  LocalizationManager_c *v14; // x0

  if ( (byte_4B159AE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantClassMaster___, method, v2);
    sub_1BCA7E0(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v4, v5);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9);
    byte_4B159AE = 1;
  }
  if ( this->fields.weareClassId < 1 )
    goto LABEL_19;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantClassMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v11);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             this->fields.weareClassId,
             (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( Entity )
  {
    p_monitor = (System_String_o **)&Entity[1].monitor;
  }
  else
  {
LABEL_19:
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
    if ( !byte_4B1194D )
    {
      sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
      byte_4B1194D = 1;
    }
    v14 = LocalizationManager_TypeInfo;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
      v14 = LocalizationManager_TypeInfo;
    }
    p_monitor = &v14->static_fields->unknownNameText;
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