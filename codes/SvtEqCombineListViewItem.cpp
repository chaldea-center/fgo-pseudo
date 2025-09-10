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
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  IconLabelInfo_o *v20; // x22
  struct IconLabelInfo_o **p_iconLabelInfo2; // x20
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_userSvtEntity; // x22
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  int64_t Instance; // x0
  int64_t v28; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v29; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v30; // x21
  __int64 v31; // x27
  __int64 v32; // x28
  Il2CppObject *Entity; // x0
  struct ServantEntity_o **p_servantEntity; // x27
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  struct UserServantEntity_o *v37; // x8
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  struct ServantEntity_o *servantEntity; // x8
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  ServantLimitMaster_o *v43; // x21
  int32_t v44; // w28
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v45; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // q1
  UserServantCollectionMaster_o *v47; // x21
  int64_t v48; // x28
  struct UserServantEntity_o *v49; // x8
  int32_t v50; // w0
  UserServantEntity_o *v51; // x8
  bool IsChocolateSvtEquip; // w0
  int32_t v53; // w8
  UserServantEntity_o *v54; // x8
  UserServantEntity_o *v55; // x8
  UserServantEntity_o *v56; // x8
  struct UserServantEntity_o *v57; // x8
  __int128 v58; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v59; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v60; // q0
  int64_t v61; // x0
  __int128 v62; // q1
  __int64 v63; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x29
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v66; // x9
  int32_t *p_offset; // x10
  __int64 v68; // x0
  System_Collections_Generic_IEnumerator_T__c *v69; // x8
  __int64 v70; // x9
  int32_t *v71; // x10
  __int64 v72; // x0
  __int64 v73; // x0
  __int64 v74; // x1
  __int64 v75; // x8
  __int128 v76; // q0
  int64_t v77; // x0
  __int64 v78; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v79; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v80; // q0
  System_Collections_Generic_IEnumerator_T__c *v81; // x8
  __int64 v82; // x9
  int32_t *v83; // x10
  __int64 v84; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v85; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v86; // q0
  UserRecommendSupportMaster_o *v87; // x21
  struct UserServantEntity_o *v88; // x8
  __int128 v89; // q0
  UserServantGrandMaster_o *v90; // x21
  int32_t v91; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v92; // x8
  __int64 v93; // x21
  __int64 v94; // x24
  int32_t v95; // w21
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
  __int64 v112; // x0
  __int64 v113; // x1
  __int64 v114; // x8
  __int128 v115; // q0
  int64_t v116; // x0
  __int64 v117; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v118; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v119; // q0
  System_Collections_Generic_IEnumerator_T__c *v120; // x8
  __int64 v121; // x9
  int32_t *v122; // x10
  __int64 v123; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v124; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v125; // q0
  UserRecommendSupportMaster_o *v126; // x21
  struct UserServantEntity_o *v127; // x8
  __int128 v128; // q0
  UserServantGrandMaster_o *v129; // x21
  UserServantEntity_o *v130; // x8
  UserServantEntity_o *v131; // x8
  bool IsChoice; // w0
  bool isFriendShipSvtEq; // w8
  struct ServantEntity_o *v134; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v135; // x8
  __int64 v136; // x21
  __int64 v137; // x22
  struct UserServantEntity_o *v138; // x8
  __int128 v139; // q0
  int64_t v140; // x8
  struct System_Int32_array *EquipCategoryIdList; // x0
  int32_t v142; // w2
  const MethodInfo *v143; // x3
  UserDeckMaster_o *MasterData_object; // [xsp+10h] [xbp-290h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v146; // [xsp+20h] [xbp-280h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v147; // [xsp+40h] [xbp-260h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v148; // [xsp+60h] [xbp-240h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v149; // [xsp+80h] [xbp-220h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v150; // [xsp+A0h] [xbp-200h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v151; // [xsp+C0h] [xbp-1E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v152; // [xsp+E0h] [xbp-1C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v153; // [xsp+100h] [xbp-1A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v154; // [xsp+120h] [xbp-180h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v155; // [xsp+140h] [xbp-160h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v156; // [xsp+160h] [xbp-140h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v157; // [xsp+180h] [xbp-120h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v158; // [xsp+1A0h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v159; // [xsp+1C0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v160; // [xsp+1E0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v161; // [xsp+200h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v162; // [xsp+220h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v163; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v164; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v165; // 0:x0.16

  if ( (byte_4C2B572 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_UserServantLeaderEntity__GetEnumerator__);
    sub_1C2D490(&Method_DataManager_GetMasterData_CombineMaterialMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserDeckMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserServantLeaderMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_UserRecommendSupportMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_UserServantGrandMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C2D490(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_1C2D490(&Method_DataMasterBase_UserServantLeaderMaster__UserServantLeaderEntity__string__getEntityList__);
    sub_1C2D490(&System_IDisposable_TypeInfo);
    sub_1C2D490(&System_Collections_Generic_IEnumerator_UserServantLeaderEntity__TypeInfo);
    sub_1C2D490(&System_Collections_IEnumerator_TypeInfo);
    sub_1C2D490(&IconLabelInfo_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C2B572 = 1;
  }
  v17 = (IconLabelInfo_o *)sub_1C2D6DC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v17, 0);
  this->fields.iconLabelInfo1 = v17;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.iconLabelInfo1, (int32_t)v17, v18, v19);
  v20 = (IconLabelInfo_o *)sub_1C2D6DC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v20, 0);
  this->fields.iconLabelInfo2 = v20;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.iconLabelInfo2, (int32_t)v20, v22, v23);
  ListViewItem___ctor((ListViewItem_o *)this, 0);
  this->fields.userSvtEntity = userSvtEntity;
  p_userSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userSvtEntity;
  this->fields.type = type;
  this->fields.index = index;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.userSvtEntity, (int32_t)userSvtEntity, v25, v26);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_163;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantMaster___);
  v29 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_163;
  v30 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v32 = *(_QWORD *)&v29[5].fields.currentCryptoKey;
  v31 = *(_QWORD *)&v29[5].fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v163.fields.currentCryptoKey = v32;
  *(_QWORD *)&v163.fields.fakeValue = v31;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v163, 0);
  if ( !v30 )
    goto LABEL_163;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v30,
             Instance,
             (const MethodInfo_3387D98 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)Entity;
  p_servantEntity = &this->fields.servantEntity;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.servantEntity, (int32_t)Entity, v35, v36);
  v37 = this->fields.userSvtEntity;
  if ( !v37 )
    goto LABEL_163;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v37->fields.svtId, 0);
  servantEntity = this->fields.servantEntity;
  this->fields.svtId = Instance;
  if ( !servantEntity )
    goto LABEL_163;
  this->fields.classId = servantEntity->fields.classId;
  this->fields.setupInfo = setupInfo;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v38, v39);
  this->fields.finishSetupInfo = finishSetupInfo;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.finishSetupInfo, (int32_t)finishSetupInfo, v41, v42);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_163;
  MasterData_object = (UserDeckMaster_o *)DataManager__GetMasterData_object_(
                                            (DataManager_o *)Instance,
                                            (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserDeckMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_163;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtEntity )
    goto LABEL_163;
  v43 = (ServantLimitMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868((*p_userSvtEntity)[5], 0);
  if ( !*p_userSvtEntity )
    goto LABEL_163;
  v44 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868((*p_userSvtEntity)[6], 0);
  if ( !v43 )
    goto LABEL_163;
  Instance = (int64_t)ServantLimitMaster__GetEntity(v43, v44, Instance, 0);
  if ( !Instance )
    goto LABEL_163;
  this->fields.rarity = *(_DWORD *)(Instance + 24);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_163;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v45 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_163;
  v46 = v45[4];
  v47 = (UserServantCollectionMaster_o *)Instance;
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v162.fields.currentCryptoKey = v45[3];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v162.fields.fakeValue = v46;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v161 = v162;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v161, 0);
  if ( !*p_userSvtEntity )
    goto LABEL_163;
  v48 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868((*p_userSvtEntity)[5], 0);
  if ( !v47 )
    goto LABEL_163;
  Instance = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(v47, v48, Instance, 0);
  if ( !Instance )
    goto LABEL_163;
  UserServantCollectionEntity__getFriendShipRankInfo(
    (UserServantCollectionEntity_o *)Instance,
    &this->fields.friendship,
    &this->fields.friendshipMax,
    0);
  this->fields.partyIndex = -1;
  Instance = (int64_t)this->fields.userSvtEntity;
  *(_WORD *)&this->fields.isLock = 0;
  this->fields.isChoice = 0;
  *(_WORD *)&this->fields.isBaseSvt = 0;
  this->fields.isLastSelectMaterial = 0;
  this->fields.isMaxSelect = 0;
  this->fields.isSvtEqMaterial = 0;
  if ( !Instance )
    goto LABEL_163;
  Instance = UserServantEntity__getLimitCntMax((UserServantEntity_o *)Instance, 0);
  v49 = this->fields.userSvtEntity;
  this->fields.maxLimitCnt = Instance;
  if ( !v49 )
    goto LABEL_163;
  v50 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v49->fields.limitCount, 0);
  this->fields.dragSelectNum = -1;
  this->fields.currentLimitCnt = v50;
  this->fields.isCanNotLock = 0;
  *(_QWORD *)&this->fields.isBaseLvMax = 0;
  *(_QWORD *)&this->fields.bonusKind = 1;
  Instance = (int64_t)this->fields.userSvtEntity;
  this->fields.isEventUpVal = 0;
  this->fields.isNotSelection = 0;
  if ( !Instance )
    goto LABEL_163;
  Instance = UserServantEntity__IsFriendShipSvtEquip((UserServantEntity_o *)Instance, 0);
  v51 = this->fields.userSvtEntity;
  this->fields.isFriendShipSvtEq = Instance & 1;
  if ( !v51 )
    goto LABEL_163;
  IsChocolateSvtEquip = UserServantEntity__IsChocolateSvtEquip(v51, 0);
  v53 = this->fields.type;
  this->fields.isChocolateSvtEquip = IsChocolateSvtEquip;
  if ( !v53 )
  {
    Instance = (int64_t)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_163;
    Instance = UserServantEntity__isLevelMax((UserServantEntity_o *)Instance, 0);
    v54 = this->fields.userSvtEntity;
    this->fields.isLvMax = Instance & 1;
    if ( !v54 )
      goto LABEL_163;
    Instance = UserServantEntity__isLimitCountMax(v54, 0);
    v55 = this->fields.userSvtEntity;
    this->fields.isLimitCntMax = Instance & 1;
    if ( !v55 )
      goto LABEL_163;
    Instance = UserServantEntity__IsLock(v55, 0);
    v56 = this->fields.userSvtEntity;
    this->fields.isLock = Instance & 1;
    if ( !v56 )
      goto LABEL_163;
    Instance = UserServantEntity__IsChoice(v56, 0);
    v57 = this->fields.userSvtEntity;
    this->fields.isChoice = Instance & 1;
    if ( !v57 )
      goto LABEL_163;
    v58 = *(_OWORD *)&v57->fields.id.fields.fakeValue;
    *(_OWORD *)&v162.fields.currentCryptoKey = *(_OWORD *)&v57->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v162.fields.fakeValue = v58;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v160 = v162;
    v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v160, 0);
    Instance = (int64_t)MasterData_object;
    if ( !MasterData_object )
      goto LABEL_163;
    Instance = UserDeckMaster__IsEquip(MasterData_object, v28, 0);
    this->fields.isEquiped = Instance & 1;
    if ( baseUsrSvtData )
    {
      v59 = *p_userSvtEntity;
      if ( !*p_userSvtEntity )
        goto LABEL_163;
      v60 = v59[2];
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v162.fields.currentCryptoKey = v59[1];
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v162.fields.fakeValue = v60;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v159 = v162;
      v61 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v159, 0);
      v62 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
      *(_OWORD *)&v158.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v158.fields.fakeValue = v62;
      if ( v61 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v158, 0) )
        this->fields.isBaseSvt = 1;
    }
    Instance = (int64_t)*p_servantEntity;
    if ( !*p_servantEntity )
      goto LABEL_163;
    if ( ServantEntity__get_IsServantEquipMaterial((ServantEntity_o *)Instance, 0) )
      this->fields.isSvtEqMaterial = 1;
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_163;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserServantLeaderMaster___);
    if ( !Instance )
      goto LABEL_163;
    Instance = *(_QWORD *)(Instance + 40);
    if ( !Instance )
      goto LABEL_163;
    Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                   (System_Collections_ObjectModel_Collection_T__o *)Instance,
                   (const MethodInfo_33217E0 *)Method_System_Collections_ObjectModel_Collection_UserServantLeaderEntity__GetEnumerator__);
    if ( !Enumerator )
      sub_1C2D6EC(0, v63);
    while ( 1 )
    {
      klass = Enumerator->klass;
      v66 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
      if ( *(_WORD *)&Enumerator->klass->_2.rank )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v66;
          p_offset += 4;
          if ( !v66 )
            goto LABEL_53;
        }
        v68 = (__int64)&klass->vtable[*p_offset];
      }
      else
      {
LABEL_53:
        v68 = sub_1C7DCA8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v68)(
              Enumerator,
              *(_QWORD *)(v68 + 8))
          & 1) == 0 )
        break;
      v69 = Enumerator->klass;
      v70 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
      if ( *(_WORD *)&Enumerator->klass->_2.rank )
      {
        v71 = &v69->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerator_UserServantLeaderEntity__c **)v71 - 1) != System_Collections_Generic_IEnumerator_UserServantLeaderEntity__TypeInfo )
        {
          --v70;
          v71 += 4;
          if ( !v70 )
            goto LABEL_60;
        }
        v72 = (__int64)&v69->vtable[*v71];
      }
      else
      {
LABEL_60:
        v72 = sub_1C7DCA8(Enumerator, System_Collections_Generic_IEnumerator_UserServantLeaderEntity__TypeInfo, 0);
      }
      v73 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v72)(
              Enumerator,
              *(_QWORD *)(v72 + 8));
      if ( !v73 )
        sub_1C2D6EC(0, v74);
      v75 = *(_QWORD *)(v73 + 32);
      if ( v75 )
      {
        v76 = *(_OWORD *)(v75 + 40);
        *(_OWORD *)&v162.fields.currentCryptoKey = *(_OWORD *)(v75 + 24);
        *(_OWORD *)&v162.fields.fakeValue = v76;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v157 = v162;
        v77 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v157, 0);
        v79 = *p_userSvtEntity;
        if ( !*p_userSvtEntity )
          sub_1C2D6EC(v77, v78);
        v80 = v79[2];
        *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v156.fields.currentCryptoKey = v79[1];
        *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v156.fields.fakeValue = v80;
        if ( v77 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v156, 0) )
        {
          this->fields.isUseSupportEquip = 1;
          break;
        }
      }
    }
    v81 = Enumerator->klass;
    v82 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v83 = &v81->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v83 - 1) != System_IDisposable_TypeInfo )
      {
        --v82;
        v83 += 4;
        if ( !v82 )
          goto LABEL_73;
      }
      v84 = (__int64)&v81->vtable[*v83];
    }
    else
    {
LABEL_73:
      v84 = sub_1C7DCA8(Enumerator, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v84)(
      Enumerator,
      *(_QWORD *)(v84 + 8));
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Instance = (int64_t)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserRecommendSupportMaster___);
    v85 = *p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_163;
    v86 = v85[2];
    v87 = (UserRecommendSupportMaster_o *)Instance;
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v162.fields.currentCryptoKey = v85[1];
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v162.fields.fakeValue = v86;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v155 = v162;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v155, 0);
    if ( !v87 )
      goto LABEL_163;
    this->fields.isUseRecommendSupportEquip = UserRecommendSupportMaster__IsSettingServant(v87, Instance, 1, 0);
    Instance = (int64_t)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserServantGrandMaster___);
    v88 = this->fields.userSvtEntity;
    if ( !v88 )
      goto LABEL_163;
    v89 = *(_OWORD *)&v88->fields.id.fields.fakeValue;
    v90 = (UserServantGrandMaster_o *)Instance;
    *(_OWORD *)&v154.fields.currentCryptoKey = *(_OWORD *)&v88->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v154.fields.fakeValue = v89;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v154, 0);
    if ( !v90 )
      goto LABEL_163;
    this->fields.isUseGrandServantEquip = UserServantGrandMaster__IsSettingEquip(v90, Instance, 0);
  }
  if ( type != 1 )
    goto LABEL_149;
  this->fields.isMaterialSvt = isMtSvt;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_163;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_CombineMaterialMaster___);
  if ( !*p_servantEntity || !*p_userSvtEntity || !Instance )
    goto LABEL_163;
  Instance = (int64_t)CombineMaterialMaster__GetEntity(
                        (CombineMaterialMaster_o *)Instance,
                        (*p_servantEntity)->fields.combineMaterialId,
                        (*p_userSvtEntity)[16].fields.currentCryptoKey,
                        0);
  v91 = Instance ? *(_DWORD *)(Instance + 24) : 0;
  this->fields.materialExp = v91;
  if ( baseUsrSvtData )
  {
    v92 = *p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_163;
    v94 = *(_QWORD *)&v92[5].fields.currentCryptoKey;
    v93 = *(_QWORD *)&v92[5].fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v164.fields.currentCryptoKey = v94;
    *(_QWORD *)&v164.fields.fakeValue = v93;
    v95 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v164, 0);
    if ( v95 == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(baseUsrSvtData->fields.svtId, 0) )
    {
      Instance = UserServantEntity__isLimitCountMax(baseUsrSvtData, 0);
      v96 = this->fields.userSvtEntity;
      this->fields.isLimitCntMax = Instance & 1;
      this->fields.isLimitCntTarget = (Instance & 1) == 0;
      if ( !v96 )
        goto LABEL_163;
      v97 = *(_OWORD *)&v96->fields.id.fields.fakeValue;
      *(_OWORD *)&v162.fields.currentCryptoKey = *(_OWORD *)&v96->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v162.fields.fakeValue = v97;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v153 = v162;
      v98 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v153, 0);
      v99 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
      *(_OWORD *)&v152.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v152.fields.fakeValue = v99;
      if ( v98 != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v152, 0) )
        this->fields.isSameSvt = 1;
    }
    Instance = UserServantEntity__isLevelMax(baseUsrSvtData, 0);
    this->fields.isBaseLvMax = Instance & 1;
  }
  else
  {
    this->fields.isLimitCntTarget = 0;
  }
  v100 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_163;
  v101 = v100[2];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v162.fields.currentCryptoKey = v100[1];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v162.fields.fakeValue = v101;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v151 = v162;
  v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v151, 0);
  Instance = (int64_t)MasterData_object;
  if ( !MasterData_object )
    goto LABEL_163;
  this->fields.isEquiped = UserDeckMaster__IsEquip_42779500(MasterData_object, v28, &this->fields.partyIndex, 0);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_163;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserServantLeaderMaster___);
  if ( !Instance )
    goto LABEL_163;
  Instance = *(_QWORD *)(Instance + 40);
  if ( !Instance )
    goto LABEL_163;
  v103 = System_Collections_ObjectModel_Collection_object___GetEnumerator(
           (System_Collections_ObjectModel_Collection_T__o *)Instance,
           (const MethodInfo_33217E0 *)Method_System_Collections_ObjectModel_Collection_UserServantLeaderEntity__GetEnumerator__);
  if ( !v103 )
    sub_1C2D6EC(0, v102);
  while ( 1 )
  {
    v104 = v103->klass;
    v105 = *(unsigned __int16 *)&v103->klass->_2.rank;
    if ( *(_WORD *)&v103->klass->_2.rank )
    {
      v106 = &v104->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)v106 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v105;
        v106 += 4;
        if ( !v105 )
          goto LABEL_116;
      }
      v107 = (__int64)&v104->vtable[*v106];
    }
    else
    {
LABEL_116:
      v107 = sub_1C7DCA8(v103, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v107)(
            v103,
            *(_QWORD *)(v107 + 8))
        & 1) == 0 )
      break;
    v108 = v103->klass;
    v109 = *(unsigned __int16 *)&v103->klass->_2.rank;
    if ( *(_WORD *)&v103->klass->_2.rank )
    {
      v110 = &v108->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_UserServantLeaderEntity__c **)v110 - 1) != System_Collections_Generic_IEnumerator_UserServantLeaderEntity__TypeInfo )
      {
        --v109;
        v110 += 4;
        if ( !v109 )
          goto LABEL_123;
      }
      v111 = (__int64)&v108->vtable[*v110];
    }
    else
    {
LABEL_123:
      v111 = sub_1C7DCA8(v103, System_Collections_Generic_IEnumerator_UserServantLeaderEntity__TypeInfo, 0);
    }
    v112 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v111)(
             v103,
             *(_QWORD *)(v111 + 8));
    if ( !v112 )
      sub_1C2D6EC(0, v113);
    v114 = *(_QWORD *)(v112 + 32);
    if ( v114 )
    {
      v115 = *(_OWORD *)(v114 + 40);
      *(_OWORD *)&v162.fields.currentCryptoKey = *(_OWORD *)(v114 + 24);
      *(_OWORD *)&v162.fields.fakeValue = v115;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v150 = v162;
      v116 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v150, 0);
      v118 = *p_userSvtEntity;
      if ( !*p_userSvtEntity )
        sub_1C2D6EC(v116, v117);
      v119 = v118[2];
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v149.fields.currentCryptoKey = v118[1];
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v149.fields.fakeValue = v119;
      if ( v116 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v149, 0) )
      {
        this->fields.isUseSupportEquip = 1;
        break;
      }
    }
  }
  v120 = v103->klass;
  v121 = *(unsigned __int16 *)&v103->klass->_2.rank;
  if ( *(_WORD *)&v103->klass->_2.rank )
  {
    v122 = &v120->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v122 - 1) != System_IDisposable_TypeInfo )
    {
      --v121;
      v122 += 4;
      if ( !v121 )
        goto LABEL_136;
    }
    v123 = (__int64)&v120->vtable[*v122];
  }
  else
  {
LABEL_136:
    v123 = sub_1C7DCA8(v103, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v123)(v103, *(_QWORD *)(v123 + 8));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (int64_t)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserRecommendSupportMaster___);
  v124 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_163;
  v125 = v124[2];
  v126 = (UserRecommendSupportMaster_o *)Instance;
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v162.fields.currentCryptoKey = v124[1];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v162.fields.fakeValue = v125;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v148 = v162;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v148, 0);
  if ( !v126 )
    goto LABEL_163;
  this->fields.isUseRecommendSupportEquip = UserRecommendSupportMaster__IsSettingServant(v126, Instance, 1, 0);
  Instance = (int64_t)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserServantGrandMaster___);
  v127 = this->fields.userSvtEntity;
  if ( !v127 )
    goto LABEL_163;
  v128 = *(_OWORD *)&v127->fields.id.fields.fakeValue;
  v129 = (UserServantGrandMaster_o *)Instance;
  *(_OWORD *)&v147.fields.currentCryptoKey = *(_OWORD *)&v127->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v147.fields.fakeValue = v128;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v147, 0);
  if ( !v129
    || (Instance = UserServantGrandMaster__IsSettingEquip(v129, Instance, 0),
        v130 = this->fields.userSvtEntity,
        this->fields.isUseGrandServantEquip = Instance & 1,
        !v130)
    || (Instance = UserServantEntity__IsLock(v130, 0),
        v131 = this->fields.userSvtEntity,
        this->fields.isLock = Instance & 1,
        !v131) )
  {
LABEL_163:
    sub_1C2D6EC(Instance, v28);
  }
  IsChoice = UserServantEntity__IsChoice(v131, 0);
  isFriendShipSvtEq = this->fields.isFriendShipSvtEq;
  this->fields.isChoice = IsChoice;
  this->fields.isFavorite = isFavorite;
  this->fields.isNotSelection = isFriendShipSvtEq;
