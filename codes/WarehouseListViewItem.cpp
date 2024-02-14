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
  __int64 v32; // x1
  __int64 v33; // x1
  IconLabelInfo_o *v34; // x20
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  __int64 v41; // x1
  __int64 v42; // x2
  IconLabelInfo_o *v43; // x28
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  struct UserServantEntity_o **p_userServantEntity; // x22
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  int64_t Instance; // x0
  struct UserServantEntity_o *v64; // x8
  __int64 v65; // x26
  __int64 v66; // x27
  struct ServantEntity_o *Entity; // x0
  struct ServantEntity_o **p_servantEntity; // x26
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  struct UserServantEntity_o *v75; // x8
  ServantLimitMaster_o *v76; // x27
  int32_t svtId; // w28
  int32_t v78; // w8
  struct UserServantEntity_o *v79; // x8
  __int128 v80; // q1
  __int64 v81; // x23
  struct ServantEntity_o *servantEntity; // x8
  int32_t v83; // w8
  UserServantEntity_o *v84; // x8
  bool IsChoice; // w8
  UserServantEntity_o *v86; // x8
  UserServantEntity_o *v87; // x8
  struct UserServantEntity_o *v88; // x8
  __int128 v89; // q0
  UserServantCollectionMaster_o *v90; // x23
  struct UserServantEntity_o *v91; // x8
  int64_t v92; // x26
  __int64 v93; // x27
  __int64 v94; // x28
  struct UserServantEntity_o *v95; // x8
  __int128 v96; // q0
  int64_t v97; // x23
  signed int max_length; // w8
  unsigned int v99; // w9
  signed int v100; // w8
  unsigned int v101; // w9
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x24
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v104; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v107; // x8
  unsigned __int64 v108; // x10
  int32_t *v109; // x11
  __int64 v110; // x0
  _QWORD *v111; // x0
  __int64 v112; // x9
  __int64 v113; // x8
  __int128 v114; // q0
  System_Collections_Generic_IEnumerator_T__c *v115; // x8
  unsigned __int64 v116; // x10
  int32_t *v117; // x11
  __int64 v118; // x0
  System_Collections_Generic_IEnumerator_T__o *v119; // x24
  System_Collections_Generic_IEnumerator_T__c *v120; // x8
  unsigned __int64 v121; // x10
  int32_t *v122; // x11
  __int64 v123; // x0
  System_Collections_Generic_IEnumerator_T__c *v124; // x8
  unsigned __int64 v125; // x10
  int32_t *v126; // x11
  __int64 v127; // x0
  _QWORD *v128; // x0
  __int64 v129; // x9
  System_Collections_Generic_IEnumerator_T__c *v130; // x8
  unsigned __int64 v131; // x10
  int32_t *v132; // x11
  __int64 v133; // x0
  int v134; // w24
  BalanceConfig_c *v135; // x8
  UserServantEntity_o *v136; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  System_String_array **v138; // x2
  System_String_array **v139; // x3
  System_Boolean_array **v140; // x4
  System_Int32_array **v141; // x5
  System_Int32_array *v142; // x6
  System_Int32_array *v143; // x7
  struct System_Int32_array *EquipCategoryIdList; // x1
  System_String_array **v145; // x2
  System_String_array **v146; // x3
  System_Boolean_array **v147; // x4
  System_Int32_array **v148; // x5
  System_Int32_array *v149; // x6
  System_Int32_array *v150; // x7
  struct System_Int32_array **p_equipCategoryIdList; // x0
  __int64 v152; // x8
  int64_t v153; // x24
  unsigned __int64 v154; // x25
  __int64 v155; // x8
  __int128 v156; // q0
  const MethodInfo *v157; // x1
  signed int v158; // w8
  __int64 v159; // x9
  int64_t UserSvtId; // x0
  int64_t v161; // x8
  __int64 rarity; // x20
  __int64 v163; // x21
  __int64 lv; // x22
  struct UserServantEntity_o *v165; // x8
  __int64 v166; // x21
  __int64 v167; // x22
  IconLabelInfo_o *iconLabelInfo1; // x8
  __int64 v169; // x0
  struct IconLabelInfo_o **p_iconLabelInfo2; // [xsp+8h] [xbp-138h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v172; // [xsp+10h] [xbp-130h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v173; // [xsp+30h] [xbp-110h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v174; // [xsp+50h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v175; // [xsp+70h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v176; // [xsp+90h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v177; // [xsp+B0h] [xbp-90h]
  int v178; // [xsp+D0h] [xbp-70h]
  int v179; // [xsp+E0h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v180; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v181; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v182; // 0:x0.16

  if ( (byte_42156DD & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, *(_QWORD *)&index);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v16);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantClassMaster___, v17);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantLimitMaster___, v18);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, v19);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v20);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantLeaderMaster___, v21);
    sub_B0D8A4(&Method_DataManager_GetMaster_UserServantStorageMaster___, v22);
    sub_B0D8A4(&DataManager_TypeInfo, v23);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v24);
    sub_B0D8A4(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v25);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v26);
    sub_B0D8A4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v27);
    sub_B0D8A4(&System_Collections_IEnumerator_TypeInfo, v28);
    sub_B0D8A4(&IconLabelInfo_TypeInfo, v29);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v30);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v31);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v32);
    sub_B0D8A4(&UserServantLeaderEntity_TypeInfo, v33);
    byte_42156DD = 1;
  }
  v179 = 0;
  v34 = (IconLabelInfo_o *)sub_B0D974(IconLabelInfo_TypeInfo, *(_QWORD *)&index, userServantEntity);
  IconLabelInfo___ctor(v34, 0LL);
  this->fields.iconLabelInfo1 = v34;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo1,
    (System_Int32_array **)v34,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  v43 = (IconLabelInfo_o *)sub_B0D974(IconLabelInfo_TypeInfo, v41, v42);
  IconLabelInfo___ctor(v43, 0LL);
  this->fields.iconLabelInfo2 = v43;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo2,
    (System_Int32_array **)v43,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
  ListViewItem___ctor_23700744((ListViewItem_o *)this, index, 0LL);
  this->fields.index = index;
  this->fields.userServantEntity = userServantEntity;
  p_userServantEntity = &this->fields.userServantEntity;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.userServantEntity,
    (System_Int32_array **)userServantEntity,
    v51,
    v52,
    v53,
    v54,
    v55,
    v56);
  this->fields.setupInfo = setupinfo;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.setupInfo,
    (System_Int32_array **)setupinfo,
    v57,
    v58,
    v59,
    v60,
    v61,
    v62);
  v64 = this->fields.userServantEntity;
  if ( !v64 )
    goto LABEL_178;
  v66 = *(_QWORD *)&v64->fields.svtId.fields.currentCryptoKey;
  v65 = *(_QWORD *)&v64->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v180.fields.currentCryptoKey = v66;
  *(_QWORD *)&v180.fields.fakeValue = v65;
  this->fields.svtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v180, 0LL);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_178;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_178;
  Entity = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                       (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                       this->fields.svtId,
                                       (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  p_servantEntity = &this->fields.servantEntity;
  this->fields.servantEntity = Entity;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.servantEntity,
    (System_Int32_array **)Entity,
    v69,
    v70,
    v71,
    v72,
    v73,
    v74);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_178;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v75 = this->fields.userServantEntity;
  if ( !v75 )
    goto LABEL_178;
  v76 = (ServantLimitMaster_o *)Instance;
  svtId = this->fields.svtId;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v75->fields.limitCount, 0LL);
  if ( !v76 )
    goto LABEL_178;
  Instance = (int64_t)ServantLimitMaster__GetEntity(v76, svtId, Instance, 0LL);
  if ( !*p_servantEntity )
    goto LABEL_178;
  this->fields.classId = (*p_servantEntity)->fields.classId;
  if ( !Instance )
    goto LABEL_178;
  v78 = *(_DWORD *)(Instance + 24);
  Instance = (int64_t)this->fields.userServantEntity;
  this->fields.isFavorite = isFavorite;
  this->fields.rarity = v78;
  if ( !Instance )
    goto LABEL_178;
  *(_WORD *)&this->fields.isEventJoin = UserServantEntity__IsEventJoin((UserServantEntity_o *)Instance, 0LL);
  Instance = (int64_t)UserGameMaster__getSelfUserGame(0LL);
  if ( !Instance )
    goto LABEL_178;
  v79 = *p_userServantEntity;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  if ( !*p_userServantEntity )
    goto LABEL_178;
  v80 = *(_OWORD *)&v79->fields.id.fields.fakeValue;
  v81 = *(_QWORD *)(Instance + 120);
  *(_OWORD *)&v177.fields.currentCryptoKey = *(_OWORD *)&v79->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v177.fields.fakeValue = v80;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v176 = v177;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v176, 0LL);
  servantEntity = this->fields.servantEntity;
  this->fields.isPush = v81 == Instance;
  this->fields.isEnabled = 1;
  if ( !servantEntity )
    goto LABEL_178;
  if ( servantEntity->fields.type == 2 )
  {
    v83 = 1;
LABEL_26:
    this->fields.attribute = v83;
    goto LABEL_28;
  }
  Instance = (int64_t)*p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_178;
  if ( UserServantEntity__IsEventJoin((UserServantEntity_o *)Instance, 0LL) )
  {
    v83 = 2;
    goto LABEL_26;
  }
  this->fields.attribute = 0;
