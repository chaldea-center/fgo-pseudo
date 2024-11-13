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
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x1
  __int64 v55; // x2
  IconLabelInfo_o *v56; // x21
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  __int64 v63; // x1
  __int64 v64; // x2
  __int64 v65; // x3
  IconLabelInfo_o *v66; // x22
  struct IconLabelInfo_o **p_iconLabelInfo2; // x21
  int64_t v68; // x2
  int32_t v69; // w3
  System_String_o *v70; // x4
  BattleSetupInfo_o *v71; // x5
  FollowerInfo_o *v72; // x6
  PartyListViewItem_o *v73; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_userSvtEntity; // x22
  int64_t v75; // x2
  int32_t v76; // w3
  System_String_o *v77; // x4
  BattleSetupInfo_o *v78; // x5
  FollowerInfo_o *v79; // x6
  PartyListViewItem_o *v80; // x7
  int64_t Instance; // x0
  int64_t v82; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v83; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v84; // x20
  __int64 v85; // x27
  __int64 v86; // x28
  Il2CppObject *Entity; // x0
  struct ServantEntity_o **p_servantEntity; // x27
  int64_t v89; // x2
  int32_t v90; // w3
  System_String_o *v91; // x4
  BattleSetupInfo_o *v92; // x5
  FollowerInfo_o *v93; // x6
  PartyListViewItem_o *v94; // x7
  struct UserServantEntity_o *v95; // x8
  int64_t v96; // x2
  int32_t v97; // w3
  System_String_o *v98; // x4
  BattleSetupInfo_o *v99; // x5
  FollowerInfo_o *v100; // x6
  PartyListViewItem_o *v101; // x7
  struct ServantEntity_o *servantEntity; // x8
  int64_t v103; // x2
  int32_t v104; // w3
  System_String_o *v105; // x4
  BattleSetupInfo_o *v106; // x5
  FollowerInfo_o *v107; // x6
  PartyListViewItem_o *v108; // x7
  ServantLimitMaster_o *v109; // x20
  int32_t v110; // w28
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v111; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v112; // q1
  UserServantCollectionMaster_o *v113; // x20
  int64_t v114; // x28
  struct UserServantEntity_o *v115; // x8
  int32_t v116; // w0
  UserServantEntity_o *v117; // x8
  bool IsChocolateSvtEquip; // w0
  int32_t v119; // w8
  UserServantEntity_o *v120; // x8
  UserServantEntity_o *v121; // x8
  UserServantEntity_o *v122; // x8
  struct UserServantEntity_o *v123; // x8
  __int128 v124; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v125; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v126; // q0
  int64_t v127; // x0
  __int128 v128; // q1
  __int64 v129; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x29
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v132; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v135; // x8
  __int64 v136; // x9
  int32_t *v137; // x10
  __int64 v138; // x0
  _QWORD *v139; // x0
  __int64 v140; // x1
  __int64 methodPtr_low; // x9
  __int64 v142; // x8
  __int128 v143; // q0
  int64_t v144; // x0
  __int64 v145; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v146; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v147; // q0
  System_Collections_Generic_IEnumerator_T__c *v148; // x8
  __int64 v149; // x9
  int32_t *v150; // x10
  __int64 v151; // x0
  __int64 v152; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v153; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v154; // q0
  UserRecommendSupportMaster_o *v155; // x20
  int32_t v156; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v157; // x8
  UserServantEntity_o *v158; // x23
  __int64 v159; // x20
  __int64 v160; // x24
  int32_t v161; // w20
  struct UserServantEntity_o *v162; // x8
  __int128 v163; // q0
  int64_t v164; // x0
  __int128 v165; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v166; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v167; // q0
  __int64 v168; // x1
  System_Collections_Generic_IEnumerator_T__o *v169; // x23
  System_Collections_Generic_IEnumerator_T__c *v170; // x8
  __int64 v171; // x9
  int32_t *v172; // x10
  __int64 v173; // x0
  System_Collections_Generic_IEnumerator_T__c *v174; // x8
  __int64 v175; // x9
  int32_t *v176; // x10
  __int64 v177; // x0
  _QWORD *v178; // x0
  __int64 v179; // x1
  __int64 v180; // x9
  __int64 v181; // x8
  __int128 v182; // q0
  int64_t v183; // x0
  __int64 v184; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v185; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v186; // q0
  System_Collections_Generic_IEnumerator_T__c *v187; // x8
  __int64 v188; // x9
  int32_t *v189; // x10
  __int64 v190; // x0
  __int64 v191; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v192; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v193; // q0
  UserRecommendSupportMaster_o *v194; // x20
  UserServantEntity_o *v195; // x8
  UserServantEntity_o *v196; // x8
  bool IsChoice; // w0
  bool isFriendShipSvtEq; // w8
  struct ServantEntity_o *v199; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v200; // x8
  __int64 v201; // x20
  __int64 v202; // x22
  int32_t v203; // w8
  struct System_Int32_array *EquipCategoryIdList; // x0
  int64_t v205; // x2
  int32_t v206; // w3
  System_String_o *v207; // x4
  BattleSetupInfo_o *v208; // x5
  FollowerInfo_o *v209; // x6
  PartyListViewItem_o *v210; // x7
  bool v211; // [xsp+18h] [xbp-238h]
  UserDeckMaster_o *MasterData_object; // [xsp+20h] [xbp-230h]
  int32_t v213; // [xsp+2Ch] [xbp-224h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v214; // [xsp+30h] [xbp-220h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v215; // [xsp+50h] [xbp-200h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v216; // [xsp+70h] [xbp-1E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v217; // [xsp+90h] [xbp-1C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v218; // [xsp+B0h] [xbp-1A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v219; // [xsp+D0h] [xbp-180h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v220; // [xsp+F0h] [xbp-160h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v221; // [xsp+110h] [xbp-140h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v222; // [xsp+130h] [xbp-120h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v223; // [xsp+150h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v224; // [xsp+170h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v225; // [xsp+190h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v226; // [xsp+1B0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v227; // [xsp+1D0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v228; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v229; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v230; // 0:x0.16

  if ( (byte_4B19EBB & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      *(_QWORD *)&type,
      *(_QWORD *)&index);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_CombineMaterialMaster___, v18, v19);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantClassMaster___, v20, v21);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitMaster___, v22, v23);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v24, v25);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserDeckMaster___, v26, v27);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v28, v29);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantLeaderMaster___, v30, v31);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserRecommendSupportMaster___, v32, v33);
    sub_1BCA7E0(&DataManager_TypeInfo, v34, v35);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v36, v37);
    sub_1BCA7E0(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v38, v39);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v40, v41);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v42, v43);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v44, v45);
    sub_1BCA7E0(&IconLabelInfo_TypeInfo, v46, v47);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v48, v49);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v50, v51);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v52, v53);
    sub_1BCA7E0(&UserServantLeaderEntity_TypeInfo, v54, v55);
    byte_4B19EBB = 1;
  }
  v56 = (IconLabelInfo_o *)sub_1BCAA2C(IconLabelInfo_TypeInfo, *(_QWORD *)&type, *(_QWORD *)&index, userSvtEntity);
  IconLabelInfo___ctor(v56, 0LL);
  this->fields.iconLabelInfo1 = v56;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.iconLabelInfo1, (int64_t)v56, v57, v58, v59, v60, v61, v62);
  v66 = (IconLabelInfo_o *)sub_1BCAA2C(IconLabelInfo_TypeInfo, v63, v64, v65);
  IconLabelInfo___ctor(v66, 0LL);
  this->fields.iconLabelInfo2 = v66;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.iconLabelInfo2, (int64_t)v66, v68, v69, v70, v71, v72, v73);
  ListViewItem___ctor((ListViewItem_o *)this, 0LL);
  this->fields.userSvtEntity = userSvtEntity;
  p_userSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userSvtEntity;
  this->fields.type = type;
  this->fields.index = index;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.userSvtEntity,
    (int64_t)userSvtEntity,
    v75,
    v76,
    v77,
    v78,
    v79,
    v80);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_160;
  v213 = type;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  v83 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_160;
  v84 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v86 = *(_QWORD *)&v83[5].fields.currentCryptoKey;
  v85 = *(_QWORD *)&v83[5].fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v82);
  *(_QWORD *)&v228.fields.currentCryptoKey = v86;
  *(_QWORD *)&v228.fields.fakeValue = v85;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v228, 0LL);
  if ( !v84 )
    goto LABEL_160;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v84,
             Instance,
             (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)Entity;
  p_servantEntity = &this->fields.servantEntity;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.servantEntity, (int64_t)Entity, v89, v90, v91, v92, v93, v94);
  v95 = this->fields.userSvtEntity;
  if ( !v95 )
    goto LABEL_160;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v95->fields.svtId, 0LL);
  servantEntity = this->fields.servantEntity;
  this->fields.svtId = Instance;
  if ( !servantEntity )
    goto LABEL_160;
  this->fields.classId = servantEntity->fields.classId;
  this->fields.setupInfo = setupInfo;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.setupInfo, (int64_t)setupInfo, v96, v97, v98, v99, v100, v101);
  this->fields.finishSetupInfo = finishSetupInfo;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.finishSetupInfo,
    (int64_t)finishSetupInfo,
    v103,
    v104,
    v105,
    v106,
    v107,
    v108);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_160;
  MasterData_object = (UserDeckMaster_o *)DataManager__GetMasterData_object_(
                                            (DataManager_o *)Instance,
                                            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserDeckMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_160;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtEntity )
    goto LABEL_160;
  v109 = (ServantLimitMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428((*p_userSvtEntity)[5], 0LL);
  if ( !*p_userSvtEntity )
    goto LABEL_160;
  v110 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428((*p_userSvtEntity)[6], 0LL);
  if ( !v109 )
    goto LABEL_160;
  Instance = (int64_t)ServantLimitMaster__GetEntity(v109, v110, Instance, 0LL);
  if ( !Instance )
    goto LABEL_160;
  this->fields.rarity = *(_DWORD *)(Instance + 24);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_160;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v111 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_160;
  v112 = v111[4];
  v113 = (UserServantCollectionMaster_o *)Instance;
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v227.fields.currentCryptoKey = v111[3];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v227.fields.fakeValue = v112;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v82);
  v226 = v227;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v226, 0LL);
  if ( !*p_userSvtEntity )
    goto LABEL_160;
  v114 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428((*p_userSvtEntity)[5], 0LL);
  if ( !v113 )
    goto LABEL_160;
  Instance = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(v113, v114, Instance, 0LL);
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
  v211 = isFavorite;
  Instance = UserServantEntity__getLimitCntMax((UserServantEntity_o *)Instance, 0LL);
  v115 = this->fields.userSvtEntity;
  this->fields.maxLimitCnt = Instance;
  if ( !v115 )
    goto LABEL_160;
  v116 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v115->fields.limitCount, 0LL);
  *(_DWORD *)&this->fields.isBaseLvMax = 0;
  this->fields.currentLimitCnt = v116;
  Instance = (int64_t)this->fields.userSvtEntity;
  this->fields.isCanNotLock = 0;
  *(_QWORD *)&this->fields.isUseSupportEquip = 0xFFFFFFFF00000000LL;
  *(_QWORD *)&this->fields.bonusKind = 1LL;
  this->fields.isEventUpVal = 0;
  this->fields.isNotSelection = 0;
  if ( !Instance )
    goto LABEL_160;
  Instance = UserServantEntity__IsFriendShipSvtEquip((UserServantEntity_o *)Instance, 0LL);
  v117 = this->fields.userSvtEntity;
  this->fields.isFriendShipSvtEq = Instance & 1;
  if ( !v117 )
    goto LABEL_160;
  IsChocolateSvtEquip = UserServantEntity__IsChocolateSvtEquip(v117, 0LL);
  v119 = this->fields.type;
  this->fields.isChocolateSvtEquip = IsChocolateSvtEquip;
  if ( !v119 )
  {
    Instance = (int64_t)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_160;
    Instance = UserServantEntity__isLevelMax((UserServantEntity_o *)Instance, 0LL);
    v120 = this->fields.userSvtEntity;
    this->fields.isLvMax = Instance & 1;
    if ( !v120 )
      goto LABEL_160;
    Instance = UserServantEntity__isLimitCountMax(v120, 0LL);
    v121 = this->fields.userSvtEntity;
    this->fields.isLimitCntMax = Instance & 1;
    if ( !v121 )
      goto LABEL_160;
    Instance = UserServantEntity__IsLock(v121, 0LL);
    v122 = this->fields.userSvtEntity;
    this->fields.isLock = Instance & 1;
    if ( !v122 )
      goto LABEL_160;
    Instance = UserServantEntity__IsChoice(v122, 0LL);
    v123 = this->fields.userSvtEntity;
    this->fields.isChoice = Instance & 1;
    if ( !v123 )
      goto LABEL_160;
    v124 = *(_OWORD *)&v123->fields.id.fields.fakeValue;
    *(_OWORD *)&v227.fields.currentCryptoKey = *(_OWORD *)&v123->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v227.fields.fakeValue = v124;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v82);
    v225 = v227;
    v82 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v225, 0LL);
    Instance = (int64_t)MasterData_object;
    if ( !MasterData_object )
      goto LABEL_160;
    Instance = UserDeckMaster__IsEquip(MasterData_object, v82, 0LL);
    this->fields.isEquiped = Instance & 1;
    if ( baseUsrSvtData )
    {
      v125 = *p_userSvtEntity;
      if ( !*p_userSvtEntity )
        goto LABEL_160;
      v126 = v125[2];
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v227.fields.currentCryptoKey = v125[1];
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v227.fields.fakeValue = v126;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v82);
      v224 = v227;
      v127 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v224, 0LL);
      v128 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
      *(_OWORD *)&v223.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v223.fields.fakeValue = v128;
      if ( v127 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v223, 0LL) )
        this->fields.isBaseSvt = 1;
    }
    Instance = (int64_t)*p_servantEntity;
    if ( !*p_servantEntity )
      goto LABEL_160;
    if ( ServantEntity__get_IsServantEquipMaterial((ServantEntity_o *)Instance, 0LL) )
      this->fields.isSvtEqMaterial = 1;
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_160;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantLeaderMaster___);
    if ( !Instance )
      goto LABEL_160;
    Instance = *(_QWORD *)(Instance + 32);
    if ( !Instance )
      goto LABEL_160;
    Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                   (System_Collections_ObjectModel_Collection_T__o *)Instance,
                   (const MethodInfo_314F9E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    if ( !Enumerator )
      sub_1BCAA3C(0LL, v129);
    while ( 1 )
    {
      klass = Enumerator->klass;
      v132 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v132;
          p_offset += 4;
          if ( !v132 )
            goto LABEL_53;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_53:
        p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
              Enumerator,
              *(_QWORD *)(p_method + 8)) & 1) == 0 )
        break;
      v135 = Enumerator->klass;
      v136 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
      {
        v137 = &v135->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v137 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
        {
          --v136;
          v137 += 4;
          if ( !v136 )
            goto LABEL_60;
        }
        v138 = (__int64)&v135->vtable[*v137].method;
      }
      else
      {
LABEL_60:
        v138 = sub_1C1C7C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
      }
      v139 = (_QWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v138)(
                         Enumerator,
                         *(_QWORD *)(v138 + 8));
      if ( !v139 )
        sub_1BCAA3C(0LL, v140);
      methodPtr_low = LOBYTE(UserServantLeaderEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*v139 + 304LL) < (unsigned int)methodPtr_low
        || *(UserServantLeaderEntity_c **)(*(_QWORD *)(*v139 + 200LL) + 8 * methodPtr_low - 8) != UserServantLeaderEntity_TypeInfo )
      {
        goto LABEL_162;
      }
      v142 = v139[4];
      if ( v142 )
      {
        v143 = *(_OWORD *)(v142 + 40);
        *(_OWORD *)&v227.fields.currentCryptoKey = *(_OWORD *)(v142 + 24);
        *(_OWORD *)&v227.fields.fakeValue = v143;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(
            CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
            UserServantLeaderEntity_TypeInfo);
        v222 = v227;
        v144 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v222, 0LL);
        v146 = *p_userSvtEntity;
        if ( !*p_userSvtEntity )
          sub_1BCAA3C(v144, v145);
        v147 = v146[2];
        *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v221.fields.currentCryptoKey = v146[1];
        *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v221.fields.fakeValue = v147;
        if ( v144 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v221, 0LL) )
        {
          this->fields.isUseSupportEquip = 1;
          break;
        }
      }
    }
    v148 = Enumerator->klass;
    v149 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v150 = &v148->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v150 - 1) != System_IDisposable_TypeInfo )
      {
        --v149;
        v150 += 4;
        if ( !v149 )
          goto LABEL_75;
      }
      v151 = (__int64)&v148->vtable[*v150].method;
    }
    else
    {
LABEL_75:
      v151 = sub_1C1C7C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v151)(
      Enumerator,
      *(_QWORD *)(v151 + 8));
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v152);
    Instance = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserRecommendSupportMaster___);
    v153 = *p_userSvtEntity;
    p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
    if ( !*p_userSvtEntity )
      goto LABEL_160;
    v154 = v153[2];
    v155 = (UserRecommendSupportMaster_o *)Instance;
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v227.fields.currentCryptoKey = v153[1];
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v227.fields.fakeValue = v154;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v82);
    v220 = v227;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v220, 0LL);
    if ( !v155 )
      goto LABEL_160;
    this->fields.isUseRecommendSupportEquip = UserRecommendSupportMaster__IsSettingServant(v155, Instance, 1, 0LL);
  }
  if ( v213 != 1 )
    goto LABEL_149;
  this->fields.isMaterialSvt = isMtSvt;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_160;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_CombineMaterialMaster___);
  if ( !*p_servantEntity || !*p_userSvtEntity || !Instance )
    goto LABEL_160;
  Instance = (int64_t)CombineMaterialMaster__GetEntity(
                        (CombineMaterialMaster_o *)Instance,
                        (*p_servantEntity)->fields.combineMaterialId,
                        (*p_userSvtEntity)[16].fields.currentCryptoKey,
                        0LL);
  v156 = Instance ? *(_DWORD *)(Instance + 24) : 0;
  this->fields.materialExp = v156;
  if ( baseUsrSvtData )
  {
    v157 = *p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_160;
    v158 = baseUsrSvtData;
    v160 = *(_QWORD *)&v157[5].fields.currentCryptoKey;
    v159 = *(_QWORD *)&v157[5].fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v82);
    *(_QWORD *)&v229.fields.currentCryptoKey = v160;
    *(_QWORD *)&v229.fields.fakeValue = v159;
    v161 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v229, 0LL);
    if ( v161 == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v158->fields.svtId, 0LL) )
    {
      Instance = UserServantEntity__isLimitCountMax(v158, 0LL);
      v162 = this->fields.userSvtEntity;
      this->fields.isLimitCntMax = Instance & 1;
      this->fields.isLimitCntTarget = (Instance & 1) == 0;
      if ( !v162 )
        goto LABEL_160;
      v163 = *(_OWORD *)&v162->fields.id.fields.fakeValue;
      *(_OWORD *)&v227.fields.currentCryptoKey = *(_OWORD *)&v162->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v227.fields.fakeValue = v163;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v82);
      v219 = v227;
      v164 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v219, 0LL);
      v165 = *(_OWORD *)&v158->fields.id.fields.fakeValue;
      *(_OWORD *)&v218.fields.currentCryptoKey = *(_OWORD *)&v158->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v218.fields.fakeValue = v165;
      if ( v164 != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v218, 0LL) )
        this->fields.isSameSvt = 1;
    }
    Instance = UserServantEntity__isLevelMax(v158, 0LL);
    this->fields.isBaseLvMax = Instance & 1;
  }
  else
  {
    this->fields.isLimitCntTarget = 0;
  }
  v166 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_160;
  v167 = v166[2];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v227.fields.currentCryptoKey = v166[1];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v227.fields.fakeValue = v167;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v82);
  v217 = v227;
  v82 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v217, 0LL);
  Instance = (int64_t)MasterData_object;
  if ( !MasterData_object )
    goto LABEL_160;
  this->fields.isEquiped = UserDeckMaster__IsEquip_40786220(MasterData_object, v82, &this->fields.partyIndex, 0LL);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_160;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantLeaderMaster___);
  if ( !Instance )
    goto LABEL_160;
  Instance = *(_QWORD *)(Instance + 32);
  if ( !Instance )
    goto LABEL_160;
  v169 = System_Collections_ObjectModel_Collection_object___GetEnumerator(
           (System_Collections_ObjectModel_Collection_T__o *)Instance,
           (const MethodInfo_314F9E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !v169 )
    sub_1BCAA3C(0LL, v168);
  while ( 1 )
  {
    v170 = v169->klass;
    v171 = *(unsigned __int16 *)(&v169->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v169->klass->_2.bitflags2 + 3) )
    {
      v172 = &v170->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)v172 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v171;
        v172 += 4;
        if ( !v171 )
          goto LABEL_116;
      }
      v173 = (__int64)&v170->vtable[*v172].method;
    }
    else
    {
LABEL_116:
      v173 = sub_1C1C7C0(v169, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v173)(
            v169,
            *(_QWORD *)(v173 + 8)) & 1) == 0 )
      goto LABEL_134;
    v174 = v169->klass;
    v175 = *(unsigned __int16 *)(&v169->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v169->klass->_2.bitflags2 + 3) )
    {
      v176 = &v174->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v176 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v175;
        v176 += 4;
        if ( !v175 )
          goto LABEL_123;
      }
      v177 = (__int64)&v174->vtable[*v176].method;
    }
    else
    {
LABEL_123:
      v177 = sub_1C1C7C0(v169, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v178 = (_QWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v177)(
                       v169,
                       *(_QWORD *)(v177 + 8));
    if ( !v178 )
      goto LABEL_163;
    v180 = LOBYTE(UserServantLeaderEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*v178 + 304LL) < (unsigned int)v180
      || *(UserServantLeaderEntity_c **)(*(_QWORD *)(*v178 + 200LL) + 8 * v180 - 8) != UserServantLeaderEntity_TypeInfo )
    {
      sub_1BCACFC(v178);
LABEL_162:
      sub_1BCACFC(v139);
LABEL_163:
      sub_1BCAA3C(v178, v179);
    }
    v181 = v178[4];
    if ( v181 )
    {
      v182 = *(_OWORD *)(v181 + 40);
      *(_OWORD *)&v227.fields.currentCryptoKey = *(_OWORD *)(v181 + 24);
      *(_OWORD *)&v227.fields.fakeValue = v182;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(
          CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
          UserServantLeaderEntity_TypeInfo);
      v216 = v227;
      v183 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v216, 0LL);
      v185 = *p_userSvtEntity;
      if ( !*p_userSvtEntity )
        sub_1BCAA3C(v183, v184);
      v186 = v185[2];
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v215.fields.currentCryptoKey = v185[1];
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v215.fields.fakeValue = v186;
      if ( v183 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v215, 0LL) )
        break;
    }
  }
  this->fields.isUseSupportEquip = 1;
