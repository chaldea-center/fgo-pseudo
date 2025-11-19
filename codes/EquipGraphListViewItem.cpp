void EquipGraphListViewItem___ctor(
        EquipGraphListViewItem_o *this,
        int32_t index,
        UserServantEntity_o *userSvtEntity,
        int64_t targetSvtEquipId,
        PartyListViewItem_array *baseDeckItemList,
        PartyListViewItem_o *partyItem,
        EventUpValSetupInfo_o *setupInfo,
        int32_t memberIdx,
        System_Int32_array *preLoadCategoryIdList,
        int32_t type,
        const MethodInfo *method)
{
  IconLabelInfo_o *v18; // x20
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  IconLabelInfo_o *v21; // x23
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  __int64 v24; // x25
  int64_t Instance; // x0
  const MethodInfo *v26; // x1
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  PartyListViewItem_o **v29; // x23
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_userSvtEntity; // x22
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  int64_t v37; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v38; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v39; // x28
  __int64 v40; // x24
  __int64 v41; // x29
  Il2CppObject *Entity; // x0
  struct ServantEntity_o **p_servantEntity; // x28
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  __int128 v46; // q1
  PartyListViewItem_o *v47; // x29
  System_Collections_Generic_List_object__o *v48; // x24
  int32_t v49; // w2
  const MethodInfo *v50; // x3
  ServantLimitMaster_o *v51; // x29
  int32_t v52; // w24
  UserServantEntity_Fields *p_fields; // x21
  __int128 v54; // q0
  bool v55; // w8
  PartyOrganizationListViewItem_o *v56; // x26
  int32_t EquipUseServantId_k__BackingField; // w28
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  __int128 v59; // q0
  int64_t v60; // x0
  struct System_String_o *EquipFrameName; // x0
  int32_t v62; // w2
  const MethodInfo *v63; // x3
  PartyListViewItem_o *v64; // x26
  __int64 v65; // x26
  int32_t v66; // w2
  const MethodInfo *v67; // x3
  const MethodInfo *v68; // x6
  __int64 v69; // x8
  System_Collections_Generic_IEnumerable_T__o *v70; // x24
  System_Action_KeyValuePair_int__int___o *v71; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v72; // kr10_16
  __int128 v73; // q0
  int64_t v74; // x0
  System_Collections_Generic_IEnumerable_T__o *WearerMember; // x24
  System_Action_KeyValuePair_int__int___o *v76; // x26
  UserServantEntity_o *v77; // x8
  bool IsChoice; // w8
  UserServantEntity_o *v79; // x8
  bool IsChocolateSvtEquip; // w0
  _BOOL4 isBase; // w8
  struct EventUpValSetupInfo_o *v82; // x8
  int32_t EventId; // w24
  PartyOrganizationListViewItem_o *Member; // x23
  struct UserServantEntity_o *userServantEntity; // x8
  PartyOrganizationUtility_o *v86; // x21
  __int64 v87; // x25
  __int64 v88; // x26
  UserServantEntity_o *v89; // x8
  int32_t v90; // w23
  int32_t v91; // w25
  struct ServantEntity_o *servantEntity; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v93; // x8
  struct System_Int32_array *EquipCategoryIdList; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v95; // q0
  int32_t v96; // w2
  const MethodInfo *v97; // x3
  CGThumbnailListItem_o *p_categoryIdList; // x19
  PartyListViewItem_array *baseDeckItemLista; // [xsp+8h] [xbp-158h]
  struct IconLabelInfo_o **p_iconLabelInfo2; // [xsp+10h] [xbp-150h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v102; // [xsp+20h] [xbp-140h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v103; // [xsp+40h] [xbp-120h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v104; // [xsp+60h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v105; // [xsp+80h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v106; // [xsp+A0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v107; // [xsp+C0h] [xbp-A0h]
  int32_t actMaxRarity; // [xsp+ECh] [xbp-74h] BYREF
  System_String_o *skillName; // [xsp+F0h] [xbp-70h] BYREF
  System_Collections_Generic_Dictionary_int__int__o *equippedMemberDic; // [xsp+F8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v111; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v112; // 0:x0.16

  if ( (byte_4CB5812 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_KeyValuePair_int__int___TypeInfo);
    sub_1C6BA08(&Method_BasicHelper_ForEach_KeyValuePair_int__int____);
    sub_1C6BA08(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C6BA08(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C6BA08(&IconLabelInfo_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo__TypeInfo);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C6BA08(&Method_EquipGraphListViewItem___c__DisplayClass72_0___ctor_b__1__);
    sub_1C6BA08(&EquipGraphListViewItem___c__DisplayClass72_0_TypeInfo);
    sub_1C6BA08(&Method_EquipGraphListViewItem___c__DisplayClass72_1___ctor_b__0__);
    sub_1C6BA08(&EquipGraphListViewItem___c__DisplayClass72_1_TypeInfo);
    byte_4CB5812 = 1;
  }
  skillName = 0;
  equippedMemberDic = 0;
  actMaxRarity = 0;
  v18 = (IconLabelInfo_o *)sub_1C6BC54(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v18, 0);
  this->fields.iconLabelInfo1 = v18;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.iconLabelInfo1, (int32_t)v18, v19, v20);
  v21 = (IconLabelInfo_o *)sub_1C6BC54(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v21, 0);
  this->fields.iconLabelInfo2 = v21;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.iconLabelInfo2, (int32_t)v21, v22, v23);
  v24 = sub_1C6BC54(EquipGraphListViewItem___c__DisplayClass72_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v24, 0);
  if ( !v24 )
    goto LABEL_72;
  *(_QWORD *)(v24 + 24) = partyItem;
  v29 = (PartyListViewItem_o **)(v24 + 24);
  sub_1C6B9AC((CGThumbnailListItem_o *)(v24 + 24), (int32_t)partyItem, v27, v28);
  ListViewItem___ctor_44050768((ListViewItem_o *)this, index, 0);
  *(_QWORD *)(v24 + 16) = this;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v24 + 16), (int32_t)this, v30, v31);
  this->fields.userSvtEntity = userSvtEntity;
  p_userSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userSvtEntity;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.userSvtEntity, (int32_t)userSvtEntity, v33, v34);
  this->fields.setupInfo = setupInfo;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v35, v36);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_72;
  v37 = targetSvtEquipId;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ServantMaster___);
  v38 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_72;
  v39 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v41 = *(_QWORD *)&v38[5].fields.currentCryptoKey;
  v40 = *(_QWORD *)&v38[5].fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v111.fields.currentCryptoKey = v41;
  *(_QWORD *)&v111.fields.fakeValue = v40;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v111, 0);
  if ( !v39 )
    goto LABEL_72;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v39,
             Instance,
             (const MethodInfo_33F90DC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)Entity;
  p_servantEntity = &this->fields.servantEntity;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.servantEntity, (int32_t)Entity, v44, v45);
  this->fields._EquipType_k__BackingField = type;
  this->fields._MemberIndex_k__BackingField = memberIdx;
  if ( !userSvtEntity )
    goto LABEL_72;
  v46 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  v47 = *v29;
  *(_OWORD *)&v107.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v107.fields.fakeValue = v46;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  baseDeckItemLista = baseDeckItemList;
  v106 = v107;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49236544(&v106, 0);
  if ( !v47 )
    goto LABEL_72;
  this->fields._EquipUseServantId_k__BackingField = PartyListViewItem__GetUseEquipServantId(v47, Instance, 0);
  v48 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v48,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo___ctor__);
  this->fields.wearerMemberInfoList = (struct System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo__o *)v48;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.wearerMemberInfoList, (int32_t)v48, v49, v50);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_72;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtEntity )
    goto LABEL_72;
  v51 = (ServantLimitMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020((*p_userSvtEntity)[5], 0);
  if ( !*p_userSvtEntity )
    goto LABEL_72;
  v52 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020((*p_userSvtEntity)[6], 0);
  if ( !v51 )
    goto LABEL_72;
  Instance = (int64_t)ServantLimitMaster__GetEntity(v51, v52, Instance, 0);
  if ( !*p_servantEntity )
    goto LABEL_72;
  this->fields.classId = (*p_servantEntity)->fields.classId;
  if ( !Instance )
    goto LABEL_72;
  p_fields = &userSvtEntity->fields;
  this->fields.rarity = *(_DWORD *)(Instance + 24);
  v54 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v105.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v105.fields.fakeValue = v54;
  v55 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49236544(&v105, 0) == v37;
  this->fields.isOldBase = v55;
  this->fields.isBase = v55;
  Instance = (int64_t)*v29;
  if ( !*v29 )
    goto LABEL_72;
  Instance = (int64_t)PartyListViewItem__GetMember(
                        (PartyListViewItem_o *)Instance,
                        this->fields._MemberIndex_k__BackingField,
                        0);
  this->fields.isDispEquipFrameName = 0;
  if ( !Instance )
    goto LABEL_72;
  v56 = (PartyOrganizationListViewItem_o *)Instance;
  if ( *(_BYTE *)(Instance + 404) || *(_BYTE *)(Instance + 405) )
  {
    EquipUseServantId_k__BackingField = this->fields._EquipUseServantId_k__BackingField;
    SvtId = PartyOrganizationListViewItem__get_SvtId((PartyOrganizationListViewItem_o *)Instance, 0);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(SvtId, 0);
    this->fields.isDispEquipFrameName = EquipUseServantId_k__BackingField == (_DWORD)Instance;
    if ( EquipUseServantId_k__BackingField == (_DWORD)Instance )
    {
      v59 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
      *(_OWORD *)&v107.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
      *(_OWORD *)&v107.fields.fakeValue = v59;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v104 = v107;
      v60 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49236544(&v104, 0);
      EquipFrameName = PartyOrganizationListViewItem__GetEquipFrameName(v56, v60, 0);
      this->fields._UseEquipFrameName_k__BackingField = EquipFrameName;
      sub_1C6B9AC(
        (CGThumbnailListItem_o *)&this->fields._UseEquipFrameName_k__BackingField,
        (int32_t)EquipFrameName,
        v62,
        v63);
    }
  }
  this->fields._OrganizedWave_k__BackingField = 0;
  this->fields._UniqueOrganizedWave_k__BackingField = 0;
  this->fields._IsUnique_k__BackingField = 0;
  v64 = *v29;
  if ( !*v29 )
    goto LABEL_72;
  if ( v64->fields.menuKind == 9 )
  {
    v65 = sub_1C6BC54(EquipGraphListViewItem___c__DisplayClass72_1_TypeInfo);
    System_Object___ctor((Il2CppObject *)v65, 0);
    if ( !v65 )
      goto LABEL_72;
    *(_QWORD *)(v65 + 24) = v24;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v65 + 24), v24, v66, v67);
    v69 = *(_QWORD *)(v65 + 24);
    if ( !v69 )
      goto LABEL_72;
    EquipGraphListViewItem__SetWaveBattleInfo(
      this,
      (PartyOrganizationListViewItem_o **)(v65 + 16),
      &equippedMemberDic,
      baseDeckItemLista,
      *(PartyListViewItem_o **)(v69 + 24),
      memberIdx,
      v68);
    if ( *(_QWORD *)(v65 + 16) )
    {
      v70 = (System_Collections_Generic_IEnumerable_T__o *)equippedMemberDic;
      v71 = (System_Action_KeyValuePair_int__int___o *)sub_1C6BC54(System_Action_KeyValuePair_int__int___TypeInfo);
      System_Action_KeyValuePair_int__int_____ctor(
        v71,
        (Il2CppObject *)v65,
        Method_EquipGraphListViewItem___c__DisplayClass72_1___ctor_b__0__,
        0);
      BasicHelper__ForEach_KeyValuePair_int__int__(
        v70,
        (System_Action_T__o *)v71,
        (const MethodInfo_31251E4 *)Method_BasicHelper_ForEach_KeyValuePair_int__int____);
      Instance = *(_QWORD *)(v65 + 16);
      if ( !Instance )
        goto LABEL_72;
      v72 = PartyOrganizationListViewItem__get_SvtId((PartyOrganizationListViewItem_o *)Instance, 0);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      this->fields._EquipUseServantId_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(
                                                          v72,
                                                          0);
    }
  }
  else
  {
    v73 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
    *(_OWORD *)&v107.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
    *(_OWORD *)&v107.fields.fakeValue = v73;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v103 = v107;
    v74 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49236544(&v103, 0);
    WearerMember = (System_Collections_Generic_IEnumerable_T__o *)PartyListViewItem__GetWearerMember(
                                                                    v64,
                                                                    v74,
                                                                    memberIdx,
                                                                    this->fields._EquipType_k__BackingField,
                                                                    0);
    if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)WearerMember, 0) )
    {
      v76 = (System_Action_KeyValuePair_int__int___o *)sub_1C6BC54(System_Action_KeyValuePair_int__int___TypeInfo);
      System_Action_KeyValuePair_int__int_____ctor(
        v76,
        (Il2CppObject *)v24,
        Method_EquipGraphListViewItem___c__DisplayClass72_0___ctor_b__1__,
        0);
      BasicHelper__ForEach_KeyValuePair_int__int__(
        WearerMember,
        (System_Action_T__o *)v76,
        (const MethodInfo_31251E4 *)Method_BasicHelper_ForEach_KeyValuePair_int__int____);
    }
  }
  Instance = (int64_t)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_72;
  Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0);
  v77 = this->fields.userSvtEntity;
  this->fields.isLock = Instance & 1;
  if ( !v77 )
    goto LABEL_72;
  IsChoice = UserServantEntity__IsChoice(v77, 0);
  Instance = (int64_t)this->fields.userSvtEntity;
  this->fields.isChoice = IsChoice;
  *(_WORD *)&this->fields.isSwapLock = 0;
  if ( !Instance )
    goto LABEL_72;
  Instance = UserServantEntity__IsFriendShipSvtEquip((UserServantEntity_o *)Instance, 0);
  v79 = this->fields.userSvtEntity;
  this->fields.isFriendShipSvtEq = Instance & 1;
  if ( !v79 )
    goto LABEL_72;
  IsChocolateSvtEquip = UserServantEntity__IsChocolateSvtEquip(v79, 0);
  isBase = this->fields.isBase;
  this->fields.isChocolateSvtEquip = IsChocolateSvtEquip;
  Instance = isBase && EquipGraphListViewItem__get_IsUse(this, v26);
  v82 = this->fields.setupInfo;
  this->fields._IsDuplication_k__BackingField = Instance & 1;
  this->fields._EquipFriendShipSkillChange_k__BackingField = -1;
  if ( v82 )
  {
    if ( v82->fields.isQuestStart )
      EventId = EventUpValSetupInfo__get_EventId(v82, 0);
    else
      EventId = -1;
    Instance = (int64_t)*v29;
    if ( !*v29 )
      goto LABEL_72;
    Member = PartyListViewItem__GetMember((PartyListViewItem_o *)Instance, memberIdx, 0);
    Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_3A4F8A4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Member )
      goto LABEL_72;
    userServantEntity = Member->fields.userServantEntity;
    if ( !userServantEntity )
      goto LABEL_72;
    v86 = (PartyOrganizationUtility_o *)Instance;
    v88 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
    v87 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v112.fields.currentCryptoKey = v88;
    *(_QWORD *)&v112.fields.fakeValue = v87;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v112, 0);
    v89 = Member->fields.userServantEntity;
    if ( !v89 )
      goto LABEL_72;
    v90 = Instance;
    Instance = UserServantEntity__getRarity(v89, 0);
    if ( !*p_userSvtEntity )
      goto LABEL_72;
    v91 = Instance;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020((*p_userSvtEntity)[5], 0);
    if ( !v86 )
      goto LABEL_72;
    Instance = PartyOrganizationUtility__IsRarityRestriction(
                 v86,
                 &skillName,
                 &actMaxRarity,
                 v90,
                 v91,
                 Instance,
                 EventId,
                 0);
    LOBYTE(v82) = Instance & 1;
  }
  servantEntity = this->fields.servantEntity;
  this->fields.isInvalidRarity = (char)v82;
  this->fields.isEventUpVal = 0;
  *(_QWORD *)&this->fields.bonusKind = 1;
  if ( !servantEntity )
    goto LABEL_72;
  v93 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_72;
  EquipCategoryIdList = preLoadCategoryIdList;
  this->fields.sortValue2 = ((__int64)servantEntity->fields.collectionNo << 16)
                          | ((unsigned __int64)(unsigned int)this->fields.rarity << 48)
                          | v93[16].fields.currentCryptoKey;
  v95 = v93[2];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v107.fields.currentCryptoKey = v93[1];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v107.fields.fakeValue = v95;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v102 = v107;
  this->fields.sortValue2B = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49236544(&v102, 0);
  this->fields.amountSortValue = -1;
  if ( !preLoadCategoryIdList )
  {
    Instance = (int64_t)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_72;
    EquipCategoryIdList = UserServantEntity__GetEquipCategoryIdList((UserServantEntity_o *)Instance, 1, 0);
  }
  this->fields.categoryIdList = EquipCategoryIdList;
  p_categoryIdList = (CGThumbnailListItem_o *)&this->fields.categoryIdList;
  sub_1C6B9AC(p_categoryIdList, (int32_t)EquipCategoryIdList, v96, v97);
  Instance = (int64_t)p_categoryIdList->monitor;
  if ( !Instance || (IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0), (Instance = (int64_t)*p_iconLabelInfo2) == 0) )
