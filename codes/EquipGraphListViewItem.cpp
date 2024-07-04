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
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  IconLabelInfo_o *v23; // x20
  int32_t v24; // w2
  int32_t v25; // w3
  IconLabelInfo_o *v26; // x27
  struct IconLabelInfo_o **p_iconLabelInfo2; // x20
  int32_t v28; // w2
  int32_t v29; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_userSvtEntity; // x21
  int32_t v31; // w2
  int32_t v32; // w3
  int32_t v33; // w2
  int32_t v34; // w3
  int64_t Instance; // x0
  __int64 v36; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v37; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v38; // x26
  __int64 v39; // x27
  __int64 v40; // x28
  Il2CppObject *Entity; // x0
  struct ServantEntity_o **p_servantEntity; // x26
  int32_t v43; // w2
  int32_t v44; // w3
  ServantLimitMaster_o *v45; // x27
  int32_t v46; // w28
  __int128 v47; // q1
  const MethodInfo *v48; // x5
  int32_t v49; // w2
  int32_t v50; // w3
  __int128 v51; // q0
  int64_t v52; // x0
  int32_t WeareMember; // w0
  int32_t wearerMember; // w1
  struct System_String_o *ServantName; // x0
  int32_t v56; // w2
  int32_t v57; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  UserServantEntity_o *v59; // x8
  UserServantEntity_o *v60; // x8
  bool IsChoice; // w8
  UserServantEntity_o *v62; // x8
  struct EventUpValSetupInfo_o *v63; // x8
  int32_t EventId; // w23
  PartyOrganizationListViewItem_o *Member; // x24
  struct UserServantEntity_o *userServantEntity; // x8
  PartyOrganizationUtility_o *v67; // x22
  __int64 v68; // x25
  __int64 v69; // x26
  UserServantEntity_o *v70; // x8
  int32_t v71; // w24
  int32_t v72; // w25
  struct ServantEntity_o *servantEntity; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v74; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v75; // q0
  int64_t v76; // x8
  struct System_Int32_array *EquipCategoryIdList; // x0
  ServantStatusBattleListViewItem_o *p_categoryIdList; // x19
  int32_t v79; // w2
  int32_t v80; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v82; // [xsp+10h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v83; // [xsp+30h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v84; // [xsp+50h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v85; // [xsp+70h] [xbp-A0h]
  int32_t actMaxRarity; // [xsp+9Ch] [xbp-74h] BYREF
  System_String_o *skillName; // [xsp+A0h] [xbp-70h] BYREF
  PartyOrganizationListViewItem_o *equippedMemberItem; // [xsp+A8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v89; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v90; // 0:x0.16

  if ( (byte_48E220B & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataManager_GetMasterData_ServantLimitMaster___, *(_QWORD *)&index);
    sub_1B00CCC(&Method_DataManager_GetMasterData_ServantMaster___, v16);
    sub_1B00CCC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v17);
    sub_1B00CCC(&IconLabelInfo_TypeInfo, v18);
    sub_1B00CCC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v19);
    sub_1B00CCC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v20);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    sub_1B00CCC(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v22);
    byte_48E220B = 1;
  }
  skillName = 0LL;
  equippedMemberItem = 0LL;
  actMaxRarity = 0;
  v23 = (IconLabelInfo_o *)sub_1B00F18(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v23, 0LL);
  this->fields.iconLabelInfo1 = v23;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.iconLabelInfo1, (int32_t)v23, v24, v25);
  v26 = (IconLabelInfo_o *)sub_1B00F18(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v26, 0LL);
  this->fields.iconLabelInfo2 = v26;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.iconLabelInfo2, (int32_t)v26, v28, v29);
  ListViewItem___ctor_39415512((ListViewItem_o *)this, index, 0LL);
  this->fields.userSvtEntity = userSvtEntity;
  p_userSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userSvtEntity;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.userSvtEntity, (int32_t)userSvtEntity, v31, v32);
  this->fields.setupInfo = setupInfo;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v33, v34);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_58;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_ServantMaster___);
  v37 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_58;
  v38 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v40 = *(_QWORD *)&v37[5].fields.currentCryptoKey;
  v39 = *(_QWORD *)&v37[5].fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v89.fields.currentCryptoKey = v40;
  *(_QWORD *)&v89.fields.fakeValue = v39;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45313044(v89, 0LL);
  if ( !v38 )
    goto LABEL_58;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v38,
             Instance,
             (const MethodInfo_2FE6A4C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)Entity;
  p_servantEntity = &this->fields.servantEntity;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.servantEntity, (int32_t)Entity, v43, v44);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_58;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtEntity )
    goto LABEL_58;
  v45 = (ServantLimitMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45313044((*p_userSvtEntity)[5], 0LL);
  if ( !*p_userSvtEntity )
    goto LABEL_58;
  v46 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45313044((*p_userSvtEntity)[6], 0LL);
  if ( !v45 )
    goto LABEL_58;
  Instance = (int64_t)ServantLimitMaster__GetEntity(v45, v46, Instance, 0LL);
  if ( !*p_servantEntity )
    goto LABEL_58;
  this->fields.classId = (*p_servantEntity)->fields.classId;
  if ( !Instance )
    goto LABEL_58;
  this->fields.rarity = *(_DWORD *)(Instance + 24);
  if ( !userSvtEntity )
    goto LABEL_58;
  v47 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v85.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v85.fields.fakeValue = v47;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v84 = v85;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45316568(&v84, 0LL);
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
    EquipGraphListViewItem__SetWaveBattleInfo(this, &equippedMemberItem, baseDeckItemList, partyItem, memberIdx, v48);
  }
  else
  {
    v51 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
    *(_OWORD *)&v85.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v85.fields.fakeValue = v51;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v83 = v85;
    v52 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45316568(&v83, 0LL);
    WeareMember = PartyListViewItem__GetWeareMember(partyItem, v52, 0LL);
    this->fields.wearerMember = WeareMember;
    if ( (WeareMember & 0x80000000) == 0 )
      equippedMemberItem = PartyListViewItem__GetMember(partyItem, WeareMember, 0LL);
  }
  wearerMember = this->fields.wearerMember;
  if ( (wearerMember & 0x80000000) != 0 )
  {
    this->fields.wearerServantName = 0LL;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.wearerServantName, 0, v49, v50);
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
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.wearerServantName, (int32_t)ServantName, v56, v57);
    Instance = (int64_t)equippedMemberItem;
    if ( !equippedMemberItem )
      goto LABEL_58;
    this->fields.weareClassId = equippedMemberItem->fields.classId;
    SvtId = PartyOrganizationListViewItem__get_SvtId((PartyOrganizationListViewItem_o *)Instance, 0LL);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45313044(SvtId, 0LL);
    this->fields.wearersSvtId = Instance;
    if ( !equippedMemberItem )
      goto LABEL_58;
    Instance = (int64_t)equippedMemberItem->fields.userServantEntity;
    if ( !Instance )
      goto LABEL_58;
    Instance = UserServantEntity__getRarity((UserServantEntity_o *)Instance, 0LL);
  }
  v59 = this->fields.userSvtEntity;
  this->fields.weareRarity = Instance;
  if ( !v59 )
    goto LABEL_58;
  Instance = UserServantEntity__IsLock(v59, 0LL);
  v60 = this->fields.userSvtEntity;
  this->fields.isLock = Instance & 1;
  if ( !v60 )
    goto LABEL_58;
  IsChoice = UserServantEntity__IsChoice(v60, 0LL);
  Instance = (int64_t)this->fields.userSvtEntity;
  this->fields.isChoice = IsChoice;
  *(_WORD *)&this->fields.isSwapLock = 0;
  if ( !Instance )
    goto LABEL_58;
  Instance = UserServantEntity__IsFriendShipSvtEquip((UserServantEntity_o *)Instance, 0LL);
  v62 = this->fields.userSvtEntity;
  this->fields.isFriendShipSvtEq = Instance & 1;
  if ( !v62 )
    goto LABEL_58;
  Instance = UserServantEntity__IsChocolateSvtEquip(v62, 0LL);
  v63 = this->fields.setupInfo;
  this->fields.isChocolateSvtEquip = Instance & 1;
  if ( v63 )
  {
    if ( v63->fields.isQuestStart )
      EventId = EventUpValSetupInfo__get_EventId(v63, 0LL);
    else
      EventId = -1;
    Member = PartyListViewItem__GetMember(partyItem, memberIdx, 0LL);
    Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_35FC010 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( Member )
    {
      userServantEntity = Member->fields.userServantEntity;
      if ( userServantEntity )
      {
        v67 = (PartyOrganizationUtility_o *)Instance;
        v69 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
        v68 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v90.fields.currentCryptoKey = v69;
        *(_QWORD *)&v90.fields.fakeValue = v68;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45313044(v90, 0LL);
        v70 = Member->fields.userServantEntity;
        if ( v70 )
        {
          v71 = Instance;
          Instance = UserServantEntity__getRarity(v70, 0LL);
          if ( *p_userSvtEntity )
          {
            v72 = Instance;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45313044((*p_userSvtEntity)[5], 0LL);
            if ( v67 )
            {
              Instance = PartyOrganizationUtility__IsRarityRestriction(
                           v67,
                           &skillName,
                           &actMaxRarity,
                           v71,
                           v72,
                           Instance,
                           EventId,
                           0LL);
              LOBYTE(v63) = Instance & 1;
              goto LABEL_50;
            }
          }
        }
      }
    }
LABEL_58:
    sub_1B00F28(Instance, v36);
  }