LABEL_134:
  v187 = v169->klass;
  v188 = *(unsigned __int16 *)(&v169->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v169->klass->_2.bitflags2 + 3) )
  {
    v189 = &v187->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v189 - 1) != System_IDisposable_TypeInfo )
    {
      --v188;
      v189 += 4;
      if ( !v188 )
        goto LABEL_138;
    }
    v190 = (__int64)&v187->vtable[*v189].method;
  }
  else
  {
LABEL_138:
    v190 = sub_1C1C7C0(v169, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v190)(v169, *(_QWORD *)(v190 + 8));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v191);
  Instance = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserRecommendSupportMaster___);
  v192 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_160;
  v193 = v192[2];
  v194 = (UserRecommendSupportMaster_o *)Instance;
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v227.fields.currentCryptoKey = v192[1];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v227.fields.fakeValue = v193;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v82);
  v214 = v227;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v214, 0LL);
  if ( !v194 )
    goto LABEL_160;
  Instance = UserRecommendSupportMaster__IsSettingServant(v194, Instance, 1, 0LL);
  v195 = this->fields.userSvtEntity;
  this->fields.isUseRecommendSupportEquip = Instance & 1;
  if ( !v195 )
    goto LABEL_160;
  Instance = UserServantEntity__IsLock(v195, 0LL);
  v196 = this->fields.userSvtEntity;
  this->fields.isLock = Instance & 1;
  if ( !v196 )
    goto LABEL_160;
  IsChoice = UserServantEntity__IsChoice(v196, 0LL);
  isFriendShipSvtEq = this->fields.isFriendShipSvtEq;
  this->fields.isChoice = IsChoice;
  this->fields.isFavorite = v211;
  this->fields.isNotSelection = isFriendShipSvtEq;
