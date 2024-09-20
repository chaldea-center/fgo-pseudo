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
  IconLabelInfo_o *v16; // x20
  int32_t v17; // w2
  int32_t v18; // w3
  IconLabelInfo_o *v19; // x28
  struct IconLabelInfo_o **p_iconLabelInfo2; // x20
  int32_t v21; // w2
  int32_t v22; // w3
  struct UserServantEntity_o **p_userServantEntity; // x22
  int32_t v24; // w2
  int32_t v25; // w3
  int32_t v26; // w2
  int32_t v27; // w3
  int64_t Instance; // x0
  const MethodInfo *v29; // x1
  struct UserServantEntity_o *v30; // x8
  __int64 v31; // x26
  __int64 v32; // x27
  Il2CppObject *Entity; // x0
  struct ServantEntity_o **p_servantEntity; // x26
  int32_t v35; // w2
  int32_t v36; // w3
  struct UserServantEntity_o *v37; // x8
  ServantLimitMaster_o *v38; // x27
  int32_t svtId; // w28
  int32_t v40; // w8
  struct UserServantEntity_o *v41; // x8
  __int128 v42; // q1
  __int64 v43; // x23
  struct ServantEntity_o *servantEntity; // x8
  int32_t v45; // w8
  UserServantEntity_o *v46; // x8
  bool IsChoice; // w8
  UserServantEntity_o *v48; // x8
  UserServantEntity_o *v49; // x8
  struct UserServantEntity_o *v50; // x8
  __int128 v51; // q0
  UserServantCollectionMaster_o *v52; // x23
  struct UserServantEntity_o *v53; // x8
  int64_t v54; // x26
  __int64 v55; // x27
  __int64 v56; // x28
  struct UserServantEntity_o *v57; // x8
  __int128 v58; // q0
  int64_t v59; // x23
  signed int max_length; // w8
  int32_t v61; // w9
  signed int v62; // w8
  int32_t v63; // w9
  __int64 v64; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x24
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v67; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v70; // x8
  __int64 v71; // x9
  int32_t *v72; // x10
  __int64 v73; // x0
  _QWORD *v74; // x0
  __int64 v75; // x1
  __int64 methodPtr_low; // x9
  __int64 v77; // x8
  __int128 v78; // q0
  System_Collections_Generic_IEnumerator_T__c *v79; // x8
  __int64 v80; // x9
  int32_t *v81; // x10
  __int64 v82; // x0
  __int64 v83; // x1
  System_Collections_Generic_IEnumerator_T__o *v84; // x24
  System_Collections_Generic_IEnumerator_T__c *v85; // x8
  __int64 v86; // x9
  int32_t *v87; // x10
  __int64 v88; // x0
  System_Collections_Generic_IEnumerator_T__c *v89; // x8
  __int64 v90; // x9
  int32_t *v91; // x10
  __int64 v92; // x0
  _QWORD *v93; // x0
  __int64 v94; // x1
  __int64 v95; // x9
  System_Collections_Generic_IEnumerator_T__c *v96; // x8
  __int64 v97; // x9
  int32_t *v98; // x10
  __int64 v99; // x0
  bool IsSettingServant; // w0
  __int64 v101; // x8
  int64_t v102; // x24
  unsigned __int64 v103; // x25
  __int64 v104; // x8
  __int128 v105; // q0
  __int64 v106; // x8
  int64_t v107; // x24
  unsigned __int64 v108; // x25
  __int64 v109; // x8
  __int128 v110; // q0
  int v111; // w24
  BalanceConfig_c *v112; // x8
  struct BalanceConfig_StaticFields *static_fields; // x8
  UserServantEntity_o *v114; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  int32_t v116; // w2
  int32_t v117; // w3
  struct System_Int32_array *EquipCategoryIdList; // x1
  int32_t v119; // w2
  int32_t v120; // w3
  struct System_Int32_array **p_equipCategoryIdList; // x0
  signed int v122; // w8
  __int64 v123; // x9
  int64_t UserSvtId; // x0
  int64_t v125; // x8
  struct UserServantEntity_o *v126; // x8
  __int64 rarity; // x21
  __int64 v128; // x22
  __int64 lv; // x23
  struct UserServantEntity_o *v130; // x8
  __int64 v131; // x21
  __int64 v132; // x22
  IconLabelInfo_o *iconLabelInfo1; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v135; // [xsp+10h] [xbp-140h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v136; // [xsp+30h] [xbp-120h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v137; // [xsp+50h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v138; // [xsp+70h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v139; // [xsp+90h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v140; // [xsp+B0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v141; // [xsp+D0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v142; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v143; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v144; // 0:x0.16

  if ( (byte_4A5921A & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantLeaderMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_UserRecommendSupportMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_UserServantStorageMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&IconLabelInfo_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&UserServantLeaderEntity_TypeInfo);
    byte_4A5921A = 1;
  }
  v16 = (IconLabelInfo_o *)sub_1B887FC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v16, 0LL);
  this->fields.iconLabelInfo1 = v16;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.iconLabelInfo1, (int32_t)v16, v17, v18);
  v19 = (IconLabelInfo_o *)sub_1B887FC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v19, 0LL);
  this->fields.iconLabelInfo2 = v19;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.iconLabelInfo2, (int32_t)v19, v21, v22);
  ListViewItem___ctor_40706472((ListViewItem_o *)this, index, 0LL);
  this->fields.index = index;
  this->fields.userServantEntity = userServantEntity;
  p_userServantEntity = &this->fields.userServantEntity;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.userServantEntity,
    (int32_t)userServantEntity,
    v24,
    v25);
  this->fields.setupInfo = setupinfo;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.setupInfo, (int32_t)setupinfo, v26, v27);
  v30 = this->fields.userServantEntity;
  if ( !v30 )
    goto LABEL_177;
  v32 = *(_QWORD *)&v30->fields.svtId.fields.currentCryptoKey;
  v31 = *(_QWORD *)&v30->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v142.fields.currentCryptoKey = v32;
  *(_QWORD *)&v142.fields.fakeValue = v31;
  this->fields.svtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v142, 0LL);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_177;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_177;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             this->fields.svtId,
             (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)Entity;
  p_servantEntity = &this->fields.servantEntity;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.servantEntity, (int32_t)Entity, v35, v36);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_177;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v37 = this->fields.userServantEntity;
  if ( !v37 )
    goto LABEL_177;
  v38 = (ServantLimitMaster_o *)Instance;
  svtId = this->fields.svtId;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v37->fields.limitCount, 0LL);
  if ( !v38 )
    goto LABEL_177;
  Instance = (int64_t)ServantLimitMaster__GetEntity(v38, svtId, Instance, 0LL);
  if ( !*p_servantEntity )
    goto LABEL_177;
  this->fields.classId = (*p_servantEntity)->fields.classId;
  if ( !Instance )
    goto LABEL_177;
  v40 = *(_DWORD *)(Instance + 24);
  Instance = (int64_t)this->fields.userServantEntity;
  this->fields.isFavorite = isFavorite;
  this->fields.rarity = v40;
  if ( !Instance )
    goto LABEL_177;
  *(_WORD *)&this->fields.isEventJoin = UserServantEntity__IsEventJoin((UserServantEntity_o *)Instance, 0LL);
  Instance = (int64_t)UserGameMaster__getSelfUserGame(0LL);
  if ( !Instance )
    goto LABEL_177;
  v41 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_177;
  v42 = *(_OWORD *)&v41->fields.id.fields.fakeValue;
  v43 = *(_QWORD *)(Instance + 120);
  *(_OWORD *)&v141.fields.currentCryptoKey = *(_OWORD *)&v41->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v141.fields.fakeValue = v42;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v140 = v141;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v140, 0LL);
  servantEntity = this->fields.servantEntity;
  this->fields.isPush = v43 == Instance;
  this->fields.isEnabled = 1;
  if ( !servantEntity )
    goto LABEL_177;
  if ( servantEntity->fields.type == 2 )
  {
    v45 = 1;
LABEL_24:
    this->fields.attribute = v45;
    goto LABEL_26;
  }
  Instance = (int64_t)*p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_177;
  if ( UserServantEntity__IsEventJoin((UserServantEntity_o *)Instance, 0LL) )
  {
    v45 = 2;
    goto LABEL_24;
  }
  this->fields.attribute = 0;
