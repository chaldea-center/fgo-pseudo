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
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  IconLabelInfo_o *v24; // x21
  struct IconLabelInfo_o **p_iconLabelInfo2; // x20
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_userSvtEntity; // x22
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  int64_t Instance; // x0
  int64_t v40; // x1
  __int64 v41; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v42; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v43; // x21
  __int64 v44; // x27
  __int64 v45; // x28
  Il2CppObject *Entity; // x0
  struct ServantEntity_o **p_servantEntity; // x27
  System_String_o *v48; // x2
  System_String_o *v49; // x3
  int32_t v50; // w4
  int32_t v51; // w5
  bool v52; // w6
  bool v53; // w7
  struct UserServantEntity_o *v54; // x8
  System_String_o *v55; // x2
  System_String_o *v56; // x3
  int32_t v57; // w4
  int32_t v58; // w5
  bool v59; // w6
  bool v60; // w7
  struct ServantEntity_o *servantEntity; // x8
  int32_t classId; // w8
  System_String_o *v63; // x2
  System_String_o *v64; // x3
  int32_t v65; // w4
  int32_t v66; // w5
  bool v67; // w6
  bool v68; // w7
  ServantLimitMaster_o *v69; // x21
  int32_t v70; // w28
  int32_t v71; // w8
  const MethodInfo_47A29F8 *v72; // x0
  __int64 v73; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v74; // x8
  UserServantCollectionMaster_o *v75; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v76; // q1
  int64_t v77; // x28
  struct UserServantEntity_o *v78; // x8
  bool IsFriendShipSvtEquip; // w8
  bool IsChocolateSvtEquip; // w0
  int32_t v81; // w8
  bool isLevelMax; // w8
  bool isLimitCountMax; // w8
  bool IsLock; // w8
  __int64 v85; // x2
  struct UserServantEntity_o *v86; // x8
  __int128 v87; // q0
  __int128 v88; // q1
  int v89; // w8
  __int64 v90; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v91; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v92; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v93; // q1
  int v94; // w8
  int64_t v95; // x0
  __int128 v96; // q1
  __int64 Enumerator; // x0
  __int64 v98; // x1
  __int64 v99; // x29
  __int64 v100; // x8
  __int64 v101; // x9
  int *v102; // x10
  __int64 v103; // x0
  __int64 v104; // x0
  __int64 v105; // x2
  __int64 v106; // x29
  __int64 v107; // x8
  __int64 v108; // x9
  int *v109; // x10
  __int64 v110; // x0
  __int64 v111; // x2
  __int64 v112; // x8
  __int128 v113; // q0
  __int128 v114; // q1
  int v115; // w8
  int64_t v116; // x0
  __int64 v117; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v118; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v119; // q1
  int64_t v120; // x21
  __int64 v121; // x21
  __int64 v122; // x8
  __int64 v123; // x9
  int *v124; // x10
  __int64 v125; // x0
  __int64 v126; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v127; // x8
  UserRecommendSupportMaster_o *v128; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v129; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v130; // q1
  int v131; // w8
  struct UserServantEntity_o *v132; // x8
  __int128 v133; // q1
  UserServantGrandMaster_o *v134; // x21
  const MethodInfo_47A29F8 *v135; // x0
  __int64 v136; // x2
  int32_t v137; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v138; // x8
  __int64 v139; // x21
  __int64 v140; // x24
  int32_t v141; // w21
  __int64 v142; // x2
  struct UserServantEntity_o *v143; // x8
  __int128 v144; // q0
  __int128 v145; // q1
  int v146; // w8
  int64_t v147; // x0
  __int128 v148; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v149; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v150; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v151; // q1
  int v152; // w8
  bool IsEquip_50030864; // w0
  const MethodInfo_47A29F8 *v154; // x8
  __int64 v155; // x0
  __int64 v156; // x1
  __int64 v157; // x23
  __int64 v158; // x8
  __int64 v159; // x9
  int *v160; // x10
  __int64 v161; // x0
  __int64 v162; // x0
  __int64 v163; // x2
  __int64 v164; // x23
  __int64 v165; // x8
  __int64 v166; // x9
  int *v167; // x10
  __int64 v168; // x0
  __int64 v169; // x2
  __int64 v170; // x8
  __int128 v171; // q0
  __int128 v172; // q1
  int v173; // w8
  int64_t v174; // x0
  __int64 v175; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v176; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v177; // q1
  int64_t v178; // x21
  __int64 v179; // x21
  __int64 v180; // x8
  __int64 v181; // x9
  int *v182; // x10
  __int64 v183; // x0
  __int64 v184; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v185; // x8
  UserRecommendSupportMaster_o *v186; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v187; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v188; // q1
  int v189; // w8
  struct UserServantEntity_o *v190; // x8
  __int128 v191; // q1
  UserServantGrandMaster_o *v192; // x21
  bool IsSettingEquip; // w8
  bool v194; // w8
  bool IsChoice; // w0
  bool isFriendShipSvtEq; // w8
  __int64 v197; // x2
  struct ServantEntity_o *v198; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v199; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c *v200; // x0
  __int64 v201; // x21
  __int64 v202; // x22
  __int64 v203; // x2
  struct UserServantEntity_o *v204; // x8
  __int128 v205; // q0
  __int128 v206; // q1
  int v207; // w8
  int64_t v208; // x8
  struct System_Int32_array *EquipCategoryIdList; // x0
  System_String_o *v210; // x2
  System_String_o *v211; // x3
  int32_t v212; // w4
  int32_t v213; // w5
  bool v214; // w6
  bool v215; // w7
  bool v216; // [xsp+14h] [xbp-2BCh]
  UserDeckMaster_o *MasterData_object; // [xsp+28h] [xbp-2A8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v219; // [xsp+30h] [xbp-2A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v220; // [xsp+50h] [xbp-280h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v221; // [xsp+70h] [xbp-260h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v222; // [xsp+90h] [xbp-240h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v223; // [xsp+B0h] [xbp-220h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v224; // [xsp+D0h] [xbp-200h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v225; // [xsp+F0h] [xbp-1E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v226; // [xsp+110h] [xbp-1C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v227; // [xsp+130h] [xbp-1A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v228; // [xsp+150h] [xbp-180h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v229; // [xsp+170h] [xbp-160h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v230; // [xsp+190h] [xbp-140h] BYREF
  __int64 v231; // [xsp+1B0h] [xbp-120h]
  __int64 *v232; // [xsp+1B8h] [xbp-118h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v233; // [xsp+1C0h] [xbp-110h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v234; // [xsp+1E0h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v235; // [xsp+200h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v236; // [xsp+220h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v237; // [xsp+240h] [xbp-90h]
  __int64 v238; // [xsp+268h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v239; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v240; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v241; // 0:x0.16

  if ( (byte_596A3B9 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_UserServantLeaderEntity__GetEnumerator__);
    sub_2213A60(&Method_DataManager_GetMasterData_CombineMaterialMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserDeckMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantLeaderMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserRecommendSupportMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserServantGrandMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_2213A60(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_2213A60(&Method_DataMasterBase_UserServantLeaderMaster__UserServantLeaderEntity__string__getEntityList__);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_UserServantLeaderEntity__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&IconLabelInfo_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596A3B9 = 1;
  }
  v238 = 0;
  v17 = (IconLabelInfo_o *)sub_2213CCC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v17, 0);
  this->fields.iconLabelInfo1 = v17;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.iconLabelInfo1,
    (int32_t)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v24 = (IconLabelInfo_o *)sub_2213CCC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v24, 0);
  this->fields.iconLabelInfo2 = v24;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.iconLabelInfo2,
    (int32_t)v24,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  ListViewItem___ctor((ListViewItem_o *)this, 0);
  this->fields.userSvtEntity = userSvtEntity;
  p_userSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userSvtEntity;
  this->fields.type = type;
  this->fields.index = index;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.userSvtEntity,
    (int32_t)userSvtEntity,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_177;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantMaster___);
  v42 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_177;
  v43 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v44 = *(_QWORD *)&v42[5].fields.currentCryptoKey;
  v45 = *(_QWORD *)&v42[5].fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v40, v41);
  *(_QWORD *)&v239.fields.currentCryptoKey = v44;
  *(_QWORD *)&v239.fields.fakeValue = v45;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v239, 0);
  if ( !v43 )
    goto LABEL_177;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v43,
             Instance,
             (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)Entity;
  p_servantEntity = &this->fields.servantEntity;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.servantEntity,
    (int32_t)Entity,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53);
  v54 = this->fields.userSvtEntity;
  if ( !v54 )
    goto LABEL_177;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v54->fields.svtId, 0);
  servantEntity = this->fields.servantEntity;
  this->fields.svtId = Instance;
  if ( !servantEntity )
    goto LABEL_177;
  classId = servantEntity->fields.classId;
  this->fields.setupInfo = setupInfo;
  this->fields.classId = classId;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.setupInfo,
    (int32_t)setupInfo,
    v55,
    v56,
    v57,
    v58,
    v59,
    v60);
  this->fields.finishSetupInfo = finishSetupInfo;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.finishSetupInfo,
    (int32_t)finishSetupInfo,
    v63,
    v64,
    v65,
    v66,
    v67,
    v68);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_177;
  MasterData_object = (UserDeckMaster_o *)DataManager__GetMasterData_object_(
                                            (DataManager_o *)Instance,
                                            (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserDeckMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_177;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtEntity )
    goto LABEL_177;
  v69 = (ServantLimitMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068((*p_userSvtEntity)[5], 0);
  if ( !*p_userSvtEntity )
    goto LABEL_177;
  v70 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068((*p_userSvtEntity)[6], 0);
  if ( !v69 )
    goto LABEL_177;
  Instance = (int64_t)ServantLimitMaster__GetEntity(v69, v70, Instance, 0);
  if ( !Instance )
    goto LABEL_177;
  v71 = *(_DWORD *)(Instance + 24);
  v72 = (const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__;
  this->fields.rarity = v71;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance(v72);
  if ( !Instance )
    goto LABEL_177;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v74 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_177;
  v75 = (UserServantCollectionMaster_o *)Instance;
  v76 = v74[4];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v237.fields.currentCryptoKey = v74[3];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v237.fields.fakeValue = v76;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v40, v73);
  v236 = v237;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v236, 0);
  if ( !*p_userSvtEntity )
    goto LABEL_177;
  v77 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068((*p_userSvtEntity)[5], 0);
  if ( !v75 )
    goto LABEL_177;
  Instance = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(v75, v77, Instance, 0);
  if ( !Instance )
    goto LABEL_177;
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
    goto LABEL_177;
  Instance = UserServantEntity__getLimitCntMax((UserServantEntity_o *)Instance, 0);
  v78 = this->fields.userSvtEntity;
  this->fields.maxLimitCnt = Instance;
  if ( !v78 )
    goto LABEL_177;
  this->fields.currentLimitCnt = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                   v78->fields.limitCount,
                                   0);
  Instance = (int64_t)this->fields.userSvtEntity;
  this->fields.dragSelectNum = -1;
  this->fields.isCanNotLock = 0;
  *(_QWORD *)&this->fields.isBaseLvMax = 0;
  *(_QWORD *)&this->fields.bonusKind = 1;
  this->fields.isEventUpVal = 0;
  this->fields.isNotSelection = 0;
  if ( !Instance )
    goto LABEL_177;
  IsFriendShipSvtEquip = UserServantEntity__IsFriendShipSvtEquip((UserServantEntity_o *)Instance, 0);
  Instance = (int64_t)this->fields.userSvtEntity;
  this->fields.isFriendShipSvtEq = IsFriendShipSvtEquip;
  if ( !Instance )
    goto LABEL_177;
  IsChocolateSvtEquip = UserServantEntity__IsChocolateSvtEquip((UserServantEntity_o *)Instance, 0);
  v81 = this->fields.type;
  this->fields.isChocolateSvtEquip = IsChocolateSvtEquip;
  if ( !v81 )
  {
    Instance = (int64_t)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_177;
    isLevelMax = UserServantEntity__isLevelMax((UserServantEntity_o *)Instance, 0);
    Instance = (int64_t)this->fields.userSvtEntity;
    this->fields.isLvMax = isLevelMax;
    if ( !Instance )
      goto LABEL_177;
    isLimitCountMax = UserServantEntity__isLimitCountMax((UserServantEntity_o *)Instance, 0);
    Instance = (int64_t)this->fields.userSvtEntity;
    this->fields.isLimitCntMax = isLimitCountMax;
    if ( !Instance )
      goto LABEL_177;
    IsLock = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0);
    Instance = (int64_t)this->fields.userSvtEntity;
    this->fields.isLock = IsLock;
    if ( !Instance )
      goto LABEL_177;
    Instance = UserServantEntity__IsChoice((UserServantEntity_o *)Instance, 0);
    v86 = this->fields.userSvtEntity;
    this->fields.isChoice = Instance & 1;
    if ( !v86 )
      goto LABEL_177;
    v87 = *(_OWORD *)&v86->fields.id.fields.currentCryptoKey;
    v88 = *(_OWORD *)&v86->fields.id.fields.fakeValue;
    v89 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
    *(_OWORD *)&v237.fields.currentCryptoKey = v87;
    *(_OWORD *)&v237.fields.fakeValue = v88;
    if ( !v89 )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v40, v85);
    v235 = v237;
    v40 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v235, 0);
    Instance = (int64_t)MasterData_object;
    if ( !MasterData_object )
      goto LABEL_177;
    Instance = UserDeckMaster__IsEquip(MasterData_object, v40, 0);
    this->fields.isEquiped = Instance & 1;
    if ( baseUsrSvtData )
    {
      v91 = *p_userSvtEntity;
      if ( !*p_userSvtEntity )
        goto LABEL_177;
      v92 = v91[1];
      v93 = v91[2];
      v94 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v237.fields.currentCryptoKey = v92;
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v237.fields.fakeValue = v93;
      if ( !v94 )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v40, v90);
      v234 = v237;
      v95 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v234, 0);
      v96 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
      *(_OWORD *)&v233.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v233.fields.fakeValue = v96;
      if ( v95 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v233, 0) )
        this->fields.isBaseSvt = 1;
    }
    Instance = (int64_t)*p_servantEntity;
    if ( !*p_servantEntity )
      goto LABEL_177;
    if ( ServantEntity__get_IsServantEquipMaterial((ServantEntity_o *)Instance, 0) )
      this->fields.isSvtEqMaterial = 1;
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_177;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantLeaderMaster___);
    if ( !Instance )
      goto LABEL_177;
    Instance = *(_QWORD *)(Instance + 40);
    v216 = isMtSvt;
    if ( !Instance )
      goto LABEL_177;
    Enumerator = (__int64)System_Collections_ObjectModel_Collection_object___GetEnumerator(
                            (System_Collections_ObjectModel_Collection_T__o *)Instance,
                            (const MethodInfo_3E94810 *)Method_System_Collections_ObjectModel_Collection_UserServantLeaderEntity__GetEnumerator__);
    v238 = Enumerator;
    v231 = 0;
    v232 = &v238;
    if ( !Enumerator )
