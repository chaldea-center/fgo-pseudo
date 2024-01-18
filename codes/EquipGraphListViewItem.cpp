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
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  IconLabelInfo_o *v25; // x20
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  IconLabelInfo_o *v32; // x27
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_userSvtEntity; // x21
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  int64_t Instance; // x0
  __int64 v53; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v54; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v55; // x26
  __int64 v56; // x27
  __int64 v57; // x28
  struct ServantEntity_o *Entity; // x0
  struct ServantEntity_o **p_servantEntity; // x26
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  ServantLimitMaster_o *v66; // x27
  int32_t v67; // w28
  __int128 v68; // q1
  const MethodInfo *v69; // x5
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  int32_t *p_wearerMember; // x20
  __int128 v77; // q0
  int64_t v78; // x0
  int32_t WeareMember; // w0
  struct System_String_o *ServantName; // x0
  System_String_array **v81; // x2
  System_String_array **v82; // x3
  System_Boolean_array **v83; // x4
  System_Int32_array **v84; // x5
  System_Int32_array *v85; // x6
  System_Int32_array *v86; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  UserServantEntity_o *v88; // x8
  UserServantEntity_o *v89; // x8
  bool IsChoice; // w8
  UserServantEntity_o *v91; // x8
  struct EventUpValSetupInfo_o *v92; // x8
  int32_t EventId; // w23
  PartyOrganizationListViewItem_o *Member; // x24
  struct UserServantEntity_o *userServantEntity; // x8
  PartyOrganizationUtility_o *v96; // x22
  __int64 v97; // x25
  __int64 v98; // x26
  UserServantEntity_o *v99; // x8
  int32_t v100; // w24
  int32_t v101; // w25
  struct ServantEntity_o *servantEntity; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v103; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v104; // q0
  int64_t v105; // x8
  struct System_Int32_array *EquipCategoryIdList; // x0
  BattleServantConfConponent_o *p_categoryIdList; // x19
  System_String_array **v108; // x2
  System_String_array **v109; // x3
  System_Boolean_array **v110; // x4
  System_Int32_array **v111; // x5
  System_Int32_array *v112; // x6
  System_Int32_array *v113; // x7
  struct IconLabelInfo_o **p_iconLabelInfo2; // [xsp+8h] [xbp-F8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v115; // [xsp+10h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v116; // [xsp+30h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v117; // [xsp+50h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v118; // [xsp+70h] [xbp-90h]
  int32_t actMaxRarity; // [xsp+94h] [xbp-6Ch] BYREF
  System_String_o *skillName; // [xsp+98h] [xbp-68h] BYREF
  PartyOrganizationListViewItem_o *equippedMemberItem; // [xsp+A0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v122; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v123; // 0:x0.16

  if ( (byte_418A16D & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitMaster___, *(_QWORD *)&index);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v17);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v18);
    sub_B2C35C(&IconLabelInfo_TypeInfo, v19);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v20);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v21);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    sub_B2C35C(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v23);
    sub_B2C35C(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v24);
    byte_418A16D = 1;
  }
  skillName = 0LL;
  equippedMemberItem = 0LL;
  actMaxRarity = 0;
  v25 = (IconLabelInfo_o *)sub_B2C42C(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v25, 0LL);
  this->fields.iconLabelInfo1 = v25;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo1,
    (System_Int32_array **)v25,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  v32 = (IconLabelInfo_o *)sub_B2C42C(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v32, 0LL);
  this->fields.iconLabelInfo2 = v32;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo2,
    (System_Int32_array **)v32,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  ListViewItem___ctor_24128628((ListViewItem_o *)this, index, 0LL);
  this->fields.userSvtEntity = userSvtEntity;
  p_userSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userSvtEntity;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.userSvtEntity,
    (System_Int32_array **)userSvtEntity,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  this->fields.setupInfo = setupInfo;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.setupInfo,
    (System_Int32_array **)setupInfo,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_67;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  v54 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_67;
  v55 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v57 = *(_QWORD *)&v54[5].fields.currentCryptoKey;
  v56 = *(_QWORD *)&v54[5].fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v122.fields.currentCryptoKey = v57;
  *(_QWORD *)&v122.fields.fakeValue = v56;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v122, 0LL);
  if ( !v55 )
    goto LABEL_67;
  Entity = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                       v55,
                                       Instance,
                                       (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = Entity;
  p_servantEntity = &this->fields.servantEntity;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.servantEntity,
    (System_Int32_array **)Entity,
    v60,
    v61,
    v62,
    v63,
    v64,
    v65);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_67;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtEntity )
    goto LABEL_67;
  v66 = (ServantLimitMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064((*p_userSvtEntity)[5], 0LL);
  if ( !*p_userSvtEntity )
    goto LABEL_67;
  v67 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064((*p_userSvtEntity)[6], 0LL);
  if ( !v66 )
    goto LABEL_67;
  Instance = (int64_t)ServantLimitMaster__GetEntity(v66, v67, Instance, 0LL);
  if ( !*p_servantEntity )
    goto LABEL_67;
  this->fields.classId = (*p_servantEntity)->fields.classId;
  if ( !Instance )
    goto LABEL_67;
  this->fields.rarity = *(_DWORD *)(Instance + 24);
  if ( !userSvtEntity )
    goto LABEL_67;
  v68 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v118.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v118.fields.fakeValue = v68;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v117 = v118;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v117, 0LL);
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
    EquipGraphListViewItem__SetWaveBattleInfo(this, &equippedMemberItem, baseDeckItemList, partyItem, memberIdx, v69);
    p_wearerMember = &this->fields.wearerMember;
  }
  else
  {
    v77 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
    *(_OWORD *)&v118.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v118.fields.fakeValue = v77;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v116 = v118;
    v78 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v116, 0LL);
    WeareMember = PartyListViewItem__GetWeareMember(partyItem, v78, 0LL);
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
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.wearerServantName, 0LL, v70, v71, v72, v73, v74, v75);
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
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.wearerServantName,
    (System_Int32_array **)ServantName,
    v81,
    v82,
    v83,
    v84,
    v85,
    v86);
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
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(SvtId, 0LL);
  this->fields.wearersSvtId = Instance;
  if ( !equippedMemberItem )
    goto LABEL_67;
  Instance = (int64_t)equippedMemberItem->fields.userServantEntity;
  if ( !Instance )
    goto LABEL_67;
  Instance = UserServantEntity__getRarity((UserServantEntity_o *)Instance, 0LL);
