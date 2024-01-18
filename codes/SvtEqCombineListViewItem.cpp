// local variable allocation has failed, the output may be wrong!
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
  IconLabelInfo_o *v34; // x21
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  IconLabelInfo_o *v41; // x22
  struct IconLabelInfo_o **p_iconLabelInfo2; // x21
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_userSvtEntity; // x22
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  int64_t Instance; // x0
  int64_t v57; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v58; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v59; // x24
  __int64 v60; // x26
  __int64 v61; // x27
  struct ServantEntity_o *Entity; // x0
  struct ServantEntity_o **p_servantEntity; // x27
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  struct UserServantEntity_o *v70; // x8
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  struct ServantEntity_o *servantEntity; // x8
  System_String_array **v78; // x2
  System_String_array **v79; // x3
  System_Boolean_array **v80; // x4
  System_Int32_array **v81; // x5
  System_Int32_array *v82; // x6
  System_Int32_array *v83; // x7
  ServantLimitMaster_o *v84; // x20
  int32_t v85; // w24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v86; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v87; // q1
  UserServantCollectionMaster_o *v88; // x20
  int64_t v89; // x24
  struct UserServantEntity_o *v90; // x8
  int32_t v91; // w0
  UserServantEntity_o *v92; // x8
  bool IsChocolateSvtEquip; // w0
  int32_t v94; // w8
  int v95; // w25
  int32_t v96; // w8
  UserServantEntity_o *v97; // x8
  UserServantEntity_o *v98; // x8
  UserServantEntity_o *v99; // x8
  struct UserServantEntity_o *v100; // x8
  __int128 v101; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v102; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v103; // q0
  int64_t v104; // x20
  __int128 v105; // q0
  __int64 v106; // x1
  __int64 v107; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v110; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v113; // x8
  unsigned __int64 v114; // x10
  int32_t *v115; // x11
  __int64 v116; // x0
  _QWORD *v117; // x0
  __int64 v118; // x1
  __int64 v119; // x9
  __int64 v120; // x8
  __int128 v121; // q0
  int64_t v122; // x0
  __int64 v123; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v124; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v125; // q0
  System_Collections_Generic_IEnumerator_T__c *v126; // x8
  unsigned __int64 v127; // x10
  int32_t *v128; // x11
  __int64 v129; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v130; // x8
  __int64 v131; // x20
  __int64 v132; // x24
  int32_t v133; // w20
  struct UserServantEntity_o *v134; // x8
  __int128 v135; // q0
  int64_t v136; // x0
  __int128 v137; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v138; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v139; // q0
  __int64 v140; // x1
  __int64 v141; // x3
  System_Collections_Generic_IEnumerator_T__o *v142; // x23
  System_Collections_Generic_IEnumerator_T__c *v143; // x8
  unsigned __int64 v144; // x10
  int32_t *v145; // x11
  __int64 v146; // x0
  System_Collections_Generic_IEnumerator_T__c *v147; // x8
  unsigned __int64 v148; // x10
  int32_t *v149; // x11
  __int64 v150; // x0
  _QWORD *v151; // x0
  __int64 v152; // x1
  __int64 v153; // x9
  __int64 v154; // x8
  __int128 v155; // q0
  int64_t v156; // x0
  __int64 v157; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v158; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v159; // q0
  int v160; // w25
  System_Collections_Generic_IEnumerator_T__c *v161; // x8
  unsigned __int64 v162; // x10
  int32_t *v163; // x11
  __int64 v164; // x0
  UserServantEntity_o *v165; // x8
  bool IsChoice; // w0
  bool isFriendShipSvtEq; // w9
  struct ServantEntity_o *v168; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v169; // x8
  __int64 v170; // x20
  __int64 v171; // x22
  int32_t v172; // w8
  struct System_Int32_array *EquipCategoryIdList; // x0
  System_String_array **v174; // x2
  System_String_array **v175; // x3
  System_Boolean_array **v176; // x4
  System_Int32_array **v177; // x5
  System_Int32_array *v178; // x6
  System_Int32_array *v179; // x7
  bool v180; // [xsp+14h] [xbp-20Ch]
  UserDeckMaster_o *MasterData_WarQuestSelectionMaster; // [xsp+18h] [xbp-208h]
  int32_t v182; // [xsp+24h] [xbp-1FCh]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v184; // [xsp+30h] [xbp-1F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v185; // [xsp+50h] [xbp-1D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v186; // [xsp+70h] [xbp-1B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v187; // [xsp+90h] [xbp-190h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v188; // [xsp+B0h] [xbp-170h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v189; // [xsp+D0h] [xbp-150h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v190; // [xsp+F0h] [xbp-130h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v191; // [xsp+110h] [xbp-110h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v192; // [xsp+130h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v193; // [xsp+150h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v194; // [xsp+170h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v195; // [xsp+190h] [xbp-90h]
  int v196[4]; // [xsp+1B0h] [xbp-70h]
  int v197; // [xsp+1C0h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v198; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v199; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v200; // 0:x0.16

  if ( (byte_418B188 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&type);
    sub_B2C35C(&Method_DataManager_GetMasterData_CombineMaterialMaster___, v17);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantClassMaster___, v18);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitMaster___, v19);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v20);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserDeckMaster___, v21);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v22);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantLeaderMaster___, v23);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v24);
    sub_B2C35C(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v25);
    sub_B2C35C(&System_IDisposable_TypeInfo, v26);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v27);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v28);
    sub_B2C35C(&IconLabelInfo_TypeInfo, v29);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v30);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v31);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v32);
    sub_B2C35C(&UserServantLeaderEntity_TypeInfo, v33);
    byte_418B188 = 1;
  }
  v197 = 0;
  v34 = (IconLabelInfo_o *)sub_B2C42C(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v34, 0LL);
  this->fields.iconLabelInfo1 = v34;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo1,
    (System_Int32_array **)v34,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  v41 = (IconLabelInfo_o *)sub_B2C42C(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v41, 0LL);
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  this->fields.iconLabelInfo2 = v41;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo2,
    (System_Int32_array **)v41,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
  ListViewItem___ctor((ListViewItem_o *)this, 0LL);
  this->fields.userSvtEntity = userSvtEntity;
  p_userSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userSvtEntity;
  v182 = type;
  this->fields.type = type;
  this->fields.index = index;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.userSvtEntity,
    (System_Int32_array **)userSvtEntity,
    v50,
    v51,
    v52,
    v53,
    v54,
    v55);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_169;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  v58 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_169;
  v59 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v61 = *(_QWORD *)&v58[5].fields.currentCryptoKey;
  v60 = *(_QWORD *)&v58[5].fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v198.fields.currentCryptoKey = v61;
  *(_QWORD *)&v198.fields.fakeValue = v60;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v198, 0LL);
  if ( !v59 )
    goto LABEL_169;
  Entity = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                       v59,
                                       Instance,
                                       (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = Entity;
  p_servantEntity = &this->fields.servantEntity;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.servantEntity,
    (System_Int32_array **)Entity,
    v64,
    v65,
    v66,
    v67,
    v68,
    v69);
  v70 = this->fields.userSvtEntity;
  if ( !v70 )
    goto LABEL_169;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v70->fields.svtId, 0LL);
  servantEntity = this->fields.servantEntity;
  this->fields.svtId = Instance;
  if ( !servantEntity )
    goto LABEL_169;
  this->fields.classId = servantEntity->fields.classId;
  this->fields.setupInfo = setupInfo;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.setupInfo,
    (System_Int32_array **)setupInfo,
    v71,
    v72,
    v73,
    v74,
    v75,
    v76);
  this->fields.finishSetupInfo = finishSetupInfo;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.finishSetupInfo,
    (System_Int32_array **)finishSetupInfo,
    v78,
    v79,
    v80,
    v81,
    v82,
    v83);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_169;
  MasterData_WarQuestSelectionMaster = (UserDeckMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)Instance,
                                                             (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserDeckMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_169;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtEntity )
    goto LABEL_169;
  v84 = (ServantLimitMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064((*p_userSvtEntity)[5], 0LL);
  if ( !*p_userSvtEntity )
    goto LABEL_169;
  v85 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064((*p_userSvtEntity)[6], 0LL);
  if ( !v84 )
    goto LABEL_169;
  Instance = (int64_t)ServantLimitMaster__GetEntity(v84, v85, Instance, 0LL);
  if ( !Instance )
    goto LABEL_169;
  this->fields.rarity = *(_DWORD *)(Instance + 24);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_169;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v86 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_169;
  v87 = v86[4];
  v88 = (UserServantCollectionMaster_o *)Instance;
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v195.fields.currentCryptoKey = v86[3];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v195.fields.fakeValue = v87;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v194 = v195;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v194, 0LL);
  if ( !*p_userSvtEntity )
    goto LABEL_169;
  v89 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064((*p_userSvtEntity)[5], 0LL);
  if ( !v88 )
    goto LABEL_169;
  Instance = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(v88, v89, Instance, 0LL);
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
  v90 = this->fields.userSvtEntity;
  this->fields.maxLimitCnt = Instance;
  if ( !v90 )
    goto LABEL_169;
  v91 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v90->fields.limitCount, 0LL);
  *(_DWORD *)&this->fields.isBaseLvMax = 0;
  this->fields.currentLimitCnt = v91;
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
  v92 = this->fields.userSvtEntity;
  this->fields.isFriendShipSvtEq = Instance & 1;
  if ( !v92 )
    goto LABEL_169;
  IsChocolateSvtEquip = UserServantEntity__IsChocolateSvtEquip(v92, 0LL);
  v94 = this->fields.type;
  this->fields.isChocolateSvtEquip = IsChocolateSvtEquip;
  v180 = isFavorite;
  if ( v94 )
  {
    v95 = 0;
  }
  else
  {
    Instance = (int64_t)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_169;
    Instance = UserServantEntity__isLevelMax((UserServantEntity_o *)Instance, 0LL);
    v97 = this->fields.userSvtEntity;
    this->fields.isLvMax = Instance & 1;
    if ( !v97 )
      goto LABEL_169;
    Instance = UserServantEntity__isLimitCountMax(v97, 0LL);
    v98 = this->fields.userSvtEntity;
    this->fields.isLimitCntMax = Instance & 1;
    if ( !v98 )
      goto LABEL_169;
    Instance = UserServantEntity__IsLock(v98, 0LL);
    v99 = this->fields.userSvtEntity;
    this->fields.isLock = Instance & 1;
    if ( !v99 )
      goto LABEL_169;
    Instance = UserServantEntity__IsChoice(v99, 0LL);
    v100 = this->fields.userSvtEntity;
    this->fields.isChoice = Instance & 1;
    if ( !v100 )
      goto LABEL_169;
    v101 = *(_OWORD *)&v100->fields.id.fields.fakeValue;
    *(_OWORD *)&v195.fields.currentCryptoKey = *(_OWORD *)&v100->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v195.fields.fakeValue = v101;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v193 = v195;
    v57 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v193, 0LL);
    Instance = (int64_t)MasterData_WarQuestSelectionMaster;
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_169;
    Instance = UserDeckMaster__IsEquip(MasterData_WarQuestSelectionMaster, v57, 0LL);
    this->fields.isEquiped = Instance & 1;
    if ( baseUsrSvtData )
    {
      v102 = *p_userSvtEntity;
      if ( !*p_userSvtEntity )
        goto LABEL_169;
      v103 = v102[2];
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v195.fields.currentCryptoKey = v102[1];
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v195.fields.fakeValue = v103;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v192 = v195;
      v104 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v192, 0LL);
      v105 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
      *(_OWORD *)&v191.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v191.fields.fakeValue = v105;
      if ( v104 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v191, 0LL) )
        this->fields.isBaseSvt = 1;
    }
    Instance = (int64_t)*p_servantEntity;
    if ( !*p_servantEntity )
      goto LABEL_169;
    if ( ServantEntity__get_IsServantEquipMaterial((ServantEntity_o *)Instance, 0LL) )
      this->fields.isSvtEqMaterial = 1;
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_169;
    Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantLeaderMaster___);
    if ( !Instance )
      goto LABEL_169;
    Instance = *(_QWORD *)(Instance + 32);
    if ( !Instance )
      goto LABEL_169;
    Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                   (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                   (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    if ( !Enumerator )
      sub_B2C434(0LL, v106);
    while ( 1 )
    {
      klass = Enumerator->klass;
      if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
      {
        v110 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v110;
          p_offset += 4;
          if ( v110 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
            goto LABEL_65;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_65:
        p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v107);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
              Enumerator,
              *(_QWORD *)(p_method + 8)) & 1) == 0 )
        break;
      v113 = Enumerator->klass;
      if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
      {
        v114 = 0LL;
        v115 = &v113->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v115 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
        {
          ++v114;
          v115 += 4;
          if ( v114 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
            goto LABEL_72;
        }
        v116 = (__int64)&v113->vtable[*v115].method;
      }
      else
      {
LABEL_72:
        v116 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v107);
      }
      v117 = (_QWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v116)(
                         Enumerator,
                         *(_QWORD *)(v116 + 8));
      if ( !v117 )
        sub_B2C434(0LL, v118);
      v119 = *(&UserServantLeaderEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*v117 + 300LL) < (unsigned int)v119
        || *(UserServantLeaderEntity_c **)(*(_QWORD *)(*v117 + 200LL) + 8 * v119 - 8) != UserServantLeaderEntity_TypeInfo )
      {
        goto LABEL_171;
      }
      v120 = v117[4];
      if ( v120 )
      {
        v121 = *(_OWORD *)(v120 + 40);
        *(_OWORD *)&v195.fields.currentCryptoKey = *(_OWORD *)(v120 + 24);
        *(_OWORD *)&v195.fields.fakeValue = v121;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v190 = v195;
        v122 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v190, 0LL);
        v124 = *p_userSvtEntity;
        if ( !*p_userSvtEntity )
          sub_B2C434(v122, v123);
        v125 = v124[2];
        *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v189.fields.currentCryptoKey = v124[1];
        *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v189.fields.fakeValue = v125;
        if ( v122 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v189, 0LL) )
        {
          v95 = 1;
          this->fields.isUseSupportEquip = 1;
          goto LABEL_85;
        }
      }
    }
    v95 = 1;
