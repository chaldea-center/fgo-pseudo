// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseListViewItem___ctor(
        WarehouseListViewItem_o *this,
        int32_t index,
        UserServantEntity_o *userServantEntity,
        EventUpValSetupInfo_o *setupinfo,
        System_Int64_array *partyUserServantList,
        System_Int64_array *partyUserEquipList,
        System_Int64_array *recoverySvtList,
        bool isFavorite,
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
  __int64 v31; // x1
  IconLabelInfo_o *v32; // x20
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  IconLabelInfo_o *v39; // x28
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  struct UserServantEntity_o **p_userServantEntity; // x22
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  __int64 Instance; // x0
  __int64 v60; // x1
  struct UserServantEntity_o *v61; // x8
  __int64 v62; // x26
  __int64 v63; // x27
  struct ServantEntity_o *Entity; // x0
  struct ServantEntity_o **p_servantEntity; // x26
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  struct UserServantEntity_o *v72; // x8
  ServantLimitMaster_o *v73; // x27
  int32_t svtId; // w28
  int32_t v75; // w8
  struct UserServantEntity_o *v76; // x8
  __int128 v77; // q1
  __int64 v78; // x23
  struct ServantEntity_o *servantEntity; // x8
  int32_t v80; // w8
  UserServantEntity_o *v81; // x8
  bool IsChoice; // w8
  UserServantEntity_o *v83; // x8
  UserServantEntity_o *v84; // x8
  struct UserServantEntity_o *v85; // x8
  __int128 v86; // q0
  UserServantCollectionMaster_o *v87; // x23
  struct UserServantEntity_o *v88; // x8
  int64_t v89; // x26
  __int64 v90; // x27
  __int64 v91; // x28
  struct UserServantEntity_o *v92; // x8
  __int128 v93; // q0
  int64_t v94; // x23
  signed int max_length; // w8
  unsigned int v96; // w9
  signed int v97; // w8
  unsigned int v98; // w9
  __int64 v99; // x1
  __int64 v100; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x24
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v103; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v106; // x8
  unsigned __int64 v107; // x10
  int32_t *v108; // x11
  __int64 v109; // x0
  _QWORD *v110; // x0
  __int64 v111; // x1
  __int64 v112; // x9
  __int64 v113; // x8
  __int128 v114; // q0
  System_Collections_Generic_IEnumerator_T__c *v115; // x8
  unsigned __int64 v116; // x10
  int32_t *v117; // x11
  __int64 v118; // x0
  __int64 v119; // x1
  __int64 v120; // x3
  System_Collections_Generic_IEnumerator_T__o *v121; // x24
  System_Collections_Generic_IEnumerator_T__c *v122; // x8
  unsigned __int64 v123; // x10
  int32_t *v124; // x11
  __int64 v125; // x0
  System_Collections_Generic_IEnumerator_T__c *v126; // x8
  unsigned __int64 v127; // x10
  int32_t *v128; // x11
  __int64 v129; // x0
  _QWORD *v130; // x0
  __int64 v131; // x1
  __int64 v132; // x9
  System_Collections_Generic_IEnumerator_T__c *v133; // x8
  unsigned __int64 v134; // x10
  int32_t *v135; // x11
  __int64 v136; // x0
  int v137; // w24
  BalanceConfig_c *v138; // x8
  UserServantEntity_o *v139; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  System_String_array **v141; // x2
  System_String_array **v142; // x3
  System_Boolean_array **v143; // x4
  System_Int32_array **v144; // x5
  System_Int32_array *v145; // x6
  System_Int32_array *v146; // x7
  struct System_Int32_array *EquipCategoryIdList; // x1
  System_String_array **v148; // x2
  System_String_array **v149; // x3
  System_Boolean_array **v150; // x4
  System_Int32_array **v151; // x5
  System_Int32_array *v152; // x6
  System_Int32_array *v153; // x7
  struct System_Int32_array **p_equipCategoryIdList; // x0
  const MethodInfo *v155; // x1
  signed int v156; // w8
  __int64 v157; // x9
  int64_t UserSvtId; // x0
  int64_t v159; // x8
  __int64 rarity; // x20
  __int64 v161; // x21
  __int64 lv; // x22
  struct UserServantEntity_o *v163; // x8
  __int64 v164; // x21
  __int64 v165; // x22
  IconLabelInfo_o *iconLabelInfo1; // x8
  __int64 v167; // x0
  struct IconLabelInfo_o **p_iconLabelInfo2; // [xsp+8h] [xbp-118h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v170; // [xsp+10h] [xbp-110h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v171; // [xsp+30h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v172; // [xsp+50h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v173; // [xsp+70h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v174; // [xsp+90h] [xbp-90h]
  int v175; // [xsp+B0h] [xbp-70h]
  int v176; // [xsp+C0h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v177; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v178; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v179; // 0:x0.16

  if ( (byte_4188972 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, *(_QWORD *)&index);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v16);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantClassMaster___, v17);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitMaster___, v18);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v19);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v20);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantLeaderMaster___, v21);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v22);
    sub_B2C35C(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v23);
    sub_B2C35C(&System_IDisposable_TypeInfo, v24);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v25);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v26);
    sub_B2C35C(&IconLabelInfo_TypeInfo, v27);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v28);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v29);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v30);
    sub_B2C35C(&UserServantLeaderEntity_TypeInfo, v31);
    byte_4188972 = 1;
  }
  v176 = 0;
  v32 = (IconLabelInfo_o *)sub_B2C42C(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v32, 0LL);
  this->fields.iconLabelInfo1 = v32;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo1,
    (System_Int32_array **)v32,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  v39 = (IconLabelInfo_o *)sub_B2C42C(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v39, 0LL);
  this->fields.iconLabelInfo2 = v39;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo2,
    (System_Int32_array **)v39,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  ListViewItem___ctor_24128628((ListViewItem_o *)this, index, 0LL);
  this->fields.index = index;
  this->fields.userServantEntity = userServantEntity;
  p_userServantEntity = &this->fields.userServantEntity;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.userServantEntity,
    (System_Int32_array **)userServantEntity,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52);
  this->fields.setupInfo = setupinfo;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.setupInfo,
    (System_Int32_array **)setupinfo,
    v53,
    v54,
    v55,
    v56,
    v57,
    v58);
  v61 = this->fields.userServantEntity;
  if ( !v61 )
    goto LABEL_162;
  v63 = *(_QWORD *)&v61->fields.svtId.fields.currentCryptoKey;
  v62 = *(_QWORD *)&v61->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v177.fields.currentCryptoKey = v63;
  *(_QWORD *)&v177.fields.fakeValue = v62;
  this->fields.svtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v177, 0LL);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_162;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_162;
  Entity = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                       (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                       this->fields.svtId,
                                       (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  p_servantEntity = &this->fields.servantEntity;
  this->fields.servantEntity = Entity;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.servantEntity,
    (System_Int32_array **)Entity,
    v66,
    v67,
    v68,
    v69,
    v70,
    v71);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_162;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v72 = this->fields.userServantEntity;
  if ( !v72 )
    goto LABEL_162;
  v73 = (ServantLimitMaster_o *)Instance;
  svtId = this->fields.svtId;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v72->fields.limitCount, 0LL);
  if ( !v73 )
    goto LABEL_162;
  Instance = (__int64)ServantLimitMaster__GetEntity(v73, svtId, Instance, 0LL);
  if ( !*p_servantEntity )
    goto LABEL_162;
  this->fields.classId = (*p_servantEntity)->fields.classId;
  if ( !Instance )
    goto LABEL_162;
  v75 = *(_DWORD *)(Instance + 24);
  Instance = (__int64)this->fields.userServantEntity;
  this->fields.isFavorite = isFavorite;
  this->fields.rarity = v75;
  if ( !Instance )
    goto LABEL_162;
  *(_WORD *)&this->fields.isEventJoin = UserServantEntity__IsEventJoin((UserServantEntity_o *)Instance, 0LL);
  Instance = (__int64)UserGameMaster__getSelfUserGame(0LL);
  if ( !Instance )
    goto LABEL_162;
  v76 = *p_userServantEntity;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  if ( !*p_userServantEntity )
    goto LABEL_162;
  v77 = *(_OWORD *)&v76->fields.id.fields.fakeValue;
  v78 = *(_QWORD *)(Instance + 120);
  *(_OWORD *)&v174.fields.currentCryptoKey = *(_OWORD *)&v76->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v174.fields.fakeValue = v77;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v173 = v174;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v173, 0LL);
  servantEntity = this->fields.servantEntity;
  this->fields.isPush = v78 == Instance;
  this->fields.isEnabled = 1;
  if ( !servantEntity )
    goto LABEL_162;
  if ( servantEntity->fields.type == 2 )
  {
    v80 = 1;
LABEL_26:
    this->fields.attribute = v80;
    goto LABEL_28;
  }
  Instance = (__int64)*p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_162;
  if ( UserServantEntity__IsEventJoin((UserServantEntity_o *)Instance, 0LL) )
  {
    v80 = 2;
    goto LABEL_26;
  }
  this->fields.attribute = 0;
