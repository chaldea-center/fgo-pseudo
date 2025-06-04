// local variable allocation has failed, the output may be wrong!
void __fastcall EquipGraphListViewItem___ctor(
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
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  IconLabelInfo_o *v31; // x20
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  IconLabelInfo_o *v34; // x23
  struct IconLabelInfo_o **p_iconLabelInfo2; // x20
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  __int64 v38; // x27
  int64_t Instance; // x0
  const MethodInfo *v40; // x1
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  PartyListViewItem_o **v43; // x23
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_userSvtEntity; // x22
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  int32_t v49; // w2
  const MethodInfo *v50; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v51; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v52; // x28
  __int64 v53; // x24
  __int64 v54; // x29
  Il2CppObject *Entity; // x0
  struct ServantEntity_o **p_servantEntity; // x28
  int32_t v57; // w2
  const MethodInfo *v58; // x3
  System_Collections_Generic_List_object__o *v59; // x24
  int32_t v60; // w2
  const MethodInfo *v61; // x3
  ServantLimitMaster_o *v62; // x29
  int32_t v63; // w24
  __int128 v64; // q1
  PartyListViewItem_o *v65; // x26
  __int64 v66; // x25
  int32_t v67; // w2
  const MethodInfo *v68; // x3
  const MethodInfo *v69; // x6
  __int64 v70; // x8
  System_Collections_Generic_Dictionary_int__int__o *v71; // x24
  System_Action_KeyValuePair_int__int___o *v72; // x26
  System_Collections_Generic_IEnumerable_T__o *v73; // x0
  System_Action_T__o *v74; // x1
  __int128 v75; // q0
  int64_t v76; // x0
  System_Collections_ICollection_o *WearerMember; // x24
  System_Action_KeyValuePair_int__int___o *v78; // x25
  UserServantEntity_o *v79; // x8
  bool IsChoice; // w8
  UserServantEntity_o *v81; // x8
  bool IsChocolateSvtEquip; // w0
  _BOOL4 isBase; // w8
  struct EventUpValSetupInfo_o *v84; // x8
  int32_t EventId; // w24
  PartyOrganizationListViewItem_o *Member; // x23
  struct UserServantEntity_o *userServantEntity; // x8
  PartyOrganizationUtility_o *v88; // x21
  __int64 v89; // x25
  __int64 v90; // x26
  UserServantEntity_o *v91; // x8
  int32_t v92; // w23
  int32_t v93; // w25
  struct ServantEntity_o *servantEntity; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v95; // x8
  struct System_Int32_array *EquipCategoryIdList; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v97; // q0
  int32_t v98; // w2
  const MethodInfo *v99; // x3
  CGThumbnailListItem_o *p_categoryIdList; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v104; // [xsp+20h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v105; // [xsp+40h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v106; // [xsp+60h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v107; // [xsp+80h] [xbp-A0h]
  int32_t actMaxRarity; // [xsp+ACh] [xbp-74h] BYREF
  System_String_o *skillName; // [xsp+B0h] [xbp-70h] BYREF
  System_Collections_Generic_Dictionary_int__int__o *equippedMemberDic; // [xsp+B8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v111; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v112; // 0:x0.16

  if ( (byte_4B015F2 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_KeyValuePair_int__int___TypeInfo, *(_QWORD *)&index);
    sub_1BC3008(&Method_BasicHelper_ForEach_KeyValuePair_int__int____, v16);
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantLimitMaster___, v17);
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantMaster___, v18);
    sub_1BC3008(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v19);
    sub_1BC3008(&IconLabelInfo_TypeInfo, v20);
    sub_1BC3008(&Method_System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo___ctor__, v21);
    sub_1BC3008(&System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo__TypeInfo, v22);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v23);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v24);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25);
    sub_1BC3008(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v26);
    sub_1BC3008(&Method_EquipGraphListViewItem___c__DisplayClass60_0___ctor_b__1__, v27);
    sub_1BC3008(&EquipGraphListViewItem___c__DisplayClass60_0_TypeInfo, v28);
    sub_1BC3008(&Method_EquipGraphListViewItem___c__DisplayClass60_1___ctor_b__0__, v29);
    sub_1BC3008(&EquipGraphListViewItem___c__DisplayClass60_1_TypeInfo, v30);
    byte_4B015F2 = 1;
  }
  skillName = 0LL;
  equippedMemberDic = 0LL;
  actMaxRarity = 0;
  v31 = (IconLabelInfo_o *)sub_1BC3254(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v31, 0LL);
  this->fields.iconLabelInfo1 = v31;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.iconLabelInfo1, (int32_t)v31, v32, v33);
  v34 = (IconLabelInfo_o *)sub_1BC3254(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v34, 0LL);
  this->fields.iconLabelInfo2 = v34;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.iconLabelInfo2, (int32_t)v34, v36, v37);
  v38 = sub_1BC3254(EquipGraphListViewItem___c__DisplayClass60_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v38, 0LL);
  if ( !v38 )
    goto LABEL_59;
  *(_QWORD *)(v38 + 24) = partyItem;
  v43 = (PartyListViewItem_o **)(v38 + 24);
  sub_1BC2FAC((CGThumbnailListItem_o *)(v38 + 24), (int32_t)partyItem, v41, v42);
  ListViewItem___ctor_42769384((ListViewItem_o *)this, index, 0LL);
  *(_QWORD *)(v38 + 16) = this;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v38 + 16), (int32_t)this, v44, v45);
  this->fields.userSvtEntity = userSvtEntity;
  p_userSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userSvtEntity;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.userSvtEntity, (int32_t)userSvtEntity, v47, v48);
  this->fields.setupInfo = setupInfo;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v49, v50);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_59;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantMaster___);
  v51 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_59;
  v52 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v54 = *(_QWORD *)&v51[5].fields.currentCryptoKey;
  v53 = *(_QWORD *)&v51[5].fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v111.fields.currentCryptoKey = v54;
  *(_QWORD *)&v111.fields.fakeValue = v53;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v111, 0LL);
  if ( !v52 )
    goto LABEL_59;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v52,
             Instance,
             (const MethodInfo_32AF070 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)Entity;
  p_servantEntity = &this->fields.servantEntity;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.servantEntity, (int32_t)Entity, v57, v58);
  this->fields._EquipType_k__BackingField = type;
  this->fields._MemberIndex_k__BackingField = memberIdx;
  v59 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v59,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo___ctor__);
  this->fields.wearerMemberInfoList = (struct System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo__o *)v59;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.wearerMemberInfoList, (int32_t)v59, v60, v61);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_59;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtEntity )
    goto LABEL_59;
  v62 = (ServantLimitMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060((*p_userSvtEntity)[5], 0LL);
  if ( !*p_userSvtEntity )
    goto LABEL_59;
  v63 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060((*p_userSvtEntity)[6], 0LL);
  if ( !v62 )
    goto LABEL_59;
  Instance = (int64_t)ServantLimitMaster__GetEntity(v62, v63, Instance, 0LL);
  if ( !*p_servantEntity )
    goto LABEL_59;
  this->fields.classId = (*p_servantEntity)->fields.classId;
  if ( !Instance )
    goto LABEL_59;
  this->fields.rarity = *(_DWORD *)(Instance + 24);
  if ( !userSvtEntity )
    goto LABEL_59;
  v64 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v107.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v107.fields.fakeValue = v64;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v106 = v107;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v106, 0LL);
  this->fields._OrganizedWave_k__BackingField = 0;
  this->fields._UniqueOrganizedWave_k__BackingField = 0;
  this->fields._IsUnique_k__BackingField = 0;
  this->fields.isOldBase = Instance == targetSvtEquipId;
  this->fields.isBase = Instance == targetSvtEquipId;
  v65 = *v43;
  if ( !*v43 )
    goto LABEL_59;
  if ( v65->fields.menuKind == 9 )
  {
    v66 = sub_1BC3254(EquipGraphListViewItem___c__DisplayClass60_1_TypeInfo);
    System_Object___ctor((Il2CppObject *)v66, 0LL);
    if ( !v66 )
      goto LABEL_59;
    *(_QWORD *)(v66 + 24) = v38;
    sub_1BC2FAC((CGThumbnailListItem_o *)(v66 + 24), v38, v67, v68);
    v70 = *(_QWORD *)(v66 + 24);
    if ( !v70 )
      goto LABEL_59;
    EquipGraphListViewItem__SetWaveBattleInfo(
      this,
      (PartyOrganizationListViewItem_o **)(v66 + 16),
      &equippedMemberDic,
      baseDeckItemList,
      *(PartyListViewItem_o **)(v70 + 24),
      memberIdx,
      v69);
    if ( *(_QWORD *)(v66 + 16) )
    {
      v71 = equippedMemberDic;
      v72 = (System_Action_KeyValuePair_int__int___o *)sub_1BC3254(System_Action_KeyValuePair_int__int___TypeInfo);
      System_Action_KeyValuePair_int__int_____ctor(
        v72,
        (Il2CppObject *)v66,
        Method_EquipGraphListViewItem___c__DisplayClass60_1___ctor_b__0__,
        0LL);
      v73 = (System_Collections_Generic_IEnumerable_T__o *)v71;
      v74 = (System_Action_T__o *)v72;
LABEL_28:
      BasicHelper__ForEach_KeyValuePair_int__int__(
        v73,
        v74,
        (const MethodInfo_2FEC090 *)Method_BasicHelper_ForEach_KeyValuePair_int__int____);
    }
  }
  else
  {
    v75 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
    *(_OWORD *)&v107.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v107.fields.fakeValue = v75;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v105 = v107;
    v76 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v105, 0LL);
    WearerMember = (System_Collections_ICollection_o *)PartyListViewItem__GetWearerMember(
                                                         v65,
                                                         v76,
                                                         memberIdx,
                                                         this->fields._EquipType_k__BackingField,
                                                         0LL);
    if ( !BasicHelper__IsNullOrEmpty(WearerMember, 0LL) )
    {
      v78 = (System_Action_KeyValuePair_int__int___o *)sub_1BC3254(System_Action_KeyValuePair_int__int___TypeInfo);
      System_Action_KeyValuePair_int__int_____ctor(
        v78,
        (Il2CppObject *)v38,
        Method_EquipGraphListViewItem___c__DisplayClass60_0___ctor_b__1__,
        0LL);
      v73 = (System_Collections_Generic_IEnumerable_T__o *)WearerMember;
      v74 = (System_Action_T__o *)v78;
      goto LABEL_28;
    }
  }
  Instance = (int64_t)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_59;
  Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL);
  v79 = this->fields.userSvtEntity;
  this->fields.isLock = Instance & 1;
  if ( !v79 )
    goto LABEL_59;
  IsChoice = UserServantEntity__IsChoice(v79, 0LL);
  Instance = (int64_t)this->fields.userSvtEntity;
  this->fields.isChoice = IsChoice;
  *(_WORD *)&this->fields.isSwapLock = 0;
  if ( !Instance )
    goto LABEL_59;
  Instance = UserServantEntity__IsFriendShipSvtEquip((UserServantEntity_o *)Instance, 0LL);
  v81 = this->fields.userSvtEntity;
  this->fields.isFriendShipSvtEq = Instance & 1;
  if ( !v81 )
    goto LABEL_59;
  IsChocolateSvtEquip = UserServantEntity__IsChocolateSvtEquip(v81, 0LL);
  isBase = this->fields.isBase;
  this->fields.isChocolateSvtEquip = IsChocolateSvtEquip;
  Instance = isBase && EquipGraphListViewItem__get_IsUse(this, v40);
  v84 = this->fields.setupInfo;
  this->fields._IsDuplication_k__BackingField = Instance & 1;
  this->fields._EquipFriendShipSkillChange_k__BackingField = -1;
  if ( v84 )
  {
    if ( v84->fields.isQuestStart )
      EventId = EventUpValSetupInfo__get_EventId(v84, 0LL);
    else
      EventId = -1;
    Instance = (int64_t)*v43;
    if ( !*v43 )
      goto LABEL_59;
    Member = PartyListViewItem__GetMember((PartyListViewItem_o *)Instance, memberIdx, 0LL);
    Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Member )
      goto LABEL_59;
    userServantEntity = Member->fields.userServantEntity;
    if ( !userServantEntity )
      goto LABEL_59;
    v88 = (PartyOrganizationUtility_o *)Instance;
    v90 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
    v89 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v112.fields.currentCryptoKey = v90;
    *(_QWORD *)&v112.fields.fakeValue = v89;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v112, 0LL);
    v91 = Member->fields.userServantEntity;
    if ( !v91 )
      goto LABEL_59;
    v92 = Instance;
    Instance = UserServantEntity__getRarity(v91, 0LL);
    if ( !*p_userSvtEntity )
      goto LABEL_59;
    v93 = Instance;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060((*p_userSvtEntity)[5], 0LL);
    if ( !v88 )
      goto LABEL_59;
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
  }
  servantEntity = this->fields.servantEntity;
  this->fields.isInvalidRarity = (char)v84;
  this->fields.isEventUpVal = 0;
  *(_QWORD *)&this->fields.bonusKind = 1LL;
  if ( !servantEntity )
    goto LABEL_59;
  v95 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_59;
  EquipCategoryIdList = preLoadCategoryIdList;
  this->fields.sortValue2 = ((__int64)servantEntity->fields.collectionNo << 16) | ((unsigned __int64)(unsigned int)this->fields.rarity << 48) | v95[16].fields.currentCryptoKey;
  v97 = v95[2];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v107.fields.currentCryptoKey = v95[1];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v107.fields.fakeValue = v97;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v104 = v107;
  this->fields.sortValue2B = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v104, 0LL);
  this->fields.amountSortValue = -1LL;
  if ( !preLoadCategoryIdList )
  {
    Instance = (int64_t)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_59;
    EquipCategoryIdList = UserServantEntity__GetEquipCategoryIdList((UserServantEntity_o *)Instance, 1, 0LL);
  }
  this->fields.categoryIdList = EquipCategoryIdList;
  p_categoryIdList = (CGThumbnailListItem_o *)&this->fields.categoryIdList;
  sub_1BC2FAC(p_categoryIdList, (int32_t)EquipCategoryIdList, v98, v99);
  Instance = (int64_t)p_categoryIdList->monitor;
  if ( !Instance
    || (IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0LL), (Instance = (int64_t)*p_iconLabelInfo2) == 0) )
  {
LABEL_59:
    sub_1BC3264(Instance, v40);
  }
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EquipGraphListViewItem___ctor_40148528(
        EquipGraphListViewItem_o *this,
        int32_t index,
        UserServantEntity_o *userSvtEntity,
        int64_t targetSvtEquipId,
        WarBoardPartyListViewItem_o *partyItem,
        EventUpValSetupInfo_o *setupInfo,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  IconLabelInfo_o *v23; // x20
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  IconLabelInfo_o *v26; // x26
  struct IconLabelInfo_o **p_iconLabelInfo2; // x20
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_userSvtEntity; // x21
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  int64_t Instance; // x0
  __int64 v36; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v37; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v38; // x25
  __int64 v39; // x26
  __int64 v40; // x27
  Il2CppObject *Entity; // x0
  struct ServantEntity_o **p_servantEntity; // x25
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  ServantLimitMaster_o *v45; // x26
  int32_t v46; // w27
  __int128 v47; // q1
  UserServantEntity_Fields *p_fields; // x26
  bool v49; // w8
  System_Collections_Generic_List_object__o *v50; // x24
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  __int128 v53; // q0
  int32_t WeareMember; // w0
  int32_t v55; // w24
  PartyOrganizationListViewItem_o *MemberItem; // x0
  System_Collections_Generic_List_object__o *wearerMemberInfoList; // x22
  ServantEntity_o *v58; // x25
  PartyOrganizationListViewItem_o *v59; // x26
  EquipGraphListViewItem_WearerMemberInfo_o *v60; // x23
  const MethodInfo *v61; // x5
  int32_t v62; // w2
  const MethodInfo *v63; // x3
  struct System_Object_array *items; // x8
  _QWORD *v65; // x9
  __int64 size; // x10
  Il2CppClass **v67; // x0
  UserServantEntity_o *v68; // x8
  bool IsChoice; // w8
  UserServantEntity_o *v70; // x8
  struct ServantEntity_o *servantEntity; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v72; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v73; // q0
  int64_t v74; // x8
  struct System_Int32_array *EquipCategoryIdList; // x0
  CGThumbnailListItem_o *p_categoryIdList; // x19
  int32_t v77; // w2
  const MethodInfo *v78; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v79; // [xsp+0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v80; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v81; // [xsp+40h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v82; // [xsp+60h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v83; // 0:x0.16

  if ( (byte_4B015F3 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantLimitMaster___, *(_QWORD *)&index);
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantMaster___, v13);
    sub_1BC3008(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v14);
    sub_1BC3008(&IconLabelInfo_TypeInfo, v15);
    sub_1BC3008(&Method_System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo__Add__, v16);
    sub_1BC3008(&Method_System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo___ctor__, v17);
    sub_1BC3008(&System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo__TypeInfo, v18);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v19);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v20);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    sub_1BC3008(&EquipGraphListViewItem_WearerMemberInfo_TypeInfo, v22);
    byte_4B015F3 = 1;
  }
  v23 = (IconLabelInfo_o *)sub_1BC3254(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v23, 0LL);
  this->fields.iconLabelInfo1 = v23;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.iconLabelInfo1, (int32_t)v23, v24, v25);
  v26 = (IconLabelInfo_o *)sub_1BC3254(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v26, 0LL);
  this->fields.iconLabelInfo2 = v26;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.iconLabelInfo2, (int32_t)v26, v28, v29);
  ListViewItem___ctor_42769384((ListViewItem_o *)this, index, 0LL);
  this->fields.userSvtEntity = userSvtEntity;
  p_userSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userSvtEntity;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.userSvtEntity, (int32_t)userSvtEntity, v31, v32);
  this->fields.setupInfo = setupInfo;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v33, v34);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantMaster___);
  v37 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_36;
  v38 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v40 = *(_QWORD *)&v37[5].fields.currentCryptoKey;
  v39 = *(_QWORD *)&v37[5].fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v83.fields.currentCryptoKey = v40;
  *(_QWORD *)&v83.fields.fakeValue = v39;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v83, 0LL);
  if ( !v38 )
    goto LABEL_36;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v38,
             Instance,
             (const MethodInfo_32AF070 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)Entity;
  p_servantEntity = &this->fields.servantEntity;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.servantEntity, (int32_t)Entity, v43, v44);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtEntity )
    goto LABEL_36;
  v45 = (ServantLimitMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060((*p_userSvtEntity)[5], 0LL);
  if ( !*p_userSvtEntity )
    goto LABEL_36;
  v46 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060((*p_userSvtEntity)[6], 0LL);
  if ( !v45 )
    goto LABEL_36;
  Instance = (int64_t)ServantLimitMaster__GetEntity(v45, v46, Instance, 0LL);
  if ( !*p_servantEntity )
    goto LABEL_36;
  this->fields.classId = (*p_servantEntity)->fields.classId;
  if ( !Instance )
    goto LABEL_36;
  this->fields.rarity = *(_DWORD *)(Instance + 24);
  if ( !userSvtEntity )
    goto LABEL_36;
  v47 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v82.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v82.fields.fakeValue = v47;
  p_fields = &userSvtEntity->fields;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v81 = v82;
  v49 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v81, 0LL) == targetSvtEquipId;
  this->fields.isOldBase = v49;
  this->fields.isBase = v49;
  v50 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v50,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo___ctor__);
  this->fields.wearerMemberInfoList = (struct System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo__o *)v50;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.wearerMemberInfoList, (int32_t)v50, v51, v52);
  v53 = *(_OWORD *)&p_fields->id.fields.fakeValue;
  *(_OWORD *)&v80.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v80.fields.fakeValue = v53;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v80, 0LL);
  if ( !partyItem )
    goto LABEL_36;
  WeareMember = WarBoardPartyListViewItem__GetWeareMember(partyItem, Instance, 0LL);
  if ( (WeareMember & 0x80000000) == 0 )
  {
    v55 = WeareMember;
    MemberItem = WarBoardPartyListViewItem__GetMemberItem(partyItem, WeareMember, 0LL);
    wearerMemberInfoList = (System_Collections_Generic_List_object__o *)this->fields.wearerMemberInfoList;
    v58 = *p_servantEntity;
    v59 = MemberItem;
    v60 = (EquipGraphListViewItem_WearerMemberInfo_o *)sub_1BC3254(EquipGraphListViewItem_WearerMemberInfo_TypeInfo);
    EquipGraphListViewItem_WearerMemberInfo___ctor(v60, v55, 0, v59, v58, v61);
    if ( !wearerMemberInfoList )
      goto LABEL_36;
    items = wearerMemberInfoList->fields._items;
    v65 = Method_System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo__Add__;
    ++wearerMemberInfoList->fields._version;
    if ( !items )
      goto LABEL_36;
    size = wearerMemberInfoList->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        wearerMemberInfoList,
        (Il2CppObject *)v60,
        *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v65[4] + 192LL) + 112LL));
    }
    else
    {
      v67 = &items->obj.klass + size;
      wearerMemberInfoList->fields._size = size + 1;
      v67[4] = (Il2CppClass *)v60;
      sub_1BC2FAC((CGThumbnailListItem_o *)(v67 + 4), (int32_t)v60, v62, v63);
    }
  }
  Instance = (int64_t)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_36;
  Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL);
  v68 = this->fields.userSvtEntity;
  this->fields.isLock = Instance & 1;
  if ( !v68 )
    goto LABEL_36;
  IsChoice = UserServantEntity__IsChoice(v68, 0LL);
  Instance = (int64_t)this->fields.userSvtEntity;
  this->fields.isChoice = IsChoice;
  *(_WORD *)&this->fields.isSwapLock = 0;
  this->fields.isInvalidRarity = 0;
  if ( !Instance )
    goto LABEL_36;
  Instance = UserServantEntity__IsFriendShipSvtEquip((UserServantEntity_o *)Instance, 0LL);
  v70 = this->fields.userSvtEntity;
  this->fields.isFriendShipSvtEq = Instance & 1;
  if ( !v70 )
    goto LABEL_36;
  Instance = UserServantEntity__IsChocolateSvtEquip(v70, 0LL);
  servantEntity = this->fields.servantEntity;
  this->fields.isChocolateSvtEquip = Instance & 1;
  *(_QWORD *)&this->fields.bonusKind = 1LL;
  this->fields.isEventUpVal = 0;
  if ( !servantEntity )
    goto LABEL_36;
  v72 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_36;
  this->fields.sortValue2 = ((__int64)servantEntity->fields.collectionNo << 16) | ((unsigned __int64)(unsigned int)this->fields.rarity << 48) | v72[16].fields.currentCryptoKey;
  v73 = v72[2];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v82.fields.currentCryptoKey = v72[1];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v82.fields.fakeValue = v73;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v79 = v82;
  v74 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v79, 0LL);
  Instance = (int64_t)this->fields.userSvtEntity;
  this->fields.sortValue2B = v74;
  this->fields.amountSortValue = -1LL;
  if ( !Instance
    || (EquipCategoryIdList = UserServantEntity__GetEquipCategoryIdList((UserServantEntity_o *)Instance, 1, 0LL),
        this->fields.categoryIdList = EquipCategoryIdList,
        p_categoryIdList = (CGThumbnailListItem_o *)&this->fields.categoryIdList,
        sub_1BC2FAC(p_categoryIdList, (int32_t)EquipCategoryIdList, v77, v78),
        (Instance = (int64_t)p_categoryIdList->monitor) == 0)
    || (IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0LL), (Instance = (int64_t)*p_iconLabelInfo2) == 0) )
  {
LABEL_36:
    sub_1BC3264(Instance, v36);
  }
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
  const MethodInfo *v9; // x3

  if ( (byte_4B015FB & 1) == 0 )
  {
    sub_1BC3008(&TreasureDvcInfo_TypeInfo, tdInfo);
    byte_4B015FB = 1;
  }
  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
    return UserServantEntity__getTreasureDeviceInfo(userSvtEntity, tdInfo, -1, -1, 0, 0LL);
  v7 = (TreasureDvcInfo_o *)sub_1BC3254(TreasureDvcInfo_TypeInfo);
  TreasureDvcInfo___ctor(v7, 0LL);
  *tdInfo = v7;
  sub_1BC2FAC((CGThumbnailListItem_o *)tdInfo, (int32_t)v7, v8, v9);
  return 0;
}