LABEL_71:
      sub_2213CDC(Enumerator, v98);
    v99 = Enumerator;
    while ( 1 )
    {
      v100 = *(_QWORD *)v99;
      v101 = *(unsigned __int16 *)(*(_QWORD *)v99 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v99 + 302LL) )
      {
        v102 = (int *)(*(_QWORD *)(v100 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v102 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v101;
          v102 += 4;
          if ( !v101 )
            goto LABEL_54;
        }
        v103 = v100 + 16LL * *v102 + 312;
      }
      else
      {
LABEL_54:
        v103 = sub_224BC3C(v99, System_Collections_IEnumerator_TypeInfo, 0);
      }
      v104 = (*(__int64 (__fastcall **)(__int64, _QWORD))v103)(v99, *(_QWORD *)(v103 + 8));
      if ( (v104 & 1) == 0 )
        break;
      v106 = v238;
      if ( !v238 )
        sub_2213CDC(v104, v98);
      v107 = *(_QWORD *)v238;
      v108 = *(unsigned __int16 *)(*(_QWORD *)v238 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v238 + 302LL) )
      {
        v109 = (int *)(*(_QWORD *)(v107 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_UserServantLeaderEntity__c **)v109 - 1) != System_Collections_Generic_IEnumerator_UserServantLeaderEntity__TypeInfo )
        {
          --v108;
          v109 += 4;
          if ( !v108 )
            goto LABEL_62;
        }
        v110 = v107 + 16LL * *v109 + 312;
      }
      else
      {
LABEL_62:
        v110 = sub_224BC3C(v238, System_Collections_Generic_IEnumerator_UserServantLeaderEntity__TypeInfo, 0);
      }
      Enumerator = (*(__int64 (__fastcall **)(__int64, _QWORD))v110)(v106, *(_QWORD *)(v110 + 8));
      if ( !Enumerator )
        sub_2213CDC(0, v98);
      v112 = *(_QWORD *)(Enumerator + 32);
      if ( v112 )
      {
        v113 = *(_OWORD *)(v112 + 24);
        v114 = *(_OWORD *)(v112 + 40);
        v115 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
        *(_OWORD *)&v237.fields.currentCryptoKey = v113;
        *(_OWORD *)&v237.fields.fakeValue = v114;
        if ( !v115 )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v98, v111);
        v230 = v237;
        v116 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v230, 0);
        v118 = *p_userSvtEntity;
        if ( !*p_userSvtEntity )
          sub_2213CDC(v116, v117);
        v119 = v118[2];
        v120 = v116;
        *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v229.fields.currentCryptoKey = v118[1];
        *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v229.fields.fakeValue = v119;
        Enumerator = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v229, 0);
        if ( v120 == Enumerator )
        {
          this->fields.isUseSupportEquip = 1;
          break;
        }
      }
      v99 = v238;
      if ( !v238 )
        goto LABEL_71;
    }
    v121 = v238;
    if ( v238 )
    {
      v122 = *(_QWORD *)v238;
      v123 = *(unsigned __int16 *)(*(_QWORD *)v238 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v238 + 302LL) )
      {
        v124 = (int *)(*(_QWORD *)(v122 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v124 - 1) != System_IDisposable_TypeInfo )
        {
          --v123;
          v124 += 4;
          if ( !v123 )
            goto LABEL_79;
        }
        v125 = v122 + 16LL * *v124 + 312;
      }
      else
      {
LABEL_79:
        v125 = sub_224BC3C(v238, System_IDisposable_TypeInfo, 0);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v125)(v121, *(_QWORD *)(v125 + 8));
    }
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v98, v105);
    Instance = (int64_t)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserRecommendSupportMaster___);
    v127 = *p_userSvtEntity;
    p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
    isMtSvt = v216;
    if ( !*p_userSvtEntity )
      goto LABEL_177;
    v128 = (UserRecommendSupportMaster_o *)Instance;
    v129 = v127[1];
    v130 = v127[2];
    v131 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v237.fields.currentCryptoKey = v129;
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v237.fields.fakeValue = v130;
    if ( !v131 )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v40, v126);
    v228 = v237;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v228, 0);
    if ( !v128 )
      goto LABEL_177;
    this->fields.isUseRecommendSupportEquip = UserRecommendSupportMaster__IsSettingServant(v128, Instance, 1, 0);
    Instance = (int64_t)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserServantGrandMaster___);
    v132 = this->fields.userSvtEntity;
    if ( !v132 )
      goto LABEL_177;
    v133 = *(_OWORD *)&v132->fields.id.fields.fakeValue;
    v134 = (UserServantGrandMaster_o *)Instance;
    *(_OWORD *)&v227.fields.currentCryptoKey = *(_OWORD *)&v132->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v227.fields.fakeValue = v133;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v227, 0);
    if ( !v134 )
      goto LABEL_177;
    this->fields.isUseGrandServantEquip = UserServantGrandMaster__IsSettingEquip(v134, Instance, 0);
  }
  if ( type != 1 )
    goto LABEL_163;
  v135 = (const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__;
  this->fields.isMaterialSvt = isMtSvt;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance(v135);
  if ( !Instance )
    goto LABEL_177;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_CombineMaterialMaster___);
  if ( !*p_servantEntity || !*p_userSvtEntity || !Instance )
    goto LABEL_177;
  Instance = (int64_t)CombineMaterialMaster__GetEntity(
                        (CombineMaterialMaster_o *)Instance,
                        (*p_servantEntity)->fields.combineMaterialId,
                        (*p_userSvtEntity)[25].fields.currentCryptoKey,
                        0);
  v137 = Instance ? *(_DWORD *)(Instance + 24) : 0;
  this->fields.materialExp = v137;
  if ( baseUsrSvtData )
  {
    v138 = *p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_177;
    v139 = *(_QWORD *)&v138[5].fields.currentCryptoKey;
    v140 = *(_QWORD *)&v138[5].fields.fakeValue;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v40, v136);
    *(_QWORD *)&v240.fields.currentCryptoKey = v139;
    *(_QWORD *)&v240.fields.fakeValue = v140;
    v141 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v240, 0);
    if ( v141 == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(baseUsrSvtData->fields.svtId, 0) )
    {
      Instance = UserServantEntity__isLimitCountMax(baseUsrSvtData, 0);
      v143 = this->fields.userSvtEntity;
      this->fields.isLimitCntMax = Instance & 1;
      this->fields.isLimitCntTarget = (Instance & 1) == 0;
      if ( !v143 )
        goto LABEL_177;
      v144 = *(_OWORD *)&v143->fields.id.fields.currentCryptoKey;
      v145 = *(_OWORD *)&v143->fields.id.fields.fakeValue;
      v146 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
      *(_OWORD *)&v237.fields.currentCryptoKey = v144;
      *(_OWORD *)&v237.fields.fakeValue = v145;
      if ( !v146 )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v40, v142);
      v226 = v237;
      v147 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v226, 0);
      v148 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
      *(_OWORD *)&v225.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v225.fields.fakeValue = v148;
      if ( v147 != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v225, 0) )
        this->fields.isSameSvt = 1;
    }
    Instance = UserServantEntity__isLevelMax(baseUsrSvtData, 0);
    this->fields.isBaseLvMax = Instance & 1;
  }
  else
  {
    this->fields.isLimitCntTarget = 0;
  }
  v149 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_177;
  v150 = v149[1];
  v151 = v149[2];
  v152 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v237.fields.currentCryptoKey = v150;
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v237.fields.fakeValue = v151;
  if ( !v152 )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v40, v136);
  v224 = v237;
  v40 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v224, 0);
  Instance = (int64_t)MasterData_object;
  if ( !MasterData_object )
    goto LABEL_177;
  IsEquip_50030864 = UserDeckMaster__IsEquip_50030864(MasterData_object, v40, &this->fields.partyIndex, 0);
  v154 = (const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__;
  this->fields.isEquiped = IsEquip_50030864;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance(v154);
  if ( !Instance )
    goto LABEL_177;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantLeaderMaster___);
  if ( !Instance )
    goto LABEL_177;
  Instance = *(_QWORD *)(Instance + 40);
  if ( !Instance )
    goto LABEL_177;
  v155 = (__int64)System_Collections_ObjectModel_Collection_object___GetEnumerator(
                    (System_Collections_ObjectModel_Collection_T__o *)Instance,
                    (const MethodInfo_3E94810 *)Method_System_Collections_ObjectModel_Collection_UserServantLeaderEntity__GetEnumerator__);
  v238 = v155;
  v231 = 0;
  v232 = &v238;
  if ( !v155 )