LABEL_149:
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_163;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Instance )
    goto LABEL_163;
  Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                        this->fields.classId,
                        (const MethodInfo_3387D98 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_163;
  v134 = this->fields.servantEntity;
  this->fields.sortValue1B = *(int *)(Instance + 52);
  if ( !v134 )
    goto LABEL_163;
  v135 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_163;
  this->fields.sortValue2 = ((__int64)v134->fields.collectionNo << 16)
                          | ((unsigned __int64)(unsigned int)this->fields.rarity << 48)
                          | v135[16].fields.currentCryptoKey;
  v137 = *(_QWORD *)&v135[5].fields.currentCryptoKey;
  v136 = *(_QWORD *)&v135[5].fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v165.fields.currentCryptoKey = v137;
  *(_QWORD *)&v165.fields.fakeValue = v136;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v165, 0);
  v138 = this->fields.userSvtEntity;
  this->fields.sortValue2B = (int)Instance;
  if ( !v138 )
    goto LABEL_163;
  v139 = *(_OWORD *)&v138->fields.id.fields.fakeValue;
  *(_OWORD *)&v162.fields.currentCryptoKey = *(_OWORD *)&v138->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v162.fields.fakeValue = v139;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v146 = v162;
  v140 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v146, 0);
  Instance = (int64_t)this->fields.userSvtEntity;
  this->fields.sortValueLast = v140;
  this->fields.amountSortValue = -1;
  if ( !Instance )
    goto LABEL_163;
  EquipCategoryIdList = UserServantEntity__GetEquipCategoryIdList((UserServantEntity_o *)Instance, 1, 0);
  this->fields.categoryIdList = EquipCategoryIdList;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.categoryIdList, (int32_t)EquipCategoryIdList, v142, v143);
  Instance = (int64_t)this->fields.iconLabelInfo1;
  if ( !Instance )
    goto LABEL_163;
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0);
  Instance = (int64_t)*p_iconLabelInfo2;
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
  __int64 v16; // x2
  _BOOL4 v17; // w8

  if ( (byte_4C2B574 & 1) == 0 )
  {
    sub_1C2D490(&FilterKindList_TypeInfo);
    sub_1C2D490(&ListViewSort_FilterKind___TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    byte_4C2B574 = 1;
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
                           (const MethodInfo_3770E44 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                          (const MethodInfo_3770E44 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                           (const MethodInfo_3770E44 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                             (const MethodInfo_3770E44 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
      RarityFilterKindList = (System_Int32Enum_array *)sub_1C2D538(ListViewSort_FilterKind___TypeInfo, 1);
      if ( RarityFilterKindList )
      {
        if ( !LODWORD(RarityFilterKindList->max_length) )
          sub_1C2D6F4(RarityFilterKindList, RarityFilterKindList, v16);
        RarityFilterKindList->m_Items[0] = 39;
        if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)RarityFilterKindList, 0)
          || !ListViewSort__GetFilter(sort, 39, 0) )
        {
          return 1;
        }
        v17 = !this->fields.isChoice;
        if ( !this->fields.isSwapChoice )
          return this->fields.isChoice;
        return v17;
      }
LABEL_36:
      sub_1C2D6EC(RarityFilterKindList, sort);
    }
  }
  return result;
}


