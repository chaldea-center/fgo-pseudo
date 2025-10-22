void SvtEqCombineListViewItem___ctor(
        SvtEqCombineListViewItem_o *this,
        int32_t type,
        int32_t index,
        UserServantEntity_o *userSvtEntity,
        bool isFavorite,
        UserServantEntity_o *baseUsrSvtData,
        bool isMtSvt,
        EventUpValSetupInfo_o *setupInfo,
        EventUpValSetupInfo_o *finishSetupInfo,
        const MethodInfo *method)
{
  IconLabelInfo_o *v17; // x20
  IconLabelInfo_o *v18; // x22
  struct IconLabelInfo_o **p_iconLabelInfo2; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_userSvtEntity; // x22
  __int64 Instance; // x0
  int64_t v22; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v23; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v24; // x21
  __int64 v25; // x27
  __int64 v26; // x28
  Il2CppObject *Entity; // x0
  struct ServantEntity_o **p_servantEntity; // x27
  struct UserServantEntity_o *v29; // x8
  struct ServantEntity_o *servantEntity; // x8
  ServantLimitMaster_o *v31; // x21
  int32_t v32; // w28
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v33; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // q1
  UserServantCollectionMaster_o *v35; // x21
  int64_t v36; // x28
  struct UserServantEntity_o *v37; // x8
  int32_t v38; // w0
  UserServantEntity_o *v39; // x8
  bool IsChocolateSvtEquip; // w0
  int32_t v41; // w8
  UserServantEntity_o *v42; // x8
  UserServantEntity_o *v43; // x8
  UserServantEntity_o *v44; // x8
  struct UserServantEntity_o *v45; // x8
  __int128 v46; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v47; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v48; // q0
  int64_t v49; // x0
  __int128 v50; // q1
  __int64 v51; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x29
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v54; // x9
  int32_t *p_offset; // x10
  __int64 v56; // x0
  System_Collections_Generic_IEnumerator_T__c *v57; // x8
  __int64 v58; // x9
  int32_t *v59; // x10
  __int64 v60; // x0
  __int64 v61; // x0
  __int64 v62; // x1
  __int64 v63; // x8
  __int128 v64; // q0
  int64_t v65; // x0
  __int64 v66; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v67; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v68; // q0
  System_Collections_Generic_IEnumerator_T__c *v69; // x8
  __int64 v70; // x9
  int32_t *v71; // x10
  __int64 v72; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v73; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v74; // q0
  UserRecommendSupportMaster_o *v75; // x21
  struct UserServantEntity_o *v76; // x8
  __int128 v77; // q0
  UserServantGrandMaster_o *v78; // x21
  int32_t v79; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v80; // x8
  __int64 v81; // x21
  __int64 v82; // x24
  int32_t v83; // w21
  struct UserServantEntity_o *v84; // x8
  __int128 v85; // q0
  int64_t v86; // x0
  __int128 v87; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v88; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v89; // q0
  __int64 v90; // x1
  System_Collections_Generic_IEnumerator_T__o *v91; // x23
  System_Collections_Generic_IEnumerator_T__c *v92; // x8
  __int64 v93; // x9
  int32_t *v94; // x10
  __int64 v95; // x0
  System_Collections_Generic_IEnumerator_T__c *v96; // x8
  __int64 v97; // x9
  int32_t *v98; // x10
  __int64 v99; // x0
  __int64 v100; // x0
  __int64 v101; // x1
  __int64 v102; // x8
  __int128 v103; // q0
  int64_t v104; // x0
  __int64 v105; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v106; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v107; // q0
  System_Collections_Generic_IEnumerator_T__c *v108; // x8
  __int64 v109; // x9
  int32_t *v110; // x10
  __int64 v111; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v112; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v113; // q0
  UserRecommendSupportMaster_o *v114; // x21
  struct UserServantEntity_o *v115; // x8
  __int128 v116; // q0
  UserServantGrandMaster_o *v117; // x21
  UserServantEntity_o *v118; // x8
  UserServantEntity_o *v119; // x8
  bool IsChoice; // w0
  bool isFriendShipSvtEq; // w8
  struct ServantEntity_o *v122; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v123; // x8
  __int64 v124; // x21
  __int64 v125; // x22
  struct UserServantEntity_o *v126; // x8
  __int128 v127; // q0
  int64_t v128; // x8
  struct System_Int32_array *EquipCategoryIdList; // x0
  UserDeckMaster_o *MasterData_object; // [xsp+10h] [xbp-290h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v132; // [xsp+20h] [xbp-280h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v133; // [xsp+40h] [xbp-260h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v134; // [xsp+60h] [xbp-240h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v135; // [xsp+80h] [xbp-220h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v136; // [xsp+A0h] [xbp-200h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v137; // [xsp+C0h] [xbp-1E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v138; // [xsp+E0h] [xbp-1C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v139; // [xsp+100h] [xbp-1A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v140; // [xsp+120h] [xbp-180h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v141; // [xsp+140h] [xbp-160h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v142; // [xsp+160h] [xbp-140h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v143; // [xsp+180h] [xbp-120h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v144; // [xsp+1A0h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v145; // [xsp+1C0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v146; // [xsp+1E0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v147; // [xsp+200h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v148; // [xsp+220h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v149; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v150; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v151; // 0:x0.16

  if ( (byte_4C50E1A & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_ObjectModel_Collection_UserServantLeaderEntity__GetEnumerator__);
    sub_1C3E564(&Method_DataManager_GetMasterData_CombineMaterialMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_UserDeckMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_UserServantLeaderMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_UserRecommendSupportMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_UserServantGrandMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C3E564(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_1C3E564(&Method_DataMasterBase_UserServantLeaderMaster__UserServantLeaderEntity__string__getEntityList__);
    sub_1C3E564(&System_IDisposable_TypeInfo);
    sub_1C3E564(&System_Collections_Generic_IEnumerator_UserServantLeaderEntity__TypeInfo);
    sub_1C3E564(&System_Collections_IEnumerator_TypeInfo);
    sub_1C3E564(&IconLabelInfo_TypeInfo);
    sub_1C3E564(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C3E564(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C50E1A = 1;
  }
  v17 = (IconLabelInfo_o *)sub_1C3E7B0(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v17, 0);
  this->fields.iconLabelInfo1 = v17;
  sub_1C3E508(&this->fields.iconLabelInfo1, v17);
  v18 = (IconLabelInfo_o *)sub_1C3E7B0(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v18, 0);
  this->fields.iconLabelInfo2 = v18;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  sub_1C3E508(&this->fields.iconLabelInfo2, v18);
  ListViewItem___ctor((ListViewItem_o *)this, 0);
  this->fields.userSvtEntity = userSvtEntity;
  p_userSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userSvtEntity;
  this->fields.type = type;
  this->fields.index = index;
  sub_1C3E508(&this->fields.userSvtEntity, userSvtEntity);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_163;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_ServantMaster___);
  v23 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_163;
  v24 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v26 = *(_QWORD *)&v23[5].fields.currentCryptoKey;
  v25 = *(_QWORD *)&v23[5].fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v149.fields.currentCryptoKey = v26;
  *(_QWORD *)&v149.fields.fakeValue = v25;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49004136(v149, 0);
  if ( !v24 )
    goto LABEL_163;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v24,
             Instance,
             (const MethodInfo_33B2F58 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)Entity;
  p_servantEntity = &this->fields.servantEntity;
  Instance = sub_1C3E508(&this->fields.servantEntity, Entity);
  v29 = this->fields.userSvtEntity;
  if ( !v29 )
    goto LABEL_163;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49004136(v29->fields.svtId, 0);
  servantEntity = this->fields.servantEntity;
  this->fields.svtId = Instance;
  if ( !servantEntity )
    goto LABEL_163;
  this->fields.classId = servantEntity->fields.classId;
  this->fields.setupInfo = setupInfo;
  sub_1C3E508(&this->fields.setupInfo, setupInfo);
  this->fields.finishSetupInfo = finishSetupInfo;
  sub_1C3E508(&this->fields.finishSetupInfo, finishSetupInfo);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_163;
  MasterData_object = (UserDeckMaster_o *)DataManager__GetMasterData_object_(
                                            (DataManager_o *)Instance,
                                            (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserDeckMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_163;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtEntity )
    goto LABEL_163;
  v31 = (ServantLimitMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49004136((*p_userSvtEntity)[5], 0);
  if ( !*p_userSvtEntity )
    goto LABEL_163;
  v32 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49004136((*p_userSvtEntity)[6], 0);
  if ( !v31 )
    goto LABEL_163;
  Instance = (__int64)ServantLimitMaster__GetEntity(v31, v32, Instance, 0);
  if ( !Instance )
    goto LABEL_163;
  this->fields.rarity = *(_DWORD *)(Instance + 24);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_163;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v33 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_163;
  v34 = v33[4];
  v35 = (UserServantCollectionMaster_o *)Instance;
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v148.fields.currentCryptoKey = v33[3];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v148.fields.fakeValue = v34;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v147 = v148;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49007660(&v147, 0);
  if ( !*p_userSvtEntity )
    goto LABEL_163;
  v36 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49004136((*p_userSvtEntity)[5], 0);
  if ( !v35 )
    goto LABEL_163;
  Instance = (__int64)UserServantCollectionMaster__GetEntityDefinitely(v35, v36, Instance, 0);
  if ( !Instance )
    goto LABEL_163;
  UserServantCollectionEntity__getFriendShipRankInfo(
    (UserServantCollectionEntity_o *)Instance,
    &this->fields.friendship,
    &this->fields.friendshipMax,
    0);
  this->fields.partyIndex = -1;
  Instance = (__int64)this->fields.userSvtEntity;
  *(_WORD *)&this->fields.isLock = 0;
  this->fields.isChoice = 0;
  *(_WORD *)&this->fields.isBaseSvt = 0;
  this->fields.isLastSelectMaterial = 0;
  this->fields.isMaxSelect = 0;
  this->fields.isSvtEqMaterial = 0;
  if ( !Instance )
    goto LABEL_163;
  Instance = UserServantEntity__getLimitCntMax((UserServantEntity_o *)Instance, 0);
  v37 = this->fields.userSvtEntity;
  this->fields.maxLimitCnt = Instance;
  if ( !v37 )
    goto LABEL_163;
  v38 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49004136(v37->fields.limitCount, 0);
  this->fields.dragSelectNum = -1;
  this->fields.currentLimitCnt = v38;
  this->fields.isCanNotLock = 0;
  *(_QWORD *)&this->fields.isBaseLvMax = 0;
  *(_QWORD *)&this->fields.bonusKind = 1;
  Instance = (__int64)this->fields.userSvtEntity;
  this->fields.isEventUpVal = 0;
  this->fields.isNotSelection = 0;
  if ( !Instance )
    goto LABEL_163;
  Instance = UserServantEntity__IsFriendShipSvtEquip((UserServantEntity_o *)Instance, 0);
  v39 = this->fields.userSvtEntity;
  this->fields.isFriendShipSvtEq = Instance & 1;
  if ( !v39 )
    goto LABEL_163;
  IsChocolateSvtEquip = UserServantEntity__IsChocolateSvtEquip(v39, 0);
  v41 = this->fields.type;
  this->fields.isChocolateSvtEquip = IsChocolateSvtEquip;
  if ( !v41 )
  {
    Instance = (__int64)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_163;
    Instance = UserServantEntity__isLevelMax((UserServantEntity_o *)Instance, 0);
    v42 = this->fields.userSvtEntity;
    this->fields.isLvMax = Instance & 1;
    if ( !v42 )
      goto LABEL_163;
    Instance = UserServantEntity__isLimitCountMax(v42, 0);
    v43 = this->fields.userSvtEntity;
    this->fields.isLimitCntMax = Instance & 1;
    if ( !v43 )
      goto LABEL_163;
    Instance = UserServantEntity__IsLock(v43, 0);
    v44 = this->fields.userSvtEntity;
    this->fields.isLock = Instance & 1;
    if ( !v44 )
      goto LABEL_163;
    Instance = UserServantEntity__IsChoice(v44, 0);
    v45 = this->fields.userSvtEntity;
    this->fields.isChoice = Instance & 1;
    if ( !v45 )
      goto LABEL_163;
    v46 = *(_OWORD *)&v45->fields.id.fields.fakeValue;
    *(_OWORD *)&v148.fields.currentCryptoKey = *(_OWORD *)&v45->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v148.fields.fakeValue = v46;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v146 = v148;
    v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49007660(&v146, 0);
    Instance = (__int64)MasterData_object;
    if ( !MasterData_object )
      goto LABEL_163;
    Instance = UserDeckMaster__IsEquip(MasterData_object, v22, 0);
    this->fields.isEquiped = Instance & 1;
    if ( baseUsrSvtData )
    {
      v47 = *p_userSvtEntity;
      if ( !*p_userSvtEntity )
        goto LABEL_163;
      v48 = v47[2];
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v148.fields.currentCryptoKey = v47[1];
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v148.fields.fakeValue = v48;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v145 = v148;
      v49 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49007660(&v145, 0);
      v50 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
      *(_OWORD *)&v144.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v144.fields.fakeValue = v50;
      if ( v49 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49007660(&v144, 0) )
        this->fields.isBaseSvt = 1;
    }
    Instance = (__int64)*p_servantEntity;
    if ( !*p_servantEntity )
      goto LABEL_163;
    if ( ServantEntity__get_IsServantEquipMaterial((ServantEntity_o *)Instance, 0) )
      this->fields.isSvtEqMaterial = 1;
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_163;
    Instance = (__int64)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserServantLeaderMaster___);
    if ( !Instance )
      goto LABEL_163;
    Instance = *(_QWORD *)(Instance + 40);
    if ( !Instance )
      goto LABEL_163;
    Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                   (System_Collections_ObjectModel_Collection_T__o *)Instance,
                   (const MethodInfo_334C9A0 *)Method_System_Collections_ObjectModel_Collection_UserServantLeaderEntity__GetEnumerator__);
    if ( !Enumerator )
      sub_1C3E7C0(0, v51);
    while ( 1 )
    {
      klass = Enumerator->klass;
      v54 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
      if ( *(_WORD *)&Enumerator->klass->_2.rank )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v54;
          p_offset += 4;
          if ( !v54 )
            goto LABEL_53;
        }
        v56 = (__int64)&klass->vtable[*p_offset];
      }
      else
      {
LABEL_53:
        v56 = sub_1C8ED7C(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v56)(
              Enumerator,
              *(_QWORD *)(v56 + 8))
          & 1) == 0 )
        break;
      v57 = Enumerator->klass;
      v58 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
      if ( *(_WORD *)&Enumerator->klass->_2.rank )
      {
        v59 = &v57->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerator_UserServantLeaderEntity__c **)v59 - 1) != System_Collections_Generic_IEnumerator_UserServantLeaderEntity__TypeInfo )
        {
          --v58;
          v59 += 4;
          if ( !v58 )
            goto LABEL_60;
        }
        v60 = (__int64)&v57->vtable[*v59];
      }
      else
      {
LABEL_60:
        v60 = sub_1C8ED7C(Enumerator, System_Collections_Generic_IEnumerator_UserServantLeaderEntity__TypeInfo, 0);
      }
      v61 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v60)(
              Enumerator,
              *(_QWORD *)(v60 + 8));
      if ( !v61 )
        sub_1C3E7C0(0, v62);
      v63 = *(_QWORD *)(v61 + 32);
      if ( v63 )
      {
        v64 = *(_OWORD *)(v63 + 40);
        *(_OWORD *)&v148.fields.currentCryptoKey = *(_OWORD *)(v63 + 24);
        *(_OWORD *)&v148.fields.fakeValue = v64;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v143 = v148;
        v65 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49007660(&v143, 0);
        v67 = *p_userSvtEntity;
        if ( !*p_userSvtEntity )
          sub_1C3E7C0(v65, v66);
        v68 = v67[2];
        *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v142.fields.currentCryptoKey = v67[1];
        *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v142.fields.fakeValue = v68;
        if ( v65 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49007660(&v142, 0) )
        {
          this->fields.isUseSupportEquip = 1;
          break;
        }
      }
    }
    v69 = Enumerator->klass;
    v70 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v71 = &v69->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v71 - 1) != System_IDisposable_TypeInfo )
      {
        --v70;
        v71 += 4;
        if ( !v70 )
          goto LABEL_73;
      }
      v72 = (__int64)&v69->vtable[*v71];
    }
    else
    {
LABEL_73:
      v72 = sub_1C8ED7C(Enumerator, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v72)(
      Enumerator,
      *(_QWORD *)(v72 + 8));
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_UserRecommendSupportMaster___);
    v73 = *p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_163;
    v74 = v73[2];
    v75 = (UserRecommendSupportMaster_o *)Instance;
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v148.fields.currentCryptoKey = v73[1];
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v148.fields.fakeValue = v74;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v141 = v148;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49007660(&v141, 0);
    if ( !v75 )
      goto LABEL_163;
    this->fields.isUseRecommendSupportEquip = UserRecommendSupportMaster__IsSettingServant(v75, Instance, 1, 0);
    Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_UserServantGrandMaster___);
    v76 = this->fields.userSvtEntity;
    if ( !v76 )
      goto LABEL_163;
    v77 = *(_OWORD *)&v76->fields.id.fields.fakeValue;
    v78 = (UserServantGrandMaster_o *)Instance;
    *(_OWORD *)&v140.fields.currentCryptoKey = *(_OWORD *)&v76->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v140.fields.fakeValue = v77;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49007660(&v140, 0);
    if ( !v78 )
      goto LABEL_163;
    this->fields.isUseGrandServantEquip = UserServantGrandMaster__IsSettingEquip(v78, Instance, 0);
  }
  if ( type != 1 )
    goto LABEL_149;
  this->fields.isMaterialSvt = isMtSvt;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_163;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_CombineMaterialMaster___);
  if ( !*p_servantEntity || !*p_userSvtEntity || !Instance )
    goto LABEL_163;
  Instance = (__int64)CombineMaterialMaster__GetEntity(
                        (CombineMaterialMaster_o *)Instance,
                        (*p_servantEntity)->fields.combineMaterialId,
                        (*p_userSvtEntity)[16].fields.currentCryptoKey,
                        0);
  v79 = Instance ? *(_DWORD *)(Instance + 24) : 0;
  this->fields.materialExp = v79;
  if ( baseUsrSvtData )
  {
    v80 = *p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_163;
    v82 = *(_QWORD *)&v80[5].fields.currentCryptoKey;
    v81 = *(_QWORD *)&v80[5].fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v150.fields.currentCryptoKey = v82;
    *(_QWORD *)&v150.fields.fakeValue = v81;
    v83 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49004136(v150, 0);
    if ( v83 == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49004136(baseUsrSvtData->fields.svtId, 0) )
    {
      Instance = UserServantEntity__isLimitCountMax(baseUsrSvtData, 0);
      v84 = this->fields.userSvtEntity;
      this->fields.isLimitCntMax = Instance & 1;
      this->fields.isLimitCntTarget = (Instance & 1) == 0;
      if ( !v84 )
        goto LABEL_163;
      v85 = *(_OWORD *)&v84->fields.id.fields.fakeValue;
      *(_OWORD *)&v148.fields.currentCryptoKey = *(_OWORD *)&v84->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v148.fields.fakeValue = v85;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v139 = v148;
      v86 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49007660(&v139, 0);
      v87 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
      *(_OWORD *)&v138.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v138.fields.fakeValue = v87;
      if ( v86 != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49007660(&v138, 0) )
        this->fields.isSameSvt = 1;
    }
    Instance = UserServantEntity__isLevelMax(baseUsrSvtData, 0);
    this->fields.isBaseLvMax = Instance & 1;
  }
  else
  {
    this->fields.isLimitCntTarget = 0;
  }
  v88 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_163;
  v89 = v88[2];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v148.fields.currentCryptoKey = v88[1];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v148.fields.fakeValue = v89;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v137 = v148;
  v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49007660(&v137, 0);
  Instance = (__int64)MasterData_object;
  if ( !MasterData_object )
    goto LABEL_163;
  this->fields.isEquiped = UserDeckMaster__IsEquip_43066184(MasterData_object, v22, &this->fields.partyIndex, 0);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_163;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserServantLeaderMaster___);
  if ( !Instance )
    goto LABEL_163;
  Instance = *(_QWORD *)(Instance + 40);
  if ( !Instance )
    goto LABEL_163;
  v91 = System_Collections_ObjectModel_Collection_object___GetEnumerator(
          (System_Collections_ObjectModel_Collection_T__o *)Instance,
          (const MethodInfo_334C9A0 *)Method_System_Collections_ObjectModel_Collection_UserServantLeaderEntity__GetEnumerator__);
  if ( !v91 )
    sub_1C3E7C0(0, v90);
  while ( 1 )
  {
    v92 = v91->klass;
    v93 = *(unsigned __int16 *)&v91->klass->_2.rank;
    if ( *(_WORD *)&v91->klass->_2.rank )
    {
      v94 = &v92->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)v94 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v93;
        v94 += 4;
        if ( !v93 )
          goto LABEL_116;
      }
      v95 = (__int64)&v92->vtable[*v94];
    }
    else
    {
LABEL_116:
      v95 = sub_1C8ED7C(v91, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v95)(
            v91,
            *(_QWORD *)(v95 + 8))
        & 1) == 0 )
      break;
    v96 = v91->klass;
    v97 = *(unsigned __int16 *)&v91->klass->_2.rank;
    if ( *(_WORD *)&v91->klass->_2.rank )
    {
      v98 = &v96->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_UserServantLeaderEntity__c **)v98 - 1) != System_Collections_Generic_IEnumerator_UserServantLeaderEntity__TypeInfo )
      {
        --v97;
        v98 += 4;
        if ( !v97 )
          goto LABEL_123;
      }
      v99 = (__int64)&v96->vtable[*v98];
    }
    else
    {
LABEL_123:
      v99 = sub_1C8ED7C(v91, System_Collections_Generic_IEnumerator_UserServantLeaderEntity__TypeInfo, 0);
    }
    v100 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v99)(
             v91,
             *(_QWORD *)(v99 + 8));
    if ( !v100 )
      sub_1C3E7C0(0, v101);
    v102 = *(_QWORD *)(v100 + 32);
    if ( v102 )
    {
      v103 = *(_OWORD *)(v102 + 40);
      *(_OWORD *)&v148.fields.currentCryptoKey = *(_OWORD *)(v102 + 24);
      *(_OWORD *)&v148.fields.fakeValue = v103;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v136 = v148;
      v104 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49007660(&v136, 0);
      v106 = *p_userSvtEntity;
      if ( !*p_userSvtEntity )
        sub_1C3E7C0(v104, v105);
      v107 = v106[2];
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v135.fields.currentCryptoKey = v106[1];
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v135.fields.fakeValue = v107;
      if ( v104 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49007660(&v135, 0) )
      {
        this->fields.isUseSupportEquip = 1;
        break;
      }
    }
  }
  v108 = v91->klass;
  v109 = *(unsigned __int16 *)&v91->klass->_2.rank;
  if ( *(_WORD *)&v91->klass->_2.rank )
  {
    v110 = &v108->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v110 - 1) != System_IDisposable_TypeInfo )
    {
      --v109;
      v110 += 4;
      if ( !v109 )
        goto LABEL_136;
    }
    v111 = (__int64)&v108->vtable[*v110];
  }
  else
  {
LABEL_136:
    v111 = sub_1C8ED7C(v91, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v111)(v91, *(_QWORD *)(v111 + 8));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_UserRecommendSupportMaster___);
  v112 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_163;
  v113 = v112[2];
  v114 = (UserRecommendSupportMaster_o *)Instance;
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v148.fields.currentCryptoKey = v112[1];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v148.fields.fakeValue = v113;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v134 = v148;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49007660(&v134, 0);
  if ( !v114 )
    goto LABEL_163;
  this->fields.isUseRecommendSupportEquip = UserRecommendSupportMaster__IsSettingServant(v114, Instance, 1, 0);
  Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_UserServantGrandMaster___);
  v115 = this->fields.userSvtEntity;
  if ( !v115 )
    goto LABEL_163;
  v116 = *(_OWORD *)&v115->fields.id.fields.fakeValue;
  v117 = (UserServantGrandMaster_o *)Instance;
  *(_OWORD *)&v133.fields.currentCryptoKey = *(_OWORD *)&v115->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v133.fields.fakeValue = v116;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49007660(&v133, 0);
  if ( !v117
    || (Instance = UserServantGrandMaster__IsSettingEquip(v117, Instance, 0),
        v118 = this->fields.userSvtEntity,
        this->fields.isUseGrandServantEquip = Instance & 1,
        !v118)
    || (Instance = UserServantEntity__IsLock(v118, 0),
        v119 = this->fields.userSvtEntity,
        this->fields.isLock = Instance & 1,
        !v119) )
  {
LABEL_163:
    sub_1C3E7C0(Instance, v22);
  }
  IsChoice = UserServantEntity__IsChoice(v119, 0);
  isFriendShipSvtEq = this->fields.isFriendShipSvtEq;
  this->fields.isChoice = IsChoice;
  this->fields.isFavorite = isFavorite;
  this->fields.isNotSelection = isFriendShipSvtEq;