LABEL_149:
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_160;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Instance )
    goto LABEL_160;
  Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                        this->fields.classId,
                        (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_160;
  v199 = this->fields.servantEntity;
  this->fields.sortValue1B = *(int *)(Instance + 52);
  if ( !v199 )
    goto LABEL_160;
  v200 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_160;
  this->fields.sortValue2 = ((__int64)v199->fields.collectionNo << 16) | ((unsigned __int64)(unsigned int)this->fields.rarity << 48) | v200[16].fields.currentCryptoKey;
  v202 = *(_QWORD *)&v200[5].fields.currentCryptoKey;
  v201 = *(_QWORD *)&v200[5].fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v82);
  *(_QWORD *)&v230.fields.currentCryptoKey = v202;
  *(_QWORD *)&v230.fields.fakeValue = v201;
  v203 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v230, 0LL);
  Instance = (int64_t)this->fields.userSvtEntity;
  this->fields.sortValue2B = v203;
  this->fields.amountSortValue = -1LL;
  if ( !Instance
    || (EquipCategoryIdList = UserServantEntity__GetEquipCategoryIdList((UserServantEntity_o *)Instance, 1, 0LL),
        this->fields.categoryIdList = EquipCategoryIdList,
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&this->fields.categoryIdList,
          (int64_t)EquipCategoryIdList,
          v205,
          v206,
          v207,
          v208,
          v209,
          v210),
        (Instance = (int64_t)this->fields.iconLabelInfo1) == 0)
    || (IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0LL), (Instance = (int64_t)*p_iconLabelInfo2) == 0) )
  {
LABEL_160:
    sub_1BCAA3C(Instance, v82);
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
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  FilterKindList_c *v9; // x0
  System_Int32Enum_array *RarityFilterKindList; // x0
  FilterKindList_c *v11; // x0
  ListViewSort_FilterKind_array *v12; // x0
  FilterKindList_c *v13; // x0
  ListViewSort_FilterKind_array *v14; // x0
  bool IsMatchServantEquipCombineStatusFilter; // w8
  bool result; // w0
  FilterKindList_c *v17; // x0
  ListViewSort_FilterKind_array *v18; // x0
  bool HaveStatusFilter; // w8
  _BOOL4 v20; // w8

  if ( (byte_4B19EBD & 1) == 0 )
  {
    sub_1BCA7E0(&FilterKindList_TypeInfo, sort, method);
    sub_1BCA7E0(&ListViewSort_FilterKind___TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v7, v8);
    byte_4B19EBD = 1;
  }
  v9 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort);
    v9 = FilterKindList_TypeInfo;
  }
  RarityFilterKindList = (System_Int32Enum_array *)v9->static_fields->RarityFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_36;
  RarityFilterKindList = System_Collections_Generic_List_Int32Enum___ToArray(
                           (System_Collections_Generic_List_T__o *)RarityFilterKindList,
                           (const MethodInfo_3588F1C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_36;
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)RarityFilterKindList, 0LL)
    && !ListViewSort__IsMatchRarityFilter(sort, this->fields.rarity, 0LL)
    || !ListViewSort__CheckSvtEquipEffectFilterDefaultAll(sort, 0LL)
    && !ServantEquipEffectFilterController__IsMatchEffectCategory(this->fields.categoryIdList, sort, 0LL) )
  {
    return 0;
  }
  v11 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort);
    v11 = FilterKindList_TypeInfo;
  }
  RarityFilterKindList = (System_Int32Enum_array *)v11->static_fields->ServantEquipTypeFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_36;
  v12 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)RarityFilterKindList,
                                           (const MethodInfo_3588F1C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v12, 0LL)
    && !ListViewSort__IsMatchServantEquipTypeFilter(sort, this->fields.servantEntity, 0LL) )
  {
    return 0;
  }
  v13 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort);
    v13 = FilterKindList_TypeInfo;
  }
  RarityFilterKindList = (System_Int32Enum_array *)v13->static_fields->ServantEquipCombineStatusFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_36;
  v14 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)RarityFilterKindList,
                                           (const MethodInfo_3588F1C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, v14, 0LL)
    || (IsMatchServantEquipCombineStatusFilter = ListViewSort__IsMatchServantEquipCombineStatusFilter(
                                                   sort,
                                                   this->fields.userSvtEntity,
                                                   this->fields.servantEntity,
                                                   0,
                                                   0LL),
        result = 0,
        IsMatchServantEquipCombineStatusFilter) )
  {
    v17 = FilterKindList_TypeInfo;
    if ( !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort);
      v17 = FilterKindList_TypeInfo;
    }
    RarityFilterKindList = (System_Int32Enum_array *)v17->static_fields->ServantEquipHaveStatusFilterKindList;
    if ( !RarityFilterKindList )
      goto LABEL_36;
    v18 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                             (System_Collections_Generic_List_T__o *)RarityFilterKindList,
                                             (const MethodInfo_3588F1C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, v18, 0LL)
      || (HaveStatusFilter = ListViewSort__IsMatchServantEquipHaveStatusFilter(
                               sort,
                               this->fields.userSvtEntity,
                               this->fields.servantEntity,
                               0,
                               0LL),
          result = 0,
          HaveStatusFilter) )
    {
      RarityFilterKindList = (System_Int32Enum_array *)sub_1BCA888(ListViewSort_FilterKind___TypeInfo, 1LL);
      if ( RarityFilterKindList )
      {
        if ( !RarityFilterKindList->max_length )
          sub_1BCAA44(RarityFilterKindList, RarityFilterKindList);
        RarityFilterKindList->m_Items[1] = 39;
        if ( ListViewSort__IsUnSelectedAllTargetFilters(
               sort,
               (ListViewSort_FilterKind_array *)RarityFilterKindList,
               0LL)
          || !ListViewSort__GetFilter(sort, 39, 0LL) )
        {
          return 1;
        }
        v20 = !this->fields.isChoice;
        if ( !this->fields.isSwapChoice )
          return this->fields.isChoice;
        return v20;
      }
LABEL_36:
      sub_1BCAA3C(RarityFilterKindList, sort);
    }
  }
  return result;
}