LABEL_72:
    sub_1C6BC60(Instance, v26);
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0);
}


void EquipGraphListViewItem___ctor_41318596(
        EquipGraphListViewItem_o *this,
        int32_t index,
        UserServantEntity_o *userSvtEntity,
        int64_t targetSvtEquipId,
        WarBoardPartyListViewItem_o *partyItem,
        EventUpValSetupInfo_o *setupInfo,
        const MethodInfo *method)
{
  IconLabelInfo_o *v13; // x20
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  IconLabelInfo_o *v16; // x26
  struct IconLabelInfo_o **p_iconLabelInfo2; // x20
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_userSvtEntity; // x21
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  int64_t Instance; // x0
  __int64 v26; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v27; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v28; // x25
  __int64 v29; // x26
  __int64 v30; // x27
  Il2CppObject *Entity; // x0
  struct ServantEntity_o **p_servantEntity; // x25
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  ServantLimitMaster_o *v35; // x26
  int32_t v36; // w27
  __int128 v37; // q1
  UserServantEntity_Fields *p_fields; // x26
  bool v39; // w8
  System_Collections_Generic_List_object__o *v40; // x24
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  __int128 v43; // q0
  int32_t WeareMember; // w0
  int32_t v45; // w24
  PartyOrganizationListViewItem_o *MemberItem; // x0
  System_Collections_Generic_List_object__o *wearerMemberInfoList; // x22
  ServantEntity_o *v48; // x25
  PartyOrganizationListViewItem_o *v49; // x26
  EquipGraphListViewItem_WearerMemberInfo_o *v50; // x23
  const MethodInfo *v51; // x5
  int32_t v52; // w2
  const MethodInfo *v53; // x3
  struct System_Object_array *items; // x8
  _QWORD *v55; // x9
  __int64 size; // x10
  Il2CppClass **v57; // x0
  UserServantEntity_o *v58; // x8
  bool IsChoice; // w8
  UserServantEntity_o *v60; // x8
  struct ServantEntity_o *servantEntity; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v62; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v63; // q0
  int64_t v64; // x8
  struct System_Int32_array *EquipCategoryIdList; // x0
  CGThumbnailListItem_o *p_categoryIdList; // x19
  int32_t v67; // w2
  const MethodInfo *v68; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v69; // [xsp+0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v70; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v71; // [xsp+40h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v72; // [xsp+60h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v73; // 0:x0.16

  if ( (byte_4CB5813 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C6BA08(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C6BA08(&IconLabelInfo_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo__TypeInfo);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&EquipGraphListViewItem_WearerMemberInfo_TypeInfo);
    byte_4CB5813 = 1;
  }
  v13 = (IconLabelInfo_o *)sub_1C6BC54(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v13, 0);
  this->fields.iconLabelInfo1 = v13;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.iconLabelInfo1, (int32_t)v13, v14, v15);
  v16 = (IconLabelInfo_o *)sub_1C6BC54(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v16, 0);
  this->fields.iconLabelInfo2 = v16;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.iconLabelInfo2, (int32_t)v16, v18, v19);
  ListViewItem___ctor_44050768((ListViewItem_o *)this, index, 0);
  this->fields.userSvtEntity = userSvtEntity;
  p_userSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userSvtEntity;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.userSvtEntity, (int32_t)userSvtEntity, v21, v22);
  this->fields.setupInfo = setupInfo;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v23, v24);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ServantMaster___);
  v27 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_36;
  v28 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v30 = *(_QWORD *)&v27[5].fields.currentCryptoKey;
  v29 = *(_QWORD *)&v27[5].fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v73.fields.currentCryptoKey = v30;
  *(_QWORD *)&v73.fields.fakeValue = v29;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v73, 0);
  if ( !v28 )
    goto LABEL_36;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v28,
             Instance,
             (const MethodInfo_33F90DC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)Entity;
  p_servantEntity = &this->fields.servantEntity;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.servantEntity, (int32_t)Entity, v33, v34);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtEntity )
    goto LABEL_36;
  v35 = (ServantLimitMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020((*p_userSvtEntity)[5], 0);
  if ( !*p_userSvtEntity )
    goto LABEL_36;
  v36 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020((*p_userSvtEntity)[6], 0);
  if ( !v35 )
    goto LABEL_36;
  Instance = (int64_t)ServantLimitMaster__GetEntity(v35, v36, Instance, 0);
  if ( !*p_servantEntity )
    goto LABEL_36;
  this->fields.classId = (*p_servantEntity)->fields.classId;
  if ( !Instance )
    goto LABEL_36;
  this->fields.rarity = *(_DWORD *)(Instance + 24);
  if ( !userSvtEntity )
    goto LABEL_36;
  v37 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v72.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v72.fields.fakeValue = v37;
  p_fields = &userSvtEntity->fields;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v71 = v72;
  v39 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49236544(&v71, 0) == targetSvtEquipId;
  this->fields.isOldBase = v39;
  this->fields.isBase = v39;
  v40 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v40,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo___ctor__);
  this->fields.wearerMemberInfoList = (struct System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo__o *)v40;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.wearerMemberInfoList, (int32_t)v40, v41, v42);
  v43 = *(_OWORD *)&p_fields->id.fields.fakeValue;
  *(_OWORD *)&v70.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v70.fields.fakeValue = v43;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49236544(&v70, 0);
  if ( !partyItem )
    goto LABEL_36;
  WeareMember = WarBoardPartyListViewItem__GetWeareMember(partyItem, Instance, 0);
  if ( (WeareMember & 0x80000000) == 0 )
  {
    v45 = WeareMember;
    MemberItem = WarBoardPartyListViewItem__GetMemberItem(partyItem, WeareMember, 0);
    wearerMemberInfoList = (System_Collections_Generic_List_object__o *)this->fields.wearerMemberInfoList;
    v48 = *p_servantEntity;
    v49 = MemberItem;
    v50 = (EquipGraphListViewItem_WearerMemberInfo_o *)sub_1C6BC54(EquipGraphListViewItem_WearerMemberInfo_TypeInfo);
    EquipGraphListViewItem_WearerMemberInfo___ctor(v50, v45, 0, v49, v48, v51);
    if ( !wearerMemberInfoList )
      goto LABEL_36;
    items = wearerMemberInfoList->fields._items;
    v55 = Method_System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo__Add__;
    ++wearerMemberInfoList->fields._version;
    if ( !items )
      goto LABEL_36;
    size = wearerMemberInfoList->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        wearerMemberInfoList,
        (Il2CppObject *)v50,
        *(const MethodInfo_3800974 **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
    }
    else
    {
      v57 = &items->obj.klass + size;
      wearerMemberInfoList->fields._size = size + 1;
      v57[4] = (Il2CppClass *)v50;
      sub_1C6B9AC((CGThumbnailListItem_o *)(v57 + 4), (int32_t)v50, v52, v53);
    }
  }
  Instance = (int64_t)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_36;
  Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0);
  v58 = this->fields.userSvtEntity;
  this->fields.isLock = Instance & 1;
  if ( !v58 )
    goto LABEL_36;
  IsChoice = UserServantEntity__IsChoice(v58, 0);
  Instance = (int64_t)this->fields.userSvtEntity;
  this->fields.isChoice = IsChoice;
  *(_WORD *)&this->fields.isSwapLock = 0;
  this->fields.isInvalidRarity = 0;
  if ( !Instance )
    goto LABEL_36;
  Instance = UserServantEntity__IsFriendShipSvtEquip((UserServantEntity_o *)Instance, 0);
  v60 = this->fields.userSvtEntity;
  this->fields.isFriendShipSvtEq = Instance & 1;
  if ( !v60 )
    goto LABEL_36;
  Instance = UserServantEntity__IsChocolateSvtEquip(v60, 0);
  servantEntity = this->fields.servantEntity;
  this->fields.isChocolateSvtEquip = Instance & 1;
  *(_QWORD *)&this->fields.bonusKind = 1;
  this->fields.isEventUpVal = 0;
  if ( !servantEntity )
    goto LABEL_36;
  v62 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_36;
  this->fields.sortValue2 = ((__int64)servantEntity->fields.collectionNo << 16)
                          | ((unsigned __int64)(unsigned int)this->fields.rarity << 48)
                          | v62[16].fields.currentCryptoKey;
  v63 = v62[2];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v72.fields.currentCryptoKey = v62[1];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v72.fields.fakeValue = v63;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v69 = v72;
  v64 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49236544(&v69, 0);
  Instance = (int64_t)this->fields.userSvtEntity;
  this->fields.sortValue2B = v64;
  this->fields.amountSortValue = -1;
  if ( !Instance
    || (EquipCategoryIdList = UserServantEntity__GetEquipCategoryIdList((UserServantEntity_o *)Instance, 1, 0),
        this->fields.categoryIdList = EquipCategoryIdList,
        p_categoryIdList = (CGThumbnailListItem_o *)&this->fields.categoryIdList,
        sub_1C6B9AC(p_categoryIdList, (int32_t)EquipCategoryIdList, v67, v68),
        (Instance = (int64_t)p_categoryIdList->monitor) == 0)
    || (IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0), (Instance = (int64_t)*p_iconLabelInfo2) == 0) )
  {
LABEL_36:
    sub_1C6BC60(Instance, v26);
  }
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0);
}


