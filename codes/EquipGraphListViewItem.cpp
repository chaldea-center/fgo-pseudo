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
  IconLabelInfo_o *v16; // x20
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  IconLabelInfo_o *v23; // x23
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  __int64 v30; // x26
  int64_t Instance; // x0
  const MethodInfo *v32; // x1
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  PartyListViewItem_o **v39; // x23
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_userSvtEntity; // x21
  System_String_o *v47; // x2
  System_String_o *v48; // x3
  int32_t v49; // w4
  int32_t v50; // w5
  bool v51; // w6
  bool v52; // w7
  System_String_o *v53; // x2
  System_String_o *v54; // x3
  int32_t v55; // w4
  int32_t v56; // w5
  bool v57; // w6
  bool v58; // w7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v59; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v60; // x28
  __int64 v61; // x24
  __int64 v62; // x29
  Il2CppObject *Entity; // x0
  struct ServantEntity_o **p_servantEntity; // x28
  System_String_o *v65; // x2
  System_String_o *v66; // x3
  int32_t v67; // w4
  int32_t v68; // w5
  bool v69; // w6
  bool v70; // w7
  __int128 v71; // q1
  PartyListViewItem_o *v72; // x29
  PartyOrganizationListViewItem_o *UseEquipServant; // x0
  PartyOrganizationListViewItem_o *v74; // x24
  System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo__c *v75; // x8
  System_Collections_Generic_List_object__o *v76; // x24
  System_String_o *v77; // x2
  System_String_o *v78; // x3
  int32_t v79; // w4
  int32_t v80; // w5
  bool v81; // w6
  bool v82; // w7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v83; // x8
  ServantLimitMaster_o *v84; // x29
  __int64 v85; // x24
  __int64 v86; // x27
  int32_t v87; // w24
  int32_t v88; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c *v89; // x0
  __int128 v90; // q1
  int v91; // w8
  bool v92; // w8
  PartyOrganizationListViewItem_o *v93; // x27
  int32_t EquipUseBaseServantId_k__BackingField; // w20
  __int128 v95; // q1
  int v96; // w8
  int64_t v97; // x0
  struct System_String_o *EquipFrameName; // x0
  System_String_o *v99; // x2
  System_String_o *v100; // x3
  int32_t v101; // w4
  int32_t v102; // w5
  bool v103; // w6
  bool v104; // w7
  PartyListViewItem_o *v105; // x27
  __int64 v106; // x25
  System_String_o *v107; // x2
  System_String_o *v108; // x3
  int32_t v109; // w4
  int32_t v110; // w5
  bool v111; // w6
  bool v112; // w7
  const MethodInfo *v113; // x6
  __int64 v114; // x8
  int64_t *v115; // x26
  System_Collections_Generic_IEnumerable_T__o *v116; // x24
  System_Action_KeyValuePair_int__int___o *v117; // x27
  __int128 v118; // q1
  int v119; // w8
  int64_t v120; // x0
  System_Collections_Generic_IEnumerable_T__o *WearerMember; // x24
  System_Action_KeyValuePair_int__int___o *v122; // x25
  bool IsLock; // w8
  bool IsChoice; // w8
  bool IsFriendShipSvtEquip; // w8
  bool IsChocolateSvtEquip; // w0
  _BOOL4 isBase; // w8
  bool v128; // w0
  bool v129; // w8
  int32_t EventId; // w24
  bool v131; // w8
  PartyOrganizationListViewItem_o *Member; // x23
  struct UserServantEntity_o *userServantEntity; // x8
  PartyOrganizationUtility_o *v134; // x22
  __int64 v135; // x25
  __int64 v136; // x26
  UserServantEntity_o *v137; // x8
  int32_t v138; // w23
  int32_t v139; // w25
  struct ServantEntity_o *servantEntity; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v141; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c *v142; // x0
  struct System_Int32_array *EquipCategoryIdList; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v144; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v145; // q1
  int v146; // w8
  System_String_o *v147; // x2
  System_String_o *v148; // x3
  int32_t v149; // w4
  int32_t v150; // w5
  bool v151; // w6
  bool v152; // w7
  MissionNaviTransitionBoardItem_o *p_categoryIdList; // x19
  struct IconLabelInfo_o **p_iconLabelInfo2; // [xsp+18h] [xbp-158h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v158; // [xsp+30h] [xbp-140h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v159; // [xsp+50h] [xbp-120h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v160; // [xsp+70h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v161; // [xsp+90h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v162; // [xsp+B0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v163; // [xsp+D0h] [xbp-A0h]
  int32_t actMaxRarity; // [xsp+FCh] [xbp-74h] BYREF
  System_String_o *skillName; // [xsp+100h] [xbp-70h] BYREF
  System_Collections_Generic_Dictionary_int__int__o *equippedMemberDic; // [xsp+108h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v167; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v168; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v169; // 0:x0.16

  if ( (byte_596FC4D & 1) == 0 )
  {
    sub_2213A60(&System_Action_KeyValuePair_int__int___TypeInfo);
    sub_2213A60(&Method_BasicHelper_ForEach_KeyValuePair_int__int____);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_2213A60(&IconLabelInfo_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo___ctor__);
    sub_2213A60(&System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo__TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_2213A60(&Method_EquipGraphListViewItem___c__DisplayClass76_0___ctor_b__1__);
    sub_2213A60(&EquipGraphListViewItem___c__DisplayClass76_0_TypeInfo);
    sub_2213A60(&Method_EquipGraphListViewItem___c__DisplayClass76_1___ctor_b__0__);
    sub_2213A60(&EquipGraphListViewItem___c__DisplayClass76_1_TypeInfo);
    byte_596FC4D = 1;
  }
  skillName = 0;
  equippedMemberDic = 0;
  actMaxRarity = 0;
  v16 = (IconLabelInfo_o *)sub_2213CCC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v16, 0);
  this->fields.iconLabelInfo1 = v16;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.iconLabelInfo1,
    (int32_t)v16,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  v23 = (IconLabelInfo_o *)sub_2213CCC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v23, 0);
  this->fields.iconLabelInfo2 = v23;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.iconLabelInfo2,
    (int32_t)v23,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  v30 = sub_2213CCC(EquipGraphListViewItem___c__DisplayClass76_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v30, 0);
  if ( !v30 )
    goto LABEL_77;
  *(_QWORD *)(v30 + 24) = partyItem;
  v39 = (PartyListViewItem_o **)(v30 + 24);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v30 + 24), (int32_t)partyItem, v33, v34, v35, v36, v37, v38);
  ListViewItem___ctor_50819428((ListViewItem_o *)this, index, 0);
  *(_QWORD *)(v30 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v30 + 16), (int32_t)this, v40, v41, v42, v43, v44, v45);
  this->fields.userSvtEntity = userSvtEntity;
  p_userSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userSvtEntity;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.userSvtEntity,
    (int32_t)userSvtEntity,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52);
  this->fields.setupInfo = setupInfo;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.setupInfo,
    (int32_t)setupInfo,
    v53,
    v54,
    v55,
    v56,
    v57,
    v58);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_77;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantMaster___);
  v59 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_77;
  v60 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v61 = *(_QWORD *)&v59[5].fields.currentCryptoKey;
  v62 = *(_QWORD *)&v59[5].fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v32);
  *(_QWORD *)&v167.fields.currentCryptoKey = v61;
  *(_QWORD *)&v167.fields.fakeValue = v62;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v167, 0);
  if ( !v60 )
    goto LABEL_77;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v60,
             Instance,
             (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)Entity;
  p_servantEntity = &this->fields.servantEntity;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.servantEntity,
    (int32_t)Entity,
    v65,
    v66,
    v67,
    v68,
    v69,
    v70);
  this->fields._EquipType_k__BackingField = type;
  this->fields._MemberIndex_k__BackingField = memberIdx;
  if ( !userSvtEntity )
    goto LABEL_77;
  v71 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  v72 = *v39;
  *(_OWORD *)&v163.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v163.fields.fakeValue = v71;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v32);
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  v162 = v163;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v162, 0);
  if ( !v72 )
    goto LABEL_77;
  UseEquipServant = PartyListViewItem__GetUseEquipServant(v72, Instance, 0);
  if ( UseEquipServant )
  {
    v74 = UseEquipServant;
    this->fields._EquipUseServantId_k__BackingField = PartyOrganizationListViewItem__get_ServantId(UseEquipServant, 0);
    LODWORD(UseEquipServant) = PartyOrganizationListViewItem__get_BaseServantId(v74, 0);
  }
  else
  {
    this->fields._EquipUseServantId_k__BackingField = 0;
  }
  v75 = System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo__TypeInfo;
  this->fields._EquipUseBaseServantId_k__BackingField = (int)UseEquipServant;
  v76 = (System_Collections_Generic_List_object__o *)sub_2213CCC(v75);
  System_Collections_Generic_List_object____ctor(
    v76,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo___ctor__);
  this->fields.wearerMemberInfoList = (struct System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo__o *)v76;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.wearerMemberInfoList,
    (int32_t)v76,
    v77,
    v78,
    v79,
    v80,
    v81,
    v82);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_77;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v83 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_77;
  v84 = (ServantLimitMaster_o *)Instance;
  v85 = *(_QWORD *)&v83[5].fields.currentCryptoKey;
  v86 = *(_QWORD *)&v83[5].fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v32);
  *(_QWORD *)&v168.fields.currentCryptoKey = v85;
  *(_QWORD *)&v168.fields.fakeValue = v86;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v168, 0);
  if ( !*p_userSvtEntity )
    goto LABEL_77;
  v87 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068((*p_userSvtEntity)[6], 0);
  if ( !v84 )
    goto LABEL_77;
  Instance = (int64_t)ServantLimitMaster__GetEntity(v84, v87, Instance, 0);
  if ( !*p_servantEntity )
    goto LABEL_77;
  this->fields.classId = (*p_servantEntity)->fields.classId;
  if ( !Instance )
    goto LABEL_77;
  v88 = *(_DWORD *)(Instance + 24);
  v89 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo;
  this->fields.rarity = v88;
  v90 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  v91 = *(&v89->_2.cctor_finished + 1);
  *(_OWORD *)&v163.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v163.fields.fakeValue = v90;
  if ( !v91 )
    j_il2cpp_runtime_class_init_0(v89, v32);
  v161 = v163;
  v92 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v161, 0) == targetSvtEquipId;
  this->fields.isOldBase = v92;
  this->fields.isBase = v92;
  Instance = (int64_t)*v39;
  if ( !*v39 )
    goto LABEL_77;
  Instance = (int64_t)PartyListViewItem__GetMember(
                        (PartyListViewItem_o *)Instance,
                        this->fields._MemberIndex_k__BackingField,
                        0);
  this->fields.isDispEquipFrameName = 0;
  if ( !Instance )
    goto LABEL_77;
  v93 = (PartyOrganizationListViewItem_o *)Instance;
  if ( *(_BYTE *)(Instance + 396) || *(_BYTE *)(Instance + 397) )
  {
    EquipUseBaseServantId_k__BackingField = this->fields._EquipUseBaseServantId_k__BackingField;
    Instance = PartyOrganizationListViewItem__get_BaseServantId((PartyOrganizationListViewItem_o *)Instance, 0);
    this->fields.isDispEquipFrameName = EquipUseBaseServantId_k__BackingField == (_DWORD)Instance;
    if ( EquipUseBaseServantId_k__BackingField == (_DWORD)Instance )
    {
      v95 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
      v96 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
      *(_OWORD *)&v163.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v163.fields.fakeValue = v95;
      if ( !v96 )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v32);
      v160 = v163;
      v97 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v160, 0);
      EquipFrameName = PartyOrganizationListViewItem__GetEquipFrameName(v93, v97, 0);
      this->fields._UseEquipFrameName_k__BackingField = EquipFrameName;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields._UseEquipFrameName_k__BackingField,
        (int32_t)EquipFrameName,
        v99,
        v100,
        v101,
        v102,
        v103,
        v104);
    }
  }
  this->fields._OrganizedWave_k__BackingField = 0;
  this->fields._UniqueOrganizedWave_k__BackingField = 0;
  this->fields._IsUnique_k__BackingField = 0;
  v105 = *v39;
  if ( !*v39 )
    goto LABEL_77;
  if ( v105->fields.menuKind == 9 )
  {
    v106 = sub_2213CCC(EquipGraphListViewItem___c__DisplayClass76_1_TypeInfo);
    System_Object___ctor((Il2CppObject *)v106, 0);
    if ( !v106 )
      goto LABEL_77;
    *(_QWORD *)(v106 + 24) = v30;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v106 + 24), v30, v107, v108, v109, v110, v111, v112);
    v114 = *(_QWORD *)(v106 + 24);
    if ( !v114 )
      goto LABEL_77;
    v115 = (int64_t *)(v106 + 16);
    EquipGraphListViewItem__SetWaveBattleInfo(
      this,
      (PartyOrganizationListViewItem_o **)(v106 + 16),
      &equippedMemberDic,
      baseDeckItemList,
      *(PartyListViewItem_o **)(v114 + 24),
      memberIdx,
      v113);
    if ( *(_QWORD *)(v106 + 16) )
    {
      v116 = (System_Collections_Generic_IEnumerable_T__o *)equippedMemberDic;
      v117 = (System_Action_KeyValuePair_int__int___o *)sub_2213CCC(System_Action_KeyValuePair_int__int___TypeInfo);
      System_Action_KeyValuePair_int__int_____ctor(
        v117,
        (Il2CppObject *)v106,
        Method_EquipGraphListViewItem___c__DisplayClass76_1___ctor_b__0__,
        0);
      BasicHelper__ForEach_KeyValuePair_int__int__(
        v116,
        (System_Action_T__o *)v117,
        (const MethodInfo_3810C00 *)Method_BasicHelper_ForEach_KeyValuePair_int__int____);
      Instance = *(_QWORD *)(v106 + 16);
      if ( !Instance )
        goto LABEL_77;
      this->fields._EquipUseServantId_k__BackingField = PartyOrganizationListViewItem__get_ServantId(
                                                          (PartyOrganizationListViewItem_o *)Instance,
                                                          0);
      Instance = *v115;
      if ( !*v115 )
        goto LABEL_77;
      this->fields._EquipUseBaseServantId_k__BackingField = PartyOrganizationListViewItem__get_BaseServantId(
                                                              (PartyOrganizationListViewItem_o *)Instance,
                                                              0);
    }
  }
  else
  {
    v118 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
    v119 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
    *(_OWORD *)&v163.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v163.fields.fakeValue = v118;
    if ( !v119 )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v32);
    v159 = v163;
    v120 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v159, 0);
    WearerMember = (System_Collections_Generic_IEnumerable_T__o *)PartyListViewItem__GetWearerMember(
                                                                    v105,
                                                                    v120,
                                                                    memberIdx,
                                                                    this->fields._EquipType_k__BackingField,
                                                                    0);
    if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)WearerMember, 0) )
    {
      v122 = (System_Action_KeyValuePair_int__int___o *)sub_2213CCC(System_Action_KeyValuePair_int__int___TypeInfo);
      System_Action_KeyValuePair_int__int_____ctor(
        v122,
        (Il2CppObject *)v30,
        Method_EquipGraphListViewItem___c__DisplayClass76_0___ctor_b__1__,
        0);
      BasicHelper__ForEach_KeyValuePair_int__int__(
        WearerMember,
        (System_Action_T__o *)v122,
        (const MethodInfo_3810C00 *)Method_BasicHelper_ForEach_KeyValuePair_int__int____);
    }
  }
  Instance = (int64_t)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_77;
  IsLock = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0);
  Instance = (int64_t)this->fields.userSvtEntity;
  this->fields.isLock = IsLock;
  if ( !Instance )
    goto LABEL_77;
  IsChoice = UserServantEntity__IsChoice((UserServantEntity_o *)Instance, 0);
  Instance = (int64_t)this->fields.userSvtEntity;
  *(_WORD *)&this->fields.isSwapLock = 0;
  this->fields.isChoice = IsChoice;
  if ( !Instance )
    goto LABEL_77;
  IsFriendShipSvtEquip = UserServantEntity__IsFriendShipSvtEquip((UserServantEntity_o *)Instance, 0);
  Instance = (int64_t)this->fields.userSvtEntity;
  this->fields.isFriendShipSvtEq = IsFriendShipSvtEquip;
  if ( !Instance )
    goto LABEL_77;
  IsChocolateSvtEquip = UserServantEntity__IsChocolateSvtEquip((UserServantEntity_o *)Instance, 0);
  isBase = this->fields.isBase;
  this->fields.isChocolateSvtEquip = IsChocolateSvtEquip;
  v128 = isBase && EquipGraphListViewItem__get_IsUse(this, v32);
  v129 = v128;
  Instance = (int64_t)this->fields.setupInfo;
  this->fields._IsDuplication_k__BackingField = v129;
  this->fields._EquipFriendShipSkillChange_k__BackingField = -1;
  if ( Instance )
  {
    if ( *(_BYTE *)(Instance + 16) )
      EventId = EventUpValSetupInfo__get_EventId((EventUpValSetupInfo_o *)Instance, 0);
    else
      EventId = -1;
    Instance = (int64_t)*v39;
    if ( !*v39 )
      goto LABEL_77;
    Member = PartyListViewItem__GetMember((PartyListViewItem_o *)Instance, memberIdx, 0);
    Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Member )
      goto LABEL_77;
    userServantEntity = Member->fields.userServantEntity;
    if ( !userServantEntity )
      goto LABEL_77;
    v134 = (PartyOrganizationUtility_o *)Instance;
    v135 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
    v136 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v32);
    *(_QWORD *)&v169.fields.currentCryptoKey = v135;
    *(_QWORD *)&v169.fields.fakeValue = v136;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v169, 0);
    v137 = Member->fields.userServantEntity;
    if ( !v137 )
      goto LABEL_77;
    v138 = Instance;
    Instance = UserServantEntity__getRarity(v137, 0);
    if ( !*p_userSvtEntity )
      goto LABEL_77;
    v139 = Instance;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068((*p_userSvtEntity)[5], 0);
    if ( !v134 )
      goto LABEL_77;
    Instance = PartyOrganizationUtility__IsRarityRestriction(
                 v134,
                 &skillName,
                 &actMaxRarity,
                 v138,
                 v139,
                 Instance,
                 EventId,
                 0);
    v131 = Instance & 1;
  }
  else
  {
    v131 = 0;
  }
  this->fields.isInvalidRarity = v131;
  servantEntity = this->fields.servantEntity;
  this->fields.isEventUpVal = 0;
  *(_QWORD *)&this->fields.bonusKind = 1;
  if ( !servantEntity )
    goto LABEL_77;
  v141 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_77;
  v142 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo;
  EquipCategoryIdList = preLoadCategoryIdList;
  this->fields.sortValue2 = ((__int64)servantEntity->fields.collectionNo << 16)
                          | ((unsigned __int64)(unsigned int)this->fields.rarity << 48)
                          | v141[25].fields.currentCryptoKey;
  v144 = v141[1];
  v145 = v141[2];
  v146 = *(&v142->_2.cctor_finished + 1);
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v163.fields.currentCryptoKey = v144;
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v163.fields.fakeValue = v145;
  if ( !v146 )
    j_il2cpp_runtime_class_init_0(v142, v32);
  v158 = v163;
  this->fields.sortValue2B = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v158, 0);
  this->fields.amountSortValue = -1;
  if ( !preLoadCategoryIdList )
  {
    Instance = (int64_t)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_77;
    EquipCategoryIdList = UserServantEntity__GetEquipCategoryIdList((UserServantEntity_o *)Instance, 1, 0);
  }
  this->fields.categoryIdList = EquipCategoryIdList;
  p_categoryIdList = (MissionNaviTransitionBoardItem_o *)&this->fields.categoryIdList;
  sub_2213A04(p_categoryIdList, (int32_t)EquipCategoryIdList, v147, v148, v149, v150, v151, v152);
  Instance = (int64_t)p_categoryIdList->monitor;
  if ( !Instance || (IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0), (Instance = (int64_t)*p_iconLabelInfo2) == 0) )