void __fastcall SvtEqCombineListViewItem__ModifyChoiceItem(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0

  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_1BCAA3C(0LL, method);
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
    sub_1BCAA3C(0LL, method);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  EventUpValSetupInfo_o *setupInfo; // x4
  int32_t bonusKind; // w8
  int32_t bonusKindId; // w8
  int32_t v28; // w8
  int32_t v29; // w9
  int32_t bonusKind2Id; // w5
  int32_t v31; // w9
  int32_t v32; // w8
  System_Collections_Generic_List_EventGroupEntity__o *EntitiesByGroupId; // x21
  __int64 v34; // x2
  __int64 v35; // x3
  System_Func_object__bool__o *v36; // x0
  __int64 *v37; // x8
  struct UserServantEntity_o *userSvtEntity; // x8
  EventCampaignMaster_o *v39; // x21
  __int64 v40; // x22
  __int64 v41; // x23
  __int64 v42; // x2
  __int64 v43; // x3
  System_Func_T__bool__o *v44; // x22
  struct EventUpValSetupInfo_o *finishSetupInfo; // x8
  struct System_Int32_array *servantEquipFilterEventIds; // x8
  EventUpValSetupInfo_o *v47; // x4
  int32_t v48; // w8
  int32_t v49; // w5
  int isEventUpVal; // w8
  bool EventUpVal_40936896; // w0
  _BOOL4 isChoice; // w21
  const MethodInfo *v53; // x2
  int64_t *p_sortValue0; // x8
  __int64 v55; // x9
  int32_t type; // w9
  __int64 v57; // x9
  __int64 v58; // x9
  bool isLock; // w10
  struct UserServantEntity_o *v60; // x8
  __int128 v61; // q1
  struct UserServantEntity_o *v62; // x8
  IconLabelInfo_o *iconLabelInfo1; // x19
  int64_t v64; // x20
  IconLabelInfo_o *v65; // x21
  struct UserServantEntity_o *v66; // x8
  int64_t hp; // x2
  int32_t adjustHp; // w3
  int32_t v69; // w1
  struct UserServantEntity_o *v70; // x8
  struct ServantEntity_o *servantEntity; // x8
  int64_t cost; // x2
  int32_t v73; // w20
  __int64 methodPtr_low; // x10
  struct ServantEntity_o *v75; // x8
  __int64 collectionNo; // x10
  SvtEqCombineListViewItem_o *v77; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v79; // [xsp+10h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v80; // [xsp+30h] [xbp-50h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v81; // 0:x0.16

  v4 = this;
  if ( (byte_4B19EBC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Any_EventGroupEntity___, sort, method);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventCampaignMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventGroupMaster___, v7, v8);
    sub_1BCA7E0(&DataManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&System_Func_EventGroupEntity__bool__TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventGroupEntity__get_Count__, v13, v14);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15, v16);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_SvtEqCombineListViewItem__SetSortValue_b__52_0__, v19, v20);
    sub_1BCA7E0(&Method_SvtEqCombineListViewItem__SetSortValue_b__52_1__, v21, v22);
    this = (SvtEqCombineListViewItem_o *)sub_1BCA7E0(&SvtEqCombineListViewManager_TypeInfo, v23, v24);
    byte_4B19EBC = 1;
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
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, sort);
        this = (SvtEqCombineListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventGroupMaster___);
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
              v36 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                     System_Func_EventGroupEntity__bool__TypeInfo,
                                                     sort,
                                                     v34,
                                                     v35);
              v37 = &Method_SvtEqCombineListViewItem__SetSortValue_b__52_0__;
