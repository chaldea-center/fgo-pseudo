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
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  IconLabelInfo_o *v36; // x27
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_userSvtEntity; // x21
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v58; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v59; // x26
  __int64 v60; // x27
  __int64 v61; // x28
  int32_t v62; // w0
  struct ServantEntity_o *Entity; // x0
  struct ServantEntity_o **p_servantEntity; // x26
  System_String_array **v65; // x2
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  WebViewManager_o *v71; // x0
  WarQuestSelectionMaster_o *v72; // x0
  ServantLimitMaster_o *v73; // x27
  int32_t v74; // w0
  int32_t v75; // w28
  int32_t v76; // w0
  ServantLimitEntity_o *v77; // x0
  __int128 v78; // q1
  const MethodInfo *v79; // x5
  bool v80; // w8
  System_String_array **v81; // x2
  System_String_array **v82; // x3
  System_Boolean_array **v83; // x4
  System_Int32_array **v84; // x5
  System_Int32_array *v85; // x6
  System_Int32_array *v86; // x7
  int32_t *p_wearerMember; // x20
  __int128 v88; // q0
  int64_t v89; // x0
  int32_t WeareMember; // w0
  PartyOrganizationListViewItem_o *Member; // x0
  struct System_String_o *ServantName; // x0
  System_String_array **v93; // x2
  System_String_array **v94; // x3
  System_Boolean_array **v95; // x4
  System_Int32_array **v96; // x5
  System_Int32_array *v97; // x6
  System_Int32_array *v98; // x7
  PartyOrganizationListViewItem_o *v99; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  UserServantEntity_o *userServantEntity; // x0
  int32_t Rarity; // w0
  UserServantEntity_o *v103; // x8
  bool IsLock; // w0
  UserServantEntity_o *v105; // x8
  bool IsChoice; // w8
  UserServantEntity_o *v107; // x0
  bool IsFriendShipSvtEquip; // w0
  UserServantEntity_o *v109; // x8
  bool IsChocolateSvtEquip; // w0
  struct EventUpValSetupInfo_o *v111; // x8
  int32_t EventId; // w23
  PartyOrganizationListViewItem_o *v113; // x24
  clsQuestCheck_o *v114; // x0
  struct UserServantEntity_o *v115; // x8
  PartyOrganizationUtility_o *v116; // x22
  __int64 v117; // x25
  __int64 v118; // x26
  int32_t v119; // w0
  UserServantEntity_o *v120; // x8
  int32_t v121; // w24
  int32_t v122; // w0
  int32_t v123; // w25
  int32_t v124; // w0
  struct ServantEntity_o *servantEntity; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v126; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v127; // q0
  int64_t v128; // x8
  UserServantEntity_o *v129; // x0
  struct System_Int32_array *EquipCategoryIdList; // x0
  BattleServantConfConponent_o *p_categoryIdList; // x19
  System_String_array **v132; // x2
  System_String_array **v133; // x3
  System_Boolean_array **v134; // x4
  System_Int32_array **v135; // x5
  System_Int32_array *v136; // x6
  System_Int32_array *v137; // x7
  IconLabelInfo_o *monitor; // x0
  IconLabelInfo_o **p_iconLabelInfo2; // [xsp+8h] [xbp-F8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v140; // [xsp+10h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v141; // [xsp+30h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v142; // [xsp+50h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v143; // [xsp+70h] [xbp-90h]
  int32_t actMaxRarity; // [xsp+94h] [xbp-6Ch] BYREF
  System_String_o *skillName; // [xsp+98h] [xbp-68h] BYREF
  PartyOrganizationListViewItem_o *equippedMemberItem; // [xsp+A0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v147; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v148; // 0:x0.16

  if ( (byte_40FC49E & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitMaster___, *(_QWORD *)&index);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v17);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v18);
    sub_B16FFC(&IconLabelInfo_TypeInfo, v19);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v20);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v21);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    sub_B16FFC(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v23);
    sub_B16FFC(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v24);
    byte_40FC49E = 1;
  }
  skillName = 0LL;
  equippedMemberItem = 0LL;
  actMaxRarity = 0;
  v25 = (IconLabelInfo_o *)sub_B170CC(
                             IconLabelInfo_TypeInfo,
                             *(_QWORD *)&index,
                             userSvtEntity,
                             targetSvtEquipId,
                             oldTargetSvtEquipId);
  IconLabelInfo___ctor(v25, 0LL);
  this->fields.iconLabelInfo1 = v25;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo1,
    (System_Int32_array **)v25,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  v36 = (IconLabelInfo_o *)sub_B170CC(IconLabelInfo_TypeInfo, v32, v33, v34, v35);
  IconLabelInfo___ctor(v36, 0LL);
  this->fields.iconLabelInfo2 = v36;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo2,
    (System_Int32_array **)v36,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  ListViewItem___ctor_30173668((ListViewItem_o *)this, index, 0LL);
  this->fields.userSvtEntity = userSvtEntity;
  p_userSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userSvtEntity;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.userSvtEntity,
    (System_Int32_array **)userSvtEntity,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
  this->fields.setupInfo = setupInfo;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.setupInfo,
    (System_Int32_array **)setupInfo,
    v50,
    v51,
    v52,
    v53,
    v54,
    v55);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_67;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  v58 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_67;
  v59 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  v61 = *(_QWORD *)&v58[5].fields.currentCryptoKey;
  v60 = *(_QWORD *)&v58[5].fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v147.fields.currentCryptoKey = v61;
  *(_QWORD *)&v147.fields.fakeValue = v60;
  v62 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v147, 0LL);
  if ( !v59 )
    goto LABEL_67;
  Entity = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                       v59,
                                       v62,
                                       (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = Entity;
  p_servantEntity = &this->fields.servantEntity;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.servantEntity,
    (System_Int32_array **)Entity,
    v65,
    v66,
    v67,
    v68,
    v69,
    v70);
  v71 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v71 )
    goto LABEL_67;
  v72 = DataManager__GetMasterData_WarQuestSelectionMaster_(
          (DataManager_o *)v71,
          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtEntity )
    goto LABEL_67;
  v73 = (ServantLimitMaster_o *)v72;
  v74 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536((*p_userSvtEntity)[5], 0LL);
  if ( !*p_userSvtEntity )
    goto LABEL_67;
  v75 = v74;
  v76 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536((*p_userSvtEntity)[6], 0LL);
  if ( !v73 )
    goto LABEL_67;
  v77 = ServantLimitMaster__GetEntity(v73, v75, v76, 0LL);
  if ( !*p_servantEntity )
    goto LABEL_67;
  this->fields.classId = (*p_servantEntity)->fields.classId;
  if ( !v77 )
    goto LABEL_67;
  this->fields.rarity = v77->fields.rarity;
  if ( !userSvtEntity )
    goto LABEL_67;
  v78 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v143.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v143.fields.fakeValue = v78;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v142 = v143;
  v80 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v142, 0LL) == targetSvtEquipId;
  this->fields.isOldBase = v80;
  this->fields.isBase = v80;
  equippedMemberItem = 0LL;
  this->fields._OrganizedWave_k__BackingField = 0;
  this->fields._UniqueOrganizedWave_k__BackingField = 0;
  this->fields._IsUnique_k__BackingField = 0;
  if ( !partyItem )
    goto LABEL_67;
  if ( partyItem->fields.menuKind == 9 )
  {
    EquipGraphListViewItem__SetWaveBattleInfo(this, &equippedMemberItem, baseDeckItemList, partyItem, memberIdx, v79);
    p_wearerMember = &this->fields.wearerMember;
  }
  else
  {
    v88 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
    *(_OWORD *)&v143.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v143.fields.fakeValue = v88;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v141 = v143;
    v89 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v141, 0LL);
    WeareMember = PartyListViewItem__GetWeareMember(partyItem, v89, 0LL);
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
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.wearerServantName, 0LL, v81, v82, v83, v84, v85, v86);
    *(_QWORD *)&this->fields.weareClassId = 0LL;
    Rarity = 0;
    goto LABEL_38;
  }
  Member = equippedMemberItem;
  if ( !equippedMemberItem )
  {
    Member = PartyListViewItem__GetMember(partyItem, *p_wearerMember, 0LL);
    equippedMemberItem = Member;
    if ( !Member )
      goto LABEL_67;
  }
  ServantName = PartyOrganizationListViewItem__get_ServantName(Member, 0LL);
  this->fields.wearerServantName = ServantName;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.wearerServantName,
    (System_Int32_array **)ServantName,
    v93,
    v94,
    v95,
    v96,
    v97,
    v98);
  v99 = equippedMemberItem;
  if ( !equippedMemberItem )
    goto LABEL_67;
  this->fields.weareClassId = equippedMemberItem->fields.classId;
  SvtId = PartyOrganizationListViewItem__get_SvtId(v99, 0LL);
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  this->fields.wearersSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(SvtId, 0LL);
  if ( !equippedMemberItem )
    goto LABEL_67;
  userServantEntity = equippedMemberItem->fields.userServantEntity;
  if ( !userServantEntity )
    goto LABEL_67;
  Rarity = UserServantEntity__getRarity(userServantEntity, 0LL);