LABEL_28:
  Instance = (int64_t)*p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_178;
  Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL);
  v84 = this->fields.userServantEntity;
  this->fields.isLock = Instance & 1;
  if ( !v84 )
    goto LABEL_178;
  IsChoice = UserServantEntity__IsChoice(v84, 0LL);
  Instance = (int64_t)this->fields.userServantEntity;
  this->fields.isChoice = IsChoice;
  *(_WORD *)&this->fields.isSwapLock = 0;
  this->fields.dragSelectNum = -1;
  this->fields.isEventUpVal = 0;
  *(_QWORD *)&this->fields.bonusKind = 0LL;
  if ( !Instance )
    goto LABEL_178;
  Instance = UserServantEntity__IsFriendShipSvtEquip((UserServantEntity_o *)Instance, 0LL);
  v86 = this->fields.userServantEntity;
  this->fields.isFriendShipSvtEq = Instance & 1;
  if ( !v86 )
    goto LABEL_178;
  Instance = UserServantEntity__IsChocolateSvtEquip(v86, 0LL);
  v87 = this->fields.userServantEntity;
  this->fields.isChocolateSvtEquip = Instance & 1;
  if ( !v87 )
    goto LABEL_178;
  this->fields.isMaterialTdSvt = UserServantEntity__IsMaterialTd(v87, 0LL);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_178;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v88 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_178;
  v89 = *(_OWORD *)&v88->fields.userId.fields.fakeValue;
  v90 = (UserServantCollectionMaster_o *)Instance;
  *(_OWORD *)&v177.fields.currentCryptoKey = *(_OWORD *)&v88->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v177.fields.fakeValue = v89;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v175 = v177;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v175, 0LL);
  v91 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_178;
  v92 = Instance;
  v94 = *(_QWORD *)&v91->fields.svtId.fields.currentCryptoKey;
  v93 = *(_QWORD *)&v91->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v181.fields.currentCryptoKey = v94;
  *(_QWORD *)&v181.fields.fakeValue = v93;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v181, 0LL);
  if ( !v90 )
    goto LABEL_178;
  Instance = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(v90, v92, Instance, 0LL);
  if ( !Instance )
    goto LABEL_178;
  Instance = UserServantCollectionEntity__getFriendShipRankInfo(
               (UserServantCollectionEntity_o *)Instance,
               &this->fields.friendship,
               &this->fields.friendshipMax,
               0LL);
  v95 = this->fields.userServantEntity;
  *(_QWORD *)&this->fields.partyIndex = 0xFFFFFFFFLL;
  if ( !v95 )
    goto LABEL_178;
  v96 = *(_OWORD *)&v95->fields.id.fields.fakeValue;
  *(_OWORD *)&v174.fields.currentCryptoKey = *(_OWORD *)&v95->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v174.fields.fakeValue = v96;
  v97 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v174, 0LL);
  Instance = (int64_t)this->fields.servantEntity;
  *(_QWORD *)&this->fields.hpReinforceValue = 0LL;
  *(_QWORD *)&this->fields.nowMaxHpReinforceValue = 0LL;
  if ( !Instance )
    goto LABEL_178;
  Instance = ServantEntity__get_IsKeepServantEquip((ServantEntity_o *)Instance, 0LL);
  if ( (Instance & 1) != 0 )
  {
    if ( !partyUserEquipList )
      goto LABEL_178;
    max_length = partyUserEquipList->max_length;
    if ( max_length >= 1 )
    {
      v99 = 0;
      while ( 1 )
      {
        if ( v99 >= max_length )
          goto LABEL_179;
        if ( v97 == partyUserEquipList->m_Items[v99] )
          break;
        if ( (int)++v99 >= max_length )
          goto LABEL_62;
      }
      this->fields.partyIndex = v99;
      this->fields.isPartyEquip = 1;
      this->fields.isUse = 1;
    }
LABEL_62:
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_178;
    Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantLeaderMaster___);
    if ( !Instance )
      goto LABEL_178;
    Instance = *(_QWORD *)(Instance + 32);
    if ( !Instance )
      goto LABEL_178;
    Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                   (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                   (const MethodInfo_2AB5D9C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    if ( !Enumerator )
      sub_B0D97C(0LL);
    while ( 1 )
    {
      klass = Enumerator->klass;
      if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
      {
        v104 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v104;
          p_offset += 4;
          if ( v104 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
            goto LABEL_70;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_70:
        p_method = sub_AA67A0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
              Enumerator,
              *(_QWORD *)(p_method + 8)) & 1) == 0 )
        goto LABEL_88;
      v107 = Enumerator->klass;
      if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
      {
        v108 = 0LL;
        v109 = &v107->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v109 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
        {
          ++v108;
          v109 += 4;
          if ( v108 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
            goto LABEL_77;
        }
        v110 = (__int64)&v107->vtable[*v109].method;
      }
      else
      {
LABEL_77:
        v110 = sub_AA67A0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
      }
      v111 = (_QWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v110)(
                         Enumerator,
                         *(_QWORD *)(v110 + 8));
      if ( !v111 )
        goto LABEL_182;
      v112 = *(&UserServantLeaderEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*v111 + 300LL) < (unsigned int)v112
        || *(UserServantLeaderEntity_c **)(*(_QWORD *)(*v111 + 200LL) + 8 * v112 - 8) != UserServantLeaderEntity_TypeInfo )
      {
        break;
      }
      v113 = v111[4];
      if ( v113 )
      {
        v114 = *(_OWORD *)(v113 + 40);
        *(_OWORD *)&v177.fields.currentCryptoKey = *(_OWORD *)(v113 + 24);
        *(_OWORD *)&v177.fields.fakeValue = v114;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v173 = v177;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v173, 0LL) == v97 )
        {
          this->fields.isUseSupportEquip = 1;
LABEL_88:
          v178 = 731;
          v179 = 1;
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
            v118 = sub_AA67A0(Enumerator, System_IDisposable_TypeInfo, 0LL);
          }
          (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v118)(
            Enumerator,
            *(_QWORD *)(v118 + 8));
          if ( v178 == 731 )
            v179 = 0;
          if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !DataManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          }
          Instance = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_UserServantStorageMaster___);
          if ( Instance )
          {
            Instance = (int64_t)UserServantStorageMaster__getList((UserServantStorageMaster_o *)Instance, 0LL);
            if ( Instance )
            {
              v152 = *(_QWORD *)(Instance + 24);
              v153 = Instance;
              if ( (int)v152 >= 1 )
              {
                v154 = 0LL;
                while ( 1 )
                {
                  if ( v154 >= (unsigned int)v152 )
                    goto LABEL_179;
                  v155 = *(_QWORD *)(v153 + 32 + 8 * v154);
                  if ( v155 )
                  {
                    v156 = *(_OWORD *)(v155 + 32);
                    *(_OWORD *)&v177.fields.currentCryptoKey = *(_OWORD *)(v155 + 16);
                    *(_OWORD *)&v177.fields.fakeValue = v156;
                    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                    }
                    v172 = v177;
                    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v172, 0LL);
                    if ( Instance == v97 )
                      break;
                  }
                  LODWORD(v152) = *(_DWORD *)(v153 + 24);
                  if ( (__int64)++v154 >= (int)v152 )
                    goto LABEL_156;
                }
                this->fields.isWarehouseServantEquip = 1;
              }