LABEL_141:
    sub_2213CDC(v155, v156);
  v157 = v155;
  while ( 1 )
  {
    v158 = *(_QWORD *)v157;
    v159 = *(unsigned __int16 *)(*(_QWORD *)v157 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v157 + 302LL) )
    {
      v160 = (int *)(*(_QWORD *)(v158 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v160 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v159;
        v160 += 4;
        if ( !v159 )
          goto LABEL_124;
      }
      v161 = v158 + 16LL * *v160 + 312;
    }
    else
    {
LABEL_124:
      v161 = sub_224BC3C(v157, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v162 = (*(__int64 (__fastcall **)(__int64, _QWORD))v161)(v157, *(_QWORD *)(v161 + 8));
    if ( (v162 & 1) == 0 )
      break;
    v164 = v238;
    if ( !v238 )
      sub_2213CDC(v162, v156);
    v165 = *(_QWORD *)v238;
    v166 = *(unsigned __int16 *)(*(_QWORD *)v238 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v238 + 302LL) )
    {
      v167 = (int *)(*(_QWORD *)(v165 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_UserServantLeaderEntity__c **)v167 - 1) != System_Collections_Generic_IEnumerator_UserServantLeaderEntity__TypeInfo )
      {
        --v166;
        v167 += 4;
        if ( !v166 )
          goto LABEL_132;
      }
      v168 = v165 + 16LL * *v167 + 312;
    }
    else
    {
LABEL_132:
      v168 = sub_224BC3C(v238, System_Collections_Generic_IEnumerator_UserServantLeaderEntity__TypeInfo, 0);
    }
    v155 = (*(__int64 (__fastcall **)(__int64, _QWORD))v168)(v164, *(_QWORD *)(v168 + 8));
    if ( !v155 )
      sub_2213CDC(0, v156);
    v170 = *(_QWORD *)(v155 + 32);
    if ( v170 )
    {
      v171 = *(_OWORD *)(v170 + 24);
      v172 = *(_OWORD *)(v170 + 40);
      v173 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
      *(_OWORD *)&v237.fields.currentCryptoKey = v171;
      *(_OWORD *)&v237.fields.fakeValue = v172;
      if ( !v173 )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v156, v169);
      v223 = v237;
      v174 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v223, 0);
      v176 = *p_userSvtEntity;
      if ( !*p_userSvtEntity )
        sub_2213CDC(v174, v175);
      v177 = v176[2];
      v178 = v174;
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v222.fields.currentCryptoKey = v176[1];
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v222.fields.fakeValue = v177;
      v155 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v222, 0);
      if ( v178 == v155 )
      {
        this->fields.isUseSupportEquip = 1;
        break;
      }
    }
    v157 = v238;
    if ( !v238 )
      goto LABEL_141;
  }
  v179 = v238;
  if ( v238 )
  {
    v180 = *(_QWORD *)v238;
    v181 = *(unsigned __int16 *)(*(_QWORD *)v238 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v238 + 302LL) )
    {
      v182 = (int *)(*(_QWORD *)(v180 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v182 - 1) != System_IDisposable_TypeInfo )
      {
        --v181;
        v182 += 4;
        if ( !v181 )
          goto LABEL_149;
      }
      v183 = v180 + 16LL * *v182 + 312;
    }
    else
    {
LABEL_149:
      v183 = sub_224BC3C(v238, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v183)(v179, *(_QWORD *)(v183 + 8));
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v156, v163);
  Instance = (int64_t)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserRecommendSupportMaster___);
  v185 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_177;
  v186 = (UserRecommendSupportMaster_o *)Instance;
  v187 = v185[1];
  v188 = v185[2];
  v189 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v237.fields.currentCryptoKey = v187;
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v237.fields.fakeValue = v188;
  if ( !v189 )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v40, v184);
  v221 = v237;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v221, 0);
  if ( !v186 )
    goto LABEL_177;
  this->fields.isUseRecommendSupportEquip = UserRecommendSupportMaster__IsSettingServant(v186, Instance, 1, 0);
  Instance = (int64_t)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserServantGrandMaster___);
  v190 = this->fields.userSvtEntity;
  if ( !v190 )
    goto LABEL_177;
  v191 = *(_OWORD *)&v190->fields.id.fields.fakeValue;
  v192 = (UserServantGrandMaster_o *)Instance;
  *(_OWORD *)&v220.fields.currentCryptoKey = *(_OWORD *)&v190->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v220.fields.fakeValue = v191;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v220, 0);
  if ( !v192
    || (IsSettingEquip = UserServantGrandMaster__IsSettingEquip(v192, Instance, 0),
        Instance = (int64_t)this->fields.userSvtEntity,
        this->fields.isUseGrandServantEquip = IsSettingEquip,
        !Instance)
    || (v194 = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0),
        Instance = (int64_t)this->fields.userSvtEntity,
        this->fields.isLock = v194,
        !Instance) )
  {
LABEL_177:
    sub_2213CDC(Instance, v40);
  }
  IsChoice = UserServantEntity__IsChoice((UserServantEntity_o *)Instance, 0);
  isFriendShipSvtEq = this->fields.isFriendShipSvtEq;
  this->fields.isFavorite = isFavorite;
  this->fields.isChoice = IsChoice;
  this->fields.isNotSelection = isFriendShipSvtEq;