LABEL_38:
  v103 = this->fields.userSvtEntity;
  this->fields.weareRarity = Rarity;
  if ( !v103 )
    goto LABEL_67;
  IsLock = UserServantEntity__IsLock(v103, 0LL);
  v105 = this->fields.userSvtEntity;
  this->fields.isLock = IsLock;
  if ( !v105 )
    goto LABEL_67;
  IsChoice = UserServantEntity__IsChoice(v105, 0LL);
  v107 = this->fields.userSvtEntity;
  this->fields.isChoice = IsChoice;
  *(_WORD *)&this->fields.isSwapLock = 0;
  if ( !v107 )
    goto LABEL_67;
  IsFriendShipSvtEquip = UserServantEntity__IsFriendShipSvtEquip(v107, 0LL);
  v109 = this->fields.userSvtEntity;
  this->fields.isFriendShipSvtEq = IsFriendShipSvtEquip;
  if ( !v109 )
    goto LABEL_67;
  IsChocolateSvtEquip = UserServantEntity__IsChocolateSvtEquip(v109, 0LL);
  v111 = this->fields.setupInfo;
  this->fields.isChocolateSvtEquip = IsChocolateSvtEquip;
  if ( v111 )
  {
    if ( v111->fields.isQuestStart )
      EventId = EventUpValSetupInfo__get_EventId(v111, 0LL);
    else
      EventId = -1;
    v113 = PartyListViewItem__GetMember(partyItem, memberIdx, 0LL);
    if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    }
    v114 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( v113 )
    {
      v115 = v113->fields.userServantEntity;
      if ( v115 )
      {
        v116 = (PartyOrganizationUtility_o *)v114;
        v118 = *(_QWORD *)&v115->fields.svtId.fields.currentCryptoKey;
        v117 = *(_QWORD *)&v115->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v148.fields.currentCryptoKey = v118;
        *(_QWORD *)&v148.fields.fakeValue = v117;
        v119 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v148, 0LL);
        v120 = v113->fields.userServantEntity;
        if ( v120 )
        {
          v121 = v119;
          v122 = UserServantEntity__getRarity(v120, 0LL);
          if ( *p_userSvtEntity )
          {
            v123 = v122;
            v124 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536((*p_userSvtEntity)[5], 0LL);
            if ( v116 )
            {
              LOBYTE(v111) = PartyOrganizationUtility__IsRarityRestriction(
                               v116,
                               &skillName,
                               &actMaxRarity,
                               v121,
                               v123,
                               v124,
                               EventId,
                               0LL);
              goto LABEL_58;
            }
          }
        }
      }
    }
LABEL_67:
    sub_B170D4();
  }
