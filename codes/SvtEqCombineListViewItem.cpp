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
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  IconLabelInfo_o *v25; // x22
  struct IconLabelInfo_o **p_iconLabelInfo2; // x21
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_userSvtEntity; // x22
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  int64_t Instance; // x0
  int64_t v41; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v42; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v43; // x20
  __int64 v44; // x27
  __int64 v45; // x28
  Il2CppObject *Entity; // x0
  struct ServantEntity_o **p_servantEntity; // x27
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  struct UserServantEntity_o *v54; // x8
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  struct ServantEntity_o *servantEntity; // x8
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  ServantLimitMaster_o *v68; // x20
  int32_t v69; // w28
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v70; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v71; // q1
  UserServantCollectionMaster_o *v72; // x20
  int64_t v73; // x28
  struct UserServantEntity_o *v74; // x8
  int32_t v75; // w0
  UserServantEntity_o *v76; // x8
  bool IsChocolateSvtEquip; // w0
  int32_t v78; // w8
  UserServantEntity_o *v79; // x8
  UserServantEntity_o *v80; // x8
  UserServantEntity_o *v81; // x8
  struct UserServantEntity_o *v82; // x8
  __int128 v83; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v84; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v85; // q0
  int64_t v86; // x0
  __int128 v87; // q1
  __int64 v88; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x29
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v91; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v94; // x8
  __int64 v95; // x9
  int32_t *v96; // x10
  __int64 v97; // x0
  __int64 v98; // x0
  __int64 v99; // x1
  __int64 v100; // x8
  __int128 v101; // q0
  int64_t v102; // x0
  __int64 v103; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v104; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v105; // q0
  System_Collections_Generic_IEnumerator_T__c *v106; // x8
  __int64 v107; // x9
  int32_t *v108; // x10
  __int64 v109; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v110; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v111; // q0
  UserRecommendSupportMaster_o *v112; // x20
  int32_t v113; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v114; // x8
  __int64 v115; // x20
  __int64 v116; // x24
  int32_t v117; // w20
  struct UserServantEntity_o *v118; // x8
  __int128 v119; // q0
  int64_t v120; // x0
  __int128 v121; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v122; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v123; // q0
  __int64 v124; // x1
  System_Collections_Generic_IEnumerator_T__o *v125; // x23
  System_Collections_Generic_IEnumerator_T__c *v126; // x8
  __int64 v127; // x9
  int32_t *v128; // x10
  __int64 v129; // x0
  System_Collections_Generic_IEnumerator_T__c *v130; // x8
  __int64 v131; // x9
  int32_t *v132; // x10
  __int64 v133; // x0
  __int64 v134; // x0
  __int64 v135; // x1
  __int64 v136; // x8
  __int128 v137; // q0
  int64_t v138; // x0
  __int64 v139; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v140; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v141; // q0
  System_Collections_Generic_IEnumerator_T__c *v142; // x8
  __int64 v143; // x9
  int32_t *v144; // x10
  __int64 v145; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v146; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v147; // q0
  UserRecommendSupportMaster_o *v148; // x20
  UserServantEntity_o *v149; // x8
  UserServantEntity_o *v150; // x8
  bool IsChoice; // w0
  bool isFriendShipSvtEq; // w8
  struct ServantEntity_o *v153; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v154; // x8
  __int64 v155; // x20
  __int64 v156; // x22
  int32_t v157; // w8
  struct System_Int32_array *EquipCategoryIdList; // x0
  int64_t v159; // x2
  int32_t v160; // w3
  System_String_o *v161; // x4
  BattleSetupInfo_o *v162; // x5
  FollowerInfo_o *v163; // x6
  PartyListViewItem_o *v164; // x7
  bool v165; // [xsp+18h] [xbp-238h]
  UserDeckMaster_o *MasterData_object; // [xsp+20h] [xbp-230h]
  int32_t v167; // [xsp+2Ch] [xbp-224h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v168; // [xsp+30h] [xbp-220h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v169; // [xsp+50h] [xbp-200h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v170; // [xsp+70h] [xbp-1E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v171; // [xsp+90h] [xbp-1C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v172; // [xsp+B0h] [xbp-1A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v173; // [xsp+D0h] [xbp-180h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v174; // [xsp+F0h] [xbp-160h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v175; // [xsp+110h] [xbp-140h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v176; // [xsp+130h] [xbp-120h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v177; // [xsp+150h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v178; // [xsp+170h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v179; // [xsp+190h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v180; // [xsp+1B0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v181; // [xsp+1D0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v182; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v183; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v184; // 0:x0.16

  if ( (byte_4BE0307 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_UserServantLeaderEntity__GetEnumerator__);
    sub_1C21E38(&Method_DataManager_GetMasterData_CombineMaterialMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_UserDeckMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_UserServantLeaderMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_UserRecommendSupportMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C21E38(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_1C21E38(&Method_DataMasterBase_UserServantLeaderMaster__UserServantLeaderEntity__string__getEntityList__);
    sub_1C21E38(&System_IDisposable_TypeInfo);
    sub_1C21E38(&System_Collections_Generic_IEnumerator_UserServantLeaderEntity__TypeInfo);
    sub_1C21E38(&System_Collections_IEnumerator_TypeInfo);
    sub_1C21E38(&IconLabelInfo_TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BE0307 = 1;
  }
  v18 = (IconLabelInfo_o *)sub_1C22084(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v18, 0LL);
  this->fields.iconLabelInfo1 = v18;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.iconLabelInfo1, (int64_t)v18, v19, v20, v21, v22, v23, v24);
  v25 = (IconLabelInfo_o *)sub_1C22084(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v25, 0LL);
  this->fields.iconLabelInfo2 = v25;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.iconLabelInfo2, (int64_t)v25, v27, v28, v29, v30, v31, v32);
  ListViewItem___ctor((ListViewItem_o *)this, 0LL);
  this->fields.userSvtEntity = userSvtEntity;
  p_userSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userSvtEntity;
  this->fields.type = type;
  this->fields.index = index;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.userSvtEntity,
    (int64_t)userSvtEntity,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_156;
  v167 = type;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantMaster___);
  v42 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_156;
  v43 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v45 = *(_QWORD *)&v42[5].fields.currentCryptoKey;
  v44 = *(_QWORD *)&v42[5].fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v182.fields.currentCryptoKey = v45;
  *(_QWORD *)&v182.fields.fakeValue = v44;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v182, 0LL);
  if ( !v43 )
    goto LABEL_156;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v43,
             Instance,
             (const MethodInfo_325BDC8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)Entity;
  p_servantEntity = &this->fields.servantEntity;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.servantEntity, (int64_t)Entity, v48, v49, v50, v51, v52, v53);
  v54 = this->fields.userSvtEntity;
  if ( !v54 )
    goto LABEL_156;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v54->fields.svtId, 0LL);
  servantEntity = this->fields.servantEntity;
  this->fields.svtId = Instance;
  if ( !servantEntity )
    goto LABEL_156;
  this->fields.classId = servantEntity->fields.classId;
  this->fields.setupInfo = setupInfo;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.setupInfo, (int64_t)setupInfo, v55, v56, v57, v58, v59, v60);
  this->fields.finishSetupInfo = finishSetupInfo;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.finishSetupInfo,
    (int64_t)finishSetupInfo,
    v62,
    v63,
    v64,
    v65,
    v66,
    v67);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_156;
  MasterData_object = (UserDeckMaster_o *)DataManager__GetMasterData_object_(
                                            (DataManager_o *)Instance,
                                            (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserDeckMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_156;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtEntity )
    goto LABEL_156;
  v68 = (ServantLimitMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364((*p_userSvtEntity)[5], 0LL);
  if ( !*p_userSvtEntity )
    goto LABEL_156;
  v69 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364((*p_userSvtEntity)[6], 0LL);
  if ( !v68 )
    goto LABEL_156;
  Instance = (int64_t)ServantLimitMaster__GetEntity(v68, v69, Instance, 0LL);
  if ( !Instance )
    goto LABEL_156;
  this->fields.rarity = *(_DWORD *)(Instance + 24);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_156;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v70 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_156;
  v71 = v70[4];
  v72 = (UserServantCollectionMaster_o *)Instance;
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v181.fields.currentCryptoKey = v70[3];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v181.fields.fakeValue = v71;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v180 = v181;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47624888(&v180, 0LL);
  if ( !*p_userSvtEntity )
    goto LABEL_156;
  v73 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364((*p_userSvtEntity)[5], 0LL);
  if ( !v72 )
    goto LABEL_156;
  Instance = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(v72, v73, Instance, 0LL);
  if ( !Instance )
    goto LABEL_156;
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
    goto LABEL_156;
  v165 = isFavorite;
  Instance = UserServantEntity__getLimitCntMax((UserServantEntity_o *)Instance, 0LL);
  v74 = this->fields.userSvtEntity;
  this->fields.maxLimitCnt = Instance;
  if ( !v74 )
    goto LABEL_156;
  v75 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v74->fields.limitCount, 0LL);
  *(_DWORD *)&this->fields.isBaseLvMax = 0;
  this->fields.currentLimitCnt = v75;
  Instance = (int64_t)this->fields.userSvtEntity;
  this->fields.isCanNotLock = 0;
  *(_QWORD *)&this->fields.isUseSupportEquip = 0xFFFFFFFF00000000LL;
  *(_QWORD *)&this->fields.bonusKind = 1LL;
  this->fields.isEventUpVal = 0;
  this->fields.isNotSelection = 0;
  if ( !Instance )
    goto LABEL_156;
  Instance = UserServantEntity__IsFriendShipSvtEquip((UserServantEntity_o *)Instance, 0LL);
  v76 = this->fields.userSvtEntity;
  this->fields.isFriendShipSvtEq = Instance & 1;
  if ( !v76 )
    goto LABEL_156;
  IsChocolateSvtEquip = UserServantEntity__IsChocolateSvtEquip(v76, 0LL);
  v78 = this->fields.type;
  this->fields.isChocolateSvtEquip = IsChocolateSvtEquip;
  if ( !v78 )
  {
    Instance = (int64_t)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_156;
    Instance = UserServantEntity__isLevelMax((UserServantEntity_o *)Instance, 0LL);
    v79 = this->fields.userSvtEntity;
    this->fields.isLvMax = Instance & 1;
    if ( !v79 )
      goto LABEL_156;
    Instance = UserServantEntity__isLimitCountMax(v79, 0LL);
    v80 = this->fields.userSvtEntity;
    this->fields.isLimitCntMax = Instance & 1;
    if ( !v80 )
      goto LABEL_156;
    Instance = UserServantEntity__IsLock(v80, 0LL);
    v81 = this->fields.userSvtEntity;
    this->fields.isLock = Instance & 1;
    if ( !v81 )
      goto LABEL_156;
    Instance = UserServantEntity__IsChoice(v81, 0LL);
    v82 = this->fields.userSvtEntity;
    this->fields.isChoice = Instance & 1;
    if ( !v82 )
      goto LABEL_156;
    v83 = *(_OWORD *)&v82->fields.id.fields.fakeValue;
    *(_OWORD *)&v181.fields.currentCryptoKey = *(_OWORD *)&v82->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v181.fields.fakeValue = v83;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v179 = v181;
    v41 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47624888(&v179, 0LL);
    Instance = (int64_t)MasterData_object;
    if ( !MasterData_object )
      goto LABEL_156;
    Instance = UserDeckMaster__IsEquip(MasterData_object, v41, 0LL);
    this->fields.isEquiped = Instance & 1;
    if ( baseUsrSvtData )
    {
      v84 = *p_userSvtEntity;
      if ( !*p_userSvtEntity )
        goto LABEL_156;
      v85 = v84[2];
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v181.fields.currentCryptoKey = v84[1];
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v181.fields.fakeValue = v85;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v178 = v181;
      v86 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47624888(&v178, 0LL);
      v87 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
      *(_OWORD *)&v177.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v177.fields.fakeValue = v87;
      if ( v86 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47624888(&v177, 0LL) )
        this->fields.isBaseSvt = 1;
    }
    Instance = (int64_t)*p_servantEntity;
    if ( !*p_servantEntity )
      goto LABEL_156;
    if ( ServantEntity__get_IsServantEquipMaterial((ServantEntity_o *)Instance, 0LL) )
      this->fields.isSvtEqMaterial = 1;
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_156;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserServantLeaderMaster___);
    if ( !Instance )
      goto LABEL_156;
    Instance = *(_QWORD *)(Instance + 40);
    if ( !Instance )
      goto LABEL_156;
    Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                   (System_Collections_ObjectModel_Collection_T__o *)Instance,
                   (const MethodInfo_31F66A4 *)Method_System_Collections_ObjectModel_Collection_UserServantLeaderEntity__GetEnumerator__);
    if ( !Enumerator )
      sub_1C22094(0LL, v88);
    while ( 1 )
    {
      klass = Enumerator->klass;
      v91 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v91;
          p_offset += 4;
          if ( !v91 )
            goto LABEL_53;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_53:
        p_method = sub_1C73E18(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
              Enumerator,
              *(_QWORD *)(p_method + 8)) & 1) == 0 )
        break;
      v94 = Enumerator->klass;
      v95 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
      {
        v96 = &v94->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerator_UserServantLeaderEntity__c **)v96 - 1) != System_Collections_Generic_IEnumerator_UserServantLeaderEntity__TypeInfo )
        {
          --v95;
          v96 += 4;
          if ( !v95 )
            goto LABEL_60;
        }
        v97 = (__int64)&v94->vtable[*v96].method;
      }
      else
      {
LABEL_60:
        v97 = sub_1C73E18(Enumerator, System_Collections_Generic_IEnumerator_UserServantLeaderEntity__TypeInfo, 0LL);
      }
      v98 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v97)(
              Enumerator,
              *(_QWORD *)(v97 + 8));
      if ( !v98 )
        sub_1C22094(0LL, v99);
      v100 = *(_QWORD *)(v98 + 32);
      if ( v100 )
      {
        v101 = *(_OWORD *)(v100 + 40);
        *(_OWORD *)&v181.fields.currentCryptoKey = *(_OWORD *)(v100 + 24);
        *(_OWORD *)&v181.fields.fakeValue = v101;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v176 = v181;
        v102 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47624888(&v176, 0LL);
        v104 = *p_userSvtEntity;
        if ( !*p_userSvtEntity )
          sub_1C22094(v102, v103);
        v105 = v104[2];
        *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v175.fields.currentCryptoKey = v104[1];
        *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v175.fields.fakeValue = v105;
        if ( v102 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47624888(&v175, 0LL) )
        {
          this->fields.isUseSupportEquip = 1;
          break;
        }
      }
    }
    v106 = Enumerator->klass;
    v107 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v108 = &v106->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v108 - 1) != System_IDisposable_TypeInfo )
      {
        --v107;
        v108 += 4;
        if ( !v107 )
          goto LABEL_73;
      }
      v109 = (__int64)&v106->vtable[*v108].method;
    }
    else
    {
LABEL_73:
      v109 = sub_1C73E18(Enumerator, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v109)(
      Enumerator,
      *(_QWORD *)(v109 + 8));
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Instance = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_UserRecommendSupportMaster___);
    v110 = *p_userSvtEntity;
    p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
    if ( !*p_userSvtEntity )
      goto LABEL_156;
    v111 = v110[2];
    v112 = (UserRecommendSupportMaster_o *)Instance;
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v181.fields.currentCryptoKey = v110[1];
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v181.fields.fakeValue = v111;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v174 = v181;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47624888(&v174, 0LL);
    if ( !v112 )
      goto LABEL_156;
    this->fields.isUseRecommendSupportEquip = UserRecommendSupportMaster__IsSettingServant(v112, Instance, 1, 0LL);
  }
  if ( v167 != 1 )
    goto LABEL_145;
  this->fields.isMaterialSvt = isMtSvt;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_156;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_CombineMaterialMaster___);
  if ( !*p_servantEntity || !*p_userSvtEntity || !Instance )
    goto LABEL_156;
  Instance = (int64_t)CombineMaterialMaster__GetEntity(
                        (CombineMaterialMaster_o *)Instance,
                        (*p_servantEntity)->fields.combineMaterialId,
                        (*p_userSvtEntity)[16].fields.currentCryptoKey,
                        0LL);
  v113 = Instance ? *(_DWORD *)(Instance + 24) : 0;
  this->fields.materialExp = v113;
  if ( baseUsrSvtData )
  {
    v114 = *p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_156;
    v116 = *(_QWORD *)&v114[5].fields.currentCryptoKey;
    v115 = *(_QWORD *)&v114[5].fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v183.fields.currentCryptoKey = v116;
    *(_QWORD *)&v183.fields.fakeValue = v115;
    v117 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v183, 0LL);
    if ( v117 == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(baseUsrSvtData->fields.svtId, 0LL) )
    {
      Instance = UserServantEntity__isLimitCountMax(baseUsrSvtData, 0LL);
      v118 = this->fields.userSvtEntity;
      this->fields.isLimitCntMax = Instance & 1;
      this->fields.isLimitCntTarget = (Instance & 1) == 0;
      if ( !v118 )
        goto LABEL_156;
      v119 = *(_OWORD *)&v118->fields.id.fields.fakeValue;
      *(_OWORD *)&v181.fields.currentCryptoKey = *(_OWORD *)&v118->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v181.fields.fakeValue = v119;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v173 = v181;
      v120 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47624888(&v173, 0LL);
      v121 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
      *(_OWORD *)&v172.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v172.fields.fakeValue = v121;
      if ( v120 != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47624888(&v172, 0LL) )
        this->fields.isSameSvt = 1;
    }
    Instance = UserServantEntity__isLevelMax(baseUsrSvtData, 0LL);
    this->fields.isBaseLvMax = Instance & 1;
  }
  else
  {
    this->fields.isLimitCntTarget = 0;
  }
  v122 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_156;
  v123 = v122[2];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v181.fields.currentCryptoKey = v122[1];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v181.fields.fakeValue = v123;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v171 = v181;
  v41 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47624888(&v171, 0LL);
  Instance = (int64_t)MasterData_object;
  if ( !MasterData_object )
    goto LABEL_156;
  this->fields.isEquiped = UserDeckMaster__IsEquip_41326452(MasterData_object, v41, &this->fields.partyIndex, 0LL);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_156;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserServantLeaderMaster___);
  if ( !Instance )
    goto LABEL_156;
  Instance = *(_QWORD *)(Instance + 40);
  if ( !Instance )
    goto LABEL_156;
  v125 = System_Collections_ObjectModel_Collection_object___GetEnumerator(
           (System_Collections_ObjectModel_Collection_T__o *)Instance,
           (const MethodInfo_31F66A4 *)Method_System_Collections_ObjectModel_Collection_UserServantLeaderEntity__GetEnumerator__);
  if ( !v125 )
    sub_1C22094(0LL, v124);
  while ( 1 )
  {
    v126 = v125->klass;
    v127 = *(unsigned __int16 *)(&v125->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v125->klass->_2.bitflags2 + 3) )
    {
      v128 = &v126->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)v128 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v127;
        v128 += 4;
        if ( !v127 )
          goto LABEL_114;
      }
      v129 = (__int64)&v126->vtable[*v128].method;
    }
    else
    {
LABEL_114:
      v129 = sub_1C73E18(v125, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v129)(
            v125,
            *(_QWORD *)(v129 + 8)) & 1) == 0 )
      break;
    v130 = v125->klass;
    v131 = *(unsigned __int16 *)(&v125->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v125->klass->_2.bitflags2 + 3) )
    {
      v132 = &v130->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_UserServantLeaderEntity__c **)v132 - 1) != System_Collections_Generic_IEnumerator_UserServantLeaderEntity__TypeInfo )
      {
        --v131;
        v132 += 4;
        if ( !v131 )
          goto LABEL_121;
      }
      v133 = (__int64)&v130->vtable[*v132].method;
    }
    else
    {
LABEL_121:
      v133 = sub_1C73E18(v125, System_Collections_Generic_IEnumerator_UserServantLeaderEntity__TypeInfo, 0LL);
    }
    v134 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v133)(
             v125,
             *(_QWORD *)(v133 + 8));
    if ( !v134 )
      sub_1C22094(0LL, v135);
    v136 = *(_QWORD *)(v134 + 32);
    if ( v136 )
    {
      v137 = *(_OWORD *)(v136 + 40);
      *(_OWORD *)&v181.fields.currentCryptoKey = *(_OWORD *)(v136 + 24);
      *(_OWORD *)&v181.fields.fakeValue = v137;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v170 = v181;
      v138 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47624888(&v170, 0LL);
      v140 = *p_userSvtEntity;
      if ( !*p_userSvtEntity )
        sub_1C22094(v138, v139);
      v141 = v140[2];
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v169.fields.currentCryptoKey = v140[1];
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v169.fields.fakeValue = v141;
      if ( v138 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47624888(&v169, 0LL) )
      {
        this->fields.isUseSupportEquip = 1;
        break;
      }
    }
  }
  v142 = v125->klass;
  v143 = *(unsigned __int16 *)(&v125->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v125->klass->_2.bitflags2 + 3) )
  {
    v144 = &v142->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v144 - 1) != System_IDisposable_TypeInfo )
    {
      --v143;
      v144 += 4;
      if ( !v143 )
        goto LABEL_134;
    }
    v145 = (__int64)&v142->vtable[*v144].method;
  }
  else
  {
LABEL_134:
    v145 = sub_1C73E18(v125, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v145)(v125, *(_QWORD *)(v145 + 8));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_UserRecommendSupportMaster___);
  v146 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_156;
  v147 = v146[2];
  v148 = (UserRecommendSupportMaster_o *)Instance;
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v181.fields.currentCryptoKey = v146[1];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v181.fields.fakeValue = v147;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v168 = v181;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47624888(&v168, 0LL);
  if ( !v148
    || (Instance = UserRecommendSupportMaster__IsSettingServant(v148, Instance, 1, 0LL),
        v149 = this->fields.userSvtEntity,
        this->fields.isUseRecommendSupportEquip = Instance & 1,
        !v149)
    || (Instance = UserServantEntity__IsLock(v149, 0LL),
        v150 = this->fields.userSvtEntity,
        this->fields.isLock = Instance & 1,
        !v150) )
  {
LABEL_156:
    sub_1C22094(Instance, v41);
  }
  IsChoice = UserServantEntity__IsChoice(v150, 0LL);
  isFriendShipSvtEq = this->fields.isFriendShipSvtEq;
  this->fields.isChoice = IsChoice;
  this->fields.isFavorite = v165;
  this->fields.isNotSelection = isFriendShipSvtEq;
