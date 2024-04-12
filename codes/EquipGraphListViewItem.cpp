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
  IconLabelInfo_o *v17; // x20
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  IconLabelInfo_o *v24; // x27
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_userSvtEntity; // x21
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  int64_t Instance; // x0
  __int64 v45; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v46; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v47; // x26
  __int64 v48; // x27
  __int64 v49; // x28
  struct ServantEntity_o *Entity; // x0
  struct ServantEntity_o **p_servantEntity; // x26
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  ServantLimitMaster_o *v58; // x27
  int32_t v59; // w28
  __int128 v60; // q1
  const MethodInfo *v61; // x5
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  int32_t *p_wearerMember; // x20
  __int128 v69; // q0
  int64_t v70; // x0
  int32_t WeareMember; // w0
  struct System_String_o *ServantName; // x0
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
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
  BattleServantConfConponent_o *p_categoryIdList; // x19
  System_String_array **v100; // x2
  System_String_array **v101; // x3
  System_Boolean_array **v102; // x4
  System_Int32_array **v103; // x5
  System_Int32_array *v104; // x6
  System_Int32_array *v105; // x7
  struct IconLabelInfo_o **p_iconLabelInfo2; // [xsp+8h] [xbp-F8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v107; // [xsp+10h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v108; // [xsp+30h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v109; // [xsp+50h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v110; // [xsp+70h] [xbp-90h]
  int32_t actMaxRarity; // [xsp+94h] [xbp-6Ch] BYREF
  System_String_o *skillName; // [xsp+98h] [xbp-68h] BYREF
  PartyOrganizationListViewItem_o *equippedMemberItem; // [xsp+A0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v114; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v115; // 0:x0.16

  if ( (byte_42B25DB & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B52984(&IconLabelInfo_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_B52984(&SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    byte_42B25DB = 1;
  }
  skillName = 0LL;
  equippedMemberItem = 0LL;
  actMaxRarity = 0;
  v17 = (IconLabelInfo_o *)sub_B52A54(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v17, 0LL);
  this->fields.iconLabelInfo1 = v17;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo1,
    (System_Int32_array **)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v24 = (IconLabelInfo_o *)sub_B52A54(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v24, 0LL);
  this->fields.iconLabelInfo2 = v24;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo2,
    (System_Int32_array **)v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  ListViewItem___ctor_23532700((ListViewItem_o *)this, index, 0LL);
  this->fields.userSvtEntity = userSvtEntity;
  p_userSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userSvtEntity;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.userSvtEntity,
    (System_Int32_array **)userSvtEntity,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  this->fields.setupInfo = setupInfo;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.setupInfo,
    (System_Int32_array **)setupInfo,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_67;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantMaster___);
  v46 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_67;
  v47 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v49 = *(_QWORD *)&v46[5].fields.currentCryptoKey;
  v48 = *(_QWORD *)&v46[5].fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v114.fields.currentCryptoKey = v49;
  *(_QWORD *)&v114.fields.fakeValue = v48;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v114, 0LL);
  if ( !v47 )
    goto LABEL_67;
  Entity = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                       v47,
                                       Instance,
                                       (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = Entity;
  p_servantEntity = &this->fields.servantEntity;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.servantEntity,
    (System_Int32_array **)Entity,
    v52,
    v53,
    v54,
    v55,
    v56,
    v57);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_67;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtEntity )
    goto LABEL_67;
  v58 = (ServantLimitMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420((*p_userSvtEntity)[5], 0LL);
  if ( !*p_userSvtEntity )
    goto LABEL_67;
  v59 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420((*p_userSvtEntity)[6], 0LL);
  if ( !v58 )
    goto LABEL_67;
  Instance = (int64_t)ServantLimitMaster__GetEntity(v58, v59, Instance, 0LL);
  if ( !*p_servantEntity )
    goto LABEL_67;
  this->fields.classId = (*p_servantEntity)->fields.classId;
  if ( !Instance )
    goto LABEL_67;
  this->fields.rarity = *(_DWORD *)(Instance + 24);
  if ( !userSvtEntity )
    goto LABEL_67;
  v60 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v110.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v110.fields.fakeValue = v60;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v109 = v110;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v109, 0LL);
  this->fields.isOldBase = Instance == targetSvtEquipId;
  this->fields.isBase = Instance == targetSvtEquipId;
  equippedMemberItem = 0LL;
  this->fields._OrganizedWave_k__BackingField = 0;
  this->fields._UniqueOrganizedWave_k__BackingField = 0;
  this->fields._IsUnique_k__BackingField = 0;
  if ( !partyItem )
    goto LABEL_67;
  if ( partyItem->fields.menuKind == 9 )
  {
    EquipGraphListViewItem__SetWaveBattleInfo(this, &equippedMemberItem, baseDeckItemList, partyItem, memberIdx, v61);
    p_wearerMember = &this->fields.wearerMember;
  }
  else
  {
    v69 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
    *(_OWORD *)&v110.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v110.fields.fakeValue = v69;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v108 = v110;
    v70 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v108, 0LL);
    WeareMember = PartyListViewItem__GetWeareMember(partyItem, v70, 0LL);
    this->fields.wearerMember = WeareMember;
    p_wearerMember = &this->fields.wearerMember;
    if ( (WeareMember & 0x80000000) != 0 )
      goto LABEL_37;
    equippedMemberItem = PartyListViewItem__GetMember(partyItem, WeareMember, 0LL);
  }
  if ( (*p_wearerMember & 0x80000000) != 0 )
  {
LABEL_37:
    this->fields.wearerServantName = 0LL;
    sub_B52920((BattleServantConfConponent_o *)&this->fields.wearerServantName, 0LL, v62, v63, v64, v65, v66, v67);
    *(_QWORD *)&this->fields.weareClassId = 0LL;
    Instance = 0LL;
    goto LABEL_38;
  }
  Instance = (int64_t)equippedMemberItem;
  if ( !equippedMemberItem )
  {
    Instance = (int64_t)PartyListViewItem__GetMember(partyItem, *p_wearerMember, 0LL);
    equippedMemberItem = (PartyOrganizationListViewItem_o *)Instance;
    if ( !Instance )
      goto LABEL_67;
  }
  ServantName = PartyOrganizationListViewItem__get_ServantName((PartyOrganizationListViewItem_o *)Instance, 0LL);
  this->fields.wearerServantName = ServantName;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.wearerServantName,
    (System_Int32_array **)ServantName,
    v73,
    v74,
    v75,
    v76,
    v77,
    v78);
  Instance = (int64_t)equippedMemberItem;
  if ( !equippedMemberItem )
    goto LABEL_67;
  this->fields.weareClassId = equippedMemberItem->fields.classId;
  SvtId = PartyOrganizationListViewItem__get_SvtId((PartyOrganizationListViewItem_o *)Instance, 0LL);
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(SvtId, 0LL);
  this->fields.wearersSvtId = Instance;
  if ( !equippedMemberItem )
    goto LABEL_67;
  Instance = (int64_t)equippedMemberItem->fields.userServantEntity;
  if ( !Instance )
    goto LABEL_67;
  Instance = UserServantEntity__getRarity((UserServantEntity_o *)Instance, 0LL);