LABEL_58:
  servantEntity = this->fields.servantEntity;
  this->fields.isInvalidRarity = (char)v111;
  this->fields.isEventUpVal = 0;
  *(_QWORD *)&this->fields.bonusKind = 0LL;
  if ( !servantEntity )
    goto LABEL_67;
  v126 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_67;
  this->fields.sortValue2 = ((__int64)servantEntity->fields.collectionNo << 16) | ((unsigned __int64)(unsigned int)this->fields.rarity << 48) | v126[16].fields.currentCryptoKey;
  v127 = v126[2];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v143.fields.currentCryptoKey = v126[1];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v143.fields.fakeValue = v127;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v140 = v143;
  v128 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v140, 0LL);
  v129 = this->fields.userSvtEntity;
  this->fields.sortValue2B = v128;
  this->fields.amountSortValue = -1LL;
  if ( !v129 )
    goto LABEL_67;
  EquipCategoryIdList = UserServantEntity__GetEquipCategoryIdList(v129, 0LL);
  this->fields.categoryIdList = EquipCategoryIdList;
  p_categoryIdList = (BattleServantConfConponent_o *)&this->fields.categoryIdList;
  sub_B16F98(p_categoryIdList, (System_Int32_array **)EquipCategoryIdList, v132, v133, v134, v135, v136, v137);
  monitor = (IconLabelInfo_o *)p_categoryIdList->monitor;
  if ( !monitor )
    goto LABEL_67;
  IconLabelInfo__Clear(monitor, 0LL);
  if ( !*p_iconLabelInfo2 )
    goto LABEL_67;
  IconLabelInfo__Clear(*p_iconLabelInfo2, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EquipGraphListViewItem___ctor_29285692(
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
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  IconLabelInfo_o *v31; // x26
  IconLabelInfo_o **p_iconLabelInfo2; // x20
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
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v54; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v55; // x25
  __int64 v56; // x26
  __int64 v57; // x27
  int32_t v58; // w0
  struct ServantEntity_o *Entity; // x0
  struct ServantEntity_o **p_servantEntity; // x25
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  WebViewManager_o *v67; // x0
  WarQuestSelectionMaster_o *v68; // x0
  ServantLimitMaster_o *v69; // x26
  int32_t v70; // w0
  int32_t v71; // w27
  int32_t v72; // w0
  ServantLimitEntity_o *v73; // x0
  UserServantEntity_Fields *p_fields; // x24
  __int128 v75; // q0
  __int128 v76; // q1
  bool v77; // w8
  __int128 v78; // q0
  int64_t v79; // x0
  int32_t WeareMember; // w0
  System_String_array **v81; // x2
  System_String_array **v82; // x3
  System_Boolean_array **v83; // x4
  System_Int32_array **v84; // x5
  System_Int32_array *v85; // x6
  System_Int32_array *v86; // x7
  PartyOrganizationListViewItem_o *MemberItem; // x0
  PartyOrganizationListViewItem_o *v88; // x22
  struct System_String_o *ServantName; // x0
  System_String_array **v90; // x2
  System_String_array **v91; // x3
  System_Boolean_array **v92; // x4
  System_Int32_array **v93; // x5
  System_Int32_array *v94; // x6
  System_Int32_array *v95; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  UserServantEntity_o *userServantEntity; // x0
  int32_t Rarity; // w0
  UserServantEntity_o *v99; // x8
  bool IsLock; // w0
  UserServantEntity_o *v101; // x8
  bool IsChoice; // w8
  UserServantEntity_o *v103; // x0
  bool IsFriendShipSvtEquip; // w0
  UserServantEntity_o *v105; // x8
  bool IsChocolateSvtEquip; // w0
  struct ServantEntity_o *servantEntity; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v108; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v109; // q0
  int64_t v110; // x8
  UserServantEntity_o *v111; // x0
  struct System_Int32_array *EquipCategoryIdList; // x0
  BattleServantConfConponent_o *p_categoryIdList; // x19
  System_String_array **v114; // x2
  System_String_array **v115; // x3
  System_Boolean_array **v116; // x4
  System_Int32_array **v117; // x5
  System_Int32_array *v118; // x6
  System_Int32_array *v119; // x7
  IconLabelInfo_o *monitor; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v121; // [xsp+0h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v122; // [xsp+20h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v123; // [xsp+40h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v124; // [xsp+60h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v125; // 0:x0.16

  if ( (byte_40FC49F & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitMaster___, *(_QWORD *)&index);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v14);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v15);
    sub_B16FFC(&IconLabelInfo_TypeInfo, v16);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v18);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    byte_40FC49F = 1;
  }
  v20 = (IconLabelInfo_o *)sub_B170CC(
                             IconLabelInfo_TypeInfo,
                             *(_QWORD *)&index,
                             userSvtEntity,
                             targetSvtEquipId,
                             oldTargetSvtEquipId);
  IconLabelInfo___ctor(v20, 0LL);
  this->fields.iconLabelInfo1 = v20;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo1,
    (System_Int32_array **)v20,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  v31 = (IconLabelInfo_o *)sub_B170CC(IconLabelInfo_TypeInfo, v27, v28, v29, v30);
  IconLabelInfo___ctor(v31, 0LL);
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  this->fields.iconLabelInfo2 = v31;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo2,
    (System_Int32_array **)v31,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  ListViewItem___ctor_30173668((ListViewItem_o *)this, index, 0LL);
  this->fields.userSvtEntity = userSvtEntity;
  p_userSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userSvtEntity;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.userSvtEntity,
    (System_Int32_array **)userSvtEntity,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  this->fields.setupInfo = setupInfo;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.setupInfo,
    (System_Int32_array **)setupInfo,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  v54 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_41;
  v55 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  v57 = *(_QWORD *)&v54[5].fields.currentCryptoKey;
  v56 = *(_QWORD *)&v54[5].fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v125.fields.currentCryptoKey = v57;
  *(_QWORD *)&v125.fields.fakeValue = v56;
  v58 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v125, 0LL);
  if ( !v55 )
    goto LABEL_41;
  Entity = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                       v55,
                                       v58,
                                       (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = Entity;
  p_servantEntity = &this->fields.servantEntity;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.servantEntity,
    (System_Int32_array **)Entity,
    v61,
    v62,
    v63,
    v64,
    v65,
    v66);
  v67 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v67 )
    goto LABEL_41;
  v68 = DataManager__GetMasterData_WarQuestSelectionMaster_(
          (DataManager_o *)v67,
          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtEntity )
    goto LABEL_41;
  v69 = (ServantLimitMaster_o *)v68;
  v70 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536((*p_userSvtEntity)[5], 0LL);
  if ( !*p_userSvtEntity )
    goto LABEL_41;
  v71 = v70;
  v72 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536((*p_userSvtEntity)[6], 0LL);
  if ( !v69 )
    goto LABEL_41;
  v73 = ServantLimitMaster__GetEntity(v69, v71, v72, 0LL);
  if ( !*p_servantEntity )
    goto LABEL_41;
  this->fields.classId = (*p_servantEntity)->fields.classId;
  if ( !v73 )
    goto LABEL_41;
  this->fields.rarity = v73->fields.rarity;
  if ( !userSvtEntity )
    goto LABEL_41;
  v75 = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  v76 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  p_fields = &userSvtEntity->fields;
  *(_OWORD *)&v124.fields.currentCryptoKey = v75;
  *(_OWORD *)&v124.fields.fakeValue = v76;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v123 = v124;
  v77 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v123, 0LL) == targetSvtEquipId;
  this->fields.isOldBase = v77;
  this->fields.isBase = v77;
  v78 = *(_OWORD *)&p_fields->id.fields.fakeValue;
  *(_OWORD *)&v122.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v122.fields.fakeValue = v78;
  v79 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v122, 0LL);
  if ( !partyItem )
    goto LABEL_41;
  WeareMember = WarBoardPartyListViewItem__GetWeareMember(partyItem, v79, 0LL);
  this->fields.wearerMember = WeareMember;
  if ( (WeareMember & 0x80000000) == 0 )
  {
    MemberItem = WarBoardPartyListViewItem__GetMemberItem(partyItem, WeareMember, 0LL);
    if ( MemberItem )
    {
      v88 = MemberItem;
      ServantName = PartyOrganizationListViewItem__get_ServantName(MemberItem, 0LL);
      this->fields.wearerServantName = ServantName;
      sub_B16F98(
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
      this->fields.wearersSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(SvtId, 0LL);
      userServantEntity = v88->fields.userServantEntity;
      if ( userServantEntity )
      {
        Rarity = UserServantEntity__getRarity(userServantEntity, 0LL);
        goto LABEL_28;
      }
    }
LABEL_41:
    sub_B170D4();
  }
  this->fields.wearerServantName = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.wearerServantName, 0LL, v81, v82, v83, v84, v85, v86);
  Rarity = 0;
  *(_QWORD *)&this->fields.weareClassId = 0LL;
