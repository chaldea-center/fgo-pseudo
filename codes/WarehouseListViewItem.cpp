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
  __int64 v34; // x1
  IconLabelInfo_o *v35; // x20
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  IconLabelInfo_o *v42; // x28
  struct IconLabelInfo_o **p_iconLabelInfo2; // x20
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  struct UserServantEntity_o **p_userServantEntity; // x22
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  int64_t Instance; // x0
  const MethodInfo *v64; // x1
  struct UserServantEntity_o *v65; // x8
  __int64 v66; // x26
  __int64 v67; // x27
  Il2CppObject *Entity; // x0
  struct ServantEntity_o **p_servantEntity; // x26
  int64_t v70; // x2
  int32_t v71; // w3
  System_String_o *v72; // x4
  BattleSetupInfo_o *v73; // x5
  FollowerInfo_o *v74; // x6
  PartyListViewItem_o *v75; // x7
  struct UserServantEntity_o *v76; // x8
  ServantLimitMaster_o *v77; // x27
  int32_t svtId; // w28
  int32_t v79; // w8
  struct UserServantEntity_o *v80; // x8
  __int128 v81; // q1
  __int64 v82; // x23
  struct ServantEntity_o *servantEntity; // x8
  int32_t v84; // w8
  UserServantEntity_o *v85; // x8
  bool IsChoice; // w8
  UserServantEntity_o *v87; // x8
  UserServantEntity_o *v88; // x8
  struct UserServantEntity_o *v89; // x8
  __int128 v90; // q0
  UserServantCollectionMaster_o *v91; // x23
  struct UserServantEntity_o *v92; // x8
  int64_t v93; // x26
  __int64 v94; // x27
  __int64 v95; // x28
  struct UserServantEntity_o *v96; // x8
  __int128 v97; // q0
  int64_t v98; // x23
  signed int max_length; // w8
  int32_t v100; // w9
  signed int v101; // w8
  int32_t v102; // w9
  __int64 v103; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x24
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v106; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v109; // x8
  __int64 v110; // x9
  int32_t *v111; // x10
  __int64 v112; // x0
  _QWORD *v113; // x0
  __int64 v114; // x1
  __int64 methodPtr_low; // x9
  __int64 v116; // x8
  __int128 v117; // q0
  System_Collections_Generic_IEnumerator_T__c *v118; // x8
  __int64 v119; // x9
  int32_t *v120; // x10
  __int64 v121; // x0
  __int64 v122; // x1
  System_Collections_Generic_IEnumerator_T__o *v123; // x24
  System_Collections_Generic_IEnumerator_T__c *v124; // x8
  __int64 v125; // x9
  int32_t *v126; // x10
  __int64 v127; // x0
  System_Collections_Generic_IEnumerator_T__c *v128; // x8
  __int64 v129; // x9
  int32_t *v130; // x10
  __int64 v131; // x0
  _QWORD *v132; // x0
  __int64 v133; // x1
  __int64 v134; // x9
  System_Collections_Generic_IEnumerator_T__c *v135; // x8
  __int64 v136; // x9
  int32_t *v137; // x10
  __int64 v138; // x0
  bool IsSettingServant; // w0
  __int64 v140; // x8
  int64_t v141; // x24
  unsigned __int64 v142; // x25
  __int64 v143; // x8
  __int128 v144; // q0
  __int64 v145; // x8
  int64_t v146; // x24
  unsigned __int64 v147; // x25
  __int64 v148; // x8
  __int128 v149; // q0
  int v150; // w24
  BalanceConfig_c *v151; // x8
  struct BalanceConfig_StaticFields *static_fields; // x8
  UserServantEntity_o *v153; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  int64_t v155; // x2
  int32_t v156; // w3
  System_String_o *v157; // x4
  BattleSetupInfo_o *v158; // x5
  FollowerInfo_o *v159; // x6
  PartyListViewItem_o *v160; // x7
  struct System_Int32_array *EquipCategoryIdList; // x1
  int64_t v162; // x2
  int32_t v163; // w3
  System_String_o *v164; // x4
  BattleSetupInfo_o *v165; // x5
  FollowerInfo_o *v166; // x6
  PartyListViewItem_o *v167; // x7
  struct System_Int32_array **p_equipCategoryIdList; // x0
  signed int v169; // w8
  __int64 v170; // x9
  int64_t UserSvtId; // x0
  int64_t v172; // x8
  struct UserServantEntity_o *v173; // x8
  __int64 rarity; // x21
  __int64 v175; // x22
  __int64 lv; // x23
  struct UserServantEntity_o *v177; // x8
  __int64 v178; // x21
  __int64 v179; // x22
  IconLabelInfo_o *iconLabelInfo1; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v182; // [xsp+10h] [xbp-140h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v183; // [xsp+30h] [xbp-120h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v184; // [xsp+50h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v185; // [xsp+70h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v186; // [xsp+90h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v187; // [xsp+B0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v188; // [xsp+D0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v189; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v190; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v191; // 0:x0.16

  if ( (byte_4B64B38 & 1) == 0 )
  {
    sub_1BE4ACC(&BalanceConfig_TypeInfo, *(_QWORD *)&index);
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v16);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ServantClassMaster___, v17);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ServantLimitMaster___, v18);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ServantMaster___, v19);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v20);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_UserServantLeaderMaster___, v21);
    sub_1BE4ACC(&Method_DataManager_GetMaster_UserRecommendSupportMaster___, v22);
    sub_1BE4ACC(&Method_DataManager_GetMaster_UserServantStorageMaster___, v23);
    sub_1BE4ACC(&DataManager_TypeInfo, v24);
    sub_1BE4ACC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v25);
    sub_1BE4ACC(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v26);
    sub_1BE4ACC(&System_IDisposable_TypeInfo, v27);
    sub_1BE4ACC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v28);
    sub_1BE4ACC(&System_Collections_IEnumerator_TypeInfo, v29);
    sub_1BE4ACC(&IconLabelInfo_TypeInfo, v30);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v31);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v32);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v33);
    sub_1BE4ACC(&UserServantLeaderEntity_TypeInfo, v34);
    byte_4B64B38 = 1;
  }
  v35 = (IconLabelInfo_o *)sub_1BE4D18(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v35, 0LL);
  this->fields.iconLabelInfo1 = v35;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.iconLabelInfo1, (int64_t)v35, v36, v37, v38, v39, v40, v41);
  v42 = (IconLabelInfo_o *)sub_1BE4D18(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v42, 0LL);
  this->fields.iconLabelInfo2 = v42;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.iconLabelInfo2, (int64_t)v42, v44, v45, v46, v47, v48, v49);
  ListViewItem___ctor_41686696((ListViewItem_o *)this, index, 0LL);
  this->fields.index = index;
  this->fields.userServantEntity = userServantEntity;
  p_userServantEntity = &this->fields.userServantEntity;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.userServantEntity,
    (int64_t)userServantEntity,
    v51,
    v52,
    v53,
    v54,
    v55,
    v56);
  this->fields.setupInfo = setupinfo;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.setupInfo, (int64_t)setupinfo, v57, v58, v59, v60, v61, v62);
  v65 = this->fields.userServantEntity;
  if ( !v65 )
    goto LABEL_177;
  v67 = *(_QWORD *)&v65->fields.svtId.fields.currentCryptoKey;
  v66 = *(_QWORD *)&v65->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v189.fields.currentCryptoKey = v67;
  *(_QWORD *)&v189.fields.fakeValue = v66;
  this->fields.svtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v189, 0LL);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_177;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_177;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             this->fields.svtId,
             (const MethodInfo_31FD7C4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)Entity;
  p_servantEntity = &this->fields.servantEntity;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.servantEntity, (int64_t)Entity, v70, v71, v72, v73, v74, v75);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_177;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v76 = this->fields.userServantEntity;
  if ( !v76 )
    goto LABEL_177;
  v77 = (ServantLimitMaster_o *)Instance;
  svtId = this->fields.svtId;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v76->fields.limitCount, 0LL);
  if ( !v77 )
    goto LABEL_177;
  Instance = (int64_t)ServantLimitMaster__GetEntity(v77, svtId, Instance, 0LL);
  if ( !*p_servantEntity )
    goto LABEL_177;
  this->fields.classId = (*p_servantEntity)->fields.classId;
  if ( !Instance )
    goto LABEL_177;
  v79 = *(_DWORD *)(Instance + 24);
  Instance = (int64_t)this->fields.userServantEntity;
  this->fields.isFavorite = isFavorite;
  this->fields.rarity = v79;
  if ( !Instance )
    goto LABEL_177;
  *(_WORD *)&this->fields.isEventJoin = UserServantEntity__IsEventJoin((UserServantEntity_o *)Instance, 0LL);
  Instance = (int64_t)UserGameMaster__getSelfUserGame(0LL);
  if ( !Instance )
    goto LABEL_177;
  v80 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_177;
  v81 = *(_OWORD *)&v80->fields.id.fields.fakeValue;
  v82 = *(_QWORD *)(Instance + 120);
  *(_OWORD *)&v188.fields.currentCryptoKey = *(_OWORD *)&v80->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v188.fields.fakeValue = v81;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v187 = v188;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v187, 0LL);
  servantEntity = this->fields.servantEntity;
  this->fields.isPush = v82 == Instance;
  this->fields.isEnabled = 1;
  if ( !servantEntity )
    goto LABEL_177;
  if ( servantEntity->fields.type == 2 )
  {
    v84 = 1;
LABEL_24:
    this->fields.attribute = v84;
    goto LABEL_26;
  }
  Instance = (int64_t)*p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_177;
  if ( UserServantEntity__IsEventJoin((UserServantEntity_o *)Instance, 0LL) )
  {
    v84 = 2;
    goto LABEL_24;
  }
  this->fields.attribute = 0;