LABEL_28:
  Instance = (__int64)*p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_162;
  Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL);
  v81 = this->fields.userServantEntity;
  this->fields.isLock = Instance & 1;
  if ( !v81 )
    goto LABEL_162;
  IsChoice = UserServantEntity__IsChoice(v81, 0LL);
  Instance = (__int64)this->fields.userServantEntity;
  this->fields.isChoice = IsChoice;
  *(_WORD *)&this->fields.isSwapLock = 0;
  this->fields.dragSelectNum = -1;
  this->fields.isEventUpVal = 0;
  *(_QWORD *)&this->fields.bonusKind = 0LL;
  if ( !Instance )
    goto LABEL_162;
  Instance = UserServantEntity__IsFriendShipSvtEquip((UserServantEntity_o *)Instance, 0LL);
  v83 = this->fields.userServantEntity;
  this->fields.isFriendShipSvtEq = Instance & 1;
  if ( !v83 )
    goto LABEL_162;
  Instance = UserServantEntity__IsChocolateSvtEquip(v83, 0LL);
  v84 = this->fields.userServantEntity;
  this->fields.isChocolateSvtEquip = Instance & 1;
  if ( !v84 )
    goto LABEL_162;
  this->fields.isMaterialTdSvt = UserServantEntity__IsMaterialTd(v84, 0LL);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_162;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v85 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_162;
  v86 = *(_OWORD *)&v85->fields.userId.fields.fakeValue;
  v87 = (UserServantCollectionMaster_o *)Instance;
  *(_OWORD *)&v174.fields.currentCryptoKey = *(_OWORD *)&v85->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v174.fields.fakeValue = v86;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v172 = v174;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v172, 0LL);
  v88 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_162;
  v89 = Instance;
  v91 = *(_QWORD *)&v88->fields.svtId.fields.currentCryptoKey;
  v90 = *(_QWORD *)&v88->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v178.fields.currentCryptoKey = v91;
  *(_QWORD *)&v178.fields.fakeValue = v90;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v178, 0LL);
  if ( !v87 )
    goto LABEL_162;
  Instance = (__int64)UserServantCollectionMaster__GetEntityDefinitely(v87, v89, Instance, 0LL);
  if ( !Instance )
    goto LABEL_162;
  Instance = UserServantCollectionEntity__getFriendShipRankInfo(
               (UserServantCollectionEntity_o *)Instance,
               &this->fields.friendship,
               &this->fields.friendshipMax,
               0LL);
  v92 = this->fields.userServantEntity;
  *(_QWORD *)&this->fields.partyIndex = 0xFFFFFFFFLL;
  if ( !v92 )
    goto LABEL_162;
  v93 = *(_OWORD *)&v92->fields.id.fields.fakeValue;
  *(_OWORD *)&v171.fields.currentCryptoKey = *(_OWORD *)&v92->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v171.fields.fakeValue = v93;
  v94 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v171, 0LL);
  Instance = (__int64)this->fields.servantEntity;
  *(_QWORD *)&this->fields.hpReinforceValue = 0LL;
  *(_QWORD *)&this->fields.nowMaxHpReinforceValue = 0LL;
  if ( !Instance )
    goto LABEL_162;
  Instance = ServantEntity__get_IsKeepServantEquip((ServantEntity_o *)Instance, 0LL);
  if ( (Instance & 1) != 0 )
  {
    if ( !partyUserEquipList )
      goto LABEL_162;
    max_length = partyUserEquipList->max_length;
    if ( max_length >= 1 )
    {
      v96 = 0;
      while ( 1 )
      {
        if ( v96 >= max_length )
          goto LABEL_164;
        if ( v94 == partyUserEquipList->m_Items[v96] )
          break;
        if ( (int)++v96 >= max_length )
          goto LABEL_62;
      }
      this->fields.partyIndex = v96;
      this->fields.isPartyEquip = 1;
      this->fields.isUse = 1;
    }
LABEL_62:
    Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_162;
    Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantLeaderMaster___);
    if ( !Instance )
      goto LABEL_162;
    Instance = *(_QWORD *)(Instance + 32);
    if ( !Instance )
      goto LABEL_162;
    Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                   (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                   (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    if ( !Enumerator )
      sub_B2C434(0LL, v99);
    while ( 1 )
    {
      klass = Enumerator->klass;
      if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
      {
        v103 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v103;
          p_offset += 4;
          if ( v103 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
            goto LABEL_70;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_70:
        p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v100);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
              Enumerator,
              *(_QWORD *)(p_method + 8)) & 1) == 0 )
        goto LABEL_88;
      v106 = Enumerator->klass;
      if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
      {
        v107 = 0LL;
        v108 = &v106->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v108 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
        {
          ++v107;
          v108 += 4;
          if ( v107 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
            goto LABEL_77;
        }
        v109 = (__int64)&v106->vtable[*v108].method;
      }
      else
      {
LABEL_77:
        v109 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v100);
      }
      v110 = (_QWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v109)(
                         Enumerator,
                         *(_QWORD *)(v109 + 8));
      if ( !v110 )
        goto LABEL_166;
      v112 = *(&UserServantLeaderEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*v110 + 300LL) < (unsigned int)v112
        || *(UserServantLeaderEntity_c **)(*(_QWORD *)(*v110 + 200LL) + 8 * v112 - 8) != UserServantLeaderEntity_TypeInfo )
      {
        break;
      }
      v113 = v110[4];
      if ( v113 )
      {
        v114 = *(_OWORD *)(v113 + 40);
        *(_OWORD *)&v174.fields.currentCryptoKey = *(_OWORD *)(v113 + 24);
        *(_OWORD *)&v174.fields.fakeValue = v114;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v170 = v174;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v170, 0LL) == v94 )
        {
          this->fields.isUseSupportEquip = 1;
LABEL_88:
          v175 = 731;
          v176 = 1;
          v115 = Enumerator->klass;
          if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
          {
            v116 = 0LL;
            v117 = &v115->_1.interfaceOffsets->offset;
            while ( *((System_IDisposable_c **)v117 - 1) != System_IDisposable_TypeInfo )
            {
              ++v116;
              v117 += 4;
              if ( v116 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
                goto LABEL_93;
            }
            v118 = (__int64)&v115->vtable[*v117].method;
          }
          else
          {
LABEL_93:
            v118 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v100);
          }
          (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v118)(
            Enumerator,
            *(_QWORD *)(v118 + 8));
          if ( v175 == 731 )
            v176 = 0;
          Instance = (__int64)*p_userServantEntity;
          if ( *p_userServantEntity )
          {
            EquipCategoryIdList = UserServantEntity__GetEquipCategoryIdList((UserServantEntity_o *)Instance, 0LL);
            p_equipCategoryIdList = &this->fields.equipCategoryIdList;
            this->fields.equipCategoryIdList = EquipCategoryIdList;
            goto LABEL_142;
          }
          goto LABEL_162;
        }
      }
    }
    Instance = sub_B2C728(v110);
LABEL_164:
    v167 = sub_B2C460(Instance);
    sub_B2C400(v167, 0LL);
  }
  if ( !partyUserServantList )
    goto LABEL_162;
  v97 = partyUserServantList->max_length;
  if ( v97 >= 1 )
  {
    v98 = 0;
    while ( 1 )
    {
      if ( v98 >= v97 )
        goto LABEL_164;
      if ( v94 == partyUserServantList->m_Items[v98] )
        break;
      if ( (int)++v98 >= v97 )
        goto LABEL_95;
    }
    this->fields.partyIndex = v98;
  }