LABEL_28:
  v99 = this->fields.userSvtEntity;
  this->fields.weareRarity = Rarity;
  if ( !v99 )
    goto LABEL_41;
  IsLock = UserServantEntity__IsLock(v99, 0LL);
  v101 = this->fields.userSvtEntity;
  this->fields.isLock = IsLock;
  if ( !v101 )
    goto LABEL_41;
  IsChoice = UserServantEntity__IsChoice(v101, 0LL);
  v103 = this->fields.userSvtEntity;
  this->fields.isChoice = IsChoice;
  *(_WORD *)&this->fields.isSwapLock = 0;
  this->fields.isInvalidRarity = 0;
  if ( !v103 )
    goto LABEL_41;
  IsFriendShipSvtEquip = UserServantEntity__IsFriendShipSvtEquip(v103, 0LL);
  v105 = this->fields.userSvtEntity;
  this->fields.isFriendShipSvtEq = IsFriendShipSvtEquip;
  if ( !v105 )
    goto LABEL_41;
  IsChocolateSvtEquip = UserServantEntity__IsChocolateSvtEquip(v105, 0LL);
  servantEntity = this->fields.servantEntity;
  this->fields.isChocolateSvtEquip = IsChocolateSvtEquip;
  this->fields.isEventUpVal = 0;
  *(_QWORD *)&this->fields.bonusKind = 0LL;
  if ( !servantEntity )
    goto LABEL_41;
  v108 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_41;
  this->fields.sortValue2 = ((__int64)servantEntity->fields.collectionNo << 16) | ((unsigned __int64)(unsigned int)this->fields.rarity << 48) | v108[16].fields.currentCryptoKey;
  v109 = v108[2];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v124.fields.currentCryptoKey = v108[1];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v124.fields.fakeValue = v109;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v121 = v124;
  v110 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v121, 0LL);
  v111 = this->fields.userSvtEntity;
  this->fields.sortValue2B = v110;
  this->fields.amountSortValue = -1LL;
  if ( !v111 )
    goto LABEL_41;
  EquipCategoryIdList = UserServantEntity__GetEquipCategoryIdList(v111, 0LL);
  this->fields.categoryIdList = EquipCategoryIdList;
  p_categoryIdList = (BattleServantConfConponent_o *)&this->fields.categoryIdList;
  sub_B16F98(p_categoryIdList, (System_Int32_array **)EquipCategoryIdList, v114, v115, v116, v117, v118, v119);
  monitor = (IconLabelInfo_o *)p_categoryIdList->monitor;
  if ( !monitor )
    goto LABEL_41;
  IconLabelInfo__Clear(monitor, 0LL);
  if ( !*p_iconLabelInfo2 )
    goto LABEL_41;
  IconLabelInfo__Clear(*p_iconLabelInfo2, 0LL);
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
  __int64 v4; // x4
  UserServantEntity_o *userSvtEntity; // x0
  TreasureDvcInfo_o *v9; // x20
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  if ( (byte_40FC4A6 & 1) == 0 )
  {
    sub_B16FFC(&TreasureDvcInfo_TypeInfo, tdInfo);
    byte_40FC4A6 = 1;
  }
  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
    return UserServantEntity__getTreasureDeviceInfo(userSvtEntity, tdInfo, -1, -1, 0, 0LL);
  v9 = (TreasureDvcInfo_o *)sub_B170CC(TreasureDvcInfo_TypeInfo, tdInfo, method, v3, v4);
  TreasureDvcInfo___ctor(v9, 0LL);
  *tdInfo = v9;
  sub_B16F98((BattleServantConfConponent_o *)tdInfo, (System_Int32_array **)v9, v10, v11, v12, v13, v14, v15);
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
  System_Collections_Generic_List_Voice_BATTLE__o *RarityFilterKindList; // x0
  ListViewSort_FilterKind_array *v9; // x0
  FilterKindList_c *v10; // x0
  System_Collections_Generic_List_Voice_BATTLE__o *ServantEquipTypeFilterKindList; // x0
  ListViewSort_FilterKind_array *v12; // x0
  __int64 v13; // x2
  ListViewSort_FilterKind_array *v14; // x0
  __int64 v15; // x2

  if ( (byte_40FC4A2 & 1) == 0 )
  {
    sub_B16FFC(&FilterKindList_TypeInfo, sort);
    sub_B16FFC(&ListViewSort_FilterKind___TypeInfo, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v6);
    byte_40FC4A2 = 1;
  }
  v7 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v7 = FilterKindList_TypeInfo;
  }
  RarityFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)v7->static_fields->RarityFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_25;
  v9 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                          RarityFilterKindList,
                                          (const MethodInfo_2F155D4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_25;
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v9, 0LL)
    && !ListViewSort__IsMatchRarityFilter(sort, this->fields.rarity, 0LL)
    || !ListViewSort__CheckSvtEquipEffectFilterDefaultAll(sort, 0LL)
    && !ServantEquipEffectFilterController__IsMatchEffectCategory(this->fields.categoryIdList, sort, 0LL) )
  {
    return 0;
  }
  v10 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v10 = FilterKindList_TypeInfo;
  }
  ServantEquipTypeFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)v10->static_fields->ServantEquipTypeFilterKindList;
  if ( !ServantEquipTypeFilterKindList )