LABEL_26:
  Instance = (int64_t)*p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_177;
  Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL);
  v85 = this->fields.userServantEntity;
  this->fields.isLock = Instance & 1;
  if ( !v85 )
    goto LABEL_177;
  IsChoice = UserServantEntity__IsChoice(v85, 0LL);
  Instance = (int64_t)this->fields.userServantEntity;
  *(_WORD *)&this->fields.isSwapLock = 0;
  this->fields.isChoice = IsChoice;
  this->fields.dragSelectNum = -1;
  *(_QWORD *)&this->fields.bonusKind = 1LL;
  this->fields.isEventUpVal = 0;
  if ( !Instance )
    goto LABEL_177;
  Instance = UserServantEntity__IsFriendShipSvtEquip((UserServantEntity_o *)Instance, 0LL);
  v87 = this->fields.userServantEntity;
  this->fields.isFriendShipSvtEq = Instance & 1;
  if ( !v87 )
    goto LABEL_177;
  Instance = UserServantEntity__IsChocolateSvtEquip(v87, 0LL);
  v88 = this->fields.userServantEntity;
  this->fields.isChocolateSvtEquip = Instance & 1;
  if ( !v88 )
    goto LABEL_177;
  this->fields.isMaterialTdSvt = UserServantEntity__IsMaterialTd(v88, 0LL);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_177;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v89 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_177;
  v90 = *(_OWORD *)&v89->fields.userId.fields.fakeValue;
  v91 = (UserServantCollectionMaster_o *)Instance;
  *(_OWORD *)&v188.fields.currentCryptoKey = *(_OWORD *)&v89->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v188.fields.fakeValue = v90;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v186 = v188;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v186, 0LL);
  v92 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_177;
  v93 = Instance;
  v95 = *(_QWORD *)&v92->fields.svtId.fields.currentCryptoKey;
  v94 = *(_QWORD *)&v92->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v190.fields.currentCryptoKey = v95;
  *(_QWORD *)&v190.fields.fakeValue = v94;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v190, 0LL);
  if ( !v91 )
    goto LABEL_177;
  Instance = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(v91, v93, Instance, 0LL);
  if ( !Instance )
    goto LABEL_177;
  Instance = UserServantCollectionEntity__getFriendShipRankInfo(
               (UserServantCollectionEntity_o *)Instance,
               &this->fields.friendship,
               &this->fields.friendshipMax,
               0LL);
  v96 = this->fields.userServantEntity;
  *(_WORD *)&this->fields.isUseRecommendSupport = 0;
  *(_QWORD *)&this->fields.partyIndex = 0xFFFFFFFFLL;
  if ( !v96 )
    goto LABEL_177;
  v97 = *(_OWORD *)&v96->fields.id.fields.fakeValue;
  *(_OWORD *)&v185.fields.currentCryptoKey = *(_OWORD *)&v96->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v185.fields.fakeValue = v97;
  v98 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v185, 0LL);
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
      v100 = 0;
      while ( 1 )
      {
        if ( max_length == v100 )
          goto LABEL_178;
        if ( v98 == partyUserEquipList->m_Items[v100] )
          break;
        if ( max_length == ++v100 )
          goto LABEL_58;
      }
      this->fields.partyIndex = v100;
      this->fields.isPartyEquip = 1;
      this->fields.isUse = 1;
    }
