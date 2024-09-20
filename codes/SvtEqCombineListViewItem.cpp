void __fastcall SvtEqCombineListViewItem___ctor(
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
  IconLabelInfo_o *v18; // x21
  int32_t v19; // w2
  int32_t v20; // w3
  IconLabelInfo_o *v21; // x22
  struct IconLabelInfo_o **p_iconLabelInfo2; // x21
  int32_t v23; // w2
  int32_t v24; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_userSvtEntity; // x22
  int32_t v26; // w2
  int32_t v27; // w3
  int64_t Instance; // x0
  int64_t v29; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v30; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v31; // x20
  __int64 v32; // x27
  __int64 v33; // x28
  Il2CppObject *Entity; // x0
  struct ServantEntity_o **p_servantEntity; // x27
  int32_t v36; // w2
  int32_t v37; // w3
  struct UserServantEntity_o *v38; // x8
  int32_t v39; // w2
  int32_t v40; // w3
  struct ServantEntity_o *servantEntity; // x8
  int32_t v42; // w2
  int32_t v43; // w3
  ServantLimitMaster_o *v44; // x20
  int32_t v45; // w28
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v46; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v47; // q1
  UserServantCollectionMaster_o *v48; // x20
  int64_t v49; // x28
  struct UserServantEntity_o *v50; // x8
  int32_t v51; // w0
  UserServantEntity_o *v52; // x8
  bool IsChocolateSvtEquip; // w0
  int32_t v54; // w8
  UserServantEntity_o *v55; // x8
  UserServantEntity_o *v56; // x8
  UserServantEntity_o *v57; // x8
  struct UserServantEntity_o *v58; // x8
  __int128 v59; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v60; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v61; // q0
  int64_t v62; // x0
  __int128 v63; // q1
  __int64 v64; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x29
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
  int64_t v79; // x0
  __int64 v80; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v81; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v82; // q0
  System_Collections_Generic_IEnumerator_T__c *v83; // x8
  __int64 v84; // x9
  int32_t *v85; // x10
  __int64 v86; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v87; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v88; // q0
  UserRecommendSupportMaster_o *v89; // x20
  int32_t v90; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v91; // x8
  UserServantEntity_o *v92; // x23
  __int64 v93; // x20
  __int64 v94; // x24
  int32_t v95; // w20
  struct UserServantEntity_o *v96; // x8
  __int128 v97; // q0
  int64_t v98; // x0
  __int128 v99; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v100; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v101; // q0
  __int64 v102; // x1
  System_Collections_Generic_IEnumerator_T__o *v103; // x23
  System_Collections_Generic_IEnumerator_T__c *v104; // x8
  __int64 v105; // x9
  int32_t *v106; // x10
  __int64 v107; // x0
  System_Collections_Generic_IEnumerator_T__c *v108; // x8
  __int64 v109; // x9
  int32_t *v110; // x10
  __int64 v111; // x0
  _QWORD *v112; // x0
  __int64 v113; // x1
  __int64 v114; // x9
  __int64 v115; // x8
  __int128 v116; // q0
  int64_t v117; // x0
  __int64 v118; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v119; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v120; // q0
  System_Collections_Generic_IEnumerator_T__c *v121; // x8
  __int64 v122; // x9
  int32_t *v123; // x10
  __int64 v124; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v125; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v126; // q0
  UserRecommendSupportMaster_o *v127; // x20
  UserServantEntity_o *v128; // x8
  UserServantEntity_o *v129; // x8
  bool IsChoice; // w0
  bool isFriendShipSvtEq; // w8
  struct ServantEntity_o *v132; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v133; // x8
  __int64 v134; // x20
  __int64 v135; // x22
  int32_t v136; // w8
  struct System_Int32_array *EquipCategoryIdList; // x0
  int32_t v138; // w2
  int32_t v139; // w3
  bool v140; // [xsp+18h] [xbp-238h]
  UserDeckMaster_o *MasterData_object; // [xsp+20h] [xbp-230h]
  int32_t v142; // [xsp+2Ch] [xbp-224h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v143; // [xsp+30h] [xbp-220h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v144; // [xsp+50h] [xbp-200h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v145; // [xsp+70h] [xbp-1E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v146; // [xsp+90h] [xbp-1C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v147; // [xsp+B0h] [xbp-1A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v148; // [xsp+D0h] [xbp-180h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v149; // [xsp+F0h] [xbp-160h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v150; // [xsp+110h] [xbp-140h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v151; // [xsp+130h] [xbp-120h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v152; // [xsp+150h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v153; // [xsp+170h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v154; // [xsp+190h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v155; // [xsp+1B0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v156; // [xsp+1D0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v157; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v158; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v159; // 0:x0.16

  if ( (byte_4A5ED4B & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_1B885B0(&Method_DataManager_GetMasterData_CombineMaterialMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserDeckMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantLeaderMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_UserRecommendSupportMaster___);
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
    byte_4A5ED4B = 1;
  }
  v18 = (IconLabelInfo_o *)sub_1B887FC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v18, 0LL);
  this->fields.iconLabelInfo1 = v18;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.iconLabelInfo1, (int32_t)v18, v19, v20);
  v21 = (IconLabelInfo_o *)sub_1B887FC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v21, 0LL);
  this->fields.iconLabelInfo2 = v21;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.iconLabelInfo2, (int32_t)v21, v23, v24);
  ListViewItem___ctor((ListViewItem_o *)this, 0LL);
  this->fields.userSvtEntity = userSvtEntity;
  p_userSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userSvtEntity;
  this->fields.type = type;
  this->fields.index = index;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.userSvtEntity, (int32_t)userSvtEntity, v26, v27);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_160;
  v142 = type;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
  v30 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_160;
  v31 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v33 = *(_QWORD *)&v30[5].fields.currentCryptoKey;
  v32 = *(_QWORD *)&v30[5].fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v157.fields.currentCryptoKey = v33;
  *(_QWORD *)&v157.fields.fakeValue = v32;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v157, 0LL);
  if ( !v31 )
    goto LABEL_160;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v31,
             Instance,
             (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)Entity;
  p_servantEntity = &this->fields.servantEntity;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.servantEntity, (int32_t)Entity, v36, v37);
  v38 = this->fields.userSvtEntity;
  if ( !v38 )
    goto LABEL_160;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v38->fields.svtId, 0LL);
  servantEntity = this->fields.servantEntity;
  this->fields.svtId = Instance;
  if ( !servantEntity )
    goto LABEL_160;
  this->fields.classId = servantEntity->fields.classId;
  this->fields.setupInfo = setupInfo;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v39, v40);
  this->fields.finishSetupInfo = finishSetupInfo;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.finishSetupInfo, (int32_t)finishSetupInfo, v42, v43);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_160;
  MasterData_object = (UserDeckMaster_o *)DataManager__GetMasterData_object_(
                                            (DataManager_o *)Instance,
                                            (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserDeckMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_160;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtEntity )
    goto LABEL_160;
  v44 = (ServantLimitMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800((*p_userSvtEntity)[5], 0LL);
  if ( !*p_userSvtEntity )
    goto LABEL_160;
  v45 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800((*p_userSvtEntity)[6], 0LL);
  if ( !v44 )
    goto LABEL_160;
  Instance = (int64_t)ServantLimitMaster__GetEntity(v44, v45, Instance, 0LL);
  if ( !Instance )
    goto LABEL_160;
  this->fields.rarity = *(_DWORD *)(Instance + 24);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_160;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v46 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_160;
  v47 = v46[4];
  v48 = (UserServantCollectionMaster_o *)Instance;
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v156.fields.currentCryptoKey = v46[3];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v156.fields.fakeValue = v47;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v155 = v156;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v155, 0LL);
  if ( !*p_userSvtEntity )
    goto LABEL_160;
  v49 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800((*p_userSvtEntity)[5], 0LL);
  if ( !v48 )
    goto LABEL_160;
  Instance = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(v48, v49, Instance, 0LL);
  if ( !Instance )
    goto LABEL_160;
  UserServantCollectionEntity__getFriendShipRankInfo(
    (UserServantCollectionEntity_o *)Instance,
    &this->fields.friendship,
    &this->fields.friendshipMax,
    0LL);
  this->fields.partyIndex = -1;
  Instance = (int64_t)this->fields.userSvtEntity;
  *(_WORD *)&this->fields.isLock = 0;
  this->fields.isChoice = 0;
  *(_WORD *)&this->fields.isBaseSvt = 0;
  this->fields.isLastSelectMaterial = 0;
  this->fields.isMaxSelect = 0;
  this->fields.isSvtEqMaterial = 0;
  if ( !Instance )
    goto LABEL_160;
  v140 = isFavorite;
  Instance = UserServantEntity__getLimitCntMax((UserServantEntity_o *)Instance, 0LL);
  v50 = this->fields.userSvtEntity;
  this->fields.maxLimitCnt = Instance;
  if ( !v50 )
    goto LABEL_160;
  v51 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v50->fields.limitCount, 0LL);
  *(_DWORD *)&this->fields.isBaseLvMax = 0;
  this->fields.currentLimitCnt = v51;
  Instance = (int64_t)this->fields.userSvtEntity;
  this->fields.isCanNotLock = 0;
  *(_QWORD *)&this->fields.isUseSupportEquip = 0xFFFFFFFF00000000LL;
  *(_QWORD *)&this->fields.bonusKind = 1LL;
  this->fields.isEventUpVal = 0;
  this->fields.isNotSelection = 0;
  if ( !Instance )
    goto LABEL_160;
  Instance = UserServantEntity__IsFriendShipSvtEquip((UserServantEntity_o *)Instance, 0LL);
  v52 = this->fields.userSvtEntity;
  this->fields.isFriendShipSvtEq = Instance & 1;
  if ( !v52 )
    goto LABEL_160;
  IsChocolateSvtEquip = UserServantEntity__IsChocolateSvtEquip(v52, 0LL);
  v54 = this->fields.type;
  this->fields.isChocolateSvtEquip = IsChocolateSvtEquip;
  if ( !v54 )
  {
    Instance = (int64_t)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_160;
    Instance = UserServantEntity__isLevelMax((UserServantEntity_o *)Instance, 0LL);
    v55 = this->fields.userSvtEntity;
    this->fields.isLvMax = Instance & 1;
    if ( !v55 )
      goto LABEL_160;
    Instance = UserServantEntity__isLimitCountMax(v55, 0LL);
    v56 = this->fields.userSvtEntity;
    this->fields.isLimitCntMax = Instance & 1;
    if ( !v56 )
      goto LABEL_160;
    Instance = UserServantEntity__IsLock(v56, 0LL);
    v57 = this->fields.userSvtEntity;
    this->fields.isLock = Instance & 1;
    if ( !v57 )
      goto LABEL_160;
    Instance = UserServantEntity__IsChoice(v57, 0LL);
    v58 = this->fields.userSvtEntity;
    this->fields.isChoice = Instance & 1;
    if ( !v58 )
      goto LABEL_160;
    v59 = *(_OWORD *)&v58->fields.id.fields.fakeValue;
    *(_OWORD *)&v156.fields.currentCryptoKey = *(_OWORD *)&v58->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v156.fields.fakeValue = v59;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v154 = v156;
    v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v154, 0LL);
    Instance = (int64_t)MasterData_object;
    if ( !MasterData_object )
      goto LABEL_160;
    Instance = UserDeckMaster__IsEquip(MasterData_object, v29, 0LL);
    this->fields.isEquiped = Instance & 1;
    if ( baseUsrSvtData )
    {
      v60 = *p_userSvtEntity;
      if ( !*p_userSvtEntity )
        goto LABEL_160;
      v61 = v60[2];
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v156.fields.currentCryptoKey = v60[1];
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v156.fields.fakeValue = v61;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v153 = v156;
      v62 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v153, 0LL);
      v63 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
      *(_OWORD *)&v152.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v152.fields.fakeValue = v63;
      if ( v62 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v152, 0LL) )
        this->fields.isBaseSvt = 1;
    }
    Instance = (int64_t)*p_servantEntity;
    if ( !*p_servantEntity )
      goto LABEL_160;
    if ( ServantEntity__get_IsServantEquipMaterial((ServantEntity_o *)Instance, 0LL) )
      this->fields.isSvtEqMaterial = 1;
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_160;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantLeaderMaster___);
    if ( !Instance )
      goto LABEL_160;
    Instance = *(_QWORD *)(Instance + 32);
    if ( !Instance )
      goto LABEL_160;
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
            goto LABEL_53;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_53:
        p_method = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
              Enumerator,
              *(_QWORD *)(p_method + 8)) & 1) == 0 )
        break;
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
            goto LABEL_60;
        }
        v73 = (__int64)&v70->vtable[*v72].method;
      }
      else
      {
LABEL_60:
        v73 = sub_1BDA590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
      }
      v74 = (_QWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v73)(
                        Enumerator,
                        *(_QWORD *)(v73 + 8));
      if ( !v74 )
        sub_1B8880C(0LL, v75);
      methodPtr_low = LOBYTE(UserServantLeaderEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*v74 + 304LL) < (unsigned int)methodPtr_low
        || *(UserServantLeaderEntity_c **)(*(_QWORD *)(*v74 + 200LL) + 8 * methodPtr_low - 8) != UserServantLeaderEntity_TypeInfo )
      {
        goto LABEL_162;
      }
      v77 = v74[4];
      if ( v77 )
      {
        v78 = *(_OWORD *)(v77 + 40);
        *(_OWORD *)&v156.fields.currentCryptoKey = *(_OWORD *)(v77 + 24);
        *(_OWORD *)&v156.fields.fakeValue = v78;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v151 = v156;
        v79 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v151, 0LL);
        v81 = *p_userSvtEntity;
        if ( !*p_userSvtEntity )
          sub_1B8880C(v79, v80);
        v82 = v81[2];
        *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v150.fields.currentCryptoKey = v81[1];
        *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v150.fields.fakeValue = v82;
        if ( v79 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v150, 0LL) )
        {
          this->fields.isUseSupportEquip = 1;
          break;
        }
      }
    }
    v83 = Enumerator->klass;
    v84 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v85 = &v83->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v85 - 1) != System_IDisposable_TypeInfo )
      {
        --v84;
        v85 += 4;
        if ( !v84 )
          goto LABEL_75;
      }
      v86 = (__int64)&v83->vtable[*v85].method;
    }
    else
    {
LABEL_75:
      v86 = sub_1BDA590(Enumerator, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v86)(
      Enumerator,
      *(_QWORD *)(v86 + 8));
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Instance = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserRecommendSupportMaster___);
    v87 = *p_userSvtEntity;
    p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
    if ( !*p_userSvtEntity )
      goto LABEL_160;
    v88 = v87[2];
    v89 = (UserRecommendSupportMaster_o *)Instance;
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v156.fields.currentCryptoKey = v87[1];
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v156.fields.fakeValue = v88;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v149 = v156;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v149, 0LL);
    if ( !v89 )
      goto LABEL_160;
    this->fields.isUseRecommendSupportEquip = UserRecommendSupportMaster__IsSettingServant(v89, Instance, 1, 0LL);
  }
  if ( v142 != 1 )
    goto LABEL_149;
  this->fields.isMaterialSvt = isMtSvt;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_160;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_CombineMaterialMaster___);
  if ( !*p_servantEntity || !*p_userSvtEntity || !Instance )
    goto LABEL_160;
  Instance = (int64_t)CombineMaterialMaster__GetEntity(
                        (CombineMaterialMaster_o *)Instance,
                        (*p_servantEntity)->fields.combineMaterialId,
                        (*p_userSvtEntity)[16].fields.currentCryptoKey,
                        0LL);
  v90 = Instance ? *(_DWORD *)(Instance + 24) : 0;
  this->fields.materialExp = v90;
  if ( baseUsrSvtData )
  {
    v91 = *p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_160;
    v92 = baseUsrSvtData;
    v94 = *(_QWORD *)&v91[5].fields.currentCryptoKey;
    v93 = *(_QWORD *)&v91[5].fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v158.fields.currentCryptoKey = v94;
    *(_QWORD *)&v158.fields.fakeValue = v93;
    v95 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v158, 0LL);
    if ( v95 == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v92->fields.svtId, 0LL) )
    {
      Instance = UserServantEntity__isLimitCountMax(v92, 0LL);
      v96 = this->fields.userSvtEntity;
      this->fields.isLimitCntMax = Instance & 1;
      this->fields.isLimitCntTarget = (Instance & 1) == 0;
      if ( !v96 )
        goto LABEL_160;
      v97 = *(_OWORD *)&v96->fields.id.fields.fakeValue;
      *(_OWORD *)&v156.fields.currentCryptoKey = *(_OWORD *)&v96->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v156.fields.fakeValue = v97;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v148 = v156;
      v98 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v148, 0LL);
      v99 = *(_OWORD *)&v92->fields.id.fields.fakeValue;
      *(_OWORD *)&v147.fields.currentCryptoKey = *(_OWORD *)&v92->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v147.fields.fakeValue = v99;
      if ( v98 != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v147, 0LL) )
        this->fields.isSameSvt = 1;
    }
    Instance = UserServantEntity__isLevelMax(v92, 0LL);
    this->fields.isBaseLvMax = Instance & 1;
  }
  else
  {
    this->fields.isLimitCntTarget = 0;
  }
  v100 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_160;
  v101 = v100[2];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v156.fields.currentCryptoKey = v100[1];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v156.fields.fakeValue = v101;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v146 = v156;
  v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v146, 0LL);
  Instance = (int64_t)MasterData_object;
  if ( !MasterData_object )
    goto LABEL_160;
  this->fields.isEquiped = UserDeckMaster__IsEquip_40056452(MasterData_object, v29, &this->fields.partyIndex, 0LL);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_160;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantLeaderMaster___);
  if ( !Instance )
    goto LABEL_160;
  Instance = *(_QWORD *)(Instance + 32);
  if ( !Instance )
    goto LABEL_160;
  v103 = System_Collections_ObjectModel_Collection_object___GetEnumerator(
           (System_Collections_ObjectModel_Collection_T__o *)Instance,
           (const MethodInfo_30BAB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !v103 )
    sub_1B8880C(0LL, v102);
  while ( 1 )
  {
    v104 = v103->klass;
    v105 = *(unsigned __int16 *)(&v103->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v103->klass->_2.bitflags2 + 3) )
    {
      v106 = &v104->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)v106 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v105;
        v106 += 4;
        if ( !v105 )
          goto LABEL_116;
      }
      v107 = (__int64)&v104->vtable[*v106].method;
    }
    else
    {
LABEL_116:
      v107 = sub_1BDA590(v103, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v107)(
            v103,
            *(_QWORD *)(v107 + 8)) & 1) == 0 )
      goto LABEL_134;
    v108 = v103->klass;
    v109 = *(unsigned __int16 *)(&v103->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v103->klass->_2.bitflags2 + 3) )
    {
      v110 = &v108->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v110 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v109;
        v110 += 4;
        if ( !v109 )
          goto LABEL_123;
      }
      v111 = (__int64)&v108->vtable[*v110].method;
    }
    else
    {
LABEL_123:
      v111 = sub_1BDA590(v103, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v112 = (_QWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v111)(
                       v103,
                       *(_QWORD *)(v111 + 8));
    if ( !v112 )
      goto LABEL_163;
    v114 = LOBYTE(UserServantLeaderEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*v112 + 304LL) < (unsigned int)v114
      || *(UserServantLeaderEntity_c **)(*(_QWORD *)(*v112 + 200LL) + 8 * v114 - 8) != UserServantLeaderEntity_TypeInfo )
    {
      sub_1B88ACC(v112);
LABEL_162:
      sub_1B88ACC(v74);
LABEL_163:
      sub_1B8880C(v112, v113);
    }
    v115 = v112[4];
    if ( v115 )
    {
      v116 = *(_OWORD *)(v115 + 40);
      *(_OWORD *)&v156.fields.currentCryptoKey = *(_OWORD *)(v115 + 24);
      *(_OWORD *)&v156.fields.fakeValue = v116;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v145 = v156;
      v117 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v145, 0LL);
      v119 = *p_userSvtEntity;
      if ( !*p_userSvtEntity )
        sub_1B8880C(v117, v118);
      v120 = v119[2];
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v144.fields.currentCryptoKey = v119[1];
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v144.fields.fakeValue = v120;
      if ( v117 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v144, 0LL) )
        break;
    }
  }
  this->fields.isUseSupportEquip = 1;