void SvtEqCombineListViewItem__ModifyChoiceItem(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0

  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_1C2D6EC(0, method);
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
    sub_1C2D6EC(0, method);
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
  bool EventUpVal_42935344; // w0
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
  if ( (byte_4C2B573 & 1) == 0 )
  {
    sub_1C2D490(&Method_BasicHelper_Any_EventGroupEntity___);
    sub_1C2D490(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_EventGroupMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&System_Func_EventGroupEntity__bool__TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventGroupEntity__get_Count__);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C2D490(&Method_SvtEqCombineListViewItem__SetSortValue_b__53_0__);
    sub_1C2D490(&Method_SvtEqCombineListViewItem__SetSortValue_b__53_1__);
    this = (SvtEqCombineListViewItem_o *)sub_1C2D490(&SvtEqCombineListViewManager_TypeInfo);
    byte_4C2B573 = 1;
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
        this = (SvtEqCombineListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_EventGroupMaster___);
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
              v14 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_EventGroupEntity__bool__TypeInfo);
              v15 = &Method_SvtEqCombineListViewItem__SetSortValue_b__53_0__;
LABEL_62:
              v20 = (System_Func_T__bool__o *)v14;
              System_Func_object__bool____ctor(v14, (Il2CppObject *)v4, *v15, 0);
              this = (SvtEqCombineListViewItem_o *)BasicHelper__Any_object_(
                                                     (System_Collections_Generic_List_T__o *)EntitiesByGroupId,
                                                     v20,
                                                     (const MethodInfo_30B7CF0 *)Method_BasicHelper_Any_EventGroupEntity___);
              v4->fields.isEventUpVal = (unsigned __int8)this & 1;
              goto LABEL_63;
            }
          }
          goto LABEL_63;
        }
