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
  IconLabelInfo_o *v17; // x21
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  IconLabelInfo_o *v24; // x22
  struct IconLabelInfo_o **p_iconLabelInfo2; // x21
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_userSvtEntity; // x22
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  int64_t Instance; // x0
  int64_t v40; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v41; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v42; // x24
  __int64 v43; // x26
  __int64 v44; // x27
  struct ServantEntity_o *Entity; // x0
  struct ServantEntity_o **p_servantEntity; // x27
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  struct UserServantEntity_o *v53; // x8
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  struct ServantEntity_o *servantEntity; // x8
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  ServantLimitMaster_o *v67; // x20
  int32_t v68; // w24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v69; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v70; // q1
  UserServantCollectionMaster_o *v71; // x20
  int64_t v72; // x24
  struct UserServantEntity_o *v73; // x8
  int32_t v74; // w0
  UserServantEntity_o *v75; // x8
  bool IsChocolateSvtEquip; // w0
  int32_t v77; // w8
  int v78; // w25
  int32_t v79; // w8
  UserServantEntity_o *v80; // x8
  UserServantEntity_o *v81; // x8
  UserServantEntity_o *v82; // x8
  struct UserServantEntity_o *v83; // x8
  __int128 v84; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v85; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v86; // q0
  int64_t v87; // x20
  __int128 v88; // q0
  __int64 v89; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v92; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v95; // x8
  unsigned __int64 v96; // x10
  int32_t *v97; // x11
  __int64 v98; // x0
  _QWORD *v99; // x0
  __int64 v100; // x1
  __int64 v101; // x9
  __int64 v102; // x8
  __int128 v103; // q0
  int64_t v104; // x0
  __int64 v105; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v106; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v107; // q0
  System_Collections_Generic_IEnumerator_T__c *v108; // x8
  unsigned __int64 v109; // x10
  int32_t *v110; // x11
  __int64 v111; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v112; // x8
  __int64 v113; // x20
  __int64 v114; // x24
  int32_t v115; // w20
  struct UserServantEntity_o *v116; // x8
  __int128 v117; // q0
  int64_t v118; // x0
  __int128 v119; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v120; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v121; // q0
  __int64 v122; // x1
  System_Collections_Generic_IEnumerator_T__o *v123; // x23
  System_Collections_Generic_IEnumerator_T__c *v124; // x8
  unsigned __int64 v125; // x10
  int32_t *v126; // x11
  __int64 v127; // x0
  System_Collections_Generic_IEnumerator_T__c *v128; // x8
  unsigned __int64 v129; // x10
  int32_t *v130; // x11
  __int64 v131; // x0
  _QWORD *v132; // x0
  __int64 v133; // x1
  __int64 v134; // x9
  __int64 v135; // x8
  __int128 v136; // q0
  int64_t v137; // x0
  __int64 v138; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v139; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v140; // q0
  int v141; // w25
  System_Collections_Generic_IEnumerator_T__c *v142; // x8
  unsigned __int64 v143; // x10
  int32_t *v144; // x11
  __int64 v145; // x0
  UserServantEntity_o *v146; // x8
  bool IsChoice; // w0
  bool isFriendShipSvtEq; // w9
  struct ServantEntity_o *v149; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v150; // x8
  __int64 v151; // x20
  __int64 v152; // x22
  int32_t v153; // w8
  struct System_Int32_array *EquipCategoryIdList; // x0
  System_String_array **v155; // x2
  System_String_array **v156; // x3
  System_Boolean_array **v157; // x4
  System_Int32_array **v158; // x5
  System_Int32_array *v159; // x6
  System_Int32_array *v160; // x7
  bool v161; // [xsp+14h] [xbp-20Ch]
  UserDeckMaster_o *MasterData_WarQuestSelectionMaster; // [xsp+18h] [xbp-208h]
  int32_t v163; // [xsp+24h] [xbp-1FCh]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v165; // [xsp+30h] [xbp-1F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v166; // [xsp+50h] [xbp-1D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v167; // [xsp+70h] [xbp-1B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v168; // [xsp+90h] [xbp-190h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v169; // [xsp+B0h] [xbp-170h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v170; // [xsp+D0h] [xbp-150h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v171; // [xsp+F0h] [xbp-130h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v172; // [xsp+110h] [xbp-110h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v173; // [xsp+130h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v174; // [xsp+150h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v175; // [xsp+170h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v176; // [xsp+190h] [xbp-90h]
  int v177[4]; // [xsp+1B0h] [xbp-70h]
  int v178; // [xsp+1C0h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v179; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v180; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v181; // 0:x0.16

  if ( (byte_435794E & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B70694(&Method_DataManager_GetMasterData_CombineMaterialMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_UserDeckMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_UserServantLeaderMaster___);
    sub_B70694(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B70694(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_B70694(&System_IDisposable_TypeInfo);
    sub_B70694(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B70694(&System_Collections_IEnumerator_TypeInfo);
    sub_B70694(&IconLabelInfo_TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&UserServantLeaderEntity_TypeInfo);
    byte_435794E = 1;
  }
  v178 = 0;
  v17 = (IconLabelInfo_o *)sub_B70764(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v17, 0LL);
  this->fields.iconLabelInfo1 = v17;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo1,
    (System_Int32_array **)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v24 = (IconLabelInfo_o *)sub_B70764(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v24, 0LL);
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  this->fields.iconLabelInfo2 = v24;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo2,
    (System_Int32_array **)v24,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  ListViewItem___ctor((ListViewItem_o *)this, 0LL);
  this->fields.userSvtEntity = userSvtEntity;
  p_userSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userSvtEntity;
  v163 = type;
  this->fields.type = type;
  this->fields.index = index;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.userSvtEntity,
    (System_Int32_array **)userSvtEntity,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_169;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantMaster___);
  v41 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_169;
  v42 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v44 = *(_QWORD *)&v41[5].fields.currentCryptoKey;
  v43 = *(_QWORD *)&v41[5].fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v179.fields.currentCryptoKey = v44;
  *(_QWORD *)&v179.fields.fakeValue = v43;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v179, 0LL);
  if ( !v42 )
    goto LABEL_169;
  Entity = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                       v42,
                                       Instance,
                                       (const MethodInfo_21C0440 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = Entity;
  p_servantEntity = &this->fields.servantEntity;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.servantEntity,
    (System_Int32_array **)Entity,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52);
  v53 = this->fields.userSvtEntity;
  if ( !v53 )
    goto LABEL_169;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v53->fields.svtId, 0LL);
  servantEntity = this->fields.servantEntity;
  this->fields.svtId = Instance;
  if ( !servantEntity )
    goto LABEL_169;
  this->fields.classId = servantEntity->fields.classId;
  this->fields.setupInfo = setupInfo;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.setupInfo,
    (System_Int32_array **)setupInfo,
    v54,
    v55,
    v56,
    v57,
    v58,
    v59);
  this->fields.finishSetupInfo = finishSetupInfo;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.finishSetupInfo,
    (System_Int32_array **)finishSetupInfo,
    v61,
    v62,
    v63,
    v64,
    v65,
    v66);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_169;
  MasterData_WarQuestSelectionMaster = (UserDeckMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)Instance,
                                                             (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserDeckMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_169;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtEntity )
    goto LABEL_169;
  v67 = (ServantLimitMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984((*p_userSvtEntity)[5], 0LL);
  if ( !*p_userSvtEntity )
    goto LABEL_169;
  v68 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984((*p_userSvtEntity)[6], 0LL);
  if ( !v67 )
    goto LABEL_169;
  Instance = (int64_t)ServantLimitMaster__GetEntity(v67, v68, Instance, 0LL);
  if ( !Instance )
    goto LABEL_169;
  this->fields.rarity = *(_DWORD *)(Instance + 24);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_169;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v69 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_169;
  v70 = v69[4];
  v71 = (UserServantCollectionMaster_o *)Instance;
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v176.fields.currentCryptoKey = v69[3];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v176.fields.fakeValue = v70;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v175 = v176;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45183140(&v175, 0LL);
  if ( !*p_userSvtEntity )
    goto LABEL_169;
  v72 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984((*p_userSvtEntity)[5], 0LL);
  if ( !v71 )
    goto LABEL_169;
  Instance = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(v71, v72, Instance, 0LL);
  if ( !Instance )
    goto LABEL_169;
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
    goto LABEL_169;
  Instance = UserServantEntity__getLimitCntMax((UserServantEntity_o *)Instance, 0LL);
  v73 = this->fields.userSvtEntity;
  this->fields.maxLimitCnt = Instance;
  if ( !v73 )
    goto LABEL_169;
  v74 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v73->fields.limitCount, 0LL);
  *(_DWORD *)&this->fields.isBaseLvMax = 0;
  this->fields.currentLimitCnt = v74;
  Instance = (int64_t)this->fields.userSvtEntity;
  this->fields.isCanNotLock = 0;
  *(_WORD *)&this->fields.isSwapLock = 0;
  this->fields.dragSelectNum = -1;
  this->fields.isNotSelection = 0;
  this->fields.isEventUpVal = 0;
  *(_QWORD *)&this->fields.bonusKind = 0LL;
  if ( !Instance )
    goto LABEL_169;
  Instance = UserServantEntity__IsFriendShipSvtEquip((UserServantEntity_o *)Instance, 0LL);
  v75 = this->fields.userSvtEntity;
  this->fields.isFriendShipSvtEq = Instance & 1;
  if ( !v75 )
    goto LABEL_169;
  IsChocolateSvtEquip = UserServantEntity__IsChocolateSvtEquip(v75, 0LL);
  v77 = this->fields.type;
  this->fields.isChocolateSvtEquip = IsChocolateSvtEquip;
  v161 = isFavorite;
  if ( v77 )
  {
    v78 = 0;
  }
  else
  {
    Instance = (int64_t)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_169;
    Instance = UserServantEntity__isLevelMax((UserServantEntity_o *)Instance, 0LL);
    v80 = this->fields.userSvtEntity;
    this->fields.isLvMax = Instance & 1;
    if ( !v80 )
      goto LABEL_169;
    Instance = UserServantEntity__isLimitCountMax(v80, 0LL);
    v81 = this->fields.userSvtEntity;
    this->fields.isLimitCntMax = Instance & 1;
    if ( !v81 )
      goto LABEL_169;
    Instance = UserServantEntity__IsLock(v81, 0LL);
    v82 = this->fields.userSvtEntity;
    this->fields.isLock = Instance & 1;
    if ( !v82 )
      goto LABEL_169;
    Instance = UserServantEntity__IsChoice(v82, 0LL);
    v83 = this->fields.userSvtEntity;
    this->fields.isChoice = Instance & 1;
    if ( !v83 )
      goto LABEL_169;
    v84 = *(_OWORD *)&v83->fields.id.fields.fakeValue;
    *(_OWORD *)&v176.fields.currentCryptoKey = *(_OWORD *)&v83->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v176.fields.fakeValue = v84;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v174 = v176;
    v40 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45183140(&v174, 0LL);
    Instance = (int64_t)MasterData_WarQuestSelectionMaster;
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_169;
    Instance = UserDeckMaster__IsEquip(MasterData_WarQuestSelectionMaster, v40, 0LL);
    this->fields.isEquiped = Instance & 1;
    if ( baseUsrSvtData )
    {
      v85 = *p_userSvtEntity;
      if ( !*p_userSvtEntity )
        goto LABEL_169;
      v86 = v85[2];
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v176.fields.currentCryptoKey = v85[1];
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v176.fields.fakeValue = v86;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v173 = v176;
      v87 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45183140(&v173, 0LL);
      v88 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
      *(_OWORD *)&v172.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v172.fields.fakeValue = v88;
      if ( v87 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45183140(&v172, 0LL) )
        this->fields.isBaseSvt = 1;
    }
    Instance = (int64_t)*p_servantEntity;
    if ( !*p_servantEntity )
      goto LABEL_169;
    if ( ServantEntity__get_IsServantEquipMaterial((ServantEntity_o *)Instance, 0LL) )
      this->fields.isSvtEqMaterial = 1;
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_169;
    Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserServantLeaderMaster___);
    if ( !Instance )
      goto LABEL_169;
    Instance = *(_QWORD *)(Instance + 32);
    if ( !Instance )
      goto LABEL_169;
    Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                   (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                   (const MethodInfo_2C865F4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    if ( !Enumerator )
      sub_B7076C(0LL, v89);
    while ( 1 )
    {
      klass = Enumerator->klass;
      if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
      {
        v92 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v92;
          p_offset += 4;
          if ( v92 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
            goto LABEL_65;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_65:
        p_method = sub_B08590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
              Enumerator,
              *(_QWORD *)(p_method + 8)) & 1) == 0 )
        break;
      v95 = Enumerator->klass;
      if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
      {
        v96 = 0LL;
        v97 = &v95->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v97 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
        {
          ++v96;
          v97 += 4;
          if ( v96 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
            goto LABEL_72;
        }
        v98 = (__int64)&v95->vtable[*v97].method;
      }
      else
      {
LABEL_72:
        v98 = sub_B08590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
      }
      v99 = (_QWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v98)(
                        Enumerator,
                        *(_QWORD *)(v98 + 8));
      if ( !v99 )
        sub_B7076C(0LL, v100);
      v101 = *(&UserServantLeaderEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*v99 + 300LL) < (unsigned int)v101
        || *(UserServantLeaderEntity_c **)(*(_QWORD *)(*v99 + 200LL) + 8 * v101 - 8) != UserServantLeaderEntity_TypeInfo )
      {
        goto LABEL_171;
      }
      v102 = v99[4];
      if ( v102 )
      {
        v103 = *(_OWORD *)(v102 + 40);
        *(_OWORD *)&v176.fields.currentCryptoKey = *(_OWORD *)(v102 + 24);
        *(_OWORD *)&v176.fields.fakeValue = v103;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v171 = v176;
        v104 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45183140(&v171, 0LL);
        v106 = *p_userSvtEntity;
        if ( !*p_userSvtEntity )
          sub_B7076C(v104, v105);
        v107 = v106[2];
        *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v170.fields.currentCryptoKey = v106[1];
        *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v170.fields.fakeValue = v107;
        if ( v104 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45183140(&v170, 0LL) )
        {
          v78 = 1;
          this->fields.isUseSupportEquip = 1;
          goto LABEL_85;
        }
      }
    }
    v78 = 1;
LABEL_85:
    v177[0] = 774;
    v178 = 1;
    p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
    v108 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v109 = 0LL;
      v110 = &v108->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v110 - 1) != System_IDisposable_TypeInfo )
      {
        ++v109;
        v110 += 4;
        if ( v109 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_90;
      }
      v111 = (__int64)&v108->vtable[*v110].method;
    }
    else
    {
LABEL_90:
      v111 = sub_B08590(Enumerator, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v111)(
      Enumerator,
      *(_QWORD *)(v111 + 8));
    if ( v177[0] == 774 )
    {
      v78 = 0;
      v178 = 0;
    }
  }
  if ( v163 != 1 )
    goto LABEL_153;
  this->fields.isMaterialSvt = isMtSvt;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_169;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_CombineMaterialMaster___);
  if ( !*p_servantEntity || !*p_userSvtEntity || !Instance )
    goto LABEL_169;
  Instance = (int64_t)CombineMaterialMaster__GetEntity(
                        (CombineMaterialMaster_o *)Instance,
                        (*p_servantEntity)->fields.combineMaterialId,
                        (*p_userSvtEntity)[16].fields.currentCryptoKey,
                        0LL);
  v79 = Instance ? *(_DWORD *)(Instance + 24) : 0;
  this->fields.materialExp = v79;
  if ( baseUsrSvtData )
  {
    v112 = *p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_169;
    v114 = *(_QWORD *)&v112[5].fields.currentCryptoKey;
    v113 = *(_QWORD *)&v112[5].fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v180.fields.currentCryptoKey = v114;
    *(_QWORD *)&v180.fields.fakeValue = v113;
    v115 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v180, 0LL);
    if ( v115 == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(baseUsrSvtData->fields.svtId, 0LL) )
    {
      Instance = UserServantEntity__isLimitCountMax(baseUsrSvtData, 0LL);
      v116 = this->fields.userSvtEntity;
      this->fields.isLimitCntMax = Instance & 1;
      this->fields.isLimitCntTarget = (Instance & 1) == 0;
      if ( !v116 )
        goto LABEL_169;
      v117 = *(_OWORD *)&v116->fields.id.fields.fakeValue;
      *(_OWORD *)&v176.fields.currentCryptoKey = *(_OWORD *)&v116->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v176.fields.fakeValue = v117;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v169 = v176;
      v118 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45183140(&v169, 0LL);
      v119 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
      *(_OWORD *)&v168.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v168.fields.fakeValue = v119;
      if ( v118 != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45183140(&v168, 0LL) )
        this->fields.isSameSvt = 1;
    }
    Instance = UserServantEntity__isLevelMax(baseUsrSvtData, 0LL);
    this->fields.isBaseLvMax = Instance & 1;
  }
  else
  {
    this->fields.isLimitCntTarget = 0;
  }
  v120 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_169;
  v121 = v120[2];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v176.fields.currentCryptoKey = v120[1];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v176.fields.fakeValue = v121;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v167 = v176;
  v40 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45183140(&v167, 0LL);
  Instance = (int64_t)MasterData_WarQuestSelectionMaster;
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_169;
  this->fields.isEquiped = UserDeckMaster__IsEquip_27921840(
                             MasterData_WarQuestSelectionMaster,
                             v40,
                             &this->fields.partyIndex,
                             0LL);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_169;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserServantLeaderMaster___);
  if ( !Instance )
    goto LABEL_169;
  Instance = *(_QWORD *)(Instance + 32);
  if ( !Instance )
    goto LABEL_169;
  v123 = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
           (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
           (const MethodInfo_2C865F4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !v123 )
    sub_B7076C(0LL, v122);
  while ( 1 )
  {
    v124 = v123->klass;
    if ( *(_WORD *)&v123->klass->_2.bitflags1 )
    {
      v125 = 0LL;
      v126 = &v124->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)v126 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v125;
        v126 += 4;
        if ( v125 >= *(unsigned __int16 *)&v123->klass->_2.bitflags1 )
          goto LABEL_119;
      }
      v127 = (__int64)&v124->vtable[*v126].method;
    }
    else
    {
LABEL_119:
      v127 = sub_B08590(v123, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v127)(
            v123,
            *(_QWORD *)(v127 + 8)) & 1) == 0 )
      break;
    v128 = v123->klass;
    if ( *(_WORD *)&v123->klass->_2.bitflags1 )
    {
      v129 = 0LL;
      v130 = &v128->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v130 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v129;
        v130 += 4;
        if ( v129 >= *(unsigned __int16 *)&v123->klass->_2.bitflags1 )
          goto LABEL_126;
      }
      v131 = (__int64)&v128->vtable[*v130].method;
    }
    else
    {
LABEL_126:
      v131 = sub_B08590(v123, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v132 = (_QWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v131)(
                       v123,
                       *(_QWORD *)(v131 + 8));
    if ( !v132 )
      goto LABEL_172;
    v134 = *(&UserServantLeaderEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*v132 + 300LL) < (unsigned int)v134
      || *(UserServantLeaderEntity_c **)(*(_QWORD *)(*v132 + 200LL) + 8 * v134 - 8) != UserServantLeaderEntity_TypeInfo )
    {
      sub_B70A60(v132);
LABEL_171:
      sub_B70A60(v99);
LABEL_172:
      sub_B7076C(v132, v133);
    }
    v135 = v132[4];
    if ( v135 )
    {
      v136 = *(_OWORD *)(v135 + 40);
      *(_OWORD *)&v176.fields.currentCryptoKey = *(_OWORD *)(v135 + 24);
      *(_OWORD *)&v176.fields.fakeValue = v136;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v166 = v176;
      v137 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45183140(&v166, 0LL);
      v139 = *p_userSvtEntity;
      if ( !*p_userSvtEntity )
        sub_B7076C(v137, v138);
      v140 = v139[2];
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v165.fields.currentCryptoKey = v139[1];
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v165.fields.fakeValue = v140;
      if ( v137 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45183140(&v165, 0LL) )
      {
        this->fields.isUseSupportEquip = 1;
        v177[v78] = 1115;
        goto LABEL_139;
      }
    }
  }
  v177[v78] = 1115;