LABEL_95:
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_162;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantLeaderMaster___);
  if ( !Instance )
    goto LABEL_162;
  Instance = *(_QWORD *)(Instance + 32);
  if ( !Instance )
    goto LABEL_162;
  v121 = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
           (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
           (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !v121 )
    sub_B2C434(0LL, v119);
  while ( 1 )
  {
    v122 = v121->klass;
    if ( *(_WORD *)&v121->klass->_2.bitflags1 )
    {
      v123 = 0LL;
      v124 = &v122->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)v124 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v123;
        v124 += 4;
        if ( v123 >= *(unsigned __int16 *)&v121->klass->_2.bitflags1 )
          goto LABEL_103;
      }
      v125 = (__int64)&v122->vtable[*v124].method;
    }
    else
    {
LABEL_103:
      v125 = sub_AC5258(v121, System_Collections_IEnumerator_TypeInfo, 0LL, v120);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v125)(
            v121,
            *(_QWORD *)(v125 + 8)) & 1) == 0 )
      break;
    v126 = v121->klass;
    if ( *(_WORD *)&v121->klass->_2.bitflags1 )
    {
      v127 = 0LL;
      v128 = &v126->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v128 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v127;
        v128 += 4;
        if ( v127 >= *(unsigned __int16 *)&v121->klass->_2.bitflags1 )
          goto LABEL_110;
      }
      v129 = (__int64)&v126->vtable[*v128].method;
    }
    else
    {
LABEL_110:
      v129 = sub_AC5258(v121, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v120);
    }
    v130 = (_QWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v129)(
                       v121,
                       *(_QWORD *)(v129 + 8));
    if ( !v130 )
      sub_B2C434(0LL, v131);
    v132 = *(&UserServantLeaderEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*v130 + 300LL) < (unsigned int)v132
      || *(UserServantLeaderEntity_c **)(*(_QWORD *)(*v130 + 200LL) + 8 * v132 - 8) != UserServantLeaderEntity_TypeInfo )
    {
      v110 = (_QWORD *)sub_B2C728(v130);
LABEL_166:
      sub_B2C434(v110, v111);
    }
    if ( v130[7] == v94 )
    {
      this->fields.isUseSupport = 1;
      break;
    }
  }
  v175 = 866;
  v176 = 1;
  v133 = v121->klass;
  if ( *(_WORD *)&v121->klass->_2.bitflags1 )
  {
    v134 = 0LL;
    v135 = &v133->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v135 - 1) != System_IDisposable_TypeInfo )
    {
      ++v134;
      v135 += 4;
      if ( v134 >= *(unsigned __int16 *)&v121->klass->_2.bitflags1 )
        goto LABEL_122;
    }
    v136 = (__int64)&v133->vtable[*v135].method;
  }
  else
  {
LABEL_122:
    v136 = sub_AC5258(v121, System_IDisposable_TypeInfo, 0LL, v120);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v136)(v121, *(_QWORD *)(v136 + 8));
  if ( v175 == 866 )
    v176 = 0;
  Instance = (__int64)*p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_162;
  v137 = *(_DWORD *)(Instance + 276);
  v138 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v138 = BalanceConfig_TypeInfo;
    Instance = (__int64)*p_userServantEntity;
  }
  this->fields.hpReinforceValue = v138->static_fields->StatusUpAdjustHp * v137;
  if ( !Instance )
    goto LABEL_162;
  this->fields.atkReinforceValue = v138->static_fields->StatusUpAdjustAtk * *(_DWORD *)(Instance + 272);
  UserServantEntity__getAdjustMaxData(
    (UserServantEntity_o *)Instance,
    &this->fields.nowMaxHpReinforceValue,
    &this->fields.nowMaxAtkReinforceValue,
    0LL);
  Instance = (__int64)this->fields.userServantEntity;
  if ( !Instance )
    goto LABEL_162;
  Instance = UserServantEntity__getDispLimitCount((UserServantEntity_o *)Instance, 0, 0LL);
  v139 = this->fields.userServantEntity;
  this->fields.dispLimitCount = Instance;
  if ( !v139 )
    goto LABEL_162;
  SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v139, -1, 0LL);
  this->fields.skillCategoryIdList = SkillCategoryIdList;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.skillCategoryIdList,
    (System_Int32_array **)SkillCategoryIdList,
    v141,
    v142,
    v143,
    v144,
    v145,
    v146);
  Instance = (__int64)this->fields.userServantEntity;
  if ( !Instance )
    goto LABEL_162;
  EquipCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList((UserServantEntity_o *)Instance, 0, 0LL);
  p_equipCategoryIdList = &this->fields.tdCategoryIdList;
  this->fields.tdCategoryIdList = EquipCategoryIdList;
LABEL_142:
  sub_B2C2F8(
    (BattleServantConfConponent_o *)p_equipCategoryIdList,
    (System_Int32_array **)EquipCategoryIdList,
    v148,
    v149,
    v150,
    v151,
    v152,
    v153);
  this->fields.isFatigueRecovery = 0;
  if ( recoverySvtList )
  {
    v156 = recoverySvtList->max_length;
    if ( v156 >= 1 )
    {
      v157 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v157 >= v156 )
          goto LABEL_164;
        if ( recoverySvtList->m_Items[v157] == v94 )
          break;
        if ( (int)++v157 >= v156 )
          goto LABEL_150;
      }
      this->fields.isFatigueRecovery = 1;
    }
  }
LABEL_150:
  UserSvtId = WarehouseListViewItem__get_UserSvtId(this, v155);
  EventFortificationDataLogic__SetFortification(
    &this->fields.isFortification,
    &this->fields.fortificationName,
    &this->fields.fortificationDetailName,
    UserSvtId,
    0LL);
  this->fields.amountSortValue = -1LL;
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_162;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Instance )
    goto LABEL_162;
  Instance = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                        (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                        this->fields.classId,
                        (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_162;
  v159 = *(int *)(Instance + 48);
  Instance = (__int64)this->fields.servantEntity;
  this->fields.priority = v159;
  this->fields.sortValue1B = v159;
  if ( !Instance )
    goto LABEL_162;
  if ( !*p_userServantEntity )
    goto LABEL_162;
  rarity = (unsigned int)this->fields.rarity;
  v161 = *(int *)(Instance + 208);
  lv = (*p_userServantEntity)->fields.lv;
  Instance = ServantEntity__get_IsServantMaterialTd((ServantEntity_o *)Instance, 0LL);
  v163 = this->fields.userServantEntity;
  this->fields.sortValue2 = (v161 << 16) | (rarity << 48) | (2 * lv) | Instance & 1;
  if ( !v163 )
    goto LABEL_162;
  v165 = *(_QWORD *)&v163->fields.svtId.fields.currentCryptoKey;
  v164 = *(_QWORD *)&v163->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v179.fields.currentCryptoKey = v165;
  *(_QWORD *)&v179.fields.fakeValue = v164;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v179, 0LL);
  iconLabelInfo1 = this->fields.iconLabelInfo1;
  this->fields.sortValue2B = (int)Instance;
  if ( !iconLabelInfo1 || (IconLabelInfo__Clear(iconLabelInfo1, 0LL), (Instance = (__int64)*p_iconLabelInfo2) == 0) )
LABEL_162:
    sub_B2C434(Instance, v60);
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0LL);
}


void __fastcall WarehouseListViewItem__Finalize(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  ListViewItem__Finalize((ListViewItem_o *)this, 0LL);
}


bool __fastcall WarehouseListViewItem__IsMatchFilter(
        WarehouseListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  __int64 v5; // x1
  ServantEntity_o *servantEntity; // x0
  const MethodInfo *v8; // x2

  if ( ListViewItem__get_IsSelect((ListViewItem_o *)this, 0LL) )
    return 1;
  servantEntity = this->fields.servantEntity;
  if ( !servantEntity )
    sub_B2C434(0LL, v5);
  if ( ServantEntity__get_IsKeepServantEquip(servantEntity, 0LL) )
    return WarehouseListViewItem__IsMatchServantEquipFilter(this, sort, v8);
  return WarehouseListViewItem__IsMatchServantFilter(this, sort, v8);
}