EquipGraphListViewItem_WearerMemberInfo_o *__fastcall EquipGraphListViewItem__GetWearerMemberInfo(
        EquipGraphListViewItem_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo__o *wearerMemberInfoList; // x0

  if ( (byte_4B015FA & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo__get_Item__, method);
    byte_4B015FA = 1;
  }
  wearerMemberInfoList = this->fields.wearerMemberInfoList;
  if ( !wearerMemberInfoList )
    sub_1BC3264(0LL, method);
  return (EquipGraphListViewItem_WearerMemberInfo_o *)System_Collections_Generic_List_object___get_Item(
                                                        (System_Collections_Generic_List_object__o *)wearerMemberInfoList,
                                                        0,
                                                        (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo__get_Item__);
}


System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo__o *__fastcall EquipGraphListViewItem__GetWearerMemberInfoList(
        EquipGraphListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.wearerMemberInfoList;
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
  __int64 v18; // x2
  _BOOL4 v19; // w8

  if ( (byte_4B015F6 & 1) == 0 )
  {
    sub_1BC3008(&FilterKindList_TypeInfo, sort);
    sub_1BC3008(&ListViewSort_FilterKind___TypeInfo, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v6);
    byte_4B015F6 = 1;
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
                           (const MethodInfo_3688100 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                           (const MethodInfo_3688100 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                           (const MethodInfo_3688100 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                             (const MethodInfo_3688100 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
      RarityFilterKindList = (System_Int32Enum_array *)sub_1BC30B0(ListViewSort_FilterKind___TypeInfo, 1LL);
      if ( RarityFilterKindList )
      {
        if ( !RarityFilterKindList->max_length )
          sub_1BC326C(RarityFilterKindList, RarityFilterKindList, v18);
        RarityFilterKindList->m_Items[1] = 39;
        if ( ListViewSort__IsUnSelectedAllTargetFilters(
               sort,
               (ListViewSort_FilterKind_array *)RarityFilterKindList,
               0LL)
          || !ListViewSort__GetFilter(sort, 39, 0LL) )
        {
          return 1;
        }
        v19 = !this->fields.isChoice;
        if ( !this->fields.isSwapChoice )
          return this->fields.isChoice;
        return v19;
      }
LABEL_36:
      sub_1BC3264(RarityFilterKindList, sort);
    }
  }
  return result;
}


bool __fastcall EquipGraphListViewItem__IsNeedUpdateDuplication(
        EquipGraphListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsDuplication_k__BackingField && this->fields._IsSelected_k__BackingField;
}


void __fastcall EquipGraphListViewItem__Modify(
        EquipGraphListViewItem_o *this,
        UserServantEntity_o *userSvtEntity,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1

  this->fields.userSvtEntity = userSvtEntity;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.userSvtEntity, (int32_t)userSvtEntity, (int32_t)method, v3);
  EquipGraphListViewItem__ModifyLockItem(this, v5);
  EquipGraphListViewItem__ModifyChoiceItem(this, v6);
}


void __fastcall EquipGraphListViewItem__ModifyChoiceItem(EquipGraphListViewItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0

  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_1BC3264(0LL, method);
  this->fields.isChoice = UserServantEntity__IsChoice(userSvtEntity, 0LL);
  this->fields.isSwapChoice = 0;
}


void __fastcall EquipGraphListViewItem__ModifyLockItem(EquipGraphListViewItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0

  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_1BC3264(0LL, method);
  this->fields.isLock = UserServantEntity__IsLock(userSvtEntity, 0LL);
  this->fields.isSwapLock = 0;
}


void __fastcall EquipGraphListViewItem__ModifyUserServantEntity(
        EquipGraphListViewItem_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.userSvtEntity = userServantEntity;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.userSvtEntity, (int32_t)userServantEntity, (int32_t)method, v3);
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
  int64_t monitor_low; // x20
  IconLabelInfo_o *iconLabelInfo1; // x21
  int64_t index; // x20
  IconLabelInfo_o *v29; // x21
  int64_t selectNum; // x20
  IconLabelInfo_o *v31; // x21
  IconLabelInfo_o *iconLabelInfo2; // x19
  struct ServantEntity_o *servantEntity; // x8
  int32_t monitor; // w20
  struct ListViewManager_o *manager; // x8
  __int64 methodPtr_low; // x11
  struct ListViewManager_o *v37; // x20
  int32_t bonusKind2; // w8
  int32_t v39; // w8
  int32_t bonusKind2Id; // w8
  int32_t v41; // w9
  int32_t v42; // w5
  struct UserServantEntity_o *v43; // x8
  __int64 v44; // x21
  __int64 v45; // x22
  const MethodInfo *v46; // x2
  struct ServantEntity_o *v47; // x8
  __int64 collectionNo; // x10
  struct UserServantEntity_o *v49; // x8
  int isEventUpVal; // w8
  int32_t bonusKindId; // w9
  int32_t v52; // w8
  bool EventUpVal_42144784; // w0
  System_Collections_Generic_List_EventGroupEntity__o *EntitiesByGroupId; // x21
  System_Func_object__bool__o *v55; // x0
  __int64 *v56; // x8
  struct UserServantEntity_o *userSvtEntity; // x8
  EquipGraphListViewItem_o *v58; // x21
  __int64 v59; // x22
  __int64 v60; // x23
  bool IsEnableServant; // w0
  int v62; // w8
  System_Func_T__bool__o *v63; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v65; // [xsp+10h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v66; // [xsp+30h] [xbp-50h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v67; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v68; // 0:x0.16

  v4 = this;
  if ( (byte_4B015F7 & 1) == 0 )
  {
    sub_1BC3008(&Method_BasicHelper_Any_EventGroupEntity___, sort);
    sub_1BC3008(&Method_DataManager_GetMaster_EventCampaignMaster___, v5);
    sub_1BC3008(&Method_DataManager_GetMaster_EventGroupMaster___, v6);
    sub_1BC3008(&DataManager_TypeInfo, v7);
    sub_1BC3008(&Method_EquipGraphListViewItem__SetSortValue_b__70_0__, v8);
    sub_1BC3008(&Method_EquipGraphListViewItem__SetSortValue_b__70_1__, v9);
    sub_1BC3008(&EquipGraphListViewManager_TypeInfo, v10);
    sub_1BC3008(&System_Func_EventGroupEntity__bool__TypeInfo, v11);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventGroupEntity__get_Count__, v12);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
    this = (EquipGraphListViewItem_o *)sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v14);
    byte_4B015F7 = 1;
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
        this = (EquipGraphListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_EventGroupMaster___);
        if ( !this )
          goto LABEL_123;
        EntitiesByGroupId = EventGroupMaster__GetEntitiesByGroupId(
                              (EventGroupMaster_o *)this,
                              v4->fields.bonusKindId,
                              0LL);
        this = (EquipGraphListViewItem_o *)BasicHelper__IsNullOrEmpty(
                                             (System_Collections_ICollection_o *)EntitiesByGroupId,
                                             0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
          goto LABEL_119;
        if ( !EntitiesByGroupId )
          goto LABEL_123;
        if ( EntitiesByGroupId->fields._size < 2 )
          goto LABEL_119;
        v55 = (System_Func_object__bool__o *)sub_1BC3254(System_Func_EventGroupEntity__bool__TypeInfo);
        v56 = &Method_EquipGraphListViewItem__SetSortValue_b__70_1__;
LABEL_118:
        v63 = (System_Func_T__bool__o *)v55;
        System_Func_object__bool____ctor(v55, (Il2CppObject *)v4, *v56, 0LL);
        v4->fields.isEventUpVal = BasicHelper__Any_object_(
                                    (System_Collections_Generic_List_T__o *)EntitiesByGroupId,
                                    v63,
                                    (const MethodInfo_2FEB2DC *)Method_BasicHelper_Any_EventGroupEntity___);
        goto LABEL_119;
      }
      if ( v4->fields.bonusKind != 3 )
      {
        v52 = sort->fields.bonusKind2Id;
        goto LABEL_103;
      }
      bonusKindId = v4->fields.bonusKindId;
      v52 = sort->fields.bonusKind2Id;
      goto LABEL_85;
    }
    if ( v4->fields.bonusKind != bonusKind2 )
    {
      v42 = sort->fields.bonusKind2Id;
      goto LABEL_88;
    }
    v41 = v4->fields.bonusKindId;
    v42 = sort->fields.bonusKind2Id;
    goto LABEL_78;
  }
  bonusKind2 = sort->fields.bonusKind;
  if ( (unsigned int)(bonusKind2 - 4) < 2 )
  {
    if ( v4->fields.bonusKind != bonusKind2 )
    {
      v42 = sort->fields.bonusKindId;
      goto LABEL_88;
    }
    v41 = v4->fields.bonusKindId;
    v42 = sort->fields.bonusKindId;
LABEL_78:
    if ( v41 == v42 )
    {
      isEventUpVal = v4->fields.isEventUpVal;
      goto LABEL_90;
    }
LABEL_88:
    this = (EquipGraphListViewItem_o *)v4->fields.userSvtEntity;
    v4->fields.bonusKind = bonusKind2;
    v4->fields.bonusKindId = v42;
    if ( !this )
      goto LABEL_123;
    EventUpVal_42144784 = UserServantEntity__getEventUpVal_42144784(
                            (UserServantEntity_o *)this,
                            -1,
                            0,
                            0,
                            setupInfo,
                            v42,
                            0,
                            0LL);
    isEventUpVal = EventUpVal_42144784;
    v4->fields.isEventUpVal = EventUpVal_42144784;
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
      v39 = sort->fields.bonusKindId;
LABEL_95:
      v4->fields.bonusKind = 0;
      v4->fields.bonusKindId = v39;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      this = (EquipGraphListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_EventGroupMaster___);
      if ( !this )
        goto LABEL_123;
      EntitiesByGroupId = EventGroupMaster__GetEntitiesByGroupId(
                            (EventGroupMaster_o *)this,
                            v4->fields.bonusKindId,
                            0LL);
      this = (EquipGraphListViewItem_o *)BasicHelper__IsNullOrEmpty(
                                           (System_Collections_ICollection_o *)EntitiesByGroupId,
                                           0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
        goto LABEL_119;
      if ( !EntitiesByGroupId )
        goto LABEL_123;
      if ( EntitiesByGroupId->fields._size < 2 )
        goto LABEL_119;
      v55 = (System_Func_object__bool__o *)sub_1BC3254(System_Func_EventGroupEntity__bool__TypeInfo);
      v56 = &Method_EquipGraphListViewItem__SetSortValue_b__70_0__;
      goto LABEL_118;
    }
    v39 = sort->fields.bonusKindId;
    if ( v4->fields.bonusKindId != v39 )
      goto LABEL_95;
LABEL_119:
    v62 = v4->fields.isEventUpVal;
    goto LABEL_120;
  }
  if ( v4->fields.bonusKind != 3 )
  {
    v52 = sort->fields.bonusKindId;
    goto LABEL_103;
  }
  bonusKindId = v4->fields.bonusKindId;
  v52 = sort->fields.bonusKindId;