LABEL_134:
  v121 = v103->klass;
  v122 = *(unsigned __int16 *)(&v103->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v103->klass->_2.bitflags2 + 3) )
  {
    v123 = &v121->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v123 - 1) != System_IDisposable_TypeInfo )
    {
      --v122;
      v123 += 4;
      if ( !v122 )
        goto LABEL_138;
    }
    v124 = (__int64)&v121->vtable[*v123].method;
  }
  else
  {
LABEL_138:
    v124 = sub_1BDA590(v103, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v124)(v103, *(_QWORD *)(v124 + 8));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserRecommendSupportMaster___);
  v125 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_160;
  v126 = v125[2];
  v127 = (UserRecommendSupportMaster_o *)Instance;
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v156.fields.currentCryptoKey = v125[1];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v156.fields.fakeValue = v126;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v143 = v156;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v143, 0LL);
  if ( !v127 )
    goto LABEL_160;
  Instance = UserRecommendSupportMaster__IsSettingServant(v127, Instance, 1, 0LL);
  v128 = this->fields.userSvtEntity;
  this->fields.isUseRecommendSupportEquip = Instance & 1;
  if ( !v128 )
    goto LABEL_160;
  Instance = UserServantEntity__IsLock(v128, 0LL);
  v129 = this->fields.userSvtEntity;
  this->fields.isLock = Instance & 1;
  if ( !v129 )
    goto LABEL_160;
  IsChoice = UserServantEntity__IsChoice(v129, 0LL);
  isFriendShipSvtEq = this->fields.isFriendShipSvtEq;
  this->fields.isChoice = IsChoice;
  this->fields.isFavorite = v140;
  this->fields.isNotSelection = isFriendShipSvtEq;
