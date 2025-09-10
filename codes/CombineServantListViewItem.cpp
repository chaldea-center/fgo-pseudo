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
  bool v14; // w21
  IconLabelInfo_o *v15; // x20
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  IconLabelInfo_o *v18; // x20
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  System_Collections_Generic_List_int__o *v21; // x20
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  System_Collections_Generic_List_int__o *v24; // x20
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_userSvtEntity; // x23
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  int64_t Master_object; // x0
  const MethodInfo *v33; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v34; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v35; // x24
  __int64 v36; // x20
  __int64 v37; // x25
  Il2CppObject *v38; // x0
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  __int128 v41; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c **v42; // x22
  UserServantCollectionMaster_o *v43; // x24
  int64_t v44; // x27
  UserServantCollectionEntity_o *EntityDefinitely; // x26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v46; // x8
  UserServantEntity_o *v47; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v48; // q0
  int64_t v49; // x0
  __int128 v50; // q1
  bool v51; // w8
  __int64 v52; // x20
  __int64 v53; // x24
  struct ServantEntity_o *servantEntity; // x8
  BalanceConfig_c *v55; // x0
  int32_t adjustHp; // w20
  struct BalanceConfig_StaticFields *static_fields; // x8
  const MethodInfo *v58; // x2
  const MethodInfo *v59; // x1
  const MethodInfo *v60; // x1
  int64_t UserSvtId; // x0
  unsigned int v62; // w8
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
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v75; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v76; // q0
  __int64 v77; // x24
  System_Collections_Generic_IEnumerator_T__c *v78; // x8
  __int64 v79; // x9
  int32_t *v80; // x10
  __int64 v81; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v82; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v83; // q0
  UserRecommendSupportMaster_o *v84; // x24
  Il2CppObject *v85; // x0
  __int128 v86; // q1
  UserServantGrandMaster_o *v87; // x24
  UserServantEntity_o *v88; // x8
  Il2CppObject *MasterData_object; // x24
  struct ServantEntity_o *v90; // x8
  __int64 v91; // x20
  __int64 v92; // x21
  int64_t v93; // x29
  Il2CppObject *v94; // x24
  struct ServantEntity_o *v95; // x8
  __int64 v96; // x20
  __int64 v97; // x21
  int64_t v98; // x29
  __int64 v99; // x2
  struct System_Int32_array *commandCardParam; // x20
  int max_length; // w8
  __int64 v102; // x21
  int32_t v103; // w26
  bool v104; // w29
  __int64 v105; // x1
  System_Collections_Generic_IEnumerator_T__o *v106; // x28
  System_Collections_Generic_IEnumerator_T__c *v107; // x8
  __int64 v108; // x9
  int32_t *v109; // x10
  __int64 v110; // x0
  System_Collections_Generic_IEnumerator_T__c *v111; // x8
  __int64 v112; // x9
  int32_t *v113; // x10
  __int64 v114; // x0
  __int64 v115; // x0
  __int64 v116; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v117; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v118; // q0
  __int64 v119; // x24
  System_Collections_Generic_IEnumerator_T__c *v120; // x8
  __int64 v121; // x9
  int32_t *v122; // x10
  __int64 v123; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v124; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v125; // q0
  UserRecommendSupportMaster_o *v126; // x24
  Il2CppObject *v127; // x0
  __int128 v128; // q1
  UserServantGrandMaster_o *v129; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v130; // x8
  __int64 v131; // x20
  __int64 v132; // x21
  int32_t v133; // w20
  int32_t SvtClassId; // w0
  int32_t SvtClassGroupType; // w24
  int32_t materialExp; // w20
  BalanceConfig_c *v137; // x0
  int SameClassExp; // w21
  double v139; // d0
  int32_t v140; // w8
  UserServantEntity_o *v141; // x8
  ServantLimitMaster_o *v142; // x24
  __int64 v143; // x20
  __int64 v144; // x21
  int32_t v145; // w28
  int32_t v146; // w8
  int32_t v147; // w24
  bool v148; // w8
  bool v149; // w8
  bool v150; // w8
  bool v151; // w8
  Il2CppObject *v152; // x24
  struct ServantEntity_o *v153; // x8
  __int64 v154; // x20
  __int64 v155; // x21
  int64_t v156; // x28
  int32_t v157; // w8
  Il2CppObject *v158; // x0
  __int64 v159; // x20
  __int64 v160; // x21
  ServantLimitImageMaster_o *v161; // x24
  int32_t v162; // w28
  UserServantEntity_o *v163; // x8
  const MethodInfo *v164; // x1
  _BOOL4 isHeroineSvt; // w8
  UserServantEntity_o *v166; // x9
  int32_t combineLimitId; // w24
  __int64 v168; // x20
  __int64 v169; // x21
  int32_t v170; // w28
  int64_t v171; // x24
  __int64 v172; // x20
  __int64 v173; // x21
  __int64 v174; // x8
  UserItemMaster_o *v175; // x28
  unsigned __int64 v176; // x27
  UserServantEntity_o *v177; // x8
  __int128 v178; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c *v179; // x0
  int32_t v180; // w29
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c **v181; // x26
  int32_t v182; // w22
  UserServantEntity_o *v183; // x8
  UserServantEntity_o *v184; // x8
  const MethodInfo *v185; // x1
  int32_t v186; // w8
  __int64 v187; // x1
  System_Collections_Generic_IEnumerator_T__o *v188; // x28
  System_Collections_Generic_IEnumerator_T__c *v189; // x8
  __int64 v190; // x9
  int32_t *v191; // x10
  __int64 v192; // x0
  System_Collections_Generic_IEnumerator_T__c *v193; // x8
  __int64 v194; // x9
  int32_t *v195; // x10
  __int64 v196; // x0
  __int64 v197; // x0
  __int64 v198; // x1
  UserServantEntity_o *v199; // x8
  __int128 v200; // q0
  __int128 v201; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c *v202; // x8
  __int64 v203; // x24
  System_Collections_Generic_IEnumerator_T__c *v204; // x8
  __int64 v205; // x9
  int32_t *v206; // x10
  __int64 v207; // x0
  int id; // w24
  int32_t lv; // w20
  int32_t SameSvtNpLvCache; // w0
  const MethodInfo *v211; // x4
  int32_t v212; // w24
  __int64 v213; // x20
  UserServantEntity_o *v214; // x8
  __int128 v215; // q0
  UserRecommendSupportMaster_o *v216; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c *v217; // x0
  Il2CppObject *v218; // x0
  __int128 v219; // q1
  UserServantGrandMaster_o *v220; // x24
  bool v221; // w8
  bool IsMaterialTd; // w0
  UserServantEntity_o *v223; // x8
  UserServantEntity_o *v224; // x8
  bool isLevelMax; // w0
  _BOOL4 v226; // w8
  ServantExceedEntity_o *SvtExceedEnt; // x0
  int32_t *v228; // x27
  CommonConsumeEntity_array *IdEntityList; // x0
  CommonConsumeEntity_array *v230; // x29
  System_Collections_Generic_HashSet_int__o *v231; // x24
  System_Collections_Generic_HashSet_int__o *v232; // x28
  int v233; // w8
  __int64 v234; // x20
  CommonConsumeEntity_o *v235; // x26
  UserServantEntity_o *v236; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v237; // x29
  __int64 v238; // x20
  __int64 v239; // x21
  UserServantEntity_o *v240; // x29
  System_Int32_array *v241; // x24
  __int64 v242; // x20
  __int64 v243; // x24
  struct ServantEntity_o *v244; // x8
  bool v245; // zf
  UserServantEntity_o *v246; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  int32_t v248; // w2
  const MethodInfo *v249; // x3
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  int32_t v251; // w2
  const MethodInfo *v252; // x3
  int64_t v253; // x8
  struct ServantEntity_o *v254; // x9
  UserServantEntity_o *v255; // x8
  unsigned __int64 v256; // x9
  _BOOL8 v257; // x10
  __int64 v258; // x20
  __int64 v259; // x21
  struct UserServantEntity_o *v260; // x8
  __int128 v261; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c *v262; // x0
  int64_t v263; // x8
  int32_t maxFriendshipRank; // w20
  int32_t friendshipExceedCount; // w21
  UserServantEntity_o *v266; // x24
  __int64 v267; // x20
  __int64 v268; // x21
  UserItemMaster_o *v269; // x24
  unsigned __int64 v270; // x27
  __int64 v271; // x29
  bool v272; // w8
  bool v273; // w26
  int32_t v274; // w0
  int32_t v275; // w24
  int32_t v276; // w29
  int32_t v277; // w28
  int v278; // w21
  TreasureDvcLvEntity_o *v279; // x0
  int64_t v280; // [xsp+18h] [xbp-2D8h]
  bool *p_isLimitUpItemNum; // [xsp+20h] [xbp-2D0h]
  bool *p_isStatusUpSvt; // [xsp+28h] [xbp-2C8h]
  struct IconLabelInfo_o **p_iconLabelInfo2; // [xsp+30h] [xbp-2C0h]
  UserServantCollectionEntity_o *v284; // [xsp+38h] [xbp-2B8h]
  bool v286; // [xsp+40h] [xbp-2B0h]
  struct ServantEntity_o **p_servantEntity; // [xsp+50h] [xbp-2A0h]
  UserServantEntity_o *v291; // [xsp+58h] [xbp-298h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v292; // [xsp+60h] [xbp-290h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v293; // [xsp+80h] [xbp-270h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v294; // [xsp+A0h] [xbp-250h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v295; // [xsp+C0h] [xbp-230h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v296; // [xsp+E0h] [xbp-210h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v297; // [xsp+100h] [xbp-1F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v298; // [xsp+120h] [xbp-1D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v299; // [xsp+140h] [xbp-1B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v300; // [xsp+160h] [xbp-190h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v301; // [xsp+180h] [xbp-170h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v302; // [xsp+1A0h] [xbp-150h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v303; // [xsp+1C0h] [xbp-130h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v304; // [xsp+1E0h] [xbp-110h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v305; // [xsp+200h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v306; // [xsp+220h] [xbp-D0h]
  UserItemEntity_o *v307; // [xsp+248h] [xbp-A8h] BYREF
  int32_t tdMaxLv; // [xsp+254h] [xbp-9Ch] BYREF
  int32_t tdLv[2]; // [xsp+258h] [xbp-98h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+260h] [xbp-90h] BYREF
  UserItemEntity_o *v311; // [xsp+268h] [xbp-88h] BYREF
  __int64 v312; // [xsp+270h] [xbp-80h] BYREF
  UserServantCommandCodeEntity_o *v313; // [xsp+278h] [xbp-78h] BYREF
  UserServantCommandCardEntity_o *v314; // [xsp+280h] [xbp-70h] BYREF
  UserServantCommandCodeEntity_o *entity; // [xsp+288h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v316; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v317; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v318; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v319; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v320; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v321; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v322; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v323; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v324; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v325; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v326; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v327; // 0:x0.16

  v14 = isParty;
  if ( (byte_4C2B44A & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_UserServantLeaderEntity__GetEnumerator__);
    sub_1C2D490(&Method_DataManager_GetMasterData_CombineLimitMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_CombineMaterialMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_FriendshipMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_TreasureDvcMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserServantCommandCardMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserServantLeaderMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_CommonConsumeMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_ServantLimitMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_SvtCoinMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_UserRecommendSupportMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_UserServantGrandMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C2D490(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_1C2D490(&Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__GetEntity__);
    sub_1C2D490(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
    sub_1C2D490(&Method_DataMasterBase_UserServantLeaderMaster__UserServantLeaderEntity__string__getEntityList__);
    sub_1C2D490(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1C2D490(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1C2D490(&System_IDisposable_TypeInfo);
    sub_1C2D490(&System_Collections_Generic_IEnumerator_UserServantLeaderEntity__TypeInfo);
    sub_1C2D490(&System_Collections_IEnumerator_TypeInfo);
    sub_1C2D490(&IconLabelInfo_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C2D490(&System_Math_TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C2B44A = 1;
  }
  entity = 0;
  v314 = 0;
  v313 = 0;
  v312 = 0;
  v311 = 0;
  tdInfo = 0;
  *(_QWORD *)tdLv = 0;
  tdMaxLv = 0;
  v307 = 0;
  v15 = (IconLabelInfo_o *)sub_1C2D6DC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v15, 0);
  this->fields.iconLabelInfo1 = v15;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.iconLabelInfo1, (int32_t)v15, v16, v17);
  v18 = (IconLabelInfo_o *)sub_1C2D6DC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v18, 0);
  this->fields.iconLabelInfo2 = v18;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.iconLabelInfo2, (int32_t)v18, v19, v20);
  v21 = (System_Collections_Generic_List_int__o *)sub_1C2D6DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v21,
    (const MethodInfo_376C30C *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.enableSkillUp = v21;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.enableSkillUp, (int32_t)v21, v22, v23);
  v24 = (System_Collections_Generic_List_int__o *)sub_1C2D6DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v24,
    (const MethodInfo_376C30C *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.enableAppendSkillUp = v24;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.enableAppendSkillUp, (int32_t)v24, v25, v26);
  ListViewItem___ctor((ListViewItem_o *)this, 0);
  *(_WORD *)&this->fields.isFavorite = 0;
  this->fields.isLock = 0;
  this->fields.isChoice = 0;
  this->fields.isEventJoin = 0;
  *(_WORD *)&this->fields.isLimitCntTarget = 0;
  *(_DWORD *)&this->fields.isStatusUpSvt = 0;
  this->fields.isMaxSelect = 0;
  *(_QWORD *)&this->fields.isLimitUpItemNum = 0;
  *(_WORD *)&this->fields.isAllAppendSkillLock = 0;
  this->fields.isLvExceedItemNum = 0;
  this->fields.isCanNotLock = 0;
  *(_WORD *)&this->fields.isEquipedCmdCard = 0;
  *(_DWORD *)&this->fields.isBaseSvt = 0;
  *(_WORD *)&this->fields.isTdLvMax = 0;
  this->fields.isMaterialTdSvt = 0;
  *(_DWORD *)&this->fields.isBaseLvMax = 0;
  this->fields.isGrandSvt = 0;
  *(_QWORD *)&this->fields.isAtkUpMax = 0;
  *(_DWORD *)&this->fields.isNotSelectSecondStatusUpAtk = 0;
  this->fields.index = index;
  this->fields.type = type;
  this->fields.setupInfo = setupInfo;
  p_isLimitUpItemNum = &this->fields.isLimitUpItemNum;
  p_isStatusUpSvt = &this->fields.isStatusUpSvt;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v27, v28);
  this->fields.userSvtEntity = userSvtEntity;
  p_userSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userSvtEntity;
  this->fields.isParty = v14;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.userSvtEntity, (int32_t)userSvtEntity, v30, v31);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantMaster___);
  v34 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_450;
  v35 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  v36 = *(_QWORD *)&v34[5].fields.currentCryptoKey;
  v37 = *(_QWORD *)&v34[5].fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v316.fields.currentCryptoKey = v36;
  *(_QWORD *)&v316.fields.fakeValue = v37;
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v316, 0);
  if ( !v35 )
    goto LABEL_450;
  v38 = DataMasterBase_object__object__int___GetEntity(
          v35,
          Master_object,
          (const MethodInfo_3387D98 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)v38;
  p_servantEntity = &this->fields.servantEntity;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.servantEntity, (int32_t)v38, v39, v40);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !userSvtEntity )
    goto LABEL_450;
  v41 = *(_OWORD *)&userSvtEntity->fields.userId.fields.fakeValue;
  v42 = &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo;
  v43 = (UserServantCollectionMaster_o *)Master_object;
  *(_OWORD *)&v306.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v306.fields.fakeValue = v41;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v305 = v306;
  v44 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v305, 0);
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(userSvtEntity->fields.svtId, 0);
  if ( !v43 )
    goto LABEL_450;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v43, v44, Master_object, 0);
  Master_object = (int64_t)UserGameMaster__getSelfUserGame(0);
  v280 = Master_object;
  if ( baseUsrSvtData )
  {
    v46 = *p_userSvtEntity;
    v47 = userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_450;
    v48 = v46[2];
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v306.fields.currentCryptoKey = v46[1];
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v306.fields.fakeValue = v48;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v304 = v306;
    v49 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v304, 0);
    v50 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
    *(_OWORD *)&v303.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v303.fields.fakeValue = v50;
    v51 = v49 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v303, 0);
  }
  else
  {
    v47 = userSvtEntity;
    v51 = 0;
  }
  this->fields.isBaseSvt = v51;
  v52 = *(_QWORD *)&v47->fields.svtId.fields.currentCryptoKey;
  v53 = *(_QWORD *)&v47->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v317.fields.currentCryptoKey = v52;
  *(_QWORD *)&v317.fields.fakeValue = v53;
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v317, 0);
  servantEntity = this->fields.servantEntity;
  this->fields.svtId = Master_object;
  if ( !servantEntity )
    goto LABEL_450;
  this->fields.classId = servantEntity->fields.classId;
  this->fields.isHeroineSvt = UserServantEntity__IsHeroine(v47, 0);
  Master_object = UserServantEntity__IsEventJoin(v47, 0);
  this->fields.isEventJoin = Master_object & 1;
  if ( !EntityDefinitely )
    goto LABEL_450;
  UserServantCollectionEntity__getFriendShipRankInfo(
    EntityDefinitely,
    &this->fields.friendship,
    &this->fields.friendshipMax,
    0);
  this->fields.maxLimitCnt = UserServantEntity__getLimitCntMax(v47, 0);
  this->fields.currentLimitCnt = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
                                   v47->fields.limitCount,
                                   0);
  v55 = BalanceConfig_TypeInfo;
  adjustHp = v47->fields.adjustHp;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v55 = BalanceConfig_TypeInfo;
  }
  static_fields = v55->static_fields;
  v284 = EntityDefinitely;
  this->fields.hpReinforceValue = static_fields->StatusUpAdjustHp * adjustHp;
  this->fields.atkReinforceValue = static_fields->StatusUpAdjustAtk * v47->fields.adjustAtk;
  UserServantEntity__getAdjustMaxData(
    v47,
    &this->fields.nowMaxHpReinforceValue,
    &this->fields.nowMaxAtkReinforceValue,
    0);
  CombineServantListViewItem__ModifyItem(this, isFavorite, v58);
  CombineServantListViewItem__SetOverwriteStatus(this, v59);
  UserSvtId = CombineServantListViewItem__get_UserSvtId(this, v60);
  EventFortificationDataLogic__SetFortification(
    &this->fields.isFortification,
    &this->fields.fortificationName,
    &this->fields.fortificationDetailName,
    UserSvtId,
    0);
  v62 = this->fields.type;
  if ( v62 <= 0xA && ((1 << v62) & 0x481) != 0 )
  {
    Master_object = (int64_t)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_450;
    if ( UserServantEntity__isLevelMax((UserServantEntity_o *)Master_object, 0) )
    {
      Master_object = (int64_t)*p_userSvtEntity;
      if ( !*p_userSvtEntity )
        goto LABEL_450;
      if ( UserServantEntity__isAdjustHpMax((UserServantEntity_o *)Master_object, 0) )
      {
        Master_object = (int64_t)*p_userSvtEntity;
        if ( !*p_userSvtEntity )
          goto LABEL_450;
        if ( UserServantEntity__isAdjustAtkMax((UserServantEntity_o *)Master_object, 0) )
        {
          Master_object = (int64_t)*p_userSvtEntity;
          if ( !*p_userSvtEntity )
            goto LABEL_450;
          if ( UserServantEntity__isSecondAdjustHpMax((UserServantEntity_o *)Master_object, 0) )
          {
            Master_object = (int64_t)*p_userSvtEntity;
            if ( !*p_userSvtEntity )
              goto LABEL_450;
            if ( UserServantEntity__isSecondAdjustAtkMax((UserServantEntity_o *)Master_object, 0) )
              this->fields.isLvMax = 1;
          }
        }
      }
    }
    this->fields.isLimitCntMax = UserServantEntity__isLimitCountMax(userSvtEntity, 0);
    Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Master_object )
      goto LABEL_450;
    Master_object = (int64_t)DataManager__GetMasterData_object_(
                               (DataManager_o *)Master_object,
                               (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserServantLeaderMaster___);
    if ( !Master_object )
      goto LABEL_450;
    Master_object = *(_QWORD *)(Master_object + 40);
    if ( !Master_object )
      goto LABEL_450;
    Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                   (System_Collections_ObjectModel_Collection_T__o *)Master_object,
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
            goto LABEL_46;
        }
        v68 = (__int64)&klass->vtable[*p_offset];
      }
      else
      {
LABEL_46:
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
            goto LABEL_53;
        }
        v72 = (__int64)&v69->vtable[*v71];
      }
      else
      {
LABEL_53:
        v72 = sub_1C7DCA8(Enumerator, System_Collections_Generic_IEnumerator_UserServantLeaderEntity__TypeInfo, 0);
      }
      v73 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v72)(
              Enumerator,
              *(_QWORD *)(v72 + 8));
      if ( !v73 )
        sub_1C2D6EC(0, v74);
      v75 = *p_userSvtEntity;
      if ( !*p_userSvtEntity )
        sub_1C2D6EC(v73, v74);
      v76 = v75[2];
      v77 = *(_QWORD *)(v73 + 56);
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v306.fields.currentCryptoKey = v75[1];
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v306.fields.fakeValue = v76;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v302 = v306;
      if ( v77 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v302, 0) )
      {
        this->fields.isUseSupport = 1;
        break;
      }
    }
    v78 = Enumerator->klass;
    v79 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v80 = &v78->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v80 - 1) != System_IDisposable_TypeInfo )
      {
        --v79;
        v80 += 4;
        if ( !v79 )
          goto LABEL_65;
      }
      v81 = (__int64)&v78->vtable[*v80];
    }
    else
    {
LABEL_65:
      v81 = sub_1C7DCA8(Enumerator, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v81)(
      Enumerator,
      *(_QWORD *)(v81 + 8));
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserRecommendSupportMaster___);
    v82 = *p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_450;
    v83 = v82[2];
    v84 = (UserRecommendSupportMaster_o *)Master_object;
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v306.fields.currentCryptoKey = v82[1];
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v306.fields.fakeValue = v83;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v301 = v306;
    Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v301, 0);
    if ( !v84 )
      goto LABEL_450;
    this->fields.isUseRecommendSupport = UserRecommendSupportMaster__IsSettingServant(v84, Master_object, 0, 0);
    v85 = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserServantGrandMaster___);
    v86 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
    v87 = (UserServantGrandMaster_o *)v85;
    *(_OWORD *)&v300.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v300.fields.fakeValue = v86;
    Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v300, 0);
    if ( !v87 )
      goto LABEL_450;
    Master_object = UserServantGrandMaster__IsSettingServant(v87, Master_object, 0);
    v88 = this->fields.userSvtEntity;
    this->fields.isGrandSvt = Master_object & 1;
    if ( !v88 )
      goto LABEL_450;
    if ( UserServantEntity__IsCombineExp(v88, 0) )
      this->fields.isExpUpSvt = 1;
    Master_object = (int64_t)*p_servantEntity;
    if ( !*p_servantEntity )
      goto LABEL_450;
    if ( ServantEntity__get_IsStatusUp((ServantEntity_o *)Master_object, 0) )
      *p_isStatusUpSvt = 1;
    Master_object = (int64_t)*p_servantEntity;
    if ( !*p_servantEntity )
      goto LABEL_450;
    if ( ServantEntity__get_IsServantMaterialTd((ServantEntity_o *)Master_object, 0) )
      this->fields.isMaterialTdSvt = 1;
    Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Master_object )
      goto LABEL_450;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Master_object,
                          (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4C211E1 )
    {
      sub_1C2D490(&NetworkManager_TypeInfo);
      byte_4C211E1 = 1;
    }
    Master_object = (int64_t)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Master_object = (int64_t)NetworkManager_TypeInfo;
    }
    v90 = *p_servantEntity;
    if ( !*p_servantEntity )
      goto LABEL_450;
    v92 = *(_QWORD *)&v90->fields.id.fields.currentCryptoKey;
    v91 = *(_QWORD *)&v90->fields.id.fields.fakeValue;
    v93 = *(_QWORD *)(*(_QWORD *)(Master_object + 184) + 64LL);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v318.fields.currentCryptoKey = v92;
    *(_QWORD *)&v318.fields.fakeValue = v91;
    Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v318, 0);
    if ( !MasterData_object )
      goto LABEL_450;
    if ( UserServantCommandCodeMaster__TryGetEntity(
           (UserServantCommandCodeMaster_o *)MasterData_object,
           &entity,
           v93,
           (int)Master_object,
           0) )
    {
      Master_object = (int64_t)entity;
      if ( !entity )
        goto LABEL_450;
      this->fields.isEquipedCmdCard = UserServantCommandCodeEntity__IsEquipedCommandCode(entity, 0);
      Master_object = (int64_t)entity;
      if ( !entity )
        goto LABEL_450;
      this->fields.isCmdCardSlotOpen = UserServantCommandCodeEntity__IsCommandCardSlotOpen(entity, 0);
    }
    v62 = this->fields.type;
    if ( v62 == 10 )
    {
      Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Master_object )
        goto LABEL_450;
      v94 = DataManager__GetMasterData_object_(
              (DataManager_o *)Master_object,
              (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserServantCommandCardMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C211E1 )
      {
        sub_1C2D490(&NetworkManager_TypeInfo);
        byte_4C211E1 = 1;
      }
      Master_object = (int64_t)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Master_object = (int64_t)NetworkManager_TypeInfo;
      }
      v95 = *p_servantEntity;
      if ( !*p_servantEntity )
        goto LABEL_450;
      v97 = *(_QWORD *)&v95->fields.id.fields.currentCryptoKey;
      v96 = *(_QWORD *)&v95->fields.id.fields.fakeValue;
      v98 = *(_QWORD *)(*(_QWORD *)(Master_object + 184) + 64LL);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v319.fields.currentCryptoKey = v97;
      *(_QWORD *)&v319.fields.fakeValue = v96;
      Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v319, 0);
      if ( !v94 )
        goto LABEL_450;
      Master_object = UserServantCommandCardMaster__TryGetEntity(
                        (UserServantCommandCardMaster_o *)v94,
                        &v314,
                        v98,
                        (int)Master_object,
                        0);
      if ( (Master_object & 1) != 0 )
      {
        if ( !v314 )
          goto LABEL_450;
        commandCardParam = v314->fields.commandCardParam;
        if ( commandCardParam )
        {
          max_length = commandCardParam->max_length;
          if ( max_length >= 1 )
          {
            v102 = 0;
            while ( 1 )
            {
              if ( (unsigned int)v102 >= max_length )
                goto LABEL_457;
              Master_object = (int64_t)BalanceConfig_TypeInfo;
              v103 = commandCardParam->m_Items[v102];
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                Master_object = (int64_t)BalanceConfig_TypeInfo;
              }
              if ( v103 < *(_DWORD *)(*(_QWORD *)(Master_object + 184) + 772LL) )
                break;
              this->fields.isCommandCardExceedMax = 1;
              max_length = commandCardParam->max_length;
              if ( (int)++v102 >= max_length )
                goto LABEL_122;
            }
            this->fields.isCommandCardExceedMax = 0;
          }
        }
      }