LABEL_156:
              Instance = (int64_t)*p_userServantEntity;
              if ( *p_userServantEntity )
              {
                EquipCategoryIdList = UserServantEntity__GetEquipCategoryIdList((UserServantEntity_o *)Instance, 1, 0LL);
                p_equipCategoryIdList = &this->fields.equipCategoryIdList;
                this->fields.equipCategoryIdList = EquipCategoryIdList;
                goto LABEL_158;
              }
            }
          }
          goto LABEL_178;
        }
      }
    }
    v128 = (_QWORD *)sub_B0DC70(v111);
LABEL_181:
    v111 = (_QWORD *)sub_B0DC70(v128);
LABEL_182:
    sub_B0D97C(v111);
  }
  if ( !partyUserServantList )
    goto LABEL_178;
  v100 = partyUserServantList->max_length;
  if ( v100 >= 1 )
  {
    v101 = 0;
    while ( 1 )
    {
      if ( v101 >= v100 )
      {
LABEL_179:
        v169 = sub_B0D9A8(Instance);
        sub_B0D948(v169, 0LL);
      }
      if ( v97 == partyUserServantList->m_Items[v101] )
        break;
      if ( (int)++v101 >= v100 )
        goto LABEL_95;
    }
    this->fields.partyIndex = v101;
  }