LABEL_149:
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_160;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Instance )
    goto LABEL_160;
  Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                        this->fields.classId,
                        (const MethodInfo_311D934 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_160;
  v132 = this->fields.servantEntity;
  this->fields.sortValue1B = *(int *)(Instance + 48);
  if ( !v132 )
    goto LABEL_160;
  v133 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_160;
  this->fields.sortValue2 = ((__int64)v132->fields.collectionNo << 16) | ((unsigned __int64)(unsigned int)this->fields.rarity << 48) | v133[16].fields.currentCryptoKey;
  v135 = *(_QWORD *)&v133[5].fields.currentCryptoKey;
  v134 = *(_QWORD *)&v133[5].fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v159.fields.currentCryptoKey = v135;
  *(_QWORD *)&v159.fields.fakeValue = v134;
  v136 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v159, 0LL);
  Instance = (int64_t)this->fields.userSvtEntity;
  this->fields.sortValue2B = v136;
  this->fields.amountSortValue = -1LL;
  if ( !Instance
    || (EquipCategoryIdList = UserServantEntity__GetEquipCategoryIdList((UserServantEntity_o *)Instance, 1, 0LL),
        this->fields.categoryIdList = EquipCategoryIdList,
        sub_1B88554(
          (ServantStatusBattleListViewItem_o *)&this->fields.categoryIdList,
          (int32_t)EquipCategoryIdList,
          v138,
          v139),
        (Instance = (int64_t)this->fields.iconLabelInfo1) == 0)
    || (IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0LL), (Instance = (int64_t)*p_iconLabelInfo2) == 0) )
  {
LABEL_160:
    sub_1B8880C(Instance, v29);
  }
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0LL);
}