LABEL_38:
  v88 = this->fields.userSvtEntity;
  this->fields.weareRarity = Instance;
  if ( !v88 )
    goto LABEL_67;
  Instance = UserServantEntity__IsLock(v88, 0LL);
  v89 = this->fields.userSvtEntity;
  this->fields.isLock = Instance & 1;
  if ( !v89 )
    goto LABEL_67;
  IsChoice = UserServantEntity__IsChoice(v89, 0LL);
  Instance = (int64_t)this->fields.userSvtEntity;
  this->fields.isChoice = IsChoice;
  *(_WORD *)&this->fields.isSwapLock = 0;
  if ( !Instance )
    goto LABEL_67;
  Instance = UserServantEntity__IsFriendShipSvtEquip((UserServantEntity_o *)Instance, 0LL);
  v91 = this->fields.userSvtEntity;
  this->fields.isFriendShipSvtEq = Instance & 1;
  if ( !v91 )
    goto LABEL_67;
  Instance = UserServantEntity__IsChocolateSvtEquip(v91, 0LL);
  v92 = this->fields.setupInfo;
  this->fields.isChocolateSvtEquip = Instance & 1;
  if ( v92 )
  {
    if ( v92->fields.isQuestStart )
      EventId = EventUpValSetupInfo__get_EventId(v92, 0LL);
    else
      EventId = -1;
    Member = PartyListViewItem__GetMember(partyItem, memberIdx, 0LL);
    if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    }
    Instance = (int64_t)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( Member )
    {
      userServantEntity = Member->fields.userServantEntity;
      if ( userServantEntity )
      {
        v96 = (PartyOrganizationUtility_o *)Instance;
        v98 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
        v97 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v123.fields.currentCryptoKey = v98;
        *(_QWORD *)&v123.fields.fakeValue = v97;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v123, 0LL);
        v99 = Member->fields.userServantEntity;
        if ( v99 )
        {
          v100 = Instance;
          Instance = UserServantEntity__getRarity(v99, 0LL);
          if ( *p_userSvtEntity )
          {
            v101 = Instance;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064((*p_userSvtEntity)[5], 0LL);
            if ( v96 )
            {
              Instance = PartyOrganizationUtility__IsRarityRestriction(
                           v96,
                           &skillName,
                           &actMaxRarity,
                           v100,
                           v101,
                           Instance,
                           EventId,
                           0LL);
              LOBYTE(v92) = Instance & 1;
              goto LABEL_58;
            }
          }
        }
      }
    }
LABEL_67:
    sub_B2C434(Instance, v53);
  }
