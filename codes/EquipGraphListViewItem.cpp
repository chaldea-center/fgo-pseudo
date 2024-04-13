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
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  IconLabelInfo_o *v41; // x20
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  IconLabelInfo_o *v48; // x27
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_userSvtEntity; // x21
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  int64_t Instance; // x0
  __int64 v69; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v70; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v71; // x26
  __int64 v72; // x27
  __int64 v73; // x28
  struct ServantEntity_o *Entity; // x0
  struct ServantEntity_o **p_servantEntity; // x26
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  ServantLimitMaster_o *v82; // x27
  int32_t v83; // w28
  __int128 v84; // q1
  const MethodInfo *v85; // x5
  System_String_array **v86; // x2
  System_String_array **v87; // x3
  System_Boolean_array **v88; // x4
  System_Int32_array **v89; // x5
  System_Int32_array *v90; // x6
  System_Int32_array *v91; // x7
  int32_t *p_wearerMember; // x20
  __int128 v93; // q0
  int64_t v94; // x0
  int32_t WeareMember; // w0
  struct System_String_o *ServantName; // x0
  System_String_array **v97; // x2
  System_String_array **v98; // x3
  System_Boolean_array **v99; // x4
  System_Int32_array **v100; // x5
  System_Int32_array *v101; // x6
  System_Int32_array *v102; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  UserServantEntity_o *v104; // x8
  UserServantEntity_o *v105; // x8
  bool IsChoice; // w8
  UserServantEntity_o *v107; // x8
  struct EventUpValSetupInfo_o *v108; // x8
  int32_t EventId; // w23
  PartyOrganizationListViewItem_o *Member; // x24
  struct UserServantEntity_o *userServantEntity; // x8
  PartyOrganizationUtility_o *v112; // x22
  __int64 v113; // x25
  __int64 v114; // x26
  UserServantEntity_o *v115; // x8
  int32_t v116; // w24
  int32_t v117; // w25
  struct ServantEntity_o *servantEntity; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v119; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v120; // q0
  int64_t v121; // x8
  struct System_Int32_array *EquipCategoryIdList; // x0
  BattleServantConfConponent_o *p_categoryIdList; // x19
  System_String_array **v124; // x2
  System_String_array **v125; // x3
  System_Boolean_array **v126; // x4
  System_Int32_array **v127; // x5
  System_Int32_array *v128; // x6
  System_Int32_array *v129; // x7
  struct IconLabelInfo_o **p_iconLabelInfo2; // [xsp+8h] [xbp-F8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v131; // [xsp+10h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v132; // [xsp+30h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v133; // [xsp+50h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v134; // [xsp+70h] [xbp-90h]
  int32_t actMaxRarity; // [xsp+94h] [xbp-6Ch] BYREF
  System_String_o *skillName; // [xsp+98h] [xbp-68h] BYREF
  PartyOrganizationListViewItem_o *equippedMemberItem; // [xsp+A0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v138; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v139; // 0:x0.16

  if ( (byte_42EB7F9 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantLimitMaster___, index, (_DWORD)userSvtEntity, targetSvtEquipId);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v17, v18, v19);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v20, v21, v22);
    sub_B5D5C4(&IconLabelInfo_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v29, v30, v31);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v32, v33, v34);
    sub_B5D5C4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v35, v36, v37);
    sub_B5D5C4(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v38, v39, v40);
    byte_42EB7F9 = 1;
  }
  skillName = 0LL;
  equippedMemberItem = 0LL;
  actMaxRarity = 0;
  v41 = (IconLabelInfo_o *)sub_B5D694(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v41, 0LL);
  this->fields.iconLabelInfo1 = v41;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo1,
    (System_Int32_array **)v41,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  v48 = (IconLabelInfo_o *)sub_B5D694(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v48, 0LL);
  this->fields.iconLabelInfo2 = v48;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo2,
    (System_Int32_array **)v48,
    v49,
    v50,
    v51,
    v52,
    v53,
    v54);
  ListViewItem___ctor_23901828((ListViewItem_o *)this, index, 0LL);
  this->fields.userSvtEntity = userSvtEntity;
  p_userSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userSvtEntity;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.userSvtEntity,
    (System_Int32_array **)userSvtEntity,
    v56,
    v57,
    v58,
    v59,
    v60,
    v61);
  this->fields.setupInfo = setupInfo;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.setupInfo,
    (System_Int32_array **)setupInfo,
    v62,
    v63,
    v64,
    v65,
    v66,
    v67);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_67;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  v70 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_67;
  v71 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v73 = *(_QWORD *)&v70[5].fields.currentCryptoKey;
  v72 = *(_QWORD *)&v70[5].fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v138.fields.currentCryptoKey = v73;
  *(_QWORD *)&v138.fields.fakeValue = v72;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v138, 0LL);
  if ( !v71 )
    goto LABEL_67;
  Entity = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                       v71,
                                       Instance,
                                       (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = Entity;
  p_servantEntity = &this->fields.servantEntity;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.servantEntity,
    (System_Int32_array **)Entity,
    v76,
    v77,
    v78,
    v79,
    v80,
    v81);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_67;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtEntity )
    goto LABEL_67;
  v82 = (ServantLimitMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288((*p_userSvtEntity)[5], 0LL);
  if ( !*p_userSvtEntity )
    goto LABEL_67;
  v83 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288((*p_userSvtEntity)[6], 0LL);
  if ( !v82 )
    goto LABEL_67;
  Instance = (int64_t)ServantLimitMaster__GetEntity(v82, v83, Instance, 0LL);
  if ( !*p_servantEntity )
    goto LABEL_67;
  this->fields.classId = (*p_servantEntity)->fields.classId;
  if ( !Instance )
    goto LABEL_67;
  this->fields.rarity = *(_DWORD *)(Instance + 24);
  if ( !userSvtEntity )
    goto LABEL_67;
  v84 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v134.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v134.fields.fakeValue = v84;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v133 = v134;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v133, 0LL);
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
    EquipGraphListViewItem__SetWaveBattleInfo(this, &equippedMemberItem, baseDeckItemList, partyItem, memberIdx, v85);
    p_wearerMember = &this->fields.wearerMember;
  }
  else
  {
    v93 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
    *(_OWORD *)&v134.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v134.fields.fakeValue = v93;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v132 = v134;
    v94 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v132, 0LL);
    WeareMember = PartyListViewItem__GetWeareMember(partyItem, v94, 0LL);
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
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.wearerServantName, 0LL, v86, v87, v88, v89, v90, v91);
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.wearerServantName,
    (System_Int32_array **)ServantName,
    v97,
    v98,
    v99,
    v100,
    v101,
    v102);
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
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(SvtId, 0LL);
  this->fields.wearersSvtId = Instance;
  if ( !equippedMemberItem )
    goto LABEL_67;
  Instance = (int64_t)equippedMemberItem->fields.userServantEntity;
  if ( !Instance )
    goto LABEL_67;
  Instance = UserServantEntity__getRarity((UserServantEntity_o *)Instance, 0LL);