LABEL_58:
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_177;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserServantLeaderMaster___);
    if ( !Instance )
      goto LABEL_177;
    Instance = *(_QWORD *)(Instance + 32);
    if ( !Instance )
      goto LABEL_177;
    Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                   (System_Collections_ObjectModel_Collection_T__o *)Instance,
                   (const MethodInfo_319A36C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    if ( !Enumerator )
      sub_1BE4D28(0LL, v103);
    while ( 1 )
    {
      klass = Enumerator->klass;
      v106 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v106;
          p_offset += 4;
          if ( !v106 )
            goto LABEL_66;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_66:
        p_method = sub_1C36AAC(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
              Enumerator,
              *(_QWORD *)(p_method + 8)) & 1) == 0 )
        goto LABEL_83;
      v109 = Enumerator->klass;
      v110 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
      {
        v111 = &v109->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v111 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
        {
          --v110;
          v111 += 4;
          if ( !v110 )
            goto LABEL_73;
        }
        v112 = (__int64)&v109->vtable[*v111].method;
      }
      else
      {
LABEL_73:
        v112 = sub_1C36AAC(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
      }
      v113 = (_QWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v112)(
                         Enumerator,
                         *(_QWORD *)(v112 + 8));
      if ( !v113 )
        goto LABEL_181;
      methodPtr_low = LOBYTE(UserServantLeaderEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*v113 + 304LL) < (unsigned int)methodPtr_low
        || *(UserServantLeaderEntity_c **)(*(_QWORD *)(*v113 + 200LL) + 8 * methodPtr_low - 8) != UserServantLeaderEntity_TypeInfo )
      {
        break;
      }
      v116 = v113[4];
      if ( v116 )
      {
        v117 = *(_OWORD *)(v116 + 40);
        *(_OWORD *)&v188.fields.currentCryptoKey = *(_OWORD *)(v116 + 24);
        *(_OWORD *)&v188.fields.fakeValue = v117;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v184 = v188;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v184, 0LL) == v98 )
        {
          this->fields.isUseSupportEquip = 1;
LABEL_83:
          v118 = Enumerator->klass;
          v119 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
          if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
          {
            v120 = &v118->_1.interfaceOffsets->offset;
            while ( *((System_IDisposable_c **)v120 - 1) != System_IDisposable_TypeInfo )
            {
              --v119;
              v120 += 4;
              if ( !v119 )
                goto LABEL_87;
            }
            v121 = (__int64)&v118->vtable[*v120].method;
          }
          else
          {
LABEL_87:
            v121 = sub_1C36AAC(Enumerator, System_IDisposable_TypeInfo, 0LL);
          }
          (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v121)(
            Enumerator,
            *(_QWORD *)(v121 + 8));
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          Instance = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_UserRecommendSupportMaster___);
          if ( Instance )
          {
            this->fields.isUseRecommendSupportEquip = UserRecommendSupportMaster__IsSettingServant(
                                                        (UserRecommendSupportMaster_o *)Instance,
                                                        v98,
                                                        1,
                                                        0LL);
            Instance = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_UserServantStorageMaster___);
            if ( Instance )
            {
              Instance = (int64_t)UserServantStorageMaster__getList((UserServantStorageMaster_o *)Instance, 0LL);
              if ( Instance )
              {
                v145 = *(_QWORD *)(Instance + 24);
                v146 = Instance;
                if ( (int)v145 >= 1 )
                {
                  v147 = 0LL;
                  while ( 1 )
                  {
                    if ( v147 >= (unsigned int)v145 )
                      goto LABEL_178;
                    v148 = *(_QWORD *)(v146 + 32 + 8 * v147);
                    if ( v148 )
                    {
                      v149 = *(_OWORD *)(v148 + 32);
                      *(_OWORD *)&v188.fields.currentCryptoKey = *(_OWORD *)(v148 + 16);
                      *(_OWORD *)&v188.fields.fakeValue = v149;
                      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                      v183 = v188;
                      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v183, 0LL);
                      if ( Instance == v98 )
                        break;
                    }
                    LODWORD(v145) = *(_DWORD *)(v146 + 24);
                    if ( (__int64)++v147 >= (int)v145 )
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
    sub_1BE4FE8(v113);
LABEL_180:
    sub_1BE4FE8(v132);
LABEL_181:
    sub_1BE4D28(v113, v114);
  }
  if ( !partyUserServantList )
    goto LABEL_177;
  v101 = partyUserServantList->max_length;
  if ( v101 >= 1 )
  {
    v102 = 0;
    while ( 1 )
    {
      if ( v101 == v102 )
LABEL_178:
        sub_1BE4D30(Instance, v64);
      if ( v98 == partyUserServantList->m_Items[v102] )
        break;
      if ( v101 == ++v102 )
        goto LABEL_89;
    }
    this->fields.partyIndex = v102;
  }
LABEL_89:
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_177;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserServantLeaderMaster___);
  if ( !Instance )
    goto LABEL_177;
  Instance = *(_QWORD *)(Instance + 32);
  if ( !Instance )
    goto LABEL_177;
  v123 = System_Collections_ObjectModel_Collection_object___GetEnumerator(
           (System_Collections_ObjectModel_Collection_T__o *)Instance,
           (const MethodInfo_319A36C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !v123 )
    sub_1BE4D28(0LL, v122);
  while ( 1 )
  {
    v124 = v123->klass;
    v125 = *(unsigned __int16 *)(&v123->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v123->klass->_2.bitflags2 + 3) )
    {
      v126 = &v124->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)v126 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v125;
        v126 += 4;
        if ( !v125 )
          goto LABEL_97;
      }
      v127 = (__int64)&v124->vtable[*v126].method;
    }
    else
    {
LABEL_97:
      v127 = sub_1C36AAC(v123, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v127)(
            v123,
            *(_QWORD *)(v127 + 8)) & 1) == 0 )
      break;
    v128 = v123->klass;
    v129 = *(unsigned __int16 *)(&v123->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v123->klass->_2.bitflags2 + 3) )
    {
      v130 = &v128->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v130 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v129;
        v130 += 4;
        if ( !v129 )
          goto LABEL_104;
      }
      v131 = (__int64)&v128->vtable[*v130].method;
    }
    else
    {
LABEL_104:
      v131 = sub_1C36AAC(v123, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v132 = (_QWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v131)(
                       v123,
                       *(_QWORD *)(v131 + 8));
    if ( !v132 )
      sub_1BE4D28(0LL, v133);
    v134 = LOBYTE(UserServantLeaderEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*v132 + 304LL) < (unsigned int)v134
      || *(UserServantLeaderEntity_c **)(*(_QWORD *)(*v132 + 200LL) + 8 * v134 - 8) != UserServantLeaderEntity_TypeInfo )
    {
      goto LABEL_180;
    }
    if ( v132[7] == v98 )
    {
      this->fields.isUseSupport = 1;
      break;
    }
  }
  v135 = v123->klass;
  v136 = *(unsigned __int16 *)(&v123->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v123->klass->_2.bitflags2 + 3) )
  {
    v137 = &v135->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v137 - 1) != System_IDisposable_TypeInfo )
    {
      --v136;
      v137 += 4;
      if ( !v136 )
        goto LABEL_115;
    }
    v138 = (__int64)&v135->vtable[*v137].method;
  }
  else
  {
LABEL_115:
    v138 = sub_1C36AAC(v123, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v138)(v123, *(_QWORD *)(v138 + 8));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_UserRecommendSupportMaster___);
  if ( !Instance )
    goto LABEL_177;
  IsSettingServant = UserRecommendSupportMaster__IsSettingServant((UserRecommendSupportMaster_o *)Instance, v98, 0, 0LL);
  this->fields.isWarehouseServant = 0;
  this->fields.isUseRecommendSupport = IsSettingServant;
  Instance = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_UserServantStorageMaster___);
  if ( !Instance )
    goto LABEL_177;
  Instance = (int64_t)UserServantStorageMaster__getList((UserServantStorageMaster_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_177;
  v140 = *(_QWORD *)(Instance + 24);
  v141 = Instance;
  if ( (int)v140 >= 1 )
  {
    v142 = 0LL;
    while ( 1 )
    {
      if ( v142 >= (unsigned int)v140 )
        goto LABEL_178;
      v143 = *(_QWORD *)(v141 + 32 + 8 * v142);
      if ( v143 )
      {
        v144 = *(_OWORD *)(v143 + 32);
        *(_OWORD *)&v188.fields.currentCryptoKey = *(_OWORD *)(v143 + 16);
        *(_OWORD *)&v188.fields.fakeValue = v144;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v182 = v188;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v182, 0LL);
        if ( Instance == v98 )
          break;
      }
      LODWORD(v140) = *(_DWORD *)(v141 + 24);
      if ( (__int64)++v142 >= (int)v140 )
        goto LABEL_147;
    }
    this->fields.isWarehouseServant = 1;
  }
LABEL_147:
  Instance = (int64_t)*p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_177;
  v150 = *(_DWORD *)(Instance + 276);
  v151 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v151 = BalanceConfig_TypeInfo;
    Instance = (int64_t)*p_userServantEntity;
  }
  static_fields = v151->static_fields;
  this->fields.hpReinforceValue = static_fields->StatusUpAdjustHp * v150;
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
  v153 = this->fields.userServantEntity;
  this->fields.dispLimitCount = Instance;
  if ( !v153 )
    goto LABEL_177;
  SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v153, -1, 0LL);
  this->fields.skillCategoryIdList = SkillCategoryIdList;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.skillCategoryIdList,
    (int64_t)SkillCategoryIdList,
    v155,
    v156,
    v157,
    v158,
    v159,
    v160);
  Instance = (int64_t)this->fields.userServantEntity;
  if ( !Instance )
    goto LABEL_177;
  EquipCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList((UserServantEntity_o *)Instance, 0, 0LL);
  p_equipCategoryIdList = &this->fields.tdCategoryIdList;
  this->fields.tdCategoryIdList = EquipCategoryIdList;
LABEL_158:
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)p_equipCategoryIdList,
    (int64_t)EquipCategoryIdList,
    v162,
    v163,
    v164,
    v165,
    v166,
    v167);
  this->fields.isFatigueRecovery = 0;
  if ( recoverySvtList )
  {
    v169 = recoverySvtList->max_length;
    if ( v169 >= 1 )
    {
      v170 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v170 >= v169 )
          goto LABEL_178;
        if ( recoverySvtList->m_Items[v170] == v98 )
          break;
        if ( (int)++v170 >= v169 )
          goto LABEL_166;
      }
      this->fields.isFatigueRecovery = 1;
    }
  }