LABEL_38:
  v80 = this->fields.userSvtEntity;
  this->fields.weareRarity = Instance;
  if ( !v80 )
    goto LABEL_67;
  Instance = UserServantEntity__IsLock(v80, 0LL);
  v81 = this->fields.userSvtEntity;
  this->fields.isLock = Instance & 1;
  if ( !v81 )
    goto LABEL_67;
  IsChoice = UserServantEntity__IsChoice(v81, 0LL);
  Instance = (int64_t)this->fields.userSvtEntity;
  this->fields.isChoice = IsChoice;
  *(_WORD *)&this->fields.isSwapLock = 0;
  if ( !Instance )
    goto LABEL_67;
  Instance = UserServantEntity__IsFriendShipSvtEquip((UserServantEntity_o *)Instance, 0LL);
  v83 = this->fields.userSvtEntity;
  this->fields.isFriendShipSvtEq = Instance & 1;
  if ( !v83 )
    goto LABEL_67;
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
    if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    }
    Instance = (int64_t)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( Member )
    {
      userServantEntity = Member->fields.userServantEntity;
      if ( userServantEntity )
      {
        v88 = (PartyOrganizationUtility_o *)Instance;
        v90 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
        v89 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v115.fields.currentCryptoKey = v90;
        *(_QWORD *)&v115.fields.fakeValue = v89;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v115, 0LL);
        v91 = Member->fields.userServantEntity;
        if ( v91 )
        {
          v92 = Instance;
          Instance = UserServantEntity__getRarity(v91, 0LL);
          if ( *p_userSvtEntity )
          {
            v93 = Instance;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420((*p_userSvtEntity)[5], 0LL);
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
              goto LABEL_58;
            }
          }
        }
      }
    }
LABEL_67:
    sub_B52A5C(Instance, v45);
  }
LABEL_58:
  servantEntity = this->fields.servantEntity;
  this->fields.isInvalidRarity = (char)v84;
  this->fields.isEventUpVal = 0;
  *(_QWORD *)&this->fields.bonusKind = 0LL;
  if ( !servantEntity )
    goto LABEL_67;
  v95 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_67;
  this->fields.sortValue2 = ((__int64)servantEntity->fields.collectionNo << 16) | ((unsigned __int64)(unsigned int)this->fields.rarity << 48) | v95[16].fields.currentCryptoKey;
  v96 = v95[2];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v110.fields.currentCryptoKey = v95[1];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v110.fields.fakeValue = v96;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v107 = v110;
  v97 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v107, 0LL);
  Instance = (int64_t)this->fields.userSvtEntity;
  this->fields.sortValue2B = v97;
  this->fields.amountSortValue = -1LL;
  if ( !Instance )
    goto LABEL_67;
  EquipCategoryIdList = UserServantEntity__GetEquipCategoryIdList((UserServantEntity_o *)Instance, 1, 0LL);
  this->fields.categoryIdList = EquipCategoryIdList;
  p_categoryIdList = (BattleServantConfConponent_o *)&this->fields.categoryIdList;
  sub_B52920(p_categoryIdList, (System_Int32_array **)EquipCategoryIdList, v100, v101, v102, v103, v104, v105);
  Instance = (int64_t)p_categoryIdList->monitor;
  if ( !Instance )
    goto LABEL_67;
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0LL);
  Instance = (int64_t)*p_iconLabelInfo2;
  if ( !*p_iconLabelInfo2 )
    goto LABEL_67;
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0LL);
}