LABEL_122:
      v62 = this->fields.type;
    }
  }
  v104 = isMtSvt;
  if ( v62 == 1 )
  {
    this->fields.isMaterialSvt = v104;
    Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Master_object )
      goto LABEL_450;
    Master_object = (int64_t)DataManager__GetMasterData_object_(
                               (DataManager_o *)Master_object,
                               (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserServantLeaderMaster___);
    if ( !Master_object )
      goto LABEL_450;
    Master_object = *(_QWORD *)(Master_object + 40);
    if ( !Master_object )
      goto LABEL_450;
    v106 = System_Collections_ObjectModel_Collection_object___GetEnumerator(
             (System_Collections_ObjectModel_Collection_T__o *)Master_object,
             (const MethodInfo_33217E0 *)Method_System_Collections_ObjectModel_Collection_UserServantLeaderEntity__GetEnumerator__);
    if ( !v106 )
      sub_1C2D6EC(0, v105);
    while ( 1 )
    {
      v107 = v106->klass;
      v108 = *(unsigned __int16 *)&v106->klass->_2.rank;
      if ( *(_WORD *)&v106->klass->_2.rank )
      {
        v109 = &v107->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)v109 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v108;
          v109 += 4;
          if ( !v108 )
            goto LABEL_132;
        }
        v110 = (__int64)&v107->vtable[*v109];
      }
      else
      {
LABEL_132:
        v110 = sub_1C7DCA8(v106, System_Collections_IEnumerator_TypeInfo, 0);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v110)(
              v106,
              *(_QWORD *)(v110 + 8))
          & 1) == 0 )
        break;
      v111 = v106->klass;
      v112 = *(unsigned __int16 *)&v106->klass->_2.rank;
      if ( *(_WORD *)&v106->klass->_2.rank )
      {
        v113 = &v111->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerator_UserServantLeaderEntity__c **)v113 - 1) != System_Collections_Generic_IEnumerator_UserServantLeaderEntity__TypeInfo )
        {
          --v112;
          v113 += 4;
          if ( !v112 )
            goto LABEL_139;
        }
        v114 = (__int64)&v111->vtable[*v113];
      }
      else
      {
LABEL_139:
        v114 = sub_1C7DCA8(v106, System_Collections_Generic_IEnumerator_UserServantLeaderEntity__TypeInfo, 0);
      }
      v115 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v114)(
               v106,
               *(_QWORD *)(v114 + 8));
      if ( !v115 )
        sub_1C2D6EC(0, v116);
      v117 = *p_userSvtEntity;
      if ( !*p_userSvtEntity )
        sub_1C2D6EC(v115, v116);
      v118 = v117[2];
      v119 = *(_QWORD *)(v115 + 56);
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v306.fields.currentCryptoKey = v117[1];
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v306.fields.fakeValue = v118;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v299 = v306;
      if ( v119 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v299, 0) )
      {
        this->fields.isUseSupport = 1;
        break;
      }
    }
    v120 = v106->klass;
    v121 = *(unsigned __int16 *)&v106->klass->_2.rank;
    if ( *(_WORD *)&v106->klass->_2.rank )
    {
      v122 = &v120->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v122 - 1) != System_IDisposable_TypeInfo )
      {
        --v121;
        v122 += 4;
        if ( !v121 )
          goto LABEL_151;
      }
      v123 = (__int64)&v120->vtable[*v122];
    }
    else
    {
LABEL_151:
      v123 = sub_1C7DCA8(v106, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v123)(v106, *(_QWORD *)(v123 + 8));
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserRecommendSupportMaster___);
    v124 = *p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_450;
    v125 = v124[2];
    v126 = (UserRecommendSupportMaster_o *)Master_object;
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v306.fields.currentCryptoKey = v124[1];
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v306.fields.fakeValue = v125;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v298 = v306;
    Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v298, 0);
    if ( !v126 )
      goto LABEL_450;
    this->fields.isUseRecommendSupport = UserRecommendSupportMaster__IsSettingServant(v126, Master_object, 0, 0);
    v127 = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserServantGrandMaster___);
    v128 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
    v129 = (UserServantGrandMaster_o *)v127;
    *(_OWORD *)&v297.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v297.fields.fakeValue = v128;
    Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v297, 0);
    if ( !v129 )
      goto LABEL_450;
    this->fields.isGrandSvt = UserServantGrandMaster__IsSettingServant(v129, Master_object, 0);
    Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Master_object )
      goto LABEL_450;
    Master_object = (int64_t)DataManager__GetMasterData_object_(
                               (DataManager_o *)Master_object,
                               (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_CombineMaterialMaster___);
    if ( !*p_servantEntity )
      goto LABEL_450;
    if ( !*p_userSvtEntity )
      goto LABEL_450;
    if ( !Master_object )
      goto LABEL_450;
    Master_object = (int64_t)CombineMaterialMaster__GetEntity(
                               (CombineMaterialMaster_o *)Master_object,
                               (*p_servantEntity)->fields.combineMaterialId,
                               (*p_userSvtEntity)[16].fields.currentCryptoKey,
                               0);
    if ( !Master_object )
      goto LABEL_450;
    this->fields.materialExp = *(_DWORD *)(Master_object + 24);
    if ( baseUsrSvtData )
    {
      v130 = *p_userSvtEntity;
      if ( !*p_userSvtEntity )
        goto LABEL_450;
      v132 = *(_QWORD *)&v130[5].fields.currentCryptoKey;
      v131 = *(_QWORD *)&v130[5].fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v320.fields.currentCryptoKey = v132;
      *(_QWORD *)&v320.fields.fakeValue = v131;
      v133 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v320, 0);
      if ( v133 == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(baseUsrSvtData->fields.svtId, 0) )
        this->fields.isLimitCntTarget = 1;
      Master_object = UserServantEntity__getSvtClassId(baseUsrSvtData, 1, 0, 0);
      if ( !*p_userSvtEntity )
        goto LABEL_450;
      if ( UserServantEntity__getSvtClassId((UserServantEntity_o *)*p_userSvtEntity, 1, 0, 0) == (_DWORD)Master_object )
        this->fields.isSameClass = 1;
      Master_object = (int64_t)*p_servantEntity;
      if ( !*p_servantEntity )
        goto LABEL_450;
      if ( ServantEntity__get_IsStatusUp((ServantEntity_o *)Master_object, 0) )
        goto LABEL_178;
      Master_object = (int64_t)*p_servantEntity;
      if ( !*p_servantEntity )
        goto LABEL_450;
      if ( ServantEntity__get_IsCombineMaterial((ServantEntity_o *)Master_object, 0) )
      {
LABEL_178:
        Master_object = (int64_t)*p_servantEntity;
        if ( !*p_servantEntity )
          goto LABEL_450;
        if ( ServantEntity__get_IsAllClass((ServantEntity_o *)Master_object, 0) )
          this->fields.isSameClass = 1;
      }
      this->fields.isBaseLvMax = UserServantEntity__isLevelMax(baseUsrSvtData, 0);
      Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Master_object )
        goto LABEL_450;
      Master_object = (int64_t)DataManager__GetMasterData_object_(
                                 (DataManager_o *)Master_object,
                                 (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantClassMaster___);
      if ( !*p_servantEntity )
        goto LABEL_450;
      if ( !Master_object )
        goto LABEL_450;
      Master_object = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                 (*p_servantEntity)->fields.classId,
                                 (const MethodInfo_3387D98 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
      if ( !Master_object )
        goto LABEL_450;
      HIDWORD(v312) = *(_DWORD *)(Master_object + 56);
      SvtClassId = UserServantEntity__getSvtClassId(baseUsrSvtData, 0, 0, 0);
      SvtClassGroupType = UserServantEntity__getSvtClassGroupType(baseUsrSvtData, SvtClassId, 0);
      if ( System_Int32__Equals_64968544((int32_t)&v312 + 4, 3, 0)
        || System_Int32__Equals_64968544((int32_t)&v312 + 4, SvtClassGroupType, 0) && this->fields.isSameClass )
      {
        materialExp = this->fields.materialExp;
        v137 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v137 = BalanceConfig_TypeInfo;
        }
        SameClassExp = v137->static_fields->SameClassExp;
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        v139 = (double)materialExp * (double)SameClassExp / 1000.0;
        v140 = vcvtpd_s64_f64(v139);
        if ( ceil(v139) == INFINITY )
          v140 = 0x80000000;
        this->fields.materialExp = v140;
      }
    }
    else
    {
      this->fields.isLimitCntTarget = 0;
    }
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantLimitMaster___);
    v141 = (UserServantEntity_o *)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_450;
    v142 = (ServantLimitMaster_o *)Master_object;
    v144 = *(_QWORD *)&v141->fields.svtId.fields.currentCryptoKey;
    v143 = *(_QWORD *)&v141->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v321.fields.currentCryptoKey = v144;
    *(_QWORD *)&v321.fields.fakeValue = v143;
    Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v321, 0);
    if ( !*p_userSvtEntity )
      goto LABEL_450;
    v145 = Master_object;
    Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868((*p_userSvtEntity)[6], 0);
    if ( !v142 )
      goto LABEL_450;
    Master_object = (int64_t)ServantLimitMaster__GetEntity(v142, v145, Master_object, 0);
    if ( !Master_object )
      goto LABEL_450;
    this->fields.hpBase = *(_DWORD *)(Master_object + 36);
    v146 = *(_DWORD *)(Master_object + 44);
    Master_object = (int64_t)this->fields.servantEntity;
    this->fields.atkBase = v146;
    if ( !Master_object )
      goto LABEL_450;
    Master_object = ServantEntity__get_IsStatusUp((ServantEntity_o *)Master_object, 0);
    if ( (Master_object & 1) != 0 )
    {
      *p_isStatusUpSvt = 1;
      if ( !baseUsrSvtData )
        goto LABEL_450;
      v147 = UserServantEntity__getSvtClassId(baseUsrSvtData, 0, 0, 0);
      Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Master_object )
        goto LABEL_450;
      Master_object = (int64_t)DataManager__GetMasterData_object_(
                                 (DataManager_o *)Master_object,
                                 (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantClassMaster___);
      if ( !*p_servantEntity )
        goto LABEL_450;
      if ( !Master_object )
        goto LABEL_450;
      Master_object = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                 (*p_servantEntity)->fields.classId,
                                 (const MethodInfo_3387D98 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
      if ( !Master_object )
        goto LABEL_450;
      LODWORD(v312) = *(_DWORD *)(Master_object + 56);
      if ( !*p_servantEntity )
        goto LABEL_450;
      if ( (*p_servantEntity)->fields.classId == v147 || System_Int32__Equals_64968544((int32_t)&v312, 3, 0) )
      {
        this->fields.isCanStUp = 1;
        v148 = UserServantEntity__isAdjustAtkMax(baseUsrSvtData, 0) && this->fields.atkBase > 0;
        this->fields.isAtkUpMax = v148;
        v149 = UserServantEntity__isAdjustHpMax(baseUsrSvtData, 0) && this->fields.hpBase > 0;
        this->fields.isHpUpMax = v149;
        v150 = UserServantEntity__isSecondAdjustAtkMax(baseUsrSvtData, 0) && this->fields.atkBase > 0;
        this->fields.isAtkSecondUpMax = v150;
        v151 = UserServantEntity__isSecondAdjustHpMax(baseUsrSvtData, 0) && this->fields.hpBase > 0;
        this->fields.isHpSecondUpMax = v151;
      }
    }
    Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Master_object )
      goto LABEL_450;
    v152 = DataManager__GetMasterData_object_(
             (DataManager_o *)Master_object,
             (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4C211E1 )
    {
      sub_1C2D490(&NetworkManager_TypeInfo);
      byte_4C211E1 = 1;
    }
    Master_object = (int64_t)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Master_object = (int64_t)NetworkManager_TypeInfo;
    }
    v153 = *p_servantEntity;
    if ( !*p_servantEntity )
      goto LABEL_450;
    v155 = *(_QWORD *)&v153->fields.id.fields.currentCryptoKey;
    v154 = *(_QWORD *)&v153->fields.id.fields.fakeValue;
    v156 = *(_QWORD *)(*(_QWORD *)(Master_object + 184) + 64LL);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v322.fields.currentCryptoKey = v155;
    *(_QWORD *)&v322.fields.fakeValue = v154;
    Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v322, 0);
    if ( !v152 )