LABEL_85:
  if ( bonusKindId == v52 )
    goto LABEL_119;
LABEL_103:
  v4->fields.bonusKind = 3;
  v4->fields.bonusKindId = v52;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (EquipGraphListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_EventCampaignMaster___);
  userSvtEntity = v4->fields.userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_123;
  v58 = this;
  v60 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v59 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v68.fields.currentCryptoKey = v60;
  *(_QWORD *)&v68.fields.fakeValue = v59;
  this = (EquipGraphListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v68, 0LL);
  if ( !v58 )
    goto LABEL_123;
  IsEnableServant = EventCampaignMaster__IsEnableServant(
                      (EventCampaignMaster_o *)v58,
                      (int32_t)this,
                      v4->fields.bonusKindId,
                      0LL);
  v62 = IsEnableServant;
  v4->fields.isEventUpVal = IsEnableServant;
LABEL_120:
  if ( !v62 )
    goto LABEL_121;
LABEL_8:
  this = (EquipGraphListViewItem_o *)((__int64 (__fastcall *)(EquipGraphListViewItem_o *, ListViewSort_o *, void *))v4->klass->vtable._5_IsMatchFilter.method)(
                                       v4,
                                       sort,
                                       v4->klass[1]._1.image);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
LABEL_121:
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
      goto LABEL_123;
    if ( sort->fields.isChoiceSort )
      v4->fields.sortValue0 = 10LL;
  }
  this = (EquipGraphListViewItem_o *)v4->fields.iconLabelInfo2;
  if ( !this )
    goto LABEL_123;
  IconLabelInfo__Clear((IconLabelInfo_o *)this, 0LL);
  if ( !sort )
    goto LABEL_123;
  this = (EquipGraphListViewItem_o *)(&dword_0 + 1);
  switch ( sort->fields.sortKind )
  {
    case 1:
      v22 = v4->fields.userSvtEntity;
      if ( !v22 )
        goto LABEL_123;
      v23 = *(_OWORD *)&v22->fields.id.fields.fakeValue;
      *(_OWORD *)&v66.fields.currentCryptoKey = *(_OWORD *)&v22->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v66.fields.fakeValue = v23;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v65 = v66;
      this = (EquipGraphListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v65, 0LL);
      v24 = v4->fields.userSvtEntity;
      v4->fields.sortValue1 = (int64_t)this;
      if ( !v24 )
        goto LABEL_123;
      this = (EquipGraphListViewItem_o *)v4->fields.iconLabelInfo1;
      if ( !this )
        goto LABEL_123;
      IconLabelInfo__SetTime((IconLabelInfo_o *)this, 49, v24->fields.createdAt, 0, 0, 0, 0LL);
      goto LABEL_37;
    case 2:
      rarity = v4->fields.rarity;
      goto LABEL_41;
    case 3:
      this = (EquipGraphListViewItem_o *)v4->fields.userSvtEntity;
      if ( !this )
        goto LABEL_123;
      monitor_low = SLODWORD(this[1].monitor);
      iconLabelInfo1 = v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = monitor_low;
      this = (EquipGraphListViewItem_o *)UserServantEntity__getLevelMax((UserServantEntity_o *)this, 0LL);
      if ( !iconLabelInfo1 )
        goto LABEL_123;
      IconLabelInfo__Set_39947860(iconLabelInfo1, 2, monitor_low, (int32_t)this, 0, 0, 0, 0, 0, 0LL);
      goto LABEL_46;
    case 5:
      this = (EquipGraphListViewItem_o *)v4->fields.userSvtEntity;
      if ( !this )
        goto LABEL_123;
      index = this[1].fields.index;
      v29 = v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = index;
      this = (EquipGraphListViewItem_o *)UserServantEntity__get_HpBoostValue((UserServantEntity_o *)this, 0LL);
      if ( !v29 )
        goto LABEL_123;
      IconLabelInfo__Set_39947860(v29, 3, index, (int32_t)this, 0, 0, 0, 0, 0, 0LL);
      goto LABEL_37;
    case 6:
      this = (EquipGraphListViewItem_o *)v4->fields.userSvtEntity;
      if ( !this )
        goto LABEL_123;
      selectNum = this[1].fields.selectNum;
      v31 = v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = selectNum;
      this = (EquipGraphListViewItem_o *)UserServantEntity__get_AtkBoostValue((UserServantEntity_o *)this, 0LL);
      if ( !v31 )
        goto LABEL_123;
      IconLabelInfo__Set_39947860(v31, 5, selectNum, (int32_t)this, 0, 0, 0, 0, 0, 0LL);
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
      monitor = (int32_t)this[1].monitor;
      break;
    case 0xE:
      this = (EquipGraphListViewItem_o *)v4->fields.amountSortValue;
      if ( ((unsigned __int64)this & 0x8000000000000000LL) == 0 )
        goto LABEL_73;
      manager = sort->fields.manager;
      if ( manager
        && (methodPtr_low = LOBYTE(EquipGraphListViewManager_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(manager->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
      {
        if ( (EquipGraphListViewManager_c *)manager->klass->_2.typeHierarchy[methodPtr_low - 1] == EquipGraphListViewManager_TypeInfo )
          v37 = sort->fields.manager;
        else
          v37 = 0LL;
      }
      else
      {
        v37 = 0LL;
      }
      v43 = v4->fields.userSvtEntity;
      if ( !v43 )
        goto LABEL_123;
      v45 = *(_QWORD *)&v43->fields.svtId.fields.currentCryptoKey;
      v44 = *(_QWORD *)&v43->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v67.fields.currentCryptoKey = v45;
      *(_QWORD *)&v67.fields.fakeValue = v44;
      this = (EquipGraphListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v67, 0LL);
      if ( !v37 )
        goto LABEL_123;
      this = (EquipGraphListViewItem_o *)EquipGraphListViewManager__GetAmountSortValue(
                                           (EquipGraphListViewManager_o *)v37,
                                           (int32_t)this,
                                           v46);
      v4->fields.amountSortValue = (int64_t)this;
LABEL_73:
      v47 = v4->fields.servantEntity;
      if ( !v47 )
        goto LABEL_123;
      collectionNo = v47->fields.collectionNo;
      v49 = v4->fields.userSvtEntity;
      v4->fields.sortValue1 = ((_QWORD)this << 48) | ((unsigned __int64)(unsigned int)v4->fields.rarity << 32) | collectionNo;
      if ( !v49 )
        goto LABEL_123;
      iconLabelInfo2 = v4->fields.iconLabelInfo1;
      monitor = v49->fields.lv;
      this = (EquipGraphListViewItem_o *)v49;
      break;
    default:
      return (char)this;
  }
  this = (EquipGraphListViewItem_o *)UserServantEntity__getLevelMax((UserServantEntity_o *)this, 0LL);
  if ( !iconLabelInfo2 )
LABEL_123:
    sub_1BC3264(this, sort);
  IconLabelInfo__Set_39947860(iconLabelInfo2, 2, monitor, (int32_t)this, 0, 0, 0, 0, 0, 0LL);
LABEL_46:
  LOBYTE(this) = 1;
  return (char)this;
}


void __fastcall EquipGraphListViewItem__SetWaveBattleInfo(
        EquipGraphListViewItem_o *this,
        PartyOrganizationListViewItem_o **equippedMemberItem,
        System_Collections_Generic_Dictionary_int__int__o **equippedMemberDic,
        PartyListViewItem_array *baseDeckItemList,
        PartyListViewItem_o *partyItem,
        int32_t memberIdx,
        const MethodInfo *method)
{
  PartyListViewItem_array *v8; // x26
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int64_t Member; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x8
  int v22; // w21
  int32_t v23; // w20
  PartyListViewItem_o *v24; // x24
  int32_t i; // w26
  PartyOrganizationListViewItem_o *v26; // x27
  struct UserServantEntity_o *v27; // x25
  const MethodInfo *v28; // x4
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v29; // kr00_16
  struct UserServantEntity_o *v30; // x28
  int64_t v31; // x27
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v33; // q0
  System_Collections_Generic_Dictionary_int__int__o *WearerMember; // x0
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o EquipSvtId; // kr10_16
  struct UserServantEntity_o *v38; // x8
  int v39; // w20
  struct UserServantEntity_o *v40; // x8
  __int64 v41; // x20
  __int64 v42; // x22
  int32_t v43; // w0
  struct UserServantEntity_o *v44; // x8
  __int128 v45; // q0
  int64_t v46; // x0
  BalanceConfig_c *v47; // x8
  int64_t v48; // x21
  System_Collections_Generic_Dictionary_int__int__o *v49; // x0
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *v52; // x0
  int32_t v53; // w0
  PartyOrganizationListViewItem_o *v54; // x0
  int32_t v55; // w2
  const MethodInfo *v56; // x3
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  int32_t v58; // w0
  PartyOrganizationListViewItem_o *v59; // x0
  int32_t v60; // w2
  const MethodInfo *v61; // x3
  PartyListViewItem_array *v63; // [xsp+10h] [xbp-100h]
  PartyListViewItem_o *v64; // [xsp+18h] [xbp-F8h]
  CGThumbnailListItem_o *v65; // [xsp+20h] [xbp-F0h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v66; // [xsp+30h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v67; // [xsp+50h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v68; // [xsp+70h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v69; // [xsp+90h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v70; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v71; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v72; // 0:x2.16

  v8 = baseDeckItemList;
  if ( (byte_4B015F4 & 1) == 0 )
  {
    sub_1BC3008(&BalanceConfig_TypeInfo, equippedMemberItem);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_int__int__get_Keys__, v12);
    sub_1BC3008(&Method_System_Linq_Enumerable_FirstOrDefault_int___, v13);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v15);
    byte_4B015F4 = 1;
  }
  *equippedMemberItem = 0LL;
  v65 = (CGThumbnailListItem_o *)equippedMemberItem;
  sub_1BC2FAC(
    (CGThumbnailListItem_o *)equippedMemberItem,
    0,
    (int32_t)equippedMemberDic,
    (const MethodInfo *)baseDeckItemList);
  *equippedMemberDic = 0LL;
  sub_1BC2FAC((CGThumbnailListItem_o *)equippedMemberDic, 0, v16, v17);
  if ( !v8 )
    goto LABEL_60;
  v21 = *(_QWORD *)&v8->max_length;
  this->fields._MaxWave_k__BackingField = v21;
  if ( (int)v21 < 1 )
  {
LABEL_33:
    userSvtEntity = this->fields.userSvtEntity;
    if ( !userSvtEntity )
      goto LABEL_60;
    v33 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
    *(_OWORD *)&v69.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v69.fields.fakeValue = v33;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v66 = v69;
    Member = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v66, 0LL);
    if ( !partyItem )
      goto LABEL_60;
    WearerMember = PartyListViewItem__GetWearerMember(partyItem, Member, memberIdx, 0, 0LL);
    *equippedMemberDic = WearerMember;
    sub_1BC2FAC((CGThumbnailListItem_o *)equippedMemberDic, (int32_t)WearerMember, v35, v36);
    if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)*equippedMemberDic, 0LL) )
    {
      if ( !this->fields._IsUnique_k__BackingField )
      {
        Member = (int64_t)PartyListViewItem__GetMember(partyItem, memberIdx, 0LL);
        if ( !Member )
          goto LABEL_60;
        EquipSvtId = PartyOrganizationListViewItem__get_EquipSvtId((PartyOrganizationListViewItem_o *)Member, 0LL);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        Member = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(EquipSvtId, 0LL);
        v38 = this->fields.userSvtEntity;
        if ( !v38 )
          goto LABEL_60;
        v39 = Member;
        Member = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v38->fields.svtId, 0LL);
        if ( v39 != (_DWORD)Member )
        {
          v40 = this->fields.userSvtEntity;
          if ( !v40 )
            goto LABEL_60;
          v42 = *(_QWORD *)&v40->fields.svtId.fields.currentCryptoKey;
          v41 = *(_QWORD *)&v40->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v71.fields.currentCryptoKey = v42;
          *(_QWORD *)&v71.fields.fakeValue = v41;
          v43 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v71, 0LL);
          this->fields._IsUnique_k__BackingField = PartyListViewItem__IsIdenticalEquipMember(partyItem, v43, 0LL);
        }
      }
    }
    else
    {
      Member = (int64_t)*equippedMemberDic;
      if ( !*equippedMemberDic )
        goto LABEL_60;
      Keys = System_Collections_Generic_Dictionary_int__int___get_Keys(
               (System_Collections_Generic_Dictionary_int__int__o *)Member,
               (const MethodInfo_32FF760 *)Method_System_Collections_Generic_Dictionary_int__int__get_Keys__);
      v58 = System_Linq_Enumerable__FirstOrDefault_int_(
              (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
              (const MethodInfo_3025D00 *)Method_System_Linq_Enumerable_FirstOrDefault_int___);
      v59 = PartyListViewItem__GetMember(partyItem, v58, 0LL);
      v65->klass = (CGThumbnailListItem_c *)v59;
      sub_1BC2FAC(v65, (int32_t)v59, v60, v61);
    }
  }
  else
  {
    v22 = 0;
    v23 = 1;
    v63 = v8;
    v64 = partyItem;
    while ( 1 )
    {
      if ( v22 >= (unsigned int)v21 )
LABEL_61:
        sub_1BC326C(Member, v19, v20);
      if ( !partyItem )
        goto LABEL_60;
      v24 = v8->m_Items[v22];
      if ( !v24 )
        goto LABEL_60;
      if ( partyItem->fields.index != v24->fields.index )
        break;
LABEL_32:
      ++v22;
      ++v23;
      if ( v22 >= (int)v21 )
        goto LABEL_33;
    }
    for ( i = 0; ; ++i )
    {
      Member = (int64_t)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        Member = (int64_t)BalanceConfig_TypeInfo;
      }
      if ( i >= *(_DWORD *)(*(_QWORD *)(Member + 184) + 176LL) )
      {
        v8 = v63;
        partyItem = v64;
        v21 = *(_QWORD *)&v63->max_length;
        goto LABEL_32;
      }
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
          v27 = this->fields.userSvtEntity;
          if ( !v27 )
            goto LABEL_60;
          v29 = PartyOrganizationListViewItem__get_EquipSvtId(v26, 0LL);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v70.fields.currentCryptoKey = &v27->fields.svtId;
          *(_QWORD *)&v70.fields.fakeValue = *(_QWORD *)&v29.fields.currentCryptoKey;
          *(_QWORD *)&v72.fields.currentCryptoKey = *(_QWORD *)&v29.fields.fakeValue;
          *(_QWORD *)&v72.fields.fakeValue = 0LL;
          Member = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__Equals_48025208(v70, v72, v28);
          this->fields._IsUnique_k__BackingField = Member & 1;
          if ( (Member & 1) != 0 )
          {
            this->fields._UniqueOrganizedWave_k__BackingField = v23;
            this->fields._IsClearedWave_k__BackingField = v24->fields._IsClearedWave_k__BackingField;
          }
        }
        v30 = this->fields.userSvtEntity;
        if ( !v30 )
          goto LABEL_60;
        Member = (int64_t)PartyOrganizationListViewItem__GetEquipList(v26, 0LL);
        if ( !Member )
          goto LABEL_60;
        if ( !*(_DWORD *)(Member + 24) )
          goto LABEL_61;
        v31 = *(_QWORD *)(Member + 32);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v69, v31, 0LL);
        v68 = v69;
        Member = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__Equals_48028132(&v30->fields.id, &v68, 0LL);
        if ( (Member & 1) != 0 )
          break;
      }
    }
    v44 = this->fields.userSvtEntity;
    if ( !v44 )
      goto LABEL_60;
    v45 = *(_OWORD *)&v44->fields.id.fields.fakeValue;
    *(_OWORD *)&v69.fields.currentCryptoKey = *(_OWORD *)&v44->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v69.fields.fakeValue = v45;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v67 = v69;
    v46 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v67, 0LL);
    v47 = BalanceConfig_TypeInfo;
    v48 = v46;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v47 = BalanceConfig_TypeInfo;
    }
    v49 = PartyListViewItem__GetWearerMember(v24, v48, v47->static_fields->DeckMainMemberMax + 1, 0, 0LL);
    *equippedMemberDic = v49;
    sub_1BC2FAC((CGThumbnailListItem_o *)equippedMemberDic, (int32_t)v49, v50, v51);
    if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)*equippedMemberDic, 0LL) )
    {
      Member = (int64_t)*equippedMemberDic;
      if ( *equippedMemberDic )
      {
        v52 = System_Collections_Generic_Dictionary_int__int___get_Keys(
                (System_Collections_Generic_Dictionary_int__int__o *)Member,
                (const MethodInfo_32FF760 *)Method_System_Collections_Generic_Dictionary_int__int__get_Keys__);
        v53 = System_Linq_Enumerable__FirstOrDefault_int_(
                (System_Collections_Generic_IEnumerable_TSource__o *)v52,
                (const MethodInfo_3025D00 *)Method_System_Linq_Enumerable_FirstOrDefault_int___);
        v54 = PartyListViewItem__GetMember(v24, v53, 0LL);
        v65->klass = (CGThumbnailListItem_c *)v54;
        sub_1BC2FAC(v65, (int32_t)v54, v55, v56);
        goto LABEL_56;
      }
LABEL_60:
      sub_1BC3264(Member, v19);
    }
