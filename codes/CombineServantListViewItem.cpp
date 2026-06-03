void CombineServantListViewItem___ctor(
        CombineServantListViewItem_o *this,
        int32_t type,
        int32_t index,
        UserServantEntity_o *userSvtEntity,
        bool isFavorite,
        bool isParty,
        UserServantEntity_o *baseUsrSvtData,
        bool isMtSvt,
        EventUpValSetupInfo_o *setupInfo,
        System_Collections_Generic_Dictionary_int__List_int___o *cachedUserServantNpLvDict,
        const MethodInfo *method)
{
  bool v16; // w22
  IconLabelInfo_o *v17; // x20
  IconLabelInfo_o *v18; // x20
  System_Collections_Generic_List_int__o *v19; // x20
  System_Collections_Generic_List_int__o *v20; // x20
  bool *p_isStatusUpSvt; // x26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_userSvtEntity; // x23
  __int64 SelfUserGame; // x0
  const MethodInfo *v24; // x1
  struct ServantEntity_o *ServantEntity; // x0
  Il2CppObject *Master_object; // x0
  __int128 v27; // q0
  UserServantCollectionMaster_o *v28; // x24
  int64_t v29; // x0
  __int64 v30; // x20
  __int64 v31; // x22
  int64_t v32; // x27
  UserServantCollectionEntity_o *EntityDefinitely; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v34; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v35; // q0
  int64_t v36; // x0
  __int128 v37; // q1
  int64_t v38; // x20
  bool v39; // w9
  struct ServantEntity_o *v40; // x8
  __int64 v41; // x20
  __int64 v42; // x24
  struct ServantEntity_o *v43; // x8
  BalanceConfig_c *v44; // x0
  int32_t adjustHp; // w20
  struct BalanceConfig_StaticFields *static_fields; // x8
  const MethodInfo *v47; // x2
  const MethodInfo *v48; // x1
  const MethodInfo *v49; // x1
  int64_t UserSvtId; // x0
  unsigned int v51; // w8
  __int64 v52; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x29
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v55; // x9
  int32_t *p_offset; // x10
  __int64 v57; // x0
  System_Collections_Generic_IEnumerator_T__c *v58; // x8
  __int64 v59; // x9
  int32_t *v60; // x10
  __int64 v61; // x0
  __int64 v62; // x0
  __int64 v63; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v64; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v65; // q0
  __int64 v66; // x24
  System_Collections_Generic_IEnumerator_T__c *v67; // x8
  __int64 v68; // x9
  int32_t *v69; // x10
  __int64 v70; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v71; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v72; // q0
  UserRecommendSupportMaster_o *v73; // x24
  Il2CppObject *v74; // x0
  __int128 v75; // q1
  UserServantGrandMaster_o *v76; // x24
  UserServantEntity_o *v77; // x8
  Il2CppObject *MasterData_object; // x24
  struct ServantEntity_o *v79; // x8
  __int64 v80; // x20
  __int64 v81; // x27
  int64_t v82; // x29
  Il2CppObject *v83; // x24
  struct ServantEntity_o *v84; // x8
  __int64 v85; // x20
  __int64 v86; // x27
  int64_t v87; // x29
  struct System_Int32_array *commandCardParam; // x20
  int max_length; // w8
  __int64 v90; // x22
  int32_t v91; // w27
  UserServantCollectionEntity_o *v92; // x22
  bool v93; // w29
  __int64 v94; // x1
  System_Collections_Generic_IEnumerator_T__o *v95; // x28
  System_Collections_Generic_IEnumerator_T__c *v96; // x8
  __int64 v97; // x9
  int32_t *v98; // x10
  __int64 v99; // x0
  System_Collections_Generic_IEnumerator_T__c *v100; // x8
  __int64 v101; // x9
  int32_t *v102; // x10
  __int64 v103; // x0
  __int64 v104; // x0
  __int64 v105; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v106; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v107; // q0
  __int64 v108; // x24
  System_Collections_Generic_IEnumerator_T__c *v109; // x8
  __int64 v110; // x9
  int32_t *v111; // x10
  __int64 v112; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v113; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v114; // q0
  UserRecommendSupportMaster_o *v115; // x24
  Il2CppObject *v116; // x0
  __int128 v117; // q1
  UserServantGrandMaster_o *v118; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v119; // x8
  __int64 v120; // x20
  __int64 v121; // x24
  int32_t v122; // w20
  int32_t SvtClassId; // w0
  int32_t SvtClassGroupType; // w24
  int32_t materialExp; // w20
  BalanceConfig_c *v126; // x0
  int SameClassExp; // w22
  double v128; // d0
  int32_t v129; // w8
  UserServantEntity_o *v130; // x8
  ServantLimitMaster_o *v131; // x24
  __int64 v132; // x20
  __int64 v133; // x27
  int32_t v134; // w28
  int32_t v135; // w8
  int32_t v136; // w24
  bool v137; // w8
  bool v138; // w8
  bool v139; // w8
  bool v140; // w8
  Il2CppObject *v141; // x24
  struct ServantEntity_o *v142; // x8
  __int64 v143; // x20
  __int64 v144; // x27
  int64_t v145; // x28
  int32_t v146; // w8
  Il2CppObject *v147; // x0
  __int64 v148; // x20
  __int64 v149; // x22
  ServantLimitImageMaster_o *v150; // x24
  int32_t v151; // w28
  UserServantEntity_o *v152; // x8
  const MethodInfo *v153; // x1
  _BOOL4 isHeroineSvt; // w8
  UserServantEntity_o *v155; // x9
  int32_t combineLimitId; // w24
  __int64 v157; // x20
  __int64 v158; // x27
  int32_t v159; // w28
  __int64 v160; // x20
  __int64 v161; // x22
  __int64 v162; // x24
  __int64 v163; // x8
  UserItemMaster_o *v164; // x28
  unsigned __int64 v165; // x26
  UserServantEntity_o *v166; // x8
  __int128 v167; // q1
  int32_t v168; // w29
  int32_t v169; // w24
  UserServantEntity_o *v170; // x8
  UserServantEntity_o *v171; // x8
  const MethodInfo *v172; // x1
  int32_t v173; // w8
  __int64 v174; // x1
  System_Collections_Generic_IEnumerator_T__o *v175; // x28
  System_Collections_Generic_IEnumerator_T__c *v176; // x8
  __int64 v177; // x9
  int32_t *v178; // x10
  __int64 v179; // x0
  System_Collections_Generic_IEnumerator_T__c *v180; // x8
  __int64 v181; // x9
  int32_t *v182; // x10
  __int64 v183; // x0
  __int64 v184; // x0
  __int64 v185; // x1
  UserServantEntity_o *v186; // x8
  __int128 v187; // q0
  __int64 v188; // x24
  System_Collections_Generic_IEnumerator_T__c *v189; // x8
  __int64 v190; // x9
  int32_t *v191; // x10
  __int64 v192; // x0
  int id; // w24
  int32_t lv; // w20
  int32_t SameSvtNpLvCache; // w0
  const MethodInfo *v196; // x4
  int32_t v197; // w24
  __int64 v198; // x20
  UserServantEntity_o *v199; // x8
  __int128 v200; // q0
  UserRecommendSupportMaster_o *v201; // x24
  Il2CppObject *v202; // x0
  __int128 v203; // q1
  UserServantGrandMaster_o *v204; // x24
  bool v205; // w8
  bool IsMaterialTd; // w0
  UserServantEntity_o *v207; // x8
  UserServantEntity_o *v208; // x8
  bool isLevelMax; // w0
  _BOOL4 v210; // w8
  ServantExceedEntity_o *SvtExceedEnt; // x0
  int32_t *v212; // x26
  CommonConsumeEntity_array *IdEntityList; // x0
  CommonConsumeEntity_array *v214; // x29
  System_Collections_Generic_HashSet_int__o *v215; // x24
  System_Collections_Generic_HashSet_int__o *v216; // x28
  int v217; // w8
  __int64 v218; // x20
  CommonConsumeEntity_o *v219; // x27
  UserServantEntity_o *v220; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v221; // x29
  __int64 v222; // x20
  __int64 v223; // x27
  UserServantEntity_o *v224; // x29
  System_Int32_array *v225; // x24
  __int64 v226; // x20
  __int64 v227; // x24
  struct ServantEntity_o *v228; // x8
  bool v229; // zf
  bool v230; // w8
  UserServantEntity_o *v231; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  int64_t v234; // x8
  __int64 rarity; // x20
  UserServantEntity_o *v236; // x8
  _BOOL8 v237; // x10
  __int64 v238; // x20
  __int64 v239; // x21
  struct UserServantEntity_o *v240; // x8
  __int128 v241; // q0
  int64_t v242; // x8
  int32_t maxFriendshipRank; // w20
  int32_t friendshipExceedCount; // w22
  __int64 v245; // x20
  __int64 v246; // x22
  __int64 v247; // x24
  UserItemMaster_o *v248; // x25
  unsigned __int64 v249; // x27
  __int64 v250; // x29
  bool v251; // w8
  int32_t v252; // w0
  int32_t v253; // w24
  int32_t v254; // w29
  int32_t v255; // w28
  int v256; // w22
  TreasureDvcLvEntity_o *v257; // x0
  bool v258; // cc
  bool v259; // w8
  __int64 v260; // [xsp+10h] [xbp-2E0h]
  __int64 v261; // [xsp+20h] [xbp-2D0h]
  bool *p_isLimitUpItemNum; // [xsp+28h] [xbp-2C8h]
  struct IconLabelInfo_o **p_iconLabelInfo2; // [xsp+30h] [xbp-2C0h]
  bool v265; // [xsp+3Ch] [xbp-2B4h]
  bool v266; // [xsp+3Ch] [xbp-2B4h]
  UserServantEntity_o *v267; // [xsp+40h] [xbp-2B0h]
  UserServantCollectionEntity_o *v269; // [xsp+50h] [xbp-2A0h]
  struct ServantEntity_o **p_servantEntity; // [xsp+58h] [xbp-298h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v271; // [xsp+60h] [xbp-290h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v272; // [xsp+80h] [xbp-270h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v273; // [xsp+A0h] [xbp-250h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v274; // [xsp+C0h] [xbp-230h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v275; // [xsp+E0h] [xbp-210h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v276; // [xsp+100h] [xbp-1F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v277; // [xsp+120h] [xbp-1D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v278; // [xsp+140h] [xbp-1B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v279; // [xsp+160h] [xbp-190h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v280; // [xsp+180h] [xbp-170h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v281; // [xsp+1A0h] [xbp-150h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v282; // [xsp+1C0h] [xbp-130h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v283; // [xsp+1E0h] [xbp-110h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v284; // [xsp+200h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v285; // [xsp+220h] [xbp-D0h]
  UserItemEntity_o *v286; // [xsp+248h] [xbp-A8h] BYREF
  int32_t tdMaxLv; // [xsp+254h] [xbp-9Ch] BYREF
  int32_t tdLv[2]; // [xsp+258h] [xbp-98h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+260h] [xbp-90h] BYREF
  UserItemEntity_o *v290; // [xsp+268h] [xbp-88h] BYREF
  __int64 v291; // [xsp+270h] [xbp-80h] BYREF
  UserServantCommandCodeEntity_o *v292; // [xsp+278h] [xbp-78h] BYREF
  UserServantCommandCardEntity_o *v293; // [xsp+280h] [xbp-70h] BYREF
  UserServantCommandCodeEntity_o *entity; // [xsp+288h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v295; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v296; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v297; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v298; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v299; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v300; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v301; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v302; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v303; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v304; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v305; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v306; // 0:x0.16

  v16 = isParty;
  if ( (byte_4E713DE & 1) == 0 )
  {
    sub_1D0F0B4(&BalanceConfig_TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_ObjectModel_Collection_UserServantLeaderEntity__GetEnumerator__);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_CombineLimitMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_CombineMaterialMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_FriendshipMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_TreasureDvcMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_UserServantCommandCardMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_UserServantLeaderMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMaster_CommonConsumeMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMaster_ServantLimitMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMaster_SvtCoinMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMaster_UserRecommendSupportMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMaster_UserServantGrandMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1D0F0B4(&DataManager_TypeInfo);
    sub_1D0F0B4(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_1D0F0B4(&Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__GetEntity__);
    sub_1D0F0B4(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
    sub_1D0F0B4(&Method_DataMasterBase_UserServantLeaderMaster__UserServantLeaderEntity__string__getEntityList__);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1D0F0B4(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1D0F0B4(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1D0F0B4(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1D0F0B4(&System_IDisposable_TypeInfo);
    sub_1D0F0B4(&System_Collections_Generic_IEnumerator_UserServantLeaderEntity__TypeInfo);
    sub_1D0F0B4(&System_Collections_IEnumerator_TypeInfo);
    sub_1D0F0B4(&IconLabelInfo_TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1D0F0B4(&System_Collections_Generic_List_int__TypeInfo);
    sub_1D0F0B4(&System_Math_TypeInfo);
    sub_1D0F0B4(&NetworkManager_TypeInfo);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4E713DE = 1;
  }
  entity = 0;
  v293 = 0;
  v292 = 0;
  v291 = 0;
  v290 = 0;
  tdInfo = 0;
  *(_QWORD *)tdLv = 0;
  tdMaxLv = 0;
  v286 = 0;
  v17 = (IconLabelInfo_o *)sub_1D0F300(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v17, 0);
  this->fields.iconLabelInfo1 = v17;
  sub_1D0F058(&this->fields.iconLabelInfo1, v17);
  v18 = (IconLabelInfo_o *)sub_1D0F300(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v18, 0);
  this->fields.iconLabelInfo2 = v18;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  sub_1D0F058(&this->fields.iconLabelInfo2, v18);
  v19 = (System_Collections_Generic_List_int__o *)sub_1D0F300(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v19,
    (const MethodInfo_393EB98 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.enableSkillUp = v19;
  sub_1D0F058(&this->fields.enableSkillUp, v19);
  v20 = (System_Collections_Generic_List_int__o *)sub_1D0F300(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v20,
    (const MethodInfo_393EB98 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.enableAppendSkillUp = v20;
  sub_1D0F058(&this->fields.enableAppendSkillUp, v20);
  ListViewItem___ctor((ListViewItem_o *)this, 0);
  this->fields.isChoice = 0;
  *(_DWORD *)&this->fields.isStatusUpSvt = 0;
  p_isStatusUpSvt = &this->fields.isStatusUpSvt;
  this->fields.isMaxSelect = 0;
  *(_QWORD *)&this->fields.isLimitUpItemNum = 0;
  *(_WORD *)&this->fields.isAllAppendSkillLock = 0;
  this->fields.isLvExceedItemNum = 0;
  this->fields.isCanNotLock = 0;
  *(_WORD *)&this->fields.isEquipedCmdCard = 0;
  *(_DWORD *)&this->fields.isFavorite = 0;
  this->fields.isLvMax = 0;
  *(_DWORD *)&this->fields.isBaseSvt = 0;
  *(_DWORD *)&this->fields.isAppendSkillLvSame = 0;
  this->fields.isMaterialTdSvt = 0;
  *(_DWORD *)&this->fields.isBaseLvMax = 0;
  this->fields.isGrandSvt = 0;
  *(_DWORD *)&this->fields.isNotSelectSecondStatusUpAtk = 0;
  this->fields.index = index;
  *(_QWORD *)&this->fields.isAtkUpMax = 0;
  this->fields.type = type;
  this->fields.setupInfo = setupInfo;
  p_isLimitUpItemNum = &this->fields.isLimitUpItemNum;
  sub_1D0F058(&this->fields.setupInfo, setupInfo);
  this->fields.userSvtEntity = userSvtEntity;
  p_userSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userSvtEntity;
  this->fields.isParty = v16;
  SelfUserGame = sub_1D0F058(&this->fields.userSvtEntity, userSvtEntity);
  if ( !userSvtEntity )
    goto LABEL_455;
  ServantEntity = UserServantEntity__GetServantEntity(userSvtEntity, -1, 0);
  this->fields.servantEntity = ServantEntity;
  p_servantEntity = &this->fields.servantEntity;
  sub_1D0F058(&this->fields.servantEntity, ServantEntity);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  v27 = *(_OWORD *)&userSvtEntity->fields.userId.fields.fakeValue;
  v28 = (UserServantCollectionMaster_o *)Master_object;
  *(_OWORD *)&v285.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v285.fields.fakeValue = v27;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v284 = v285;
  v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50334724(&v284, 0);
  v31 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v30 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  v32 = v29;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v295.fields.currentCryptoKey = v31;
  *(_QWORD *)&v295.fields.fakeValue = v30;
  SelfUserGame = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v295, 0);
  if ( !v28 )
    goto LABEL_455;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v28, v32, SelfUserGame, 0);
  SelfUserGame = (__int64)UserGameMaster__getSelfUserGame(0);
  v261 = SelfUserGame;
  if ( baseUsrSvtData )
  {
    v34 = *p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_455;
    v35 = v34[2];
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v285.fields.currentCryptoKey = v34[1];
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v285.fields.fakeValue = v35;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v283 = v285;
    v36 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50334724(&v283, 0);
    v37 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
    v38 = v36;
    *(_OWORD *)&v282.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v282.fields.fakeValue = v37;
    SelfUserGame = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50334724(&v282, 0);
    v39 = v38 == SelfUserGame;
  }
  else
  {
    v39 = 0;
  }
  v40 = this->fields.servantEntity;
  this->fields.isBaseSvt = v39;
  if ( !v40 )
    goto LABEL_455;
  v41 = *(_QWORD *)&v40->fields.id.fields.currentCryptoKey;
  v42 = *(_QWORD *)&v40->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v296.fields.currentCryptoKey = v41;
  *(_QWORD *)&v296.fields.fakeValue = v42;
  SelfUserGame = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v296, 0);
  v43 = this->fields.servantEntity;
  this->fields.svtId = SelfUserGame;
  if ( !v43 )
    goto LABEL_455;
  this->fields.classId = v43->fields.classId;
  this->fields.isHeroineSvt = UserServantEntity__IsHeroine(userSvtEntity, 0);
  SelfUserGame = UserServantEntity__IsEventJoin(userSvtEntity, 0);
  this->fields.isEventJoin = SelfUserGame & 1;
  if ( !EntityDefinitely )
    goto LABEL_455;
  UserServantCollectionEntity__getFriendShipRankInfo(
    EntityDefinitely,
    &this->fields.friendship,
    &this->fields.friendshipMax,
    0);
  this->fields.maxLimitCnt = UserServantEntity__getLimitCntMax(userSvtEntity, 0);
  this->fields.currentLimitCnt = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(
                                   userSvtEntity->fields.limitCount,
                                   0);
  v44 = BalanceConfig_TypeInfo;
  adjustHp = userSvtEntity->fields.adjustHp;
  v269 = EntityDefinitely;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v44 = BalanceConfig_TypeInfo;
  }
  static_fields = v44->static_fields;
  v267 = baseUsrSvtData;
  this->fields.hpReinforceValue = static_fields->StatusUpAdjustHp * adjustHp;
  this->fields.atkReinforceValue = static_fields->StatusUpAdjustAtk * userSvtEntity->fields.adjustAtk;
  UserServantEntity__getAdjustMaxData(
    userSvtEntity,
    &this->fields.nowMaxHpReinforceValue,
    &this->fields.nowMaxAtkReinforceValue,
    0);
  CombineServantListViewItem__ModifyItem(this, isFavorite, v47);
  CombineServantListViewItem__SetOverwriteStatus(this, v48);
  UserSvtId = CombineServantListViewItem__get_UserSvtId(this, v49);
  EventFortificationDataLogic__SetFortification(
    &this->fields.isFortification,
    &this->fields.fortificationName,
    &this->fields.fortificationDetailName,
    UserSvtId,
    0);
  v51 = this->fields.type;
  if ( v51 <= 0xA && ((1 << v51) & 0x481) != 0 )
  {
    SelfUserGame = (__int64)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_455;
    if ( UserServantEntity__isLevelMax((UserServantEntity_o *)SelfUserGame, 0) )
    {
      SelfUserGame = (__int64)*p_userSvtEntity;
      if ( !*p_userSvtEntity )
        goto LABEL_455;
      if ( UserServantEntity__isAdjustHpMax((UserServantEntity_o *)SelfUserGame, 0) )
      {
        SelfUserGame = (__int64)*p_userSvtEntity;
        if ( !*p_userSvtEntity )
          goto LABEL_455;
        if ( UserServantEntity__isAdjustAtkMax((UserServantEntity_o *)SelfUserGame, 0) )
        {
          SelfUserGame = (__int64)*p_userSvtEntity;
          if ( !*p_userSvtEntity )
            goto LABEL_455;
          if ( UserServantEntity__isSecondAdjustHpMax((UserServantEntity_o *)SelfUserGame, 0) )
          {
            SelfUserGame = (__int64)*p_userSvtEntity;
            if ( !*p_userSvtEntity )
              goto LABEL_455;
            if ( UserServantEntity__isSecondAdjustAtkMax((UserServantEntity_o *)SelfUserGame, 0) )
              this->fields.isLvMax = 1;
          }
        }
      }
    }
    this->fields.isLimitCntMax = UserServantEntity__isLimitCountMax(userSvtEntity, 0);
    SelfUserGame = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !SelfUserGame )
      goto LABEL_455;
    SelfUserGame = (__int64)DataManager__GetMasterData_object_(
                              (DataManager_o *)SelfUserGame,
                              (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_UserServantLeaderMaster___);
    if ( !SelfUserGame )
      goto LABEL_455;
    SelfUserGame = *(_QWORD *)(SelfUserGame + 40);
    if ( !SelfUserGame )
      goto LABEL_455;
    Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                   (System_Collections_ObjectModel_Collection_T__o *)SelfUserGame,
                   (const MethodInfo_34CD418 *)Method_System_Collections_ObjectModel_Collection_UserServantLeaderEntity__GetEnumerator__);
    if ( !Enumerator )
      sub_1D0F30C(0, v52);
    while ( 1 )
    {
      klass = Enumerator->klass;
      v55 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
      if ( *(_WORD *)&Enumerator->klass->_2.rank )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v55;
          p_offset += 4;
          if ( !v55 )
            goto LABEL_45;
        }
        v57 = (__int64)&klass->vtable[*p_offset];
      }
      else
      {
LABEL_45:
        v57 = sub_1CE5430(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v57)(
              Enumerator,
              *(_QWORD *)(v57 + 8))
          & 1) == 0 )
        break;
      v58 = Enumerator->klass;
      v59 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
      if ( *(_WORD *)&Enumerator->klass->_2.rank )
      {
        v60 = &v58->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerator_UserServantLeaderEntity__c **)v60 - 1) != System_Collections_Generic_IEnumerator_UserServantLeaderEntity__TypeInfo )
        {
          --v59;
          v60 += 4;
          if ( !v59 )
            goto LABEL_52;
        }
        v61 = (__int64)&v58->vtable[*v60];
      }
      else
      {
LABEL_52:
        v61 = sub_1CE5430(Enumerator, System_Collections_Generic_IEnumerator_UserServantLeaderEntity__TypeInfo, 0);
      }
      v62 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v61)(
              Enumerator,
              *(_QWORD *)(v61 + 8));
      if ( !v62 )
        sub_1D0F30C(0, v63);
      v64 = *p_userSvtEntity;
      if ( !*p_userSvtEntity )
        sub_1D0F30C(v62, v63);
      v65 = v64[2];
      v66 = *(_QWORD *)(v62 + 56);
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v285.fields.currentCryptoKey = v64[1];
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v285.fields.fakeValue = v65;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v281 = v285;
      if ( v66 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50334724(&v281, 0) )
      {
        this->fields.isUseSupport = 1;
        break;
      }
    }
    v67 = Enumerator->klass;
    v68 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v69 = &v67->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v69 - 1) != System_IDisposable_TypeInfo )
      {
        --v68;
        v69 += 4;
        if ( !v68 )
          goto LABEL_64;
      }
      v70 = (__int64)&v67->vtable[*v69];
    }
    else
    {
LABEL_64:
      v70 = sub_1CE5430(Enumerator, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v70)(
      Enumerator,
      *(_QWORD *)(v70 + 8));
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    SelfUserGame = (__int64)DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_UserRecommendSupportMaster___);
    v71 = *p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_455;
    v72 = v71[2];
    v73 = (UserRecommendSupportMaster_o *)SelfUserGame;
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v285.fields.currentCryptoKey = v71[1];
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v285.fields.fakeValue = v72;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v280 = v285;
    SelfUserGame = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50334724(&v280, 0);
    if ( !v73 )
      goto LABEL_455;
    this->fields.isUseRecommendSupport = UserRecommendSupportMaster__IsSettingServant(v73, SelfUserGame, 0, 0);
    v74 = DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_UserServantGrandMaster___);
    v75 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
    v76 = (UserServantGrandMaster_o *)v74;
    *(_OWORD *)&v279.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v279.fields.fakeValue = v75;
    SelfUserGame = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50334724(&v279, 0);
    if ( !v76 )
      goto LABEL_455;
    SelfUserGame = UserServantGrandMaster__IsSettingServant(v76, SelfUserGame, 0);
    v77 = this->fields.userSvtEntity;
    this->fields.isGrandSvt = SelfUserGame & 1;
    if ( !v77 )
      goto LABEL_455;
    if ( UserServantEntity__IsCombineExp(v77, 0) )
      this->fields.isExpUpSvt = 1;
    SelfUserGame = (__int64)*p_servantEntity;
    if ( !*p_servantEntity )
      goto LABEL_455;
    if ( ServantEntity__get_IsStatusUp((ServantEntity_o *)SelfUserGame, 0) )
      *p_isStatusUpSvt = 1;
    SelfUserGame = (__int64)*p_servantEntity;
    if ( !*p_servantEntity )
      goto LABEL_455;
    if ( ServantEntity__get_IsServantMaterialTd((ServantEntity_o *)SelfUserGame, 0) )
      this->fields.isMaterialTdSvt = 1;
    SelfUserGame = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !SelfUserGame )
      goto LABEL_455;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)SelfUserGame,
                          (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4E710BF )
    {
      sub_1D0F0B4(&NetworkManager_TypeInfo);
      byte_4E710BF = 1;
    }
    SelfUserGame = (__int64)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      SelfUserGame = (__int64)NetworkManager_TypeInfo;
    }
    v79 = *p_servantEntity;
    if ( !*p_servantEntity )
      goto LABEL_455;
    v81 = *(_QWORD *)&v79->fields.id.fields.currentCryptoKey;
    v80 = *(_QWORD *)&v79->fields.id.fields.fakeValue;
    v82 = *(_QWORD *)(*(_QWORD *)(SelfUserGame + 184) + 64LL);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v297.fields.currentCryptoKey = v81;
    *(_QWORD *)&v297.fields.fakeValue = v80;
    SelfUserGame = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v297, 0);
    if ( !MasterData_object )
      goto LABEL_455;
    if ( UserServantCommandCodeMaster__TryGetEntity(
           (UserServantCommandCodeMaster_o *)MasterData_object,
           &entity,
           v82,
           (int)SelfUserGame,
           0) )
    {
      SelfUserGame = (__int64)entity;
      if ( !entity )
        goto LABEL_455;
      this->fields.isEquipedCmdCard = UserServantCommandCodeEntity__IsEquipedCommandCode(entity, 0);
      SelfUserGame = (__int64)entity;
      if ( !entity )
        goto LABEL_455;
      this->fields.isCmdCardSlotOpen = UserServantCommandCodeEntity__IsCommandCardSlotOpen(entity, 0);
    }
    v51 = this->fields.type;
    if ( v51 == 10 )
    {
      SelfUserGame = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !SelfUserGame )
        goto LABEL_455;
      v83 = DataManager__GetMasterData_object_(
              (DataManager_o *)SelfUserGame,
              (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_UserServantCommandCardMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4E710BF )
      {
        sub_1D0F0B4(&NetworkManager_TypeInfo);
        byte_4E710BF = 1;
      }
      SelfUserGame = (__int64)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        SelfUserGame = (__int64)NetworkManager_TypeInfo;
      }
      v84 = *p_servantEntity;
      if ( !*p_servantEntity )
        goto LABEL_455;
      v86 = *(_QWORD *)&v84->fields.id.fields.currentCryptoKey;
      v85 = *(_QWORD *)&v84->fields.id.fields.fakeValue;
      v87 = *(_QWORD *)(*(_QWORD *)(SelfUserGame + 184) + 64LL);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v298.fields.currentCryptoKey = v86;
      *(_QWORD *)&v298.fields.fakeValue = v85;
      SelfUserGame = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v298, 0);
      if ( !v83 )
        goto LABEL_455;
      SelfUserGame = UserServantCommandCardMaster__TryGetEntity(
                       (UserServantCommandCardMaster_o *)v83,
                       &v293,
                       v87,
                       (int)SelfUserGame,
                       0);
      if ( (SelfUserGame & 1) != 0 )
      {
        if ( !v293 )
          goto LABEL_455;
        commandCardParam = v293->fields.commandCardParam;
        if ( commandCardParam )
        {
          max_length = commandCardParam->max_length;
          if ( max_length >= 1 )
          {
            v90 = 0;
            while ( 1 )
            {
              if ( (unsigned int)v90 >= max_length )
                goto LABEL_462;
              SelfUserGame = (__int64)BalanceConfig_TypeInfo;
              v91 = commandCardParam->m_Items[v90];
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                SelfUserGame = (__int64)BalanceConfig_TypeInfo;
              }
              if ( v91 < *(_DWORD *)(*(_QWORD *)(SelfUserGame + 184) + 764LL) )
                break;
              this->fields.isCommandCardExceedMax = 1;
              max_length = commandCardParam->max_length;
              if ( (int)++v90 >= max_length )
                goto LABEL_121;
            }
            this->fields.isCommandCardExceedMax = 0;
          }
        }
      }
