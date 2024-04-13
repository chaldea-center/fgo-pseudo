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
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  int v56; // w1
  int v57; // w2
  __int64 v58; // x3
  int v59; // w1
  int v60; // w2
  __int64 v61; // x3
  int v62; // w1
  int v63; // w2
  __int64 v64; // x3
  int v65; // w1
  int v66; // w2
  __int64 v67; // x3
  IconLabelInfo_o *v68; // x21
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  IconLabelInfo_o *v75; // x22
  struct IconLabelInfo_o **p_iconLabelInfo2; // x21
  System_String_array **v77; // x2
  System_String_array **v78; // x3
  System_Boolean_array **v79; // x4
  System_Int32_array **v80; // x5
  System_Int32_array *v81; // x6
  System_Int32_array *v82; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_userSvtEntity; // x22
  System_String_array **v84; // x2
  System_String_array **v85; // x3
  System_Boolean_array **v86; // x4
  System_Int32_array **v87; // x5
  System_Int32_array *v88; // x6
  System_Int32_array *v89; // x7
  int64_t Instance; // x0
  int64_t v91; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v92; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v93; // x24
  __int64 v94; // x26
  __int64 v95; // x27
  struct ServantEntity_o *Entity; // x0
  struct ServantEntity_o **p_servantEntity; // x27
  System_String_array **v98; // x2
  System_String_array **v99; // x3
  System_Boolean_array **v100; // x4
  System_Int32_array **v101; // x5
  System_Int32_array *v102; // x6
  System_Int32_array *v103; // x7
  struct UserServantEntity_o *v104; // x8
  System_String_array **v105; // x2
  System_String_array **v106; // x3
  System_Boolean_array **v107; // x4
  System_Int32_array **v108; // x5
  System_Int32_array *v109; // x6
  System_Int32_array *v110; // x7
  struct ServantEntity_o *servantEntity; // x8
  System_String_array **v112; // x2
  System_String_array **v113; // x3
  System_Boolean_array **v114; // x4
  System_Int32_array **v115; // x5
  System_Int32_array *v116; // x6
  System_Int32_array *v117; // x7
  ServantLimitMaster_o *v118; // x20
  int32_t v119; // w24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v120; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v121; // q1
  UserServantCollectionMaster_o *v122; // x20
  int64_t v123; // x24
  struct UserServantEntity_o *v124; // x8
  int32_t v125; // w0
  UserServantEntity_o *v126; // x8
  bool IsChocolateSvtEquip; // w0
  int32_t v128; // w8
  int v129; // w25
  int32_t v130; // w8
  UserServantEntity_o *v131; // x8
  UserServantEntity_o *v132; // x8
  UserServantEntity_o *v133; // x8
  struct UserServantEntity_o *v134; // x8
  __int128 v135; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v136; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v137; // q0
  int64_t v138; // x20
  __int128 v139; // q0
  __int64 v140; // x1
  __int64 v141; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v144; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
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
  System_Collections_Generic_IEnumerator_T__c *v160; // x8
  unsigned __int64 v161; // x10
  int32_t *v162; // x11
  __int64 v163; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v164; // x8
  __int64 v165; // x20
  __int64 v166; // x24
  int32_t v167; // w20
  struct UserServantEntity_o *v168; // x8
  __int128 v169; // q0
  int64_t v170; // x0
  __int128 v171; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v172; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v173; // q0
  __int64 v174; // x1
  __int64 v175; // x3
  System_Collections_Generic_IEnumerator_T__o *v176; // x23
  System_Collections_Generic_IEnumerator_T__c *v177; // x8
  unsigned __int64 v178; // x10
  int32_t *v179; // x11
  __int64 v180; // x0
  System_Collections_Generic_IEnumerator_T__c *v181; // x8
  unsigned __int64 v182; // x10
  int32_t *v183; // x11
  __int64 v184; // x0
  _QWORD *v185; // x0
  __int64 v186; // x1
  __int64 v187; // x9
  __int64 v188; // x8
  __int128 v189; // q0
  int64_t v190; // x0
  __int64 v191; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v192; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v193; // q0
  int v194; // w25
  System_Collections_Generic_IEnumerator_T__c *v195; // x8
  unsigned __int64 v196; // x10
  int32_t *v197; // x11
  __int64 v198; // x0
  UserServantEntity_o *v199; // x8
  bool IsChoice; // w0
  bool isFriendShipSvtEq; // w9
  struct ServantEntity_o *v202; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v203; // x8
  __int64 v204; // x20
  __int64 v205; // x22
  int32_t v206; // w8
  struct System_Int32_array *EquipCategoryIdList; // x0
  System_String_array **v208; // x2
  System_String_array **v209; // x3
  System_Boolean_array **v210; // x4
  System_Int32_array **v211; // x5
  System_Int32_array *v212; // x6
  System_Int32_array *v213; // x7
  bool v214; // [xsp+14h] [xbp-20Ch]
  UserDeckMaster_o *MasterData_WarQuestSelectionMaster; // [xsp+18h] [xbp-208h]
  int32_t v216; // [xsp+24h] [xbp-1FCh]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v218; // [xsp+30h] [xbp-1F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v219; // [xsp+50h] [xbp-1D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v220; // [xsp+70h] [xbp-1B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v221; // [xsp+90h] [xbp-190h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v222; // [xsp+B0h] [xbp-170h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v223; // [xsp+D0h] [xbp-150h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v224; // [xsp+F0h] [xbp-130h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v225; // [xsp+110h] [xbp-110h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v226; // [xsp+130h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v227; // [xsp+150h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v228; // [xsp+170h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v229; // [xsp+190h] [xbp-90h]
  int v230[4]; // [xsp+1B0h] [xbp-70h]
  int v231; // [xsp+1C0h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v232; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v233; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v234; // 0:x0.16

  if ( (byte_42EE4C6 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      type,
      index,
      userSvtEntity);
    sub_B5D5C4(&Method_DataManager_GetMasterData_CombineMaterialMaster___, v17, v18, v19);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantClassMaster___, v20, v21, v22);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantLimitMaster___, v23, v24, v25);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v26, v27, v28);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserDeckMaster___, v29, v30, v31);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v32, v33, v34);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantLeaderMaster___, v35, v36, v37);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v38, v39, v40);
    sub_B5D5C4(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v41, v42, v43);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v44, v45, v46);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v47, v48, v49);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v50, v51, v52);
    sub_B5D5C4(&IconLabelInfo_TypeInfo, v53, v54, v55);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v56, v57, v58);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v59, v60, v61);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v62, v63, v64);
    sub_B5D5C4(&UserServantLeaderEntity_TypeInfo, v65, v66, v67);
    byte_42EE4C6 = 1;
  }
  v231 = 0;
  v68 = (IconLabelInfo_o *)sub_B5D694(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v68, 0LL);
  this->fields.iconLabelInfo1 = v68;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo1,
    (System_Int32_array **)v68,
    v69,
    v70,
    v71,
    v72,
    v73,
    v74);
  v75 = (IconLabelInfo_o *)sub_B5D694(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v75, 0LL);
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  this->fields.iconLabelInfo2 = v75;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo2,
    (System_Int32_array **)v75,
    v77,
    v78,
    v79,
    v80,
    v81,
    v82);
  ListViewItem___ctor((ListViewItem_o *)this, 0LL);
  this->fields.userSvtEntity = userSvtEntity;
  p_userSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userSvtEntity;
  v216 = type;
  this->fields.type = type;
  this->fields.index = index;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.userSvtEntity,
    (System_Int32_array **)userSvtEntity,
    v84,
    v85,
    v86,
    v87,
    v88,
    v89);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_169;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  v92 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_169;
  v93 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v95 = *(_QWORD *)&v92[5].fields.currentCryptoKey;
  v94 = *(_QWORD *)&v92[5].fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v232.fields.currentCryptoKey = v95;
  *(_QWORD *)&v232.fields.fakeValue = v94;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v232, 0LL);
  if ( !v93 )
    goto LABEL_169;
  Entity = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                       v93,
                                       Instance,
                                       (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = Entity;
  p_servantEntity = &this->fields.servantEntity;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.servantEntity,
    (System_Int32_array **)Entity,
    v98,
    v99,
    v100,
    v101,
    v102,
    v103);
  v104 = this->fields.userSvtEntity;
  if ( !v104 )
    goto LABEL_169;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v104->fields.svtId, 0LL);
  servantEntity = this->fields.servantEntity;
  this->fields.svtId = Instance;
  if ( !servantEntity )
    goto LABEL_169;
  this->fields.classId = servantEntity->fields.classId;
  this->fields.setupInfo = setupInfo;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.setupInfo,
    (System_Int32_array **)setupInfo,
    v105,
    v106,
    v107,
    v108,
    v109,
    v110);
  this->fields.finishSetupInfo = finishSetupInfo;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.finishSetupInfo,
    (System_Int32_array **)finishSetupInfo,
    v112,
    v113,
    v114,
    v115,
    v116,
    v117);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_169;
  MasterData_WarQuestSelectionMaster = (UserDeckMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)Instance,
                                                             (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserDeckMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_169;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtEntity )
    goto LABEL_169;
  v118 = (ServantLimitMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288((*p_userSvtEntity)[5], 0LL);
  if ( !*p_userSvtEntity )
    goto LABEL_169;
  v119 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288((*p_userSvtEntity)[6], 0LL);
  if ( !v118 )
    goto LABEL_169;
  Instance = (int64_t)ServantLimitMaster__GetEntity(v118, v119, Instance, 0LL);
  if ( !Instance )
    goto LABEL_169;
  this->fields.rarity = *(_DWORD *)(Instance + 24);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_169;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v120 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_169;
  v121 = v120[4];
  v122 = (UserServantCollectionMaster_o *)Instance;
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v229.fields.currentCryptoKey = v120[3];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v229.fields.fakeValue = v121;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v228 = v229;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v228, 0LL);
  if ( !*p_userSvtEntity )
    goto LABEL_169;
  v123 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288((*p_userSvtEntity)[5], 0LL);
  if ( !v122 )
    goto LABEL_169;
  Instance = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(v122, v123, Instance, 0LL);
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
  v124 = this->fields.userSvtEntity;
  this->fields.maxLimitCnt = Instance;
  if ( !v124 )
    goto LABEL_169;
  v125 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v124->fields.limitCount, 0LL);
  *(_DWORD *)&this->fields.isBaseLvMax = 0;
  this->fields.currentLimitCnt = v125;
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
  v126 = this->fields.userSvtEntity;
  this->fields.isFriendShipSvtEq = Instance & 1;
  if ( !v126 )
    goto LABEL_169;
  IsChocolateSvtEquip = UserServantEntity__IsChocolateSvtEquip(v126, 0LL);
  v128 = this->fields.type;
  this->fields.isChocolateSvtEquip = IsChocolateSvtEquip;
  v214 = isFavorite;
  if ( v128 )
  {
    v129 = 0;
  }
  else
  {
    Instance = (int64_t)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_169;
    Instance = UserServantEntity__isLevelMax((UserServantEntity_o *)Instance, 0LL);
    v131 = this->fields.userSvtEntity;
    this->fields.isLvMax = Instance & 1;
    if ( !v131 )
      goto LABEL_169;
    Instance = UserServantEntity__isLimitCountMax(v131, 0LL);
    v132 = this->fields.userSvtEntity;
    this->fields.isLimitCntMax = Instance & 1;
    if ( !v132 )
      goto LABEL_169;
    Instance = UserServantEntity__IsLock(v132, 0LL);
    v133 = this->fields.userSvtEntity;
    this->fields.isLock = Instance & 1;
    if ( !v133 )
      goto LABEL_169;
    Instance = UserServantEntity__IsChoice(v133, 0LL);
    v134 = this->fields.userSvtEntity;
    this->fields.isChoice = Instance & 1;
    if ( !v134 )
      goto LABEL_169;
    v135 = *(_OWORD *)&v134->fields.id.fields.fakeValue;
    *(_OWORD *)&v229.fields.currentCryptoKey = *(_OWORD *)&v134->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v229.fields.fakeValue = v135;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v227 = v229;
    v91 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v227, 0LL);
    Instance = (int64_t)MasterData_WarQuestSelectionMaster;
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_169;
    Instance = UserDeckMaster__IsEquip(MasterData_WarQuestSelectionMaster, v91, 0LL);
    this->fields.isEquiped = Instance & 1;
    if ( baseUsrSvtData )
    {
      v136 = *p_userSvtEntity;
      if ( !*p_userSvtEntity )
        goto LABEL_169;
      v137 = v136[2];
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v229.fields.currentCryptoKey = v136[1];
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v229.fields.fakeValue = v137;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v226 = v229;
      v138 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v226, 0LL);
      v139 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
      *(_OWORD *)&v225.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v225.fields.fakeValue = v139;
      if ( v138 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v225, 0LL) )
        this->fields.isBaseSvt = 1;
    }
    Instance = (int64_t)*p_servantEntity;
    if ( !*p_servantEntity )
      goto LABEL_169;
    if ( ServantEntity__get_IsServantEquipMaterial((ServantEntity_o *)Instance, 0LL) )
      this->fields.isSvtEqMaterial = 1;
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_169;
    Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantLeaderMaster___);
    if ( !Instance )
      goto LABEL_169;
    Instance = *(_QWORD *)(Instance + 32);
    if ( !Instance )
      goto LABEL_169;
    Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                   (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                   (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    if ( !Enumerator )
      sub_B5D69C(0LL, v140);
    while ( 1 )
    {
      klass = Enumerator->klass;
      if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
      {
        v144 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v144;
          p_offset += 4;
          if ( v144 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
            goto LABEL_65;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_65:
        p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v141);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
              Enumerator,
              *(_QWORD *)(p_method + 8)) & 1) == 0 )
        break;
      v147 = Enumerator->klass;
      if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
      {
        v148 = 0LL;
        v149 = &v147->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v149 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
        {
          ++v148;
          v149 += 4;
          if ( v148 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
            goto LABEL_72;
        }
        v150 = (__int64)&v147->vtable[*v149].method;
      }
      else
      {
LABEL_72:
        v150 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v141);
      }
      v151 = (_QWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v150)(
                         Enumerator,
                         *(_QWORD *)(v150 + 8));
      if ( !v151 )
        sub_B5D69C(0LL, v152);
      v153 = *(&UserServantLeaderEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*v151 + 300LL) < (unsigned int)v153
        || *(UserServantLeaderEntity_c **)(*(_QWORD *)(*v151 + 200LL) + 8 * v153 - 8) != UserServantLeaderEntity_TypeInfo )
      {
        goto LABEL_171;
      }
      v154 = v151[4];
      if ( v154 )
      {
        v155 = *(_OWORD *)(v154 + 40);
        *(_OWORD *)&v229.fields.currentCryptoKey = *(_OWORD *)(v154 + 24);
        *(_OWORD *)&v229.fields.fakeValue = v155;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v224 = v229;
        v156 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v224, 0LL);
        v158 = *p_userSvtEntity;
        if ( !*p_userSvtEntity )
          sub_B5D69C(v156, v157);
        v159 = v158[2];
        *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v223.fields.currentCryptoKey = v158[1];
        *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v223.fields.fakeValue = v159;
        if ( v156 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v223, 0LL) )
        {
          v129 = 1;
          this->fields.isUseSupportEquip = 1;
          goto LABEL_85;
        }
      }
    }
    v129 = 1;