LABEL_56:
    this->fields._OrganizedWave_k__BackingField = v23;
    this->fields._IsClearedWave_k__BackingField = v24->fields._IsClearedWave_k__BackingField;
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x23
  __int64 v14; // x0
  __int64 v15; // x1
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  const MethodInfo *v18; // x6
  struct System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo__o *wearerMemberInfoList; // x8
  int32_t size; // w2
  int v21; // w9
  System_Collections_Generic_IEnumerable_T__o *v22; // x19
  System_Action_KeyValuePair_int__int___o *v23; // x20
  System_Collections_Generic_Dictionary_int__int__o *equippedMemberDic; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B015F5 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_KeyValuePair_int__int___TypeInfo, baseDeckItemList);
    sub_1BC3008(&Method_BasicHelper_ForEach_KeyValuePair_int__int____, v9);
    sub_1BC3008(&Method_System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo__Clear__, v10);
    sub_1BC3008(&Method_EquipGraphListViewItem___c__DisplayClass63_0__UpdateWaveBattleInfo_b__0__, v11);
    sub_1BC3008(&EquipGraphListViewItem___c__DisplayClass63_0_TypeInfo, v12);
    byte_4B015F5 = 1;
  }
  equippedMemberDic = 0LL;
  v13 = sub_1BC3254(EquipGraphListViewItem___c__DisplayClass63_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13
    || (*(_QWORD *)(v13 + 16) = this,
        sub_1BC2FAC((CGThumbnailListItem_o *)(v13 + 16), (int32_t)this, v16, v17),
        wearerMemberInfoList = this->fields.wearerMemberInfoList,
        this->fields._OrganizedWave_k__BackingField = 0,
        this->fields._UniqueOrganizedWave_k__BackingField = 0,
        this->fields._IsUnique_k__BackingField = 0,
        !wearerMemberInfoList) )
  {
    sub_1BC3264(v14, v15);
  }
  size = wearerMemberInfoList->fields._size;
  v21 = wearerMemberInfoList->fields._version + 1;
  wearerMemberInfoList->fields._size = 0;
  wearerMemberInfoList->fields._version = v21;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)wearerMemberInfoList->fields._items, 0, size, 0LL);
  EquipGraphListViewItem__SetWaveBattleInfo(
    this,
    (PartyOrganizationListViewItem_o **)(v13 + 24),
    &equippedMemberDic,
    baseDeckItemList,
    partyItem,
    memberIdx,
    v18);
  if ( *(_QWORD *)(v13 + 24) )
  {
    v22 = (System_Collections_Generic_IEnumerable_T__o *)equippedMemberDic;
    v23 = (System_Action_KeyValuePair_int__int___o *)sub_1BC3254(System_Action_KeyValuePair_int__int___TypeInfo);
    System_Action_KeyValuePair_int__int_____ctor(
      v23,
      (Il2CppObject *)v13,
      Method_EquipGraphListViewItem___c__DisplayClass63_0__UpdateWaveBattleInfo_b__0__,
      0LL);
    BasicHelper__ForEach_KeyValuePair_int__int__(
      v22,
      (System_Action_T__o *)v23,
      (const MethodInfo_2FEC090 *)Method_BasicHelper_ForEach_KeyValuePair_int__int____);
  }
}