LABEL_159:
        sub_1C2D6EC(this, sort);
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
    this = (SvtEqCombineListViewItem_o *)UserServantEntity__getEventUpVal_42935344(
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
    this = (SvtEqCombineListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_EventCampaignMaster___);
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
    this = (SvtEqCombineListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v56, 0);
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
  this = (SvtEqCombineListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_EventGroupMaster___);
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
      v14 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_EventGroupEntity__bool__TypeInfo);
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
          EventUpVal_42935344 = UserServantEntity__getEventUpVal_42935344(
                                  (UserServantEntity_o *)this,
                                  -1,
                                  0,
                                  0,
                                  v23,
                                  v25,
                                  1,
                                  0);
          isEventUpVal = EventUpVal_42935344;
          v4->fields.isEventUpVal = EventUpVal_42935344;
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
      *(_OWORD *)p_sortValue0 = xmmword_C0AC60;
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
      this = (SvtEqCombineListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v54, 0);
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
      IconLabelInfo__Set_40696284(v41, 2, v40, (int32_t)this, 0, 0, 0, 0, 0, 0);
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
      IconLabelInfo__Set_40696284(v43, v45, v42, v44, 0, 0, 0, 0, 0, 0);
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
      IconLabelInfo__Set_40696284((IconLabelInfo_o *)this, 7, cost, 0, 0, 0, 0, 0, 0, 0);
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
  IconLabelInfo__Set_40696284(iconLabelInfo1, 2, lv, (int32_t)this, 0, 0, 0, 0, 0, 0);
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

  if ( (byte_4C2B576 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C2B576 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (EventCampaignMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_EventCampaignMaster___);
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
  Master_object = (EventCampaignMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v12, 0);
  if ( !entity || !v8 )
    goto LABEL_16;
  if ( EventCampaignMaster__IsEnableServant(v8, (int32_t)Master_object, entity->fields.eventId, 0) )
    return 1;
  Master_object = (EventCampaignMaster_o *)this->fields.userSvtEntity;
  if ( !Master_object )
    goto LABEL_16;
  if ( UserServantEntity__getEventUpVal_42935344(
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
    sub_1C2D6EC(Master_object, v6);
  return UserServantEntity__getEventUpVal_42935344(
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

  if ( (byte_4C2B577 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C2B577 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (EventCampaignMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_EventCampaignMaster___);
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
  Master_object = (EventCampaignMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v12, 0);
  if ( !entity || !v8 )
    goto LABEL_16;
  if ( EventCampaignMaster__IsEnableServant(v8, (int32_t)Master_object, entity->fields.eventId, 0) )
    return 1;
  Master_object = (EventCampaignMaster_o *)this->fields.userSvtEntity;
  if ( !Master_object )
    goto LABEL_16;
  if ( UserServantEntity__getEventUpVal_42935344(
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
    sub_1C2D6EC(Master_object, v6);
  return UserServantEntity__getEventUpVal_42935344(
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
    sub_1C2D6EC(0, method);
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
    sub_1C2D6EC(this, method);
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
  if ( (byte_4C2B575 & 1) == 0 )
  {
    this = (SvtEqCombineListViewItem_o *)sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C2B575 = 1;
  }
  userSvtEntity = v2->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_1C2D6EC(this, method);
  v4 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v7.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v7.fields.fakeValue = v4;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v6 = v7;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v6, 0);
}


void SvtEqCombineListViewItem__setUserServantEntity(
        SvtEqCombineListViewItem_o *this,
        UserServantEntity_o *entity,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.userSvtEntity = entity;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.userSvtEntity, (int32_t)entity, (int32_t)method, v3);
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


void SvtEqCombineListViewItem__set_IsDragSelect(SvtEqCombineListViewItem_o *this, bool value, const MethodInfo *method)
{
  if ( !this )
    sub_1C2D6EC(0, value);
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