LABEL_163:
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_177;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Instance )
    goto LABEL_177;
  Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                        this->fields.classId,
                        (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_177;
  v198 = this->fields.servantEntity;
  this->fields.sortValue1B = *(int *)(Instance + 52);
  if ( !v198 )
    goto LABEL_177;
  v199 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_177;
  v200 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
  this->fields.sortValue2 = ((__int64)v198->fields.collectionNo << 16)
                          | ((unsigned __int64)(unsigned int)this->fields.rarity << 48)
                          | v199[25].fields.currentCryptoKey;
  v201 = *(_QWORD *)&v199[5].fields.currentCryptoKey;
  v202 = *(_QWORD *)&v199[5].fields.fakeValue;
  if ( !*(&v200->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v200, v40, v197);
  *(_QWORD *)&v241.fields.currentCryptoKey = v201;
  *(_QWORD *)&v241.fields.fakeValue = v202;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v241, 0);
  v204 = this->fields.userSvtEntity;
  this->fields.sortValue2B = (int)Instance;
  if ( !v204 )
    goto LABEL_177;
  v205 = *(_OWORD *)&v204->fields.id.fields.currentCryptoKey;
  v206 = *(_OWORD *)&v204->fields.id.fields.fakeValue;
  v207 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
  *(_OWORD *)&v237.fields.currentCryptoKey = v205;
  *(_OWORD *)&v237.fields.fakeValue = v206;
  if ( !v207 )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v40, v203);
  v219 = v237;
  v208 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v219, 0);
  Instance = (int64_t)this->fields.userSvtEntity;
  this->fields.sortValueLast = v208;
  this->fields.amountSortValue = -1;
  if ( !Instance )
    goto LABEL_177;
  EquipCategoryIdList = UserServantEntity__GetEquipCategoryIdList((UserServantEntity_o *)Instance, 1, 0);
  this->fields.categoryIdList = EquipCategoryIdList;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.categoryIdList,
    (int32_t)EquipCategoryIdList,
    v210,
    v211,
    v212,
    v213,
    v214,
    v215);
  Instance = (int64_t)this->fields.iconLabelInfo1;
  if ( !Instance )
    goto LABEL_177;
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0);
  Instance = (int64_t)*p_iconLabelInfo2;
  if ( !*p_iconLabelInfo2 )
    goto LABEL_177;
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
  __int64 v7; // x2
  FilterKindList_c *v8; // x0
  ListViewSort_FilterKind_array *v9; // x0
  __int64 v10; // x2
  FilterKindList_c *v11; // x0
  ListViewSort_FilterKind_array *v12; // x0
  __int64 v13; // x2
  bool IsMatchServantEquipCombineStatusFilter; // w8
  bool result; // w0
  FilterKindList_c *v16; // x0
  ListViewSort_FilterKind_array *v17; // x0
  bool HaveStatusFilter; // w8
  _BOOL4 isChoice; // w8

  if ( (byte_596A3BB & 1) == 0 )
  {
    sub_2213A60(&FilterKindList_TypeInfo);
    sub_2213A60(&ListViewSort_FilterKind___TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    byte_596A3BB = 1;
  }
  v5 = FilterKindList_TypeInfo;
  if ( !*(&FilterKindList_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort, method);
    v5 = FilterKindList_TypeInfo;
  }
  RarityFilterKindList = (System_Int32Enum_array *)v5->static_fields->RarityFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_36;
  RarityFilterKindList = System_Collections_Generic_List_Int32Enum___ToArray(
                           (System_Collections_Generic_List_T__o *)RarityFilterKindList,
                           (const MethodInfo_446B508 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_36;
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)RarityFilterKindList, 0)
    && !ListViewSort__IsMatchRarityFilter(sort, this->fields.rarity, 0)
    || !ListViewSort__CheckSvtEquipEffectFilterDefaultAll(sort, 0)
    && !ServantEquipEffectFilterController__IsMatchEffectCategory(this->fields.categoryIdList, sort, 0) )
  {
    return 0;
  }
  v8 = FilterKindList_TypeInfo;
  if ( !*(&FilterKindList_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort, v7);
    v8 = FilterKindList_TypeInfo;
  }
  RarityFilterKindList = (System_Int32Enum_array *)v8->static_fields->ServantEquipTypeFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_36;
  v9 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                          (System_Collections_Generic_List_T__o *)RarityFilterKindList,
                                          (const MethodInfo_446B508 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v9, 0)
    && !ListViewSort__IsMatchServantEquipTypeFilter(sort, this->fields.servantEntity, 0) )
  {
    return 0;
  }
  v11 = FilterKindList_TypeInfo;
  if ( !*(&FilterKindList_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort, v10);
    v11 = FilterKindList_TypeInfo;
  }
  RarityFilterKindList = (System_Int32Enum_array *)v11->static_fields->ServantEquipCombineStatusFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_36;
  v12 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)RarityFilterKindList,
                                           (const MethodInfo_446B508 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, v12, 0)
    || (IsMatchServantEquipCombineStatusFilter = ListViewSort__IsMatchServantEquipCombineStatusFilter(
                                                   sort,
                                                   this->fields.userSvtEntity,
                                                   this->fields.servantEntity,
                                                   0,
                                                   0),
        result = 0,
        IsMatchServantEquipCombineStatusFilter) )
  {
    v16 = FilterKindList_TypeInfo;
    if ( !*(&FilterKindList_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort, v13);
      v16 = FilterKindList_TypeInfo;
    }
    RarityFilterKindList = (System_Int32Enum_array *)v16->static_fields->ServantEquipHaveStatusFilterKindList;
    if ( !RarityFilterKindList )
      goto LABEL_36;
    v17 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                             (System_Collections_Generic_List_T__o *)RarityFilterKindList,
                                             (const MethodInfo_446B508 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, v17, 0)
      || (HaveStatusFilter = ListViewSort__IsMatchServantEquipHaveStatusFilter(
                               sort,
                               this->fields.userSvtEntity,
                               this->fields.servantEntity,
                               0,
                               0),
          result = 0,
          HaveStatusFilter) )
    {
      RarityFilterKindList = (System_Int32Enum_array *)sub_2213B20(ListViewSort_FilterKind___TypeInfo, 1);
      if ( RarityFilterKindList )
      {
        if ( !LODWORD(RarityFilterKindList->max_length) )
          sub_2213CE4(RarityFilterKindList);
        RarityFilterKindList->m_Items[0] = 39;
        if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)RarityFilterKindList, 0)
          || !ListViewSort__GetFilter(sort, 39, 0) )
        {
          return 1;
        }
        isChoice = this->fields.isChoice;
        if ( this->fields.isSwapChoice )
          return !this->fields.isChoice;
        return isChoice;
      }