LABEL_85:
    v230[0] = 774;
    v231 = 1;
    p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
    v160 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v161 = 0LL;
      v162 = &v160->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v162 - 1) != System_IDisposable_TypeInfo )
      {
        ++v161;
        v162 += 4;
        if ( v161 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_90;
      }
      v163 = (__int64)&v160->vtable[*v162].method;
    }
    else
    {
LABEL_90:
      v163 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v141);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v163)(
      Enumerator,
      *(_QWORD *)(v163 + 8));
    if ( v230[0] == 774 )
    {
      v129 = 0;
      v231 = 0;
    }
  }
  if ( v216 != 1 )
    goto LABEL_153;
  this->fields.isMaterialSvt = isMtSvt;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_169;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_CombineMaterialMaster___);
  if ( !*p_servantEntity || !*p_userSvtEntity || !Instance )
    goto LABEL_169;
  Instance = (int64_t)CombineMaterialMaster__GetEntity(
                        (CombineMaterialMaster_o *)Instance,
                        (*p_servantEntity)->fields.combineMaterialId,
                        (*p_userSvtEntity)[16].fields.currentCryptoKey,
                        0LL);
  v130 = Instance ? *(_DWORD *)(Instance + 24) : 0;
  this->fields.materialExp = v130;
  if ( baseUsrSvtData )
  {
    v164 = *p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_169;
    v166 = *(_QWORD *)&v164[5].fields.currentCryptoKey;
    v165 = *(_QWORD *)&v164[5].fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v233.fields.currentCryptoKey = v166;
    *(_QWORD *)&v233.fields.fakeValue = v165;
    v167 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v233, 0LL);
    if ( v167 == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(baseUsrSvtData->fields.svtId, 0LL) )
    {
      Instance = UserServantEntity__isLimitCountMax(baseUsrSvtData, 0LL);
      v168 = this->fields.userSvtEntity;
      this->fields.isLimitCntMax = Instance & 1;
      this->fields.isLimitCntTarget = (Instance & 1) == 0;
      if ( !v168 )
        goto LABEL_169;
      v169 = *(_OWORD *)&v168->fields.id.fields.fakeValue;
      *(_OWORD *)&v229.fields.currentCryptoKey = *(_OWORD *)&v168->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v229.fields.fakeValue = v169;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v222 = v229;
      v170 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v222, 0LL);
      v171 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
      *(_OWORD *)&v221.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v221.fields.fakeValue = v171;
      if ( v170 != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v221, 0LL) )
        this->fields.isSameSvt = 1;
    }
    Instance = UserServantEntity__isLevelMax(baseUsrSvtData, 0LL);
    this->fields.isBaseLvMax = Instance & 1;
  }
  else
  {
    this->fields.isLimitCntTarget = 0;
  }
  v172 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_169;
  v173 = v172[2];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v229.fields.currentCryptoKey = v172[1];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v229.fields.fakeValue = v173;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v220 = v229;
  v91 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v220, 0LL);
  Instance = (int64_t)MasterData_WarQuestSelectionMaster;
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_169;
  this->fields.isEquiped = UserDeckMaster__IsEquip_28049868(
                             MasterData_WarQuestSelectionMaster,
                             v91,
                             &this->fields.partyIndex,
                             0LL);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_169;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantLeaderMaster___);
  if ( !Instance )
    goto LABEL_169;
  Instance = *(_QWORD *)(Instance + 32);
  if ( !Instance )
    goto LABEL_169;
  v176 = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
           (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
           (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !v176 )
    sub_B5D69C(0LL, v174);
  while ( 1 )
  {
    v177 = v176->klass;
    if ( *(_WORD *)&v176->klass->_2.bitflags1 )
    {
      v178 = 0LL;
      v179 = &v177->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)v179 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v178;
        v179 += 4;
        if ( v178 >= *(unsigned __int16 *)&v176->klass->_2.bitflags1 )
          goto LABEL_119;
      }
      v180 = (__int64)&v177->vtable[*v179].method;
    }
    else
    {
LABEL_119:
      v180 = sub_AF54C0(v176, System_Collections_IEnumerator_TypeInfo, 0LL, v175);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v180)(
            v176,
            *(_QWORD *)(v180 + 8)) & 1) == 0 )
      break;
    v181 = v176->klass;
    if ( *(_WORD *)&v176->klass->_2.bitflags1 )
    {
      v182 = 0LL;
      v183 = &v181->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v183 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v182;
        v183 += 4;
        if ( v182 >= *(unsigned __int16 *)&v176->klass->_2.bitflags1 )
          goto LABEL_126;
      }
      v184 = (__int64)&v181->vtable[*v183].method;
    }
    else
    {
LABEL_126:
      v184 = sub_AF54C0(v176, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v175);
    }
    v185 = (_QWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v184)(
                       v176,
                       *(_QWORD *)(v184 + 8));
    if ( !v185 )
      goto LABEL_172;
    v187 = *(&UserServantLeaderEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*v185 + 300LL) < (unsigned int)v187
      || *(UserServantLeaderEntity_c **)(*(_QWORD *)(*v185 + 200LL) + 8 * v187 - 8) != UserServantLeaderEntity_TypeInfo )
    {
      sub_B5D990(v185);
LABEL_171:
      sub_B5D990(v151);
LABEL_172:
      sub_B5D69C(v185, v186);
    }
    v188 = v185[4];
    if ( v188 )
    {
      v189 = *(_OWORD *)(v188 + 40);
      *(_OWORD *)&v229.fields.currentCryptoKey = *(_OWORD *)(v188 + 24);
      *(_OWORD *)&v229.fields.fakeValue = v189;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v219 = v229;
      v190 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v219, 0LL);
      v192 = *p_userSvtEntity;
      if ( !*p_userSvtEntity )
        sub_B5D69C(v190, v191);
      v193 = v192[2];
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v218.fields.currentCryptoKey = v192[1];
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v218.fields.fakeValue = v193;
      if ( v190 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v218, 0LL) )
      {
        this->fields.isUseSupportEquip = 1;
        v230[v129] = 1115;
        goto LABEL_139;
      }
    }
  }
  v230[v129] = 1115;