bool __fastcall WarehouseListViewItem__IsMatchServantEquipFilter(
        WarehouseListViewItem_o *this,
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

  if ( (byte_4188975 & 1) == 0 )
  {
    sub_B2C35C(&FilterKindList_TypeInfo, sort);
    sub_B2C35C(&ListViewSort_FilterKind___TypeInfo, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v6);
    byte_4188975 = 1;
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
    && !ServantEquipEffectFilterController__IsMatchEffectCategory(this->fields.equipCategoryIdList, sort, 0LL) )
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


bool __fastcall WarehouseListViewItem__IsMatchServantFilter(
        WarehouseListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  FilterKindList_c *v8; // x0
  __int64 ClassGroupFilterKindList; // x0
  FilterKindList_c *v10; // x0
  ListViewSort_FilterKind_array *v11; // x0
  FilterKindList_c *v12; // x0
  ListViewSort_FilterKind_array *v13; // x0
  FilterKindList_c *v14; // x0
  ListViewSort_FilterKind_array *v15; // x0
  FilterKindList_c *v16; // x0
  ListViewSort_FilterKind_array *v17; // x0
  UserServantEntity_o *userServantEntity; // x21
  FilterKindList_c *v19; // x0
  ListViewSort_FilterKind_array *v20; // x21
  UserServantEntity_o *v22; // x0
  int32_t dispLimitCount; // w21
  UserServantEntity_o *v24; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  _BOOL4 IsUnSelectedAllTargetFilters; // w21
  _BOOL4 v40; // w23
  _BOOL4 IsMatchEffectCategory; // w22
  _BOOL4 v42; // w0
  __int64 v43; // x0

  if ( (byte_4188974 & 1) == 0 )
  {
    sub_B2C35C(&FilterKindList_TypeInfo, sort);
    sub_B2C35C(&ListViewSort_FilterKind___TypeInfo, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v6);
    sub_B2C35C(&ServantEventBonusFilterController_TypeInfo, v7);
    byte_4188974 = 1;
  }
  v8 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v8 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v8->static_fields->ClassGroupFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_72;
  ClassGroupFilterKindList = (__int64)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                        (System_Collections_Generic_List_Voice_BATTLE__o *)ClassGroupFilterKindList,
                                        (const MethodInfo_2F6C0DC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_72;
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0LL) )
  {
    v10 = FilterKindList_TypeInfo;
    if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
      v10 = FilterKindList_TypeInfo;
    }
    ClassGroupFilterKindList = (__int64)v10->static_fields->ClassFilterKindList;
    if ( !ClassGroupFilterKindList )
      goto LABEL_72;
    v11 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                             (System_Collections_Generic_List_Voice_BATTLE__o *)ClassGroupFilterKindList,
                                             (const MethodInfo_2F6C0DC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v11, 0LL)
      && !ListViewSort__IsMatchClassFilter(sort, this->fields.servantEntity, 0LL) )
    {
      return 0;
    }
  }
  else if ( !ListViewSort__IsMatchClassGroupFilter(sort, this->fields.servantEntity, 0LL) )
  {
    return 0;
  }
  v12 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v12 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v12->static_fields->NpTypeFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_72;
  v13 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           (System_Collections_Generic_List_Voice_BATTLE__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_2F6C0DC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v13, 0LL)
    && !ListViewSort__IsMatchNPTypeFilter(sort, this->fields.userServantEntity, 0LL) )
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
  ClassGroupFilterKindList = (__int64)v14->static_fields->NpEffectFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_72;
  v15 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           (System_Collections_Generic_List_Voice_BATTLE__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_2F6C0DC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v15, 0LL)
    && !ListViewSort__IsMatchNPEffectFilter(sort, this->fields.userServantEntity, 0LL) )
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
  ClassGroupFilterKindList = (__int64)v16->static_fields->ServantTypeFilterKindList;
  if ( !ClassGroupFilterKindList )
LABEL_72:
    sub_B2C434(ClassGroupFilterKindList, sort);
  v17 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           (System_Collections_Generic_List_Voice_BATTLE__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_2F6C0DC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v17, 0LL)
    && !ListViewSort__IsMatchServantTypeFilter(sort, this->fields.servantEntity, 0LL) )
  {
    return 0;
  }
  if ( !ListViewSort__CheckSvtEventBonusFilterDefaultAll(sort, -1, 0LL) )
  {
    userServantEntity = this->fields.userServantEntity;
    if ( (BYTE3(ServantEventBonusFilterController_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantEventBonusFilterController_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantEventBonusFilterController_TypeInfo);
    }
    if ( ServantEventBonusFilterController__IsHideServant(userServantEntity, sort, -1, 0LL) )
      return 0;
  }
  if ( !ListViewSort__CheckSvtEquipEffectFilterDefaultAll(sort, 0LL) )
  {
    v22 = this->fields.userServantEntity;
    if ( v22 )
    {
      dispLimitCount = this->fields.dispLimitCount;
      if ( dispLimitCount != UserServantEntity__getDispLimitCount(v22, 0, 0LL) )
      {
        ClassGroupFilterKindList = (__int64)this->fields.userServantEntity;
        if ( !ClassGroupFilterKindList )
          goto LABEL_72;
        ClassGroupFilterKindList = UserServantEntity__getDispLimitCount(
                                     (UserServantEntity_o *)ClassGroupFilterKindList,
                                     0,
                                     0LL);
        v24 = this->fields.userServantEntity;
        this->fields.dispLimitCount = ClassGroupFilterKindList;
        if ( !v24 )
          goto LABEL_72;
        SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v24, -1, 0LL);
        this->fields.skillCategoryIdList = SkillCategoryIdList;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&this->fields.skillCategoryIdList,
          (System_Int32_array **)SkillCategoryIdList,
          v26,
          v27,
          v28,
          v29,
          v30,
          v31);
        ClassGroupFilterKindList = (__int64)this->fields.userServantEntity;
        if ( !ClassGroupFilterKindList )
          goto LABEL_72;
        TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                         (UserServantEntity_o *)ClassGroupFilterKindList,
                                         0,
                                         0LL);
        this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&this->fields.tdCategoryIdList,
          (System_Int32_array **)TreasureDeviceCategoryIdList,
          v33,
          v34,
          v35,
          v36,
          v37,
          v38);
      }
    }
    ClassGroupFilterKindList = sub_B2C374(ListViewSort_FilterKind___TypeInfo, 1LL);
    if ( !ClassGroupFilterKindList )
      goto LABEL_72;
    if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
      goto LABEL_73;
    *(_DWORD *)(ClassGroupFilterKindList + 32) = 50;
    IsUnSelectedAllTargetFilters = ListViewSort__IsUnSelectedAllTargetFilters(
                                     sort,
                                     (ListViewSort_FilterKind_array *)ClassGroupFilterKindList,
                                     0LL);
    ClassGroupFilterKindList = sub_B2C374(ListViewSort_FilterKind___TypeInfo, 1LL);
    if ( !ClassGroupFilterKindList )
      goto LABEL_72;
    if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
    {
LABEL_73:
      v43 = sub_B2C460(ClassGroupFilterKindList);
      sub_B2C400(v43, 0LL);
    }
    *(_DWORD *)(ClassGroupFilterKindList + 32) = 51;
    v40 = ListViewSort__IsUnSelectedAllTargetFilters(
            sort,
            (ListViewSort_FilterKind_array *)ClassGroupFilterKindList,
            0LL);
    IsMatchEffectCategory = ServantEquipEffectFilterController__IsMatchEffectCategory(
                              this->fields.tdCategoryIdList,
                              sort,
                              0LL);
    v42 = ServantEquipEffectFilterController__IsMatchEffectCategory(this->fields.skillCategoryIdList, sort, 0LL);
    if ( ((IsUnSelectedAllTargetFilters ^ v40) & 1) != 0 )
    {
      if ( IsUnSelectedAllTargetFilters )
      {
        if ( !v42 )
          return 0;
      }
      else if ( !IsMatchEffectCategory )
      {
        return 0;
      }
    }
    else if ( !IsMatchEffectCategory && !v42 )
    {
      return 0;
    }
  }
  ClassGroupFilterKindList = sub_B2C374(ListViewSort_FilterKind___TypeInfo, 1LL);
  if ( !ClassGroupFilterKindList )
    goto LABEL_72;
  if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
    goto LABEL_73;
  *(_DWORD *)(ClassGroupFilterKindList + 32) = 39;
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0LL)
    && ListViewSort__GetFilter(sort, 39, 0LL)
    && this->fields.isSwapChoice == this->fields.isChoice )
  {
    return 0;
  }
  v19 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v19 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v19->static_fields->RarityFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_72;
  v20 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           (System_Collections_Generic_List_Voice_BATTLE__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_2F6C0DC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v20, 0LL)
      || ListViewSort__IsSelectedAllTargetFilters(sort, v20, 0LL)
      || ListViewSort__IsMatchRarityFilter(sort, this->fields.rarity, 0LL);
}


void __fastcall WarehouseListViewItem__Modify(
        WarehouseListViewItem_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct UserServantEntity_o **p_userServantEntity; // x20
  __int64 v10; // x1
  UserServantEntity_o *IsLock; // x0
  UserServantEntity_o *v12; // x8
  bool IsChoice; // w0

  this->fields.userServantEntity = userServantEntity;
  p_userServantEntity = &this->fields.userServantEntity;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.userServantEntity,
    (System_Int32_array **)userServantEntity,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  IsLock = *p_userServantEntity;
  *((_BYTE *)p_userServantEntity + 144) = 0;
  p_userServantEntity[17] = 0LL;
  if ( !IsLock
    || (IsLock = (UserServantEntity_o *)UserServantEntity__IsLock(IsLock, 0LL),
        v12 = this->fields.userServantEntity,
        this->fields.isLock = (unsigned __int8)IsLock & 1,
        !v12) )
  {
    sub_B2C434(IsLock, v10);
  }
  IsChoice = UserServantEntity__IsChoice(v12, 0LL);
  *(_WORD *)&this->fields.isSwapLock = 0;
  this->fields.isChoice = IsChoice;
  this->fields.dragSelectNum = -1;
}