LABEL_36:
      sub_2213CDC(RarityFilterKindList, sort);
    }
  }
  return result;
}


void SvtEqCombineListViewItem__ModifyChoiceItem(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0
  bool IsChoice; // w0

  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_2213CDC(0, method);
  IsChoice = UserServantEntity__IsChoice(userSvtEntity, 0);
  this->fields.isSwapChoice = 0;
  this->fields.isChoice = IsChoice;
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
  bool IsLock; // w0

  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_2213CDC(0, method);
  IsLock = UserServantEntity__IsLock(userSvtEntity, 0);
  this->fields.isSwapLock = 0;
  this->fields.isLock = IsLock;
}


bool SvtEqCombineListViewItem__SetSortValue(
        SvtEqCombineListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  SvtEqCombineListViewItem_o *v4; // x19
  __int64 v5; // x2
  EventUpValSetupInfo_o *setupInfo; // x4
  int32_t bonusKind; // w8
  int32_t bonusKindId; // w8
  int32_t v9; // w8
  int32_t v10; // w9
  int32_t bonusKind2Id; // w5
  int32_t v12; // w9
  int32_t v13; // w8
  System_Collections_Generic_List_EventGroupEntity__o *EntitiesByGroupId; // x21
  System_Func_object__bool__o *v15; // x0
  intptr_t *v16; // x8
  DataManager_c *v17; // x0
  __int64 v18; // x2
  struct UserServantEntity_o *userSvtEntity; // x8
  EventCampaignMaster_o *v20; // x21
  __int64 v21; // x22
  __int64 v22; // x23
  System_Func_T__bool__o *v23; // x22
  struct EventUpValSetupInfo_o *finishSetupInfo; // x8
  struct System_Int32_array *servantEquipFilterEventIds; // x8
  EventUpValSetupInfo_o *v26; // x4
  int32_t v27; // w8
  int32_t v28; // w5
  int isEventUpVal; // w8
  bool EventUpVal_50186380; // w0
  _BOOL4 isChoice; // w21
  const MethodInfo *v32; // x2
  int64_t *p_sortValue0; // x8
  __int64 v34; // x9
  char v35; // w9
  int32_t type; // w9
  __int64 v37; // x9
  __int64 v38; // x9
  char v39; // w8
  bool isLock; // w10
  int v41; // w10
  _BOOL4 isChoiceSort; // w10
  bool v43; // zf
  char v44; // w10
  int32_t sortKind; // w8
  int64_t rarity; // x8
  struct ServantEntity_o *servantEntity; // x8
  int64_t cost; // x2
  int64_t v49; // x20
  IconLabelInfo_o *v50; // x21
  int32_t v51; // w3
  IconLabelInfo_o *v52; // x0
  int32_t v53; // w1
  __int64 naturalAligment; // x10
  struct ServantEntity_o *v55; // x8
  unsigned __int64 v56; // x9
  IconLabelInfo_o *iconLabelInfo1; // x19
  struct UserServantEntity_o *v58; // x8
  __int128 v59; // q1
  struct UserServantEntity_o *v60; // x8
  IconLabelInfo_o *v61; // x21
  int32_t viewObject; // w20
  int64_t viewObject_low; // x20
  IconLabelInfo_o *v64; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v66; // [xsp+10h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v67; // [xsp+30h] [xbp-50h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v68; // 0:x0.16

  v4 = this;
  if ( (byte_596A3BA & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_Any_EventGroupEntity___);
    sub_2213A60(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_EventGroupMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&System_Func_EventGroupEntity__bool__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_EventGroupEntity__get_Count__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&Method_SvtEqCombineListViewItem__SetSortValue_b__53_0__);
    sub_2213A60(&Method_SvtEqCombineListViewItem__SetSortValue_b__53_1__);
    this = (SvtEqCombineListViewItem_o *)sub_2213A60(&SvtEqCombineListViewManager_TypeInfo);
    byte_596A3BA = 1;
  }
  *(_WORD *)&v4->fields.isTermination = 0;
  v4->fields.sortValue1 = -1;
  if ( !sort )
    goto LABEL_178;
  if ( !sort->fields.isBonusKind )
    goto LABEL_64;
  if ( v4->fields.isBaseSvt )
    goto LABEL_64;
  this = (SvtEqCombineListViewItem_o *)ListViewItem__get_IsSelect((ListViewItem_o *)v4, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
    goto LABEL_64;
  setupInfo = v4->fields.setupInfo;
  if ( !setupInfo )
    goto LABEL_178;
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
        if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, sort, v5);
        this = (SvtEqCombineListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventGroupMaster___);
        if ( !this )
          goto LABEL_178;
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
            goto LABEL_178;
          if ( EntitiesByGroupId->fields._size >= 2 )
          {
            v15 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_EventGroupEntity__bool__TypeInfo);
            v16 = &Method_SvtEqCombineListViewItem__SetSortValue_b__53_0__;
LABEL_62:
            v23 = (System_Func_T__bool__o *)v15;
            System_Func_object__bool____ctor(v15, (Il2CppObject *)v4, *v16, 0);
            this = (SvtEqCombineListViewItem_o *)BasicHelper__Any_object_(
                                                   (System_Collections_Generic_List_T__o *)EntitiesByGroupId,
                                                   v23,
                                                   (const MethodInfo_380FDE0 *)Method_BasicHelper_Any_EventGroupEntity___);
            v4->fields.isEventUpVal = (unsigned __int8)this & 1;
            goto LABEL_63;
          }
        }
        goto LABEL_63;
      }
      if ( v4->fields.bonusKind == 3 )
      {
        v12 = v4->fields.bonusKindId;
        v13 = sort->fields.bonusKindId;
        goto LABEL_30;
      }
      v13 = sort->fields.bonusKindId;
      goto LABEL_45;
    }
    if ( v4->fields.bonusKind == bonusKind )
    {
      v10 = v4->fields.bonusKindId;
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
      v10 = v4->fields.bonusKindId;
      bonusKind2Id = sort->fields.bonusKind2Id;
LABEL_23:
      if ( v10 == bonusKind2Id )
        goto LABEL_63;
      goto LABEL_33;
    }
    bonusKind2Id = sort->fields.bonusKind2Id;