LABEL_85:
    v196[0] = 774;
    v197 = 1;
    p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
    v126 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v127 = 0LL;
      v128 = &v126->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v128 - 1) != System_IDisposable_TypeInfo )
      {
        ++v127;
        v128 += 4;
        if ( v127 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_90;
      }
      v129 = (__int64)&v126->vtable[*v128].method;
    }
    else
    {
LABEL_90:
      v129 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v107);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v129)(
      Enumerator,
      *(_QWORD *)(v129 + 8));
    if ( v196[0] == 774 )
    {
      v95 = 0;
      v197 = 0;
    }
  }
  if ( v182 != 1 )
    goto LABEL_153;
  this->fields.isMaterialSvt = isMtSvt;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_169;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_CombineMaterialMaster___);
  if ( !*p_servantEntity || !*p_userSvtEntity || !Instance )
    goto LABEL_169;
  Instance = (int64_t)CombineMaterialMaster__GetEntity(
                        (CombineMaterialMaster_o *)Instance,
                        (*p_servantEntity)->fields.combineMaterialId,
                        (*p_userSvtEntity)[16].fields.currentCryptoKey,
                        0LL);
  v96 = Instance ? *(_DWORD *)(Instance + 24) : 0;
  this->fields.materialExp = v96;
  if ( baseUsrSvtData )
  {
    v130 = *p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_169;
    v132 = *(_QWORD *)&v130[5].fields.currentCryptoKey;
    v131 = *(_QWORD *)&v130[5].fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v199.fields.currentCryptoKey = v132;
    *(_QWORD *)&v199.fields.fakeValue = v131;
    v133 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v199, 0LL);
    if ( v133 == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(baseUsrSvtData->fields.svtId, 0LL) )
    {
      Instance = UserServantEntity__isLimitCountMax(baseUsrSvtData, 0LL);
      v134 = this->fields.userSvtEntity;
      this->fields.isLimitCntMax = Instance & 1;
      this->fields.isLimitCntTarget = (Instance & 1) == 0;
      if ( !v134 )
        goto LABEL_169;
      v135 = *(_OWORD *)&v134->fields.id.fields.fakeValue;
      *(_OWORD *)&v195.fields.currentCryptoKey = *(_OWORD *)&v134->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v195.fields.fakeValue = v135;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v188 = v195;
      v136 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v188, 0LL);
      v137 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
      *(_OWORD *)&v187.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v187.fields.fakeValue = v137;
      if ( v136 != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v187, 0LL) )
        this->fields.isSameSvt = 1;
    }
    Instance = UserServantEntity__isLevelMax(baseUsrSvtData, 0LL);
    this->fields.isBaseLvMax = Instance & 1;
  }
  else
  {
    this->fields.isLimitCntTarget = 0;
  }
  v138 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_169;
  v139 = v138[2];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v195.fields.currentCryptoKey = v138[1];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v195.fields.fakeValue = v139;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v186 = v195;
  v57 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v186, 0LL);
  Instance = (int64_t)MasterData_WarQuestSelectionMaster;
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_169;
  this->fields.isEquiped = UserDeckMaster__IsEquip_26980964(
                             MasterData_WarQuestSelectionMaster,
                             v57,
                             &this->fields.partyIndex,
                             0LL);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_169;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantLeaderMaster___);
  if ( !Instance )
    goto LABEL_169;
  Instance = *(_QWORD *)(Instance + 32);
  if ( !Instance )
    goto LABEL_169;
  v142 = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
           (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
           (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !v142 )
    sub_B2C434(0LL, v140);
  while ( 1 )
  {
    v143 = v142->klass;
    if ( *(_WORD *)&v142->klass->_2.bitflags1 )
    {
      v144 = 0LL;
      v145 = &v143->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)v145 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v144;
        v145 += 4;
        if ( v144 >= *(unsigned __int16 *)&v142->klass->_2.bitflags1 )
          goto LABEL_119;
      }
      v146 = (__int64)&v143->vtable[*v145].method;
    }
    else
    {
LABEL_119:
      v146 = sub_AC5258(v142, System_Collections_IEnumerator_TypeInfo, 0LL, v141);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v146)(
            v142,
            *(_QWORD *)(v146 + 8)) & 1) == 0 )
      break;
    v147 = v142->klass;
    if ( *(_WORD *)&v142->klass->_2.bitflags1 )
    {
      v148 = 0LL;
      v149 = &v147->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v149 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v148;
        v149 += 4;
        if ( v148 >= *(unsigned __int16 *)&v142->klass->_2.bitflags1 )
          goto LABEL_126;
      }
      v150 = (__int64)&v147->vtable[*v149].method;
    }
    else
    {
LABEL_126:
      v150 = sub_AC5258(v142, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v141);
    }
    v151 = (_QWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v150)(
                       v142,
                       *(_QWORD *)(v150 + 8));
    if ( !v151 )
      goto LABEL_172;
    v153 = *(&UserServantLeaderEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*v151 + 300LL) < (unsigned int)v153
      || *(UserServantLeaderEntity_c **)(*(_QWORD *)(*v151 + 200LL) + 8 * v153 - 8) != UserServantLeaderEntity_TypeInfo )
    {
      sub_B2C728(v151);
LABEL_171:
      sub_B2C728(v117);
LABEL_172:
      sub_B2C434(v151, v152);
    }
    v154 = v151[4];
    if ( v154 )
    {
      v155 = *(_OWORD *)(v154 + 40);
      *(_OWORD *)&v195.fields.currentCryptoKey = *(_OWORD *)(v154 + 24);
      *(_OWORD *)&v195.fields.fakeValue = v155;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v185 = v195;
      v156 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v185, 0LL);
      v158 = *p_userSvtEntity;
      if ( !*p_userSvtEntity )
        sub_B2C434(v156, v157);
      v159 = v158[2];
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v184.fields.currentCryptoKey = v158[1];
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v184.fields.fakeValue = v159;
      if ( v156 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v184, 0LL) )
      {
        this->fields.isUseSupportEquip = 1;
        v196[v95] = 1115;
        goto LABEL_139;
      }
    }
  }
  v196[v95] = 1115;