LABEL_26:
  Instance = (int64_t)*p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_177;
  Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL);
  v46 = this->fields.userServantEntity;
  this->fields.isLock = Instance & 1;
  if ( !v46 )
    goto LABEL_177;
  IsChoice = UserServantEntity__IsChoice(v46, 0LL);
  Instance = (int64_t)this->fields.userServantEntity;
  *(_WORD *)&this->fields.isSwapLock = 0;
  this->fields.isChoice = IsChoice;
  this->fields.dragSelectNum = -1;
  *(_QWORD *)&this->fields.bonusKind = 1LL;
  this->fields.isEventUpVal = 0;
  if ( !Instance )
    goto LABEL_177;
  Instance = UserServantEntity__IsFriendShipSvtEquip((UserServantEntity_o *)Instance, 0LL);
  v48 = this->fields.userServantEntity;
  this->fields.isFriendShipSvtEq = Instance & 1;
  if ( !v48 )
    goto LABEL_177;
  Instance = UserServantEntity__IsChocolateSvtEquip(v48, 0LL);
  v49 = this->fields.userServantEntity;
  this->fields.isChocolateSvtEquip = Instance & 1;
  if ( !v49 )
    goto LABEL_177;
  this->fields.isMaterialTdSvt = UserServantEntity__IsMaterialTd(v49, 0LL);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_177;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v50 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_177;
  v51 = *(_OWORD *)&v50->fields.userId.fields.fakeValue;
  v52 = (UserServantCollectionMaster_o *)Instance;
  *(_OWORD *)&v141.fields.currentCryptoKey = *(_OWORD *)&v50->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v141.fields.fakeValue = v51;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v139 = v141;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v139, 0LL);
  v53 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_177;
  v54 = Instance;
  v56 = *(_QWORD *)&v53->fields.svtId.fields.currentCryptoKey;
  v55 = *(_QWORD *)&v53->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v143.fields.currentCryptoKey = v56;
  *(_QWORD *)&v143.fields.fakeValue = v55;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v143, 0LL);
  if ( !v52 )
    goto LABEL_177;
  Instance = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(v52, v54, Instance, 0LL);
  if ( !Instance )
    goto LABEL_177;
  Instance = UserServantCollectionEntity__getFriendShipRankInfo(
               (UserServantCollectionEntity_o *)Instance,
               &this->fields.friendship,
               &this->fields.friendshipMax,
               0LL);
  v57 = this->fields.userServantEntity;
  *(_WORD *)&this->fields.isUseRecommendSupport = 0;
  *(_QWORD *)&this->fields.partyIndex = 0xFFFFFFFFLL;
  if ( !v57 )
    goto LABEL_177;
  v58 = *(_OWORD *)&v57->fields.id.fields.fakeValue;
  *(_OWORD *)&v138.fields.currentCryptoKey = *(_OWORD *)&v57->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v138.fields.fakeValue = v58;
  v59 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v138, 0LL);
  Instance = (int64_t)this->fields.servantEntity;
  *(_QWORD *)&this->fields.hpReinforceValue = 0LL;
  *(_QWORD *)&this->fields.nowMaxHpReinforceValue = 0LL;
  if ( !Instance )
    goto LABEL_177;
  Instance = ServantEntity__get_IsKeepServantEquip((ServantEntity_o *)Instance, 0LL);
  if ( (Instance & 1) != 0 )
  {
    if ( !partyUserEquipList )
      goto LABEL_177;
    max_length = partyUserEquipList->max_length;
    if ( max_length >= 1 )
    {
      v61 = 0;
      while ( 1 )
      {
        if ( max_length == v61 )
          goto LABEL_178;
        if ( v59 == partyUserEquipList->m_Items[v61] )
          break;
        if ( max_length == ++v61 )
          goto LABEL_58;
      }
      this->fields.partyIndex = v61;
      this->fields.isPartyEquip = 1;
      this->fields.isUse = 1;
    }
LABEL_58:
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_177;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantLeaderMaster___);
    if ( !Instance )
      goto LABEL_177;
    Instance = *(_QWORD *)(Instance + 32);
    if ( !Instance )
      goto LABEL_177;
    Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                   (System_Collections_ObjectModel_Collection_T__o *)Instance,
                   (const MethodInfo_30BAB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    if ( !Enumerator )
      sub_1B8880C(0LL, v64);
    while ( 1 )
    {
      klass = Enumerator->klass;
      v67 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v67;
          p_offset += 4;
          if ( !v67 )
            goto LABEL_66;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_66:
        p_method = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
              Enumerator,
              *(_QWORD *)(p_method + 8)) & 1) == 0 )
        goto LABEL_83;
      v70 = Enumerator->klass;
      v71 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
      {
        v72 = &v70->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v72 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
        {
          --v71;
          v72 += 4;
          if ( !v71 )
            goto LABEL_73;
        }
        v73 = (__int64)&v70->vtable[*v72].method;
      }
      else
      {
LABEL_73:
        v73 = sub_1BDA590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
      }
      v74 = (_QWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v73)(
                        Enumerator,
                        *(_QWORD *)(v73 + 8));
      if ( !v74 )
        goto LABEL_181;
      methodPtr_low = LOBYTE(UserServantLeaderEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*v74 + 304LL) < (unsigned int)methodPtr_low
        || *(UserServantLeaderEntity_c **)(*(_QWORD *)(*v74 + 200LL) + 8 * methodPtr_low - 8) != UserServantLeaderEntity_TypeInfo )
      {
        break;
      }
      v77 = v74[4];
      if ( v77 )
      {
        v78 = *(_OWORD *)(v77 + 40);
        *(_OWORD *)&v141.fields.currentCryptoKey = *(_OWORD *)(v77 + 24);
        *(_OWORD *)&v141.fields.fakeValue = v78;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v137 = v141;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v137, 0LL) == v59 )
        {
          this->fields.isUseSupportEquip = 1;
LABEL_83:
          v79 = Enumerator->klass;
          v80 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
          if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
          {
            v81 = &v79->_1.interfaceOffsets->offset;
            while ( *((System_IDisposable_c **)v81 - 1) != System_IDisposable_TypeInfo )
            {
              --v80;
              v81 += 4;
              if ( !v80 )
                goto LABEL_87;
            }
            v82 = (__int64)&v79->vtable[*v81].method;
          }
          else
          {
LABEL_87:
            v82 = sub_1BDA590(Enumerator, System_IDisposable_TypeInfo, 0LL);
          }
          (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v82)(
            Enumerator,
            *(_QWORD *)(v82 + 8));
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          Instance = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserRecommendSupportMaster___);
          if ( Instance )
          {
            this->fields.isUseRecommendSupportEquip = UserRecommendSupportMaster__IsSettingServant(
                                                        (UserRecommendSupportMaster_o *)Instance,
                                                        v59,
                                                        1,
                                                        0LL);
            Instance = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserServantStorageMaster___);
            if ( Instance )
            {
              Instance = (int64_t)UserServantStorageMaster__getList((UserServantStorageMaster_o *)Instance, 0LL);
              if ( Instance )
              {
                v106 = *(_QWORD *)(Instance + 24);
                v107 = Instance;
                if ( (int)v106 >= 1 )
                {
                  v108 = 0LL;
                  while ( 1 )
                  {
                    if ( v108 >= (unsigned int)v106 )
                      goto LABEL_178;
                    v109 = *(_QWORD *)(v107 + 32 + 8 * v108);
                    if ( v109 )
                    {
                      v110 = *(_OWORD *)(v109 + 32);
                      *(_OWORD *)&v141.fields.currentCryptoKey = *(_OWORD *)(v109 + 16);
                      *(_OWORD *)&v141.fields.fakeValue = v110;
                      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                      v136 = v141;
                      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v136, 0LL);
                      if ( Instance == v59 )
                        break;
                    }
                    LODWORD(v106) = *(_DWORD *)(v107 + 24);
                    if ( (__int64)++v108 >= (int)v106 )
                      goto LABEL_156;
                  }
                  this->fields.isWarehouseServantEquip = 1;
                }
LABEL_156:
                Instance = (int64_t)*p_userServantEntity;
                if ( *p_userServantEntity )
                {
                  EquipCategoryIdList = UserServantEntity__GetEquipCategoryIdList(
                                          (UserServantEntity_o *)Instance,
                                          1,
                                          0LL);
                  p_equipCategoryIdList = &this->fields.equipCategoryIdList;
                  this->fields.equipCategoryIdList = EquipCategoryIdList;
                  goto LABEL_158;
                }
              }
            }
          }
          goto LABEL_177;
        }
      }
    }
    sub_1B88ACC(v74);
LABEL_180:
    sub_1B88ACC(v93);
LABEL_181:
    sub_1B8880C(v74, v75);
  }
  if ( !partyUserServantList )
    goto LABEL_177;
  v62 = partyUserServantList->max_length;
  if ( v62 >= 1 )
  {
    v63 = 0;
    while ( 1 )
    {
      if ( v62 == v63 )
LABEL_178:
        sub_1B88814(Instance, v29);
      if ( v59 == partyUserServantList->m_Items[v63] )
        break;
      if ( v62 == ++v63 )
        goto LABEL_89;
    }
    this->fields.partyIndex = v63;
  }