LABEL_77:
    sub_2213CDC(Instance, v32);
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0);
}


void EquipGraphListViewItem___ctor_47958536(
        EquipGraphListViewItem_o *this,
        int32_t index,
        UserServantEntity_o *userSvtEntity,
        int64_t targetSvtEquipId,
        WarBoardPartyListViewItem_o *partyItem,
        EventUpValSetupInfo_o *setupInfo,
        const MethodInfo *method)
{
  IconLabelInfo_o *v13; // x20
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  IconLabelInfo_o *v20; // x26
  struct IconLabelInfo_o **p_iconLabelInfo2; // x20
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_userSvtEntity; // x21
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  int64_t Instance; // x0
  __int64 v42; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v43; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v44; // x25
  __int64 v45; // x26
  __int64 v46; // x27
  Il2CppObject *Entity; // x0
  struct ServantEntity_o **p_servantEntity; // x25
  System_String_o *v49; // x2
  System_String_o *v50; // x3
  int32_t v51; // w4
  int32_t v52; // w5
  bool v53; // w6
  bool v54; // w7
  ServantLimitMaster_o *v55; // x26
  int32_t v56; // w27
  __int128 v57; // q1
  int v58; // w8
  bool v59; // w9
  System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo__c *v60; // x0
  System_Collections_Generic_List_object__o *v61; // x24
  System_String_o *v62; // x2
  System_String_o *v63; // x3
  int32_t v64; // w4
  int32_t v65; // w5
  bool v66; // w6
  bool v67; // w7
  __int128 v68; // q1
  int32_t WeareMember; // w0
  int32_t v70; // w24
  PartyOrganizationListViewItem_o *MemberItem; // x0
  System_Collections_Generic_List_object__o *wearerMemberInfoList; // x22
  PartyOrganizationListViewItem_o *v73; // x26
  ServantEntity_o *v74; // x25
  EquipGraphListViewItem_WearerMemberInfo_o *v75; // x23
  const MethodInfo *v76; // x5
  System_String_o *v77; // x2
  System_String_o *v78; // x3
  int32_t v79; // w4
  int32_t v80; // w5
  bool v81; // w6
  bool v82; // w7
  struct System_Object_array *items; // x8
  _QWORD *v84; // x9
  __int64 size; // x10
  Il2CppClass **v86; // x0
  bool IsLock; // w8
  bool IsChoice; // w8
  bool IsFriendShipSvtEquip; // w8
  struct ServantEntity_o *servantEntity; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v91; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c *v92; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v93; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v94; // q1
  int v95; // w8
  int64_t v96; // x8
  struct System_Int32_array *EquipCategoryIdList; // x0
  MissionNaviTransitionBoardItem_o *p_categoryIdList; // x19
  System_String_o *v99; // x2
  System_String_o *v100; // x3
  int32_t v101; // w4
  int32_t v102; // w5
  bool v103; // w6
  bool v104; // w7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v105; // [xsp+0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v106; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v107; // [xsp+40h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v108; // [xsp+60h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v109; // 0:x0.16

  if ( (byte_596FC4E & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_2213A60(&IconLabelInfo_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo___ctor__);
    sub_2213A60(&System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo__TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&EquipGraphListViewItem_WearerMemberInfo_TypeInfo);
    byte_596FC4E = 1;
  }
  v13 = (IconLabelInfo_o *)sub_2213CCC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v13, 0);
  this->fields.iconLabelInfo1 = v13;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.iconLabelInfo1,
    (int32_t)v13,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  v20 = (IconLabelInfo_o *)sub_2213CCC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v20, 0);
  this->fields.iconLabelInfo2 = v20;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.iconLabelInfo2,
    (int32_t)v20,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  ListViewItem___ctor_50819428((ListViewItem_o *)this, index, 0);
  this->fields.userSvtEntity = userSvtEntity;
  p_userSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userSvtEntity;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.userSvtEntity,
    (int32_t)userSvtEntity,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  this->fields.setupInfo = setupInfo;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.setupInfo,
    (int32_t)setupInfo,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantMaster___);
  v43 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_36;
  v44 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v45 = *(_QWORD *)&v43[5].fields.currentCryptoKey;
  v46 = *(_QWORD *)&v43[5].fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v42);
  *(_QWORD *)&v109.fields.currentCryptoKey = v45;
  *(_QWORD *)&v109.fields.fakeValue = v46;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v109, 0);
  if ( !v44 )
    goto LABEL_36;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v44,
             Instance,
             (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)Entity;
  p_servantEntity = &this->fields.servantEntity;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.servantEntity,
    (int32_t)Entity,
    v49,
    v50,
    v51,
    v52,
    v53,
    v54);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtEntity )
    goto LABEL_36;
  v55 = (ServantLimitMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068((*p_userSvtEntity)[5], 0);
  if ( !*p_userSvtEntity )
    goto LABEL_36;
  v56 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068((*p_userSvtEntity)[6], 0);
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
  v58 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
  *(_OWORD *)&v108.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v108.fields.fakeValue = v57;
  if ( !v58 )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v42);
  v107 = v108;
  v59 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v107, 0) == targetSvtEquipId;
  v60 = System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo__TypeInfo;
  this->fields.isOldBase = v59;
  this->fields.isBase = v59;
  v61 = (System_Collections_Generic_List_object__o *)sub_2213CCC(v60);
  System_Collections_Generic_List_object____ctor(
    v61,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo___ctor__);
  this->fields.wearerMemberInfoList = (struct System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo__o *)v61;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.wearerMemberInfoList,
    (int32_t)v61,
    v62,
    v63,
    v64,
    v65,
    v66,
    v67);
  v68 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v106.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v106.fields.fakeValue = v68;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v106, 0);
  if ( !partyItem )
    goto LABEL_36;
  WeareMember = WarBoardPartyListViewItem__GetWeareMember(partyItem, Instance, 0);
  if ( (WeareMember & 0x80000000) == 0 )
  {
    v70 = WeareMember;
    MemberItem = WarBoardPartyListViewItem__GetMemberItem(partyItem, WeareMember, 0);
    wearerMemberInfoList = (System_Collections_Generic_List_object__o *)this->fields.wearerMemberInfoList;
    v73 = MemberItem;
    v74 = *p_servantEntity;
    v75 = (EquipGraphListViewItem_WearerMemberInfo_o *)sub_2213CCC(EquipGraphListViewItem_WearerMemberInfo_TypeInfo);
    EquipGraphListViewItem_WearerMemberInfo___ctor(v75, v70, 0, v73, v74, v76);
    if ( !wearerMemberInfoList )
      goto LABEL_36;
    items = wearerMemberInfoList->fields._items;
    v84 = Method_System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo__Add__;
    ++wearerMemberInfoList->fields._version;
    if ( !items )
      goto LABEL_36;
    size = wearerMemberInfoList->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        wearerMemberInfoList,
        (Il2CppObject *)v75,
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v84[4] + 192LL) + 112LL));
    }
    else
    {
      v86 = &items->obj.klass + size;
      wearerMemberInfoList->fields._size = size + 1;
      v86[4] = (Il2CppClass *)v75;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v86 + 4), (int32_t)v75, v77, v78, v79, v80, v81, v82);
    }
  }
  Instance = (int64_t)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_36;
  IsLock = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0);
  Instance = (int64_t)this->fields.userSvtEntity;
  this->fields.isLock = IsLock;
  if ( !Instance )
    goto LABEL_36;
  IsChoice = UserServantEntity__IsChoice((UserServantEntity_o *)Instance, 0);
  Instance = (int64_t)this->fields.userSvtEntity;
  *(_WORD *)&this->fields.isSwapLock = 0;
  this->fields.isInvalidRarity = 0;
  this->fields.isChoice = IsChoice;
  if ( !Instance )
    goto LABEL_36;
  IsFriendShipSvtEquip = UserServantEntity__IsFriendShipSvtEquip((UserServantEntity_o *)Instance, 0);
  Instance = (int64_t)this->fields.userSvtEntity;
  this->fields.isFriendShipSvtEq = IsFriendShipSvtEquip;
  if ( !Instance )
    goto LABEL_36;
  Instance = UserServantEntity__IsChocolateSvtEquip((UserServantEntity_o *)Instance, 0);
  servantEntity = this->fields.servantEntity;
  this->fields.isChocolateSvtEquip = Instance & 1;
  this->fields.isEventUpVal = 0;
  *(_QWORD *)&this->fields.bonusKind = 1;
  if ( !servantEntity )
    goto LABEL_36;
  v91 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_36;
  v92 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo;
  this->fields.sortValue2 = ((__int64)servantEntity->fields.collectionNo << 16)
                          | ((unsigned __int64)(unsigned int)this->fields.rarity << 48)
                          | v91[25].fields.currentCryptoKey;
  v93 = v91[1];
  v94 = v91[2];
  v95 = *(&v92->_2.cctor_finished + 1);
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v108.fields.currentCryptoKey = v93;
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v108.fields.fakeValue = v94;
  if ( !v95 )
    j_il2cpp_runtime_class_init_0(v92, v42);
  v105 = v108;
  v96 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v105, 0);
  Instance = (int64_t)this->fields.userSvtEntity;
  this->fields.sortValue2B = v96;
  this->fields.amountSortValue = -1;
  if ( !Instance
    || (EquipCategoryIdList = UserServantEntity__GetEquipCategoryIdList((UserServantEntity_o *)Instance, 1, 0),
        this->fields.categoryIdList = EquipCategoryIdList,
        p_categoryIdList = (MissionNaviTransitionBoardItem_o *)&this->fields.categoryIdList,
        sub_2213A04(p_categoryIdList, (int32_t)EquipCategoryIdList, v99, v100, v101, v102, v103, v104),
        (Instance = (int64_t)p_categoryIdList->monitor) == 0)
    || (IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0), (Instance = (int64_t)*p_iconLabelInfo2) == 0) )
  {
LABEL_36:
    sub_2213CDC(Instance, v42);
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

  if ( (byte_596FC55 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo__get_Item__);
    byte_596FC55 = 1;
  }
  wearerMemberInfoList = this->fields.wearerMemberInfoList;
  if ( !wearerMemberInfoList )
    sub_2213CDC(0, method);
  return (EquipGraphListViewItem_WearerMemberInfo_o *)System_Collections_Generic_List_object___get_Item(
                                                        (System_Collections_Generic_List_object__o *)wearerMemberInfoList,
                                                        0,
                                                        (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo__get_Item__);
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
  _BOOL4 isChoice; // w8

  if ( (byte_596FC51 & 1) == 0 )
  {
    sub_2213A60(&FilterKindList_TypeInfo);
    sub_2213A60(&ListViewSort_FilterKind___TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    byte_596FC51 = 1;
  }
  v5 = FilterKindList_TypeInfo;
  if ( !*(&FilterKindList_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort);
    v5 = FilterKindList_TypeInfo;
  }
  RarityFilterKindList = (System_Int32Enum_array *)v5->static_fields->RarityFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_36;
  RarityFilterKindList = System_Collections_Generic_List_Int32Enum___ToArray(
                           (System_Collections_Generic_List_T__o *)RarityFilterKindList,
                           (const MethodInfo_446B508 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
  if ( !*(&FilterKindList_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort);
    v7 = FilterKindList_TypeInfo;
  }
  RarityFilterKindList = (System_Int32Enum_array *)v7->static_fields->ServantEquipTypeFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_36;
  v8 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                          (System_Collections_Generic_List_T__o *)RarityFilterKindList,
                                          (const MethodInfo_446B508 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v8, 0)
    && !ListViewSort__IsMatchServantEquipTypeFilter(sort, this->fields.servantEntity, 0) )
  {
    return 0;
  }
  v9 = FilterKindList_TypeInfo;
  if ( !*(&FilterKindList_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort);
    v9 = FilterKindList_TypeInfo;
  }
  RarityFilterKindList = (System_Int32Enum_array *)v9->static_fields->ServantEquipCombineStatusFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_36;
  v10 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)RarityFilterKindList,
                                           (const MethodInfo_446B508 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
    if ( !*(&FilterKindList_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort);
      v13 = FilterKindList_TypeInfo;
    }
    RarityFilterKindList = (System_Int32Enum_array *)v13->static_fields->ServantEquipHaveStatusFilterKindList;
    if ( !RarityFilterKindList )
      goto LABEL_36;
    v14 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                             (System_Collections_Generic_List_T__o *)RarityFilterKindList,
                                             (const MethodInfo_446B508 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
      RarityFilterKindList = (System_Int32Enum_array *)sub_2213B20(ListViewSort_FilterKind___TypeInfo, 1);
      if ( RarityFilterKindList )
      {
        if ( !LODWORD(RarityFilterKindList->max_length) )
          sub_2213CE4(RarityFilterKindList);
        RarityFilterKindList->m_Items[0] = 39;
        if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)RarityFilterKindList, 0)
          || !ListViewSort__GetFilter(sort, 39, 0) )
        {
          return 1;
        }
        isChoice = this->fields.isChoice;
        if ( this->fields.isSwapChoice )
          return !this->fields.isChoice;
        return isChoice;
      }
LABEL_36:
      sub_2213CDC(RarityFilterKindList, sort);
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x1

  this->fields.userSvtEntity = userSvtEntity;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.userSvtEntity,
    (int32_t)userSvtEntity,
    (System_String_o *)method,
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
  bool IsChoice; // w0

  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_2213CDC(0, method);
  IsChoice = UserServantEntity__IsChoice(userSvtEntity, 0);
  this->fields.isSwapChoice = 0;
  this->fields.isChoice = IsChoice;
}


void EquipGraphListViewItem__ModifyLockItem(EquipGraphListViewItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0
  bool IsLock; // w0

  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_2213CDC(0, method);
  IsLock = UserServantEntity__IsLock(userSvtEntity, 0);
  this->fields.isSwapLock = 0;
  this->fields.isLock = IsLock;
}


void EquipGraphListViewItem__ModifyUserServantEntity(
        EquipGraphListViewItem_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.userSvtEntity = userServantEntity;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.userSvtEntity,
    (int32_t)userServantEntity,
    (System_String_o *)method,
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
  int32_t sortKind; // w8
  int64_t servantEntity_low; // x20
  IconLabelInfo_o *v14; // x21
  int64_t userSvtEntity_low; // x20
  IconLabelInfo_o *v16; // x21
  struct ListViewManager_o *manager; // x8
  __int64 naturalAligment; // x11
  struct ListViewManager_o *v19; // x20
  struct UserServantEntity_o *v20; // x8
  __int128 v21; // q1
  struct UserServantEntity_o *v22; // x8
  int64_t servantEntity_high; // x20
  IconLabelInfo_o *iconLabelInfo1; // x21
  IconLabelInfo_o *iconLabelInfo2; // x19
  struct ServantEntity_o *v26; // x8
  unsigned __int64 cost; // x8
  int32_t bonusKind2; // w8
  int32_t v29; // w8
  int32_t bonusKind2Id; // w8
  int32_t v31; // w9
  int32_t v32; // w5
  struct UserServantEntity_o *v33; // x8
  __int64 v34; // x21
  __int64 v35; // x22
  const MethodInfo *v36; // x2
  struct ServantEntity_o *servantEntity; // x8
  __int64 v38; // x9
  int32_t v39; // w20
  int isEventUpVal; // w8
  int32_t bonusKindId; // w9
  int32_t v42; // w8
  bool EventUpVal_50186380; // w0
  System_Collections_Generic_List_EventGroupEntity__o *EntitiesByGroupId; // x21
  System_Func_object__bool__o *v45; // x0
  intptr_t *v46; // x8
  DataManager_c *v47; // x0
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
  if ( (byte_596FC52 & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_Any_EventGroupEntity___);
    sub_2213A60(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_EventGroupMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_EquipGraphListViewItem__SetSortValue_b__86_0__);
    sub_2213A60(&Method_EquipGraphListViewItem__SetSortValue_b__86_1__);
    sub_2213A60(&EquipGraphListViewManager_TypeInfo);
    sub_2213A60(&System_Func_EventGroupEntity__bool__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_EventGroupEntity__get_Count__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (EquipGraphListViewItem_o *)sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_596FC52 = 1;
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
  if ( !setupInfo->fields.isQuestStart )
  {
    if ( !sort )
      goto LABEL_130;
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
            goto LABEL_126;
        }
        v4->fields.bonusKind = 0;
        v4->fields.bonusKindId = bonusKind2Id;
        if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, sort);
        this = (EquipGraphListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventGroupMaster___);
        if ( !this )
          goto LABEL_130;
        EntitiesByGroupId = EventGroupMaster__GetEntitiesByGroupId(
                              (EventGroupMaster_o *)this,
                              v4->fields.bonusKindId,
                              0);
        this = (EquipGraphListViewItem_o *)BasicHelper__IsNullOrEmpty(
                                             (System_Collections_ICollection_o *)EntitiesByGroupId,
                                             0);
        if ( ((unsigned __int8)this & 1) != 0 )
          goto LABEL_126;
        if ( !EntitiesByGroupId )
          goto LABEL_130;
        if ( EntitiesByGroupId->fields._size < 2 )
          goto LABEL_126;
        v45 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_EventGroupEntity__bool__TypeInfo);
        v46 = &Method_EquipGraphListViewItem__SetSortValue_b__86_1__;
LABEL_125:
        v54 = (System_Func_T__bool__o *)v45;
        System_Func_object__bool____ctor(v45, (Il2CppObject *)v4, *v46, 0);
        v4->fields.isEventUpVal = BasicHelper__Any_object_(
                                    (System_Collections_Generic_List_T__o *)EntitiesByGroupId,
                                    v54,
                                    (const MethodInfo_380FDE0 *)Method_BasicHelper_Any_EventGroupEntity___);
        goto LABEL_126;
      }
      if ( v4->fields.bonusKind != 3 )
      {
        v42 = sort->fields.bonusKind2Id;
        goto LABEL_110;
      }
      bonusKindId = v4->fields.bonusKindId;
      v42 = sort->fields.bonusKind2Id;
      goto LABEL_92;
    }
    if ( v4->fields.bonusKind != bonusKind2 )
    {
      v32 = sort->fields.bonusKind2Id;
      goto LABEL_95;
    }
    v31 = v4->fields.bonusKindId;
    v32 = sort->fields.bonusKind2Id;
    goto LABEL_85;
  }
  if ( !sort )
    goto LABEL_130;
  bonusKind2 = sort->fields.bonusKind;
  if ( (unsigned int)(bonusKind2 - 4) < 2 )
  {
    if ( v4->fields.bonusKind != bonusKind2 )
    {
      v32 = sort->fields.bonusKindId;
      goto LABEL_95;
    }
    v31 = v4->fields.bonusKindId;
    v32 = sort->fields.bonusKindId;
LABEL_85:
    if ( v31 == v32 )
    {
      isEventUpVal = v4->fields.isEventUpVal;
      goto LABEL_97;
    }
LABEL_95:
    this = (EquipGraphListViewItem_o *)v4->fields.userSvtEntity;
    v4->fields.bonusKind = bonusKind2;
    v4->fields.bonusKindId = v32;
    if ( !this )
      goto LABEL_130;
    EventUpVal_50186380 = UserServantEntity__getEventUpVal_50186380(
                            (UserServantEntity_o *)this,
                            -1,
                            0,
                            0,
                            setupInfo,
                            v32,
                            0,
                            0);
    isEventUpVal = EventUpVal_50186380;
    v4->fields.isEventUpVal = EventUpVal_50186380;
LABEL_97:
    if ( !isEventUpVal || v4->fields.isInvalidRarity )
      goto LABEL_128;
    goto LABEL_8;
  }
  if ( bonusKind2 != 3 )
  {
    if ( bonusKind2 )
      goto LABEL_8;
    if ( v4->fields.bonusKind )
    {
      v29 = sort->fields.bonusKindId;
LABEL_102:
      v4->fields.bonusKind = 0;
      v4->fields.bonusKindId = v29;
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, sort);
      this = (EquipGraphListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventGroupMaster___);
      if ( !this )
        goto LABEL_130;
      EntitiesByGroupId = EventGroupMaster__GetEntitiesByGroupId((EventGroupMaster_o *)this, v4->fields.bonusKindId, 0);
      this = (EquipGraphListViewItem_o *)BasicHelper__IsNullOrEmpty(
                                           (System_Collections_ICollection_o *)EntitiesByGroupId,
                                           0);
      if ( ((unsigned __int8)this & 1) != 0 )
        goto LABEL_126;
      if ( !EntitiesByGroupId )
        goto LABEL_130;
      if ( EntitiesByGroupId->fields._size < 2 )
        goto LABEL_126;
      v45 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_EventGroupEntity__bool__TypeInfo);
      v46 = &Method_EquipGraphListViewItem__SetSortValue_b__86_0__;
      goto LABEL_125;
    }
    v29 = sort->fields.bonusKindId;
    if ( v4->fields.bonusKindId != v29 )
      goto LABEL_102;