LABEL_58:
  servantEntity = this->fields.servantEntity;
  this->fields.isInvalidRarity = (char)v92;
  this->fields.isEventUpVal = 0;
  *(_QWORD *)&this->fields.bonusKind = 0LL;
  if ( !servantEntity )
    goto LABEL_67;
  v103 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_67;
  this->fields.sortValue2 = ((__int64)servantEntity->fields.collectionNo << 16) | ((unsigned __int64)(unsigned int)this->fields.rarity << 48) | v103[16].fields.currentCryptoKey;
  v104 = v103[2];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v118.fields.currentCryptoKey = v103[1];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v118.fields.fakeValue = v104;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v115 = v118;
  v105 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v115, 0LL);
  Instance = (int64_t)this->fields.userSvtEntity;
  this->fields.sortValue2B = v105;
  this->fields.amountSortValue = -1LL;
  if ( !Instance )
    goto LABEL_67;
  EquipCategoryIdList = UserServantEntity__GetEquipCategoryIdList((UserServantEntity_o *)Instance, 0LL);
  this->fields.categoryIdList = EquipCategoryIdList;
  p_categoryIdList = (BattleServantConfConponent_o *)&this->fields.categoryIdList;
  sub_B2C2F8(p_categoryIdList, (System_Int32_array **)EquipCategoryIdList, v108, v109, v110, v111, v112, v113);
  Instance = (int64_t)p_categoryIdList->monitor;
  if ( !Instance )
    goto LABEL_67;
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0LL);
  Instance = (int64_t)*p_iconLabelInfo2;
  if ( !*p_iconLabelInfo2 )
    goto LABEL_67;
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EquipGraphListViewItem___ctor_29506184(
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
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  IconLabelInfo_o *v27; // x26
  struct IconLabelInfo_o **p_iconLabelInfo2; // x20
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_userSvtEntity; // x21
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  int64_t Instance; // x0
  __int64 v49; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v50; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v51; // x25
  __int64 v52; // x26
  __int64 v53; // x27
  struct ServantEntity_o *Entity; // x0
  struct ServantEntity_o **p_servantEntity; // x25
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  ServantLimitMaster_o *v62; // x26
  int32_t v63; // w27
  UserServantEntity_Fields *p_fields; // x24
  __int128 v65; // q0
  __int128 v66; // q1
  bool v67; // w8
  __int128 v68; // q0
  int32_t WeareMember; // w0
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  PartyOrganizationListViewItem_o *v76; // x22
  struct System_String_o *ServantName; // x0
  System_String_array **v78; // x2
  System_String_array **v79; // x3
  System_Boolean_array **v80; // x4
  System_Int32_array **v81; // x5
  System_Int32_array *v82; // x6
  System_Int32_array *v83; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  UserServantEntity_o *v85; // x8
  UserServantEntity_o *v86; // x8
  bool IsChoice; // w8
  UserServantEntity_o *v88; // x8
  struct ServantEntity_o *servantEntity; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v90; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v91; // q0
  int64_t v92; // x8
  struct System_Int32_array *EquipCategoryIdList; // x0
  BattleServantConfConponent_o *p_categoryIdList; // x19
  System_String_array **v95; // x2
  System_String_array **v96; // x3
  System_Boolean_array **v97; // x4
  System_Int32_array **v98; // x5
  System_Int32_array *v99; // x6
  System_Int32_array *v100; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v101; // [xsp+0h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v102; // [xsp+20h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v103; // [xsp+40h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v104; // [xsp+60h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v105; // 0:x0.16

  if ( (byte_418A16E & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitMaster___, *(_QWORD *)&index);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v14);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v15);
    sub_B2C35C(&IconLabelInfo_TypeInfo, v16);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v18);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    byte_418A16E = 1;
  }
  v20 = (IconLabelInfo_o *)sub_B2C42C(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v20, 0LL);
  this->fields.iconLabelInfo1 = v20;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo1,
    (System_Int32_array **)v20,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  v27 = (IconLabelInfo_o *)sub_B2C42C(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v27, 0LL);
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  this->fields.iconLabelInfo2 = v27;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo2,
    (System_Int32_array **)v27,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  ListViewItem___ctor_24128628((ListViewItem_o *)this, index, 0LL);
  this->fields.userSvtEntity = userSvtEntity;
  p_userSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userSvtEntity;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.userSvtEntity,
    (System_Int32_array **)userSvtEntity,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  this->fields.setupInfo = setupInfo;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.setupInfo,
    (System_Int32_array **)setupInfo,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  v50 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_41;
  v51 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v53 = *(_QWORD *)&v50[5].fields.currentCryptoKey;
  v52 = *(_QWORD *)&v50[5].fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v105.fields.currentCryptoKey = v53;
  *(_QWORD *)&v105.fields.fakeValue = v52;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v105, 0LL);
  if ( !v51 )
    goto LABEL_41;
  Entity = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                       v51,
                                       Instance,
                                       (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = Entity;
  p_servantEntity = &this->fields.servantEntity;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.servantEntity,
    (System_Int32_array **)Entity,
    v56,
    v57,
    v58,
    v59,
    v60,
    v61);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtEntity )
    goto LABEL_41;
  v62 = (ServantLimitMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064((*p_userSvtEntity)[5], 0LL);
  if ( !*p_userSvtEntity )
    goto LABEL_41;
  v63 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064((*p_userSvtEntity)[6], 0LL);
  if ( !v62 )
    goto LABEL_41;
  Instance = (int64_t)ServantLimitMaster__GetEntity(v62, v63, Instance, 0LL);
  if ( !*p_servantEntity )
    goto LABEL_41;
  this->fields.classId = (*p_servantEntity)->fields.classId;
  if ( !Instance )
    goto LABEL_41;
  this->fields.rarity = *(_DWORD *)(Instance + 24);
  if ( !userSvtEntity )
    goto LABEL_41;
  v65 = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  v66 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  p_fields = &userSvtEntity->fields;
  *(_OWORD *)&v104.fields.currentCryptoKey = v65;
  *(_OWORD *)&v104.fields.fakeValue = v66;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v103 = v104;
  v67 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v103, 0LL) == targetSvtEquipId;
  this->fields.isOldBase = v67;
  this->fields.isBase = v67;
  v68 = *(_OWORD *)&p_fields->id.fields.fakeValue;
  *(_OWORD *)&v102.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v102.fields.fakeValue = v68;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v102, 0LL);
  if ( !partyItem )
    goto LABEL_41;
  WeareMember = WarBoardPartyListViewItem__GetWeareMember(partyItem, Instance, 0LL);
  this->fields.wearerMember = WeareMember;
  if ( (WeareMember & 0x80000000) == 0 )
  {
    Instance = (int64_t)WarBoardPartyListViewItem__GetMemberItem(partyItem, WeareMember, 0LL);
    if ( Instance )
    {
      v76 = (PartyOrganizationListViewItem_o *)Instance;
      ServantName = PartyOrganizationListViewItem__get_ServantName((PartyOrganizationListViewItem_o *)Instance, 0LL);
      this->fields.wearerServantName = ServantName;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&this->fields.wearerServantName,
        (System_Int32_array **)ServantName,
        v78,
        v79,
        v80,
        v81,
        v82,
        v83);
      this->fields.weareClassId = v76->fields.classId;
      SvtId = PartyOrganizationListViewItem__get_SvtId(v76, 0LL);
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      this->fields.wearersSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(SvtId, 0LL);
      Instance = (int64_t)v76->fields.userServantEntity;
      if ( Instance )
      {
        Instance = UserServantEntity__getRarity((UserServantEntity_o *)Instance, 0LL);
        goto LABEL_28;
      }
    }