LABEL_139:
  v194 = ++v231;
  v195 = v176->klass;
  if ( *(_WORD *)&v176->klass->_2.bitflags1 )
  {
    v196 = 0LL;
    v197 = &v195->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v197 - 1) != System_IDisposable_TypeInfo )
    {
      ++v196;
      v197 += 4;
      if ( v196 >= *(unsigned __int16 *)&v176->klass->_2.bitflags1 )
        goto LABEL_144;
    }
    v198 = (__int64)&v195->vtable[*v197].method;
  }
  else
  {
LABEL_144:
    v198 = sub_AF54C0(v176, System_IDisposable_TypeInfo, 0LL, v175);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v198)(v176, *(_QWORD *)(v198 + 8));
  if ( v194 && v230[v194 - 1] == 1115 )
    v231 = v194 - 1;
  Instance = (int64_t)*p_userSvtEntity;
  if ( !*p_userSvtEntity
    || (Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL),
        v199 = this->fields.userSvtEntity,
        this->fields.isLock = Instance & 1,
        !v199) )
  {
LABEL_169:
    sub_B5D69C(Instance, v91);
  }
  IsChoice = UserServantEntity__IsChoice(v199, 0LL);
  isFriendShipSvtEq = this->fields.isFriendShipSvtEq;
  this->fields.isChoice = IsChoice;
  this->fields.isFavorite = v214;
  this->fields.isNotSelection = isFriendShipSvtEq;