LABEL_450:
      sub_1C2D6EC(Master_object, v33);
    if ( UserServantCommandCodeMaster__TryGetEntity(
           (UserServantCommandCodeMaster_o *)v152,
           &v313,
           v156,
           (int)Master_object,
           0) )
    {
      Master_object = (int64_t)v313;
      if ( !v313 )
        goto LABEL_450;
      this->fields.isEquipedCmdCard = UserServantCommandCodeEntity__IsEquipedCommandCode(v313, 0);
      Master_object = (int64_t)v313;
      if ( !v313 )
        goto LABEL_450;
      this->fields.isCmdCardSlotOpen = UserServantCommandCodeEntity__IsCommandCardSlotOpen(v313, 0);
    }
  }
  v157 = this->fields.type;
  if ( v157 == 9 )
  {
    Master_object = UserServantEntity__isLimitCountMax(userSvtEntity, 0);
    v183 = this->fields.userSvtEntity;
    this->fields.isLimitCntMax = Master_object & 1;
    if ( v183 )
    {
      Master_object = UserServantEntity__isLevelMax(v183, 0);
      v184 = this->fields.userSvtEntity;
      this->fields.isLvMax = Master_object & 1;
      if ( v184 )
      {
        this->fields.isIgnoreCombineLimitSpecial = UserServantEntity__IsIgnoreCombineLimitSpecial(v184, 0);
        this->fields.isSealCombineLimit = CombineServantListViewItem__GetSealCombineLimit(this, v185);
        goto LABEL_279;
      }
    }
    goto LABEL_450;
  }
  if ( v157 != 2 )
    goto LABEL_280;
  v286 = isMtSvt;
  this->fields.isLimitCntMax = UserServantEntity__isLimitCountMax(userSvtEntity, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v158 = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  v160 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v159 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  v161 = (ServantLimitImageMaster_o *)v158;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v323.fields.currentCryptoKey = v160;
  *(_QWORD *)&v323.fields.fakeValue = v159;
  v162 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v323, 0);
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
                    userSvtEntity->fields.limitCount,
                    0);
  if ( !v161 )
    goto LABEL_450;
  Master_object = ServantLimitImageMaster__IsServantLimitCountSeal(v161, v162, Master_object, 0);
  v163 = this->fields.userSvtEntity;
  this->fields.isSealedLimitCount = Master_object & 1;
  if ( !v163 )
    goto LABEL_450;
  this->fields.isLvMax = UserServantEntity__isLevelMax(v163, 0);
  Master_object = CombineServantListViewItem__GetSealCombineLimit(this, v164);
  isHeroineSvt = this->fields.isHeroineSvt;
  this->fields.isSealCombineLimit = Master_object & 1;
  if ( isHeroineSvt )
    goto LABEL_279;
  if ( !*p_servantEntity )
    goto LABEL_450;
  v166 = (UserServantEntity_o *)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_450;
  combineLimitId = (*p_servantEntity)->fields.combineLimitId;
  v169 = *(_QWORD *)&v166->fields.limitCount.fields.currentCryptoKey;
  v168 = *(_QWORD *)&v166->fields.limitCount.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v324.fields.currentCryptoKey = v169;
  *(_QWORD *)&v324.fields.fakeValue = v168;
  v170 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v324, 0);
  Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_450;
  Master_object = (int64_t)DataManager__GetMasterData_object_(
                             (DataManager_o *)Master_object,
                             (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_CombineLimitMaster___);
  if ( !Master_object )
    goto LABEL_450;
  Master_object = (int64_t)CombineLimitMaster__GetEntity((CombineLimitMaster_o *)Master_object, combineLimitId, v170, 0);
  if ( !Master_object )
    goto LABEL_450;
  v171 = Master_object;
  v173 = *(_QWORD *)(Master_object + 32);
  v172 = *(_QWORD *)(Master_object + 40);
  Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_450;
  Master_object = (int64_t)DataManager__GetMasterData_object_(
                             (DataManager_o *)Master_object,
                             (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !v172 )
    goto LABEL_450;
  v174 = *(_QWORD *)(v172 + 24);
  if ( (int)v174 < 1 )
    goto LABEL_436;
  v175 = (UserItemMaster_o *)Master_object;
  v176 = 0;
  while ( 1 )
  {
    if ( v176 >= (unsigned int)v174 )
      goto LABEL_457;
    if ( !v173 )
      goto LABEL_450;
    if ( v176 >= *(unsigned int *)(v173 + 24) )
      goto LABEL_457;
    v177 = (UserServantEntity_o *)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_450;
    v178 = *(_OWORD *)&v177->fields.userId.fields.fakeValue;
    v179 = *v42;
    v180 = *(_DWORD *)(v172 + 32 + 4 * v176);
    v181 = v42;
    v182 = *(_DWORD *)(v173 + 32 + 4 * v176);
    *(_OWORD *)&v306.fields.currentCryptoKey = *(_OWORD *)&v177->fields.userId.fields.currentCryptoKey;
    *(_OWORD *)&v306.fields.fakeValue = v178;
    if ( !v179->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v179);
    v296 = v306;
    Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v296, 0);
    if ( !v175 )
      goto LABEL_450;
    Master_object = UserItemMaster__TryGetEntity(v175, &v311, Master_object, v180, 0);
    if ( (Master_object & 1) == 0 )
      goto LABEL_435;
    if ( !v311 )
      goto LABEL_450;
    if ( v180 == v311->fields.itemId )
      break;
LABEL_274:
    LODWORD(v174) = *(_DWORD *)(v172 + 24);
    ++v176;
    v42 = v181;
    if ( (__int64)v176 >= (int)v174 )
      goto LABEL_436;
  }
  if ( v182 <= v311->fields.num )
  {
    *p_isLimitUpItemNum = 1;
    goto LABEL_274;
  }
LABEL_435:
  v42 = v181;
  *p_isLimitUpItemNum = 0;
LABEL_436:
  if ( !v280 )
    goto LABEL_450;
  v104 = v286;
  if ( *(_QWORD *)(v280 + 96) < *(int *)(v171 + 24) )
    *p_isLimitUpItemNum = 0;
LABEL_279:
  v157 = this->fields.type;
LABEL_280:
  if ( v157 == 3 )
  {
    CombineServantListViewItem__SetSkillInfo(this, v33);
    v157 = this->fields.type;
  }
  if ( (unsigned int)(v157 - 11) <= 1 )
  {
    CombineServantListViewItem__SetAppendSkillInfo(this, v33);
    v157 = this->fields.type;
  }
  if ( v157 == 4 && !this->fields.isHeroineSvt )
  {
    Master_object = (int64_t)*p_userSvtEntity;
    if ( *p_userSvtEntity )
    {
      Master_object = UserServantEntity__getTreasureDeviceInfo(
                        (UserServantEntity_o *)Master_object,
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
          Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Master_object )
            goto LABEL_450;
          Master_object = (int64_t)DataManager__GetMasterData_object_(
                                     (DataManager_o *)Master_object,
                                     (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
          if ( !Master_object )
            goto LABEL_450;
          Master_object = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                     id,
                                     (const MethodInfo_3387D98 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
          if ( !Master_object )
            goto LABEL_450;
          if ( lv < *(_DWORD *)(Master_object + 48) )
            this->fields.isTdLvMax = 0;
        }
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserServantMaster___);
        if ( Master_object )
        {
          SameSvtNpLvCache = UserServantMaster__getSameSvtNpLvCache(
                               (UserServantMaster_o *)Master_object,
                               (UserServantEntity_o *)*p_userSvtEntity,
                               &cachedUserServantNpLvDict,
                               0);
          if ( SameSvtNpLvCache < 1 || this->fields.isTdLvMax )
            goto LABEL_286;
          v212 = SameSvtNpLvCache;
          Master_object = CombineServantListViewItem__GetNpInfo(this, &tdLv[1], tdLv, &tdMaxLv, v211);
          if ( v280 )
          {
            v213 = *(_QWORD *)(v280 + 96);
            if ( v213 > 1200000 )
            {
              this->fields.isSameSvt = 1;
              goto LABEL_286;
            }
            Master_object = (int64_t)*p_userSvtEntity;
            if ( *p_userSvtEntity )
            {
              v273 = v104;
              v274 = UserServantEntity__checkTreasureDeviceLevelUp((UserServantEntity_o *)Master_object, v212, 0);
              v275 = tdLv[0];
              if ( tdLv[0] >= v274 )
              {
                v278 = 0;
LABEL_449:
                this->fields.isSameSvt = v213 >= v278;
                v104 = v273;
                goto LABEL_286;
              }
              v276 = tdLv[1];
              v277 = v274;
              v278 = 0;
              while ( 1 )
              {
                Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( !Master_object )
                  break;
                Master_object = (int64_t)DataManager__GetMasterData_object_(
                                           (DataManager_o *)Master_object,
                                           (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
                if ( !Master_object )
                  break;
                v279 = TreasureDvcLvMaster__GetEntity((TreasureDvcLvMaster_o *)Master_object, v276, v275, 0);
                if ( v279 )
                  v278 += v279->fields.qp;
                if ( v277 == ++v275 )
                  goto LABEL_449;
              }
            }
          }
        }
      }
    }
    goto LABEL_450;
  }
LABEL_286:
  v186 = this->fields.type;
  if ( v186 != 5 )
    goto LABEL_344;
  this->fields.isMaterialSvt = v104;
  Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_450;
  Master_object = (int64_t)DataManager__GetMasterData_object_(
                             (DataManager_o *)Master_object,
                             (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserServantLeaderMaster___);
  if ( !Master_object )
    goto LABEL_450;
  Master_object = *(_QWORD *)(Master_object + 40);
  if ( !Master_object )
    goto LABEL_450;
  v188 = System_Collections_ObjectModel_Collection_object___GetEnumerator(
           (System_Collections_ObjectModel_Collection_T__o *)Master_object,
           (const MethodInfo_33217E0 *)Method_System_Collections_ObjectModel_Collection_UserServantLeaderEntity__GetEnumerator__);
  if ( !v188 )
    sub_1C2D6EC(0, v187);
  while ( 1 )
  {
    v189 = v188->klass;
    v190 = *(unsigned __int16 *)&v188->klass->_2.rank;
    if ( *(_WORD *)&v188->klass->_2.rank )
    {
      v191 = &v189->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)v191 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v190;
        v191 += 4;
        if ( !v190 )
          goto LABEL_295;
      }
      v192 = (__int64)&v189->vtable[*v191];
    }
    else
    {
LABEL_295:
      v192 = sub_1C7DCA8(v188, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v192)(
            v188,
            *(_QWORD *)(v192 + 8))
        & 1) == 0 )
      break;
    v193 = v188->klass;
    v194 = *(unsigned __int16 *)&v188->klass->_2.rank;
    if ( *(_WORD *)&v188->klass->_2.rank )
    {
      v195 = &v193->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_UserServantLeaderEntity__c **)v195 - 1) != System_Collections_Generic_IEnumerator_UserServantLeaderEntity__TypeInfo )
      {
        --v194;
        v195 += 4;
        if ( !v194 )
          goto LABEL_302;
      }
      v196 = (__int64)&v193->vtable[*v195];
    }
    else
    {
LABEL_302:
      v196 = sub_1C7DCA8(v188, System_Collections_Generic_IEnumerator_UserServantLeaderEntity__TypeInfo, 0);
    }
    v197 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v196)(
             v188,
             *(_QWORD *)(v196 + 8));
    if ( !v197 )
      sub_1C2D6EC(0, v198);
    v199 = (UserServantEntity_o *)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      sub_1C2D6EC(v197, v198);
    v201 = *(_OWORD *)&v199->fields.id.fields.currentCryptoKey;
    v200 = *(_OWORD *)&v199->fields.id.fields.fakeValue;
    v202 = *v42;
    v203 = *(_QWORD *)(v197 + 56);
    *(_OWORD *)&v306.fields.currentCryptoKey = v201;
    *(_OWORD *)&v306.fields.fakeValue = v200;
    if ( !v202->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v202);
    v295 = v306;
    if ( v203 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v295, 0) )
    {
      this->fields.isUseSupport = 1;
      break;
    }
  }
  v204 = v188->klass;
  v205 = *(unsigned __int16 *)&v188->klass->_2.rank;
  if ( *(_WORD *)&v188->klass->_2.rank )
  {
    v206 = &v204->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v206 - 1) != System_IDisposable_TypeInfo )
    {
      --v205;
      v206 += 4;
      if ( !v205 )
        goto LABEL_314;
    }
    v207 = (__int64)&v204->vtable[*v206];
  }
  else
  {
LABEL_314:
    v207 = sub_1C7DCA8(v188, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v207)(v188, *(_QWORD *)(v207 + 8));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserRecommendSupportMaster___);
  v214 = (UserServantEntity_o *)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_450;
  v215 = *(_OWORD *)&v214->fields.id.fields.fakeValue;
  v216 = (UserRecommendSupportMaster_o *)Master_object;
  v217 = *v42;
  *(_OWORD *)&v306.fields.currentCryptoKey = *(_OWORD *)&v214->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v306.fields.fakeValue = v215;
  if ( !v217->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v217);
  v294 = v306;
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v294, 0);
  if ( !v216 )
    goto LABEL_450;
  this->fields.isUseRecommendSupport = UserRecommendSupportMaster__IsSettingServant(v216, Master_object, 0, 0);
  v218 = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserServantGrandMaster___);
  v219 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  v220 = (UserServantGrandMaster_o *)v218;
  *(_OWORD *)&v293.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v293.fields.fakeValue = v219;
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v293, 0);
  if ( !v220 )
    goto LABEL_450;
  this->fields.isGrandSvt = UserServantGrandMaster__IsSettingServant(v220, Master_object, 0);
  v221 = baseUsrSvtData && UserServantEntity__IsEventJoin(baseUsrSvtData, 0);
  Master_object = (int64_t)this->fields.userSvtEntity;
  this->fields.isEventJoinBaseSvt = v221;
  if ( !Master_object )
    goto LABEL_450;
  IsMaterialTd = UserServantEntity__IsMaterialTd((UserServantEntity_o *)Master_object, 0);
  v186 = this->fields.type;
  this->fields.isMaterialTdSvt = IsMaterialTd;
LABEL_344:
  if ( v186 == 6 )
  {
    Master_object = (int64_t)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_450;
    Master_object = UserServantEntity__isExceedLvMax((UserServantEntity_o *)Master_object, 0);
    v223 = this->fields.userSvtEntity;
    this->fields.isLvExceedMax = Master_object & 1;
    if ( !v223 )
      goto LABEL_450;
    Master_object = UserServantEntity__isLimitCountMax(v223, 0);
    v224 = this->fields.userSvtEntity;
    this->fields.isLimitCntMax = Master_object & 1;
    if ( !v224 )
      goto LABEL_450;
    isLevelMax = UserServantEntity__isLevelMax(v224, 0);
    v226 = this->fields.isHeroineSvt;
    this->fields.isLvMax = isLevelMax;
    if ( !v226 || UserServantEntity__IsUseLevelExceedItemHeroine(userSvtEntity, 0) )
    {
      Master_object = (int64_t)*p_userSvtEntity;
      if ( !*p_userSvtEntity )
        goto LABEL_450;
      SvtExceedEnt = UserServantEntity__getSvtExceedEnt((UserServantEntity_o *)Master_object, 0);
      if ( SvtExceedEnt )
      {
        v228 = (int32_t *)SvtExceedEnt;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_CommonConsumeMaster___);
        if ( !Master_object )
          goto LABEL_450;
        IdEntityList = CommonConsumeMaster__GetIdEntityList((CommonConsumeMaster_o *)Master_object, v228[12], 0);
        if ( IdEntityList )
        {
          v230 = IdEntityList;
          v231 = (System_Collections_Generic_HashSet_int__o *)sub_1C2D6DC(System_Collections_Generic_HashSet_int__TypeInfo);
          System_Collections_Generic_HashSet_int____ctor(
            v231,
            (const MethodInfo_363A780 *)Method_System_Collections_Generic_HashSet_int___ctor__);
          v232 = (System_Collections_Generic_HashSet_int__o *)sub_1C2D6DC(System_Collections_Generic_HashSet_int__TypeInfo);
          System_Collections_Generic_HashSet_int____ctor(
            v232,
            (const MethodInfo_363A780 *)Method_System_Collections_Generic_HashSet_int___ctor__);
          v233 = v230->max_length;
          if ( v233 >= 1 )
          {
            v234 = 0;
            while ( (unsigned int)v234 < v233 )
            {
              v235 = v230->m_Items[v234];
              if ( !v235 )
                goto LABEL_450;
              if ( !v231 )
                goto LABEL_450;
              Master_object = System_Collections_Generic_HashSet_int___Add(
                                v231,
                                v235->fields.objectId,
                                (const MethodInfo_363B984 *)Method_System_Collections_Generic_HashSet_int__Add__);
              if ( !v232 )
                goto LABEL_450;
              Master_object = System_Collections_Generic_HashSet_int___Add(
                                v232,
                                v235->fields.num,
                                (const MethodInfo_363B984 *)Method_System_Collections_Generic_HashSet_int__Add__);
              v233 = v230->max_length;
              if ( (int)++v234 >= v233 )
                goto LABEL_363;
            }
LABEL_457:
            sub_1C2D6F4(Master_object, v33, v99);
          }
LABEL_363:
          v42 = &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo;
          if ( v228[13] >= 1 )
          {
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_SvtCoinMaster___);
            v236 = (UserServantEntity_o *)*p_userSvtEntity;
            if ( *p_userSvtEntity )
            {
              v237 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
              v239 = *(_QWORD *)&v236->fields.svtId.fields.currentCryptoKey;
              v238 = *(_QWORD *)&v236->fields.svtId.fields.fakeValue;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v325.fields.currentCryptoKey = v239;
              *(_QWORD *)&v325.fields.fakeValue = v238;
              Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v325, 0);
              if ( v237 )
              {
                Master_object = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                           v237,
                                           Master_object,
                                           (const MethodInfo_3387D98 *)Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__GetEntity__);
                if ( Master_object )
                {
                  if ( v231 )
                  {
                    Master_object = System_Collections_Generic_HashSet_int___Add(
                                      v231,
                                      *(_DWORD *)(Master_object + 24),
                                      (const MethodInfo_363B984 *)Method_System_Collections_Generic_HashSet_int__Add__);
                    if ( v232 )
                    {
                      System_Collections_Generic_HashSet_int___Add(
                        v232,
                        v228[13],
                        (const MethodInfo_363B984 *)Method_System_Collections_Generic_HashSet_int__Add__);
                      goto LABEL_374;
                    }
                  }
                }
              }
            }
            goto LABEL_450;
          }