LABEL_121:
      v51 = this->fields.type;
    }
  }
  v92 = v269;
  v93 = isMtSvt;
  if ( v51 == 1 )
  {
    this->fields.isMaterialSvt = v93;
    SelfUserGame = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !SelfUserGame )
      goto LABEL_455;
    SelfUserGame = (__int64)DataManager__GetMasterData_object_(
                              (DataManager_o *)SelfUserGame,
                              (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_UserServantLeaderMaster___);
    if ( !SelfUserGame )
      goto LABEL_455;
    SelfUserGame = *(_QWORD *)(SelfUserGame + 40);
    if ( !SelfUserGame )
      goto LABEL_455;
    v95 = System_Collections_ObjectModel_Collection_object___GetEnumerator(
            (System_Collections_ObjectModel_Collection_T__o *)SelfUserGame,
            (const MethodInfo_34CD418 *)Method_System_Collections_ObjectModel_Collection_UserServantLeaderEntity__GetEnumerator__);
    if ( !v95 )
      sub_1D0F30C(0, v94);
    while ( 1 )
    {
      v96 = v95->klass;
      v97 = *(unsigned __int16 *)&v95->klass->_2.rank;
      if ( *(_WORD *)&v95->klass->_2.rank )
      {
        v98 = &v96->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)v98 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v97;
          v98 += 4;
          if ( !v97 )
            goto LABEL_131;
        }
        v99 = (__int64)&v96->vtable[*v98];
      }
      else
      {
LABEL_131:
        v99 = sub_1CE5430(v95, System_Collections_IEnumerator_TypeInfo, 0);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v99)(
              v95,
              *(_QWORD *)(v99 + 8))
          & 1) == 0 )
        break;
      v100 = v95->klass;
      v101 = *(unsigned __int16 *)&v95->klass->_2.rank;
      if ( *(_WORD *)&v95->klass->_2.rank )
      {
        v102 = &v100->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerator_UserServantLeaderEntity__c **)v102 - 1) != System_Collections_Generic_IEnumerator_UserServantLeaderEntity__TypeInfo )
        {
          --v101;
          v102 += 4;
          if ( !v101 )
            goto LABEL_138;
        }
        v103 = (__int64)&v100->vtable[*v102];
      }
      else
      {
LABEL_138:
        v103 = sub_1CE5430(v95, System_Collections_Generic_IEnumerator_UserServantLeaderEntity__TypeInfo, 0);
      }
      v104 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v103)(
               v95,
               *(_QWORD *)(v103 + 8));
      if ( !v104 )
        sub_1D0F30C(0, v105);
      v106 = *p_userSvtEntity;
      if ( !*p_userSvtEntity )
        sub_1D0F30C(v104, v105);
      v107 = v106[2];
      v108 = *(_QWORD *)(v104 + 56);
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v285.fields.currentCryptoKey = v106[1];
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v285.fields.fakeValue = v107;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v278 = v285;
      if ( v108 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50334724(&v278, 0) )
      {
        this->fields.isUseSupport = 1;
        break;
      }
    }
    v109 = v95->klass;
    v110 = *(unsigned __int16 *)&v95->klass->_2.rank;
    if ( *(_WORD *)&v95->klass->_2.rank )
    {
      v111 = &v109->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v111 - 1) != System_IDisposable_TypeInfo )
      {
        --v110;
        v111 += 4;
        if ( !v110 )
          goto LABEL_150;
      }
      v112 = (__int64)&v109->vtable[*v111];
    }
    else
    {
LABEL_150:
      v112 = sub_1CE5430(v95, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v112)(v95, *(_QWORD *)(v112 + 8));
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    SelfUserGame = (__int64)DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_UserRecommendSupportMaster___);
    v113 = *p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_455;
    v114 = v113[2];
    v115 = (UserRecommendSupportMaster_o *)SelfUserGame;
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v285.fields.currentCryptoKey = v113[1];
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v285.fields.fakeValue = v114;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v277 = v285;
    SelfUserGame = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50334724(&v277, 0);
    if ( !v115 )
      goto LABEL_455;
    this->fields.isUseRecommendSupport = UserRecommendSupportMaster__IsSettingServant(v115, SelfUserGame, 0, 0);
    v116 = DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_UserServantGrandMaster___);
    v117 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
    v118 = (UserServantGrandMaster_o *)v116;
    *(_OWORD *)&v276.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v276.fields.fakeValue = v117;
    SelfUserGame = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50334724(&v276, 0);
    if ( !v118 )
      goto LABEL_455;
    this->fields.isGrandSvt = UserServantGrandMaster__IsSettingServant(v118, SelfUserGame, 0);
    SelfUserGame = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !SelfUserGame )
      goto LABEL_455;
    SelfUserGame = (__int64)DataManager__GetMasterData_object_(
                              (DataManager_o *)SelfUserGame,
                              (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_CombineMaterialMaster___);
    if ( !*p_servantEntity )
      goto LABEL_455;
    if ( !*p_userSvtEntity )
      goto LABEL_455;
    if ( !SelfUserGame )
      goto LABEL_455;
    SelfUserGame = (__int64)CombineMaterialMaster__GetEntity(
                              (CombineMaterialMaster_o *)SelfUserGame,
                              (*p_servantEntity)->fields.combineMaterialId,
                              (*p_userSvtEntity)[25].fields.currentCryptoKey,
                              0);
    if ( !SelfUserGame )
      goto LABEL_455;
    this->fields.materialExp = *(_DWORD *)(SelfUserGame + 24);
    if ( v267 )
    {
      v119 = *p_userSvtEntity;
      if ( !*p_userSvtEntity )
        goto LABEL_455;
      v121 = *(_QWORD *)&v119[5].fields.currentCryptoKey;
      v120 = *(_QWORD *)&v119[5].fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v299.fields.currentCryptoKey = v121;
      *(_QWORD *)&v299.fields.fakeValue = v120;
      v122 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v299, 0);
      if ( v122 == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v267->fields.svtId, 0) )
        this->fields.isLimitCntTarget = 1;
      SelfUserGame = UserServantEntity__getSvtClassId(v267, 1, 0, 0);
      if ( !*p_userSvtEntity )
        goto LABEL_455;
      if ( UserServantEntity__getSvtClassId((UserServantEntity_o *)*p_userSvtEntity, 1, 0, 0) == (_DWORD)SelfUserGame )
        this->fields.isSameClass = 1;
      SelfUserGame = (__int64)*p_servantEntity;
      if ( !*p_servantEntity )
        goto LABEL_455;
      if ( ServantEntity__get_IsStatusUp((ServantEntity_o *)SelfUserGame, 0) )
        goto LABEL_177;
      SelfUserGame = (__int64)*p_servantEntity;
      if ( !*p_servantEntity )
        goto LABEL_455;
      if ( ServantEntity__get_IsCombineMaterial((ServantEntity_o *)SelfUserGame, 0) )
      {
LABEL_177:
        SelfUserGame = (__int64)*p_servantEntity;
        if ( !*p_servantEntity )
          goto LABEL_455;
        if ( ServantEntity__get_IsAllClass((ServantEntity_o *)SelfUserGame, 0) )
          this->fields.isSameClass = 1;
      }
      this->fields.isBaseLvMax = UserServantEntity__isLevelMax(v267, 0);
      SelfUserGame = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !SelfUserGame )
        goto LABEL_455;
      SelfUserGame = (__int64)DataManager__GetMasterData_object_(
                                (DataManager_o *)SelfUserGame,
                                (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_ServantClassMaster___);
      if ( !*p_servantEntity )
        goto LABEL_455;
      if ( !SelfUserGame )
        goto LABEL_455;
      SelfUserGame = (__int64)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)SelfUserGame,
                                (*p_servantEntity)->fields.classId,
                                (const MethodInfo_3535B7C *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
      if ( !SelfUserGame )
        goto LABEL_455;
      HIDWORD(v291) = *(_DWORD *)(SelfUserGame + 56);
      SvtClassId = UserServantEntity__getSvtClassId(v267, 0, 0, 0);
      SvtClassGroupType = UserServantEntity__getSvtClassGroupType(v267, SvtClassId, 0);
      if ( System_Int32__Equals_67071248((int32_t)&v291 + 4, 3, 0)
        || System_Int32__Equals_67071248((int32_t)&v291 + 4, SvtClassGroupType, 0) && this->fields.isSameClass )
      {
        materialExp = this->fields.materialExp;
        v126 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v126 = BalanceConfig_TypeInfo;
        }
        SameClassExp = v126->static_fields->SameClassExp;
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        v128 = (double)materialExp * (double)SameClassExp / 1000.0;
        v129 = vcvtpd_s64_f64(v128);
        if ( ceil(v128) == INFINITY )
          v129 = 0x80000000;
        this->fields.materialExp = v129;
      }
    }
    else
    {
      this->fields.isLimitCntTarget = 0;
    }
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    SelfUserGame = (__int64)DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_ServantLimitMaster___);
    v130 = (UserServantEntity_o *)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_455;
    v131 = (ServantLimitMaster_o *)SelfUserGame;
    v133 = *(_QWORD *)&v130->fields.svtId.fields.currentCryptoKey;
    v132 = *(_QWORD *)&v130->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v300.fields.currentCryptoKey = v133;
    *(_QWORD *)&v300.fields.fakeValue = v132;
    SelfUserGame = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v300, 0);
    if ( !*p_userSvtEntity )
      goto LABEL_455;
    v134 = SelfUserGame;
    SelfUserGame = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200((*p_userSvtEntity)[6], 0);
    if ( !v131 )
      goto LABEL_455;
    SelfUserGame = (__int64)ServantLimitMaster__GetEntity(v131, v134, SelfUserGame, 0);
    if ( !SelfUserGame )
      goto LABEL_455;
    this->fields.hpBase = *(_DWORD *)(SelfUserGame + 36);
    v135 = *(_DWORD *)(SelfUserGame + 44);
    SelfUserGame = (__int64)this->fields.servantEntity;
    this->fields.atkBase = v135;
    if ( !SelfUserGame )
      goto LABEL_455;
    SelfUserGame = ServantEntity__get_IsStatusUp((ServantEntity_o *)SelfUserGame, 0);
    if ( (SelfUserGame & 1) != 0 )
    {
      *p_isStatusUpSvt = 1;
      if ( !v267 )
        goto LABEL_455;
      v136 = UserServantEntity__getSvtClassId(v267, 0, 0, 0);
      SelfUserGame = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !SelfUserGame )
        goto LABEL_455;
      SelfUserGame = (__int64)DataManager__GetMasterData_object_(
                                (DataManager_o *)SelfUserGame,
                                (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_ServantClassMaster___);
      if ( !*p_servantEntity )
        goto LABEL_455;
      if ( !SelfUserGame )
        goto LABEL_455;
      SelfUserGame = (__int64)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)SelfUserGame,
                                (*p_servantEntity)->fields.classId,
                                (const MethodInfo_3535B7C *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
      if ( !SelfUserGame )
        goto LABEL_455;
      LODWORD(v291) = *(_DWORD *)(SelfUserGame + 56);
      if ( !*p_servantEntity )
        goto LABEL_455;
      if ( (*p_servantEntity)->fields.classId == v136 || System_Int32__Equals_67071248((int32_t)&v291, 3, 0) )
      {
        this->fields.isCanStUp = 1;
        v137 = UserServantEntity__isAdjustAtkMax(v267, 0) && this->fields.atkBase > 0;
        this->fields.isAtkUpMax = v137;
        v138 = UserServantEntity__isAdjustHpMax(v267, 0) && this->fields.hpBase > 0;
        this->fields.isHpUpMax = v138;
        v139 = UserServantEntity__isSecondAdjustAtkMax(v267, 0) && this->fields.atkBase > 0;
        this->fields.isAtkSecondUpMax = v139;
        v140 = UserServantEntity__isSecondAdjustHpMax(v267, 0) && this->fields.hpBase > 0;
        this->fields.isHpSecondUpMax = v140;
      }
    }
    SelfUserGame = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !SelfUserGame )
      goto LABEL_455;
    v141 = DataManager__GetMasterData_object_(
             (DataManager_o *)SelfUserGame,
             (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4E710BF )
    {
      sub_1D0F0B4(&NetworkManager_TypeInfo);
      byte_4E710BF = 1;
    }
    SelfUserGame = (__int64)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      SelfUserGame = (__int64)NetworkManager_TypeInfo;
    }
    v92 = v269;
    v142 = *p_servantEntity;
    if ( !*p_servantEntity )
      goto LABEL_455;
    v144 = *(_QWORD *)&v142->fields.id.fields.currentCryptoKey;
    v143 = *(_QWORD *)&v142->fields.id.fields.fakeValue;
    v145 = *(_QWORD *)(*(_QWORD *)(SelfUserGame + 184) + 64LL);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v301.fields.currentCryptoKey = v144;
    *(_QWORD *)&v301.fields.fakeValue = v143;
    SelfUserGame = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v301, 0);
    if ( !v141 )
LABEL_455:
      sub_1D0F30C(SelfUserGame, v24);
    if ( UserServantCommandCodeMaster__TryGetEntity(
           (UserServantCommandCodeMaster_o *)v141,
           &v292,
           v145,
           (int)SelfUserGame,
           0) )
    {
      SelfUserGame = (__int64)v292;
      if ( !v292 )
        goto LABEL_455;
      this->fields.isEquipedCmdCard = UserServantCommandCodeEntity__IsEquipedCommandCode(v292, 0);
      SelfUserGame = (__int64)v292;
      if ( !v292 )
        goto LABEL_455;
      this->fields.isCmdCardSlotOpen = UserServantCommandCodeEntity__IsCommandCardSlotOpen(v292, 0);
    }
  }
  v146 = this->fields.type;
  if ( v146 == 9 )
  {
    SelfUserGame = UserServantEntity__isLimitCountMax(userSvtEntity, 0);
    v170 = this->fields.userSvtEntity;
    this->fields.isLimitCntMax = SelfUserGame & 1;
    if ( v170 )
    {
      SelfUserGame = UserServantEntity__isLevelMax(v170, 0);
      v171 = this->fields.userSvtEntity;
      this->fields.isLvMax = SelfUserGame & 1;
      if ( v171 )
      {
        this->fields.isIgnoreCombineLimitSpecial = UserServantEntity__IsIgnoreCombineLimitSpecial(v171, 0);
        this->fields.isSealCombineLimit = CombineServantListViewItem__GetSealCombineLimit(this, v172);
        goto LABEL_278;
      }
    }
    goto LABEL_455;
  }
  if ( v146 != 2 )
    goto LABEL_279;
  this->fields.isLimitCntMax = UserServantEntity__isLimitCountMax(userSvtEntity, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v265 = isMtSvt;
  v147 = DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  v149 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v148 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  v150 = (ServantLimitImageMaster_o *)v147;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v302.fields.currentCryptoKey = v149;
  *(_QWORD *)&v302.fields.fakeValue = v148;
  v151 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v302, 0);
  SelfUserGame = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(
                   userSvtEntity->fields.limitCount,
                   0);
  if ( !v150 )
    goto LABEL_455;
  SelfUserGame = ServantLimitImageMaster__IsServantLimitCountSeal(v150, v151, SelfUserGame, 0);
  v152 = this->fields.userSvtEntity;
  v92 = v269;
  this->fields.isSealedLimitCount = SelfUserGame & 1;
  if ( !v152 )
    goto LABEL_455;
  this->fields.isLvMax = UserServantEntity__isLevelMax(v152, 0);
  SelfUserGame = CombineServantListViewItem__GetSealCombineLimit(this, v153);
  isHeroineSvt = this->fields.isHeroineSvt;
  this->fields.isSealCombineLimit = SelfUserGame & 1;
  if ( isHeroineSvt )
    goto LABEL_278;
  if ( !*p_servantEntity )
    goto LABEL_455;
  v155 = (UserServantEntity_o *)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_455;
  combineLimitId = (*p_servantEntity)->fields.combineLimitId;
  v158 = *(_QWORD *)&v155->fields.limitCount.fields.currentCryptoKey;
  v157 = *(_QWORD *)&v155->fields.limitCount.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v303.fields.currentCryptoKey = v158;
  *(_QWORD *)&v303.fields.fakeValue = v157;
  v159 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v303, 0);
  SelfUserGame = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_455;
  SelfUserGame = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)SelfUserGame,
                            (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_CombineLimitMaster___);
  if ( !SelfUserGame )
    goto LABEL_455;
  SelfUserGame = (__int64)CombineLimitMaster__GetEntity((CombineLimitMaster_o *)SelfUserGame, combineLimitId, v159, 0);
  if ( !SelfUserGame )
    goto LABEL_455;
  v161 = *(_QWORD *)(SelfUserGame + 32);
  v160 = *(_QWORD *)(SelfUserGame + 40);
  v162 = SelfUserGame;
  SelfUserGame = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_455;
  v260 = v162;
  SelfUserGame = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)SelfUserGame,
                            (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !v160 )
    goto LABEL_455;
  v163 = *(_QWORD *)(v160 + 24);
  if ( (int)v163 < 1 )
    goto LABEL_438;
  v164 = (UserItemMaster_o *)SelfUserGame;
  v165 = 0;
  while ( 1 )
  {
    if ( v165 >= (unsigned int)v163 )
      goto LABEL_462;
    if ( !v161 )
      goto LABEL_455;
    if ( v165 >= *(unsigned int *)(v161 + 24) )
      goto LABEL_462;
    v166 = (UserServantEntity_o *)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_455;
    v167 = *(_OWORD *)&v166->fields.userId.fields.fakeValue;
    v168 = *(_DWORD *)(v160 + 32 + 4 * v165);
    v169 = *(_DWORD *)(v161 + 32 + 4 * v165);
    *(_OWORD *)&v285.fields.currentCryptoKey = *(_OWORD *)&v166->fields.userId.fields.currentCryptoKey;
    *(_OWORD *)&v285.fields.fakeValue = v167;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v275 = v285;
    SelfUserGame = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50334724(&v275, 0);
    if ( !v164 )
      goto LABEL_455;
    SelfUserGame = UserItemMaster__TryGetEntity(v164, &v290, SelfUserGame, v168, 0);
    if ( (SelfUserGame & 1) == 0 )
      goto LABEL_437;
    if ( !v290 )
      goto LABEL_455;
    if ( v168 == v290->fields.itemId )
      break;
LABEL_273:
    LODWORD(v163) = *(_DWORD *)(v160 + 24);
    if ( (__int64)++v165 >= (int)v163 )
      goto LABEL_438;
  }
  if ( v169 <= v290->fields.num )
  {
    *p_isLimitUpItemNum = 1;
    goto LABEL_273;
  }
LABEL_437:
  *p_isLimitUpItemNum = 0;
LABEL_438:
  if ( !v261 )
    goto LABEL_455;
  v92 = v269;
  v93 = v265;
  if ( *(_QWORD *)(v261 + 96) < *(int *)(v260 + 24) )
    *p_isLimitUpItemNum = 0;
LABEL_278:
  v146 = this->fields.type;