LABEL_50:
  servantEntity = this->fields.servantEntity;
  this->fields.isInvalidRarity = (char)v63;
  this->fields.isEventUpVal = 0;
  *(_QWORD *)&this->fields.bonusKind = 1LL;
  if ( !servantEntity )
    goto LABEL_58;
  v74 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_58;
  this->fields.sortValue2 = ((__int64)servantEntity->fields.collectionNo << 16) | ((unsigned __int64)(unsigned int)this->fields.rarity << 48) | v74[16].fields.currentCryptoKey;
  v75 = v74[2];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v85.fields.currentCryptoKey = v74[1];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v85.fields.fakeValue = v75;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v82 = v85;
  v76 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45316568(&v82, 0LL);
  Instance = (int64_t)this->fields.userSvtEntity;
  this->fields.sortValue2B = v76;
  this->fields.amountSortValue = -1LL;
  if ( !Instance )
    goto LABEL_58;
  EquipCategoryIdList = UserServantEntity__GetEquipCategoryIdList((UserServantEntity_o *)Instance, 1, 0LL);
  this->fields.categoryIdList = EquipCategoryIdList;
  p_categoryIdList = (ServantStatusBattleListViewItem_o *)&this->fields.categoryIdList;
  sub_1B00C70(p_categoryIdList, (int32_t)EquipCategoryIdList, v79, v80);
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
void __fastcall EquipGraphListViewItem___ctor_37426384(
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
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  IconLabelInfo_o *v20; // x20
  int32_t v21; // w2
  int32_t v22; // w3
  IconLabelInfo_o *v23; // x26
  struct IconLabelInfo_o **p_iconLabelInfo2; // x20
  int32_t v25; // w2
  int32_t v26; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_userSvtEntity; // x21
  int32_t v28; // w2
  int32_t v29; // w3
  int32_t v30; // w2
  int32_t v31; // w3
  int64_t Instance; // x0
  __int64 v33; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v34; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v35; // x25
  __int64 v36; // x26
  __int64 v37; // x27
  Il2CppObject *Entity; // x0
  struct ServantEntity_o **p_servantEntity; // x25
  int32_t v40; // w2
  int32_t v41; // w3
  ServantLimitMaster_o *v42; // x26
  int32_t v43; // w27
  UserServantEntity_Fields *p_fields; // x24
  __int128 v45; // q0
  __int128 v46; // q1
  bool v47; // w8
  __int128 v48; // q1
  int32_t WeareMember; // w0
  int32_t v50; // w2
  int32_t v51; // w3
  PartyOrganizationListViewItem_o *v52; // x22
  struct System_String_o *ServantName; // x0
  int32_t v54; // w2
  int32_t v55; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  UserServantEntity_o *v57; // x8
  UserServantEntity_o *v58; // x8
  bool IsChoice; // w8
  UserServantEntity_o *v60; // x8
  struct ServantEntity_o *servantEntity; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v62; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v63; // q0
  int64_t v64; // x8
  struct System_Int32_array *EquipCategoryIdList; // x0
  ServantStatusBattleListViewItem_o *p_categoryIdList; // x19
  int32_t v67; // w2
  int32_t v68; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v69; // [xsp+0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v70; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v71; // [xsp+40h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v72; // [xsp+60h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v73; // 0:x0.16

  if ( (byte_48E220C & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataManager_GetMasterData_ServantLimitMaster___, *(_QWORD *)&index);
    sub_1B00CCC(&Method_DataManager_GetMasterData_ServantMaster___, v14);
    sub_1B00CCC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v15);
    sub_1B00CCC(&IconLabelInfo_TypeInfo, v16);
    sub_1B00CCC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17);
    sub_1B00CCC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v18);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    byte_48E220C = 1;
  }
  v20 = (IconLabelInfo_o *)sub_1B00F18(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v20, 0LL);
  this->fields.iconLabelInfo1 = v20;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.iconLabelInfo1, (int32_t)v20, v21, v22);
  v23 = (IconLabelInfo_o *)sub_1B00F18(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v23, 0LL);
  this->fields.iconLabelInfo2 = v23;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.iconLabelInfo2, (int32_t)v23, v25, v26);
  ListViewItem___ctor_39415512((ListViewItem_o *)this, index, 0LL);
  this->fields.userSvtEntity = userSvtEntity;
  p_userSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userSvtEntity;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.userSvtEntity, (int32_t)userSvtEntity, v28, v29);
  this->fields.setupInfo = setupInfo;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v30, v31);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_ServantMaster___);
  v34 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_37;
  v35 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v37 = *(_QWORD *)&v34[5].fields.currentCryptoKey;
  v36 = *(_QWORD *)&v34[5].fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v73.fields.currentCryptoKey = v37;
  *(_QWORD *)&v73.fields.fakeValue = v36;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45313044(v73, 0LL);
  if ( !v35 )
    goto LABEL_37;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v35,
             Instance,
             (const MethodInfo_2FE6A4C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)Entity;
  p_servantEntity = &this->fields.servantEntity;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.servantEntity, (int32_t)Entity, v40, v41);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtEntity )
    goto LABEL_37;
  v42 = (ServantLimitMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45313044((*p_userSvtEntity)[5], 0LL);
  if ( !*p_userSvtEntity )
    goto LABEL_37;
  v43 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45313044((*p_userSvtEntity)[6], 0LL);
  if ( !v42 )
    goto LABEL_37;
  Instance = (int64_t)ServantLimitMaster__GetEntity(v42, v43, Instance, 0LL);
  if ( !*p_servantEntity )
    goto LABEL_37;
  this->fields.classId = (*p_servantEntity)->fields.classId;
  if ( !Instance )
    goto LABEL_37;
  this->fields.rarity = *(_DWORD *)(Instance + 24);
  if ( !userSvtEntity )
    goto LABEL_37;
  v45 = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  v46 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  p_fields = &userSvtEntity->fields;
  *(_OWORD *)&v72.fields.currentCryptoKey = v45;
  *(_OWORD *)&v72.fields.fakeValue = v46;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v71 = v72;
  v47 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45316568(&v71, 0LL) == targetSvtEquipId;
  this->fields.isOldBase = v47;
  this->fields.isBase = v47;
  v48 = *(_OWORD *)&p_fields->id.fields.fakeValue;
  *(_OWORD *)&v70.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v70.fields.fakeValue = v48;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45316568(&v70, 0LL);
  if ( !partyItem )
    goto LABEL_37;
  WeareMember = WarBoardPartyListViewItem__GetWeareMember(partyItem, Instance, 0LL);
  this->fields.wearerMember = WeareMember;
  if ( (WeareMember & 0x80000000) == 0 )
  {
    Instance = (int64_t)WarBoardPartyListViewItem__GetMemberItem(partyItem, WeareMember, 0LL);
    if ( Instance )
    {
      v52 = (PartyOrganizationListViewItem_o *)Instance;
      ServantName = PartyOrganizationListViewItem__get_ServantName((PartyOrganizationListViewItem_o *)Instance, 0LL);
      this->fields.wearerServantName = ServantName;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.wearerServantName, (int32_t)ServantName, v54, v55);
      this->fields.weareClassId = v52->fields.classId;
      SvtId = PartyOrganizationListViewItem__get_SvtId(v52, 0LL);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      this->fields.wearersSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45313044(SvtId, 0LL);
      Instance = (int64_t)v52->fields.userServantEntity;
      if ( Instance )
      {
        Instance = UserServantEntity__getRarity((UserServantEntity_o *)Instance, 0LL);
        goto LABEL_25;
      }
    }
LABEL_37:
    sub_1B00F28(Instance, v33);
  }
  this->fields.wearerServantName = 0LL;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.wearerServantName, 0, v50, v51);
  Instance = 0LL;
  *(_QWORD *)&this->fields.weareClassId = 0LL;
