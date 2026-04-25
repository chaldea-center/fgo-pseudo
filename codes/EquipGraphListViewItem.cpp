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
  IconLabelInfo_o *v17; // x20
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  IconLabelInfo_o *v24; // x23
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  __int64 v31; // x25
  int64_t Instance; // x0
  const MethodInfo *v33; // x1
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  PartyListViewItem_o **v40; // x23
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *v43; // x4
  int32_t v44; // w5
  int64_t v45; // x6
  System_String_o *v46; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_userSvtEntity; // x22
  int32_t v48; // w2
  int32_t v49; // w3
  System_String_o *v50; // x4
  int32_t v51; // w5
  int64_t v52; // x6
  System_String_o *v53; // x7
  int32_t v54; // w2
  int32_t v55; // w3
  System_String_o *v56; // x4
  int32_t v57; // w5
  int64_t v58; // x6
  System_String_o *v59; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v60; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v61; // x28
  __int64 v62; // x24
  __int64 v63; // x29
  Il2CppObject *Entity; // x0
  struct ServantEntity_o **p_servantEntity; // x28
  int32_t v66; // w2
  int32_t v67; // w3
  System_String_o *v68; // x4
  int32_t v69; // w5
  int64_t v70; // x6
  System_String_o *v71; // x7
  __int128 v72; // q1
  PartyListViewItem_o *v73; // x29
  EquipGraphListViewItem_o *v74; // x8
  EquipGraphListViewItem_o *v75; // x29
  PartyOrganizationListViewItem_o *v76; // x24
  int32_t BaseServantId; // w0
  System_Collections_Generic_List_object__o *v78; // x24
  int32_t v79; // w2
  int32_t v80; // w3
  System_String_o *v81; // x4
  int32_t v82; // w5
  int64_t v83; // x6
  System_String_o *v84; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v85; // x8
  ServantLimitMaster_o *v86; // x29
  __int64 v87; // x24
  __int64 v88; // x26
  int32_t v89; // w24
  UserServantEntity_Fields *p_fields; // x24
  __int128 v91; // q0
  bool v92; // w8
  PartyOrganizationListViewItem_o *v93; // x26
  int32_t EquipUseBaseServantId_k__BackingField; // w27
  __int128 v95; // q0
  int64_t v96; // x0
  struct System_String_o *EquipFrameName; // x0
  int32_t v98; // w2
  int32_t v99; // w3
  System_String_o *v100; // x4
  int32_t v101; // w5
  int64_t v102; // x6
  System_String_o *v103; // x7
  PartyListViewItem_o *v104; // x26
  __int64 v105; // x26
  int32_t v106; // w2
  int32_t v107; // w3
  System_String_o *v108; // x4
  int32_t v109; // w5
  int64_t v110; // x6
  System_String_o *v111; // x7
  const MethodInfo *v112; // x6
  __int64 v113; // x8
  int64_t *v114; // x25
  System_Collections_Generic_IEnumerable_T__o *v115; // x24
  System_Action_KeyValuePair_int__int___o *v116; // x27
  __int128 v117; // q0
  int64_t v118; // x0
  System_Collections_Generic_IEnumerable_T__o *WearerMember; // x24
  System_Action_KeyValuePair_int__int___o *v120; // x26
  UserServantEntity_o *v121; // x8
  bool IsChoice; // w8
  UserServantEntity_o *v123; // x8
  bool IsChocolateSvtEquip; // w0
  _BOOL4 isBase; // w8
  struct EventUpValSetupInfo_o *v126; // x8
  int32_t EventId; // w24
  PartyOrganizationListViewItem_o *Member; // x23
  struct UserServantEntity_o *userServantEntity; // x8
  PartyOrganizationUtility_o *v130; // x21
  __int64 v131; // x25
  __int64 v132; // x26
  UserServantEntity_o *v133; // x8
  int32_t v134; // w23
  int32_t v135; // w25
  struct ServantEntity_o *servantEntity; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v137; // x8
  struct System_Int32_array *EquipCategoryIdList; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v139; // q0
  int32_t v140; // w2
  int32_t v141; // w3
  System_String_o *v142; // x4
  int32_t v143; // w5
  int64_t v144; // x6
  System_String_o *v145; // x7
  GrandQuestFolderBoardItem_o *p_categoryIdList; // x19
  struct IconLabelInfo_o **p_iconLabelInfo2; // [xsp+10h] [xbp-150h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v150; // [xsp+20h] [xbp-140h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v151; // [xsp+40h] [xbp-120h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v152; // [xsp+60h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v153; // [xsp+80h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v154; // [xsp+A0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v155; // [xsp+C0h] [xbp-A0h]
  int32_t actMaxRarity; // [xsp+ECh] [xbp-74h] BYREF
  System_String_o *skillName; // [xsp+F0h] [xbp-70h] BYREF
  System_Collections_Generic_Dictionary_int__int__o *equippedMemberDic; // [xsp+F8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v159; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v160; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v161; // 0:x0.16

  if ( (byte_4E03ECD & 1) == 0 )
  {
    sub_1CE6700(&System_Action_KeyValuePair_int__int___TypeInfo);
    sub_1CE6700(&Method_BasicHelper_ForEach_KeyValuePair_int__int____);
    sub_1CE6700(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1CE6700(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1CE6700(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1CE6700(&IconLabelInfo_TypeInfo);
    sub_1CE6700(&Method_System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo___ctor__);
    sub_1CE6700(&System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo__TypeInfo);
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1CE6700(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1CE6700(&Method_EquipGraphListViewItem___c__DisplayClass76_0___ctor_b__1__);
    sub_1CE6700(&EquipGraphListViewItem___c__DisplayClass76_0_TypeInfo);
    sub_1CE6700(&Method_EquipGraphListViewItem___c__DisplayClass76_1___ctor_b__0__);
    sub_1CE6700(&EquipGraphListViewItem___c__DisplayClass76_1_TypeInfo);
    byte_4E03ECD = 1;
  }
  skillName = 0;
  equippedMemberDic = 0;
  actMaxRarity = 0;
  v17 = (IconLabelInfo_o *)sub_1CE694C(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v17, 0);
  this->fields.iconLabelInfo1 = v17;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.iconLabelInfo1, (int32_t)v17, v18, v19, v20, v21, v22, v23);
  v24 = (IconLabelInfo_o *)sub_1CE694C(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v24, 0);
  this->fields.iconLabelInfo2 = v24;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.iconLabelInfo2, (int32_t)v24, v25, v26, v27, v28, v29, v30);
  v31 = sub_1CE694C(EquipGraphListViewItem___c__DisplayClass76_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v31, 0);
  if ( !v31 )
    goto LABEL_84;
  *(_QWORD *)(v31 + 24) = partyItem;
  v40 = (PartyListViewItem_o **)(v31 + 24);
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v31 + 24), (int32_t)partyItem, v34, v35, v36, v37, v38, v39);
  ListViewItem___ctor_44921328((ListViewItem_o *)this, index, 0);
  *(_QWORD *)(v31 + 16) = this;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v31 + 16), (int32_t)this, v41, v42, v43, v44, v45, v46);
  this->fields.userSvtEntity = userSvtEntity;
  p_userSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userSvtEntity;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields.userSvtEntity,
    (int32_t)userSvtEntity,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53);
  this->fields.setupInfo = setupInfo;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v54, v55, v56, v57, v58, v59);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_84;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_ServantMaster___);
  v60 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_84;
  v61 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v63 = *(_QWORD *)&v60[5].fields.currentCryptoKey;
  v62 = *(_QWORD *)&v60[5].fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v159.fields.currentCryptoKey = v63;
  *(_QWORD *)&v159.fields.fakeValue = v62;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v159, 0);
  if ( !v61 )
    goto LABEL_84;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v61,
             Instance,
             (const MethodInfo_34E925C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)Entity;
  p_servantEntity = &this->fields.servantEntity;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.servantEntity, (int32_t)Entity, v66, v67, v68, v69, v70, v71);
  this->fields._EquipType_k__BackingField = type;
  this->fields._MemberIndex_k__BackingField = memberIdx;
  if ( !userSvtEntity )
    goto LABEL_84;
  v72 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  v73 = *v40;
  *(_OWORD *)&v155.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v155.fields.fakeValue = v72;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v154 = v155;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50041532(&v154, 0);
  if ( !v73 )
    goto LABEL_84;
  Instance = (int64_t)PartyListViewItem__GetUseEquipServant(v73, Instance, 0);
  v74 = Instance ? 0LL : this;
  v75 = Instance ? this : 0LL;
  if ( Instance )
  {
    v76 = (PartyOrganizationListViewItem_o *)Instance;
    Instance = PartyOrganizationListViewItem__get_ServantId((PartyOrganizationListViewItem_o *)Instance, 0);
    if ( !v75 )
      goto LABEL_84;
    v75->fields._EquipUseServantId_k__BackingField = Instance;
    BaseServantId = PartyOrganizationListViewItem__get_BaseServantId(v76, 0);
  }
  else
  {
    if ( !v74 )
      goto LABEL_84;
    BaseServantId = 0;
    v74->fields._EquipUseServantId_k__BackingField = 0;
  }
  this->fields._EquipUseBaseServantId_k__BackingField = BaseServantId;
  v78 = (System_Collections_Generic_List_object__o *)sub_1CE694C(System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v78,
    (const MethodInfo_3905734 *)Method_System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo___ctor__);
  this->fields.wearerMemberInfoList = (struct System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo__o *)v78;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields.wearerMemberInfoList,
    (int32_t)v78,
    v79,
    v80,
    v81,
    v82,
    v83,
    v84);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_84;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v85 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_84;
  v86 = (ServantLimitMaster_o *)Instance;
  v88 = *(_QWORD *)&v85[5].fields.currentCryptoKey;
  v87 = *(_QWORD *)&v85[5].fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v160.fields.currentCryptoKey = v88;
  *(_QWORD *)&v160.fields.fakeValue = v87;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v160, 0);
  if ( !*p_userSvtEntity )
    goto LABEL_84;
  v89 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008((*p_userSvtEntity)[6], 0);
  if ( !v86 )
    goto LABEL_84;
  Instance = (int64_t)ServantLimitMaster__GetEntity(v86, v89, Instance, 0);
  if ( !*p_servantEntity )
    goto LABEL_84;
  this->fields.classId = (*p_servantEntity)->fields.classId;
  if ( !Instance )
    goto LABEL_84;
  p_fields = &userSvtEntity->fields;
  this->fields.rarity = *(_DWORD *)(Instance + 24);
  v91 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v155.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v155.fields.fakeValue = v91;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v153 = v155;
  v92 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50041532(&v153, 0) == targetSvtEquipId;
  this->fields.isOldBase = v92;
  this->fields.isBase = v92;
  Instance = (int64_t)*v40;
  if ( !*v40 )
    goto LABEL_84;
  Instance = (int64_t)PartyListViewItem__GetMember(
                        (PartyListViewItem_o *)Instance,
                        this->fields._MemberIndex_k__BackingField,
                        0);
  this->fields.isDispEquipFrameName = 0;
  if ( !Instance )
    goto LABEL_84;
  v93 = (PartyOrganizationListViewItem_o *)Instance;
  if ( *(_BYTE *)(Instance + 396) || *(_BYTE *)(Instance + 397) )
  {
    EquipUseBaseServantId_k__BackingField = this->fields._EquipUseBaseServantId_k__BackingField;
    Instance = PartyOrganizationListViewItem__get_BaseServantId((PartyOrganizationListViewItem_o *)Instance, 0);
    this->fields.isDispEquipFrameName = EquipUseBaseServantId_k__BackingField == (_DWORD)Instance;
    if ( EquipUseBaseServantId_k__BackingField == (_DWORD)Instance )
    {
      v95 = *(_OWORD *)&p_fields->id.fields.fakeValue;
      *(_OWORD *)&v155.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
      *(_OWORD *)&v155.fields.fakeValue = v95;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v152 = v155;
      v96 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50041532(&v152, 0);
      EquipFrameName = PartyOrganizationListViewItem__GetEquipFrameName(v93, v96, 0);
      this->fields._UseEquipFrameName_k__BackingField = EquipFrameName;
      sub_1CE66A4(
        (GrandQuestFolderBoardItem_o *)&this->fields._UseEquipFrameName_k__BackingField,
        (int32_t)EquipFrameName,
        v98,
        v99,
        v100,
        v101,
        v102,
        v103);
    }
  }
  this->fields._OrganizedWave_k__BackingField = 0;
  this->fields._UniqueOrganizedWave_k__BackingField = 0;
  this->fields._IsUnique_k__BackingField = 0;
  v104 = *v40;
  if ( !*v40 )
    goto LABEL_84;
  if ( v104->fields.menuKind == 9 )
  {
    v105 = sub_1CE694C(EquipGraphListViewItem___c__DisplayClass76_1_TypeInfo);
    System_Object___ctor((Il2CppObject *)v105, 0);
    if ( !v105 )
      goto LABEL_84;
    *(_QWORD *)(v105 + 24) = v31;
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v105 + 24), v31, v106, v107, v108, v109, v110, v111);
    v113 = *(_QWORD *)(v105 + 24);
    if ( !v113 )
      goto LABEL_84;
    v114 = (int64_t *)(v105 + 16);
    EquipGraphListViewItem__SetWaveBattleInfo(
      this,
      (PartyOrganizationListViewItem_o **)(v105 + 16),
      &equippedMemberDic,
      baseDeckItemList,
      *(PartyListViewItem_o **)(v113 + 24),
      memberIdx,
      v112);
    if ( *(_QWORD *)(v105 + 16) )
    {
      v115 = (System_Collections_Generic_IEnumerable_T__o *)equippedMemberDic;
      v116 = (System_Action_KeyValuePair_int__int___o *)sub_1CE694C(System_Action_KeyValuePair_int__int___TypeInfo);
      System_Action_KeyValuePair_int__int_____ctor(
        v116,
        (Il2CppObject *)v105,
        Method_EquipGraphListViewItem___c__DisplayClass76_1___ctor_b__0__,
        0);
      BasicHelper__ForEach_KeyValuePair_int__int__(
        v115,
        (System_Action_T__o *)v116,
        (const MethodInfo_31EE290 *)Method_BasicHelper_ForEach_KeyValuePair_int__int____);
      Instance = *(_QWORD *)(v105 + 16);
      if ( !Instance )
        goto LABEL_84;
      this->fields._EquipUseServantId_k__BackingField = PartyOrganizationListViewItem__get_ServantId(
                                                          (PartyOrganizationListViewItem_o *)Instance,
                                                          0);
      Instance = *v114;
      if ( !*v114 )
        goto LABEL_84;
      this->fields._EquipUseBaseServantId_k__BackingField = PartyOrganizationListViewItem__get_BaseServantId(
                                                              (PartyOrganizationListViewItem_o *)Instance,
                                                              0);
    }
  }
  else
  {
    v117 = *(_OWORD *)&p_fields->id.fields.fakeValue;
    *(_OWORD *)&v155.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
    *(_OWORD *)&v155.fields.fakeValue = v117;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v151 = v155;
    v118 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50041532(&v151, 0);
    WearerMember = (System_Collections_Generic_IEnumerable_T__o *)PartyListViewItem__GetWearerMember(
                                                                    v104,
                                                                    v118,
                                                                    memberIdx,
                                                                    this->fields._EquipType_k__BackingField,
                                                                    0);
    if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)WearerMember, 0) )
    {
      v120 = (System_Action_KeyValuePair_int__int___o *)sub_1CE694C(System_Action_KeyValuePair_int__int___TypeInfo);
      System_Action_KeyValuePair_int__int_____ctor(
        v120,
        (Il2CppObject *)v31,
        Method_EquipGraphListViewItem___c__DisplayClass76_0___ctor_b__1__,
        0);
      BasicHelper__ForEach_KeyValuePair_int__int__(
        WearerMember,
        (System_Action_T__o *)v120,
        (const MethodInfo_31EE290 *)Method_BasicHelper_ForEach_KeyValuePair_int__int____);
    }
  }
  Instance = (int64_t)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_84;
  Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0);
  v121 = this->fields.userSvtEntity;
  this->fields.isLock = Instance & 1;
  if ( !v121 )
    goto LABEL_84;
  IsChoice = UserServantEntity__IsChoice(v121, 0);
  Instance = (int64_t)this->fields.userSvtEntity;
  this->fields.isChoice = IsChoice;
  *(_WORD *)&this->fields.isSwapLock = 0;
  if ( !Instance )
    goto LABEL_84;
  Instance = UserServantEntity__IsFriendShipSvtEquip((UserServantEntity_o *)Instance, 0);
  v123 = this->fields.userSvtEntity;
  this->fields.isFriendShipSvtEq = Instance & 1;
  if ( !v123 )
    goto LABEL_84;
  IsChocolateSvtEquip = UserServantEntity__IsChocolateSvtEquip(v123, 0);
  isBase = this->fields.isBase;
  this->fields.isChocolateSvtEquip = IsChocolateSvtEquip;
  Instance = isBase && EquipGraphListViewItem__get_IsUse(this, v33);
  v126 = this->fields.setupInfo;
  this->fields._IsDuplication_k__BackingField = Instance & 1;
  this->fields._EquipFriendShipSkillChange_k__BackingField = -1;
  if ( v126 )
  {
    if ( v126->fields.isQuestStart )
      EventId = EventUpValSetupInfo__get_EventId(v126, 0);
    else
      EventId = -1;
    Instance = (int64_t)*v40;
    if ( !*v40 )
      goto LABEL_84;
    Member = PartyListViewItem__GetMember((PartyListViewItem_o *)Instance, memberIdx, 0);
    Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_3B55234 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Member )
      goto LABEL_84;
    userServantEntity = Member->fields.userServantEntity;
    if ( !userServantEntity )
      goto LABEL_84;
    v130 = (PartyOrganizationUtility_o *)Instance;
    v132 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
    v131 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v161.fields.currentCryptoKey = v132;
    *(_QWORD *)&v161.fields.fakeValue = v131;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v161, 0);
    v133 = Member->fields.userServantEntity;
    if ( !v133 )
      goto LABEL_84;
    v134 = Instance;
    Instance = UserServantEntity__getRarity(v133, 0);
    if ( !*p_userSvtEntity )
      goto LABEL_84;
    v135 = Instance;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008((*p_userSvtEntity)[5], 0);
    if ( !v130 )
      goto LABEL_84;
    Instance = PartyOrganizationUtility__IsRarityRestriction(
                 v130,
                 &skillName,
                 &actMaxRarity,
                 v134,
                 v135,
                 Instance,
                 EventId,
                 0);
    LOBYTE(v126) = Instance & 1;
  }
  servantEntity = this->fields.servantEntity;
  this->fields.isInvalidRarity = (char)v126;
  this->fields.isEventUpVal = 0;
  *(_QWORD *)&this->fields.bonusKind = 1;
  if ( !servantEntity )
    goto LABEL_84;
  v137 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_84;
  EquipCategoryIdList = preLoadCategoryIdList;
  this->fields.sortValue2 = ((__int64)servantEntity->fields.collectionNo << 16)
                          | ((unsigned __int64)(unsigned int)this->fields.rarity << 48)
                          | v137[25].fields.currentCryptoKey;
  v139 = v137[2];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v155.fields.currentCryptoKey = v137[1];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v155.fields.fakeValue = v139;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v150 = v155;
  this->fields.sortValue2B = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50041532(&v150, 0);
  this->fields.amountSortValue = -1;
  if ( !preLoadCategoryIdList )
  {
    Instance = (int64_t)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_84;
    EquipCategoryIdList = UserServantEntity__GetEquipCategoryIdList((UserServantEntity_o *)Instance, 1, 0);
  }
  this->fields.categoryIdList = EquipCategoryIdList;
  p_categoryIdList = (GrandQuestFolderBoardItem_o *)&this->fields.categoryIdList;
  sub_1CE66A4(p_categoryIdList, (int32_t)EquipCategoryIdList, v140, v141, v142, v143, v144, v145);
  Instance = (int64_t)p_categoryIdList->monitor;
  if ( !Instance || (IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0), (Instance = (int64_t)*p_iconLabelInfo2) == 0) )