bool __fastcall EquipGraphListViewItem___SetSortValue_b__70_0(
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

  if ( (byte_4B015FC & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMaster_EventCampaignMaster___, entity);
    sub_1BC3008(&DataManager_TypeInfo, v5);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_1BC3008(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v7);
    byte_4B015FC = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_EventCampaignMaster___);
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
  Master_object = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v18, 0LL);
  if ( !entity || !v11 )
    goto LABEL_15;
  if ( EventCampaignMaster__IsEnableServant(v11, (int32_t)Master_object, entity->fields.eventId, 0LL) )
    return 1;
  v15 = this->fields.userSvtEntity;
  setupInfo = this->fields.setupInfo;
  eventId = entity->fields.eventId;
  Master_object = SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Master_object || !v15 )
LABEL_15:
    sub_1BC3264(Master_object, v9);
  return UserServantEntity__getEventUpVal_42144440(v15, setupInfo, eventId, (int64_t)Master_object[7].klass, 0LL);
}


bool __fastcall EquipGraphListViewItem___SetSortValue_b__70_1(
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

  if ( (byte_4B015FD & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMaster_EventCampaignMaster___, entity);
    sub_1BC3008(&DataManager_TypeInfo, v5);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_1BC3008(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v7);
    byte_4B015FD = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_EventCampaignMaster___);
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
  Master_object = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v18, 0LL);
  if ( !entity || !v11 )
    goto LABEL_15;
  if ( EventCampaignMaster__IsEnableServant(v11, (int32_t)Master_object, entity->fields.eventId, 0LL) )
    return 1;
  v15 = this->fields.userSvtEntity;
  setupInfo = this->fields.setupInfo;
  eventId = entity->fields.eventId;
  Master_object = SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Master_object || !v15 )