LABEL_145:
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_156;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Instance )
    goto LABEL_156;
  Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                        this->fields.classId,
                        (const MethodInfo_325BDC8 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_156;
  v153 = this->fields.servantEntity;
  this->fields.sortValue1B = *(int *)(Instance + 52);
  if ( !v153 )
    goto LABEL_156;
  v154 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_156;
  this->fields.sortValue2 = ((__int64)v153->fields.collectionNo << 16) | ((unsigned __int64)(unsigned int)this->fields.rarity << 48) | v154[16].fields.currentCryptoKey;
  v156 = *(_QWORD *)&v154[5].fields.currentCryptoKey;
  v155 = *(_QWORD *)&v154[5].fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v184.fields.currentCryptoKey = v156;
  *(_QWORD *)&v184.fields.fakeValue = v155;
  v157 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v184, 0LL);
  Instance = (int64_t)this->fields.userSvtEntity;
  this->fields.sortValue2B = v157;
  this->fields.amountSortValue = -1LL;
  if ( !Instance )
    goto LABEL_156;
  EquipCategoryIdList = UserServantEntity__GetEquipCategoryIdList((UserServantEntity_o *)Instance, 1, 0LL);
  this->fields.categoryIdList = EquipCategoryIdList;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.categoryIdList,
    (int64_t)EquipCategoryIdList,
    v159,
    v160,
    v161,
    v162,
    v163,
    v164);
  Instance = (int64_t)this->fields.iconLabelInfo1;
  if ( !Instance )
    goto LABEL_156;
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0LL);
  Instance = (int64_t)*p_iconLabelInfo2;
  if ( !*p_iconLabelInfo2 )
    goto LABEL_156;
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

  if ( (byte_4BE0309 & 1) == 0 )
  {
    sub_1C21E38(&FilterKindList_TypeInfo);
    sub_1C21E38(&ListViewSort_FilterKind___TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    byte_4BE0309 = 1;
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
                           (const MethodInfo_3636374 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                          (const MethodInfo_3636374 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                           (const MethodInfo_3636374 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                             (const MethodInfo_3636374 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
      RarityFilterKindList = (System_Int32Enum_array *)sub_1C21EE0(ListViewSort_FilterKind___TypeInfo, 1LL);
      if ( RarityFilterKindList )
      {
        if ( !RarityFilterKindList->max_length )
          sub_1C2209C(RarityFilterKindList, RarityFilterKindList);
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
      sub_1C22094(RarityFilterKindList, sort);
    }
  }
  return result;
}


void __fastcall SvtEqCombineListViewItem__ModifyChoiceItem(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0

  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_1C22094(0LL, method);
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
    sub_1C22094(0LL, method);
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
  bool EventUpVal_41479408; // w0
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
  if ( (byte_4BE0308 & 1) == 0 )
  {
    sub_1C21E38(&Method_BasicHelper_Any_EventGroupEntity___);
    sub_1C21E38(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_EventGroupMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&System_Func_EventGroupEntity__bool__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventGroupEntity__get_Count__);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C21E38(&Method_SvtEqCombineListViewItem__SetSortValue_b__52_0__);
    sub_1C21E38(&Method_SvtEqCombineListViewItem__SetSortValue_b__52_1__);
    this = (SvtEqCombineListViewItem_o *)sub_1C21E38(&SvtEqCombineListViewManager_TypeInfo);
    byte_4BE0308 = 1;
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
        this = (SvtEqCombineListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_EventGroupMaster___);
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
              v14 = (System_Func_object__bool__o *)sub_1C22084(System_Func_EventGroupEntity__bool__TypeInfo);
              v15 = &Method_SvtEqCombineListViewItem__SetSortValue_b__52_0__;
LABEL_62:
              v20 = (System_Func_T__bool__o *)v14;
              System_Func_object__bool____ctor(v14, (Il2CppObject *)v4, *v15, 0LL);
              this = (SvtEqCombineListViewItem_o *)BasicHelper__Any_object_(
                                                     (System_Collections_Generic_List_T__o *)EntitiesByGroupId,
                                                     v20,
                                                     (const MethodInfo_2F9AD70 *)Method_BasicHelper_Any_EventGroupEntity___);
              v4->fields.isEventUpVal = (unsigned __int8)this & 1;
              goto LABEL_63;
            }
          }
          goto LABEL_63;
        }
LABEL_158:
        sub_1C22094(this, sort);
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
    this = (SvtEqCombineListViewItem_o *)UserServantEntity__getEventUpVal_41479408(
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
    this = (SvtEqCombineListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_EventCampaignMaster___);
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
    this = (SvtEqCombineListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v57, 0LL);
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
  this = (SvtEqCombineListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_EventGroupMaster___);
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
      v14 = (System_Func_object__bool__o *)sub_1C22084(System_Func_EventGroupEntity__bool__TypeInfo);
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
          EventUpVal_41479408 = UserServantEntity__getEventUpVal_41479408(
                                  (UserServantEntity_o *)this,
                                  -1,
                                  0,
                                  0,
                                  v23,
                                  v25,
                                  1,
                                  0LL);
          isEventUpVal = EventUpVal_41479408;
          v4->fields.isEventUpVal = EventUpVal_41479408;
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
      *(_OWORD *)p_sortValue0 = xmmword_BFF620;
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
      this = (SvtEqCombineListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47624888(
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
      IconLabelInfo__Set_39381772(v41, 2, v40, (int32_t)this, 0, 0, 0, 0, 0LL);
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
      IconLabelInfo__Set_39381772((IconLabelInfo_o *)this, v45, hp, adjustHp, 0, 0, 0, 0, 0LL);
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
      IconLabelInfo__Set_39381772((IconLabelInfo_o *)this, 7, cost, 0, 0, 0, 0, 0, 0LL);
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
  IconLabelInfo__Set_39381772(iconLabelInfo1, 2, v49, (int32_t)this, 0, 0, 0, 0, 0LL);
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

  if ( (byte_4BE030B & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4BE030B = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (EventCampaignMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_EventCampaignMaster___);
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
  Master_object = (EventCampaignMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v12, 0LL);
  if ( !entity || !v8 )
    goto LABEL_16;
  if ( EventCampaignMaster__IsEnableServant(v8, (int32_t)Master_object, entity->fields.eventId, 0LL) )
    return 1;
  Master_object = (EventCampaignMaster_o *)this->fields.userSvtEntity;
  if ( !Master_object )
    goto LABEL_16;
  if ( UserServantEntity__getEventUpVal_41479408(
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
    sub_1C22094(Master_object, v6);
  return UserServantEntity__getEventUpVal_41479408(
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

  if ( (byte_4BE030C & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4BE030C = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (EventCampaignMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_EventCampaignMaster___);
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
  Master_object = (EventCampaignMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v12, 0LL);
  if ( !entity || !v8 )
    goto LABEL_16;
  if ( EventCampaignMaster__IsEnableServant(v8, (int32_t)Master_object, entity->fields.eventId, 0LL) )
    return 1;
  Master_object = (EventCampaignMaster_o *)this->fields.userSvtEntity;
  if ( !Master_object )
    goto LABEL_16;
  if ( UserServantEntity__getEventUpVal_41479408(
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
    sub_1C22094(Master_object, v6);
  return UserServantEntity__getEventUpVal_41479408(
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
    sub_1C22094(0LL, method);
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
    sub_1C22094(this, method);
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
  if ( (byte_4BE030A & 1) == 0 )
  {
    this = (SvtEqCombineListViewItem_o *)sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4BE030A = 1;
  }
  userSvtEntity = v2->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_1C22094(this, method);
  v4 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v7.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v7.fields.fakeValue = v4;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v6 = v7;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47624888(&v6, 0LL);
}


void __fastcall SvtEqCombineListViewItem__setUserServantEntity(
        SvtEqCombineListViewItem_o *this,
        UserServantEntity_o *entity,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.userSvtEntity = entity;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.userSvtEntity,
    (int64_t)entity,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_1C22094(0LL, value);
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