LABEL_33:
    this = (SvtEqCombineListViewItem_o *)v4->fields.userSvtEntity;
    v4->fields.bonusKind = bonusKind;
    v4->fields.bonusKindId = bonusKind2Id;
    if ( !this )
      goto LABEL_178;
    this = (SvtEqCombineListViewItem_o *)UserServantEntity__getEventUpVal_50186380(
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
      v12 = v4->fields.bonusKindId;
      v13 = sort->fields.bonusKind2Id;
LABEL_30:
      if ( v12 == v13 )
        goto LABEL_63;
      goto LABEL_45;
    }
    v13 = sort->fields.bonusKind2Id;
LABEL_45:
    v4->fields.bonusKindId = v13;
    v17 = DataManager_TypeInfo;
    v4->fields.bonusKind = 3;
    if ( !*(&v17->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(v17, sort, v5);
    this = (SvtEqCombineListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventCampaignMaster___);
    userSvtEntity = v4->fields.userSvtEntity;
    if ( !userSvtEntity )
      goto LABEL_178;
    v20 = (EventCampaignMaster_o *)this;
    v21 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
    v22 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, sort, v18);
    *(_QWORD *)&v68.fields.currentCryptoKey = v21;
    *(_QWORD *)&v68.fields.fakeValue = v22;
    this = (SvtEqCombineListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v68, 0);
    if ( !v20 )
      goto LABEL_178;
    this = (SvtEqCombineListViewItem_o *)EventCampaignMaster__IsEnableServant(
                                           v20,
                                           (int32_t)this,
                                           v4->fields.bonusKindId,
                                           0);
LABEL_52:
    v4->fields.isEventUpVal = (unsigned __int8)this & 1;
    if ( ((unsigned __int8)this & 1) == 0 )
      goto LABEL_111;
    goto LABEL_64;
  }
  if ( bonusKind )
    goto LABEL_64;
  if ( v4->fields.bonusKind )
  {
    v9 = sort->fields.bonusKind2Id;
  }
  else
  {
    v9 = sort->fields.bonusKind2Id;
    if ( v4->fields.bonusKindId == v9 )
      goto LABEL_63;
  }
  v4->fields.bonusKind = 0;
  v4->fields.bonusKindId = v9;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, sort, v5);
  this = (SvtEqCombineListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventGroupMaster___);
  if ( !this )
    goto LABEL_178;
  EntitiesByGroupId = EventGroupMaster__GetEntitiesByGroupId((EventGroupMaster_o *)this, v4->fields.bonusKindId, 0);
  this = (SvtEqCombineListViewItem_o *)BasicHelper__IsNullOrEmpty(
                                         (System_Collections_ICollection_o *)EntitiesByGroupId,
                                         0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( !EntitiesByGroupId )
      goto LABEL_178;
    if ( EntitiesByGroupId->fields._size >= 2 )
    {
      v15 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_EventGroupEntity__bool__TypeInfo);
      v16 = &Method_SvtEqCombineListViewItem__SetSortValue_b__53_1__;
      goto LABEL_62;
    }
  }
LABEL_63:
  if ( !v4->fields.isEventUpVal )
    goto LABEL_111;