LABEL_374:
          v240 = (UserServantEntity_o *)*p_userSvtEntity;
          v241 = System_Linq_Enumerable__ToArray_int_(
                   (System_Collections_Generic_IEnumerable_TSource__o *)v231,
                   (const MethodInfo_310DE54 *)Method_System_Linq_Enumerable_ToArray_int___);
          Master_object = (int64_t)System_Linq_Enumerable__ToArray_int_(
                                     (System_Collections_Generic_IEnumerable_TSource__o *)v232,
                                     (const MethodInfo_310DE54 *)Method_System_Linq_Enumerable_ToArray_int___);
          if ( !v280 )
            goto LABEL_450;
          this->fields.isLvExceedItemNum = CombineUtility__CheckCombineNeedItemsEnough(
                                             v240,
                                             v241,
                                             (System_Int32_array *)Master_object,
                                             *(_QWORD *)(v280 + 96),
                                             v228[8],
                                             0);
        }
      }
    }
  }
  if ( this->fields.type == 8 )
  {
    Master_object = (int64_t)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_450;
    this->fields.isFriendshipExceedMax = UserServantEntity__isExceedFriendshipMax(
                                           (UserServantEntity_o *)Master_object,
                                           0);
    v242 = *(_QWORD *)&v284->fields.friendshipRank.fields.currentCryptoKey;
    v243 = *(_QWORD *)&v284->fields.friendshipRank.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v326.fields.currentCryptoKey = v242;
    *(_QWORD *)&v326.fields.fakeValue = v243;
    Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v326, 0);
    v244 = *p_servantEntity;
    if ( !*p_servantEntity )
      goto LABEL_450;
    v245 = (_DWORD)Master_object == v284->fields.friendshipExceedCount + v244->fields.maxFriendshipRank;
    this->fields.isFriendshipRankMax = v245;
    if ( v245 && !this->fields.isFriendshipExceedMax )
    {
      if ( this->fields.isHeroineSvt )
      {
        Master_object = UserServantEntity__IsUseFriendshipExceedItemHeroine(userSvtEntity, 0);
        if ( (Master_object & 1) == 0 )
          goto LABEL_384;
        v244 = *p_servantEntity;
        if ( !*p_servantEntity )
          goto LABEL_450;
      }
      maxFriendshipRank = v244->fields.maxFriendshipRank;
      friendshipExceedCount = v284->fields.friendshipExceedCount;
      Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Master_object )
        goto LABEL_450;
      Master_object = (int64_t)DataManager__GetMasterData_object_(
                                 (DataManager_o *)Master_object,
                                 (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_FriendshipMaster___);
      if ( !*p_servantEntity )
        goto LABEL_450;
      if ( !Master_object )
        goto LABEL_450;
      Master_object = (int64_t)FriendshipMaster__GetEntity(
                                 (FriendshipMaster_o *)Master_object,
                                 (*p_servantEntity)->fields.friendshipId,
                                 maxFriendshipRank + friendshipExceedCount + 1,
                                 0);
      if ( !Master_object )
        goto LABEL_450;
      v266 = (UserServantEntity_o *)Master_object;
      v268 = *(_QWORD *)(Master_object + 32);
      v267 = *(_QWORD *)(Master_object + 40);
      Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Master_object )
        goto LABEL_450;
      v291 = v266;
      Master_object = (int64_t)DataManager__GetMasterData_object_(
                                 (DataManager_o *)Master_object,
                                 (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserItemMaster___);
      if ( !v267 )
        goto LABEL_450;
      if ( *(int *)(v267 + 24) < 1 )
      {
LABEL_432:
        if ( !v280 )
          goto LABEL_450;
        if ( *(_QWORD *)(v280 + 96) < SHIDWORD(v291->fields.id.fields.hiddenValue) )
          this->fields.isFriendshipExceedItemNum = 0;
        goto LABEL_384;
      }
      v269 = (UserItemMaster_o *)Master_object;
      v270 = 0;
      v271 = v267 + 32;
      while ( 1 )
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4C211E1 )
        {
          sub_1C2D490(&NetworkManager_TypeInfo);
          byte_4C211E1 = 1;
        }
        Master_object = (int64_t)NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          Master_object = (int64_t)NetworkManager_TypeInfo;
        }
        if ( v270 >= *(unsigned int *)(v267 + 24) )
          goto LABEL_457;
        if ( !v269 )
          goto LABEL_450;
        Master_object = UserItemMaster__TryGetEntity(
                          v269,
                          &v307,
                          *(_QWORD *)(*(_QWORD *)(Master_object + 184) + 64LL),
                          *(_DWORD *)(v271 + 4 * v270),
                          0);
        if ( (Master_object & 1) == 0 )
          break;
        if ( v270 >= *(unsigned int *)(v267 + 24) )
          goto LABEL_457;
        if ( !v307 )
          goto LABEL_450;
        if ( *(_DWORD *)(v271 + 4 * v270) == v307->fields.itemId )
        {
          if ( !v268 )
            goto LABEL_450;
          if ( v270 >= *(unsigned int *)(v268 + 24) )
            goto LABEL_457;
          v272 = *(_DWORD *)(v268 + 32 + 4 * v270) <= v307->fields.num;
          goto LABEL_430;
        }
LABEL_431:
        if ( (__int64)++v270 >= *(int *)(v267 + 24) )
          goto LABEL_432;
      }
      v272 = 0;
LABEL_430:
      this->fields.isFriendshipExceedItemNum = v272;
      goto LABEL_431;
    }
  }
LABEL_384:
  Master_object = (int64_t)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_450;
  Master_object = UserServantEntity__getDispLimitCount((UserServantEntity_o *)Master_object, 0, 0);
  v246 = this->fields.userSvtEntity;
  this->fields.dispLimitCount = Master_object;
  if ( !v246 )
    goto LABEL_450;
  SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v246, -1, -1, 0);
  this->fields.skillCategoryIdList = SkillCategoryIdList;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.skillCategoryIdList, (int32_t)SkillCategoryIdList, v248, v249);
  Master_object = (int64_t)this->fields.userSvtEntity;
  if ( !Master_object )
    goto LABEL_450;
  TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                   (UserServantEntity_o *)Master_object,
                                   0,
                                   -1,
                                   0);
  this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&this->fields.tdCategoryIdList,
    (int32_t)TreasureDeviceCategoryIdList,
    v251,
    v252);
  Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_450;
  Master_object = (int64_t)DataManager__GetMasterData_object_(
                             (DataManager_o *)Master_object,
                             (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Master_object )
    goto LABEL_450;
  Master_object = (int64_t)DataMasterBase_object__object__int___GetEntity(
                             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                             this->fields.classId,
                             (const MethodInfo_3387D98 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !Master_object )
    goto LABEL_450;
  v253 = *(int *)(Master_object + 52);
  v254 = this->fields.servantEntity;
  this->fields.priority = v253;
  this->fields.sortValue1B = v253;
  if ( !v254 )
    goto LABEL_450;
  v255 = (UserServantEntity_o *)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_450;
  v256 = ((__int64)v254->fields.collectionNo << 16)
       | ((unsigned __int64)(unsigned int)this->fields.rarity << 48)
       | v255->fields.lv;
  v257 = type == 2 && !this->fields.isLimitCntMax;
  this->fields.sortValue2 = v256 | v257;
  v259 = *(_QWORD *)&v255->fields.svtId.fields.currentCryptoKey;
  v258 = *(_QWORD *)&v255->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v327.fields.currentCryptoKey = v259;
  *(_QWORD *)&v327.fields.fakeValue = v258;
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v327, 0);
  v260 = this->fields.userSvtEntity;
  this->fields.sortValue2B = (int)Master_object;
  if ( !v260 )
    goto LABEL_450;
  v261 = *(_OWORD *)&v260->fields.id.fields.fakeValue;
  v262 = *v42;
  *(_OWORD *)&v306.fields.currentCryptoKey = *(_OWORD *)&v260->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v306.fields.fakeValue = v261;
  if ( !v262->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v262);
  v292 = v306;
  v263 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v292, 0);
  Master_object = (int64_t)this->fields.iconLabelInfo1;
  this->fields.sortValueLast = v263;
  this->fields.amountSortValue = -1;
  if ( !Master_object )
    goto LABEL_450;
  IconLabelInfo__Clear((IconLabelInfo_o *)Master_object, 0);
  Master_object = (int64_t)*p_iconLabelInfo2;
  if ( !*p_iconLabelInfo2 )
    goto LABEL_450;
  IconLabelInfo__Clear((IconLabelInfo_o *)Master_object, 0);
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

  if ( (byte_4C2B460 & 1) == 0 )
  {
    sub_1C2D490(&SvtUseSkillData_TypeInfo);
    byte_4C2B460 = 1;
  }
  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
    return UserServantEntity__getAppendSkillInfo(userSvtEntity, 0);
  v5 = (SvtUseSkillData_o *)sub_1C2D6DC(SvtUseSkillData_TypeInfo);
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
      sub_1C2D6EC(TreasureDeviceInfo, v10);
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

  if ( (byte_4C2B461 & 1) == 0 )
  {
    sub_1C2D490(&CondType_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMaster_CombineLimitReleaseMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    byte_4C2B461 = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_CombineLimitReleaseMaster___);
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
    sub_1C2D6EC(Master_object, v4);
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
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4C2B45F & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&SkillInfo___TypeInfo);
    byte_4C2B45F = 1;
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
    v7 = (SkillInfo_array *)sub_1C2D538(SkillInfo___TypeInfo, (unsigned int)v6->static_fields->SvtSkillListMax);
    *skillInfoList = v7;
    sub_1C2D434((CGThumbnailListItem_o *)skillInfoList, (int32_t)v7, v8, v9);
  }
  return userSvtEntity != 0;
}


void CombineServantListViewItem__InitFlags(CombineServantListViewItem_o *this, const MethodInfo *method)
{
  *(_WORD *)&this->fields.isFavorite = 0;
  this->fields.isLock = 0;
  this->fields.isChoice = 0;
  this->fields.isEventJoin = 0;
  *(_WORD *)&this->fields.isLimitCntTarget = 0;
  this->fields.isMaxSelect = 0;
  *(_WORD *)&this->fields.isAllAppendSkillLock = 0;
  this->fields.isLvExceedItemNum = 0;
  this->fields.isCanNotLock = 0;
  *(_WORD *)&this->fields.isEquipedCmdCard = 0;
  *(_DWORD *)&this->fields.isBaseSvt = 0;
  *(_QWORD *)&this->fields.isLimitUpItemNum = 0;
  *(_WORD *)&this->fields.isTdLvMax = 0;
  *(_DWORD *)&this->fields.isStatusUpSvt = 0;
  this->fields.isMaterialTdSvt = 0;
  this->fields.isGrandSvt = 0;
  *(_DWORD *)&this->fields.isBaseLvMax = 0;
  *(_DWORD *)&this->fields.isNotSelectSecondStatusUpAtk = 0;
  *(_QWORD *)&this->fields.isAtkUpMax = 0;
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
  __int64 ClassGroupFilterKindList; // x0
  FilterKindList_c *v7; // x0
  ListViewSort_FilterKind_array *v8; // x0
  FilterKindList_c *v9; // x0
  ListViewSort_FilterKind_array *v10; // x0
  FilterKindList_c *v11; // x0
  ListViewSort_FilterKind_array *v12; // x0
  FilterKindList_c *v13; // x0
  ListViewSort_FilterKind_array *v14; // x0
  UserServantEntity_o *userSvtEntity; // x21
  __int64 v16; // x2
  __int64 v17; // x1
  _BOOL4 isChoice; // w8
  FilterKindList_c *v19; // x0
  ListViewSort_FilterKind_array *v20; // x21
  UserServantEntity_o *v22; // x0
  int32_t dispLimitCount; // w21
  UserServantEntity_o *v24; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  _BOOL4 IsUnSelectedAllTargetFilters; // w21
  _BOOL4 v32; // w23
  _BOOL4 IsMatchEffectCategory; // w22
  _BOOL4 v34; // w0

  if ( (byte_4C2B44F & 1) == 0 )
  {
    sub_1C2D490(&FilterKindList_TypeInfo);
    sub_1C2D490(&ListViewSort_FilterKind___TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    sub_1C2D490(&ServantEventBonusFilterController_TypeInfo);
    byte_4C2B44F = 1;
  }
  v5 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v5 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v5->static_fields->ClassGroupFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_69;
  ClassGroupFilterKindList = (__int64)System_Collections_Generic_List_Int32Enum___ToArray(
                                        (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                        (const MethodInfo_3770E44 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_69;
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0) )
  {
    v7 = FilterKindList_TypeInfo;
    if ( !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
      v7 = FilterKindList_TypeInfo;
    }
    ClassGroupFilterKindList = (__int64)v7->static_fields->ClassFilterKindList;
    if ( !ClassGroupFilterKindList )
      goto LABEL_69;
    v8 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                            (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                            (const MethodInfo_3770E44 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
  ClassGroupFilterKindList = (__int64)v9->static_fields->NpTypeFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_69;
  v10 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_3770E44 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
  ClassGroupFilterKindList = (__int64)v11->static_fields->NpEffectFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_69;
  v12 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_3770E44 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
  ClassGroupFilterKindList = (__int64)v13->static_fields->CombineBaseServantFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_69;
  v14 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_3770E44 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
    v22 = this->fields.userSvtEntity;
    if ( v22 )
    {
      dispLimitCount = this->fields.dispLimitCount;
      if ( dispLimitCount != UserServantEntity__getDispLimitCount(v22, 0, 0) )
      {
        ClassGroupFilterKindList = (__int64)this->fields.userSvtEntity;
        if ( !ClassGroupFilterKindList )
          goto LABEL_69;
        ClassGroupFilterKindList = UserServantEntity__getDispLimitCount(
                                     (UserServantEntity_o *)ClassGroupFilterKindList,
                                     0,
                                     0);
        v24 = this->fields.userSvtEntity;
        this->fields.dispLimitCount = ClassGroupFilterKindList;
        if ( !v24 )
          goto LABEL_69;
        SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v24, -1, -1, 0);
        this->fields.skillCategoryIdList = SkillCategoryIdList;
        sub_1C2D434((CGThumbnailListItem_o *)&this->fields.skillCategoryIdList, (int32_t)SkillCategoryIdList, v26, v27);
        ClassGroupFilterKindList = (__int64)this->fields.userSvtEntity;
        if ( !ClassGroupFilterKindList )
          goto LABEL_69;
        TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                         (UserServantEntity_o *)ClassGroupFilterKindList,
                                         0,
                                         -1,
                                         0);
        this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
        sub_1C2D434(
          (CGThumbnailListItem_o *)&this->fields.tdCategoryIdList,
          (int32_t)TreasureDeviceCategoryIdList,
          v29,
          v30);
      }
    }
    ClassGroupFilterKindList = sub_1C2D538(ListViewSort_FilterKind___TypeInfo, 1);
    if ( !ClassGroupFilterKindList )
      goto LABEL_69;
    v17 = ClassGroupFilterKindList;
    if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
      goto LABEL_70;
    *(_DWORD *)(ClassGroupFilterKindList + 32) = 50;
    IsUnSelectedAllTargetFilters = ListViewSort__IsUnSelectedAllTargetFilters(
                                     sort,
                                     (ListViewSort_FilterKind_array *)ClassGroupFilterKindList,
                                     0);
    ClassGroupFilterKindList = sub_1C2D538(ListViewSort_FilterKind___TypeInfo, 1);
    if ( !ClassGroupFilterKindList )
      goto LABEL_69;
    v17 = ClassGroupFilterKindList;
    if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
LABEL_70:
      sub_1C2D6F4(ClassGroupFilterKindList, v17, v16);
    *(_DWORD *)(ClassGroupFilterKindList + 32) = 51;
    v32 = ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0);
    IsMatchEffectCategory = ServantEquipEffectFilterController__IsMatchEffectCategory(
                              this->fields.tdCategoryIdList,
                              sort,
                              0);
    v34 = ServantEquipEffectFilterController__IsMatchEffectCategory(this->fields.skillCategoryIdList, sort, 0);
    if ( ((IsUnSelectedAllTargetFilters ^ v32) & 1) != 0 )
    {
      if ( IsUnSelectedAllTargetFilters )
      {
        if ( !v34 )
          return 0;
      }
      else if ( !IsMatchEffectCategory )
      {
        return 0;
      }
    }
    else if ( !IsMatchEffectCategory && !v34 )
    {
      return 0;
    }
  }
  if ( !ListViewSort__IsMatchServantAttriFilter(sort, this->fields.userSvtEntity, this->fields.servantEntity, 0)
    || !ListViewSort__IsMatchServantSubAttriFilter(sort, this->fields.userSvtEntity, this->fields.servantEntity, 0) )
  {
    return 0;
  }
  ClassGroupFilterKindList = sub_1C2D538(ListViewSort_FilterKind___TypeInfo, 1);
  if ( !ClassGroupFilterKindList )
LABEL_69:
    sub_1C2D6EC(ClassGroupFilterKindList, sort);
  v17 = ClassGroupFilterKindList;
  if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
    goto LABEL_70;
  *(_DWORD *)(ClassGroupFilterKindList + 32) = 39;
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0)
    && ListViewSort__GetFilter(sort, 39, 0) )
  {
    isChoice = !this->fields.isChoice;
    if ( !this->fields.isSwapChoice )
      isChoice = this->fields.isChoice;
    if ( !isChoice )
      return 0;
  }
  v19 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v19 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v19->static_fields->RarityFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_69;
  v20 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_3770E44 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v20, 0)
      || ListViewSort__IsSelectedAllTargetFilters(sort, v20, 0)
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
  __int64 v10; // x2
  CombineServantListViewItem_o *v11; // x1
  FilterKindList_c *v12; // x0
  ListViewSort_FilterKind_array *v13; // x0
  FilterKindList_c *v14; // x0
  ListViewSort_FilterKind_array *v15; // x0
  FilterKindList_c *v16; // x0
  ListViewSort_FilterKind_array *v17; // x0
  UserServantEntity_o *userSvtEntity; // x21
  _BOOL4 isChoice; // w21
  UserServantEntity_o *v20; // x0
  int32_t dispLimitCount; // w21
  UserServantEntity_o *v22; // x8
  System_Int32_array *SkillCategoryIdList; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  System_Int32_array *TreasureDeviceCategoryIdList; // x0
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  _BOOL4 IsUnSelectedAllTargetFilters; // w21
  _BOOL4 v30; // w23
  _BOOL4 IsMatchEffectCategory; // w22
  _BOOL4 v32; // w0
  bool v33; // w0
  FilterKindList_c *v35; // x0
  ListViewSort_FilterKind_array *v36; // x21

  v4 = this;
  if ( (byte_4C2B450 & 1) == 0 )
  {
    sub_1C2D490(&FilterKindList_TypeInfo);
    sub_1C2D490(&ListViewSort_FilterKind___TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    this = (CombineServantListViewItem_o *)sub_1C2D490(&ServantEventBonusFilterController_TypeInfo);
    byte_4C2B450 = 1;
  }
  if ( !sort )
    goto LABEL_86;
  v5 = ListViewSort__GetFilter(sort, 28, 0) && v4->fields.isSameClass;
  v6 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v6 = FilterKindList_TypeInfo;
  }
  this = (CombineServantListViewItem_o *)v6->static_fields->ClassGroupFilterKindList;
  if ( !this )
    goto LABEL_86;
  v7 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                          (System_Collections_Generic_List_T__o *)this,
                                          (const MethodInfo_3770E44 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
      goto LABEL_86;
    v9 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                            (System_Collections_Generic_List_T__o *)this,
                                            (const MethodInfo_3770E44 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, v9, 0) )
    {
      this = (CombineServantListViewItem_o *)sub_1C2D538(ListViewSort_FilterKind___TypeInfo, 1);
      if ( !this )
        goto LABEL_86;
      v11 = this;
      if ( !this->fields.sortIndex )
        goto LABEL_87;
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
  v12 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v12 = FilterKindList_TypeInfo;
  }
  this = (CombineServantListViewItem_o *)v12->static_fields->NpTypeFilterKindList;
  if ( !this )
    goto LABEL_86;
  v13 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)this,
                                           (const MethodInfo_3770E44 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v13, 0)
    && !ListViewSort__IsMatchNPTypeFilter(sort, v4->fields.userSvtEntity, 0) )
  {
    return 0;
  }
  v14 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v14 = FilterKindList_TypeInfo;
  }
  this = (CombineServantListViewItem_o *)v14->static_fields->NpEffectFilterKindList;
  if ( !this )
    goto LABEL_86;
  v15 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)this,
                                           (const MethodInfo_3770E44 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v15, 0)
    && !ListViewSort__IsMatchNPEffectFilter(sort, v4->fields.userSvtEntity, 0) )
  {
    return 0;
  }
  v16 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v16 = FilterKindList_TypeInfo;
  }
  this = (CombineServantListViewItem_o *)v16->static_fields->ServantTypeFilterKindList;
  if ( !this )
    goto LABEL_86;
  v17 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)this,
                                           (const MethodInfo_3770E44 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v17, 0)
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
  v20 = v4->fields.userSvtEntity;
  if ( v20 )
  {
    dispLimitCount = v4->fields.dispLimitCount;
    if ( dispLimitCount != UserServantEntity__getDispLimitCount(v20, 0, 0) )
    {
      this = (CombineServantListViewItem_o *)v4->fields.userSvtEntity;
      if ( !this )
        goto LABEL_86;
      this = (CombineServantListViewItem_o *)UserServantEntity__getDispLimitCount((UserServantEntity_o *)this, 0, 0);
      v22 = v4->fields.userSvtEntity;
      v4->fields.dispLimitCount = (int)this;
      if ( !v22 )
        goto LABEL_86;
      SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v22, -1, -1, 0);
      v4->fields.skillCategoryIdList = SkillCategoryIdList;
      sub_1C2D434((CGThumbnailListItem_o *)&v4->fields.skillCategoryIdList, (int32_t)SkillCategoryIdList, v24, v25);
      this = (CombineServantListViewItem_o *)v4->fields.userSvtEntity;
      if ( !this )
        goto LABEL_86;
      TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                       (UserServantEntity_o *)this,
                                       0,
                                       -1,
                                       0);
      v4->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
      sub_1C2D434(
        (CGThumbnailListItem_o *)&v4->fields.tdCategoryIdList,
        (int32_t)TreasureDeviceCategoryIdList,
        v27,
        v28);
    }
  }
  this = (CombineServantListViewItem_o *)sub_1C2D538(ListViewSort_FilterKind___TypeInfo, 1);
  if ( !this )
    goto LABEL_86;
  v11 = this;
  if ( !this->fields.sortIndex )
    goto LABEL_87;
  LODWORD(this->fields.sortValue0) = 50;
  IsUnSelectedAllTargetFilters = ListViewSort__IsUnSelectedAllTargetFilters(
                                   sort,
                                   (ListViewSort_FilterKind_array *)this,
                                   0);
  this = (CombineServantListViewItem_o *)sub_1C2D538(ListViewSort_FilterKind___TypeInfo, 1);
  if ( !this )
    goto LABEL_86;
  v11 = this;
  if ( !this->fields.sortIndex )
    goto LABEL_87;
  LODWORD(this->fields.sortValue0) = 51;
  v30 = ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)this, 0);
  IsMatchEffectCategory = ServantEquipEffectFilterController__IsMatchEffectCategory(
                            v4->fields.tdCategoryIdList,
                            sort,
                            0);
  v32 = ServantEquipEffectFilterController__IsMatchEffectCategory(v4->fields.skillCategoryIdList, sort, 0);
  if ( ((IsUnSelectedAllTargetFilters ^ v30) & 1) != 0 )
  {
    if ( IsUnSelectedAllTargetFilters )
    {
      if ( !v32 )
        return 0;
    }
    else if ( !IsMatchEffectCategory )
    {
      return 0;
    }
  }
  else if ( !IsMatchEffectCategory && !v32 )
  {
    return 0;
  }