LABEL_149:
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_163;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Instance )
    goto LABEL_163;
  Instance = (__int64)DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                        this->fields.classId,
                        (const MethodInfo_33B2F58 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_163;
  v122 = this->fields.servantEntity;
  this->fields.sortValue1B = *(int *)(Instance + 52);
  if ( !v122 )
    goto LABEL_163;
  v123 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_163;
  this->fields.sortValue2 = ((__int64)v122->fields.collectionNo << 16)
                          | ((unsigned __int64)(unsigned int)this->fields.rarity << 48)
                          | v123[16].fields.currentCryptoKey;
  v125 = *(_QWORD *)&v123[5].fields.currentCryptoKey;
  v124 = *(_QWORD *)&v123[5].fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v151.fields.currentCryptoKey = v125;
  *(_QWORD *)&v151.fields.fakeValue = v124;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49004136(v151, 0);
  v126 = this->fields.userSvtEntity;
  this->fields.sortValue2B = (int)Instance;
  if ( !v126 )
    goto LABEL_163;
  v127 = *(_OWORD *)&v126->fields.id.fields.fakeValue;
  *(_OWORD *)&v148.fields.currentCryptoKey = *(_OWORD *)&v126->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v148.fields.fakeValue = v127;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v132 = v148;
  v128 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49007660(&v132, 0);
  Instance = (__int64)this->fields.userSvtEntity;
  this->fields.sortValueLast = v128;
  this->fields.amountSortValue = -1;
  if ( !Instance )
    goto LABEL_163;
  EquipCategoryIdList = UserServantEntity__GetEquipCategoryIdList((UserServantEntity_o *)Instance, 1, 0);
  this->fields.categoryIdList = EquipCategoryIdList;
  sub_1C3E508(&this->fields.categoryIdList, EquipCategoryIdList);
  Instance = (__int64)this->fields.iconLabelInfo1;
  if ( !Instance )
    goto LABEL_163;
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0);
  Instance = (__int64)*p_iconLabelInfo2;
  if ( !*p_iconLabelInfo2 )
    goto LABEL_163;
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0);
}