LABEL_38:
  v104 = this->fields.userSvtEntity;
  this->fields.weareRarity = Instance;
  if ( !v104 )
    goto LABEL_67;
  Instance = UserServantEntity__IsLock(v104, 0LL);
  v105 = this->fields.userSvtEntity;
  this->fields.isLock = Instance & 1;
  if ( !v105 )
    goto LABEL_67;
  IsChoice = UserServantEntity__IsChoice(v105, 0LL);
  Instance = (int64_t)this->fields.userSvtEntity;
  this->fields.isChoice = IsChoice;
  *(_WORD *)&this->fields.isSwapLock = 0;
  if ( !Instance )
    goto LABEL_67;
  Instance = UserServantEntity__IsFriendShipSvtEquip((UserServantEntity_o *)Instance, 0LL);
  v107 = this->fields.userSvtEntity;
  this->fields.isFriendShipSvtEq = Instance & 1;
  if ( !v107 )
    goto LABEL_67;
  Instance = UserServantEntity__IsChocolateSvtEquip(v107, 0LL);
  v108 = this->fields.setupInfo;
  this->fields.isChocolateSvtEquip = Instance & 1;
  if ( v108 )
  {
    if ( v108->fields.isQuestStart )
      EventId = EventUpValSetupInfo__get_EventId(v108, 0LL);
    else
      EventId = -1;
    Member = PartyListViewItem__GetMember(partyItem, memberIdx, 0LL);
    if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    }
    Instance = (int64_t)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( Member )
    {
      userServantEntity = Member->fields.userServantEntity;
      if ( userServantEntity )
      {
        v112 = (PartyOrganizationUtility_o *)Instance;
        v114 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
        v113 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v139.fields.currentCryptoKey = v114;
        *(_QWORD *)&v139.fields.fakeValue = v113;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v139, 0LL);
        v115 = Member->fields.userServantEntity;
        if ( v115 )
        {
          v116 = Instance;
          Instance = UserServantEntity__getRarity(v115, 0LL);
          if ( *p_userSvtEntity )
          {
            v117 = Instance;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288((*p_userSvtEntity)[5], 0LL);
            if ( v112 )
            {
              Instance = PartyOrganizationUtility__IsRarityRestriction(
                           v112,
                           &skillName,
                           &actMaxRarity,
                           v116,
                           v117,
                           Instance,
                           EventId,
                           0LL);
              LOBYTE(v108) = Instance & 1;
              goto LABEL_58;
            }
          }
        }
      }
    }
LABEL_67:
    sub_B5D69C(Instance, v69);
  }
LABEL_58:
  servantEntity = this->fields.servantEntity;
  this->fields.isInvalidRarity = (char)v108;
  this->fields.isEventUpVal = 0;
  *(_QWORD *)&this->fields.bonusKind = 0LL;
  if ( !servantEntity )
    goto LABEL_67;
  v119 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_67;
  this->fields.sortValue2 = ((__int64)servantEntity->fields.collectionNo << 16) | ((unsigned __int64)(unsigned int)this->fields.rarity << 48) | v119[16].fields.currentCryptoKey;
  v120 = v119[2];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v134.fields.currentCryptoKey = v119[1];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v134.fields.fakeValue = v120;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v131 = v134;
  v121 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v131, 0LL);
  Instance = (int64_t)this->fields.userSvtEntity;
  this->fields.sortValue2B = v121;
  this->fields.amountSortValue = -1LL;
  if ( !Instance )
    goto LABEL_67;
  EquipCategoryIdList = UserServantEntity__GetEquipCategoryIdList((UserServantEntity_o *)Instance, 1, 0LL);
  this->fields.categoryIdList = EquipCategoryIdList;
  p_categoryIdList = (BattleServantConfConponent_o *)&this->fields.categoryIdList;
  sub_B5D560(p_categoryIdList, (System_Int32_array **)EquipCategoryIdList, v124, v125, v126, v127, v128, v129);
  Instance = (int64_t)p_categoryIdList->monitor;
  if ( !Instance )
    goto LABEL_67;
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0LL);
  Instance = (int64_t)*p_iconLabelInfo2;
  if ( !*p_iconLabelInfo2 )
    goto LABEL_67;
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0LL);
}