LABEL_126:
    v53 = v4->fields.isEventUpVal;
    goto LABEL_127;
  }
  if ( v4->fields.bonusKind != 3 )
  {
    v42 = sort->fields.bonusKindId;
    goto LABEL_110;
  }
  bonusKindId = v4->fields.bonusKindId;
  v42 = sort->fields.bonusKindId;
LABEL_92:
  if ( bonusKindId == v42 )
    goto LABEL_126;
LABEL_110:
  v47 = DataManager_TypeInfo;
  v4->fields.bonusKind = 3;
  v4->fields.bonusKindId = v42;
  if ( !*(&v47->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v47, sort);
  this = (EquipGraphListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventCampaignMaster___);
  userSvtEntity = v4->fields.userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_130;
  v49 = this;
  v50 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v51 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, sort);
  *(_QWORD *)&v59.fields.currentCryptoKey = v50;
  *(_QWORD *)&v59.fields.fakeValue = v51;
  this = (EquipGraphListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v59, 0);
  if ( !v49 )
    goto LABEL_130;
  IsEnableServant = EventCampaignMaster__IsEnableServant(
                      (EventCampaignMaster_o *)v49,
                      (int32_t)this,
                      v4->fields.bonusKindId,
                      0);
  v53 = IsEnableServant;
  v4->fields.isEventUpVal = IsEnableServant;