LABEL_41:
    sub_B2C434(Instance, v49);
  }
  this->fields.wearerServantName = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.wearerServantName, 0LL, v70, v71, v72, v73, v74, v75);
  Instance = 0LL;
  *(_QWORD *)&this->fields.weareClassId = 0LL;
LABEL_28:
  v85 = this->fields.userSvtEntity;
  this->fields.weareRarity = Instance;
  if ( !v85 )
    goto LABEL_41;
  Instance = UserServantEntity__IsLock(v85, 0LL);
  v86 = this->fields.userSvtEntity;
  this->fields.isLock = Instance & 1;
  if ( !v86 )
    goto LABEL_41;
  IsChoice = UserServantEntity__IsChoice(v86, 0LL);
  Instance = (int64_t)this->fields.userSvtEntity;
  this->fields.isChoice = IsChoice;
  *(_WORD *)&this->fields.isSwapLock = 0;
  this->fields.isInvalidRarity = 0;
  if ( !Instance )
    goto LABEL_41;
  Instance = UserServantEntity__IsFriendShipSvtEquip((UserServantEntity_o *)Instance, 0LL);
  v88 = this->fields.userSvtEntity;
  this->fields.isFriendShipSvtEq = Instance & 1;
  if ( !v88 )
    goto LABEL_41;
  Instance = UserServantEntity__IsChocolateSvtEquip(v88, 0LL);
  servantEntity = this->fields.servantEntity;
  this->fields.isChocolateSvtEquip = Instance & 1;
  this->fields.isEventUpVal = 0;
  *(_QWORD *)&this->fields.bonusKind = 0LL;
  if ( !servantEntity )
    goto LABEL_41;
  v90 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_41;
  this->fields.sortValue2 = ((__int64)servantEntity->fields.collectionNo << 16) | ((unsigned __int64)(unsigned int)this->fields.rarity << 48) | v90[16].fields.currentCryptoKey;
  v91 = v90[2];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v104.fields.currentCryptoKey = v90[1];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v104.fields.fakeValue = v91;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v101 = v104;
  v92 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v101, 0LL);
  Instance = (int64_t)this->fields.userSvtEntity;
  this->fields.sortValue2B = v92;
  this->fields.amountSortValue = -1LL;
  if ( !Instance )
    goto LABEL_41;
  EquipCategoryIdList = UserServantEntity__GetEquipCategoryIdList((UserServantEntity_o *)Instance, 0LL);
  this->fields.categoryIdList = EquipCategoryIdList;
  p_categoryIdList = (BattleServantConfConponent_o *)&this->fields.categoryIdList;
  sub_B2C2F8(p_categoryIdList, (System_Int32_array **)EquipCategoryIdList, v95, v96, v97, v98, v99, v100);
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

  if ( (byte_418A175 & 1) == 0 )
  {
    sub_B2C35C(&TreasureDvcInfo_TypeInfo, tdInfo);
    byte_418A175 = 1;
  }
  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
    return UserServantEntity__getTreasureDeviceInfo(userSvtEntity, tdInfo, -1, -1, 0, 0LL);
  v7 = (TreasureDvcInfo_o *)sub_B2C42C(TreasureDvcInfo_TypeInfo);
  TreasureDvcInfo___ctor(v7, 0LL);
  *tdInfo = v7;
  sub_B2C2F8((BattleServantConfConponent_o *)tdInfo, (System_Int32_array **)v7, v8, v9, v10, v11, v12, v13);
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
  Voice_BATTLE_array *RarityFilterKindList; // x0
  FilterKindList_c *v9; // x0
  ListViewSort_FilterKind_array *v10; // x0
  __int64 v12; // x0

  if ( (byte_418A171 & 1) == 0 )
  {
    sub_B2C35C(&FilterKindList_TypeInfo, sort);
    sub_B2C35C(&ListViewSort_FilterKind___TypeInfo, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v6);
    byte_418A171 = 1;
  }
  v7 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v7 = FilterKindList_TypeInfo;
  }
  RarityFilterKindList = (Voice_BATTLE_array *)v7->static_fields->RarityFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_25;
  RarityFilterKindList = System_Collections_Generic_List_Voice_BATTLE___ToArray(
                           (System_Collections_Generic_List_Voice_BATTLE__o *)RarityFilterKindList,
                           (const MethodInfo_2F6C0DC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_25;
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)RarityFilterKindList, 0LL)
    && !ListViewSort__IsMatchRarityFilter(sort, this->fields.rarity, 0LL)
    || !ListViewSort__CheckSvtEquipEffectFilterDefaultAll(sort, 0LL)
    && !ServantEquipEffectFilterController__IsMatchEffectCategory(this->fields.categoryIdList, sort, 0LL) )
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
  RarityFilterKindList = (Voice_BATTLE_array *)v9->static_fields->ServantEquipTypeFilterKindList;
  if ( !RarityFilterKindList )