void __fastcall EquipGraphListViewItem___ctor_29428568(
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
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  IconLabelInfo_o *v21; // x26
  struct IconLabelInfo_o **p_iconLabelInfo2; // x20
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_userSvtEntity; // x21
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  int64_t Instance; // x0
  __int64 v43; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v44; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v45; // x25
  __int64 v46; // x26
  __int64 v47; // x27
  struct ServantEntity_o *Entity; // x0
  struct ServantEntity_o **p_servantEntity; // x25
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  ServantLimitMaster_o *v56; // x26
  int32_t v57; // w27
  UserServantEntity_Fields *p_fields; // x24
  __int128 v59; // q0
  __int128 v60; // q1
  bool v61; // w8
  __int128 v62; // q0
  int32_t WeareMember; // w0
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  PartyOrganizationListViewItem_o *v70; // x22
  struct System_String_o *ServantName; // x0
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
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
  BattleServantConfConponent_o *p_categoryIdList; // x19
  System_String_array **v89; // x2
  System_String_array **v90; // x3
  System_Boolean_array **v91; // x4
  System_Int32_array **v92; // x5
  System_Int32_array *v93; // x6
  System_Int32_array *v94; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v95; // [xsp+0h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v96; // [xsp+20h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v97; // [xsp+40h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v98; // [xsp+60h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v99; // 0:x0.16

  if ( (byte_42B25DC & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B52984(&IconLabelInfo_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B25DC = 1;
  }
  v14 = (IconLabelInfo_o *)sub_B52A54(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v14, 0LL);
  this->fields.iconLabelInfo1 = v14;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo1,
    (System_Int32_array **)v14,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  v21 = (IconLabelInfo_o *)sub_B52A54(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v21, 0LL);
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  this->fields.iconLabelInfo2 = v21;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo2,
    (System_Int32_array **)v21,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  ListViewItem___ctor_23532700((ListViewItem_o *)this, index, 0LL);
  this->fields.userSvtEntity = userSvtEntity;
  p_userSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userSvtEntity;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.userSvtEntity,
    (System_Int32_array **)userSvtEntity,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  this->fields.setupInfo = setupInfo;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.setupInfo,
    (System_Int32_array **)setupInfo,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantMaster___);
  v44 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_41;
  v45 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v47 = *(_QWORD *)&v44[5].fields.currentCryptoKey;
  v46 = *(_QWORD *)&v44[5].fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v99.fields.currentCryptoKey = v47;
  *(_QWORD *)&v99.fields.fakeValue = v46;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v99, 0LL);
  if ( !v45 )
    goto LABEL_41;
  Entity = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                       v45,
                                       Instance,
                                       (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = Entity;
  p_servantEntity = &this->fields.servantEntity;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.servantEntity,
    (System_Int32_array **)Entity,
    v50,
    v51,
    v52,
    v53,
    v54,
    v55);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtEntity )
    goto LABEL_41;
  v56 = (ServantLimitMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420((*p_userSvtEntity)[5], 0LL);
  if ( !*p_userSvtEntity )
    goto LABEL_41;
  v57 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420((*p_userSvtEntity)[6], 0LL);
  if ( !v56 )
    goto LABEL_41;
  Instance = (int64_t)ServantLimitMaster__GetEntity(v56, v57, Instance, 0LL);
  if ( !*p_servantEntity )
    goto LABEL_41;
  this->fields.classId = (*p_servantEntity)->fields.classId;
  if ( !Instance )
    goto LABEL_41;
  this->fields.rarity = *(_DWORD *)(Instance + 24);
  if ( !userSvtEntity )
    goto LABEL_41;
  v59 = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  v60 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  p_fields = &userSvtEntity->fields;
  *(_OWORD *)&v98.fields.currentCryptoKey = v59;
  *(_OWORD *)&v98.fields.fakeValue = v60;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v97 = v98;
  v61 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v97, 0LL) == targetSvtEquipId;
  this->fields.isOldBase = v61;
  this->fields.isBase = v61;
  v62 = *(_OWORD *)&p_fields->id.fields.fakeValue;
  *(_OWORD *)&v96.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v96.fields.fakeValue = v62;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v96, 0LL);
  if ( !partyItem )
    goto LABEL_41;
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
      sub_B52920(
        (BattleServantConfConponent_o *)&this->fields.wearerServantName,
        (System_Int32_array **)ServantName,
        v72,
        v73,
        v74,
        v75,
        v76,
        v77);
      this->fields.weareClassId = v70->fields.classId;
      SvtId = PartyOrganizationListViewItem__get_SvtId(v70, 0LL);
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      this->fields.wearersSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(SvtId, 0LL);
      Instance = (int64_t)v70->fields.userServantEntity;
      if ( Instance )
      {
        Instance = UserServantEntity__getRarity((UserServantEntity_o *)Instance, 0LL);
        goto LABEL_28;
      }
    }
LABEL_41:
    sub_B52A5C(Instance, v43);
  }
  this->fields.wearerServantName = 0LL;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.wearerServantName, 0LL, v64, v65, v66, v67, v68, v69);
  Instance = 0LL;
  *(_QWORD *)&this->fields.weareClassId = 0LL;