void EquipGraphListViewItem__Finalize(EquipGraphListViewItem_o *this, const MethodInfo *method)
{
  ListViewItem__Finalize((ListViewItem_o *)this, 0);
}


bool EquipGraphListViewItem__GetNpInfo(
        EquipGraphListViewItem_o *this,
        TreasureDvcInfo_o **tdInfo,
        const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0
  TreasureDvcInfo_o *v7; // x20
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4CB581B & 1) == 0 )
  {
    sub_1C6BA08(&TreasureDvcInfo_TypeInfo);
    byte_4CB581B = 1;
  }
  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
    return UserServantEntity__getTreasureDeviceInfo(userSvtEntity, tdInfo, -1, -1, 0, 0);
  v7 = (TreasureDvcInfo_o *)sub_1C6BC54(TreasureDvcInfo_TypeInfo);
  TreasureDvcInfo___ctor(v7, 0);
  *tdInfo = v7;
  sub_1C6B9AC((CGThumbnailListItem_o *)tdInfo, (int32_t)v7, v8, v9);
  return 0;
}


EquipGraphListViewItem_WearerMemberInfo_o *EquipGraphListViewItem__GetWearerMemberInfo(
        EquipGraphListViewItem_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo__o *wearerMemberInfoList; // x0

  if ( (byte_4CB581A & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo__get_Item__);
    byte_4CB581A = 1;
  }
  wearerMemberInfoList = this->fields.wearerMemberInfoList;
  if ( !wearerMemberInfoList )
    sub_1C6BC60(0, method);
  return (EquipGraphListViewItem_WearerMemberInfo_o *)System_Collections_Generic_List_object___get_Item(
                                                        (System_Collections_Generic_List_object__o *)wearerMemberInfoList,
                                                        0,
                                                        (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo__get_Item__);
}


System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo__o *EquipGraphListViewItem__GetWearerMemberInfoList(
        EquipGraphListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.wearerMemberInfoList;
}


bool EquipGraphListViewItem__IsMatchFilter(
        EquipGraphListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  return this->fields.isBase || EquipGraphListViewItem__IsMatchServantEquipFilter(this, sort, method);
}


bool EquipGraphListViewItem__IsMatchServantEquipFilter(
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

  if ( (byte_4CB5816 & 1) == 0 )
  {
    sub_1C6BA08(&FilterKindList_TypeInfo);
    sub_1C6BA08(&ListViewSort_FilterKind___TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    byte_4CB5816 = 1;
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
                           (const MethodInfo_37E7C34 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                          (const MethodInfo_37E7C34 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                           (const MethodInfo_37E7C34 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                             (const MethodInfo_37E7C34 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
      RarityFilterKindList = (System_Int32Enum_array *)sub_1C6BAB0(ListViewSort_FilterKind___TypeInfo, 1);
      if ( RarityFilterKindList )
      {
        if ( !LODWORD(RarityFilterKindList->max_length) )
          sub_1C6BC68(RarityFilterKindList);
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
      sub_1C6BC60(RarityFilterKindList, sort);
    }
  }
  return result;
}


bool EquipGraphListViewItem__IsNeedUpdateDuplication(EquipGraphListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._IsDuplication_k__BackingField && this->fields._IsSelected_k__BackingField;
}


void EquipGraphListViewItem__Modify(
        EquipGraphListViewItem_o *this,
        UserServantEntity_o *userSvtEntity,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1

  this->fields.userSvtEntity = userSvtEntity;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.userSvtEntity, (int32_t)userSvtEntity, (int32_t)method, v3);
  EquipGraphListViewItem__ModifyLockItem(this, v5);
  EquipGraphListViewItem__ModifyChoiceItem(this, v6);
}


void EquipGraphListViewItem__ModifyChoiceItem(EquipGraphListViewItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0

  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_1C6BC60(0, method);
  this->fields.isChoice = UserServantEntity__IsChoice(userSvtEntity, 0);
  this->fields.isSwapChoice = 0;
}


void EquipGraphListViewItem__ModifyLockItem(EquipGraphListViewItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0

  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_1C6BC60(0, method);
  this->fields.isLock = UserServantEntity__IsLock(userSvtEntity, 0);
  this->fields.isSwapLock = 0;
}


void EquipGraphListViewItem__ModifyUserServantEntity(
        EquipGraphListViewItem_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.userSvtEntity = userServantEntity;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.userSvtEntity, (int32_t)userServantEntity, (int32_t)method, v3);
}


bool EquipGraphListViewItem__SetSortValue(
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
  int64_t UseEquipFrameName_k__BackingField_low; // x20
  IconLabelInfo_o *iconLabelInfo1; // x21
  int64_t EquipFriendShipSkillChange_k__BackingField; // x20
  IconLabelInfo_o *v19; // x21
  int64_t v20; // x20
  IconLabelInfo_o *v21; // x21
  IconLabelInfo_o *iconLabelInfo2; // x19
  struct ServantEntity_o *servantEntity; // x8
  int32_t UseEquipFrameName_k__BackingField; // w20
  struct ListViewManager_o *manager; // x8
  __int64 naturalAligment; // x11
  struct ListViewManager_o *v27; // x20
  int32_t bonusKind2; // w8
  int32_t v29; // w8
  int32_t bonusKind2Id; // w8
  int32_t v31; // w9
  int32_t v32; // w5
  struct UserServantEntity_o *v33; // x8
  __int64 v34; // x21
  __int64 v35; // x22
  const MethodInfo *v36; // x2
  struct ServantEntity_o *v37; // x8
  __int64 collectionNo; // x10
  struct UserServantEntity_o *v39; // x8
  int isEventUpVal; // w8
  int32_t bonusKindId; // w9
  int32_t v42; // w8
  bool EventUpVal_43414116; // w0
  System_Collections_Generic_List_EventGroupEntity__o *EntitiesByGroupId; // x21
  System_Func_object__bool__o *v45; // x0
  intptr_t *v46; // x8
  struct UserServantEntity_o *userSvtEntity; // x8
  EquipGraphListViewItem_o *v48; // x21
  __int64 v49; // x22
  __int64 v50; // x23
  bool IsEnableServant; // w0
  int v52; // w8
  System_Func_T__bool__o *v53; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v55; // [xsp+10h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v56; // [xsp+30h] [xbp-50h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v57; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v58; // 0:x0.16

  v4 = this;
  if ( (byte_4CB5817 & 1) == 0 )
  {
    sub_1C6BA08(&Method_BasicHelper_Any_EventGroupEntity___);
    sub_1C6BA08(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_EventGroupMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_EquipGraphListViewItem__SetSortValue_b__82_0__);
    sub_1C6BA08(&Method_EquipGraphListViewItem__SetSortValue_b__82_1__);
    sub_1C6BA08(&EquipGraphListViewManager_TypeInfo);
    sub_1C6BA08(&System_Func_EventGroupEntity__bool__TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventGroupEntity__get_Count__);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (EquipGraphListViewItem_o *)sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4CB5817 = 1;
  }
  setupInfo = v4->fields.setupInfo;
  *(_WORD *)&v4->fields.isTermination = 0;
  v4->fields.sortValue1 = -1;
  if ( !setupInfo )
    goto LABEL_8;
  servantEquipFilterEventIds = setupInfo->fields.servantEquipFilterEventIds;
  if ( !servantEquipFilterEventIds
    || !servantEquipFilterEventIds->max_length
    || v4->fields.isOldBase
    || v4->fields.isBase )
  {
    goto LABEL_8;
  }
  if ( !sort )
    goto LABEL_123;
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
            goto LABEL_119;
        }
        v4->fields.bonusKind = 0;
        v4->fields.bonusKindId = bonusKind2Id;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        this = (EquipGraphListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_EventGroupMaster___);
        if ( !this )
          goto LABEL_123;
        EntitiesByGroupId = EventGroupMaster__GetEntitiesByGroupId(
                              (EventGroupMaster_o *)this,
                              v4->fields.bonusKindId,
                              0);
        this = (EquipGraphListViewItem_o *)BasicHelper__IsNullOrEmpty(
                                             (System_Collections_ICollection_o *)EntitiesByGroupId,
                                             0);
        if ( ((unsigned __int8)this & 1) != 0 )
          goto LABEL_119;
        if ( !EntitiesByGroupId )
          goto LABEL_123;
        if ( EntitiesByGroupId->fields._size < 2 )
          goto LABEL_119;
        v45 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_EventGroupEntity__bool__TypeInfo);
        v46 = &Method_EquipGraphListViewItem__SetSortValue_b__82_1__;
LABEL_118:
        v53 = (System_Func_T__bool__o *)v45;
        System_Func_object__bool____ctor(v45, (Il2CppObject *)v4, *v46, 0);
        v4->fields.isEventUpVal = BasicHelper__Any_object_(
                                    (System_Collections_Generic_List_T__o *)EntitiesByGroupId,
                                    v53,
                                    (const MethodInfo_3124430 *)Method_BasicHelper_Any_EventGroupEntity___);
        goto LABEL_119;
      }
      if ( v4->fields.bonusKind != 3 )
      {
        v42 = sort->fields.bonusKind2Id;
        goto LABEL_103;
      }
      bonusKindId = v4->fields.bonusKindId;
      v42 = sort->fields.bonusKind2Id;
      goto LABEL_85;
    }
    if ( v4->fields.bonusKind != bonusKind2 )
    {
      v32 = sort->fields.bonusKind2Id;
      goto LABEL_88;
    }
    v31 = v4->fields.bonusKindId;
    v32 = sort->fields.bonusKind2Id;
    goto LABEL_78;
  }
  bonusKind2 = sort->fields.bonusKind;
  if ( (unsigned int)(bonusKind2 - 4) < 2 )
  {
    if ( v4->fields.bonusKind != bonusKind2 )
    {
      v32 = sort->fields.bonusKindId;
      goto LABEL_88;
    }
    v31 = v4->fields.bonusKindId;
    v32 = sort->fields.bonusKindId;
LABEL_78:
    if ( v31 == v32 )
    {
      isEventUpVal = v4->fields.isEventUpVal;
      goto LABEL_90;
    }
LABEL_88:
    this = (EquipGraphListViewItem_o *)v4->fields.userSvtEntity;
    v4->fields.bonusKind = bonusKind2;
    v4->fields.bonusKindId = v32;
    if ( !this )
      goto LABEL_123;
    EventUpVal_43414116 = UserServantEntity__getEventUpVal_43414116(
                            (UserServantEntity_o *)this,
                            -1,
                            0,
                            0,
                            setupInfo,
                            v32,
                            0,
                            0);
    isEventUpVal = EventUpVal_43414116;
    v4->fields.isEventUpVal = EventUpVal_43414116;
LABEL_90:
    if ( !isEventUpVal || v4->fields.isInvalidRarity )
      goto LABEL_121;
    goto LABEL_8;
  }
  if ( bonusKind2 != 3 )
  {
    if ( bonusKind2 )
      goto LABEL_8;
    if ( v4->fields.bonusKind )
    {
      v29 = sort->fields.bonusKindId;
LABEL_95:
      v4->fields.bonusKind = 0;
      v4->fields.bonusKindId = v29;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      this = (EquipGraphListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_EventGroupMaster___);
      if ( !this )
        goto LABEL_123;
      EntitiesByGroupId = EventGroupMaster__GetEntitiesByGroupId((EventGroupMaster_o *)this, v4->fields.bonusKindId, 0);
      this = (EquipGraphListViewItem_o *)BasicHelper__IsNullOrEmpty(
                                           (System_Collections_ICollection_o *)EntitiesByGroupId,
                                           0);
      if ( ((unsigned __int8)this & 1) != 0 )
        goto LABEL_119;
      if ( !EntitiesByGroupId )
        goto LABEL_123;
      if ( EntitiesByGroupId->fields._size < 2 )
        goto LABEL_119;
      v45 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_EventGroupEntity__bool__TypeInfo);
      v46 = &Method_EquipGraphListViewItem__SetSortValue_b__82_0__;
      goto LABEL_118;
    }
    v29 = sort->fields.bonusKindId;
    if ( v4->fields.bonusKindId != v29 )
      goto LABEL_95;
