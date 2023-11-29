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
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x3
  __int64 v44; // x4
  IconLabelInfo_o *v45; // x22
  IconLabelInfo_o **p_iconLabelInfo2; // x21
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_userSvtEntity; // x22
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v62; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v63; // x24
  __int64 v64; // x26
  __int64 v65; // x27
  int32_t v66; // w0
  struct ServantEntity_o *Entity; // x0
  ServantEntity_o **p_servantEntity; // x27
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  struct UserServantEntity_o *v75; // x8
  int32_t v76; // w0
  System_String_array **v77; // x2
  System_String_array **v78; // x3
  System_Boolean_array **v79; // x4
  System_Int32_array **v80; // x5
  System_Int32_array *v81; // x6
  System_Int32_array *v82; // x7
  struct ServantEntity_o *servantEntity; // x8
  System_String_array **v84; // x2
  System_String_array **v85; // x3
  System_Boolean_array **v86; // x4
  System_Int32_array **v87; // x5
  System_Int32_array *v88; // x6
  System_Int32_array *v89; // x7
  WebViewManager_o *v90; // x0
  WebViewManager_o *v91; // x0
  WarQuestSelectionMaster_o *v92; // x0
  ServantLimitMaster_o *v93; // x20
  int32_t v94; // w0
  int32_t v95; // w24
  int32_t v96; // w0
  ServantLimitEntity_o *v97; // x0
  WebViewManager_o *v98; // x0
  WarQuestSelectionMaster_o *v99; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v100; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v101; // q1
  UserServantCollectionMaster_o *v102; // x20
  int64_t v103; // x0
  int64_t v104; // x24
  int32_t v105; // w0
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  UserServantEntity_o *v107; // x0
  int32_t LimitCntMax; // w0
  struct UserServantEntity_o *v109; // x8
  int32_t v110; // w0
  UserServantEntity_o *v111; // x0
  bool IsFriendShipSvtEquip; // w0
  UserServantEntity_o *v113; // x8
  bool IsChocolateSvtEquip; // w0
  int32_t v115; // w8
  int v116; // w25
  WebViewManager_o *v117; // x0
  CombineMaterialMaster_o *v118; // x0
  CombineMaterialEntity_o *v119; // x0
  int32_t v120; // w8
  bool isLevelMax; // w0
  UserServantEntity_o *v122; // x8
  bool isLimitCountMax; // w0
  UserServantEntity_o *v124; // x8
  bool IsLock; // w0
  UserServantEntity_o *v126; // x8
  bool IsChoice; // w0
  struct UserServantEntity_o *v128; // x8
  __int128 v129; // q0
  int64_t v130; // x1
  UserServantEntity_o *v131; // x8
  __int128 v132; // q0
  int64_t v133; // x20
  __int128 v134; // q0
  WebViewManager_o *v135; // x0
  WarQuestSelectionMaster_o *v136; // x0
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v140; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v143; // x8
  unsigned __int64 v144; // x10
  int32_t *v145; // x11
  __int64 v146; // x0
  _QWORD *v147; // x0
  __int64 v148; // x9
  __int64 v149; // x8
  __int128 v150; // q0
  int64_t v151; // x0
  UserServantEntity_o *v152; // x8
  __int128 v153; // q0
  System_Collections_Generic_IEnumerator_T__c *v154; // x8
  unsigned __int64 v155; // x10
  int32_t *v156; // x11
  __int64 v157; // x0
  UserServantEntity_o *v158; // x8
  __int64 v159; // x20
  __int64 v160; // x24
  int32_t v161; // w20
  bool v162; // w0
  struct UserServantEntity_o *v163; // x8
  __int128 v164; // q0
  int64_t v165; // x0
  __int128 v166; // q0
  UserServantEntity_o *v167; // x8
  __int128 v168; // q0
  int64_t v169; // x1
  WebViewManager_o *v170; // x0
  WarQuestSelectionMaster_o *v171; // x0
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v172; // x0
  System_Collections_Generic_IEnumerator_T__o *v173; // x23
  System_Collections_Generic_IEnumerator_T__c *v174; // x8
  unsigned __int64 v175; // x10
  int32_t *v176; // x11
  __int64 v177; // x0
  System_Collections_Generic_IEnumerator_T__c *v178; // x8
  unsigned __int64 v179; // x10
  int32_t *v180; // x11
  __int64 v181; // x0
  _QWORD *v182; // x0
  __int64 v183; // x9
  __int64 v184; // x8
  __int128 v185; // q0
  int64_t v186; // x0
  UserServantEntity_o *v187; // x8
  __int128 v188; // q0
  int v189; // w25
  System_Collections_Generic_IEnumerator_T__c *v190; // x8
  unsigned __int64 v191; // x10
  int32_t *v192; // x11
  __int64 v193; // x0
  bool v194; // w0
  UserServantEntity_o *v195; // x8
  bool v196; // w0
  bool isFriendShipSvtEq; // w9
  WebViewManager_o *v198; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v199; // x0
  WarEntity_o *v200; // x0
  struct ServantEntity_o *v201; // x9
  UserServantEntity_o *v202; // x8
  __int64 v203; // x20
  __int64 v204; // x22
  int32_t v205; // w8
  UserServantEntity_o *v206; // x0
  struct System_Int32_array *EquipCategoryIdList; // x0
  System_String_array **v208; // x2
  System_String_array **v209; // x3
  System_Boolean_array **v210; // x4
  System_Int32_array **v211; // x5
  System_Int32_array *v212; // x6
  System_Int32_array *v213; // x7
  IconLabelInfo_o *iconLabelInfo1; // x0
  bool v215; // [xsp+14h] [xbp-20Ch]
  UserDeckMaster_o *v216; // [xsp+18h] [xbp-208h]
  int32_t v217; // [xsp+24h] [xbp-1FCh]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v219; // [xsp+30h] [xbp-1F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v220; // [xsp+50h] [xbp-1D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v221; // [xsp+70h] [xbp-1B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v222; // [xsp+90h] [xbp-190h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v223; // [xsp+B0h] [xbp-170h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v224; // [xsp+D0h] [xbp-150h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v225; // [xsp+F0h] [xbp-130h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v226; // [xsp+110h] [xbp-110h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v227; // [xsp+130h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v228; // [xsp+150h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v229; // [xsp+170h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v230; // [xsp+190h] [xbp-90h]
  int v231[4]; // [xsp+1B0h] [xbp-70h]
  int v232; // [xsp+1C0h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v233; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v234; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v235; // 0:x0.16

  if ( (byte_40FD612 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&type);
    sub_B16FFC(&Method_DataManager_GetMasterData_CombineMaterialMaster___, v17);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantClassMaster___, v18);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitMaster___, v19);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v20);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserDeckMaster___, v21);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v22);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantLeaderMaster___, v23);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v24);
    sub_B16FFC(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v25);
    sub_B16FFC(&System_IDisposable_TypeInfo, v26);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v27);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v28);
    sub_B16FFC(&IconLabelInfo_TypeInfo, v29);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v30);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v31);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v32);
    sub_B16FFC(&UserServantLeaderEntity_TypeInfo, v33);
    byte_40FD612 = 1;
  }
  v232 = 0;
  v34 = (IconLabelInfo_o *)sub_B170CC(
                             IconLabelInfo_TypeInfo,
                             *(_QWORD *)&type,
                             *(_QWORD *)&index,
                             userSvtEntity,
                             isFavorite);
  IconLabelInfo___ctor(v34, 0LL);
  this->fields.iconLabelInfo1 = v34;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo1,
    (System_Int32_array **)v34,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  v45 = (IconLabelInfo_o *)sub_B170CC(IconLabelInfo_TypeInfo, v41, v42, v43, v44);
  IconLabelInfo___ctor(v45, 0LL);
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  this->fields.iconLabelInfo2 = v45;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo2,
    (System_Int32_array **)v45,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52);
  ListViewItem___ctor((ListViewItem_o *)this, 0LL);
  this->fields.userSvtEntity = userSvtEntity;
  p_userSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userSvtEntity;
  v217 = type;
  this->fields.type = type;
  this->fields.index = index;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.userSvtEntity,
    (System_Int32_array **)userSvtEntity,
    v54,
    v55,
    v56,
    v57,
    v58,
    v59);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_169;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  v62 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_169;
  v63 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  v65 = *(_QWORD *)&v62[5].fields.currentCryptoKey;
  v64 = *(_QWORD *)&v62[5].fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v233.fields.currentCryptoKey = v65;
  *(_QWORD *)&v233.fields.fakeValue = v64;
  v66 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v233, 0LL);
  if ( !v63 )
    goto LABEL_169;
  Entity = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                       v63,
                                       v66,
                                       (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = Entity;
  p_servantEntity = &this->fields.servantEntity;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.servantEntity,
    (System_Int32_array **)Entity,
    v69,
    v70,
    v71,
    v72,
    v73,
    v74);
  v75 = this->fields.userSvtEntity;
  if ( !v75 )
    goto LABEL_169;
  v76 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v75->fields.svtId, 0LL);
  servantEntity = this->fields.servantEntity;
  this->fields.svtId = v76;
  if ( !servantEntity )
    goto LABEL_169;
  this->fields.classId = servantEntity->fields.classId;
  this->fields.setupInfo = setupInfo;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.setupInfo,
    (System_Int32_array **)setupInfo,
    v77,
    v78,
    v79,
    v80,
    v81,
    v82);
  this->fields.finishSetupInfo = finishSetupInfo;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.finishSetupInfo,
    (System_Int32_array **)finishSetupInfo,
    v84,
    v85,
    v86,
    v87,
    v88,
    v89);
  v90 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v90 )
    goto LABEL_169;
  v216 = (UserDeckMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                               (DataManager_o *)v90,
                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserDeckMaster___);
  v91 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v91 )
    goto LABEL_169;
  v92 = DataManager__GetMasterData_WarQuestSelectionMaster_(
          (DataManager_o *)v91,
          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtEntity )
    goto LABEL_169;
  v93 = (ServantLimitMaster_o *)v92;
  v94 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536((*p_userSvtEntity)[5], 0LL);
  if ( !*p_userSvtEntity )
    goto LABEL_169;
  v95 = v94;
  v96 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536((*p_userSvtEntity)[6], 0LL);
  if ( !v93 )
    goto LABEL_169;
  v97 = ServantLimitMaster__GetEntity(v93, v95, v96, 0LL);
  if ( !v97 )
    goto LABEL_169;
  this->fields.rarity = v97->fields.rarity;
  v98 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v98 )
    goto LABEL_169;
  v99 = DataManager__GetMasterData_WarQuestSelectionMaster_(
          (DataManager_o *)v98,
          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v100 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_169;
  v101 = v100[4];
  v102 = (UserServantCollectionMaster_o *)v99;
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v230.fields.currentCryptoKey = v100[3];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v230.fields.fakeValue = v101;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v229 = v230;
  v103 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v229, 0LL);
  if ( !*p_userSvtEntity )
    goto LABEL_169;
  v104 = v103;
  v105 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536((*p_userSvtEntity)[5], 0LL);
  if ( !v102 )
    goto LABEL_169;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v102, v104, v105, 0LL);
  if ( !EntityDefinitely )
    goto LABEL_169;
  UserServantCollectionEntity__getFriendShipRankInfo(
    EntityDefinitely,
    &this->fields.friendship,
    &this->fields.friendshipMax,
    0LL);
  this->fields.partyIndex = -1;
  v107 = this->fields.userSvtEntity;
  *(_WORD *)&this->fields.isLock = 0;
  this->fields.isChoice = 0;
  *(_WORD *)&this->fields.isBaseSvt = 0;
  this->fields.isLastSelectMaterial = 0;
  this->fields.isMaxSelect = 0;
  this->fields.isSvtEqMaterial = 0;
  if ( !v107 )
    goto LABEL_169;
  LimitCntMax = UserServantEntity__getLimitCntMax(v107, 0LL);
  v109 = this->fields.userSvtEntity;
  this->fields.maxLimitCnt = LimitCntMax;
  if ( !v109 )
    goto LABEL_169;
  v110 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v109->fields.limitCount, 0LL);
  *(_DWORD *)&this->fields.isBaseLvMax = 0;
  this->fields.currentLimitCnt = v110;
  v111 = this->fields.userSvtEntity;
  this->fields.isCanNotLock = 0;
  *(_WORD *)&this->fields.isSwapLock = 0;
  this->fields.dragSelectNum = -1;
  this->fields.isNotSelection = 0;
  this->fields.isEventUpVal = 0;
  *(_QWORD *)&this->fields.bonusKind = 0LL;
  if ( !v111 )
    goto LABEL_169;
  IsFriendShipSvtEquip = UserServantEntity__IsFriendShipSvtEquip(v111, 0LL);
  v113 = this->fields.userSvtEntity;
  this->fields.isFriendShipSvtEq = IsFriendShipSvtEquip;
  if ( !v113 )
    goto LABEL_169;
  IsChocolateSvtEquip = UserServantEntity__IsChocolateSvtEquip(v113, 0LL);
  v115 = this->fields.type;
  this->fields.isChocolateSvtEquip = IsChocolateSvtEquip;
  v215 = isFavorite;
  if ( v115 )
  {
    v116 = 0;
  }
  else
  {
    if ( !*p_userSvtEntity )
      goto LABEL_169;
    isLevelMax = UserServantEntity__isLevelMax((UserServantEntity_o *)*p_userSvtEntity, 0LL);
    v122 = this->fields.userSvtEntity;
    this->fields.isLvMax = isLevelMax;
    if ( !v122 )
      goto LABEL_169;
    isLimitCountMax = UserServantEntity__isLimitCountMax(v122, 0LL);
    v124 = this->fields.userSvtEntity;
    this->fields.isLimitCntMax = isLimitCountMax;
    if ( !v124 )
      goto LABEL_169;
    IsLock = UserServantEntity__IsLock(v124, 0LL);
    v126 = this->fields.userSvtEntity;
    this->fields.isLock = IsLock;
    if ( !v126 )
      goto LABEL_169;
    IsChoice = UserServantEntity__IsChoice(v126, 0LL);
    v128 = this->fields.userSvtEntity;
    this->fields.isChoice = IsChoice;
    if ( !v128 )
      goto LABEL_169;
    v129 = *(_OWORD *)&v128->fields.id.fields.fakeValue;
    *(_OWORD *)&v230.fields.currentCryptoKey = *(_OWORD *)&v128->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v230.fields.fakeValue = v129;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v228 = v230;
    v130 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v228, 0LL);
    if ( !v216 )
      goto LABEL_169;
    this->fields.isEquiped = UserDeckMaster__IsEquip(v216, v130, 0LL);
    if ( baseUsrSvtData )
    {
      v131 = (UserServantEntity_o *)*p_userSvtEntity;
      if ( !*p_userSvtEntity )
        goto LABEL_169;
      v132 = *(_OWORD *)&v131->fields.id.fields.fakeValue;
      *(_OWORD *)&v230.fields.currentCryptoKey = *(_OWORD *)&v131->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v230.fields.fakeValue = v132;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v227 = v230;
      v133 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v227, 0LL);
      v134 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
      *(_OWORD *)&v226.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v226.fields.fakeValue = v134;
      if ( v133 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v226, 0LL) )
        this->fields.isBaseSvt = 1;
    }
    if ( !*p_servantEntity )
      goto LABEL_169;
    if ( ServantEntity__get_IsServantEquipMaterial(*p_servantEntity, 0LL) )
      this->fields.isSvtEqMaterial = 1;
    v135 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v135 )
      goto LABEL_169;
    v136 = DataManager__GetMasterData_WarQuestSelectionMaster_(
             (DataManager_o *)v135,
             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantLeaderMaster___);
    if ( !v136 )
      goto LABEL_169;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)v136->fields.list;
    if ( !list )
      goto LABEL_169;
    Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                   list,
                   (const MethodInfo_290E508 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    if ( !Enumerator )
      sub_B170D4();
    while ( 1 )
    {
      klass = Enumerator->klass;
      if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
      {
        v140 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v140;
          p_offset += 4;
          if ( v140 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
            goto LABEL_65;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_65:
        p_method = sub_AAFEF8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
              Enumerator,
              *(_QWORD *)(p_method + 8)) & 1) == 0 )
        break;
      v143 = Enumerator->klass;
      if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
      {
        v144 = 0LL;
        v145 = &v143->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v145 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
        {
          ++v144;
          v145 += 4;
          if ( v144 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
            goto LABEL_72;
        }
        v146 = (__int64)&v143->vtable[*v145].method;
      }
      else
      {
LABEL_72:
        v146 = sub_AAFEF8(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
      }
      v147 = (_QWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v146)(
                         Enumerator,
                         *(_QWORD *)(v146 + 8));
      if ( !v147 )
        sub_B170D4();
      v148 = *(&UserServantLeaderEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*v147 + 300LL) < (unsigned int)v148
        || *(UserServantLeaderEntity_c **)(*(_QWORD *)(*v147 + 200LL) + 8 * v148 - 8) != UserServantLeaderEntity_TypeInfo )
      {
        goto LABEL_171;
      }
      v149 = v147[4];
      if ( v149 )
      {
        v150 = *(_OWORD *)(v149 + 40);
        *(_OWORD *)&v230.fields.currentCryptoKey = *(_OWORD *)(v149 + 24);
        *(_OWORD *)&v230.fields.fakeValue = v150;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v225 = v230;
        v151 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v225, 0LL);
        v152 = (UserServantEntity_o *)*p_userSvtEntity;
        if ( !*p_userSvtEntity )
          sub_B170D4();
        v153 = *(_OWORD *)&v152->fields.id.fields.fakeValue;
        *(_OWORD *)&v224.fields.currentCryptoKey = *(_OWORD *)&v152->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v224.fields.fakeValue = v153;
        if ( v151 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v224, 0LL) )
        {
          v116 = 1;
          this->fields.isUseSupportEquip = 1;
          goto LABEL_85;
        }
      }
    }
    v116 = 1;