LABEL_139:
  v160 = ++v197;
  v161 = v142->klass;
  if ( *(_WORD *)&v142->klass->_2.bitflags1 )
  {
    v162 = 0LL;
    v163 = &v161->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v163 - 1) != System_IDisposable_TypeInfo )
    {
      ++v162;
      v163 += 4;
      if ( v162 >= *(unsigned __int16 *)&v142->klass->_2.bitflags1 )
        goto LABEL_144;
    }
    v164 = (__int64)&v161->vtable[*v163].method;
  }
  else
  {
LABEL_144:
    v164 = sub_AC5258(v142, System_IDisposable_TypeInfo, 0LL, v141);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v164)(v142, *(_QWORD *)(v164 + 8));
  if ( v160 && v196[v160 - 1] == 1115 )
    v197 = v160 - 1;
  Instance = (int64_t)*p_userSvtEntity;
  if ( !*p_userSvtEntity
    || (Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL),
        v165 = this->fields.userSvtEntity,
        this->fields.isLock = Instance & 1,
        !v165) )
  {
LABEL_169:
    sub_B2C434(Instance, v57);
  }
  IsChoice = UserServantEntity__IsChoice(v165, 0LL);
  isFriendShipSvtEq = this->fields.isFriendShipSvtEq;
  this->fields.isChoice = IsChoice;
  this->fields.isFavorite = v180;
  this->fields.isNotSelection = isFriendShipSvtEq;