void __fastcall SvtEqCombineListViewItem__Finalize(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  ListViewItem__Finalize((ListViewItem_o *)this, 0LL);
}


bool __fastcall SvtEqCombineListViewItem__IsMatchFilter(
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

  if ( (byte_4A5ED4D & 1) == 0 )
  {
    sub_1B885B0(&FilterKindList_TypeInfo);
    sub_1B885B0(&ListViewSort_FilterKind___TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    byte_4A5ED4D = 1;
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
                           (const MethodInfo_34E4AF4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_36;
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)RarityFilterKindList, 0LL)
    && !ListViewSort__IsMatchRarityFilter(sort, this->fields.rarity, 0LL)
    || !ListViewSort__CheckSvtEquipEffectFilterDefaultAll(sort, 0LL)
    && !ServantEquipEffectFilterController__IsMatchEffectCategory(this->fields.categoryIdList, sort, 0LL) )
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
    goto LABEL_36;
  v10 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)RarityFilterKindList,
                                           (const MethodInfo_34E4AF4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, v10, 0LL)
    || (IsMatchServantEquipCombineStatusFilter = ListViewSort__IsMatchServantEquipCombineStatusFilter(
                                                   sort,
                                                   this->fields.userSvtEntity,
                                                   this->fields.servantEntity,
                                                   0,
                                                   0LL),
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
                                             (const MethodInfo_34E4AF4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, v14, 0LL)
      || (HaveStatusFilter = ListViewSort__IsMatchServantEquipHaveStatusFilter(
                               sort,
                               this->fields.userSvtEntity,
                               this->fields.servantEntity,
                               0,
                               0LL),
          result = 0,
          HaveStatusFilter) )
    {
      RarityFilterKindList = (System_Int32Enum_array *)sub_1B88658(ListViewSort_FilterKind___TypeInfo, 1LL);
      if ( RarityFilterKindList )
      {
        if ( !RarityFilterKindList->max_length )
          sub_1B88814(RarityFilterKindList, RarityFilterKindList);
        RarityFilterKindList->m_Items[1] = 39;
        if ( ListViewSort__IsUnSelectedAllTargetFilters(
               sort,
               (ListViewSort_FilterKind_array *)RarityFilterKindList,
               0LL)
          || !ListViewSort__GetFilter(sort, 39, 0LL) )
        {
          return 1;
        }
        v16 = !this->fields.isChoice;
        if ( !this->fields.isSwapChoice )
          return this->fields.isChoice;
        return v16;
      }
LABEL_36:
      sub_1B8880C(RarityFilterKindList, sort);
    }
  }
  return result;
}