LABEL_279:
  if ( v146 == 3 )
  {
    CombineServantListViewItem__SetSkillInfo(this, v24);
    v146 = this->fields.type;
  }
  if ( (unsigned int)(v146 - 11) <= 1 )
  {
    CombineServantListViewItem__SetAppendSkillInfo(this, v24);
    v146 = this->fields.type;
  }
  if ( v146 == 4 && !this->fields.isHeroineSvt )
  {
    SelfUserGame = (__int64)*p_userSvtEntity;
    if ( *p_userSvtEntity )
    {
      SelfUserGame = UserServantEntity__getTreasureDeviceInfo(
                       (UserServantEntity_o *)SelfUserGame,
                       &tdInfo,
                       -1,
                       -1,
                       0,
                       0);
      this->fields.isTdLvMax = 1;
      if ( tdInfo )
      {
        id = tdInfo->fields.id;
        if ( id >= 1 )
        {
          lv = tdInfo->fields.lv;
          SelfUserGame = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !SelfUserGame )
            goto LABEL_455;
          SelfUserGame = (__int64)DataManager__GetMasterData_object_(
                                    (DataManager_o *)SelfUserGame,
                                    (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
          if ( !SelfUserGame )
            goto LABEL_455;
          SelfUserGame = (__int64)DataMasterBase_object__object__int___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)SelfUserGame,
                                    id,
                                    (const MethodInfo_3535B7C *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
          if ( !SelfUserGame )
            goto LABEL_455;
          if ( lv < *(_DWORD *)(SelfUserGame + 48) )
            this->fields.isTdLvMax = 0;
        }
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        SelfUserGame = (__int64)DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_UserServantMaster___);
        if ( SelfUserGame )
        {
          SameSvtNpLvCache = UserServantMaster__getSameSvtNpLvCache(
                               (UserServantMaster_o *)SelfUserGame,
                               (UserServantEntity_o *)*p_userSvtEntity,
                               &cachedUserServantNpLvDict,
                               0);
          if ( SameSvtNpLvCache < 1 || this->fields.isTdLvMax )
            goto LABEL_285;
          v197 = SameSvtNpLvCache;
          SelfUserGame = CombineServantListViewItem__GetNpInfo(this, &tdLv[1], tdLv, &tdMaxLv, v196);
          if ( v261 )
          {
            v198 = *(_QWORD *)(v261 + 96);
            if ( v198 > 1200000 )
            {
              this->fields.isSameSvt = 1;
              goto LABEL_285;
            }
            SelfUserGame = (__int64)*p_userSvtEntity;
            v266 = v93;
            if ( *p_userSvtEntity )
            {
              v252 = UserServantEntity__checkTreasureDeviceLevelUp((UserServantEntity_o *)SelfUserGame, v197, 0);
              v253 = tdLv[0];
              if ( tdLv[0] >= v252 )
              {
                v256 = 0;
LABEL_451:
                v258 = v198 < v256;
                v92 = v269;
                v93 = v266;
                v259 = !v258;
                this->fields.isSameSvt = v259;
                goto LABEL_285;
              }
              v254 = tdLv[1];
              v255 = v252;
              v256 = 0;
              while ( 1 )
              {
                SelfUserGame = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( !SelfUserGame )
                  break;
                SelfUserGame = (__int64)DataManager__GetMasterData_object_(
                                          (DataManager_o *)SelfUserGame,
                                          (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
                if ( !SelfUserGame )
                  break;
                v257 = TreasureDvcLvMaster__GetEntity((TreasureDvcLvMaster_o *)SelfUserGame, v254, v253, 0);
                if ( v257 )
                  v256 += v257->fields.qp;
                if ( v255 == ++v253 )
                  goto LABEL_451;
              }
            }
          }
        }
      }
    }
    goto LABEL_455;
  }
LABEL_285:
  v173 = this->fields.type;
  if ( v173 != 5 )
    goto LABEL_343;
  this->fields.isMaterialSvt = v93;
  SelfUserGame = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_455;
  SelfUserGame = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)SelfUserGame,
                            (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_UserServantLeaderMaster___);
  if ( !SelfUserGame )
    goto LABEL_455;
  SelfUserGame = *(_QWORD *)(SelfUserGame + 40);
  if ( !SelfUserGame )
    goto LABEL_455;
  v175 = System_Collections_ObjectModel_Collection_object___GetEnumerator(
           (System_Collections_ObjectModel_Collection_T__o *)SelfUserGame,
           (const MethodInfo_34CD418 *)Method_System_Collections_ObjectModel_Collection_UserServantLeaderEntity__GetEnumerator__);
  if ( !v175 )
    sub_1D0F30C(0, v174);
  while ( 1 )
  {
    v176 = v175->klass;
    v177 = *(unsigned __int16 *)&v175->klass->_2.rank;
    if ( *(_WORD *)&v175->klass->_2.rank )
    {
      v178 = &v176->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)v178 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v177;
        v178 += 4;
        if ( !v177 )
          goto LABEL_294;
      }
      v179 = (__int64)&v176->vtable[*v178];
    }
    else
    {
LABEL_294:
      v179 = sub_1CE5430(v175, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v179)(
            v175,
            *(_QWORD *)(v179 + 8))
        & 1) == 0 )
      break;
    v180 = v175->klass;
    v181 = *(unsigned __int16 *)&v175->klass->_2.rank;
    if ( *(_WORD *)&v175->klass->_2.rank )
    {
      v182 = &v180->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_UserServantLeaderEntity__c **)v182 - 1) != System_Collections_Generic_IEnumerator_UserServantLeaderEntity__TypeInfo )
      {
        --v181;
        v182 += 4;
        if ( !v181 )
          goto LABEL_301;
      }
      v183 = (__int64)&v180->vtable[*v182];
    }
    else
    {
LABEL_301:
      v183 = sub_1CE5430(v175, System_Collections_Generic_IEnumerator_UserServantLeaderEntity__TypeInfo, 0);
    }
    v184 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v183)(
             v175,
             *(_QWORD *)(v183 + 8));
    if ( !v184 )
      sub_1D0F30C(0, v185);
    v186 = (UserServantEntity_o *)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      sub_1D0F30C(v184, v185);
    v187 = *(_OWORD *)&v186->fields.id.fields.fakeValue;
    v188 = *(_QWORD *)(v184 + 56);
    *(_OWORD *)&v285.fields.currentCryptoKey = *(_OWORD *)&v186->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v285.fields.fakeValue = v187;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v274 = v285;
    if ( v188 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50334724(&v274, 0) )
    {
      this->fields.isUseSupport = 1;
      break;
    }
  }
  v189 = v175->klass;
  v190 = *(unsigned __int16 *)&v175->klass->_2.rank;
  if ( *(_WORD *)&v175->klass->_2.rank )
  {
    v191 = &v189->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v191 - 1) != System_IDisposable_TypeInfo )
    {
      --v190;
      v191 += 4;
      if ( !v190 )
        goto LABEL_313;
    }
    v192 = (__int64)&v189->vtable[*v191];
  }
  else
  {
LABEL_313:
    v192 = sub_1CE5430(v175, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v192)(v175, *(_QWORD *)(v192 + 8));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  SelfUserGame = (__int64)DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_UserRecommendSupportMaster___);
  v199 = (UserServantEntity_o *)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_455;
  v200 = *(_OWORD *)&v199->fields.id.fields.fakeValue;
  v201 = (UserRecommendSupportMaster_o *)SelfUserGame;
  *(_OWORD *)&v285.fields.currentCryptoKey = *(_OWORD *)&v199->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v285.fields.fakeValue = v200;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v273 = v285;
  SelfUserGame = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50334724(&v273, 0);
  if ( !v201 )
    goto LABEL_455;
  this->fields.isUseRecommendSupport = UserRecommendSupportMaster__IsSettingServant(v201, SelfUserGame, 0, 0);
  v202 = DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_UserServantGrandMaster___);
  v203 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  v204 = (UserServantGrandMaster_o *)v202;
  *(_OWORD *)&v272.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v272.fields.fakeValue = v203;
  SelfUserGame = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50334724(&v272, 0);
  if ( !v204 )
    goto LABEL_455;
  this->fields.isGrandSvt = UserServantGrandMaster__IsSettingServant(v204, SelfUserGame, 0);
  v205 = v267 && UserServantEntity__IsEventJoin(v267, 0);
  v92 = v269;
  SelfUserGame = (__int64)this->fields.userSvtEntity;
  this->fields.isEventJoinBaseSvt = v205;
  if ( !SelfUserGame )
    goto LABEL_455;
  IsMaterialTd = UserServantEntity__IsMaterialTd((UserServantEntity_o *)SelfUserGame, 0);
  v173 = this->fields.type;
  this->fields.isMaterialTdSvt = IsMaterialTd;
LABEL_343:
  if ( v173 == 6 )
  {
    SelfUserGame = (__int64)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_455;
    SelfUserGame = UserServantEntity__isExceedLvMax((UserServantEntity_o *)SelfUserGame, 0);
    v207 = this->fields.userSvtEntity;
    this->fields.isLvExceedMax = SelfUserGame & 1;
    if ( !v207 )
      goto LABEL_455;
    SelfUserGame = UserServantEntity__isLimitCountMax(v207, 0);
    v208 = this->fields.userSvtEntity;
    this->fields.isLimitCntMax = SelfUserGame & 1;
    if ( !v208 )
      goto LABEL_455;
    isLevelMax = UserServantEntity__isLevelMax(v208, 0);
    v210 = this->fields.isHeroineSvt;
    this->fields.isLvMax = isLevelMax;
    if ( !v210 || UserServantEntity__IsUseLevelExceedItemHeroine(userSvtEntity, 0) )
    {
      SelfUserGame = (__int64)*p_userSvtEntity;
      if ( !*p_userSvtEntity )
        goto LABEL_455;
      SvtExceedEnt = UserServantEntity__getSvtExceedEnt((UserServantEntity_o *)SelfUserGame, 0);
      if ( SvtExceedEnt )
      {
        v212 = (int32_t *)SvtExceedEnt;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        SelfUserGame = (__int64)DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_CommonConsumeMaster___);
        if ( !SelfUserGame )
          goto LABEL_455;
        IdEntityList = CommonConsumeMaster__GetIdEntityList((CommonConsumeMaster_o *)SelfUserGame, v212[12], 0);
        if ( IdEntityList )
        {
          v214 = IdEntityList;
          v215 = (System_Collections_Generic_HashSet_int__o *)sub_1D0F300(System_Collections_Generic_HashSet_int__TypeInfo);
          System_Collections_Generic_HashSet_int____ctor(
            v215,
            (const MethodInfo_3800770 *)Method_System_Collections_Generic_HashSet_int___ctor__);
          v216 = (System_Collections_Generic_HashSet_int__o *)sub_1D0F300(System_Collections_Generic_HashSet_int__TypeInfo);
          System_Collections_Generic_HashSet_int____ctor(
            v216,
            (const MethodInfo_3800770 *)Method_System_Collections_Generic_HashSet_int___ctor__);
          v217 = v214->max_length;
          if ( v217 >= 1 )
          {
            v218 = 0;
            while ( (unsigned int)v218 < v217 )
            {
              v219 = v214->m_Items[v218];
              if ( !v219 )
                goto LABEL_455;
              if ( !v215 )
                goto LABEL_455;
              SelfUserGame = System_Collections_Generic_HashSet_int___Add(
                               v215,
                               v219->fields.objectId,
                               (const MethodInfo_3801974 *)Method_System_Collections_Generic_HashSet_int__Add__);
              if ( !v216 )
                goto LABEL_455;
              SelfUserGame = System_Collections_Generic_HashSet_int___Add(
                               v216,
                               v219->fields.num,
                               (const MethodInfo_3801974 *)Method_System_Collections_Generic_HashSet_int__Add__);
              v217 = v214->max_length;
              if ( (int)++v218 >= v217 )
                goto LABEL_362;
            }
LABEL_462:
            sub_1D0F314(SelfUserGame);
          }
LABEL_362:
          v92 = v269;
          if ( v212[13] >= 1 )
          {
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            SelfUserGame = (__int64)DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_SvtCoinMaster___);
            v220 = (UserServantEntity_o *)*p_userSvtEntity;
            if ( *p_userSvtEntity )
            {
              v221 = (DataMasterBase_TMaster__TEntity__PKType__o *)SelfUserGame;
              v223 = *(_QWORD *)&v220->fields.svtId.fields.currentCryptoKey;
              v222 = *(_QWORD *)&v220->fields.svtId.fields.fakeValue;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v304.fields.currentCryptoKey = v223;
              *(_QWORD *)&v304.fields.fakeValue = v222;
              SelfUserGame = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v304, 0);
              if ( v221 )
              {
                SelfUserGame = (__int64)DataMasterBase_object__object__int___GetEntity(
                                          v221,
                                          SelfUserGame,
                                          (const MethodInfo_3535B7C *)Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__GetEntity__);
                if ( SelfUserGame )
                {
                  if ( v215 )
                  {
                    SelfUserGame = System_Collections_Generic_HashSet_int___Add(
                                     v215,
                                     *(_DWORD *)(SelfUserGame + 24),
                                     (const MethodInfo_3801974 *)Method_System_Collections_Generic_HashSet_int__Add__);
                    if ( v216 )
                    {
                      System_Collections_Generic_HashSet_int___Add(
                        v216,
                        v212[13],
                        (const MethodInfo_3801974 *)Method_System_Collections_Generic_HashSet_int__Add__);
                      goto LABEL_373;
                    }
                  }
                }
              }
            }
            goto LABEL_455;
          }
LABEL_373:
          v224 = (UserServantEntity_o *)*p_userSvtEntity;
          v225 = System_Linq_Enumerable__ToArray_int_(
                   (System_Collections_Generic_IEnumerable_TSource__o *)v215,
                   (const MethodInfo_328FC50 *)Method_System_Linq_Enumerable_ToArray_int___);
          SelfUserGame = (__int64)System_Linq_Enumerable__ToArray_int_(
                                    (System_Collections_Generic_IEnumerable_TSource__o *)v216,
                                    (const MethodInfo_328FC50 *)Method_System_Linq_Enumerable_ToArray_int___);
          if ( !v261 )
            goto LABEL_455;
          this->fields.isLvExceedItemNum = CombineUtility__CheckCombineNeedItemsEnough(
                                             v224,
                                             v225,
                                             (System_Int32_array *)SelfUserGame,
                                             *(_QWORD *)(v261 + 96),
                                             v212[8],
                                             0);
        }
      }
    }
  }
  if ( this->fields.type == 8 )
  {
    SelfUserGame = (__int64)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_455;
    this->fields.isFriendshipExceedMax = UserServantEntity__isExceedFriendshipMax(
                                           (UserServantEntity_o *)SelfUserGame,
                                           0);
    v226 = *(_QWORD *)&v92->fields.friendshipRank.fields.currentCryptoKey;
    v227 = *(_QWORD *)&v92->fields.friendshipRank.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v305.fields.currentCryptoKey = v226;
    *(_QWORD *)&v305.fields.fakeValue = v227;
    SelfUserGame = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v305, 0);
    v228 = *p_servantEntity;
    if ( !*p_servantEntity )
      goto LABEL_455;
    v229 = (_DWORD)SelfUserGame == v92->fields.friendshipExceedCount + v228->fields.maxFriendshipRank;
    this->fields.isFriendshipRankMax = v229;
    if ( v229 && !this->fields.isFriendshipExceedMax )
    {
      if ( this->fields.isHeroineSvt )
      {
        SelfUserGame = UserServantEntity__IsUseFriendshipExceedItemHeroine(userSvtEntity, 0);
        if ( (SelfUserGame & 1) == 0 )
          goto LABEL_383;
        v228 = *p_servantEntity;
        if ( !*p_servantEntity )
          goto LABEL_455;
      }
      maxFriendshipRank = v228->fields.maxFriendshipRank;
      friendshipExceedCount = v92->fields.friendshipExceedCount;
      SelfUserGame = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !SelfUserGame )
        goto LABEL_455;
      SelfUserGame = (__int64)DataManager__GetMasterData_object_(
                                (DataManager_o *)SelfUserGame,
                                (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_FriendshipMaster___);
      if ( !*p_servantEntity )
        goto LABEL_455;
      if ( !SelfUserGame )
        goto LABEL_455;
      SelfUserGame = (__int64)FriendshipMaster__GetEntity(
                                (FriendshipMaster_o *)SelfUserGame,
                                (*p_servantEntity)->fields.friendshipId,
                                maxFriendshipRank + friendshipExceedCount + 1,
                                0);
      if ( !SelfUserGame )
        goto LABEL_455;
      v246 = *(_QWORD *)(SelfUserGame + 32);
      v245 = *(_QWORD *)(SelfUserGame + 40);
      v247 = SelfUserGame;
      SelfUserGame = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !SelfUserGame )
        goto LABEL_455;
      SelfUserGame = (__int64)DataManager__GetMasterData_object_(
                                (DataManager_o *)SelfUserGame,
                                (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_UserItemMaster___);
      if ( !v245 )
        goto LABEL_455;
      if ( *(int *)(v245 + 24) < 1 )
      {
LABEL_434:
        if ( !v261 )
          goto LABEL_455;
        if ( *(_QWORD *)(v261 + 96) < *(int *)(v247 + 28) )
          this->fields.isFriendshipExceedItemNum = 0;
        goto LABEL_383;
      }
      v248 = (UserItemMaster_o *)SelfUserGame;
      v249 = 0;
      v250 = v245 + 32;
      while ( 1 )
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4E710BF )
        {
          sub_1D0F0B4(&NetworkManager_TypeInfo);
          byte_4E710BF = 1;
        }
        SelfUserGame = (__int64)NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          SelfUserGame = (__int64)NetworkManager_TypeInfo;
        }
        if ( v249 >= *(unsigned int *)(v245 + 24) )
          goto LABEL_462;
        if ( !v248 )
          goto LABEL_455;
        SelfUserGame = UserItemMaster__TryGetEntity(
                         v248,
                         &v286,
                         *(_QWORD *)(*(_QWORD *)(SelfUserGame + 184) + 64LL),
                         *(_DWORD *)(v250 + 4 * v249),
                         0);
        if ( (SelfUserGame & 1) == 0 )
          break;
        if ( v249 >= *(unsigned int *)(v245 + 24) )
          goto LABEL_462;
        if ( !v286 )
          goto LABEL_455;
        if ( *(_DWORD *)(v250 + 4 * v249) == v286->fields.itemId )
        {
          if ( !v246 )
            goto LABEL_455;
          if ( v249 >= *(unsigned int *)(v246 + 24) )
            goto LABEL_462;
          v251 = *(_DWORD *)(v246 + 32 + 4 * v249) <= v286->fields.num;
          goto LABEL_432;
        }
LABEL_433:
        if ( (__int64)++v249 >= *(int *)(v245 + 24) )
          goto LABEL_434;
      }
      v251 = 0;
LABEL_432:
      this->fields.isFriendshipExceedItemNum = v251;
      goto LABEL_433;
    }
  }
LABEL_383:
  v230 = UserServantEntity__get_IsSaveTransformServant(userSvtEntity, 0)
      && !UserServantEntity__CheckBaseServant(userSvtEntity, -1, 0);
  this->fields.isTransformed = v230;
  SelfUserGame = UserServantEntity__GetDispLimitCountStageSealAfterIndexZero(userSvtEntity, -1, 0, 0);
  v231 = this->fields.userSvtEntity;
  this->fields.dispLimitCount = SelfUserGame;
  if ( !v231 )
    goto LABEL_455;
  SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v231, -1, SelfUserGame, 0);
  this->fields.skillCategoryIdList = SkillCategoryIdList;
  sub_1D0F058(&this->fields.skillCategoryIdList, SkillCategoryIdList);
  SelfUserGame = (__int64)this->fields.userSvtEntity;
  if ( !SelfUserGame )
    goto LABEL_455;
  TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                   (UserServantEntity_o *)SelfUserGame,
                                   0,
                                   this->fields.dispLimitCount,
                                   0);
  this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
  sub_1D0F058(&this->fields.tdCategoryIdList, TreasureDeviceCategoryIdList);
  SelfUserGame = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_455;
  SelfUserGame = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)SelfUserGame,
                            (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !SelfUserGame )
    goto LABEL_455;
  SelfUserGame = (__int64)DataMasterBase_object__object__int___GetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)SelfUserGame,
                            this->fields.classId,
                            (const MethodInfo_3535B7C *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !SelfUserGame )
    goto LABEL_455;
  v234 = *(int *)(SelfUserGame + 52);
  SelfUserGame = (__int64)this->fields.userSvtEntity;
  this->fields.priority = v234;
  this->fields.sortValue1B = v234;
  if ( !SelfUserGame )
    goto LABEL_455;
  rarity = (unsigned int)this->fields.rarity;
  SelfUserGame = (__int64)UserServantEntity__get_BaseServantEntity((UserServantEntity_o *)SelfUserGame, 0);
  if ( !SelfUserGame )
    goto LABEL_455;
  v236 = (UserServantEntity_o *)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_455;
  v237 = type == 2 && !this->fields.isLimitCntMax;
  this->fields.sortValue2 = ((__int64)*(int *)(SelfUserGame + 208) << 16) | (rarity << 48) | v236->fields.lv | v237;
  v239 = *(_QWORD *)&v236->fields.svtId.fields.currentCryptoKey;
  v238 = *(_QWORD *)&v236->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v306.fields.currentCryptoKey = v239;
  *(_QWORD *)&v306.fields.fakeValue = v238;
  SelfUserGame = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v306, 0);
  v240 = this->fields.userSvtEntity;
  this->fields.sortValue2B = (int)SelfUserGame;
  if ( !v240 )
    goto LABEL_455;
  v241 = *(_OWORD *)&v240->fields.id.fields.fakeValue;
  *(_OWORD *)&v285.fields.currentCryptoKey = *(_OWORD *)&v240->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v285.fields.fakeValue = v241;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v271 = v285;
  v242 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50334724(&v271, 0);
  SelfUserGame = (__int64)this->fields.iconLabelInfo1;
  this->fields.sortValueLast = v242;
  this->fields.amountSortValue = -1;
  if ( !SelfUserGame )
    goto LABEL_455;
  IconLabelInfo__Clear((IconLabelInfo_o *)SelfUserGame, 0);
  SelfUserGame = (__int64)*p_iconLabelInfo2;
  if ( !*p_iconLabelInfo2 )
    goto LABEL_455;
  IconLabelInfo__Clear((IconLabelInfo_o *)SelfUserGame, 0);
}


void CombineServantListViewItem__Finalize(CombineServantListViewItem_o *this, const MethodInfo *method)
{
  ListViewItem__Finalize((ListViewItem_o *)this, 0);
}


SvtUseSkillData_o *CombineServantListViewItem__GetAppendSkillData(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0
  SvtUseSkillData_o *v5; // x19

  if ( (byte_4E713EF & 1) == 0 )
  {
    sub_1D0F0B4(&SvtUseSkillData_TypeInfo);
    byte_4E713EF = 1;
  }
  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
    return UserServantEntity__getAppendSkillInfo(userSvtEntity, 0);
  v5 = (SvtUseSkillData_o *)sub_1D0F300(SvtUseSkillData_TypeInfo);
  SvtUseSkillData___ctor(v5, 0);
  return v5;
}


bool CombineServantListViewItem__GetNpInfo(
        CombineServantListViewItem_o *this,
        int32_t *tdId,
        int32_t *tdLv,
        int32_t *tdMaxLv,
        const MethodInfo *method)
{
  struct UserServantEntity_o *userSvtEntity; // x20
  _BOOL8 TreasureDeviceInfo; // x0
  __int64 v10; // x1
  TreasureDvcInfo_o *v11; // x8
  int32_t maxLv; // w8
  TreasureDvcInfo_o *tdInfo; // [xsp+8h] [xbp-28h] BYREF

  tdInfo = 0;
  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
  {
    TreasureDeviceInfo = UserServantEntity__getTreasureDeviceInfo(this->fields.userSvtEntity, &tdInfo, -1, -1, 0, 0);
    v11 = tdInfo;
    if ( !tdInfo )
      sub_1D0F30C(TreasureDeviceInfo, v10);
    *tdId = tdInfo->fields.id;
    *tdLv = v11->fields.lv;
    maxLv = v11->fields.maxLv;
  }
  else
  {
    maxLv = 0;
    *tdId = 0;
    *tdLv = 0;
  }
  *tdMaxLv = maxLv;
  return userSvtEntity != 0;
}


bool CombineServantListViewItem__GetSealCombineLimit(CombineServantListViewItem_o *this, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v4; // x1
  struct ServantEntity_o *servantEntity; // x8
  int32_t combineLimitId; // w2
  int32_t condTargetId; // w19
  int32_t condType; // w21
  int64_t condNum; // x20
  CombineLimitReleaseEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4E713F0 & 1) == 0 )
  {
    sub_1D0F0B4(&CondType_TypeInfo);
    sub_1D0F0B4(&Method_DataManager_GetMaster_CombineLimitReleaseMaster___);
    sub_1D0F0B4(&DataManager_TypeInfo);
    byte_4E713F0 = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_CombineLimitReleaseMaster___);
  servantEntity = this->fields.servantEntity;
  if ( !servantEntity )
    goto LABEL_18;
  combineLimitId = servantEntity->fields.combineLimitId;
  if ( this->fields.type != 9 )
  {
    if ( Master_object )
    {
      Master_object = (Il2CppObject *)CombineLimitReleaseMaster__TryGetEntity(
                                        (CombineLimitReleaseMaster_o *)Master_object,
                                        &entity,
                                        combineLimitId,
                                        this->fields.currentLimitCnt + 1,
                                        0);
      if ( ((unsigned __int8)Master_object & 1) == 0 )
        return 0;
      if ( entity )
      {
        condType = entity->fields.condType;
        condTargetId = entity->fields.condTargetId;
        condNum = entity->fields.condNum;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        return !CondType__IsOpen(condType, condTargetId, condNum, 0, 0, 0);
      }
    }
LABEL_18:
    sub_1D0F30C(Master_object, v4);
  }
  if ( !Master_object )
    goto LABEL_18;
  return CombineLimitReleaseMaster__IsExistSealedLimitCount(
           (CombineLimitReleaseMaster_o *)Master_object,
           combineLimitId,
           0);
}