LABEL_153:
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_169;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Instance )
    goto LABEL_169;
  Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                        (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                        this->fields.classId,
                        (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_169;
  v168 = this->fields.servantEntity;
  this->fields.sortValue1B = *(int *)(Instance + 48);
  if ( !v168 )
    goto LABEL_169;
  v169 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_169;
  this->fields.sortValue2 = ((__int64)v168->fields.collectionNo << 16) | ((unsigned __int64)(unsigned int)this->fields.rarity << 48) | v169[16].fields.currentCryptoKey;
  v171 = *(_QWORD *)&v169[5].fields.currentCryptoKey;
  v170 = *(_QWORD *)&v169[5].fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v200.fields.currentCryptoKey = v171;
  *(_QWORD *)&v200.fields.fakeValue = v170;
  v172 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v200, 0LL);
  Instance = (int64_t)this->fields.userSvtEntity;
  this->fields.sortValue2B = v172;
  this->fields.amountSortValue = -1LL;
  if ( !Instance )
    goto LABEL_169;
  EquipCategoryIdList = UserServantEntity__GetEquipCategoryIdList((UserServantEntity_o *)Instance, 0LL);
  this->fields.categoryIdList = EquipCategoryIdList;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.categoryIdList,
    (System_Int32_array **)EquipCategoryIdList,
    v174,
    v175,
    v176,
    v177,
    v178,
    v179);
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
  __int64 v5; // x1
  __int64 v6; // x1
  FilterKindList_c *v7; // x0
  Voice_BATTLE_array *RarityFilterKindList; // x0
  FilterKindList_c *v9; // x0
  ListViewSort_FilterKind_array *v10; // x0
  __int64 v12; // x0

  if ( (byte_418B18A & 1) == 0 )
  {
    sub_B2C35C(&FilterKindList_TypeInfo, sort);
    sub_B2C35C(&ListViewSort_FilterKind___TypeInfo, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v6);
    byte_418B18A = 1;
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
    && !ServantEquipEffectFilterController__IsMatchEffectCategory(this->fields.categoryIdList, sort, 0LL) )
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