LABEL_84:
    sub_1CE6958(Instance, v33);
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0);
}


void EquipGraphListViewItem___ctor_42139284(
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
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  IconLabelInfo_o *v20; // x26
  struct IconLabelInfo_o **p_iconLabelInfo2; // x20
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_userSvtEntity; // x21
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7
  int32_t v35; // w2
  int32_t v36; // w3
  System_String_o *v37; // x4
  int32_t v38; // w5
  int64_t v39; // x6
  System_String_o *v40; // x7
  int64_t Instance; // x0
  __int64 v42; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v43; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v44; // x25
  __int64 v45; // x26
  __int64 v46; // x27
  Il2CppObject *Entity; // x0
  struct ServantEntity_o **p_servantEntity; // x25
  int32_t v49; // w2
  int32_t v50; // w3
  System_String_o *v51; // x4
  int32_t v52; // w5
  int64_t v53; // x6
  System_String_o *v54; // x7
  ServantLimitMaster_o *v55; // x26
  int32_t v56; // w27
  __int128 v57; // q1
  UserServantEntity_Fields *p_fields; // x26
  bool v59; // w8
  System_Collections_Generic_List_object__o *v60; // x24
  int32_t v61; // w2
  int32_t v62; // w3
  System_String_o *v63; // x4
  int32_t v64; // w5
  int64_t v65; // x6
  System_String_o *v66; // x7
  __int128 v67; // q0
  int32_t WeareMember; // w0
  int32_t v69; // w24
  PartyOrganizationListViewItem_o *MemberItem; // x0
  System_Collections_Generic_List_object__o *wearerMemberInfoList; // x22
  ServantEntity_o *v72; // x25
  PartyOrganizationListViewItem_o *v73; // x26
  EquipGraphListViewItem_WearerMemberInfo_o *v74; // x23
  const MethodInfo *v75; // x5
  int32_t v76; // w2
  int32_t v77; // w3
  System_String_o *v78; // x4
  int32_t v79; // w5
  int64_t v80; // x6
  System_String_o *v81; // x7
  struct System_Object_array *items; // x8
  _QWORD *v83; // x9
  __int64 size; // x10
  Il2CppClass **v85; // x0
  UserServantEntity_o *v86; // x8
  bool IsChoice; // w8
  UserServantEntity_o *v88; // x8
  struct ServantEntity_o *servantEntity; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v90; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v91; // q0
  int64_t v92; // x8
  struct System_Int32_array *EquipCategoryIdList; // x0
  GrandQuestFolderBoardItem_o *p_categoryIdList; // x19
  int32_t v95; // w2
  int32_t v96; // w3
  System_String_o *v97; // x4
  int32_t v98; // w5
  int64_t v99; // x6
  System_String_o *v100; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v101; // [xsp+0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v102; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v103; // [xsp+40h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v104; // [xsp+60h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v105; // 0:x0.16

  if ( (byte_4E03ECE & 1) == 0 )
  {
    sub_1CE6700(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1CE6700(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1CE6700(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1CE6700(&IconLabelInfo_TypeInfo);
    sub_1CE6700(&Method_System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo__Add__);
    sub_1CE6700(&Method_System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo___ctor__);
    sub_1CE6700(&System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo__TypeInfo);
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1CE6700(&EquipGraphListViewItem_WearerMemberInfo_TypeInfo);
    byte_4E03ECE = 1;
  }
  v13 = (IconLabelInfo_o *)sub_1CE694C(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v13, 0);
  this->fields.iconLabelInfo1 = v13;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.iconLabelInfo1, (int32_t)v13, v14, v15, v16, v17, v18, v19);
  v20 = (IconLabelInfo_o *)sub_1CE694C(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v20, 0);
  this->fields.iconLabelInfo2 = v20;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.iconLabelInfo2, (int32_t)v20, v22, v23, v24, v25, v26, v27);
  ListViewItem___ctor_44921328((ListViewItem_o *)this, index, 0);
  this->fields.userSvtEntity = userSvtEntity;
  p_userSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userSvtEntity;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields.userSvtEntity,
    (int32_t)userSvtEntity,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  this->fields.setupInfo = setupInfo;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v35, v36, v37, v38, v39, v40);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_ServantMaster___);
  v43 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_36;
  v44 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v46 = *(_QWORD *)&v43[5].fields.currentCryptoKey;
  v45 = *(_QWORD *)&v43[5].fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v105.fields.currentCryptoKey = v46;
  *(_QWORD *)&v105.fields.fakeValue = v45;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v105, 0);
  if ( !v44 )
    goto LABEL_36;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v44,
             Instance,
             (const MethodInfo_34E925C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)Entity;
  p_servantEntity = &this->fields.servantEntity;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.servantEntity, (int32_t)Entity, v49, v50, v51, v52, v53, v54);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtEntity )
    goto LABEL_36;
  v55 = (ServantLimitMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008((*p_userSvtEntity)[5], 0);
  if ( !*p_userSvtEntity )
    goto LABEL_36;
  v56 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008((*p_userSvtEntity)[6], 0);
  if ( !v55 )
    goto LABEL_36;
  Instance = (int64_t)ServantLimitMaster__GetEntity(v55, v56, Instance, 0);
  if ( !*p_servantEntity )
    goto LABEL_36;
  this->fields.classId = (*p_servantEntity)->fields.classId;
  if ( !Instance )
    goto LABEL_36;
  this->fields.rarity = *(_DWORD *)(Instance + 24);
  if ( !userSvtEntity )
    goto LABEL_36;
  v57 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v104.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v104.fields.fakeValue = v57;
  p_fields = &userSvtEntity->fields;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v103 = v104;
  v59 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50041532(&v103, 0) == targetSvtEquipId;
  this->fields.isOldBase = v59;
  this->fields.isBase = v59;
  v60 = (System_Collections_Generic_List_object__o *)sub_1CE694C(System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v60,
    (const MethodInfo_3905734 *)Method_System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo___ctor__);
  this->fields.wearerMemberInfoList = (struct System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo__o *)v60;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields.wearerMemberInfoList,
    (int32_t)v60,
    v61,
    v62,
    v63,
    v64,
    v65,
    v66);
  v67 = *(_OWORD *)&p_fields->id.fields.fakeValue;
  *(_OWORD *)&v102.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v102.fields.fakeValue = v67;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50041532(&v102, 0);
  if ( !partyItem )
    goto LABEL_36;
  WeareMember = WarBoardPartyListViewItem__GetWeareMember(partyItem, Instance, 0);
  if ( (WeareMember & 0x80000000) == 0 )
  {
    v69 = WeareMember;
    MemberItem = WarBoardPartyListViewItem__GetMemberItem(partyItem, WeareMember, 0);
    wearerMemberInfoList = (System_Collections_Generic_List_object__o *)this->fields.wearerMemberInfoList;
    v72 = *p_servantEntity;
    v73 = MemberItem;
    v74 = (EquipGraphListViewItem_WearerMemberInfo_o *)sub_1CE694C(EquipGraphListViewItem_WearerMemberInfo_TypeInfo);
    EquipGraphListViewItem_WearerMemberInfo___ctor(v74, v69, 0, v73, v72, v75);
    if ( !wearerMemberInfoList )
      goto LABEL_36;
    items = wearerMemberInfoList->fields._items;
    v83 = Method_System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo__Add__;
    ++wearerMemberInfoList->fields._version;
    if ( !items )
      goto LABEL_36;
    size = wearerMemberInfoList->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        wearerMemberInfoList,
        (Il2CppObject *)v74,
        *(const MethodInfo_3905F68 **)(*(_QWORD *)(v83[4] + 192LL) + 112LL));
    }
    else
    {
      v85 = &items->obj.klass + size;
      wearerMemberInfoList->fields._size = size + 1;
      v85[4] = (Il2CppClass *)v74;
      sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v85 + 4), (int32_t)v74, v76, v77, v78, v79, v80, v81);
    }
  }
  Instance = (int64_t)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_36;
  Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0);
  v86 = this->fields.userSvtEntity;
  this->fields.isLock = Instance & 1;
  if ( !v86 )
    goto LABEL_36;
  IsChoice = UserServantEntity__IsChoice(v86, 0);
  Instance = (int64_t)this->fields.userSvtEntity;
  this->fields.isChoice = IsChoice;
  *(_WORD *)&this->fields.isSwapLock = 0;
  this->fields.isInvalidRarity = 0;
  if ( !Instance )
    goto LABEL_36;
  Instance = UserServantEntity__IsFriendShipSvtEquip((UserServantEntity_o *)Instance, 0);
  v88 = this->fields.userSvtEntity;
  this->fields.isFriendShipSvtEq = Instance & 1;
  if ( !v88 )
    goto LABEL_36;
  Instance = UserServantEntity__IsChocolateSvtEquip(v88, 0);
  servantEntity = this->fields.servantEntity;
  this->fields.isChocolateSvtEquip = Instance & 1;
  *(_QWORD *)&this->fields.bonusKind = 1;
  this->fields.isEventUpVal = 0;
  if ( !servantEntity )
    goto LABEL_36;
  v90 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_36;
  this->fields.sortValue2 = ((__int64)servantEntity->fields.collectionNo << 16)
                          | ((unsigned __int64)(unsigned int)this->fields.rarity << 48)
                          | v90[25].fields.currentCryptoKey;
  v91 = v90[2];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v104.fields.currentCryptoKey = v90[1];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v104.fields.fakeValue = v91;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v101 = v104;
  v92 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50041532(&v101, 0);
  Instance = (int64_t)this->fields.userSvtEntity;
  this->fields.sortValue2B = v92;
  this->fields.amountSortValue = -1;
  if ( !Instance
    || (EquipCategoryIdList = UserServantEntity__GetEquipCategoryIdList((UserServantEntity_o *)Instance, 1, 0),
        this->fields.categoryIdList = EquipCategoryIdList,
        p_categoryIdList = (GrandQuestFolderBoardItem_o *)&this->fields.categoryIdList,
        sub_1CE66A4(p_categoryIdList, (int32_t)EquipCategoryIdList, v95, v96, v97, v98, v99, v100),
        (Instance = (int64_t)p_categoryIdList->monitor) == 0)
    || (IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0), (Instance = (int64_t)*p_iconLabelInfo2) == 0) )
  {
LABEL_36:
    sub_1CE6958(Instance, v42);
  }
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0);
}