LABEL_89:
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_177;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantLeaderMaster___);
  if ( !Instance )
    goto LABEL_177;
  Instance = *(_QWORD *)(Instance + 32);
  if ( !Instance )
    goto LABEL_177;
  v84 = System_Collections_ObjectModel_Collection_object___GetEnumerator(
          (System_Collections_ObjectModel_Collection_T__o *)Instance,
          (const MethodInfo_30BAB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !v84 )
    sub_1B8880C(0LL, v83);
  while ( 1 )
  {
    v85 = v84->klass;
    v86 = *(unsigned __int16 *)(&v84->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v84->klass->_2.bitflags2 + 3) )
    {
      v87 = &v85->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)v87 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v86;
        v87 += 4;
        if ( !v86 )
          goto LABEL_97;
      }
      v88 = (__int64)&v85->vtable[*v87].method;
    }
    else
    {
LABEL_97:
      v88 = sub_1BDA590(v84, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v88)(
            v84,
            *(_QWORD *)(v88 + 8)) & 1) == 0 )
      break;
    v89 = v84->klass;
    v90 = *(unsigned __int16 *)(&v84->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v84->klass->_2.bitflags2 + 3) )
    {
      v91 = &v89->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v91 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v90;
        v91 += 4;
        if ( !v90 )
          goto LABEL_104;
      }
      v92 = (__int64)&v89->vtable[*v91].method;
    }
    else
    {
LABEL_104:
      v92 = sub_1BDA590(v84, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v93 = (_QWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v92)(
                      v84,
                      *(_QWORD *)(v92 + 8));
    if ( !v93 )
      sub_1B8880C(0LL, v94);
    v95 = LOBYTE(UserServantLeaderEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*v93 + 304LL) < (unsigned int)v95
      || *(UserServantLeaderEntity_c **)(*(_QWORD *)(*v93 + 200LL) + 8 * v95 - 8) != UserServantLeaderEntity_TypeInfo )
    {
      goto LABEL_180;
    }
    if ( v93[7] == v59 )
    {
      this->fields.isUseSupport = 1;
      break;
    }
  }
  v96 = v84->klass;
  v97 = *(unsigned __int16 *)(&v84->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v84->klass->_2.bitflags2 + 3) )
  {
    v98 = &v96->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v98 - 1) != System_IDisposable_TypeInfo )
    {
      --v97;
      v98 += 4;
      if ( !v97 )
        goto LABEL_115;
    }
    v99 = (__int64)&v96->vtable[*v98].method;
  }
  else
  {
LABEL_115:
    v99 = sub_1BDA590(v84, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v99)(v84, *(_QWORD *)(v99 + 8));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserRecommendSupportMaster___);
  if ( !Instance )
    goto LABEL_177;
  IsSettingServant = UserRecommendSupportMaster__IsSettingServant((UserRecommendSupportMaster_o *)Instance, v59, 0, 0LL);
  this->fields.isWarehouseServant = 0;
  this->fields.isUseRecommendSupport = IsSettingServant;
  Instance = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserServantStorageMaster___);
  if ( !Instance )
    goto LABEL_177;
  Instance = (int64_t)UserServantStorageMaster__getList((UserServantStorageMaster_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_177;
  v101 = *(_QWORD *)(Instance + 24);
  v102 = Instance;
  if ( (int)v101 >= 1 )
  {
    v103 = 0LL;
    while ( 1 )
    {
      if ( v103 >= (unsigned int)v101 )
        goto LABEL_178;
      v104 = *(_QWORD *)(v102 + 32 + 8 * v103);
      if ( v104 )
      {
        v105 = *(_OWORD *)(v104 + 32);
        *(_OWORD *)&v141.fields.currentCryptoKey = *(_OWORD *)(v104 + 16);
        *(_OWORD *)&v141.fields.fakeValue = v105;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v135 = v141;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v135, 0LL);
        if ( Instance == v59 )
          break;
      }
      LODWORD(v101) = *(_DWORD *)(v102 + 24);
      if ( (__int64)++v103 >= (int)v101 )
        goto LABEL_147;
    }
    this->fields.isWarehouseServant = 1;
  }
LABEL_147:
  Instance = (int64_t)*p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_177;
  v111 = *(_DWORD *)(Instance + 276);
  v112 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v112 = BalanceConfig_TypeInfo;
    Instance = (int64_t)*p_userServantEntity;
  }
  static_fields = v112->static_fields;
  this->fields.hpReinforceValue = static_fields->StatusUpAdjustHp * v111;
  if ( !Instance )
    goto LABEL_177;
  this->fields.atkReinforceValue = static_fields->StatusUpAdjustAtk * *(_DWORD *)(Instance + 272);
  UserServantEntity__getAdjustMaxData(
    (UserServantEntity_o *)Instance,
    &this->fields.nowMaxHpReinforceValue,
    &this->fields.nowMaxAtkReinforceValue,
    0LL);
  Instance = (int64_t)this->fields.userServantEntity;
  if ( !Instance )
    goto LABEL_177;
  Instance = UserServantEntity__getDispLimitCount((UserServantEntity_o *)Instance, 0, 0LL);
  v114 = this->fields.userServantEntity;
  this->fields.dispLimitCount = Instance;
  if ( !v114 )
    goto LABEL_177;
  SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v114, -1, 0LL);
  this->fields.skillCategoryIdList = SkillCategoryIdList;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.skillCategoryIdList,
    (int32_t)SkillCategoryIdList,
    v116,
    v117);
  Instance = (int64_t)this->fields.userServantEntity;
  if ( !Instance )
    goto LABEL_177;
  EquipCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList((UserServantEntity_o *)Instance, 0, 0LL);
  p_equipCategoryIdList = &this->fields.tdCategoryIdList;
  this->fields.tdCategoryIdList = EquipCategoryIdList;
LABEL_158:
  sub_1B88554((ServantStatusBattleListViewItem_o *)p_equipCategoryIdList, (int32_t)EquipCategoryIdList, v119, v120);
  this->fields.isFatigueRecovery = 0;
  if ( recoverySvtList )
  {
    v122 = recoverySvtList->max_length;
    if ( v122 >= 1 )
    {
      v123 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v123 >= v122 )
          goto LABEL_178;
        if ( recoverySvtList->m_Items[v123] == v59 )
          break;
        if ( (int)++v123 >= v122 )
          goto LABEL_166;
      }
      this->fields.isFatigueRecovery = 1;
    }
  }
LABEL_166:
  UserSvtId = WarehouseListViewItem__get_UserSvtId(this, v29);
  EventFortificationDataLogic__SetFortification(
    &this->fields.isFortification,
    &this->fields.fortificationName,
    &this->fields.fortificationDetailName,
    UserSvtId,
    0LL);
  this->fields.amountSortValue = -1LL;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_177;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Instance )
    goto LABEL_177;
  Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                        this->fields.classId,
                        (const MethodInfo_311D934 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_177;
  v125 = *(int *)(Instance + 48);
  Instance = (int64_t)this->fields.servantEntity;
  this->fields.priority = v125;
  this->fields.sortValue1B = v125;
  if ( !Instance )
    goto LABEL_177;
  v126 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_177;
  rarity = (unsigned int)this->fields.rarity;
  v128 = *(int *)(Instance + 208);
  lv = v126->fields.lv;
  Instance = ServantEntity__get_IsServantMaterialTd((ServantEntity_o *)Instance, 0LL);
  v130 = this->fields.userServantEntity;
  this->fields.sortValue2 = (v128 << 16) | (rarity << 48) | (2 * lv) | Instance & 1;
  if ( !v130 )
    goto LABEL_177;
  v132 = *(_QWORD *)&v130->fields.svtId.fields.currentCryptoKey;
  v131 = *(_QWORD *)&v130->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v144.fields.currentCryptoKey = v132;
  *(_QWORD *)&v144.fields.fakeValue = v131;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v144, 0LL);
  iconLabelInfo1 = this->fields.iconLabelInfo1;
  this->fields.sortValue2B = (int)Instance;
  if ( !iconLabelInfo1 || (IconLabelInfo__Clear(iconLabelInfo1, 0LL), (Instance = (int64_t)*p_iconLabelInfo2) == 0) )
LABEL_177:
    sub_1B8880C(Instance, v29);
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
    sub_1B8880C(0LL, v5);
  if ( ServantEntity__get_IsKeepServantEquip(servantEntity, 0LL) )
    return WarehouseListViewItem__IsMatchServantEquipFilter(this, sort, v8);
  return WarehouseListViewItem__IsMatchServantFilter(this, sort, v8);
}


bool __fastcall WarehouseListViewItem__IsMatchServantEquipFilter(
        WarehouseListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  FilterKindList_c *v5; // x0
  System_Int32Enum_array *RarityFilterKindList; // x0
  FilterKindList_c *v7; // x0
  ListViewSort_FilterKind_array *v8; // x0
  FilterKindList_c *v9; // x0
  ListViewSort_FilterKind_array *v10; // x0
  FilterKindList_c *v11; // x0
  ListViewSort_FilterKind_array *v12; // x0
  _BOOL4 v13; // w8

  if ( (byte_4A5921D & 1) == 0 )
  {
    sub_1B885B0(&FilterKindList_TypeInfo);
    sub_1B885B0(&ListViewSort_FilterKind___TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    byte_4A5921D = 1;
  }
  v5 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v5 = FilterKindList_TypeInfo;
  }
  RarityFilterKindList = (System_Int32Enum_array *)v5->static_fields->RarityFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_35;
  RarityFilterKindList = System_Collections_Generic_List_Int32Enum___ToArray(
                           (System_Collections_Generic_List_T__o *)RarityFilterKindList,
                           (const MethodInfo_34E4AF4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_35;
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)RarityFilterKindList, 0LL)
    && !ListViewSort__IsMatchRarityFilter(sort, this->fields.rarity, 0LL)
    || !ListViewSort__CheckSvtEquipEffectFilterDefaultAll(sort, 0LL)
    && !ServantEquipEffectFilterController__IsMatchEffectCategory(this->fields.equipCategoryIdList, sort, 0LL) )
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
    goto LABEL_35;
  v8 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                          (System_Collections_Generic_List_T__o *)RarityFilterKindList,
                                          (const MethodInfo_34E4AF4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v8, 0LL)
    && !ListViewSort__IsMatchServantEquipTypeFilter(sort, this->fields.servantEntity, 0LL) )
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
    goto LABEL_35;
  v10 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)RarityFilterKindList,
                                           (const MethodInfo_34E4AF4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v10, 0LL)
    && !ListViewSort__IsMatchServantEquipCombineStatusFilter(
          sort,
          this->fields.userServantEntity,
          this->fields.servantEntity,
          this->fields.isWarehouseServantEquip,
          0LL) )
  {
    return 0;
  }
  v11 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v11 = FilterKindList_TypeInfo;
  }
  RarityFilterKindList = (System_Int32Enum_array *)v11->static_fields->ServantEquipHaveStatusFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_35;
  v12 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)RarityFilterKindList,
                                           (const MethodInfo_34E4AF4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v12, 0LL)
    && !ListViewSort__IsMatchServantEquipHaveStatusFilter(
          sort,
          this->fields.userServantEntity,
          this->fields.servantEntity,
          this->fields.isWarehouseServantEquip,
          0LL) )
  {
    return 0;
  }
  RarityFilterKindList = (System_Int32Enum_array *)sub_1B88658(ListViewSort_FilterKind___TypeInfo, 1LL);
  if ( !RarityFilterKindList )