LABEL_62:
              v44 = (System_Func_T__bool__o *)v36;
              System_Func_object__bool____ctor(v36, (Il2CppObject *)v4, *v37, 0LL);
              this = (SvtEqCombineListViewItem_o *)BasicHelper__Any_object_(
                                                     (System_Collections_Generic_List_T__o *)EntitiesByGroupId,
                                                     v44,
                                                     (const MethodInfo_2EFDC94 *)Method_BasicHelper_Any_EventGroupEntity___);
              v4->fields.isEventUpVal = (unsigned __int8)this & 1;
              goto LABEL_63;
            }
          }
          goto LABEL_63;
        }
LABEL_158:
        sub_1BCAA3C(this, sort);
      }
      if ( v4->fields.bonusKind == 3 )
      {
        v31 = v4->fields.bonusKindId;
        v32 = sort->fields.bonusKindId;
        goto LABEL_30;
      }
      v32 = sort->fields.bonusKindId;
      goto LABEL_45;
    }
    if ( v4->fields.bonusKind == bonusKind )
    {
      v29 = v4->fields.bonusKindId;
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
      v29 = v4->fields.bonusKindId;
      bonusKind2Id = sort->fields.bonusKind2Id;
LABEL_23:
      if ( v29 == bonusKind2Id )
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
    this = (SvtEqCombineListViewItem_o *)UserServantEntity__getEventUpVal_40936896(
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
      v31 = v4->fields.bonusKindId;
      v32 = sort->fields.bonusKind2Id;
LABEL_30:
      if ( v31 == v32 )
        goto LABEL_63;
      goto LABEL_45;
    }
    v32 = sort->fields.bonusKind2Id;
LABEL_45:
    v4->fields.bonusKindId = v32;
    v4->fields.bonusKind = 3;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, sort);
    this = (SvtEqCombineListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventCampaignMaster___);
    userSvtEntity = v4->fields.userSvtEntity;
    if ( !userSvtEntity )
      goto LABEL_158;
    v39 = (EventCampaignMaster_o *)this;
    v41 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
    v40 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, sort);
    *(_QWORD *)&v81.fields.currentCryptoKey = v41;
    *(_QWORD *)&v81.fields.fakeValue = v40;
    this = (SvtEqCombineListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v81, 0LL);
    if ( !v39 )
      goto LABEL_158;
    this = (SvtEqCombineListViewItem_o *)EventCampaignMaster__IsEnableServant(
                                           v39,
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
    v28 = sort->fields.bonusKind2Id;
  }
  else
  {
    v28 = sort->fields.bonusKind2Id;
    if ( v4->fields.bonusKindId == v28 )
      goto LABEL_63;
  }
  v4->fields.bonusKind = 0;
  v4->fields.bonusKindId = v28;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, sort);
  this = (SvtEqCombineListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventGroupMaster___);
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
      v36 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_EventGroupEntity__bool__TypeInfo, sort, v42, v43);
      v37 = &Method_SvtEqCombineListViewItem__SetSortValue_b__52_1__;
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
          v47 = v4->fields.finishSetupInfo;
          if ( !v47 )
            goto LABEL_158;
          if ( v47->fields.isQuestStart )
          {
            if ( sort->fields.bonusKind != 6 )
              goto LABEL_84;
            if ( v4->fields.bonusKind != 6 )
            {
              v49 = sort->fields.bonusKindId;
              goto LABEL_81;
            }
            v48 = v4->fields.bonusKindId;
            v49 = sort->fields.bonusKindId;
          }
          else
          {
            if ( sort->fields.bonusKind2 != 6 )
              goto LABEL_84;
            if ( v4->fields.bonusKind != 6 )
            {
              v49 = sort->fields.bonusKind2Id;
              goto LABEL_81;
            }
            v48 = v4->fields.bonusKindId;
            v49 = sort->fields.bonusKind2Id;
          }
          if ( v48 == v49 )
          {
            isEventUpVal = v4->fields.isEventUpVal;
            goto LABEL_83;
          }