void __fastcall EquipGraphListViewItem___ctor_30685628(
        EquipGraphListViewItem_o *this,
        int32_t index,
        UserServantEntity_o *userSvtEntity,
        int64_t targetSvtEquipId,
        int64_t oldTargetSvtEquipId,
        WarBoardPartyListViewItem_o *partyItem,
        EventUpValSetupInfo_o *setupInfo,
        const MethodInfo *method)
{
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  IconLabelInfo_o *v32; // x20
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  IconLabelInfo_o *v39; // x26
  struct IconLabelInfo_o **p_iconLabelInfo2; // x20
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_userSvtEntity; // x21
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  int64_t Instance; // x0
  __int64 v61; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v62; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v63; // x25
  __int64 v64; // x26
  __int64 v65; // x27
  struct ServantEntity_o *Entity; // x0
  struct ServantEntity_o **p_servantEntity; // x25
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  ServantLimitMaster_o *v74; // x26
  int32_t v75; // w27
  UserServantEntity_Fields *p_fields; // x24
  __int128 v77; // q0
  __int128 v78; // q1
  bool v79; // w8
  __int128 v80; // q0
  int32_t WeareMember; // w0
  System_String_array **v82; // x2
  System_String_array **v83; // x3
  System_Boolean_array **v84; // x4
  System_Int32_array **v85; // x5
  System_Int32_array *v86; // x6
  System_Int32_array *v87; // x7
  PartyOrganizationListViewItem_o *v88; // x22
  struct System_String_o *ServantName; // x0
  System_String_array **v90; // x2
  System_String_array **v91; // x3
  System_Boolean_array **v92; // x4
  System_Int32_array **v93; // x5
  System_Int32_array *v94; // x6
  System_Int32_array *v95; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  UserServantEntity_o *v97; // x8
  UserServantEntity_o *v98; // x8
  bool IsChoice; // w8
  UserServantEntity_o *v100; // x8
  struct ServantEntity_o *servantEntity; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v102; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v103; // q0
  int64_t v104; // x8
  struct System_Int32_array *EquipCategoryIdList; // x0
  BattleServantConfConponent_o *p_categoryIdList; // x19
  System_String_array **v107; // x2
  System_String_array **v108; // x3
  System_Boolean_array **v109; // x4
  System_Int32_array **v110; // x5
  System_Int32_array *v111; // x6
  System_Int32_array *v112; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v113; // [xsp+0h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v114; // [xsp+20h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v115; // [xsp+40h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v116; // [xsp+60h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v117; // 0:x0.16

  if ( (byte_42EB7FA & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantLimitMaster___, index, (_DWORD)userSvtEntity, targetSvtEquipId);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v14, v15, v16);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v17, v18, v19);
    sub_B5D5C4(&IconLabelInfo_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v29, v30, v31);
    byte_42EB7FA = 1;
  }
  v32 = (IconLabelInfo_o *)sub_B5D694(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v32, 0LL);
  this->fields.iconLabelInfo1 = v32;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo1,
    (System_Int32_array **)v32,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  v39 = (IconLabelInfo_o *)sub_B5D694(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v39, 0LL);
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  this->fields.iconLabelInfo2 = v39;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo2,
    (System_Int32_array **)v39,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  ListViewItem___ctor_23901828((ListViewItem_o *)this, index, 0LL);
  this->fields.userSvtEntity = userSvtEntity;
  p_userSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userSvtEntity;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.userSvtEntity,
    (System_Int32_array **)userSvtEntity,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53);
  this->fields.setupInfo = setupInfo;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.setupInfo,
    (System_Int32_array **)setupInfo,
    v54,
    v55,
    v56,
    v57,
    v58,
    v59);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  v62 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_41;
  v63 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v65 = *(_QWORD *)&v62[5].fields.currentCryptoKey;
  v64 = *(_QWORD *)&v62[5].fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v117.fields.currentCryptoKey = v65;
  *(_QWORD *)&v117.fields.fakeValue = v64;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v117, 0LL);
  if ( !v63 )
    goto LABEL_41;
  Entity = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                       v63,
                                       Instance,
                                       (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = Entity;
  p_servantEntity = &this->fields.servantEntity;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.servantEntity,
    (System_Int32_array **)Entity,
    v68,
    v69,
    v70,
    v71,
    v72,
    v73);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtEntity )
    goto LABEL_41;
  v74 = (ServantLimitMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288((*p_userSvtEntity)[5], 0LL);
  if ( !*p_userSvtEntity )
    goto LABEL_41;
  v75 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288((*p_userSvtEntity)[6], 0LL);
  if ( !v74 )
    goto LABEL_41;
  Instance = (int64_t)ServantLimitMaster__GetEntity(v74, v75, Instance, 0LL);
  if ( !*p_servantEntity )
    goto LABEL_41;
  this->fields.classId = (*p_servantEntity)->fields.classId;
  if ( !Instance )
    goto LABEL_41;
  this->fields.rarity = *(_DWORD *)(Instance + 24);
  if ( !userSvtEntity )
    goto LABEL_41;
  v77 = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  v78 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  p_fields = &userSvtEntity->fields;
  *(_OWORD *)&v116.fields.currentCryptoKey = v77;
  *(_OWORD *)&v116.fields.fakeValue = v78;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v115 = v116;
  v79 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v115, 0LL) == targetSvtEquipId;
  this->fields.isOldBase = v79;
  this->fields.isBase = v79;
  v80 = *(_OWORD *)&p_fields->id.fields.fakeValue;
  *(_OWORD *)&v114.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v114.fields.fakeValue = v80;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v114, 0LL);
  if ( !partyItem )
    goto LABEL_41;
  WeareMember = WarBoardPartyListViewItem__GetWeareMember(partyItem, Instance, 0LL);
  this->fields.wearerMember = WeareMember;
  if ( (WeareMember & 0x80000000) == 0 )
  {
    Instance = (int64_t)WarBoardPartyListViewItem__GetMemberItem(partyItem, WeareMember, 0LL);
    if ( Instance )
    {
      v88 = (PartyOrganizationListViewItem_o *)Instance;
      ServantName = PartyOrganizationListViewItem__get_ServantName((PartyOrganizationListViewItem_o *)Instance, 0LL);
      this->fields.wearerServantName = ServantName;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.wearerServantName,
        (System_Int32_array **)ServantName,
        v90,
        v91,
        v92,
        v93,
        v94,
        v95);
      this->fields.weareClassId = v88->fields.classId;
      SvtId = PartyOrganizationListViewItem__get_SvtId(v88, 0LL);
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      this->fields.wearersSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(SvtId, 0LL);
      Instance = (int64_t)v88->fields.userServantEntity;
      if ( Instance )
      {
        Instance = UserServantEntity__getRarity((UserServantEntity_o *)Instance, 0LL);
        goto LABEL_28;
      }
    }