bool CombineServantListViewItem__GetSkillInfo(
        CombineServantListViewItem_o *this,
        SkillInfo_array **skillInfoList,
        const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x20
  BalanceConfig_c *v6; // x0
  SkillInfo_array *v7; // x0

  if ( (byte_4E713EE & 1) == 0 )
  {
    sub_1D0F0B4(&BalanceConfig_TypeInfo);
    sub_1D0F0B4(&SkillInfo___TypeInfo);
    byte_4E713EE = 1;
  }
  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
  {
    UserServantEntity__getSkillInfo(userSvtEntity, skillInfoList, -1, -1, 1, 0, -1, 0);
  }
  else
  {
    v6 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v6 = BalanceConfig_TypeInfo;
    }
    v7 = (SkillInfo_array *)sub_1D0F15C(SkillInfo___TypeInfo, (unsigned int)v6->static_fields->SvtSkillListMax);
    *skillInfoList = v7;
    sub_1D0F058(skillInfoList, v7);
  }
  return userSvtEntity != 0;
}


void CombineServantListViewItem__InitFlags(CombineServantListViewItem_o *this, const MethodInfo *method)
{
  this->fields.isChoice = 0;
  this->fields.isMaxSelect = 0;
  *(_WORD *)&this->fields.isAllAppendSkillLock = 0;
  this->fields.isLvExceedItemNum = 0;
  this->fields.isCanNotLock = 0;
  *(_WORD *)&this->fields.isEquipedCmdCard = 0;
  *(_DWORD *)&this->fields.isFavorite = 0;
  this->fields.isLvMax = 0;
  *(_DWORD *)&this->fields.isBaseSvt = 0;
  *(_QWORD *)&this->fields.isLimitUpItemNum = 0;
  *(_DWORD *)&this->fields.isAppendSkillLvSame = 0;
  *(_DWORD *)&this->fields.isStatusUpSvt = 0;
  this->fields.isMaterialTdSvt = 0;
  *(_DWORD *)&this->fields.isBaseLvMax = 0;
  this->fields.isGrandSvt = 0;
  *(_QWORD *)&this->fields.isAtkUpMax = 0;
  *(_DWORD *)&this->fields.isNotSelectSecondStatusUpAtk = 0;
}


bool CombineServantListViewItem__IsCanNotSelectSecondStatusMaterial(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isStatusUpSvt
      && this->fields.rarity >= 4
      && (this->fields.hpBase >= 1 && !this->fields.isHpUpMax || this->fields.atkBase >= 1 && !this->fields.isAtkUpMax);
}


bool CombineServantListViewItem__IsMatchBaseServantFilter(
        CombineServantListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  FilterKindList_c *v5; // x0
  System_Int32Enum_array *ClassGroupFilterKindList; // x0
  FilterKindList_c *v7; // x0
  ListViewSort_FilterKind_array *v8; // x0
  FilterKindList_c *v9; // x0
  ListViewSort_FilterKind_array *v10; // x0
  FilterKindList_c *v11; // x0
  ListViewSort_FilterKind_array *v12; // x0
  FilterKindList_c *v13; // x0
  ListViewSort_FilterKind_array *v14; // x0
  UserServantEntity_o *userSvtEntity; // x21
  const MethodInfo *v16; // x1
  _BOOL4 isChoice; // w8
  FilterKindList_c *v18; // x0
  ListViewSort_FilterKind_array *v19; // x21
  _BOOL4 IsUnSelectedAllTargetFilters; // w21
  _BOOL4 v22; // w23
  _BOOL4 IsMatchEffectCategory; // w22
  _BOOL4 v24; // w0

  if ( (byte_4E713E3 & 1) == 0 )
  {
    sub_1D0F0B4(&FilterKindList_TypeInfo);
    sub_1D0F0B4(&ListViewSort_FilterKind___TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    sub_1D0F0B4(&ServantEventBonusFilterController_TypeInfo);
    byte_4E713E3 = 1;
  }
  v5 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v5 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Int32Enum_array *)v5->static_fields->ClassGroupFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_63;
  ClassGroupFilterKindList = System_Collections_Generic_List_Int32Enum___ToArray(
                               (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                               (const MethodInfo_39436D0 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_63;
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0) )
  {
    v7 = FilterKindList_TypeInfo;
    if ( !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
      v7 = FilterKindList_TypeInfo;
    }
    ClassGroupFilterKindList = (System_Int32Enum_array *)v7->static_fields->ClassFilterKindList;
    if ( !ClassGroupFilterKindList )
      goto LABEL_63;
    v8 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                            (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                            (const MethodInfo_39436D0 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v8, 0)
      && !ListViewSort__IsMatchClassFilter(sort, this->fields.servantEntity, 0) )
    {
      return 0;
    }
  }
  else if ( !ListViewSort__IsMatchClassGroupFilter(sort, this->fields.servantEntity, 0) )
  {
    return 0;
  }
  v9 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v9 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Int32Enum_array *)v9->static_fields->NpTypeFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_63;
  v10 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_39436D0 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v10, 0)
    && !ListViewSort__IsMatchNPTypeFilter(sort, this->fields.userSvtEntity, 0) )
  {
    return 0;
  }
  v11 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v11 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Int32Enum_array *)v11->static_fields->NpEffectFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_63;
  v12 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_39436D0 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v12, 0)
    && !ListViewSort__IsMatchNPEffectFilter(sort, this->fields.userSvtEntity, 0) )
  {
    return 0;
  }
  v13 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v13 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Int32Enum_array *)v13->static_fields->CombineBaseServantFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_63;
  v14 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_39436D0 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v14, 0)
    && !ListViewSort__IsMatchServantStatusFilter(sort, this->fields.userSvtEntity, 0) )
  {
    return 0;
  }
  if ( !ListViewSort__CheckSvtEventBonusFilterDefaultAll(sort, -1, 0) )
  {
    userSvtEntity = this->fields.userSvtEntity;
    if ( !ServantEventBonusFilterController_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantEventBonusFilterController_TypeInfo);
    if ( ServantEventBonusFilterController__IsHideServant(userSvtEntity, sort, -1, 0) )
      return 0;
  }
  if ( !ListViewSort__CheckSvtEquipEffectFilterDefaultAll(sort, 0) )
  {
    CombineServantListViewItem__UpdateCategoryIdList(this, v16);
    ClassGroupFilterKindList = (System_Int32Enum_array *)sub_1D0F15C(ListViewSort_FilterKind___TypeInfo, 1);
    if ( !ClassGroupFilterKindList )
      goto LABEL_63;
    if ( !LODWORD(ClassGroupFilterKindList->max_length) )
      goto LABEL_64;
    ClassGroupFilterKindList->m_Items[0] = 50;
    IsUnSelectedAllTargetFilters = ListViewSort__IsUnSelectedAllTargetFilters(
                                     sort,
                                     (ListViewSort_FilterKind_array *)ClassGroupFilterKindList,
                                     0);
    ClassGroupFilterKindList = (System_Int32Enum_array *)sub_1D0F15C(ListViewSort_FilterKind___TypeInfo, 1);
    if ( !ClassGroupFilterKindList )
      goto LABEL_63;
    if ( !LODWORD(ClassGroupFilterKindList->max_length) )
LABEL_64:
      sub_1D0F314(ClassGroupFilterKindList);
    ClassGroupFilterKindList->m_Items[0] = 51;
    v22 = ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0);
    IsMatchEffectCategory = ServantEquipEffectFilterController__IsMatchEffectCategory(
                              this->fields.tdCategoryIdList,
                              sort,
                              0);
    v24 = ServantEquipEffectFilterController__IsMatchEffectCategory(this->fields.skillCategoryIdList, sort, 0);
    if ( ((IsUnSelectedAllTargetFilters ^ v22) & 1) != 0 )
    {
      if ( IsUnSelectedAllTargetFilters )
      {
        if ( !v24 )
          return 0;
      }
      else if ( !IsMatchEffectCategory )
      {
        return 0;
      }
    }
    else if ( !IsMatchEffectCategory && !v24 )
    {
      return 0;
    }
  }
  if ( !ListViewSort__IsMatchServantAttriFilter(sort, this->fields.userSvtEntity, this->fields.servantEntity, 0)
    || !ListViewSort__IsMatchServantSubAttriFilter(sort, this->fields.userSvtEntity, this->fields.servantEntity, 0) )
  {
    return 0;
  }
  ClassGroupFilterKindList = (System_Int32Enum_array *)sub_1D0F15C(ListViewSort_FilterKind___TypeInfo, 1);
  if ( !ClassGroupFilterKindList )
LABEL_63:
    sub_1D0F30C(ClassGroupFilterKindList, sort);
  if ( !LODWORD(ClassGroupFilterKindList->max_length) )
    goto LABEL_64;
  ClassGroupFilterKindList->m_Items[0] = 39;
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0)
    && ListViewSort__GetFilter(sort, 39, 0) )
  {
    isChoice = !this->fields.isChoice;
    if ( !this->fields.isSwapChoice )
      isChoice = this->fields.isChoice;
    if ( !isChoice )
      return 0;
  }
  v18 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v18 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Int32Enum_array *)v18->static_fields->RarityFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_63;
  v19 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_39436D0 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v19, 0)
      || ListViewSort__IsSelectedAllTargetFilters(sort, v19, 0)
      || ListViewSort__IsMatchRarityFilter(sort, this->fields.rarity, 0);
}


bool CombineServantListViewItem__IsMatchMaterialFilter(
        CombineServantListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  CombineServantListViewItem_o *v4; // x20
  _BOOL4 v5; // w21
  FilterKindList_c *v6; // x0
  ListViewSort_FilterKind_array *v7; // x0
  FilterKindList_c *v8; // x0
  ListViewSort_FilterKind_array *v9; // x0
  FilterKindList_c *v10; // x0
  ListViewSort_FilterKind_array *v11; // x0
  FilterKindList_c *v12; // x0
  ListViewSort_FilterKind_array *v13; // x0
  FilterKindList_c *v14; // x0
  ListViewSort_FilterKind_array *v15; // x0
  UserServantEntity_o *userSvtEntity; // x21
  const MethodInfo *v17; // x1
  _BOOL4 isChoice; // w21
  _BOOL4 IsUnSelectedAllTargetFilters; // w21
  _BOOL4 v20; // w23
  _BOOL4 IsMatchEffectCategory; // w22
  _BOOL4 v22; // w0
  bool v23; // w0
  FilterKindList_c *v25; // x0
  ListViewSort_FilterKind_array *v26; // x21

  v4 = this;
  if ( (byte_4E713E4 & 1) == 0 )
  {
    sub_1D0F0B4(&FilterKindList_TypeInfo);
    sub_1D0F0B4(&ListViewSort_FilterKind___TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    this = (CombineServantListViewItem_o *)sub_1D0F0B4(&ServantEventBonusFilterController_TypeInfo);
    byte_4E713E4 = 1;
  }
  if ( !sort )
    goto LABEL_80;
  v5 = ListViewSort__GetFilter(sort, 28, 0) && v4->fields.isSameClass;
  v6 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v6 = FilterKindList_TypeInfo;
  }
  this = (CombineServantListViewItem_o *)v6->static_fields->ClassGroupFilterKindList;
  if ( !this )
    goto LABEL_80;
  v7 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                          (System_Collections_Generic_List_T__o *)this,
                                          (const MethodInfo_39436D0 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, v7, 0) )
  {
    v8 = FilterKindList_TypeInfo;
    if ( !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
      v8 = FilterKindList_TypeInfo;
    }
    this = (CombineServantListViewItem_o *)v8->static_fields->ClassFilterKindList;
    if ( !this )
      goto LABEL_80;
    v9 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                            (System_Collections_Generic_List_T__o *)this,
                                            (const MethodInfo_39436D0 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, v9, 0) )
    {
      this = (CombineServantListViewItem_o *)sub_1D0F15C(ListViewSort_FilterKind___TypeInfo, 1);
      if ( !this )
        goto LABEL_80;
      if ( !this->fields.sortIndex )
        goto LABEL_81;
      LODWORD(this->fields.sortValue0) = 28;
      if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)this, 0) )
        goto LABEL_22;
    }
    if ( ListViewSort__IsMatchClassFilter(sort, v4->fields.servantEntity, 0) )
      goto LABEL_22;
  }
  else if ( ListViewSort__IsMatchClassGroupFilter(sort, v4->fields.servantEntity, 0) )
  {
    goto LABEL_22;
  }
  if ( !v5 )
    return 0;
LABEL_22:
  v10 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v10 = FilterKindList_TypeInfo;
  }
  this = (CombineServantListViewItem_o *)v10->static_fields->NpTypeFilterKindList;
  if ( !this )
    goto LABEL_80;
  v11 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)this,
                                           (const MethodInfo_39436D0 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v11, 0)
    && !ListViewSort__IsMatchNPTypeFilter(sort, v4->fields.userSvtEntity, 0) )
  {
    return 0;
  }
  v12 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v12 = FilterKindList_TypeInfo;
  }
  this = (CombineServantListViewItem_o *)v12->static_fields->NpEffectFilterKindList;
  if ( !this )
    goto LABEL_80;
  v13 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)this,
                                           (const MethodInfo_39436D0 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v13, 0)
    && !ListViewSort__IsMatchNPEffectFilter(sort, v4->fields.userSvtEntity, 0) )
  {
    return 0;
  }
  v14 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v14 = FilterKindList_TypeInfo;
  }
  this = (CombineServantListViewItem_o *)v14->static_fields->ServantTypeFilterKindList;
  if ( !this )
    goto LABEL_80;
  v15 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)this,
                                           (const MethodInfo_39436D0 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v15, 0)
    && !ListViewSort__IsMatchServantTypeFilter(sort, v4->fields.servantEntity, 0) )
  {
    return 0;
  }
  if ( !ListViewSort__CheckSvtEventBonusFilterDefaultAll(sort, -1, 0) )
  {
    userSvtEntity = v4->fields.userSvtEntity;
    if ( !ServantEventBonusFilterController_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantEventBonusFilterController_TypeInfo);
    if ( ServantEventBonusFilterController__IsHideServant(userSvtEntity, sort, -1, 0) )
      return 0;
  }
  if ( ListViewSort__CheckSvtEquipEffectFilterDefaultAll(sort, 0) )
    goto LABEL_42;
  CombineServantListViewItem__UpdateCategoryIdList(v4, v17);
  this = (CombineServantListViewItem_o *)sub_1D0F15C(ListViewSort_FilterKind___TypeInfo, 1);
  if ( !this )
    goto LABEL_80;
  if ( !this->fields.sortIndex )
    goto LABEL_81;
  LODWORD(this->fields.sortValue0) = 50;
  IsUnSelectedAllTargetFilters = ListViewSort__IsUnSelectedAllTargetFilters(
                                   sort,
                                   (ListViewSort_FilterKind_array *)this,
                                   0);
  this = (CombineServantListViewItem_o *)sub_1D0F15C(ListViewSort_FilterKind___TypeInfo, 1);
  if ( !this )
    goto LABEL_80;
  if ( !this->fields.sortIndex )
    goto LABEL_81;
  LODWORD(this->fields.sortValue0) = 51;
  v20 = ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)this, 0);
  IsMatchEffectCategory = ServantEquipEffectFilterController__IsMatchEffectCategory(
                            v4->fields.tdCategoryIdList,
                            sort,
                            0);
  v22 = ServantEquipEffectFilterController__IsMatchEffectCategory(v4->fields.skillCategoryIdList, sort, 0);
  if ( ((IsUnSelectedAllTargetFilters ^ v20) & 1) != 0 )
  {
    if ( IsUnSelectedAllTargetFilters )
    {
      if ( !v22 )
        return 0;
    }
    else if ( !IsMatchEffectCategory )
    {
      return 0;
    }
  }
  else if ( !IsMatchEffectCategory && !v22 )
  {
    return 0;
  }
LABEL_42:
  if ( !ListViewSort__IsMatchServantAttriFilter(sort, v4->fields.userSvtEntity, v4->fields.servantEntity, 0)
    || !ListViewSort__IsMatchServantSubAttriFilter(sort, v4->fields.userSvtEntity, v4->fields.servantEntity, 0) )
  {
    return 0;
  }
  this = (CombineServantListViewItem_o *)sub_1D0F15C(ListViewSort_FilterKind___TypeInfo, 1);
  if ( !this )
LABEL_80:
    sub_1D0F30C(this, sort);
  if ( !this->fields.sortIndex )
    goto LABEL_81;
  LODWORD(this->fields.sortValue0) = 39;
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)this, 0) )
  {
    this = (CombineServantListViewItem_o *)sub_1D0F15C(ListViewSort_FilterKind___TypeInfo, 1);
    if ( !this )
      goto LABEL_80;
    if ( this->fields.sortIndex )
    {
      LODWORD(this->fields.sortValue0) = 29;
      if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)this, 0) )
        goto LABEL_73;
      goto LABEL_50;
    }
LABEL_81:
    sub_1D0F314(this);
  }
LABEL_50:
  if ( ListViewSort__GetFilter(sort, 39, 0) )
  {
    if ( v4->fields.isSwapChoice )
      isChoice = !v4->fields.isChoice;
    else
      isChoice = v4->fields.isChoice;
  }
  else
  {
    isChoice = 0;
  }
  v23 = !ListViewSort__GetFilter(sort, 29, 0)
     || CombineServantListViewItem__get_IsCanNotSelect(v4, (const MethodInfo *)sort);
  if ( !isChoice && v23 )
    return 0;
LABEL_73:
  v25 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v25 = FilterKindList_TypeInfo;
  }
  this = (CombineServantListViewItem_o *)v25->static_fields->RarityFilterKindList;
  if ( !this )
    goto LABEL_80;
  v26 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)this,
                                           (const MethodInfo_39436D0 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v26, 0)
      || ListViewSort__IsSelectedAllTargetFilters(sort, v26, 0)
      || ListViewSort__IsMatchRarityFilter(sort, v4->fields.rarity, 0);
}


bool CombineServantListViewItem__IsMatchServantFilter(
        CombineServantListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  FilterKindList_c *v5; // x0
  System_Int32Enum_array *ClassGroupFilterKindList; // x0
  FilterKindList_c *v7; // x0
  ListViewSort_FilterKind_array *v8; // x0
  FilterKindList_c *v9; // x0
  ListViewSort_FilterKind_array *v10; // x0
  FilterKindList_c *v11; // x0
  ListViewSort_FilterKind_array *v12; // x0
  UserServantEntity_o *userSvtEntity; // x21
  const MethodInfo *v14; // x1
  _BOOL4 isChoice; // w8
  FilterKindList_c *v16; // x0
  ListViewSort_FilterKind_array *v17; // x21
  _BOOL4 IsUnSelectedAllTargetFilters; // w21
  _BOOL4 v20; // w23
  _BOOL4 IsMatchEffectCategory; // w22
  _BOOL4 v22; // w0

  if ( (byte_4E713E2 & 1) == 0 )
  {
    sub_1D0F0B4(&FilterKindList_TypeInfo);
    sub_1D0F0B4(&ListViewSort_FilterKind___TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    sub_1D0F0B4(&ServantEventBonusFilterController_TypeInfo);
    byte_4E713E2 = 1;
  }
  v5 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v5 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Int32Enum_array *)v5->static_fields->ClassGroupFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_58;
  ClassGroupFilterKindList = System_Collections_Generic_List_Int32Enum___ToArray(
                               (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                               (const MethodInfo_39436D0 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_58;
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0) )
  {
    v7 = FilterKindList_TypeInfo;
    if ( !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
      v7 = FilterKindList_TypeInfo;
    }
    ClassGroupFilterKindList = (System_Int32Enum_array *)v7->static_fields->ClassFilterKindList;
    if ( !ClassGroupFilterKindList )
      goto LABEL_58;
    v8 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                            (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                            (const MethodInfo_39436D0 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v8, 0)
      && !ListViewSort__IsMatchClassFilter(sort, this->fields.servantEntity, 0) )
    {
      return 0;
    }
  }
  else if ( !ListViewSort__IsMatchClassGroupFilter(sort, this->fields.servantEntity, 0) )
  {
    return 0;
  }
  v9 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v9 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Int32Enum_array *)v9->static_fields->NpTypeFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_58;
  v10 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_39436D0 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v10, 0)
    && !ListViewSort__IsMatchNPTypeFilter(sort, this->fields.userSvtEntity, 0) )
  {
    return 0;
  }
  v11 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v11 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Int32Enum_array *)v11->static_fields->NpEffectFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_58;
  v12 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_39436D0 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v12, 0)
    && !ListViewSort__IsMatchNPEffectFilter(sort, this->fields.userSvtEntity, 0) )
  {
    return 0;
  }
  if ( !ListViewSort__CheckSvtEventBonusFilterDefaultAll(sort, -1, 0) )
  {
    userSvtEntity = this->fields.userSvtEntity;
    if ( !ServantEventBonusFilterController_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantEventBonusFilterController_TypeInfo);
    if ( ServantEventBonusFilterController__IsHideServant(userSvtEntity, sort, -1, 0) )
      return 0;
  }
  if ( !ListViewSort__CheckSvtEquipEffectFilterDefaultAll(sort, 0) )
  {
    CombineServantListViewItem__UpdateCategoryIdList(this, v14);
    ClassGroupFilterKindList = (System_Int32Enum_array *)sub_1D0F15C(ListViewSort_FilterKind___TypeInfo, 1);
    if ( !ClassGroupFilterKindList )
      goto LABEL_58;
    if ( !LODWORD(ClassGroupFilterKindList->max_length) )
      goto LABEL_59;
    ClassGroupFilterKindList->m_Items[0] = 50;
    IsUnSelectedAllTargetFilters = ListViewSort__IsUnSelectedAllTargetFilters(
                                     sort,
                                     (ListViewSort_FilterKind_array *)ClassGroupFilterKindList,
                                     0);
    ClassGroupFilterKindList = (System_Int32Enum_array *)sub_1D0F15C(ListViewSort_FilterKind___TypeInfo, 1);
    if ( !ClassGroupFilterKindList )
      goto LABEL_58;
    if ( !LODWORD(ClassGroupFilterKindList->max_length) )
LABEL_59:
      sub_1D0F314(ClassGroupFilterKindList);
    ClassGroupFilterKindList->m_Items[0] = 51;
    v20 = ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0);
    IsMatchEffectCategory = ServantEquipEffectFilterController__IsMatchEffectCategory(
                              this->fields.tdCategoryIdList,
                              sort,
                              0);
    v22 = ServantEquipEffectFilterController__IsMatchEffectCategory(this->fields.skillCategoryIdList, sort, 0);
    if ( ((IsUnSelectedAllTargetFilters ^ v20) & 1) != 0 )
    {
      if ( IsUnSelectedAllTargetFilters )
      {
        if ( !v22 )
          return 0;
      }
      else if ( !IsMatchEffectCategory )
      {
        return 0;
      }
    }
    else if ( !IsMatchEffectCategory && !v22 )
    {
      return 0;
    }
  }
  if ( !ListViewSort__IsMatchServantAttriFilter(sort, this->fields.userSvtEntity, this->fields.servantEntity, 0)
    || !ListViewSort__IsMatchServantSubAttriFilter(sort, this->fields.userSvtEntity, this->fields.servantEntity, 0) )
  {
    return 0;
  }
  ClassGroupFilterKindList = (System_Int32Enum_array *)sub_1D0F15C(ListViewSort_FilterKind___TypeInfo, 1);
  if ( !ClassGroupFilterKindList )
LABEL_58:
    sub_1D0F30C(ClassGroupFilterKindList, sort);
  if ( !LODWORD(ClassGroupFilterKindList->max_length) )
    goto LABEL_59;
  ClassGroupFilterKindList->m_Items[0] = 39;
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0)
    && ListViewSort__GetFilter(sort, 39, 0) )
  {
    isChoice = !this->fields.isChoice;
    if ( !this->fields.isSwapChoice )
      isChoice = this->fields.isChoice;
    if ( !isChoice )
      return 0;
  }
  v16 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v16 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Int32Enum_array *)v16->static_fields->RarityFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_58;
  v17 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_39436D0 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v17, 0)
      || ListViewSort__IsSelectedAllTargetFilters(sort, v17, 0)
      || ListViewSort__IsMatchRarityFilter(sort, this->fields.rarity, 0);
}


bool CombineServantListViewItem__IsStatusMax(CombineServantListViewItem_o *this, const MethodInfo *method)
{
  if ( !this->fields.isStatusUpSvt )
    return 0;
  if ( this->fields.rarity <= 3 )
  {
    if ( !this->fields.isHpUpMax )
      return this->fields.isAtkUpMax;
    return 1;
  }
  if ( this->fields.isHpSecondUpMax )
    return 1;
  return this->fields.isAtkSecondUpMax;
}


void CombineServantListViewItem__ModifyChoiceItem(CombineServantListViewItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0

  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_1D0F30C(0, method);
  this->fields.isChoice = UserServantEntity__IsChoice(userSvtEntity, 0);
  this->fields.isSwapChoice = 0;
}