LABEL_25:
    sub_B170D4();
  v12 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           ServantEquipTypeFilterKindList,
                                           (const MethodInfo_2F155D4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v12, 0LL)
    && !ListViewSort__IsMatchServantEquipTypeFilter(sort, this->fields.servantEntity, 0LL) )
  {
    return 0;
  }
  v14 = (ListViewSort_FilterKind_array *)sub_B17014(ListViewSort_FilterKind___TypeInfo, 1LL, v13);
  if ( !v14 )
    goto LABEL_25;
  if ( !v14->max_length )
  {
    sub_B17100(v14, v14, v15);
    sub_B170A0();
  }
  v14->m_Items[1] = 39;
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v14, 0LL)
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
  sub_B16F98(
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
    sub_B170D4();
  this->fields.isChoice = UserServantEntity__IsChoice(userSvtEntity, 0LL);
  this->fields.isSwapChoice = 0;
}


void __fastcall EquipGraphListViewItem__ModifyLockItem(EquipGraphListViewItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0

  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_B170D4();
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
  sub_B16F98(
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
  __int64 v5; // x1
  __int64 v6; // x1
  struct EventUpValSetupInfo_o *setupInfo; // x21
  struct System_Int32_array *servantEquipFilterEventIdList; // x8
  _BOOL4 isSwapChoice; // w8
  _BOOL4 isChoice; // w9
  IconLabelInfo_o *iconLabelInfo2; // x0
  bool result; // w0
  struct UserServantEntity_o *v13; // x8
  __int128 v14; // q1
  int64_t v15; // x0
  struct UserServantEntity_o *v16; // x8
  IconLabelInfo_o *iconLabelInfo1; // x0
  int64_t rarity; // x8
  struct UserServantEntity_o *v19; // x0
  struct UserServantEntity_o *v20; // x8
  IconLabelInfo_o *v21; // x0
  int32_t adjustHp; // w3
  int32_t hp; // w2
  int32_t v24; // w1
  struct ServantEntity_o *servantEntity; // x8
  IconLabelInfo_o *v26; // x19
  int64_t amountSortValue; // x0
  struct ListViewManager_o *manager; // x8
  __int64 v29; // x11
  struct ListViewManager_o *v30; // x20
  struct UserServantEntity_o *v31; // x8
  int32_t lv; // w20
  int32_t LevelMax; // w0
  struct UserServantEntity_o *userSvtEntity; // x22
  int32_t ServantEquipFilterEventId; // w0
  int32_t v36; // w5
  UserServantEntity_o *v37; // x0
  int32_t *p_bonusKind2Id; // x8
  struct UserServantEntity_o *v39; // x8
  __int64 v40; // x21
  __int64 v41; // x22
  int32_t v42; // w0
  const MethodInfo *v43; // x2
  struct ServantEntity_o *v44; // x8
  __int64 collectionNo; // x10
  struct UserServantEntity_o *v46; // x8
  bool EventUpVal_21445868; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v48; // [xsp+10h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v49; // [xsp+30h] [xbp-40h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v50; // 0:x0.16

  if ( (byte_40FC4A3 & 1) == 0 )
  {
    sub_B16FFC(&EquipGraphListViewManager_TypeInfo, sort);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v6);
    byte_40FC4A3 = 1;
  }
  setupInfo = this->fields.setupInfo;
  *(_WORD *)&this->fields.isTermination = 0;
  this->fields.sortValue1 = -1LL;
  if ( setupInfo )
  {
    servantEquipFilterEventIdList = setupInfo->fields.servantEquipFilterEventIdList;
    if ( servantEquipFilterEventIdList )
    {
      if ( *(_QWORD *)&servantEquipFilterEventIdList->max_length && !this->fields.isOldBase && !this->fields.isBase )
      {
        if ( !sort )
          goto LABEL_74;
        if ( setupInfo->fields.isQuestStart )
        {
          if ( sort->fields.bonusKind != 1 )
            goto LABEL_8;
          if ( this->fields.bonusKind != 1 )
          {
            userSvtEntity = this->fields.userSvtEntity;
            this->fields.bonusKind = 1;
            ServantEquipFilterEventId = EventUpValSetupInfo__get_ServantEquipFilterEventId(setupInfo, 0LL);
            if ( !userSvtEntity )
              goto LABEL_74;
            v36 = ServantEquipFilterEventId;
            v37 = userSvtEntity;
            goto LABEL_71;
          }
LABEL_55:
          if ( !this->fields.isEventUpVal )
            return 0;
LABEL_72:
          if ( this->fields.isInvalidRarity )
            return 0;
          goto LABEL_8;
        }
        if ( sort->fields.bonusKind2 != 1 )
          goto LABEL_8;
        if ( this->fields.bonusKind == 1 )
        {
          p_bonusKind2Id = &sort->fields.bonusKind2Id;
          if ( this->fields.bonusKindId == sort->fields.bonusKind2Id )
            goto LABEL_55;
        }
        else
        {
          p_bonusKind2Id = &sort->fields.bonusKind2Id;
        }
        this->fields.bonusKind = 1;
        v36 = *p_bonusKind2Id;
        v37 = this->fields.userSvtEntity;
        this->fields.bonusKindId = *p_bonusKind2Id;
        if ( !v37 )
          goto LABEL_74;
LABEL_71:
        EventUpVal_21445868 = UserServantEntity__getEventUpVal_21445868(v37, -1, 0, 0, setupInfo, v36, 0, 0LL);
        this->fields.isEventUpVal = EventUpVal_21445868;
        if ( !EventUpVal_21445868 )
          return 0;
        goto LABEL_72;
      }
    }
  }
LABEL_8:
  if ( (((__int64 (__fastcall *)(EquipGraphListViewItem_o *, ListViewSort_o *, void *))this->klass->vtable._5_IsMatchFilter.method)(
          this,
          sort,
          this->klass[1]._1.image) & 1) != 0 )
  {
    isSwapChoice = this->fields.isSwapChoice;
    isChoice = this->fields.isChoice;
    this->fields.sortValue0 = 0LL;
    if ( isSwapChoice != isChoice )
    {
      if ( !sort )
        goto LABEL_74;
      if ( sort->fields.isChoiceSort )
        this->fields.sortValue0 = 10LL;
    }
    iconLabelInfo2 = this->fields.iconLabelInfo2;
    if ( iconLabelInfo2 )
    {
      IconLabelInfo__Clear(iconLabelInfo2, 0LL);
      if ( sort )
      {
        result = 1;
        switch ( sort->fields.sortKind )
        {
          case 1:
            v13 = this->fields.userSvtEntity;
            if ( !v13 )
              goto LABEL_74;
            v14 = *(_OWORD *)&v13->fields.id.fields.fakeValue;
            *(_OWORD *)&v49.fields.currentCryptoKey = *(_OWORD *)&v13->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v49.fields.fakeValue = v14;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            }
            v48 = v49;
            v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v48, 0LL);
            v16 = this->fields.userSvtEntity;
            this->fields.sortValue1 = v15;
            if ( !v16 )
              goto LABEL_74;
            iconLabelInfo1 = this->fields.iconLabelInfo1;
            if ( !iconLabelInfo1 )
              goto LABEL_74;
            IconLabelInfo__SetTime(iconLabelInfo1, 49, v16->fields.createdAt, 0, 0, 0, 0LL);
            goto LABEL_41;
          case 2:
            rarity = this->fields.rarity;
            goto LABEL_31;
          case 3:
            v19 = this->fields.userSvtEntity;
            if ( !v19 )
              goto LABEL_74;
            this->fields.sortValue1 = v19->fields.lv;
            goto LABEL_32;
          case 5:
            v20 = this->fields.userSvtEntity;
            if ( !v20 )
              goto LABEL_74;
            v21 = this->fields.iconLabelInfo1;
            this->fields.sortValue1 = v20->fields.hp;
            if ( !v21 )
              goto LABEL_74;
            adjustHp = v20->fields.adjustHp;
            hp = v20->fields.hp;
            v24 = 3;
            goto LABEL_40;
          case 6:
            v31 = this->fields.userSvtEntity;
            if ( !v31 )
              goto LABEL_74;
            v21 = this->fields.iconLabelInfo1;
            this->fields.sortValue1 = v31->fields.atk;
            if ( !v21 )
              goto LABEL_74;
            adjustHp = v31->fields.adjustAtk;
            hp = v31->fields.atk;
            v24 = 5;
LABEL_40:
            IconLabelInfo__Set_28888132(v21, v24, hp, adjustHp, 0, 0, 0, 0, 0LL);
LABEL_41:
            v19 = this->fields.userSvtEntity;
            if ( !v19 )
              goto LABEL_74;
            v26 = this->fields.iconLabelInfo2;
            goto LABEL_43;
          case 7:
            servantEntity = this->fields.servantEntity;
            if ( !servantEntity )
              goto LABEL_74;
            rarity = servantEntity->fields.cost;
LABEL_31:
            v19 = this->fields.userSvtEntity;
            this->fields.sortValue1 = rarity;
            if ( !v19 )
              goto LABEL_74;
LABEL_32:
            v26 = this->fields.iconLabelInfo1;
LABEL_43:
            lv = v19->fields.lv;
            break;
          case 0xE:
            amountSortValue = this->fields.amountSortValue;
            if ( (amountSortValue & 0x8000000000000000LL) == 0 )
              goto LABEL_66;
            manager = sort->fields.manager;
            if ( manager
              && (v29 = *(&EquipGraphListViewManager_TypeInfo->_2.bitflags2 + 1),
                  *(&manager->klass->_2.bitflags2 + 1) >= (unsigned int)v29) )
            {
              if ( (EquipGraphListViewManager_c *)manager->klass->_2.typeHierarchy[v29 - 1] == EquipGraphListViewManager_TypeInfo )
                v30 = sort->fields.manager;
              else
                v30 = 0LL;
            }
            else
            {
              v30 = 0LL;
            }
            v39 = this->fields.userSvtEntity;
            if ( !v39 )
              goto LABEL_74;
            v41 = *(_QWORD *)&v39->fields.svtId.fields.currentCryptoKey;
            v40 = *(_QWORD *)&v39->fields.svtId.fields.fakeValue;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v50.fields.currentCryptoKey = v41;
            *(_QWORD *)&v50.fields.fakeValue = v40;
            v42 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v50, 0LL);
            if ( !v30 )
              goto LABEL_74;
            amountSortValue = EquipGraphListViewManager__GetAmountSortValue(
                                (EquipGraphListViewManager_o *)v30,
                                v42,
                                v43);
            this->fields.amountSortValue = amountSortValue;
LABEL_66:
            v44 = this->fields.servantEntity;
            if ( !v44 )
              goto LABEL_74;
            collectionNo = v44->fields.collectionNo;
            v46 = this->fields.userSvtEntity;
            this->fields.sortValue1 = (amountSortValue << 48) | ((unsigned __int64)(unsigned int)this->fields.rarity << 32) | collectionNo;
            if ( !v46 )
              goto LABEL_74;
            v26 = this->fields.iconLabelInfo1;
            lv = v46->fields.lv;
            v19 = v46;
            break;
          default:
            return result;
        }
        LevelMax = UserServantEntity__getLevelMax(v19, 0LL);
        if ( v26 )
        {
          IconLabelInfo__Set_28888132(v26, 2, lv, LevelMax, 0, 0, 0, 0, 0LL);
          return 1;
        }
      }
    }