LABEL_41:
    sub_B5D69C(Instance, v61);
  }
  this->fields.wearerServantName = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.wearerServantName, 0LL, v82, v83, v84, v85, v86, v87);
  Instance = 0LL;
  *(_QWORD *)&this->fields.weareClassId = 0LL;
LABEL_28:
  v97 = this->fields.userSvtEntity;
  this->fields.weareRarity = Instance;
  if ( !v97 )
    goto LABEL_41;
  Instance = UserServantEntity__IsLock(v97, 0LL);
  v98 = this->fields.userSvtEntity;
  this->fields.isLock = Instance & 1;
  if ( !v98 )
    goto LABEL_41;
  IsChoice = UserServantEntity__IsChoice(v98, 0LL);
  Instance = (int64_t)this->fields.userSvtEntity;
  this->fields.isChoice = IsChoice;
  *(_WORD *)&this->fields.isSwapLock = 0;
  this->fields.isInvalidRarity = 0;
  if ( !Instance )
    goto LABEL_41;
  Instance = UserServantEntity__IsFriendShipSvtEquip((UserServantEntity_o *)Instance, 0LL);
  v100 = this->fields.userSvtEntity;
  this->fields.isFriendShipSvtEq = Instance & 1;
  if ( !v100 )
    goto LABEL_41;
  Instance = UserServantEntity__IsChocolateSvtEquip(v100, 0LL);
  servantEntity = this->fields.servantEntity;
  this->fields.isChocolateSvtEquip = Instance & 1;
  this->fields.isEventUpVal = 0;
  *(_QWORD *)&this->fields.bonusKind = 0LL;
  if ( !servantEntity )
    goto LABEL_41;
  v102 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_41;
  this->fields.sortValue2 = ((__int64)servantEntity->fields.collectionNo << 16) | ((unsigned __int64)(unsigned int)this->fields.rarity << 48) | v102[16].fields.currentCryptoKey;
  v103 = v102[2];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v116.fields.currentCryptoKey = v102[1];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v116.fields.fakeValue = v103;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v113 = v116;
  v104 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v113, 0LL);
  Instance = (int64_t)this->fields.userSvtEntity;
  this->fields.sortValue2B = v104;
  this->fields.amountSortValue = -1LL;
  if ( !Instance )
    goto LABEL_41;
  EquipCategoryIdList = UserServantEntity__GetEquipCategoryIdList((UserServantEntity_o *)Instance, 1, 0LL);
  this->fields.categoryIdList = EquipCategoryIdList;
  p_categoryIdList = (BattleServantConfConponent_o *)&this->fields.categoryIdList;
  sub_B5D560(p_categoryIdList, (System_Int32_array **)EquipCategoryIdList, v107, v108, v109, v110, v111, v112);
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
  __int64 v3; // x3
  UserServantEntity_o *userSvtEntity; // x0
  TreasureDvcInfo_o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_42EB801 & 1) == 0 )
  {
    sub_B5D5C4(&TreasureDvcInfo_TypeInfo, (_DWORD)tdInfo, (_DWORD)method, v3);
    byte_42EB801 = 1;
  }
  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
    return UserServantEntity__getTreasureDeviceInfo(userSvtEntity, tdInfo, -1, -1, 0, 0LL);
  v8 = (TreasureDvcInfo_o *)sub_B5D694(TreasureDvcInfo_TypeInfo);
  TreasureDvcInfo___ctor(v8, 0LL);
  *tdInfo = v8;
  sub_B5D560((BattleServantConfConponent_o *)tdInfo, (System_Int32_array **)v8, v9, v10, v11, v12, v13, v14);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  FilterKindList_c *v12; // x0
  Voice_BATTLE_array *RarityFilterKindList; // x0
  FilterKindList_c *v14; // x0
  ListViewSort_FilterKind_array *v15; // x0
  FilterKindList_c *v16; // x0
  ListViewSort_FilterKind_array *v17; // x0
  bool IsMatchServantEquipCombineStatusFilter; // w8
  bool result; // w0
  FilterKindList_c *v20; // x0
  ListViewSort_FilterKind_array *v21; // x0
  bool HaveStatusFilter; // w8
  __int64 v23; // x0

  if ( (byte_42EB7FD & 1) == 0 )
  {
    sub_B5D5C4(&FilterKindList_TypeInfo, (_DWORD)sort, (_DWORD)method, v3);
    sub_B5D5C4(&ListViewSort_FilterKind___TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v9, v10, v11);
    byte_42EB7FD = 1;
  }
  v12 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v12 = FilterKindList_TypeInfo;
  }
  RarityFilterKindList = (Voice_BATTLE_array *)v12->static_fields->RarityFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_38;
  RarityFilterKindList = System_Collections_Generic_List_Voice_BATTLE___ToArray(
                           (System_Collections_Generic_List_Voice_BATTLE__o *)RarityFilterKindList,
                           (const MethodInfo_30468BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_38;
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)RarityFilterKindList, 0LL)
    && !ListViewSort__IsMatchRarityFilter(sort, this->fields.rarity, 0LL)
    || !ListViewSort__CheckSvtEquipEffectFilterDefaultAll(sort, 0LL)
    && !ServantEquipEffectFilterController__IsMatchEffectCategory(this->fields.categoryIdList, sort, 0LL) )
  {
    return 0;
  }
  v14 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v14 = FilterKindList_TypeInfo;
  }
  RarityFilterKindList = (Voice_BATTLE_array *)v14->static_fields->ServantEquipTypeFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_38;
  v15 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           (System_Collections_Generic_List_Voice_BATTLE__o *)RarityFilterKindList,
                                           (const MethodInfo_30468BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v15, 0LL)
    && !ListViewSort__IsMatchServantEquipTypeFilter(sort, this->fields.servantEntity, 0LL) )
  {
    return 0;
  }
  v16 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v16 = FilterKindList_TypeInfo;
  }
  RarityFilterKindList = (Voice_BATTLE_array *)v16->static_fields->ServantEquipCombineStatusFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_38;
  v17 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           (System_Collections_Generic_List_Voice_BATTLE__o *)RarityFilterKindList,
                                           (const MethodInfo_30468BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v17, 0LL) )
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
  v20 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v20 = FilterKindList_TypeInfo;
  }
  RarityFilterKindList = (Voice_BATTLE_array *)v20->static_fields->ServantEquipHaveStatusFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_38;
  v21 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           (System_Collections_Generic_List_Voice_BATTLE__o *)RarityFilterKindList,
                                           (const MethodInfo_30468BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v21, 0LL) )
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
  RarityFilterKindList = (Voice_BATTLE_array *)sub_B5D5DC(ListViewSort_FilterKind___TypeInfo, 1LL);
  if ( !RarityFilterKindList )