// local variable allocation has failed, the output may be wrong!
void CombineServantListViewItem__ModifyItem(
        CombineServantListViewItem_o *this,
        bool isFavorite,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x1

  this->fields.isFavorite = isFavorite;
  this->fields.dragSelectNum = -1;
  CombineServantListViewItem__ModifyLockItem(this, (const MethodInfo *)isFavorite);
  CombineServantListViewItem__ModifyChoiceItem(this, v4);
  CombineServantListViewItem__ModifyPushItem(this, v5);
  this->fields.isEventUpVal = 0;
  *(_QWORD *)&this->fields.bonusKind = 1;
}


void CombineServantListViewItem__ModifyLockItem(CombineServantListViewItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0

  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_1D0F30C(0, method);
  this->fields.isLock = UserServantEntity__IsLock(userSvtEntity, 0);
  this->fields.isSwapLock = 0;
}


void CombineServantListViewItem__ModifyPushItem(CombineServantListViewItem_o *this, const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v4; // x1
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v6; // q1
  int64_t pushUserSvtId; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v8; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v9; // [xsp+20h] [xbp-40h]

  if ( (byte_4E713E1 & 1) == 0 )
  {
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4E713E1 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame || (userSvtEntity = this->fields.userSvtEntity) == 0 )
    sub_1D0F30C(SelfUserGame, v4);
  v6 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  pushUserSvtId = SelfUserGame->fields.pushUserSvtId;
  *(_OWORD *)&v9.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v9.fields.fakeValue = v6;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v8 = v9;
  this->fields.isPush = pushUserSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50334724(&v8, 0);
}


void CombineServantListViewItem__SetAppendSkillInfo(CombineServantListViewItem_o *this, const MethodInfo *method)
{
  void *userSvtEntity; // x0
  SvtUseSkillData_o *AppendSkillInfo; // x0
  SvtUseSkillData_o *v5; // x20
  int64_t v6; // x21
  struct System_Int32_array *svtUseSkillIdList; // x8
  __int64 v8; // x26
  unsigned __int64 max_length_low; // x9
  unsigned __int64 v10; // x29
  struct System_Int32_array *v11; // x8
  struct System_Int32_array *svtSkillLvList; // x8
  int v13; // w9
  struct UserServantEntity_o *v14; // x8
  __int64 v15; // x22
  __int64 v16; // x23
  int32_t v17; // w0
  System_Collections_Generic_List_int__o *v18; // x22
  struct System_Int32_array *v19; // x8
  __int64 v20; // x29
  unsigned __int64 v21; // x9
  unsigned __int64 v22; // x26
  struct System_Int32_array *v23; // x8
  int v24; // w23
  struct UserServantEntity_o *v25; // x8
  CombineAppendPassiveSkillMaster_o *v26; // x23
  __int64 v27; // x24
  __int64 v28; // x25
  struct System_Int32_array *svtSkillNumsList; // x8
  struct System_Int32_array *v30; // x9
  struct System_Int32_array *v31; // x8
  __int64 v32; // x8
  _QWORD *v33; // x9
  __int64 v34; // x10
  char *v35; // x8
  struct UserServantEntity_o *v36; // x8
  SvtAppendPassiveSkillUnlockMaster_o *v37; // x23
  __int64 v38; // x24
  __int64 v39; // x25
  struct System_Int32_array *v40; // x8
  struct System_Int32_array *v41; // x8
  struct System_Int32_array *items; // x8
  _QWORD *v43; // x9
  __int64 size; // x10
  __int64 v45; // x8
  CombineAppendPassiveSkillEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v47; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v48; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v49; // 0:x0.16

  if ( (byte_4E713E0 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMaster_CombineAppendPassiveSkillMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMaster_SkillMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMaster_SvtAppendPassiveSkillUnlockMaster___);
    sub_1D0F0B4(&DataManager_TypeInfo);
    sub_1D0F0B4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_Any_int___);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_int__Add__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1D0F0B4(&System_Collections_Generic_List_int__TypeInfo);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4E713E0 = 1;
  }
  entity = 0;
  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_79;
  AppendSkillInfo = UserServantEntity__getAppendSkillInfo((UserServantEntity_o *)userSvtEntity, 0);
  if ( !AppendSkillInfo )
    return;
  v5 = AppendSkillInfo;
  userSvtEntity = UserGameMaster__getSelfUserGame(0);
  if ( !userSvtEntity )
    goto LABEL_79;
  v6 = *((_QWORD *)userSvtEntity + 12);
  this->fields.isAppendSkillLvMax = 1;
  this->fields.isAllAppendSkillLock = 1;
  this->fields.isAppendSkillLvSame = 1;
  svtUseSkillIdList = v5->fields.svtUseSkillIdList;
  if ( !svtUseSkillIdList )
    goto LABEL_79;
  v8 = 8;
  while ( 1 )
  {
    max_length_low = LODWORD(svtUseSkillIdList->max_length);
    v10 = v8 - 8;
    if ( v8 - 8 >= (int)max_length_low )
      break;
    if ( v10 >= max_length_low )
      goto LABEL_82;
    if ( *((int *)&svtUseSkillIdList->obj.klass + v8) >= 1 )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      userSvtEntity = DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_SkillMaster___);
      v11 = v5->fields.svtUseSkillIdList;
      if ( !v11 )
        goto LABEL_79;
      if ( v10 >= LODWORD(v11->max_length) )
        goto LABEL_82;
      if ( !userSvtEntity )
        goto LABEL_79;
      userSvtEntity = DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)userSvtEntity,
                        *((_DWORD *)&v11->obj.klass + v8),
                        (const MethodInfo_3535B7C *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
      svtSkillLvList = v5->fields.svtSkillLvList;
      if ( !svtSkillLvList )
        goto LABEL_79;
      if ( v10 >= LODWORD(svtSkillLvList->max_length) )
LABEL_82:
        sub_1D0F314(userSvtEntity);
      if ( !userSvtEntity )
        goto LABEL_79;
      v13 = *((_DWORD *)&svtSkillLvList->obj.klass + v8);
      if ( v13 < *((_DWORD *)userSvtEntity + 10) && this->fields.isAppendSkillLvMax )
        this->fields.isAppendSkillLvMax = 0;
      if ( v13 >= 1 && this->fields.isAllAppendSkillLock )
        this->fields.isAllAppendSkillLock = 0;
      if ( svtSkillLvList->m_Items[0] != v13 && this->fields.isAppendSkillLvSame )
        this->fields.isAppendSkillLvSame = 0;
    }
    svtUseSkillIdList = v5->fields.svtUseSkillIdList;
    ++v8;
    if ( !svtUseSkillIdList )
      goto LABEL_79;
  }
  v14 = this->fields.userSvtEntity;
  if ( !v14 )
    goto LABEL_79;
  v16 = *(_QWORD *)&v14->fields.svtId.fields.currentCryptoKey;
  v15 = *(_QWORD *)&v14->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v47.fields.currentCryptoKey = v16;
  *(_QWORD *)&v47.fields.fakeValue = v15;
  v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v47, 0);
  this->fields.isAppendSkillExChangeLimit = UserServantAppendPassiveSkillMaster__IsAppendSkillExchangeLimit(v17, 0);
  v18 = (System_Collections_Generic_List_int__o *)sub_1D0F300(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v18,
    (const MethodInfo_393EB98 *)Method_System_Collections_Generic_List_int___ctor__);
  v19 = v5->fields.svtUseSkillIdList;
  if ( !v19 )
LABEL_79:
    sub_1D0F30C(userSvtEntity, method);
  v20 = 8;
  while ( 1 )
  {
    v21 = LODWORD(v19->max_length);
    v22 = v20 - 8;
    if ( v20 - 8 >= (int)v21 )
      break;
    if ( v22 >= v21 )
      goto LABEL_82;
    if ( *((int *)&v19->obj.klass + v20) < 1 )
      goto LABEL_78;
    v23 = v5->fields.svtSkillLvList;
    if ( !v23 )
      goto LABEL_79;
    if ( v22 >= LODWORD(v23->max_length) )
      goto LABEL_82;
    v24 = *((_DWORD *)&v23->obj.klass + v20);
    if ( DataManager_TypeInfo->_2.cctor_finished )
    {
      if ( v24 )
        goto LABEL_42;
    }
    else
    {
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      if ( v24 )
      {
LABEL_42:
        userSvtEntity = DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_CombineAppendPassiveSkillMaster___);
        v25 = this->fields.userSvtEntity;
        if ( !v25 )
          goto LABEL_79;
        v26 = (CombineAppendPassiveSkillMaster_o *)userSvtEntity;
        v28 = *(_QWORD *)&v25->fields.svtId.fields.currentCryptoKey;
        v27 = *(_QWORD *)&v25->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v48.fields.currentCryptoKey = v28;
        *(_QWORD *)&v48.fields.fakeValue = v27;
        userSvtEntity = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v48, 0);
        svtSkillNumsList = v5->fields.svtSkillNumsList;
        if ( !svtSkillNumsList )
          goto LABEL_79;
        if ( v22 >= LODWORD(svtSkillNumsList->max_length) )
          goto LABEL_82;
        v30 = v5->fields.svtSkillLvList;
        if ( !v30 )
          goto LABEL_79;
        if ( v22 >= LODWORD(v30->max_length) )
          goto LABEL_82;
        if ( !v26 )
          goto LABEL_79;
        userSvtEntity = (void *)CombineAppendPassiveSkillMaster__TryGetEntityWithTryNum(
                                  v26,
                                  &entity,
                                  (int32_t)userSvtEntity,
                                  *((_DWORD *)&svtSkillNumsList->obj.klass + v20),
                                  *((_DWORD *)&v30->obj.klass + v20),
                                  0);
        if ( ((unsigned __int8)userSvtEntity & 1) != 0 )
        {
          if ( !entity )
            goto LABEL_79;
          userSvtEntity = (void *)CombineUtility__CheckCombineNeedItemsEnough(
                                    this->fields.userSvtEntity,
                                    entity->fields.itemIds,
                                    entity->fields.itemNums,
                                    v6,
                                    entity->fields.qp,
                                    0);
          if ( ((unsigned __int8)userSvtEntity & 1) != 0 )
          {
            v31 = v5->fields.svtUseSkillIdList;
            if ( !v31 )
              goto LABEL_79;
            if ( v22 >= LODWORD(v31->max_length) )
              goto LABEL_82;
            userSvtEntity = this->fields.enableAppendSkillUp;
            if ( !userSvtEntity )
              goto LABEL_79;
            method = (const MethodInfo *)*((unsigned int *)&v31->obj.klass + v20);
            v32 = *((_QWORD *)userSvtEntity + 2);
            v33 = Method_System_Collections_Generic_List_int__Add__;
            ++*((_DWORD *)userSvtEntity + 7);
            if ( !v32 )
              goto LABEL_79;
            v34 = *((int *)userSvtEntity + 6);
            if ( (unsigned int)v34 >= *(_DWORD *)(v32 + 24) )
            {
              v45 = v33[4];
LABEL_77:
              System_Collections_Generic_List_int___AddWithResize(
                (System_Collections_Generic_List_int__o *)userSvtEntity,
                (int32_t)method,
                *(const MethodInfo_393F3EC **)(*(_QWORD *)(v45 + 192) + 112LL));
              goto LABEL_78;
            }
            v35 = (char *)(v32 + 4 * v34);
            *((_DWORD *)userSvtEntity + 6) = v34 + 1;
LABEL_74:
            *((_DWORD *)v35 + 8) = (_DWORD)method;
            goto LABEL_78;
          }
        }
        goto LABEL_78;
      }
    }
    userSvtEntity = DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_SvtAppendPassiveSkillUnlockMaster___);
    v36 = this->fields.userSvtEntity;
    if ( !v36 )
      goto LABEL_79;
    v37 = (SvtAppendPassiveSkillUnlockMaster_o *)userSvtEntity;
    v39 = *(_QWORD *)&v36->fields.svtId.fields.currentCryptoKey;
    v38 = *(_QWORD *)&v36->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v49.fields.currentCryptoKey = v39;
    *(_QWORD *)&v49.fields.fakeValue = v38;
    userSvtEntity = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v49, 0);
    v40 = v5->fields.svtSkillNumsList;
    if ( !v40 )
      goto LABEL_79;
    if ( v22 >= LODWORD(v40->max_length) )
      goto LABEL_82;
    if ( !v37 )
      goto LABEL_79;
    userSvtEntity = SvtAppendPassiveSkillUnlockMaster__GetEntity(
                      v37,
                      (int32_t)userSvtEntity,
                      *((_DWORD *)&v40->obj.klass + v20),
                      0);
    if ( userSvtEntity )
    {
      userSvtEntity = (void *)CombineUtility__CheckCombineNeedItemsEnough(
                                this->fields.userSvtEntity,
                                *((System_Int32_array **)userSvtEntity + 3),
                                *((System_Int32_array **)userSvtEntity + 4),
                                v6,
                                0,
                                0);
      if ( ((unsigned __int8)userSvtEntity & 1) != 0 )
      {
        v41 = v5->fields.svtUseSkillIdList;
        if ( !v41 )
          goto LABEL_79;
        if ( v22 >= LODWORD(v41->max_length) )
          goto LABEL_82;
        if ( !v18 )
          goto LABEL_79;
        method = (const MethodInfo *)*((unsigned int *)&v41->obj.klass + v20);
        items = v18->fields._items;
        v43 = Method_System_Collections_Generic_List_int__Add__;
        ++v18->fields._version;
        if ( !items )
          goto LABEL_79;
        size = v18->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          v45 = v43[4];
          userSvtEntity = v18;
          goto LABEL_77;
        }
        v35 = (char *)items + 4 * size;
        v18->fields._size = size + 1;
        goto LABEL_74;
      }
    }
LABEL_78:
    v19 = v5->fields.svtUseSkillIdList;
    ++v20;
    if ( !v19 )
      goto LABEL_79;
  }
  this->fields.isAppendSkillUpItemNum = System_Linq_Enumerable__Any_int_(
                                          (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.enableAppendSkillUp,
                                          (const MethodInfo_325CB7C *)Method_System_Linq_Enumerable_Any_int___);
  this->fields.isAppendSkillOpenItemNum = System_Linq_Enumerable__Any_int_(
                                            (System_Collections_Generic_IEnumerable_TSource__o *)v18,
                                            (const MethodInfo_325CB7C *)Method_System_Linq_Enumerable_Any_int___);
}


void CombineServantListViewItem__SetIsCombineExpCampaignTarget(
        CombineServantListViewItem_o *this,
        System_Collections_Generic_List_EventCampaignEntity__o *eventCampaignEntities,
        const MethodInfo *method)
{
  CombineServantListViewItem___c_c *v5; // x0
  System_Predicate_object__o *_9__119_0; // x21
  Il2CppObject *v7; // x22
  struct CombineServantListViewItem___c_StaticFields *static_fields; // x0
  System_Collections_Generic_List_T__o *All; // x0
  __int64 v10; // x1
  int klass; // w22
  _BOOL8 v12; // x0
  __int64 v13; // x1
  Il2CppObject *current; // x24
  UserServantEntity_o *userSvtEntity; // x0
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4E713E6 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Array_IndexOf_int___);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_EventCampaignEntity__FindAll__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    sub_1D0F0B4(&System_Predicate_EventCampaignEntity__TypeInfo);
    sub_1D0F0B4(&Method_CombineServantListViewItem___c__SetIsCombineExpCampaignTarget_b__119_0__);
    sub_1D0F0B4(&CombineServantListViewItem___c_TypeInfo);
    byte_4E713E6 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  this->fields.isCombineExpCampaignTarget = 0;
  this->fields.combineExpCampaignValue = 0.0;
  if ( eventCampaignEntities && !this->fields.type )
  {
    v5 = CombineServantListViewItem___c_TypeInfo;
    if ( !CombineServantListViewItem___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CombineServantListViewItem___c_TypeInfo);
      v5 = CombineServantListViewItem___c_TypeInfo;
    }
    _9__119_0 = (System_Predicate_object__o *)v5->static_fields->__9__119_0;
    if ( !_9__119_0 )
    {
      if ( !v5->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v5);
        v5 = CombineServantListViewItem___c_TypeInfo;
      }
      v7 = (Il2CppObject *)v5->static_fields->__9;
      _9__119_0 = (System_Predicate_object__o *)sub_1D0F300(System_Predicate_EventCampaignEntity__TypeInfo);
      System_Predicate_object____ctor(
        _9__119_0,
        v7,
        Method_CombineServantListViewItem___c__SetIsCombineExpCampaignTarget_b__119_0__,
        0);
      static_fields = CombineServantListViewItem___c_TypeInfo->static_fields;
      static_fields->__9__119_0 = (struct System_Predicate_EventCampaignEntity__o *)_9__119_0;
      sub_1D0F058(&static_fields->__9__119_0, _9__119_0);
    }
    All = System_Collections_Generic_List_object___FindAll(
            (System_Collections_Generic_List_object__o *)eventCampaignEntities,
            (System_Predicate_T__o *)_9__119_0,
            (const MethodInfo_395CB20 *)Method_System_Collections_Generic_List_EventCampaignEntity__FindAll__);
    if ( !All )
      sub_1D0F30C(0, v10);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v16,
      (System_Collections_Generic_List_object__o *)All,
      (const MethodInfo_395CF08 *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    v17 = v16;
    klass = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        v12 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v17,
                (const MethodInfo_36CDF88 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
        if ( !v12 )
        {
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v17,
            (const MethodInfo_36CDF84 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
          this->fields.combineExpCampaignValue = (float)klass / 1000.0;
          return;
        }
        current = v17.fields._current;
        if ( !v17.fields._current )
          sub_1D0F30C(v12, v13);
        if ( HIDWORD(v17.fields._current[1].klass) == 27 )
          break;
        if ( (System_Array__IndexOf_int_(
                (System_Int32_array *)v17.fields._current[2].monitor,
                this->fields.svtId,
                (const MethodInfo_33590E4 *)Method_System_Array_IndexOf_int___)
            & 0x80000000) == 0 )
          goto LABEL_20;
      }
      userSvtEntity = this->fields.userSvtEntity;
      if ( !userSvtEntity )
        sub_1D0F30C(0, v13);
      if ( UserServantEntity__IsExchangeSvt(userSvtEntity, 0) )
      {
LABEL_20:
        this->fields.isCombineExpCampaignTarget = 1;
        if ( SLODWORD(current[3].klass) > klass )
          klass = (int)current[3].klass;
      }
    }
  }
}


void CombineServantListViewItem__SetNoticeTween(
        CombineServantListViewItem_o *this,
        CombineServantListViewNoticeTween_o *noticeTween,
        const MethodInfo *method)
{
  this->fields._NoticeTween_k__BackingField = noticeTween;
  sub_1D0F058(&this->fields._NoticeTween_k__BackingField, noticeTween);
}


void CombineServantListViewItem__SetOverwriteStatus(CombineServantListViewItem_o *this, const MethodInfo *method)
{
  void *userSvtEntity; // x0

  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity
    || (userSvtEntity = UserServantEntity__GetOverwriteStatus((UserServantEntity_o *)userSvtEntity, 0, 0)) == 0 )
  {
    sub_1D0F30C(userSvtEntity, method);
  }
  *(_QWORD *)&this->fields.hp = *((_QWORD *)userSvtEntity + 2);
  this->fields.rarity = *((_DWORD *)userSvtEntity + 6);
  this->fields.actualRarity = *((_DWORD *)userSvtEntity + 10);
  this->fields.cost = *((_DWORD *)userSvtEntity + 7);
}