LABEL_15:
    sub_1BC3264(Master_object, v9);
  return UserServantEntity__getEventUpVal_42144440(v15, setupInfo, eventId, (int64_t)Master_object[7].klass, 0LL);
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


int32_t __fastcall EquipGraphListViewItem__get_EquipFriendShipSkillChange(
        EquipGraphListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._EquipFriendShipSkillChange_k__BackingField;
}


int32_t __fastcall EquipGraphListViewItem__get_EquipType(EquipGraphListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._EquipType_k__BackingField;
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


bool __fastcall EquipGraphListViewItem__get_IsDuplication(EquipGraphListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._IsDuplication_k__BackingField;
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


bool __fastcall EquipGraphListViewItem__get_IsSelected(EquipGraphListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._IsSelected_k__BackingField;
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
  EquipGraphListViewItem_o *v2; // x19
  struct System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo__o *wearerMemberInfoList; // x8

  v2 = this;
  if ( (byte_4B015F9 & 1) == 0 )
  {
    this = (EquipGraphListViewItem_o *)sub_1BC3008(
                                         &Method_System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo__get_Count__,
                                         method);
    byte_4B015F9 = 1;
  }
  wearerMemberInfoList = v2->fields.wearerMemberInfoList;
  if ( !wearerMemberInfoList )
    sub_1BC3264(this, method);
  return wearerMemberInfoList->fields._size > 0;
}


int32_t __fastcall EquipGraphListViewItem__get_MaxWave(EquipGraphListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._MaxWave_k__BackingField;
}


int32_t __fastcall EquipGraphListViewItem__get_MemberIndex(EquipGraphListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._MemberIndex_k__BackingField;
}


System_String_o *__fastcall EquipGraphListViewItem__get_NameText(
        EquipGraphListViewItem_o *this,
        const MethodInfo *method)
{
  ServantEntity_o *servantEntity; // x0
  LocalizationManager_c *v5; // x0

  if ( (byte_4B015F8 & 1) == 0 )
  {
    sub_1BC3008(&LocalizationManager_TypeInfo, method);
    byte_4B015F8 = 1;
  }
  servantEntity = this->fields.servantEntity;
  if ( servantEntity )
    return ServantEntity__getName(servantEntity, -1, -1, 0, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !byte_4AFD46D )
  {
    sub_1BC3008(&LocalizationManager_TypeInfo, method);
    byte_4AFD46D = 1;
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


void __fastcall EquipGraphListViewItem__set_EquipFriendShipSkillChange(
        EquipGraphListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._EquipFriendShipSkillChange_k__BackingField = value;
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


void __fastcall EquipGraphListViewItem__set_IsSelected(
        EquipGraphListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsSelected_k__BackingField = value;
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


// local variable allocation has failed, the output may be wrong!
void __fastcall EquipGraphListViewItem_WearerMemberInfo___ctor(
        EquipGraphListViewItem_WearerMemberInfo_o *this,
        int32_t wearerMember,
        int32_t wearerEquipFrameIndex,
        PartyOrganizationListViewItem_o *wearerMemberItem,
        ServantEntity_o *equipSvtEntity,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  Il2CppObject *Master_object; // x0
  __int64 v16; // x1
  int32_t cost; // w8
  struct System_String_o *ServantName; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  int32_t WearerClassId_k__BackingField; // w8
  struct System_String_o *monitor; // x1
  LocalizationManager_c *v26; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B015FE & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMaster_ServantClassMaster___, *(_QWORD *)&wearerMember);
    sub_1BC3008(&DataManager_TypeInfo, v11);
    sub_1BC3008(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__, v12);
    sub_1BC3008(&LocalizationManager_TypeInfo, v13);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    byte_4B015FE = 1;
  }
  entity = 0LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  cost = 0;
  this->fields._WearerMember_k__BackingField = wearerMember;
  this->fields._WearerEquipFrameIndex_k__BackingField = wearerEquipFrameIndex;
  if ( !wearerEquipFrameIndex && equipSvtEntity )
    cost = equipSvtEntity->fields.cost;
  this->fields._WearerEquipCost_k__BackingField = cost;
  if ( !wearerMemberItem )
    goto LABEL_24;
  ServantName = PartyOrganizationListViewItem__get_ServantName(wearerMemberItem, 0LL);
  this->fields._WearerServantName_k__BackingField = ServantName;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields._WearerServantName_k__BackingField, (int32_t)ServantName, v19, v20);
  this->fields._WearerClassId_k__BackingField = wearerMemberItem->fields.classId;
  SvtId = PartyOrganizationListViewItem__get_SvtId(wearerMemberItem, 0LL);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  this->fields._WearerSvtId_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(
                                                SvtId,
                                                0LL);
  WearerClassId_k__BackingField = this->fields._WearerClassId_k__BackingField;
  this->fields._WearerSvtRarity_k__BackingField = wearerMemberItem->fields.rarityId;
  if ( WearerClassId_k__BackingField >= 1 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ServantClassMaster___);
    if ( !Master_object )
      goto LABEL_24;
    Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                      &entity,
                                      this->fields._WearerClassId_k__BackingField,
                                      (const MethodInfo_32AF0BC *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Master_object & 1) != 0 )
    {
      if ( entity )
      {
        monitor = (struct System_String_o *)entity[1].monitor;
        goto LABEL_23;
      }
LABEL_24:
      sub_1BC3264(Master_object, v16);
    }
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !byte_4AFD46D )
  {
    sub_1BC3008(&LocalizationManager_TypeInfo, v16);
    byte_4AFD46D = 1;
  }
  v26 = LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v26 = LocalizationManager_TypeInfo;
  }
  monitor = v26->static_fields->unknownNameText;
LABEL_23:
  this->fields._WearerServantClassName_k__BackingField = monitor;
  sub_1BC2FAC(
    (CGThumbnailListItem_o *)&this->fields._WearerServantClassName_k__BackingField,
    (int32_t)monitor,
    v22,
    v23);
}