void __fastcall WarehouseListViewItem__ModifyItem(
        WarehouseListViewItem_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct UserServantEntity_o **p_userServantEntity; // x19

  this->fields.userServantEntity = userServantEntity;
  p_userServantEntity = &this->fields.userServantEntity;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.userServantEntity,
    (System_Int32_array **)userServantEntity,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  *((_BYTE *)p_userServantEntity + 144) = 0;
  p_userServantEntity[17] = 0LL;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseListViewItem__Modify_26880604(
        WarehouseListViewItem_o *this,
        bool isFavorite,
        bool isPush,
        const MethodInfo *method)
{
  UserServantEntity_o *userServantEntity; // x0
  UserServantEntity_o *v6; // x8
  bool IsChoice; // w0

  userServantEntity = this->fields.userServantEntity;
  this->fields.isFavorite = isFavorite;
  this->fields.isPush = isPush;
  if ( !userServantEntity
    || (userServantEntity = (UserServantEntity_o *)UserServantEntity__IsLock(userServantEntity, 0LL),
        v6 = this->fields.userServantEntity,
        this->fields.isLock = (unsigned __int8)userServantEntity & 1,
        !v6) )
  {
    sub_B2C434(userServantEntity, isFavorite);
  }
  IsChoice = UserServantEntity__IsChoice(v6, 0LL);
  *(_WORD *)&this->fields.isSwapLock = 0;
  this->fields.isChoice = IsChoice;
  this->fields.dragSelectNum = -1;
}


bool __fastcall WarehouseListViewItem__SetSortValue(
        WarehouseListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  ListViewSort_o *v3; // x20
  WarehouseListViewItem_o *v4; // x19
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
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  int64_t *p_sortValue0; // x23
  int64_t priority; // x8
  EventUpValSetupInfo_o *setupInfo; // x4
  int32_t bonusKind; // w8
  int32_t v23; // w5
  int32_t bonusKind2; // w8
  int32_t *v25; // x8
  int32_t bonusKindId; // w9
  int32_t *p_bonusKindId; // x8
  int32_t bonusKind2Id; // w10
  int32_t *v29; // x9
  int32_t *p_bonusKind2Id; // x8
  System_Int32_array *v31; // x21
  System_Int32_array *OtherEventEquipIdList; // x21
  System_Func_int__bool__o *v33; // x0
  __int64 *v34; // x8
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  int32_t svtId; // w22
  ServantFilterMaster_o *v37; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v38; // kr00_16
  bool IsEnableServant; // w0
  System_Int32_array *eventIdList; // x21
  System_Func_T__bool__o *v41; // x22
  int v42; // w21
  const MethodInfo *v43; // x2
  __int64 v44; // x8
  struct UserServantEntity_o *v45; // x8
  __int128 v46; // q1
  struct UserServantEntity_o *v47; // x8
  IconLabelInfo_o *iconLabelInfo2; // x20
  int32_t v49; // w21
  bool IsMaterialTd; // w8
  int64_t friendship; // x2
  int32_t friendshipMax; // w3
  int32_t v53; // w1
  struct UserServantEntity_o *v54; // x8
  int32_t adjustHp; // w3
  int32_t hp; // w2
  int32_t v57; // w1
  __int64 v58; // x20
  __int64 v59; // x20
  WarehouseListViewItem_o *v60; // x20
  __int64 v61; // x21
  __int64 v62; // x21
  int32_t FirstOpenEventId; // w20
  __int64 v64; // x21
  __int64 v65; // x21
  int64_t targetId; // x8
  struct UserServantEntity_o *v67; // x8
  IconLabelInfo_o *iconLabelInfo1; // x19
  int64_t rarity; // x8
  struct ServantEntity_o *servantEntity; // x8
  __int64 v71; // x10
  struct ServantEntity_o *v72; // x8
  __int64 collectionNo; // x10
  struct UserServantEntity_o *v74; // x8
  int32_t lv; // w20
  IconLabelInfo_o *v76; // x20
  int32_t v77; // w21
  UserServantEntity_o *userServantEntity; // x0
  __int64 v79; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v81; // [xsp+10h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v82; // [xsp+30h] [xbp-60h]
  WarEntity_o *entity; // [xsp+58h] [xbp-38h] BYREF
  int32_t tdMaxLv[2]; // [xsp+68h] [xbp-28h] BYREF

  v3 = sort;
  v4 = this;
  if ( (byte_4188973 & 1) == 0 )
  {
    sub_B2C35C(&Method_BasicHelper_Any_int____67380496, sort);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventBonusFilterMaster___, v5);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventGroupMaster___, v6);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventMaster___, v7);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantFilterMaster___, v8);
    sub_B2C35C(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v9);
    sub_B2C35C(&Method_System_Func_int__bool___ctor__, v10);
    sub_B2C35C(&System_Func_int__bool__TypeInfo, v11);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v14);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_B2C35C(&Method_WarehouseListViewItem__SetSortValue_b__61_0__, v16);
    sub_B2C35C(&Method_WarehouseListViewItem__SetSortValue_b__61_1__, v17);
    this = (WarehouseListViewItem_o *)sub_B2C35C(&WarehouseListViewManager_TypeInfo, v18);
    byte_4188973 = 1;
  }
  *(_QWORD *)tdMaxLv = 0LL;
  entity = 0LL;
  v4->fields.sortValue0 = 0LL;
  p_sortValue0 = &v4->fields.sortValue0;
  priority = v4->fields.priority;
  *(_WORD *)&v4->fields.isTermination = 0;
  v4->fields.sortValue1 = -1LL;
  v4->fields.sortValue1B = priority;
  v4->fields.isNeedAdjustIconLabelScale = 0;
  if ( !v3 )
    goto LABEL_172;
  if ( !v3->fields.isBonusKind )
    goto LABEL_53;
  setupInfo = v4->fields.setupInfo;
  if ( !setupInfo )
    goto LABEL_172;
  if ( !setupInfo->fields.isQuestStart )
  {
    bonusKind2 = v3->fields.bonusKind2;
    if ( bonusKind2 == 4 )
    {
      if ( v4->fields.bonusKind == 4 )
      {
        p_bonusKind2Id = &v3->fields.bonusKind2Id;
        if ( v4->fields.bonusKindId == v3->fields.bonusKind2Id )
          goto LABEL_30;
      }
      else
      {
        p_bonusKind2Id = &v3->fields.bonusKind2Id;
      }
      v4->fields.bonusKind = 4;
      v4->fields.bonusKindId = *p_bonusKind2Id;
      eventIdList = setupInfo->fields.eventIdList;
      this = (WarehouseListViewItem_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_172;
      this = (WarehouseListViewItem_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventBonusFilterMaster___);
      if ( !this )
        goto LABEL_172;
      OtherEventEquipIdList = EventBonusFilterMaster__GetOtherEventEquipIdList(
                                (EventBonusFilterMaster_o *)this,
                                eventIdList,
                                0LL);
      v33 = (System_Func_int__bool__o *)sub_B2C42C(System_Func_int__bool__TypeInfo);
      v34 = &Method_WarehouseListViewItem__SetSortValue_b__61_1__;
      goto LABEL_47;
    }
    if ( bonusKind2 != 2 )
    {
      if ( bonusKind2 != 1 )
        goto LABEL_53;
      if ( v4->fields.bonusKind == 1 )
      {
        v25 = &v3->fields.bonusKind2Id;
        if ( v4->fields.bonusKindId == v3->fields.bonusKind2Id )
          goto LABEL_30;
      }
      else
      {
        v25 = &v3->fields.bonusKind2Id;
      }
      v4->fields.bonusKind = 1;
      v23 = *v25;
      goto LABEL_50;
    }
    if ( v4->fields.bonusKind == 2 )
    {
      bonusKindId = v4->fields.bonusKindId;
      p_bonusKindId = &v3->fields.bonusKind2Id;
      bonusKind2Id = v3->fields.bonusKind2Id;
LABEL_26:
      if ( bonusKindId == bonusKind2Id )
        goto LABEL_30;
      goto LABEL_37;
    }
    p_bonusKindId = &v3->fields.bonusKind2Id;
LABEL_37:
    v4->fields.bonusKind = 2;
    v4->fields.bonusKindId = *p_bonusKindId;
    this = (WarehouseListViewItem_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             (DataManager_o *)this,
                                             (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantFilterMaster___);
      svtId = v4->fields.svtId;
      v37 = (ServantFilterMaster_o *)MasterData_WarQuestSelectionMaster;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      v38 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(svtId, 0LL);
      sort = *(ListViewSort_o **)&v38.fields.fakeValue;
      this = *(WarehouseListViewItem_o **)&v38.fields.currentCryptoKey;
      if ( v37 )
      {
        IsEnableServant = ServantFilterMaster__IsEnableServant(v37, v38, v4->fields.bonusKindId, 0LL);
        goto LABEL_52;
      }
    }
LABEL_172:
    sub_B2C434(this, sort);
  }
  bonusKind = v3->fields.bonusKind;
  if ( bonusKind == 2 )
  {
    if ( v4->fields.bonusKind == 2 )
    {
      bonusKindId = v4->fields.bonusKindId;
      p_bonusKindId = &v3->fields.bonusKindId;
      bonusKind2Id = v3->fields.bonusKindId;
      goto LABEL_26;
    }
    p_bonusKindId = &v3->fields.bonusKindId;
    goto LABEL_37;
  }
  if ( bonusKind != 1 )
  {
    if ( v3->fields.bonusKind2 != 4 )
      goto LABEL_53;
    if ( v4->fields.bonusKind != bonusKind )
    {
      v29 = &v3->fields.bonusKindId;
      goto LABEL_33;
    }
    v29 = &v3->fields.bonusKindId;
    if ( v4->fields.bonusKindId != v3->fields.bonusKindId )
    {
LABEL_33:
      v4->fields.bonusKind = bonusKind;
      v4->fields.bonusKindId = *v29;
      v31 = setupInfo->fields.eventIdList;
      this = (WarehouseListViewItem_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_172;
      this = (WarehouseListViewItem_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventBonusFilterMaster___);
      if ( !this )
        goto LABEL_172;
      OtherEventEquipIdList = EventBonusFilterMaster__GetOtherEventEquipIdList(
                                (EventBonusFilterMaster_o *)this,
                                v31,
                                0LL);
      v33 = (System_Func_int__bool__o *)sub_B2C42C(System_Func_int__bool__TypeInfo);
      v34 = &Method_WarehouseListViewItem__SetSortValue_b__61_0__;
LABEL_47:
      v41 = (System_Func_T__bool__o *)v33;
      System_Func_int__bool____ctor(
        v33,
        (Il2CppObject *)v4,
        *v34,
        (const MethodInfo_270C930 *)Method_System_Func_int__bool___ctor__);
      IsEnableServant = BasicHelper__Any_int__24273940(
                          OtherEventEquipIdList,
                          v41,
                          (const MethodInfo_1726414 *)Method_BasicHelper_Any_int____67380496);
      goto LABEL_52;
    }
LABEL_30:
    if ( !v4->fields.isEventUpVal )
      goto LABEL_61;
    goto LABEL_53;
  }
  if ( v4->fields.bonusKind == 1 )
    goto LABEL_30;
  v4->fields.bonusKind = 1;
  v23 = v3->fields.bonusKindId;
LABEL_50:
  this = (WarehouseListViewItem_o *)v4->fields.userServantEntity;
  v4->fields.bonusKindId = v23;
  if ( !this )
    goto LABEL_172;
  IsEnableServant = UserServantEntity__getEventUpVal_21652484(
                      (UserServantEntity_o *)this,
                      -1,
                      0,
                      0,
                      setupInfo,
                      v23,
                      0,
                      0LL);
LABEL_52:
  v4->fields.isEventUpVal = IsEnableServant;
  if ( !IsEnableServant )
  {
LABEL_61:
    LOBYTE(this) = 0;
    return (char)this;
  }
LABEL_53:
  if ( (((__int64 (__fastcall *)(WarehouseListViewItem_o *, ListViewSort_o *, void *))v4->klass->vtable._5_IsMatchFilter.method)(
          v4,
          v3,
          v4->klass[1]._1.image) & 1) == 0 )
    goto LABEL_61;
  this = (WarehouseListViewItem_o *)v4->fields.iconLabelInfo2;
  if ( !this )
    goto LABEL_172;
  v42 = v4->fields.isSwapChoice ^ v4->fields.isChoice;
  IconLabelInfo__Clear((IconLabelInfo_o *)this, 0LL);
  *p_sortValue0 = 0LL;
  v4->fields.sortValue0B = 0LL;
  if ( !v3->fields.isSmartSort )
  {
    if ( !((v42 ^ 1) & 1 | !v3->fields.isChoiceSort) )
      *p_sortValue0 = -10LL;
    goto LABEL_71;
  }
  this = (WarehouseListViewItem_o *)v4->fields.servantEntity;
  if ( !this )
    goto LABEL_172;
  if ( ServantEntity__get_IsKeepServantEquip((ServantEntity_o *)this, 0LL) )
  {
    if ( !v4->fields.isPartyEquip )
    {
      if ( !v4->fields.isUseSupportEquip )
        goto LABEL_69;
      goto LABEL_67;
    }
LABEL_65:
    v44 = -20LL;
LABEL_68:
    *p_sortValue0 = v44;
    goto LABEL_69;
  }
  if ( (v4->fields.partyIndex & 0x80000000) == 0 )
    goto LABEL_65;
  if ( v4->fields.isUseSupport )
  {
LABEL_67:
    v44 = -30LL;
    goto LABEL_68;
  }
  if ( v4->fields.attribute )
  {
    v44 = -40LL;
    goto LABEL_68;
  }
  if ( v4->fields.isFavorite )
  {
    v44 = -50LL;
    goto LABEL_68;
  }
  if ( v4->fields.isPush )
  {
    v44 = -55LL;
    goto LABEL_68;
  }
  userServantEntity = v4->fields.userServantEntity;
  if ( userServantEntity && UserServantEntity__IsProtectedEventServant(userServantEntity, 0LL)
    || v4->fields.isFortification )
  {
    v44 = -10LL;
    goto LABEL_68;
  }
LABEL_69:
  if ( !((v42 ^ 1) & 1 | !v3->fields.isChoiceSort) )
    *(_OWORD *)p_sortValue0 = xmmword_31A31C0;
LABEL_71:
  this = (WarehouseListViewItem_o *)(&dword_0 + 1);
  switch ( v3->fields.sortKind )
  {
    case 1:
      v45 = v4->fields.userServantEntity;
      if ( !v45 )
        goto LABEL_172;
      v46 = *(_OWORD *)&v45->fields.id.fields.fakeValue;
      *(_OWORD *)&v82.fields.currentCryptoKey = *(_OWORD *)&v45->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v82.fields.fakeValue = v46;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v81 = v82;
      this = (WarehouseListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v81, 0LL);
      v47 = v4->fields.userServantEntity;
      v4->fields.sortValue1 = (int64_t)this;
      if ( !v47 )
        goto LABEL_172;
      this = (WarehouseListViewItem_o *)v4->fields.iconLabelInfo1;
      if ( !this )
        goto LABEL_172;
      IconLabelInfo__SetTime((IconLabelInfo_o *)this, 49, v47->fields.createdAt, 0, 0, 0, 0LL);
      this = (WarehouseListViewItem_o *)v4->fields.userServantEntity;
      if ( !this )
        goto LABEL_172;
      iconLabelInfo2 = v4->fields.iconLabelInfo2;
      v49 = *(_DWORD *)&this->fields.isEventUpVal;
      this = (WarehouseListViewItem_o *)UserServantEntity__getLevelMax((UserServantEntity_o *)this, 0LL);
      if ( !iconLabelInfo2 )
        goto LABEL_172;
      IconLabelInfo__Set_27362128(iconLabelInfo2, 2, v49, (int32_t)this, 0, 0, 0, 0, 0LL);
      this = (WarehouseListViewItem_o *)v4->fields.userServantEntity;
      if ( !this )
        goto LABEL_172;
      IsMaterialTd = UserServantEntity__IsMaterialTd((UserServantEntity_o *)this, 0LL);
      LOBYTE(this) = 1;
      if ( IsMaterialTd )
        v4->fields.isNeedAdjustIconLabelScale = 1;
      return (char)this;
    case 2:
      rarity = v4->fields.rarity;
      this = (WarehouseListViewItem_o *)v4->fields.userServantEntity;
      goto LABEL_129;
    case 3:
      this = (WarehouseListViewItem_o *)v4->fields.userServantEntity;
      if ( !this )
        goto LABEL_172;
      v4->fields.sortValue1 = *(int *)&this->fields.isEventUpVal;
      goto LABEL_158;
    case 4:
      this = (WarehouseListViewItem_o *)v4->fields.userServantEntity;
      if ( !this )
        goto LABEL_172;
      UserServantEntity__getTreasureDeviceInfo_21659764((UserServantEntity_o *)this, &tdMaxLv[1], tdMaxLv, 0LL);
      LODWORD(friendship) = tdMaxLv[1];
      this = (WarehouseListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = tdMaxLv[1];
      if ( !this )
        goto LABEL_172;
      friendshipMax = tdMaxLv[0];
      v53 = 33;
      goto LABEL_141;
    case 5:
      v54 = v4->fields.userServantEntity;
      if ( !v54 )
        goto LABEL_172;
      this = (WarehouseListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = v54->fields.hp;
      if ( !this )
        goto LABEL_172;
      adjustHp = v54->fields.adjustHp;
      hp = v54->fields.hp;
      v57 = 3;
      goto LABEL_115;
    case 6:
      v67 = v4->fields.userServantEntity;
      if ( !v67 )
        goto LABEL_172;
      this = (WarehouseListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = v67->fields.atk;
      if ( !this )
        goto LABEL_172;
      adjustHp = v67->fields.adjustAtk;
      hp = v67->fields.atk;
      v57 = 5;
LABEL_115:
      IconLabelInfo__Set_27362128((IconLabelInfo_o *)this, v57, hp, adjustHp, 0, 0, 0, 0, 0LL);
      this = (WarehouseListViewItem_o *)v4->fields.userServantEntity;
      if ( !this )
        goto LABEL_172;
      iconLabelInfo1 = v4->fields.iconLabelInfo2;
      goto LABEL_159;
    case 7:
      servantEntity = v4->fields.servantEntity;
      if ( !servantEntity )
        goto LABEL_172;
      this = (WarehouseListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = servantEntity->fields.cost;
      if ( !this )
        goto LABEL_172;
      IconLabelInfo__Set_27362128((IconLabelInfo_o *)this, 7, servantEntity->fields.cost, 0, 0, 0, 0, 0, 0LL);
      goto LABEL_142;
    case 8:
      this = (WarehouseListViewItem_o *)v4->fields.userServantEntity;
      rarity = -v4->fields.priority;
LABEL_129:
      v4->fields.sortValue1 = rarity;
      if ( !this )
        goto LABEL_172;
      goto LABEL_158;
    case 0xA:
      friendship = v4->fields.friendship;
      this = (WarehouseListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = friendship;
      if ( !this )
        goto LABEL_172;
      friendshipMax = v4->fields.friendshipMax;
      v53 = 32;
      goto LABEL_141;
    case 0xE:
      this = (WarehouseListViewItem_o *)v4->fields.amountSortValue;
      if ( ((unsigned __int64)this & 0x8000000000000000LL) == 0 )
        goto LABEL_136;
      this = (WarehouseListViewItem_o *)v3->fields.manager;
      if ( !this )
        goto LABEL_172;
      v71 = *(&WarehouseListViewManager_TypeInfo->_2.bitflags2 + 1);
      if ( *(&this->klass->_2.bitflags2 + 1) < (unsigned int)v71
        || (WarehouseListViewManager_c *)this->klass->_2.typeHierarchy[v71 - 1] != WarehouseListViewManager_TypeInfo )
      {
        goto LABEL_172;
      }
      this = (WarehouseListViewItem_o *)WarehouseListViewManager__GetAmountSortValue(
                                          (WarehouseListViewManager_o *)this,
                                          v4->fields.svtId,
                                          v43);
      v4->fields.amountSortValue = (int64_t)this;
LABEL_136:
      v72 = v4->fields.servantEntity;
      if ( !v72 )
        goto LABEL_172;
      collectionNo = v72->fields.collectionNo;
      v74 = v4->fields.userServantEntity;
      v4->fields.sortValue1 = (((unsigned __int64)(unsigned int)v4->fields.rarity << 32) + ((_QWORD)this << 48)) | collectionNo;
      if ( !v74 )
        goto LABEL_172;
      iconLabelInfo1 = v4->fields.iconLabelInfo1;
      lv = v74->fields.lv;
      this = (WarehouseListViewItem_o *)v74;
      goto LABEL_160;
    case 0xF:
      friendship = v4->fields.hpReinforceValue;
      this = (WarehouseListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = friendship;
      if ( !this )
        goto LABEL_172;
      friendshipMax = v4->fields.nowMaxHpReinforceValue;
      v53 = 44;
      goto LABEL_141;
    case 0x10:
      friendship = v4->fields.atkReinforceValue;
      this = (WarehouseListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = friendship;
      if ( !this )
        goto LABEL_172;
      friendshipMax = v4->fields.nowMaxAtkReinforceValue;
      v53 = 45;
LABEL_141:
      IconLabelInfo__Set_27362128((IconLabelInfo_o *)this, v53, friendship, friendshipMax, 0, 0, 0, 0, 0LL);
LABEL_142:
      this = (WarehouseListViewItem_o *)v4->fields.userServantEntity;
      if ( !this )
        goto LABEL_172;
      v76 = v4->fields.iconLabelInfo2;
      v77 = *(_DWORD *)&this->fields.isEventUpVal;
      this = (WarehouseListViewItem_o *)UserServantEntity__getLevelMax((UserServantEntity_o *)this, 0LL);
      if ( !v76 )
        goto LABEL_172;
      IconLabelInfo__Set_27362128(v76, 2, v77, (int32_t)this, 0, 0, 0, 0, 0LL);
      this = (WarehouseListViewItem_o *)v4->fields.servantEntity;
      if ( !this )
        goto LABEL_172;
      if ( ServantEntity__get_IsExpUp((ServantEntity_o *)this, 0LL) )
        goto LABEL_150;
      this = (WarehouseListViewItem_o *)v4->fields.servantEntity;
      if ( !this )
        goto LABEL_172;
      if ( ServantEntity__get_IsStatusUp((ServantEntity_o *)this, 0LL) )
        goto LABEL_150;
      this = (WarehouseListViewItem_o *)v4->fields.servantEntity;
      if ( !this )
        goto LABEL_172;
      if ( !ServantEntity__get_IsServantMaterialTd((ServantEntity_o *)this, 0LL) )
        goto LABEL_162;
LABEL_150:
      this = (WarehouseListViewItem_o *)v4->fields.iconLabelInfo1;
      if ( !this )
        goto LABEL_172;
      IconLabelInfo__Clear((IconLabelInfo_o *)this, 0LL);
      this = (WarehouseListViewItem_o *)v4->fields.iconLabelInfo2;
      if ( !this )
        goto LABEL_172;
      IconLabelInfo__Clear((IconLabelInfo_o *)this, 0LL);
      goto LABEL_162;
    case 0x18:
      v58 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
      if ( (*(_BYTE *)(v58 + 306) & 1) == 0 )
        sub_AC505C(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
      v59 = **(_QWORD **)(v58 + 192);
      if ( (*(_BYTE *)(v59 + 306) & 1) == 0 )
        sub_AC505C(v59);
      this = **(WarehouseListViewItem_o ***)(v59 + 184);
      if ( !this )
        goto LABEL_172;
      this = (WarehouseListViewItem_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventBonusFilterMaster___);
      if ( !this )
        goto LABEL_172;
      this = (WarehouseListViewItem_o *)EventBonusFilterMaster__GetEventIdListBySvtId(
                                          (EventBonusFilterMaster_o *)this,
                                          v4->fields.svtId,
                                          0LL);
      if ( !this )
        goto LABEL_172;
      v60 = this;
      if ( !*(_QWORD *)&this->fields.sortIndex )
      {
        targetId = 0x7FFFFFFFFFFFFFFFLL;
LABEL_156:
        v4->fields.sortValue1 = targetId;
        goto LABEL_157;
      }
      v61 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
      if ( (*(_BYTE *)(v61 + 306) & 1) == 0 )
        sub_AC505C(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
      v62 = **(_QWORD **)(v61 + 192);
      if ( (*(_BYTE *)(v62 + 306) & 1) == 0 )
        sub_AC505C(v62);
      this = **(WarehouseListViewItem_o ***)(v62 + 184);
      if ( !this )
        goto LABEL_172;
      this = (WarehouseListViewItem_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventGroupMaster___);
      if ( !v60->fields.sortIndex )
      {
        v79 = sub_B2C460(this);
        sub_B2C400(v79, 0LL);
      }
      if ( !this )
        goto LABEL_172;
      FirstOpenEventId = EventGroupMaster__GetFirstOpenEventId((EventGroupMaster_o *)this, v60->fields.sortValue0, 0LL);
      v64 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
      if ( (*(_BYTE *)(v64 + 306) & 1) == 0 )
        sub_AC505C(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
      v65 = **(_QWORD **)(v64 + 192);
      if ( (*(_BYTE *)(v65 + 306) & 1) == 0 )
        sub_AC505C(v65);
      this = **(WarehouseListViewItem_o ***)(v65 + 184);
      if ( !this )
        goto LABEL_172;
      this = (WarehouseListViewItem_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventMaster___);
      if ( !this )
        goto LABEL_172;
      this = (WarehouseListViewItem_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                          (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                          &entity,
                                          FirstOpenEventId,
                                          (const MethodInfo_24E412C *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_172;
        targetId = entity->fields.targetId;
        goto LABEL_156;
      }
LABEL_157:
      this = (WarehouseListViewItem_o *)v4->fields.userServantEntity;
      v4->fields.sortValue1B = v4->fields.svtId;
      if ( !this )
        goto LABEL_172;
LABEL_158:
      iconLabelInfo1 = v4->fields.iconLabelInfo1;
LABEL_159:
      lv = *(_DWORD *)&this->fields.isEventUpVal;
LABEL_160:
      this = (WarehouseListViewItem_o *)UserServantEntity__getLevelMax((UserServantEntity_o *)this, 0LL);
      if ( !iconLabelInfo1 )
        goto LABEL_172;
      IconLabelInfo__Set_27362128(iconLabelInfo1, 2, lv, (int32_t)this, 0, 0, 0, 0, 0LL);
LABEL_162:
      LOBYTE(this) = 1;
      return (char)this;
    default:
      return (char)this;
  }
}


bool __fastcall WarehouseListViewItem__SwapChoice(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  bool v2; // w8

  v2 = !this->fields.isSwapChoice;
  this->fields.isSwapChoice ^= 1u;
  return v2;
}


bool __fastcall WarehouseListViewItem__SwapLock(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  bool v2; // w8

  v2 = !this->fields.isSwapLock;
  this->fields.isSwapLock ^= 1u;
  return v2;
}


bool __fastcall WarehouseListViewItem___SetSortValue_b__61_0(
        WarehouseListViewItem_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return this->fields.svtId == x;
}


bool __fastcall WarehouseListViewItem___SetSortValue_b__61_1(
        WarehouseListViewItem_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return this->fields.svtId == x;
}


int32_t __fastcall WarehouseListViewItem__get_Attribute(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.attribute;
}


int32_t __fastcall WarehouseListViewItem__get_DragSelectNum(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.dragSelectNum;
}


System_String_o *__fastcall WarehouseListViewItem__get_FortificationDetailName(
        WarehouseListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.fortificationDetailName;
}


System_String_o *__fastcall WarehouseListViewItem__get_FortificationName(
        WarehouseListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.fortificationName;
}


IconLabelInfo_o *__fastcall WarehouseListViewItem__get_IconInfo1(
        WarehouseListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.iconLabelInfo1;
}


IconLabelInfo_o *__fastcall WarehouseListViewItem__get_IconInfo2(
        WarehouseListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.iconLabelInfo2;
}


System_String_o *__fastcall WarehouseListViewItem__get_ImageName(
        WarehouseListViewItem_o *this,
        const MethodInfo *method)
{
  if ( (byte_4188978 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_1/*""*/, method);
    byte_4188978 = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


bool __fastcall WarehouseListViewItem__get_IsCanNotSelect(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *userServantEntity; // x0

  if ( this->fields.isFavorite
    || (this->fields.partyIndex & 0x80000000) == 0
    || this->fields.isPartyEquip
    || this->fields.attribute
    || this->fields.isUseSupport
    || this->fields.isUseSupportEquip
    || this->fields.isFatigueRecovery
    || this->fields.isFortification
    || this->fields.isPush )
  {
    LOBYTE(userServantEntity) = 1;
  }
  else
  {
    userServantEntity = this->fields.userServantEntity;
    if ( userServantEntity )
      LOBYTE(userServantEntity) = UserServantEntity__IsProtectedEventServant(userServantEntity, 0LL);
  }
  return (char)userServantEntity;
}


bool __fastcall WarehouseListViewItem__get_IsChocolateSvtEquip(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isChocolateSvtEquip;
}


bool __fastcall WarehouseListViewItem__get_IsChoice(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isChoice;
}


bool __fastcall WarehouseListViewItem__get_IsDispChoice(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isSwapChoice ^ this->fields.isChoice;
}


bool __fastcall WarehouseListViewItem__get_IsDispLock(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isSwapLock ^ this->fields.isLock;
}


bool __fastcall WarehouseListViewItem__get_IsDragSelect(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.dragSelectNum >= 0;
}


bool __fastcall WarehouseListViewItem__get_IsEnabled(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isEnabled;
}


bool __fastcall WarehouseListViewItem__get_IsEventJoin(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isEventJoin;
}


bool __fastcall WarehouseListViewItem__get_IsFatigueRecovery(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isFatigueRecovery;
}


bool __fastcall WarehouseListViewItem__get_IsFavorite(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isFavorite;
}


bool __fastcall WarehouseListViewItem__get_IsFortification(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isFortification;
}


bool __fastcall WarehouseListViewItem__get_IsFriendShipSvtEq(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isFriendShipSvtEq;
}


bool __fastcall WarehouseListViewItem__get_IsLock(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isLock;
}


bool __fastcall WarehouseListViewItem__get_IsMaterialTdSvt(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isMaterialTdSvt;
}


bool __fastcall WarehouseListViewItem__get_IsNeedAdjustIconLabelScale(
        WarehouseListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isNeedAdjustIconLabelScale;
}


bool __fastcall WarehouseListViewItem__get_IsOrganization(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  ServantEntity_o *servantEntity; // x0

  servantEntity = this->fields.servantEntity;
  if ( !servantEntity )
    sub_B2C434(0LL, method);
  return ServantEntity__get_IsOrganization(servantEntity, 0LL);
}


bool __fastcall WarehouseListViewItem__get_IsParty(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.partyIndex >= 0;
}


bool __fastcall WarehouseListViewItem__get_IsPartyEquip(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isPartyEquip;
}


bool __fastcall WarehouseListViewItem__get_IsProtected(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *userServantEntity; // x0

  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
    LOBYTE(userServantEntity) = UserServantEntity__IsProtectedEventServant(userServantEntity, 0LL);
  return (char)userServantEntity;
}


bool __fastcall WarehouseListViewItem__get_IsPush(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isPush;
}


bool __fastcall WarehouseListViewItem__get_IsPushMode(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isPushMode;
}


bool __fastcall WarehouseListViewItem__get_IsSellEnableServant(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.attribute == 0;
}


bool __fastcall WarehouseListViewItem__get_IsSwapChoice(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isSwapChoice;
}


bool __fastcall WarehouseListViewItem__get_IsSwapLock(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isSwapLock;
}


bool __fastcall WarehouseListViewItem__get_IsUse(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isUse;
}


bool __fastcall WarehouseListViewItem__get_IsUseSupportEquip(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isUseSupportEquip;
}


bool __fastcall WarehouseListViewItem__get_IsUseSupportServant(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isUseSupport;
}


System_String_o *__fastcall WarehouseListViewItem__get_NameText(
        WarehouseListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  ServantEntity_o *servantEntity; // x19
  struct UserServantEntity_o *userServantEntity; // x8
  __int64 v6; // x20
  __int64 v7; // x21
  int32_t v8; // w1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  if ( (byte_4188977 & 1) == 0 )
  {
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    sub_B2C35C(&StringLiteral_18395/*"error"*/, v3);
    byte_4188977 = 1;
  }
  servantEntity = this->fields.servantEntity;
  if ( !servantEntity )
    return (System_String_o *)StringLiteral_18395/*"error"*/;
  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
  {
    v7 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.currentCryptoKey;
    v6 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v10.fields.currentCryptoKey = v7;
    *(_QWORD *)&v10.fields.fakeValue = v6;
    v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v10, 0LL);
  }
  else
  {
    v8 = -1;
  }
  return ServantEntity__getName(servantEntity, v8, -1, 0LL);
}


ServantEntity_o *__fastcall WarehouseListViewItem__get_Servant(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.servantEntity;
}


int32_t __fastcall WarehouseListViewItem__get_SvtId(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.svtId;
}


UserServantEntity_o *__fastcall WarehouseListViewItem__get_UserServant(
        WarehouseListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.userServantEntity;
}


int64_t __fastcall WarehouseListViewItem__get_UserSvtId(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  WarehouseListViewItem_o *v2; // x19
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v4; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v6; // [xsp+0h] [xbp-50h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+20h] [xbp-30h]

  v2 = this;
  if ( (byte_4188976 & 1) == 0 )
  {
    this = (WarehouseListViewItem_o *)sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
    byte_4188976 = 1;
  }
  userServantEntity = v2->fields.userServantEntity;
  if ( !userServantEntity )
    sub_B2C434(this, method);
  v4 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v7.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v7.fields.fakeValue = v4;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v6 = v7;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v6, 0LL);
}


void __fastcall WarehouseListViewItem__set_DragSelectNum(
        WarehouseListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields.dragSelectNum = value;
}


void __fastcall WarehouseListViewItem__set_IsDragSelect(
        WarehouseListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  if ( !this )
    sub_B2C434(0LL, value);
  this->fields.dragSelectNum = ~value << 31 >> 31;
}


void __fastcall WarehouseListViewItem__set_IsEnabled(
        WarehouseListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields.isEnabled = value;
}


void __fastcall WarehouseListViewItem__set_IsPush(WarehouseListViewItem_o *this, bool value, const MethodInfo *method)
{
  this->fields.isPush = value;
}


void __fastcall WarehouseListViewItem__set_IsPushMode(
        WarehouseListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields.isPushMode = value;
}