LABEL_85:
    v231[0] = 774;
    v232 = 1;
    p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
    v154 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v155 = 0LL;
      v156 = &v154->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v156 - 1) != System_IDisposable_TypeInfo )
      {
        ++v155;
        v156 += 4;
        if ( v155 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_90;
      }
      v157 = (__int64)&v154->vtable[*v156].method;
    }
    else
    {
LABEL_90:
      v157 = sub_AAFEF8(Enumerator, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v157)(
      Enumerator,
      *(_QWORD *)(v157 + 8));
    if ( v231[0] == 774 )
    {
      v116 = 0;
      v232 = 0;
    }
  }
  if ( v217 != 1 )
    goto LABEL_153;
  this->fields.isMaterialSvt = isMtSvt;
  v117 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v117 )
    goto LABEL_169;
  v118 = (CombineMaterialMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      (DataManager_o *)v117,
                                      (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_CombineMaterialMaster___);
  if ( !*p_servantEntity || !*p_userSvtEntity || !v118 )
    goto LABEL_169;
  v119 = CombineMaterialMaster__GetEntity(
           v118,
           (*p_servantEntity)->fields.combineMaterialId,
           (*p_userSvtEntity)[16].fields.currentCryptoKey,
           0LL);
  v120 = v119 ? v119->fields.value : 0;
  this->fields.materialExp = v120;
  if ( baseUsrSvtData )
  {
    v158 = (UserServantEntity_o *)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_169;
    v160 = *(_QWORD *)&v158->fields.svtId.fields.currentCryptoKey;
    v159 = *(_QWORD *)&v158->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v234.fields.currentCryptoKey = v160;
    *(_QWORD *)&v234.fields.fakeValue = v159;
    v161 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v234, 0LL);
    if ( v161 == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(baseUsrSvtData->fields.svtId, 0LL) )
    {
      v162 = UserServantEntity__isLimitCountMax(baseUsrSvtData, 0LL);
      v163 = this->fields.userSvtEntity;
      this->fields.isLimitCntMax = v162;
      this->fields.isLimitCntTarget = !v162;
      if ( !v163 )
        goto LABEL_169;
      v164 = *(_OWORD *)&v163->fields.id.fields.fakeValue;
      *(_OWORD *)&v230.fields.currentCryptoKey = *(_OWORD *)&v163->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v230.fields.fakeValue = v164;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v223 = v230;
      v165 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v223, 0LL);
      v166 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
      *(_OWORD *)&v222.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v222.fields.fakeValue = v166;
      if ( v165 != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v222, 0LL) )
        this->fields.isSameSvt = 1;
    }
    this->fields.isBaseLvMax = UserServantEntity__isLevelMax(baseUsrSvtData, 0LL);
  }
  else
  {
    this->fields.isLimitCntTarget = 0;
  }
  v167 = (UserServantEntity_o *)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_169;
  v168 = *(_OWORD *)&v167->fields.id.fields.fakeValue;
  *(_OWORD *)&v230.fields.currentCryptoKey = *(_OWORD *)&v167->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v230.fields.fakeValue = v168;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v221 = v230;
  v169 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v221, 0LL);
  if ( !v216 )
    goto LABEL_169;
  this->fields.isEquiped = UserDeckMaster__IsEquip_26543856(v216, v169, &this->fields.partyIndex, 0LL);
  v170 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v170 )
    goto LABEL_169;
  v171 = DataManager__GetMasterData_WarQuestSelectionMaster_(
           (DataManager_o *)v170,
           (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantLeaderMaster___);
  if ( !v171 )
    goto LABEL_169;
  v172 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)v171->fields.list;
  if ( !v172 )
    goto LABEL_169;
  v173 = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
           v172,
           (const MethodInfo_290E508 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !v173 )
    sub_B170D4();
  while ( 1 )
  {
    v174 = v173->klass;
    if ( *(_WORD *)&v173->klass->_2.bitflags1 )
    {
      v175 = 0LL;
      v176 = &v174->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)v176 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v175;
        v176 += 4;
        if ( v175 >= *(unsigned __int16 *)&v173->klass->_2.bitflags1 )
          goto LABEL_119;
      }
      v177 = (__int64)&v174->vtable[*v176].method;
    }
    else
    {
LABEL_119:
      v177 = sub_AAFEF8(v173, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v177)(
            v173,
            *(_QWORD *)(v177 + 8)) & 1) == 0 )
      break;
    v178 = v173->klass;
    if ( *(_WORD *)&v173->klass->_2.bitflags1 )
    {
      v179 = 0LL;
      v180 = &v178->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v180 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v179;
        v180 += 4;
        if ( v179 >= *(unsigned __int16 *)&v173->klass->_2.bitflags1 )
          goto LABEL_126;
      }
      v181 = (__int64)&v178->vtable[*v180].method;
    }
    else
    {
LABEL_126:
      v181 = sub_AAFEF8(v173, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v182 = (_QWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v181)(
                       v173,
                       *(_QWORD *)(v181 + 8));
    if ( !v182 )
      goto LABEL_172;
    v183 = *(&UserServantLeaderEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*v182 + 300LL) < (unsigned int)v183
      || *(UserServantLeaderEntity_c **)(*(_QWORD *)(*v182 + 200LL) + 8 * v183 - 8) != UserServantLeaderEntity_TypeInfo )
    {
      sub_B173C8(v182);
LABEL_171:
      sub_B173C8(v147);
LABEL_172:
      sub_B170D4();
    }
    v184 = v182[4];
    if ( v184 )
    {
      v185 = *(_OWORD *)(v184 + 40);
      *(_OWORD *)&v230.fields.currentCryptoKey = *(_OWORD *)(v184 + 24);
      *(_OWORD *)&v230.fields.fakeValue = v185;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v220 = v230;
      v186 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v220, 0LL);
      v187 = (UserServantEntity_o *)*p_userSvtEntity;
      if ( !*p_userSvtEntity )
        sub_B170D4();
      v188 = *(_OWORD *)&v187->fields.id.fields.fakeValue;
      *(_OWORD *)&v219.fields.currentCryptoKey = *(_OWORD *)&v187->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v219.fields.fakeValue = v188;
      if ( v186 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v219, 0LL) )
      {
        this->fields.isUseSupportEquip = 1;
        v231[v116] = 1115;
        goto LABEL_139;
      }
    }
  }
  v231[v116] = 1115;