void __fastcall SvtEqCombineListViewItem__ModifyChoiceItem(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0

  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_B2C434(0LL, method);
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
    sub_B2C434(0LL, method);
  this->fields.isLock = UserServantEntity__IsLock(userSvtEntity, 0LL);
  this->fields.isSwapLock = 0;
}


bool __fastcall SvtEqCombineListViewItem__SetSortValue(
        SvtEqCombineListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  SvtEqCombineListViewItem_o *v4; // x19
  __int64 v5; // x1
  struct EventUpValSetupInfo_o *setupInfo; // x8
  struct System_Int32_array *servantEquipFilterEventIdList; // x8
  EventUpValSetupInfo_o *v8; // x21
  SvtEqCombineListViewItem_o *userSvtEntity; // x22
  EventUpValSetupInfo_o *v10; // x0
  int32_t v11; // w5
  int32_t *p_bonusKind2Id; // x8
  struct EventUpValSetupInfo_o *finishSetupInfo; // x8
  struct System_Int32_array *v14; // x8
  EventUpValSetupInfo_o *v15; // x21
  SvtEqCombineListViewItem_o *v16; // x22
  EventUpValSetupInfo_o *v17; // x0
  int32_t v18; // w5
  int32_t *v19; // x8
  bool EventUpVal_21652484; // w0
  _BOOL4 isSwapChoice; // w21
  _BOOL4 isChoice; // w22
  const MethodInfo *v23; // x2
  int64_t *p_sortValue0; // x8
  int v25; // w9
  __int64 v26; // x10
  int32_t type; // w9
  __int64 v28; // x9
  __int64 v29; // x10
  struct UserServantEntity_o *v30; // x8
  __int128 v31; // q1
  struct UserServantEntity_o *v32; // x8
  IconLabelInfo_o *iconLabelInfo1; // x19
  struct UserServantEntity_o *v34; // x8
  int32_t adjustHp; // w3
  int32_t hp; // w2
  int32_t v37; // w1
  struct UserServantEntity_o *v38; // x8
  struct ServantEntity_o *servantEntity; // x8
  int32_t bonusKind; // w20
  __int64 v41; // x10
  struct ServantEntity_o *v42; // x8
  __int64 collectionNo; // x10
  SvtEqCombineListViewItem_o *v44; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v46; // [xsp+10h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v47; // [xsp+30h] [xbp-40h]

  v4 = this;
  if ( (byte_418B189 & 1) == 0 )
  {
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, sort);
    this = (SvtEqCombineListViewItem_o *)sub_B2C35C(&SvtEqCombineListViewManager_TypeInfo, v5);
    byte_418B189 = 1;
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
  v8 = v4->fields.setupInfo;
  if ( !v8 || !sort )
    goto LABEL_112;
  if ( v8->fields.isQuestStart )
  {
    if ( sort->fields.bonusKind != 1 )
      goto LABEL_23;
    if ( v4->fields.bonusKind != 1 )
    {
      userSvtEntity = (SvtEqCombineListViewItem_o *)v4->fields.userSvtEntity;
      v10 = v4->fields.setupInfo;
      v4->fields.bonusKind = 1;
      this = (SvtEqCombineListViewItem_o *)EventUpValSetupInfo__get_ServantEquipFilterEventId(v10, 0LL);
      if ( !userSvtEntity )
        goto LABEL_112;
      v11 = (int)this;
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
  v11 = *p_bonusKind2Id;
  this = (SvtEqCombineListViewItem_o *)v4->fields.userSvtEntity;
  v4->fields.bonusKindId = *p_bonusKind2Id;
  if ( !this )
    goto LABEL_112;
LABEL_22:
  this = (SvtEqCombineListViewItem_o *)UserServantEntity__getEventUpVal_21652484(
                                         (UserServantEntity_o *)this,
                                         -1,
                                         0,
                                         0,
                                         v8,
                                         v11,
                                         0,
                                         0LL);
  v4->fields.isEventUpVal = (unsigned __int8)this & 1;
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_68;
LABEL_23:
  finishSetupInfo = v4->fields.finishSetupInfo;
  if ( !finishSetupInfo )
    goto LABEL_43;
  v14 = finishSetupInfo->fields.servantEquipFilterEventIdList;
  if ( !v14 )
    goto LABEL_112;
  if ( !*(_QWORD *)&v14->max_length )
    goto LABEL_43;
  if ( v4->fields.isBaseSvt )
    goto LABEL_43;
  this = (SvtEqCombineListViewItem_o *)ListViewItem__get_IsSelect((ListViewItem_o *)v4, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
    goto LABEL_43;
  v15 = v4->fields.finishSetupInfo;
  if ( !v15 || !sort )
    goto LABEL_112;
  if ( v15->fields.isQuestStart )
  {
    if ( sort->fields.bonusKind != 5 )
      goto LABEL_43;
    if ( v4->fields.bonusKind != 5 )
    {
      v16 = (SvtEqCombineListViewItem_o *)v4->fields.userSvtEntity;
      v17 = v4->fields.finishSetupInfo;
      v4->fields.bonusKind = 5;
      this = (SvtEqCombineListViewItem_o *)EventUpValSetupInfo__get_ServantEquipFilterEventId(v17, 0LL);
      if ( !v16 )
        goto LABEL_112;
      v18 = (int)this;
      this = v16;
      goto LABEL_42;
    }
    goto LABEL_38;
  }
  if ( sort->fields.bonusKind2 != 5 )
    goto LABEL_43;
  if ( v4->fields.bonusKind != 5 )
  {
    v19 = &sort->fields.bonusKind2Id;
LABEL_41:
    v4->fields.bonusKind = 5;
    v18 = *v19;
    this = (SvtEqCombineListViewItem_o *)v4->fields.userSvtEntity;
    v4->fields.bonusKindId = *v19;
    if ( !this )
      goto LABEL_112;
LABEL_42:
    EventUpVal_21652484 = UserServantEntity__getEventUpVal_21652484(
                            (UserServantEntity_o *)this,
                            -1,
                            0,
                            0,
                            v15,
                            v18,
                            1,
                            0LL);
    v4->fields.isEventUpVal = EventUpVal_21652484;
    if ( EventUpVal_21652484 )
      goto LABEL_43;
LABEL_68:
    LOBYTE(this) = 0;
    return (char)this;
  }
  v19 = &sort->fields.bonusKind2Id;
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
  v25 = isSwapChoice ^ isChoice;
  if ( !sort->fields.isSmartSort )
  {
    if ( (v25 ^ 1) & 1 | !sort->fields.isChoiceSort )
      goto LABEL_71;
    type = v4->fields.type;
    if ( type == 1 )
    {
      v28 = -10LL;
    }
    else
    {
      if ( type )
        goto LABEL_71;
      v28 = 10LL;
    }
    *p_sortValue0 = v28;
    goto LABEL_71;
  }
  if ( !v4->fields.type )
  {
    if ( v4->fields.isEquiped || v4->fields.isUseSupportEquip )
    {
      v29 = 20LL;
    }
    else
    {
      if ( !v4->fields.isLvMax || !v4->fields.isLimitCntMax )
      {
LABEL_60:
        if ( !((v25 ^ 1) & 1 | !sort->fields.isChoiceSort) )
          v4->fields.sortValue0B = 10LL;
        goto LABEL_71;
      }
      v29 = -10LL;
    }
    *p_sortValue0 = v29;
    goto LABEL_60;
  }
  if ( v4->fields.isSameSvt )
  {
    v26 = 20LL;
LABEL_66:
    *p_sortValue0 = v26;
    if ( !((v25 ^ 1) & 1 | !sort->fields.isChoiceSort) )
      *(_OWORD *)p_sortValue0 = xmmword_31B4050;
    goto LABEL_71;
  }
  v26 = -10LL;
  if ( v4->fields.isSwapLock != v4->fields.isLock )
    goto LABEL_66;
  if ( !v4->fields.isNotSelection )
    v26 = -20LL;
  if ( (v4->fields.isNotSelection | v25) == 1 )
    goto LABEL_66;
LABEL_71:
  this = (SvtEqCombineListViewItem_o *)(&dword_0 + 1);
  switch ( sort->fields.sortKind )
  {
    case 1:
      v30 = v4->fields.userSvtEntity;
      if ( !v30 )
        goto LABEL_112;
      v31 = *(_OWORD *)&v30->fields.id.fields.fakeValue;
      *(_OWORD *)&v47.fields.currentCryptoKey = *(_OWORD *)&v30->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v47.fields.fakeValue = v31;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v46 = v47;
      this = (SvtEqCombineListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(
                                             &v46,
                                             0LL);
      v32 = v4->fields.userSvtEntity;
      v4->fields.sortValue1 = (int64_t)this;
      if ( !v32 )
        goto LABEL_112;
      this = (SvtEqCombineListViewItem_o *)v4->fields.iconLabelInfo1;
      if ( !this )
        goto LABEL_112;
      IconLabelInfo__SetTime((IconLabelInfo_o *)this, 49, v32->fields.createdAt, 0, 0, 0, 0LL);
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
      v34 = v4->fields.userSvtEntity;
      if ( !v34 )
        goto LABEL_112;
      this = (SvtEqCombineListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = v34->fields.hp;
      if ( !this )
        goto LABEL_112;
      adjustHp = v34->fields.adjustHp;
      hp = v34->fields.hp;
      v37 = 3;
      goto LABEL_90;
    case 6:
      v38 = v4->fields.userSvtEntity;
      if ( !v38 )
        goto LABEL_112;
      this = (SvtEqCombineListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = v38->fields.atk;
      if ( !this )
        goto LABEL_112;
      adjustHp = v38->fields.adjustAtk;
      hp = v38->fields.atk;
      v37 = 5;
LABEL_90:
      IconLabelInfo__Set_27362128((IconLabelInfo_o *)this, v37, hp, adjustHp, 0, 0, 0, 0, 0LL);
      goto LABEL_94;
    case 7:
      servantEntity = v4->fields.servantEntity;
      if ( !servantEntity )
        goto LABEL_112;
      this = (SvtEqCombineListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = servantEntity->fields.cost;
      if ( !this )
        goto LABEL_112;
      IconLabelInfo__Set_27362128((IconLabelInfo_o *)this, 7, servantEntity->fields.cost, 0, 0, 0, 0, 0, 0LL);
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
      v41 = *(&SvtEqCombineListViewManager_TypeInfo->_2.bitflags2 + 1);
      if ( *(&this->klass->_2.bitflags2 + 1) < (unsigned int)v41
        || (SvtEqCombineListViewManager_c *)this->klass->_2.typeHierarchy[v41 - 1] != SvtEqCombineListViewManager_TypeInfo )
      {
        goto LABEL_112;
      }
      this = (SvtEqCombineListViewItem_o *)SvtEqCombineListViewManager__GetAmountSortValue(
                                             (SvtEqCombineListViewManager_o *)this,
                                             v4->fields.svtId,
                                             v23);
      v4->fields.amountSortValue = (int64_t)this;
LABEL_106:
      v42 = v4->fields.servantEntity;
      if ( !v42 )
        goto LABEL_112;
      collectionNo = v42->fields.collectionNo;
      v44 = (SvtEqCombineListViewItem_o *)v4->fields.userSvtEntity;
      v4->fields.sortValue1 = (((unsigned __int64)(unsigned int)v4->fields.rarity << 32) + ((_QWORD)this << 48)) | collectionNo;
      if ( !v44 )
        goto LABEL_112;
      iconLabelInfo1 = v4->fields.iconLabelInfo1;
      bonusKind = v44->fields.bonusKind;
      this = v44;
      break;
    default:
      return (char)this;
  }
  this = (SvtEqCombineListViewItem_o *)UserServantEntity__getLevelMax((UserServantEntity_o *)this, 0LL);
  if ( !iconLabelInfo1 )
LABEL_112:
    sub_B2C434(this, sort);
  IconLabelInfo__Set_27362128(iconLabelInfo1, 2, bonusKind, (int32_t)this, 0, 0, 0, 0, 0LL);
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
    sub_B2C434(0LL, method);
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
    sub_B2C434(this, method);
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
  if ( (byte_418B18B & 1) == 0 )
  {
    this = (SvtEqCombineListViewItem_o *)sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
    byte_418B18B = 1;
  }
  userSvtEntity = v2->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_B2C434(this, method);
  v4 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v7.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v7.fields.fakeValue = v4;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v6 = v7;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v6, 0LL);
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
  sub_B2C2F8(
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
    sub_B2C434(0LL, value);
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