void CombineServantListViewItem__SetSkillInfo(CombineServantListViewItem_o *this, const MethodInfo *method)
{
  int64_t SelfUserGame; // x0
  __int64 v4; // x1
  UserServantEntity_o *userSvtEntity; // x8
  struct UserServantEntity_o *v6; // x8
  int64_t v7; // x21
  __int64 v8; // x8
  int64_t v9; // x22
  unsigned __int64 v10; // x20
  int32_t v11; // w23
  int v12; // w28
  __int64 v13; // x8
  CombineSkillMaster_o *v14; // x20
  unsigned __int64 v15; // x28
  char v16; // w26
  int32_t v17; // w24
  struct ServantEntity_o *servantEntity; // x8
  CombineSkillMaster_o *v19; // x21
  struct System_Int32_array *itemNums; // x20
  struct System_Int32_array *itemIds; // x27
  int max_length; // w8
  UserItemMaster_o *v23; // x25
  unsigned int v24; // w9
  unsigned int v25; // w29
  struct UserServantEntity_o *v26; // x8
  __int128 v27; // q1
  int32_t v28; // w26
  int32_t v29; // w23
  __int64 v30; // x8
  _QWORD *v31; // x9
  __int64 v32; // x10
  struct System_Collections_Generic_List_int__o *enableSkillUp; // x8
  int64_t v34; // [xsp+0h] [xbp-C0h]
  int64_t v35; // [xsp+8h] [xbp-B8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v36; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v37; // [xsp+30h] [xbp-90h]
  UserItemEntity_o *v38; // [xsp+50h] [xbp-70h] BYREF
  CombineSkillEntity_o *entity; // [xsp+58h] [xbp-68h] BYREF

  if ( (byte_4E713DF & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMasterData_CombineSkillMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1D0F0B4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_int__Add__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4E713DF = 1;
  }
  v38 = 0;
  entity = 0;
  SelfUserGame = (int64_t)UserGameMaster__getSelfUserGame(0);
  userSvtEntity = this->fields.userSvtEntity;
  v35 = SelfUserGame;
  if ( !userSvtEntity )
    goto LABEL_60;
  SelfUserGame = (int64_t)UserServantEntity__getSkillIdList(userSvtEntity, -1, -1, 1, -1, 0);
  v6 = this->fields.userSvtEntity;
  if ( !v6 )
    goto LABEL_60;
  v7 = SelfUserGame;
  SelfUserGame = (int64_t)((int64_t (__fastcall *)(struct UserServantEntity_o *__return_ptr, struct UserServantEntity_o *, const MethodInfo *))v6->klass->vtable._6_getSkillLevelList.methodPtr)(
                            v6,
                            this->fields.userSvtEntity,
                            v6->klass->vtable._6_getSkillLevelList.method);
  this->fields.isSkillLvMax = 1;
  if ( !v7 )
    goto LABEL_60;
  v8 = *(_QWORD *)(v7 + 24);
  v9 = SelfUserGame;
  if ( (int)v8 >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      if ( v10 >= (unsigned int)v8 )
        goto LABEL_61;
      if ( !v9 )
        goto LABEL_60;
      if ( v10 >= *(unsigned int *)(v9 + 24) )
        goto LABEL_61;
      v11 = *(_DWORD *)(v7 + 32 + 4 * v10);
      if ( v11 >= 1 )
      {
        v12 = *(_DWORD *)(v9 + 32 + 4 * v10);
        SelfUserGame = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !SelfUserGame )
          goto LABEL_60;
        SelfUserGame = (int64_t)DataManager__GetMasterData_object_(
                                  (DataManager_o *)SelfUserGame,
                                  (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_SkillMaster___);
        if ( !SelfUserGame )
          goto LABEL_60;
        SelfUserGame = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)SelfUserGame,
                                  v11,
                                  (const MethodInfo_3535B7C *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        if ( !SelfUserGame )
          goto LABEL_60;
        if ( v12 < *(_DWORD *)(SelfUserGame + 40) )
          break;
      }
      LODWORD(v8) = *(_DWORD *)(v7 + 24);
      if ( (__int64)++v10 >= (int)v8 )
        goto LABEL_19;
    }
    this->fields.isSkillLvMax = 0;
  }
LABEL_19:
  SelfUserGame = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_60;
  SelfUserGame = (int64_t)DataManager__GetMasterData_object_(
                            (DataManager_o *)SelfUserGame,
                            (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_CombineSkillMaster___);
  v13 = *(_QWORD *)(v7 + 24);
  if ( (int)v13 >= 1 )
  {
    v14 = (CombineSkillMaster_o *)SelfUserGame;
    v15 = 0;
    v16 = 0;
    v34 = v7;
    while ( v15 < (unsigned int)v13 )
    {
      if ( !v9 )
        goto LABEL_60;
      if ( v15 >= *(unsigned int *)(v9 + 24) )
        break;
      v17 = *(_DWORD *)(v7 + 4 * v15 + 32);
      if ( v17 >= 1 )
      {
        servantEntity = this->fields.servantEntity;
        if ( !servantEntity || !v14 )
          goto LABEL_60;
        SelfUserGame = CombineSkillMaster__TryGetEntity(
                         v14,
                         &entity,
                         servantEntity->fields.combineSkillId,
                         *(_DWORD *)(v9 + 4 * v15 + 32),
                         0);
        if ( (SelfUserGame & 1) != 0 )
        {
          if ( !entity )
            goto LABEL_60;
          v19 = v14;
          itemIds = entity->fields.itemIds;
          itemNums = entity->fields.itemNums;
          SelfUserGame = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !SelfUserGame )
            goto LABEL_60;
          SelfUserGame = (int64_t)DataManager__GetMasterData_object_(
                                    (DataManager_o *)SelfUserGame,
                                    (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_UserItemMaster___);
          if ( !itemIds )
            goto LABEL_60;
          max_length = itemIds->max_length;
          if ( max_length >= 1 )
          {
            v23 = (UserItemMaster_o *)SelfUserGame;
            v24 = 0;
            while ( 1 )
            {
              if ( v24 >= max_length )
                goto LABEL_61;
              if ( !itemNums )
                goto LABEL_60;
              v25 = v24;
              if ( v24 >= LODWORD(itemNums->max_length) )
                goto LABEL_61;
              v26 = this->fields.userSvtEntity;
              if ( !v26 )
                goto LABEL_60;
              v27 = *(_OWORD *)&v26->fields.userId.fields.fakeValue;
              v28 = itemIds->m_Items[v24];
              v29 = itemNums->m_Items[v24];
              *(_OWORD *)&v37.fields.currentCryptoKey = *(_OWORD *)&v26->fields.userId.fields.currentCryptoKey;
              *(_OWORD *)&v37.fields.fakeValue = v27;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
              v36 = v37;
              SelfUserGame = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50334724(&v36, 0);
              if ( !v23 )
                goto LABEL_60;
              SelfUserGame = UserItemMaster__TryGetEntity(v23, &v38, SelfUserGame, v28, 0);
              if ( (SelfUserGame & 1) == 0 )
                break;
              if ( !v38 )
                goto LABEL_60;
              if ( v29 > v38->fields.num )
                break;
              max_length = itemIds->max_length;
              v24 = v25 + 1;
              if ( (int)(v25 + 1) >= max_length )
              {
                v16 = 1;
                goto LABEL_47;
              }
            }
            v16 = 0;
          }
LABEL_47:
          if ( !v35 || !entity )
            goto LABEL_60;
          v14 = v19;
          v7 = v34;
          if ( *(_QWORD *)(v35 + 96) < entity->fields.qp || (v16 & 1) == 0 )
          {
            v16 = 0;
          }
          else
          {
            SelfUserGame = (int64_t)this->fields.enableSkillUp;
            if ( !SelfUserGame )
              goto LABEL_60;
            v30 = *(_QWORD *)(SelfUserGame + 16);
            v31 = Method_System_Collections_Generic_List_int__Add__;
            ++*(_DWORD *)(SelfUserGame + 28);
            if ( !v30 )
              goto LABEL_60;
            v32 = *(int *)(SelfUserGame + 24);
            if ( (unsigned int)v32 >= *(_DWORD *)(v30 + 24) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                (System_Collections_Generic_List_int__o *)SelfUserGame,
                v17,
                *(const MethodInfo_393F3EC **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
            }
            else
            {
              *(_DWORD *)(SelfUserGame + 24) = v32 + 1;
              *(_DWORD *)(v30 + 4 * v32 + 32) = v17;
            }
            v16 = 1;
          }
        }
      }
      LODWORD(v13) = *(_DWORD *)(v7 + 24);
      if ( (__int64)++v15 >= (int)v13 )
        goto LABEL_58;
    }
LABEL_61:
    sub_1D0F314(SelfUserGame);
  }
LABEL_58:
  enableSkillUp = this->fields.enableSkillUp;
  if ( !enableSkillUp )
LABEL_60:
    sub_1D0F30C(SelfUserGame, v4);
  this->fields.isSkillUpItemNum = enableSkillUp->fields._size > 0;
}


bool CombineServantListViewItem__SetSortValue(
        CombineServantListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  Il2CppObject *v5; // x21
  __int64 iconLabelInfo2; // x0
  const MethodInfo *v7; // x1
  int32_t bonusKind2; // w8
  int32_t v9; // w2
  int32_t bonusKind2Id; // w8
  struct ListViewManager_o *v11; // x8
  __int64 v12; // x11
  UnityEngine_Object_o *v13; // x21
  int32_t v14; // w8
  int32_t v15; // w8
  bool IsEnableServant; // w0
  Il2CppObject *MasterData_object; // x0
  int32_t svtId; // w22
  ServantFilterMaster_o *v19; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // kr00_16
  System_Collections_Generic_List_EventGroupEntity__o *EntitiesByGroupId; // x22
  struct ListViewManager_o *v22; // x8
  CombineServantListViewManager_c *v23; // x9
  __int64 v24; // x10
  struct ListViewManager_o *v25; // x11
  int32_t v26; // w8
  const MethodInfo *v27; // x3
  struct UserServantEntity_o *v28; // x8
  __int128 v29; // q1
  int32_t bonusKindId; // w21
  CombineServantListViewManager_o *v31; // x0
  const MethodInfo *v32; // x3
  struct ListViewManager_o *v33; // x1
  void **p_monitor; // x0
  System_Func_object__bool__o *v35; // x23
  const MethodInfo *v36; // x2
  _BOOL4 isChoice; // w11
  _BOOL4 isLock; // w23
  _BOOL4 v39; // w21
  int64_t *p_sortValue0; // x22
  __int64 v41; // x8
  unsigned int v42; // w8
  __int64 v43; // x8
  int32_t type; // w8
  __int64 v45; // x8
  int32_t v46; // w8
  __int64 v47; // x9
  bool v48; // zf
  int64_t v49; // x8
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v51; // q1
  struct UserServantEntity_o *v52; // x8
  IconLabelInfo_o *iconLabelInfo1; // x20
  int32_t v54; // w21
  struct UserServantEntity_o *v55; // x8
  int32_t v56; // w8
  struct UserServantEntity_o *v57; // x8
  int64_t v58; // x20
  struct IconLabelInfo_o *v59; // x21
  int32_t v60; // w3
  IconLabelInfo_o *v61; // x0
  int32_t v62; // w2
  unsigned int v63; // w8
  IconLabelInfo_o *v64; // x20
  int64_t hp; // x20
  IconLabelInfo_o *v66; // x21
  int64_t atk; // x20
  IconLabelInfo_o *v68; // x21
  struct IconLabelInfo_o *v69; // x19
  int64_t cost; // x2
  int64_t friendship; // x2
  int32_t friendshipMax; // w3
  int32_t v73; // w1
  int64_t amountSortValue; // x21
  struct ListViewManager_o *manager; // x8
  __int64 naturalAligment; // x11
  struct ListViewManager_o *v77; // x20
  int32_t v78; // w21
  struct UserServantEntity_o *v79; // x8
  __int64 v80; // x21
  __int64 v81; // x22
  const MethodInfo *v82; // x2
  __int64 rarity; // x20
  __int64 v84; // x8
  int32_t v85; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v87; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v88; // [xsp+30h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v89; // [xsp+50h] [xbp-60h]
  int32_t tdMaxLv[2]; // [xsp+78h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v91; // 0:x0.16

  if ( (byte_4E713E5 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_BasicHelper_Any_EventGroupEntity___);
    sub_1D0F0B4(&CombineServantListViewManager_TypeInfo);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_ServantFilterMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMaster_EventGroupMaster___);
    sub_1D0F0B4(&DataManager_TypeInfo);
    sub_1D0F0B4(&System_Func_EventGroupEntity__bool__TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_EventGroupEntity__get_Count__);
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1D0F0B4(&TutorialFlag_TypeInfo);
    sub_1D0F0B4(&Method_CombineServantListViewItem___c__DisplayClass118_0__SetSortValue_b__0__);
    sub_1D0F0B4(&CombineServantListViewItem___c__DisplayClass118_0_TypeInfo);
    byte_4E713E5 = 1;
  }
  *(_QWORD *)tdMaxLv = 0;
  v5 = (Il2CppObject *)sub_1D0F300(CombineServantListViewItem___c__DisplayClass118_0_TypeInfo);
  System_Object___ctor(v5, 0);
  if ( !v5 )
    goto LABEL_316;
  v5[1].klass = (Il2CppClass *)this;
  iconLabelInfo2 = sub_1D0F058(&v5[1], this);
  *(_WORD *)&this->fields.isTermination = 0;
  this->fields.sortValue1 = -1;
  *(_WORD *)&this->fields.isDispAtkStatusUpInfo = 0;
  if ( !sort )
    goto LABEL_316;
  if ( !sort->fields.isBonusKind || this->fields.isBaseSvt || ListViewItem__get_IsSelect((ListViewItem_o *)this, 0) )
  {
LABEL_76:
    if ( this->fields.isBaseSvt || ListViewItem__get_IsSelect((ListViewItem_o *)this, 0) )
      goto LABEL_78;
    type = this->fields.type;
    if ( type == 1 )
    {
      if ( !CombineServantListViewItem__IsMatchMaterialFilter(this, sort, v36) )
        goto LABEL_104;
      goto LABEL_78;
    }
    if ( !type )
    {
      if ( !CombineServantListViewItem__IsMatchBaseServantFilter(this, sort, v36) )
        goto LABEL_104;
LABEL_78:
      isChoice = this->fields.isChoice;
      iconLabelInfo2 = (__int64)this->fields.iconLabelInfo2;
      if ( this->fields.isSwapLock )
        isLock = !this->fields.isLock;
      else
        isLock = this->fields.isLock;
      if ( this->fields.isSwapChoice )
        v39 = !isChoice;
      else
        v39 = isChoice;
      if ( !iconLabelInfo2 )
        goto LABEL_316;
      IconLabelInfo__Clear((IconLabelInfo_o *)iconLabelInfo2, 0);
      this->fields.sortValue0 = 0;
      p_sortValue0 = &this->fields.sortValue0;
      this->fields.sortValue0B = 0;
      if ( !sort->fields.isSmartSort )
      {
        if ( v39 && sort->fields.isChoiceSort )
        {
          v42 = this->fields.type;
          if ( v42 <= 0xC )
          {
            if ( ((1 << v42) & 0x1FDD) != 0 )
              v43 = 10;
            else
LABEL_124:
              v43 = -10;
            *p_sortValue0 = v43;
          }
        }
LABEL_198:
        iconLabelInfo2 = 1;
        switch ( sort->fields.sortKind )
        {
          case 0:
            if ( !this )
              break;
            iconLabelInfo2 = (__int64)this->fields.userSvtEntity;
            v49 = !this->fields.isParty;
            goto LABEL_276;
          case 1:
            userSvtEntity = this->fields.userSvtEntity;
            if ( !userSvtEntity )
              break;
            v51 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
            *(_OWORD *)&v89.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v89.fields.fakeValue = v51;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v87 = v89;
            iconLabelInfo2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50334724(&v87, 0);
            v52 = this->fields.userSvtEntity;
            this->fields.sortValue1 = iconLabelInfo2;
            if ( !v52 )
              break;
            iconLabelInfo2 = (__int64)this->fields.iconLabelInfo1;
            if ( !iconLabelInfo2 )
              break;
            IconLabelInfo__SetTime((IconLabelInfo_o *)iconLabelInfo2, 49, v52->fields.createdAt, 0, 0, 0, 0);
            goto LABEL_227;
          case 2:
            iconLabelInfo2 = (__int64)this->fields.userSvtEntity;
            this->fields.sortValue1 = this->fields.rarity;
            if ( !iconLabelInfo2 )
              break;
            iconLabelInfo1 = this->fields.iconLabelInfo1;
            v54 = *(_DWORD *)(iconLabelInfo2 + 400);
            iconLabelInfo2 = UserServantEntity__getLevelMax((UserServantEntity_o *)iconLabelInfo2, 0);
            v55 = this->fields.userSvtEntity;
            if ( !v55 || !iconLabelInfo1 )
              break;
            IconLabelInfo__Set_42279788(iconLabelInfo1, 2, v54, iconLabelInfo2, 0, 0, 0, v55->fields.lv, 0, 0);
            v56 = this->fields.type;
            if ( v56 != 10 && v56 != 7 )
              goto LABEL_281;
            v57 = this->fields.userSvtEntity;
            if ( !v57 )
              break;
            iconLabelInfo2 = (__int64)this->fields.iconLabelInfo2;
            if ( !iconLabelInfo2 )
              break;
            IconLabelInfo__Set_42279788(
              (IconLabelInfo_o *)iconLabelInfo2,
              36,
              this->fields.rarity,
              v57->fields.exceedCount,
              0,
              0,
              0,
              v57->fields.lv,
              this->fields.actualRarity,
              0);
            goto LABEL_281;
          case 3:
            iconLabelInfo2 = (__int64)this->fields.userSvtEntity;
            if ( !iconLabelInfo2 )
              break;
            v58 = *(int *)(iconLabelInfo2 + 400);
            v59 = this->fields.iconLabelInfo1;
            this->fields.sortValue1 = v58;
            iconLabelInfo2 = UserServantEntity__getLevelMax((UserServantEntity_o *)iconLabelInfo2, 0);
            if ( !v59 )
              break;
            v60 = iconLabelInfo2;
            v61 = v59;
            v62 = v58;
            goto LABEL_280;
          case 4:
            iconLabelInfo2 = (__int64)this->fields.userSvtEntity;
            if ( !iconLabelInfo2 )
              break;
            v63 = this->fields.type & 0xFFFFFFFE;
            this->fields.sortValue1 = *(int *)(iconLabelInfo2 + 436);
            if ( v63 == 4 )
            {
              v64 = this->fields.iconLabelInfo1;
            }
            else
            {
              UserServantEntity__getTreasureDeviceInfo_44543568(
                (UserServantEntity_o *)iconLabelInfo2,
                &tdMaxLv[1],
                tdMaxLv,
                0);
              LODWORD(friendship) = tdMaxLv[1];
              iconLabelInfo2 = (__int64)this->fields.iconLabelInfo1;
              this->fields.sortValue1 = tdMaxLv[1];
              if ( !iconLabelInfo2 )
                break;
              friendshipMax = tdMaxLv[0];
              v73 = 33;
LABEL_244:
              IconLabelInfo__Set_42279788(
                (IconLabelInfo_o *)iconLabelInfo2,
                v73,
                friendship,
                friendshipMax,
                0,
                0,
                0,
                0,
                0,
                0);
LABEL_245:
              iconLabelInfo2 = (__int64)this->fields.userSvtEntity;
              if ( !iconLabelInfo2 )
                break;
              v64 = this->fields.iconLabelInfo2;
            }
            v78 = *(_DWORD *)(iconLabelInfo2 + 400);
            iconLabelInfo2 = UserServantEntity__getLevelMax((UserServantEntity_o *)iconLabelInfo2, 0);
            if ( v64 )
            {
              IconLabelInfo__Set_42279788(v64, 2, v78, iconLabelInfo2, 0, 0, 0, 0, 0, 0);
              iconLabelInfo2 = (__int64)this->fields.servantEntity;
              if ( iconLabelInfo2 )
              {
                if ( !ServantEntity__get_IsExpUp((ServantEntity_o *)iconLabelInfo2, 0) )
                {
                  iconLabelInfo2 = (__int64)this->fields.servantEntity;
                  if ( !iconLabelInfo2 )
                    break;
                  if ( !ServantEntity__get_IsStatusUp((ServantEntity_o *)iconLabelInfo2, 0) )
                  {
                    iconLabelInfo2 = (__int64)this->fields.servantEntity;
                    if ( !iconLabelInfo2 )
                      break;
                    if ( !ServantEntity__get_IsServantMaterialTd((ServantEntity_o *)iconLabelInfo2, 0) )
                    {
LABEL_281:
                      LOBYTE(iconLabelInfo2) = 1;
                      return iconLabelInfo2;
                    }
                  }
                }
                iconLabelInfo2 = (__int64)this->fields.iconLabelInfo1;
                if ( iconLabelInfo2 )
                {
                  IconLabelInfo__Clear((IconLabelInfo_o *)iconLabelInfo2, 0);
                  iconLabelInfo2 = (__int64)this->fields.iconLabelInfo2;
                  if ( iconLabelInfo2 )
                  {
                    IconLabelInfo__Clear((IconLabelInfo_o *)iconLabelInfo2, 0);
                    goto LABEL_281;
                  }
                }
              }
            }
            break;
          case 5:
            hp = this->fields.hp;
            iconLabelInfo2 = (__int64)this->fields.userSvtEntity;
            this->fields.sortValue1 = hp;
            if ( !iconLabelInfo2 )
              break;
            v66 = this->fields.iconLabelInfo1;
            iconLabelInfo2 = UserServantEntity__get_HpBoostValue((UserServantEntity_o *)iconLabelInfo2, 0);
            if ( !v66 )
              break;
            IconLabelInfo__Set_42279788(v66, 3, hp, iconLabelInfo2, 0, 0, 0, 0, 0, 0);
            goto LABEL_227;
          case 6:
            atk = this->fields.atk;
            iconLabelInfo2 = (__int64)this->fields.userSvtEntity;
            this->fields.sortValue1 = atk;
            if ( !iconLabelInfo2 )
              break;
            v68 = this->fields.iconLabelInfo1;
            iconLabelInfo2 = UserServantEntity__get_AtkBoostValue((UserServantEntity_o *)iconLabelInfo2, 0);
            if ( !v68 )
              break;
            IconLabelInfo__Set_42279788(v68, 5, atk, iconLabelInfo2, 0, 0, 0, 0, 0, 0);
LABEL_227:
            iconLabelInfo2 = (__int64)this->fields.userSvtEntity;
            if ( !iconLabelInfo2 )
              break;
            v69 = this->fields.iconLabelInfo2;
            goto LABEL_278;
          case 7:
            cost = this->fields.cost;
            iconLabelInfo2 = (__int64)this->fields.iconLabelInfo1;
            this->fields.sortValue1 = cost;
            if ( !iconLabelInfo2 )
              break;
            IconLabelInfo__Set_42279788((IconLabelInfo_o *)iconLabelInfo2, 7, cost, 0, 0, 0, 0, 0, 0, 0);
            goto LABEL_245;
          case 8:
            iconLabelInfo2 = (__int64)this->fields.userSvtEntity;
            v49 = -this->fields.priority;
            goto LABEL_276;
          case 0xA:
            friendship = this->fields.friendship;
            iconLabelInfo2 = (__int64)this->fields.iconLabelInfo1;
            this->fields.sortValue1 = friendship;
            if ( !iconLabelInfo2 )
              break;
            friendshipMax = this->fields.friendshipMax;
            v73 = 32;
            goto LABEL_244;
          case 0xE:
            amountSortValue = this->fields.amountSortValue;
            if ( (amountSortValue & 0x8000000000000000LL) == 0 )
              goto LABEL_273;
            manager = sort->fields.manager;
            if ( manager
              && (naturalAligment = CombineServantListViewManager_TypeInfo->_2.naturalAligment,
                  manager->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
            {
              if ( (CombineServantListViewManager_c *)manager->klass->_2.typeHierarchy[naturalAligment - 1] == CombineServantListViewManager_TypeInfo )
                v77 = sort->fields.manager;
              else
                v77 = 0;
            }
            else
            {
              v77 = 0;
            }
            v79 = this->fields.userSvtEntity;
            if ( !v79 )
              break;
            v81 = *(_QWORD *)&v79->fields.svtId.fields.currentCryptoKey;
            v80 = *(_QWORD *)&v79->fields.svtId.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v91.fields.currentCryptoKey = v81;
            *(_QWORD *)&v91.fields.fakeValue = v80;
            iconLabelInfo2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v91, 0);
            if ( !v77 )
              break;
            amountSortValue = CombineServantListViewManager__GetAmountSortValue(
                                (CombineServantListViewManager_o *)v77,
                                iconLabelInfo2,
                                v82);
            this->fields.amountSortValue = amountSortValue;
LABEL_273:
            iconLabelInfo2 = (__int64)this->fields.userSvtEntity;
            if ( !iconLabelInfo2 )
              break;
            rarity = (unsigned int)this->fields.rarity;
            iconLabelInfo2 = (__int64)UserServantEntity__get_BaseServantEntity((UserServantEntity_o *)iconLabelInfo2, 0);
            if ( !iconLabelInfo2 )
              break;
            v84 = *(int *)(iconLabelInfo2 + 208);
            iconLabelInfo2 = (__int64)this->fields.userSvtEntity;
            v49 = ((rarity << 32) + (amountSortValue << 48)) | v84;
LABEL_276:
            this->fields.sortValue1 = v49;
            if ( !iconLabelInfo2 )
              break;
            v69 = this->fields.iconLabelInfo1;
LABEL_278:
            v85 = *(_DWORD *)(iconLabelInfo2 + 400);
            iconLabelInfo2 = UserServantEntity__getLevelMax((UserServantEntity_o *)iconLabelInfo2, 0);
            if ( !v69 )
              break;
            v60 = iconLabelInfo2;
            v61 = v69;
            v62 = v85;
LABEL_280:
            IconLabelInfo__Set_42279788(v61, 2, v62, v60, 0, 0, 0, 0, 0, 0);
            goto LABEL_281;
          case 0xF:
            friendship = this->fields.hpReinforceValue;
            iconLabelInfo2 = (__int64)this->fields.iconLabelInfo1;
            this->fields.isDispHpStatusUpInfo = 1;
            this->fields.sortValue1 = friendship;
            if ( !iconLabelInfo2 )
              break;
            friendshipMax = this->fields.nowMaxHpReinforceValue;
            v73 = 44;
            goto LABEL_244;
          case 0x10:
            friendship = this->fields.atkReinforceValue;
            iconLabelInfo2 = (__int64)this->fields.iconLabelInfo1;
            this->fields.isDispAtkStatusUpInfo = 1;
            this->fields.sortValue1 = friendship;
            if ( !iconLabelInfo2 )
              break;
            friendshipMax = this->fields.nowMaxAtkReinforceValue;
            v73 = 45;
            goto LABEL_244;
          default:
            return iconLabelInfo2;
        }
LABEL_316:
        sub_1D0F30C(iconLabelInfo2, v7);
      }
      switch ( this->fields.type )
      {
        case 0:
          if ( this->fields.isHeroineSvt )
          {
            if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
            if ( TutorialFlag__Get_41786532(126, 0) )
              goto LABEL_166;
          }
          if ( this->fields.isParty )
          {
            v41 = 20;
            goto LABEL_195;
          }
          if ( this->fields.isLvMax )
            goto LABEL_191;
          goto LABEL_196;
        case 1:
          iconLabelInfo2 = (__int64)this->fields.servantEntity;
          if ( !iconLabelInfo2 )
            goto LABEL_316;
          if ( ServantEntity__get_IsExpUp((ServantEntity_o *)iconLabelInfo2, 0) )
          {
            if ( this->fields.isBaseLvMax )
            {
              v45 = -120;
            }
            else
            {
              v45 = -5;
              if ( !isLock && !v39 )
                v45 = 30;
            }
            goto LABEL_304;
          }
          iconLabelInfo2 = (__int64)this->fields.servantEntity;
          if ( !iconLabelInfo2 )
            goto LABEL_316;
          if ( ServantEntity__get_IsStatusUp((ServantEntity_o *)iconLabelInfo2, 0) )
          {
            if ( this->fields.isSameClass )
            {
              v46 = this->fields.rarity;
              if ( this->fields.hpBase < 1 )
              {
                if ( v46 >= 4 )
                {
                  v45 = -90;
                  if ( !this->fields.isAtkSecondUpMax && this->fields.isAtkUpMax )
                    v45 = 90;
                  goto LABEL_302;
                }
                v47 = 70;
                v48 = !this->fields.isAtkUpMax;
                v45 = -110;
              }
              else
              {
                if ( v46 >= 4 )
                {
                  v45 = -80;
                  if ( !this->fields.isHpSecondUpMax && this->fields.isHpUpMax )
                    v45 = 100;
                  goto LABEL_302;
                }
                v47 = 80;
                v48 = !this->fields.isHpUpMax;
                v45 = -100;
              }
              if ( v48 )
                v45 = v47;
LABEL_302:
              *p_sortValue0 = v45;
              if ( isLock || v39 )
                v45 = -5;
              goto LABEL_304;
            }
            v45 = -150;
          }
          else
          {
            if ( !CombineServantListViewItem__get_IsCanNotSelectMaterial(this, v7) )
            {
LABEL_305:
              if ( this->fields.isFortification )
                *p_sortValue0 = -10;
              if ( v39 && sort->fields.isChoiceSort )
                *(_OWORD *)p_sortValue0 = xmmword_D34E40;
              goto LABEL_198;
            }
            if ( this->fields.isLimitCntTarget )
            {
              v45 = -20;
            }
            else if ( this->fields.isParty )
            {
              v45 = -30;
            }
            else if ( this->fields.isGrandSvt )
            {
              v45 = -40;
            }
            else if ( this->fields.isUseSupport )
            {
              v45 = -50;
            }
            else
            {
              v45 = -10;
              if ( this->fields.isUseRecommendSupport )
                v45 = -60;
            }
          }
LABEL_304:
          *p_sortValue0 = v45;
          goto LABEL_305;
        case 2:
          if ( this->fields.isSealCombineLimit || this->fields.isSealedLimitCount && this->fields.isLimitCntMax )
          {
            v41 = 0;
            goto LABEL_195;
          }
          if ( !CombineServantListViewItem__get_IsCanNotBaseSelect(this, v7)
            && this->fields.isLimitUpItemNum
            && this->fields.isLvMax )
          {
LABEL_194:
            v41 = 10;
            goto LABEL_195;
          }
          if ( this->fields.isHeroineSvt )
            goto LABEL_191;
          if ( !this->fields.isLimitCntMax )
            goto LABEL_196;
          goto LABEL_166;
        case 3:
          if ( this->fields.isHeroineSvt )
          {
            if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
            if ( TutorialFlag__Get_41786532(126, 0) )
              goto LABEL_166;
          }
          if ( this->fields.isSkillUpItemNum )
            goto LABEL_194;
          if ( !this->fields.isSkillLvMax )
            goto LABEL_196;
          goto LABEL_191;
        case 4:
          if ( this->fields.isSameSvt )
            goto LABEL_194;
          if ( this->fields.isHeroineSvt )
            goto LABEL_191;
          if ( !this->fields.isTdLvMax )
            goto LABEL_196;
          goto LABEL_166;
        case 5:
          if ( v39 && sort->fields.isChoiceSort || this->fields.isFortification )
            goto LABEL_124;
          goto LABEL_198;
        case 6:
          if ( !CombineServantListViewItem__get_IsCanNotBaseSelect(this, v7)
            && this->fields.isLvMax
            && this->fields.isLimitCntMax
            && this->fields.isLvExceedItemNum )
          {
            goto LABEL_194;
          }
          if ( !this->fields.isHeroineSvt )
            goto LABEL_133;
          iconLabelInfo2 = (__int64)this->fields.userSvtEntity;
          if ( !iconLabelInfo2 )
            goto LABEL_316;
          if ( !UserServantEntity__IsUseLevelExceedItemHeroine((UserServantEntity_o *)iconLabelInfo2, 0) )
            goto LABEL_191;
LABEL_133:
          if ( !this->fields.isLvExceedMax )
            goto LABEL_196;
          goto LABEL_166;
        case 7:
          if ( this->fields.isEventJoin )
            goto LABEL_191;
          if ( !this->fields.isHeroineSvt )
            goto LABEL_196;
          if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
          if ( !TutorialFlag__Get_41786532(126, 0) )
            goto LABEL_196;
          goto LABEL_166;
        case 8:
          if ( !CombineServantListViewItem__get_IsCanNotBaseSelect(this, v7)
            && this->fields.isFriendshipRankMax
            && this->fields.isFriendshipExceedItemNum )
          {
            goto LABEL_194;
          }
          if ( !this->fields.isHeroineSvt )
            goto LABEL_147;
          iconLabelInfo2 = (__int64)this->fields.userSvtEntity;
          if ( !iconLabelInfo2 )
            goto LABEL_316;
          if ( !UserServantEntity__IsUseFriendshipExceedItemHeroine((UserServantEntity_o *)iconLabelInfo2, 0) )
            goto LABEL_191;
LABEL_147:
          if ( !this->fields.isFriendshipExceedMax )
            goto LABEL_196;
          goto LABEL_166;
        case 9:
          if ( !CombineServantListViewItem__get_IsCanNotBaseSelect(this, v7) )
            goto LABEL_194;
          if ( this->fields.isHeroineSvt )
            goto LABEL_191;
          if ( this->fields.isSealCombineLimit )
          {
LABEL_173:
            v41 = -15;
            goto LABEL_195;
          }
          if ( this->fields.isLimitCntMax )
            goto LABEL_166;
          if ( !this->fields.isEventJoin )
            goto LABEL_196;
          goto LABEL_258;
        case 0xA:
          if ( this->fields.isHeroineSvt )
          {
            if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
            if ( TutorialFlag__Get_41786532(126, 0) )
              goto LABEL_258;
          }
          if ( this->fields.isEventJoin )
            goto LABEL_166;
          if ( !this->fields.isCommandCardExceedMax )
            goto LABEL_196;
          goto LABEL_191;
        case 0xB:
          if ( this->fields.isHeroineSvt )
          {
            if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
            if ( TutorialFlag__Get_41786532(126, 0) )
              goto LABEL_166;
          }
          if ( this->fields.isEventJoin )
            goto LABEL_173;
          if ( this->fields.isAppendSkillOpenItemNum || this->fields.isAppendSkillUpItemNum )
            goto LABEL_194;
          if ( !this->fields.isAppendSkillLvMax )
            goto LABEL_196;
          goto LABEL_191;
        case 0xC:
          if ( !this->fields.isHeroineSvt )
            goto LABEL_320;
          if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
          if ( TutorialFlag__Get_41786532(126, 0) )
          {
            v41 = -40;
          }
          else
          {
LABEL_320:
            if ( this->fields.isEventJoin )
            {
              v41 = -35;
            }
            else if ( this->fields.isAppendSkillLvMax )
            {
LABEL_258:
              v41 = -30;
            }
            else if ( this->fields.isAllAppendSkillLock )
            {
LABEL_166:
              v41 = -20;
            }
            else
            {
              if ( !this->fields.isAppendSkillLvSame )
              {
LABEL_196:
                if ( v39 && sort->fields.isChoiceSort )
                  this->fields.sortValue0B = 10;
                goto LABEL_198;
              }
LABEL_191:
              v41 = -10;
            }
          }
LABEL_195:
          *p_sortValue0 = v41;
          goto LABEL_196;
        default:
          goto LABEL_198;
      }
    }
    if ( CombineServantListViewItem__IsMatchServantFilter(this, sort, v36) )
      goto LABEL_78;
  }
  else
  {
    bonusKind2 = sort->fields.bonusKind2;
    switch ( bonusKind2 )
    {
      case 0:
        if ( this->fields.bonusKind )
        {
          bonusKind2Id = sort->fields.bonusKind2Id;
        }
        else
        {
          bonusKind2Id = sort->fields.bonusKind2Id;
          if ( this->fields.bonusKindId == bonusKind2Id )
            goto LABEL_75;
        }
        this->fields.bonusKind = 0;
        this->fields.bonusKindId = bonusKind2Id;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        iconLabelInfo2 = (__int64)DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_EventGroupMaster___);
        if ( !iconLabelInfo2 )
          goto LABEL_316;
        EntitiesByGroupId = EventGroupMaster__GetEntitiesByGroupId(
                              (EventGroupMaster_o *)iconLabelInfo2,
                              this->fields.bonusKindId,
                              0);
        iconLabelInfo2 = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)EntitiesByGroupId, 0);
        if ( (iconLabelInfo2 & 1) == 0 )
        {
          if ( !EntitiesByGroupId )
            goto LABEL_316;
          if ( EntitiesByGroupId->fields._size >= 2 )
          {
            v22 = sort->fields.manager;
            if ( v22 )
            {
              v23 = CombineServantListViewManager_TypeInfo;
              v24 = CombineServantListViewManager_TypeInfo->_2.naturalAligment;
              if ( v22->klass->_2.naturalAligment >= (unsigned int)v24 )
              {
                if ( (CombineServantListViewManager_c *)v22->klass->_2.typeHierarchy[v24 - 1] == CombineServantListViewManager_TypeInfo )
                  v25 = sort->fields.manager;
                else
                  v25 = 0;
              }
              else
              {
                v25 = 0;
              }
              v5[1].monitor = v25;
              p_monitor = &v5[1].monitor;
              if ( v22->klass->_2.naturalAligment >= (unsigned int)v24 )
              {
                if ( (CombineServantListViewManager_c *)v22->klass->_2.typeHierarchy[v24 - 1] == v23 )
                  v33 = v22;
                else
                  v33 = 0;
              }
              else
              {
                v33 = 0;
              }
            }
            else
            {
              v33 = 0;
              v5[1].monitor = 0;
              p_monitor = &v5[1].monitor;
            }
            sub_1D0F058(p_monitor, v33);
            v35 = (System_Func_object__bool__o *)sub_1D0F300(System_Func_EventGroupEntity__bool__TypeInfo);
            System_Func_object__bool____ctor(
              v35,
              v5,
              Method_CombineServantListViewItem___c__DisplayClass118_0__SetSortValue_b__0__,
              0);
            this->fields.isEventUpVal = BasicHelper__Any_object_(
                                          (System_Collections_Generic_List_T__o *)EntitiesByGroupId,
                                          (System_Func_T__bool__o *)v35,
                                          (const MethodInfo_32382EC *)Method_BasicHelper_Any_EventGroupEntity___);
          }
        }
        goto LABEL_75;
      case 2:
        v11 = sort->fields.manager;
        if ( v11
          && (v12 = CombineServantListViewManager_TypeInfo->_2.naturalAligment,
              v11->klass->_2.naturalAligment >= (unsigned int)v12) )
        {
          if ( (CombineServantListViewManager_c *)v11->klass->_2.typeHierarchy[v12 - 1] == CombineServantListViewManager_TypeInfo )
            v13 = (UnityEngine_Object_o *)sort->fields.manager;
          else
            v13 = 0;
        }
        else
        {
          v13 = 0;
        }
        if ( this->fields.bonusKind == 2 )
        {
          v26 = sort->fields.bonusKind2Id;
          if ( this->fields.bonusKindId == v26 )
            goto LABEL_75;
        }
        else
        {
          v26 = sort->fields.bonusKind2Id;
        }
        this->fields.bonusKindId = v26;
        this->fields.bonusKind = 2;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        iconLabelInfo2 = UnityEngine_Object__op_Implicit(v13, 0);
        if ( (iconLabelInfo2 & 1) != 0 )
        {
          if ( !v13 )
            goto LABEL_316;
          iconLabelInfo2 = CombineServantListViewManager__IsLargeSuccessCampaignClassId(
                             (CombineServantListViewManager_o *)v13,
                             this->fields.bonusKindId,
                             this->fields.svtId,
                             v27);
          v28 = this->fields.userSvtEntity;
          this->fields.isEventUpVal = iconLabelInfo2 & 1;
          if ( !v28 )
            goto LABEL_316;
          v29 = *(_OWORD *)&v28->fields.id.fields.fakeValue;
          bonusKindId = this->fields.bonusKindId;
          *(_OWORD *)&v89.fields.currentCryptoKey = *(_OWORD *)&v28->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v89.fields.fakeValue = v29;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v88 = v89;
          v31 = (CombineServantListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50334724(
                                                     &v88,
                                                     0);
          if ( CombineServantListViewManager__IsExchangeSvtExist(v31, bonusKindId, (int64_t)v31, v32) )
            goto LABEL_76;
        }
        goto LABEL_75;
      case 3:
        if ( this->fields.bonusKind == 3 )
        {
          v14 = sort->fields.bonusKind2Id;
          if ( this->fields.bonusKindId == v14 )
            goto LABEL_75;
        }
        else
        {
          v14 = sort->fields.bonusKind2Id;
        }
        this->fields.bonusKindId = v14;
        this->fields.bonusKind = 3;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        iconLabelInfo2 = (__int64)DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_EventCampaignMaster___);
        if ( !iconLabelInfo2 )
          goto LABEL_316;
        IsEnableServant = EventCampaignMaster__IsEnableServant(
                            (EventCampaignMaster_o *)iconLabelInfo2,
                            this->fields.svtId,
                            this->fields.bonusKindId,
                            0);
        goto LABEL_37;
      case 4:
      case 5:
        if ( this->fields.bonusKind == bonusKind2 )
        {
          v9 = sort->fields.bonusKind2Id;
          if ( this->fields.bonusKindId == v9 )
            goto LABEL_75;
        }
        else
        {
          v9 = sort->fields.bonusKind2Id;
        }
        iconLabelInfo2 = (__int64)this->fields.userSvtEntity;
        this->fields.bonusKind = bonusKind2;
        this->fields.bonusKindId = v9;
        if ( !iconLabelInfo2 )
          goto LABEL_316;
        IsEnableServant = UserServantEntity__getEventUpVal(
                            (UserServantEntity_o *)iconLabelInfo2,
                            this->fields.setupInfo,
                            v9,
                            0,
                            0);
        goto LABEL_37;
      case 7:
        if ( this->fields.bonusKind == 7 )
        {
          v15 = sort->fields.bonusKind2Id;
          if ( this->fields.bonusKindId == v15 )
          {
LABEL_75:
            if ( !this->fields.isEventUpVal )
              break;
            goto LABEL_76;
          }
        }
        else
        {
          v15 = sort->fields.bonusKind2Id;
        }
        this->fields.bonusKindId = v15;
        this->fields.bonusKind = 7;
        iconLabelInfo2 = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !iconLabelInfo2 )
          goto LABEL_316;
        MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)iconLabelInfo2,
                              (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_ServantFilterMaster___);
        svtId = this->fields.svtId;
        v19 = (ServantFilterMaster_o *)MasterData_object;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(svtId, 0);
        v7 = *(const MethodInfo **)&v20.fields.fakeValue;
        iconLabelInfo2 = *(_QWORD *)&v20.fields.currentCryptoKey;
        if ( !v19 )
          goto LABEL_316;
        IsEnableServant = ServantFilterMaster__IsEnableServant(v19, v20, this->fields.bonusKindId, 0);