LABEL_42:
  if ( !ListViewSort__IsMatchServantAttriFilter(sort, v4->fields.userSvtEntity, v4->fields.servantEntity, 0)
    || !ListViewSort__IsMatchServantSubAttriFilter(sort, v4->fields.userSvtEntity, v4->fields.servantEntity, 0) )
  {
    return 0;
  }
  this = (CombineServantListViewItem_o *)sub_1C2D538(ListViewSort_FilterKind___TypeInfo, 1);
  if ( !this )
LABEL_86:
    sub_1C2D6EC(this, sort);
  v11 = this;
  if ( !this->fields.sortIndex )
    goto LABEL_87;
  LODWORD(this->fields.sortValue0) = 39;
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)this, 0) )
  {
    this = (CombineServantListViewItem_o *)sub_1C2D538(ListViewSort_FilterKind___TypeInfo, 1);
    if ( !this )
      goto LABEL_86;
    v11 = this;
    if ( this->fields.sortIndex )
    {
      LODWORD(this->fields.sortValue0) = 29;
      if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)this, 0) )
        goto LABEL_79;
      goto LABEL_50;
    }
LABEL_87:
    sub_1C2D6F4(this, v11, v10);
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
  v33 = !ListViewSort__GetFilter(sort, 29, 0)
     || CombineServantListViewItem__get_IsCanNotSelect(v4, (const MethodInfo *)sort);
  if ( !isChoice && v33 )
    return 0;
LABEL_79:
  v35 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v35 = FilterKindList_TypeInfo;
  }
  this = (CombineServantListViewItem_o *)v35->static_fields->RarityFilterKindList;
  if ( !this )
    goto LABEL_86;
  v36 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)this,
                                           (const MethodInfo_3770E44 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v36, 0)
      || ListViewSort__IsSelectedAllTargetFilters(sort, v36, 0)
      || ListViewSort__IsMatchRarityFilter(sort, v4->fields.rarity, 0);
}


bool CombineServantListViewItem__IsMatchServantFilter(
        CombineServantListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  FilterKindList_c *v5; // x0
  __int64 ClassGroupFilterKindList; // x0
  FilterKindList_c *v7; // x0
  ListViewSort_FilterKind_array *v8; // x0
  FilterKindList_c *v9; // x0
  ListViewSort_FilterKind_array *v10; // x0
  FilterKindList_c *v11; // x0
  ListViewSort_FilterKind_array *v12; // x0
  UserServantEntity_o *userSvtEntity; // x21
  __int64 v14; // x2
  __int64 v15; // x1
  _BOOL4 isChoice; // w8
  FilterKindList_c *v17; // x0
  ListViewSort_FilterKind_array *v18; // x21
  UserServantEntity_o *v20; // x0
  int32_t dispLimitCount; // w21
  UserServantEntity_o *v22; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  _BOOL4 IsUnSelectedAllTargetFilters; // w21
  _BOOL4 v30; // w23
  _BOOL4 IsMatchEffectCategory; // w22
  _BOOL4 v32; // w0

  if ( (byte_4C2B44E & 1) == 0 )
  {
    sub_1C2D490(&FilterKindList_TypeInfo);
    sub_1C2D490(&ListViewSort_FilterKind___TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    sub_1C2D490(&ServantEventBonusFilterController_TypeInfo);
    byte_4C2B44E = 1;
  }
  v5 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v5 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v5->static_fields->ClassGroupFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_64;
  ClassGroupFilterKindList = (__int64)System_Collections_Generic_List_Int32Enum___ToArray(
                                        (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                        (const MethodInfo_3770E44 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_64;
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0) )
  {
    v7 = FilterKindList_TypeInfo;
    if ( !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
      v7 = FilterKindList_TypeInfo;
    }
    ClassGroupFilterKindList = (__int64)v7->static_fields->ClassFilterKindList;
    if ( !ClassGroupFilterKindList )
      goto LABEL_64;
    v8 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                            (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                            (const MethodInfo_3770E44 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
  ClassGroupFilterKindList = (__int64)v9->static_fields->NpTypeFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_64;
  v10 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_3770E44 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
  ClassGroupFilterKindList = (__int64)v11->static_fields->NpEffectFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_64;
  v12 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_3770E44 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
    v20 = this->fields.userSvtEntity;
    if ( v20 )
    {
      dispLimitCount = this->fields.dispLimitCount;
      if ( dispLimitCount != UserServantEntity__getDispLimitCount(v20, 0, 0) )
      {
        ClassGroupFilterKindList = (__int64)this->fields.userSvtEntity;
        if ( !ClassGroupFilterKindList )
          goto LABEL_64;
        ClassGroupFilterKindList = UserServantEntity__getDispLimitCount(
                                     (UserServantEntity_o *)ClassGroupFilterKindList,
                                     0,
                                     0);
        v22 = this->fields.userSvtEntity;
        this->fields.dispLimitCount = ClassGroupFilterKindList;
        if ( !v22 )
          goto LABEL_64;
        SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v22, -1, -1, 0);
        this->fields.skillCategoryIdList = SkillCategoryIdList;
        sub_1C2D434((CGThumbnailListItem_o *)&this->fields.skillCategoryIdList, (int32_t)SkillCategoryIdList, v24, v25);
        ClassGroupFilterKindList = (__int64)this->fields.userSvtEntity;
        if ( !ClassGroupFilterKindList )
          goto LABEL_64;
        TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                         (UserServantEntity_o *)ClassGroupFilterKindList,
                                         0,
                                         -1,
                                         0);
        this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
        sub_1C2D434(
          (CGThumbnailListItem_o *)&this->fields.tdCategoryIdList,
          (int32_t)TreasureDeviceCategoryIdList,
          v27,
          v28);
      }
    }
    ClassGroupFilterKindList = sub_1C2D538(ListViewSort_FilterKind___TypeInfo, 1);
    if ( !ClassGroupFilterKindList )
      goto LABEL_64;
    v15 = ClassGroupFilterKindList;
    if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
      goto LABEL_65;
    *(_DWORD *)(ClassGroupFilterKindList + 32) = 50;
    IsUnSelectedAllTargetFilters = ListViewSort__IsUnSelectedAllTargetFilters(
                                     sort,
                                     (ListViewSort_FilterKind_array *)ClassGroupFilterKindList,
                                     0);
    ClassGroupFilterKindList = sub_1C2D538(ListViewSort_FilterKind___TypeInfo, 1);
    if ( !ClassGroupFilterKindList )
      goto LABEL_64;
    v15 = ClassGroupFilterKindList;
    if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
LABEL_65:
      sub_1C2D6F4(ClassGroupFilterKindList, v15, v14);
    *(_DWORD *)(ClassGroupFilterKindList + 32) = 51;
    v30 = ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0);
    IsMatchEffectCategory = ServantEquipEffectFilterController__IsMatchEffectCategory(
                              this->fields.tdCategoryIdList,
                              sort,
                              0);
    v32 = ServantEquipEffectFilterController__IsMatchEffectCategory(this->fields.skillCategoryIdList, sort, 0);
    if ( ((IsUnSelectedAllTargetFilters ^ v30) & 1) != 0 )
    {
      if ( IsUnSelectedAllTargetFilters )
      {
        if ( !v32 )
          return 0;
      }
      else if ( !IsMatchEffectCategory )
      {
        return 0;
      }
    }
    else if ( !IsMatchEffectCategory && !v32 )
    {
      return 0;
    }
  }
  if ( !ListViewSort__IsMatchServantAttriFilter(sort, this->fields.userSvtEntity, this->fields.servantEntity, 0)
    || !ListViewSort__IsMatchServantSubAttriFilter(sort, this->fields.userSvtEntity, this->fields.servantEntity, 0) )
  {
    return 0;
  }
  ClassGroupFilterKindList = sub_1C2D538(ListViewSort_FilterKind___TypeInfo, 1);
  if ( !ClassGroupFilterKindList )
LABEL_64:
    sub_1C2D6EC(ClassGroupFilterKindList, sort);
  v15 = ClassGroupFilterKindList;
  if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
    goto LABEL_65;
  *(_DWORD *)(ClassGroupFilterKindList + 32) = 39;
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0)
    && ListViewSort__GetFilter(sort, 39, 0) )
  {
    isChoice = !this->fields.isChoice;
    if ( !this->fields.isSwapChoice )
      isChoice = this->fields.isChoice;
    if ( !isChoice )
      return 0;
  }
  v17 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v17 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v17->static_fields->RarityFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_64;
  v18 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_3770E44 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v18, 0)
      || ListViewSort__IsSelectedAllTargetFilters(sort, v18, 0)
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
    sub_1C2D6EC(0, method);
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
    sub_1C2D6EC(0, method);
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

  if ( (byte_4C2B44D & 1) == 0 )
  {
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C2B44D = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame || (userSvtEntity = this->fields.userSvtEntity) == 0 )
    sub_1C2D6EC(SelfUserGame, v4);
  v6 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  pushUserSvtId = SelfUserGame->fields.pushUserSvtId;
  *(_OWORD *)&v9.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v9.fields.fakeValue = v6;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v8 = v9;
  this->fields.isPush = pushUserSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v8, 0);
}


void CombineServantListViewItem__SetAppendSkillInfo(CombineServantListViewItem_o *this, const MethodInfo *method)
{
  void *userSvtEntity; // x0
  SvtUseSkillData_o *AppendSkillInfo; // x0
  SvtUseSkillData_o *v5; // x20
  __int64 v6; // x2
  int64_t v7; // x21
  struct System_Int32_array *svtUseSkillIdList; // x8
  __int64 v9; // x26
  unsigned __int64 max_length_low; // x9
  unsigned __int64 v11; // x29
  struct System_Int32_array *v12; // x8
  struct System_Int32_array *svtSkillLvList; // x8
  int v14; // w9
  struct UserServantEntity_o *v15; // x8
  __int64 v16; // x22
  __int64 v17; // x23
  int32_t v18; // w0
  System_Collections_Generic_List_int__o *v19; // x22
  struct System_Int32_array *v20; // x8
  __int64 v21; // x29
  unsigned __int64 v22; // x9
  unsigned __int64 v23; // x26
  struct System_Int32_array *v24; // x8
  int v25; // w23
  struct UserServantEntity_o *v26; // x8
  CombineAppendPassiveSkillMaster_o *v27; // x23
  __int64 v28; // x24
  __int64 v29; // x25
  struct System_Int32_array *svtSkillNumsList; // x8
  struct System_Int32_array *v31; // x9
  struct System_Int32_array *v32; // x8
  __int64 v33; // x8
  _QWORD *v34; // x9
  __int64 v35; // x10
  char *v36; // x8
  struct UserServantEntity_o *v37; // x8
  SvtAppendPassiveSkillUnlockMaster_o *v38; // x23
  __int64 v39; // x24
  __int64 v40; // x25
  struct System_Int32_array *v41; // x8
  struct System_Int32_array *v42; // x8
  struct System_Int32_array *items; // x8
  _QWORD *v44; // x9
  __int64 size; // x10
  __int64 v46; // x8
  CombineAppendPassiveSkillEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v48; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v49; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v50; // 0:x0.16

  if ( (byte_4C2B44C & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_CombineAppendPassiveSkillMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_SkillMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_SvtAppendPassiveSkillUnlockMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1C2D490(&Method_System_Linq_Enumerable_Any_int___);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C2B44C = 1;
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
  v7 = *((_QWORD *)userSvtEntity + 12);
  this->fields.isAppendSkillLvMax = 1;
  this->fields.isAllAppendSkillLock = 1;
  this->fields.isAppendSkillLvSame = 1;
  svtUseSkillIdList = v5->fields.svtUseSkillIdList;
  if ( !svtUseSkillIdList )
    goto LABEL_79;
  v9 = 8;
  while ( 1 )
  {
    max_length_low = LODWORD(svtUseSkillIdList->max_length);
    v11 = v9 - 8;
    if ( v9 - 8 >= (int)max_length_low )
      break;
    if ( v11 >= max_length_low )
      goto LABEL_82;
    if ( *((int *)&svtUseSkillIdList->obj.klass + v9) >= 1 )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      userSvtEntity = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_SkillMaster___);
      v12 = v5->fields.svtUseSkillIdList;
      if ( !v12 )
        goto LABEL_79;
      if ( v11 >= LODWORD(v12->max_length) )
        goto LABEL_82;
      if ( !userSvtEntity )
        goto LABEL_79;
      userSvtEntity = DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)userSvtEntity,
                        *((_DWORD *)&v12->obj.klass + v9),
                        (const MethodInfo_3387D98 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
      svtSkillLvList = v5->fields.svtSkillLvList;
      if ( !svtSkillLvList )
        goto LABEL_79;
      if ( v11 >= LODWORD(svtSkillLvList->max_length) )
LABEL_82:
        sub_1C2D6F4(userSvtEntity, method, v6);
      if ( !userSvtEntity )
        goto LABEL_79;
      v14 = *((_DWORD *)&svtSkillLvList->obj.klass + v9);
      if ( v14 < *((_DWORD *)userSvtEntity + 10) && this->fields.isAppendSkillLvMax )
        this->fields.isAppendSkillLvMax = 0;
      if ( v14 >= 1 && this->fields.isAllAppendSkillLock )
        this->fields.isAllAppendSkillLock = 0;
      if ( svtSkillLvList->m_Items[0] != v14 && this->fields.isAppendSkillLvSame )
        this->fields.isAppendSkillLvSame = 0;
    }
    svtUseSkillIdList = v5->fields.svtUseSkillIdList;
    ++v9;
    if ( !svtUseSkillIdList )
      goto LABEL_79;
  }
  v15 = this->fields.userSvtEntity;
  if ( !v15 )
    goto LABEL_79;
  v17 = *(_QWORD *)&v15->fields.svtId.fields.currentCryptoKey;
  v16 = *(_QWORD *)&v15->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v48.fields.currentCryptoKey = v17;
  *(_QWORD *)&v48.fields.fakeValue = v16;
  v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v48, 0);
  this->fields.isAppendSkillExChangeLimit = UserServantAppendPassiveSkillMaster__IsAppendSkillExchangeLimit(v18, 0);
  v19 = (System_Collections_Generic_List_int__o *)sub_1C2D6DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v19,
    (const MethodInfo_376C30C *)Method_System_Collections_Generic_List_int___ctor__);
  v20 = v5->fields.svtUseSkillIdList;
  if ( !v20 )