LABEL_74:
    sub_B170D4();
  }
  return 0;
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
  _QWORD *p_image; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x8
  __int64 v18; // x8
  int v19; // w21
  int32_t v20; // w28
  PartyListViewItem_o *v21; // x24
  int32_t i; // w25
  PartyOrganizationListViewItem_o *Member; // x0
  PartyOrganizationListViewItem_o *v24; // x26
  struct UserServantEntity_o *userSvtEntity; // x8
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *p_svtId; // x27
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o EquipSvtId; // kr00_16
  const MethodInfo *v28; // x4
  bool v29; // w0
  struct UserServantEntity_o *v30; // x23
  int64_t v31; // x27
  struct UserServantEntity_o *v32; // x8
  __int128 v33; // q1
  int64_t v34; // x0
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
  PartyOrganizationListViewItem_o *v54; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v55; // kr10_16
  int32_t v56; // w0
  struct UserServantEntity_o *v57; // x8
  struct UserServantEntity_o *v58; // x8
  __int64 v59; // x21
  __int64 v60; // x22
  int32_t v61; // w0
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
  if ( (byte_40FC4A0 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, equippedMemberItem);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    byte_40FC4A0 = 1;
  }
  *equippedMemberItem = 0LL;
  v65 = (BattleServantConfConponent_o *)equippedMemberItem;
  sub_B16F98(
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
  v17 = *(_QWORD *)&v9->max_length;
  this->fields.wearerMember = -1;
  this->fields._MaxWave_k__BackingField = v17;
  v18 = *(_QWORD *)&v9->max_length;
  if ( (int)v18 >= 1 )
  {
    v19 = 0;
    v20 = 1;
    v63 = v9;
    v64 = v8;
    do
    {
      if ( v19 >= (unsigned int)v18 )
      {
LABEL_61:
        sub_B17100(p_image, v15, v16);
        sub_B170A0();
      }
      if ( !v8 )
        goto LABEL_60;
      v21 = v9->m_Items[v19];
      if ( !v21 )
        goto LABEL_60;
      if ( v8->fields.index != v21->fields.index )
      {
        for ( i = 0; ; ++i )
        {
          p_image = &BalanceConfig_TypeInfo->_1.image;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            p_image = &BalanceConfig_TypeInfo->_1.image;
          }
          if ( i >= *(_DWORD *)(p_image[23] + 160LL) )
            break;
          Member = PartyListViewItem__GetMember(v21, i, 0LL);
          if ( !Member )
            goto LABEL_60;
          v24 = Member;
          p_image = PartyOrganizationListViewItem__GetEquipList(Member, 0LL);
          if ( !p_image )
            goto LABEL_60;
          if ( !*((_DWORD *)p_image + 6) )
            goto LABEL_61;
          if ( (__int64)p_image[4] >= 1 )
          {
            if ( !this->fields._IsUnique_k__BackingField )
            {
              userSvtEntity = this->fields.userSvtEntity;
              if ( !userSvtEntity )
                goto LABEL_60;
              p_svtId = &userSvtEntity->fields.svtId;
              EquipSvtId = PartyOrganizationListViewItem__get_EquipSvtId(v24, 0LL);
              *(_QWORD *)&v70.fields.currentCryptoKey = p_svtId;
              *(_QWORD *)&v72.fields.currentCryptoKey = *(_QWORD *)&EquipSvtId.fields.fakeValue;
              *(_QWORD *)&v70.fields.fakeValue = *(_QWORD *)&EquipSvtId.fields.currentCryptoKey;
              *(_QWORD *)&v72.fields.fakeValue = 0LL;
              v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__Equals_44069572(v70, v72, v28);
              this->fields._IsUnique_k__BackingField = v29;
              if ( v29 )
                this->fields._UniqueOrganizedWave_k__BackingField = v20;
            }
            v30 = this->fields.userSvtEntity;
            if ( !v30 )
              goto LABEL_60;
            p_image = PartyOrganizationListViewItem__GetEquipList(v24, 0LL);
            if ( !p_image )
              goto LABEL_60;
            if ( !*((_DWORD *)p_image + 6) )
              goto LABEL_61;
            v31 = p_image[4];
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            }
            CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v69, v31, 0LL);
            v68 = v69;
            if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__Equals_44072164(&v30->fields.id, &v68, 0LL) )
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
                v45 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v67, 0LL);
                WeareMember = PartyListViewItem__GetWeareMember(v21, v45, 0LL);
                this->fields.wearerMember = WeareMember;
                if ( (WeareMember & 0x80000000) == 0 )
                {
                  v47 = (System_Int32_array **)PartyListViewItem__GetMember(v21, WeareMember, 0LL);
                  v65->klass = (BattleServantConfConponent_c *)v47;
                  sub_B16F98(v65, v47, v48, v49, v50, v51, v52, v53);
                }
                this->fields._OrganizedWave_k__BackingField = v20;
                return;
              }