int32_t __fastcall EquipGraphListViewItem_WearerMemberInfo__get_WearerClassId(
        EquipGraphListViewItem_WearerMemberInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._WearerClassId_k__BackingField;
}


int32_t __fastcall EquipGraphListViewItem_WearerMemberInfo__get_WearerEquipCost(
        EquipGraphListViewItem_WearerMemberInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._WearerEquipCost_k__BackingField;
}


int32_t __fastcall EquipGraphListViewItem_WearerMemberInfo__get_WearerEquipFrameIndex(
        EquipGraphListViewItem_WearerMemberInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._WearerEquipFrameIndex_k__BackingField;
}


int32_t __fastcall EquipGraphListViewItem_WearerMemberInfo__get_WearerMember(
        EquipGraphListViewItem_WearerMemberInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._WearerMember_k__BackingField;
}


System_String_o *__fastcall EquipGraphListViewItem_WearerMemberInfo__get_WearerServantClassName(
        EquipGraphListViewItem_WearerMemberInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._WearerServantClassName_k__BackingField;
}


System_String_o *__fastcall EquipGraphListViewItem_WearerMemberInfo__get_WearerServantName(
        EquipGraphListViewItem_WearerMemberInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._WearerServantName_k__BackingField;
}


int32_t __fastcall EquipGraphListViewItem_WearerMemberInfo__get_WearerSvtId(
        EquipGraphListViewItem_WearerMemberInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._WearerSvtId_k__BackingField;
}