LABEL_139:
  v141 = ++v178;
  v142 = v123->klass;
  if ( *(_WORD *)&v123->klass->_2.bitflags1 )
  {
    v143 = 0LL;
    v144 = &v142->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v144 - 1) != System_IDisposable_TypeInfo )
    {
      ++v143;
      v144 += 4;
      if ( v143 >= *(unsigned __int16 *)&v123->klass->_2.bitflags1 )
        goto LABEL_144;
    }
    v145 = (__int64)&v142->vtable[*v144].method;
  }
  else
  {
LABEL_144:
    v145 = sub_B08590(v123, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v145)(v123, *(_QWORD *)(v145 + 8));
  if ( v141 && v177[v141 - 1] == 1115 )
    v178 = v141 - 1;
  Instance = (int64_t)*p_userSvtEntity;
  if ( !*p_userSvtEntity
    || (Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL),
        v146 = this->fields.userSvtEntity,
        this->fields.isLock = Instance & 1,
        !v146) )
  {
LABEL_169:
    sub_B7076C(Instance, v40);
  }
  IsChoice = UserServantEntity__IsChoice(v146, 0LL);
  isFriendShipSvtEq = this->fields.isFriendShipSvtEq;
  this->fields.isChoice = IsChoice;
  this->fields.isFavorite = v161;
  this->fields.isNotSelection = isFriendShipSvtEq;