LABEL_95:
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_178;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantLeaderMaster___);
  if ( !Instance )
    goto LABEL_178;
  Instance = *(_QWORD *)(Instance + 32);
  if ( !Instance )
    goto LABEL_178;
  v119 = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
           (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
           (const MethodInfo_2AB5D9C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !v119 )
    sub_B0D97C(0LL);
  while ( 1 )
  {
    v120 = v119->klass;
    if ( *(_WORD *)&v119->klass->_2.bitflags1 )
    {
      v121 = 0LL;
      v122 = &v120->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)v122 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v121;
        v122 += 4;
        if ( v121 >= *(unsigned __int16 *)&v119->klass->_2.bitflags1 )
          goto LABEL_103;
      }
      v123 = (__int64)&v120->vtable[*v122].method;
    }
    else
    {
LABEL_103:
      v123 = sub_AA67A0(v119, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v123)(
            v119,
            *(_QWORD *)(v123 + 8)) & 1) == 0 )
      break;
    v124 = v119->klass;
    if ( *(_WORD *)&v119->klass->_2.bitflags1 )
    {
      v125 = 0LL;
      v126 = &v124->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v126 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v125;
        v126 += 4;
        if ( v125 >= *(unsigned __int16 *)&v119->klass->_2.bitflags1 )
          goto LABEL_110;
      }
      v127 = (__int64)&v124->vtable[*v126].method;
    }
    else
    {
LABEL_110:
      v127 = sub_AA67A0(v119, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v128 = (_QWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v127)(
                       v119,
                       *(_QWORD *)(v127 + 8));
    if ( !v128 )
      sub_B0D97C(0LL);
    v129 = *(&UserServantLeaderEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*v128 + 300LL) < (unsigned int)v129
      || *(UserServantLeaderEntity_c **)(*(_QWORD *)(*v128 + 200LL) + 8 * v129 - 8) != UserServantLeaderEntity_TypeInfo )
    {
      goto LABEL_181;
    }
    if ( v128[7] == v97 )
    {
      this->fields.isUseSupport = 1;
      break;
    }
  }
  v178 = 933;
  v179 = 1;
  v130 = v119->klass;
  if ( *(_WORD *)&v119->klass->_2.bitflags1 )
  {
    v131 = 0LL;
    v132 = &v130->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v132 - 1) != System_IDisposable_TypeInfo )
    {
      ++v131;
      v132 += 4;
      if ( v131 >= *(unsigned __int16 *)&v119->klass->_2.bitflags1 )
        goto LABEL_122;
    }
    v133 = (__int64)&v130->vtable[*v132].method;
  }
  else
  {
LABEL_122:
    v133 = sub_AA67A0(v119, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v133)(v119, *(_QWORD *)(v133 + 8));
  if ( v178 == 933 )
    v179 = 0;
  Instance = (int64_t)*p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_178;
  v134 = *(_DWORD *)(Instance + 276);
  v135 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v135 = BalanceConfig_TypeInfo;
    Instance = (int64_t)*p_userServantEntity;
  }
  this->fields.hpReinforceValue = v135->static_fields->StatusUpAdjustHp * v134;
  if ( !Instance )
    goto LABEL_178;
  this->fields.atkReinforceValue = v135->static_fields->StatusUpAdjustAtk * *(_DWORD *)(Instance + 272);
  UserServantEntity__getAdjustMaxData(
    (UserServantEntity_o *)Instance,
    &this->fields.nowMaxHpReinforceValue,
    &this->fields.nowMaxAtkReinforceValue,
    0LL);
  Instance = (int64_t)this->fields.userServantEntity;
  if ( !Instance )
    goto LABEL_178;
  Instance = UserServantEntity__getDispLimitCount((UserServantEntity_o *)Instance, 0, 0LL);
  v136 = this->fields.userServantEntity;
  this->fields.dispLimitCount = Instance;
  if ( !v136 )
    goto LABEL_178;
  SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v136, -1, 0LL);
  this->fields.skillCategoryIdList = SkillCategoryIdList;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.skillCategoryIdList,
    (System_Int32_array **)SkillCategoryIdList,
    v138,
    v139,
    v140,
    v141,
    v142,
    v143);
  Instance = (int64_t)this->fields.userServantEntity;
  if ( !Instance )
    goto LABEL_178;
  EquipCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList((UserServantEntity_o *)Instance, 0, 0LL);
  p_equipCategoryIdList = &this->fields.tdCategoryIdList;
  this->fields.tdCategoryIdList = EquipCategoryIdList;
LABEL_158:
  sub_B0D840(
    (BattleServantConfConponent_o *)p_equipCategoryIdList,
    (System_Int32_array **)EquipCategoryIdList,
    v145,
    v146,
    v147,
    v148,
    v149,
    v150);
  this->fields.isFatigueRecovery = 0;
  if ( recoverySvtList )
  {
    v158 = recoverySvtList->max_length;
    if ( v158 >= 1 )
    {
      v159 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v159 >= v158 )
          goto LABEL_179;
        if ( recoverySvtList->m_Items[v159] == v97 )
          break;
        if ( (int)++v159 >= v158 )
          goto LABEL_166;
      }
      this->fields.isFatigueRecovery = 1;
    }
  }