LABEL_139:
  v189 = ++v232;
  v190 = v173->klass;
  if ( *(_WORD *)&v173->klass->_2.bitflags1 )
  {
    v191 = 0LL;
    v192 = &v190->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v192 - 1) != System_IDisposable_TypeInfo )
    {
      ++v191;
      v192 += 4;
      if ( v191 >= *(unsigned __int16 *)&v173->klass->_2.bitflags1 )
        goto LABEL_144;
    }
    v193 = (__int64)&v190->vtable[*v192].method;
  }
  else
  {
LABEL_144:
    v193 = sub_AAFEF8(v173, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v193)(v173, *(_QWORD *)(v193 + 8));
  if ( v189 && v231[v189 - 1] == 1115 )
    v232 = v189 - 1;
  if ( !*p_userSvtEntity
    || (v194 = UserServantEntity__IsLock((UserServantEntity_o *)*p_userSvtEntity, 0LL),
        v195 = this->fields.userSvtEntity,
        this->fields.isLock = v194,
        !v195) )
  {
LABEL_169:
    sub_B170D4();
  }
  v196 = UserServantEntity__IsChoice(v195, 0LL);
  isFriendShipSvtEq = this->fields.isFriendShipSvtEq;
  this->fields.isChoice = v196;
  this->fields.isFavorite = v215;
  this->fields.isNotSelection = isFriendShipSvtEq;
LABEL_153:
  v198 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v198 )
    goto LABEL_169;
  v199 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                          (DataManager_o *)v198,
                                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !v199 )
    goto LABEL_169;
  v200 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
           v199,
           this->fields.classId,
           (const MethodInfo_266F388 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !v200 )
    goto LABEL_169;
  v201 = this->fields.servantEntity;
  this->fields.sortValue1B = v200->fields.bannerId;
  if ( !v201 )
    goto LABEL_169;
  v202 = (UserServantEntity_o *)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_169;
  this->fields.sortValue2 = ((__int64)v201->fields.collectionNo << 16) | ((unsigned __int64)(unsigned int)this->fields.rarity << 48) | v202->fields.lv;
  v204 = *(_QWORD *)&v202->fields.svtId.fields.currentCryptoKey;
  v203 = *(_QWORD *)&v202->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v235.fields.currentCryptoKey = v204;
  *(_QWORD *)&v235.fields.fakeValue = v203;
  v205 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v235, 0LL);
  v206 = this->fields.userSvtEntity;
  this->fields.sortValue2B = v205;
  this->fields.amountSortValue = -1LL;
  if ( !v206 )
    goto LABEL_169;
  EquipCategoryIdList = UserServantEntity__GetEquipCategoryIdList(v206, 0LL);
  this->fields.categoryIdList = EquipCategoryIdList;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.categoryIdList,
    (System_Int32_array **)EquipCategoryIdList,
    v208,
    v209,
    v210,
    v211,
    v212,
    v213);
  iconLabelInfo1 = this->fields.iconLabelInfo1;
  if ( !iconLabelInfo1 )
    goto LABEL_169;
  IconLabelInfo__Clear(iconLabelInfo1, 0LL);
  if ( !*p_iconLabelInfo2 )
    goto LABEL_169;
  IconLabelInfo__Clear(*p_iconLabelInfo2, 0LL);
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
  System_Collections_Generic_List_Voice_BATTLE__o *RarityFilterKindList; // x0
  ListViewSort_FilterKind_array *v9; // x0
  FilterKindList_c *v10; // x0
  System_Collections_Generic_List_Voice_BATTLE__o *ServantEquipTypeFilterKindList; // x0
  ListViewSort_FilterKind_array *v12; // x0
  __int64 v13; // x2
  ListViewSort_FilterKind_array *v14; // x0
  __int64 v15; // x2

  if ( (byte_40FD614 & 1) == 0 )
  {
    sub_B16FFC(&FilterKindList_TypeInfo, sort);
    sub_B16FFC(&ListViewSort_FilterKind___TypeInfo, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v6);
    byte_40FD614 = 1;
  }
  v7 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v7 = FilterKindList_TypeInfo;
  }
  RarityFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)v7->static_fields->RarityFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_25;
  v9 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                          RarityFilterKindList,
                                          (const MethodInfo_2F155D4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_25;
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v9, 0LL)
    && !ListViewSort__IsMatchRarityFilter(sort, this->fields.rarity, 0LL)
    || !ListViewSort__CheckSvtEquipEffectFilterDefaultAll(sort, 0LL)
    && !ServantEquipEffectFilterController__IsMatchEffectCategory(this->fields.categoryIdList, sort, 0LL) )
  {
    return 0;
  }
  v10 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v10 = FilterKindList_TypeInfo;
  }
  ServantEquipTypeFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)v10->static_fields->ServantEquipTypeFilterKindList;
  if ( !ServantEquipTypeFilterKindList )