LABEL_60:
              sub_B170D4();
            }
          }
        }
        v9 = v63;
        v8 = v64;
        v18 = *(_QWORD *)&v63->max_length;
      }
      ++v19;
      ++v20;
    }
    while ( v19 < (int)v18 );
  }
  v32 = this->fields.userSvtEntity;
  if ( !v32 )
    goto LABEL_60;
  v33 = *(_OWORD *)&v32->fields.id.fields.fakeValue;
  *(_OWORD *)&v69.fields.currentCryptoKey = *(_OWORD *)&v32->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v69.fields.fakeValue = v33;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v66 = v69;
  v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v66, 0LL);
  if ( !v8 )
    goto LABEL_60;
  v35 = PartyListViewItem__GetWeareMember(v8, v34, 0LL);
  this->fields.wearerMember = v35;
  if ( (v35 & 0x80000000) == 0 )
  {
    v36 = (System_Int32_array **)PartyListViewItem__GetMember(v8, v35, 0LL);
    v65->klass = (BattleServantConfConponent_c *)v36;
    sub_B16F98(v65, v36, v37, v38, v39, v40, v41, v42);
    return;
  }
  if ( !this->fields._IsUnique_k__BackingField )
  {
    v54 = PartyListViewItem__GetMember(v8, memberIdx, 0LL);
    if ( v54 )
    {
      v55 = PartyOrganizationListViewItem__get_EquipSvtId(v54, 0LL);
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      v56 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v55, 0LL);
      v57 = this->fields.userSvtEntity;
      if ( v57 )
      {
        if ( v56 == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v57->fields.svtId, 0LL) )
          return;
        v58 = this->fields.userSvtEntity;
        if ( v58 )
        {
          v60 = *(_QWORD *)&v58->fields.svtId.fields.currentCryptoKey;
          v59 = *(_QWORD *)&v58->fields.svtId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v71.fields.currentCryptoKey = v60;
          *(_QWORD *)&v71.fields.fakeValue = v59;
          v61 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v71, 0LL);
          this->fields._IsUnique_k__BackingField = PartyListViewItem__IsIdenticalEquipMember(v8, v61, 0LL);
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
  int32_t wearerMember; // w1
  PartyOrganizationListViewItem_o *Member; // x0
  struct System_String_o *ServantName; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  PartyOrganizationListViewItem_o *v25; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  UserServantEntity_o *userServantEntity; // x0
  int32_t Rarity; // w0
  PartyOrganizationListViewItem_o *equippedMemberItem; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40FC4A1 & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, baseDeckItemList);
    byte_40FC4A1 = 1;
  }
  equippedMemberItem = 0LL;
  this->fields._OrganizedWave_k__BackingField = 0;
  this->fields._UniqueOrganizedWave_k__BackingField = 0;
  this->fields._IsUnique_k__BackingField = 0;
  EquipGraphListViewItem__SetWaveBattleInfo(this, &equippedMemberItem, baseDeckItemList, partyItem, memberIdx, v5);
  wearerMember = this->fields.wearerMember;
  if ( (wearerMember & 0x80000000) != 0 )
  {
    this->fields.wearerServantName = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.wearerServantName, 0LL, v10, v11, v12, v13, v14, v15);
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
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.wearerServantName,
      (System_Int32_array **)ServantName,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
    v25 = equippedMemberItem;
    if ( !equippedMemberItem )
      goto LABEL_16;
    this->fields.weareClassId = equippedMemberItem->fields.classId;
    SvtId = PartyOrganizationListViewItem__get_SvtId(v25, 0LL);
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    this->fields.wearersSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(SvtId, 0LL);
    if ( !equippedMemberItem || (userServantEntity = equippedMemberItem->fields.userServantEntity) == 0LL )
LABEL_16:
      sub_B170D4();
    Rarity = UserServantEntity__getRarity(userServantEntity, 0LL);
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

  if ( (byte_40FC4A4 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, method);
    byte_40FC4A4 = 1;
  }
  servantEntity = this->fields.servantEntity;
  if ( servantEntity )
    return ServantEntity__getName(servantEntity, -1, -1, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  if ( !byte_40F87E5 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, method);
    byte_40F87E5 = 1;
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  WarEntity_o *Entity; // x0
  System_String_o **p_age; // x8
  LocalizationManager_c *v10; // x0

  if ( (byte_40FC4A5 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantClassMaster___, method);
    sub_B16FFC(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v3);
    sub_B16FFC(&LocalizationManager_TypeInfo, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_40FC4A5 = 1;
  }
  if ( this->fields.weareClassId < 1 )
    goto LABEL_21;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                              (DataManager_o *)Instance,
                                                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantClassMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             MasterData_WarQuestSelectionMaster,
             this->fields.weareClassId,
             (const MethodInfo_266F388 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
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
    if ( !byte_40F87E5 )
    {
      sub_B16FFC(&LocalizationManager_TypeInfo, method);
      byte_40F87E5 = 1;
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