LABEL_25:
    sub_B2C434(RarityFilterKindList, sort);
  v10 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           (System_Collections_Generic_List_Voice_BATTLE__o *)RarityFilterKindList,
                                           (const MethodInfo_2F6C0DC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v10, 0LL)
    && !ListViewSort__IsMatchServantEquipTypeFilter(sort, this->fields.servantEntity, 0LL) )
  {
    return 0;
  }
  RarityFilterKindList = (Voice_BATTLE_array *)sub_B2C374(ListViewSort_FilterKind___TypeInfo, 1LL);
  if ( !RarityFilterKindList )
    goto LABEL_25;
  if ( !RarityFilterKindList->max_length )
  {
    v12 = sub_B2C460(RarityFilterKindList);
    sub_B2C400(v12, 0LL);
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
  sub_B2C2F8(
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
    sub_B2C434(0LL, method);
  this->fields.isChoice = UserServantEntity__IsChoice(userSvtEntity, 0LL);
  this->fields.isSwapChoice = 0;
}


void __fastcall EquipGraphListViewItem__ModifyLockItem(EquipGraphListViewItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0

  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_B2C434(0LL, method);
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
  sub_B2C2F8(
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
  __int64 v5; // x1
  __int64 v6; // x1
  EventUpValSetupInfo_o *setupInfo; // x21
  struct System_Int32_array *servantEquipFilterEventIdList; // x8
  _BOOL4 isSwapChoice; // w8
  _BOOL4 isChoice; // w9
  struct UserServantEntity_o *v11; // x8
  __int128 v12; // q1
  struct UserServantEntity_o *v13; // x8
  int64_t rarity; // x8
  struct UserServantEntity_o *v15; // x8
  int32_t adjustHp; // w3
  int32_t hp; // w2
  int32_t v18; // w1
  struct ServantEntity_o *servantEntity; // x8
  IconLabelInfo_o *iconLabelInfo2; // x19
  struct ListViewManager_o *manager; // x8
  __int64 v22; // x11
  struct ListViewManager_o *v23; // x20
  struct UserServantEntity_o *v24; // x8
  int32_t klass; // w20
  EquipGraphListViewItem_o *userSvtEntity; // x22
  int32_t v27; // w5
  int32_t *p_bonusKind2Id; // x8
  struct UserServantEntity_o *v29; // x8
  __int64 v30; // x21
  __int64 v31; // x22
  const MethodInfo *v32; // x2
  struct ServantEntity_o *v33; // x8
  __int64 collectionNo; // x10
  struct UserServantEntity_o *v35; // x8
  bool EventUpVal_21652484; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+10h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+30h] [xbp-40h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // 0:x0.16

  v4 = this;
  if ( (byte_418A172 & 1) == 0 )
  {
    sub_B2C35C(&EquipGraphListViewManager_TypeInfo, sort);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    this = (EquipGraphListViewItem_o *)sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v6);
    byte_418A172 = 1;
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
    v27 = *p_bonusKind2Id;
    this = (EquipGraphListViewItem_o *)v4->fields.userSvtEntity;
    v4->fields.bonusKindId = *p_bonusKind2Id;
    if ( !this )
      goto LABEL_74;
LABEL_71:
    EventUpVal_21652484 = UserServantEntity__getEventUpVal_21652484(
                            (UserServantEntity_o *)this,
                            -1,
                            0,
                            0,
                            setupInfo,
                            v27,
                            0,
                            0LL);
    v4->fields.isEventUpVal = EventUpVal_21652484;
    if ( !EventUpVal_21652484 )
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
    v27 = (int)this;
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
      v11 = v4->fields.userSvtEntity;
      if ( !v11 )
        goto LABEL_74;
      v12 = *(_OWORD *)&v11->fields.id.fields.fakeValue;
      *(_OWORD *)&v39.fields.currentCryptoKey = *(_OWORD *)&v11->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v39.fields.fakeValue = v12;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v38 = v39;
      this = (EquipGraphListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v38, 0LL);
      v13 = v4->fields.userSvtEntity;
      v4->fields.sortValue1 = (int64_t)this;
      if ( !v13 )
        goto LABEL_74;
      this = (EquipGraphListViewItem_o *)v4->fields.iconLabelInfo1;
      if ( !this )
        goto LABEL_74;
      IconLabelInfo__SetTime((IconLabelInfo_o *)this, 49, v13->fields.createdAt, 0, 0, 0, 0LL);
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
      v15 = v4->fields.userSvtEntity;
      if ( !v15 )
        goto LABEL_74;
      this = (EquipGraphListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = v15->fields.hp;
      if ( !this )
        goto LABEL_74;
      adjustHp = v15->fields.adjustHp;
      hp = v15->fields.hp;
      v18 = 3;
      goto LABEL_40;
    case 6:
      v24 = v4->fields.userSvtEntity;
      if ( !v24 )
        goto LABEL_74;
      this = (EquipGraphListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = v24->fields.atk;
      if ( !this )
        goto LABEL_74;
      adjustHp = v24->fields.adjustAtk;
      hp = v24->fields.atk;
      v18 = 5;
LABEL_40:
      IconLabelInfo__Set_27362128((IconLabelInfo_o *)this, v18, hp, adjustHp, 0, 0, 0, 0, 0LL);
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
        && (v22 = *(&EquipGraphListViewManager_TypeInfo->_2.bitflags2 + 1),
            *(&manager->klass->_2.bitflags2 + 1) >= (unsigned int)v22) )
      {
        if ( (EquipGraphListViewManager_c *)manager->klass->_2.typeHierarchy[v22 - 1] == EquipGraphListViewManager_TypeInfo )
          v23 = sort->fields.manager;
        else
          v23 = 0LL;
      }
      else
      {
        v23 = 0LL;
      }
      v29 = v4->fields.userSvtEntity;
      if ( !v29 )
        goto LABEL_74;
      v31 = *(_QWORD *)&v29->fields.svtId.fields.currentCryptoKey;
      v30 = *(_QWORD *)&v29->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v40.fields.currentCryptoKey = v31;
      *(_QWORD *)&v40.fields.fakeValue = v30;
      this = (EquipGraphListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v40, 0LL);
      if ( !v23 )
        goto LABEL_74;
      this = (EquipGraphListViewItem_o *)EquipGraphListViewManager__GetAmountSortValue(
                                           (EquipGraphListViewManager_o *)v23,
                                           (int32_t)this,
                                           v32);
      v4->fields.amountSortValue = (int64_t)this;
LABEL_66:
      v33 = v4->fields.servantEntity;
      if ( !v33 )
        goto LABEL_74;
      collectionNo = v33->fields.collectionNo;
      v35 = v4->fields.userSvtEntity;
      v4->fields.sortValue1 = ((_QWORD)this << 48) | ((unsigned __int64)(unsigned int)v4->fields.rarity << 32) | collectionNo;
      if ( !v35 )
        goto LABEL_74;
      iconLabelInfo2 = v4->fields.iconLabelInfo1;
      klass = v35->fields.lv;
      this = (EquipGraphListViewItem_o *)v35;
      break;
    default:
      return (char)this;
  }
  this = (EquipGraphListViewItem_o *)UserServantEntity__getLevelMax((UserServantEntity_o *)this, 0LL);
  if ( !iconLabelInfo2 )
LABEL_74:
    sub_B2C434(this, sort);
  IconLabelInfo__Set_27362128(iconLabelInfo2, 2, klass, (int32_t)this, 0, 0, 0, 0, 0LL);
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
  __int64 v12; // x1
  __int64 v13; // x1
  int64_t Member; // x0
  __int64 v15; // x1
  __int64 v16; // x8
  __int64 v17; // x8
  int v18; // w21
  int32_t v19; // w28
  PartyListViewItem_o *v20; // x24
  int32_t i; // w25
  PartyOrganizationListViewItem_o *v22; // x26
  struct UserServantEntity_o *userSvtEntity; // x8
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *p_svtId; // x27
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o EquipSvtId; // kr00_16
  const MethodInfo *v26; // x4
  struct UserServantEntity_o *v27; // x23
  int64_t v28; // x27
  struct UserServantEntity_o *v29; // x8
  __int128 v30; // q1
  int32_t v31; // w0
  System_Int32_array **v32; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  struct UserServantEntity_o *v39; // x8
  __int128 v40; // q0
  int64_t v41; // x0
  int32_t WeareMember; // w0
  System_Int32_array **v43; // x0
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v50; // kr10_16
  struct UserServantEntity_o *v51; // x8
  int v52; // w21
  struct UserServantEntity_o *v53; // x8
  __int64 v54; // x21
  __int64 v55; // x22
  int32_t v56; // w0
  __int64 v57; // x0
  PartyListViewItem_array *v59; // [xsp+8h] [xbp-F8h]
  PartyListViewItem_o *v60; // [xsp+10h] [xbp-F0h]
  BattleServantConfConponent_o *v61; // [xsp+18h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v62; // [xsp+20h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v63; // [xsp+40h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v64; // [xsp+60h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v65; // [xsp+80h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v66; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v67; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v68; // 0:x2.16

  v8 = partyItem;
  v9 = baseDeckItemList;
  if ( (byte_418A16F & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, equippedMemberItem);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    byte_418A16F = 1;
  }
  *equippedMemberItem = 0LL;
  v61 = (BattleServantConfConponent_o *)equippedMemberItem;
  sub_B2C2F8(
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
  v16 = *(_QWORD *)&v9->max_length;
  this->fields.wearerMember = -1;
  this->fields._MaxWave_k__BackingField = v16;
  v17 = *(_QWORD *)&v9->max_length;
  if ( (int)v17 >= 1 )
  {
    v18 = 0;
    v19 = 1;
    v59 = v9;
    v60 = v8;
    do
    {
      if ( v18 >= (unsigned int)v17 )
      {
LABEL_61:
        v57 = sub_B2C460(Member);
        sub_B2C400(v57, 0LL);
      }
      if ( !v8 )
        goto LABEL_60;
      v20 = v9->m_Items[v18];
      if ( !v20 )
        goto LABEL_60;
      if ( v8->fields.index != v20->fields.index )
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
          Member = (int64_t)PartyListViewItem__GetMember(v20, i, 0LL);
          if ( !Member )
            goto LABEL_60;
          v22 = (PartyOrganizationListViewItem_o *)Member;
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
              EquipSvtId = PartyOrganizationListViewItem__get_EquipSvtId(v22, 0LL);
              *(_QWORD *)&v66.fields.currentCryptoKey = p_svtId;
              *(_QWORD *)&v68.fields.currentCryptoKey = *(_QWORD *)&EquipSvtId.fields.fakeValue;
              *(_QWORD *)&v66.fields.fakeValue = *(_QWORD *)&EquipSvtId.fields.currentCryptoKey;
              *(_QWORD *)&v68.fields.fakeValue = 0LL;
              Member = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__Equals_44759100(v66, v68, v26);
              this->fields._IsUnique_k__BackingField = Member & 1;
              if ( (Member & 1) != 0 )
                this->fields._UniqueOrganizedWave_k__BackingField = v19;
            }
            v27 = this->fields.userSvtEntity;
            if ( !v27 )
              goto LABEL_60;
            Member = (int64_t)PartyOrganizationListViewItem__GetEquipList(v22, 0LL);
            if ( !Member )
              goto LABEL_60;
            if ( !*(_DWORD *)(Member + 24) )
              goto LABEL_61;
            v28 = *(_QWORD *)(Member + 32);
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            }
            CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v65, v28, 0LL);
            v64 = v65;
            Member = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__Equals_44761692(&v27->fields.id, &v64, 0LL);
            if ( (Member & 1) != 0 )
            {
              v39 = this->fields.userSvtEntity;
              if ( v39 )
              {
                v40 = *(_OWORD *)&v39->fields.id.fields.fakeValue;
                *(_OWORD *)&v65.fields.currentCryptoKey = *(_OWORD *)&v39->fields.id.fields.currentCryptoKey;
                *(_OWORD *)&v65.fields.fakeValue = v40;
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                }
                v63 = v65;
                v41 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v63, 0LL);
                WeareMember = PartyListViewItem__GetWeareMember(v20, v41, 0LL);
                this->fields.wearerMember = WeareMember;
                if ( (WeareMember & 0x80000000) == 0 )
                {
                  v43 = (System_Int32_array **)PartyListViewItem__GetMember(v20, WeareMember, 0LL);
                  v61->klass = (BattleServantConfConponent_c *)v43;
                  sub_B2C2F8(v61, v43, v44, v45, v46, v47, v48, v49);
                }
                this->fields._OrganizedWave_k__BackingField = v19;
                return;
              }
LABEL_60:
              sub_B2C434(Member, v15);
            }
          }
        }
        v9 = v59;
        v8 = v60;
        v17 = *(_QWORD *)&v59->max_length;
      }
      ++v18;
      ++v19;
    }
    while ( v18 < (int)v17 );
  }
  v29 = this->fields.userSvtEntity;
  if ( !v29 )
    goto LABEL_60;
  v30 = *(_OWORD *)&v29->fields.id.fields.fakeValue;
  *(_OWORD *)&v65.fields.currentCryptoKey = *(_OWORD *)&v29->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v65.fields.fakeValue = v30;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v62 = v65;
  Member = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v62, 0LL);
  if ( !v8 )
    goto LABEL_60;
  v31 = PartyListViewItem__GetWeareMember(v8, Member, 0LL);
  this->fields.wearerMember = v31;
  if ( (v31 & 0x80000000) == 0 )
  {
    v32 = (System_Int32_array **)PartyListViewItem__GetMember(v8, v31, 0LL);
    v61->klass = (BattleServantConfConponent_c *)v32;
    sub_B2C2F8(v61, v32, v33, v34, v35, v36, v37, v38);
    return;
  }
  if ( !this->fields._IsUnique_k__BackingField )
  {
    Member = (int64_t)PartyListViewItem__GetMember(v8, memberIdx, 0LL);
    if ( Member )
    {
      v50 = PartyOrganizationListViewItem__get_EquipSvtId((PartyOrganizationListViewItem_o *)Member, 0LL);
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      Member = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v50, 0LL);
      v51 = this->fields.userSvtEntity;
      if ( v51 )
      {
        v52 = Member;
        Member = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v51->fields.svtId, 0LL);
        if ( v52 == (_DWORD)Member )
          return;
        v53 = this->fields.userSvtEntity;
        if ( v53 )
        {
          v55 = *(_QWORD *)&v53->fields.svtId.fields.currentCryptoKey;
          v54 = *(_QWORD *)&v53->fields.svtId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v67.fields.currentCryptoKey = v55;
          *(_QWORD *)&v67.fields.fakeValue = v54;
          v56 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v67, 0LL);
          this->fields._IsUnique_k__BackingField = PartyListViewItem__IsIdenticalEquipMember(v8, v56, 0LL);
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

  if ( (byte_418A170 & 1) == 0 )
  {
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, baseDeckItemList);
    byte_418A170 = 1;
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
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.wearerServantName, 0LL, v10, v11, v12, v13, v14, v15);
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
    sub_B2C2F8(
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
    Member = (PartyOrganizationListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                                  SvtId,
                                                  0LL);
    this->fields.wearersSvtId = (int)Member;
    if ( !equippedMemberItem
      || (Member = (PartyOrganizationListViewItem_o *)equippedMemberItem->fields.userServantEntity) == 0LL )
    {
LABEL_16:
      sub_B2C434(Member, wearerMember);
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

  if ( (byte_418A173 & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, method);
    byte_418A173 = 1;
  }
  servantEntity = this->fields.servantEntity;
  if ( servantEntity )
    return ServantEntity__getName(servantEntity, -1, -1, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  if ( !byte_4185BC0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, method);
    byte_4185BC0 = 1;
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  WarEntity_o *Entity; // x0
  System_String_o **p_age; // x8
  LocalizationManager_c *v10; // x0

  if ( (byte_418A174 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantClassMaster___, method);
    sub_B2C35C(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v3);
    sub_B2C35C(&LocalizationManager_TypeInfo, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_418A174 = 1;
  }
  if ( this->fields.weareClassId < 1 )
    goto LABEL_21;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantClassMaster___)) == 0LL )
  {
    sub_B2C434(Instance, v7);
  }
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
             this->fields.weareClassId,
             (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
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
    if ( !byte_4185BC0 )
    {
      sub_B2C35C(&LocalizationManager_TypeInfo, method);
      byte_4185BC0 = 1;
    }
    v10 = LocalizationManager_TypeInfo;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v10 = LocalizationManager_TypeInfo;
    }
    p_age = &v10->static_fields->unknownNameText;
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