LABEL_153:
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_169;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Instance )
    goto LABEL_169;
  Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                        (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                        this->fields.classId,
                        (const MethodInfo_21C0440 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_169;
  v149 = this->fields.servantEntity;
  this->fields.sortValue1B = *(int *)(Instance + 48);
  if ( !v149 )
    goto LABEL_169;
  v150 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_169;
  this->fields.sortValue2 = ((__int64)v149->fields.collectionNo << 16) | ((unsigned __int64)(unsigned int)this->fields.rarity << 48) | v150[16].fields.currentCryptoKey;
  v152 = *(_QWORD *)&v150[5].fields.currentCryptoKey;
  v151 = *(_QWORD *)&v150[5].fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v181.fields.currentCryptoKey = v152;
  *(_QWORD *)&v181.fields.fakeValue = v151;
  v153 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v181, 0LL);
  Instance = (int64_t)this->fields.userSvtEntity;
  this->fields.sortValue2B = v153;
  this->fields.amountSortValue = -1LL;
  if ( !Instance )
    goto LABEL_169;
  EquipCategoryIdList = UserServantEntity__GetEquipCategoryIdList((UserServantEntity_o *)Instance, 1, 0LL);
  this->fields.categoryIdList = EquipCategoryIdList;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.categoryIdList,
    (System_Int32_array **)EquipCategoryIdList,
    v155,
    v156,
    v157,
    v158,
    v159,
    v160);
  Instance = (int64_t)this->fields.iconLabelInfo1;
  if ( !Instance )
    goto LABEL_169;
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0LL);
  Instance = (int64_t)*p_iconLabelInfo2;
  if ( !*p_iconLabelInfo2 )
    goto LABEL_169;
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
  Voice_BATTLE_array *RarityFilterKindList; // x0
  FilterKindList_c *v7; // x0
  ListViewSort_FilterKind_array *v8; // x0
  FilterKindList_c *v9; // x0
  ListViewSort_FilterKind_array *v10; // x0
  bool IsMatchServantEquipCombineStatusFilter; // w8
  bool result; // w0
  FilterKindList_c *v13; // x0
  ListViewSort_FilterKind_array *v14; // x0
  bool HaveStatusFilter; // w8
  __int64 v16; // x0

  if ( (byte_4357950 & 1) == 0 )
  {
    sub_B70694(&FilterKindList_TypeInfo);
    sub_B70694(&ListViewSort_FilterKind___TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    byte_4357950 = 1;
  }
  v5 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v5 = FilterKindList_TypeInfo;
  }
  RarityFilterKindList = (Voice_BATTLE_array *)v5->static_fields->RarityFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_38;
  RarityFilterKindList = System_Collections_Generic_List_Voice_BATTLE___ToArray(
                           (System_Collections_Generic_List_Voice_BATTLE__o *)RarityFilterKindList,
                           (const MethodInfo_30BB2BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_38;
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)RarityFilterKindList, 0LL)
    && !ListViewSort__IsMatchRarityFilter(sort, this->fields.rarity, 0LL)
    || !ListViewSort__CheckSvtEquipEffectFilterDefaultAll(sort, 0LL)
    && !ServantEquipEffectFilterController__IsMatchEffectCategory(this->fields.categoryIdList, sort, 0LL) )
  {
    return 0;
  }
  v7 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v7 = FilterKindList_TypeInfo;
  }
  RarityFilterKindList = (Voice_BATTLE_array *)v7->static_fields->ServantEquipTypeFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_38;
  v8 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                          (System_Collections_Generic_List_Voice_BATTLE__o *)RarityFilterKindList,
                                          (const MethodInfo_30BB2BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v8, 0LL)
    && !ListViewSort__IsMatchServantEquipTypeFilter(sort, this->fields.servantEntity, 0LL) )
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
  RarityFilterKindList = (Voice_BATTLE_array *)v9->static_fields->ServantEquipCombineStatusFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_38;
  v10 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           (System_Collections_Generic_List_Voice_BATTLE__o *)RarityFilterKindList,
                                           (const MethodInfo_30BB2BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v10, 0LL) )
  {
    IsMatchServantEquipCombineStatusFilter = ListViewSort__IsMatchServantEquipCombineStatusFilter(
                                               sort,
                                               this->fields.userSvtEntity,
                                               this->fields.servantEntity,
                                               0,
                                               0LL);
    result = 0;
    if ( !IsMatchServantEquipCombineStatusFilter )
      return result;
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
    goto LABEL_38;
  v14 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           (System_Collections_Generic_List_Voice_BATTLE__o *)RarityFilterKindList,
                                           (const MethodInfo_30BB2BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v14, 0LL) )
  {
    HaveStatusFilter = ListViewSort__IsMatchServantEquipHaveStatusFilter(
                         sort,
                         this->fields.userSvtEntity,
                         this->fields.servantEntity,
                         0,
                         0LL);
    result = 0;
    if ( !HaveStatusFilter )
      return result;
  }
  RarityFilterKindList = (Voice_BATTLE_array *)sub_B706AC(ListViewSort_FilterKind___TypeInfo, 1LL);
  if ( !RarityFilterKindList )