LABEL_127:
  if ( !v53 )
    goto LABEL_128;
LABEL_8:
  this = (EquipGraphListViewItem_o *)((__int64 (__fastcall *)(EquipGraphListViewItem_o *, ListViewSort_o *, const MethodInfo *))v4->klass->vtable._5_IsMatchFilter.methodPtr)(
                                       v4,
                                       sort,
                                       v4->klass->vtable._5_IsMatchFilter.method);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
LABEL_128:
    LOBYTE(this) = 0;
    return (char)this;
  }
  isChoice = v4->fields.isChoice;
  isSwapChoice = v4->fields.isSwapChoice;
  v4->fields.sortValue0 = 0;
  v9 = !isChoice;
  v10 = isChoice;
  v11 = v9;
  if ( isSwapChoice )
    v10 = v11;
  if ( v10 )
  {
    if ( !sort )
      goto LABEL_130;
    if ( sort->fields.isChoiceSort )
      v4->fields.sortValue0 = 10;
  }
  this = (EquipGraphListViewItem_o *)v4->fields.iconLabelInfo2;
  if ( !this || (IconLabelInfo__Clear((IconLabelInfo_o *)this, 0), !sort) )
LABEL_130:
    sub_2213CDC(this, sort);
  sortKind = sort->fields.sortKind;
  this = (EquipGraphListViewItem_o *)(&dword_0 + 1);
  if ( sortKind > 4 )
  {
    if ( sortKind <= 6 )
    {
      if ( sortKind == 5 )
      {
        this = (EquipGraphListViewItem_o *)v4->fields.userSvtEntity;
        if ( !this )
          goto LABEL_130;
        servantEntity_high = SHIDWORD(this[1].fields.servantEntity);
        iconLabelInfo1 = v4->fields.iconLabelInfo1;
        v4->fields.sortValue1 = servantEntity_high;
        this = (EquipGraphListViewItem_o *)UserServantEntity__get_HpBoostValue((UserServantEntity_o *)this, 0);
        if ( !iconLabelInfo1 )
          goto LABEL_130;
        IconLabelInfo__Set_47880948(iconLabelInfo1, 3, servantEntity_high, (int32_t)this, 0, 0, 0, 0, 0, 0);
      }
      else
      {
        this = (EquipGraphListViewItem_o *)v4->fields.userSvtEntity;
        if ( !this )
          goto LABEL_130;
        servantEntity_low = SLODWORD(this[1].fields.servantEntity);
        v14 = v4->fields.iconLabelInfo1;
        v4->fields.sortValue1 = servantEntity_low;
        this = (EquipGraphListViewItem_o *)UserServantEntity__get_AtkBoostValue((UserServantEntity_o *)this, 0);
        if ( !v14 )
          goto LABEL_130;
        IconLabelInfo__Set_47880948(v14, 5, servantEntity_low, (int32_t)this, 0, 0, 0, 0, 0, 0);
      }
LABEL_47:
      this = (EquipGraphListViewItem_o *)v4->fields.userSvtEntity;
      if ( !this )
        goto LABEL_130;
      iconLabelInfo2 = v4->fields.iconLabelInfo2;
LABEL_80:
      v39 = (int32_t)this[1].fields.userSvtEntity;
      this = (EquipGraphListViewItem_o *)UserServantEntity__getLevelMax((UserServantEntity_o *)this, 0);
      if ( iconLabelInfo2 )
      {
        IconLabelInfo__Set_47880948(iconLabelInfo2, 2, v39, (int32_t)this, 0, 0, 0, 0, 0, 0);
        goto LABEL_82;
      }
      goto LABEL_130;
    }
    if ( sortKind != 7 )
    {
      if ( sortKind != 14 )
        return (char)this;
      this = (EquipGraphListViewItem_o *)v4->fields.amountSortValue;
      if ( ((unsigned __int64)this & 0x8000000000000000LL) != 0 )
      {
        manager = sort->fields.manager;
        if ( manager
          && (naturalAligment = EquipGraphListViewManager_TypeInfo->_2.naturalAligment,
              manager->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
        {
          if ( (EquipGraphListViewManager_c *)manager->klass->_2.typeHierarchy[naturalAligment - 1] == EquipGraphListViewManager_TypeInfo )
            v19 = sort->fields.manager;
          else
            v19 = 0;
        }
        else
        {
          v19 = 0;
        }
        v33 = v4->fields.userSvtEntity;
        if ( !v33 )
          goto LABEL_130;
        v34 = *(_QWORD *)&v33->fields.svtId.fields.currentCryptoKey;
        v35 = *(_QWORD *)&v33->fields.svtId.fields.fakeValue;
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, sort);
        *(_QWORD *)&v58.fields.currentCryptoKey = v34;
        *(_QWORD *)&v58.fields.fakeValue = v35;
        this = (EquipGraphListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v58, 0);
        if ( !v19 )
          goto LABEL_130;
        this = (EquipGraphListViewItem_o *)EquipGraphListViewManager__GetAmountSortValue(
                                             (EquipGraphListViewManager_o *)v19,
                                             (int32_t)this,
                                             v36);
        v4->fields.amountSortValue = (int64_t)this;
      }
      servantEntity = v4->fields.servantEntity;
      if ( !servantEntity )
        goto LABEL_130;
      v38 = (_QWORD)this << 48;
      this = (EquipGraphListViewItem_o *)v4->fields.userSvtEntity;
      cost = v38 | ((unsigned __int64)(unsigned int)v4->fields.rarity << 32) | servantEntity->fields.collectionNo;
      goto LABEL_78;
    }
    v26 = v4->fields.servantEntity;
    if ( !v26 )
      goto LABEL_130;
    cost = v26->fields.cost;
LABEL_52:
    this = (EquipGraphListViewItem_o *)v4->fields.userSvtEntity;
LABEL_78:
    v4->fields.sortValue1 = cost;
    if ( !this )
      goto LABEL_130;
    iconLabelInfo2 = v4->fields.iconLabelInfo1;
    goto LABEL_80;
  }
  if ( sortKind == 1 )
  {
    v20 = v4->fields.userSvtEntity;
    if ( !v20 )
      goto LABEL_130;
    v21 = *(_OWORD *)&v20->fields.id.fields.fakeValue;
    *(_OWORD *)&v57.fields.currentCryptoKey = *(_OWORD *)&v20->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v57.fields.fakeValue = v21;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, sort);
    v56 = v57;
    this = (EquipGraphListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v56, 0);
    v22 = v4->fields.userSvtEntity;
    v4->fields.sortValue1 = (int64_t)this;
    if ( !v22 )
      goto LABEL_130;
    this = (EquipGraphListViewItem_o *)v4->fields.iconLabelInfo1;
    if ( !this )
      goto LABEL_130;
    IconLabelInfo__SetTime((IconLabelInfo_o *)this, 49, v22->fields.createdAt, 0, 0, 0, 0);
    goto LABEL_47;
  }
  if ( sortKind == 2 )
  {
    cost = v4->fields.rarity;
    goto LABEL_52;
  }
  if ( sortKind != 3 )
    return (char)this;
  this = (EquipGraphListViewItem_o *)v4->fields.userSvtEntity;
  if ( !this )
    goto LABEL_130;
  userSvtEntity_low = SLODWORD(this[1].fields.userSvtEntity);
  v16 = v4->fields.iconLabelInfo1;
  v4->fields.sortValue1 = userSvtEntity_low;
  this = (EquipGraphListViewItem_o *)UserServantEntity__getLevelMax((UserServantEntity_o *)this, 0);
  if ( !v16 )
    goto LABEL_130;
  IconLabelInfo__Set_47880948(v16, 2, userSvtEntity_low, (int32_t)this, 0, 0, 0, 0, 0, 0);