LABEL_25:
  v57 = this->fields.userSvtEntity;
  this->fields.weareRarity = Instance;
  if ( !v57 )
    goto LABEL_37;
  Instance = UserServantEntity__IsLock(v57, 0LL);
  v58 = this->fields.userSvtEntity;
  this->fields.isLock = Instance & 1;
  if ( !v58 )
    goto LABEL_37;
  IsChoice = UserServantEntity__IsChoice(v58, 0LL);
  Instance = (int64_t)this->fields.userSvtEntity;
  this->fields.isChoice = IsChoice;
  *(_WORD *)&this->fields.isSwapLock = 0;
  this->fields.isInvalidRarity = 0;
  if ( !Instance )
    goto LABEL_37;
  Instance = UserServantEntity__IsFriendShipSvtEquip((UserServantEntity_o *)Instance, 0LL);
  v60 = this->fields.userSvtEntity;
  this->fields.isFriendShipSvtEq = Instance & 1;
  if ( !v60 )
    goto LABEL_37;
  Instance = UserServantEntity__IsChocolateSvtEquip(v60, 0LL);
  servantEntity = this->fields.servantEntity;
  this->fields.isChocolateSvtEquip = Instance & 1;
  *(_QWORD *)&this->fields.bonusKind = 1LL;
  this->fields.isEventUpVal = 0;
  if ( !servantEntity )
    goto LABEL_37;
  v62 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_37;
  this->fields.sortValue2 = ((__int64)servantEntity->fields.collectionNo << 16) | ((unsigned __int64)(unsigned int)this->fields.rarity << 48) | v62[16].fields.currentCryptoKey;
  v63 = v62[2];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v72.fields.currentCryptoKey = v62[1];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v72.fields.fakeValue = v63;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v69 = v72;
  v64 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45316568(&v69, 0LL);
  Instance = (int64_t)this->fields.userSvtEntity;
  this->fields.sortValue2B = v64;
  this->fields.amountSortValue = -1LL;
  if ( !Instance )
    goto LABEL_37;
  EquipCategoryIdList = UserServantEntity__GetEquipCategoryIdList((UserServantEntity_o *)Instance, 1, 0LL);
  this->fields.categoryIdList = EquipCategoryIdList;
  p_categoryIdList = (ServantStatusBattleListViewItem_o *)&this->fields.categoryIdList;
  sub_1B00C70(p_categoryIdList, (int32_t)EquipCategoryIdList, v67, v68);
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
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_48E2213 & 1) == 0 )
  {
    sub_1B00CCC(&TreasureDvcInfo_TypeInfo, tdInfo);
    byte_48E2213 = 1;
  }
  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
    return UserServantEntity__getTreasureDeviceInfo(userSvtEntity, tdInfo, -1, -1, 0, 0LL);
  v7 = (TreasureDvcInfo_o *)sub_1B00F18(TreasureDvcInfo_TypeInfo);
  TreasureDvcInfo___ctor(v7, 0LL);
  *tdInfo = v7;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)tdInfo, (int32_t)v7, v8, v9);
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

  if ( (byte_48E220F & 1) == 0 )
  {
    sub_1B00CCC(&FilterKindList_TypeInfo, sort);
    sub_1B00CCC(&ListViewSort_FilterKind___TypeInfo, v5);
    sub_1B00CCC(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v6);
    byte_48E220F = 1;
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
                           (const MethodInfo_33A8C90 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                           (const MethodInfo_33A8C90 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                           (const MethodInfo_33A8C90 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                             (const MethodInfo_33A8C90 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
      RarityFilterKindList = (System_Int32Enum_array *)sub_1B00D74(ListViewSort_FilterKind___TypeInfo, 1LL);
      if ( RarityFilterKindList )
      {
        if ( !RarityFilterKindList->max_length )
          sub_1B00F30(RarityFilterKindList, RarityFilterKindList);
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
      sub_1B00F28(RarityFilterKindList, sort);
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
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1

  this->fields.userSvtEntity = userSvtEntity;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)&this->fields.userSvtEntity,
    (int32_t)userSvtEntity,
    (int32_t)method,
    v3);
  EquipGraphListViewItem__ModifyLockItem(this, v5);
  EquipGraphListViewItem__ModifyChoiceItem(this, v6);
}


void __fastcall EquipGraphListViewItem__ModifyChoiceItem(EquipGraphListViewItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0

  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_1B00F28(0LL, method);
  this->fields.isChoice = UserServantEntity__IsChoice(userSvtEntity, 0LL);
  this->fields.isSwapChoice = 0;
}


void __fastcall EquipGraphListViewItem__ModifyLockItem(EquipGraphListViewItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0

  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_1B00F28(0LL, method);
  this->fields.isLock = UserServantEntity__IsLock(userSvtEntity, 0LL);
  this->fields.isSwapLock = 0;
}


void __fastcall EquipGraphListViewItem__ModifyUserServantEntity(
        EquipGraphListViewItem_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.userSvtEntity = userServantEntity;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)&this->fields.userSvtEntity,
    (int32_t)userServantEntity,
    (int32_t)method,
    v3);
}


bool __fastcall EquipGraphListViewItem__SetSortValue(
        EquipGraphListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  EquipGraphListViewItem_o *v4; // x19
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
  EventUpValSetupInfo_o *setupInfo; // x4
  struct System_Int32_array *servantEquipFilterEventIds; // x8
  _BOOL4 isChoice; // w8
  _BOOL4 isSwapChoice; // w9
  bool v19; // zf
  _BOOL4 v20; // w8
  int v21; // w10
  struct UserServantEntity_o *v22; // x8
  __int128 v23; // q1
  struct UserServantEntity_o *v24; // x8
  int64_t rarity; // x8
  int64_t klass_low; // x20
  IconLabelInfo_o *iconLabelInfo1; // x21
  struct UserServantEntity_o *v28; // x8
  int64_t hp; // x2
  int32_t adjustHp; // w3
  int32_t v31; // w1
  struct UserServantEntity_o *v32; // x8
  IconLabelInfo_o *iconLabelInfo2; // x19
  struct ServantEntity_o *servantEntity; // x8
  int32_t klass; // w20
  struct ListViewManager_o *manager; // x8
  __int64 methodPtr_low; // x11
  struct ListViewManager_o *v38; // x20
  int32_t bonusKind2; // w8
  int32_t v40; // w8
  int32_t bonusKind2Id; // w8
  int32_t v42; // w9
  int32_t v43; // w5
  struct UserServantEntity_o *v44; // x8
  __int64 v45; // x21
  __int64 v46; // x22
  const MethodInfo *v47; // x2
  struct ServantEntity_o *v48; // x8
  __int64 collectionNo; // x10
  struct UserServantEntity_o *v50; // x8
  int isEventUpVal; // w8
  int32_t bonusKindId; // w9
  int32_t v53; // w8
  bool EventUpVal_38925380; // w0
  System_Collections_Generic_List_EventGroupEntity__o *EntitiesByGroupId; // x21
  System_Func_object__bool__o *v56; // x0
  __int64 *v57; // x8
  struct UserServantEntity_o *userSvtEntity; // x8
  EquipGraphListViewItem_o *v59; // x21
  __int64 v60; // x22
  __int64 v61; // x23
  bool IsEnableServant; // w0
  int v63; // w8
  System_Func_T__bool__o *v64; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v66; // [xsp+10h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v67; // [xsp+30h] [xbp-50h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v68; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v69; // 0:x0.16

  v4 = this;
  if ( (byte_48E2210 & 1) == 0 )
  {
    sub_1B00CCC(&Method_BasicHelper_Any_EventGroupEntity___, sort);
    sub_1B00CCC(&Method_DataManager_GetMaster_EventCampaignMaster___, v5);
    sub_1B00CCC(&Method_DataManager_GetMaster_EventGroupMaster___, v6);
    sub_1B00CCC(&DataManager_TypeInfo, v7);
    sub_1B00CCC(&Method_EquipGraphListViewItem__SetSortValue_b__58_0__, v8);
    sub_1B00CCC(&Method_EquipGraphListViewItem__SetSortValue_b__58_1__, v9);
    sub_1B00CCC(&EquipGraphListViewManager_TypeInfo, v10);
    sub_1B00CCC(&System_Func_EventGroupEntity__bool__TypeInfo, v11);
    sub_1B00CCC(&Method_System_Collections_Generic_List_EventGroupEntity__get_Count__, v12);
    sub_1B00CCC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
    this = (EquipGraphListViewItem_o *)sub_1B00CCC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v14);
    byte_48E2210 = 1;
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
        this = (EquipGraphListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_EventGroupMaster___);
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
        v56 = (System_Func_object__bool__o *)sub_1B00F18(System_Func_EventGroupEntity__bool__TypeInfo);
        v57 = &Method_EquipGraphListViewItem__SetSortValue_b__58_1__;
LABEL_119:
        v64 = (System_Func_T__bool__o *)v56;
        System_Func_object__bool____ctor(v56, (Il2CppObject *)v4, *v57, 0LL);
        v4->fields.isEventUpVal = BasicHelper__Any_object_(
                                    (System_Collections_Generic_List_T__o *)EntitiesByGroupId,
                                    v64,
                                    (const MethodInfo_2D4E780 *)Method_BasicHelper_Any_EventGroupEntity___);
        goto LABEL_120;
      }
      if ( v4->fields.bonusKind != 3 )
      {
        v53 = sort->fields.bonusKind2Id;
        goto LABEL_104;
      }
      bonusKindId = v4->fields.bonusKindId;
      v53 = sort->fields.bonusKind2Id;
      goto LABEL_86;
    }
    if ( v4->fields.bonusKind != bonusKind2 )
    {
      v43 = sort->fields.bonusKind2Id;
      goto LABEL_89;
    }
    v42 = v4->fields.bonusKindId;
    v43 = sort->fields.bonusKind2Id;
    goto LABEL_79;
  }
  bonusKind2 = sort->fields.bonusKind;
  if ( (unsigned int)(bonusKind2 - 4) < 2 )
  {
    if ( v4->fields.bonusKind != bonusKind2 )
    {
      v43 = sort->fields.bonusKindId;
      goto LABEL_89;
    }
    v42 = v4->fields.bonusKindId;
    v43 = sort->fields.bonusKindId;
LABEL_79:
    if ( v42 == v43 )
    {
      isEventUpVal = v4->fields.isEventUpVal;
      goto LABEL_91;
    }
LABEL_89:
    this = (EquipGraphListViewItem_o *)v4->fields.userSvtEntity;
    v4->fields.bonusKind = bonusKind2;
    v4->fields.bonusKindId = v43;
    if ( !this )
      goto LABEL_124;
    EventUpVal_38925380 = UserServantEntity__getEventUpVal_38925380(
                            (UserServantEntity_o *)this,
                            -1,
                            0,
                            0,
                            setupInfo,
                            v43,
                            0,
                            0LL);
    isEventUpVal = EventUpVal_38925380;
    v4->fields.isEventUpVal = EventUpVal_38925380;
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
      v40 = sort->fields.bonusKindId;
LABEL_96:
      v4->fields.bonusKind = 0;
      v4->fields.bonusKindId = v40;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      this = (EquipGraphListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_EventGroupMaster___);
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
      v56 = (System_Func_object__bool__o *)sub_1B00F18(System_Func_EventGroupEntity__bool__TypeInfo);
      v57 = &Method_EquipGraphListViewItem__SetSortValue_b__58_0__;
      goto LABEL_119;
    }
    v40 = sort->fields.bonusKindId;
    if ( v4->fields.bonusKindId != v40 )
      goto LABEL_96;