void EquipGraphListViewItem__Finalize(EquipGraphListViewItem_o *this, const MethodInfo *method)
{
  ListViewItem__Finalize((ListViewItem_o *)this, 0);
}


EquipGraphListViewItem_WearerMemberInfo_o *EquipGraphListViewItem__GetWearerMemberInfo(
        EquipGraphListViewItem_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo__o *wearerMemberInfoList; // x0

  if ( (byte_4E03ED5 & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo__get_Item__);
    byte_4E03ED5 = 1;
  }
  wearerMemberInfoList = this->fields.wearerMemberInfoList;
  if ( !wearerMemberInfoList )
    sub_1CE6958(0, method);
  return (EquipGraphListViewItem_WearerMemberInfo_o *)System_Collections_Generic_List_object___get_Item(
                                                        (System_Collections_Generic_List_object__o *)wearerMemberInfoList,
                                                        0,
                                                        (const MethodInfo_3905C98 *)Method_System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo__get_Item__);
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

  if ( (byte_4E03ED1 & 1) == 0 )
  {
    sub_1CE6700(&FilterKindList_TypeInfo);
    sub_1CE6700(&ListViewSort_FilterKind___TypeInfo);
    sub_1CE6700(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    byte_4E03ED1 = 1;
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
                           (const MethodInfo_38ED228 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                          (const MethodInfo_38ED228 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                           (const MethodInfo_38ED228 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                             (const MethodInfo_38ED228 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
      RarityFilterKindList = (System_Int32Enum_array *)sub_1CE67A8(ListViewSort_FilterKind___TypeInfo, 1);
      if ( RarityFilterKindList )
      {
        if ( !LODWORD(RarityFilterKindList->max_length) )
          sub_1CE6960(RarityFilterKindList);
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
      sub_1CE6958(RarityFilterKindList, sort);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x1

  this->fields.userSvtEntity = userSvtEntity;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields.userSvtEntity,
    (int32_t)userSvtEntity,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  EquipGraphListViewItem__ModifyLockItem(this, v9);
  EquipGraphListViewItem__ModifyChoiceItem(this, v10);
}


void EquipGraphListViewItem__ModifyChoiceItem(EquipGraphListViewItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0

  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_1CE6958(0, method);
  this->fields.isChoice = UserServantEntity__IsChoice(userSvtEntity, 0);
  this->fields.isSwapChoice = 0;
}


void EquipGraphListViewItem__ModifyLockItem(EquipGraphListViewItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0

  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_1CE6958(0, method);
  this->fields.isLock = UserServantEntity__IsLock(userSvtEntity, 0);
  this->fields.isSwapLock = 0;
}


void EquipGraphListViewItem__ModifyUserServantEntity(
        EquipGraphListViewItem_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields.userSvtEntity = userServantEntity;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields.userSvtEntity,
    (int32_t)userServantEntity,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  int64_t userSvtEntity_low; // x20
  IconLabelInfo_o *iconLabelInfo1; // x21
  int64_t servantEntity_high; // x20
  IconLabelInfo_o *v19; // x21
  int64_t servantEntity_low; // x20
  IconLabelInfo_o *v21; // x21
  IconLabelInfo_o *iconLabelInfo2; // x19
  struct ServantEntity_o *servantEntity; // x8
  int32_t lv; // w20
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
  bool EventUpVal_44304936; // w0
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
  if ( (byte_4E03ED2 & 1) == 0 )
  {
    sub_1CE6700(&Method_BasicHelper_Any_EventGroupEntity___);
    sub_1CE6700(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_1CE6700(&Method_DataManager_GetMaster_EventGroupMaster___);
    sub_1CE6700(&DataManager_TypeInfo);
    sub_1CE6700(&Method_EquipGraphListViewItem__SetSortValue_b__86_0__);
    sub_1CE6700(&Method_EquipGraphListViewItem__SetSortValue_b__86_1__);
    sub_1CE6700(&EquipGraphListViewManager_TypeInfo);
    sub_1CE6700(&System_Func_EventGroupEntity__bool__TypeInfo);
    sub_1CE6700(&Method_System_Collections_Generic_List_EventGroupEntity__get_Count__);
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (EquipGraphListViewItem_o *)sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4E03ED2 = 1;
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
        this = (EquipGraphListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_EventGroupMaster___);
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
        v45 = (System_Func_object__bool__o *)sub_1CE694C(System_Func_EventGroupEntity__bool__TypeInfo);
        v46 = &Method_EquipGraphListViewItem__SetSortValue_b__86_1__;
LABEL_118:
        v53 = (System_Func_T__bool__o *)v45;
        System_Func_object__bool____ctor(v45, (Il2CppObject *)v4, *v46, 0);
        v4->fields.isEventUpVal = BasicHelper__Any_object_(
                                    (System_Collections_Generic_List_T__o *)EntitiesByGroupId,
                                    v53,
                                    (const MethodInfo_31ED4DC *)Method_BasicHelper_Any_EventGroupEntity___);
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
    EventUpVal_44304936 = UserServantEntity__getEventUpVal_44304936(
                            (UserServantEntity_o *)this,
                            -1,
                            0,
                            0,
                            setupInfo,
                            v32,
                            0,
                            0);
    isEventUpVal = EventUpVal_44304936;
    v4->fields.isEventUpVal = EventUpVal_44304936;
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
      this = (EquipGraphListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_EventGroupMaster___);
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
      v45 = (System_Func_object__bool__o *)sub_1CE694C(System_Func_EventGroupEntity__bool__TypeInfo);
      v46 = &Method_EquipGraphListViewItem__SetSortValue_b__86_0__;
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
  this = (EquipGraphListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_EventCampaignMaster___);
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
  this = (EquipGraphListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v58, 0);
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
      this = (EquipGraphListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50041532(&v55, 0);
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
      userSvtEntity_low = SLODWORD(this[1].fields.userSvtEntity);
      iconLabelInfo1 = v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = userSvtEntity_low;
      this = (EquipGraphListViewItem_o *)UserServantEntity__getLevelMax((UserServantEntity_o *)this, 0);
      if ( !iconLabelInfo1 )
        goto LABEL_123;
      IconLabelInfo__Set_42060700(iconLabelInfo1, 2, userSvtEntity_low, (int32_t)this, 0, 0, 0, 0, 0, 0);
      goto LABEL_46;
    case 5:
      this = (EquipGraphListViewItem_o *)v4->fields.userSvtEntity;
      if ( !this )
        goto LABEL_123;
      servantEntity_high = SHIDWORD(this[1].fields.servantEntity);
      v19 = v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = servantEntity_high;
      this = (EquipGraphListViewItem_o *)UserServantEntity__get_HpBoostValue((UserServantEntity_o *)this, 0);
      if ( !v19 )
        goto LABEL_123;
      IconLabelInfo__Set_42060700(v19, 3, servantEntity_high, (int32_t)this, 0, 0, 0, 0, 0, 0);
      goto LABEL_37;
    case 6:
      this = (EquipGraphListViewItem_o *)v4->fields.userSvtEntity;
      if ( !this )
        goto LABEL_123;
      servantEntity_low = SLODWORD(this[1].fields.servantEntity);
      v21 = v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = servantEntity_low;
      this = (EquipGraphListViewItem_o *)UserServantEntity__get_AtkBoostValue((UserServantEntity_o *)this, 0);
      if ( !v21 )
        goto LABEL_123;
      IconLabelInfo__Set_42060700(v21, 5, servantEntity_low, (int32_t)this, 0, 0, 0, 0, 0, 0);
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
      lv = (int32_t)this[1].fields.userSvtEntity;
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
      this = (EquipGraphListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v57, 0);
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
      lv = v39->fields.lv;
      this = (EquipGraphListViewItem_o *)v39;
      break;
    default:
      return (char)this;
  }
  this = (EquipGraphListViewItem_o *)UserServantEntity__getLevelMax((UserServantEntity_o *)this, 0);
  if ( !iconLabelInfo2 )
LABEL_123:
    sub_1CE6958(this, sort);
  IconLabelInfo__Set_42060700(iconLabelInfo2, 2, lv, (int32_t)this, 0, 0, 0, 0, 0, 0);
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
  System_String_o *v7; // x7
  PartyListViewItem_o *v9; // x24
  PartyListViewItem_array *v10; // x26
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  void *questRestrictionInfo; // x0
  __int64 v21; // x1
  bool v22; // w8
  il2cpp_array_size_t max_length; // x8
  int v24; // w22
  int32_t v25; // w21
  PartyListViewItem_o *v26; // x25
  int32_t i; // w26
  PartyOrganizationListViewItem_o *v28; // x27
  struct UserServantEntity_o *v29; // x24
  const MethodInfo *v30; // x4
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v31; // kr00_16
  struct UserServantEntity_o *v32; // x28
  int64_t v33; // x27
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v35; // q0
  int64_t v36; // x0
  System_Collections_Generic_Dictionary_int__int__o *WearerMember; // x0
  int32_t v38; // w2
  int32_t v39; // w3
  System_String_o *v40; // x4
  int32_t v41; // w5
  int64_t v42; // x6
  System_String_o *v43; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o EquipSvtId; // kr10_16
  struct UserServantEntity_o *v45; // x8
  int v46; // w21
  struct UserServantEntity_o *v47; // x8
  __int64 v48; // x21
  __int64 v49; // x22
  int32_t v50; // w0
  struct UserServantEntity_o *v51; // x8
  __int64 v52; // x21
  __int64 v53; // x22
  int32_t v54; // w0
  EquipGraphListViewItem_o *v55; // x8
  PartyOrganizationListViewItem_o *v56; // x20
  int32_t BaseServantId; // w0
  struct UserServantEntity_o *v58; // x8
  __int128 v59; // q0
  int64_t v60; // x0
  BalanceConfig_c *v61; // x8
  int64_t v62; // x20
  System_Collections_Generic_Dictionary_int__int__o *v63; // x0
  int32_t v64; // w2
  int32_t v65; // w3
  System_String_o *v66; // x4
  int32_t v67; // w5
  int64_t v68; // x6
  System_String_o *v69; // x7
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *v70; // x0
  int32_t v71; // w0
  PartyOrganizationListViewItem_o *v72; // x0
  int32_t v73; // w2
  int32_t v74; // w3
  System_String_o *v75; // x4
  int32_t v76; // w5
  int64_t v77; // x6
  System_String_o *v78; // x7
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  int32_t v80; // w0
  PartyOrganizationListViewItem_o *Member; // x0
  int32_t v82; // w2
  int32_t v83; // w3
  System_String_o *v84; // x4
  int32_t v85; // w5
  int64_t v86; // x6
  System_String_o *v87; // x7
  PartyListViewItem_array *v88; // [xsp+10h] [xbp-100h]
  PartyListViewItem_o *v89; // [xsp+18h] [xbp-F8h]
  GrandQuestFolderBoardItem_o *v90; // [xsp+20h] [xbp-F0h]
  GrandQuestFolderBoardItem_o *v91; // [xsp+28h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v92; // [xsp+30h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v93; // [xsp+50h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v94; // [xsp+70h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v95; // [xsp+90h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v96; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v97; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v98; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v99; // 0:x2.16

  v9 = partyItem;
  v10 = baseDeckItemList;
  if ( (byte_4E03ECF & 1) == 0 )
  {
    sub_1CE6700(&BalanceConfig_TypeInfo);
    sub_1CE6700(&Method_System_Collections_Generic_Dictionary_int__int__get_Keys__);
    sub_1CE6700(&Method_System_Linq_Enumerable_FirstOrDefault_int___);
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4E03ECF = 1;
  }
  *equippedMemberItem = 0;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)equippedMemberItem,
    0,
    (int32_t)equippedMemberDic,
    (int32_t)baseDeckItemList,
    (System_String_o *)partyItem,
    memberIdx,
    (int64_t)method,
    v7);
  *equippedMemberDic = 0;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)equippedMemberDic, 0, v14, v15, v16, v17, v18, v19);
  if ( !v9 )
    goto LABEL_74;
  questRestrictionInfo = v9->fields.questRestrictionInfo;
  if ( questRestrictionInfo )
  {
    questRestrictionInfo = (void *)QuestRestrictionInfo__IsWaveSetupSwitchParty(
                                     (QuestRestrictionInfo_o *)questRestrictionInfo,
                                     0);
    v22 = (unsigned __int8)questRestrictionInfo & 1;
    if ( !this )
      goto LABEL_74;
  }
  else
  {
    v22 = 0;
    if ( !this )
      goto LABEL_74;
  }
  v90 = (GrandQuestFolderBoardItem_o *)equippedMemberItem;
  v91 = (GrandQuestFolderBoardItem_o *)equippedMemberDic;
  this->fields._IsWaveSetupSwitchParty_k__BackingField = v22;
  if ( !v10 )
    goto LABEL_74;
  max_length = v10->max_length;
  this->fields._MaxWave_k__BackingField = max_length;
  if ( (int)max_length < 1 )
  {
LABEL_37:
    userSvtEntity = this->fields.userSvtEntity;
    if ( !userSvtEntity )
      goto LABEL_74;
    v35 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
    *(_OWORD *)&v95.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v95.fields.fakeValue = v35;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v92 = v95;
    v36 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50041532(&v92, 0);
    WearerMember = PartyListViewItem__GetWearerMember(v9, v36, memberIdx, 0, 0);
    v91->klass = (GrandQuestFolderBoardItem_c *)WearerMember;
    sub_1CE66A4(v91, (int32_t)WearerMember, v38, v39, v40, v41, v42, v43);
    if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v91->klass, 0) )
    {
      if ( !this->fields._IsUnique_k__BackingField )
      {
        questRestrictionInfo = PartyListViewItem__GetMember(v9, memberIdx, 0);
        if ( !questRestrictionInfo )
          goto LABEL_74;
        EquipSvtId = PartyOrganizationListViewItem__get_EquipSvtId(
                       (PartyOrganizationListViewItem_o *)questRestrictionInfo,
                       0);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        questRestrictionInfo = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(
                                         EquipSvtId,
                                         0);
        v45 = this->fields.userSvtEntity;
        if ( !v45 )
          goto LABEL_74;
        v46 = (int)questRestrictionInfo;
        questRestrictionInfo = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(
                                         v45->fields.svtId,
                                         0);
        if ( v46 != (_DWORD)questRestrictionInfo )
        {
          v47 = this->fields.userSvtEntity;
          if ( !v47 )
            goto LABEL_74;
          v49 = *(_QWORD *)&v47->fields.svtId.fields.currentCryptoKey;
          v48 = *(_QWORD *)&v47->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v97.fields.currentCryptoKey = v49;
          *(_QWORD *)&v97.fields.fakeValue = v48;
          v50 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v97, 0);
          questRestrictionInfo = (void *)PartyListViewItem__IsIdenticalEquipMember(v9, v50, 0);
          this->fields._IsUnique_k__BackingField = (unsigned __int8)questRestrictionInfo & 1;
          if ( ((unsigned __int8)questRestrictionInfo & 1) != 0 )
          {
            v51 = this->fields.userSvtEntity;
            if ( !v51 )
              goto LABEL_74;
            v53 = *(_QWORD *)&v51->fields.svtId.fields.currentCryptoKey;
            v52 = *(_QWORD *)&v51->fields.svtId.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v98.fields.currentCryptoKey = v53;
            *(_QWORD *)&v98.fields.fakeValue = v52;
            v54 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v98, 0);
            questRestrictionInfo = PartyListViewItem__GetUseIdenticalEquipServant(v9, v54, 0);
            if ( questRestrictionInfo )
              v55 = 0;
            else
              v55 = this;
            if ( questRestrictionInfo )
            {
              v56 = (PartyOrganizationListViewItem_o *)questRestrictionInfo;
              this->fields._EquipUseServantId_k__BackingField = PartyOrganizationListViewItem__get_ServantId(
                                                                  (PartyOrganizationListViewItem_o *)questRestrictionInfo,
                                                                  0);
              BaseServantId = PartyOrganizationListViewItem__get_BaseServantId(v56, 0);
            }
            else
            {
              if ( !v55 )
                goto LABEL_74;
              BaseServantId = 0;
              v55->fields._EquipUseServantId_k__BackingField = 0;
            }
            this->fields._EquipUseBaseServantId_k__BackingField = BaseServantId;
          }
        }
      }
    }
    else
    {
      questRestrictionInfo = v91->klass;
      if ( !v91->klass )
        goto LABEL_74;
      Keys = System_Collections_Generic_Dictionary_int__int___get_Keys(
               (System_Collections_Generic_Dictionary_int__int__o *)questRestrictionInfo,
               (const MethodInfo_35526F0 *)Method_System_Collections_Generic_Dictionary_int__int__get_Keys__);
      v80 = System_Linq_Enumerable__FirstOrDefault_int_(
              (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
              (const MethodInfo_322B954 *)Method_System_Linq_Enumerable_FirstOrDefault_int___);
      Member = PartyListViewItem__GetMember(v9, v80, 0);
      v90->klass = (GrandQuestFolderBoardItem_c *)Member;
      sub_1CE66A4(v90, (int32_t)Member, v82, v83, v84, v85, v86, v87);
    }
  }
  else
  {
    v24 = 0;
    v25 = 1;
    v88 = v10;
    v89 = v9;
    while ( 1 )
    {
      if ( v24 >= (unsigned int)max_length )
LABEL_75:
        sub_1CE6960(questRestrictionInfo);
      v26 = v10->m_Items[v24];
      if ( !v26 )
        goto LABEL_74;
      if ( v9->fields.index != v26->fields.index )
        break;
LABEL_36:
      ++v24;
      ++v25;
      if ( v24 >= (int)max_length )
        goto LABEL_37;
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
        v10 = v88;
        v9 = v89;
        max_length = v88->max_length;
        goto LABEL_36;
      }
      questRestrictionInfo = PartyListViewItem__GetMember(v26, i, 0);
      if ( !questRestrictionInfo )
        goto LABEL_74;
      v28 = (PartyOrganizationListViewItem_o *)questRestrictionInfo;
      questRestrictionInfo = PartyOrganizationListViewItem__GetEquipList(
                               (PartyOrganizationListViewItem_o *)questRestrictionInfo,
                               0);
      if ( !questRestrictionInfo )
        goto LABEL_74;
      if ( !*((_DWORD *)questRestrictionInfo + 6) )
        goto LABEL_75;
      if ( *((__int64 *)questRestrictionInfo + 4) >= 1 )
      {
        if ( !this->fields._IsUnique_k__BackingField )
        {
          v29 = this->fields.userSvtEntity;
          if ( !v29 )
            goto LABEL_74;
          v31 = PartyOrganizationListViewItem__get_EquipSvtId(v28, 0);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v96.fields.currentCryptoKey = &v29->fields.svtId;
          *(_QWORD *)&v96.fields.fakeValue = *(_QWORD *)&v31.fields.currentCryptoKey;
          *(_QWORD *)&v99.fields.currentCryptoKey = *(_QWORD *)&v31.fields.fakeValue;
          *(_QWORD *)&v99.fields.fakeValue = 0;
          questRestrictionInfo = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__Equals_50039156(v96, v99, v30);
          this->fields._IsUnique_k__BackingField = (unsigned __int8)questRestrictionInfo & 1;
          if ( ((unsigned __int8)questRestrictionInfo & 1) != 0 )
          {
            this->fields._EquipUseServantId_k__BackingField = PartyOrganizationListViewItem__get_ServantId(v28, 0);
            questRestrictionInfo = (void *)PartyOrganizationListViewItem__get_BaseServantId(v28, 0);
            this->fields._EquipUseBaseServantId_k__BackingField = (int)questRestrictionInfo;
            this->fields._UniqueOrganizedWave_k__BackingField = v25;
            this->fields._IsClearedWave_k__BackingField = v26->fields._IsClearedWave_k__BackingField;
          }
        }
        v32 = this->fields.userSvtEntity;
        if ( !v32 )
          goto LABEL_74;
        questRestrictionInfo = PartyOrganizationListViewItem__GetEquipList(v28, 0);
        if ( !questRestrictionInfo )
          goto LABEL_74;
        if ( !*((_DWORD *)questRestrictionInfo + 6) )
          goto LABEL_75;
        v33 = *((_QWORD *)questRestrictionInfo + 4);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v95, v33, 0);
        v94 = v95;
        questRestrictionInfo = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__Equals_50042080(
                                         &v32->fields.id,
                                         &v94,
                                         0);
        if ( ((unsigned __int8)questRestrictionInfo & 1) != 0 )
          break;
      }
    }
    v58 = this->fields.userSvtEntity;
    if ( !v58 )
      goto LABEL_74;
    v59 = *(_OWORD *)&v58->fields.id.fields.fakeValue;
    *(_OWORD *)&v95.fields.currentCryptoKey = *(_OWORD *)&v58->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v95.fields.fakeValue = v59;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v93 = v95;
    v60 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50041532(&v93, 0);
    v61 = BalanceConfig_TypeInfo;
    v62 = v60;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v61 = BalanceConfig_TypeInfo;
    }
    v63 = PartyListViewItem__GetWearerMember(v26, v62, v61->static_fields->DeckMainMemberMax + 1, 0, 0);
    v91->klass = (GrandQuestFolderBoardItem_c *)v63;
    sub_1CE66A4(v91, (int32_t)v63, v64, v65, v66, v67, v68, v69);
    if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v91->klass, 0) )
    {
      questRestrictionInfo = v91->klass;
      if ( v91->klass )
      {
        v70 = System_Collections_Generic_Dictionary_int__int___get_Keys(
                (System_Collections_Generic_Dictionary_int__int__o *)questRestrictionInfo,
                (const MethodInfo_35526F0 *)Method_System_Collections_Generic_Dictionary_int__int__get_Keys__);
        v71 = System_Linq_Enumerable__FirstOrDefault_int_(
                (System_Collections_Generic_IEnumerable_TSource__o *)v70,
                (const MethodInfo_322B954 *)Method_System_Linq_Enumerable_FirstOrDefault_int___);
        v72 = PartyListViewItem__GetMember(v26, v71, 0);
        v90->klass = (GrandQuestFolderBoardItem_c *)v72;
        sub_1CE66A4(v90, (int32_t)v72, v73, v74, v75, v76, v77, v78);
        goto LABEL_67;
      }
LABEL_74:
      sub_1CE6958(questRestrictionInfo, v21);
    }