LABEL_82:
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
  bool v7; // w7
  PartyListViewItem_o *v9; // x24
  PartyListViewItem_array *v10; // x26
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  void *questRestrictionInfo; // x0
  __int64 v21; // x1
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v23; // x22
  unsigned __int64 v24; // x9
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
  __int128 v36; // q1
  int v37; // w8
  int64_t v38; // x0
  System_Collections_Generic_Dictionary_int__int__o *WearerMember; // x0
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o EquipSvtId; // kr10_16
  struct UserServantEntity_o *v47; // x8
  int v48; // w21
  struct UserServantEntity_o *v49; // x8
  __int64 v50; // x21
  __int64 v51; // x22
  int32_t v52; // w0
  struct UserServantEntity_o *v53; // x8
  __int64 v54; // x21
  __int64 v55; // x22
  int32_t v56; // w0
  PartyOrganizationListViewItem_o *UseIdenticalEquipServant; // x0
  PartyOrganizationListViewItem_o *v58; // x20
  struct UserServantEntity_o *v59; // x8
  __int128 v60; // q0
  __int128 v61; // q1
  int v62; // w8
  int64_t v63; // x0
  __int64 v64; // x1
  BalanceConfig_c *v65; // x8
  int64_t v66; // x20
  System_Collections_Generic_Dictionary_int__int__o *v67; // x0
  System_String_o *v68; // x2
  System_String_o *v69; // x3
  int32_t v70; // w4
  int32_t v71; // w5
  bool v72; // w6
  bool v73; // w7
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *v74; // x0
  int32_t v75; // w0
  PartyOrganizationListViewItem_o *v76; // x0
  System_String_o *v77; // x2
  System_String_o *v78; // x3
  int32_t v79; // w4
  int32_t v80; // w5
  bool v81; // w6
  bool v82; // w7
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  int32_t v84; // w0
  PartyOrganizationListViewItem_o *Member; // x0
  System_String_o *v86; // x2
  System_String_o *v87; // x3
  int32_t v88; // w4
  int32_t v89; // w5
  bool v90; // w6
  bool v91; // w7
  PartyListViewItem_array *v92; // [xsp+10h] [xbp-100h]
  PartyListViewItem_o *v93; // [xsp+18h] [xbp-F8h]
  MissionNaviTransitionBoardItem_o *v94; // [xsp+20h] [xbp-F0h]
  MissionNaviTransitionBoardItem_o *v95; // [xsp+28h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v96; // [xsp+30h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v97; // [xsp+50h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v98; // [xsp+70h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v99; // [xsp+90h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v100; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v101; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v102; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v103; // 0:x2.16

  v9 = partyItem;
  v10 = baseDeckItemList;
  if ( (byte_596FC4F & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int__get_Keys__);
    sub_2213A60(&Method_System_Linq_Enumerable_FirstOrDefault_int___);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_596FC4F = 1;
  }
  *equippedMemberItem = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)equippedMemberItem,
    0,
    (System_String_o *)equippedMemberDic,
    (System_String_o *)baseDeckItemList,
    (int32_t)partyItem,
    memberIdx,
    (bool)method,
    v7);
  *equippedMemberDic = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)equippedMemberDic, 0, v14, v15, v16, v17, v18, v19);
  if ( !v9 )
    goto LABEL_69;
  questRestrictionInfo = v9->fields.questRestrictionInfo;
  if ( questRestrictionInfo )
    questRestrictionInfo = (void *)QuestRestrictionInfo__IsWaveSetupSwitchParty(
                                     (QuestRestrictionInfo_o *)questRestrictionInfo,
                                     0);
  if ( !this )
    goto LABEL_69;
  v94 = (MissionNaviTransitionBoardItem_o *)equippedMemberItem;
  v95 = (MissionNaviTransitionBoardItem_o *)equippedMemberDic;
  this->fields._IsWaveSetupSwitchParty_k__BackingField = (unsigned __int8)questRestrictionInfo & 1;
  if ( !v10 )
    goto LABEL_69;
  max_length = v10->max_length;
  this->fields._MaxWave_k__BackingField = max_length;
  if ( (int)max_length < 1 )
  {
LABEL_36:
    userSvtEntity = this->fields.userSvtEntity;
    if ( !userSvtEntity )
      goto LABEL_69;
    v35 = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
    v36 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
    v37 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
    *(_OWORD *)&v99.fields.currentCryptoKey = v35;
    *(_OWORD *)&v99.fields.fakeValue = v36;
    if ( !v37 )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v21);
    v96 = v99;
    v38 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v96, 0);
    WearerMember = PartyListViewItem__GetWearerMember(v9, v38, memberIdx, 0, 0);
    v95->klass = (MissionNaviTransitionBoardItem_c *)WearerMember;
    sub_2213A04(v95, (int32_t)WearerMember, v40, v41, v42, v43, v44, v45);
    if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v95->klass, 0) )
    {
      if ( !this->fields._IsUnique_k__BackingField )
      {
        questRestrictionInfo = PartyListViewItem__GetMember(v9, memberIdx, 0);
        if ( !questRestrictionInfo )
          goto LABEL_69;
        EquipSvtId = PartyOrganizationListViewItem__get_EquipSvtId(
                       (PartyOrganizationListViewItem_o *)questRestrictionInfo,
                       0);
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(
            CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
            *(_QWORD *)&EquipSvtId.fields.fakeValue);
        questRestrictionInfo = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                         EquipSvtId,
                                         0);
        v47 = this->fields.userSvtEntity;
        if ( !v47 )
          goto LABEL_69;
        v48 = (int)questRestrictionInfo;
        questRestrictionInfo = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                         v47->fields.svtId,
                                         0);
        if ( v48 != (_DWORD)questRestrictionInfo )
        {
          v49 = this->fields.userSvtEntity;
          if ( !v49 )
            goto LABEL_69;
          v50 = *(_QWORD *)&v49->fields.svtId.fields.currentCryptoKey;
          v51 = *(_QWORD *)&v49->fields.svtId.fields.fakeValue;
          if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v21);
          *(_QWORD *)&v101.fields.currentCryptoKey = v50;
          *(_QWORD *)&v101.fields.fakeValue = v51;
          v52 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v101, 0);
          questRestrictionInfo = (void *)PartyListViewItem__IsIdenticalEquipMember(v9, v52, 0);
          this->fields._IsUnique_k__BackingField = (unsigned __int8)questRestrictionInfo & 1;
          if ( ((unsigned __int8)questRestrictionInfo & 1) != 0 )
          {
            v53 = this->fields.userSvtEntity;
            if ( !v53 )
              goto LABEL_69;
            v54 = *(_QWORD *)&v53->fields.svtId.fields.currentCryptoKey;
            v55 = *(_QWORD *)&v53->fields.svtId.fields.fakeValue;
            if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v21);
            *(_QWORD *)&v102.fields.currentCryptoKey = v54;
            *(_QWORD *)&v102.fields.fakeValue = v55;
            v56 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v102, 0);
            UseIdenticalEquipServant = PartyListViewItem__GetUseIdenticalEquipServant(v9, v56, 0);
            if ( UseIdenticalEquipServant )
            {
              v58 = UseIdenticalEquipServant;
              this->fields._EquipUseServantId_k__BackingField = PartyOrganizationListViewItem__get_ServantId(
                                                                  UseIdenticalEquipServant,
                                                                  0);
              LODWORD(UseIdenticalEquipServant) = PartyOrganizationListViewItem__get_BaseServantId(v58, 0);
            }
            else
            {
              this->fields._EquipUseServantId_k__BackingField = 0;
            }
            this->fields._EquipUseBaseServantId_k__BackingField = (int)UseIdenticalEquipServant;
          }
        }
      }
    }
    else
    {
      questRestrictionInfo = v95->klass;
      if ( !v95->klass )
        goto LABEL_69;
      Keys = System_Collections_Generic_Dictionary_int__int___get_Keys(
               (System_Collections_Generic_Dictionary_int__int__o *)questRestrictionInfo,
               (const MethodInfo_3F928CC *)Method_System_Collections_Generic_Dictionary_int__int__get_Keys__);
      v84 = System_Linq_Enumerable__FirstOrDefault_int_(
              (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
              (const MethodInfo_388115C *)Method_System_Linq_Enumerable_FirstOrDefault_int___);
      Member = PartyListViewItem__GetMember(v9, v84, 0);
      v94->klass = (MissionNaviTransitionBoardItem_c *)Member;
      sub_2213A04(v94, (int32_t)Member, v86, v87, v88, v89, v90, v91);
    }
  }
  else
  {
    v23 = 0;
    v24 = (unsigned int)max_length;
    v25 = 1;
    v92 = v10;
    v93 = v9;
    while ( 1 )
    {
      if ( v23 >= v24 )
LABEL_70:
        sub_2213CE4(questRestrictionInfo);
      v26 = v10->m_Items[v23];
      if ( !v26 )
        goto LABEL_69;
      if ( v9->fields.index != v26->fields.index )
        break;
LABEL_35:
      ++v23;
      ++v25;
      v24 = (unsigned int)max_length;
      if ( (int)v23 >= (int)max_length )
        goto LABEL_36;
    }
    for ( i = 0; ; ++i )
    {
      questRestrictionInfo = BalanceConfig_TypeInfo;
      if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v21);
        questRestrictionInfo = BalanceConfig_TypeInfo;
      }
      if ( i >= *(_DWORD *)(*((_QWORD *)questRestrictionInfo + 23) + 176LL) )
      {
        v10 = v92;
        v9 = v93;
        max_length = v92->max_length;
        goto LABEL_35;
      }
      questRestrictionInfo = PartyListViewItem__GetMember(v26, i, 0);
      if ( !questRestrictionInfo )
        goto LABEL_69;
      v28 = (PartyOrganizationListViewItem_o *)questRestrictionInfo;
      questRestrictionInfo = PartyOrganizationListViewItem__GetEquipList(
                               (PartyOrganizationListViewItem_o *)questRestrictionInfo,
                               0);
      if ( !questRestrictionInfo )
        goto LABEL_69;
      if ( !*((_DWORD *)questRestrictionInfo + 6) )
        goto LABEL_70;
      if ( *((__int64 *)questRestrictionInfo + 4) >= 1 )
      {
        if ( !this->fields._IsUnique_k__BackingField )
        {
          v29 = this->fields.userSvtEntity;
          if ( !v29 )
            goto LABEL_69;
          v31 = PartyOrganizationListViewItem__get_EquipSvtId(v28, 0);
          if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(
              CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
              *(_QWORD *)&v31.fields.fakeValue);
          *(_QWORD *)&v100.fields.currentCryptoKey = &v29->fields.svtId;
          *(_QWORD *)&v100.fields.fakeValue = *(_QWORD *)&v31.fields.currentCryptoKey;
          *(_QWORD *)&v103.fields.currentCryptoKey = *(_QWORD *)&v31.fields.fakeValue;
          *(_QWORD *)&v103.fields.fakeValue = 0;
          questRestrictionInfo = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__Equals_55998220(v100, v103, v30);
          this->fields._IsUnique_k__BackingField = (unsigned __int8)questRestrictionInfo & 1;
          if ( ((unsigned __int8)questRestrictionInfo & 1) != 0 )
          {
            this->fields._EquipUseServantId_k__BackingField = PartyOrganizationListViewItem__get_ServantId(v28, 0);
            questRestrictionInfo = (void *)PartyOrganizationListViewItem__get_BaseServantId(v28, 0);
            this->fields._UniqueOrganizedWave_k__BackingField = v25;
            this->fields._EquipUseBaseServantId_k__BackingField = (int)questRestrictionInfo;
            this->fields._IsClearedWave_k__BackingField = v26->fields._IsClearedWave_k__BackingField;
          }
        }
        v32 = this->fields.userSvtEntity;
        if ( !v32 )
          goto LABEL_69;
        questRestrictionInfo = PartyOrganizationListViewItem__GetEquipList(v28, 0);
        if ( !questRestrictionInfo )
          goto LABEL_69;
        if ( !*((_DWORD *)questRestrictionInfo + 6) )
          goto LABEL_70;
        v33 = *((_QWORD *)questRestrictionInfo + 4);
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v21);
        CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v99, v33, 0);
        v98 = v99;
        questRestrictionInfo = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__Equals_56001160(
                                         &v32->fields.id,
                                         &v98,
                                         0);
        if ( ((unsigned __int8)questRestrictionInfo & 1) != 0 )
          break;
      }
    }
    v59 = this->fields.userSvtEntity;
    if ( !v59 )
      goto LABEL_69;
    v60 = *(_OWORD *)&v59->fields.id.fields.currentCryptoKey;
    v61 = *(_OWORD *)&v59->fields.id.fields.fakeValue;
    v62 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
    *(_OWORD *)&v99.fields.currentCryptoKey = v60;
    *(_OWORD *)&v99.fields.fakeValue = v61;
    if ( !v62 )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v21);
    v97 = v99;
    v63 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v97, 0);
    v65 = BalanceConfig_TypeInfo;
    v66 = v63;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v64);
      v65 = BalanceConfig_TypeInfo;
    }
    v67 = PartyListViewItem__GetWearerMember(v26, v66, v65->static_fields->DeckMainMemberMax + 1, 0, 0);
    v95->klass = (MissionNaviTransitionBoardItem_c *)v67;
    sub_2213A04(v95, (int32_t)v67, v68, v69, v70, v71, v72, v73);
    if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v95->klass, 0) )
    {
      questRestrictionInfo = v95->klass;
      if ( v95->klass )
      {
        v74 = System_Collections_Generic_Dictionary_int__int___get_Keys(
                (System_Collections_Generic_Dictionary_int__int__o *)questRestrictionInfo,
                (const MethodInfo_3F928CC *)Method_System_Collections_Generic_Dictionary_int__int__get_Keys__);
        v75 = System_Linq_Enumerable__FirstOrDefault_int_(
                (System_Collections_Generic_IEnumerable_TSource__o *)v74,
                (const MethodInfo_388115C *)Method_System_Linq_Enumerable_FirstOrDefault_int___);
        v76 = PartyListViewItem__GetMember(v26, v75, 0);
        v94->klass = (MissionNaviTransitionBoardItem_c *)v76;
        sub_2213A04(v94, (int32_t)v76, v77, v78, v79, v80, v81, v82);
        goto LABEL_63;
      }
LABEL_69:
      sub_2213CDC(questRestrictionInfo, v21);
    }