LABEL_120:
    v63 = v4->fields.isEventUpVal;
    goto LABEL_121;
  }
  if ( v4->fields.bonusKind != 3 )
  {
    v53 = sort->fields.bonusKindId;
    goto LABEL_104;
  }
  bonusKindId = v4->fields.bonusKindId;
  v53 = sort->fields.bonusKindId;
LABEL_86:
  if ( bonusKindId == v53 )
    goto LABEL_120;
LABEL_104:
  v4->fields.bonusKind = 3;
  v4->fields.bonusKindId = v53;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (EquipGraphListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_EventCampaignMaster___);
  userSvtEntity = v4->fields.userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_124;
  v59 = this;
  v61 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v60 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v69.fields.currentCryptoKey = v61;
  *(_QWORD *)&v69.fields.fakeValue = v60;
  this = (EquipGraphListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45313044(v69, 0LL);
  if ( !v59 )
    goto LABEL_124;
  IsEnableServant = EventCampaignMaster__IsEnableServant(
                      (EventCampaignMaster_o *)v59,
                      (int32_t)this,
                      v4->fields.bonusKindId,
                      0LL);
  v63 = IsEnableServant;
  v4->fields.isEventUpVal = IsEnableServant;
LABEL_121:
  if ( !v63 )
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
  v19 = !isChoice;
  v20 = !isChoice;
  v21 = !v19;
  if ( !isSwapChoice )
    v20 = v21;
  if ( v20 )
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
      v22 = v4->fields.userSvtEntity;
      if ( !v22 )
        goto LABEL_124;
      v23 = *(_OWORD *)&v22->fields.id.fields.fakeValue;
      *(_OWORD *)&v67.fields.currentCryptoKey = *(_OWORD *)&v22->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v67.fields.fakeValue = v23;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v66 = v67;
      this = (EquipGraphListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45316568(&v66, 0LL);
      v24 = v4->fields.userSvtEntity;
      v4->fields.sortValue1 = (int64_t)this;
      if ( !v24 )
        goto LABEL_124;
      this = (EquipGraphListViewItem_o *)v4->fields.iconLabelInfo1;
      if ( !this )
        goto LABEL_124;
      IconLabelInfo__SetTime((IconLabelInfo_o *)this, 49, v24->fields.createdAt, 0, 0, 0, 0LL);
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
      IconLabelInfo__Set_36930772(iconLabelInfo1, 2, klass_low, (int32_t)this, 0, 0, 0, 0, 0LL);
      goto LABEL_47;
    case 5:
      v28 = v4->fields.userSvtEntity;
      if ( !v28 )
        goto LABEL_124;
      hp = v28->fields.hp;
      this = (EquipGraphListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = hp;
      if ( !this )
        goto LABEL_124;
      adjustHp = v28->fields.adjustHp;
      v31 = 3;
      goto LABEL_37;
    case 6:
      v32 = v4->fields.userSvtEntity;
      if ( !v32 )
        goto LABEL_124;
      hp = v32->fields.atk;
      this = (EquipGraphListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = hp;
      if ( !this )
        goto LABEL_124;
      adjustHp = v32->fields.adjustAtk;
      v31 = 5;
LABEL_37:
      IconLabelInfo__Set_36930772((IconLabelInfo_o *)this, v31, hp, adjustHp, 0, 0, 0, 0, 0LL);
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
          v38 = sort->fields.manager;
        else
          v38 = 0LL;
      }
      else
      {
        v38 = 0LL;
      }
      v44 = v4->fields.userSvtEntity;
      if ( !v44 )
        goto LABEL_124;
      v46 = *(_QWORD *)&v44->fields.svtId.fields.currentCryptoKey;
      v45 = *(_QWORD *)&v44->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v68.fields.currentCryptoKey = v46;
      *(_QWORD *)&v68.fields.fakeValue = v45;
      this = (EquipGraphListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45313044(v68, 0LL);
      if ( !v38 )
        goto LABEL_124;
      this = (EquipGraphListViewItem_o *)EquipGraphListViewManager__GetAmountSortValue(
                                           (EquipGraphListViewManager_o *)v38,
                                           (int32_t)this,
                                           v47);
      v4->fields.amountSortValue = (int64_t)this;
LABEL_74:
      v48 = v4->fields.servantEntity;
      if ( !v48 )
        goto LABEL_124;
      collectionNo = v48->fields.collectionNo;
      v50 = v4->fields.userSvtEntity;
      v4->fields.sortValue1 = ((_QWORD)this << 48) | ((unsigned __int64)(unsigned int)v4->fields.rarity << 32) | collectionNo;
      if ( !v50 )
        goto LABEL_124;
      iconLabelInfo2 = v4->fields.iconLabelInfo1;
      klass = v50->fields.lv;
      this = (EquipGraphListViewItem_o *)v50;
      break;
    default:
      return (char)this;
  }
  this = (EquipGraphListViewItem_o *)UserServantEntity__getLevelMax((UserServantEntity_o *)this, 0LL);
  if ( !iconLabelInfo2 )
LABEL_124:
    sub_1B00F28(this, sort);
  IconLabelInfo__Set_36930772(iconLabelInfo2, 2, klass, (int32_t)this, 0, 0, 0, 0, 0LL);
LABEL_47:
  LOBYTE(this) = 1;
  return (char)this;
}


void __fastcall EquipGraphListViewItem__SetWaveBattleInfo(
        EquipGraphListViewItem_o *this,
        PartyOrganizationListViewItem_o **equippedMemberItem,
        PartyListViewItem_array *baseDeckItemList,
        PartyListViewItem_o *partyItem,
        int32_t memberIdx,
        const MethodInfo *method)
{
  PartyListViewItem_o *v6; // x23
  PartyListViewItem_array *v7; // x25
  __int64 v10; // x1
  __int64 v11; // x1
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
  int32_t v29; // w2
  int32_t v30; // w3
  struct UserServantEntity_o *v31; // x8
  __int128 v32; // q0
  int64_t v33; // x0
  int32_t WeareMember; // w0
  PartyOrganizationListViewItem_o *v35; // x0
  int32_t v36; // w2
  int32_t v37; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v38; // kr10_16
  struct UserServantEntity_o *v39; // x8
  int v40; // w21
  struct UserServantEntity_o *v41; // x8
  __int64 v42; // x21
  __int64 v43; // x22
  int32_t v44; // w0
  PartyListViewItem_array *v46; // [xsp+18h] [xbp-F8h]
  PartyListViewItem_o *v47; // [xsp+20h] [xbp-F0h]
  ServantStatusBattleListViewItem_o *v48; // [xsp+28h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v49; // [xsp+30h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v50; // [xsp+50h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v51; // [xsp+70h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v52; // [xsp+90h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v53; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v54; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v55; // 0:x2.16

  v6 = partyItem;
  v7 = baseDeckItemList;
  if ( (byte_48E220D & 1) == 0 )
  {
    sub_1B00CCC(&BalanceConfig_TypeInfo, equippedMemberItem);
    sub_1B00CCC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    sub_1B00CCC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v11);
    byte_48E220D = 1;
  }
  *equippedMemberItem = 0LL;
  v48 = (ServantStatusBattleListViewItem_o *)equippedMemberItem;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)equippedMemberItem, 0, (int32_t)baseDeckItemList, (int32_t)partyItem);
  if ( !v7 )
    goto LABEL_56;
  v14 = *(_QWORD *)&v7->max_length;
  this->fields._MaxWave_k__BackingField = v14;
  this->fields.wearerMember = -1;
  if ( (int)v14 >= 1 )
  {
    v15 = 0;
    v16 = 1;
    v46 = v7;
    v47 = v6;
    do
    {
      if ( v15 >= (unsigned int)v14 )
LABEL_57:
        sub_1B00F30(Member, v13);
      if ( !v6 )
        goto LABEL_56;
      v17 = v7->m_Items[v15];
      if ( !v17 )
        goto LABEL_56;
      if ( v6->fields.index != v17->fields.index )
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
              *(_QWORD *)&v53.fields.currentCryptoKey = &userSvtEntity->fields.svtId;
              *(_QWORD *)&v53.fields.fakeValue = *(_QWORD *)&EquipSvtId.fields.currentCryptoKey;
              *(_QWORD *)&v55.fields.currentCryptoKey = *(_QWORD *)&EquipSvtId.fields.fakeValue;
              *(_QWORD *)&v55.fields.fakeValue = 0LL;
              Member = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__Equals_45314192(v53, v55, v21);
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
            CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v52, v24, 0LL);
            v51 = v52;
            Member = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__Equals_45317116(&v23->fields.id, &v51, 0LL);
            if ( (Member & 1) != 0 )
            {
              v31 = this->fields.userSvtEntity;
              if ( v31 )
              {
                v32 = *(_OWORD *)&v31->fields.id.fields.fakeValue;
                *(_OWORD *)&v52.fields.currentCryptoKey = *(_OWORD *)&v31->fields.id.fields.currentCryptoKey;
                *(_OWORD *)&v52.fields.fakeValue = v32;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                v50 = v52;
                v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45316568(&v50, 0LL);
                WeareMember = PartyListViewItem__GetWeareMember(v17, v33, 0LL);
                this->fields.wearerMember = WeareMember;
                if ( (WeareMember & 0x80000000) == 0 )
                {
                  v35 = PartyListViewItem__GetMember(v17, WeareMember, 0LL);
                  v48->klass = (ServantStatusBattleListViewItem_c *)v35;
                  sub_1B00C70(v48, (int32_t)v35, v36, v37);
                }
                this->fields._OrganizedWave_k__BackingField = v16;
                this->fields._IsClearedWave_k__BackingField = v17->fields._IsClearedWave_k__BackingField;
                return;
              }
LABEL_56:
              sub_1B00F28(Member, v13);
            }
          }
        }
        v7 = v46;
        v6 = v47;
        v14 = *(_QWORD *)&v46->max_length;
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
  *(_OWORD *)&v52.fields.currentCryptoKey = *(_OWORD *)&v25->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v52.fields.fakeValue = v26;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v49 = v52;
  Member = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45316568(&v49, 0LL);
  if ( !v6 )
    goto LABEL_56;
  v27 = PartyListViewItem__GetWeareMember(v6, Member, 0LL);
  this->fields.wearerMember = v27;
  if ( (v27 & 0x80000000) == 0 )
  {
    v28 = PartyListViewItem__GetMember(v6, v27, 0LL);
    v48->klass = (ServantStatusBattleListViewItem_c *)v28;
    sub_1B00C70(v48, (int32_t)v28, v29, v30);
    return;
  }
  if ( !this->fields._IsUnique_k__BackingField )
  {
    Member = (int64_t)PartyListViewItem__GetMember(v6, memberIdx, 0LL);
    if ( !Member )
      goto LABEL_56;
    v38 = PartyOrganizationListViewItem__get_EquipSvtId((PartyOrganizationListViewItem_o *)Member, 0LL);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    Member = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45313044(v38, 0LL);
    v39 = this->fields.userSvtEntity;
    if ( !v39 )
      goto LABEL_56;
    v40 = Member;
    Member = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45313044(v39->fields.svtId, 0LL);
    if ( v40 == (_DWORD)Member )
      return;
    v41 = this->fields.userSvtEntity;
    if ( !v41 )
      goto LABEL_56;
    v43 = *(_QWORD *)&v41->fields.svtId.fields.currentCryptoKey;
    v42 = *(_QWORD *)&v41->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v54.fields.currentCryptoKey = v43;
    *(_QWORD *)&v54.fields.fakeValue = v42;
    v44 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45313044(v54, 0LL);
    this->fields._IsUnique_k__BackingField = PartyListViewItem__IsIdenticalEquipMember(v6, v44, 0LL);
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
  int32_t v10; // w2
  int32_t v11; // w3
  __int64 wearerMember; // x1
  PartyOrganizationListViewItem_o *Member; // x0
  struct System_String_o *ServantName; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  int32_t Rarity; // w0
  PartyOrganizationListViewItem_o *equippedMemberItem; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_48E220E & 1) == 0 )
  {
    sub_1B00CCC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, baseDeckItemList);
    byte_48E220E = 1;
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
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.wearerServantName, 0, v10, v11);
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
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.wearerServantName, (int32_t)ServantName, v15, v16);
    Member = equippedMemberItem;
    if ( !equippedMemberItem )
      goto LABEL_15;
    this->fields.weareClassId = equippedMemberItem->fields.classId;
    SvtId = PartyOrganizationListViewItem__get_SvtId(Member, 0LL);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    Member = (PartyOrganizationListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45313044(
                                                  SvtId,
                                                  0LL);
    this->fields.wearersSvtId = (int)Member;
    if ( !equippedMemberItem
      || (Member = (PartyOrganizationListViewItem_o *)equippedMemberItem->fields.userServantEntity) == 0LL )
    {
LABEL_15:
      sub_1B00F28(Member, wearerMember);
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
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppObject *Master_object; // x0
  __int64 v9; // x1
  struct UserServantEntity_o *userSvtEntity; // x8
  EventCampaignMaster_o *v11; // x21
  __int64 v12; // x22
  __int64 v13; // x23
  UserServantEntity_o *v15; // x21
  EventUpValSetupInfo_o *setupInfo; // x20
  int32_t eventId; // w19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_48E2214 & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataManager_GetMaster_EventCampaignMaster___, entity);
    sub_1B00CCC(&DataManager_TypeInfo, v5);
    sub_1B00CCC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_1B00CCC(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v7);
    byte_48E2214 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_EventCampaignMaster___);
  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_15;
  v11 = (EventCampaignMaster_o *)Master_object;
  v13 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v18.fields.currentCryptoKey = v13;
  *(_QWORD *)&v18.fields.fakeValue = v12;
  Master_object = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45313044(v18, 0LL);
  if ( !entity || !v11 )
    goto LABEL_15;
  if ( EventCampaignMaster__IsEnableServant(v11, (int32_t)Master_object, entity->fields.eventId, 0LL) )
    return 1;
  v15 = this->fields.userSvtEntity;
  setupInfo = this->fields.setupInfo;
  eventId = entity->fields.eventId;
  Master_object = SingletonTemplate_object___get_Instance((const MethodInfo_35FC010 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Master_object || !v15 )
LABEL_15:
    sub_1B00F28(Master_object, v9);
  return UserServantEntity__getEventUpVal_38925036(v15, setupInfo, eventId, (int64_t)Master_object[6].monitor, 0LL);
}


bool __fastcall EquipGraphListViewItem___SetSortValue_b__58_1(
        EquipGraphListViewItem_o *this,
        EventGroupEntity_o *entity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppObject *Master_object; // x0
  __int64 v9; // x1
  struct UserServantEntity_o *userSvtEntity; // x8
  EventCampaignMaster_o *v11; // x21
  __int64 v12; // x22
  __int64 v13; // x23
  UserServantEntity_o *v15; // x21
  EventUpValSetupInfo_o *setupInfo; // x20
  int32_t eventId; // w19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_48E2215 & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataManager_GetMaster_EventCampaignMaster___, entity);
    sub_1B00CCC(&DataManager_TypeInfo, v5);
    sub_1B00CCC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_1B00CCC(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v7);
    byte_48E2215 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_EventCampaignMaster___);
  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_15;
  v11 = (EventCampaignMaster_o *)Master_object;
  v13 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v18.fields.currentCryptoKey = v13;
  *(_QWORD *)&v18.fields.fakeValue = v12;
  Master_object = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45313044(v18, 0LL);
  if ( !entity || !v11 )
    goto LABEL_15;
  if ( EventCampaignMaster__IsEnableServant(v11, (int32_t)Master_object, entity->fields.eventId, 0LL) )
    return 1;
  v15 = this->fields.userSvtEntity;
  setupInfo = this->fields.setupInfo;
  eventId = entity->fields.eventId;
  Master_object = SingletonTemplate_object___get_Instance((const MethodInfo_35FC010 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Master_object || !v15 )
LABEL_15:
    sub_1B00F28(Master_object, v9);
  return UserServantEntity__getEventUpVal_38925036(v15, setupInfo, eventId, (int64_t)Master_object[6].monitor, 0LL);
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

  if ( (byte_48E2211 & 1) == 0 )
  {
    sub_1B00CCC(&LocalizationManager_TypeInfo, method);
    byte_48E2211 = 1;
  }
  servantEntity = this->fields.servantEntity;
  if ( servantEntity )
    return ServantEntity__getName(servantEntity, -1, -1, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !byte_48DE045 )
  {
    sub_1B00CCC(&LocalizationManager_TypeInfo, method);
    byte_48DE045 = 1;
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  Il2CppObject *Entity; // x0
  System_String_o **p_monitor; // x8
  LocalizationManager_c *v10; // x0

  if ( (byte_48E2212 & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataManager_GetMasterData_ServantClassMaster___, method);
    sub_1B00CCC(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v3);
    sub_1B00CCC(&LocalizationManager_TypeInfo, v4);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_48E2212 = 1;
  }
  if ( this->fields.weareClassId < 1 )
    goto LABEL_19;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_ServantClassMaster___)) == 0LL )
  {
    sub_1B00F28(Instance, v7);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             this->fields.weareClassId,
             (const MethodInfo_2FE6A4C *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( Entity )
  {
    p_monitor = (System_String_o **)&Entity[1].monitor;
  }
  else
  {
LABEL_19:
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( !byte_48DE045 )
    {
      sub_1B00CCC(&LocalizationManager_TypeInfo, method);
      byte_48DE045 = 1;
    }
    v10 = LocalizationManager_TypeInfo;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v10 = LocalizationManager_TypeInfo;
    }
    p_monitor = &v10->static_fields->unknownNameText;
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