LABEL_28:
  v79 = this->fields.userSvtEntity;
  this->fields.weareRarity = Instance;
  if ( !v79 )
    goto LABEL_41;
  Instance = UserServantEntity__IsLock(v79, 0LL);
  v80 = this->fields.userSvtEntity;
  this->fields.isLock = Instance & 1;
  if ( !v80 )
    goto LABEL_41;
  IsChoice = UserServantEntity__IsChoice(v80, 0LL);
  Instance = (int64_t)this->fields.userSvtEntity;
  this->fields.isChoice = IsChoice;
  *(_WORD *)&this->fields.isSwapLock = 0;
  this->fields.isInvalidRarity = 0;
  if ( !Instance )
    goto LABEL_41;
  Instance = UserServantEntity__IsFriendShipSvtEquip((UserServantEntity_o *)Instance, 0LL);
  v82 = this->fields.userSvtEntity;
  this->fields.isFriendShipSvtEq = Instance & 1;
  if ( !v82 )
    goto LABEL_41;
  Instance = UserServantEntity__IsChocolateSvtEquip(v82, 0LL);
  servantEntity = this->fields.servantEntity;
  this->fields.isChocolateSvtEquip = Instance & 1;
  this->fields.isEventUpVal = 0;
  *(_QWORD *)&this->fields.bonusKind = 0LL;
  if ( !servantEntity )
    goto LABEL_41;
  v84 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_41;
  this->fields.sortValue2 = ((__int64)servantEntity->fields.collectionNo << 16) | ((unsigned __int64)(unsigned int)this->fields.rarity << 48) | v84[16].fields.currentCryptoKey;
  v85 = v84[2];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v98.fields.currentCryptoKey = v84[1];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v98.fields.fakeValue = v85;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v95 = v98;
  v86 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v95, 0LL);
  Instance = (int64_t)this->fields.userSvtEntity;
  this->fields.sortValue2B = v86;
  this->fields.amountSortValue = -1LL;
  if ( !Instance )
    goto LABEL_41;
  EquipCategoryIdList = UserServantEntity__GetEquipCategoryIdList((UserServantEntity_o *)Instance, 1, 0LL);
  this->fields.categoryIdList = EquipCategoryIdList;
  p_categoryIdList = (BattleServantConfConponent_o *)&this->fields.categoryIdList;
  sub_B52920(p_categoryIdList, (System_Int32_array **)EquipCategoryIdList, v89, v90, v91, v92, v93, v94);
  Instance = (int64_t)p_categoryIdList->monitor;
  if ( !Instance )
    goto LABEL_41;
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0LL);
  Instance = (int64_t)*p_iconLabelInfo2;
  if ( !*p_iconLabelInfo2 )
    goto LABEL_41;
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
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_42B25E3 & 1) == 0 )
  {
    sub_B52984(&TreasureDvcInfo_TypeInfo);
    byte_42B25E3 = 1;
  }
  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
    return UserServantEntity__getTreasureDeviceInfo(userSvtEntity, tdInfo, -1, -1, 0, 0LL);
  v7 = (TreasureDvcInfo_o *)sub_B52A54(TreasureDvcInfo_TypeInfo);
  TreasureDvcInfo___ctor(v7, 0LL);
  *tdInfo = v7;
  sub_B52920((BattleServantConfConponent_o *)tdInfo, (System_Int32_array **)v7, v8, v9, v10, v11, v12, v13);
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
  Voice_BATTLE_array *RarityFilterKindList; // x0
  FilterKindList_c *v7; // x0
  ListViewSort_FilterKind_array *v8; // x0
  FilterKindList_c *v9; // x0
  ListViewSort_FilterKind_array *v10; // x0
  bool IsMatchServantEquipCombineStatusFilter; // w8
  bool result; // w0
  FilterKindList_c *v13; // x0
  ListViewSort_FilterKind_array *v14; // x0
  bool HaveStatusFilter; // w8
  __int64 v16; // x0

  if ( (byte_42B25DF & 1) == 0 )
  {
    sub_B52984(&FilterKindList_TypeInfo);
    sub_B52984(&ListViewSort_FilterKind___TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    byte_42B25DF = 1;
  }
  v5 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v5 = FilterKindList_TypeInfo;
  }
  RarityFilterKindList = (Voice_BATTLE_array *)v5->static_fields->RarityFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_38;
  RarityFilterKindList = System_Collections_Generic_List_Voice_BATTLE___ToArray(
                           (System_Collections_Generic_List_Voice_BATTLE__o *)RarityFilterKindList,
                           (const MethodInfo_305C094 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_38;
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)RarityFilterKindList, 0LL)
    && !ListViewSort__IsMatchRarityFilter(sort, this->fields.rarity, 0LL)
    || !ListViewSort__CheckSvtEquipEffectFilterDefaultAll(sort, 0LL)
    && !ServantEquipEffectFilterController__IsMatchEffectCategory(this->fields.categoryIdList, sort, 0LL) )
  {
    return 0;
  }
  v7 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v7 = FilterKindList_TypeInfo;
  }
  RarityFilterKindList = (Voice_BATTLE_array *)v7->static_fields->ServantEquipTypeFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_38;
  v8 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                          (System_Collections_Generic_List_Voice_BATTLE__o *)RarityFilterKindList,
                                          (const MethodInfo_305C094 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v8, 0LL)
    && !ListViewSort__IsMatchServantEquipTypeFilter(sort, this->fields.servantEntity, 0LL) )
  {
    return 0;
  }
  v9 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v9 = FilterKindList_TypeInfo;
  }
  RarityFilterKindList = (Voice_BATTLE_array *)v9->static_fields->ServantEquipCombineStatusFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_38;
  v10 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           (System_Collections_Generic_List_Voice_BATTLE__o *)RarityFilterKindList,
                                           (const MethodInfo_305C094 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v10, 0LL) )
  {
    IsMatchServantEquipCombineStatusFilter = ListViewSort__IsMatchServantEquipCombineStatusFilter(
                                               sort,
                                               this->fields.userSvtEntity,
                                               this->fields.servantEntity,
                                               0,
                                               0LL);
    result = 0;
    if ( !IsMatchServantEquipCombineStatusFilter )
      return result;
  }
  v13 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v13 = FilterKindList_TypeInfo;
  }
  RarityFilterKindList = (Voice_BATTLE_array *)v13->static_fields->ServantEquipHaveStatusFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_38;
  v14 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           (System_Collections_Generic_List_Voice_BATTLE__o *)RarityFilterKindList,
                                           (const MethodInfo_305C094 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v14, 0LL) )
  {
    HaveStatusFilter = ListViewSort__IsMatchServantEquipHaveStatusFilter(
                         sort,
                         this->fields.userSvtEntity,
                         this->fields.servantEntity,
                         0,
                         0LL);
    result = 0;
    if ( !HaveStatusFilter )
      return result;
  }
  RarityFilterKindList = (Voice_BATTLE_array *)sub_B5299C(ListViewSort_FilterKind___TypeInfo, 1LL);
  if ( !RarityFilterKindList )
LABEL_38:
    sub_B52A5C(RarityFilterKindList, sort);
  if ( !RarityFilterKindList->max_length )
  {
    v16 = sub_B52A88(RarityFilterKindList);
    sub_B52A28(v16, 0LL);
  }
  RarityFilterKindList->m_Items[1] = 39;
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)RarityFilterKindList, 0LL)
      || !ListViewSort__GetFilter(sort, 39, 0LL)
      || !this->fields.isSwapChoice == this->fields.isChoice;
}


bool __fastcall EquipGraphListViewItem__IsWeareMember(
        EquipGraphListViewItem_o *this,
        int32_t member,
        const MethodInfo *method)
{
  return this->fields.wearerMember != member && this->fields.wearerMember >= 0;
}


void __fastcall EquipGraphListViewItem__Modify(
        EquipGraphListViewItem_o *this,
        UserServantEntity_o *userSvtEntity,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x1

  this->fields.userSvtEntity = userSvtEntity;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.userSvtEntity,
    (System_Int32_array **)userSvtEntity,
    (System_String_array **)method,
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
    sub_B52A5C(0LL, method);
  this->fields.isChoice = UserServantEntity__IsChoice(userSvtEntity, 0LL);
  this->fields.isSwapChoice = 0;
}