LABEL_119:
    v52 = v4->fields.isEventUpVal;
    goto LABEL_120;
  }
  if ( v4->fields.bonusKind != 3 )
  {
    v42 = sort->fields.bonusKindId;
    goto LABEL_103;
  }
  bonusKindId = v4->fields.bonusKindId;
  v42 = sort->fields.bonusKindId;
LABEL_85:
  if ( bonusKindId == v42 )
    goto LABEL_119;
LABEL_103:
  v4->fields.bonusKind = 3;
  v4->fields.bonusKindId = v42;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (EquipGraphListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_EventCampaignMaster___);
  userSvtEntity = v4->fields.userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_123;
  v48 = this;
  v50 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v49 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v58.fields.currentCryptoKey = v50;
  *(_QWORD *)&v58.fields.fakeValue = v49;
  this = (EquipGraphListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v58, 0);
  if ( !v48 )
    goto LABEL_123;
  IsEnableServant = EventCampaignMaster__IsEnableServant(
                      (EventCampaignMaster_o *)v48,
                      (int32_t)this,
                      v4->fields.bonusKindId,
                      0);
  v52 = IsEnableServant;
  v4->fields.isEventUpVal = IsEnableServant;
LABEL_120:
  if ( !v52 )
    goto LABEL_121;
LABEL_8:
  this = (EquipGraphListViewItem_o *)((__int64 (__fastcall *)(EquipGraphListViewItem_o *, ListViewSort_o *, const MethodInfo *))v4->klass->vtable._5_IsMatchFilter.methodPtr)(
                                       v4,
                                       sort,
                                       v4->klass->vtable._5_IsMatchFilter.method);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