LABEL_166:
  UserSvtId = WarehouseListViewItem__get_UserSvtId(this, v64);
  EventFortificationDataLogic__SetFortification(
    &this->fields.isFortification,
    &this->fields.fortificationName,
    &this->fields.fortificationDetailName,
    UserSvtId,
    0LL);
  this->fields.amountSortValue = -1LL;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_177;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Instance )
    goto LABEL_177;
  Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                        this->fields.classId,
                        (const MethodInfo_31FD7C4 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_177;
  v172 = *(int *)(Instance + 52);
  Instance = (int64_t)this->fields.servantEntity;
  this->fields.priority = v172;
  this->fields.sortValue1B = v172;
  if ( !Instance )
    goto LABEL_177;
  v173 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_177;
  rarity = (unsigned int)this->fields.rarity;
  v175 = *(int *)(Instance + 208);
  lv = v173->fields.lv;
  Instance = ServantEntity__get_IsServantMaterialTd((ServantEntity_o *)Instance, 0LL);
  v177 = this->fields.userServantEntity;
  this->fields.sortValue2 = (v175 << 16) | (rarity << 48) | (2 * lv) | Instance & 1;
  if ( !v177 )
    goto LABEL_177;
  v179 = *(_QWORD *)&v177->fields.svtId.fields.currentCryptoKey;
  v178 = *(_QWORD *)&v177->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v191.fields.currentCryptoKey = v179;
  *(_QWORD *)&v191.fields.fakeValue = v178;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v191, 0LL);
  iconLabelInfo1 = this->fields.iconLabelInfo1;
  this->fields.sortValue2B = (int)Instance;
  if ( !iconLabelInfo1 || (IconLabelInfo__Clear(iconLabelInfo1, 0LL), (Instance = (int64_t)*p_iconLabelInfo2) == 0) )
LABEL_177:
    sub_1BE4D28(Instance, v64);
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
    sub_1BE4D28(0LL, v5);
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
  System_Int32Enum_array *RarityFilterKindList; // x0
  FilterKindList_c *v9; // x0
  ListViewSort_FilterKind_array *v10; // x0
  FilterKindList_c *v11; // x0
  ListViewSort_FilterKind_array *v12; // x0
  FilterKindList_c *v13; // x0
  ListViewSort_FilterKind_array *v14; // x0
  _BOOL4 v15; // w8

  if ( (byte_4B64B3B & 1) == 0 )
  {
    sub_1BE4ACC(&FilterKindList_TypeInfo, sort);
    sub_1BE4ACC(&ListViewSort_FilterKind___TypeInfo, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v6);
    byte_4B64B3B = 1;
  }
  v7 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v7 = FilterKindList_TypeInfo;
  }
  RarityFilterKindList = (System_Int32Enum_array *)v7->static_fields->RarityFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_35;
  RarityFilterKindList = System_Collections_Generic_List_Int32Enum___ToArray(
                           (System_Collections_Generic_List_T__o *)RarityFilterKindList,
                           (const MethodInfo_35D34E4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_35;
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)RarityFilterKindList, 0LL)
    && !ListViewSort__IsMatchRarityFilter(sort, this->fields.rarity, 0LL)
    || !ListViewSort__CheckSvtEquipEffectFilterDefaultAll(sort, 0LL)
    && !ServantEquipEffectFilterController__IsMatchEffectCategory(this->fields.equipCategoryIdList, sort, 0LL) )
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
    goto LABEL_35;
  v10 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)RarityFilterKindList,
                                           (const MethodInfo_35D34E4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
    goto LABEL_35;
  v12 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)RarityFilterKindList,
                                           (const MethodInfo_35D34E4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v13 = FilterKindList_TypeInfo;
  }
  RarityFilterKindList = (System_Int32Enum_array *)v13->static_fields->ServantEquipHaveStatusFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_35;
  v14 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)RarityFilterKindList,
                                           (const MethodInfo_35D34E4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
  RarityFilterKindList = (System_Int32Enum_array *)sub_1BE4B74(ListViewSort_FilterKind___TypeInfo, 1LL);
  if ( !RarityFilterKindList )
LABEL_35:
    sub_1BE4D28(RarityFilterKindList, sort);
  if ( !RarityFilterKindList->max_length )
    sub_1BE4D30(RarityFilterKindList, RarityFilterKindList);
  RarityFilterKindList->m_Items[1] = 39;
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)RarityFilterKindList, 0LL)
    || !ListViewSort__GetFilter(sort, 39, 0LL) )
  {
    return 1;
  }
  v15 = !this->fields.isChoice;
  if ( !this->fields.isSwapChoice )
    return this->fields.isChoice;
  return v15;
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
  __int64 v19; // x1
  _BOOL4 isChoice; // w8
  FilterKindList_c *v21; // x0
  ListViewSort_FilterKind_array *v22; // x21
  UserServantEntity_o *v24; // x0
  int32_t dispLimitCount; // w21
  UserServantEntity_o *v26; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  _BOOL4 IsUnSelectedAllTargetFilters; // w21
  _BOOL4 v42; // w23
  _BOOL4 IsMatchEffectCategory; // w22
  _BOOL4 v44; // w0

  if ( (byte_4B64B3A & 1) == 0 )
  {
    sub_1BE4ACC(&FilterKindList_TypeInfo, sort);
    sub_1BE4ACC(&ListViewSort_FilterKind___TypeInfo, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v6);
    sub_1BE4ACC(&ServantEventBonusFilterController_TypeInfo, v7);
    byte_4B64B3A = 1;
  }
  v8 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v8 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v8->static_fields->ClassGroupFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_67;
  ClassGroupFilterKindList = (__int64)System_Collections_Generic_List_Int32Enum___ToArray(
                                        (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                        (const MethodInfo_35D34E4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_67;
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0LL) )
  {
    v10 = FilterKindList_TypeInfo;
    if ( !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
      v10 = FilterKindList_TypeInfo;
    }
    ClassGroupFilterKindList = (__int64)v10->static_fields->ClassFilterKindList;
    if ( !ClassGroupFilterKindList )
      goto LABEL_67;
    v11 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                             (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                             (const MethodInfo_35D34E4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v12 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v12->static_fields->NpTypeFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_67;
  v13 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_35D34E4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v13, 0LL)
    && !ListViewSort__IsMatchNPTypeFilter(sort, this->fields.userServantEntity, 0LL) )
  {
    return 0;
  }
  v14 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v14 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v14->static_fields->NpEffectFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_67;
  v15 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_35D34E4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v15, 0LL)
    && !ListViewSort__IsMatchNPEffectFilter(sort, this->fields.userServantEntity, 0LL) )
  {
    return 0;
  }
  v16 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v16 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v16->static_fields->ServantTypeFilterKindList;
  if ( !ClassGroupFilterKindList )