LABEL_38:
    sub_B5D69C(RarityFilterKindList, sort);
  if ( !RarityFilterKindList->max_length )
  {
    v23 = sub_B5D6C8(RarityFilterKindList);
    sub_B5D668(v23, 0LL);
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
  sub_B5D560(
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
    sub_B5D69C(0LL, method);
  this->fields.isChoice = UserServantEntity__IsChoice(userSvtEntity, 0LL);
  this->fields.isSwapChoice = 0;
}


void __fastcall EquipGraphListViewItem__ModifyLockItem(EquipGraphListViewItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0

  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_B5D69C(0LL, method);
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
  sub_B5D560(
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
  __int64 v3; // x3
  EquipGraphListViewItem_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  EventUpValSetupInfo_o *setupInfo; // x21
  struct System_Int32_array *servantEquipFilterEventIdList; // x8
  _BOOL4 isSwapChoice; // w8
  _BOOL4 isChoice; // w9
  struct UserServantEntity_o *v16; // x8
  __int128 v17; // q1
  struct UserServantEntity_o *v18; // x8
  int64_t rarity; // x8
  struct UserServantEntity_o *v20; // x8
  int32_t adjustHp; // w3
  int32_t hp; // w2
  int32_t v23; // w1
  struct ServantEntity_o *servantEntity; // x8
  IconLabelInfo_o *iconLabelInfo2; // x19
  struct ListViewManager_o *manager; // x8
  __int64 v27; // x11
  struct ListViewManager_o *v28; // x20
  struct UserServantEntity_o *v29; // x8
  int32_t klass; // w20
  EquipGraphListViewItem_o *userSvtEntity; // x22
  int32_t v32; // w5
  int32_t *p_bonusKind2Id; // x8
  struct UserServantEntity_o *v34; // x8
  __int64 v35; // x21
  __int64 v36; // x22
  const MethodInfo *v37; // x2
  struct ServantEntity_o *v38; // x8
  __int64 collectionNo; // x10
  struct UserServantEntity_o *v40; // x8
  bool EventUpVal_21840756; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v43; // [xsp+10h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v44; // [xsp+30h] [xbp-40h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16

  v5 = this;
  if ( (byte_42EB7FE & 1) == 0 )
  {
    sub_B5D5C4(&EquipGraphListViewManager_TypeInfo, (_DWORD)sort, (_DWORD)method, v3);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6, v7, v8);
    this = (EquipGraphListViewItem_o *)sub_B5D5C4(
                                         &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
                                         v9,
                                         v10,
                                         v11);
    byte_42EB7FE = 1;
  }
  setupInfo = v5->fields.setupInfo;
  *(_WORD *)&v5->fields.isTermination = 0;
  v5->fields.sortValue1 = -1LL;
  if ( !setupInfo )
    goto LABEL_8;
  servantEquipFilterEventIdList = setupInfo->fields.servantEquipFilterEventIdList;
  if ( !servantEquipFilterEventIdList
    || !*(_QWORD *)&servantEquipFilterEventIdList->max_length
    || v5->fields.isOldBase
    || v5->fields.isBase )
  {
    goto LABEL_8;
  }
  if ( !sort )
    goto LABEL_74;
  if ( !setupInfo->fields.isQuestStart )
  {
    if ( sort->fields.bonusKind2 != 1 )
      goto LABEL_8;
    if ( v5->fields.bonusKind == 1 )
    {
      p_bonusKind2Id = &sort->fields.bonusKind2Id;
      if ( v5->fields.bonusKindId == sort->fields.bonusKind2Id )
        goto LABEL_55;
    }
    else
    {
      p_bonusKind2Id = &sort->fields.bonusKind2Id;
    }
    v5->fields.bonusKind = 1;
    v32 = *p_bonusKind2Id;
    this = (EquipGraphListViewItem_o *)v5->fields.userSvtEntity;
    v5->fields.bonusKindId = *p_bonusKind2Id;
    if ( !this )
      goto LABEL_74;
LABEL_71:
    EventUpVal_21840756 = UserServantEntity__getEventUpVal_21840756(
                            (UserServantEntity_o *)this,
                            -1,
                            0,
                            0,
                            setupInfo,
                            v32,
                            0,
                            0LL);
    v5->fields.isEventUpVal = EventUpVal_21840756;
    if ( !EventUpVal_21840756 )
      goto LABEL_73;
    goto LABEL_72;
  }
  if ( sort->fields.bonusKind != 1 )
    goto LABEL_8;
  if ( v5->fields.bonusKind != 1 )
  {
    userSvtEntity = (EquipGraphListViewItem_o *)v5->fields.userSvtEntity;
    v5->fields.bonusKind = 1;
    this = (EquipGraphListViewItem_o *)EventUpValSetupInfo__get_ServantEquipFilterEventId(setupInfo, 0LL);
    if ( !userSvtEntity )
      goto LABEL_74;
    v32 = (int)this;
    this = userSvtEntity;
    goto LABEL_71;
  }
LABEL_55:
  if ( !v5->fields.isEventUpVal )
    goto LABEL_73;
LABEL_72:
  if ( v5->fields.isInvalidRarity )
    goto LABEL_73;
LABEL_8:
  this = (EquipGraphListViewItem_o *)((__int64 (__fastcall *)(EquipGraphListViewItem_o *, ListViewSort_o *, void *))v5->klass->vtable._5_IsMatchFilter.method)(
                                       v5,
                                       sort,
                                       v5->klass[1]._1.image);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
LABEL_73:
    LOBYTE(this) = 0;
    return (char)this;
  }
  isSwapChoice = v5->fields.isSwapChoice;
  isChoice = v5->fields.isChoice;
  v5->fields.sortValue0 = 0LL;
  if ( isSwapChoice != isChoice )
  {
    if ( !sort )
      goto LABEL_74;
    if ( sort->fields.isChoiceSort )
      v5->fields.sortValue0 = 10LL;
  }
  this = (EquipGraphListViewItem_o *)v5->fields.iconLabelInfo2;
  if ( !this )
    goto LABEL_74;
  IconLabelInfo__Clear((IconLabelInfo_o *)this, 0LL);
  if ( !sort )
    goto LABEL_74;
  this = (EquipGraphListViewItem_o *)(&dword_0 + 1);
  switch ( sort->fields.sortKind )
  {
    case 1:
      v16 = v5->fields.userSvtEntity;
      if ( !v16 )
        goto LABEL_74;
      v17 = *(_OWORD *)&v16->fields.id.fields.fakeValue;
      *(_OWORD *)&v44.fields.currentCryptoKey = *(_OWORD *)&v16->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v44.fields.fakeValue = v17;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v43 = v44;
      this = (EquipGraphListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v43, 0LL);
      v18 = v5->fields.userSvtEntity;
      v5->fields.sortValue1 = (int64_t)this;
      if ( !v18 )
        goto LABEL_74;
      this = (EquipGraphListViewItem_o *)v5->fields.iconLabelInfo1;
      if ( !this )
        goto LABEL_74;
      IconLabelInfo__SetTime((IconLabelInfo_o *)this, 49, v18->fields.createdAt, 0, 0, 0, 0LL);
      goto LABEL_41;
    case 2:
      rarity = v5->fields.rarity;
      goto LABEL_31;
    case 3:
      this = (EquipGraphListViewItem_o *)v5->fields.userSvtEntity;
      if ( !this )
        goto LABEL_74;
      v5->fields.sortValue1 = SLODWORD(this[1].klass);
      goto LABEL_32;
    case 5:
      v20 = v5->fields.userSvtEntity;
      if ( !v20 )
        goto LABEL_74;
      this = (EquipGraphListViewItem_o *)v5->fields.iconLabelInfo1;
      v5->fields.sortValue1 = v20->fields.hp;
      if ( !this )
        goto LABEL_74;
      adjustHp = v20->fields.adjustHp;
      hp = v20->fields.hp;
      v23 = 3;
      goto LABEL_40;
    case 6:
      v29 = v5->fields.userSvtEntity;
      if ( !v29 )
        goto LABEL_74;
      this = (EquipGraphListViewItem_o *)v5->fields.iconLabelInfo1;
      v5->fields.sortValue1 = v29->fields.atk;
      if ( !this )
        goto LABEL_74;
      adjustHp = v29->fields.adjustAtk;
      hp = v29->fields.atk;
      v23 = 5;
LABEL_40:
      IconLabelInfo__Set_28463004((IconLabelInfo_o *)this, v23, hp, adjustHp, 0, 0, 0, 0, 0LL);
LABEL_41:
      this = (EquipGraphListViewItem_o *)v5->fields.userSvtEntity;
      if ( !this )
        goto LABEL_74;
      iconLabelInfo2 = v5->fields.iconLabelInfo2;
      goto LABEL_43;
    case 7:
      servantEntity = v5->fields.servantEntity;
      if ( !servantEntity )
        goto LABEL_74;
      rarity = servantEntity->fields.cost;
LABEL_31:
      this = (EquipGraphListViewItem_o *)v5->fields.userSvtEntity;
      v5->fields.sortValue1 = rarity;
      if ( !this )
        goto LABEL_74;
LABEL_32:
      iconLabelInfo2 = v5->fields.iconLabelInfo1;
LABEL_43:
      klass = (int32_t)this[1].klass;
      break;
    case 0xE:
      this = (EquipGraphListViewItem_o *)v5->fields.amountSortValue;
      if ( ((unsigned __int64)this & 0x8000000000000000LL) == 0 )
        goto LABEL_66;
      manager = sort->fields.manager;
      if ( manager
        && (v27 = *(&EquipGraphListViewManager_TypeInfo->_2.bitflags2 + 1),
            *(&manager->klass->_2.bitflags2 + 1) >= (unsigned int)v27) )
      {
        if ( (EquipGraphListViewManager_c *)manager->klass->_2.typeHierarchy[v27 - 1] == EquipGraphListViewManager_TypeInfo )
          v28 = sort->fields.manager;
        else
          v28 = 0LL;
      }
      else
      {
        v28 = 0LL;
      }
      v34 = v5->fields.userSvtEntity;
      if ( !v34 )
        goto LABEL_74;
      v36 = *(_QWORD *)&v34->fields.svtId.fields.currentCryptoKey;
      v35 = *(_QWORD *)&v34->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v45.fields.currentCryptoKey = v36;
      *(_QWORD *)&v45.fields.fakeValue = v35;
      this = (EquipGraphListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v45, 0LL);
      if ( !v28 )
        goto LABEL_74;
      this = (EquipGraphListViewItem_o *)EquipGraphListViewManager__GetAmountSortValue(
                                           (EquipGraphListViewManager_o *)v28,
                                           (int32_t)this,
                                           v37);
      v5->fields.amountSortValue = (int64_t)this;
LABEL_66:
      v38 = v5->fields.servantEntity;
      if ( !v38 )
        goto LABEL_74;
      collectionNo = v38->fields.collectionNo;
      v40 = v5->fields.userSvtEntity;
      v5->fields.sortValue1 = ((_QWORD)this << 48) | ((unsigned __int64)(unsigned int)v5->fields.rarity << 32) | collectionNo;
      if ( !v40 )
        goto LABEL_74;
      iconLabelInfo2 = v5->fields.iconLabelInfo1;
      klass = v40->fields.lv;
      this = (EquipGraphListViewItem_o *)v40;
      break;
    default:
      return (char)this;
  }
  this = (EquipGraphListViewItem_o *)UserServantEntity__getLevelMax((UserServantEntity_o *)this, 0LL);
  if ( !iconLabelInfo2 )
LABEL_74:
    sub_B5D69C(this, sort);
  IconLabelInfo__Set_28463004(iconLabelInfo2, 2, klass, (int32_t)this, 0, 0, 0, 0, 0LL);
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
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int64_t Member; // x0
  __int64 v19; // x1
  __int64 v20; // x8
  __int64 v21; // x8
  int v22; // w21
  int32_t v23; // w28
  PartyListViewItem_o *v24; // x24
  int32_t i; // w25
  PartyOrganizationListViewItem_o *v26; // x26
  struct UserServantEntity_o *userSvtEntity; // x8
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *p_svtId; // x27
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o EquipSvtId; // kr00_16
  const MethodInfo *v30; // x4
  struct UserServantEntity_o *v31; // x23
  int64_t v32; // x27
  struct UserServantEntity_o *v33; // x8
  __int128 v34; // q1
  int32_t v35; // w0
  System_Int32_array **v36; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  struct UserServantEntity_o *v43; // x8
  __int128 v44; // q0
  int64_t v45; // x0
  int32_t WeareMember; // w0
  System_Int32_array **v47; // x0
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v54; // kr10_16
  struct UserServantEntity_o *v55; // x8
  int v56; // w21
  struct UserServantEntity_o *v57; // x8
  __int64 v58; // x21
  __int64 v59; // x22
  int32_t v60; // w0
  __int64 v61; // x0
  PartyListViewItem_array *v63; // [xsp+8h] [xbp-F8h]
  PartyListViewItem_o *v64; // [xsp+10h] [xbp-F0h]
  BattleServantConfConponent_o *v65; // [xsp+18h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v66; // [xsp+20h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v67; // [xsp+40h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v68; // [xsp+60h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v69; // [xsp+80h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v70; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v71; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v72; // 0:x2.16

  v8 = partyItem;
  v9 = baseDeckItemList;
  if ( (byte_42EB7FB & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)equippedMemberItem, (_DWORD)baseDeckItemList, partyItem);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v15, v16, v17);
    byte_42EB7FB = 1;
  }
  *equippedMemberItem = 0LL;
  v65 = (BattleServantConfConponent_o *)equippedMemberItem;
  sub_B5D560(
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
  v20 = *(_QWORD *)&v9->max_length;
  this->fields.wearerMember = -1;
  this->fields._MaxWave_k__BackingField = v20;
  v21 = *(_QWORD *)&v9->max_length;
  if ( (int)v21 >= 1 )
  {
    v22 = 0;
    v23 = 1;
    v63 = v9;
    v64 = v8;
    do
    {
      if ( v22 >= (unsigned int)v21 )
      {
LABEL_61:
        v61 = sub_B5D6C8(Member);
        sub_B5D668(v61, 0LL);
      }
      if ( !v8 )
        goto LABEL_60;
      v24 = v9->m_Items[v22];
      if ( !v24 )
        goto LABEL_60;
      if ( v8->fields.index != v24->fields.index )
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
          Member = (int64_t)PartyListViewItem__GetMember(v24, i, 0LL);
          if ( !Member )
            goto LABEL_60;
          v26 = (PartyOrganizationListViewItem_o *)Member;
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
              EquipSvtId = PartyOrganizationListViewItem__get_EquipSvtId(v26, 0LL);
              *(_QWORD *)&v70.fields.currentCryptoKey = p_svtId;
              *(_QWORD *)&v72.fields.currentCryptoKey = *(_QWORD *)&EquipSvtId.fields.fakeValue;
              *(_QWORD *)&v70.fields.fakeValue = *(_QWORD *)&EquipSvtId.fields.currentCryptoKey;
              *(_QWORD *)&v72.fields.fakeValue = 0LL;
              Member = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__Equals_44900324(v70, v72, v30);
              this->fields._IsUnique_k__BackingField = Member & 1;
              if ( (Member & 1) != 0 )
              {
                this->fields._UniqueOrganizedWave_k__BackingField = v23;
                this->fields._IsClearedWave_k__BackingField = v24->fields._IsClearedWave_k__BackingField;
              }
            }
            v31 = this->fields.userSvtEntity;
            if ( !v31 )
              goto LABEL_60;
            Member = (int64_t)PartyOrganizationListViewItem__GetEquipList(v26, 0LL);
            if ( !Member )
              goto LABEL_60;
            if ( !*(_DWORD *)(Member + 24) )
              goto LABEL_61;
            v32 = *(_QWORD *)(Member + 32);
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            }
            CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v69, v32, 0LL);
            v68 = v69;
            Member = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__Equals_44902916(&v31->fields.id, &v68, 0LL);
            if ( (Member & 1) != 0 )
            {
              v43 = this->fields.userSvtEntity;
              if ( v43 )
              {
                v44 = *(_OWORD *)&v43->fields.id.fields.fakeValue;
                *(_OWORD *)&v69.fields.currentCryptoKey = *(_OWORD *)&v43->fields.id.fields.currentCryptoKey;
                *(_OWORD *)&v69.fields.fakeValue = v44;
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                }
                v67 = v69;
                v45 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v67, 0LL);
                WeareMember = PartyListViewItem__GetWeareMember(v24, v45, 0LL);
                this->fields.wearerMember = WeareMember;
                if ( (WeareMember & 0x80000000) == 0 )
                {
                  v47 = (System_Int32_array **)PartyListViewItem__GetMember(v24, WeareMember, 0LL);
                  v65->klass = (BattleServantConfConponent_c *)v47;
                  sub_B5D560(v65, v47, v48, v49, v50, v51, v52, v53);
                }
                this->fields._OrganizedWave_k__BackingField = v23;
                this->fields._IsClearedWave_k__BackingField = v24->fields._IsClearedWave_k__BackingField;
                return;
              }