LABEL_25:
    sub_B170D4();
  v12 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           ServantEquipTypeFilterKindList,
                                           (const MethodInfo_2F155D4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v12, 0LL)
    && !ListViewSort__IsMatchServantEquipTypeFilter(sort, this->fields.servantEntity, 0LL) )
  {
    return 0;
  }
  v14 = (ListViewSort_FilterKind_array *)sub_B17014(ListViewSort_FilterKind___TypeInfo, 1LL, v13);
  if ( !v14 )
    goto LABEL_25;
  if ( !v14->max_length )
  {
    sub_B17100(v14, v14, v15);
    sub_B170A0();
  }
  v14->m_Items[1] = 39;
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v14, 0LL)
      || !ListViewSort__GetFilter(sort, 39, 0LL)
      || !this->fields.isSwapChoice == this->fields.isChoice;
}


void __fastcall SvtEqCombineListViewItem__ModifyChoiceItem(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0

  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_B170D4();
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
    sub_B170D4();
  this->fields.isLock = UserServantEntity__IsLock(userSvtEntity, 0LL);
  this->fields.isSwapLock = 0;
}


bool __fastcall SvtEqCombineListViewItem__SetSortValue(
        SvtEqCombineListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct EventUpValSetupInfo_o *setupInfo; // x8
  struct System_Int32_array *servantEquipFilterEventIdList; // x8
  struct EventUpValSetupInfo_o *v8; // x21
  struct UserServantEntity_o *userSvtEntity; // x22
  EventUpValSetupInfo_o *v10; // x0
  int32_t ServantEquipFilterEventId; // w0
  int32_t v12; // w5
  UserServantEntity_o *v13; // x0
  int32_t *p_bonusKind2Id; // x8
  bool EventUpVal_21445868; // w0
  struct EventUpValSetupInfo_o *finishSetupInfo; // x8
  struct System_Int32_array *v17; // x8
  struct EventUpValSetupInfo_o *v18; // x21
  struct UserServantEntity_o *v19; // x22
  EventUpValSetupInfo_o *v20; // x0
  int32_t v21; // w0
  int32_t v22; // w5
  UserServantEntity_o *v23; // x0
  int32_t *v24; // x8
  bool v25; // w0
  _BOOL4 isSwapChoice; // w21
  _BOOL4 isChoice; // w22
  IconLabelInfo_o *iconLabelInfo2; // x0
  const MethodInfo *v29; // x2
  int64_t *p_sortValue0; // x8
  int v31; // w9
  __int64 v32; // x10
  int32_t type; // w9
  __int64 v34; // x9
  __int64 v35; // x10
  bool result; // w0
  struct UserServantEntity_o *v37; // x8
  __int128 v38; // q1
  int64_t v39; // x0
  struct UserServantEntity_o *v40; // x8
  IconLabelInfo_o *iconLabelInfo1; // x0
  struct UserServantEntity_o *v42; // x0
  IconLabelInfo_o *v43; // x19
  struct UserServantEntity_o *v44; // x8
  IconLabelInfo_o *v45; // x0
  int32_t adjustHp; // w3
  int32_t hp; // w2
  int32_t v48; // w1
  struct UserServantEntity_o *v49; // x8
  struct ServantEntity_o *servantEntity; // x8
  IconLabelInfo_o *v51; // x0
  int32_t lv; // w20
  int32_t LevelMax; // w0
  int64_t amountSortValue; // x0
  struct ListViewManager_o *manager; // x0
  __int64 v56; // x10
  struct ServantEntity_o *v57; // x8
  __int64 collectionNo; // x10
  struct UserServantEntity_o *v59; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v60; // [xsp+10h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v61; // [xsp+30h] [xbp-40h]

  if ( (byte_40FD613 & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, sort);
    sub_B16FFC(&SvtEqCombineListViewManager_TypeInfo, v5);
    byte_40FD613 = 1;
  }
  setupInfo = this->fields.setupInfo;
  *(_WORD *)&this->fields.isTermination = 0;
  this->fields.sortValue1 = -1LL;
  if ( !setupInfo )
    goto LABEL_23;
  servantEquipFilterEventIdList = setupInfo->fields.servantEquipFilterEventIdList;
  if ( !servantEquipFilterEventIdList )
    goto LABEL_112;
  if ( !*(_QWORD *)&servantEquipFilterEventIdList->max_length
    || this->fields.isBaseSvt
    || ListViewItem__get_IsSelect((ListViewItem_o *)this, 0LL) )
  {
    goto LABEL_23;
  }
  v8 = this->fields.setupInfo;
  if ( !v8 || !sort )
    goto LABEL_112;
  if ( v8->fields.isQuestStart )
  {
    if ( sort->fields.bonusKind != 1 )
      goto LABEL_23;
    if ( this->fields.bonusKind != 1 )
    {
      userSvtEntity = this->fields.userSvtEntity;
      v10 = this->fields.setupInfo;
      this->fields.bonusKind = 1;
      ServantEquipFilterEventId = EventUpValSetupInfo__get_ServantEquipFilterEventId(v10, 0LL);
      if ( !userSvtEntity )
        goto LABEL_112;
      v12 = ServantEquipFilterEventId;
      v13 = userSvtEntity;
      goto LABEL_22;
    }
LABEL_18:
    if ( !this->fields.isEventUpVal )
      return 0;
    goto LABEL_23;
  }
  if ( sort->fields.bonusKind2 != 1 )
    goto LABEL_23;
  if ( this->fields.bonusKind == 1 )
  {
    p_bonusKind2Id = &sort->fields.bonusKind2Id;
    if ( this->fields.bonusKindId == sort->fields.bonusKind2Id )
      goto LABEL_18;
  }
  else
  {
    p_bonusKind2Id = &sort->fields.bonusKind2Id;
  }
  this->fields.bonusKind = 1;
  v12 = *p_bonusKind2Id;
  v13 = this->fields.userSvtEntity;
  this->fields.bonusKindId = *p_bonusKind2Id;
  if ( !v13 )
    goto LABEL_112;
LABEL_22:
  EventUpVal_21445868 = UserServantEntity__getEventUpVal_21445868(v13, -1, 0, 0, v8, v12, 0, 0LL);
  this->fields.isEventUpVal = EventUpVal_21445868;
  if ( !EventUpVal_21445868 )
    return 0;
LABEL_23:
  finishSetupInfo = this->fields.finishSetupInfo;
  if ( !finishSetupInfo )
    goto LABEL_43;
  v17 = finishSetupInfo->fields.servantEquipFilterEventIdList;
  if ( !v17 )
    goto LABEL_112;
  if ( !*(_QWORD *)&v17->max_length || this->fields.isBaseSvt || ListViewItem__get_IsSelect((ListViewItem_o *)this, 0LL) )
    goto LABEL_43;
  v18 = this->fields.finishSetupInfo;
  if ( !v18 || !sort )
    goto LABEL_112;
  if ( v18->fields.isQuestStart )
  {
    if ( sort->fields.bonusKind != 5 )
      goto LABEL_43;
    if ( this->fields.bonusKind != 5 )
    {
      v19 = this->fields.userSvtEntity;
      v20 = this->fields.finishSetupInfo;
      this->fields.bonusKind = 5;
      v21 = EventUpValSetupInfo__get_ServantEquipFilterEventId(v20, 0LL);
      if ( !v19 )
        goto LABEL_112;
      v22 = v21;
      v23 = v19;
      goto LABEL_42;
    }
    goto LABEL_38;
  }
  if ( sort->fields.bonusKind2 != 5 )
    goto LABEL_43;
  if ( this->fields.bonusKind != 5 )
  {
    v24 = &sort->fields.bonusKind2Id;
LABEL_41:
    this->fields.bonusKind = 5;
    v22 = *v24;
    v23 = this->fields.userSvtEntity;
    this->fields.bonusKindId = *v24;
    if ( !v23 )
      goto LABEL_112;
LABEL_42:
    v25 = UserServantEntity__getEventUpVal_21445868(v23, -1, 0, 0, v18, v22, 1, 0LL);
    this->fields.isEventUpVal = v25;
    if ( v25 )
      goto LABEL_43;
    return 0;
  }
  v24 = &sort->fields.bonusKind2Id;
  if ( this->fields.bonusKindId != sort->fields.bonusKind2Id )
    goto LABEL_41;
LABEL_38:
  if ( !this->fields.isEventUpVal )
    return 0;
LABEL_43:
  isSwapChoice = this->fields.isSwapChoice;
  isChoice = this->fields.isChoice;
  if ( !this->fields.isBaseSvt
    && !ListViewItem__get_IsSelect((ListViewItem_o *)this, 0LL)
    && (((__int64 (__fastcall *)(SvtEqCombineListViewItem_o *, ListViewSort_o *, void *))this->klass->vtable._5_IsMatchFilter.method)(
          this,
          sort,
          this->klass[1]._1.image) & 1) == 0 )
  {
    return 0;
  }
  iconLabelInfo2 = this->fields.iconLabelInfo2;
  if ( !iconLabelInfo2 )
    goto LABEL_112;
  IconLabelInfo__Clear(iconLabelInfo2, 0LL);
  this->fields.sortValue0 = 0LL;
  p_sortValue0 = &this->fields.sortValue0;
  this->fields.sortValue0B = 0LL;
  if ( !sort )
    goto LABEL_112;
  v31 = isSwapChoice ^ isChoice;
  if ( !sort->fields.isSmartSort )
  {
    if ( (v31 ^ 1) & 1 | !sort->fields.isChoiceSort )
      goto LABEL_71;
    type = this->fields.type;
    if ( type == 1 )
    {
      v34 = -10LL;
    }
    else
    {
      if ( type )
        goto LABEL_71;
      v34 = 10LL;
    }
    *p_sortValue0 = v34;
    goto LABEL_71;
  }
  if ( !this->fields.type )
  {
    if ( this->fields.isEquiped || this->fields.isUseSupportEquip )
    {
      v35 = 20LL;
    }
    else
    {
      if ( !this->fields.isLvMax || !this->fields.isLimitCntMax )
      {
LABEL_60:
        if ( !((v31 ^ 1) & 1 | !sort->fields.isChoiceSort) )
          this->fields.sortValue0B = 10LL;
        goto LABEL_71;
      }
      v35 = -10LL;
    }
    *p_sortValue0 = v35;
    goto LABEL_60;
  }
  if ( this->fields.isSameSvt )
  {
    v32 = 20LL;
LABEL_66:
    *p_sortValue0 = v32;
    if ( !((v31 ^ 1) & 1 | !sort->fields.isChoiceSort) )
      *(_OWORD *)p_sortValue0 = xmmword_3147F00;
    goto LABEL_71;
  }
  v32 = -10LL;
  if ( this->fields.isSwapLock != this->fields.isLock )
    goto LABEL_66;
  if ( !this->fields.isNotSelection )
    v32 = -20LL;
  if ( (this->fields.isNotSelection | v31) == 1 )
    goto LABEL_66;
LABEL_71:
  result = 1;
  switch ( sort->fields.sortKind )
  {
    case 1:
      v37 = this->fields.userSvtEntity;
      if ( !v37 )
        goto LABEL_112;
      v38 = *(_OWORD *)&v37->fields.id.fields.fakeValue;
      *(_OWORD *)&v61.fields.currentCryptoKey = *(_OWORD *)&v37->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v61.fields.fakeValue = v38;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v60 = v61;
      v39 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v60, 0LL);
      v40 = this->fields.userSvtEntity;
      this->fields.sortValue1 = v39;
      if ( !v40 )
        goto LABEL_112;
      iconLabelInfo1 = this->fields.iconLabelInfo1;
      if ( !iconLabelInfo1 )
        goto LABEL_112;
      IconLabelInfo__SetTime(iconLabelInfo1, 49, v40->fields.createdAt, 0, 0, 0, 0LL);
      goto LABEL_94;
    case 2:
      v42 = this->fields.userSvtEntity;
      this->fields.sortValue1 = this->fields.rarity;
      if ( !v42 )
        goto LABEL_112;
      goto LABEL_83;
    case 3:
      v42 = this->fields.userSvtEntity;
      if ( !v42 )
        goto LABEL_112;
      this->fields.sortValue1 = v42->fields.lv;
LABEL_83:
      v43 = this->fields.iconLabelInfo1;
      goto LABEL_96;
    case 5:
      v44 = this->fields.userSvtEntity;
      if ( !v44 )
        goto LABEL_112;
      v45 = this->fields.iconLabelInfo1;
      this->fields.sortValue1 = v44->fields.hp;
      if ( !v45 )
        goto LABEL_112;
      adjustHp = v44->fields.adjustHp;
      hp = v44->fields.hp;
      v48 = 3;
      goto LABEL_90;
    case 6:
      v49 = this->fields.userSvtEntity;
      if ( !v49 )
        goto LABEL_112;
      v45 = this->fields.iconLabelInfo1;
      this->fields.sortValue1 = v49->fields.atk;
      if ( !v45 )
        goto LABEL_112;
      adjustHp = v49->fields.adjustAtk;
      hp = v49->fields.atk;
      v48 = 5;
LABEL_90:
      IconLabelInfo__Set_28888132(v45, v48, hp, adjustHp, 0, 0, 0, 0, 0LL);
      goto LABEL_94;
    case 7:
      servantEntity = this->fields.servantEntity;
      if ( !servantEntity )
        goto LABEL_112;
      v51 = this->fields.iconLabelInfo1;
      this->fields.sortValue1 = servantEntity->fields.cost;
      if ( !v51 )
        goto LABEL_112;
      IconLabelInfo__Set_28888132(v51, 7, servantEntity->fields.cost, 0, 0, 0, 0, 0, 0LL);
LABEL_94:
      v42 = this->fields.userSvtEntity;
      if ( !v42 )
        goto LABEL_112;
      v43 = this->fields.iconLabelInfo2;
LABEL_96:
      lv = v42->fields.lv;
      break;
    case 8:
      this->fields.sortValue1 = this->fields.classId;
      return 1;
    case 0xE:
      amountSortValue = this->fields.amountSortValue;
      if ( (amountSortValue & 0x8000000000000000LL) == 0 )
        goto LABEL_106;
      manager = sort->fields.manager;
      if ( !manager )
        goto LABEL_112;
      v56 = *(&SvtEqCombineListViewManager_TypeInfo->_2.bitflags2 + 1);
      if ( *(&manager->klass->_2.bitflags2 + 1) < (unsigned int)v56
        || (SvtEqCombineListViewManager_c *)manager->klass->_2.typeHierarchy[v56 - 1] != SvtEqCombineListViewManager_TypeInfo )
      {
        goto LABEL_112;
      }
      amountSortValue = SvtEqCombineListViewManager__GetAmountSortValue(
                          (SvtEqCombineListViewManager_o *)manager,
                          this->fields.svtId,
                          v29);
      this->fields.amountSortValue = amountSortValue;
LABEL_106:
      v57 = this->fields.servantEntity;
      if ( !v57 )
        goto LABEL_112;
      collectionNo = v57->fields.collectionNo;
      v59 = this->fields.userSvtEntity;
      this->fields.sortValue1 = (((unsigned __int64)(unsigned int)this->fields.rarity << 32) + (amountSortValue << 48)) | collectionNo;
      if ( !v59 )
        goto LABEL_112;
      v43 = this->fields.iconLabelInfo1;
      lv = v59->fields.lv;
      v42 = v59;
      break;
    default:
      return result;
  }
  LevelMax = UserServantEntity__getLevelMax(v42, 0LL);
  if ( !v43 )
LABEL_112:
    sub_B170D4();
  IconLabelInfo__Set_28888132(v43, 2, lv, LevelMax, 0, 0, 0, 0, 0LL);
  return 1;
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
    sub_B170D4();
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
  UserServantEntity_o *userSvtEntity; // x0

  servantEntity = this->fields.servantEntity;
  if ( !servantEntity || (userSvtEntity = this->fields.userSvtEntity) == 0LL )
    sub_B170D4();
  return UserServantEntity__getAddTotalExp(userSvtEntity, servantEntity->fields.combineMaterialId, 0LL);
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
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v4; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v6; // [xsp+0h] [xbp-50h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+20h] [xbp-30h]

  if ( (byte_40FD615 & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
    byte_40FD615 = 1;
  }
  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_B170D4();
  v4 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v7.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v7.fields.fakeValue = v4;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v6 = v7;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v6, 0LL);
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
  sub_B16F98(
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
    sub_B170D4();
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