LABEL_67:
    this->fields._OrganizedWave_k__BackingField = v25;
    this->fields._IsClearedWave_k__BackingField = v26->fields._IsClearedWave_k__BackingField;
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
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  const MethodInfo *v18; // x6
  struct System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo__o *wearerMemberInfoList; // x8
  int32_t size; // w2
  int v21; // w9
  System_Collections_Generic_IEnumerable_T__o *v22; // x19
  System_Action_KeyValuePair_int__int___o *v23; // x20
  System_Collections_Generic_Dictionary_int__int__o *equippedMemberDic; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4E03ED0 & 1) == 0 )
  {
    sub_1CE6700(&System_Action_KeyValuePair_int__int___TypeInfo);
    sub_1CE6700(&Method_BasicHelper_ForEach_KeyValuePair_int__int____);
    sub_1CE6700(&Method_System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo__Clear__);
    sub_1CE6700(&Method_EquipGraphListViewItem___c__DisplayClass79_0__UpdateWaveBattleInfo_b__0__);
    sub_1CE6700(&EquipGraphListViewItem___c__DisplayClass79_0_TypeInfo);
    byte_4E03ED0 = 1;
  }
  equippedMemberDic = 0;
  v9 = sub_1CE694C(EquipGraphListViewItem___c__DisplayClass79_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9
    || (*(_QWORD *)(v9 + 16) = this,
        sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v9 + 16), (int32_t)this, v12, v13, v14, v15, v16, v17),
        wearerMemberInfoList = this->fields.wearerMemberInfoList,
        this->fields._OrganizedWave_k__BackingField = 0,
        this->fields._UniqueOrganizedWave_k__BackingField = 0,
        this->fields._IsUnique_k__BackingField = 0,
        !wearerMemberInfoList) )
  {
    sub_1CE6958(v10, v11);
  }
  size = wearerMemberInfoList->fields._size;
  v21 = wearerMemberInfoList->fields._version + 1;
  wearerMemberInfoList->fields._size = 0;
  wearerMemberInfoList->fields._version = v21;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)wearerMemberInfoList->fields._items, 0, size, 0);
  EquipGraphListViewItem__SetWaveBattleInfo(
    this,
    (PartyOrganizationListViewItem_o **)(v9 + 24),
    &equippedMemberDic,
    baseDeckItemList,
    partyItem,
    memberIdx,
    v18);
  if ( *(_QWORD *)(v9 + 24) )
  {
    v22 = (System_Collections_Generic_IEnumerable_T__o *)equippedMemberDic;
    v23 = (System_Action_KeyValuePair_int__int___o *)sub_1CE694C(System_Action_KeyValuePair_int__int___TypeInfo);
    System_Action_KeyValuePair_int__int_____ctor(
      v23,
      (Il2CppObject *)v9,
      Method_EquipGraphListViewItem___c__DisplayClass79_0__UpdateWaveBattleInfo_b__0__,
      0);
    BasicHelper__ForEach_KeyValuePair_int__int__(
      v22,
      (System_Action_T__o *)v23,
      (const MethodInfo_31EE290 *)Method_BasicHelper_ForEach_KeyValuePair_int__int____);
  }
}