LABEL_166:
  UserSvtId = WarehouseListViewItem__get_UserSvtId(this, v157);
  EventFortificationDataLogic__SetFortification(
    &this->fields.isFortification,
    &this->fields.fortificationName,
    &this->fields.fortificationDetailName,
    UserSvtId,
    0LL);
  this->fields.amountSortValue = -1LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_178;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Instance )
    goto LABEL_178;
  Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                        (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                        this->fields.classId,
                        (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_178;
  v161 = *(int *)(Instance + 48);
  Instance = (int64_t)this->fields.servantEntity;
  this->fields.priority = v161;
  this->fields.sortValue1B = v161;
  if ( !Instance )
    goto LABEL_178;
  if ( !*p_userServantEntity )
    goto LABEL_178;
  rarity = (unsigned int)this->fields.rarity;
  v163 = *(int *)(Instance + 208);
  lv = (*p_userServantEntity)->fields.lv;
  Instance = ServantEntity__get_IsServantMaterialTd((ServantEntity_o *)Instance, 0LL);
  v165 = this->fields.userServantEntity;
  this->fields.sortValue2 = (v163 << 16) | (rarity << 48) | (2 * lv) | Instance & 1;
  if ( !v165 )
    goto LABEL_178;
  v167 = *(_QWORD *)&v165->fields.svtId.fields.currentCryptoKey;
  v166 = *(_QWORD *)&v165->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v182.fields.currentCryptoKey = v167;
  *(_QWORD *)&v182.fields.fakeValue = v166;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v182, 0LL);
  iconLabelInfo1 = this->fields.iconLabelInfo1;
  this->fields.sortValue2B = (int)Instance;
  if ( !iconLabelInfo1 || (IconLabelInfo__Clear(iconLabelInfo1, 0LL), (Instance = (int64_t)*p_iconLabelInfo2) == 0) )
LABEL_178:
    sub_B0D97C(Instance);
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
  ServantEntity_o *servantEntity; // x0
  const MethodInfo *v7; // x2

  if ( ListViewItem__get_IsSelect((ListViewItem_o *)this, 0LL) )
    return 1;
  servantEntity = this->fields.servantEntity;
  if ( !servantEntity )
    sub_B0D97C(0LL);
  if ( ServantEntity__get_IsKeepServantEquip(servantEntity, 0LL) )
    return WarehouseListViewItem__IsMatchServantEquipFilter(this, sort, v7);
  return WarehouseListViewItem__IsMatchServantFilter(this, sort, v7);
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
  FilterKindList_c *v11; // x0
  ListViewSort_FilterKind_array *v12; // x0
  FilterKindList_c *v13; // x0
  ListViewSort_FilterKind_array *v14; // x0
  __int64 v16; // x0

  if ( (byte_42156E0 & 1) == 0 )
  {
    sub_B0D8A4(&FilterKindList_TypeInfo, sort);
    sub_B0D8A4(&ListViewSort_FilterKind___TypeInfo, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v6);
    byte_42156E0 = 1;
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
    goto LABEL_37;
  RarityFilterKindList = System_Collections_Generic_List_Voice_BATTLE___ToArray(
                           (System_Collections_Generic_List_Voice_BATTLE__o *)RarityFilterKindList,
                           (const MethodInfo_2FB4FE4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_37;
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
    goto LABEL_37;
  v10 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           (System_Collections_Generic_List_Voice_BATTLE__o *)RarityFilterKindList,
                                           (const MethodInfo_2FB4FE4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v10, 0LL)
    && !ListViewSort__IsMatchServantEquipTypeFilter(sort, this->fields.servantEntity, 0LL) )
  {
    return 0;
  }
  v11 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v11 = FilterKindList_TypeInfo;
  }
  RarityFilterKindList = (Voice_BATTLE_array *)v11->static_fields->ServantEquipCombineStatusFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_37;
  v12 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           (System_Collections_Generic_List_Voice_BATTLE__o *)RarityFilterKindList,
                                           (const MethodInfo_2FB4FE4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v12, 0LL)
    && !ListViewSort__IsMatchServantEquipCombineStatusFilter(
          sort,
          this->fields.userServantEntity,
          this->fields.servantEntity,
          this->fields.isWarehouseServantEquip,
          0LL) )
  {
    return 0;
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
LABEL_37:
    sub_B0D97C(RarityFilterKindList);
  v14 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           (System_Collections_Generic_List_Voice_BATTLE__o *)RarityFilterKindList,
                                           (const MethodInfo_2FB4FE4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v14, 0LL)
    && !ListViewSort__IsMatchServantEquipHaveStatusFilter(
          sort,
          this->fields.userServantEntity,
          this->fields.servantEntity,
          this->fields.isWarehouseServantEquip,
          0LL) )
  {
    return 0;
  }
  RarityFilterKindList = (Voice_BATTLE_array *)sub_B0D8BC(ListViewSort_FilterKind___TypeInfo, 1LL);
  if ( !RarityFilterKindList )
    goto LABEL_37;
  if ( !RarityFilterKindList->max_length )
  {
    v16 = sub_B0D9A8(RarityFilterKindList);
    sub_B0D948(v16, 0LL);
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

  if ( (byte_42156DF & 1) == 0 )
  {
    sub_B0D8A4(&FilterKindList_TypeInfo, sort);
    sub_B0D8A4(&ListViewSort_FilterKind___TypeInfo, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v6);
    sub_B0D8A4(&ServantEventBonusFilterController_TypeInfo, v7);
    byte_42156DF = 1;
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
                                        (const MethodInfo_2FB4FE4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                             (const MethodInfo_2FB4FE4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                           (const MethodInfo_2FB4FE4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                           (const MethodInfo_2FB4FE4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
    sub_B0D97C(ClassGroupFilterKindList);
  v17 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           (System_Collections_Generic_List_Voice_BATTLE__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_2FB4FE4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
        sub_B0D840(
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
        sub_B0D840(
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
    ClassGroupFilterKindList = sub_B0D8BC(ListViewSort_FilterKind___TypeInfo, 1LL);
    if ( !ClassGroupFilterKindList )
      goto LABEL_72;
    if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
      goto LABEL_73;
    *(_DWORD *)(ClassGroupFilterKindList + 32) = 50;
    IsUnSelectedAllTargetFilters = ListViewSort__IsUnSelectedAllTargetFilters(
                                     sort,
                                     (ListViewSort_FilterKind_array *)ClassGroupFilterKindList,
                                     0LL);
    ClassGroupFilterKindList = sub_B0D8BC(ListViewSort_FilterKind___TypeInfo, 1LL);
    if ( !ClassGroupFilterKindList )
      goto LABEL_72;
    if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
    {
LABEL_73:
      v43 = sub_B0D9A8(ClassGroupFilterKindList);
      sub_B0D948(v43, 0LL);
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
  ClassGroupFilterKindList = sub_B0D8BC(ListViewSort_FilterKind___TypeInfo, 1LL);
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
                                           (const MethodInfo_2FB4FE4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
  UserServantEntity_o *IsLock; // x0
  UserServantEntity_o *v11; // x8
  bool IsChoice; // w0

  this->fields.userServantEntity = userServantEntity;
  p_userServantEntity = &this->fields.userServantEntity;
  sub_B0D840(
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
        v11 = this->fields.userServantEntity,
        this->fields.isLock = (unsigned __int8)IsLock & 1,
        !v11) )
  {
    sub_B0D97C(IsLock);
  }
  IsChoice = UserServantEntity__IsChoice(v11, 0LL);
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
  sub_B0D840(
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


void __fastcall WarehouseListViewItem__Modify_26326392(
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
    sub_B0D97C(userServantEntity);
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
  __int64 v33; // x1
  __int64 v34; // x2
  System_Func_int__bool__o *v35; // x0
  __int64 *v36; // x8
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  int32_t svtId; // w22
  ServantFilterMaster_o *v39; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // kr00_16
  bool IsEnableServant; // w0
  System_Int32_array *eventIdList; // x21
  __int64 v43; // x1
  __int64 v44; // x2
  System_Func_T__bool__o *v45; // x22
  int v46; // w21
  const MethodInfo *v47; // x2
  __int64 v48; // x8
  struct UserServantEntity_o *v49; // x8
  __int128 v50; // q1
  struct UserServantEntity_o *v51; // x8
  IconLabelInfo_o *iconLabelInfo2; // x20
  int32_t v53; // w21
  bool IsMaterialTd; // w8
  int64_t friendship; // x2
  int32_t friendshipMax; // w3
  int32_t v57; // w1
  struct UserServantEntity_o *v58; // x8
  int32_t adjustHp; // w3
  int32_t hp; // w2
  int32_t v61; // w1
  __int64 v62; // x20
  __int64 v63; // x20
  WarehouseListViewItem_o *v64; // x20
  __int64 v65; // x21
  __int64 v66; // x21
  int32_t FirstOpenEventId; // w20
  __int64 v68; // x21
  __int64 v69; // x21
  int64_t targetId; // x8
  struct UserServantEntity_o *v71; // x8
  IconLabelInfo_o *iconLabelInfo1; // x19
  int64_t rarity; // x8
  struct ServantEntity_o *servantEntity; // x8
  __int64 v75; // x10
  struct ServantEntity_o *v76; // x8
  __int64 collectionNo; // x10
  struct UserServantEntity_o *v78; // x8
  int32_t lv; // w20
  IconLabelInfo_o *v80; // x20
  int32_t v81; // w21
  UserServantEntity_o *userServantEntity; // x0
  __int64 v83; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v85; // [xsp+10h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v86; // [xsp+30h] [xbp-60h]
  WarEntity_o *entity; // [xsp+58h] [xbp-38h] BYREF
  int32_t tdMaxLv[2]; // [xsp+68h] [xbp-28h] BYREF

  v4 = this;
  if ( (byte_42156DE & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_Any_int____67954312, sort);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventBonusFilterMaster___, v5);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventGroupMaster___, v6);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventMaster___, v7);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantFilterMaster___, v8);
    sub_B0D8A4(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v9);
    sub_B0D8A4(&Method_System_Func_int__bool___ctor__, v10);
    sub_B0D8A4(&System_Func_int__bool__TypeInfo, v11);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v14);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_B0D8A4(&Method_WarehouseListViewItem__SetSortValue_b__62_0__, v16);
    sub_B0D8A4(&Method_WarehouseListViewItem__SetSortValue_b__62_1__, v17);
    this = (WarehouseListViewItem_o *)sub_B0D8A4(&WarehouseListViewManager_TypeInfo, v18);
    byte_42156DE = 1;
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
  if ( !sort )
    goto LABEL_172;
  if ( !sort->fields.isBonusKind )
    goto LABEL_53;
  setupInfo = v4->fields.setupInfo;
  if ( !setupInfo )
    goto LABEL_172;
  if ( !setupInfo->fields.isQuestStart )
  {
    bonusKind2 = sort->fields.bonusKind2;
    if ( bonusKind2 == 4 )
    {
      if ( v4->fields.bonusKind == 4 )
      {
        p_bonusKind2Id = &sort->fields.bonusKind2Id;
        if ( v4->fields.bonusKindId == sort->fields.bonusKind2Id )
          goto LABEL_30;
      }
      else
      {
        p_bonusKind2Id = &sort->fields.bonusKind2Id;
      }
      v4->fields.bonusKind = 4;
      v4->fields.bonusKindId = *p_bonusKind2Id;
      eventIdList = setupInfo->fields.eventIdList;
      this = (WarehouseListViewItem_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_172;
      this = (WarehouseListViewItem_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventBonusFilterMaster___);
      if ( !this )
        goto LABEL_172;
      OtherEventEquipIdList = EventBonusFilterMaster__GetOtherEventEquipIdList(
                                (EventBonusFilterMaster_o *)this,
                                eventIdList,
                                0LL);
      v35 = (System_Func_int__bool__o *)sub_B0D974(System_Func_int__bool__TypeInfo, v43, v44);
      v36 = &Method_WarehouseListViewItem__SetSortValue_b__62_1__;
      goto LABEL_47;
    }
    if ( bonusKind2 != 2 )
    {
      if ( bonusKind2 != 1 )
        goto LABEL_53;
      if ( v4->fields.bonusKind == 1 )
      {
        v25 = &sort->fields.bonusKind2Id;
        if ( v4->fields.bonusKindId == sort->fields.bonusKind2Id )
          goto LABEL_30;
      }
      else
      {
        v25 = &sort->fields.bonusKind2Id;
      }
      v4->fields.bonusKind = 1;
      v23 = *v25;
      goto LABEL_50;
    }
    if ( v4->fields.bonusKind == 2 )
    {
      bonusKindId = v4->fields.bonusKindId;
      p_bonusKindId = &sort->fields.bonusKind2Id;
      bonusKind2Id = sort->fields.bonusKind2Id;
LABEL_26:
      if ( bonusKindId == bonusKind2Id )
        goto LABEL_30;
      goto LABEL_37;
    }
    p_bonusKindId = &sort->fields.bonusKind2Id;
LABEL_37:
    v4->fields.bonusKind = 2;
    v4->fields.bonusKindId = *p_bonusKindId;
    this = (WarehouseListViewItem_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             (DataManager_o *)this,
                                             (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantFilterMaster___);
      svtId = v4->fields.svtId;
      v39 = (ServantFilterMaster_o *)MasterData_WarQuestSelectionMaster;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      v40 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(svtId, 0LL);
      this = *(WarehouseListViewItem_o **)&v40.fields.currentCryptoKey;
      if ( v39 )
      {
        IsEnableServant = ServantFilterMaster__IsEnableServant(v39, v40, v4->fields.bonusKindId, 0LL);
        goto LABEL_52;
      }
    }
LABEL_172:
    sub_B0D97C(this);
  }
  bonusKind = sort->fields.bonusKind;
  if ( bonusKind == 2 )
  {
    if ( v4->fields.bonusKind == 2 )
    {
      bonusKindId = v4->fields.bonusKindId;
      p_bonusKindId = &sort->fields.bonusKindId;
      bonusKind2Id = sort->fields.bonusKindId;
      goto LABEL_26;
    }
    p_bonusKindId = &sort->fields.bonusKindId;
    goto LABEL_37;
  }
  if ( bonusKind != 1 )
  {
    if ( sort->fields.bonusKind2 != 4 )
      goto LABEL_53;
    if ( v4->fields.bonusKind != bonusKind )
    {
      v29 = &sort->fields.bonusKindId;
      goto LABEL_33;
    }
    v29 = &sort->fields.bonusKindId;
    if ( v4->fields.bonusKindId != sort->fields.bonusKindId )
    {
LABEL_33:
      v4->fields.bonusKind = bonusKind;
      v4->fields.bonusKindId = *v29;
      v31 = setupInfo->fields.eventIdList;
      this = (WarehouseListViewItem_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_172;
      this = (WarehouseListViewItem_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventBonusFilterMaster___);
      if ( !this )
        goto LABEL_172;
      OtherEventEquipIdList = EventBonusFilterMaster__GetOtherEventEquipIdList(
                                (EventBonusFilterMaster_o *)this,
                                v31,
                                0LL);
      v35 = (System_Func_int__bool__o *)sub_B0D974(System_Func_int__bool__TypeInfo, v33, v34);
      v36 = &Method_WarehouseListViewItem__SetSortValue_b__62_0__;
LABEL_47:
      v45 = (System_Func_T__bool__o *)v35;
      System_Func_int__bool____ctor(
        v35,
        (Il2CppObject *)v4,
        *v36,
        (const MethodInfo_26136E4 *)Method_System_Func_int__bool___ctor__);
      IsEnableServant = BasicHelper__Any_int__24145568(
                          OtherEventEquipIdList,
                          v45,
                          (const MethodInfo_1706EA0 *)Method_BasicHelper_Any_int____67954312);
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
  v23 = sort->fields.bonusKindId;
LABEL_50:
  this = (WarehouseListViewItem_o *)v4->fields.userServantEntity;
  v4->fields.bonusKindId = v23;
  if ( !this )
    goto LABEL_172;
  IsEnableServant = UserServantEntity__getEventUpVal_21264236(
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
          sort,
          v4->klass[1]._1.image) & 1) == 0 )
    goto LABEL_61;
  this = (WarehouseListViewItem_o *)v4->fields.iconLabelInfo2;
  if ( !this )
    goto LABEL_172;
  v46 = v4->fields.isSwapChoice ^ v4->fields.isChoice;
  IconLabelInfo__Clear((IconLabelInfo_o *)this, 0LL);
  *p_sortValue0 = 0LL;
  v4->fields.sortValue0B = 0LL;
  if ( !sort->fields.isSmartSort )
  {
    if ( !((v46 ^ 1) & 1 | !sort->fields.isChoiceSort) )
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
    v48 = -20LL;
LABEL_68:
    *p_sortValue0 = v48;
    goto LABEL_69;
  }
  if ( (v4->fields.partyIndex & 0x80000000) == 0 )
    goto LABEL_65;
  if ( v4->fields.isUseSupport )
  {
LABEL_67:
    v48 = -30LL;
    goto LABEL_68;
  }
  if ( v4->fields.attribute )
  {
    v48 = -40LL;
    goto LABEL_68;
  }
  if ( v4->fields.isFavorite )
  {
    v48 = -50LL;
    goto LABEL_68;
  }
  if ( v4->fields.isPush )
  {
    v48 = -55LL;
    goto LABEL_68;
  }
  userServantEntity = v4->fields.userServantEntity;
  if ( userServantEntity && UserServantEntity__IsProtectedEventServant(userServantEntity, 0LL)
    || v4->fields.isFortification )
  {
    v48 = -10LL;
    goto LABEL_68;
  }
LABEL_69:
  if ( !((v46 ^ 1) & 1 | !sort->fields.isChoiceSort) )
    *(_OWORD *)p_sortValue0 = xmmword_3204CF0;
LABEL_71:
  this = (WarehouseListViewItem_o *)(&dword_0 + 1);
  switch ( sort->fields.sortKind )
  {
    case 1:
      v49 = v4->fields.userServantEntity;
      if ( !v49 )
        goto LABEL_172;
      v50 = *(_OWORD *)&v49->fields.id.fields.fakeValue;
      *(_OWORD *)&v86.fields.currentCryptoKey = *(_OWORD *)&v49->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v86.fields.fakeValue = v50;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v85 = v86;
      this = (WarehouseListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v85, 0LL);
      v51 = v4->fields.userServantEntity;
      v4->fields.sortValue1 = (int64_t)this;
      if ( !v51 )
        goto LABEL_172;
      this = (WarehouseListViewItem_o *)v4->fields.iconLabelInfo1;
      if ( !this )
        goto LABEL_172;
      IconLabelInfo__SetTime((IconLabelInfo_o *)this, 49, v51->fields.createdAt, 0, 0, 0, 0LL);
      this = (WarehouseListViewItem_o *)v4->fields.userServantEntity;
      if ( !this )
        goto LABEL_172;
      iconLabelInfo2 = v4->fields.iconLabelInfo2;
      v53 = *(_DWORD *)&this->fields.isEventUpVal;
      this = (WarehouseListViewItem_o *)UserServantEntity__getLevelMax((UserServantEntity_o *)this, 0LL);
      if ( !iconLabelInfo2 )
        goto LABEL_172;
      IconLabelInfo__Set_26821248(iconLabelInfo2, 2, v53, (int32_t)this, 0, 0, 0, 0, 0LL);
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
      UserServantEntity__getTreasureDeviceInfo_21271516((UserServantEntity_o *)this, &tdMaxLv[1], tdMaxLv, 0LL);
      LODWORD(friendship) = tdMaxLv[1];
      this = (WarehouseListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = tdMaxLv[1];
      if ( !this )
        goto LABEL_172;
      friendshipMax = tdMaxLv[0];
      v57 = 33;
      goto LABEL_141;
    case 5:
      v58 = v4->fields.userServantEntity;
      if ( !v58 )
        goto LABEL_172;
      this = (WarehouseListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = v58->fields.hp;
      if ( !this )
        goto LABEL_172;
      adjustHp = v58->fields.adjustHp;
      hp = v58->fields.hp;
      v61 = 3;
      goto LABEL_115;
    case 6:
      v71 = v4->fields.userServantEntity;
      if ( !v71 )
        goto LABEL_172;
      this = (WarehouseListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = v71->fields.atk;
      if ( !this )
        goto LABEL_172;
      adjustHp = v71->fields.adjustAtk;
      hp = v71->fields.atk;
      v61 = 5;
LABEL_115:
      IconLabelInfo__Set_26821248((IconLabelInfo_o *)this, v61, hp, adjustHp, 0, 0, 0, 0, 0LL);
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
      IconLabelInfo__Set_26821248((IconLabelInfo_o *)this, 7, servantEntity->fields.cost, 0, 0, 0, 0, 0, 0LL);
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
      v57 = 32;
      goto LABEL_141;
    case 0xE:
      this = (WarehouseListViewItem_o *)v4->fields.amountSortValue;
      if ( ((unsigned __int64)this & 0x8000000000000000LL) == 0 )
        goto LABEL_136;
      this = (WarehouseListViewItem_o *)sort->fields.manager;
      if ( !this )
        goto LABEL_172;
      v75 = *(&WarehouseListViewManager_TypeInfo->_2.bitflags2 + 1);
      if ( *(&this->klass->_2.bitflags2 + 1) < (unsigned int)v75
        || (WarehouseListViewManager_c *)this->klass->_2.typeHierarchy[v75 - 1] != WarehouseListViewManager_TypeInfo )
      {
        goto LABEL_172;
      }
      this = (WarehouseListViewItem_o *)WarehouseListViewManager__GetAmountSortValue(
                                          (WarehouseListViewManager_o *)this,
                                          v4->fields.svtId,
                                          v47);
      v4->fields.amountSortValue = (int64_t)this;
LABEL_136:
      v76 = v4->fields.servantEntity;
      if ( !v76 )
        goto LABEL_172;
      collectionNo = v76->fields.collectionNo;
      v78 = v4->fields.userServantEntity;
      v4->fields.sortValue1 = (((unsigned __int64)(unsigned int)v4->fields.rarity << 32) + ((_QWORD)this << 48)) | collectionNo;
      if ( !v78 )
        goto LABEL_172;
      iconLabelInfo1 = v4->fields.iconLabelInfo1;
      lv = v78->fields.lv;
      this = (WarehouseListViewItem_o *)v78;
      goto LABEL_160;
    case 0xF:
      friendship = v4->fields.hpReinforceValue;
      this = (WarehouseListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = friendship;
      if ( !this )
        goto LABEL_172;
      friendshipMax = v4->fields.nowMaxHpReinforceValue;
      v57 = 44;
      goto LABEL_141;
    case 0x10:
      friendship = v4->fields.atkReinforceValue;
      this = (WarehouseListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = friendship;
      if ( !this )
        goto LABEL_172;
      friendshipMax = v4->fields.nowMaxAtkReinforceValue;
      v57 = 45;
LABEL_141:
      IconLabelInfo__Set_26821248((IconLabelInfo_o *)this, v57, friendship, friendshipMax, 0, 0, 0, 0, 0LL);
LABEL_142:
      this = (WarehouseListViewItem_o *)v4->fields.userServantEntity;
      if ( !this )
        goto LABEL_172;
      v80 = v4->fields.iconLabelInfo2;
      v81 = *(_DWORD *)&this->fields.isEventUpVal;
      this = (WarehouseListViewItem_o *)UserServantEntity__getLevelMax((UserServantEntity_o *)this, 0LL);
      if ( !v80 )
        goto LABEL_172;
      IconLabelInfo__Set_26821248(v80, 2, v81, (int32_t)this, 0, 0, 0, 0, 0LL);
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
      v62 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
      if ( (*(_BYTE *)(v62 + 306) & 1) == 0 )
        sub_AA65A4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
      v63 = **(_QWORD **)(v62 + 192);
      if ( (*(_BYTE *)(v63 + 306) & 1) == 0 )
        sub_AA65A4(v63);
      this = **(WarehouseListViewItem_o ***)(v63 + 184);
      if ( !this )
        goto LABEL_172;
      this = (WarehouseListViewItem_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventBonusFilterMaster___);
      if ( !this )
        goto LABEL_172;
      this = (WarehouseListViewItem_o *)EventBonusFilterMaster__GetEventIdListBySvtId(
                                          (EventBonusFilterMaster_o *)this,
                                          v4->fields.svtId,
                                          0LL);
      if ( !this )
        goto LABEL_172;
      v64 = this;
      if ( !*(_QWORD *)&this->fields.sortIndex )
      {
        targetId = 0x7FFFFFFFFFFFFFFFLL;
LABEL_156:
        v4->fields.sortValue1 = targetId;
        goto LABEL_157;
      }
      v65 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
      if ( (*(_BYTE *)(v65 + 306) & 1) == 0 )
        sub_AA65A4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
      v66 = **(_QWORD **)(v65 + 192);
      if ( (*(_BYTE *)(v66 + 306) & 1) == 0 )
        sub_AA65A4(v66);
      this = **(WarehouseListViewItem_o ***)(v66 + 184);
      if ( !this )
        goto LABEL_172;
      this = (WarehouseListViewItem_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventGroupMaster___);
      if ( !v64->fields.sortIndex )
      {
        v83 = sub_B0D9A8(this);
        sub_B0D948(v83, 0LL);
      }
      if ( !this )
        goto LABEL_172;
      FirstOpenEventId = EventGroupMaster__GetFirstOpenEventId((EventGroupMaster_o *)this, v64->fields.sortValue0, 0LL);
      v68 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
      if ( (*(_BYTE *)(v68 + 306) & 1) == 0 )
        sub_AA65A4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
      v69 = **(_QWORD **)(v68 + 192);
      if ( (*(_BYTE *)(v69 + 306) & 1) == 0 )
        sub_AA65A4(v69);
      this = **(WarehouseListViewItem_o ***)(v69 + 184);
      if ( !this )
        goto LABEL_172;
      this = (WarehouseListViewItem_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventMaster___);
      if ( !this )
        goto LABEL_172;
      this = (WarehouseListViewItem_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                          (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                          &entity,
                                          FirstOpenEventId,
                                          (const MethodInfo_2669C30 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
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
      IconLabelInfo__Set_26821248(iconLabelInfo1, 2, lv, (int32_t)this, 0, 0, 0, 0, 0LL);
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


bool __fastcall WarehouseListViewItem___SetSortValue_b__62_0(
        WarehouseListViewItem_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return this->fields.svtId == x;
}


bool __fastcall WarehouseListViewItem___SetSortValue_b__62_1(
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
  if ( (byte_42156E3 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_1/*""*/, method);
    byte_42156E3 = 1;
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
    sub_B0D97C(0LL);
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

  if ( (byte_42156E2 & 1) == 0 )
  {
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_18452/*"error"*/, v3);
    byte_42156E2 = 1;
  }
  servantEntity = this->fields.servantEntity;
  if ( !servantEntity )
    return (System_String_o *)StringLiteral_18452/*"error"*/;
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
    v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v10, 0LL);
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
  if ( (byte_42156E1 & 1) == 0 )
  {
    this = (WarehouseListViewItem_o *)sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
    byte_42156E1 = 1;
  }
  userServantEntity = v2->fields.userServantEntity;
  if ( !userServantEntity )
    sub_B0D97C(this);
  v4 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v7.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v7.fields.fakeValue = v4;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v6 = v7;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v6, 0LL);
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
    sub_B0D97C(0LL);
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