LABEL_60:
              sub_B5D69C(Member, v19);
            }
          }
        }
        v9 = v63;
        v8 = v64;
        v21 = *(_QWORD *)&v63->max_length;
      }
      ++v22;
      ++v23;
    }
    while ( v22 < (int)v21 );
  }
  v33 = this->fields.userSvtEntity;
  if ( !v33 )
    goto LABEL_60;
  v34 = *(_OWORD *)&v33->fields.id.fields.fakeValue;
  *(_OWORD *)&v69.fields.currentCryptoKey = *(_OWORD *)&v33->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v69.fields.fakeValue = v34;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v66 = v69;
  Member = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v66, 0LL);
  if ( !v8 )
    goto LABEL_60;
  v35 = PartyListViewItem__GetWeareMember(v8, Member, 0LL);
  this->fields.wearerMember = v35;
  if ( (v35 & 0x80000000) == 0 )
  {
    v36 = (System_Int32_array **)PartyListViewItem__GetMember(v8, v35, 0LL);
    v65->klass = (BattleServantConfConponent_c *)v36;
    sub_B5D560(v65, v36, v37, v38, v39, v40, v41, v42);
    return;
  }
  if ( !this->fields._IsUnique_k__BackingField )
  {
    Member = (int64_t)PartyListViewItem__GetMember(v8, memberIdx, 0LL);
    if ( Member )
    {
      v54 = PartyOrganizationListViewItem__get_EquipSvtId((PartyOrganizationListViewItem_o *)Member, 0LL);
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      Member = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v54, 0LL);
      v55 = this->fields.userSvtEntity;
      if ( v55 )
      {
        v56 = Member;
        Member = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v55->fields.svtId, 0LL);
        if ( v56 == (_DWORD)Member )
          return;
        v57 = this->fields.userSvtEntity;
        if ( v57 )
        {
          v59 = *(_QWORD *)&v57->fields.svtId.fields.currentCryptoKey;
          v58 = *(_QWORD *)&v57->fields.svtId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v71.fields.currentCryptoKey = v59;
          *(_QWORD *)&v71.fields.fakeValue = v58;
          v60 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v71, 0LL);
          this->fields._IsUnique_k__BackingField = PartyListViewItem__IsIdenticalEquipMember(v8, v60, 0LL);
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


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_42EB7FC & 1) == 0 )
  {
    sub_B5D5C4(
      &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
      (_DWORD)baseDeckItemList,
      (_DWORD)partyItem,
      *(_QWORD *)&memberIdx);
    byte_42EB7FC = 1;
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
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.wearerServantName, 0LL, v10, v11, v12, v13, v14, v15);
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
    sub_B5D560(
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
    Member = (PartyOrganizationListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                  SvtId,
                                                  0LL);
    this->fields.wearersSvtId = (int)Member;
    if ( !equippedMemberItem
      || (Member = (PartyOrganizationListViewItem_o *)equippedMemberItem->fields.userServantEntity) == 0LL )
    {
LABEL_16:
      sub_B5D69C(Member, wearerMember);
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


bool __fastcall EquipGraphListViewItem__get_IsClearedWave(EquipGraphListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._IsClearedWave_k__BackingField;
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
  int v2; // w2
  __int64 v3; // x3
  ServantEntity_o *servantEntity; // x0
  LocalizationManager_c *v7; // x0

  if ( (byte_42EB7FF & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EB7FF = 1;
  }
  servantEntity = this->fields.servantEntity;
  if ( servantEntity )
    return ServantEntity__getName(servantEntity, -1, -1, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  if ( !byte_42E6772 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E6772 = 1;
  }
  v7 = LocalizationManager_TypeInfo;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v7 = LocalizationManager_TypeInfo;
  }
  return v7->static_fields->unknownNameText;
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  DataManager_o *Instance; // x0
  __int64 v15; // x1
  WarEntity_o *Entity; // x0
  System_String_o **p_age; // x8
  LocalizationManager_c *v18; // x0

  if ( (byte_42EB800 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantClassMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v5, v6, v7);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12, v13);
    byte_42EB800 = 1;
  }
  if ( this->fields.weareClassId < 1 )
    goto LABEL_21;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantClassMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v15);
  }
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
             this->fields.weareClassId,
             (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
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
    if ( !byte_42E6772 )
    {
      sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)method, v2, v3);
      byte_42E6772 = 1;
    }
    v18 = LocalizationManager_TypeInfo;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v18 = LocalizationManager_TypeInfo;
    }
    p_age = &v18->static_fields->unknownNameText;
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