LABEL_79:
    sub_1C2D6EC(userSvtEntity, method);
  v21 = 8;
  while ( 1 )
  {
    v22 = LODWORD(v20->max_length);
    v23 = v21 - 8;
    if ( v21 - 8 >= (int)v22 )
      break;
    if ( v23 >= v22 )
      goto LABEL_82;
    if ( *((int *)&v20->obj.klass + v21) < 1 )
      goto LABEL_78;
    v24 = v5->fields.svtSkillLvList;
    if ( !v24 )
      goto LABEL_79;
    if ( v23 >= LODWORD(v24->max_length) )
      goto LABEL_82;
    v25 = *((_DWORD *)&v24->obj.klass + v21);
    if ( DataManager_TypeInfo->_2.cctor_finished )
    {
      if ( v25 )
        goto LABEL_42;
    }
    else
    {
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      if ( v25 )
      {
LABEL_42:
        userSvtEntity = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_CombineAppendPassiveSkillMaster___);
        v26 = this->fields.userSvtEntity;
        if ( !v26 )
          goto LABEL_79;
        v27 = (CombineAppendPassiveSkillMaster_o *)userSvtEntity;
        v29 = *(_QWORD *)&v26->fields.svtId.fields.currentCryptoKey;
        v28 = *(_QWORD *)&v26->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v49.fields.currentCryptoKey = v29;
        *(_QWORD *)&v49.fields.fakeValue = v28;
        userSvtEntity = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v49, 0);
        svtSkillNumsList = v5->fields.svtSkillNumsList;
        if ( !svtSkillNumsList )
          goto LABEL_79;
        if ( v23 >= LODWORD(svtSkillNumsList->max_length) )
          goto LABEL_82;
        v31 = v5->fields.svtSkillLvList;
        if ( !v31 )
          goto LABEL_79;
        if ( v23 >= LODWORD(v31->max_length) )
          goto LABEL_82;
        if ( !v27 )
          goto LABEL_79;
        userSvtEntity = (void *)CombineAppendPassiveSkillMaster__TryGetEntityWithTryNum(
                                  v27,
                                  &entity,
                                  (int32_t)userSvtEntity,
                                  *((_DWORD *)&svtSkillNumsList->obj.klass + v21),
                                  *((_DWORD *)&v31->obj.klass + v21),
                                  0);
        if ( ((unsigned __int8)userSvtEntity & 1) != 0 )
        {
          if ( !entity )
            goto LABEL_79;
          userSvtEntity = (void *)CombineUtility__CheckCombineNeedItemsEnough(
                                    this->fields.userSvtEntity,
                                    entity->fields.itemIds,
                                    entity->fields.itemNums,
                                    v7,
                                    entity->fields.qp,
                                    0);
          if ( ((unsigned __int8)userSvtEntity & 1) != 0 )
          {
            v32 = v5->fields.svtUseSkillIdList;
            if ( !v32 )
              goto LABEL_79;
            if ( v23 >= LODWORD(v32->max_length) )
              goto LABEL_82;
            userSvtEntity = this->fields.enableAppendSkillUp;
            if ( !userSvtEntity )
              goto LABEL_79;
            method = (const MethodInfo *)*((unsigned int *)&v32->obj.klass + v21);
            v33 = *((_QWORD *)userSvtEntity + 2);
            v34 = Method_System_Collections_Generic_List_int__Add__;
            ++*((_DWORD *)userSvtEntity + 7);
            if ( !v33 )
              goto LABEL_79;
            v35 = *((int *)userSvtEntity + 6);
            if ( (unsigned int)v35 >= *(_DWORD *)(v33 + 24) )
            {
              v46 = v34[4];
LABEL_77:
              System_Collections_Generic_List_int___AddWithResize(
                (System_Collections_Generic_List_int__o *)userSvtEntity,
                (int32_t)method,
                *(const MethodInfo_376CB60 **)(*(_QWORD *)(v46 + 192) + 112LL));
              goto LABEL_78;
            }
            v36 = (char *)(v33 + 4 * v35);
            *((_DWORD *)userSvtEntity + 6) = v35 + 1;
LABEL_74:
            *((_DWORD *)v36 + 8) = (_DWORD)method;
            goto LABEL_78;
          }
        }
        goto LABEL_78;
      }
    }
    userSvtEntity = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_SvtAppendPassiveSkillUnlockMaster___);
    v37 = this->fields.userSvtEntity;
    if ( !v37 )
      goto LABEL_79;
    v38 = (SvtAppendPassiveSkillUnlockMaster_o *)userSvtEntity;
    v40 = *(_QWORD *)&v37->fields.svtId.fields.currentCryptoKey;
    v39 = *(_QWORD *)&v37->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v50.fields.currentCryptoKey = v40;
    *(_QWORD *)&v50.fields.fakeValue = v39;
    userSvtEntity = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v50, 0);
    v41 = v5->fields.svtSkillNumsList;
    if ( !v41 )
      goto LABEL_79;
    if ( v23 >= LODWORD(v41->max_length) )
      goto LABEL_82;
    if ( !v38 )
      goto LABEL_79;
    userSvtEntity = SvtAppendPassiveSkillUnlockMaster__GetEntity(
                      v38,
                      (int32_t)userSvtEntity,
                      *((_DWORD *)&v41->obj.klass + v21),
                      0);
    if ( userSvtEntity )
    {
      userSvtEntity = (void *)CombineUtility__CheckCombineNeedItemsEnough(
                                this->fields.userSvtEntity,
                                *((System_Int32_array **)userSvtEntity + 3),
                                *((System_Int32_array **)userSvtEntity + 4),
                                v7,
                                0,
                                0);
      if ( ((unsigned __int8)userSvtEntity & 1) != 0 )
      {
        v42 = v5->fields.svtUseSkillIdList;
        if ( !v42 )
          goto LABEL_79;
        if ( v23 >= LODWORD(v42->max_length) )
          goto LABEL_82;
        if ( !v19 )
          goto LABEL_79;
        method = (const MethodInfo *)*((unsigned int *)&v42->obj.klass + v21);
        items = v19->fields._items;
        v44 = Method_System_Collections_Generic_List_int__Add__;
        ++v19->fields._version;
        if ( !items )
          goto LABEL_79;
        size = v19->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          v46 = v44[4];
          userSvtEntity = v19;
          goto LABEL_77;
        }
        v36 = (char *)items + 4 * size;
        v19->fields._size = size + 1;
        goto LABEL_74;
      }
    }
LABEL_78:
    v20 = v5->fields.svtUseSkillIdList;
    ++v21;
    if ( !v20 )
      goto LABEL_79;
  }
  this->fields.isAppendSkillUpItemNum = System_Linq_Enumerable__Any_int_(
                                          (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.enableAppendSkillUp,
                                          (const MethodInfo_30D9F98 *)Method_System_Linq_Enumerable_Any_int___);
  this->fields.isAppendSkillOpenItemNum = System_Linq_Enumerable__Any_int_(
                                            (System_Collections_Generic_IEnumerable_TSource__o *)v19,
                                            (const MethodInfo_30D9F98 *)Method_System_Linq_Enumerable_Any_int___);
}


void CombineServantListViewItem__SetIsCombineExpCampaignTarget(
        CombineServantListViewItem_o *this,
        System_Collections_Generic_List_EventCampaignEntity__o *eventCampaignEntities,
        const MethodInfo *method)
{
  CombineServantListViewItem___c_c *v5; // x0
  System_Predicate_object__o *_9__125_0; // x21
  Il2CppObject *v7; // x22
  struct CombineServantListViewItem___c_StaticFields *static_fields; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  System_Collections_Generic_List_T__o *All; // x0
  __int64 v12; // x1
  int klass; // w22
  _BOOL8 v14; // x0
  __int64 v15; // x1
  Il2CppObject *current; // x24
  UserServantEntity_o *userSvtEntity; // x0
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4C2B452 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Array_IndexOf_int___);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventCampaignEntity__FindAll__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    sub_1C2D490(&System_Predicate_EventCampaignEntity__TypeInfo);
    sub_1C2D490(&Method_CombineServantListViewItem___c__SetIsCombineExpCampaignTarget_b__125_0__);
    sub_1C2D490(&CombineServantListViewItem___c_TypeInfo);
    byte_4C2B452 = 1;
  }
  memset(&v19, 0, sizeof(v19));
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
    _9__125_0 = (System_Predicate_object__o *)v5->static_fields->__9__125_0;
    if ( !_9__125_0 )
    {
      if ( !v5->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v5);
        v5 = CombineServantListViewItem___c_TypeInfo;
      }
      v7 = (Il2CppObject *)v5->static_fields->__9;
      _9__125_0 = (System_Predicate_object__o *)sub_1C2D6DC(System_Predicate_EventCampaignEntity__TypeInfo);
      System_Predicate_object____ctor(
        _9__125_0,
        v7,
        Method_CombineServantListViewItem___c__SetIsCombineExpCampaignTarget_b__125_0__,
        0);
      static_fields = CombineServantListViewItem___c_TypeInfo->static_fields;
      static_fields->__9__125_0 = (struct System_Predicate_EventCampaignEntity__o *)_9__125_0;
      sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__125_0, (int32_t)_9__125_0, v9, v10);
    }
    All = System_Collections_Generic_List_object___FindAll(
            (System_Collections_Generic_List_object__o *)eventCampaignEntities,
            (System_Predicate_T__o *)_9__125_0,
            (const MethodInfo_378A294 *)Method_System_Collections_Generic_List_EventCampaignEntity__FindAll__);
    if ( !All )
      sub_1C2D6EC(0, v12);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v18,
      (System_Collections_Generic_List_object__o *)All,
      (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    v19 = v18;
    klass = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        v14 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v19,
                (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
        if ( !v14 )
        {
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v19,
            (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
          this->fields.combineExpCampaignValue = (float)klass / 1000.0;
          return;
        }
        current = v19.fields._current;
        if ( !v19.fields._current )
          sub_1C2D6EC(v14, v15);
        if ( HIDWORD(v19.fields._current[1].klass) == 27 )
          break;
        if ( (System_Array__IndexOf_int_(
                (System_Int32_array *)v19.fields._current[2].monitor,
                this->fields.svtId,
                (const MethodInfo_31D59D0 *)Method_System_Array_IndexOf_int___)
            & 0x80000000) == 0 )
          goto LABEL_20;
      }
      userSvtEntity = this->fields.userSvtEntity;
      if ( !userSvtEntity )
        sub_1C2D6EC(0, v15);
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
  const MethodInfo *v3; // x3

  this->fields._NoticeTween_k__BackingField = noticeTween;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&this->fields._NoticeTween_k__BackingField,
    (int32_t)noticeTween,
    (int32_t)method,
    v3);
}