bool EquipGraphListViewItem___SetSortValue_b__86_0(
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

  if ( (byte_4E03ED6 & 1) == 0 )
  {
    sub_1CE6700(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_1CE6700(&DataManager_TypeInfo);
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1CE6700(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4E03ED6 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_EventCampaignMaster___);
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
  Master_object = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v15, 0);
  if ( !entity || !v8 )
    goto LABEL_15;
  if ( EventCampaignMaster__IsEnableServant(v8, (int32_t)Master_object, entity->fields.eventId, 0) )
    return 1;
  v12 = this->fields.userSvtEntity;
  setupInfo = this->fields.setupInfo;
  eventId = entity->fields.eventId;
  Master_object = SingletonTemplate_object___get_Instance((const MethodInfo_3B55234 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Master_object || !v12 )
LABEL_15:
    sub_1CE6958(Master_object, v6);
  return UserServantEntity__getEventUpVal(v12, setupInfo, eventId, (int64_t)Master_object[8].monitor, 0);
}


bool EquipGraphListViewItem___SetSortValue_b__86_1(
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

  if ( (byte_4E03ED7 & 1) == 0 )
  {
    sub_1CE6700(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_1CE6700(&DataManager_TypeInfo);
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1CE6700(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4E03ED7 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_EventCampaignMaster___);
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
  Master_object = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v15, 0);
  if ( !entity || !v8 )
    goto LABEL_15;
  if ( EventCampaignMaster__IsEnableServant(v8, (int32_t)Master_object, entity->fields.eventId, 0) )
    return 1;
  v12 = this->fields.userSvtEntity;
  setupInfo = this->fields.setupInfo;
  eventId = entity->fields.eventId;
  Master_object = SingletonTemplate_object___get_Instance((const MethodInfo_3B55234 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Master_object || !v12 )
LABEL_15:
    sub_1CE6958(Master_object, v6);
  return UserServantEntity__getEventUpVal(v12, setupInfo, eventId, (int64_t)Master_object[8].monitor, 0);
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


int32_t EquipGraphListViewItem__get_EquipUseBaseServantId(EquipGraphListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._EquipUseBaseServantId_k__BackingField;
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
  if ( (byte_4E03ED4 & 1) == 0 )
  {
    this = (EquipGraphListViewItem_o *)sub_1CE6700(&Method_System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo__get_Count__);
    byte_4E03ED4 = 1;
  }
  wearerMemberInfoList = v2->fields.wearerMemberInfoList;
  if ( !wearerMemberInfoList )
    sub_1CE6958(this, method);
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

  if ( (byte_4E03ED3 & 1) == 0 )
  {
    sub_1CE6700(&LocalizationManager_TypeInfo);
    byte_4E03ED3 = 1;
  }
  servantEntity = this->fields.servantEntity;
  if ( servantEntity )
    return ServantEntity__getName(servantEntity, -1, -1, 0, 0, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !byte_4DFFD2D )
  {
    sub_1CE6700(&LocalizationManager_TypeInfo);
    byte_4DFFD2D = 1;
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


void EquipGraphListViewItem__set_EquipUseBaseServantId(
        EquipGraphListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._EquipUseBaseServantId_k__BackingField = value;
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
  struct System_String_o *ServantNameUseCommonName; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  int classId; // w8
  struct System_String_o *monitor; // x1
  LocalizationManager_c *v29; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4E03ED8 & 1) == 0 )
  {
    sub_1CE6700(&Method_DataManager_GetMaster_ServantClassMaster___);
    sub_1CE6700(&DataManager_TypeInfo);
    sub_1CE6700(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
    sub_1CE6700(&LocalizationManager_TypeInfo);
    byte_4E03ED8 = 1;
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
    goto LABEL_22;
  ServantNameUseCommonName = PartyOrganizationListViewItem__get_ServantNameUseCommonName(wearerMemberItem, 0);
  this->fields._WearerServantName_k__BackingField = ServantNameUseCommonName;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields._WearerServantName_k__BackingField,
    (int32_t)ServantNameUseCommonName,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  classId = wearerMemberItem->fields.classId;
  this->fields._WearerClassId_k__BackingField = classId;
  this->fields._WearerSvtRarity_k__BackingField = wearerMemberItem->fields.rarityId;
  if ( classId >= 1 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_ServantClassMaster___);
    if ( !Master_object )
      goto LABEL_22;
    Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                      &entity,
                                      this->fields._WearerClassId_k__BackingField,
                                      (const MethodInfo_34E92A8 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Master_object & 1) != 0 )
    {
      if ( entity )
      {
        monitor = (struct System_String_o *)entity[1].monitor;
        goto LABEL_21;
      }
LABEL_22:
      sub_1CE6958(Master_object, v12);
    }
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !byte_4DFFD2D )
  {
    sub_1CE6700(&LocalizationManager_TypeInfo);
    byte_4DFFD2D = 1;
  }
  v29 = LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v29 = LocalizationManager_TypeInfo;
  }
  monitor = v29->static_fields->unknownNameText;
LABEL_21:
  this->fields._WearerServantClassName_k__BackingField = monitor;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields._WearerServantClassName_k__BackingField,
    (int32_t)monitor,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
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


int32_t EquipGraphListViewItem_WearerMemberInfo__get_WearerSvtRarity(
        EquipGraphListViewItem_WearerMemberInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._WearerSvtRarity_k__BackingField;
}


void EquipGraphListViewItem___c__DisplayClass76_0___ctor(
        EquipGraphListViewItem___c__DisplayClass76_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EquipGraphListViewItem___c__DisplayClass76_0____ctor_b__1(
        EquipGraphListViewItem___c__DisplayClass76_0_o *this,
        System_Collections_Generic_KeyValuePair_int__int__o x,
        const MethodInfo *method)
{
  EquipGraphListViewItem___c__DisplayClass76_0_o *v4; // x21
  struct EquipGraphListViewItem_o *_4__this; // x8
  System_Collections_Generic_List_object__o *wearerMemberInfoList; // x20
  struct EquipGraphListViewItem_o *v7; // x8
  EquipGraphListViewItem___c__DisplayClass76_0_o *v8; // x22
  ServantEntity_o *servantEntity; // x23
  EquipGraphListViewItem_WearerMemberInfo_o *v10; // x21
  const MethodInfo *v11; // x5
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0

  v4 = this;
  if ( (byte_4E03ED9 & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Key__);
    sub_1CE6700(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Value__);
    sub_1CE6700(&Method_System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo__Add__);
    this = (EquipGraphListViewItem___c__DisplayClass76_0_o *)sub_1CE6700(&EquipGraphListViewItem_WearerMemberInfo_TypeInfo);
    byte_4E03ED9 = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  this = (EquipGraphListViewItem___c__DisplayClass76_0_o *)v4->fields.partyItem;
  if ( !this )
    goto LABEL_11;
  wearerMemberInfoList = (System_Collections_Generic_List_object__o *)_4__this->fields.wearerMemberInfoList;
  this = (EquipGraphListViewItem___c__DisplayClass76_0_o *)PartyListViewItem__GetMember(
                                                             (PartyListViewItem_o *)this,
                                                             x.fields.key,
                                                             0);
  v7 = v4->fields.__4__this;
  if ( !v7
    || (v8 = this,
        servantEntity = v7->fields.servantEntity,
        v10 = (EquipGraphListViewItem_WearerMemberInfo_o *)sub_1CE694C(EquipGraphListViewItem_WearerMemberInfo_TypeInfo),
        EquipGraphListViewItem_WearerMemberInfo___ctor(
          v10,
          x.fields.key,
          x.fields.value,
          (PartyOrganizationListViewItem_o *)v8,
          servantEntity,
          v11),
        !wearerMemberInfoList)
    || (items = wearerMemberInfoList->fields._items,
        v19 = Method_System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo__Add__,
        ++wearerMemberInfoList->fields._version,
        !items) )
  {
LABEL_11:
    ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_1CE6958)(this, x);
  }
  size = wearerMemberInfoList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      wearerMemberInfoList,
      (Il2CppObject *)v10,
      *(const MethodInfo_3905F68 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
  }
  else
  {
    v21 = &items->obj.klass + size;
    wearerMemberInfoList->fields._size = size + 1;
    v21[4] = (Il2CppClass *)v10;
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v21 + 4), (int32_t)v10, v12, v13, v14, v15, v16, v17);
  }
}


void EquipGraphListViewItem___c__DisplayClass76_1___ctor(
        EquipGraphListViewItem___c__DisplayClass76_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EquipGraphListViewItem___c__DisplayClass76_1____ctor_b__0(
        EquipGraphListViewItem___c__DisplayClass76_1_o *this,
        System_Collections_Generic_KeyValuePair_int__int__o x,
        const MethodInfo *method)
{
  EquipGraphListViewItem___c__DisplayClass76_1_o *v4; // x21
  struct EquipGraphListViewItem___c__DisplayClass76_0_o *CS___8__locals1; // x8
  struct EquipGraphListViewItem_o *_4__this; // x8
  System_Collections_Generic_List_object__o *wearerMemberInfoList; // x20
  PartyOrganizationListViewItem_o *wearerMemberItem; // x22
  ServantEntity_o *servantEntity; // x23
  EquipGraphListViewItem_WearerMemberInfo_o *v10; // x21
  const MethodInfo *v11; // x5
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0

  v4 = this;
  if ( (byte_4E03EDA & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Key__);
    sub_1CE6700(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Value__);
    sub_1CE6700(&Method_System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo__Add__);
    this = (EquipGraphListViewItem___c__DisplayClass76_1_o *)sub_1CE6700(&EquipGraphListViewItem_WearerMemberInfo_TypeInfo);
    byte_4E03EDA = 1;
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
  v10 = (EquipGraphListViewItem_WearerMemberInfo_o *)sub_1CE694C(EquipGraphListViewItem_WearerMemberInfo_TypeInfo);
  EquipGraphListViewItem_WearerMemberInfo___ctor(
    v10,
    x.fields.key,
    x.fields.value,
    wearerMemberItem,
    servantEntity,
    v11);
  if ( !wearerMemberInfoList
    || (items = wearerMemberInfoList->fields._items,
        v19 = Method_System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo__Add__,
        ++wearerMemberInfoList->fields._version,
        !items) )
  {
LABEL_10:
    ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_1CE6958)(this, x);
  }
  size = wearerMemberInfoList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      wearerMemberInfoList,
      (Il2CppObject *)v10,
      *(const MethodInfo_3905F68 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
  }
  else
  {
    v21 = &items->obj.klass + size;
    wearerMemberInfoList->fields._size = size + 1;
    v21[4] = (Il2CppClass *)v10;
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v21 + 4), (int32_t)v10, v12, v13, v14, v15, v16, v17);
  }
}


void EquipGraphListViewItem___c__DisplayClass79_0___ctor(
        EquipGraphListViewItem___c__DisplayClass79_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EquipGraphListViewItem___c__DisplayClass79_0___UpdateWaveBattleInfo_b__0(
        EquipGraphListViewItem___c__DisplayClass79_0_o *this,
        System_Collections_Generic_KeyValuePair_int__int__o x,
        const MethodInfo *method)
{
  EquipGraphListViewItem___c__DisplayClass79_0_o *v4; // x21
  struct EquipGraphListViewItem_o *_4__this; // x8
  System_Collections_Generic_List_object__o *wearerMemberInfoList; // x20
  PartyOrganizationListViewItem_o *equippedMemberItem; // x22
  ServantEntity_o *servantEntity; // x23
  EquipGraphListViewItem_WearerMemberInfo_o *v9; // x21
  const MethodInfo *v10; // x5
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0

  v4 = this;
  if ( (byte_4E03EDB & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Key__);
    sub_1CE6700(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Value__);
    sub_1CE6700(&Method_System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo__Add__);
    this = (EquipGraphListViewItem___c__DisplayClass79_0_o *)sub_1CE6700(&EquipGraphListViewItem_WearerMemberInfo_TypeInfo);
    byte_4E03EDB = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_9;
  wearerMemberInfoList = (System_Collections_Generic_List_object__o *)_4__this->fields.wearerMemberInfoList;
  equippedMemberItem = v4->fields.equippedMemberItem;
  servantEntity = _4__this->fields.servantEntity;
  v9 = (EquipGraphListViewItem_WearerMemberInfo_o *)sub_1CE694C(EquipGraphListViewItem_WearerMemberInfo_TypeInfo);
  EquipGraphListViewItem_WearerMemberInfo___ctor(
    v9,
    x.fields.key,
    x.fields.value,
    equippedMemberItem,
    servantEntity,
    v10);
  if ( !wearerMemberInfoList
    || (items = wearerMemberInfoList->fields._items,
        v18 = Method_System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo__Add__,
        ++wearerMemberInfoList->fields._version,
        !items) )
  {
LABEL_9:
    ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_1CE6958)(this, x);
  }
  size = wearerMemberInfoList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      wearerMemberInfoList,
      (Il2CppObject *)v9,
      *(const MethodInfo_3905F68 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
  }
  else
  {
    v20 = &items->obj.klass + size;
    wearerMemberInfoList->fields._size = size + 1;
    v20[4] = (Il2CppClass *)v9;
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v20 + 4), (int32_t)v9, v11, v12, v13, v14, v15, v16);
  }
}