void SvtEqCombineListViewItem__Finalize(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  ListViewItem__Finalize((ListViewItem_o *)this, 0);
}


bool SvtEqCombineListViewItem__IsMatchFilter(
        SvtEqCombineListViewItem_o *this,
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

  if ( (byte_4C50E1C & 1) == 0 )
  {
    sub_1C3E564(&FilterKindList_TypeInfo);
    sub_1C3E564(&ListViewSort_FilterKind___TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    byte_4C50E1C = 1;
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
                           (const MethodInfo_379C720 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                          (const MethodInfo_379C720 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                           (const MethodInfo_379C720 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                             (const MethodInfo_379C720 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
      RarityFilterKindList = (System_Int32Enum_array *)sub_1C3E60C(ListViewSort_FilterKind___TypeInfo, 1);
      if ( RarityFilterKindList )
      {
        if ( !LODWORD(RarityFilterKindList->max_length) )
          sub_1C3E7C8(RarityFilterKindList, RarityFilterKindList);
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
      sub_1C3E7C0(RarityFilterKindList, sort);
    }
  }
  return result;
}


void SvtEqCombineListViewItem__ModifyChoiceItem(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0

  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_1C3E7C0(0, method);
  this->fields.isChoice = UserServantEntity__IsChoice(userSvtEntity, 0);
  this->fields.isSwapChoice = 0;
}


// local variable allocation has failed, the output may be wrong!
void SvtEqCombineListViewItem__ModifyItem(SvtEqCombineListViewItem_o *this, bool isFavorite, const MethodInfo *method)
{
  const MethodInfo *v4; // x1

  this->fields.isFavorite = isFavorite;
  SvtEqCombineListViewItem__ModifyLockItem(this, (const MethodInfo *)isFavorite);
  SvtEqCombineListViewItem__ModifyChoiceItem(this, v4);
}


void SvtEqCombineListViewItem__ModifyLockItem(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0

  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_1C3E7C0(0, method);
  this->fields.isLock = UserServantEntity__IsLock(userSvtEntity, 0);
  this->fields.isSwapLock = 0;
}


bool SvtEqCombineListViewItem__SetSortValue(
        SvtEqCombineListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  SvtEqCombineListViewItem_o *v4; // x19
  EventUpValSetupInfo_o *setupInfo; // x4
  int32_t bonusKind; // w8
  int32_t bonusKindId; // w8
  int32_t v8; // w8
  int32_t v9; // w9
  int32_t bonusKind2Id; // w5
  int32_t v11; // w9
  int32_t v12; // w8
  System_Collections_Generic_List_EventGroupEntity__o *EntitiesByGroupId; // x21
  System_Func_object__bool__o *v14; // x0
  intptr_t *v15; // x8
  struct UserServantEntity_o *userSvtEntity; // x8
  EventCampaignMaster_o *v17; // x21
  __int64 v18; // x22
  __int64 v19; // x23
  System_Func_T__bool__o *v20; // x22
  struct EventUpValSetupInfo_o *finishSetupInfo; // x8
  struct System_Int32_array *servantEquipFilterEventIds; // x8
  EventUpValSetupInfo_o *v23; // x4
  int32_t v24; // w8
  int32_t v25; // w5
  int isEventUpVal; // w8
  bool EventUpVal_43223880; // w0
  _BOOL4 isChoice; // w21
  const MethodInfo *v29; // x2
  int64_t *p_sortValue0; // x8
  __int64 v31; // x9
  int32_t type; // w9
  __int64 v33; // x9
  __int64 v34; // x9
  bool isLock; // w10
  struct UserServantEntity_o *v36; // x8
  __int128 v37; // q1
  struct UserServantEntity_o *v38; // x8
  IconLabelInfo_o *iconLabelInfo1; // x19
  int64_t v40; // x20
  IconLabelInfo_o *v41; // x21
  int64_t v42; // x20
  IconLabelInfo_o *v43; // x21
  int32_t v44; // w3
  int32_t v45; // w1
  struct ServantEntity_o *servantEntity; // x8
  int64_t cost; // x2
  int32_t lv; // w20
  __int64 naturalAligment; // x10
  struct ServantEntity_o *v50; // x8
  __int64 collectionNo; // x10
  struct UserServantEntity_o *v52; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v54; // [xsp+10h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v55; // [xsp+30h] [xbp-50h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v56; // 0:x0.16

  v4 = this;
  if ( (byte_4C50E1B & 1) == 0 )
  {
    sub_1C3E564(&Method_BasicHelper_Any_EventGroupEntity___);
    sub_1C3E564(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_EventGroupMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&System_Func_EventGroupEntity__bool__TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_EventGroupEntity__get_Count__);
    sub_1C3E564(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C3E564(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C3E564(&Method_SvtEqCombineListViewItem__SetSortValue_b__53_0__);
    sub_1C3E564(&Method_SvtEqCombineListViewItem__SetSortValue_b__53_1__);
    this = (SvtEqCombineListViewItem_o *)sub_1C3E564(&SvtEqCombineListViewManager_TypeInfo);
    byte_4C50E1B = 1;
  }
  *(_WORD *)&v4->fields.isTermination = 0;
  v4->fields.sortValue1 = -1;
  if ( !sort )
    goto LABEL_159;
  if ( !sort->fields.isBonusKind )
    goto LABEL_64;
  if ( v4->fields.isBaseSvt )
    goto LABEL_64;
  this = (SvtEqCombineListViewItem_o *)ListViewItem__get_IsSelect((ListViewItem_o *)v4, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
    goto LABEL_64;
  setupInfo = v4->fields.setupInfo;
  if ( !setupInfo )
    goto LABEL_159;
  if ( setupInfo->fields.isQuestStart )
  {
    bonusKind = sort->fields.bonusKind;
    if ( (unsigned int)(bonusKind - 4) >= 2 )
    {
      if ( bonusKind != 3 )
      {
        if ( bonusKind )
          goto LABEL_64;
        if ( v4->fields.bonusKind )
        {
          bonusKindId = sort->fields.bonusKindId;
        }
        else
        {
          bonusKindId = sort->fields.bonusKindId;
          if ( v4->fields.bonusKindId == bonusKindId )
            goto LABEL_63;
        }
        v4->fields.bonusKind = 0;
        v4->fields.bonusKindId = bonusKindId;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        this = (SvtEqCombineListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_EventGroupMaster___);
        if ( this )
        {
          EntitiesByGroupId = EventGroupMaster__GetEntitiesByGroupId(
                                (EventGroupMaster_o *)this,
                                v4->fields.bonusKindId,
                                0);
          this = (SvtEqCombineListViewItem_o *)BasicHelper__IsNullOrEmpty(
                                                 (System_Collections_ICollection_o *)EntitiesByGroupId,
                                                 0);
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            if ( !EntitiesByGroupId )
              goto LABEL_159;
            if ( EntitiesByGroupId->fields._size >= 2 )
            {
              v14 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_EventGroupEntity__bool__TypeInfo);
              v15 = &Method_SvtEqCombineListViewItem__SetSortValue_b__53_0__;
LABEL_62:
              v20 = (System_Func_T__bool__o *)v14;
              System_Func_object__bool____ctor(v14, (Il2CppObject *)v4, *v15, 0);
              this = (SvtEqCombineListViewItem_o *)BasicHelper__Any_object_(
                                                     (System_Collections_Generic_List_T__o *)EntitiesByGroupId,
                                                     v20,
                                                     (const MethodInfo_30E2E10 *)Method_BasicHelper_Any_EventGroupEntity___);
              v4->fields.isEventUpVal = (unsigned __int8)this & 1;
              goto LABEL_63;
            }
          }
          goto LABEL_63;
        }
LABEL_159:
        sub_1C3E7C0(this, sort);
      }
      if ( v4->fields.bonusKind == 3 )
      {
        v11 = v4->fields.bonusKindId;
        v12 = sort->fields.bonusKindId;
        goto LABEL_30;
      }
      v12 = sort->fields.bonusKindId;
      goto LABEL_45;
    }
    if ( v4->fields.bonusKind == bonusKind )
    {
      v9 = v4->fields.bonusKindId;
      bonusKind2Id = sort->fields.bonusKindId;
      goto LABEL_23;
    }
    bonusKind2Id = sort->fields.bonusKindId;
    goto LABEL_33;
  }
  bonusKind = sort->fields.bonusKind2;
  if ( (unsigned int)(bonusKind - 4) < 2 )
  {
    if ( v4->fields.bonusKind == bonusKind )
    {
      v9 = v4->fields.bonusKindId;
      bonusKind2Id = sort->fields.bonusKind2Id;
LABEL_23:
      if ( v9 == bonusKind2Id )
        goto LABEL_63;
      goto LABEL_33;
    }
    bonusKind2Id = sort->fields.bonusKind2Id;
LABEL_33:
    this = (SvtEqCombineListViewItem_o *)v4->fields.userSvtEntity;
    v4->fields.bonusKind = bonusKind;
    v4->fields.bonusKindId = bonusKind2Id;
    if ( !this )
      goto LABEL_159;
    this = (SvtEqCombineListViewItem_o *)UserServantEntity__getEventUpVal_43223880(
                                           (UserServantEntity_o *)this,
                                           -1,
                                           0,
                                           0,
                                           setupInfo,
                                           bonusKind2Id,
                                           0,
                                           0);
    goto LABEL_52;
  }
  if ( bonusKind == 3 )
  {
    if ( v4->fields.bonusKind == 3 )
    {
      v11 = v4->fields.bonusKindId;
      v12 = sort->fields.bonusKind2Id;
LABEL_30:
      if ( v11 == v12 )
        goto LABEL_63;
      goto LABEL_45;
    }
    v12 = sort->fields.bonusKind2Id;
LABEL_45:
    v4->fields.bonusKindId = v12;
    v4->fields.bonusKind = 3;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (SvtEqCombineListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_EventCampaignMaster___);
    userSvtEntity = v4->fields.userSvtEntity;
    if ( !userSvtEntity )
      goto LABEL_159;
    v17 = (EventCampaignMaster_o *)this;
    v19 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
    v18 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v56.fields.currentCryptoKey = v19;
    *(_QWORD *)&v56.fields.fakeValue = v18;
    this = (SvtEqCombineListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49004136(v56, 0);
    if ( !v17 )
      goto LABEL_159;
    this = (SvtEqCombineListViewItem_o *)EventCampaignMaster__IsEnableServant(
                                           v17,
                                           (int32_t)this,
                                           v4->fields.bonusKindId,
                                           0);
LABEL_52:
    v4->fields.isEventUpVal = (unsigned __int8)this & 1;
    if ( ((unsigned __int8)this & 1) == 0 )
      goto LABEL_107;
    goto LABEL_64;
  }
  if ( bonusKind )
    goto LABEL_64;
  if ( v4->fields.bonusKind )
  {
    v8 = sort->fields.bonusKind2Id;
  }
  else
  {
    v8 = sort->fields.bonusKind2Id;
    if ( v4->fields.bonusKindId == v8 )
      goto LABEL_63;
  }
  v4->fields.bonusKind = 0;
  v4->fields.bonusKindId = v8;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (SvtEqCombineListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_EventGroupMaster___);
  if ( !this )
    goto LABEL_159;
  EntitiesByGroupId = EventGroupMaster__GetEntitiesByGroupId((EventGroupMaster_o *)this, v4->fields.bonusKindId, 0);
  this = (SvtEqCombineListViewItem_o *)BasicHelper__IsNullOrEmpty(
                                         (System_Collections_ICollection_o *)EntitiesByGroupId,
                                         0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( !EntitiesByGroupId )
      goto LABEL_159;
    if ( EntitiesByGroupId->fields._size >= 2 )
    {
      v14 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_EventGroupEntity__bool__TypeInfo);
      v15 = &Method_SvtEqCombineListViewItem__SetSortValue_b__53_1__;
      goto LABEL_62;
    }
  }
LABEL_63:
  if ( !v4->fields.isEventUpVal )
    goto LABEL_107;
LABEL_64:
  finishSetupInfo = v4->fields.finishSetupInfo;
  if ( finishSetupInfo )
  {
    servantEquipFilterEventIds = finishSetupInfo->fields.servantEquipFilterEventIds;
    if ( !servantEquipFilterEventIds )
      goto LABEL_159;
    if ( servantEquipFilterEventIds->max_length )
    {
      if ( !v4->fields.isBaseSvt )
      {
        this = (SvtEqCombineListViewItem_o *)ListViewItem__get_IsSelect((ListViewItem_o *)v4, 0);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          v23 = v4->fields.finishSetupInfo;
          if ( !v23 )
            goto LABEL_159;
          if ( v23->fields.isQuestStart )
          {
            if ( sort->fields.bonusKind != 6 )
              goto LABEL_84;
            if ( v4->fields.bonusKind != 6 )
            {
              v25 = sort->fields.bonusKindId;
              goto LABEL_81;
            }
            v24 = v4->fields.bonusKindId;
            v25 = sort->fields.bonusKindId;
          }
          else
          {
            if ( sort->fields.bonusKind2 != 6 )
              goto LABEL_84;
            if ( v4->fields.bonusKind != 6 )
            {
              v25 = sort->fields.bonusKind2Id;
              goto LABEL_81;
            }
            v24 = v4->fields.bonusKindId;
            v25 = sort->fields.bonusKind2Id;
          }
          if ( v24 == v25 )
          {
            isEventUpVal = v4->fields.isEventUpVal;
            goto LABEL_83;
          }
LABEL_81:
          this = (SvtEqCombineListViewItem_o *)v4->fields.userSvtEntity;
          v4->fields.bonusKind = 6;
          v4->fields.bonusKindId = v25;
          if ( !this )
            goto LABEL_159;
          EventUpVal_43223880 = UserServantEntity__getEventUpVal_43223880(
                                  (UserServantEntity_o *)this,
                                  -1,
                                  0,
                                  0,
                                  v23,
                                  v25,
                                  1,
                                  0);
          isEventUpVal = EventUpVal_43223880;
          v4->fields.isEventUpVal = EventUpVal_43223880;
LABEL_83:
          if ( isEventUpVal )
            goto LABEL_84;
LABEL_107:
          LOBYTE(this) = 0;
          return (char)this;
        }
      }
    }
  }
LABEL_84:
  if ( v4->fields.isSwapChoice )
    isChoice = !v4->fields.isChoice;
  else
    isChoice = v4->fields.isChoice;
  if ( !v4->fields.isBaseSvt
    && !ListViewItem__get_IsSelect((ListViewItem_o *)v4, 0)
    && (((__int64 (__fastcall *)(SvtEqCombineListViewItem_o *, ListViewSort_o *, const MethodInfo *))v4->klass->vtable._5_IsMatchFilter.methodPtr)(
          v4,
          sort,
          v4->klass->vtable._5_IsMatchFilter.method)
      & 1) == 0 )
  {
    goto LABEL_107;
  }
  this = (SvtEqCombineListViewItem_o *)v4->fields.iconLabelInfo2;
  if ( !this )
    goto LABEL_159;
  IconLabelInfo__Clear((IconLabelInfo_o *)this, 0);
  v4->fields.sortValue0 = 0;
  p_sortValue0 = &v4->fields.sortValue0;
  v4->fields.sortValue0B = 0;
  if ( !sort->fields.isSmartSort )
  {
    if ( !isChoice || !sort->fields.isChoiceSort )
      goto LABEL_119;
    type = v4->fields.type;
    if ( type == 1 )
    {
      v33 = -10;
    }
    else
    {
      if ( type )
        goto LABEL_119;
      v33 = 10;
    }
    *p_sortValue0 = v33;
    goto LABEL_119;
  }
  if ( !v4->fields.type )
  {
    if ( v4->fields.isEquiped
      || v4->fields.isUseSupportEquip
      || v4->fields.isUseRecommendSupportEquip
      || v4->fields.isUseGrandServantEquip )
    {
      v34 = 20;
    }
    else
    {
      if ( !v4->fields.isLvMax || !v4->fields.isLimitCntMax )
      {
LABEL_105:
        if ( isChoice && sort->fields.isChoiceSort )
          v4->fields.sortValue0B = 10;
        goto LABEL_119;
      }
      v34 = -10;
    }
    *p_sortValue0 = v34;
    goto LABEL_105;
  }
  if ( v4->fields.isSameSvt )
  {
    v31 = 20;
LABEL_115:
    *p_sortValue0 = v31;
    if ( isChoice && sort->fields.isChoiceSort )
      *(_OWORD *)p_sortValue0 = xmmword_C13580;
    goto LABEL_119;
  }
  if ( v4->fields.isSwapLock )
    isLock = !v4->fields.isLock;
  else
    isLock = v4->fields.isLock;
  v31 = -10;
  if ( isLock )
    goto LABEL_115;
  if ( !v4->fields.isNotSelection )
    v31 = -20;
  if ( v4->fields.isNotSelection || isChoice )
    goto LABEL_115;
LABEL_119:
  this = (SvtEqCombineListViewItem_o *)(&dword_0 + 1);
  switch ( sort->fields.sortKind )
  {
    case 1:
      v36 = v4->fields.userSvtEntity;
      if ( !v36 )
        goto LABEL_159;
      v37 = *(_OWORD *)&v36->fields.id.fields.fakeValue;
      *(_OWORD *)&v55.fields.currentCryptoKey = *(_OWORD *)&v36->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v55.fields.fakeValue = v37;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v54 = v55;
      this = (SvtEqCombineListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49007660(&v54, 0);
      v38 = v4->fields.userSvtEntity;
      v4->fields.sortValue1 = (int64_t)this;
      if ( !v38 )
        goto LABEL_159;
      this = (SvtEqCombineListViewItem_o *)v4->fields.iconLabelInfo1;
      if ( !this )
        goto LABEL_159;
      IconLabelInfo__SetTime((IconLabelInfo_o *)this, 49, v38->fields.createdAt, 0, 0, 0, 0);
      goto LABEL_141;
    case 2:
      this = (SvtEqCombineListViewItem_o *)v4->fields.userSvtEntity;
      v4->fields.sortValue1 = v4->fields.rarity;
      if ( !this )
        goto LABEL_159;
      iconLabelInfo1 = v4->fields.iconLabelInfo1;
      goto LABEL_143;
    case 3:
      this = (SvtEqCombineListViewItem_o *)v4->fields.userSvtEntity;
      if ( !this )
        goto LABEL_159;
      v40 = *(int *)&this->fields.isSwapChoice;
      v41 = v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = v40;
      this = (SvtEqCombineListViewItem_o *)UserServantEntity__getLevelMax((UserServantEntity_o *)this, 0);
      if ( !v41 )
        goto LABEL_159;
      IconLabelInfo__Set_40964356(v41, 2, v40, (int32_t)this, 0, 0, 0, 0, 0, 0);
      goto LABEL_146;
    case 5:
      this = (SvtEqCombineListViewItem_o *)v4->fields.userSvtEntity;
      if ( !this )
        goto LABEL_159;
      v42 = this->fields.bonusKind;
      v43 = v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = v42;
      this = (SvtEqCombineListViewItem_o *)UserServantEntity__get_HpBoostValue((UserServantEntity_o *)this, 0);
      if ( !v43 )
        goto LABEL_159;
      v44 = (int)this;
      v45 = 3;
      goto LABEL_137;
    case 6:
      this = (SvtEqCombineListViewItem_o *)v4->fields.userSvtEntity;
      if ( !this )
        goto LABEL_159;
      v42 = *(int *)&this->fields.isCanNotLock;
      v43 = v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = v42;
      this = (SvtEqCombineListViewItem_o *)UserServantEntity__get_AtkBoostValue((UserServantEntity_o *)this, 0);
      if ( !v43 )
        goto LABEL_159;
      v44 = (int)this;
      v45 = 5;
LABEL_137:
      IconLabelInfo__Set_40964356(v43, v45, v42, v44, 0, 0, 0, 0, 0, 0);
      goto LABEL_141;
    case 7:
      servantEntity = v4->fields.servantEntity;
      if ( !servantEntity )
        goto LABEL_159;
      cost = servantEntity->fields.cost;
      this = (SvtEqCombineListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = cost;
      if ( !this )
        goto LABEL_159;
      IconLabelInfo__Set_40964356((IconLabelInfo_o *)this, 7, cost, 0, 0, 0, 0, 0, 0, 0);
LABEL_141:
      this = (SvtEqCombineListViewItem_o *)v4->fields.userSvtEntity;
      if ( !this )
        goto LABEL_159;
      iconLabelInfo1 = v4->fields.iconLabelInfo2;
LABEL_143:
      lv = *(_DWORD *)&this->fields.isSwapChoice;
      break;
    case 8:
      v4->fields.sortValue1 = v4->fields.classId;
      goto LABEL_146;
    case 0xE:
      this = (SvtEqCombineListViewItem_o *)v4->fields.amountSortValue;
      if ( ((unsigned __int64)this & 0x8000000000000000LL) == 0 )
        goto LABEL_153;
      this = (SvtEqCombineListViewItem_o *)sort->fields.manager;
      if ( !this )
        goto LABEL_159;
      naturalAligment = SvtEqCombineListViewManager_TypeInfo->_2.naturalAligment;
      if ( this->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (SvtEqCombineListViewManager_c *)this->klass->_2.typeHierarchy[naturalAligment - 1] != SvtEqCombineListViewManager_TypeInfo )
      {
        goto LABEL_159;
      }
      this = (SvtEqCombineListViewItem_o *)SvtEqCombineListViewManager__GetAmountSortValue(
                                             (SvtEqCombineListViewManager_o *)this,
                                             v4->fields.svtId,
                                             v29);
      v4->fields.amountSortValue = (int64_t)this;
LABEL_153:
      v50 = v4->fields.servantEntity;
      if ( !v50 )
        goto LABEL_159;
      collectionNo = v50->fields.collectionNo;
      v52 = v4->fields.userSvtEntity;
      v4->fields.sortValue1 = (((unsigned __int64)(unsigned int)v4->fields.rarity << 32) + ((_QWORD)this << 48))
                            | collectionNo;
      if ( !v52 )
        goto LABEL_159;
      iconLabelInfo1 = v4->fields.iconLabelInfo1;
      lv = v52->fields.lv;
      this = (SvtEqCombineListViewItem_o *)v52;
      break;
    default:
      return (char)this;
  }
  this = (SvtEqCombineListViewItem_o *)UserServantEntity__getLevelMax((UserServantEntity_o *)this, 0);
  if ( !iconLabelInfo1 )
    goto LABEL_159;
  IconLabelInfo__Set_40964356(iconLabelInfo1, 2, lv, (int32_t)this, 0, 0, 0, 0, 0, 0);
LABEL_146:
  LOBYTE(this) = 1;
  return (char)this;
}


bool SvtEqCombineListViewItem__SwapChoice(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  bool v2; // w8

  v2 = !this->fields.isSwapChoice;
  this->fields.isSwapChoice ^= 1u;
  return v2;
}


bool SvtEqCombineListViewItem__SwapLock(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  bool v2; // w8

  v2 = !this->fields.isSwapLock;
  this->fields.isSwapLock ^= 1u;
  return v2;
}


bool SvtEqCombineListViewItem___SetSortValue_b__53_0(
        SvtEqCombineListViewItem_o *this,
        EventGroupEntity_o *entity,
        const MethodInfo *method)
{
  EventCampaignMaster_o *Master_object; // x0
  __int64 v6; // x1
  struct UserServantEntity_o *userSvtEntity; // x8
  EventCampaignMaster_o *v8; // x21
  __int64 v9; // x22
  __int64 v10; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16

  if ( (byte_4C50E1E & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C50E1E = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (EventCampaignMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_EventCampaignMaster___);
  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_16;
  v8 = Master_object;
  v10 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v12.fields.currentCryptoKey = v10;
  *(_QWORD *)&v12.fields.fakeValue = v9;
  Master_object = (EventCampaignMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49004136(v12, 0);
  if ( !entity || !v8 )
    goto LABEL_16;
  if ( EventCampaignMaster__IsEnableServant(v8, (int32_t)Master_object, entity->fields.eventId, 0) )
    return 1;
  Master_object = (EventCampaignMaster_o *)this->fields.userSvtEntity;
  if ( !Master_object )
    goto LABEL_16;
  if ( UserServantEntity__getEventUpVal_43223880(
         (UserServantEntity_o *)Master_object,
         -1,
         0,
         0,
         this->fields.setupInfo,
         entity->fields.eventId,
         0,
         0) )
  {
    return 1;
  }
  Master_object = (EventCampaignMaster_o *)this->fields.userSvtEntity;
  if ( !Master_object )
LABEL_16:
    sub_1C3E7C0(Master_object, v6);
  return UserServantEntity__getEventUpVal_43223880(
           (UserServantEntity_o *)Master_object,
           -1,
           0,
           0,
           this->fields.finishSetupInfo,
           entity->fields.eventId,
           1,
           0);
}


bool SvtEqCombineListViewItem___SetSortValue_b__53_1(
        SvtEqCombineListViewItem_o *this,
        EventGroupEntity_o *entity,
        const MethodInfo *method)
{
  EventCampaignMaster_o *Master_object; // x0
  __int64 v6; // x1
  struct UserServantEntity_o *userSvtEntity; // x8
  EventCampaignMaster_o *v8; // x21
  __int64 v9; // x22
  __int64 v10; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16

  if ( (byte_4C50E1F & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C50E1F = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (EventCampaignMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_EventCampaignMaster___);
  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_16;
  v8 = Master_object;
  v10 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v12.fields.currentCryptoKey = v10;
  *(_QWORD *)&v12.fields.fakeValue = v9;
  Master_object = (EventCampaignMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49004136(v12, 0);
  if ( !entity || !v8 )
    goto LABEL_16;
  if ( EventCampaignMaster__IsEnableServant(v8, (int32_t)Master_object, entity->fields.eventId, 0) )
    return 1;
  Master_object = (EventCampaignMaster_o *)this->fields.userSvtEntity;
  if ( !Master_object )
    goto LABEL_16;
  if ( UserServantEntity__getEventUpVal_43223880(
         (UserServantEntity_o *)Master_object,
         -1,
         0,
         0,
         this->fields.setupInfo,
         entity->fields.eventId,
         0,
         0) )
  {
    return 1;
  }
  Master_object = (EventCampaignMaster_o *)this->fields.userSvtEntity;
  if ( !Master_object )
LABEL_16:
    sub_1C3E7C0(Master_object, v6);
  return UserServantEntity__getEventUpVal_43223880(
           (UserServantEntity_o *)Master_object,
           -1,
           0,
           0,
           this->fields.finishSetupInfo,
           entity->fields.eventId,
           1,
           0);
}


int32_t SvtEqCombineListViewItem__get_CombineQp(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0

  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_1C3E7C0(0, method);
  return UserServantEntity__getCombineQpSvtEq(userSvtEntity, 0);
}


int32_t SvtEqCombineListViewItem__get_DragSelectNum(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.dragSelectNum;
}


int32_t SvtEqCombineListViewItem__get_GetAddTotalExp(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  struct ServantEntity_o *servantEntity; // x8

  servantEntity = this->fields.servantEntity;
  if ( !servantEntity || (this = (SvtEqCombineListViewItem_o *)this->fields.userSvtEntity) == 0 )
    sub_1C3E7C0(this, method);
  return UserServantEntity__getAddTotalExp((UserServantEntity_o *)this, servantEntity->fields.combineMaterialId, 0);
}


int32_t SvtEqCombineListViewItem__get_GetCurrentLimitCnt(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.currentLimitCnt;
}


int32_t SvtEqCombineListViewItem__get_GetMaterialExp(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.materialExp;
}


int32_t SvtEqCombineListViewItem__get_GetMaxLimitCnt(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.maxLimitCnt;
}


IconLabelInfo_o *SvtEqCombineListViewItem__get_IconInfo1(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.iconLabelInfo1;
}


IconLabelInfo_o *SvtEqCombineListViewItem__get_IconInfo2(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.iconLabelInfo2;
}


bool SvtEqCombineListViewItem__get_IsBaseLvMax(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isBaseLvMax;
}


bool SvtEqCombineListViewItem__get_IsBaseSvt(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isBaseSvt;
}


bool SvtEqCombineListViewItem__get_IsCanNotBaseSelect(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  if ( this->fields.type )
    return 0;
  if ( this->fields.isLvMax && this->fields.isLimitCntMax )
    return 1;
  return this->fields.isSvtEqMaterial;
}


bool SvtEqCombineListViewItem__get_IsCanNotLock(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isCanNotLock;
}


bool SvtEqCombineListViewItem__get_IsCanNotSelect(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isLock
      || this->fields.isChoice
      || this->fields.isMaxNextLv && !this->fields.isLimitCntTarget
      || this->fields.isBaseLvMax && !this->fields.isLimitCntTarget
      || this->fields.isNotSelection;
}


bool SvtEqCombineListViewItem__get_IsChocolateSvtEquip(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isChocolateSvtEquip;
}


bool SvtEqCombineListViewItem__get_IsChoice(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isChoice;
}


bool SvtEqCombineListViewItem__get_IsDispChoice(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  if ( this->fields.isSwapChoice )
    return !this->fields.isChoice;
  else
    return this->fields.isChoice;
}


bool SvtEqCombineListViewItem__get_IsDispLock(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  if ( this->fields.isSwapLock )
    return !this->fields.isLock;
  else
    return this->fields.isLock;
}


bool SvtEqCombineListViewItem__get_IsDragSelect(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.dragSelectNum >= 0;
}


bool SvtEqCombineListViewItem__get_IsEquip(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isEquiped;
}


bool SvtEqCombineListViewItem__get_IsFriendShipSvtEq(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isFriendShipSvtEq;
}


bool SvtEqCombineListViewItem__get_IsLimitCntMax(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isLimitCntMax;
}


bool SvtEqCombineListViewItem__get_IsLimitTarget(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isLimitCntTarget;
}


bool SvtEqCombineListViewItem__get_IsLock(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isLock;
}


bool SvtEqCombineListViewItem__get_IsLvMax(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isLvMax;
}


bool SvtEqCombineListViewItem__get_IsMaxNextLv(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isMaxNextLv;
}


bool SvtEqCombineListViewItem__get_IsMtSelect(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isMaterialSvt;
}


bool SvtEqCombineListViewItem__get_IsNotSelection(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isNotSelection;
}


bool SvtEqCombineListViewItem__get_IsSelectMax(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isMaxSelect;
}


bool SvtEqCombineListViewItem__get_IsSvtEqMaterial(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isSvtEqMaterial;
}


bool SvtEqCombineListViewItem__get_IsSwapChoice(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isSwapChoice;
}


bool SvtEqCombineListViewItem__get_IsSwapLock(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isSwapLock;
}


bool SvtEqCombineListViewItem__get_IsUseGrandServantEquip(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isUseGrandServantEquip;
}


bool SvtEqCombineListViewItem__get_IsUseRecommendSupportEquip(
        SvtEqCombineListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isUseRecommendSupportEquip;
}


bool SvtEqCombineListViewItem__get_IsUseSupportEquip(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isUseSupportEquip;
}


int32_t SvtEqCombineListViewItem__get_ListType(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.type;
}


int32_t SvtEqCombineListViewItem__get_PartyIndex(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.partyIndex;
}


int32_t SvtEqCombineListViewItem__get_SvtId(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.svtId;
}


int32_t SvtEqCombineListViewItem__get_SvtRariry(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.rarity;
}


UserServantEntity_o *SvtEqCombineListViewItem__get_UserSvtEntity(
        SvtEqCombineListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.userSvtEntity;
}


int64_t SvtEqCombineListViewItem__get_UserSvtId(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  SvtEqCombineListViewItem_o *v2; // x19
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v4; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v6; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+20h] [xbp-40h]

  v2 = this;
  if ( (byte_4C50E1D & 1) == 0 )
  {
    this = (SvtEqCombineListViewItem_o *)sub_1C3E564(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C50E1D = 1;
  }
  userSvtEntity = v2->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_1C3E7C0(this, method);
  v4 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v7.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v7.fields.fakeValue = v4;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v6 = v7;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49007660(&v6, 0);
}


void SvtEqCombineListViewItem__setUserServantEntity(
        SvtEqCombineListViewItem_o *this,
        UserServantEntity_o *entity,
        const MethodInfo *method)
{
  this->fields.userSvtEntity = entity;
  sub_1C3E508(&this->fields.userSvtEntity, entity);
}


void SvtEqCombineListViewItem__set_DragSelectNum(
        SvtEqCombineListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields.dragSelectNum = value;
}


void SvtEqCombineListViewItem__set_IsCanNotLock(SvtEqCombineListViewItem_o *this, bool value, const MethodInfo *method)
{
  this->fields.isCanNotLock = value;
}


// local variable allocation has failed, the output may be wrong!
void SvtEqCombineListViewItem__set_IsDragSelect(SvtEqCombineListViewItem_o *this, bool value, const MethodInfo *method)
{
  if ( !this )
    sub_1C3E7C0(0, value);
  this->fields.dragSelectNum = value - 1;
}


void SvtEqCombineListViewItem__set_IsMaxNextLv(SvtEqCombineListViewItem_o *this, bool value, const MethodInfo *method)
{
  this->fields.isMaxNextLv = value;
}


void SvtEqCombineListViewItem__set_IsMtSelect(SvtEqCombineListViewItem_o *this, bool value, const MethodInfo *method)
{
  this->fields.isMaterialSvt = value;
}


void SvtEqCombineListViewItem__set_IsSelectMax(SvtEqCombineListViewItem_o *this, bool value, const MethodInfo *method)
{
  this->fields.isMaxSelect = value;
}