void CombineServantListViewItem__SetOverwriteStatus(CombineServantListViewItem_o *this, const MethodInfo *method)
{
  void *userSvtEntity; // x0

  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity
    || (userSvtEntity = UserServantEntity__GetOverwriteStatus((UserServantEntity_o *)userSvtEntity, 0, 0)) == 0 )
  {
    sub_1C2D6EC(userSvtEntity, method);
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
  __int64 v8; // x2
  __int64 v9; // x8
  int64_t v10; // x22
  unsigned __int64 v11; // x20
  int32_t v12; // w23
  int v13; // w28
  __int64 v14; // x8
  CombineSkillMaster_o *v15; // x20
  unsigned __int64 v16; // x28
  char v17; // w26
  int32_t v18; // w24
  struct ServantEntity_o *servantEntity; // x8
  CombineSkillMaster_o *v20; // x21
  struct System_Int32_array *itemNums; // x20
  struct System_Int32_array *itemIds; // x27
  int max_length; // w8
  UserItemMaster_o *v24; // x25
  unsigned int v25; // w9
  unsigned int v26; // w29
  struct UserServantEntity_o *v27; // x8
  __int128 v28; // q1
  int32_t v29; // w26
  int32_t v30; // w23
  __int64 v31; // x8
  _QWORD *v32; // x9
  __int64 v33; // x10
  struct System_Collections_Generic_List_int__o *enableSkillUp; // x8
  int64_t v35; // [xsp+0h] [xbp-C0h]
  int64_t v36; // [xsp+8h] [xbp-B8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v37; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+30h] [xbp-90h]
  UserItemEntity_o *v39; // [xsp+50h] [xbp-70h] BYREF
  CombineSkillEntity_o *entity; // [xsp+58h] [xbp-68h] BYREF

  if ( (byte_4C2B44B & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_CombineSkillMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1C2D490(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C2B44B = 1;
  }
  v39 = 0;
  entity = 0;
  SelfUserGame = (int64_t)UserGameMaster__getSelfUserGame(0);
  userSvtEntity = this->fields.userSvtEntity;
  v36 = SelfUserGame;
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
  v9 = *(_QWORD *)(v7 + 24);
  v10 = SelfUserGame;
  if ( (int)v9 >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      if ( v11 >= (unsigned int)v9 )
        goto LABEL_61;
      if ( !v10 )
        goto LABEL_60;
      if ( v11 >= *(unsigned int *)(v10 + 24) )
        goto LABEL_61;
      v12 = *(_DWORD *)(v7 + 32 + 4 * v11);
      if ( v12 >= 1 )
      {
        v13 = *(_DWORD *)(v10 + 32 + 4 * v11);
        SelfUserGame = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !SelfUserGame )
          goto LABEL_60;
        SelfUserGame = (int64_t)DataManager__GetMasterData_object_(
                                  (DataManager_o *)SelfUserGame,
                                  (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_SkillMaster___);
        if ( !SelfUserGame )
          goto LABEL_60;
        SelfUserGame = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)SelfUserGame,
                                  v12,
                                  (const MethodInfo_3387D98 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        if ( !SelfUserGame )
          goto LABEL_60;
        if ( v13 < *(_DWORD *)(SelfUserGame + 40) )
          break;
      }
      LODWORD(v9) = *(_DWORD *)(v7 + 24);
      if ( (__int64)++v11 >= (int)v9 )
        goto LABEL_19;
    }
    this->fields.isSkillLvMax = 0;
  }
LABEL_19:
  SelfUserGame = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_60;
  SelfUserGame = (int64_t)DataManager__GetMasterData_object_(
                            (DataManager_o *)SelfUserGame,
                            (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_CombineSkillMaster___);
  v14 = *(_QWORD *)(v7 + 24);
  if ( (int)v14 >= 1 )
  {
    v15 = (CombineSkillMaster_o *)SelfUserGame;
    v16 = 0;
    v17 = 0;
    v35 = v7;
    while ( v16 < (unsigned int)v14 )
    {
      if ( !v10 )
        goto LABEL_60;
      if ( v16 >= *(unsigned int *)(v10 + 24) )
        break;
      v18 = *(_DWORD *)(v7 + 4 * v16 + 32);
      if ( v18 >= 1 )
      {
        servantEntity = this->fields.servantEntity;
        if ( !servantEntity || !v15 )
          goto LABEL_60;
        SelfUserGame = CombineSkillMaster__TryGetEntity(
                         v15,
                         &entity,
                         servantEntity->fields.combineSkillId,
                         *(_DWORD *)(v10 + 4 * v16 + 32),
                         0);
        if ( (SelfUserGame & 1) != 0 )
        {
          if ( !entity )
            goto LABEL_60;
          v20 = v15;
          itemIds = entity->fields.itemIds;
          itemNums = entity->fields.itemNums;
          SelfUserGame = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !SelfUserGame )
            goto LABEL_60;
          SelfUserGame = (int64_t)DataManager__GetMasterData_object_(
                                    (DataManager_o *)SelfUserGame,
                                    (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserItemMaster___);
          if ( !itemIds )
            goto LABEL_60;
          max_length = itemIds->max_length;
          if ( max_length >= 1 )
          {
            v24 = (UserItemMaster_o *)SelfUserGame;
            v25 = 0;
            while ( 1 )
            {
              if ( v25 >= max_length )
                goto LABEL_61;
              if ( !itemNums )
                goto LABEL_60;
              v26 = v25;
              if ( v25 >= LODWORD(itemNums->max_length) )
                goto LABEL_61;
              v27 = this->fields.userSvtEntity;
              if ( !v27 )
                goto LABEL_60;
              v28 = *(_OWORD *)&v27->fields.userId.fields.fakeValue;
              v29 = itemIds->m_Items[v25];
              v30 = itemNums->m_Items[v25];
              *(_OWORD *)&v38.fields.currentCryptoKey = *(_OWORD *)&v27->fields.userId.fields.currentCryptoKey;
              *(_OWORD *)&v38.fields.fakeValue = v28;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
              v37 = v38;
              SelfUserGame = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v37, 0);
              if ( !v24 )
                goto LABEL_60;
              SelfUserGame = UserItemMaster__TryGetEntity(v24, &v39, SelfUserGame, v29, 0);
              if ( (SelfUserGame & 1) == 0 )
                break;
              if ( !v39 )
                goto LABEL_60;
              if ( v30 > v39->fields.num )
                break;
              max_length = itemIds->max_length;
              v25 = v26 + 1;
              if ( (int)(v26 + 1) >= max_length )
              {
                v17 = 1;
                goto LABEL_47;
              }
            }
            v17 = 0;
          }
LABEL_47:
          if ( !v36 || !entity )
            goto LABEL_60;
          v15 = v20;
          v7 = v35;
          if ( *(_QWORD *)(v36 + 96) < entity->fields.qp || (v17 & 1) == 0 )
          {
            v17 = 0;
          }
          else
          {
            SelfUserGame = (int64_t)this->fields.enableSkillUp;
            if ( !SelfUserGame )
              goto LABEL_60;
            v31 = *(_QWORD *)(SelfUserGame + 16);
            v32 = Method_System_Collections_Generic_List_int__Add__;
            ++*(_DWORD *)(SelfUserGame + 28);
            if ( !v31 )
              goto LABEL_60;
            v33 = *(int *)(SelfUserGame + 24);
            if ( (unsigned int)v33 >= *(_DWORD *)(v31 + 24) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                (System_Collections_Generic_List_int__o *)SelfUserGame,
                v18,
                *(const MethodInfo_376CB60 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
            }
            else
            {
              *(_DWORD *)(SelfUserGame + 24) = v33 + 1;
              *(_DWORD *)(v31 + 4 * v33 + 32) = v18;
            }
            v17 = 1;
          }
        }
      }
      LODWORD(v14) = *(_DWORD *)(v7 + 24);
      if ( (__int64)++v16 >= (int)v14 )
        goto LABEL_58;
    }
LABEL_61:
    sub_1C2D6F4(SelfUserGame, v4, v8);
  }
LABEL_58:
  enableSkillUp = this->fields.enableSkillUp;
  if ( !enableSkillUp )
LABEL_60:
    sub_1C2D6EC(SelfUserGame, v4);
  this->fields.isSkillUpItemNum = enableSkillUp->fields._size > 0;
}


bool CombineServantListViewItem__SetSortValue(
        CombineServantListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int64_t iconLabelInfo2; // x0
  const MethodInfo *v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t bonusKind2; // w8
  int32_t v11; // w2
  int32_t bonusKind2Id; // w8
  struct ListViewManager_o *v13; // x8
  __int64 v14; // x11
  UnityEngine_Object_o *v15; // x21
  int32_t v16; // w8
  int32_t v17; // w8
  bool IsEnableServant; // w0
  Il2CppObject *MasterData_object; // x0
  int32_t svtId; // w22
  ServantFilterMaster_o *v21; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // kr00_16
  System_Collections_Generic_List_EventGroupEntity__o *EntitiesByGroupId; // x22
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  struct ListViewManager_o *manager; // x8
  CombineServantListViewManager_c *v27; // x9
  __int64 v28; // x10
  struct ListViewManager_o *v29; // x11
  int32_t v30; // w8
  const MethodInfo *v31; // x3
  struct UserServantEntity_o *v32; // x8
  __int128 v33; // q1
  int32_t bonusKindId; // w21
  CombineServantListViewManager_o *v35; // x0
  const MethodInfo *v36; // x3
  int32_t v37; // w1
  CGThumbnailListItem_o *v38; // x0
  System_Func_object__bool__o *v39; // x23
  const MethodInfo *v40; // x2
  _BOOL4 isChoice; // w11
  _BOOL4 isLock; // w23
  _BOOL4 v43; // w21
  const MethodInfo *v44; // x2
  int64_t *p_sortValue0; // x22
  __int64 v46; // x8
  unsigned int v47; // w8
  __int64 v48; // x8
  int32_t type; // w8
  __int64 v50; // x8
  int32_t rarity; // w8
  __int64 v52; // x9
  bool v53; // zf
  int64_t v54; // x8
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v56; // q1
  struct UserServantEntity_o *v57; // x8
  IconLabelInfo_o *v58; // x20
  int32_t v59; // w21
  struct UserServantEntity_o *v60; // x8
  int32_t v61; // w8
  struct UserServantEntity_o *v62; // x8
  int64_t v63; // x20
  struct IconLabelInfo_o *v64; // x21
  int32_t v65; // w3
  IconLabelInfo_o *v66; // x0
  int32_t v67; // w2
  unsigned int v68; // w8
  IconLabelInfo_o *v69; // x20
  int64_t hp; // x20
  IconLabelInfo_o *v71; // x21
  int64_t atk; // x20
  IconLabelInfo_o *v73; // x21
  struct IconLabelInfo_o *iconLabelInfo1; // x19
  int64_t cost; // x2
  int32_t lv; // w20
  int64_t friendship; // x2
  int32_t friendshipMax; // w3
  int32_t v79; // w1
  __int64 naturalAligment; // x10
  struct ServantEntity_o *servantEntity; // x8
  __int64 collectionNo; // x10
  struct UserServantEntity_o *v83; // x8
  int32_t v84; // w21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v86; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v87; // [xsp+30h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v88; // [xsp+50h] [xbp-60h]
  int32_t tdMaxLv[2]; // [xsp+78h] [xbp-38h] BYREF

  if ( (byte_4C2B451 & 1) == 0 )
  {
    sub_1C2D490(&Method_BasicHelper_Any_EventGroupEntity___);
    sub_1C2D490(&CombineServantListViewManager_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantFilterMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_EventGroupMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&System_Func_EventGroupEntity__bool__TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventGroupEntity__get_Count__);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&TutorialFlag_TypeInfo);
    sub_1C2D490(&Method_CombineServantListViewItem___c__DisplayClass124_0__SetSortValue_b__0__);
    sub_1C2D490(&CombineServantListViewItem___c__DisplayClass124_0_TypeInfo);
    byte_4C2B451 = 1;
  }
  *(_QWORD *)tdMaxLv = 0;
  v5 = sub_1C2D6DC(CombineServantListViewItem___c__DisplayClass124_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_310;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  *(_WORD *)&this->fields.isTermination = 0;
  this->fields.sortValue1 = -1;
  *(_WORD *)&this->fields.isDispAtkStatusUpInfo = 0;
  if ( !sort )
    goto LABEL_310;
  if ( !sort->fields.isBonusKind || this->fields.isBaseSvt || ListViewItem__get_IsSelect((ListViewItem_o *)this, 0) )
  {
LABEL_76:
    if ( this->fields.isBaseSvt || ListViewItem__get_IsSelect((ListViewItem_o *)this, 0) )
      goto LABEL_78;
    type = this->fields.type;
    if ( type == 1 )
    {
      if ( !CombineServantListViewItem__IsMatchMaterialFilter(this, sort, v40) )
        goto LABEL_104;
      goto LABEL_78;
    }
    if ( !type )
    {
      if ( !CombineServantListViewItem__IsMatchBaseServantFilter(this, sort, v40) )
        goto LABEL_104;
LABEL_78:
      isChoice = this->fields.isChoice;
      iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo2;
      if ( this->fields.isSwapLock )
        isLock = !this->fields.isLock;
      else
        isLock = this->fields.isLock;
      if ( this->fields.isSwapChoice )
        v43 = !isChoice;
      else
        v43 = isChoice;
      if ( !iconLabelInfo2 )
        goto LABEL_310;
      IconLabelInfo__Clear((IconLabelInfo_o *)iconLabelInfo2, 0);
      this->fields.sortValue0 = 0;
      p_sortValue0 = &this->fields.sortValue0;
      this->fields.sortValue0B = 0;
      if ( !sort->fields.isSmartSort )
      {
        if ( v43 && sort->fields.isChoiceSort )
        {
          v47 = this->fields.type;
          if ( v47 <= 0xC )
          {
            if ( ((1 << v47) & 0x1FDD) != 0 )
              v48 = 10;
            else
LABEL_124:
              v48 = -10;
            *p_sortValue0 = v48;
          }
        }
LABEL_198:
        iconLabelInfo2 = 1;
        switch ( sort->fields.sortKind )
        {
          case 0:
            if ( !this )
              break;
            iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
            v54 = !this->fields.isParty;
LABEL_232:
            this->fields.sortValue1 = v54;
            if ( !iconLabelInfo2 )
              break;
            iconLabelInfo1 = this->fields.iconLabelInfo1;
            goto LABEL_234;
          case 1:
            userSvtEntity = this->fields.userSvtEntity;
            if ( !userSvtEntity )
              break;
            v56 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
            *(_OWORD *)&v88.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v88.fields.fakeValue = v56;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v86 = v88;
            iconLabelInfo2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v86, 0);
            v57 = this->fields.userSvtEntity;
            this->fields.sortValue1 = iconLabelInfo2;
            if ( !v57 )
              break;
            iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
            if ( !iconLabelInfo2 )
              break;
            IconLabelInfo__SetTime((IconLabelInfo_o *)iconLabelInfo2, 49, v57->fields.createdAt, 0, 0, 0, 0);
            goto LABEL_227;
          case 2:
            iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
            this->fields.sortValue1 = this->fields.rarity;
            if ( !iconLabelInfo2 )
              break;
            v58 = this->fields.iconLabelInfo1;
            v59 = *(_DWORD *)(iconLabelInfo2 + 256);
            iconLabelInfo2 = UserServantEntity__getLevelMax((UserServantEntity_o *)iconLabelInfo2, 0);
            v60 = this->fields.userSvtEntity;
            if ( !v60 || !v58 )
              break;
            IconLabelInfo__Set_40696284(v58, 2, v59, iconLabelInfo2, 0, 0, 0, v60->fields.lv, 0, 0);
            v61 = this->fields.type;
            if ( v61 != 10 && v61 != 7 )
              goto LABEL_267;
            v62 = this->fields.userSvtEntity;
            if ( !v62 )
              break;
            iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo2;
            if ( !iconLabelInfo2 )
              break;
            IconLabelInfo__Set_40696284(
              (IconLabelInfo_o *)iconLabelInfo2,
              36,
              this->fields.rarity,
              v62->fields.exceedCount,
              0,
              0,
              0,
              v62->fields.lv,
              this->fields.actualRarity,
              0);
            goto LABEL_267;
          case 3:
            iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
            if ( !iconLabelInfo2 )
              break;
            v63 = *(int *)(iconLabelInfo2 + 256);
            v64 = this->fields.iconLabelInfo1;
            this->fields.sortValue1 = v63;
            iconLabelInfo2 = UserServantEntity__getLevelMax((UserServantEntity_o *)iconLabelInfo2, 0);
            if ( !v64 )
              break;
            v65 = iconLabelInfo2;
            v66 = v64;
            v67 = v63;
            goto LABEL_237;
          case 4:
            iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
            if ( !iconLabelInfo2 )
              break;
            v68 = this->fields.type & 0xFFFFFFFE;
            this->fields.sortValue1 = *(int *)(iconLabelInfo2 + 292);
            if ( v68 == 4 )
            {
              v69 = this->fields.iconLabelInfo1;
            }
            else
            {
              UserServantEntity__getTreasureDeviceInfo_42942260(
                (UserServantEntity_o *)iconLabelInfo2,
                &tdMaxLv[1],
                tdMaxLv,
                0);
              LODWORD(friendship) = tdMaxLv[1];
              iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
              this->fields.sortValue1 = tdMaxLv[1];
              if ( !iconLabelInfo2 )
                break;
              friendshipMax = tdMaxLv[0];
              v79 = 33;
LABEL_254:
              IconLabelInfo__Set_40696284(
                (IconLabelInfo_o *)iconLabelInfo2,
                v79,
                friendship,
                friendshipMax,
                0,
                0,
                0,
                0,
                0,
                0);
LABEL_255:
              iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
              if ( !iconLabelInfo2 )
                break;
              v69 = this->fields.iconLabelInfo2;
            }
            v84 = *(_DWORD *)(iconLabelInfo2 + 256);
            iconLabelInfo2 = UserServantEntity__getLevelMax((UserServantEntity_o *)iconLabelInfo2, 0);
            if ( v69 )
            {
              IconLabelInfo__Set_40696284(v69, 2, v84, iconLabelInfo2, 0, 0, 0, 0, 0, 0);
              iconLabelInfo2 = (int64_t)this->fields.servantEntity;
              if ( iconLabelInfo2 )
              {
                if ( !ServantEntity__get_IsExpUp((ServantEntity_o *)iconLabelInfo2, 0) )
                {
                  iconLabelInfo2 = (int64_t)this->fields.servantEntity;
                  if ( !iconLabelInfo2 )
                    break;
                  if ( !ServantEntity__get_IsStatusUp((ServantEntity_o *)iconLabelInfo2, 0) )
                  {
                    iconLabelInfo2 = (int64_t)this->fields.servantEntity;
                    if ( !iconLabelInfo2 )
                      break;
                    if ( !ServantEntity__get_IsServantMaterialTd((ServantEntity_o *)iconLabelInfo2, 0) )
                    {
LABEL_267:
                      LOBYTE(iconLabelInfo2) = 1;
                      return iconLabelInfo2;
                    }
                  }
                }
                iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
                if ( iconLabelInfo2 )
                {
                  IconLabelInfo__Clear((IconLabelInfo_o *)iconLabelInfo2, 0);
                  iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo2;
                  if ( iconLabelInfo2 )
                  {
                    IconLabelInfo__Clear((IconLabelInfo_o *)iconLabelInfo2, 0);
                    goto LABEL_267;
                  }
                }
              }
            }
            break;
          case 5:
            hp = this->fields.hp;
            iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
            this->fields.sortValue1 = hp;
            if ( !iconLabelInfo2 )
              break;
            v71 = this->fields.iconLabelInfo1;
            iconLabelInfo2 = UserServantEntity__get_HpBoostValue((UserServantEntity_o *)iconLabelInfo2, 0);
            if ( !v71 )
              break;
            IconLabelInfo__Set_40696284(v71, 3, hp, iconLabelInfo2, 0, 0, 0, 0, 0, 0);
            goto LABEL_227;
          case 6:
            atk = this->fields.atk;
            iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
            this->fields.sortValue1 = atk;
            if ( !iconLabelInfo2 )
              break;
            v73 = this->fields.iconLabelInfo1;
            iconLabelInfo2 = UserServantEntity__get_AtkBoostValue((UserServantEntity_o *)iconLabelInfo2, 0);
            if ( !v73 )
              break;
            IconLabelInfo__Set_40696284(v73, 5, atk, iconLabelInfo2, 0, 0, 0, 0, 0, 0);
LABEL_227:
            iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
            if ( !iconLabelInfo2 )
              break;
            iconLabelInfo1 = this->fields.iconLabelInfo2;
LABEL_234:
            lv = *(_DWORD *)(iconLabelInfo2 + 256);
            goto LABEL_235;
          case 7:
            cost = this->fields.cost;
            iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
            this->fields.sortValue1 = cost;
            if ( !iconLabelInfo2 )
              break;
            IconLabelInfo__Set_40696284((IconLabelInfo_o *)iconLabelInfo2, 7, cost, 0, 0, 0, 0, 0, 0, 0);
            goto LABEL_255;
          case 8:
            iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
            v54 = -this->fields.priority;
            goto LABEL_232;
          case 0xA:
            friendship = this->fields.friendship;
            iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
            this->fields.sortValue1 = friendship;
            if ( !iconLabelInfo2 )
              break;
            friendshipMax = this->fields.friendshipMax;
            v79 = 32;
            goto LABEL_254;
          case 0xE:
            iconLabelInfo2 = this->fields.amountSortValue;
            if ( (iconLabelInfo2 & 0x8000000000000000LL) == 0 )
              goto LABEL_245;
            iconLabelInfo2 = (int64_t)sort->fields.manager;
            if ( !iconLabelInfo2 )
              break;
            naturalAligment = CombineServantListViewManager_TypeInfo->_2.naturalAligment;
            if ( *(unsigned __int8 *)(*(_QWORD *)iconLabelInfo2 + 304LL) < (unsigned int)naturalAligment
              || *(CombineServantListViewManager_c **)(*(_QWORD *)(*(_QWORD *)iconLabelInfo2 + 200LL)
                                                     + 8 * naturalAligment
                                                     - 8) != CombineServantListViewManager_TypeInfo )
            {
              break;
            }
            iconLabelInfo2 = CombineServantListViewManager__GetAmountSortValue(
                               (CombineServantListViewManager_o *)iconLabelInfo2,
                               this->fields.svtId,
                               v44);
            this->fields.amountSortValue = iconLabelInfo2;
LABEL_245:
            servantEntity = this->fields.servantEntity;
            if ( !servantEntity )
              break;
            collectionNo = servantEntity->fields.collectionNo;
            v83 = this->fields.userSvtEntity;
            this->fields.sortValue1 = (((unsigned __int64)(unsigned int)this->fields.rarity << 32)
                                     + (iconLabelInfo2 << 48))
                                    | collectionNo;
            if ( !v83 )
              break;
            iconLabelInfo1 = this->fields.iconLabelInfo1;
            lv = v83->fields.lv;
            iconLabelInfo2 = (int64_t)v83;
LABEL_235:
            iconLabelInfo2 = UserServantEntity__getLevelMax((UserServantEntity_o *)iconLabelInfo2, 0);
            if ( !iconLabelInfo1 )
              break;
            v65 = iconLabelInfo2;
            v66 = iconLabelInfo1;
            v67 = lv;
LABEL_237:
            IconLabelInfo__Set_40696284(v66, 2, v67, v65, 0, 0, 0, 0, 0, 0);
            goto LABEL_267;
          case 0xF:
            friendship = this->fields.hpReinforceValue;
            iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
            this->fields.isDispHpStatusUpInfo = 1;
            this->fields.sortValue1 = friendship;
            if ( !iconLabelInfo2 )
              break;
            friendshipMax = this->fields.nowMaxHpReinforceValue;
            v79 = 44;
            goto LABEL_254;
          case 0x10:
            friendship = this->fields.atkReinforceValue;
            iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
            this->fields.isDispAtkStatusUpInfo = 1;
            this->fields.sortValue1 = friendship;
            if ( !iconLabelInfo2 )
              break;
            friendshipMax = this->fields.nowMaxAtkReinforceValue;
            v79 = 45;
            goto LABEL_254;
          default:
            return iconLabelInfo2;
        }
LABEL_310:
        sub_1C2D6EC(iconLabelInfo2, v7);
      }
      switch ( this->fields.type )
      {
        case 0:
          if ( this->fields.isHeroineSvt )
          {
            if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
            if ( TutorialFlag__Get_40206092(126, 0) )
              goto LABEL_166;
          }
          if ( this->fields.isParty )
          {
            v46 = 20;
            goto LABEL_195;
          }
          if ( this->fields.isLvMax )
            goto LABEL_191;
          goto LABEL_196;
        case 1:
          iconLabelInfo2 = (int64_t)this->fields.servantEntity;
          if ( !iconLabelInfo2 )
            goto LABEL_310;
          if ( ServantEntity__get_IsExpUp((ServantEntity_o *)iconLabelInfo2, 0) )
          {
            if ( this->fields.isBaseLvMax )
            {
              v50 = -120;
            }
            else
            {
              v50 = -5;
              if ( !isLock && !v43 )
                v50 = 30;
            }
            goto LABEL_298;
          }
          iconLabelInfo2 = (int64_t)this->fields.servantEntity;
          if ( !iconLabelInfo2 )
            goto LABEL_310;
          if ( ServantEntity__get_IsStatusUp((ServantEntity_o *)iconLabelInfo2, 0) )
          {
            if ( this->fields.isSameClass )
            {
              rarity = this->fields.rarity;
              if ( this->fields.hpBase < 1 )
              {
                if ( rarity >= 4 )
                {
                  v50 = -90;
                  if ( !this->fields.isAtkSecondUpMax && this->fields.isAtkUpMax )
                    v50 = 90;
                  goto LABEL_296;
                }
                v52 = 70;
                v53 = !this->fields.isAtkUpMax;
                v50 = -110;
              }
              else
              {
                if ( rarity >= 4 )
                {
                  v50 = -80;
                  if ( !this->fields.isHpSecondUpMax && this->fields.isHpUpMax )
                    v50 = 100;
                  goto LABEL_296;
                }
                v52 = 80;
                v53 = !this->fields.isHpUpMax;
                v50 = -100;
              }
              if ( v53 )
                v50 = v52;
LABEL_296:
              *p_sortValue0 = v50;
              if ( isLock || v43 )
                v50 = -5;
              goto LABEL_298;
            }
            v50 = -150;
          }
          else
          {
            if ( !CombineServantListViewItem__get_IsCanNotSelectMaterial(this, v7) )
            {
LABEL_299:
              if ( this->fields.isFortification )
                *p_sortValue0 = -10;
              if ( v43 && sort->fields.isChoiceSort )
                *(_OWORD *)p_sortValue0 = xmmword_C09060;
              goto LABEL_198;
            }
            if ( this->fields.isLimitCntTarget )
            {
              v50 = -20;
            }
            else if ( this->fields.isParty )
            {
              v50 = -30;
            }
            else if ( this->fields.isGrandSvt )
            {
              v50 = -40;
            }
            else if ( this->fields.isUseSupport )
            {
              v50 = -50;
            }
            else
            {
              v50 = -10;
              if ( this->fields.isUseRecommendSupport )
                v50 = -60;
            }
          }
LABEL_298:
          *p_sortValue0 = v50;
          goto LABEL_299;
        case 2:
          if ( this->fields.isSealCombineLimit || this->fields.isSealedLimitCount && this->fields.isLimitCntMax )
          {
            v46 = 0;
            goto LABEL_195;
          }
          if ( !CombineServantListViewItem__get_IsCanNotBaseSelect(this, v7)
            && this->fields.isLimitUpItemNum
            && this->fields.isLvMax )
          {
LABEL_194:
            v46 = 10;
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
            if ( TutorialFlag__Get_40206092(126, 0) )
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
          if ( v43 && sort->fields.isChoiceSort || this->fields.isFortification )
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
          iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
          if ( !iconLabelInfo2 )
            goto LABEL_310;
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
          if ( !TutorialFlag__Get_40206092(126, 0) )
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
          iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
          if ( !iconLabelInfo2 )
            goto LABEL_310;
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
            v46 = -15;
            goto LABEL_195;
          }
          if ( this->fields.isLimitCntMax )
            goto LABEL_166;
          if ( !this->fields.isEventJoin )
            goto LABEL_196;
          goto LABEL_269;
        case 0xA:
          if ( this->fields.isHeroineSvt )
          {
            if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
            if ( TutorialFlag__Get_40206092(126, 0) )
              goto LABEL_269;
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
            if ( TutorialFlag__Get_40206092(126, 0) )
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
            goto LABEL_314;
          if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
          if ( TutorialFlag__Get_40206092(126, 0) )
          {
            v46 = -40;
          }
          else
          {
LABEL_314:
            if ( this->fields.isEventJoin )
            {
              v46 = -35;
            }
            else if ( this->fields.isAppendSkillLvMax )
            {
LABEL_269:
              v46 = -30;
            }
            else if ( this->fields.isAllAppendSkillLock )
            {
LABEL_166:
              v46 = -20;
            }
            else
            {
              if ( !this->fields.isAppendSkillLvSame )
              {
LABEL_196:
                if ( v43 && sort->fields.isChoiceSort )
                  this->fields.sortValue0B = 10;
                goto LABEL_198;
              }
LABEL_191:
              v46 = -10;
            }
          }
LABEL_195:
          *p_sortValue0 = v46;
          goto LABEL_196;
        default:
          goto LABEL_198;
      }
    }
    if ( CombineServantListViewItem__IsMatchServantFilter(this, sort, v40) )
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
        iconLabelInfo2 = (int64_t)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_EventGroupMaster___);
        if ( !iconLabelInfo2 )
          goto LABEL_310;
        EntitiesByGroupId = EventGroupMaster__GetEntitiesByGroupId(
                              (EventGroupMaster_o *)iconLabelInfo2,
                              this->fields.bonusKindId,
                              0);
        iconLabelInfo2 = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)EntitiesByGroupId, 0);
        if ( (iconLabelInfo2 & 1) == 0 )
        {
          if ( !EntitiesByGroupId )
            goto LABEL_310;
          if ( EntitiesByGroupId->fields._size >= 2 )
          {
            manager = sort->fields.manager;
            if ( manager )
            {
              v27 = CombineServantListViewManager_TypeInfo;
              v28 = CombineServantListViewManager_TypeInfo->_2.naturalAligment;
              if ( manager->klass->_2.naturalAligment >= (unsigned int)v28 )
              {
                if ( (CombineServantListViewManager_c *)manager->klass->_2.typeHierarchy[v28 - 1] == CombineServantListViewManager_TypeInfo )
                  v29 = sort->fields.manager;
                else
                  v29 = 0;
              }
              else
              {
                v29 = 0;
              }
              *(_QWORD *)(v5 + 24) = v29;
              v38 = (CGThumbnailListItem_o *)(v5 + 24);
              if ( manager->klass->_2.naturalAligment >= (unsigned int)v28 )
              {
                if ( (CombineServantListViewManager_c *)manager->klass->_2.typeHierarchy[v28 - 1] == v27 )
                  v37 = (int)manager;
                else
                  v37 = 0;
              }
              else
              {
                v37 = 0;
              }
            }
            else
            {
              v37 = 0;
              *(_QWORD *)(v5 + 24) = 0;
              v38 = (CGThumbnailListItem_o *)(v5 + 24);
            }
            sub_1C2D434(v38, v37, v24, v25);
            v39 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_EventGroupEntity__bool__TypeInfo);
            System_Func_object__bool____ctor(
              v39,
              (Il2CppObject *)v5,
              Method_CombineServantListViewItem___c__DisplayClass124_0__SetSortValue_b__0__,
              0);
            this->fields.isEventUpVal = BasicHelper__Any_object_(
                                          (System_Collections_Generic_List_T__o *)EntitiesByGroupId,
                                          (System_Func_T__bool__o *)v39,
                                          (const MethodInfo_30B7CF0 *)Method_BasicHelper_Any_EventGroupEntity___);
          }
        }
        goto LABEL_75;
      case 2:
        v13 = sort->fields.manager;
        if ( v13
          && (v14 = CombineServantListViewManager_TypeInfo->_2.naturalAligment,
              v13->klass->_2.naturalAligment >= (unsigned int)v14) )
        {
          if ( (CombineServantListViewManager_c *)v13->klass->_2.typeHierarchy[v14 - 1] == CombineServantListViewManager_TypeInfo )
            v15 = (UnityEngine_Object_o *)sort->fields.manager;
          else
            v15 = 0;
        }
        else
        {
          v15 = 0;
        }
        if ( this->fields.bonusKind == 2 )
        {
          v30 = sort->fields.bonusKind2Id;
          if ( this->fields.bonusKindId == v30 )
            goto LABEL_75;
        }
        else
        {
          v30 = sort->fields.bonusKind2Id;
        }
        this->fields.bonusKindId = v30;
        this->fields.bonusKind = 2;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        iconLabelInfo2 = UnityEngine_Object__op_Implicit(v15, 0);
        if ( (iconLabelInfo2 & 1) != 0 )
        {
          if ( !v15 )
            goto LABEL_310;
          iconLabelInfo2 = CombineServantListViewManager__IsLargeSuccessCampaignClassId(
                             (CombineServantListViewManager_o *)v15,
                             this->fields.bonusKindId,
                             this->fields.svtId,
                             v31);
          v32 = this->fields.userSvtEntity;
          this->fields.isEventUpVal = iconLabelInfo2 & 1;
          if ( !v32 )
            goto LABEL_310;
          v33 = *(_OWORD *)&v32->fields.id.fields.fakeValue;
          bonusKindId = this->fields.bonusKindId;
          *(_OWORD *)&v88.fields.currentCryptoKey = *(_OWORD *)&v32->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v88.fields.fakeValue = v33;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v87 = v88;
          v35 = (CombineServantListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(
                                                     &v87,
                                                     0);
          if ( CombineServantListViewManager__IsExchangeSvtExist(v35, bonusKindId, (int64_t)v35, v36) )
            goto LABEL_76;
        }
        goto LABEL_75;
      case 3:
        if ( this->fields.bonusKind == 3 )
        {
          v16 = sort->fields.bonusKind2Id;
          if ( this->fields.bonusKindId == v16 )
            goto LABEL_75;
        }
        else
        {
          v16 = sort->fields.bonusKind2Id;
        }
        this->fields.bonusKindId = v16;
        this->fields.bonusKind = 3;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        iconLabelInfo2 = (int64_t)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_EventCampaignMaster___);
        if ( !iconLabelInfo2 )
          goto LABEL_310;
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
          v11 = sort->fields.bonusKind2Id;
          if ( this->fields.bonusKindId == v11 )
            goto LABEL_75;
        }
        else
        {
          v11 = sort->fields.bonusKind2Id;
        }
        iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
        this->fields.bonusKind = bonusKind2;
        this->fields.bonusKindId = v11;
        if ( !iconLabelInfo2 )
          goto LABEL_310;
        IsEnableServant = UserServantEntity__getEventUpVal_42935000(
                            (UserServantEntity_o *)iconLabelInfo2,
                            this->fields.setupInfo,
                            v11,
                            0,
                            0);
        goto LABEL_37;
      case 7:
        if ( this->fields.bonusKind == 7 )
        {
          v17 = sort->fields.bonusKind2Id;
          if ( this->fields.bonusKindId == v17 )
          {
LABEL_75:
            if ( !this->fields.isEventUpVal )
              break;
            goto LABEL_76;
          }
        }
        else
        {
          v17 = sort->fields.bonusKind2Id;
        }
        this->fields.bonusKindId = v17;
        this->fields.bonusKind = 7;
        iconLabelInfo2 = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !iconLabelInfo2 )
          goto LABEL_310;
        MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)iconLabelInfo2,
                              (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantFilterMaster___);
        svtId = this->fields.svtId;
        v21 = (ServantFilterMaster_o *)MasterData_object;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(svtId, 0);
        v7 = *(const MethodInfo **)&v22.fields.fakeValue;
        iconLabelInfo2 = *(_QWORD *)&v22.fields.currentCryptoKey;
        if ( !v21 )
          goto LABEL_310;
        IsEnableServant = ServantFilterMaster__IsEnableServant(v21, v22, this->fields.bonusKindId, 0);
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