LABEL_63:
    this->fields._OrganizedWave_k__BackingField = v25;
    this->fields._IsClearedWave_k__BackingField = v26->fields._IsClearedWave_k__BackingField;
  }
}


bool EquipGraphListViewItem__SwapChoice(EquipGraphListViewItem_o *this, const MethodInfo *method)
{
  _BOOL4 isSwapChoice; // w9
  bool v4; // zf
  bool v5; // w9
  bool result; // w0

  isSwapChoice = this->fields.isSwapChoice;
  v4 = !isSwapChoice;
  v5 = !isSwapChoice;
  result = v4;
  this->fields.isSwapChoice = v5;
  return result;
}


bool EquipGraphListViewItem__SwapLock(EquipGraphListViewItem_o *this, const MethodInfo *method)
{
  _BOOL4 isSwapLock; // w9
  bool v4; // zf
  bool v5; // w9
  bool result; // w0

  isSwapLock = this->fields.isSwapLock;
  v4 = !isSwapLock;
  v5 = !isSwapLock;
  result = v4;
  this->fields.isSwapLock = v5;
  return result;
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
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  const MethodInfo *v18; // x6
  struct System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo__o *wearerMemberInfoList; // x8
  int32_t size; // w2
  int v21; // w9
  System_Collections_Generic_IEnumerable_T__o *v22; // x19
  System_Action_KeyValuePair_int__int___o *v23; // x20
  System_Collections_Generic_Dictionary_int__int__o *equippedMemberDic; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_596FC50 & 1) == 0 )
  {
    sub_2213A60(&System_Action_KeyValuePair_int__int___TypeInfo);
    sub_2213A60(&Method_BasicHelper_ForEach_KeyValuePair_int__int____);
    sub_2213A60(&Method_System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo__Clear__);
    sub_2213A60(&Method_EquipGraphListViewItem___c__DisplayClass79_0__UpdateWaveBattleInfo_b__0__);
    sub_2213A60(&EquipGraphListViewItem___c__DisplayClass79_0_TypeInfo);
    byte_596FC50 = 1;
  }
  equippedMemberDic = 0;
  v9 = sub_2213CCC(EquipGraphListViewItem___c__DisplayClass79_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9
    || (*(_QWORD *)(v9 + 16) = this,
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 16), (int32_t)this, v12, v13, v14, v15, v16, v17),
        wearerMemberInfoList = this->fields.wearerMemberInfoList,
        this->fields._OrganizedWave_k__BackingField = 0,
        this->fields._UniqueOrganizedWave_k__BackingField = 0,
        this->fields._IsUnique_k__BackingField = 0,
        !wearerMemberInfoList) )
  {
    sub_2213CDC(v10, v11);
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
    v23 = (System_Action_KeyValuePair_int__int___o *)sub_2213CCC(System_Action_KeyValuePair_int__int___TypeInfo);
    System_Action_KeyValuePair_int__int_____ctor(
      v23,
      (Il2CppObject *)v9,
      Method_EquipGraphListViewItem___c__DisplayClass79_0__UpdateWaveBattleInfo_b__0__,
      0);
    BasicHelper__ForEach_KeyValuePair_int__int__(
      v22,
      (System_Action_T__o *)v23,
      (const MethodInfo_3810C00 *)Method_BasicHelper_ForEach_KeyValuePair_int__int____);
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

  if ( (byte_596FC56 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_596FC56 = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, entity);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventCampaignMaster___);
  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_15;
  v8 = (EventCampaignMaster_o *)Master_object;
  v9 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
  *(_QWORD *)&v15.fields.currentCryptoKey = v9;
  *(_QWORD *)&v15.fields.fakeValue = v10;
  Master_object = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v15, 0);
  if ( !entity || !v8 )
    goto LABEL_15;
  if ( EventCampaignMaster__IsEnableServant(v8, (int32_t)Master_object, entity->fields.eventId, 0) )
    return 1;
  v12 = this->fields.userSvtEntity;
  setupInfo = this->fields.setupInfo;
  eventId = entity->fields.eventId;
  Master_object = SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Master_object || !v12 )