LABEL_35:
    sub_1B8880C(RarityFilterKindList, sort);
  if ( !RarityFilterKindList->max_length )
    sub_1B88814(RarityFilterKindList, RarityFilterKindList);
  RarityFilterKindList->m_Items[1] = 39;
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)RarityFilterKindList, 0LL)
    || !ListViewSort__GetFilter(sort, 39, 0LL) )
  {
    return 1;
  }
  v13 = !this->fields.isChoice;
  if ( !this->fields.isSwapChoice )
    return this->fields.isChoice;
  return v13;
}


bool __fastcall WarehouseListViewItem__IsMatchServantFilter(
        WarehouseListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  FilterKindList_c *v5; // x0
  __int64 ClassGroupFilterKindList; // x0
  FilterKindList_c *v7; // x0
  ListViewSort_FilterKind_array *v8; // x0
  FilterKindList_c *v9; // x0
  ListViewSort_FilterKind_array *v10; // x0
  FilterKindList_c *v11; // x0
  ListViewSort_FilterKind_array *v12; // x0
  FilterKindList_c *v13; // x0
  ListViewSort_FilterKind_array *v14; // x0
  UserServantEntity_o *userServantEntity; // x21
  __int64 v16; // x1
  _BOOL4 isChoice; // w8
  FilterKindList_c *v18; // x0
  ListViewSort_FilterKind_array *v19; // x21
  UserServantEntity_o *v21; // x0
  int32_t dispLimitCount; // w21
  UserServantEntity_o *v23; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  _BOOL4 IsUnSelectedAllTargetFilters; // w21
  _BOOL4 v31; // w23
  _BOOL4 IsMatchEffectCategory; // w22
  _BOOL4 v33; // w0

  if ( (byte_4A5921C & 1) == 0 )
  {
    sub_1B885B0(&FilterKindList_TypeInfo);
    sub_1B885B0(&ListViewSort_FilterKind___TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    sub_1B885B0(&ServantEventBonusFilterController_TypeInfo);
    byte_4A5921C = 1;
  }
  v5 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v5 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v5->static_fields->ClassGroupFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_67;
  ClassGroupFilterKindList = (__int64)System_Collections_Generic_List_Int32Enum___ToArray(
                                        (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                        (const MethodInfo_34E4AF4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_67;
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0LL) )
  {
    v7 = FilterKindList_TypeInfo;
    if ( !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
      v7 = FilterKindList_TypeInfo;
    }
    ClassGroupFilterKindList = (__int64)v7->static_fields->ClassFilterKindList;
    if ( !ClassGroupFilterKindList )
      goto LABEL_67;
    v8 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                            (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                            (const MethodInfo_34E4AF4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v8, 0LL)
      && !ListViewSort__IsMatchClassFilter(sort, this->fields.servantEntity, 0LL) )
    {
      return 0;
    }
  }
  else if ( !ListViewSort__IsMatchClassGroupFilter(sort, this->fields.servantEntity, 0LL) )
  {
    return 0;
  }
  v9 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v9 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v9->static_fields->NpTypeFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_67;
  v10 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_34E4AF4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v10, 0LL)
    && !ListViewSort__IsMatchNPTypeFilter(sort, this->fields.userServantEntity, 0LL) )
  {
    return 0;
  }
  v11 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v11 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v11->static_fields->NpEffectFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_67;
  v12 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_34E4AF4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v12, 0LL)
    && !ListViewSort__IsMatchNPEffectFilter(sort, this->fields.userServantEntity, 0LL) )
  {
    return 0;
  }
  v13 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v13 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v13->static_fields->ServantTypeFilterKindList;
  if ( !ClassGroupFilterKindList )
LABEL_67:
    sub_1B8880C(ClassGroupFilterKindList, sort);
  v14 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_34E4AF4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v14, 0LL)
    && !ListViewSort__IsMatchServantTypeFilter(sort, this->fields.servantEntity, 0LL) )
  {
    return 0;
  }
  if ( !ListViewSort__CheckSvtEventBonusFilterDefaultAll(sort, -1, 0LL) )
  {
    userServantEntity = this->fields.userServantEntity;
    if ( !ServantEventBonusFilterController_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantEventBonusFilterController_TypeInfo);
    if ( ServantEventBonusFilterController__IsHideServant(userServantEntity, sort, -1, 0LL) )
      return 0;
  }
  if ( !ListViewSort__CheckSvtEquipEffectFilterDefaultAll(sort, 0LL) )
  {
    v21 = this->fields.userServantEntity;
    if ( v21 )
    {
      dispLimitCount = this->fields.dispLimitCount;
      if ( dispLimitCount != UserServantEntity__getDispLimitCount(v21, 0, 0LL) )
      {
        ClassGroupFilterKindList = (__int64)this->fields.userServantEntity;
        if ( !ClassGroupFilterKindList )
          goto LABEL_67;
        ClassGroupFilterKindList = UserServantEntity__getDispLimitCount(
                                     (UserServantEntity_o *)ClassGroupFilterKindList,
                                     0,
                                     0LL);
        v23 = this->fields.userServantEntity;
        this->fields.dispLimitCount = ClassGroupFilterKindList;
        if ( !v23 )
          goto LABEL_67;
        SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v23, -1, 0LL);
        this->fields.skillCategoryIdList = SkillCategoryIdList;
        sub_1B88554(
          (ServantStatusBattleListViewItem_o *)&this->fields.skillCategoryIdList,
          (int32_t)SkillCategoryIdList,
          v25,
          v26);
        ClassGroupFilterKindList = (__int64)this->fields.userServantEntity;
        if ( !ClassGroupFilterKindList )
          goto LABEL_67;
        TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                         (UserServantEntity_o *)ClassGroupFilterKindList,
                                         0,
                                         0LL);
        this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
        sub_1B88554(
          (ServantStatusBattleListViewItem_o *)&this->fields.tdCategoryIdList,
          (int32_t)TreasureDeviceCategoryIdList,
          v28,
          v29);
      }
    }
    ClassGroupFilterKindList = sub_1B88658(ListViewSort_FilterKind___TypeInfo, 1LL);
    if ( !ClassGroupFilterKindList )
      goto LABEL_67;
    v16 = ClassGroupFilterKindList;
    if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
      goto LABEL_68;
    *(_DWORD *)(ClassGroupFilterKindList + 32) = 50;
    IsUnSelectedAllTargetFilters = ListViewSort__IsUnSelectedAllTargetFilters(
                                     sort,
                                     (ListViewSort_FilterKind_array *)ClassGroupFilterKindList,
                                     0LL);
    ClassGroupFilterKindList = sub_1B88658(ListViewSort_FilterKind___TypeInfo, 1LL);
    if ( !ClassGroupFilterKindList )
      goto LABEL_67;
    v16 = ClassGroupFilterKindList;
    if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
LABEL_68:
      sub_1B88814(ClassGroupFilterKindList, v16);
    *(_DWORD *)(ClassGroupFilterKindList + 32) = 51;
    v31 = ListViewSort__IsUnSelectedAllTargetFilters(
            sort,
            (ListViewSort_FilterKind_array *)ClassGroupFilterKindList,
            0LL);
    IsMatchEffectCategory = ServantEquipEffectFilterController__IsMatchEffectCategory(
                              this->fields.tdCategoryIdList,
                              sort,
                              0LL);
    v33 = ServantEquipEffectFilterController__IsMatchEffectCategory(this->fields.skillCategoryIdList, sort, 0LL);
    if ( ((IsUnSelectedAllTargetFilters ^ v31) & 1) != 0 )
    {
      if ( IsUnSelectedAllTargetFilters )
      {
        if ( !v33 )
          return 0;
      }
      else if ( !IsMatchEffectCategory )
      {
        return 0;
      }
    }
    else if ( !IsMatchEffectCategory && !v33 )
    {
      return 0;
    }
  }
  ClassGroupFilterKindList = sub_1B88658(ListViewSort_FilterKind___TypeInfo, 1LL);
  if ( !ClassGroupFilterKindList )
    goto LABEL_67;
  v16 = ClassGroupFilterKindList;
  if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
    goto LABEL_68;
  *(_DWORD *)(ClassGroupFilterKindList + 32) = 39;
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0LL)
    && ListViewSort__GetFilter(sort, 39, 0LL) )
  {
    isChoice = !this->fields.isChoice;
    if ( !this->fields.isSwapChoice )
      isChoice = this->fields.isChoice;
    if ( !isChoice )
      return 0;
  }
  v18 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v18 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v18->static_fields->RarityFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_67;
  v19 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_34E4AF4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v19, 0LL)
      || ListViewSort__IsSelectedAllTargetFilters(sort, v19, 0LL)
      || ListViewSort__IsMatchRarityFilter(sort, this->fields.rarity, 0LL);
}