LABEL_37:
        this->fields.isEventUpVal = IsEnableServant;
        if ( IsEnableServant )
          goto LABEL_76;
        break;
      default:
        goto LABEL_76;
    }
  }
LABEL_104:
  LOBYTE(iconLabelInfo2) = 0;
  return iconLabelInfo2;
}


bool CombineServantListViewItem__SwapChoice(CombineServantListViewItem_o *this, const MethodInfo *method)
{
  bool v2; // w8

  v2 = !this->fields.isSwapChoice;
  this->fields.isSwapChoice ^= 1u;
  return v2;
}


bool CombineServantListViewItem__SwapLock(CombineServantListViewItem_o *this, const MethodInfo *method)
{
  bool v2; // w8

  v2 = !this->fields.isSwapLock;
  this->fields.isSwapLock ^= 1u;
  return v2;
}


void CombineServantListViewItem__UpdateCategoryIdList(CombineServantListViewItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0
  __int64 v4; // x1
  UserServantEntity_o *v5; // x0
  bool v6; // w8
  _BOOL4 v7; // w20
  int32_t DispLimitCountStageSealAfterIndexZero; // w2
  struct System_Int32_array *SkillCategoryIdList; // x0
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x1

  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
  {
    if ( UserServantEntity__get_IsSaveTransformServant(userSvtEntity, 0) )
    {
      v5 = this->fields.userSvtEntity;
      if ( !v5 )
        goto LABEL_13;
      v6 = !UserServantEntity__CheckBaseServant(v5, -1, 0);
    }
    else
    {
      v6 = 0;
    }
    v5 = this->fields.userSvtEntity;
    if ( v5 )
    {
      v7 = v6;
      DispLimitCountStageSealAfterIndexZero = UserServantEntity__GetDispLimitCountStageSealAfterIndexZero(v5, -1, 0, 0);
      if ( this->fields.isTransformed == v7 && this->fields.dispLimitCount == DispLimitCountStageSealAfterIndexZero )
        return;
      v5 = this->fields.userSvtEntity;
      this->fields.isTransformed = v7;
      this->fields.dispLimitCount = DispLimitCountStageSealAfterIndexZero;
      if ( v5 )
      {
        SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(
                                v5,
                                -1,
                                DispLimitCountStageSealAfterIndexZero,
                                0);
        this->fields.skillCategoryIdList = SkillCategoryIdList;
        sub_1D0F058(&this->fields.skillCategoryIdList, SkillCategoryIdList);
        v5 = this->fields.userSvtEntity;
        if ( v5 )
        {
          TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                           v5,
                                           0,
                                           this->fields.dispLimitCount,
                                           0);
          this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
          sub_1D0F058(&this->fields.tdCategoryIdList, TreasureDeviceCategoryIdList);
          return;
        }
      }
    }
LABEL_13:
    sub_1D0F30C(v5, v4);
  }
}


float CombineServantListViewItem__get_CombineExpCampaignValue(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.combineExpCampaignValue;
}


int32_t CombineServantListViewItem__get_DragSelectNum(CombineServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.dragSelectNum;
}


System_String_o *CombineServantListViewItem__get_FortificationDetailName(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.fortificationDetailName;
}


System_String_o *CombineServantListViewItem__get_FortificationName(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.fortificationName;
}


int32_t CombineServantListViewItem__get_GetAtkUpVal(CombineServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.atkBase;
}


int32_t CombineServantListViewItem__get_GetCurrentLimitCnt(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.currentLimitCnt;
}


System_Collections_Generic_List_int__o *CombineServantListViewItem__get_GetEnableAppendSkillupList(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.enableAppendSkillUp;
}


System_Collections_Generic_List_int__o *CombineServantListViewItem__get_GetEnableSkillupList(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.enableSkillUp;
}


int32_t CombineServantListViewItem__get_GetHpUpVal(CombineServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.hpBase;
}


int32_t CombineServantListViewItem__get_GetMaterialExp(CombineServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.materialExp;
}


int32_t CombineServantListViewItem__get_GetMaxLimitCnt(CombineServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.maxLimitCnt;
}


IconLabelInfo_o *CombineServantListViewItem__get_IconInfo1(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.iconLabelInfo1;
}


IconLabelInfo_o *CombineServantListViewItem__get_IconInfo2(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.iconLabelInfo2;
}


bool CombineServantListViewItem__get_IsAtkAdjustMax(CombineServantListViewItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0

  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_1D0F30C(0, method);
  return UserServantEntity__isAdjustAtkMax(userSvtEntity, 0);
}


bool CombineServantListViewItem__get_IsAtkStatusMax(CombineServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isNotSelectStatusUpAtk;
}


bool CombineServantListViewItem__get_IsAtkUpMax(CombineServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isAtkUpMax;
}


bool CombineServantListViewItem__get_IsBaseLvMax(CombineServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isBaseLvMax;
}


bool CombineServantListViewItem__get_IsBaseSvt(CombineServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isBaseSvt;
}


bool CombineServantListViewItem__get_IsCanNotBaseSelect(CombineServantListViewItem_o *this, const MethodInfo *method)
{
  char isHeroineSvt; // w8
  _BOOL4 isMaterialTdSvt; // w8
  UserServantEntity_o *UserSvtEntity; // x0
  __int64 v6; // x1
  bool IsUseLevelExceedItemHeroine; // w0

  if ( (byte_4E713EA & 1) == 0 )
  {
    sub_1D0F0B4(&TutorialFlag_TypeInfo);
    byte_4E713EA = 1;
  }
  if ( !this->fields.isHeroineSvt )
    goto LABEL_47;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_41786532(126, 0) )
  {
LABEL_7:
    isHeroineSvt = 1;
  }
  else
  {
LABEL_47:
    isHeroineSvt = 1;
    switch ( this->fields.type )
    {
      case 0:
        if ( this->fields.isLvMax || this->fields.isExpUpSvt || this->fields.isStatusUpSvt && !this->fields.isCanStUp )
          goto LABEL_7;
        isMaterialTdSvt = this->fields.isMaterialTdSvt;
        goto LABEL_42;
      case 2:
        if ( this->fields.isLimitCntMax && !this->fields.isSealedLimitCount )
          goto LABEL_7;
        goto LABEL_19;
      case 3:
        isMaterialTdSvt = this->fields.isSkillLvMax;
        goto LABEL_42;
      case 4:
        if ( this->fields.isTdLvMax )
          goto LABEL_7;
LABEL_19:
        isMaterialTdSvt = this->fields.isHeroineSvt;
        goto LABEL_42;
      case 6:
        if ( this->fields.isLvExceedMax || this->fields.isEventJoin )
          goto LABEL_7;
        isHeroineSvt = this->fields.isHeroineSvt;
        if ( !isHeroineSvt )
          return isHeroineSvt & 1;
        UserSvtEntity = CombineServantListViewItem__get_UserSvtEntity(this, method);
        if ( !UserSvtEntity )
          goto LABEL_44;
        IsUseLevelExceedItemHeroine = UserServantEntity__IsUseLevelExceedItemHeroine(UserSvtEntity, 0);
        goto LABEL_30;
      case 7:
        goto LABEL_41;
      case 8:
        if ( this->fields.isFriendshipExceedMax || this->fields.isEventJoin )
          goto LABEL_7;
        isHeroineSvt = this->fields.isHeroineSvt;
        if ( !isHeroineSvt )
          return isHeroineSvt & 1;
        UserSvtEntity = CombineServantListViewItem__get_UserSvtEntity(this, method);
        if ( !UserSvtEntity )
LABEL_44:
          sub_1D0F30C(UserSvtEntity, v6);
        IsUseLevelExceedItemHeroine = UserServantEntity__IsUseFriendshipExceedItemHeroine(UserSvtEntity, 0);
LABEL_30:
        isHeroineSvt = !IsUseLevelExceedItemHeroine;
        return isHeroineSvt & 1;
      case 9:
        if ( this->fields.isLimitCntMax
          || this->fields.isHeroineSvt
          || this->fields.isEventJoin
          || this->fields.isIgnoreCombineLimitSpecial )
        {
          goto LABEL_7;
        }
        isMaterialTdSvt = this->fields.isSealCombineLimit;
        goto LABEL_42;
      case 0xA:
        if ( !this->fields.isCommandCardExceedMax )
          goto LABEL_41;
        goto LABEL_7;
      case 0xB:
        goto LABEL_40;
      case 0xC:
        if ( this->fields.isAppendSkillExChangeLimit || this->fields.isAllAppendSkillLock )
          goto LABEL_7;
LABEL_40:
        if ( this->fields.isAppendSkillLvMax )
          goto LABEL_7;
LABEL_41:
        isMaterialTdSvt = this->fields.isEventJoin;
LABEL_42:
        isHeroineSvt = isMaterialTdSvt;
        break;
      default:
        return isHeroineSvt & 1;
    }
  }
  return isHeroineSvt & 1;
}


bool CombineServantListViewItem__get_IsCanNotLock(CombineServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isCanNotLock;
}


bool CombineServantListViewItem__get_IsCanNotSelect(CombineServantListViewItem_o *this, const MethodInfo *method)
{
  unsigned int type; // w20
  bool CanNotSelectMaterial; // w0

  if ( (byte_4E713EB & 1) == 0 )
  {
    sub_1D0F0B4(&TutorialFlag_TypeInfo);
    byte_4E713EB = 1;
  }
  type = this->fields.type;
  if ( type > 4 || type == 1 )
  {
    CanNotSelectMaterial = CombineServantListViewItem__get_IsCanNotSelectMaterial(this, method);
    if ( type == 5 )
    {
      if ( CanNotSelectMaterial
        || this->fields.isBaseSvt
        || this->fields.isMaxNextLv
        || this->fields.isEventJoinBaseSvt && !this->fields.isEventJoin && !this->fields.isMaterialTdSvt )
      {
        return 1;
      }
    }
    else if ( CanNotSelectMaterial
           || this->fields.isMaxNextLv && !this->fields.isStatusUpSvt
           || this->fields.isBaseLvMax && !this->fields.isStatusUpSvt )
    {
      return 1;
    }
    return this->fields.isFortification;
  }
  if ( this->fields.isHeroineSvt )
  {
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    if ( TutorialFlag__Get_41786532(126, 0) )
      return 1;
  }
  return this->fields.isStatusUpSvt && !this->fields.isCanStUp;
}


bool CombineServantListViewItem__get_IsCanNotSelectMaterial(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  _BOOL4 isStatusUpSvt; // w21
  _BOOL4 isAtkUpMax; // w8
  bool v5; // w20
  bool CanNotSelectSecondStatusMaterial; // w0
  const MethodInfo *v7; // x1
  _BOOL4 v8; // w8
  bool v10; // [xsp+Ch] [xbp-24h]

  isStatusUpSvt = this->fields.isStatusUpSvt;
  if ( this->fields.isStatusUpSvt )
  {
    if ( this->fields.rarity <= 3 )
    {
      if ( !this->fields.isHpUpMax )
      {
        isAtkUpMax = this->fields.isAtkUpMax;
        goto LABEL_9;
      }
    }
    else if ( !this->fields.isHpSecondUpMax )
    {
      isAtkUpMax = this->fields.isAtkSecondUpMax;
LABEL_9:
      v5 = isAtkUpMax;
      goto LABEL_10;
    }
    v5 = 1;
  }
  else
  {
    v5 = 0;
  }
LABEL_10:
  CanNotSelectSecondStatusMaterial = CombineServantListViewItem__IsCanNotSelectSecondStatusMaterial(this, method);
  if ( !this->fields.isFavorite
    && !this->fields.isLock
    && !this->fields.isChoice
    && !this->fields.isPush
    && !this->fields.isHeroineSvt
    && !this->fields.isEventJoin
    && !this->fields.isParty
    && !this->fields.isUseSupport
    && !this->fields.isUseRecommendSupport
    && !this->fields.isGrandSvt )
  {
    v10 = CanNotSelectSecondStatusMaterial;
    if ( this->fields.isLimitCntTarget )
    {
LABEL_28:
      v8 = 1;
LABEL_29:
      CanNotSelectSecondStatusMaterial = v10;
      return v8
          || CanNotSelectSecondStatusMaterial
          || v5
          || this->fields.isNotSelectStatusUpHp
          || this->fields.isNotSelectStatusUpAtk
          || this->fields.isNotSelectSecondStatusUpHp
          || this->fields.isNotSelectSecondStatusUpAtk;
    }
    if ( this->fields.type != 5 )
    {
      if ( CombineServantListViewItem__get_IsProtected(this, v7) )
        goto LABEL_28;
      isStatusUpSvt = this->fields.isStatusUpSvt;
    }
    v8 = isStatusUpSvt && !this->fields.isCanStUp;
    goto LABEL_29;
  }
  v8 = 1;
  return v8
      || CanNotSelectSecondStatusMaterial
      || v5
      || this->fields.isNotSelectStatusUpHp
      || this->fields.isNotSelectStatusUpAtk
      || this->fields.isNotSelectSecondStatusUpHp
      || this->fields.isNotSelectSecondStatusUpAtk;
}