void __fastcall SvtEqCombineListViewItem__ModifyChoiceItem(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0

  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_1B8880C(0LL, method);
  this->fields.isChoice = UserServantEntity__IsChoice(userSvtEntity, 0LL);
  this->fields.isSwapChoice = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SvtEqCombineListViewItem__ModifyItem(
        SvtEqCombineListViewItem_o *this,
        bool isFavorite,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x1

  this->fields.isFavorite = isFavorite;
  SvtEqCombineListViewItem__ModifyLockItem(this, (const MethodInfo *)isFavorite);
  SvtEqCombineListViewItem__ModifyChoiceItem(this, v4);
}


void __fastcall SvtEqCombineListViewItem__ModifyLockItem(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0

  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_1B8880C(0LL, method);
  this->fields.isLock = UserServantEntity__IsLock(userSvtEntity, 0LL);
  this->fields.isSwapLock = 0;
}


bool __fastcall SvtEqCombineListViewItem__SetSortValue(
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
  __int64 *v15; // x8
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
  bool EventUpVal_40205464; // w0
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
  struct UserServantEntity_o *v42; // x8
  int64_t hp; // x2
  int32_t adjustHp; // w3
  int32_t v45; // w1
  struct UserServantEntity_o *v46; // x8
  struct ServantEntity_o *servantEntity; // x8
  int64_t cost; // x2
  int32_t v49; // w20
  __int64 methodPtr_low; // x10
  struct ServantEntity_o *v51; // x8
  __int64 collectionNo; // x10
  SvtEqCombineListViewItem_o *v53; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v55; // [xsp+10h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v56; // [xsp+30h] [xbp-50h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v57; // 0:x0.16

  v4 = this;
  if ( (byte_4A5ED4C & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_Any_EventGroupEntity___);
    sub_1B885B0(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_EventGroupMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&System_Func_EventGroupEntity__bool__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventGroupEntity__get_Count__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Method_SvtEqCombineListViewItem__SetSortValue_b__52_0__);
    sub_1B885B0(&Method_SvtEqCombineListViewItem__SetSortValue_b__52_1__);
    this = (SvtEqCombineListViewItem_o *)sub_1B885B0(&SvtEqCombineListViewManager_TypeInfo);
    byte_4A5ED4C = 1;
  }
  *(_WORD *)&v4->fields.isTermination = 0;
  v4->fields.sortValue1 = -1LL;
  if ( !sort )
    goto LABEL_158;
  if ( !sort->fields.isBonusKind )
    goto LABEL_64;
  if ( v4->fields.isBaseSvt )
    goto LABEL_64;
  this = (SvtEqCombineListViewItem_o *)ListViewItem__get_IsSelect((ListViewItem_o *)v4, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
    goto LABEL_64;
  setupInfo = v4->fields.setupInfo;
  if ( !setupInfo )
    goto LABEL_158;
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
        this = (SvtEqCombineListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventGroupMaster___);
        if ( this )
        {
          EntitiesByGroupId = EventGroupMaster__GetEntitiesByGroupId(
                                (EventGroupMaster_o *)this,
                                v4->fields.bonusKindId,
                                0LL);
          this = (SvtEqCombineListViewItem_o *)BasicHelper__IsNullOrEmpty(
                                                 (System_Collections_ICollection_o *)EntitiesByGroupId,
                                                 0LL);
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            if ( !EntitiesByGroupId )
              goto LABEL_158;
            if ( EntitiesByGroupId->fields._size >= 2 )
            {
              v14 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_EventGroupEntity__bool__TypeInfo);
              v15 = &Method_SvtEqCombineListViewItem__SetSortValue_b__52_0__;
LABEL_62:
              v20 = (System_Func_T__bool__o *)v14;
              System_Func_object__bool____ctor(v14, (Il2CppObject *)v4, *v15, 0LL);
              this = (SvtEqCombineListViewItem_o *)BasicHelper__Any_object_(
                                                     (System_Collections_Generic_List_T__o *)EntitiesByGroupId,
                                                     v20,
                                                     (const MethodInfo_2E6ACD0 *)Method_BasicHelper_Any_EventGroupEntity___);
              v4->fields.isEventUpVal = (unsigned __int8)this & 1;
              goto LABEL_63;
            }
          }
          goto LABEL_63;
        }
LABEL_158:
        sub_1B8880C(this, sort);
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
      goto LABEL_158;
    this = (SvtEqCombineListViewItem_o *)UserServantEntity__getEventUpVal_40205464(
                                           (UserServantEntity_o *)this,
                                           -1,
                                           0,
                                           0,
                                           setupInfo,
                                           bonusKind2Id,
                                           0,
                                           0LL);
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
    this = (SvtEqCombineListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventCampaignMaster___);
    userSvtEntity = v4->fields.userSvtEntity;
    if ( !userSvtEntity )
      goto LABEL_158;
    v17 = (EventCampaignMaster_o *)this;
    v19 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
    v18 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v57.fields.currentCryptoKey = v19;
    *(_QWORD *)&v57.fields.fakeValue = v18;
    this = (SvtEqCombineListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v57, 0LL);
    if ( !v17 )
      goto LABEL_158;
    this = (SvtEqCombineListViewItem_o *)EventCampaignMaster__IsEnableServant(
                                           v17,
                                           (int32_t)this,
                                           v4->fields.bonusKindId,
                                           0LL);
LABEL_52:
    v4->fields.isEventUpVal = (unsigned __int8)this & 1;
    if ( ((unsigned __int8)this & 1) == 0 )
      goto LABEL_106;
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
  this = (SvtEqCombineListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventGroupMaster___);
  if ( !this )
    goto LABEL_158;
  EntitiesByGroupId = EventGroupMaster__GetEntitiesByGroupId((EventGroupMaster_o *)this, v4->fields.bonusKindId, 0LL);
  this = (SvtEqCombineListViewItem_o *)BasicHelper__IsNullOrEmpty(
                                         (System_Collections_ICollection_o *)EntitiesByGroupId,
                                         0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( !EntitiesByGroupId )
      goto LABEL_158;
    if ( EntitiesByGroupId->fields._size >= 2 )
    {
      v14 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_EventGroupEntity__bool__TypeInfo);
      v15 = &Method_SvtEqCombineListViewItem__SetSortValue_b__52_1__;
      goto LABEL_62;
    }
  }
LABEL_63:
  if ( !v4->fields.isEventUpVal )
    goto LABEL_106;