LABEL_121:
    LOBYTE(this) = 0;
    return (char)this;
  }
  isChoice = v4->fields.isChoice;
  isSwapChoice = v4->fields.isSwapChoice;
  v4->fields.sortValue0 = 0;
  v9 = !isChoice;
  v10 = !isChoice;
  v11 = !v9;
  if ( !isSwapChoice )
    v10 = v11;
  if ( v10 )
  {
    if ( !sort )
      goto LABEL_123;
    if ( sort->fields.isChoiceSort )
      v4->fields.sortValue0 = 10;
  }
  this = (EquipGraphListViewItem_o *)v4->fields.iconLabelInfo2;
  if ( !this )
    goto LABEL_123;
  IconLabelInfo__Clear((IconLabelInfo_o *)this, 0);
  if ( !sort )
    goto LABEL_123;
  this = (EquipGraphListViewItem_o *)(&dword_0 + 1);
  switch ( sort->fields.sortKind )
  {
    case 1:
      v12 = v4->fields.userSvtEntity;
      if ( !v12 )
        goto LABEL_123;
      v13 = *(_OWORD *)&v12->fields.id.fields.fakeValue;
      *(_OWORD *)&v56.fields.currentCryptoKey = *(_OWORD *)&v12->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v56.fields.fakeValue = v13;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v55 = v56;
      this = (EquipGraphListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49236544(&v55, 0);
      v14 = v4->fields.userSvtEntity;
      v4->fields.sortValue1 = (int64_t)this;
      if ( !v14 )
        goto LABEL_123;
      this = (EquipGraphListViewItem_o *)v4->fields.iconLabelInfo1;
      if ( !this )
        goto LABEL_123;
      IconLabelInfo__SetTime((IconLabelInfo_o *)this, 49, v14->fields.createdAt, 0, 0, 0, 0);
      goto LABEL_37;
    case 2:
      rarity = v4->fields.rarity;
      goto LABEL_41;
    case 3:
      this = (EquipGraphListViewItem_o *)v4->fields.userSvtEntity;
      if ( !this )
        goto LABEL_123;
      UseEquipFrameName_k__BackingField_low = SLODWORD(this->fields._UseEquipFrameName_k__BackingField);
      iconLabelInfo1 = v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = UseEquipFrameName_k__BackingField_low;
      this = (EquipGraphListViewItem_o *)UserServantEntity__getLevelMax((UserServantEntity_o *)this, 0);
      if ( !iconLabelInfo1 )
        goto LABEL_123;
      IconLabelInfo__Set_41149608(
        iconLabelInfo1,
        2,
        UseEquipFrameName_k__BackingField_low,
        (int32_t)this,
        0,
        0,
        0,
        0,
        0,
        0);
      goto LABEL_46;
    case 5:
      this = (EquipGraphListViewItem_o *)v4->fields.userSvtEntity;
      if ( !this )
        goto LABEL_123;
      EquipFriendShipSkillChange_k__BackingField = this->fields._EquipFriendShipSkillChange_k__BackingField;
      v19 = v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = EquipFriendShipSkillChange_k__BackingField;
      this = (EquipGraphListViewItem_o *)UserServantEntity__get_HpBoostValue((UserServantEntity_o *)this, 0);
      if ( !v19 )
        goto LABEL_123;
      IconLabelInfo__Set_41149608(v19, 3, EquipFriendShipSkillChange_k__BackingField, (int32_t)this, 0, 0, 0, 0, 0, 0);
      goto LABEL_37;
    case 6:
      this = (EquipGraphListViewItem_o *)v4->fields.userSvtEntity;
      if ( !this )
        goto LABEL_123;
      v20 = *(int *)&this->fields._IsDuplication_k__BackingField;
      v21 = v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = v20;
      this = (EquipGraphListViewItem_o *)UserServantEntity__get_AtkBoostValue((UserServantEntity_o *)this, 0);
      if ( !v21 )
        goto LABEL_123;
      IconLabelInfo__Set_41149608(v21, 5, v20, (int32_t)this, 0, 0, 0, 0, 0, 0);
LABEL_37:
      this = (EquipGraphListViewItem_o *)v4->fields.userSvtEntity;
      if ( !this )
        goto LABEL_123;
      iconLabelInfo2 = v4->fields.iconLabelInfo2;
      goto LABEL_43;
    case 7:
      servantEntity = v4->fields.servantEntity;
      if ( !servantEntity )
        goto LABEL_123;
      rarity = servantEntity->fields.cost;
LABEL_41:
      this = (EquipGraphListViewItem_o *)v4->fields.userSvtEntity;
      v4->fields.sortValue1 = rarity;
      if ( !this )
        goto LABEL_123;
      iconLabelInfo2 = v4->fields.iconLabelInfo1;
LABEL_43:
      UseEquipFrameName_k__BackingField = (int32_t)this->fields._UseEquipFrameName_k__BackingField;
      break;
    case 0xE:
      this = (EquipGraphListViewItem_o *)v4->fields.amountSortValue;
      if ( ((unsigned __int64)this & 0x8000000000000000LL) == 0 )
        goto LABEL_73;
      manager = sort->fields.manager;
      if ( manager
        && (naturalAligment = EquipGraphListViewManager_TypeInfo->_2.naturalAligment,
            manager->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
      {
        if ( (EquipGraphListViewManager_c *)manager->klass->_2.typeHierarchy[naturalAligment - 1] == EquipGraphListViewManager_TypeInfo )
          v27 = sort->fields.manager;
        else
          v27 = 0;
      }
      else
      {
        v27 = 0;
      }
      v33 = v4->fields.userSvtEntity;
      if ( !v33 )
        goto LABEL_123;
      v35 = *(_QWORD *)&v33->fields.svtId.fields.currentCryptoKey;
      v34 = *(_QWORD *)&v33->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v57.fields.currentCryptoKey = v35;
      *(_QWORD *)&v57.fields.fakeValue = v34;
      this = (EquipGraphListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v57, 0);
      if ( !v27 )
        goto LABEL_123;
      this = (EquipGraphListViewItem_o *)EquipGraphListViewManager__GetAmountSortValue(
                                           (EquipGraphListViewManager_o *)v27,
                                           (int32_t)this,
                                           v36);
      v4->fields.amountSortValue = (int64_t)this;
LABEL_73:
      v37 = v4->fields.servantEntity;
      if ( !v37 )
        goto LABEL_123;
      collectionNo = v37->fields.collectionNo;
      v39 = v4->fields.userSvtEntity;
      v4->fields.sortValue1 = ((_QWORD)this << 48)
                            | ((unsigned __int64)(unsigned int)v4->fields.rarity << 32)
                            | collectionNo;
      if ( !v39 )
        goto LABEL_123;
      iconLabelInfo2 = v4->fields.iconLabelInfo1;
      UseEquipFrameName_k__BackingField = v39->fields.lv;
      this = (EquipGraphListViewItem_o *)v39;
      break;
    default:
      return (char)this;
  }
  this = (EquipGraphListViewItem_o *)UserServantEntity__getLevelMax((UserServantEntity_o *)this, 0);
  if ( !iconLabelInfo2 )
LABEL_123:
    sub_1C6BC60(this, sort);
  IconLabelInfo__Set_41149608(iconLabelInfo2, 2, UseEquipFrameName_k__BackingField, (int32_t)this, 0, 0, 0, 0, 0, 0);
LABEL_46:
  LOBYTE(this) = 1;
  return (char)this;
}


void EquipGraphListViewItem__SetWaveBattleInfo(
        EquipGraphListViewItem_o *this,
        PartyOrganizationListViewItem_o **equippedMemberItem,
        System_Collections_Generic_Dictionary_int__int__o **equippedMemberDic,
        PartyListViewItem_array *baseDeckItemList,
        PartyListViewItem_o *partyItem,
        int32_t memberIdx,
        const MethodInfo *method)
{
  PartyListViewItem_array *v9; // x26
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  void *questRestrictionInfo; // x0
  __int64 v16; // x1
  il2cpp_array_size_t max_length; // x8
  int v18; // w22
  int32_t v19; // w21
  PartyListViewItem_o *v20; // x25
  int32_t i; // w26
  PartyOrganizationListViewItem_o *v22; // x27
  struct UserServantEntity_o *v23; // x24
  const MethodInfo *v24; // x4
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // kr00_16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr10_16
  struct UserServantEntity_o *v27; // x28
  int64_t v28; // x27
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v30; // q0
  int64_t v31; // x0
  System_Collections_Generic_Dictionary_int__int__o *WearerMember; // x0
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o EquipSvtId; // kr20_16
  struct UserServantEntity_o *v36; // x8
  int v37; // w21
  struct UserServantEntity_o *v38; // x8
  __int64 v39; // x21
  __int64 v40; // x22
  int32_t v41; // w0
  struct UserServantEntity_o *v42; // x8
  __int64 v43; // x21
  __int64 v44; // x22
  int32_t v45; // w0
  struct UserServantEntity_o *v46; // x8
  __int128 v47; // q0
  int64_t v48; // x0
  BalanceConfig_c *v49; // x8
  int64_t v50; // x20
  System_Collections_Generic_Dictionary_int__int__o *v51; // x0
  int32_t v52; // w2
  const MethodInfo *v53; // x3
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *v54; // x0
  int32_t v55; // w0
  PartyOrganizationListViewItem_o *v56; // x0
  int32_t v57; // w2
  const MethodInfo *v58; // x3
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  int32_t v60; // w0
  PartyOrganizationListViewItem_o *Member; // x0
  int32_t v62; // w2
  const MethodInfo *v63; // x3
  PartyListViewItem_array *v64; // [xsp+10h] [xbp-100h]
  PartyListViewItem_o *v65; // [xsp+18h] [xbp-F8h]
  CGThumbnailListItem_o *v66; // [xsp+20h] [xbp-F0h]
  CGThumbnailListItem_o *v67; // [xsp+28h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v68; // [xsp+30h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v69; // [xsp+50h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v70; // [xsp+70h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v71; // [xsp+90h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v72; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v73; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v74; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v75; // 0:x2.16

  v9 = baseDeckItemList;
  if ( (byte_4CB5814 & 1) == 0 )
  {
    sub_1C6BA08(&BalanceConfig_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_int__int__get_Keys__);
    sub_1C6BA08(&Method_System_Linq_Enumerable_FirstOrDefault_int___);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4CB5814 = 1;
  }
  *equippedMemberItem = 0;
  sub_1C6B9AC(
    (CGThumbnailListItem_o *)equippedMemberItem,
    0,
    (int32_t)equippedMemberDic,
    (const MethodInfo *)baseDeckItemList);
  *equippedMemberDic = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)equippedMemberDic, 0, v13, v14);
  if ( !partyItem )
    goto LABEL_68;
  questRestrictionInfo = partyItem->fields.questRestrictionInfo;
  if ( questRestrictionInfo )
    questRestrictionInfo = (void *)QuestRestrictionInfo__IsWaveSetupSwitchParty(
                                     (QuestRestrictionInfo_o *)questRestrictionInfo,
                                     0);
  if ( !this )
    goto LABEL_68;
  v66 = (CGThumbnailListItem_o *)equippedMemberItem;
  v67 = (CGThumbnailListItem_o *)equippedMemberDic;
  this->fields._IsWaveSetupSwitchParty_k__BackingField = (unsigned __int8)questRestrictionInfo & 1;
  if ( !v9 )
    goto LABEL_68;
  max_length = v9->max_length;
  this->fields._MaxWave_k__BackingField = max_length;
  if ( (int)max_length < 1 )
  {
LABEL_38:
    userSvtEntity = this->fields.userSvtEntity;
    if ( !userSvtEntity )
      goto LABEL_68;
    v30 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
    *(_OWORD *)&v71.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v71.fields.fakeValue = v30;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v68 = v71;
    v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49236544(&v68, 0);
    WearerMember = PartyListViewItem__GetWearerMember(partyItem, v31, memberIdx, 0, 0);
    v67->klass = (CGThumbnailListItem_c *)WearerMember;
    sub_1C6B9AC(v67, (int32_t)WearerMember, v33, v34);
    if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v67->klass, 0) )
    {
      if ( !this->fields._IsUnique_k__BackingField )
      {
        questRestrictionInfo = PartyListViewItem__GetMember(partyItem, memberIdx, 0);
        if ( !questRestrictionInfo )
          goto LABEL_68;
        EquipSvtId = PartyOrganizationListViewItem__get_EquipSvtId(
                       (PartyOrganizationListViewItem_o *)questRestrictionInfo,
                       0);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        questRestrictionInfo = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(
                                         EquipSvtId,
                                         0);
        v36 = this->fields.userSvtEntity;
        if ( !v36 )
          goto LABEL_68;
        v37 = (int)questRestrictionInfo;
        questRestrictionInfo = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(
                                         v36->fields.svtId,
                                         0);
        if ( v37 != (_DWORD)questRestrictionInfo )
        {
          v38 = this->fields.userSvtEntity;
          if ( !v38 )
            goto LABEL_68;
          v40 = *(_QWORD *)&v38->fields.svtId.fields.currentCryptoKey;
          v39 = *(_QWORD *)&v38->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v73.fields.currentCryptoKey = v40;
          *(_QWORD *)&v73.fields.fakeValue = v39;
          v41 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v73, 0);
          questRestrictionInfo = (void *)PartyListViewItem__IsIdenticalEquipMember(partyItem, v41, 0);
          this->fields._IsUnique_k__BackingField = (unsigned __int8)questRestrictionInfo & 1;
          if ( ((unsigned __int8)questRestrictionInfo & 1) != 0 )
          {
            v42 = this->fields.userSvtEntity;
            if ( !v42 )
              goto LABEL_68;
            v44 = *(_QWORD *)&v42->fields.svtId.fields.currentCryptoKey;
            v43 = *(_QWORD *)&v42->fields.svtId.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v74.fields.currentCryptoKey = v44;
            *(_QWORD *)&v74.fields.fakeValue = v43;
            v45 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v74, 0);
            this->fields._EquipUseServantId_k__BackingField = PartyListViewItem__GetUseIdenticalEquipServantId(
                                                                partyItem,
                                                                v45,
                                                                0);
          }
        }
      }
    }
    else
    {
      questRestrictionInfo = v67->klass;
      if ( !v67->klass )
        goto LABEL_68;
      Keys = System_Collections_Generic_Dictionary_int__int___get_Keys(
               (System_Collections_Generic_Dictionary_int__int__o *)questRestrictionInfo,
               (const MethodInfo_34496FC *)Method_System_Collections_Generic_Dictionary_int__int__get_Keys__);
      v60 = System_Linq_Enumerable__FirstOrDefault_int_(
              (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
              (const MethodInfo_31632B8 *)Method_System_Linq_Enumerable_FirstOrDefault_int___);
      Member = PartyListViewItem__GetMember(partyItem, v60, 0);
      v66->klass = (CGThumbnailListItem_c *)Member;
      sub_1C6B9AC(v66, (int32_t)Member, v62, v63);
    }
  }
  else
  {
    v18 = 0;
    v19 = 1;
    v64 = v9;
    v65 = partyItem;
    while ( 1 )
    {
      if ( v18 >= (unsigned int)max_length )
LABEL_69:
        sub_1C6BC68(questRestrictionInfo);
      v20 = v9->m_Items[v18];
      if ( !v20 )
        goto LABEL_68;
      if ( partyItem->fields.index != v20->fields.index )
        break;
LABEL_37:
      ++v18;
      ++v19;
      if ( v18 >= (int)max_length )
        goto LABEL_38;
    }
    for ( i = 0; ; ++i )
    {
      questRestrictionInfo = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        questRestrictionInfo = BalanceConfig_TypeInfo;
      }
      if ( i >= *(_DWORD *)(*((_QWORD *)questRestrictionInfo + 23) + 176LL) )
      {
        v9 = v64;
        partyItem = v65;
        max_length = v64->max_length;
        goto LABEL_37;
      }
      questRestrictionInfo = PartyListViewItem__GetMember(v20, i, 0);
      if ( !questRestrictionInfo )
        goto LABEL_68;
      v22 = (PartyOrganizationListViewItem_o *)questRestrictionInfo;
      questRestrictionInfo = PartyOrganizationListViewItem__GetEquipList(
                               (PartyOrganizationListViewItem_o *)questRestrictionInfo,
                               0);
      if ( !questRestrictionInfo )
        goto LABEL_68;
      if ( !*((_DWORD *)questRestrictionInfo + 6) )
        goto LABEL_69;
      if ( *((__int64 *)questRestrictionInfo + 4) >= 1 )
      {
        if ( !this->fields._IsUnique_k__BackingField )
        {
          v23 = this->fields.userSvtEntity;
          if ( !v23 )
            goto LABEL_68;
          v25 = PartyOrganizationListViewItem__get_EquipSvtId(v22, 0);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v72.fields.currentCryptoKey = &v23->fields.svtId;
          *(_QWORD *)&v72.fields.fakeValue = *(_QWORD *)&v25.fields.currentCryptoKey;
          *(_QWORD *)&v75.fields.currentCryptoKey = *(_QWORD *)&v25.fields.fakeValue;
          *(_QWORD *)&v75.fields.fakeValue = 0;
          questRestrictionInfo = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__Equals_49234168(v72, v75, v24);
          this->fields._IsUnique_k__BackingField = (unsigned __int8)questRestrictionInfo & 1;
          if ( ((unsigned __int8)questRestrictionInfo & 1) != 0 )
          {
            SvtId = PartyOrganizationListViewItem__get_SvtId(v22, 0);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            questRestrictionInfo = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(SvtId, 0);
            this->fields._EquipUseServantId_k__BackingField = (int)questRestrictionInfo;
            this->fields._UniqueOrganizedWave_k__BackingField = v19;
            this->fields._IsClearedWave_k__BackingField = v20->fields._IsClearedWave_k__BackingField;
          }
        }
        v27 = this->fields.userSvtEntity;
        if ( !v27 )
          goto LABEL_68;
        questRestrictionInfo = PartyOrganizationListViewItem__GetEquipList(v22, 0);
        if ( !questRestrictionInfo )
          goto LABEL_68;
        if ( !*((_DWORD *)questRestrictionInfo + 6) )
          goto LABEL_69;
        v28 = *((_QWORD *)questRestrictionInfo + 4);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v71, v28, 0);
        v70 = v71;
        questRestrictionInfo = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__Equals_49237092(
                                         &v27->fields.id,
                                         &v70,
                                         0);
        if ( ((unsigned __int8)questRestrictionInfo & 1) != 0 )
          break;
      }
    }
    v46 = this->fields.userSvtEntity;
    if ( !v46 )
      goto LABEL_68;
    v47 = *(_OWORD *)&v46->fields.id.fields.fakeValue;
    *(_OWORD *)&v71.fields.currentCryptoKey = *(_OWORD *)&v46->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v71.fields.fakeValue = v47;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v69 = v71;
    v48 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49236544(&v69, 0);
    v49 = BalanceConfig_TypeInfo;
    v50 = v48;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v49 = BalanceConfig_TypeInfo;
    }
    v51 = PartyListViewItem__GetWearerMember(v20, v50, v49->static_fields->DeckMainMemberMax + 1, 0, 0);
    v67->klass = (CGThumbnailListItem_c *)v51;
    sub_1C6B9AC(v67, (int32_t)v51, v52, v53);
    if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v67->klass, 0) )
    {
      questRestrictionInfo = v67->klass;
      if ( v67->klass )
      {
        v54 = System_Collections_Generic_Dictionary_int__int___get_Keys(
                (System_Collections_Generic_Dictionary_int__int__o *)questRestrictionInfo,
                (const MethodInfo_34496FC *)Method_System_Collections_Generic_Dictionary_int__int__get_Keys__);
        v55 = System_Linq_Enumerable__FirstOrDefault_int_(
                (System_Collections_Generic_IEnumerable_TSource__o *)v54,
                (const MethodInfo_31632B8 *)Method_System_Linq_Enumerable_FirstOrDefault_int___);
        v56 = PartyListViewItem__GetMember(v20, v55, 0);
        v66->klass = (CGThumbnailListItem_c *)v56;
        sub_1C6B9AC(v66, (int32_t)v56, v57, v58);
        goto LABEL_64;
      }
LABEL_68:
      sub_1C6BC60(questRestrictionInfo, v16);
    }