LABEL_15:
    sub_2213CDC(Master_object, v6);
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

  if ( (byte_596FC57 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_596FC57 = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, entity);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventCampaignMaster___);
  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_15;
  v8 = (EventCampaignMaster_o *)Master_object;
  v9 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
  *(_QWORD *)&v15.fields.currentCryptoKey = v9;
  *(_QWORD *)&v15.fields.fakeValue = v10;
  Master_object = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v15, 0);
  if ( !entity || !v8 )
    goto LABEL_15;
  if ( EventCampaignMaster__IsEnableServant(v8, (int32_t)Master_object, entity->fields.eventId, 0) )
    return 1;
  v12 = this->fields.userSvtEntity;
  setupInfo = this->fields.setupInfo;
  eventId = entity->fields.eventId;
  Master_object = SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Master_object || !v12 )
LABEL_15:
    sub_2213CDC(Master_object, v6);
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
  if ( (byte_596FC54 & 1) == 0 )
  {
    this = (EquipGraphListViewItem_o *)sub_2213A60(&Method_System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo__get_Count__);
    byte_596FC54 = 1;
  }
  wearerMemberInfoList = v2->fields.wearerMemberInfoList;
  if ( !wearerMemberInfoList )
    sub_2213CDC(this, method);
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

  if ( (byte_596FC53 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    byte_596FC53 = 1;
  }
  servantEntity = this->fields.servantEntity;
  if ( servantEntity )
    return ServantEntity__getName(servantEntity, -1, -1, 0, 0, 0);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  if ( !byte_596B976 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    byte_596B976 = 1;
  }
  v5 = LocalizationManager_TypeInfo;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
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
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  int classId; // w8
  int32_t rarityId; // w9
  struct System_String_o *monitor; // x1
  LocalizationManager_c *v30; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_596FC58 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_ServantClassMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    byte_596FC58 = 1;
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
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._WearerServantName_k__BackingField,
    (int32_t)ServantNameUseCommonName,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  classId = wearerMemberItem->fields.classId;
  rarityId = wearerMemberItem->fields.rarityId;
  this->fields._WearerClassId_k__BackingField = classId;
  this->fields._WearerSvtRarity_k__BackingField = rarityId;
  if ( classId >= 1 )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v12);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantClassMaster___);
    if ( !Master_object )
      goto LABEL_22;
    Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                      &entity,
                                      this->fields._WearerClassId_k__BackingField,
                                      (const MethodInfo_3F10B80 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Master_object & 1) != 0 )
    {
      if ( entity )
      {
        monitor = (struct System_String_o *)entity[1].monitor;
        goto LABEL_21;
      }
LABEL_22:
      sub_2213CDC(Master_object, v12);
    }
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v12);
  if ( !byte_596B976 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    byte_596B976 = 1;
  }
  v30 = LocalizationManager_TypeInfo;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v12);
    v30 = LocalizationManager_TypeInfo;
  }
  monitor = v30->static_fields->unknownNameText;