int32_t __fastcall EquipGraphListViewItem_WearerMemberInfo__get_WearerSvtRarity(
        EquipGraphListViewItem_WearerMemberInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._WearerSvtRarity_k__BackingField;
}


void __fastcall EquipGraphListViewItem___c__DisplayClass60_0___ctor(
        EquipGraphListViewItem___c__DisplayClass60_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EquipGraphListViewItem___c__DisplayClass60_0____ctor_b__1(
        EquipGraphListViewItem___c__DisplayClass60_0_o *this,
        System_Collections_Generic_KeyValuePair_int__int__o x,
        const MethodInfo *method)
{
  EquipGraphListViewItem___c__DisplayClass60_0_o *v4; // x21
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct EquipGraphListViewItem_o *_4__this; // x8
  System_Collections_Generic_List_object__o *wearerMemberInfoList; // x20
  struct EquipGraphListViewItem_o *v10; // x8
  EquipGraphListViewItem___c__DisplayClass60_0_o *v11; // x22
  ServantEntity_o *servantEntity; // x23
  EquipGraphListViewItem_WearerMemberInfo_o *v13; // x21
  const MethodInfo *v14; // x5
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0

  v4 = this;
  if ( (byte_4B015FF & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Key__, x);
    sub_1BC3008(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Value__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo__Add__, v6);
    this = (EquipGraphListViewItem___c__DisplayClass60_0_o *)sub_1BC3008(
                                                               &EquipGraphListViewItem_WearerMemberInfo_TypeInfo,
                                                               v7);
    byte_4B015FF = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  this = (EquipGraphListViewItem___c__DisplayClass60_0_o *)v4->fields.partyItem;
  if ( !this )
    goto LABEL_11;
  wearerMemberInfoList = (System_Collections_Generic_List_object__o *)_4__this->fields.wearerMemberInfoList;
  this = (EquipGraphListViewItem___c__DisplayClass60_0_o *)PartyListViewItem__GetMember(
                                                             (PartyListViewItem_o *)this,
                                                             x.fields.key,
                                                             0LL);
  v10 = v4->fields.__4__this;
  if ( !v10
    || (v11 = this,
        servantEntity = v10->fields.servantEntity,
        v13 = (EquipGraphListViewItem_WearerMemberInfo_o *)sub_1BC3254(EquipGraphListViewItem_WearerMemberInfo_TypeInfo),
        EquipGraphListViewItem_WearerMemberInfo___ctor(
          v13,
          x.fields.key,
          x.fields.value,
          (PartyOrganizationListViewItem_o *)v11,
          servantEntity,
          v14),
        !wearerMemberInfoList)
    || (items = wearerMemberInfoList->fields._items,
        v18 = Method_System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo__Add__,
        ++wearerMemberInfoList->fields._version,
        !items) )
  {
LABEL_11:
    ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_1BC3264)(this, x);
  }
  size = wearerMemberInfoList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      wearerMemberInfoList,
      (Il2CppObject *)v13,
      *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
  }
  else
  {
    v20 = &items->obj.klass + size;
    wearerMemberInfoList->fields._size = size + 1;
    v20[4] = (Il2CppClass *)v13;
    sub_1BC2FAC((CGThumbnailListItem_o *)(v20 + 4), (int32_t)v13, v15, v16);
  }
}


void __fastcall EquipGraphListViewItem___c__DisplayClass60_1___ctor(
        EquipGraphListViewItem___c__DisplayClass60_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EquipGraphListViewItem___c__DisplayClass60_1____ctor_b__0(
        EquipGraphListViewItem___c__DisplayClass60_1_o *this,
        System_Collections_Generic_KeyValuePair_int__int__o x,
        const MethodInfo *method)
{
  EquipGraphListViewItem___c__DisplayClass60_1_o *v4; // x21
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct EquipGraphListViewItem___c__DisplayClass60_0_o *CS___8__locals1; // x8
  struct EquipGraphListViewItem_o *_4__this; // x8
  System_Collections_Generic_List_object__o *wearerMemberInfoList; // x20
  PartyOrganizationListViewItem_o *wearerMemberItem; // x22
  ServantEntity_o *servantEntity; // x23
  EquipGraphListViewItem_WearerMemberInfo_o *v13; // x21
  const MethodInfo *v14; // x5
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0

  v4 = this;
  if ( (byte_4B01600 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Key__, x);
    sub_1BC3008(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Value__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo__Add__, v6);
    this = (EquipGraphListViewItem___c__DisplayClass60_1_o *)sub_1BC3008(
                                                               &EquipGraphListViewItem_WearerMemberInfo_TypeInfo,
                                                               v7);
    byte_4B01600 = 1;
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
  v13 = (EquipGraphListViewItem_WearerMemberInfo_o *)sub_1BC3254(EquipGraphListViewItem_WearerMemberInfo_TypeInfo);
  EquipGraphListViewItem_WearerMemberInfo___ctor(
    v13,
    x.fields.key,
    x.fields.value,
    wearerMemberItem,
    servantEntity,
    v14);
  if ( !wearerMemberInfoList
    || (items = wearerMemberInfoList->fields._items,
        v18 = Method_System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo__Add__,
        ++wearerMemberInfoList->fields._version,
        !items) )
  {
LABEL_10:
    ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_1BC3264)(this, x);
  }
  size = wearerMemberInfoList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      wearerMemberInfoList,
      (Il2CppObject *)v13,
      *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
  }
  else
  {
    v20 = &items->obj.klass + size;
    wearerMemberInfoList->fields._size = size + 1;
    v20[4] = (Il2CppClass *)v13;
    sub_1BC2FAC((CGThumbnailListItem_o *)(v20 + 4), (int32_t)v13, v15, v16);
  }
}


void __fastcall EquipGraphListViewItem___c__DisplayClass63_0___ctor(
        EquipGraphListViewItem___c__DisplayClass63_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EquipGraphListViewItem___c__DisplayClass63_0___UpdateWaveBattleInfo_b__0(
        EquipGraphListViewItem___c__DisplayClass63_0_o *this,
        System_Collections_Generic_KeyValuePair_int__int__o x,
        const MethodInfo *method)
{
  EquipGraphListViewItem___c__DisplayClass63_0_o *v4; // x21
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct EquipGraphListViewItem_o *_4__this; // x8
  System_Collections_Generic_List_object__o *wearerMemberInfoList; // x20
  PartyOrganizationListViewItem_o *equippedMemberItem; // x22
  ServantEntity_o *servantEntity; // x23
  EquipGraphListViewItem_WearerMemberInfo_o *v12; // x21
  const MethodInfo *v13; // x5
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0

  v4 = this;
  if ( (byte_4B01601 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Key__, x);
    sub_1BC3008(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Value__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo__Add__, v6);
    this = (EquipGraphListViewItem___c__DisplayClass63_0_o *)sub_1BC3008(
                                                               &EquipGraphListViewItem_WearerMemberInfo_TypeInfo,
                                                               v7);
    byte_4B01601 = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_9;
  wearerMemberInfoList = (System_Collections_Generic_List_object__o *)_4__this->fields.wearerMemberInfoList;
  equippedMemberItem = v4->fields.equippedMemberItem;
  servantEntity = _4__this->fields.servantEntity;
  v12 = (EquipGraphListViewItem_WearerMemberInfo_o *)sub_1BC3254(EquipGraphListViewItem_WearerMemberInfo_TypeInfo);
  EquipGraphListViewItem_WearerMemberInfo___ctor(
    v12,
    x.fields.key,
    x.fields.value,
    equippedMemberItem,
    servantEntity,
    v13);
  if ( !wearerMemberInfoList
    || (items = wearerMemberInfoList->fields._items,
        v17 = Method_System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo__Add__,
        ++wearerMemberInfoList->fields._version,
        !items) )
  {
LABEL_9:
    ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_1BC3264)(this, x);
  }
  size = wearerMemberInfoList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      wearerMemberInfoList,
      (Il2CppObject *)v12,
      *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
  }
  else
  {
    v19 = &items->obj.klass + size;
    wearerMemberInfoList->fields._size = size + 1;
    v19[4] = (Il2CppClass *)v12;
    sub_1BC2FAC((CGThumbnailListItem_o *)(v19 + 4), (int32_t)v12, v14, v15);
  }
}