LABEL_38:
    sub_B7076C(RarityFilterKindList, sort);
  if ( !RarityFilterKindList->max_length )
  {
    v16 = sub_B70798(RarityFilterKindList);
    sub_B70738(v16, 0LL);
  }
  RarityFilterKindList->m_Items[1] = 39;
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)RarityFilterKindList, 0LL)
      || !ListViewSort__GetFilter(sort, 39, 0LL)
      || !this->fields.isSwapChoice == this->fields.isChoice;
}


void __fastcall SvtEqCombineListViewItem__ModifyChoiceItem(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0

  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_B7076C(0LL, method);
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
    sub_B7076C(0LL, method);
  this->fields.isLock = UserServantEntity__IsLock(userSvtEntity, 0LL);
  this->fields.isSwapLock = 0;
}


bool __fastcall SvtEqCombineListViewItem__SetSortValue(
        SvtEqCombineListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  SvtEqCombineListViewItem_o *v4; // x19
  struct EventUpValSetupInfo_o *setupInfo; // x8
  struct System_Int32_array *servantEquipFilterEventIdList; // x8
  EventUpValSetupInfo_o *v7; // x21
  SvtEqCombineListViewItem_o *userSvtEntity; // x22
  EventUpValSetupInfo_o *v9; // x0
  int32_t v10; // w5
  int32_t *p_bonusKind2Id; // x8
  struct EventUpValSetupInfo_o *finishSetupInfo; // x8
  struct System_Int32_array *v13; // x8
  EventUpValSetupInfo_o *v14; // x21
  SvtEqCombineListViewItem_o *v15; // x22
  EventUpValSetupInfo_o *v16; // x0
  int32_t v17; // w5
  int32_t *v18; // x8
  bool EventUpVal_21624940; // w0
  _BOOL4 isSwapChoice; // w21
  _BOOL4 isChoice; // w22
  const MethodInfo *v22; // x2
  int64_t *p_sortValue0; // x8
  int v24; // w9
  __int64 v25; // x10
  int32_t type; // w9
  __int64 v27; // x9
  __int64 v28; // x10
  struct UserServantEntity_o *v29; // x8
  __int128 v30; // q1
  struct UserServantEntity_o *v31; // x8
  IconLabelInfo_o *iconLabelInfo1; // x19
  struct UserServantEntity_o *v33; // x8
  int32_t adjustHp; // w3
  int32_t hp; // w2
  int32_t v36; // w1
  struct UserServantEntity_o *v37; // x8
  struct ServantEntity_o *servantEntity; // x8
  int32_t bonusKind; // w20
  __int64 v40; // x10
  struct ServantEntity_o *v41; // x8
  __int64 collectionNo; // x10
  SvtEqCombineListViewItem_o *v43; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v45; // [xsp+10h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v46; // [xsp+30h] [xbp-40h]

  v4 = this;
  if ( (byte_435794F & 1) == 0 )
  {
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    this = (SvtEqCombineListViewItem_o *)sub_B70694(&SvtEqCombineListViewManager_TypeInfo);
    byte_435794F = 1;
  }
  setupInfo = v4->fields.setupInfo;
  *(_WORD *)&v4->fields.isTermination = 0;
  v4->fields.sortValue1 = -1LL;
  if ( !setupInfo )
    goto LABEL_23;
  servantEquipFilterEventIdList = setupInfo->fields.servantEquipFilterEventIdList;
  if ( !servantEquipFilterEventIdList )
    goto LABEL_112;
  if ( !*(_QWORD *)&servantEquipFilterEventIdList->max_length )
    goto LABEL_23;
  if ( v4->fields.isBaseSvt )
    goto LABEL_23;
  this = (SvtEqCombineListViewItem_o *)ListViewItem__get_IsSelect((ListViewItem_o *)v4, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
    goto LABEL_23;
  v7 = v4->fields.setupInfo;
  if ( !v7 || !sort )
    goto LABEL_112;
  if ( v7->fields.isQuestStart )
  {
    if ( sort->fields.bonusKind != 1 )
      goto LABEL_23;
    if ( v4->fields.bonusKind != 1 )
    {
      userSvtEntity = (SvtEqCombineListViewItem_o *)v4->fields.userSvtEntity;
      v9 = v4->fields.setupInfo;
      v4->fields.bonusKind = 1;
      this = (SvtEqCombineListViewItem_o *)EventUpValSetupInfo__get_ServantEquipFilterEventId(v9, 0LL);
      if ( !userSvtEntity )
        goto LABEL_112;
      v10 = (int)this;
      this = userSvtEntity;
      goto LABEL_22;
    }
LABEL_18:
    if ( !v4->fields.isEventUpVal )
      goto LABEL_68;
    goto LABEL_23;
  }
  if ( sort->fields.bonusKind2 != 1 )
    goto LABEL_23;
  if ( v4->fields.bonusKind == 1 )
  {
    p_bonusKind2Id = &sort->fields.bonusKind2Id;
    if ( v4->fields.bonusKindId == sort->fields.bonusKind2Id )
      goto LABEL_18;
  }
  else
  {
    p_bonusKind2Id = &sort->fields.bonusKind2Id;
  }
  v4->fields.bonusKind = 1;
  v10 = *p_bonusKind2Id;
  this = (SvtEqCombineListViewItem_o *)v4->fields.userSvtEntity;
  v4->fields.bonusKindId = *p_bonusKind2Id;
  if ( !this )
    goto LABEL_112;
LABEL_22:
  this = (SvtEqCombineListViewItem_o *)UserServantEntity__getEventUpVal_21624940(
                                         (UserServantEntity_o *)this,
                                         -1,
                                         0,
                                         0,
                                         v7,
                                         v10,
                                         0,
                                         0LL);
  v4->fields.isEventUpVal = (unsigned __int8)this & 1;
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_68;
LABEL_23:
  finishSetupInfo = v4->fields.finishSetupInfo;
  if ( !finishSetupInfo )
    goto LABEL_43;
  v13 = finishSetupInfo->fields.servantEquipFilterEventIdList;
  if ( !v13 )
    goto LABEL_112;
  if ( !*(_QWORD *)&v13->max_length )
    goto LABEL_43;
  if ( v4->fields.isBaseSvt )
    goto LABEL_43;
  this = (SvtEqCombineListViewItem_o *)ListViewItem__get_IsSelect((ListViewItem_o *)v4, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
    goto LABEL_43;
  v14 = v4->fields.finishSetupInfo;
  if ( !v14 || !sort )
    goto LABEL_112;
  if ( v14->fields.isQuestStart )
  {
    if ( sort->fields.bonusKind != 5 )
      goto LABEL_43;
    if ( v4->fields.bonusKind != 5 )
    {
      v15 = (SvtEqCombineListViewItem_o *)v4->fields.userSvtEntity;
      v16 = v4->fields.finishSetupInfo;
      v4->fields.bonusKind = 5;
      this = (SvtEqCombineListViewItem_o *)EventUpValSetupInfo__get_ServantEquipFilterEventId(v16, 0LL);
      if ( !v15 )
        goto LABEL_112;
      v17 = (int)this;
      this = v15;
      goto LABEL_42;
    }
    goto LABEL_38;
  }
  if ( sort->fields.bonusKind2 != 5 )
    goto LABEL_43;
  if ( v4->fields.bonusKind != 5 )
  {
    v18 = &sort->fields.bonusKind2Id;
LABEL_41:
    v4->fields.bonusKind = 5;
    v17 = *v18;
    this = (SvtEqCombineListViewItem_o *)v4->fields.userSvtEntity;
    v4->fields.bonusKindId = *v18;
    if ( !this )
      goto LABEL_112;
LABEL_42:
    EventUpVal_21624940 = UserServantEntity__getEventUpVal_21624940(
                            (UserServantEntity_o *)this,
                            -1,
                            0,
                            0,
                            v14,
                            v17,
                            1,
                            0LL);
    v4->fields.isEventUpVal = EventUpVal_21624940;
    if ( EventUpVal_21624940 )
      goto LABEL_43;
LABEL_68:
    LOBYTE(this) = 0;
    return (char)this;
  }
  v18 = &sort->fields.bonusKind2Id;
  if ( v4->fields.bonusKindId != sort->fields.bonusKind2Id )
    goto LABEL_41;
LABEL_38:
  if ( !v4->fields.isEventUpVal )
    goto LABEL_68;
LABEL_43:
  isSwapChoice = v4->fields.isSwapChoice;
  isChoice = v4->fields.isChoice;
  if ( !v4->fields.isBaseSvt
    && !ListViewItem__get_IsSelect((ListViewItem_o *)v4, 0LL)
    && (((__int64 (__fastcall *)(SvtEqCombineListViewItem_o *, ListViewSort_o *, void *))v4->klass->vtable._5_IsMatchFilter.method)(
          v4,
          sort,
          v4->klass[1]._1.image) & 1) == 0 )
  {
    goto LABEL_68;
  }
  this = (SvtEqCombineListViewItem_o *)v4->fields.iconLabelInfo2;
  if ( !this )
    goto LABEL_112;
  IconLabelInfo__Clear((IconLabelInfo_o *)this, 0LL);
  v4->fields.sortValue0 = 0LL;
  p_sortValue0 = &v4->fields.sortValue0;
  v4->fields.sortValue0B = 0LL;
  if ( !sort )
    goto LABEL_112;
  v24 = isSwapChoice ^ isChoice;
  if ( !sort->fields.isSmartSort )
  {
    if ( (v24 ^ 1) & 1 | !sort->fields.isChoiceSort )
      goto LABEL_71;
    type = v4->fields.type;
    if ( type == 1 )
    {
      v27 = -10LL;
    }
    else
    {
      if ( type )
        goto LABEL_71;
      v27 = 10LL;
    }
    *p_sortValue0 = v27;
    goto LABEL_71;
  }
  if ( !v4->fields.type )
  {
    if ( v4->fields.isEquiped || v4->fields.isUseSupportEquip )
    {
      v28 = 20LL;
    }
    else
    {
      if ( !v4->fields.isLvMax || !v4->fields.isLimitCntMax )
      {
LABEL_60:
        if ( !((v24 ^ 1) & 1 | !sort->fields.isChoiceSort) )
          v4->fields.sortValue0B = 10LL;
        goto LABEL_71;
      }
      v28 = -10LL;
    }
    *p_sortValue0 = v28;
    goto LABEL_60;
  }
  if ( v4->fields.isSameSvt )
  {
    v25 = 20LL;
LABEL_66:
    *p_sortValue0 = v25;
    if ( !((v24 ^ 1) & 1 | !sort->fields.isChoiceSort) )
      *(_OWORD *)p_sortValue0 = xmmword_330C1D0;
    goto LABEL_71;
  }
  v25 = -10LL;
  if ( v4->fields.isSwapLock != v4->fields.isLock )
    goto LABEL_66;
  if ( !v4->fields.isNotSelection )
    v25 = -20LL;
  if ( (v4->fields.isNotSelection | v24) == 1 )
    goto LABEL_66;
LABEL_71:
  this = (SvtEqCombineListViewItem_o *)(&dword_0 + 1);
  switch ( sort->fields.sortKind )
  {
    case 1:
      v29 = v4->fields.userSvtEntity;
      if ( !v29 )
        goto LABEL_112;
      v30 = *(_OWORD *)&v29->fields.id.fields.fakeValue;
      *(_OWORD *)&v46.fields.currentCryptoKey = *(_OWORD *)&v29->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v46.fields.fakeValue = v30;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v45 = v46;
      this = (SvtEqCombineListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45183140(
                                             &v45,
                                             0LL);
      v31 = v4->fields.userSvtEntity;
      v4->fields.sortValue1 = (int64_t)this;
      if ( !v31 )
        goto LABEL_112;
      this = (SvtEqCombineListViewItem_o *)v4->fields.iconLabelInfo1;
      if ( !this )
        goto LABEL_112;
      IconLabelInfo__SetTime((IconLabelInfo_o *)this, 49, v31->fields.createdAt, 0, 0, 0, 0LL);
      goto LABEL_94;
    case 2:
      this = (SvtEqCombineListViewItem_o *)v4->fields.userSvtEntity;
      v4->fields.sortValue1 = v4->fields.rarity;
      if ( !this )
        goto LABEL_112;
      goto LABEL_83;
    case 3:
      this = (SvtEqCombineListViewItem_o *)v4->fields.userSvtEntity;
      if ( !this )
        goto LABEL_112;
      v4->fields.sortValue1 = this->fields.bonusKind;
LABEL_83:
      iconLabelInfo1 = v4->fields.iconLabelInfo1;
      goto LABEL_96;
    case 5:
      v33 = v4->fields.userSvtEntity;
      if ( !v33 )
        goto LABEL_112;
      this = (SvtEqCombineListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = v33->fields.hp;
      if ( !this )
        goto LABEL_112;
      adjustHp = v33->fields.adjustHp;
      hp = v33->fields.hp;
      v36 = 3;
      goto LABEL_90;
    case 6:
      v37 = v4->fields.userSvtEntity;
      if ( !v37 )
        goto LABEL_112;
      this = (SvtEqCombineListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = v37->fields.atk;
      if ( !this )
        goto LABEL_112;
      adjustHp = v37->fields.adjustAtk;
      hp = v37->fields.atk;
      v36 = 5;
LABEL_90:
      IconLabelInfo__Set_27789840((IconLabelInfo_o *)this, v36, hp, adjustHp, 0, 0, 0, 0, 0LL);
      goto LABEL_94;
    case 7:
      servantEntity = v4->fields.servantEntity;
      if ( !servantEntity )
        goto LABEL_112;
      this = (SvtEqCombineListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = servantEntity->fields.cost;
      if ( !this )
        goto LABEL_112;
      IconLabelInfo__Set_27789840((IconLabelInfo_o *)this, 7, servantEntity->fields.cost, 0, 0, 0, 0, 0, 0LL);
LABEL_94:
      this = (SvtEqCombineListViewItem_o *)v4->fields.userSvtEntity;
      if ( !this )
        goto LABEL_112;
      iconLabelInfo1 = v4->fields.iconLabelInfo2;
LABEL_96:
      bonusKind = this->fields.bonusKind;
      break;
    case 8:
      v4->fields.sortValue1 = v4->fields.classId;
      goto LABEL_99;
    case 0xE:
      this = (SvtEqCombineListViewItem_o *)v4->fields.amountSortValue;
      if ( ((unsigned __int64)this & 0x8000000000000000LL) == 0 )
        goto LABEL_106;
      this = (SvtEqCombineListViewItem_o *)sort->fields.manager;
      if ( !this )
        goto LABEL_112;
      v40 = *(&SvtEqCombineListViewManager_TypeInfo->_2.bitflags2 + 1);
      if ( *(&this->klass->_2.bitflags2 + 1) < (unsigned int)v40
        || (SvtEqCombineListViewManager_c *)this->klass->_2.typeHierarchy[v40 - 1] != SvtEqCombineListViewManager_TypeInfo )
      {
        goto LABEL_112;
      }
      this = (SvtEqCombineListViewItem_o *)SvtEqCombineListViewManager__GetAmountSortValue(
                                             (SvtEqCombineListViewManager_o *)this,
                                             v4->fields.svtId,
                                             v22);
      v4->fields.amountSortValue = (int64_t)this;
LABEL_106:
      v41 = v4->fields.servantEntity;
      if ( !v41 )
        goto LABEL_112;
      collectionNo = v41->fields.collectionNo;
      v43 = (SvtEqCombineListViewItem_o *)v4->fields.userSvtEntity;
      v4->fields.sortValue1 = (((unsigned __int64)(unsigned int)v4->fields.rarity << 32) + ((_QWORD)this << 48)) | collectionNo;
      if ( !v43 )
        goto LABEL_112;
      iconLabelInfo1 = v4->fields.iconLabelInfo1;
      bonusKind = v43->fields.bonusKind;
      this = v43;
      break;
    default:
      return (char)this;
  }
  this = (SvtEqCombineListViewItem_o *)UserServantEntity__getLevelMax((UserServantEntity_o *)this, 0LL);
  if ( !iconLabelInfo1 )
LABEL_112:
    sub_B7076C(this, sort);
  IconLabelInfo__Set_27789840(iconLabelInfo1, 2, bonusKind, (int32_t)this, 0, 0, 0, 0, 0LL);
LABEL_99:
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


int32_t __fastcall SvtEqCombineListViewItem__get_CombineQp(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0

  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_B7076C(0LL, method);
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
    sub_B7076C(this, method);
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
  return this->fields.isSwapChoice ^ this->fields.isChoice;
}


bool __fastcall SvtEqCombineListViewItem__get_IsDispLock(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isSwapLock ^ this->fields.isLock;
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
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v6; // [xsp+0h] [xbp-50h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+20h] [xbp-30h]

  v2 = this;
  if ( (byte_4357951 & 1) == 0 )
  {
    this = (SvtEqCombineListViewItem_o *)sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4357951 = 1;
  }
  userSvtEntity = v2->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_B7076C(this, method);
  v4 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v7.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v7.fields.fakeValue = v4;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v6 = v7;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45183140(&v6, 0LL);
}


void __fastcall SvtEqCombineListViewItem__setUserServantEntity(
        SvtEqCombineListViewItem_o *this,
        UserServantEntity_o *entity,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.userSvtEntity = entity;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.userSvtEntity,
    (System_Int32_array **)entity,
    (System_String_array **)method,
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
    sub_B7076C(0LL, value);
  this->fields.dragSelectNum = ~value << 31 >> 31;
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