LABEL_67:
    sub_1BE4D28(ClassGroupFilterKindList, sort);
  v17 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_35D34E4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v17, 0LL)
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
    v24 = this->fields.userServantEntity;
    if ( v24 )
    {
      dispLimitCount = this->fields.dispLimitCount;
      if ( dispLimitCount != UserServantEntity__getDispLimitCount(v24, 0, 0LL) )
      {
        ClassGroupFilterKindList = (__int64)this->fields.userServantEntity;
        if ( !ClassGroupFilterKindList )
          goto LABEL_67;
        ClassGroupFilterKindList = UserServantEntity__getDispLimitCount(
                                     (UserServantEntity_o *)ClassGroupFilterKindList,
                                     0,
                                     0LL);
        v26 = this->fields.userServantEntity;
        this->fields.dispLimitCount = ClassGroupFilterKindList;
        if ( !v26 )
          goto LABEL_67;
        SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v26, -1, 0LL);
        this->fields.skillCategoryIdList = SkillCategoryIdList;
        sub_1BE4A70(
          (PartyOrganizationUtility_o *)&this->fields.skillCategoryIdList,
          (int64_t)SkillCategoryIdList,
          v28,
          v29,
          v30,
          v31,
          v32,
          v33);
        ClassGroupFilterKindList = (__int64)this->fields.userServantEntity;
        if ( !ClassGroupFilterKindList )
          goto LABEL_67;
        TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                         (UserServantEntity_o *)ClassGroupFilterKindList,
                                         0,
                                         0LL);
        this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
        sub_1BE4A70(
          (PartyOrganizationUtility_o *)&this->fields.tdCategoryIdList,
          (int64_t)TreasureDeviceCategoryIdList,
          v35,
          v36,
          v37,
          v38,
          v39,
          v40);
      }
    }
    ClassGroupFilterKindList = sub_1BE4B74(ListViewSort_FilterKind___TypeInfo, 1LL);
    if ( !ClassGroupFilterKindList )
      goto LABEL_67;
    v19 = ClassGroupFilterKindList;
    if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
      goto LABEL_68;
    *(_DWORD *)(ClassGroupFilterKindList + 32) = 50;
    IsUnSelectedAllTargetFilters = ListViewSort__IsUnSelectedAllTargetFilters(
                                     sort,
                                     (ListViewSort_FilterKind_array *)ClassGroupFilterKindList,
                                     0LL);
    ClassGroupFilterKindList = sub_1BE4B74(ListViewSort_FilterKind___TypeInfo, 1LL);
    if ( !ClassGroupFilterKindList )
      goto LABEL_67;
    v19 = ClassGroupFilterKindList;
    if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
LABEL_68:
      sub_1BE4D30(ClassGroupFilterKindList, v19);
    *(_DWORD *)(ClassGroupFilterKindList + 32) = 51;
    v42 = ListViewSort__IsUnSelectedAllTargetFilters(
            sort,
            (ListViewSort_FilterKind_array *)ClassGroupFilterKindList,
            0LL);
    IsMatchEffectCategory = ServantEquipEffectFilterController__IsMatchEffectCategory(
                              this->fields.tdCategoryIdList,
                              sort,
                              0LL);
    v44 = ServantEquipEffectFilterController__IsMatchEffectCategory(this->fields.skillCategoryIdList, sort, 0LL);
    if ( ((IsUnSelectedAllTargetFilters ^ v42) & 1) != 0 )
    {
      if ( IsUnSelectedAllTargetFilters )
      {
        if ( !v44 )
          return 0;
      }
      else if ( !IsMatchEffectCategory )
      {
        return 0;
      }
    }
    else if ( !IsMatchEffectCategory && !v44 )
    {
      return 0;
    }
  }
  ClassGroupFilterKindList = sub_1BE4B74(ListViewSort_FilterKind___TypeInfo, 1LL);
  if ( !ClassGroupFilterKindList )
    goto LABEL_67;
  v19 = ClassGroupFilterKindList;
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
  v21 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v21 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v21->static_fields->RarityFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_67;
  v22 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_35D34E4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v22, 0LL)
      || ListViewSort__IsSelectedAllTargetFilters(sort, v22, 0LL)
      || ListViewSort__IsMatchRarityFilter(sort, this->fields.rarity, 0LL);
}