bool CombineServantListViewItem__get_IsCanNotSelectPush(CombineServantListViewItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0
  __int64 v5; // x1
  UserServantEntity_o *v6; // x0

  if ( this->fields.isEventJoin )
    return 1;
  if ( this->fields.isCanNotLock )
    return 1;
  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity || UserServantEntity__IsLeave(userSvtEntity, 0) )
    return 1;
  v6 = this->fields.userSvtEntity;
  if ( !v6 )
    goto LABEL_12;
  if ( UserServantEntity__IsCombineMaterial(v6, 0) )
    return 1;
  v6 = this->fields.userSvtEntity;
  if ( !v6 )
    goto LABEL_12;
  if ( UserServantEntity__IsStatusUp(v6, 0) )
    return 1;
  v6 = this->fields.userSvtEntity;
  if ( !v6 )
LABEL_12:
    sub_1D0F30C(v6, v5);
  return UserServantEntity__IsMaterialTd(v6, 0);
}


bool CombineServantListViewItem__get_IsCanStatusUp(CombineServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isCanStUp;
}


bool CombineServantListViewItem__get_IsChoice(CombineServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isChoice;
}


bool CombineServantListViewItem__get_IsCmdCardSlotOpen(CombineServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isCmdCardSlotOpen;
}


bool CombineServantListViewItem__get_IsCombineEnableServant(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  return !this->fields.isHeroineSvt && !this->fields.isEventJoin;
}


bool CombineServantListViewItem__get_IsCombineExpCampaignTarget(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isCombineExpCampaignTarget;
}


bool CombineServantListViewItem__get_IsCommandCardExceedmax(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isCommandCardExceedMax;
}


bool CombineServantListViewItem__get_IsDispAtkStatusUpInfo(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isDispAtkStatusUpInfo;
}


bool CombineServantListViewItem__get_IsDispChoice(CombineServantListViewItem_o *this, const MethodInfo *method)
{
  if ( this->fields.isSwapChoice )
    return !this->fields.isChoice;
  else
    return this->fields.isChoice;
}


bool CombineServantListViewItem__get_IsDispHpStatusUpInfo(CombineServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isDispHpStatusUpInfo;
}


bool CombineServantListViewItem__get_IsDispLock(CombineServantListViewItem_o *this, const MethodInfo *method)
{
  if ( this->fields.isSwapLock )
    return !this->fields.isLock;
  else
    return this->fields.isLock;
}


bool CombineServantListViewItem__get_IsDragSelect(CombineServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.dragSelectNum >= 0;
}


bool CombineServantListViewItem__get_IsEquipedCmdCard(CombineServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isEquipedCmdCard;
}


bool CombineServantListViewItem__get_IsEventJoin(CombineServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isEventJoin;
}


bool CombineServantListViewItem__get_IsExpUpSvt(CombineServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isExpUpSvt;
}


bool CombineServantListViewItem__get_IsFavorite(CombineServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isFavorite;
}


bool CombineServantListViewItem__get_IsFortification(CombineServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isFortification;
}


bool CombineServantListViewItem__get_IsFriendshipExceedItemNum(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isFriendshipExceedItemNum;
}


bool CombineServantListViewItem__get_IsFriendshipExceedMax(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isFriendshipExceedMax;
}


bool CombineServantListViewItem__get_IsFriendshipRankMax(CombineServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isFriendshipRankMax;
}


bool CombineServantListViewItem__get_IsGrandServant(CombineServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isGrandSvt;
}


bool CombineServantListViewItem__get_IsHeroine(CombineServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isHeroineSvt;
}


bool CombineServantListViewItem__get_IsHpAdjustMax(CombineServantListViewItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0

  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_1D0F30C(0, method);
  return UserServantEntity__isAdjustHpMax(userSvtEntity, 0);
}


bool CombineServantListViewItem__get_IsHpStatusMax(CombineServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isNotSelectStatusUpHp;
}


bool CombineServantListViewItem__get_IsHpUpMax(CombineServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isHpUpMax;
}


bool CombineServantListViewItem__get_IsIgnoreCombineLimitSpecial(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isIgnoreCombineLimitSpecial;
}


bool CombineServantListViewItem__get_IsLimitCntMax(CombineServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isLimitCntMax;
}


bool CombineServantListViewItem__get_IsLimitCountSealed(CombineServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isSealedLimitCount;
}


bool CombineServantListViewItem__get_IsLimitTarget(CombineServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isLimitCntTarget;
}


bool CombineServantListViewItem__get_IsLimitUpItemNum(CombineServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isLimitUpItemNum;
}


bool CombineServantListViewItem__get_IsLock(CombineServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isLock;
}


bool CombineServantListViewItem__get_IsLvExceedItemNum(CombineServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isLvExceedItemNum;
}


bool CombineServantListViewItem__get_IsLvExceedMax(CombineServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isLvExceedMax;
}


bool CombineServantListViewItem__get_IsLvMax(CombineServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isLvMax;
}


bool CombineServantListViewItem__get_IsMaterialTdSvt(CombineServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isMaterialTdSvt;
}


bool CombineServantListViewItem__get_IsMaxNextLv(CombineServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isMaxNextLv;
}


bool CombineServantListViewItem__get_IsMtSelect(CombineServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isMaterialSvt;
}


bool CombineServantListViewItem__get_IsOrganization(CombineServantListViewItem_o *this, const MethodInfo *method)
{
  ServantEntity_o *servantEntity; // x0

  servantEntity = this->fields.servantEntity;
  if ( !servantEntity )
    sub_1D0F30C(0, method);
  return ServantEntity__get_IsOrganization(servantEntity, 0);
}


bool CombineServantListViewItem__get_IsParty(CombineServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isParty;
}


bool CombineServantListViewItem__get_IsProtected(CombineServantListViewItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0
  __int64 v4; // x1
  UserServantEntity_o *v5; // x0

  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    return 0;
  if ( UserServantEntity__IsProtectedEventServant(userSvtEntity, 0) )
    return 1;
  v5 = this->fields.userSvtEntity;
  if ( !v5 )
    sub_1D0F30C(0, v4);
  return UserServantEntity__IsNotCombineResourceServant(v5, 0);
}


bool CombineServantListViewItem__get_IsPush(CombineServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isPush;
}


bool CombineServantListViewItem__get_IsSameServant(CombineServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isSameSvt;
}


bool CombineServantListViewItem__get_IsSealCombineLimit(CombineServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isSealCombineLimit;
}


bool CombineServantListViewItem__get_IsSecondAtkAdjustMax(CombineServantListViewItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0

  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_1D0F30C(0, method);
  return UserServantEntity__isSecondAdjustAtkMax(userSvtEntity, 0);
}


bool CombineServantListViewItem__get_IsSecondAtkStatusMax(CombineServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isNotSelectSecondStatusUpAtk;
}


bool CombineServantListViewItem__get_IsSecondAtkUpMax(CombineServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isAtkSecondUpMax;
}


bool CombineServantListViewItem__get_IsSecondHpAdjustMax(CombineServantListViewItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0

  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_1D0F30C(0, method);
  return UserServantEntity__isSecondAdjustHpMax(userSvtEntity, 0);
}


bool CombineServantListViewItem__get_IsSecondHpStatusMax(CombineServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isNotSelectSecondStatusUpHp;
}


bool CombineServantListViewItem__get_IsSecondHpUpMax(CombineServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isHpSecondUpMax;
}


bool CombineServantListViewItem__get_IsSelectMax(CombineServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isMaxSelect;
}


bool CombineServantListViewItem__get_IsSkillUpItemNum(CombineServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isSkillUpItemNum;
}


bool CombineServantListViewItem__get_IsStatusUp(CombineServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isStatusUpSvt;
}


bool CombineServantListViewItem__get_IsSwapChoice(CombineServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isSwapChoice;
}


bool CombineServantListViewItem__get_IsSwapLock(CombineServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isSwapLock;
}


bool CombineServantListViewItem__get_IsUseRecommendSupportServant(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isUseRecommendSupport;
}


bool CombineServantListViewItem__get_IsUseSupportServant(CombineServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isUseSupport;
}


int32_t CombineServantListViewItem__get_ListType(CombineServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.type;
}


CombineServantListViewNoticeTween_o *CombineServantListViewItem__get_NoticeTween(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._NoticeTween_k__BackingField;
}


ServantEntity_o *CombineServantListViewItem__get_ServantEntity(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.servantEntity;
}


int32_t CombineServantListViewItem__get_SkillOpenItemId(CombineServantListViewItem_o *this, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v4; // x1
  struct UserServantEntity_o *userSvtEntity; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v6; // x19
  __int64 v7; // x20
  __int64 v8; // x21
  Il2CppObject *Entity; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v11; // 0:x0.16

  if ( (byte_4E713EC & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMaster_SvtCoinMaster___);
    sub_1D0F0B4(&DataManager_TypeInfo);
    sub_1D0F0B4(&Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__GetEntity__);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4E713EC = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_SvtCoinMaster___);
  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_12;
  v6 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  v8 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v11.fields.currentCryptoKey = v8;
  *(_QWORD *)&v11.fields.fakeValue = v7;
  Master_object = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v11, 0);
  if ( !v6 )
LABEL_12:
    sub_1D0F30C(Master_object, v4);
  Entity = DataMasterBase_object__object__int___GetEntity(
             v6,
             (int32_t)Master_object,
             (const MethodInfo_3535B7C *)Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__GetEntity__);
  if ( Entity )
    return (int32_t)Entity[1].monitor;
  else
    return -1;
}


int32_t CombineServantListViewItem__get_SkillOpenItemNum(CombineServantListViewItem_o *this, const MethodInfo *method)
{
  int64_t Master_object; // x0
  __int64 v4; // x1
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v6; // q1
  UserSvtCoinMaster_o *v7; // x20
  struct UserServantEntity_o *v8; // x8
  int64_t v9; // x19
  __int64 v10; // x21
  __int64 v11; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v13; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v14; // [xsp+20h] [xbp-50h]
  UserSvtCoinEntity_o *entity; // [xsp+48h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_4E713ED & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMaster_UserSvtCoinMaster___);
    sub_1D0F0B4(&DataManager_TypeInfo);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4E713ED = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_UserSvtCoinMaster___);
  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_17;
  v6 = *(_OWORD *)&userSvtEntity->fields.userId.fields.fakeValue;
  v7 = (UserSvtCoinMaster_o *)Master_object;
  *(_OWORD *)&v14.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v14.fields.fakeValue = v6;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v13 = v14;
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50334724(&v13, 0);
  v8 = this->fields.userSvtEntity;
  if ( !v8 )
    goto LABEL_17;
  v9 = Master_object;
  v11 = *(_QWORD *)&v8->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&v8->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v16.fields.currentCryptoKey = v11;
  *(_QWORD *)&v16.fields.fakeValue = v10;
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v16, 0);
  if ( !v7 )
    goto LABEL_17;
  Master_object = UserSvtCoinMaster__TryGetEntity(v7, &entity, v9, Master_object, 0);
  if ( (Master_object & 1) != 0 )
  {
    if ( entity )
      return entity->fields.num;
LABEL_17:
    sub_1D0F30C(Master_object, v4);
  }
  return 0;
}


int32_t CombineServantListViewItem__get_SvtActualRariry(CombineServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.actualRarity;
}


int32_t CombineServantListViewItem__get_SvtId(CombineServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.svtId;
}


int32_t CombineServantListViewItem__get_SvtRariry(CombineServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.rarity;
}


UserServantEntity_o *CombineServantListViewItem__get_UserSvtEntity(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  CombineServantListViewItem_o *v2; // x19
  struct UserServantEntity_o *v3; // x8
  _QWORD *p_userSvtEntity; // x19
  struct UserServantEntity_o *userSvtEntity; // t1
  __int128 v6; // q1
  int64_t v7; // x20
  Il2CppObject *Entity; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v10; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v11; // [xsp+20h] [xbp-40h]

  v2 = this;
  if ( (byte_4E713E8 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1D0F0B4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    this = (CombineServantListViewItem_o *)sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4E713E8 = 1;
  }
  userSvtEntity = v2->fields.userSvtEntity;
  p_userSvtEntity = &v2->fields.userSvtEntity;
  v3 = userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_9;
  v6 = *(_OWORD *)&v3->fields.id.fields.fakeValue;
  *(_OWORD *)&v11.fields.currentCryptoKey = *(_OWORD *)&v3->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v11.fields.fakeValue = v6;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v10 = v11;
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50334724(&v10, 0);
  this = (CombineServantListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (this = (CombineServantListViewItem_o *)DataManager__GetMasterData_object_(
                                                 (DataManager_o *)this,
                                                 (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0 )
  {
LABEL_9:
    sub_1D0F30C(this, method);
  }
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             v7,
             (const MethodInfo_353832C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  *p_userSvtEntity = Entity;
  sub_1D0F058(p_userSvtEntity, Entity);
  return (UserServantEntity_o *)Entity;
}


int64_t CombineServantListViewItem__get_UserSvtId(CombineServantListViewItem_o *this, const MethodInfo *method)
{
  CombineServantListViewItem_o *v2; // x19
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v4; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v6; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+20h] [xbp-40h]

  v2 = this;
  if ( (byte_4E713E9 & 1) == 0 )
  {
    this = (CombineServantListViewItem_o *)sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4E713E9 = 1;
  }
  userSvtEntity = v2->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_1D0F30C(this, method);
  v4 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v7.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v7.fields.fakeValue = v4;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v6 = v7;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50334724(&v6, 0);
}


void CombineServantListViewItem__setUserServantEntity(
        CombineServantListViewItem_o *this,
        UserServantEntity_o *entity,
        const MethodInfo *method)
{
  struct UserServantEntity_o **p_userSvtEntity; // x20
  __int64 v6; // x1
  __int64 userSvtEntity; // x0
  struct ServantEntity_o *ServantEntity; // x0
  struct ServantEntity_o *v9; // x8
  __int64 v10; // x21
  __int64 v11; // x22
  struct ServantEntity_o *v12; // x8
  int64_t v13; // x8
  __int64 rarity; // x21
  _BOOL8 v15; // x10
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_4E713E7 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_1D0F0B4(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4E713E7 = 1;
  }
  this->fields.userSvtEntity = entity;
  p_userSvtEntity = &this->fields.userSvtEntity;
  sub_1D0F058(&this->fields.userSvtEntity, entity);
  userSvtEntity = (__int64)this->fields.userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_18;
  ServantEntity = UserServantEntity__GetServantEntity((UserServantEntity_o *)userSvtEntity, -1, 0);
  this->fields.servantEntity = ServantEntity;
  userSvtEntity = sub_1D0F058(&this->fields.servantEntity, ServantEntity);
  v9 = this->fields.servantEntity;
  if ( !v9 )
    goto LABEL_18;
  v11 = *(_QWORD *)&v9->fields.id.fields.currentCryptoKey;
  v10 = *(_QWORD *)&v9->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v16.fields.currentCryptoKey = v11;
  *(_QWORD *)&v16.fields.fakeValue = v10;
  userSvtEntity = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v16, 0);
  v12 = this->fields.servantEntity;
  this->fields.svtId = userSvtEntity;
  if ( !v12 )
    goto LABEL_18;
  this->fields.classId = v12->fields.classId;
  userSvtEntity = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !userSvtEntity )
    goto LABEL_18;
  userSvtEntity = (__int64)DataManager__GetMasterData_object_(
                             (DataManager_o *)userSvtEntity,
                             (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !userSvtEntity
    || (userSvtEntity = (__int64)DataMasterBase_object__object__int___GetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)userSvtEntity,
                                   this->fields.classId,
                                   (const MethodInfo_3535B7C *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__)) == 0
    || (v13 = *(int *)(userSvtEntity + 52),
        userSvtEntity = (__int64)this->fields.userSvtEntity,
        this->fields.priority = v13,
        this->fields.sortValue1B = v13,
        !userSvtEntity)
    || (rarity = (unsigned int)this->fields.rarity,
        (userSvtEntity = (__int64)UserServantEntity__get_BaseServantEntity((UserServantEntity_o *)userSvtEntity, 0)) == 0)
    || !*p_userSvtEntity )
  {
LABEL_18:
    sub_1D0F30C(userSvtEntity, v6);
  }
  v15 = this->fields.type == 2 && !this->fields.isLimitCntMax;
  this->fields.sortValue2 = ((__int64)*(int *)(userSvtEntity + 208) << 16)
                          | (rarity << 48)
                          | (*p_userSvtEntity)->fields.lv
                          | v15;
}


void CombineServantListViewItem__set_DragSelectNum(
        CombineServantListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields.dragSelectNum = value;
}


void CombineServantListViewItem__set_IsAtkStatusMax(
        CombineServantListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  if ( !this )
    sub_1D0F30C(0, value);
  this->fields.isNotSelectStatusUpAtk = this->fields.atkBase > 0 && value;
}


void CombineServantListViewItem__set_IsCanNotLock(
        CombineServantListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields.isCanNotLock = value;
}


void CombineServantListViewItem__set_IsDragSelect(
        CombineServantListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  if ( !this )
    sub_1D0F30C(0, value);
  this->fields.dragSelectNum = value - 1;
}


void CombineServantListViewItem__set_IsHpStatusMax(
        CombineServantListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  if ( !this )
    sub_1D0F30C(0, value);
  this->fields.isNotSelectStatusUpHp = this->fields.hpBase > 0 && value;
}


void CombineServantListViewItem__set_IsMaxNextLv(
        CombineServantListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields.isMaxNextLv = value;
}


void CombineServantListViewItem__set_IsMtSelect(
        CombineServantListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields.isMaterialSvt = value;
}


void CombineServantListViewItem__set_IsSecondAtkStatusMax(
        CombineServantListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  if ( !this )
    sub_1D0F30C(0, value);
  this->fields.isNotSelectSecondStatusUpAtk = this->fields.atkBase > 0 && value;
}


void CombineServantListViewItem__set_IsSecondHpStatusMax(
        CombineServantListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  if ( !this )
    sub_1D0F30C(0, value);
  this->fields.isNotSelectSecondStatusUpHp = this->fields.hpBase > 0 && value;
}


void CombineServantListViewItem__set_IsSelectMax(
        CombineServantListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields.isMaxSelect = value;
}


void CombineServantListViewItem__set_NoticeTween(
        CombineServantListViewItem_o *this,
        CombineServantListViewNoticeTween_o *value,
        const MethodInfo *method)
{
  this->fields._NoticeTween_k__BackingField = value;
  sub_1D0F058(&this->fields._NoticeTween_k__BackingField, value);
}


void CombineServantListViewItem___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19

  if ( (byte_4E713F1 & 1) == 0 )
  {
    sub_1D0F0B4(&CombineServantListViewItem___c_TypeInfo);
    byte_4E713F1 = 1;
  }
  v1 = (Il2CppObject *)sub_1D0F300(CombineServantListViewItem___c_TypeInfo);
  System_Object___ctor(v1, 0);
  CombineServantListViewItem___c_TypeInfo->static_fields->__9 = (struct CombineServantListViewItem___c_o *)v1;
  sub_1D0F058(CombineServantListViewItem___c_TypeInfo->static_fields, v1);
}


void CombineServantListViewItem___c___ctor(CombineServantListViewItem___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool CombineServantListViewItem___c___SetIsCombineExpCampaignTarget_b__119_0(
        CombineServantListViewItem___c_o *this,
        EventCampaignEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1D0F30C(this, 0);
  return x->fields.target == 2 || x->fields.target == 27;
}


void CombineServantListViewItem___c__DisplayClass118_0___ctor(
        CombineServantListViewItem___c__DisplayClass118_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool CombineServantListViewItem___c__DisplayClass118_0___SetSortValue_b__0(
        CombineServantListViewItem___c__DisplayClass118_0_o *this,
        EventGroupEntity_o *entity,
        const MethodInfo *method)
{
  UnityEngine_Object_o *manager; // x21
  int64_t IsLargeSuccessCampaignClassId; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3
  struct CombineServantListViewItem_o *_4__this; // x8
  struct CombineServantListViewItem_o *v10; // x8
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v12; // q1
  struct CombineServantListViewManager_o *v13; // x22
  int32_t eventId; // w21
  const MethodInfo *v15; // x3
  struct CombineServantListViewItem_o *v16; // x8
  struct CombineServantListViewItem_o *v17; // x8
  ServantFilterMaster_o *v18; // x21
  int32_t svtId; // w22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // kr00_16
  struct CombineServantListViewItem_o *v23; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v24; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v25; // [xsp+20h] [xbp-50h]

  if ( (byte_4E713F2 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMaster_ServantFilterMaster___);
    sub_1D0F0B4(&DataManager_TypeInfo);
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4E713F2 = 1;
  }
  manager = (UnityEngine_Object_o *)this->fields.manager;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  IsLargeSuccessCampaignClassId = UnityEngine_Object__op_Implicit(manager, 0);
  if ( (IsLargeSuccessCampaignClassId & 1) == 0 )
    goto LABEL_37;
  if ( !entity )
    goto LABEL_34;
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_34;
  IsLargeSuccessCampaignClassId = (int64_t)this->fields.manager;
  if ( !IsLargeSuccessCampaignClassId )
    goto LABEL_34;
  IsLargeSuccessCampaignClassId = CombineServantListViewManager__IsLargeSuccessCampaignClassId(
                                    (CombineServantListViewManager_o *)IsLargeSuccessCampaignClassId,
                                    entity->fields.eventId,
                                    _4__this->fields.svtId,
                                    v8);
  if ( (IsLargeSuccessCampaignClassId & 1) == 0 )
  {
    v10 = this->fields.__4__this;
    if ( !v10 )
      goto LABEL_34;
    userSvtEntity = v10->fields.userSvtEntity;
    if ( !userSvtEntity )
      goto LABEL_34;
    v12 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
    v13 = this->fields.manager;
    eventId = entity->fields.eventId;
    *(_OWORD *)&v25.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v25.fields.fakeValue = v12;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v24 = v25;
    IsLargeSuccessCampaignClassId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50334724(&v24, 0);
    if ( !v13 )
      goto LABEL_34;
    if ( !CombineServantListViewManager__IsExchangeSvtExist(
            (CombineServantListViewManager_o *)IsLargeSuccessCampaignClassId,
            eventId,
            IsLargeSuccessCampaignClassId,
            v15) )
    {
LABEL_37:
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      IsLargeSuccessCampaignClassId = (int64_t)DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_EventCampaignMaster___);
      v16 = this->fields.__4__this;
      if ( !v16 || !entity || !IsLargeSuccessCampaignClassId )
        goto LABEL_34;
      if ( !EventCampaignMaster__IsEnableServant(
              (EventCampaignMaster_o *)IsLargeSuccessCampaignClassId,
              v16->fields.svtId,
              entity->fields.eventId,
              0) )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        IsLargeSuccessCampaignClassId = (int64_t)DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_ServantFilterMaster___);
        v17 = this->fields.__4__this;
        if ( v17 )
        {
          v18 = (ServantFilterMaster_o *)IsLargeSuccessCampaignClassId;
          svtId = v17->fields.svtId;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(svtId, 0);
          v7 = *(_QWORD *)&v20.fields.fakeValue;
          IsLargeSuccessCampaignClassId = *(_QWORD *)&v20.fields.currentCryptoKey;
          if ( v18 )
          {
            IsLargeSuccessCampaignClassId = ServantFilterMaster__IsEnableServant(v18, v20, entity->fields.eventId, 0);
            if ( (IsLargeSuccessCampaignClassId & 1) != 0 )
              return 1;
            v23 = this->fields.__4__this;
            if ( v23 )
            {
              IsLargeSuccessCampaignClassId = (int64_t)v23->fields.userSvtEntity;
              if ( IsLargeSuccessCampaignClassId )
                return UserServantEntity__getEventUpVal(
                         (UserServantEntity_o *)IsLargeSuccessCampaignClassId,
                         v23->fields.setupInfo,
                         entity->fields.eventId,
                         0,
                         0);
            }
          }
        }
LABEL_34:
        sub_1D0F30C(IsLargeSuccessCampaignClassId, v7);
      }
    }
  }
  return 1;
}