LABEL_64:
  finishSetupInfo = v4->fields.finishSetupInfo;
  if ( finishSetupInfo )
  {
    servantEquipFilterEventIds = finishSetupInfo->fields.servantEquipFilterEventIds;
    if ( !servantEquipFilterEventIds )
      goto LABEL_158;
    if ( *(_QWORD *)&servantEquipFilterEventIds->max_length )
    {
      if ( !v4->fields.isBaseSvt )
      {
        this = (SvtEqCombineListViewItem_o *)ListViewItem__get_IsSelect((ListViewItem_o *)v4, 0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          v23 = v4->fields.finishSetupInfo;
          if ( !v23 )
            goto LABEL_158;
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
            goto LABEL_158;
          EventUpVal_40205464 = UserServantEntity__getEventUpVal_40205464(
                                  (UserServantEntity_o *)this,
                                  -1,
                                  0,
                                  0,
                                  v23,
                                  v25,
                                  1,
                                  0LL);
          isEventUpVal = EventUpVal_40205464;
          v4->fields.isEventUpVal = EventUpVal_40205464;
LABEL_83:
          if ( isEventUpVal )
            goto LABEL_84;
LABEL_106:
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
    && !ListViewItem__get_IsSelect((ListViewItem_o *)v4, 0LL)
    && (((__int64 (__fastcall *)(SvtEqCombineListViewItem_o *, ListViewSort_o *, void *))v4->klass->vtable._5_IsMatchFilter.method)(
          v4,
          sort,
          v4->klass[1]._1.image) & 1) == 0 )
  {
    goto LABEL_106;
  }
  this = (SvtEqCombineListViewItem_o *)v4->fields.iconLabelInfo2;
  if ( !this )
    goto LABEL_158;
  IconLabelInfo__Clear((IconLabelInfo_o *)this, 0LL);
  v4->fields.sortValue0 = 0LL;
  p_sortValue0 = &v4->fields.sortValue0;
  v4->fields.sortValue0B = 0LL;
  if ( !sort->fields.isSmartSort )
  {
    if ( !isChoice || !sort->fields.isChoiceSort )
      goto LABEL_118;
    type = v4->fields.type;
    if ( type == 1 )
    {
      v33 = -10LL;
    }
    else
    {
      if ( type )
        goto LABEL_118;
      v33 = 10LL;
    }
    *p_sortValue0 = v33;
    goto LABEL_118;
  }
  if ( !v4->fields.type )
  {
    if ( v4->fields.isEquiped || v4->fields.isUseSupportEquip || v4->fields.isUseRecommendSupportEquip )
    {
      v34 = 20LL;
    }
    else
    {
      if ( !v4->fields.isLvMax || !v4->fields.isLimitCntMax )
      {
LABEL_104:
        if ( isChoice && sort->fields.isChoiceSort )
          v4->fields.sortValue0B = 10LL;
        goto LABEL_118;
      }
      v34 = -10LL;
    }
    *p_sortValue0 = v34;
    goto LABEL_104;
  }
  if ( v4->fields.isSameSvt )
  {
    v31 = 20LL;
LABEL_114:
    *p_sortValue0 = v31;
    if ( isChoice && sort->fields.isChoiceSort )
      *(_OWORD *)p_sortValue0 = xmmword_BB5AF0;
    goto LABEL_118;
  }
  if ( v4->fields.isSwapLock )
    isLock = !v4->fields.isLock;
  else
    isLock = v4->fields.isLock;
  v31 = -10LL;
  if ( isLock )
    goto LABEL_114;
  if ( !v4->fields.isNotSelection )
    v31 = -20LL;
  if ( v4->fields.isNotSelection || isChoice )
    goto LABEL_114;
LABEL_118:
  this = (SvtEqCombineListViewItem_o *)(&dword_0 + 1);
  switch ( sort->fields.sortKind )
  {
    case 1:
      v36 = v4->fields.userSvtEntity;
      if ( !v36 )
        goto LABEL_158;
      v37 = *(_OWORD *)&v36->fields.id.fields.fakeValue;
      *(_OWORD *)&v56.fields.currentCryptoKey = *(_OWORD *)&v36->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v56.fields.fakeValue = v37;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v55 = v56;
      this = (SvtEqCombineListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(
                                             &v55,
                                             0LL);
      v38 = v4->fields.userSvtEntity;
      v4->fields.sortValue1 = (int64_t)this;
      if ( !v38 )
        goto LABEL_158;
      this = (SvtEqCombineListViewItem_o *)v4->fields.iconLabelInfo1;
      if ( !this )
        goto LABEL_158;
      IconLabelInfo__SetTime((IconLabelInfo_o *)this, 49, v38->fields.createdAt, 0, 0, 0, 0LL);
      goto LABEL_140;
    case 2:
      this = (SvtEqCombineListViewItem_o *)v4->fields.userSvtEntity;
      v4->fields.sortValue1 = v4->fields.rarity;
      if ( !this )
        goto LABEL_158;
      iconLabelInfo1 = v4->fields.iconLabelInfo1;
      goto LABEL_142;
    case 3:
      this = (SvtEqCombineListViewItem_o *)v4->fields.userSvtEntity;
      if ( !this )
        goto LABEL_158;
      v40 = this->fields.bonusKind;
      v41 = v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = v40;
      this = (SvtEqCombineListViewItem_o *)UserServantEntity__getLevelMax((UserServantEntity_o *)this, 0LL);
      if ( !v41 )
        goto LABEL_158;
      IconLabelInfo__Set_38140136(v41, 2, v40, (int32_t)this, 0, 0, 0, 0, 0LL);
      goto LABEL_145;
    case 5:
      v42 = v4->fields.userSvtEntity;
      if ( !v42 )
        goto LABEL_158;
      hp = v42->fields.hp;
      this = (SvtEqCombineListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = hp;
      if ( !this )
        goto LABEL_158;
      adjustHp = v42->fields.adjustHp;
      v45 = 3;
      goto LABEL_136;
    case 6:
      v46 = v4->fields.userSvtEntity;
      if ( !v46 )
        goto LABEL_158;
      hp = v46->fields.atk;
      this = (SvtEqCombineListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = hp;
      if ( !this )
        goto LABEL_158;
      adjustHp = v46->fields.adjustAtk;
      v45 = 5;
LABEL_136:
      IconLabelInfo__Set_38140136((IconLabelInfo_o *)this, v45, hp, adjustHp, 0, 0, 0, 0, 0LL);
      goto LABEL_140;
    case 7:
      servantEntity = v4->fields.servantEntity;
      if ( !servantEntity )
        goto LABEL_158;
      cost = servantEntity->fields.cost;
      this = (SvtEqCombineListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = cost;
      if ( !this )
        goto LABEL_158;
      IconLabelInfo__Set_38140136((IconLabelInfo_o *)this, 7, cost, 0, 0, 0, 0, 0, 0LL);
LABEL_140:
      this = (SvtEqCombineListViewItem_o *)v4->fields.userSvtEntity;
      if ( !this )
        goto LABEL_158;
      iconLabelInfo1 = v4->fields.iconLabelInfo2;
LABEL_142:
      v49 = this->fields.bonusKind;
      break;
    case 8:
      v4->fields.sortValue1 = v4->fields.classId;
      goto LABEL_145;
    case 0xE:
      this = (SvtEqCombineListViewItem_o *)v4->fields.amountSortValue;
      if ( ((unsigned __int64)this & 0x8000000000000000LL) == 0 )
        goto LABEL_152;
      this = (SvtEqCombineListViewItem_o *)sort->fields.manager;
      if ( !this )
        goto LABEL_158;
      methodPtr_low = LOBYTE(SvtEqCombineListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(this->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (SvtEqCombineListViewManager_c *)this->klass->_2.typeHierarchy[methodPtr_low - 1] != SvtEqCombineListViewManager_TypeInfo )
      {
        goto LABEL_158;
      }
      this = (SvtEqCombineListViewItem_o *)SvtEqCombineListViewManager__GetAmountSortValue(
                                             (SvtEqCombineListViewManager_o *)this,
                                             v4->fields.svtId,
                                             v29);
      v4->fields.amountSortValue = (int64_t)this;
LABEL_152:
      v51 = v4->fields.servantEntity;
      if ( !v51 )
        goto LABEL_158;
      collectionNo = v51->fields.collectionNo;
      v53 = (SvtEqCombineListViewItem_o *)v4->fields.userSvtEntity;
      v4->fields.sortValue1 = (((unsigned __int64)(unsigned int)v4->fields.rarity << 32) + ((_QWORD)this << 48)) | collectionNo;
      if ( !v53 )
        goto LABEL_158;
      iconLabelInfo1 = v4->fields.iconLabelInfo1;
      v49 = v53->fields.bonusKind;
      this = v53;
      break;
    default:
      return (char)this;
  }
  this = (SvtEqCombineListViewItem_o *)UserServantEntity__getLevelMax((UserServantEntity_o *)this, 0LL);
  if ( !iconLabelInfo1 )
    goto LABEL_158;
  IconLabelInfo__Set_38140136(iconLabelInfo1, 2, v49, (int32_t)this, 0, 0, 0, 0, 0LL);
LABEL_145:
  LOBYTE(this) = 1;
  return (char)this;
}


bool __fastcall SvtEqCombineListViewItem__SwapChoice(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  bool v2; // w8

  v2 = !this->fields.isSwapChoice;
  this->fields.isSwapChoice ^= 1u;
  return v2;
}


bool __fastcall SvtEqCombineListViewItem__SwapLock(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  bool v2; // w8

  v2 = !this->fields.isSwapLock;
  this->fields.isSwapLock ^= 1u;
  return v2;
}


bool __fastcall SvtEqCombineListViewItem___SetSortValue_b__52_0(
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

  if ( (byte_4A5ED4F & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5ED4F = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (EventCampaignMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventCampaignMaster___);
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
  Master_object = (EventCampaignMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v12, 0LL);
  if ( !entity || !v8 )
    goto LABEL_16;
  if ( EventCampaignMaster__IsEnableServant(v8, (int32_t)Master_object, entity->fields.eventId, 0LL) )
    return 1;
  Master_object = (EventCampaignMaster_o *)this->fields.userSvtEntity;
  if ( !Master_object )
    goto LABEL_16;
  if ( UserServantEntity__getEventUpVal_40205464(
         (UserServantEntity_o *)Master_object,
         -1,
         0,
         0,
         this->fields.setupInfo,
         entity->fields.eventId,
         0,
         0LL) )
  {
    return 1;
  }
  Master_object = (EventCampaignMaster_o *)this->fields.userSvtEntity;
  if ( !Master_object )
LABEL_16:
    sub_1B8880C(Master_object, v6);
  return UserServantEntity__getEventUpVal_40205464(
           (UserServantEntity_o *)Master_object,
           -1,
           0,
           0,
           this->fields.finishSetupInfo,
           entity->fields.eventId,
           1,
           0LL);
}


bool __fastcall SvtEqCombineListViewItem___SetSortValue_b__52_1(
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

  if ( (byte_4A5ED50 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5ED50 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (EventCampaignMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventCampaignMaster___);
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
  Master_object = (EventCampaignMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v12, 0LL);
  if ( !entity || !v8 )
    goto LABEL_16;
  if ( EventCampaignMaster__IsEnableServant(v8, (int32_t)Master_object, entity->fields.eventId, 0LL) )
    return 1;
  Master_object = (EventCampaignMaster_o *)this->fields.userSvtEntity;
  if ( !Master_object )
    goto LABEL_16;
  if ( UserServantEntity__getEventUpVal_40205464(
         (UserServantEntity_o *)Master_object,
         -1,
         0,
         0,
         this->fields.setupInfo,
         entity->fields.eventId,
         0,
         0LL) )
  {
    return 1;
  }
  Master_object = (EventCampaignMaster_o *)this->fields.userSvtEntity;
  if ( !Master_object )
LABEL_16:
    sub_1B8880C(Master_object, v6);
  return UserServantEntity__getEventUpVal_40205464(
           (UserServantEntity_o *)Master_object,
           -1,
           0,
           0,
           this->fields.finishSetupInfo,
           entity->fields.eventId,
           1,
           0LL);
}


int32_t __fastcall SvtEqCombineListViewItem__get_CombineQp(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0

  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_1B8880C(0LL, method);
  return UserServantEntity__getCombineQpSvtEq(userSvtEntity, 0LL);
}


int32_t __fastcall SvtEqCombineListViewItem__get_DragSelectNum(
        SvtEqCombineListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.dragSelectNum;
}


int32_t __fastcall SvtEqCombineListViewItem__get_GetAddTotalExp(
        SvtEqCombineListViewItem_o *this,
        const MethodInfo *method)
{
  struct ServantEntity_o *servantEntity; // x8

  servantEntity = this->fields.servantEntity;
  if ( !servantEntity || (this = (SvtEqCombineListViewItem_o *)this->fields.userSvtEntity) == 0LL )
    sub_1B8880C(this, method);
  return UserServantEntity__getAddTotalExp((UserServantEntity_o *)this, servantEntity->fields.combineMaterialId, 0LL);
}


int32_t __fastcall SvtEqCombineListViewItem__get_GetCurrentLimitCnt(
        SvtEqCombineListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.currentLimitCnt;
}


int32_t __fastcall SvtEqCombineListViewItem__get_GetMaterialExp(
        SvtEqCombineListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.materialExp;
}


int32_t __fastcall SvtEqCombineListViewItem__get_GetMaxLimitCnt(
        SvtEqCombineListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.maxLimitCnt;
}


IconLabelInfo_o *__fastcall SvtEqCombineListViewItem__get_IconInfo1(
        SvtEqCombineListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.iconLabelInfo1;
}


IconLabelInfo_o *__fastcall SvtEqCombineListViewItem__get_IconInfo2(
        SvtEqCombineListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.iconLabelInfo2;
}


bool __fastcall SvtEqCombineListViewItem__get_IsBaseLvMax(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isBaseLvMax;
}


bool __fastcall SvtEqCombineListViewItem__get_IsBaseSvt(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isBaseSvt;
}


bool __fastcall SvtEqCombineListViewItem__get_IsCanNotBaseSelect(
        SvtEqCombineListViewItem_o *this,
        const MethodInfo *method)
{
  if ( this->fields.type )
    return 0;
  if ( this->fields.isLvMax && this->fields.isLimitCntMax )
    return 1;
  return this->fields.isSvtEqMaterial;
}


bool __fastcall SvtEqCombineListViewItem__get_IsCanNotLock(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isCanNotLock;
}


bool __fastcall SvtEqCombineListViewItem__get_IsCanNotSelect(
        SvtEqCombineListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isLock
      || this->fields.isChoice
      || this->fields.isMaxNextLv && !this->fields.isLimitCntTarget
      || this->fields.isBaseLvMax && !this->fields.isLimitCntTarget
      || this->fields.isNotSelection;
}


bool __fastcall SvtEqCombineListViewItem__get_IsChocolateSvtEquip(
        SvtEqCombineListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isChocolateSvtEquip;
}


bool __fastcall SvtEqCombineListViewItem__get_IsChoice(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isChoice;
}


bool __fastcall SvtEqCombineListViewItem__get_IsDispChoice(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  if ( this->fields.isSwapChoice )
    return !this->fields.isChoice;
  else
    return this->fields.isChoice;
}


bool __fastcall SvtEqCombineListViewItem__get_IsDispLock(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  if ( this->fields.isSwapLock )
    return !this->fields.isLock;
  else
    return this->fields.isLock;
}


bool __fastcall SvtEqCombineListViewItem__get_IsDragSelect(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.dragSelectNum >= 0;
}


bool __fastcall SvtEqCombineListViewItem__get_IsEquip(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isEquiped;
}


bool __fastcall SvtEqCombineListViewItem__get_IsFriendShipSvtEq(
        SvtEqCombineListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isFriendShipSvtEq;
}


bool __fastcall SvtEqCombineListViewItem__get_IsLimitCntMax(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isLimitCntMax;
}


bool __fastcall SvtEqCombineListViewItem__get_IsLimitTarget(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isLimitCntTarget;
}


bool __fastcall SvtEqCombineListViewItem__get_IsLock(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isLock;
}


bool __fastcall SvtEqCombineListViewItem__get_IsLvMax(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isLvMax;
}


bool __fastcall SvtEqCombineListViewItem__get_IsMaxNextLv(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isMaxNextLv;
}


bool __fastcall SvtEqCombineListViewItem__get_IsMtSelect(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isMaterialSvt;
}


bool __fastcall SvtEqCombineListViewItem__get_IsNotSelection(
        SvtEqCombineListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isNotSelection;
}


bool __fastcall SvtEqCombineListViewItem__get_IsSelectMax(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isMaxSelect;
}


bool __fastcall SvtEqCombineListViewItem__get_IsSvtEqMaterial(
        SvtEqCombineListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isSvtEqMaterial;
}


bool __fastcall SvtEqCombineListViewItem__get_IsSwapChoice(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isSwapChoice;
}


bool __fastcall SvtEqCombineListViewItem__get_IsSwapLock(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isSwapLock;
}


bool __fastcall SvtEqCombineListViewItem__get_IsUseRecommendSupportEquip(
        SvtEqCombineListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isUseRecommendSupportEquip;
}


bool __fastcall SvtEqCombineListViewItem__get_IsUseSupportEquip(
        SvtEqCombineListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isUseSupportEquip;
}


int32_t __fastcall SvtEqCombineListViewItem__get_ListType(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.type;
}


int32_t __fastcall SvtEqCombineListViewItem__get_PartyIndex(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.partyIndex;
}


int32_t __fastcall SvtEqCombineListViewItem__get_SvtId(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.svtId;
}


int32_t __fastcall SvtEqCombineListViewItem__get_SvtRariry(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.rarity;
}


UserServantEntity_o *__fastcall SvtEqCombineListViewItem__get_UserSvtEntity(
        SvtEqCombineListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.userSvtEntity;
}


int64_t __fastcall SvtEqCombineListViewItem__get_UserSvtId(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  SvtEqCombineListViewItem_o *v2; // x19
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v4; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v6; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+20h] [xbp-40h]

  v2 = this;
  if ( (byte_4A5ED4E & 1) == 0 )
  {
    this = (SvtEqCombineListViewItem_o *)sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4A5ED4E = 1;
  }
  userSvtEntity = v2->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_1B8880C(this, method);
  v4 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v7.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v7.fields.fakeValue = v4;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v6 = v7;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v6, 0LL);
}


void __fastcall SvtEqCombineListViewItem__setUserServantEntity(
        SvtEqCombineListViewItem_o *this,
        UserServantEntity_o *entity,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.userSvtEntity = entity;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.userSvtEntity, (int32_t)entity, (int32_t)method, v3);
}


void __fastcall SvtEqCombineListViewItem__set_DragSelectNum(
        SvtEqCombineListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields.dragSelectNum = value;
}


void __fastcall SvtEqCombineListViewItem__set_IsCanNotLock(
        SvtEqCombineListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields.isCanNotLock = value;
}


void __fastcall SvtEqCombineListViewItem__set_IsDragSelect(
        SvtEqCombineListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  if ( !this )
    sub_1B8880C(0LL, value);
  this->fields.dragSelectNum = value - 1;
}


void __fastcall SvtEqCombineListViewItem__set_IsMaxNextLv(
        SvtEqCombineListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields.isMaxNextLv = value;
}


void __fastcall SvtEqCombineListViewItem__set_IsMtSelect(
        SvtEqCombineListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields.isMaterialSvt = value;
}


void __fastcall SvtEqCombineListViewItem__set_IsSelectMax(
        SvtEqCombineListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields.isMaxSelect = value;
}