System_String_o *CombineServantListViewItem__ToString(CombineServantListViewItem_o *this, const MethodInfo *method)
{
  System_String_o *NameText; // x0

  if ( (byte_4C2B45C & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_15229/*"UserSvt "*/);
    byte_4C2B45C = 1;
  }
  NameText = CombineServantListViewItem__get_NameText(this, method);
  return System_String__Concat_63457864((System_String_o *)StringLiteral_15229/*"UserSvt "*/, NameText, 0);
}


int32_t CombineServantListViewItem__get_AdjustAttack(CombineServantListViewItem_o *this, const MethodInfo *method)
{
  struct UserServantEntity_o *userSvtEntity; // x8

  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
    return userSvtEntity->fields.adjustAtk;
  else
    return 0;
}


int32_t CombineServantListViewItem__get_AdjustHp(CombineServantListViewItem_o *this, const MethodInfo *method)
{
  struct UserServantEntity_o *userSvtEntity; // x8

  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
    return userSvtEntity->fields.adjustHp;
  else
    return 0;
}


int32_t CombineServantListViewItem__get_Attack(CombineServantListViewItem_o *this, const MethodInfo *method)
{
  struct UserServantEntity_o *userSvtEntity; // x8

  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
    return userSvtEntity->fields.atk;
  else
    return 0;
}


float CombineServantListViewItem__get_CombineExpCampaignValue(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.combineExpCampaignValue;
}


System_String_o *CombineServantListViewItem__get_CostText(CombineServantListViewItem_o *this, const MethodInfo *method)
{
  struct ServantEntity_o *servantEntity; // x8
  int32_t cost; // w19

  if ( (byte_4C2B458 & 1) == 0 )
  {
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&StringLiteral_19056/*"error"*/);
    byte_4C2B458 = 1;
  }
  servantEntity = this->fields.servantEntity;
  if ( !servantEntity )
    return (System_String_o *)StringLiteral_19056/*"error"*/;
  cost = servantEntity->fields.cost;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__GetCostInfo(cost, 0);
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


int32_t CombineServantListViewItem__get_GetAtkAdjustMax(CombineServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.adjustAtkMax;
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


int32_t CombineServantListViewItem__get_GetHpAdjustMax(CombineServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.adjustHpMax;
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


int32_t CombineServantListViewItem__get_Hp(CombineServantListViewItem_o *this, const MethodInfo *method)
{
  struct UserServantEntity_o *userSvtEntity; // x8

  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
    return userSvtEntity->fields.hp;
  else
    return 0;
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


System_String_o *CombineServantListViewItem__get_ImageName(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C2B459 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C2B459 = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


bool CombineServantListViewItem__get_IsAtkAdjustMax(CombineServantListViewItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0

  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_1C2D6EC(0, method);
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

  if ( (byte_4C2B45A & 1) == 0 )
  {
    sub_1C2D490(&TutorialFlag_TypeInfo);
    byte_4C2B45A = 1;
  }
  if ( !this->fields.isHeroineSvt )
    goto LABEL_47;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_40206092(126, 0) )
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
          sub_1C2D6EC(UserSvtEntity, v6);
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


bool CombineServantListViewItem__get_IsCanNotLimitUp(CombineServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isLimitCntMax;
}


bool CombineServantListViewItem__get_IsCanNotLock(CombineServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isCanNotLock;
}


bool CombineServantListViewItem__get_IsCanNotSelect(CombineServantListViewItem_o *this, const MethodInfo *method)
{
  unsigned int type; // w20
  bool CanNotSelectMaterial; // w0

  if ( (byte_4C2B45B & 1) == 0 )
  {
    sub_1C2D490(&TutorialFlag_TypeInfo);
    byte_4C2B45B = 1;
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
    if ( TutorialFlag__Get_40206092(126, 0) )
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
  _BOOL4 v7; // w8
  UserServantEntity_o *userSvtEntity; // x0
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
      v7 = 1;
LABEL_36:
      CanNotSelectSecondStatusMaterial = v10;
      return v7
          || CanNotSelectSecondStatusMaterial
          || v5
          || this->fields.isNotSelectStatusUpHp
          || this->fields.isNotSelectStatusUpAtk
          || this->fields.isNotSelectSecondStatusUpHp
          || this->fields.isNotSelectSecondStatusUpAtk;
    }
    if ( this->fields.type != 5 )
    {
      userSvtEntity = this->fields.userSvtEntity;
      if ( userSvtEntity )
      {
        if ( UserServantEntity__IsProtectedEventServant(userSvtEntity, 0) )
          goto LABEL_28;
        isStatusUpSvt = this->fields.isStatusUpSvt;
      }
    }
    v7 = isStatusUpSvt && !this->fields.isCanStUp;
    goto LABEL_36;
  }
  v7 = 1;
  return v7
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
    sub_1C2D6EC(v6, v5);
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


bool CombineServantListViewItem__get_IsEquip(CombineServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isEquiped;
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
    sub_1C2D6EC(0, method);
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
    sub_1C2D6EC(0, method);
  return ServantEntity__get_IsOrganization(servantEntity, 0);
}


bool CombineServantListViewItem__get_IsParty(CombineServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isParty;
}


bool CombineServantListViewItem__get_IsProtected(CombineServantListViewItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0

  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
    LOBYTE(userSvtEntity) = UserServantEntity__IsProtectedEventServant(userSvtEntity, 0);
  return (char)userSvtEntity;
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
    sub_1C2D6EC(0, method);
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
    sub_1C2D6EC(0, method);
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


System_String_o *CombineServantListViewItem__get_LevelText(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  struct UserServantEntity_o *userSvtEntity; // x8
  int32_t lv; // w19

  if ( (byte_4C2B456 & 1) == 0 )
  {
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&StringLiteral_19056/*"error"*/);
    byte_4C2B456 = 1;
  }
  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    return (System_String_o *)StringLiteral_19056/*"error"*/;
  lv = userSvtEntity->fields.lv;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__GetLevelInfo(lv, 0);
}


int32_t CombineServantListViewItem__get_ListType(CombineServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.type;
}


System_String_o *CombineServantListViewItem__get_NameText(CombineServantListViewItem_o *this, const MethodInfo *method)
{
  CombineServantListViewItem_o *v2; // x20
  ServantEntity_o *servantEntity; // x19
  struct UserServantEntity_o *userSvtEntity; // x8
  __int64 v5; // x20
  __int64 v6; // x21
  int32_t v7; // w1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  v2 = this;
  if ( (byte_4C2B455 & 1) == 0 )
  {
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (CombineServantListViewItem_o *)sub_1C2D490(&StringLiteral_19056/*"error"*/);
    byte_4C2B455 = 1;
  }
  servantEntity = v2->fields.servantEntity;
  if ( !servantEntity )
    return (System_String_o *)StringLiteral_19056/*"error"*/;
  userSvtEntity = v2->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_1C2D6EC(this, method);
  v6 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.currentCryptoKey;
  v5 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v9.fields.currentCryptoKey = v6;
  *(_QWORD *)&v9.fields.fakeValue = v5;
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v9, 0);
  return ServantEntity__getName(servantEntity, v7, -1, 0, 0);
}


CombineServantListViewNoticeTween_o *CombineServantListViewItem__get_NoticeTween(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._NoticeTween_k__BackingField;
}


System_String_o *CombineServantListViewItem__get_RarityText(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  int32_t rarity; // w19

  if ( (byte_4C2B457 & 1) == 0 )
  {
    sub_1C2D490(&LocalizationManager_TypeInfo);
    byte_4C2B457 = 1;
  }
  rarity = this->fields.rarity;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__GetRarityInfo(rarity, 0);
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
  Il2CppObject *Entity; // x0

  if ( (byte_4C2B45D & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_SvtCoinMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__GetEntity__);
    byte_4C2B45D = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_SvtCoinMaster___);
  if ( !Master_object )
    sub_1C2D6EC(0, v4);
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             this->fields.svtId,
             (const MethodInfo_3387D98 *)Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__GetEntity__);
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

  if ( (byte_4C2B45E & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_UserSvtCoinMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C2B45E = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserSvtCoinMaster___);
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
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v13, 0);
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
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v16, 0);
  if ( !v7 )
    goto LABEL_17;
  Master_object = UserSvtCoinMaster__TryGetEntity(v7, &entity, v9, Master_object, 0);
  if ( (Master_object & 1) != 0 )
  {
    if ( entity )
      return entity->fields.num;
LABEL_17:
    sub_1C2D6EC(Master_object, v4);
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
  CGThumbnailListItem_o *p_userSvtEntity; // x19
  struct UserServantEntity_o *userSvtEntity; // t1
  __int128 v6; // q1
  int64_t v7; // x20
  Il2CppObject *Entity; // x20
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v12; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v13; // [xsp+20h] [xbp-40h]

  v2 = this;
  if ( (byte_4C2B453 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C2D490(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    this = (CombineServantListViewItem_o *)sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C2B453 = 1;
  }
  userSvtEntity = v2->fields.userSvtEntity;
  p_userSvtEntity = (CGThumbnailListItem_o *)&v2->fields.userSvtEntity;
  v3 = userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_9;
  v6 = *(_OWORD *)&v3->fields.id.fields.fakeValue;
  *(_OWORD *)&v13.fields.currentCryptoKey = *(_OWORD *)&v3->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v13.fields.fakeValue = v6;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v12 = v13;
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v12, 0);
  this = (CombineServantListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (this = (CombineServantListViewItem_o *)DataManager__GetMasterData_object_(
                                                 (DataManager_o *)this,
                                                 (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0 )
  {
LABEL_9:
    sub_1C2D6EC(this, method);
  }
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             v7,
             (const MethodInfo_338A2F4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  p_userSvtEntity->klass = (CGThumbnailListItem_c *)Entity;
  sub_1C2D434(p_userSvtEntity, (int32_t)Entity, v9, v10);
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
  if ( (byte_4C2B454 & 1) == 0 )
  {
    this = (CombineServantListViewItem_o *)sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C2B454 = 1;
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


void CombineServantListViewItem__setUserServantEntity(
        CombineServantListViewItem_o *this,
        UserServantEntity_o *entity,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.userSvtEntity = entity;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.userSvtEntity, (int32_t)entity, (int32_t)method, v3);
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
    sub_1C2D6EC(0, value);
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
    sub_1C2D6EC(0, value);
  this->fields.dragSelectNum = value - 1;
}


void CombineServantListViewItem__set_IsHpStatusMax(
        CombineServantListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  if ( !this )
    sub_1C2D6EC(0, value);
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
    sub_1C2D6EC(0, value);
  this->fields.isNotSelectSecondStatusUpAtk = this->fields.atkBase > 0 && value;
}


void CombineServantListViewItem__set_IsSecondHpStatusMax(
        CombineServantListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  if ( !this )
    sub_1C2D6EC(0, value);
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
  const MethodInfo *v3; // x3

  this->fields._NoticeTween_k__BackingField = value;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields._NoticeTween_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void CombineServantListViewItem___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C2B462 & 1) == 0 )
  {
    sub_1C2D490(&CombineServantListViewItem___c_TypeInfo);
    byte_4C2B462 = 1;
  }
  v1 = (Il2CppObject *)sub_1C2D6DC(CombineServantListViewItem___c_TypeInfo);
  System_Object___ctor(v1, 0);
  CombineServantListViewItem___c_TypeInfo->static_fields->__9 = (struct CombineServantListViewItem___c_o *)v1;
  sub_1C2D434((CGThumbnailListItem_o *)CombineServantListViewItem___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void CombineServantListViewItem___c___ctor(CombineServantListViewItem___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool CombineServantListViewItem___c___SetIsCombineExpCampaignTarget_b__125_0(
        CombineServantListViewItem___c_o *this,
        EventCampaignEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C2D6EC(this, 0);
  return x->fields.target == 2 || x->fields.target == 27;
}


void CombineServantListViewItem___c__DisplayClass124_0___ctor(
        CombineServantListViewItem___c__DisplayClass124_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool CombineServantListViewItem___c__DisplayClass124_0___SetSortValue_b__0(
        CombineServantListViewItem___c__DisplayClass124_0_o *this,
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

  if ( (byte_4C2B463 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_ServantFilterMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C2B463 = 1;
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
    IsLargeSuccessCampaignClassId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v24, 0);
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
      IsLargeSuccessCampaignClassId = (int64_t)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_EventCampaignMaster___);
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
        IsLargeSuccessCampaignClassId = (int64_t)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantFilterMaster___);
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
                return UserServantEntity__getEventUpVal_42935000(
                         (UserServantEntity_o *)IsLargeSuccessCampaignClassId,
                         v23->fields.setupInfo,
                         entity->fields.eventId,
                         0,
                         0);
            }
          }
        }
LABEL_34:
        sub_1C2D6EC(IsLargeSuccessCampaignClassId, v7);
      }
    }
  }
  return 1;
}