LABEL_64:
  finishSetupInfo = v4->fields.finishSetupInfo;
  if ( finishSetupInfo )
  {
    servantEquipFilterEventIds = finishSetupInfo->fields.servantEquipFilterEventIds;
    if ( !servantEquipFilterEventIds )
      goto LABEL_178;
    if ( servantEquipFilterEventIds->max_length )
    {
      if ( !v4->fields.isBaseSvt )
      {
        this = (SvtEqCombineListViewItem_o *)ListViewItem__get_IsSelect((ListViewItem_o *)v4, 0);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          v26 = v4->fields.finishSetupInfo;
          if ( !v26 )
            goto LABEL_178;
          if ( v26->fields.isQuestStart )
          {
            if ( sort->fields.bonusKind != 6 )
              goto LABEL_84;
            if ( v4->fields.bonusKind != 6 )
            {
              v28 = sort->fields.bonusKindId;
              goto LABEL_81;
            }
            v27 = v4->fields.bonusKindId;
            v28 = sort->fields.bonusKindId;
          }
          else
          {
            if ( sort->fields.bonusKind2 != 6 )
              goto LABEL_84;
            if ( v4->fields.bonusKind != 6 )
            {
              v28 = sort->fields.bonusKind2Id;
              goto LABEL_81;
            }
            v27 = v4->fields.bonusKindId;
            v28 = sort->fields.bonusKind2Id;
          }
          if ( v27 == v28 )
          {
            isEventUpVal = v4->fields.isEventUpVal;
            goto LABEL_83;
          }
LABEL_81:
          this = (SvtEqCombineListViewItem_o *)v4->fields.userSvtEntity;
          v4->fields.bonusKindId = v28;
          v4->fields.bonusKind = 6;
          if ( !this )
            goto LABEL_178;
          EventUpVal_50186380 = UserServantEntity__getEventUpVal_50186380(
                                  (UserServantEntity_o *)this,
                                  -1,
                                  0,
                                  0,
                                  v26,
                                  v28,
                                  1,
                                  0);
          isEventUpVal = EventUpVal_50186380;
          v4->fields.isEventUpVal = EventUpVal_50186380;
LABEL_83:
          if ( isEventUpVal )
            goto LABEL_84;
LABEL_111:
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
    goto LABEL_111;
  }
  this = (SvtEqCombineListViewItem_o *)v4->fields.iconLabelInfo2;
  if ( !this )
    goto LABEL_178;
  IconLabelInfo__Clear((IconLabelInfo_o *)this, 0);
  v4->fields.sortValue0 = 0;
  v4->fields.sortValue0B = 0;
  p_sortValue0 = &v4->fields.sortValue0;
  if ( !sort->fields.isSmartSort )
  {
    v35 = !isChoice;
    if ( !sort->fields.isChoiceSort )
      v35 = 1;
    if ( (v35 & 1) == 0 )
    {
      type = v4->fields.type;
      if ( type == 1 )
      {
        v37 = -10;
      }
      else
      {
        if ( type )
          goto LABEL_129;
        v37 = 10;
      }
      *p_sortValue0 = v37;
    }
    goto LABEL_129;
  }
  if ( !v4->fields.type )
  {
    if ( v4->fields.isEquiped
      || v4->fields.isUseSupportEquip
      || v4->fields.isUseRecommendSupportEquip
      || v4->fields.isUseGrandServantEquip )
    {
      v38 = 20;
    }
    else
    {
      if ( !v4->fields.isLvMax || !v4->fields.isLimitCntMax )
        goto LABEL_107;
      v38 = -10;
    }
    *p_sortValue0 = v38;
LABEL_107:
    v39 = !isChoice;
    if ( !sort->fields.isChoiceSort )
      v39 = 1;
    if ( (v39 & 1) == 0 )
      v4->fields.sortValue0B = 10;
    goto LABEL_129;
  }
  if ( v4->fields.isSameSvt )
  {
    v34 = 20;
LABEL_122:
    isChoiceSort = sort->fields.isChoiceSort;
    *p_sortValue0 = v34;
    v43 = !isChoiceSort;
    v44 = !isChoice;
    if ( v43 )
      v44 = 1;
    if ( (v44 & 1) == 0 )
      *(_OWORD *)p_sortValue0 = xmmword_E9D2A0;
    goto LABEL_129;
  }
  if ( v4->fields.isSwapLock )
    isLock = !v4->fields.isLock;
  else
    isLock = v4->fields.isLock;
  v34 = -10;
  if ( isLock )
    goto LABEL_122;
  v41 = v4->fields.isNotSelection || isChoice;
  if ( !v4->fields.isNotSelection )
    v34 = -20;
  if ( v41 == 1 )
    goto LABEL_122;
LABEL_129:
  sortKind = sort->fields.sortKind;
  this = (SvtEqCombineListViewItem_o *)(&dword_0 + 1);
  if ( sortKind <= 5 )
  {
    if ( sortKind <= 2 )
    {
      if ( sortKind != 1 )
      {
        if ( sortKind == 2 )
        {
          rarity = v4->fields.rarity;
          this = (SvtEqCombineListViewItem_o *)v4->fields.userSvtEntity;
LABEL_153:
          v4->fields.sortValue1 = rarity;
          if ( !this )
            goto LABEL_178;
          iconLabelInfo1 = v4->fields.iconLabelInfo1;
LABEL_167:
          viewObject = (int32_t)this[1].fields.viewObject;
          this = (SvtEqCombineListViewItem_o *)UserServantEntity__getLevelMax((UserServantEntity_o *)this, 0);
          if ( iconLabelInfo1 )
          {
            IconLabelInfo__Set_47880948(iconLabelInfo1, 2, viewObject, (int32_t)this, 0, 0, 0, 0, 0, 0);
LABEL_169:
            LOBYTE(this) = 1;
            return (char)this;
          }
          goto LABEL_178;
        }
        return (char)this;
      }
      v58 = v4->fields.userSvtEntity;
      if ( !v58 )
        goto LABEL_178;
      v59 = *(_OWORD *)&v58->fields.id.fields.fakeValue;
      *(_OWORD *)&v67.fields.currentCryptoKey = *(_OWORD *)&v58->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v67.fields.fakeValue = v59;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, sort, v32);
      v66 = v67;
      this = (SvtEqCombineListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v66, 0);
      v60 = v4->fields.userSvtEntity;
      v4->fields.sortValue1 = (int64_t)this;
      if ( !v60 )
        goto LABEL_178;
      this = (SvtEqCombineListViewItem_o *)v4->fields.iconLabelInfo1;
      if ( !this )
        goto LABEL_178;
      IconLabelInfo__SetTime((IconLabelInfo_o *)this, 49, v60->fields.createdAt, 0, 0, 0, 0);
LABEL_165:
      this = (SvtEqCombineListViewItem_o *)v4->fields.userSvtEntity;
      if ( !this )
        goto LABEL_178;
      iconLabelInfo1 = v4->fields.iconLabelInfo2;
      goto LABEL_167;
    }
    if ( sortKind == 3 )
    {
      this = (SvtEqCombineListViewItem_o *)v4->fields.userSvtEntity;
      if ( this )
      {
        viewObject_low = SLODWORD(this[1].fields.viewObject);
        v64 = v4->fields.iconLabelInfo1;
        v4->fields.sortValue1 = viewObject_low;
        this = (SvtEqCombineListViewItem_o *)UserServantEntity__getLevelMax((UserServantEntity_o *)this, 0);
        if ( v64 )
        {
          IconLabelInfo__Set_47880948(v64, 2, viewObject_low, (int32_t)this, 0, 0, 0, 0, 0, 0);
          goto LABEL_169;
        }
      }
LABEL_178:
      sub_2213CDC(this, sort);
    }
    if ( sortKind != 5 )
      return (char)this;
    this = (SvtEqCombineListViewItem_o *)v4->fields.userSvtEntity;
    if ( !this )
      goto LABEL_178;
    v49 = *(&this[1].fields.type + 1);
    v50 = v4->fields.iconLabelInfo1;
    v4->fields.sortValue1 = v49;
    this = (SvtEqCombineListViewItem_o *)UserServantEntity__get_HpBoostValue((UserServantEntity_o *)this, 0);
    if ( !v50 )
      goto LABEL_178;
    v51 = (int)this;
    v52 = v50;
    v53 = 3;
LABEL_164:
    IconLabelInfo__Set_47880948(v52, v53, v49, v51, 0, 0, 0, 0, 0, 0);
    goto LABEL_165;
  }
  if ( sortKind <= 7 )
  {
    if ( sortKind != 6 )
    {
      servantEntity = v4->fields.servantEntity;
      if ( !servantEntity )
        goto LABEL_178;
      cost = servantEntity->fields.cost;
      this = (SvtEqCombineListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = cost;
      if ( !this )
        goto LABEL_178;
      IconLabelInfo__Set_47880948((IconLabelInfo_o *)this, 7, cost, 0, 0, 0, 0, 0, 0, 0);
      goto LABEL_165;
    }
    this = (SvtEqCombineListViewItem_o *)v4->fields.userSvtEntity;
    if ( !this )
      goto LABEL_178;
    v49 = this[1].fields.type;
    v61 = v4->fields.iconLabelInfo1;
    v4->fields.sortValue1 = v49;
    this = (SvtEqCombineListViewItem_o *)UserServantEntity__get_AtkBoostValue((UserServantEntity_o *)this, 0);
    if ( !v61 )
      goto LABEL_178;
    v51 = (int)this;
    v52 = v61;
    v53 = 5;
    goto LABEL_164;
  }
  if ( sortKind == 8 )
  {
    v4->fields.sortValue1 = v4->fields.classId;
  }
  else if ( sortKind == 14 )
  {
    this = (SvtEqCombineListViewItem_o *)v4->fields.amountSortValue;
    if ( ((unsigned __int64)this & 0x8000000000000000LL) != 0 )
    {
      this = (SvtEqCombineListViewItem_o *)sort->fields.manager;
      if ( !this )
        goto LABEL_178;
      naturalAligment = SvtEqCombineListViewManager_TypeInfo->_2.naturalAligment;
      if ( this->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (SvtEqCombineListViewManager_c *)this->klass->_2.typeHierarchy[naturalAligment - 1] != SvtEqCombineListViewManager_TypeInfo )
      {
        goto LABEL_178;
      }
      this = (SvtEqCombineListViewItem_o *)SvtEqCombineListViewManager__GetAmountSortValue(
                                             (SvtEqCombineListViewManager_o *)this,
                                             v4->fields.svtId,
                                             v32);
      v4->fields.amountSortValue = (int64_t)this;
    }
    v55 = v4->fields.servantEntity;
    if ( !v55 )
      goto LABEL_178;
    v56 = ((unsigned __int64)(unsigned int)v4->fields.rarity << 32) + ((_QWORD)this << 48);
    this = (SvtEqCombineListViewItem_o *)v4->fields.userSvtEntity;
    rarity = v56 | v55->fields.collectionNo;
    goto LABEL_153;
  }
  return (char)this;
}


bool SvtEqCombineListViewItem__SwapChoice(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  _BOOL4 isSwapChoice; // w9
  bool v4; // zf
  bool v5; // w9
  bool result; // w0

  isSwapChoice = this->fields.isSwapChoice;
  v4 = !isSwapChoice;
  v5 = !isSwapChoice;
  result = v4;
  this->fields.isSwapChoice = v5;
  return result;
}


bool SvtEqCombineListViewItem__SwapLock(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  _BOOL4 isSwapLock; // w9
  bool v4; // zf
  bool v5; // w9
  bool result; // w0

  isSwapLock = this->fields.isSwapLock;
  v4 = !isSwapLock;
  v5 = !isSwapLock;
  result = v4;
  this->fields.isSwapLock = v5;
  return result;
}


bool SvtEqCombineListViewItem___SetSortValue_b__53_0(
        SvtEqCombineListViewItem_o *this,
        EventGroupEntity_o *entity,
        const MethodInfo *method)
{
  EventCampaignMaster_o *Master_object; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  struct UserServantEntity_o *userSvtEntity; // x8
  EventCampaignMaster_o *v9; // x21
  __int64 v10; // x22
  __int64 v11; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_596A3BD & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_596A3BD = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, entity, method);
  Master_object = (EventCampaignMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventCampaignMaster___);
  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_16;
  v9 = Master_object;
  v10 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6, v7);
  *(_QWORD *)&v13.fields.currentCryptoKey = v10;
  *(_QWORD *)&v13.fields.fakeValue = v11;
  Master_object = (EventCampaignMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v13, 0);
  if ( !entity || !v9 )
    goto LABEL_16;
  if ( EventCampaignMaster__IsEnableServant(v9, (int32_t)Master_object, entity->fields.eventId, 0) )
    return 1;
  Master_object = (EventCampaignMaster_o *)this->fields.userSvtEntity;
  if ( !Master_object )
    goto LABEL_16;
  if ( UserServantEntity__getEventUpVal_50186380(
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
    sub_2213CDC(Master_object, v6);
  return UserServantEntity__getEventUpVal_50186380(
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
  __int64 v7; // x2
  struct UserServantEntity_o *userSvtEntity; // x8
  EventCampaignMaster_o *v9; // x21
  __int64 v10; // x22
  __int64 v11; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_596A3BE & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_596A3BE = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, entity, method);
  Master_object = (EventCampaignMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventCampaignMaster___);
  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_16;
  v9 = Master_object;
  v10 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6, v7);
  *(_QWORD *)&v13.fields.currentCryptoKey = v10;
  *(_QWORD *)&v13.fields.fakeValue = v11;
  Master_object = (EventCampaignMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v13, 0);
  if ( !entity || !v9 )
    goto LABEL_16;
  if ( EventCampaignMaster__IsEnableServant(v9, (int32_t)Master_object, entity->fields.eventId, 0) )
    return 1;
  Master_object = (EventCampaignMaster_o *)this->fields.userSvtEntity;
  if ( !Master_object )
    goto LABEL_16;
  if ( UserServantEntity__getEventUpVal_50186380(
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
    sub_2213CDC(Master_object, v6);
  return UserServantEntity__getEventUpVal_50186380(
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
    sub_2213CDC(0, method);
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
    sub_2213CDC(this, method);
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


bool SvtEqCombineListViewItem__get_IsLimitTarget(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isLimitCntTarget;
}


bool SvtEqCombineListViewItem__get_IsLock(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isLock;
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
  __int64 v2; // x2
  SvtEqCombineListViewItem_o *v3; // x19
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v5; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v8; // [xsp+20h] [xbp-40h]

  v3 = this;
  if ( (byte_596A3BC & 1) == 0 )
  {
    this = (SvtEqCombineListViewItem_o *)sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_596A3BC = 1;
  }
  userSvtEntity = v3->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_2213CDC(this, method);
  v5 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v8.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v8.fields.fakeValue = v5;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method, v2);
  v7 = v8;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v7, 0);
}


void SvtEqCombineListViewItem__setUserServantEntity(
        SvtEqCombineListViewItem_o *this,
        UserServantEntity_o *entity,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.userSvtEntity = entity;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.userSvtEntity,
    (int32_t)entity,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_2213CDC(0, value);
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