void __fastcall WarehouseListViewItem__Modify(
        WarehouseListViewItem_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct UserServantEntity_o **p_userServantEntity; // x20
  __int64 v10; // x1
  UserServantEntity_o *IsLock; // x0
  UserServantEntity_o *v12; // x8
  bool IsChoice; // w0

  this->fields.userServantEntity = userServantEntity;
  p_userServantEntity = &this->fields.userServantEntity;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.userServantEntity,
    (int64_t)userServantEntity,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  IsLock = *p_userServantEntity;
  *((_BYTE *)p_userServantEntity + 144) = 0;
  p_userServantEntity[17] = (struct UserServantEntity_o *)(&dword_0 + 1);
  if ( !IsLock
    || (IsLock = (UserServantEntity_o *)UserServantEntity__IsLock(IsLock, 0LL),
        v12 = this->fields.userServantEntity,
        this->fields.isLock = (unsigned __int8)IsLock & 1,
        !v12) )
  {
    sub_1BE4D28(IsLock, v10);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct UserServantEntity_o **p_userServantEntity; // x19

  this->fields.userServantEntity = userServantEntity;
  p_userServantEntity = &this->fields.userServantEntity;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.userServantEntity,
    (int64_t)userServantEntity,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  *((_BYTE *)p_userServantEntity + 144) = 0;
  p_userServantEntity[17] = (struct UserServantEntity_o *)(&dword_0 + 1);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseListViewItem__Modify_36685176(
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
    sub_1BE4D28(userServantEntity, isFavorite);
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
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  int64_t *p_sortValue0; // x23
  int64_t priority; // x8
  EventUpValSetupInfo_o *setupInfo; // x4
  int32_t bonusKind; // w8
  int32_t v30; // w8
  int32_t bonusKind2; // w8
  int32_t v32; // w5
  int32_t v33; // w9
  int32_t v34; // w8
  int32_t v35; // w9
  int32_t bonusKindId; // w9
  int32_t bonusKind2Id; // w8
  System_Collections_Generic_List_EventGroupEntity__o *EntitiesByGroupId; // x21
  System_Func_object__bool__o *v39; // x22
  bool v40; // w0
  int32_t v41; // w8
  bool EventUpVal_41168904; // w0
  System_Collections_Generic_List_EventGroupEntity__o *v43; // x21
  System_Func_object__bool__o *v44; // x22
  System_Int32_array *v45; // x21
  System_Int32_array *OtherEventEquipIdList; // x21
  System_Func_int__bool__o *v47; // x0
  __int64 *v48; // x8
  Il2CppObject *MasterData_object; // x0
  int32_t svtId; // w22
  ServantFilterMaster_o *v51; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v52; // kr00_16
  System_Int32_array *eventIdList; // x21
  System_Func_T__bool__o *v54; // x22
  _BOOL4 isChoice; // w21
  const MethodInfo *v56; // x2
  long double v57; // q0
  __int64 v58; // x8
  struct UserServantEntity_o *v59; // x8
  __int128 v60; // q1
  struct UserServantEntity_o *v61; // x8
  IconLabelInfo_o *iconLabelInfo2; // x20
  int32_t v63; // w21
  bool IsMaterialTd; // w8
  struct UserServantEntity_o *v65; // x8
  int64_t hp; // x2
  int32_t adjustHp; // w3
  int32_t v68; // w1
  int64_t friendship; // x2
  int32_t friendshipMax; // w3
  int32_t v71; // w1
  __int64 v72; // x0
  __int64 v73; // x0
  long double v74; // q0
  WarehouseListViewItem_o *v75; // x20
  __int64 v76; // x0
  __int64 v77; // x0
  int32_t FirstOpenEventId; // w20
  long double v79; // q0
  __int64 v80; // x8
  __int64 v81; // x0
  __int64 monitor; // x8
  int64_t rarity; // x8
  int64_t v84; // x20
  IconLabelInfo_o *iconLabelInfo1; // x21
  struct UserServantEntity_o *v86; // x8
  IconLabelInfo_o *v87; // x19
  struct ServantEntity_o *servantEntity; // x8
  int64_t cost; // x2
  __int64 methodPtr_low; // x10
  struct ServantEntity_o *v91; // x8
  __int64 collectionNo; // x10
  struct UserServantEntity_o *v93; // x8
  int32_t lv; // w20
  IconLabelInfo_o *v95; // x20
  int32_t v96; // w21
  UserServantEntity_o *userServantEntity; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v99; // [xsp+10h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v100; // [xsp+30h] [xbp-60h]
  Il2CppObject *entity; // [xsp+50h] [xbp-40h] BYREF
  __int64 tdMaxLv; // [xsp+58h] [xbp-38h] BYREF

  v3 = sort;
  v4 = this;
  if ( (byte_4B64B39 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_BasicHelper_Any_EventGroupEntity___, sort);
    sub_1BE4ACC(&Method_BasicHelper_Any_int____77161864, v5);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_EventBonusFilterMaster___, v6);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_EventGroupMaster___, v7);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_EventMaster___, v8);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ServantFilterMaster___, v9);
    sub_1BE4ACC(&Method_DataManager_GetMaster_EventCampaignMaster___, v10);
    sub_1BE4ACC(&Method_DataManager_GetMaster_EventGroupMaster___, v11);
    sub_1BE4ACC(&DataManager_TypeInfo, v12);
    sub_1BE4ACC(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v13);
    sub_1BE4ACC(&System_Func_int__bool__TypeInfo, v14);
    sub_1BE4ACC(&System_Func_EventGroupEntity__bool__TypeInfo, v15);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventGroupEntity__get_Count__, v16);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v18);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v19);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    sub_1BE4ACC(&Method_WarehouseListViewItem__SetSortValue_b__65_0__, v21);
    sub_1BE4ACC(&Method_WarehouseListViewItem__SetSortValue_b__65_1__, v22);
    sub_1BE4ACC(&Method_WarehouseListViewItem__SetSortValue_b__65_2__, v23);
    sub_1BE4ACC(&Method_WarehouseListViewItem__SetSortValue_b__65_3__, v24);
    this = (WarehouseListViewItem_o *)sub_1BE4ACC(&WarehouseListViewManager_TypeInfo, v25);
    byte_4B64B39 = 1;
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
        this = (WarehouseListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_EventGroupMaster___);
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
          v39 = (System_Func_object__bool__o *)sub_1BE4D18(System_Func_EventGroupEntity__bool__TypeInfo);
          System_Func_object__bool____ctor(
            v39,
            (Il2CppObject *)v4,
            Method_WarehouseListViewItem__SetSortValue_b__65_2__,
            0LL);
          v40 = BasicHelper__Any_object_(
                  (System_Collections_Generic_List_T__o *)EntitiesByGroupId,
                  (System_Func_T__bool__o *)v39,
                  (const MethodInfo_2F4407C *)Method_BasicHelper_Any_EventGroupEntity___);
          v4->fields.isEventUpVal = v40;
          if ( !v40 )
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
          v32 = v3->fields.bonusKind2Id;
          if ( v4->fields.bonusKindId == v32 )
            goto LABEL_59;
        }
        else
        {
          v32 = v3->fields.bonusKind2Id;
        }
        this = (WarehouseListViewItem_o *)v4->fields.userServantEntity;
        v4->fields.bonusKind = bonusKind2;
        goto LABEL_49;
      case 7:
        if ( v4->fields.bonusKind == 7 )
        {
          v33 = v4->fields.bonusKindId;
          v34 = v3->fields.bonusKind2Id;
          goto LABEL_42;
        }
        v34 = v3->fields.bonusKind2Id;
        break;
      case 8:
        if ( v4->fields.bonusKind == 8 )
        {
          v41 = v3->fields.bonusKind2Id;
          if ( v4->fields.bonusKindId == v41 )
            goto LABEL_59;
        }
        else
        {
          v41 = v3->fields.bonusKind2Id;
        }
        v4->fields.bonusKind = 8;
        v4->fields.bonusKindId = v41;
        eventIdList = setupInfo->fields.eventIdList;
        this = (WarehouseListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_209;
        this = (WarehouseListViewItem_o *)DataManager__GetMasterData_object_(
                                            (DataManager_o *)this,
                                            (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_EventBonusFilterMaster___);
        if ( !this )
          goto LABEL_209;
        OtherEventEquipIdList = EventBonusFilterMaster__GetOtherEventEquipIdList(
                                  (EventBonusFilterMaster_o *)this,
                                  eventIdList,
                                  0LL);
        v47 = (System_Func_int__bool__o *)sub_1BE4D18(System_Func_int__bool__TypeInfo);
        v48 = &Method_WarehouseListViewItem__SetSortValue_b__65_3__;
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
    v32 = v3->fields.bonusKindId;
    this = (WarehouseListViewItem_o *)v4->fields.userServantEntity;
LABEL_49:
    v4->fields.bonusKindId = v32;
    if ( !this )
      goto LABEL_209;
    EventUpVal_41168904 = UserServantEntity__getEventUpVal_41168904(
                            (UserServantEntity_o *)this,
                            -1,
                            0,
                            0,
                            setupInfo,
                            v32,
                            0,
                            0LL);
    goto LABEL_82;
  }
  if ( bonusKind == 7 )
  {
    if ( v4->fields.bonusKind == 7 )
    {
      v33 = v4->fields.bonusKindId;
      v34 = v3->fields.bonusKindId;
LABEL_42:
      if ( v33 == v34 )
        goto LABEL_59;
    }
    else
    {
      v34 = v3->fields.bonusKindId;
    }
LABEL_67:
    v4->fields.bonusKind = 7;
    v4->fields.bonusKindId = v34;
    this = (WarehouseListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_209;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)this,
                          (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ServantFilterMaster___);
    svtId = v4->fields.svtId;
    v51 = (ServantFilterMaster_o *)MasterData_object;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    v52 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(svtId, 0LL);
    sort = *(ListViewSort_o **)&v52.fields.fakeValue;
    this = *(WarehouseListViewItem_o **)&v52.fields.currentCryptoKey;
    if ( !v51 )
      goto LABEL_209;
    EventUpVal_41168904 = ServantFilterMaster__IsEnableServant(v51, v52, v4->fields.bonusKindId, 0LL);
    goto LABEL_82;
  }
  if ( !bonusKind )
  {
    if ( v4->fields.bonusKind )
    {
      v30 = v3->fields.bonusKindId;
      goto LABEL_52;
    }
    v30 = v3->fields.bonusKindId;
    if ( v4->fields.bonusKindId != v30 )
    {
LABEL_52:
      v4->fields.bonusKind = 0;
      v4->fields.bonusKindId = v30;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      this = (WarehouseListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_EventGroupMaster___);
      if ( this )
      {
        v43 = EventGroupMaster__GetEntitiesByGroupId((EventGroupMaster_o *)this, v4->fields.bonusKindId, 0LL);
        this = (WarehouseListViewItem_o *)BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v43, 0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          if ( !v43 )
            goto LABEL_209;
          if ( v43->fields._size >= 2 )
          {
            v44 = (System_Func_object__bool__o *)sub_1BE4D18(System_Func_EventGroupEntity__bool__TypeInfo);
            System_Func_object__bool____ctor(
              v44,
              (Il2CppObject *)v4,
              Method_WarehouseListViewItem__SetSortValue_b__65_0__,
              0LL);
            v4->fields.isEventUpVal = BasicHelper__Any_object_(
                                        (System_Collections_Generic_List_T__o *)v43,
                                        (System_Func_T__bool__o *)v44,
                                        (const MethodInfo_2F4407C *)Method_BasicHelper_Any_EventGroupEntity___);
          }
        }
        goto LABEL_59;
      }
LABEL_209:
      sub_1BE4D28(this, sort);
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
      v35 = v3->fields.bonusKindId;
      if ( v4->fields.bonusKindId == v35 )
        goto LABEL_59;
    }
    else
    {
      v35 = v3->fields.bonusKindId;
    }
    v4->fields.bonusKind = bonusKind;
    v4->fields.bonusKindId = v35;
    v45 = setupInfo->fields.eventIdList;
    this = (WarehouseListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_209;
    this = (WarehouseListViewItem_o *)DataManager__GetMasterData_object_(
                                        (DataManager_o *)this,
                                        (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_EventBonusFilterMaster___);
    if ( !this )
      goto LABEL_209;
    OtherEventEquipIdList = EventBonusFilterMaster__GetOtherEventEquipIdList((EventBonusFilterMaster_o *)this, v45, 0LL);
    v47 = (System_Func_int__bool__o *)sub_1BE4D18(System_Func_int__bool__TypeInfo);
    v48 = &Method_WarehouseListViewItem__SetSortValue_b__65_1__;
LABEL_76:
    v54 = (System_Func_T__bool__o *)v47;
    System_Func_int__bool____ctor(v47, (Il2CppObject *)v4, *v48, 0LL);
    EventUpVal_41168904 = BasicHelper__Any_int__49561084(
                            OtherEventEquipIdList,
                            v54,
                            (const MethodInfo_2F43DFC *)Method_BasicHelper_Any_int____77161864);
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
    this = (WarehouseListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_EventCampaignMaster___);
    if ( !this )
      goto LABEL_209;
    EventUpVal_41168904 = EventCampaignMaster__IsEnableServant(
                            (EventCampaignMaster_o *)this,
                            v4->fields.svtId,
                            v4->fields.bonusKindId,
                            0LL);
  }
LABEL_82:
  v4->fields.isEventUpVal = EventUpVal_41168904;
  if ( !EventUpVal_41168904 )
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
    v58 = -20LL;
LABEL_106:
    *p_sortValue0 = v58;
    goto LABEL_107;
  }
  if ( (v4->fields.partyIndex & 0x80000000) == 0 )
    goto LABEL_99;
  if ( v4->fields.isUseSupport )
  {
LABEL_101:
    v58 = -30LL;
    goto LABEL_106;
  }
  if ( v4->fields.isUseRecommendSupport )
  {
    v58 = -35LL;
    goto LABEL_106;
  }
  if ( v4->fields.attribute )
  {
LABEL_105:
    v58 = -40LL;
    goto LABEL_106;
  }
  if ( v4->fields.isFavorite )
  {
    v58 = -50LL;
    goto LABEL_106;
  }
  if ( v4->fields.isPush )
  {
    v58 = -55LL;
    goto LABEL_106;
  }
  userServantEntity = v4->fields.userServantEntity;
  if ( userServantEntity
    && !v4->fields.isWarehouseServant
    && UserServantEntity__IsProtectedEventServant(userServantEntity, 0LL)
    || v4->fields.isFortification )
  {
    v58 = -10LL;
    goto LABEL_106;
  }
LABEL_107:
  if ( isChoice && v3->fields.isChoiceSort )
  {
    v57 = *(long double *)&xmmword_BE1910;
    *(_OWORD *)p_sortValue0 = xmmword_BE1910;
  }
LABEL_109:
  this = (WarehouseListViewItem_o *)(&dword_0 + 1);
  switch ( v3->fields.sortKind )
  {
    case 1:
      v59 = v4->fields.userServantEntity;
      if ( !v59 )
        goto LABEL_209;
      v60 = *(_OWORD *)&v59->fields.id.fields.fakeValue;
      *(_OWORD *)&v100.fields.currentCryptoKey = *(_OWORD *)&v59->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v100.fields.fakeValue = v60;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v99 = v100;
      this = (WarehouseListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v99, 0LL);
      v61 = v4->fields.userServantEntity;
      v4->fields.sortValue1 = (int64_t)this;
      if ( !v61 )
        goto LABEL_209;
      this = (WarehouseListViewItem_o *)v4->fields.iconLabelInfo1;
      if ( !this )
        goto LABEL_209;
      IconLabelInfo__SetTime((IconLabelInfo_o *)this, 49, v61->fields.createdAt, 0, 0, 0, 0LL);
      this = (WarehouseListViewItem_o *)v4->fields.userServantEntity;
      if ( !this )
        goto LABEL_209;
      iconLabelInfo2 = v4->fields.iconLabelInfo2;
      v63 = *(_DWORD *)&this->fields.isEventUpVal;
      this = (WarehouseListViewItem_o *)UserServantEntity__getLevelMax((UserServantEntity_o *)this, 0LL);
      if ( !iconLabelInfo2 )
        goto LABEL_209;
      IconLabelInfo__Set_39043324(iconLabelInfo2, 2, v63, (int32_t)this, 0, 0, 0, 0, 0LL);
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
      v84 = *(int *)&this->fields.isEventUpVal;
      iconLabelInfo1 = v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = v84;
      this = (WarehouseListViewItem_o *)UserServantEntity__getLevelMax((UserServantEntity_o *)this, 0LL);
      if ( !iconLabelInfo1 )
        goto LABEL_209;
      IconLabelInfo__Set_39043324(iconLabelInfo1, 2, v84, (int32_t)this, 0, 0, 0, 0, 0LL);
      goto LABEL_198;
    case 4:
      this = (WarehouseListViewItem_o *)v4->fields.userServantEntity;
      if ( !this )
        goto LABEL_209;
      UserServantEntity__getTreasureDeviceInfo_41175800(
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
      v71 = 33;
      goto LABEL_179;
    case 5:
      v65 = v4->fields.userServantEntity;
      if ( !v65 )
        goto LABEL_209;
      hp = v65->fields.hp;
      this = (WarehouseListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = hp;
      if ( !this )
        goto LABEL_209;
      adjustHp = v65->fields.adjustHp;
      v68 = 3;
      goto LABEL_159;
    case 6:
      v86 = v4->fields.userServantEntity;
      if ( !v86 )
        goto LABEL_209;
      hp = v86->fields.atk;
      this = (WarehouseListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = hp;
      if ( !this )
        goto LABEL_209;
      adjustHp = v86->fields.adjustAtk;
      v68 = 5;
LABEL_159:
      IconLabelInfo__Set_39043324((IconLabelInfo_o *)this, v68, hp, adjustHp, 0, 0, 0, 0, 0LL);
      this = (WarehouseListViewItem_o *)v4->fields.userServantEntity;
      if ( !this )
        goto LABEL_209;
      v87 = v4->fields.iconLabelInfo2;
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
      IconLabelInfo__Set_39043324((IconLabelInfo_o *)this, 7, cost, 0, 0, 0, 0, 0, 0LL);
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
      v71 = 32;
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
                                          v56);
      v4->fields.amountSortValue = (int64_t)this;
LABEL_174:
      v91 = v4->fields.servantEntity;
      if ( !v91 )
        goto LABEL_209;
      collectionNo = v91->fields.collectionNo;
      v93 = v4->fields.userServantEntity;
      v4->fields.sortValue1 = (((unsigned __int64)(unsigned int)v4->fields.rarity << 32) + ((_QWORD)this << 48)) | collectionNo;
      if ( !v93 )
        goto LABEL_209;
      v87 = v4->fields.iconLabelInfo1;
      lv = v93->fields.lv;
      this = (WarehouseListViewItem_o *)v93;
      goto LABEL_196;
    case 0xF:
      friendship = v4->fields.hpReinforceValue;
      this = (WarehouseListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = friendship;
      if ( !this )
        goto LABEL_209;
      friendshipMax = v4->fields.nowMaxHpReinforceValue;
      v71 = 44;
      goto LABEL_179;
    case 0x10:
      friendship = v4->fields.atkReinforceValue;
      this = (WarehouseListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = friendship;
      if ( !this )
        goto LABEL_209;
      friendshipMax = v4->fields.nowMaxAtkReinforceValue;
      v71 = 45;
LABEL_179:
      IconLabelInfo__Set_39043324((IconLabelInfo_o *)this, v71, friendship, friendshipMax, 0, 0, 0, 0, 0LL);
LABEL_180:
      this = (WarehouseListViewItem_o *)v4->fields.userServantEntity;
      if ( !this )
        goto LABEL_209;
      v95 = v4->fields.iconLabelInfo2;
      v96 = *(_DWORD *)&this->fields.isEventUpVal;
      this = (WarehouseListViewItem_o *)UserServantEntity__getLevelMax((UserServantEntity_o *)this, 0LL);
      if ( !v95 )
        goto LABEL_209;
      IconLabelInfo__Set_39043324(v95, 2, v96, (int32_t)this, 0, 0, 0, 0, 0LL);
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
      v72 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
      if ( (*(_BYTE *)(v72 + 309) & 1) == 0 )
        v72 = sub_1C369A8(v57);
      v73 = *(_QWORD *)(*(_QWORD *)(v72 + 192) + 16LL);
      if ( (*(_BYTE *)(v73 + 309) & 1) == 0 )
        v73 = sub_1C369A8(v57);
      this = **(WarehouseListViewItem_o ***)(v73 + 184);
      if ( !this )
        goto LABEL_209;
      this = (WarehouseListViewItem_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_EventBonusFilterMaster___);
      if ( !this )
        goto LABEL_209;
      this = (WarehouseListViewItem_o *)EventBonusFilterMaster__GetEventIdListBySvtId(
                                          (EventBonusFilterMaster_o *)this,
                                          v4->fields.svtId,
                                          0LL);
      if ( !this )
        goto LABEL_209;
      v75 = this;
      if ( !*(_QWORD *)&this->fields.sortIndex )
      {
        monitor = 0x7FFFFFFFFFFFFFFFLL;
LABEL_192:
        v4->fields.sortValue1 = monitor;
        goto LABEL_193;
      }
      v76 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
      if ( (*(_BYTE *)(v76 + 309) & 1) == 0 )
        v76 = sub_1C369A8(v74);
      v77 = *(_QWORD *)(*(_QWORD *)(v76 + 192) + 16LL);
      if ( (*(_BYTE *)(v77 + 309) & 1) == 0 )
        v77 = sub_1C369A8(v74);
      this = **(WarehouseListViewItem_o ***)(v77 + 184);
      if ( !this )
        goto LABEL_209;
      this = (WarehouseListViewItem_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_EventGroupMaster___);
      if ( !v75->fields.sortIndex )
        sub_1BE4D30(this, sort);
      if ( !this )
        goto LABEL_209;
      FirstOpenEventId = EventGroupMaster__GetFirstOpenEventId((EventGroupMaster_o *)this, v75->fields.sortValue0, 0LL);
      v80 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
      if ( (*(_BYTE *)(v80 + 309) & 1) == 0 )
        v80 = sub_1C369A8(v79);
      v81 = *(_QWORD *)(*(_QWORD *)(v80 + 192) + 16LL);
      if ( (*(_BYTE *)(v81 + 309) & 1) == 0 )
        v81 = sub_1C369A8(v79);
      this = **(WarehouseListViewItem_o ***)(v81 + 184);
      if ( !this )
        goto LABEL_209;
      this = (WarehouseListViewItem_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_EventMaster___);
      if ( !this )
        goto LABEL_209;
      this = (WarehouseListViewItem_o *)DataMasterBase_object__object__int___TryGetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                          &entity,
                                          FirstOpenEventId,
                                          (const MethodInfo_31FD818 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
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
      v87 = v4->fields.iconLabelInfo1;
LABEL_195:
      lv = *(_DWORD *)&this->fields.isEventUpVal;
LABEL_196:
      this = (WarehouseListViewItem_o *)UserServantEntity__getLevelMax((UserServantEntity_o *)this, 0LL);
      if ( !v87 )
        goto LABEL_209;
      IconLabelInfo__Set_39043324(v87, 2, lv, (int32_t)this, 0, 0, 0, 0, 0LL);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  EventCampaignMaster_o *Master_object; // x0
  __int64 v9; // x1
  Il2CppObject *v10; // x0
  int32_t svtId; // w22
  ServantFilterMaster_o *v12; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // kr00_16

  if ( (byte_4B64B3F & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMaster_EventCampaignMaster___, entity);
    sub_1BE4ACC(&Method_DataManager_GetMaster_ServantFilterMaster___, v5);
    sub_1BE4ACC(&DataManager_TypeInfo, v6);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    byte_4B64B3F = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (EventCampaignMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_EventCampaignMaster___);
  if ( !entity || !Master_object )
    goto LABEL_17;
  if ( EventCampaignMaster__IsEnableServant(Master_object, this->fields.svtId, entity->fields.eventId, 0LL) )
    return 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v10 = DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_ServantFilterMaster___);
  svtId = this->fields.svtId;
  v12 = (ServantFilterMaster_o *)v10;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(svtId, 0LL);
  v9 = *(_QWORD *)&v13.fields.fakeValue;
  Master_object = *(EventCampaignMaster_o **)&v13.fields.currentCryptoKey;
  if ( !v12 )
    goto LABEL_17;
  if ( ServantFilterMaster__IsEnableServant(v12, v13, entity->fields.eventId, 0LL) )
    return 1;
  Master_object = (EventCampaignMaster_o *)this->fields.userServantEntity;
  if ( !Master_object )
LABEL_17:
    sub_1BE4D28(Master_object, v9);
  return UserServantEntity__getEventUpVal_41168904(
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  EventCampaignMaster_o *Master_object; // x0
  __int64 v9; // x1
  Il2CppObject *v10; // x0
  int32_t svtId; // w22
  ServantFilterMaster_o *v12; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // kr00_16

  if ( (byte_4B64B40 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMaster_EventCampaignMaster___, entity);
    sub_1BE4ACC(&Method_DataManager_GetMaster_ServantFilterMaster___, v5);
    sub_1BE4ACC(&DataManager_TypeInfo, v6);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    byte_4B64B40 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (EventCampaignMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_EventCampaignMaster___);
  if ( !entity || !Master_object )
    goto LABEL_17;
  if ( EventCampaignMaster__IsEnableServant(Master_object, this->fields.svtId, entity->fields.eventId, 0LL) )
    return 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v10 = DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_ServantFilterMaster___);
  svtId = this->fields.svtId;
  v12 = (ServantFilterMaster_o *)v10;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(svtId, 0LL);
  v9 = *(_QWORD *)&v13.fields.fakeValue;
  Master_object = *(EventCampaignMaster_o **)&v13.fields.currentCryptoKey;
  if ( !v12 )
    goto LABEL_17;
  if ( ServantFilterMaster__IsEnableServant(v12, v13, entity->fields.eventId, 0LL) )
    return 1;
  Master_object = (EventCampaignMaster_o *)this->fields.userServantEntity;
  if ( !Master_object )
LABEL_17:
    sub_1BE4D28(Master_object, v9);
  return UserServantEntity__getEventUpVal_41168904(
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
  if ( (byte_4B64B3E & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_1/*""*/, method);
    byte_4B64B3E = 1;
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
    sub_1BE4D28(0LL, method);
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
  __int64 v3; // x1
  ServantEntity_o *servantEntity; // x19
  struct UserServantEntity_o *userServantEntity; // x8
  __int64 v6; // x20
  __int64 v7; // x21
  int32_t v8; // w1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  if ( (byte_4B64B3D & 1) == 0 )
  {
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    sub_1BE4ACC(&StringLiteral_19307/*"error"*/, v3);
    byte_4B64B3D = 1;
  }
  servantEntity = this->fields.servantEntity;
  if ( !servantEntity )
    return (System_String_o *)StringLiteral_19307/*"error"*/;
  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
  {
    v7 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.currentCryptoKey;
    v6 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v10.fields.currentCryptoKey = v7;
    *(_QWORD *)&v10.fields.fakeValue = v6;
    v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v10, 0LL);
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
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v6; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+20h] [xbp-40h]

  v2 = this;
  if ( (byte_4B64B3C & 1) == 0 )
  {
    this = (WarehouseListViewItem_o *)sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
    byte_4B64B3C = 1;
  }
  userServantEntity = v2->fields.userServantEntity;
  if ( !userServantEntity )
    sub_1BE4D28(this, method);
  v4 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v7.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v7.fields.fakeValue = v4;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v6 = v7;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v6, 0LL);
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
    sub_1BE4D28(0LL, value);
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