LABEL_64:
    this->fields._OrganizedWave_k__BackingField = v19;
    this->fields._IsClearedWave_k__BackingField = v20->fields._IsClearedWave_k__BackingField;
  }
}


bool EquipGraphListViewItem__SwapChoice(EquipGraphListViewItem_o *this, const MethodInfo *method)
{
  bool v2; // w8

  v2 = !this->fields.isSwapChoice;
  this->fields.isSwapChoice ^= 1u;
  return v2;
}


bool EquipGraphListViewItem__SwapLock(EquipGraphListViewItem_o *this, const MethodInfo *method)
{
  bool v2; // w8

  v2 = !this->fields.isSwapLock;
  this->fields.isSwapLock ^= 1u;
  return v2;
}


void EquipGraphListViewItem__UpdateWaveBattleInfo(
        EquipGraphListViewItem_o *this,
        PartyListViewItem_array *baseDeckItemList,
        PartyListViewItem_o *partyItem,
        int32_t memberIdx,
        const MethodInfo *method)
{
  __int64 v9; // x23
  __int64 v10; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x6
  struct System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo__o *wearerMemberInfoList; // x8
  int32_t size; // w2
  int v17; // w9
  System_Collections_Generic_IEnumerable_T__o *v18; // x19
  System_Action_KeyValuePair_int__int___o *v19; // x20
  System_Collections_Generic_Dictionary_int__int__o *equippedMemberDic; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4CB5815 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_KeyValuePair_int__int___TypeInfo);
    sub_1C6BA08(&Method_BasicHelper_ForEach_KeyValuePair_int__int____);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo__Clear__);
    sub_1C6BA08(&Method_EquipGraphListViewItem___c__DisplayClass75_0__UpdateWaveBattleInfo_b__0__);
    sub_1C6BA08(&EquipGraphListViewItem___c__DisplayClass75_0_TypeInfo);
    byte_4CB5815 = 1;
  }
  equippedMemberDic = 0;
  v9 = sub_1C6BC54(EquipGraphListViewItem___c__DisplayClass75_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9
    || (*(_QWORD *)(v9 + 16) = this,
        sub_1C6B9AC((CGThumbnailListItem_o *)(v9 + 16), (int32_t)this, v12, v13),
        wearerMemberInfoList = this->fields.wearerMemberInfoList,
        this->fields._OrganizedWave_k__BackingField = 0,
        this->fields._UniqueOrganizedWave_k__BackingField = 0,
        this->fields._IsUnique_k__BackingField = 0,
        !wearerMemberInfoList) )
  {
    sub_1C6BC60(v10, v11);
  }
  size = wearerMemberInfoList->fields._size;
  v17 = wearerMemberInfoList->fields._version + 1;
  wearerMemberInfoList->fields._size = 0;
  wearerMemberInfoList->fields._version = v17;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)wearerMemberInfoList->fields._items, 0, size, 0);
  EquipGraphListViewItem__SetWaveBattleInfo(
    this,
    (PartyOrganizationListViewItem_o **)(v9 + 24),
    &equippedMemberDic,
    baseDeckItemList,
    partyItem,
    memberIdx,
    v14);
  if ( *(_QWORD *)(v9 + 24) )
  {
    v18 = (System_Collections_Generic_IEnumerable_T__o *)equippedMemberDic;
    v19 = (System_Action_KeyValuePair_int__int___o *)sub_1C6BC54(System_Action_KeyValuePair_int__int___TypeInfo);
    System_Action_KeyValuePair_int__int_____ctor(
      v19,
      (Il2CppObject *)v9,
      Method_EquipGraphListViewItem___c__DisplayClass75_0__UpdateWaveBattleInfo_b__0__,
      0);
    BasicHelper__ForEach_KeyValuePair_int__int__(
      v18,
      (System_Action_T__o *)v19,
      (const MethodInfo_31251E4 *)Method_BasicHelper_ForEach_KeyValuePair_int__int____);
  }
}