LABEL_21:
  this->fields._WearerServantClassName_k__BackingField = monitor;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._WearerServantClassName_k__BackingField,
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
  System_Collections_Generic_List_object__o *wearerMemberInfoList; // x19
  struct EquipGraphListViewItem_o *v7; // x8
  EquipGraphListViewItem___c__DisplayClass76_0_o *v8; // x22
  ServantEntity_o *servantEntity; // x24
  EquipGraphListViewItem_WearerMemberInfo_o *v10; // x21
  const MethodInfo *v11; // x5
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0

  v4 = this;
  if ( (byte_596FC59 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Key__);
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Value__);
    sub_2213A60(&Method_System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo__Add__);
    this = (EquipGraphListViewItem___c__DisplayClass76_0_o *)sub_2213A60(&EquipGraphListViewItem_WearerMemberInfo_TypeInfo);
    byte_596FC59 = 1;
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
        v10 = (EquipGraphListViewItem_WearerMemberInfo_o *)sub_2213CCC(EquipGraphListViewItem_WearerMemberInfo_TypeInfo),
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
    sub_2213CDC(this, x);
  }
  size = wearerMemberInfoList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      wearerMemberInfoList,
      (Il2CppObject *)v10,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
  }
  else
  {
    v21 = &items->obj.klass + size;
    wearerMemberInfoList->fields._size = size + 1;
    v21[4] = (Il2CppClass *)v10;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v21 + 4), (int32_t)v10, v12, v13, v14, v15, v16, v17);
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
  System_Collections_Generic_List_object__o *wearerMemberInfoList; // x19
  PartyOrganizationListViewItem_o *wearerMemberItem; // x23
  ServantEntity_o *servantEntity; // x24
  EquipGraphListViewItem_WearerMemberInfo_o *v10; // x21
  const MethodInfo *v11; // x5
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0

  v4 = this;
  if ( (byte_596FC5A & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Key__);
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Value__);
    sub_2213A60(&Method_System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo__Add__);
    this = (EquipGraphListViewItem___c__DisplayClass76_1_o *)sub_2213A60(&EquipGraphListViewItem_WearerMemberInfo_TypeInfo);
    byte_596FC5A = 1;
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
  v10 = (EquipGraphListViewItem_WearerMemberInfo_o *)sub_2213CCC(EquipGraphListViewItem_WearerMemberInfo_TypeInfo);
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
    sub_2213CDC(this, x);
  }
  size = wearerMemberInfoList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      wearerMemberInfoList,
      (Il2CppObject *)v10,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
  }
  else
  {
    v21 = &items->obj.klass + size;
    wearerMemberInfoList->fields._size = size + 1;
    v21[4] = (Il2CppClass *)v10;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v21 + 4), (int32_t)v10, v12, v13, v14, v15, v16, v17);
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
  System_Collections_Generic_List_object__o *wearerMemberInfoList; // x19
  PartyOrganizationListViewItem_o *equippedMemberItem; // x23
  ServantEntity_o *servantEntity; // x24
  EquipGraphListViewItem_WearerMemberInfo_o *v9; // x21
  const MethodInfo *v10; // x5
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0

  v4 = this;
  if ( (byte_596FC5B & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Key__);
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Value__);
    sub_2213A60(&Method_System_Collections_Generic_List_EquipGraphListViewItem_WearerMemberInfo__Add__);
    this = (EquipGraphListViewItem___c__DisplayClass79_0_o *)sub_2213A60(&EquipGraphListViewItem_WearerMemberInfo_TypeInfo);
    byte_596FC5B = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_9;
  wearerMemberInfoList = (System_Collections_Generic_List_object__o *)_4__this->fields.wearerMemberInfoList;
  equippedMemberItem = v4->fields.equippedMemberItem;
  servantEntity = _4__this->fields.servantEntity;
  v9 = (EquipGraphListViewItem_WearerMemberInfo_o *)sub_2213CCC(EquipGraphListViewItem_WearerMemberInfo_TypeInfo);
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
    sub_2213CDC(this, x);
  }
  size = wearerMemberInfoList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      wearerMemberInfoList,
      (Il2CppObject *)v9,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
  }
  else
  {
    v20 = &items->obj.klass + size;
    wearerMemberInfoList->fields._size = size + 1;
    v20[4] = (Il2CppClass *)v9;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v20 + 4), (int32_t)v9, v11, v12, v13, v14, v15, v16);
  }
}