void __fastcall WarehouseListViewItem__Modify(
        WarehouseListViewItem_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  int32_t v3; // w3
  struct UserServantEntity_o **p_userServantEntity; // x20
  __int64 v6; // x1
  UserServantEntity_o *IsLock; // x0
  UserServantEntity_o *v8; // x8
  bool IsChoice; // w0

  this->fields.userServantEntity = userServantEntity;
  p_userServantEntity = &this->fields.userServantEntity;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.userServantEntity,
    (int32_t)userServantEntity,
    (int32_t)method,
    v3);
  IsLock = *p_userServantEntity;
  *((_BYTE *)p_userServantEntity + 144) = 0;
  p_userServantEntity[17] = (struct UserServantEntity_o *)(&dword_0 + 1);
  if ( !IsLock
    || (IsLock = (UserServantEntity_o *)UserServantEntity__IsLock(IsLock, 0LL),
        v8 = this->fields.userServantEntity,
        this->fields.isLock = (unsigned __int8)IsLock & 1,
        !v8) )
  {
    sub_1B8880C(IsLock, v6);
  }
  IsChoice = UserServantEntity__IsChoice(v8, 0LL);
  *(_WORD *)&this->fields.isSwapLock = 0;
  this->fields.isChoice = IsChoice;
  this->fields.dragSelectNum = -1;
}