LABEL_81:
          this = (SvtEqCombineListViewItem_o *)v4->fields.userSvtEntity;
          v4->fields.bonusKind = 6;
          v4->fields.bonusKindId = v49;
          if ( !this )
            goto LABEL_158;
          EventUpVal_40936896 = UserServantEntity__getEventUpVal_40936896(
                                  (UserServantEntity_o *)this,
                                  -1,
                                  0,
                                  0,
                                  v47,
                                  v49,
                                  1,
                                  0LL);
          isEventUpVal = EventUpVal_40936896;
          v4->fields.isEventUpVal = EventUpVal_40936896;
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
      v57 = -10LL;
    }
    else
    {
      if ( type )
        goto LABEL_118;
      v57 = 10LL;
    }
    *p_sortValue0 = v57;
    goto LABEL_118;
  }
  if ( !v4->fields.type )
  {
    if ( v4->fields.isEquiped || v4->fields.isUseSupportEquip || v4->fields.isUseRecommendSupportEquip )
    {
      v58 = 20LL;
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
      v58 = -10LL;
    }
    *p_sortValue0 = v58;
    goto LABEL_104;
  }
  if ( v4->fields.isSameSvt )
  {
    v55 = 20LL;
LABEL_114:
    *p_sortValue0 = v55;
    if ( isChoice && sort->fields.isChoiceSort )
      *(_OWORD *)p_sortValue0 = xmmword_BD3CF0;
    goto LABEL_118;
  }
  if ( v4->fields.isSwapLock )
    isLock = !v4->fields.isLock;
  else
    isLock = v4->fields.isLock;
  v55 = -10LL;
  if ( isLock )
    goto LABEL_114;
  if ( !v4->fields.isNotSelection )
    v55 = -20LL;
  if ( v4->fields.isNotSelection || isChoice )
    goto LABEL_114;