bool EquipGraphListViewItem___SetSortValue_b__82_0(
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

  if ( (byte_4CB581C & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C6BA08(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4CB581C = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_EventCampaignMaster___);
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
  Master_object = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v15, 0);
  if ( !entity || !v8 )
    goto LABEL_15;
  if ( EventCampaignMaster__IsEnableServant(v8, (int32_t)Master_object, entity->fields.eventId, 0) )
    return 1;
  v12 = this->fields.userSvtEntity;
  setupInfo = this->fields.setupInfo;
  eventId = entity->fields.eventId;
  Master_object = SingletonTemplate_object___get_Instance((const MethodInfo_3A4F8A4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Master_object || !v12 )
LABEL_15:
    sub_1C6BC60(Master_object, v6);
  return UserServantEntity__getEventUpVal_43413772(v12, setupInfo, eventId, (int64_t)Master_object[7].klass, 0);
}


bool EquipGraphListViewItem___SetSortValue_b__82_1(
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

  if ( (byte_4CB581D & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C6BA08(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4CB581D = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_EventCampaignMaster___);
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
  Master_object = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v15, 0);
  if ( !entity || !v8 )
    goto LABEL_15;
  if ( EventCampaignMaster__IsEnableServant(v8, (int32_t)Master_object, entity->fields.eventId, 0) )
    return 1;
  v12 = this->fields.userSvtEntity;
  setupInfo = this->fields.setupInfo;
  eventId = entity->fields.eventId;
  Master_object = SingletonTemplate_object___get_Instance((const MethodInfo_3A4F8A4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Master_object || !v12 )
LABEL_15:
    sub_1C6BC60(Master_object, v6);
  return UserServantEntity__getEventUpVal_43413772(v12, setupInfo, eventId, (int64_t)Master_object[7].klass, 0);
}


int32_t EquipGraphListViewItem__get_AdjustAttack(EquipGraphListViewItem_o *this, const MethodInfo *method)
{
  struct UserServantEntity_o *userSvtEntity; // x8

  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
    return userSvtEntity->fields.adjustAtk;
  else
    return 0;
}


int32_t EquipGraphListViewItem__get_AdjustHp(EquipGraphListViewItem_o *this, const MethodInfo *method)
{
  struct UserServantEntity_o *userSvtEntity; // x8

  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
    return userSvtEntity->fields.adjustHp;
  else
    return 0;
}


int32_t EquipGraphListViewItem__get_Attack(EquipGraphListViewItem_o *this, const MethodInfo *method)
{
  struct UserServantEntity_o *userSvtEntity; // x8

  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
    return userSvtEntity->fields.atk;
  else
    return 0;
}


int32_t EquipGraphListViewItem__get_Cost(EquipGraphListViewItem_o *this, const MethodInfo *method)
{
  struct ServantEntity_o *servantEntity; // x8

  servantEntity = this->fields.servantEntity;
  if ( servantEntity )
    return servantEntity->fields.cost;
  else
    return 0;
}


int32_t EquipGraphListViewItem__get_EquipFriendShipSkillChange(
        EquipGraphListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._EquipFriendShipSkillChange_k__BackingField;
}


int32_t EquipGraphListViewItem__get_EquipType(EquipGraphListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._EquipType_k__BackingField;
}


int32_t EquipGraphListViewItem__get_EquipUseServantId(EquipGraphListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._EquipUseServantId_k__BackingField;
}


int32_t EquipGraphListViewItem__get_Hp(EquipGraphListViewItem_o *this, const MethodInfo *method)
{
  struct UserServantEntity_o *userSvtEntity; // x8

  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
    return userSvtEntity->fields.hp;
  else
    return 0;
}


IconLabelInfo_o *EquipGraphListViewItem__get_IconInfo1(EquipGraphListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.iconLabelInfo1;
}


IconLabelInfo_o *EquipGraphListViewItem__get_IconInfo2(EquipGraphListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.iconLabelInfo2;
}


bool EquipGraphListViewItem__get_IsBase(EquipGraphListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isBase;
}


bool EquipGraphListViewItem__get_IsCanNotSelect(EquipGraphListViewItem_o *this, const MethodInfo *method)
{
  return 0;
}


bool EquipGraphListViewItem__get_IsChocolateSvtEquip(EquipGraphListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isChocolateSvtEquip;
}


bool EquipGraphListViewItem__get_IsChoice(EquipGraphListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isChoice;
}


bool EquipGraphListViewItem__get_IsClearedWave(EquipGraphListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._IsClearedWave_k__BackingField;
}


bool EquipGraphListViewItem__get_IsDispChoice(EquipGraphListViewItem_o *this, const MethodInfo *method)
{
  if ( this->fields.isSwapChoice )
    return !this->fields.isChoice;
  else
    return this->fields.isChoice;
}


bool EquipGraphListViewItem__get_IsDispEquipFrameName(EquipGraphListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isDispEquipFrameName;
}


bool EquipGraphListViewItem__get_IsDispLock(EquipGraphListViewItem_o *this, const MethodInfo *method)
{
  if ( this->fields.isSwapLock )
    return !this->fields.isLock;
  else
    return this->fields.isLock;
}


bool EquipGraphListViewItem__get_IsDuplication(EquipGraphListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._IsDuplication_k__BackingField;
}


bool EquipGraphListViewItem__get_IsFriendShipSvtEq(EquipGraphListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isFriendShipSvtEq;
}


bool EquipGraphListViewItem__get_IsInvalidRarity(EquipGraphListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isInvalidRarity;
}


bool EquipGraphListViewItem__get_IsLock(EquipGraphListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isLock;
}


bool EquipGraphListViewItem__get_IsOldBase(EquipGraphListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isOldBase;
}


bool EquipGraphListViewItem__get_IsSelected(EquipGraphListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._IsSelected_k__BackingField;
}


bool EquipGraphListViewItem__get_IsSwapChoice(EquipGraphListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isSwapChoice;
}


bool EquipGraphListViewItem__get_IsSwapLock(EquipGraphListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isSwapLock;
}


bool EquipGraphListViewItem__get_IsUnique(EquipGraphListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._IsUnique_k__BackingField;
}


bool EquipGraphListViewItem__get_IsUse(EquipGraphListViewItem_o *this, const MethodInfo *method)
{
  EquipGraphListViewItem_o *v2; // x19
  struct System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo__o *wearerMemberInfoList; // x8

  v2 = this;
  if ( (byte_4CB5819 & 1) == 0 )
  {
    this = (EquipGraphListViewItem_o *)sub_1C6BA08(&Method_System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo__get_Count__);
    byte_4CB5819 = 1;
  }
  wearerMemberInfoList = v2->fields.wearerMemberInfoList;
  if ( !wearerMemberInfoList )
    sub_1C6BC60(this, method);
  return wearerMemberInfoList->fields._size > 0;
}


bool EquipGraphListViewItem__get_IsWaveSetupSwitchParty(EquipGraphListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._IsWaveSetupSwitchParty_k__BackingField;
}


int32_t EquipGraphListViewItem__get_MaxWave(EquipGraphListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._MaxWave_k__BackingField;
}


int32_t EquipGraphListViewItem__get_MemberIndex(EquipGraphListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._MemberIndex_k__BackingField;
}


System_String_o *EquipGraphListViewItem__get_NameText(EquipGraphListViewItem_o *this, const MethodInfo *method)
{
  ServantEntity_o *servantEntity; // x0
  LocalizationManager_c *v5; // x0

  if ( (byte_4CB5818 & 1) == 0 )
  {
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    byte_4CB5818 = 1;
  }
  servantEntity = this->fields.servantEntity;
  if ( servantEntity )
    return ServantEntity__getName(servantEntity, -1, -1, 0, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !byte_4CB159D )
  {
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    byte_4CB159D = 1;
  }
  v5 = LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v5 = LocalizationManager_TypeInfo;
  }
  return v5->static_fields->unknownNameText;
}


int32_t EquipGraphListViewItem__get_OrganizedWave(EquipGraphListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._OrganizedWave_k__BackingField;
}


ServantEntity_o *EquipGraphListViewItem__get_Servant(EquipGraphListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.servantEntity;
}


int32_t EquipGraphListViewItem__get_UniqueOrganizedWave(EquipGraphListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._UniqueOrganizedWave_k__BackingField;
}


System_String_o *EquipGraphListViewItem__get_UseEquipFrameName(
        EquipGraphListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._UseEquipFrameName_k__BackingField;
}


UserServantEntity_o *EquipGraphListViewItem__get_UserServant(EquipGraphListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.userSvtEntity;
}


void EquipGraphListViewItem__set_EquipFriendShipSkillChange(
        EquipGraphListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._EquipFriendShipSkillChange_k__BackingField = value;
}


void EquipGraphListViewItem__set_EquipUseServantId(
        EquipGraphListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._EquipUseServantId_k__BackingField = value;
}


void EquipGraphListViewItem__set_IsBase(EquipGraphListViewItem_o *this, bool value, const MethodInfo *method)
{
  this->fields.isBase = value;
}


void EquipGraphListViewItem__set_IsClearedWave(EquipGraphListViewItem_o *this, bool value, const MethodInfo *method)
{
  this->fields._IsClearedWave_k__BackingField = value;
}


void EquipGraphListViewItem__set_IsOldBase(EquipGraphListViewItem_o *this, bool value, const MethodInfo *method)
{
  this->fields.isOldBase = value;
}


void EquipGraphListViewItem__set_IsSelected(EquipGraphListViewItem_o *this, bool value, const MethodInfo *method)
{
  this->fields._IsSelected_k__BackingField = value;
}


void EquipGraphListViewItem__set_IsUnique(EquipGraphListViewItem_o *this, bool value, const MethodInfo *method)
{
  this->fields._IsUnique_k__BackingField = value;
}


void EquipGraphListViewItem__set_IsWaveSetupSwitchParty(
        EquipGraphListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsWaveSetupSwitchParty_k__BackingField = value;
}


void EquipGraphListViewItem__set_MaxWave(EquipGraphListViewItem_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._MaxWave_k__BackingField = value;
}


void EquipGraphListViewItem__set_OrganizedWave(EquipGraphListViewItem_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._OrganizedWave_k__BackingField = value;
}


void EquipGraphListViewItem__set_UniqueOrganizedWave(
        EquipGraphListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._UniqueOrganizedWave_k__BackingField = value;
}


void EquipGraphListViewItem_WearerMemberInfo___ctor(
        EquipGraphListViewItem_WearerMemberInfo_o *this,
        int32_t wearerMember,
        int32_t wearerEquipFrameIndex,
        PartyOrganizationListViewItem_o *wearerMemberItem,
        ServantEntity_o *equipSvtEntity,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v12; // x1
  int32_t cost; // w8
  struct System_String_o *ServantName; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  int32_t WearerClassId_k__BackingField; // w8
  struct System_String_o *monitor; // x1
  LocalizationManager_c *v22; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4CB581E & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMaster_ServantClassMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CB581E = 1;
  }
  entity = 0;
  System_Object___ctor((Il2CppObject *)this, 0);
  cost = 0;
  this->fields._WearerMember_k__BackingField = wearerMember;
  this->fields._WearerEquipFrameIndex_k__BackingField = wearerEquipFrameIndex;
  if ( !wearerEquipFrameIndex && equipSvtEntity )
    cost = equipSvtEntity->fields.cost;
  this->fields._WearerEquipCost_k__BackingField = cost;
  if ( !wearerMemberItem )
    goto LABEL_24;
  ServantName = PartyOrganizationListViewItem__get_ServantName(wearerMemberItem, 0);
  this->fields._WearerServantName_k__BackingField = ServantName;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields._WearerServantName_k__BackingField, (int32_t)ServantName, v15, v16);
  this->fields._WearerClassId_k__BackingField = wearerMemberItem->fields.classId;
  SvtId = PartyOrganizationListViewItem__get_SvtId(wearerMemberItem, 0);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  this->fields._WearerSvtId_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(
                                                SvtId,
                                                0);
  WearerClassId_k__BackingField = this->fields._WearerClassId_k__BackingField;
  this->fields._WearerSvtRarity_k__BackingField = wearerMemberItem->fields.rarityId;
  if ( WearerClassId_k__BackingField >= 1 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_ServantClassMaster___);
    if ( !Master_object )
      goto LABEL_24;
    Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                      &entity,
                                      this->fields._WearerClassId_k__BackingField,
                                      (const MethodInfo_33F9128 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Master_object & 1) != 0 )
    {
      if ( entity )
      {
        monitor = (struct System_String_o *)entity[1].monitor;
        goto LABEL_23;
      }
LABEL_24:
      sub_1C6BC60(Master_object, v12);
    }
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !byte_4CB159D )
  {
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    byte_4CB159D = 1;
  }
  v22 = LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v22 = LocalizationManager_TypeInfo;
  }
  monitor = v22->static_fields->unknownNameText;