void __fastcall WarehouseListViewItem__ModifyItem(
        WarehouseListViewItem_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  int32_t v3; // w3
  struct UserServantEntity_o **p_userServantEntity; // x19

  this->fields.userServantEntity = userServantEntity;
  p_userServantEntity = &this->fields.userServantEntity;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.userServantEntity,
    (int32_t)userServantEntity,
    (int32_t)method,
    v3);
  *((_BYTE *)p_userServantEntity + 144) = 0;
  p_userServantEntity[17] = (struct UserServantEntity_o *)(&dword_0 + 1);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseListViewItem__Modify_35897212(
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
    sub_1B8880C(userServantEntity, isFavorite);
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
  int64_t *p_sortValue0; // x23
  int64_t priority; // x8
  EventUpValSetupInfo_o *setupInfo; // x4
  int32_t bonusKind; // w8
  int32_t v9; // w8
  int32_t bonusKind2; // w8
  int32_t v11; // w5
  int32_t v12; // w9
  int32_t v13; // w8
  int32_t v14; // w9
  int32_t bonusKindId; // w9
  int32_t bonusKind2Id; // w8
  System_Collections_Generic_List_EventGroupEntity__o *EntitiesByGroupId; // x21
  System_Func_object__bool__o *v18; // x22
  bool v19; // w0
  int32_t v20; // w8
  bool EventUpVal_40205464; // w0
  System_Collections_Generic_List_EventGroupEntity__o *v22; // x21
  System_Func_object__bool__o *v23; // x22
  System_Int32_array *v24; // x21
  System_Int32_array *OtherEventEquipIdList; // x21
  System_Func_int__bool__o *v26; // x0
  __int64 *v27; // x8
  Il2CppObject *MasterData_object; // x0
  int32_t svtId; // w22
  ServantFilterMaster_o *v30; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v31; // kr00_16
  System_Int32_array *eventIdList; // x21
  System_Func_T__bool__o *v33; // x22
  _BOOL4 isChoice; // w21
  const MethodInfo *v35; // x2
  __int64 v36; // x8
  struct UserServantEntity_o *v37; // x8
  __int128 v38; // q1
  struct UserServantEntity_o *v39; // x8
  IconLabelInfo_o *iconLabelInfo2; // x20
  int32_t v41; // w21
  bool IsMaterialTd; // w8
  struct UserServantEntity_o *v43; // x8
  int64_t hp; // x2
  int32_t adjustHp; // w3
  int32_t v46; // w1
  int64_t friendship; // x2
  int32_t friendshipMax; // w3
  int32_t v49; // w1
  __int64 v50; // x0
  __int64 v51; // x0
  WarehouseListViewItem_o *v52; // x20
  __int64 v53; // x0
  __int64 v54; // x0
  int32_t FirstOpenEventId; // w20
  __int64 v56; // x8
  __int64 v57; // x0
  __int64 monitor; // x8
  int64_t rarity; // x8
  int64_t v60; // x20
  IconLabelInfo_o *iconLabelInfo1; // x21
  struct UserServantEntity_o *v62; // x8
  IconLabelInfo_o *v63; // x19
  struct ServantEntity_o *servantEntity; // x8
  int64_t cost; // x2
  __int64 methodPtr_low; // x10
  struct ServantEntity_o *v67; // x8
  __int64 collectionNo; // x10
  struct UserServantEntity_o *v69; // x8
  int32_t lv; // w20
  IconLabelInfo_o *v71; // x20
  int32_t v72; // w21
  UserServantEntity_o *userServantEntity; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v75; // [xsp+10h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v76; // [xsp+30h] [xbp-60h]
  Il2CppObject *entity; // [xsp+50h] [xbp-40h] BYREF
  __int64 tdMaxLv; // [xsp+58h] [xbp-38h] BYREF

  v3 = sort;
  v4 = this;
  if ( (byte_4A5921B & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_Any_EventGroupEntity___);
    sub_1B885B0(&Method_BasicHelper_Any_int____76088816);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventBonusFilterMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventGroupMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantFilterMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_EventGroupMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1B885B0(&System_Func_int__bool__TypeInfo);
    sub_1B885B0(&System_Func_EventGroupEntity__bool__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventGroupEntity__get_Count__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_WarehouseListViewItem__SetSortValue_b__65_0__);
    sub_1B885B0(&Method_WarehouseListViewItem__SetSortValue_b__65_1__);
    sub_1B885B0(&Method_WarehouseListViewItem__SetSortValue_b__65_2__);
    sub_1B885B0(&Method_WarehouseListViewItem__SetSortValue_b__65_3__);
    this = (WarehouseListViewItem_o *)sub_1B885B0(&WarehouseListViewManager_TypeInfo);
    byte_4A5921B = 1;
  }
  entity = 0LL;
  tdMaxLv = 0LL;
  v4->fields.sortValue0 = 0LL;
  p_sortValue0 = &v4->fields.sortValue0;
  priority = v4->fields.priority;
  *(_WORD *)&v4->fields.isTermination = 0;
  v4->fields.sortValue1 = -1LL;
  v4->fields.sortValue1B = priority;
  v4->fields.isNeedAdjustIconLabelScale = 0;
  if ( !v3 )
    goto LABEL_209;
  if ( !v3->fields.isBonusKind )
    goto LABEL_83;
  setupInfo = v4->fields.setupInfo;
  if ( !setupInfo )
    goto LABEL_209;
  if ( !setupInfo->fields.isQuestStart )
  {
    bonusKind2 = v3->fields.bonusKind2;
    switch ( bonusKind2 )
    {
      case 0:
        v4->fields.bonusKind = 0;
        v4->fields.bonusKindId = v3->fields.bonusKind2Id;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        this = (WarehouseListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventGroupMaster___);
        if ( !this )
          goto LABEL_209;
        EntitiesByGroupId = EventGroupMaster__GetEntitiesByGroupId(
                              (EventGroupMaster_o *)this,
                              v4->fields.bonusKindId,
                              0LL);
        this = (WarehouseListViewItem_o *)BasicHelper__IsNullOrEmpty(
                                            (System_Collections_ICollection_o *)EntitiesByGroupId,
                                            0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
          goto LABEL_83;
        if ( !EntitiesByGroupId )
          goto LABEL_209;
        if ( EntitiesByGroupId->fields._size >= 2 )
        {
          v18 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_EventGroupEntity__bool__TypeInfo);
          System_Func_object__bool____ctor(
            v18,
            (Il2CppObject *)v4,
            Method_WarehouseListViewItem__SetSortValue_b__65_2__,
            0LL);
          v19 = BasicHelper__Any_object_(
                  (System_Collections_Generic_List_T__o *)EntitiesByGroupId,
                  (System_Func_T__bool__o *)v18,
                  (const MethodInfo_2E6ACD0 *)Method_BasicHelper_Any_EventGroupEntity___);
          v4->fields.isEventUpVal = v19;
          if ( !v19 )
            goto LABEL_95;
        }
        goto LABEL_83;
      case 3:
        if ( v4->fields.bonusKind == 3 )
        {
          bonusKindId = v4->fields.bonusKindId;
          bonusKind2Id = v3->fields.bonusKind2Id;
          goto LABEL_38;
        }
        bonusKind2Id = v3->fields.bonusKind2Id;
        goto LABEL_78;
      case 4:
      case 5:
        if ( v4->fields.bonusKind == bonusKind2 )
        {
          v11 = v3->fields.bonusKind2Id;
          if ( v4->fields.bonusKindId == v11 )
            goto LABEL_59;
        }
        else
        {
          v11 = v3->fields.bonusKind2Id;
        }
        this = (WarehouseListViewItem_o *)v4->fields.userServantEntity;
        v4->fields.bonusKind = bonusKind2;
        goto LABEL_49;
      case 7:
        if ( v4->fields.bonusKind == 7 )
        {
          v12 = v4->fields.bonusKindId;
          v13 = v3->fields.bonusKind2Id;
          goto LABEL_42;
        }
        v13 = v3->fields.bonusKind2Id;
        break;
      case 8:
        if ( v4->fields.bonusKind == 8 )
        {
          v20 = v3->fields.bonusKind2Id;
          if ( v4->fields.bonusKindId == v20 )
            goto LABEL_59;
        }
        else
        {
          v20 = v3->fields.bonusKind2Id;
        }
        v4->fields.bonusKind = 8;
        v4->fields.bonusKindId = v20;
        eventIdList = setupInfo->fields.eventIdList;
        this = (WarehouseListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_209;
        this = (WarehouseListViewItem_o *)DataManager__GetMasterData_object_(
                                            (DataManager_o *)this,
                                            (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventBonusFilterMaster___);
        if ( !this )
          goto LABEL_209;
        OtherEventEquipIdList = EventBonusFilterMaster__GetOtherEventEquipIdList(
                                  (EventBonusFilterMaster_o *)this,
                                  eventIdList,
                                  0LL);
        v26 = (System_Func_int__bool__o *)sub_1B887FC(System_Func_int__bool__TypeInfo);
        v27 = &Method_WarehouseListViewItem__SetSortValue_b__65_3__;
        goto LABEL_76;
      default:
        goto LABEL_83;
    }
    goto LABEL_67;
  }
  bonusKind = v3->fields.bonusKind;
  if ( (unsigned int)(bonusKind - 4) < 2 )
  {
    if ( v4->fields.bonusKind == bonusKind )
      goto LABEL_59;
    v4->fields.bonusKind = bonusKind;
    v11 = v3->fields.bonusKindId;
    this = (WarehouseListViewItem_o *)v4->fields.userServantEntity;
LABEL_49:
    v4->fields.bonusKindId = v11;
    if ( !this )
      goto LABEL_209;
    EventUpVal_40205464 = UserServantEntity__getEventUpVal_40205464(
                            (UserServantEntity_o *)this,
                            -1,
                            0,
                            0,
                            setupInfo,
                            v11,
                            0,
                            0LL);
    goto LABEL_82;
  }
  if ( bonusKind == 7 )
  {
    if ( v4->fields.bonusKind == 7 )
    {
      v12 = v4->fields.bonusKindId;
      v13 = v3->fields.bonusKindId;
LABEL_42:
      if ( v12 == v13 )
        goto LABEL_59;
    }
    else
    {
      v13 = v3->fields.bonusKindId;
    }
LABEL_67:
    v4->fields.bonusKind = 7;
    v4->fields.bonusKindId = v13;
    this = (WarehouseListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_209;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)this,
                          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantFilterMaster___);
    svtId = v4->fields.svtId;
    v30 = (ServantFilterMaster_o *)MasterData_object;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(svtId, 0LL);
    sort = *(ListViewSort_o **)&v31.fields.fakeValue;
    this = *(WarehouseListViewItem_o **)&v31.fields.currentCryptoKey;
    if ( !v30 )
      goto LABEL_209;
    EventUpVal_40205464 = ServantFilterMaster__IsEnableServant(v30, v31, v4->fields.bonusKindId, 0LL);
    goto LABEL_82;
  }
  if ( !bonusKind )
  {
    if ( v4->fields.bonusKind )
    {
      v9 = v3->fields.bonusKindId;
      goto LABEL_52;
    }
    v9 = v3->fields.bonusKindId;
    if ( v4->fields.bonusKindId != v9 )
    {
LABEL_52:
      v4->fields.bonusKind = 0;
      v4->fields.bonusKindId = v9;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      this = (WarehouseListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventGroupMaster___);
      if ( this )
      {
        v22 = EventGroupMaster__GetEntitiesByGroupId((EventGroupMaster_o *)this, v4->fields.bonusKindId, 0LL);
        this = (WarehouseListViewItem_o *)BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v22, 0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          if ( !v22 )
            goto LABEL_209;
          if ( v22->fields._size >= 2 )
          {
            v23 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_EventGroupEntity__bool__TypeInfo);
            System_Func_object__bool____ctor(
              v23,
              (Il2CppObject *)v4,
              Method_WarehouseListViewItem__SetSortValue_b__65_0__,
              0LL);
            v4->fields.isEventUpVal = BasicHelper__Any_object_(
                                        (System_Collections_Generic_List_T__o *)v22,
                                        (System_Func_T__bool__o *)v23,
                                        (const MethodInfo_2E6ACD0 *)Method_BasicHelper_Any_EventGroupEntity___);
          }
        }
        goto LABEL_59;
      }
LABEL_209:
      sub_1B8880C(this, sort);
    }
LABEL_59:
    if ( !v4->fields.isEventUpVal )
      goto LABEL_95;
    goto LABEL_83;
  }
  if ( v3->fields.bonusKind2 == 8 )
  {
    if ( v4->fields.bonusKind == bonusKind )
    {
      v14 = v3->fields.bonusKindId;
      if ( v4->fields.bonusKindId == v14 )
        goto LABEL_59;
    }
    else
    {
      v14 = v3->fields.bonusKindId;
    }
    v4->fields.bonusKind = bonusKind;
    v4->fields.bonusKindId = v14;
    v24 = setupInfo->fields.eventIdList;
    this = (WarehouseListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_209;
    this = (WarehouseListViewItem_o *)DataManager__GetMasterData_object_(
                                        (DataManager_o *)this,
                                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventBonusFilterMaster___);
    if ( !this )
      goto LABEL_209;
    OtherEventEquipIdList = EventBonusFilterMaster__GetOtherEventEquipIdList((EventBonusFilterMaster_o *)this, v24, 0LL);
    v26 = (System_Func_int__bool__o *)sub_1B887FC(System_Func_int__bool__TypeInfo);
    v27 = &Method_WarehouseListViewItem__SetSortValue_b__65_1__;
LABEL_76:
    v33 = (System_Func_T__bool__o *)v26;
    System_Func_int__bool____ctor(v26, (Il2CppObject *)v4, *v27, 0LL);
    EventUpVal_40205464 = BasicHelper__Any_int__48671312(
                            OtherEventEquipIdList,
                            v33,
                            (const MethodInfo_2E6AA50 *)Method_BasicHelper_Any_int____76088816);
  }
  else
  {
    if ( bonusKind != 3 )
      goto LABEL_83;
    if ( v4->fields.bonusKind == 3 )
    {
      bonusKindId = v4->fields.bonusKindId;
      bonusKind2Id = v3->fields.bonusKindId;
LABEL_38:
      if ( bonusKindId == bonusKind2Id )
        goto LABEL_59;
    }
    else
    {
      bonusKind2Id = v3->fields.bonusKindId;
    }
LABEL_78:
    v4->fields.bonusKind = 3;
    v4->fields.bonusKindId = bonusKind2Id;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (WarehouseListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventCampaignMaster___);
    if ( !this )
      goto LABEL_209;
    EventUpVal_40205464 = EventCampaignMaster__IsEnableServant(
                            (EventCampaignMaster_o *)this,
                            v4->fields.svtId,
                            v4->fields.bonusKindId,
                            0LL);
  }
LABEL_82:
  v4->fields.isEventUpVal = EventUpVal_40205464;
  if ( !EventUpVal_40205464 )
  {
LABEL_95:
    LOBYTE(this) = 0;
    return (char)this;
  }
LABEL_83:
  if ( (((__int64 (__fastcall *)(WarehouseListViewItem_o *, ListViewSort_o *, void *))v4->klass->vtable._5_IsMatchFilter.method)(
          v4,
          v3,
          v4->klass[1]._1.image) & 1) == 0 )
    goto LABEL_95;
  this = (WarehouseListViewItem_o *)v4->fields.iconLabelInfo2;
  if ( v4->fields.isSwapChoice )
    isChoice = !v4->fields.isChoice;
  else
    isChoice = v4->fields.isChoice;
  if ( !this )
    goto LABEL_209;
  IconLabelInfo__Clear((IconLabelInfo_o *)this, 0LL);
  *p_sortValue0 = 0LL;
  v4->fields.sortValue0B = 0LL;
  if ( !v3->fields.isSmartSort )
  {
    if ( isChoice && v3->fields.isChoiceSort )
      *p_sortValue0 = -10LL;
    goto LABEL_109;
  }
  this = (WarehouseListViewItem_o *)v4->fields.servantEntity;
  if ( !this )
    goto LABEL_209;
  if ( ServantEntity__get_IsKeepServantEquip((ServantEntity_o *)this, 0LL) )
  {
    if ( !v4->fields.isPartyEquip )
    {
      if ( !v4->fields.isUseSupportEquip )
      {
        if ( !v4->fields.isUseRecommendSupportEquip )
          goto LABEL_107;
        goto LABEL_105;
      }
      goto LABEL_101;
    }
LABEL_99:
    v36 = -20LL;
LABEL_106:
    *p_sortValue0 = v36;
    goto LABEL_107;
  }
  if ( (v4->fields.partyIndex & 0x80000000) == 0 )
    goto LABEL_99;
  if ( v4->fields.isUseSupport )
  {
LABEL_101:
    v36 = -30LL;
    goto LABEL_106;
  }
  if ( v4->fields.isUseRecommendSupport )
  {
    v36 = -35LL;
    goto LABEL_106;
  }
  if ( v4->fields.attribute )
  {
LABEL_105:
    v36 = -40LL;
    goto LABEL_106;
  }
  if ( v4->fields.isFavorite )
  {
    v36 = -50LL;
    goto LABEL_106;
  }
  if ( v4->fields.isPush )
  {
    v36 = -55LL;
    goto LABEL_106;
  }
  userServantEntity = v4->fields.userServantEntity;
  if ( userServantEntity
    && !v4->fields.isWarehouseServant
    && UserServantEntity__IsProtectedEventServant(userServantEntity, 0LL)
    || v4->fields.isFortification )
  {
    v36 = -10LL;
    goto LABEL_106;
  }
LABEL_107:
  if ( isChoice && v3->fields.isChoiceSort )
    *(_OWORD *)p_sortValue0 = xmmword_BB41C0;
LABEL_109:
  this = (WarehouseListViewItem_o *)(&dword_0 + 1);
  switch ( v3->fields.sortKind )
  {
    case 1:
      v37 = v4->fields.userServantEntity;
      if ( !v37 )
        goto LABEL_209;
      v38 = *(_OWORD *)&v37->fields.id.fields.fakeValue;
      *(_OWORD *)&v76.fields.currentCryptoKey = *(_OWORD *)&v37->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v76.fields.fakeValue = v38;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v75 = v76;
      this = (WarehouseListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v75, 0LL);
      v39 = v4->fields.userServantEntity;
      v4->fields.sortValue1 = (int64_t)this;
      if ( !v39 )
        goto LABEL_209;
      this = (WarehouseListViewItem_o *)v4->fields.iconLabelInfo1;
      if ( !this )
        goto LABEL_209;
      IconLabelInfo__SetTime((IconLabelInfo_o *)this, 49, v39->fields.createdAt, 0, 0, 0, 0LL);
      this = (WarehouseListViewItem_o *)v4->fields.userServantEntity;
      if ( !this )
        goto LABEL_209;
      iconLabelInfo2 = v4->fields.iconLabelInfo2;
      v41 = *(_DWORD *)&this->fields.isEventUpVal;
      this = (WarehouseListViewItem_o *)UserServantEntity__getLevelMax((UserServantEntity_o *)this, 0LL);
      if ( !iconLabelInfo2 )
        goto LABEL_209;
      IconLabelInfo__Set_38140136(iconLabelInfo2, 2, v41, (int32_t)this, 0, 0, 0, 0, 0LL);
      this = (WarehouseListViewItem_o *)v4->fields.userServantEntity;
      if ( !this )
        goto LABEL_209;
      IsMaterialTd = UserServantEntity__IsMaterialTd((UserServantEntity_o *)this, 0LL);
      LOBYTE(this) = 1;
      if ( IsMaterialTd )
        v4->fields.isNeedAdjustIconLabelScale = 1;
      return (char)this;
    case 2:
      rarity = v4->fields.rarity;
      this = (WarehouseListViewItem_o *)v4->fields.userServantEntity;
      goto LABEL_165;
    case 3:
      this = (WarehouseListViewItem_o *)v4->fields.userServantEntity;
      if ( !this )
        goto LABEL_209;
      v60 = *(int *)&this->fields.isEventUpVal;
      iconLabelInfo1 = v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = v60;
      this = (WarehouseListViewItem_o *)UserServantEntity__getLevelMax((UserServantEntity_o *)this, 0LL);
      if ( !iconLabelInfo1 )
        goto LABEL_209;
      IconLabelInfo__Set_38140136(iconLabelInfo1, 2, v60, (int32_t)this, 0, 0, 0, 0, 0LL);
      goto LABEL_198;
    case 4:
      this = (WarehouseListViewItem_o *)v4->fields.userServantEntity;
      if ( !this )
        goto LABEL_209;
      UserServantEntity__getTreasureDeviceInfo_40212352(
        (UserServantEntity_o *)this,
        (int32_t *)&tdMaxLv + 1,
        (int32_t *)&tdMaxLv,
        0LL);
      LODWORD(friendship) = HIDWORD(tdMaxLv);
      this = (WarehouseListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = SHIDWORD(tdMaxLv);
      if ( !this )
        goto LABEL_209;
      friendshipMax = tdMaxLv;
      v49 = 33;
      goto LABEL_179;
    case 5:
      v43 = v4->fields.userServantEntity;
      if ( !v43 )
        goto LABEL_209;
      hp = v43->fields.hp;
      this = (WarehouseListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = hp;
      if ( !this )
        goto LABEL_209;
      adjustHp = v43->fields.adjustHp;
      v46 = 3;
      goto LABEL_159;
    case 6:
      v62 = v4->fields.userServantEntity;
      if ( !v62 )
        goto LABEL_209;
      hp = v62->fields.atk;
      this = (WarehouseListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = hp;
      if ( !this )
        goto LABEL_209;
      adjustHp = v62->fields.adjustAtk;
      v46 = 5;
LABEL_159:
      IconLabelInfo__Set_38140136((IconLabelInfo_o *)this, v46, hp, adjustHp, 0, 0, 0, 0, 0LL);
      this = (WarehouseListViewItem_o *)v4->fields.userServantEntity;
      if ( !this )
        goto LABEL_209;
      v63 = v4->fields.iconLabelInfo2;
      goto LABEL_195;
    case 7:
      servantEntity = v4->fields.servantEntity;
      if ( !servantEntity )
        goto LABEL_209;
      cost = servantEntity->fields.cost;
      this = (WarehouseListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = cost;
      if ( !this )
        goto LABEL_209;
      IconLabelInfo__Set_38140136((IconLabelInfo_o *)this, 7, cost, 0, 0, 0, 0, 0, 0LL);
      goto LABEL_180;
    case 8:
      this = (WarehouseListViewItem_o *)v4->fields.userServantEntity;
      rarity = -v4->fields.priority;
LABEL_165:
      v4->fields.sortValue1 = rarity;
      if ( !this )
        goto LABEL_209;
      goto LABEL_194;
    case 0xA:
      friendship = v4->fields.friendship;
      this = (WarehouseListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = friendship;
      if ( !this )
        goto LABEL_209;
      friendshipMax = v4->fields.friendshipMax;
      v49 = 32;
      goto LABEL_179;
    case 0xE:
      this = (WarehouseListViewItem_o *)v4->fields.amountSortValue;
      if ( ((unsigned __int64)this & 0x8000000000000000LL) == 0 )
        goto LABEL_174;
      this = (WarehouseListViewItem_o *)v3->fields.manager;
      if ( !this )
        goto LABEL_209;
      methodPtr_low = LOBYTE(WarehouseListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(this->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (WarehouseListViewManager_c *)this->klass->_2.typeHierarchy[methodPtr_low - 1] != WarehouseListViewManager_TypeInfo )
      {
        goto LABEL_209;
      }
      this = (WarehouseListViewItem_o *)WarehouseListViewManager__GetAmountSortValue(
                                          (WarehouseListViewManager_o *)this,
                                          v4->fields.svtId,
                                          v35);
      v4->fields.amountSortValue = (int64_t)this;
LABEL_174:
      v67 = v4->fields.servantEntity;
      if ( !v67 )
        goto LABEL_209;
      collectionNo = v67->fields.collectionNo;
      v69 = v4->fields.userServantEntity;
      v4->fields.sortValue1 = (((unsigned __int64)(unsigned int)v4->fields.rarity << 32) + ((_QWORD)this << 48)) | collectionNo;
      if ( !v69 )
        goto LABEL_209;
      v63 = v4->fields.iconLabelInfo1;
      lv = v69->fields.lv;
      this = (WarehouseListViewItem_o *)v69;
      goto LABEL_196;
    case 0xF:
      friendship = v4->fields.hpReinforceValue;
      this = (WarehouseListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = friendship;
      if ( !this )
        goto LABEL_209;
      friendshipMax = v4->fields.nowMaxHpReinforceValue;
      v49 = 44;
      goto LABEL_179;
    case 0x10:
      friendship = v4->fields.atkReinforceValue;
      this = (WarehouseListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = friendship;
      if ( !this )
        goto LABEL_209;
      friendshipMax = v4->fields.nowMaxAtkReinforceValue;
      v49 = 45;
LABEL_179:
      IconLabelInfo__Set_38140136((IconLabelInfo_o *)this, v49, friendship, friendshipMax, 0, 0, 0, 0, 0LL);
LABEL_180:
      this = (WarehouseListViewItem_o *)v4->fields.userServantEntity;
      if ( !this )
        goto LABEL_209;
      v71 = v4->fields.iconLabelInfo2;
      v72 = *(_DWORD *)&this->fields.isEventUpVal;
      this = (WarehouseListViewItem_o *)UserServantEntity__getLevelMax((UserServantEntity_o *)this, 0LL);
      if ( !v71 )
        goto LABEL_209;
      IconLabelInfo__Set_38140136(v71, 2, v72, (int32_t)this, 0, 0, 0, 0, 0LL);
      this = (WarehouseListViewItem_o *)v4->fields.servantEntity;
      if ( !this )
        goto LABEL_209;
      if ( ServantEntity__get_IsExpUp((ServantEntity_o *)this, 0LL) )
        goto LABEL_188;
      this = (WarehouseListViewItem_o *)v4->fields.servantEntity;
      if ( !this )
        goto LABEL_209;
      if ( ServantEntity__get_IsStatusUp((ServantEntity_o *)this, 0LL) )
        goto LABEL_188;
      this = (WarehouseListViewItem_o *)v4->fields.servantEntity;
      if ( !this )
        goto LABEL_209;
      if ( !ServantEntity__get_IsServantMaterialTd((ServantEntity_o *)this, 0LL) )
        goto LABEL_198;
LABEL_188:
      this = (WarehouseListViewItem_o *)v4->fields.iconLabelInfo1;
      if ( !this )
        goto LABEL_209;
      IconLabelInfo__Clear((IconLabelInfo_o *)this, 0LL);
      this = (WarehouseListViewItem_o *)v4->fields.iconLabelInfo2;
      if ( !this )
        goto LABEL_209;
      IconLabelInfo__Clear((IconLabelInfo_o *)this, 0LL);
      goto LABEL_198;
    case 0x18:
      v50 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
      if ( (*(_BYTE *)(v50 + 309) & 1) == 0 )
        v50 = sub_1BDA48C(v50);
      v51 = *(_QWORD *)(*(_QWORD *)(v50 + 192) + 16LL);
      if ( (*(_BYTE *)(v51 + 309) & 1) == 0 )
        v51 = sub_1BDA48C(v51);
      this = **(WarehouseListViewItem_o ***)(v51 + 184);
      if ( !this )
        goto LABEL_209;
      this = (WarehouseListViewItem_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventBonusFilterMaster___);
      if ( !this )
        goto LABEL_209;
      this = (WarehouseListViewItem_o *)EventBonusFilterMaster__GetEventIdListBySvtId(
                                          (EventBonusFilterMaster_o *)this,
                                          v4->fields.svtId,
                                          0LL);
      if ( !this )
        goto LABEL_209;
      v52 = this;
      if ( !*(_QWORD *)&this->fields.sortIndex )
      {
        monitor = 0x7FFFFFFFFFFFFFFFLL;
LABEL_192:
        v4->fields.sortValue1 = monitor;
        goto LABEL_193;
      }
      v53 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
      if ( (*(_BYTE *)(v53 + 309) & 1) == 0 )
        v53 = sub_1BDA48C(v53);
      v54 = *(_QWORD *)(*(_QWORD *)(v53 + 192) + 16LL);
      if ( (*(_BYTE *)(v54 + 309) & 1) == 0 )
        v54 = sub_1BDA48C(v54);
      this = **(WarehouseListViewItem_o ***)(v54 + 184);
      if ( !this )
        goto LABEL_209;
      this = (WarehouseListViewItem_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventGroupMaster___);
      if ( !v52->fields.sortIndex )
        sub_1B88814(this, sort);
      if ( !this )
        goto LABEL_209;
      FirstOpenEventId = EventGroupMaster__GetFirstOpenEventId((EventGroupMaster_o *)this, v52->fields.sortValue0, 0LL);
      v56 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
      if ( (*(_BYTE *)(v56 + 309) & 1) == 0 )
        v56 = sub_1BDA48C(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4));
      v57 = *(_QWORD *)(*(_QWORD *)(v56 + 192) + 16LL);
      if ( (*(_BYTE *)(v57 + 309) & 1) == 0 )
        v57 = sub_1BDA48C(v57);
      this = **(WarehouseListViewItem_o ***)(v57 + 184);
      if ( !this )
        goto LABEL_209;
      this = (WarehouseListViewItem_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventMaster___);
      if ( !this )
        goto LABEL_209;
      this = (WarehouseListViewItem_o *)DataMasterBase_object__object__int___TryGetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                          &entity,
                                          FirstOpenEventId,
                                          (const MethodInfo_311D988 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_209;
        monitor = (__int64)entity[5].monitor;
        goto LABEL_192;
      }
LABEL_193:
      this = (WarehouseListViewItem_o *)v4->fields.userServantEntity;
      v4->fields.sortValue1B = v4->fields.svtId;
      if ( !this )
        goto LABEL_209;
LABEL_194:
      v63 = v4->fields.iconLabelInfo1;
LABEL_195:
      lv = *(_DWORD *)&this->fields.isEventUpVal;
LABEL_196:
      this = (WarehouseListViewItem_o *)UserServantEntity__getLevelMax((UserServantEntity_o *)this, 0LL);
      if ( !v63 )
        goto LABEL_209;
      IconLabelInfo__Set_38140136(v63, 2, lv, (int32_t)this, 0, 0, 0, 0, 0LL);
LABEL_198:
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


bool __fastcall WarehouseListViewItem___SetSortValue_b__65_0(
        WarehouseListViewItem_o *this,
        EventGroupEntity_o *entity,
        const MethodInfo *method)
{
  EventCampaignMaster_o *Master_object; // x0
  __int64 v6; // x1
  Il2CppObject *v7; // x0
  int32_t svtId; // w22
  ServantFilterMaster_o *v9; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // kr00_16

  if ( (byte_4A59221 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ServantFilterMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A59221 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (EventCampaignMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventCampaignMaster___);
  if ( !entity || !Master_object )
    goto LABEL_17;
  if ( EventCampaignMaster__IsEnableServant(Master_object, this->fields.svtId, entity->fields.eventId, 0LL) )
    return 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v7 = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantFilterMaster___);
  svtId = this->fields.svtId;
  v9 = (ServantFilterMaster_o *)v7;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(svtId, 0LL);
  v6 = *(_QWORD *)&v10.fields.fakeValue;
  Master_object = *(EventCampaignMaster_o **)&v10.fields.currentCryptoKey;
  if ( !v9 )
    goto LABEL_17;
  if ( ServantFilterMaster__IsEnableServant(v9, v10, entity->fields.eventId, 0LL) )
    return 1;
  Master_object = (EventCampaignMaster_o *)this->fields.userServantEntity;
  if ( !Master_object )
LABEL_17:
    sub_1B8880C(Master_object, v6);
  return UserServantEntity__getEventUpVal_40205464(
           (UserServantEntity_o *)Master_object,
           -1,
           0,
           0,
           this->fields.setupInfo,
           entity->fields.eventId,
           0,
           0LL);
}


bool __fastcall WarehouseListViewItem___SetSortValue_b__65_1(
        WarehouseListViewItem_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return this->fields.svtId == x;
}


bool __fastcall WarehouseListViewItem___SetSortValue_b__65_2(
        WarehouseListViewItem_o *this,
        EventGroupEntity_o *entity,
        const MethodInfo *method)
{
  EventCampaignMaster_o *Master_object; // x0
  __int64 v6; // x1
  Il2CppObject *v7; // x0
  int32_t svtId; // w22
  ServantFilterMaster_o *v9; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // kr00_16

  if ( (byte_4A59222 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ServantFilterMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A59222 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (EventCampaignMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventCampaignMaster___);
  if ( !entity || !Master_object )
    goto LABEL_17;
  if ( EventCampaignMaster__IsEnableServant(Master_object, this->fields.svtId, entity->fields.eventId, 0LL) )
    return 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v7 = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantFilterMaster___);
  svtId = this->fields.svtId;
  v9 = (ServantFilterMaster_o *)v7;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(svtId, 0LL);
  v6 = *(_QWORD *)&v10.fields.fakeValue;
  Master_object = *(EventCampaignMaster_o **)&v10.fields.currentCryptoKey;
  if ( !v9 )
    goto LABEL_17;
  if ( ServantFilterMaster__IsEnableServant(v9, v10, entity->fields.eventId, 0LL) )
    return 1;
  Master_object = (EventCampaignMaster_o *)this->fields.userServantEntity;
  if ( !Master_object )
LABEL_17:
    sub_1B8880C(Master_object, v6);
  return UserServantEntity__getEventUpVal_40205464(
           (UserServantEntity_o *)Master_object,
           -1,
           0,
           0,
           this->fields.setupInfo,
           entity->fields.eventId,
           0,
           0LL);
}


bool __fastcall WarehouseListViewItem___SetSortValue_b__65_3(
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
  if ( (byte_4A59220 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A59220 = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


bool __fastcall WarehouseListViewItem__get_IsCanNotSelect(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  if ( this->fields.isFavorite
    || (this->fields.partyIndex & 0x80000000) == 0
    || this->fields.isPartyEquip
    || this->fields.attribute
    || this->fields.isUseSupport
    || this->fields.isUseSupportEquip
    || this->fields.isUseRecommendSupport
    || this->fields.isUseRecommendSupportEquip
    || this->fields.isFatigueRecovery
    || this->fields.isFortification
    || this->fields.isPush )
  {
    return 1;
  }
  if ( this->fields.userServantEntity && !this->fields.isWarehouseServant )
    return UserServantEntity__IsProtectedEventServant(this->fields.userServantEntity, 0LL);
  return 0;
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
  if ( this->fields.isSwapChoice )
    return !this->fields.isChoice;
  else
    return this->fields.isChoice;
}


bool __fastcall WarehouseListViewItem__get_IsDispLock(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  if ( this->fields.isSwapLock )
    return !this->fields.isLock;
  else
    return this->fields.isLock;
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
    sub_1B8880C(0LL, method);
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
  return userServantEntity
      && !this->fields.isWarehouseServant
      && UserServantEntity__IsProtectedEventServant(userServantEntity, 0LL);
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


bool __fastcall WarehouseListViewItem__get_IsUseRecommendSupportEquip(
        WarehouseListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isUseRecommendSupportEquip;
}


bool __fastcall WarehouseListViewItem__get_IsUseRecommendSupportServant(
        WarehouseListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isUseRecommendSupport;
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
  ServantEntity_o *servantEntity; // x19
  struct UserServantEntity_o *userServantEntity; // x8
  __int64 v5; // x20
  __int64 v6; // x21
  int32_t v7; // w1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  if ( (byte_4A5921F & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&StringLiteral_19052/*"error"*/);
    byte_4A5921F = 1;
  }
  servantEntity = this->fields.servantEntity;
  if ( !servantEntity )
    return (System_String_o *)StringLiteral_19052/*"error"*/;
  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
  {
    v6 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.currentCryptoKey;
    v5 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v9.fields.currentCryptoKey = v6;
    *(_QWORD *)&v9.fields.fakeValue = v5;
    v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v9, 0LL);
  }
  else
  {
    v7 = -1;
  }
  return ServantEntity__getName(servantEntity, v7, -1, 0LL);
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
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v6; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+20h] [xbp-40h]

  v2 = this;
  if ( (byte_4A5921E & 1) == 0 )
  {
    this = (WarehouseListViewItem_o *)sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4A5921E = 1;
  }
  userServantEntity = v2->fields.userServantEntity;
  if ( !userServantEntity )
    sub_1B8880C(this, method);
  v4 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v7.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v7.fields.fakeValue = v4;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v6 = v7;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v6, 0LL);
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
    sub_1B8880C(0LL, value);
  this->fields.dragSelectNum = value - 1;
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