void __fastcall EquipGraphListViewItem__ModifyLockItem(EquipGraphListViewItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0

  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_B52A5C(0LL, method);
  this->fields.isLock = UserServantEntity__IsLock(userSvtEntity, 0LL);
  this->fields.isSwapLock = 0;
}


void __fastcall EquipGraphListViewItem__ModifyUserServantEntity(
        EquipGraphListViewItem_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.userSvtEntity = userServantEntity;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.userSvtEntity,
    (System_Int32_array **)userServantEntity,
    (System_String_array **)method,
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
  EventUpValSetupInfo_o *setupInfo; // x21
  struct System_Int32_array *servantEquipFilterEventIdList; // x8
  _BOOL4 isSwapChoice; // w8
  _BOOL4 isChoice; // w9
  struct UserServantEntity_o *v9; // x8
  __int128 v10; // q1
  struct UserServantEntity_o *v11; // x8
  int64_t rarity; // x8
  struct UserServantEntity_o *v13; // x8
  int32_t adjustHp; // w3
  int32_t hp; // w2
  int32_t v16; // w1
  struct ServantEntity_o *servantEntity; // x8
  IconLabelInfo_o *iconLabelInfo2; // x19
  struct ListViewManager_o *manager; // x8
  __int64 v20; // x11
  struct ListViewManager_o *v21; // x20
  struct UserServantEntity_o *v22; // x8
  int32_t klass; // w20
  EquipGraphListViewItem_o *userSvtEntity; // x22
  int32_t v25; // w5
  int32_t *p_bonusKind2Id; // x8
  struct UserServantEntity_o *v27; // x8
  __int64 v28; // x21
  __int64 v29; // x22
  const MethodInfo *v30; // x2
  struct ServantEntity_o *v31; // x8
  __int64 collectionNo; // x10
  struct UserServantEntity_o *v33; // x8
  bool EventUpVal_21509172; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v36; // [xsp+10h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v37; // [xsp+30h] [xbp-40h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v38; // 0:x0.16

  v4 = this;
  if ( (byte_42B25E0 & 1) == 0 )
  {
    sub_B52984(&EquipGraphListViewManager_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (EquipGraphListViewItem_o *)sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_42B25E0 = 1;
  }
  setupInfo = v4->fields.setupInfo;
  *(_WORD *)&v4->fields.isTermination = 0;
  v4->fields.sortValue1 = -1LL;
  if ( !setupInfo )
    goto LABEL_8;
  servantEquipFilterEventIdList = setupInfo->fields.servantEquipFilterEventIdList;
  if ( !servantEquipFilterEventIdList
    || !*(_QWORD *)&servantEquipFilterEventIdList->max_length
    || v4->fields.isOldBase
    || v4->fields.isBase )
  {
    goto LABEL_8;
  }
  if ( !sort )
    goto LABEL_74;
  if ( !setupInfo->fields.isQuestStart )
  {
    if ( sort->fields.bonusKind2 != 1 )
      goto LABEL_8;
    if ( v4->fields.bonusKind == 1 )
    {
      p_bonusKind2Id = &sort->fields.bonusKind2Id;
      if ( v4->fields.bonusKindId == sort->fields.bonusKind2Id )
        goto LABEL_55;
    }
    else
    {
      p_bonusKind2Id = &sort->fields.bonusKind2Id;
    }
    v4->fields.bonusKind = 1;
    v25 = *p_bonusKind2Id;
    this = (EquipGraphListViewItem_o *)v4->fields.userSvtEntity;
    v4->fields.bonusKindId = *p_bonusKind2Id;
    if ( !this )
      goto LABEL_74;
LABEL_71:
    EventUpVal_21509172 = UserServantEntity__getEventUpVal_21509172(
                            (UserServantEntity_o *)this,
                            -1,
                            0,
                            0,
                            setupInfo,
                            v25,
                            0,
                            0LL);
    v4->fields.isEventUpVal = EventUpVal_21509172;
    if ( !EventUpVal_21509172 )
      goto LABEL_73;
    goto LABEL_72;
  }
  if ( sort->fields.bonusKind != 1 )
    goto LABEL_8;
  if ( v4->fields.bonusKind != 1 )
  {
    userSvtEntity = (EquipGraphListViewItem_o *)v4->fields.userSvtEntity;
    v4->fields.bonusKind = 1;
    this = (EquipGraphListViewItem_o *)EventUpValSetupInfo__get_ServantEquipFilterEventId(setupInfo, 0LL);
    if ( !userSvtEntity )
      goto LABEL_74;
    v25 = (int)this;
    this = userSvtEntity;
    goto LABEL_71;
  }
LABEL_55:
  if ( !v4->fields.isEventUpVal )
    goto LABEL_73;
LABEL_72:
  if ( v4->fields.isInvalidRarity )
    goto LABEL_73;
LABEL_8:
  this = (EquipGraphListViewItem_o *)((__int64 (__fastcall *)(EquipGraphListViewItem_o *, ListViewSort_o *, void *))v4->klass->vtable._5_IsMatchFilter.method)(
                                       v4,
                                       sort,
                                       v4->klass[1]._1.image);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
LABEL_73:
    LOBYTE(this) = 0;
    return (char)this;
  }
  isSwapChoice = v4->fields.isSwapChoice;
  isChoice = v4->fields.isChoice;
  v4->fields.sortValue0 = 0LL;
  if ( isSwapChoice != isChoice )
  {
    if ( !sort )
      goto LABEL_74;
    if ( sort->fields.isChoiceSort )
      v4->fields.sortValue0 = 10LL;
  }
  this = (EquipGraphListViewItem_o *)v4->fields.iconLabelInfo2;
  if ( !this )
    goto LABEL_74;
  IconLabelInfo__Clear((IconLabelInfo_o *)this, 0LL);
  if ( !sort )
    goto LABEL_74;
  this = (EquipGraphListViewItem_o *)(&dword_0 + 1);
  switch ( sort->fields.sortKind )
  {
    case 1:
      v9 = v4->fields.userSvtEntity;
      if ( !v9 )
        goto LABEL_74;
      v10 = *(_OWORD *)&v9->fields.id.fields.fakeValue;
      *(_OWORD *)&v37.fields.currentCryptoKey = *(_OWORD *)&v9->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v37.fields.fakeValue = v10;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v36 = v37;
      this = (EquipGraphListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v36, 0LL);
      v11 = v4->fields.userSvtEntity;
      v4->fields.sortValue1 = (int64_t)this;
      if ( !v11 )
        goto LABEL_74;
      this = (EquipGraphListViewItem_o *)v4->fields.iconLabelInfo1;
      if ( !this )
        goto LABEL_74;
      IconLabelInfo__SetTime((IconLabelInfo_o *)this, 49, v11->fields.createdAt, 0, 0, 0, 0LL);
      goto LABEL_41;
    case 2:
      rarity = v4->fields.rarity;
      goto LABEL_31;
    case 3:
      this = (EquipGraphListViewItem_o *)v4->fields.userSvtEntity;
      if ( !this )
        goto LABEL_74;
      v4->fields.sortValue1 = SLODWORD(this[1].klass);
      goto LABEL_32;
    case 5:
      v13 = v4->fields.userSvtEntity;
      if ( !v13 )
        goto LABEL_74;
      this = (EquipGraphListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = v13->fields.hp;
      if ( !this )
        goto LABEL_74;
      adjustHp = v13->fields.adjustHp;
      hp = v13->fields.hp;
      v16 = 3;
      goto LABEL_40;
    case 6:
      v22 = v4->fields.userSvtEntity;
      if ( !v22 )
        goto LABEL_74;
      this = (EquipGraphListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = v22->fields.atk;
      if ( !this )
        goto LABEL_74;
      adjustHp = v22->fields.adjustAtk;
      hp = v22->fields.atk;
      v16 = 5;
LABEL_40:
      IconLabelInfo__Set_28274368((IconLabelInfo_o *)this, v16, hp, adjustHp, 0, 0, 0, 0, 0LL);
LABEL_41:
      this = (EquipGraphListViewItem_o *)v4->fields.userSvtEntity;
      if ( !this )
        goto LABEL_74;
      iconLabelInfo2 = v4->fields.iconLabelInfo2;
      goto LABEL_43;
    case 7:
      servantEntity = v4->fields.servantEntity;
      if ( !servantEntity )
        goto LABEL_74;
      rarity = servantEntity->fields.cost;
LABEL_31:
      this = (EquipGraphListViewItem_o *)v4->fields.userSvtEntity;
      v4->fields.sortValue1 = rarity;
      if ( !this )
        goto LABEL_74;
LABEL_32:
      iconLabelInfo2 = v4->fields.iconLabelInfo1;
LABEL_43:
      klass = (int32_t)this[1].klass;
      break;
    case 0xE:
      this = (EquipGraphListViewItem_o *)v4->fields.amountSortValue;
      if ( ((unsigned __int64)this & 0x8000000000000000LL) == 0 )
        goto LABEL_66;
      manager = sort->fields.manager;
      if ( manager
        && (v20 = *(&EquipGraphListViewManager_TypeInfo->_2.bitflags2 + 1),
            *(&manager->klass->_2.bitflags2 + 1) >= (unsigned int)v20) )
      {
        if ( (EquipGraphListViewManager_c *)manager->klass->_2.typeHierarchy[v20 - 1] == EquipGraphListViewManager_TypeInfo )
          v21 = sort->fields.manager;
        else
          v21 = 0LL;
      }
      else
      {
        v21 = 0LL;
      }
      v27 = v4->fields.userSvtEntity;
      if ( !v27 )
        goto LABEL_74;
      v29 = *(_QWORD *)&v27->fields.svtId.fields.currentCryptoKey;
      v28 = *(_QWORD *)&v27->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v38.fields.currentCryptoKey = v29;
      *(_QWORD *)&v38.fields.fakeValue = v28;
      this = (EquipGraphListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v38, 0LL);
      if ( !v21 )
        goto LABEL_74;
      this = (EquipGraphListViewItem_o *)EquipGraphListViewManager__GetAmountSortValue(
                                           (EquipGraphListViewManager_o *)v21,
                                           (int32_t)this,
                                           v30);
      v4->fields.amountSortValue = (int64_t)this;
LABEL_66:
      v31 = v4->fields.servantEntity;
      if ( !v31 )
        goto LABEL_74;
      collectionNo = v31->fields.collectionNo;
      v33 = v4->fields.userSvtEntity;
      v4->fields.sortValue1 = ((_QWORD)this << 48) | ((unsigned __int64)(unsigned int)v4->fields.rarity << 32) | collectionNo;
      if ( !v33 )
        goto LABEL_74;
      iconLabelInfo2 = v4->fields.iconLabelInfo1;
      klass = v33->fields.lv;
      this = (EquipGraphListViewItem_o *)v33;
      break;
    default:
      return (char)this;
  }
  this = (EquipGraphListViewItem_o *)UserServantEntity__getLevelMax((UserServantEntity_o *)this, 0LL);
  if ( !iconLabelInfo2 )
LABEL_74:
    sub_B52A5C(this, sort);
  IconLabelInfo__Set_28274368(iconLabelInfo2, 2, klass, (int32_t)this, 0, 0, 0, 0, 0LL);
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
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  PartyListViewItem_o *v8; // x23
  PartyListViewItem_array *v9; // x25
  int64_t Member; // x0
  __int64 v13; // x1
  __int64 v14; // x8
  __int64 v15; // x8
  int v16; // w21
  int32_t v17; // w28
  PartyListViewItem_o *v18; // x24
  int32_t i; // w25
  PartyOrganizationListViewItem_o *v20; // x26
  struct UserServantEntity_o *userSvtEntity; // x8
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *p_svtId; // x27
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o EquipSvtId; // kr00_16
  const MethodInfo *v24; // x4
  struct UserServantEntity_o *v25; // x23
  int64_t v26; // x27
  struct UserServantEntity_o *v27; // x8
  __int128 v28; // q1
  int32_t v29; // w0
  System_Int32_array **v30; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  struct UserServantEntity_o *v37; // x8
  __int128 v38; // q0
  int64_t v39; // x0
  int32_t WeareMember; // w0
  System_Int32_array **v41; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v48; // kr10_16
  struct UserServantEntity_o *v49; // x8
  int v50; // w21
  struct UserServantEntity_o *v51; // x8
  __int64 v52; // x21
  __int64 v53; // x22
  int32_t v54; // w0
  __int64 v55; // x0
  PartyListViewItem_array *v57; // [xsp+8h] [xbp-F8h]
  PartyListViewItem_o *v58; // [xsp+10h] [xbp-F0h]
  BattleServantConfConponent_o *v59; // [xsp+18h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v60; // [xsp+20h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v61; // [xsp+40h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v62; // [xsp+60h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v63; // [xsp+80h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v64; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v65; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v66; // 0:x2.16

  v8 = partyItem;
  v9 = baseDeckItemList;
  if ( (byte_42B25DD & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_42B25DD = 1;
  }
  *equippedMemberItem = 0LL;
  v59 = (BattleServantConfConponent_o *)equippedMemberItem;
  sub_B52920(
    (BattleServantConfConponent_o *)equippedMemberItem,
    0LL,
    (System_String_array **)baseDeckItemList,
    (System_String_array **)partyItem,
    *(System_Boolean_array ***)&memberIdx,
    (System_Int32_array **)method,
    v6,
    v7);
  if ( !v9 )
    goto LABEL_60;
  v14 = *(_QWORD *)&v9->max_length;
  this->fields.wearerMember = -1;
  this->fields._MaxWave_k__BackingField = v14;
  v15 = *(_QWORD *)&v9->max_length;
  if ( (int)v15 >= 1 )
  {
    v16 = 0;
    v17 = 1;
    v57 = v9;
    v58 = v8;
    do
    {
      if ( v16 >= (unsigned int)v15 )
      {
LABEL_61:
        v55 = sub_B52A88(Member);
        sub_B52A28(v55, 0LL);
      }
      if ( !v8 )
        goto LABEL_60;
      v18 = v9->m_Items[v16];
      if ( !v18 )
        goto LABEL_60;
      if ( v8->fields.index != v18->fields.index )
      {
        for ( i = 0; ; ++i )
        {
          Member = (int64_t)BalanceConfig_TypeInfo;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            Member = (int64_t)BalanceConfig_TypeInfo;
          }
          if ( i >= *(_DWORD *)(*(_QWORD *)(Member + 184) + 160LL) )
            break;
          Member = (int64_t)PartyListViewItem__GetMember(v18, i, 0LL);
          if ( !Member )
            goto LABEL_60;
          v20 = (PartyOrganizationListViewItem_o *)Member;
          Member = (int64_t)PartyOrganizationListViewItem__GetEquipList((PartyOrganizationListViewItem_o *)Member, 0LL);
          if ( !Member )
            goto LABEL_60;
          if ( !*(_DWORD *)(Member + 24) )
            goto LABEL_61;
          if ( *(__int64 *)(Member + 32) >= 1 )
          {
            if ( !this->fields._IsUnique_k__BackingField )
            {
              userSvtEntity = this->fields.userSvtEntity;
              if ( !userSvtEntity )
                goto LABEL_60;
              p_svtId = &userSvtEntity->fields.svtId;
              EquipSvtId = PartyOrganizationListViewItem__get_EquipSvtId(v20, 0LL);
              *(_QWORD *)&v64.fields.currentCryptoKey = p_svtId;
              *(_QWORD *)&v66.fields.currentCryptoKey = *(_QWORD *)&EquipSvtId.fields.fakeValue;
              *(_QWORD *)&v64.fields.fakeValue = *(_QWORD *)&EquipSvtId.fields.currentCryptoKey;
              *(_QWORD *)&v66.fields.fakeValue = 0LL;
              Member = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__Equals_44787456(v64, v66, v24);
              this->fields._IsUnique_k__BackingField = Member & 1;
              if ( (Member & 1) != 0 )
                this->fields._UniqueOrganizedWave_k__BackingField = v17;
            }
            v25 = this->fields.userSvtEntity;
            if ( !v25 )
              goto LABEL_60;
            Member = (int64_t)PartyOrganizationListViewItem__GetEquipList(v20, 0LL);
            if ( !Member )
              goto LABEL_60;
            if ( !*(_DWORD *)(Member + 24) )
              goto LABEL_61;
            v26 = *(_QWORD *)(Member + 32);
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            }
            CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v63, v26, 0LL);
            v62 = v63;
            Member = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__Equals_44790048(&v25->fields.id, &v62, 0LL);
            if ( (Member & 1) != 0 )
            {
              v37 = this->fields.userSvtEntity;
              if ( v37 )
              {
                v38 = *(_OWORD *)&v37->fields.id.fields.fakeValue;
                *(_OWORD *)&v63.fields.currentCryptoKey = *(_OWORD *)&v37->fields.id.fields.currentCryptoKey;
                *(_OWORD *)&v63.fields.fakeValue = v38;
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                }
                v61 = v63;
                v39 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v61, 0LL);
                WeareMember = PartyListViewItem__GetWeareMember(v18, v39, 0LL);
                this->fields.wearerMember = WeareMember;
                if ( (WeareMember & 0x80000000) == 0 )
                {
                  v41 = (System_Int32_array **)PartyListViewItem__GetMember(v18, WeareMember, 0LL);
                  v59->klass = (BattleServantConfConponent_c *)v41;
                  sub_B52920(v59, v41, v42, v43, v44, v45, v46, v47);
                }
                this->fields._OrganizedWave_k__BackingField = v17;
                return;
              }
LABEL_60:
              sub_B52A5C(Member, v13);
            }
          }
        }
        v9 = v57;
        v8 = v58;
        v15 = *(_QWORD *)&v57->max_length;
      }
      ++v16;
      ++v17;
    }
    while ( v16 < (int)v15 );
  }
  v27 = this->fields.userSvtEntity;
  if ( !v27 )
    goto LABEL_60;
  v28 = *(_OWORD *)&v27->fields.id.fields.fakeValue;
  *(_OWORD *)&v63.fields.currentCryptoKey = *(_OWORD *)&v27->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v63.fields.fakeValue = v28;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v60 = v63;
  Member = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v60, 0LL);
  if ( !v8 )
    goto LABEL_60;
  v29 = PartyListViewItem__GetWeareMember(v8, Member, 0LL);
  this->fields.wearerMember = v29;
  if ( (v29 & 0x80000000) == 0 )
  {
    v30 = (System_Int32_array **)PartyListViewItem__GetMember(v8, v29, 0LL);
    v59->klass = (BattleServantConfConponent_c *)v30;
    sub_B52920(v59, v30, v31, v32, v33, v34, v35, v36);
    return;
  }
  if ( !this->fields._IsUnique_k__BackingField )
  {
    Member = (int64_t)PartyListViewItem__GetMember(v8, memberIdx, 0LL);
    if ( Member )
    {
      v48 = PartyOrganizationListViewItem__get_EquipSvtId((PartyOrganizationListViewItem_o *)Member, 0LL);
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      Member = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v48, 0LL);
      v49 = this->fields.userSvtEntity;
      if ( v49 )
      {
        v50 = Member;
        Member = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v49->fields.svtId, 0LL);
        if ( v50 == (_DWORD)Member )
          return;
        v51 = this->fields.userSvtEntity;
        if ( v51 )
        {
          v53 = *(_QWORD *)&v51->fields.svtId.fields.currentCryptoKey;
          v52 = *(_QWORD *)&v51->fields.svtId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v65.fields.currentCryptoKey = v53;
          *(_QWORD *)&v65.fields.fakeValue = v52;
          v54 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v65, 0LL);
          this->fields._IsUnique_k__BackingField = PartyListViewItem__IsIdenticalEquipMember(v8, v54, 0LL);
          return;
        }
      }
    }
    goto LABEL_60;
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
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  __int64 wearerMember; // x1
  PartyOrganizationListViewItem_o *Member; // x0
  struct System_String_o *ServantName; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  int32_t Rarity; // w0
  PartyOrganizationListViewItem_o *equippedMemberItem; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42B25DE & 1) == 0 )
  {
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_42B25DE = 1;
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
    sub_B52920((BattleServantConfConponent_o *)&this->fields.wearerServantName, 0LL, v10, v11, v12, v13, v14, v15);
    Rarity = 0;
    *(_QWORD *)&this->fields.weareClassId = 0LL;
  }
  else
  {
    Member = equippedMemberItem;
    if ( !equippedMemberItem )
    {
      if ( !partyItem )
        goto LABEL_16;
      Member = PartyListViewItem__GetMember(partyItem, wearerMember, 0LL);
      equippedMemberItem = Member;
      if ( !Member )
        goto LABEL_16;
    }
    ServantName = PartyOrganizationListViewItem__get_ServantName(Member, 0LL);
    this->fields.wearerServantName = ServantName;
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields.wearerServantName,
      (System_Int32_array **)ServantName,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
    Member = equippedMemberItem;
    if ( !equippedMemberItem )
      goto LABEL_16;
    this->fields.weareClassId = equippedMemberItem->fields.classId;
    SvtId = PartyOrganizationListViewItem__get_SvtId(Member, 0LL);
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    Member = (PartyOrganizationListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(
                                                  SvtId,
                                                  0LL);
    this->fields.wearersSvtId = (int)Member;
    if ( !equippedMemberItem
      || (Member = (PartyOrganizationListViewItem_o *)equippedMemberItem->fields.userServantEntity) == 0LL )
    {
LABEL_16:
      sub_B52A5C(Member, wearerMember);
    }
    Rarity = UserServantEntity__getRarity((UserServantEntity_o *)Member, 0LL);
  }
  this->fields.weareRarity = Rarity;
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


bool __fastcall EquipGraphListViewItem__get_IsDispChoice(EquipGraphListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isSwapChoice ^ this->fields.isChoice;
}


bool __fastcall EquipGraphListViewItem__get_IsDispLock(EquipGraphListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isSwapLock ^ this->fields.isLock;
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

  if ( (byte_42B25E1 & 1) == 0 )
  {
    sub_B52984(&LocalizationManager_TypeInfo);
    byte_42B25E1 = 1;
  }
  servantEntity = this->fields.servantEntity;
  if ( servantEntity )
    return ServantEntity__getName(servantEntity, -1, -1, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  if ( !byte_42ADEE6 )
  {
    sub_B52984(&LocalizationManager_TypeInfo);
    byte_42ADEE6 = 1;
  }
  v5 = LocalizationManager_TypeInfo;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
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
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  WarEntity_o *Entity; // x0
  System_String_o **p_age; // x8
  LocalizationManager_c *v7; // x0

  if ( (byte_42B25E2 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_B52984(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B25E2 = 1;
  }
  if ( this->fields.weareClassId < 1 )
    goto LABEL_21;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantClassMaster___)) == 0LL )
  {
    sub_B52A5C(Instance, v4);
  }
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
             this->fields.weareClassId,
             (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( Entity )
  {
    p_age = &Entity->fields.age;
  }
  else
  {
LABEL_21:
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    if ( !byte_42ADEE6 )
    {
      sub_B52984(&LocalizationManager_TypeInfo);
      byte_42ADEE6 = 1;
    }
    v7 = LocalizationManager_TypeInfo;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v7 = LocalizationManager_TypeInfo;
    }
    p_age = &v7->static_fields->unknownNameText;
  }
  return *p_age;
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