LABEL_23:
  this->fields._WearerServantClassName_k__BackingField = monitor;
  sub_1C6B9AC(
    (CGThumbnailListItem_o *)&this->fields._WearerServantClassName_k__BackingField,
    (int32_t)monitor,
    v18,
    v19);
}


int32_t EquipGraphListViewItem_WearerMemberInfo__get_WearerClassId(
        EquipGraphListViewItem_WearerMemberInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._WearerClassId_k__BackingField;
}


int32_t EquipGraphListViewItem_WearerMemberInfo__get_WearerEquipCost(
        EquipGraphListViewItem_WearerMemberInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._WearerEquipCost_k__BackingField;
}


int32_t EquipGraphListViewItem_WearerMemberInfo__get_WearerEquipFrameIndex(
        EquipGraphListViewItem_WearerMemberInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._WearerEquipFrameIndex_k__BackingField;
}


int32_t EquipGraphListViewItem_WearerMemberInfo__get_WearerMember(
        EquipGraphListViewItem_WearerMemberInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._WearerMember_k__BackingField;
}


System_String_o *EquipGraphListViewItem_WearerMemberInfo__get_WearerServantClassName(
        EquipGraphListViewItem_WearerMemberInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._WearerServantClassName_k__BackingField;
}


System_String_o *EquipGraphListViewItem_WearerMemberInfo__get_WearerServantName(
        EquipGraphListViewItem_WearerMemberInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._WearerServantName_k__BackingField;
}


int32_t EquipGraphListViewItem_WearerMemberInfo__get_WearerSvtId(
        EquipGraphListViewItem_WearerMemberInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._WearerSvtId_k__BackingField;
}


int32_t EquipGraphListViewItem_WearerMemberInfo__get_WearerSvtRarity(
        EquipGraphListViewItem_WearerMemberInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._WearerSvtRarity_k__BackingField;
}


void EquipGraphListViewItem___c__DisplayClass72_0___ctor(
        EquipGraphListViewItem___c__DisplayClass72_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EquipGraphListViewItem___c__DisplayClass72_0____ctor_b__1(
        EquipGraphListViewItem___c__DisplayClass72_0_o *this,
        System_Collections_Generic_KeyValuePair_int__int__o x,
        const MethodInfo *method)
{
  EquipGraphListViewItem___c__DisplayClass72_0_o *v4; // x21
  struct EquipGraphListViewItem_o *_4__this; // x8
  System_Collections_Generic_List_object__o *wearerMemberInfoList; // x20
  struct EquipGraphListViewItem_o *v7; // x8
  EquipGraphListViewItem___c__DisplayClass72_0_o *v8; // x22
  ServantEntity_o *servantEntity; // x23
  EquipGraphListViewItem_WearerMemberInfo_o *v10; // x21
  const MethodInfo *v11; // x5
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  Il2CppClass **v17; // x0

  v4 = this;
  if ( (byte_4CB581F & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Key__);
    sub_1C6BA08(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Value__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo__Add__);
    this = (EquipGraphListViewItem___c__DisplayClass72_0_o *)sub_1C6BA08(&EquipGraphListViewItem_WearerMemberInfo_TypeInfo);
    byte_4CB581F = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  this = (EquipGraphListViewItem___c__DisplayClass72_0_o *)v4->fields.partyItem;
  if ( !this )
    goto LABEL_11;
  wearerMemberInfoList = (System_Collections_Generic_List_object__o *)_4__this->fields.wearerMemberInfoList;
  this = (EquipGraphListViewItem___c__DisplayClass72_0_o *)PartyListViewItem__GetMember(
                                                             (PartyListViewItem_o *)this,
                                                             x.fields.key,
                                                             0);
  v7 = v4->fields.__4__this;
  if ( !v7
    || (v8 = this,
        servantEntity = v7->fields.servantEntity,
        v10 = (EquipGraphListViewItem_WearerMemberInfo_o *)sub_1C6BC54(EquipGraphListViewItem_WearerMemberInfo_TypeInfo),
        EquipGraphListViewItem_WearerMemberInfo___ctor(
          v10,
          x.fields.key,
          x.fields.value,
          (PartyOrganizationListViewItem_o *)v8,
          servantEntity,
          v11),
        !wearerMemberInfoList)
    || (items = wearerMemberInfoList->fields._items,
        v15 = Method_System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo__Add__,
        ++wearerMemberInfoList->fields._version,
        !items) )
  {
LABEL_11:
    ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_1C6BC60)(this, x);
  }
  size = wearerMemberInfoList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      wearerMemberInfoList,
      (Il2CppObject *)v10,
      *(const MethodInfo_3800974 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
  }
  else
  {
    v17 = &items->obj.klass + size;
    wearerMemberInfoList->fields._size = size + 1;
    v17[4] = (Il2CppClass *)v10;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v17 + 4), (int32_t)v10, v12, v13);
  }
}


void EquipGraphListViewItem___c__DisplayClass72_1___ctor(
        EquipGraphListViewItem___c__DisplayClass72_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EquipGraphListViewItem___c__DisplayClass72_1____ctor_b__0(
        EquipGraphListViewItem___c__DisplayClass72_1_o *this,
        System_Collections_Generic_KeyValuePair_int__int__o x,
        const MethodInfo *method)
{
  EquipGraphListViewItem___c__DisplayClass72_1_o *v4; // x21
  struct EquipGraphListViewItem___c__DisplayClass72_0_o *CS___8__locals1; // x8
  struct EquipGraphListViewItem_o *_4__this; // x8
  System_Collections_Generic_List_object__o *wearerMemberInfoList; // x20
  PartyOrganizationListViewItem_o *wearerMemberItem; // x22
  ServantEntity_o *servantEntity; // x23
  EquipGraphListViewItem_WearerMemberInfo_o *v10; // x21
  const MethodInfo *v11; // x5
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  Il2CppClass **v17; // x0

  v4 = this;
  if ( (byte_4CB5820 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Key__);
    sub_1C6BA08(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Value__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo__Add__);
    this = (EquipGraphListViewItem___c__DisplayClass72_1_o *)sub_1C6BA08(&EquipGraphListViewItem_WearerMemberInfo_TypeInfo);
    byte_4CB5820 = 1;
  }
  CS___8__locals1 = v4->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_10;
  _4__this = CS___8__locals1->fields.__4__this;
  if ( !_4__this )
    goto LABEL_10;
  wearerMemberInfoList = (System_Collections_Generic_List_object__o *)_4__this->fields.wearerMemberInfoList;
  wearerMemberItem = v4->fields.wearerMemberItem;
  servantEntity = _4__this->fields.servantEntity;
  v10 = (EquipGraphListViewItem_WearerMemberInfo_o *)sub_1C6BC54(EquipGraphListViewItem_WearerMemberInfo_TypeInfo);
  EquipGraphListViewItem_WearerMemberInfo___ctor(
    v10,
    x.fields.key,
    x.fields.value,
    wearerMemberItem,
    servantEntity,
    v11);
  if ( !wearerMemberInfoList
    || (items = wearerMemberInfoList->fields._items,
        v15 = Method_System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo__Add__,
        ++wearerMemberInfoList->fields._version,
        !items) )
  {
LABEL_10:
    ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_1C6BC60)(this, x);
  }
  size = wearerMemberInfoList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      wearerMemberInfoList,
      (Il2CppObject *)v10,
      *(const MethodInfo_3800974 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
  }
  else
  {
    v17 = &items->obj.klass + size;
    wearerMemberInfoList->fields._size = size + 1;
    v17[4] = (Il2CppClass *)v10;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v17 + 4), (int32_t)v10, v12, v13);
  }
}


void EquipGraphListViewItem___c__DisplayClass75_0___ctor(
        EquipGraphListViewItem___c__DisplayClass75_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EquipGraphListViewItem___c__DisplayClass75_0___UpdateWaveBattleInfo_b__0(
        EquipGraphListViewItem___c__DisplayClass75_0_o *this,
        System_Collections_Generic_KeyValuePair_int__int__o x,
        const MethodInfo *method)
{
  EquipGraphListViewItem___c__DisplayClass75_0_o *v4; // x21
  struct EquipGraphListViewItem_o *_4__this; // x8
  System_Collections_Generic_List_object__o *wearerMemberInfoList; // x20
  PartyOrganizationListViewItem_o *equippedMemberItem; // x22
  ServantEntity_o *servantEntity; // x23
  EquipGraphListViewItem_WearerMemberInfo_o *v9; // x21
  const MethodInfo *v10; // x5
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x0

  v4 = this;
  if ( (byte_4CB5821 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Key__);
    sub_1C6BA08(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Value__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo__Add__);
    this = (EquipGraphListViewItem___c__DisplayClass75_0_o *)sub_1C6BA08(&EquipGraphListViewItem_WearerMemberInfo_TypeInfo);
    byte_4CB5821 = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_9;
  wearerMemberInfoList = (System_Collections_Generic_List_object__o *)_4__this->fields.wearerMemberInfoList;
  equippedMemberItem = v4->fields.equippedMemberItem;
  servantEntity = _4__this->fields.servantEntity;
  v9 = (EquipGraphListViewItem_WearerMemberInfo_o *)sub_1C6BC54(EquipGraphListViewItem_WearerMemberInfo_TypeInfo);
  EquipGraphListViewItem_WearerMemberInfo___ctor(
    v9,
    x.fields.key,
    x.fields.value,
    equippedMemberItem,
    servantEntity,
    v10);
  if ( !wearerMemberInfoList
    || (items = wearerMemberInfoList->fields._items,
        v14 = Method_System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo__Add__,
        ++wearerMemberInfoList->fields._version,
        !items) )
  {
LABEL_9:
    ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_1C6BC60)(this, x);
  }
  size = wearerMemberInfoList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      wearerMemberInfoList,
      (Il2CppObject *)v9,
      *(const MethodInfo_3800974 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
  }
  else
  {
    v16 = &items->obj.klass + size;
    wearerMemberInfoList->fields._size = size + 1;
    v16[4] = (Il2CppClass *)v9;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v16 + 4), (int32_t)v9, v11, v12);
  }
}