LABEL_153:
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_169;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Instance )
    goto LABEL_169;
  Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                        (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                        this->fields.classId,
                        (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_169;
  v202 = this->fields.servantEntity;
  this->fields.sortValue1B = *(int *)(Instance + 48);
  if ( !v202 )
    goto LABEL_169;
  v203 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_169;
  this->fields.sortValue2 = ((__int64)v202->fields.collectionNo << 16) | ((unsigned __int64)(unsigned int)this->fields.rarity << 48) | v203[16].fields.currentCryptoKey;
  v205 = *(_QWORD *)&v203[5].fields.currentCryptoKey;
  v204 = *(_QWORD *)&v203[5].fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v234.fields.currentCryptoKey = v205;
  *(_QWORD *)&v234.fields.fakeValue = v204;
  v206 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v234, 0LL);
  Instance = (int64_t)this->fields.userSvtEntity;
  this->fields.sortValue2B = v206;
  this->fields.amountSortValue = -1LL;
  if ( !Instance )
    goto LABEL_169;
  EquipCategoryIdList = UserServantEntity__GetEquipCategoryIdList((UserServantEntity_o *)Instance, 1, 0LL);
  this->fields.categoryIdList = EquipCategoryIdList;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.categoryIdList,
    (System_Int32_array **)EquipCategoryIdList,
    v208,
    v209,
    v210,
    v211,
    v212,
    v213);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  FilterKindList_c *v12; // x0
  Voice_BATTLE_array *RarityFilterKindList; // x0
  FilterKindList_c *v14; // x0
  ListViewSort_FilterKind_array *v15; // x0
  FilterKindList_c *v16; // x0
  ListViewSort_FilterKind_array *v17; // x0
  bool IsMatchServantEquipCombineStatusFilter; // w8
  bool result; // w0
  FilterKindList_c *v20; // x0
  ListViewSort_FilterKind_array *v21; // x0
  bool HaveStatusFilter; // w8
  __int64 v23; // x0

  if ( (byte_42EE4C8 & 1) == 0 )
  {
    sub_B5D5C4(&FilterKindList_TypeInfo, (_DWORD)sort, (_DWORD)method, v3);
    sub_B5D5C4(&ListViewSort_FilterKind___TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v9, v10, v11);
    byte_42EE4C8 = 1;
  }
  v12 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v12 = FilterKindList_TypeInfo;
  }
  RarityFilterKindList = (Voice_BATTLE_array *)v12->static_fields->RarityFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_38;
  RarityFilterKindList = System_Collections_Generic_List_Voice_BATTLE___ToArray(
                           (System_Collections_Generic_List_Voice_BATTLE__o *)RarityFilterKindList,
                           (const MethodInfo_30468BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_38;
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)RarityFilterKindList, 0LL)
    && !ListViewSort__IsMatchRarityFilter(sort, this->fields.rarity, 0LL)
    || !ListViewSort__CheckSvtEquipEffectFilterDefaultAll(sort, 0LL)
    && !ServantEquipEffectFilterController__IsMatchEffectCategory(this->fields.categoryIdList, sort, 0LL) )
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
  RarityFilterKindList = (Voice_BATTLE_array *)v14->static_fields->ServantEquipTypeFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_38;
  v15 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           (System_Collections_Generic_List_Voice_BATTLE__o *)RarityFilterKindList,
                                           (const MethodInfo_30468BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v15, 0LL)
    && !ListViewSort__IsMatchServantEquipTypeFilter(sort, this->fields.servantEntity, 0LL) )
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
  RarityFilterKindList = (Voice_BATTLE_array *)v16->static_fields->ServantEquipCombineStatusFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_38;
  v17 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           (System_Collections_Generic_List_Voice_BATTLE__o *)RarityFilterKindList,
                                           (const MethodInfo_30468BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v17, 0LL) )
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
  v20 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v20 = FilterKindList_TypeInfo;
  }
  RarityFilterKindList = (Voice_BATTLE_array *)v20->static_fields->ServantEquipHaveStatusFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_38;
  v21 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           (System_Collections_Generic_List_Voice_BATTLE__o *)RarityFilterKindList,
                                           (const MethodInfo_30468BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v21, 0LL) )
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
  RarityFilterKindList = (Voice_BATTLE_array *)sub_B5D5DC(ListViewSort_FilterKind___TypeInfo, 1LL);
  if ( !RarityFilterKindList )