LABEL_118:
  this = (SvtEqCombineListViewItem_o *)(&dword_0 + 1);
  switch ( sort->fields.sortKind )
  {
    case 1:
      v60 = v4->fields.userSvtEntity;
      if ( !v60 )
        goto LABEL_158;
      v61 = *(_OWORD *)&v60->fields.id.fields.fakeValue;
      *(_OWORD *)&v80.fields.currentCryptoKey = *(_OWORD *)&v60->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v80.fields.fakeValue = v61;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, sort);
      v79 = v80;
      this = (SvtEqCombineListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(
                                             &v79,
                                             0LL);
      v62 = v4->fields.userSvtEntity;
      v4->fields.sortValue1 = (int64_t)this;
      if ( !v62 )
        goto LABEL_158;
      this = (SvtEqCombineListViewItem_o *)v4->fields.iconLabelInfo1;
      if ( !this )
        goto LABEL_158;
      IconLabelInfo__SetTime((IconLabelInfo_o *)this, 49, v62->fields.createdAt, 0, 0, 0, 0LL);
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
      v64 = this->fields.bonusKind;
      v65 = v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = v64;
      this = (SvtEqCombineListViewItem_o *)UserServantEntity__getLevelMax((UserServantEntity_o *)this, 0LL);
      if ( !v65 )
        goto LABEL_158;
      IconLabelInfo__Set_38850420(v65, 2, v64, (int32_t)this, 0, 0, 0, 0, 0LL);
      goto LABEL_145;
    case 5:
      v66 = v4->fields.userSvtEntity;
      if ( !v66 )
        goto LABEL_158;
      hp = v66->fields.hp;
      this = (SvtEqCombineListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = hp;
      if ( !this )
        goto LABEL_158;
      adjustHp = v66->fields.adjustHp;
      v69 = 3;
      goto LABEL_136;
    case 6:
      v70 = v4->fields.userSvtEntity;
      if ( !v70 )
        goto LABEL_158;
      hp = v70->fields.atk;
      this = (SvtEqCombineListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = hp;
      if ( !this )
        goto LABEL_158;
      adjustHp = v70->fields.adjustAtk;
      v69 = 5;
LABEL_136:
      IconLabelInfo__Set_38850420((IconLabelInfo_o *)this, v69, hp, adjustHp, 0, 0, 0, 0, 0LL);
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
      IconLabelInfo__Set_38850420((IconLabelInfo_o *)this, 7, cost, 0, 0, 0, 0, 0, 0LL);
LABEL_140:
      this = (SvtEqCombineListViewItem_o *)v4->fields.userSvtEntity;
      if ( !this )
        goto LABEL_158;
      iconLabelInfo1 = v4->fields.iconLabelInfo2;
LABEL_142:
      v73 = this->fields.bonusKind;
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
                                             v53);
      v4->fields.amountSortValue = (int64_t)this;
LABEL_152:
      v75 = v4->fields.servantEntity;
      if ( !v75 )
        goto LABEL_158;
      collectionNo = v75->fields.collectionNo;
      v77 = (SvtEqCombineListViewItem_o *)v4->fields.userSvtEntity;
      v4->fields.sortValue1 = (((unsigned __int64)(unsigned int)v4->fields.rarity << 32) + ((_QWORD)this << 48)) | collectionNo;
      if ( !v77 )
        goto LABEL_158;
      iconLabelInfo1 = v4->fields.iconLabelInfo1;
      v73 = v77->fields.bonusKind;
      this = v77;
      break;
    default:
      return (char)this;
  }
  this = (SvtEqCombineListViewItem_o *)UserServantEntity__getLevelMax((UserServantEntity_o *)this, 0LL);
  if ( !iconLabelInfo1 )
    goto LABEL_158;
  IconLabelInfo__Set_38850420(iconLabelInfo1, 2, v73, (int32_t)this, 0, 0, 0, 0, 0LL);
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
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  EventCampaignMaster_o *Master_object; // x0
  __int64 v10; // x1
  struct UserServantEntity_o *userSvtEntity; // x8
  EventCampaignMaster_o *v12; // x21
  __int64 v13; // x22
  __int64 v14; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_4B19EBF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventCampaignMaster___, entity, method);
    sub_1BCA7E0(&DataManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7, v8);
    byte_4B19EBF = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, entity);
  Master_object = (EventCampaignMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventCampaignMaster___);
  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_16;
  v12 = Master_object;
  v14 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v13 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
  *(_QWORD *)&v16.fields.currentCryptoKey = v14;
  *(_QWORD *)&v16.fields.fakeValue = v13;
  Master_object = (EventCampaignMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v16, 0LL);
  if ( !entity || !v12 )
    goto LABEL_16;
  if ( EventCampaignMaster__IsEnableServant(v12, (int32_t)Master_object, entity->fields.eventId, 0LL) )
    return 1;
  Master_object = (EventCampaignMaster_o *)this->fields.userSvtEntity;
  if ( !Master_object )
    goto LABEL_16;
  if ( UserServantEntity__getEventUpVal_40936896(
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
    sub_1BCAA3C(Master_object, v10);
  return UserServantEntity__getEventUpVal_40936896(
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
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  EventCampaignMaster_o *Master_object; // x0
  __int64 v10; // x1
  struct UserServantEntity_o *userSvtEntity; // x8
  EventCampaignMaster_o *v12; // x21
  __int64 v13; // x22
  __int64 v14; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_4B19EC0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventCampaignMaster___, entity, method);
    sub_1BCA7E0(&DataManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7, v8);
    byte_4B19EC0 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, entity);
  Master_object = (EventCampaignMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventCampaignMaster___);
  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_16;
  v12 = Master_object;
  v14 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v13 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
  *(_QWORD *)&v16.fields.currentCryptoKey = v14;
  *(_QWORD *)&v16.fields.fakeValue = v13;
  Master_object = (EventCampaignMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v16, 0LL);
  if ( !entity || !v12 )
    goto LABEL_16;
  if ( EventCampaignMaster__IsEnableServant(v12, (int32_t)Master_object, entity->fields.eventId, 0LL) )
    return 1;
  Master_object = (EventCampaignMaster_o *)this->fields.userSvtEntity;
  if ( !Master_object )
    goto LABEL_16;
  if ( UserServantEntity__getEventUpVal_40936896(
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
    sub_1BCAA3C(Master_object, v10);
  return UserServantEntity__getEventUpVal_40936896(
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
    sub_1BCAA3C(0LL, method);
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
    sub_1BCAA3C(this, method);
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
  __int64 v2; // x2
  SvtEqCombineListViewItem_o *v3; // x19
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v5; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v8; // [xsp+20h] [xbp-40h]

  v3 = this;
  if ( (byte_4B19EBE & 1) == 0 )
  {
    this = (SvtEqCombineListViewItem_o *)sub_1BCA7E0(
                                           &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
                                           method,
                                           v2);
    byte_4B19EBE = 1;
  }
  userSvtEntity = v3->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_1BCAA3C(this, method);
  v5 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v8.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v8.fields.fakeValue = v5;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
  v7 = v8;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v7, 0LL);
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
  sub_1BCA784(
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


// local variable allocation has failed, the output may be wrong!
void __fastcall SvtEqCombineListViewItem__set_IsDragSelect(
        SvtEqCombineListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  if ( !this )
    sub_1BCAA3C(0LL, value);
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