LABEL_38:
    sub_B5D69C(RarityFilterKindList, sort);
  if ( !RarityFilterKindList->max_length )
  {
    v23 = sub_B5D6C8(RarityFilterKindList);
    sub_B5D668(v23, 0LL);
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
    sub_B5D69C(0LL, method);
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
    sub_B5D69C(0LL, method);
  this->fields.isLock = UserServantEntity__IsLock(userSvtEntity, 0LL);
  this->fields.isSwapLock = 0;
}


bool __fastcall SvtEqCombineListViewItem__SetSortValue(
        SvtEqCombineListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  __int64 v3; // x3
  SvtEqCombineListViewItem_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  struct EventUpValSetupInfo_o *setupInfo; // x8
  struct System_Int32_array *servantEquipFilterEventIdList; // x8
  EventUpValSetupInfo_o *v11; // x21
  SvtEqCombineListViewItem_o *userSvtEntity; // x22
  EventUpValSetupInfo_o *v13; // x0
  int32_t v14; // w5
  int32_t *p_bonusKind2Id; // x8
  struct EventUpValSetupInfo_o *finishSetupInfo; // x8
  struct System_Int32_array *v17; // x8
  EventUpValSetupInfo_o *v18; // x21
  SvtEqCombineListViewItem_o *v19; // x22
  EventUpValSetupInfo_o *v20; // x0
  int32_t v21; // w5
  int32_t *v22; // x8
  bool EventUpVal_21840756; // w0
  _BOOL4 isSwapChoice; // w21
  _BOOL4 isChoice; // w22
  const MethodInfo *v26; // x2
  int64_t *p_sortValue0; // x8
  int v28; // w9
  __int64 v29; // x10
  int32_t type; // w9
  __int64 v31; // x9
  __int64 v32; // x10
  struct UserServantEntity_o *v33; // x8
  __int128 v34; // q1
  struct UserServantEntity_o *v35; // x8
  IconLabelInfo_o *iconLabelInfo1; // x19
  struct UserServantEntity_o *v37; // x8
  int32_t adjustHp; // w3
  int32_t hp; // w2
  int32_t v40; // w1
  struct UserServantEntity_o *v41; // x8
  struct ServantEntity_o *servantEntity; // x8
  int32_t bonusKind; // w20
  __int64 v44; // x10
  struct ServantEntity_o *v45; // x8
  __int64 collectionNo; // x10
  SvtEqCombineListViewItem_o *v47; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v49; // [xsp+10h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v50; // [xsp+30h] [xbp-40h]

  v5 = this;
  if ( (byte_42EE4C7 & 1) == 0 )
  {
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, (_DWORD)sort, (_DWORD)method, v3);
    this = (SvtEqCombineListViewItem_o *)sub_B5D5C4(&SvtEqCombineListViewManager_TypeInfo, v6, v7, v8);
    byte_42EE4C7 = 1;
  }
  setupInfo = v5->fields.setupInfo;
  *(_WORD *)&v5->fields.isTermination = 0;
  v5->fields.sortValue1 = -1LL;
  if ( !setupInfo )
    goto LABEL_23;
  servantEquipFilterEventIdList = setupInfo->fields.servantEquipFilterEventIdList;
  if ( !servantEquipFilterEventIdList )
    goto LABEL_112;
  if ( !*(_QWORD *)&servantEquipFilterEventIdList->max_length )
    goto LABEL_23;
  if ( v5->fields.isBaseSvt )
    goto LABEL_23;
  this = (SvtEqCombineListViewItem_o *)ListViewItem__get_IsSelect((ListViewItem_o *)v5, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
    goto LABEL_23;
  v11 = v5->fields.setupInfo;
  if ( !v11 || !sort )
    goto LABEL_112;
  if ( v11->fields.isQuestStart )
  {
    if ( sort->fields.bonusKind != 1 )
      goto LABEL_23;
    if ( v5->fields.bonusKind != 1 )
    {
      userSvtEntity = (SvtEqCombineListViewItem_o *)v5->fields.userSvtEntity;
      v13 = v5->fields.setupInfo;
      v5->fields.bonusKind = 1;
      this = (SvtEqCombineListViewItem_o *)EventUpValSetupInfo__get_ServantEquipFilterEventId(v13, 0LL);
      if ( !userSvtEntity )
        goto LABEL_112;
      v14 = (int)this;
      this = userSvtEntity;
      goto LABEL_22;
    }
LABEL_18:
    if ( !v5->fields.isEventUpVal )
      goto LABEL_68;
    goto LABEL_23;
  }
  if ( sort->fields.bonusKind2 != 1 )
    goto LABEL_23;
  if ( v5->fields.bonusKind == 1 )
  {
    p_bonusKind2Id = &sort->fields.bonusKind2Id;
    if ( v5->fields.bonusKindId == sort->fields.bonusKind2Id )
      goto LABEL_18;
  }
  else
  {
    p_bonusKind2Id = &sort->fields.bonusKind2Id;
  }
  v5->fields.bonusKind = 1;
  v14 = *p_bonusKind2Id;
  this = (SvtEqCombineListViewItem_o *)v5->fields.userSvtEntity;
  v5->fields.bonusKindId = *p_bonusKind2Id;
  if ( !this )
    goto LABEL_112;
LABEL_22:
  this = (SvtEqCombineListViewItem_o *)UserServantEntity__getEventUpVal_21840756(
                                         (UserServantEntity_o *)this,
                                         -1,
                                         0,
                                         0,
                                         v11,
                                         v14,
                                         0,
                                         0LL);
  v5->fields.isEventUpVal = (unsigned __int8)this & 1;
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_68;
LABEL_23:
  finishSetupInfo = v5->fields.finishSetupInfo;
  if ( !finishSetupInfo )
    goto LABEL_43;
  v17 = finishSetupInfo->fields.servantEquipFilterEventIdList;
  if ( !v17 )
    goto LABEL_112;
  if ( !*(_QWORD *)&v17->max_length )
    goto LABEL_43;
  if ( v5->fields.isBaseSvt )
    goto LABEL_43;
  this = (SvtEqCombineListViewItem_o *)ListViewItem__get_IsSelect((ListViewItem_o *)v5, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
    goto LABEL_43;
  v18 = v5->fields.finishSetupInfo;
  if ( !v18 || !sort )
    goto LABEL_112;
  if ( v18->fields.isQuestStart )
  {
    if ( sort->fields.bonusKind != 5 )
      goto LABEL_43;
    if ( v5->fields.bonusKind != 5 )
    {
      v19 = (SvtEqCombineListViewItem_o *)v5->fields.userSvtEntity;
      v20 = v5->fields.finishSetupInfo;
      v5->fields.bonusKind = 5;
      this = (SvtEqCombineListViewItem_o *)EventUpValSetupInfo__get_ServantEquipFilterEventId(v20, 0LL);
      if ( !v19 )
        goto LABEL_112;
      v21 = (int)this;
      this = v19;
      goto LABEL_42;
    }
    goto LABEL_38;
  }
  if ( sort->fields.bonusKind2 != 5 )
    goto LABEL_43;
  if ( v5->fields.bonusKind != 5 )
  {
    v22 = &sort->fields.bonusKind2Id;
LABEL_41:
    v5->fields.bonusKind = 5;
    v21 = *v22;
    this = (SvtEqCombineListViewItem_o *)v5->fields.userSvtEntity;
    v5->fields.bonusKindId = *v22;
    if ( !this )
      goto LABEL_112;
LABEL_42:
    EventUpVal_21840756 = UserServantEntity__getEventUpVal_21840756(
                            (UserServantEntity_o *)this,
                            -1,
                            0,
                            0,
                            v18,
                            v21,
                            1,
                            0LL);
    v5->fields.isEventUpVal = EventUpVal_21840756;
    if ( EventUpVal_21840756 )
      goto LABEL_43;
LABEL_68:
    LOBYTE(this) = 0;
    return (char)this;
  }
  v22 = &sort->fields.bonusKind2Id;
  if ( v5->fields.bonusKindId != sort->fields.bonusKind2Id )
    goto LABEL_41;
LABEL_38:
  if ( !v5->fields.isEventUpVal )
    goto LABEL_68;
LABEL_43:
  isSwapChoice = v5->fields.isSwapChoice;
  isChoice = v5->fields.isChoice;
  if ( !v5->fields.isBaseSvt
    && !ListViewItem__get_IsSelect((ListViewItem_o *)v5, 0LL)
    && (((__int64 (__fastcall *)(SvtEqCombineListViewItem_o *, ListViewSort_o *, void *))v5->klass->vtable._5_IsMatchFilter.method)(
          v5,
          sort,
          v5->klass[1]._1.image) & 1) == 0 )
  {
    goto LABEL_68;
  }
  this = (SvtEqCombineListViewItem_o *)v5->fields.iconLabelInfo2;
  if ( !this )
    goto LABEL_112;
  IconLabelInfo__Clear((IconLabelInfo_o *)this, 0LL);
  v5->fields.sortValue0 = 0LL;
  p_sortValue0 = &v5->fields.sortValue0;
  v5->fields.sortValue0B = 0LL;
  if ( !sort )
    goto LABEL_112;
  v28 = isSwapChoice ^ isChoice;
  if ( !sort->fields.isSmartSort )
  {
    if ( (v28 ^ 1) & 1 | !sort->fields.isChoiceSort )
      goto LABEL_71;
    type = v5->fields.type;
    if ( type == 1 )
    {
      v31 = -10LL;
    }
    else
    {
      if ( type )
        goto LABEL_71;
      v31 = 10LL;
    }
    *p_sortValue0 = v31;
    goto LABEL_71;
  }
  if ( !v5->fields.type )
  {
    if ( v5->fields.isEquiped || v5->fields.isUseSupportEquip )
    {
      v32 = 20LL;
    }
    else
    {
      if ( !v5->fields.isLvMax || !v5->fields.isLimitCntMax )
      {
LABEL_60:
        if ( !((v28 ^ 1) & 1 | !sort->fields.isChoiceSort) )
          v5->fields.sortValue0B = 10LL;
        goto LABEL_71;
      }
      v32 = -10LL;
    }
    *p_sortValue0 = v32;
    goto LABEL_60;
  }
  if ( v5->fields.isSameSvt )
  {
    v29 = 20LL;
LABEL_66:
    *p_sortValue0 = v29;
    if ( !((v28 ^ 1) & 1 | !sort->fields.isChoiceSort) )
      *(_OWORD *)p_sortValue0 = xmmword_32C42B0;
    goto LABEL_71;
  }
  v29 = -10LL;
  if ( v5->fields.isSwapLock != v5->fields.isLock )
    goto LABEL_66;
  if ( !v5->fields.isNotSelection )
    v29 = -20LL;
  if ( (v5->fields.isNotSelection | v28) == 1 )
    goto LABEL_66;
LABEL_71:
  this = (SvtEqCombineListViewItem_o *)(&dword_0 + 1);
  switch ( sort->fields.sortKind )
  {
    case 1:
      v33 = v5->fields.userSvtEntity;
      if ( !v33 )
        goto LABEL_112;
      v34 = *(_OWORD *)&v33->fields.id.fields.fakeValue;
      *(_OWORD *)&v50.fields.currentCryptoKey = *(_OWORD *)&v33->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v50.fields.fakeValue = v34;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v49 = v50;
      this = (SvtEqCombineListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(
                                             &v49,
                                             0LL);
      v35 = v5->fields.userSvtEntity;
      v5->fields.sortValue1 = (int64_t)this;
      if ( !v35 )
        goto LABEL_112;
      this = (SvtEqCombineListViewItem_o *)v5->fields.iconLabelInfo1;
      if ( !this )
        goto LABEL_112;
      IconLabelInfo__SetTime((IconLabelInfo_o *)this, 49, v35->fields.createdAt, 0, 0, 0, 0LL);
      goto LABEL_94;
    case 2:
      this = (SvtEqCombineListViewItem_o *)v5->fields.userSvtEntity;
      v5->fields.sortValue1 = v5->fields.rarity;
      if ( !this )
        goto LABEL_112;
      goto LABEL_83;
    case 3:
      this = (SvtEqCombineListViewItem_o *)v5->fields.userSvtEntity;
      if ( !this )
        goto LABEL_112;
      v5->fields.sortValue1 = this->fields.bonusKind;
LABEL_83:
      iconLabelInfo1 = v5->fields.iconLabelInfo1;
      goto LABEL_96;
    case 5:
      v37 = v5->fields.userSvtEntity;
      if ( !v37 )
        goto LABEL_112;
      this = (SvtEqCombineListViewItem_o *)v5->fields.iconLabelInfo1;
      v5->fields.sortValue1 = v37->fields.hp;
      if ( !this )
        goto LABEL_112;
      adjustHp = v37->fields.adjustHp;
      hp = v37->fields.hp;
      v40 = 3;
      goto LABEL_90;
    case 6:
      v41 = v5->fields.userSvtEntity;
      if ( !v41 )
        goto LABEL_112;
      this = (SvtEqCombineListViewItem_o *)v5->fields.iconLabelInfo1;
      v5->fields.sortValue1 = v41->fields.atk;
      if ( !this )
        goto LABEL_112;
      adjustHp = v41->fields.adjustAtk;
      hp = v41->fields.atk;
      v40 = 5;
LABEL_90:
      IconLabelInfo__Set_28463004((IconLabelInfo_o *)this, v40, hp, adjustHp, 0, 0, 0, 0, 0LL);
      goto LABEL_94;
    case 7:
      servantEntity = v5->fields.servantEntity;
      if ( !servantEntity )
        goto LABEL_112;
      this = (SvtEqCombineListViewItem_o *)v5->fields.iconLabelInfo1;
      v5->fields.sortValue1 = servantEntity->fields.cost;
      if ( !this )
        goto LABEL_112;
      IconLabelInfo__Set_28463004((IconLabelInfo_o *)this, 7, servantEntity->fields.cost, 0, 0, 0, 0, 0, 0LL);
LABEL_94:
      this = (SvtEqCombineListViewItem_o *)v5->fields.userSvtEntity;
      if ( !this )
        goto LABEL_112;
      iconLabelInfo1 = v5->fields.iconLabelInfo2;
LABEL_96:
      bonusKind = this->fields.bonusKind;
      break;
    case 8:
      v5->fields.sortValue1 = v5->fields.classId;
      goto LABEL_99;
    case 0xE:
      this = (SvtEqCombineListViewItem_o *)v5->fields.amountSortValue;
      if ( ((unsigned __int64)this & 0x8000000000000000LL) == 0 )
        goto LABEL_106;
      this = (SvtEqCombineListViewItem_o *)sort->fields.manager;
      if ( !this )
        goto LABEL_112;
      v44 = *(&SvtEqCombineListViewManager_TypeInfo->_2.bitflags2 + 1);
      if ( *(&this->klass->_2.bitflags2 + 1) < (unsigned int)v44
        || (SvtEqCombineListViewManager_c *)this->klass->_2.typeHierarchy[v44 - 1] != SvtEqCombineListViewManager_TypeInfo )
      {
        goto LABEL_112;
      }
      this = (SvtEqCombineListViewItem_o *)SvtEqCombineListViewManager__GetAmountSortValue(
                                             (SvtEqCombineListViewManager_o *)this,
                                             v5->fields.svtId,
                                             v26);
      v5->fields.amountSortValue = (int64_t)this;
LABEL_106:
      v45 = v5->fields.servantEntity;
      if ( !v45 )
        goto LABEL_112;
      collectionNo = v45->fields.collectionNo;
      v47 = (SvtEqCombineListViewItem_o *)v5->fields.userSvtEntity;
      v5->fields.sortValue1 = (((unsigned __int64)(unsigned int)v5->fields.rarity << 32) + ((_QWORD)this << 48)) | collectionNo;
      if ( !v47 )
        goto LABEL_112;
      iconLabelInfo1 = v5->fields.iconLabelInfo1;
      bonusKind = v47->fields.bonusKind;
      this = v47;
      break;
    default:
      return (char)this;
  }
  this = (SvtEqCombineListViewItem_o *)UserServantEntity__getLevelMax((UserServantEntity_o *)this, 0LL);
  if ( !iconLabelInfo1 )
LABEL_112:
    sub_B5D69C(this, sort);
  IconLabelInfo__Set_28463004(iconLabelInfo1, 2, bonusKind, (int32_t)this, 0, 0, 0, 0, 0LL);
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
    sub_B5D69C(0LL, method);
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
    sub_B5D69C(this, method);
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
  int v2; // w2
  __int64 v3; // x3
  SvtEqCombineListViewItem_o *v4; // x19
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v6; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v8; // [xsp+0h] [xbp-50h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v9; // [xsp+20h] [xbp-30h]

  v4 = this;
  if ( (byte_42EE4C9 & 1) == 0 )
  {
    this = (SvtEqCombineListViewItem_o *)sub_B5D5C4(
                                           &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
                                           (_DWORD)method,
                                           v2,
                                           v3);
    byte_42EE4C9 = 1;
  }
  userSvtEntity = v4->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_B5D69C(this, method);
  v6 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v9.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v9.fields.fakeValue = v6;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v8 = v9;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v8, 0LL);
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
  sub_B5D560(
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
    sub_B5D69C(0LL, value);
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