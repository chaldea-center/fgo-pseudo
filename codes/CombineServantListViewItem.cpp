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
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v33; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v34; // x24
  __int64 v35; // x20
  __int64 v36; // x25
  Il2CppObject *v37; // x0
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  __int128 v40; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c **v41; // x22
  UserServantCollectionMaster_o *v42; // x24
  int64_t v43; // x27
  UserServantCollectionEntity_o *EntityDefinitely; // x26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v45; // x8
  UserServantEntity_o *v46; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v47; // q0
  int64_t v48; // x0
  __int128 v49; // q1
  bool v50; // w8
  __int64 v51; // x20
  __int64 v52; // x24
  struct ServantEntity_o *servantEntity; // x8
  BalanceConfig_c *v54; // x0
  int32_t adjustHp; // w20
  struct BalanceConfig_StaticFields *static_fields; // x8
  const MethodInfo *v57; // x2
  const MethodInfo *v58; // x1
  const MethodInfo *v59; // x1
  int64_t UserSvtId; // x0
  const MethodInfo *v61; // x1
  unsigned int v62; // w8
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x29
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v65; // x9
  int32_t *p_offset; // x10
  __int64 v67; // x0
  System_Collections_Generic_IEnumerator_T__c *v68; // x8
  __int64 v69; // x9
  int32_t *v70; // x10
  __int64 v71; // x0
  __int64 v72; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v73; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v74; // q0
  __int64 v75; // x24
  System_Collections_Generic_IEnumerator_T__c *v76; // x8
  __int64 v77; // x9
  int32_t *v78; // x10
  __int64 v79; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v80; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v81; // q0
  UserRecommendSupportMaster_o *v82; // x24
  Il2CppObject *v83; // x0
  __int128 v84; // q1
  UserServantGrandMaster_o *v85; // x24
  UserServantEntity_o *v86; // x8
  Il2CppObject *MasterData_object; // x24
  struct ServantEntity_o *v88; // x8
  __int64 v89; // x20
  __int64 v90; // x21
  int64_t v91; // x29
  Il2CppObject *v92; // x24
  struct ServantEntity_o *v93; // x8
  __int64 v94; // x20
  __int64 v95; // x21
  int64_t v96; // x29
  struct System_Int32_array *commandCardParam; // x20
  int max_length; // w8
  __int64 v99; // x21
  int32_t v100; // w26
  bool v101; // w29
  System_Collections_Generic_IEnumerator_T__o *v102; // x28
  System_Collections_Generic_IEnumerator_T__c *v103; // x8
  __int64 v104; // x9
  int32_t *v105; // x10
  __int64 v106; // x0
  System_Collections_Generic_IEnumerator_T__c *v107; // x8
  __int64 v108; // x9
  int32_t *v109; // x10
  __int64 v110; // x0
  __int64 v111; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v112; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v113; // q0
  __int64 v114; // x24
  System_Collections_Generic_IEnumerator_T__c *v115; // x8
  __int64 v116; // x9
  int32_t *v117; // x10
  __int64 v118; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v119; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v120; // q0
  UserRecommendSupportMaster_o *v121; // x24
  Il2CppObject *v122; // x0
  __int128 v123; // q1
  UserServantGrandMaster_o *v124; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v125; // x8
  __int64 v126; // x20
  __int64 v127; // x21
  int32_t v128; // w20
  int32_t SvtClassId; // w0
  int32_t SvtClassGroupType; // w24
  int32_t materialExp; // w20
  BalanceConfig_c *v132; // x0
  int SameClassExp; // w21
  double v134; // d0
  int32_t v135; // w8
  UserServantEntity_o *v136; // x8
  ServantLimitMaster_o *v137; // x24
  __int64 v138; // x20
  __int64 v139; // x21
  int32_t v140; // w28
  int32_t v141; // w8
  int32_t v142; // w24
  bool v143; // w8
  bool v144; // w8
  bool v145; // w8
  bool v146; // w8
  Il2CppObject *v147; // x24
  struct ServantEntity_o *v148; // x8
  __int64 v149; // x20
  __int64 v150; // x21
  int64_t v151; // x28
  int32_t v152; // w8
  Il2CppObject *v153; // x0
  __int64 v154; // x20
  __int64 v155; // x21
  ServantLimitImageMaster_o *v156; // x24
  int32_t v157; // w28
  UserServantEntity_o *v158; // x8
  const MethodInfo *v159; // x1
  _BOOL4 isHeroineSvt; // w8
  UserServantEntity_o *v161; // x9
  int32_t combineLimitId; // w24
  __int64 v163; // x20
  __int64 v164; // x21
  int32_t v165; // w28
  int64_t v166; // x24
  __int64 v167; // x20
  __int64 v168; // x21
  __int64 v169; // x8
  UserItemMaster_o *v170; // x28
  unsigned __int64 v171; // x27
  UserServantEntity_o *v172; // x8
  __int128 v173; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c *v174; // x0
  int32_t v175; // w29
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c **v176; // x26
  int32_t v177; // w22
  UserServantEntity_o *v178; // x8
  UserServantEntity_o *v179; // x8
  const MethodInfo *v180; // x1
  int32_t v181; // w8
  System_Collections_Generic_IEnumerator_T__o *v182; // x28
  System_Collections_Generic_IEnumerator_T__c *v183; // x8
  __int64 v184; // x9
  int32_t *v185; // x10
  __int64 v186; // x0
  System_Collections_Generic_IEnumerator_T__c *v187; // x8
  __int64 v188; // x9
  int32_t *v189; // x10
  __int64 v190; // x0
  __int64 v191; // x0
  UserServantEntity_o *v192; // x8
  __int128 v193; // q0
  __int128 v194; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c *v195; // x8
  __int64 v196; // x24
  System_Collections_Generic_IEnumerator_T__c *v197; // x8
  __int64 v198; // x9
  int32_t *v199; // x10
  __int64 v200; // x0
  int id; // w24
  int32_t lv; // w20
  int32_t SameSvtNpLvCache; // w0
  const MethodInfo *v204; // x4
  int32_t v205; // w24
  __int64 v206; // x20
  UserServantEntity_o *v207; // x8
  __int128 v208; // q0
  UserRecommendSupportMaster_o *v209; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c *v210; // x0
  Il2CppObject *v211; // x0
  __int128 v212; // q1
  UserServantGrandMaster_o *v213; // x24
  bool v214; // w8
  bool IsMaterialTd; // w0
  UserServantEntity_o *v216; // x8
  UserServantEntity_o *v217; // x8
  bool isLevelMax; // w0
  _BOOL4 v219; // w8
  ServantExceedEntity_o *SvtExceedEnt; // x0
  int32_t *v221; // x27
  CommonConsumeEntity_array *IdEntityList; // x0
  CommonConsumeEntity_array *v223; // x29
  System_Collections_Generic_HashSet_int__o *v224; // x24
  System_Collections_Generic_HashSet_int__o *v225; // x28
  int v226; // w8
  __int64 v227; // x20
  CommonConsumeEntity_o *v228; // x26
  UserServantEntity_o *v229; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v230; // x29
  __int64 v231; // x20
  __int64 v232; // x21
  UserServantEntity_o *v233; // x29
  System_Int32_array *v234; // x24
  __int64 v235; // x20
  __int64 v236; // x24
  struct ServantEntity_o *v237; // x8
  bool v238; // zf
  UserServantEntity_o *v239; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  int32_t v241; // w2
  const MethodInfo *v242; // x3
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  int32_t v244; // w2
  const MethodInfo *v245; // x3
  int64_t v246; // x8
  struct ServantEntity_o *v247; // x9
  UserServantEntity_o *v248; // x8
  unsigned __int64 v249; // x9
  _BOOL8 v250; // x10
  __int64 v251; // x20
  __int64 v252; // x21
  struct UserServantEntity_o *v253; // x8
  __int128 v254; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c *v255; // x0
  int64_t v256; // x8
  int32_t maxFriendshipRank; // w20
  int32_t friendshipExceedCount; // w21
  UserServantEntity_o *v259; // x24
  __int64 v260; // x20
  __int64 v261; // x21
  UserItemMaster_o *v262; // x24
  unsigned __int64 v263; // x27
  __int64 v264; // x29
  bool v265; // w8
  bool v266; // w26
  int32_t v267; // w0
  int32_t v268; // w24
  int32_t v269; // w29
  int32_t v270; // w28
  int v271; // w21
  TreasureDvcLvEntity_o *v272; // x0
  int64_t v273; // [xsp+18h] [xbp-2D8h]
  bool *p_isLimitUpItemNum; // [xsp+20h] [xbp-2D0h]
  bool *p_isStatusUpSvt; // [xsp+28h] [xbp-2C8h]
  struct IconLabelInfo_o **p_iconLabelInfo2; // [xsp+30h] [xbp-2C0h]
  UserServantCollectionEntity_o *v277; // [xsp+38h] [xbp-2B8h]
  bool v279; // [xsp+40h] [xbp-2B0h]
  struct ServantEntity_o **p_servantEntity; // [xsp+50h] [xbp-2A0h]
  UserServantEntity_o *v284; // [xsp+58h] [xbp-298h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v285; // [xsp+60h] [xbp-290h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v286; // [xsp+80h] [xbp-270h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v287; // [xsp+A0h] [xbp-250h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v288; // [xsp+C0h] [xbp-230h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v289; // [xsp+E0h] [xbp-210h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v290; // [xsp+100h] [xbp-1F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v291; // [xsp+120h] [xbp-1D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v292; // [xsp+140h] [xbp-1B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v293; // [xsp+160h] [xbp-190h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v294; // [xsp+180h] [xbp-170h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v295; // [xsp+1A0h] [xbp-150h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v296; // [xsp+1C0h] [xbp-130h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v297; // [xsp+1E0h] [xbp-110h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v298; // [xsp+200h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v299; // [xsp+220h] [xbp-D0h]
  UserItemEntity_o *v300; // [xsp+248h] [xbp-A8h] BYREF
  int32_t tdMaxLv; // [xsp+254h] [xbp-9Ch] BYREF
  int32_t tdLv[2]; // [xsp+258h] [xbp-98h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+260h] [xbp-90h] BYREF
  UserItemEntity_o *v304; // [xsp+268h] [xbp-88h] BYREF
  __int64 v305; // [xsp+270h] [xbp-80h] BYREF
  UserServantCommandCodeEntity_o *v306; // [xsp+278h] [xbp-78h] BYREF
  UserServantCommandCardEntity_o *v307; // [xsp+280h] [xbp-70h] BYREF
  UserServantCommandCodeEntity_o *entity; // [xsp+288h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v309; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v310; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v311; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v312; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v313; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v314; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v315; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v316; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v317; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v318; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v319; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v320; // 0:x0.16

  v14 = isParty;
  if ( (byte_4C3BB69 & 1) == 0 )
  {
    sub_1C32C20(&BalanceConfig_TypeInfo);
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_UserServantLeaderEntity__GetEnumerator__);
    sub_1C32C20(&Method_DataManager_GetMasterData_CombineLimitMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_CombineMaterialMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_FriendshipMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_TreasureDvcMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserServantCommandCardMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserServantLeaderMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_CommonConsumeMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_ServantLimitMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_SvtCoinMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_UserRecommendSupportMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_UserServantGrandMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C32C20(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_1C32C20(&Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__GetEntity__);
    sub_1C32C20(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
    sub_1C32C20(&Method_DataMasterBase_UserServantLeaderMaster__UserServantLeaderEntity__string__getEntityList__);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C32C20(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1C32C20(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1C32C20(&System_IDisposable_TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerator_UserServantLeaderEntity__TypeInfo);
    sub_1C32C20(&System_Collections_IEnumerator_TypeInfo);
    sub_1C32C20(&IconLabelInfo_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C32C20(&System_Math_TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C3BB69 = 1;
  }
  entity = 0;
  v307 = 0;
  v306 = 0;
  v305 = 0;
  v304 = 0;
  tdInfo = 0;
  *(_QWORD *)tdLv = 0;
  tdMaxLv = 0;
  v300 = 0;
  v15 = (IconLabelInfo_o *)sub_1C32E6C(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v15, 0);
  this->fields.iconLabelInfo1 = v15;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.iconLabelInfo1, (int32_t)v15, v16, v17);
  v18 = (IconLabelInfo_o *)sub_1C32E6C(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v18, 0);
  this->fields.iconLabelInfo2 = v18;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.iconLabelInfo2, (int32_t)v18, v19, v20);
  v21 = (System_Collections_Generic_List_int__o *)sub_1C32E6C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v21,
    (const MethodInfo_377AF44 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.enableSkillUp = v21;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.enableSkillUp, (int32_t)v21, v22, v23);
  v24 = (System_Collections_Generic_List_int__o *)sub_1C32E6C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v24,
    (const MethodInfo_377AF44 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.enableAppendSkillUp = v24;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.enableAppendSkillUp, (int32_t)v24, v25, v26);
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
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v27, v28);
  this->fields.userSvtEntity = userSvtEntity;
  p_userSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userSvtEntity;
  this->fields.isParty = v14;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.userSvtEntity, (int32_t)userSvtEntity, v30, v31);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ServantMaster___);
  v33 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_450;
  v34 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  v35 = *(_QWORD *)&v33[5].fields.currentCryptoKey;
  v36 = *(_QWORD *)&v33[5].fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v309.fields.currentCryptoKey = v35;
  *(_QWORD *)&v309.fields.fakeValue = v36;
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v309, 0);
  if ( !v34 )
    goto LABEL_450;
  v37 = DataMasterBase_object__object__int___GetEntity(
          v34,
          Master_object,
          (const MethodInfo_3396838 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)v37;
  p_servantEntity = &this->fields.servantEntity;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.servantEntity, (int32_t)v37, v38, v39);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !userSvtEntity )
    goto LABEL_450;
  v40 = *(_OWORD *)&userSvtEntity->fields.userId.fields.fakeValue;
  v41 = &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo;
  v42 = (UserServantCollectionMaster_o *)Master_object;
  *(_OWORD *)&v299.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v299.fields.fakeValue = v40;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v298 = v299;
  v43 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(&v298, 0);
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(userSvtEntity->fields.svtId, 0);
  if ( !v42 )
    goto LABEL_450;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v42, v43, Master_object, 0);
  Master_object = (int64_t)UserGameMaster__getSelfUserGame(0);
  v273 = Master_object;
  if ( baseUsrSvtData )
  {
    v45 = *p_userSvtEntity;
    v46 = userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_450;
    v47 = v45[2];
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v299.fields.currentCryptoKey = v45[1];
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v299.fields.fakeValue = v47;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v297 = v299;
    v48 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(&v297, 0);
    v49 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
    *(_OWORD *)&v296.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v296.fields.fakeValue = v49;
    v50 = v48 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(&v296, 0);
  }
  else
  {
    v46 = userSvtEntity;
    v50 = 0;
  }
  this->fields.isBaseSvt = v50;
  v51 = *(_QWORD *)&v46->fields.svtId.fields.currentCryptoKey;
  v52 = *(_QWORD *)&v46->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v310.fields.currentCryptoKey = v51;
  *(_QWORD *)&v310.fields.fakeValue = v52;
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v310, 0);
  servantEntity = this->fields.servantEntity;
  this->fields.svtId = Master_object;
  if ( !servantEntity )
    goto LABEL_450;
  this->fields.classId = servantEntity->fields.classId;
  this->fields.isHeroineSvt = UserServantEntity__IsHeroine(v46, 0);
  Master_object = UserServantEntity__IsEventJoin(v46, 0);
  this->fields.isEventJoin = Master_object & 1;
  if ( !EntityDefinitely )
    goto LABEL_450;
  UserServantCollectionEntity__getFriendShipRankInfo(
    EntityDefinitely,
    &this->fields.friendship,
    &this->fields.friendshipMax,
    0);
  this->fields.maxLimitCnt = UserServantEntity__getLimitCntMax(v46, 0);
  this->fields.currentLimitCnt = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(
                                   v46->fields.limitCount,
                                   0);
  v54 = BalanceConfig_TypeInfo;
  adjustHp = v46->fields.adjustHp;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v54 = BalanceConfig_TypeInfo;
  }
  static_fields = v54->static_fields;
  v277 = EntityDefinitely;
  this->fields.hpReinforceValue = static_fields->StatusUpAdjustHp * adjustHp;
  this->fields.atkReinforceValue = static_fields->StatusUpAdjustAtk * v46->fields.adjustAtk;
  UserServantEntity__getAdjustMaxData(
    v46,
    &this->fields.nowMaxHpReinforceValue,
    &this->fields.nowMaxAtkReinforceValue,
    0);
  CombineServantListViewItem__ModifyItem(this, isFavorite, v57);
  CombineServantListViewItem__SetOverwriteStatus(this, v58);
  UserSvtId = CombineServantListViewItem__get_UserSvtId(this, v59);
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
    Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Master_object )
      goto LABEL_450;
    Master_object = (int64_t)DataManager__GetMasterData_object_(
                               (DataManager_o *)Master_object,
                               (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserServantLeaderMaster___);
    if ( !Master_object )
      goto LABEL_450;
    Master_object = *(_QWORD *)(Master_object + 40);
    if ( !Master_object )
      goto LABEL_450;
    Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                   (System_Collections_ObjectModel_Collection_T__o *)Master_object,
                   (const MethodInfo_3330280 *)Method_System_Collections_ObjectModel_Collection_UserServantLeaderEntity__GetEnumerator__);
    if ( !Enumerator )
      sub_1C32E7C(0);
    while ( 1 )
    {
      klass = Enumerator->klass;
      v65 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
      if ( *(_WORD *)&Enumerator->klass->_2.rank )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v65;
          p_offset += 4;
          if ( !v65 )
            goto LABEL_46;
        }
        v67 = (__int64)&klass->vtable[*p_offset];
      }
      else
      {
LABEL_46:
        v67 = sub_1C83438(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v67)(
              Enumerator,
              *(_QWORD *)(v67 + 8))
          & 1) == 0 )
        break;
      v68 = Enumerator->klass;
      v69 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
      if ( *(_WORD *)&Enumerator->klass->_2.rank )
      {
        v70 = &v68->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerator_UserServantLeaderEntity__c **)v70 - 1) != System_Collections_Generic_IEnumerator_UserServantLeaderEntity__TypeInfo )
        {
          --v69;
          v70 += 4;
          if ( !v69 )
            goto LABEL_53;
        }
        v71 = (__int64)&v68->vtable[*v70];
      }
      else
      {
LABEL_53:
        v71 = sub_1C83438(Enumerator, System_Collections_Generic_IEnumerator_UserServantLeaderEntity__TypeInfo, 0);
      }
      v72 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v71)(
              Enumerator,
              *(_QWORD *)(v71 + 8));
      if ( !v72 )
        sub_1C32E7C(0);
      v73 = *p_userSvtEntity;
      if ( !*p_userSvtEntity )
        sub_1C32E7C(v72);
      v74 = v73[2];
      v75 = *(_QWORD *)(v72 + 56);
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v299.fields.currentCryptoKey = v73[1];
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v299.fields.fakeValue = v74;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v295 = v299;
      if ( v75 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(&v295, 0) )
      {
        this->fields.isUseSupport = 1;
        break;
      }
    }
    v76 = Enumerator->klass;
    v77 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v78 = &v76->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v78 - 1) != System_IDisposable_TypeInfo )
      {
        --v77;
        v78 += 4;
        if ( !v77 )
          goto LABEL_65;
      }
      v79 = (__int64)&v76->vtable[*v78];
    }
    else
    {
LABEL_65:
      v79 = sub_1C83438(Enumerator, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v79)(
      Enumerator,
      *(_QWORD *)(v79 + 8));
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_UserRecommendSupportMaster___);
    v80 = *p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_450;
    v81 = v80[2];
    v82 = (UserRecommendSupportMaster_o *)Master_object;
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v299.fields.currentCryptoKey = v80[1];
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v299.fields.fakeValue = v81;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v294 = v299;
    Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(&v294, 0);
    if ( !v82 )
      goto LABEL_450;
    this->fields.isUseRecommendSupport = UserRecommendSupportMaster__IsSettingServant(v82, Master_object, 0, 0);
    v83 = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_UserServantGrandMaster___);
    v84 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
    v85 = (UserServantGrandMaster_o *)v83;
    *(_OWORD *)&v293.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v293.fields.fakeValue = v84;
    Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(&v293, 0);
    if ( !v85 )
      goto LABEL_450;
    Master_object = UserServantGrandMaster__IsSettingServant(v85, Master_object, 0);
    v86 = this->fields.userSvtEntity;
    this->fields.isGrandSvt = Master_object & 1;
    if ( !v86 )
      goto LABEL_450;
    if ( UserServantEntity__IsCombineExp(v86, 0) )
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
    Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Master_object )
      goto LABEL_450;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Master_object,
                          (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4C31812 )
    {
      sub_1C32C20(&NetworkManager_TypeInfo);
      byte_4C31812 = 1;
    }
    Master_object = (int64_t)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Master_object = (int64_t)NetworkManager_TypeInfo;
    }
    v88 = *p_servantEntity;
    if ( !*p_servantEntity )
      goto LABEL_450;
    v90 = *(_QWORD *)&v88->fields.id.fields.currentCryptoKey;
    v89 = *(_QWORD *)&v88->fields.id.fields.fakeValue;
    v91 = *(_QWORD *)(*(_QWORD *)(Master_object + 184) + 64LL);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v311.fields.currentCryptoKey = v90;
    *(_QWORD *)&v311.fields.fakeValue = v89;
    Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v311, 0);
    if ( !MasterData_object )
      goto LABEL_450;
    if ( UserServantCommandCodeMaster__TryGetEntity(
           (UserServantCommandCodeMaster_o *)MasterData_object,
           &entity,
           v91,
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
      Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Master_object )
        goto LABEL_450;
      v92 = DataManager__GetMasterData_object_(
              (DataManager_o *)Master_object,
              (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserServantCommandCardMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C31812 )
      {
        sub_1C32C20(&NetworkManager_TypeInfo);
        byte_4C31812 = 1;
      }
      Master_object = (int64_t)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Master_object = (int64_t)NetworkManager_TypeInfo;
      }
      v93 = *p_servantEntity;
      if ( !*p_servantEntity )
        goto LABEL_450;
      v95 = *(_QWORD *)&v93->fields.id.fields.currentCryptoKey;
      v94 = *(_QWORD *)&v93->fields.id.fields.fakeValue;
      v96 = *(_QWORD *)(*(_QWORD *)(Master_object + 184) + 64LL);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v312.fields.currentCryptoKey = v95;
      *(_QWORD *)&v312.fields.fakeValue = v94;
      Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v312, 0);
      if ( !v92 )
        goto LABEL_450;
      Master_object = UserServantCommandCardMaster__TryGetEntity(
                        (UserServantCommandCardMaster_o *)v92,
                        &v307,
                        v96,
                        (int)Master_object,
                        0);
      if ( (Master_object & 1) != 0 )
      {
        if ( !v307 )
          goto LABEL_450;
        commandCardParam = v307->fields.commandCardParam;
        if ( commandCardParam )
        {
          max_length = commandCardParam->max_length;
          if ( max_length >= 1 )
          {
            v99 = 0;
            while ( 1 )
            {
              if ( (unsigned int)v99 >= max_length )
                goto LABEL_457;
              Master_object = (int64_t)BalanceConfig_TypeInfo;
              v100 = commandCardParam->m_Items[v99];
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                Master_object = (int64_t)BalanceConfig_TypeInfo;
              }
              if ( v100 < *(_DWORD *)(*(_QWORD *)(Master_object + 184) + 772LL) )
                break;
              this->fields.isCommandCardExceedMax = 1;
              max_length = commandCardParam->max_length;
              if ( (int)++v99 >= max_length )
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
  v101 = isMtSvt;
  if ( v62 == 1 )
  {
    this->fields.isMaterialSvt = v101;
    Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Master_object )
      goto LABEL_450;
    Master_object = (int64_t)DataManager__GetMasterData_object_(
                               (DataManager_o *)Master_object,
                               (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserServantLeaderMaster___);
    if ( !Master_object )
      goto LABEL_450;
    Master_object = *(_QWORD *)(Master_object + 40);
    if ( !Master_object )
      goto LABEL_450;
    v102 = System_Collections_ObjectModel_Collection_object___GetEnumerator(
             (System_Collections_ObjectModel_Collection_T__o *)Master_object,
             (const MethodInfo_3330280 *)Method_System_Collections_ObjectModel_Collection_UserServantLeaderEntity__GetEnumerator__);
    if ( !v102 )
      sub_1C32E7C(0);
    while ( 1 )
    {
      v103 = v102->klass;
      v104 = *(unsigned __int16 *)&v102->klass->_2.rank;
      if ( *(_WORD *)&v102->klass->_2.rank )
      {
        v105 = &v103->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)v105 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v104;
          v105 += 4;
          if ( !v104 )
            goto LABEL_132;
        }
        v106 = (__int64)&v103->vtable[*v105];
      }
      else
      {
LABEL_132:
        v106 = sub_1C83438(v102, System_Collections_IEnumerator_TypeInfo, 0);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v106)(
              v102,
              *(_QWORD *)(v106 + 8))
          & 1) == 0 )
        break;
      v107 = v102->klass;
      v108 = *(unsigned __int16 *)&v102->klass->_2.rank;
      if ( *(_WORD *)&v102->klass->_2.rank )
      {
        v109 = &v107->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerator_UserServantLeaderEntity__c **)v109 - 1) != System_Collections_Generic_IEnumerator_UserServantLeaderEntity__TypeInfo )
        {
          --v108;
          v109 += 4;
          if ( !v108 )
            goto LABEL_139;
        }
        v110 = (__int64)&v107->vtable[*v109];
      }
      else
      {
LABEL_139:
        v110 = sub_1C83438(v102, System_Collections_Generic_IEnumerator_UserServantLeaderEntity__TypeInfo, 0);
      }
      v111 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v110)(
               v102,
               *(_QWORD *)(v110 + 8));
      if ( !v111 )
        sub_1C32E7C(0);
      v112 = *p_userSvtEntity;
      if ( !*p_userSvtEntity )
        sub_1C32E7C(v111);
      v113 = v112[2];
      v114 = *(_QWORD *)(v111 + 56);
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v299.fields.currentCryptoKey = v112[1];
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v299.fields.fakeValue = v113;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v292 = v299;
      if ( v114 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(&v292, 0) )
      {
        this->fields.isUseSupport = 1;
        break;
      }
    }
    v115 = v102->klass;
    v116 = *(unsigned __int16 *)&v102->klass->_2.rank;
    if ( *(_WORD *)&v102->klass->_2.rank )
    {
      v117 = &v115->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v117 - 1) != System_IDisposable_TypeInfo )
      {
        --v116;
        v117 += 4;
        if ( !v116 )
          goto LABEL_151;
      }
      v118 = (__int64)&v115->vtable[*v117];
    }
    else
    {
LABEL_151:
      v118 = sub_1C83438(v102, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v118)(v102, *(_QWORD *)(v118 + 8));
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_UserRecommendSupportMaster___);
    v119 = *p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_450;
    v120 = v119[2];
    v121 = (UserRecommendSupportMaster_o *)Master_object;
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v299.fields.currentCryptoKey = v119[1];
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v299.fields.fakeValue = v120;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v291 = v299;
    Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(&v291, 0);
    if ( !v121 )
      goto LABEL_450;
    this->fields.isUseRecommendSupport = UserRecommendSupportMaster__IsSettingServant(v121, Master_object, 0, 0);
    v122 = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_UserServantGrandMaster___);
    v123 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
    v124 = (UserServantGrandMaster_o *)v122;
    *(_OWORD *)&v290.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v290.fields.fakeValue = v123;
    Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(&v290, 0);
    if ( !v124 )
      goto LABEL_450;
    this->fields.isGrandSvt = UserServantGrandMaster__IsSettingServant(v124, Master_object, 0);
    Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Master_object )
      goto LABEL_450;
    Master_object = (int64_t)DataManager__GetMasterData_object_(
                               (DataManager_o *)Master_object,
                               (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_CombineMaterialMaster___);
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
      v125 = *p_userSvtEntity;
      if ( !*p_userSvtEntity )
        goto LABEL_450;
      v127 = *(_QWORD *)&v125[5].fields.currentCryptoKey;
      v126 = *(_QWORD *)&v125[5].fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v313.fields.currentCryptoKey = v127;
      *(_QWORD *)&v313.fields.fakeValue = v126;
      v128 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v313, 0);
      if ( v128 == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(baseUsrSvtData->fields.svtId, 0) )
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
      Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Master_object )
        goto LABEL_450;
      Master_object = (int64_t)DataManager__GetMasterData_object_(
                                 (DataManager_o *)Master_object,
                                 (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantClassMaster___);
      if ( !*p_servantEntity )
        goto LABEL_450;
      if ( !Master_object )
        goto LABEL_450;
      Master_object = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                 (*p_servantEntity)->fields.classId,
                                 (const MethodInfo_3396838 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
      if ( !Master_object )
        goto LABEL_450;
      HIDWORD(v305) = *(_DWORD *)(Master_object + 56);
      SvtClassId = UserServantEntity__getSvtClassId(baseUsrSvtData, 0, 0, 0);
      SvtClassGroupType = UserServantEntity__getSvtClassGroupType(baseUsrSvtData, SvtClassId, 0);
      if ( System_Int32__Equals_65028480((int32_t)&v305 + 4, 3, 0)
        || System_Int32__Equals_65028480((int32_t)&v305 + 4, SvtClassGroupType, 0) && this->fields.isSameClass )
      {
        materialExp = this->fields.materialExp;
        v132 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v132 = BalanceConfig_TypeInfo;
        }
        SameClassExp = v132->static_fields->SameClassExp;
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        v134 = (double)materialExp * (double)SameClassExp / 1000.0;
        v135 = vcvtpd_s64_f64(v134);
        if ( ceil(v134) == INFINITY )
          v135 = 0x80000000;
        this->fields.materialExp = v135;
      }
    }
    else
    {
      this->fields.isLimitCntTarget = 0;
    }
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ServantLimitMaster___);
    v136 = (UserServantEntity_o *)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_450;
    v137 = (ServantLimitMaster_o *)Master_object;
    v139 = *(_QWORD *)&v136->fields.svtId.fields.currentCryptoKey;
    v138 = *(_QWORD *)&v136->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v314.fields.currentCryptoKey = v139;
    *(_QWORD *)&v314.fields.fakeValue = v138;
    Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v314, 0);
    if ( !*p_userSvtEntity )
      goto LABEL_450;
    v140 = Master_object;
    Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784((*p_userSvtEntity)[6], 0);
    if ( !v137 )
      goto LABEL_450;
    Master_object = (int64_t)ServantLimitMaster__GetEntity(v137, v140, Master_object, 0);
    if ( !Master_object )
      goto LABEL_450;
    this->fields.hpBase = *(_DWORD *)(Master_object + 36);
    v141 = *(_DWORD *)(Master_object + 44);
    Master_object = (int64_t)this->fields.servantEntity;
    this->fields.atkBase = v141;
    if ( !Master_object )
      goto LABEL_450;
    Master_object = ServantEntity__get_IsStatusUp((ServantEntity_o *)Master_object, 0);
    if ( (Master_object & 1) != 0 )
    {
      *p_isStatusUpSvt = 1;
      if ( !baseUsrSvtData )
        goto LABEL_450;
      v142 = UserServantEntity__getSvtClassId(baseUsrSvtData, 0, 0, 0);
      Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Master_object )
        goto LABEL_450;
      Master_object = (int64_t)DataManager__GetMasterData_object_(
                                 (DataManager_o *)Master_object,
                                 (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantClassMaster___);
      if ( !*p_servantEntity )
        goto LABEL_450;
      if ( !Master_object )
        goto LABEL_450;
      Master_object = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                 (*p_servantEntity)->fields.classId,
                                 (const MethodInfo_3396838 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
      if ( !Master_object )
        goto LABEL_450;
      LODWORD(v305) = *(_DWORD *)(Master_object + 56);
      if ( !*p_servantEntity )
        goto LABEL_450;
      if ( (*p_servantEntity)->fields.classId == v142 || System_Int32__Equals_65028480((int32_t)&v305, 3, 0) )
      {
        this->fields.isCanStUp = 1;
        v143 = UserServantEntity__isAdjustAtkMax(baseUsrSvtData, 0) && this->fields.atkBase > 0;
        this->fields.isAtkUpMax = v143;
        v144 = UserServantEntity__isAdjustHpMax(baseUsrSvtData, 0) && this->fields.hpBase > 0;
        this->fields.isHpUpMax = v144;
        v145 = UserServantEntity__isSecondAdjustAtkMax(baseUsrSvtData, 0) && this->fields.atkBase > 0;
        this->fields.isAtkSecondUpMax = v145;
        v146 = UserServantEntity__isSecondAdjustHpMax(baseUsrSvtData, 0) && this->fields.hpBase > 0;
        this->fields.isHpSecondUpMax = v146;
      }
    }
    Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Master_object )
      goto LABEL_450;
    v147 = DataManager__GetMasterData_object_(
             (DataManager_o *)Master_object,
             (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4C31812 )
    {
      sub_1C32C20(&NetworkManager_TypeInfo);
      byte_4C31812 = 1;
    }
    Master_object = (int64_t)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Master_object = (int64_t)NetworkManager_TypeInfo;
    }
    v148 = *p_servantEntity;
    if ( !*p_servantEntity )
      goto LABEL_450;
    v150 = *(_QWORD *)&v148->fields.id.fields.currentCryptoKey;
    v149 = *(_QWORD *)&v148->fields.id.fields.fakeValue;
    v151 = *(_QWORD *)(*(_QWORD *)(Master_object + 184) + 64LL);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v315.fields.currentCryptoKey = v150;
    *(_QWORD *)&v315.fields.fakeValue = v149;
    Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v315, 0);
    if ( !v147 )
LABEL_450:
      sub_1C32E7C(Master_object);
    if ( UserServantCommandCodeMaster__TryGetEntity(
           (UserServantCommandCodeMaster_o *)v147,
           &v306,
           v151,
           (int)Master_object,
           0) )
    {
      Master_object = (int64_t)v306;
      if ( !v306 )
        goto LABEL_450;
      this->fields.isEquipedCmdCard = UserServantCommandCodeEntity__IsEquipedCommandCode(v306, 0);
      Master_object = (int64_t)v306;
      if ( !v306 )
        goto LABEL_450;
      this->fields.isCmdCardSlotOpen = UserServantCommandCodeEntity__IsCommandCardSlotOpen(v306, 0);
    }
  }
  v152 = this->fields.type;
  if ( v152 == 9 )
  {
    Master_object = UserServantEntity__isLimitCountMax(userSvtEntity, 0);
    v178 = this->fields.userSvtEntity;
    this->fields.isLimitCntMax = Master_object & 1;
    if ( v178 )
    {
      Master_object = UserServantEntity__isLevelMax(v178, 0);
      v179 = this->fields.userSvtEntity;
      this->fields.isLvMax = Master_object & 1;
      if ( v179 )
      {
        this->fields.isIgnoreCombineLimitSpecial = UserServantEntity__IsIgnoreCombineLimitSpecial(v179, 0);
        this->fields.isSealCombineLimit = CombineServantListViewItem__GetSealCombineLimit(this, v180);
        goto LABEL_279;
      }
    }
    goto LABEL_450;
  }
  if ( v152 != 2 )
    goto LABEL_280;
  v279 = isMtSvt;
  this->fields.isLimitCntMax = UserServantEntity__isLimitCountMax(userSvtEntity, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v153 = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  v155 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v154 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  v156 = (ServantLimitImageMaster_o *)v153;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v316.fields.currentCryptoKey = v155;
  *(_QWORD *)&v316.fields.fakeValue = v154;
  v157 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v316, 0);
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(
                    userSvtEntity->fields.limitCount,
                    0);
  if ( !v156 )
    goto LABEL_450;
  Master_object = ServantLimitImageMaster__IsServantLimitCountSeal(v156, v157, Master_object, 0);
  v158 = this->fields.userSvtEntity;
  this->fields.isSealedLimitCount = Master_object & 1;
  if ( !v158 )
    goto LABEL_450;
  this->fields.isLvMax = UserServantEntity__isLevelMax(v158, 0);
  Master_object = CombineServantListViewItem__GetSealCombineLimit(this, v159);
  isHeroineSvt = this->fields.isHeroineSvt;
  this->fields.isSealCombineLimit = Master_object & 1;
  if ( isHeroineSvt )
    goto LABEL_279;
  if ( !*p_servantEntity )
    goto LABEL_450;
  v161 = (UserServantEntity_o *)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_450;
  combineLimitId = (*p_servantEntity)->fields.combineLimitId;
  v164 = *(_QWORD *)&v161->fields.limitCount.fields.currentCryptoKey;
  v163 = *(_QWORD *)&v161->fields.limitCount.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v317.fields.currentCryptoKey = v164;
  *(_QWORD *)&v317.fields.fakeValue = v163;
  v165 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v317, 0);
  Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_450;
  Master_object = (int64_t)DataManager__GetMasterData_object_(
                             (DataManager_o *)Master_object,
                             (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_CombineLimitMaster___);
  if ( !Master_object )
    goto LABEL_450;
  Master_object = (int64_t)CombineLimitMaster__GetEntity((CombineLimitMaster_o *)Master_object, combineLimitId, v165, 0);
  if ( !Master_object )
    goto LABEL_450;
  v166 = Master_object;
  v168 = *(_QWORD *)(Master_object + 32);
  v167 = *(_QWORD *)(Master_object + 40);
  Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_450;
  Master_object = (int64_t)DataManager__GetMasterData_object_(
                             (DataManager_o *)Master_object,
                             (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !v167 )
    goto LABEL_450;
  v169 = *(_QWORD *)(v167 + 24);
  if ( (int)v169 < 1 )
    goto LABEL_436;
  v170 = (UserItemMaster_o *)Master_object;
  v171 = 0;
  while ( 1 )
  {
    if ( v171 >= (unsigned int)v169 )
      goto LABEL_457;
    if ( !v168 )
      goto LABEL_450;
    if ( v171 >= *(unsigned int *)(v168 + 24) )
      goto LABEL_457;
    v172 = (UserServantEntity_o *)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_450;
    v173 = *(_OWORD *)&v172->fields.userId.fields.fakeValue;
    v174 = *v41;
    v175 = *(_DWORD *)(v167 + 32 + 4 * v171);
    v176 = v41;
    v177 = *(_DWORD *)(v168 + 32 + 4 * v171);
    *(_OWORD *)&v299.fields.currentCryptoKey = *(_OWORD *)&v172->fields.userId.fields.currentCryptoKey;
    *(_OWORD *)&v299.fields.fakeValue = v173;
    if ( !v174->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v174);
    v289 = v299;
    Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(&v289, 0);
    if ( !v170 )
      goto LABEL_450;
    Master_object = UserItemMaster__TryGetEntity(v170, &v304, Master_object, v175, 0);
    if ( (Master_object & 1) == 0 )
      goto LABEL_435;
    if ( !v304 )
      goto LABEL_450;
    if ( v175 == v304->fields.itemId )
      break;
LABEL_274:
    LODWORD(v169) = *(_DWORD *)(v167 + 24);
    ++v171;
    v41 = v176;
    if ( (__int64)v171 >= (int)v169 )
      goto LABEL_436;
  }
  if ( v177 <= v304->fields.num )
  {
    *p_isLimitUpItemNum = 1;
    goto LABEL_274;
  }
LABEL_435:
  v41 = v176;
  *p_isLimitUpItemNum = 0;
LABEL_436:
  if ( !v273 )
    goto LABEL_450;
  v101 = v279;
  if ( *(_QWORD *)(v273 + 96) < *(int *)(v166 + 24) )
    *p_isLimitUpItemNum = 0;
LABEL_279:
  v152 = this->fields.type;
LABEL_280:
  if ( v152 == 3 )
  {
    CombineServantListViewItem__SetSkillInfo(this, v61);
    v152 = this->fields.type;
  }
  if ( (unsigned int)(v152 - 11) <= 1 )
  {
    CombineServantListViewItem__SetAppendSkillInfo(this, v61);
    v152 = this->fields.type;
  }
  if ( v152 == 4 && !this->fields.isHeroineSvt )
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
          Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Master_object )
            goto LABEL_450;
          Master_object = (int64_t)DataManager__GetMasterData_object_(
                                     (DataManager_o *)Master_object,
                                     (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
          if ( !Master_object )
            goto LABEL_450;
          Master_object = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                     id,
                                     (const MethodInfo_3396838 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
          if ( !Master_object )
            goto LABEL_450;
          if ( lv < *(_DWORD *)(Master_object + 48) )
            this->fields.isTdLvMax = 0;
        }
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_UserServantMaster___);
        if ( Master_object )
        {
          SameSvtNpLvCache = UserServantMaster__getSameSvtNpLvCache(
                               (UserServantMaster_o *)Master_object,
                               (UserServantEntity_o *)*p_userSvtEntity,
                               &cachedUserServantNpLvDict,
                               0);
          if ( SameSvtNpLvCache < 1 || this->fields.isTdLvMax )
            goto LABEL_286;
          v205 = SameSvtNpLvCache;
          Master_object = CombineServantListViewItem__GetNpInfo(this, &tdLv[1], tdLv, &tdMaxLv, v204);
          if ( v273 )
          {
            v206 = *(_QWORD *)(v273 + 96);
            if ( v206 > 1200000 )
            {
              this->fields.isSameSvt = 1;
              goto LABEL_286;
            }
            Master_object = (int64_t)*p_userSvtEntity;
            if ( *p_userSvtEntity )
            {
              v266 = v101;
              v267 = UserServantEntity__checkTreasureDeviceLevelUp((UserServantEntity_o *)Master_object, v205, 0);
              v268 = tdLv[0];
              if ( tdLv[0] >= v267 )
              {
                v271 = 0;
LABEL_449:
                this->fields.isSameSvt = v206 >= v271;
                v101 = v266;
                goto LABEL_286;
              }
              v269 = tdLv[1];
              v270 = v267;
              v271 = 0;
              while ( 1 )
              {
                Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( !Master_object )
                  break;
                Master_object = (int64_t)DataManager__GetMasterData_object_(
                                           (DataManager_o *)Master_object,
                                           (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
                if ( !Master_object )
                  break;
                v272 = TreasureDvcLvMaster__GetEntity((TreasureDvcLvMaster_o *)Master_object, v269, v268, 0);
                if ( v272 )
                  v271 += v272->fields.qp;
                if ( v270 == ++v268 )
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
  v181 = this->fields.type;
  if ( v181 != 5 )
    goto LABEL_344;
  this->fields.isMaterialSvt = v101;
  Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_450;
  Master_object = (int64_t)DataManager__GetMasterData_object_(
                             (DataManager_o *)Master_object,
                             (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserServantLeaderMaster___);
  if ( !Master_object )
    goto LABEL_450;
  Master_object = *(_QWORD *)(Master_object + 40);
  if ( !Master_object )
    goto LABEL_450;
  v182 = System_Collections_ObjectModel_Collection_object___GetEnumerator(
           (System_Collections_ObjectModel_Collection_T__o *)Master_object,
           (const MethodInfo_3330280 *)Method_System_Collections_ObjectModel_Collection_UserServantLeaderEntity__GetEnumerator__);
  if ( !v182 )
    sub_1C32E7C(0);
  while ( 1 )
  {
    v183 = v182->klass;
    v184 = *(unsigned __int16 *)&v182->klass->_2.rank;
    if ( *(_WORD *)&v182->klass->_2.rank )
    {
      v185 = &v183->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)v185 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v184;
        v185 += 4;
        if ( !v184 )
          goto LABEL_295;
      }
      v186 = (__int64)&v183->vtable[*v185];
    }
    else
    {
LABEL_295:
      v186 = sub_1C83438(v182, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v186)(
            v182,
            *(_QWORD *)(v186 + 8))
        & 1) == 0 )
      break;
    v187 = v182->klass;
    v188 = *(unsigned __int16 *)&v182->klass->_2.rank;
    if ( *(_WORD *)&v182->klass->_2.rank )
    {
      v189 = &v187->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_UserServantLeaderEntity__c **)v189 - 1) != System_Collections_Generic_IEnumerator_UserServantLeaderEntity__TypeInfo )
      {
        --v188;
        v189 += 4;
        if ( !v188 )
          goto LABEL_302;
      }
      v190 = (__int64)&v187->vtable[*v189];
    }
    else
    {
LABEL_302:
      v190 = sub_1C83438(v182, System_Collections_Generic_IEnumerator_UserServantLeaderEntity__TypeInfo, 0);
    }
    v191 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v190)(
             v182,
             *(_QWORD *)(v190 + 8));
    if ( !v191 )
      sub_1C32E7C(0);
    v192 = (UserServantEntity_o *)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      sub_1C32E7C(v191);
    v194 = *(_OWORD *)&v192->fields.id.fields.currentCryptoKey;
    v193 = *(_OWORD *)&v192->fields.id.fields.fakeValue;
    v195 = *v41;
    v196 = *(_QWORD *)(v191 + 56);
    *(_OWORD *)&v299.fields.currentCryptoKey = v194;
    *(_OWORD *)&v299.fields.fakeValue = v193;
    if ( !v195->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v195);
    v288 = v299;
    if ( v196 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(&v288, 0) )
    {
      this->fields.isUseSupport = 1;
      break;
    }
  }
  v197 = v182->klass;
  v198 = *(unsigned __int16 *)&v182->klass->_2.rank;
  if ( *(_WORD *)&v182->klass->_2.rank )
  {
    v199 = &v197->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v199 - 1) != System_IDisposable_TypeInfo )
    {
      --v198;
      v199 += 4;
      if ( !v198 )
        goto LABEL_314;
    }
    v200 = (__int64)&v197->vtable[*v199];
  }
  else
  {
LABEL_314:
    v200 = sub_1C83438(v182, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v200)(v182, *(_QWORD *)(v200 + 8));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_UserRecommendSupportMaster___);
  v207 = (UserServantEntity_o *)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_450;
  v208 = *(_OWORD *)&v207->fields.id.fields.fakeValue;
  v209 = (UserRecommendSupportMaster_o *)Master_object;
  v210 = *v41;
  *(_OWORD *)&v299.fields.currentCryptoKey = *(_OWORD *)&v207->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v299.fields.fakeValue = v208;
  if ( !v210->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v210);
  v287 = v299;
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(&v287, 0);
  if ( !v209 )
    goto LABEL_450;
  this->fields.isUseRecommendSupport = UserRecommendSupportMaster__IsSettingServant(v209, Master_object, 0, 0);
  v211 = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_UserServantGrandMaster___);
  v212 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  v213 = (UserServantGrandMaster_o *)v211;
  *(_OWORD *)&v286.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v286.fields.fakeValue = v212;
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(&v286, 0);
  if ( !v213 )
    goto LABEL_450;
  this->fields.isGrandSvt = UserServantGrandMaster__IsSettingServant(v213, Master_object, 0);
  v214 = baseUsrSvtData && UserServantEntity__IsEventJoin(baseUsrSvtData, 0);
  Master_object = (int64_t)this->fields.userSvtEntity;
  this->fields.isEventJoinBaseSvt = v214;
  if ( !Master_object )
    goto LABEL_450;
  IsMaterialTd = UserServantEntity__IsMaterialTd((UserServantEntity_o *)Master_object, 0);
  v181 = this->fields.type;
  this->fields.isMaterialTdSvt = IsMaterialTd;
LABEL_344:
  if ( v181 == 6 )
  {
    Master_object = (int64_t)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_450;
    Master_object = UserServantEntity__isExceedLvMax((UserServantEntity_o *)Master_object, 0);
    v216 = this->fields.userSvtEntity;
    this->fields.isLvExceedMax = Master_object & 1;
    if ( !v216 )
      goto LABEL_450;
    Master_object = UserServantEntity__isLimitCountMax(v216, 0);
    v217 = this->fields.userSvtEntity;
    this->fields.isLimitCntMax = Master_object & 1;
    if ( !v217 )
      goto LABEL_450;
    isLevelMax = UserServantEntity__isLevelMax(v217, 0);
    v219 = this->fields.isHeroineSvt;
    this->fields.isLvMax = isLevelMax;
    if ( !v219 || UserServantEntity__IsUseLevelExceedItemHeroine(userSvtEntity, 0) )
    {
      Master_object = (int64_t)*p_userSvtEntity;
      if ( !*p_userSvtEntity )
        goto LABEL_450;
      SvtExceedEnt = UserServantEntity__getSvtExceedEnt((UserServantEntity_o *)Master_object, 0);
      if ( SvtExceedEnt )
      {
        v221 = (int32_t *)SvtExceedEnt;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_CommonConsumeMaster___);
        if ( !Master_object )
          goto LABEL_450;
        IdEntityList = CommonConsumeMaster__GetIdEntityList((CommonConsumeMaster_o *)Master_object, v221[12], 0);
        if ( IdEntityList )
        {
          v223 = IdEntityList;
          v224 = (System_Collections_Generic_HashSet_int__o *)sub_1C32E6C(System_Collections_Generic_HashSet_int__TypeInfo);
          System_Collections_Generic_HashSet_int____ctor(
            v224,
            (const MethodInfo_3649220 *)Method_System_Collections_Generic_HashSet_int___ctor__);
          v225 = (System_Collections_Generic_HashSet_int__o *)sub_1C32E6C(System_Collections_Generic_HashSet_int__TypeInfo);
          System_Collections_Generic_HashSet_int____ctor(
            v225,
            (const MethodInfo_3649220 *)Method_System_Collections_Generic_HashSet_int___ctor__);
          v226 = v223->max_length;
          if ( v226 >= 1 )
          {
            v227 = 0;
            while ( (unsigned int)v227 < v226 )
            {
              v228 = v223->m_Items[v227];
              if ( !v228 )
                goto LABEL_450;
              if ( !v224 )
                goto LABEL_450;
              Master_object = System_Collections_Generic_HashSet_int___Add(
                                v224,
                                v228->fields.objectId,
                                (const MethodInfo_364A424 *)Method_System_Collections_Generic_HashSet_int__Add__);
              if ( !v225 )
                goto LABEL_450;
              Master_object = System_Collections_Generic_HashSet_int___Add(
                                v225,
                                v228->fields.num,
                                (const MethodInfo_364A424 *)Method_System_Collections_Generic_HashSet_int__Add__);
              v226 = v223->max_length;
              if ( (int)++v227 >= v226 )
                goto LABEL_363;
            }
LABEL_457:
            sub_1C32E84(Master_object);
          }
LABEL_363:
          v41 = &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo;
          if ( v221[13] >= 1 )
          {
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_SvtCoinMaster___);
            v229 = (UserServantEntity_o *)*p_userSvtEntity;
            if ( *p_userSvtEntity )
            {
              v230 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
              v232 = *(_QWORD *)&v229->fields.svtId.fields.currentCryptoKey;
              v231 = *(_QWORD *)&v229->fields.svtId.fields.fakeValue;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v318.fields.currentCryptoKey = v232;
              *(_QWORD *)&v318.fields.fakeValue = v231;
              Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v318, 0);
              if ( v230 )
              {
                Master_object = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                           v230,
                                           Master_object,
                                           (const MethodInfo_3396838 *)Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__GetEntity__);
                if ( Master_object )
                {
                  if ( v224 )
                  {
                    Master_object = System_Collections_Generic_HashSet_int___Add(
                                      v224,
                                      *(_DWORD *)(Master_object + 24),
                                      (const MethodInfo_364A424 *)Method_System_Collections_Generic_HashSet_int__Add__);
                    if ( v225 )
                    {
                      System_Collections_Generic_HashSet_int___Add(
                        v225,
                        v221[13],
                        (const MethodInfo_364A424 *)Method_System_Collections_Generic_HashSet_int__Add__);
                      goto LABEL_374;
                    }
                  }
                }
              }
            }
            goto LABEL_450;
          }
LABEL_374:
          v233 = (UserServantEntity_o *)*p_userSvtEntity;
          v234 = System_Linq_Enumerable__ToArray_int_(
                   (System_Collections_Generic_IEnumerable_TSource__o *)v224,
                   (const MethodInfo_311C8F4 *)Method_System_Linq_Enumerable_ToArray_int___);
          Master_object = (int64_t)System_Linq_Enumerable__ToArray_int_(
                                     (System_Collections_Generic_IEnumerable_TSource__o *)v225,
                                     (const MethodInfo_311C8F4 *)Method_System_Linq_Enumerable_ToArray_int___);
          if ( !v273 )
            goto LABEL_450;
          this->fields.isLvExceedItemNum = CombineUtility__CheckCombineNeedItemsEnough(
                                             v233,
                                             v234,
                                             (System_Int32_array *)Master_object,
                                             *(_QWORD *)(v273 + 96),
                                             v221[8],
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
    v235 = *(_QWORD *)&v277->fields.friendshipRank.fields.currentCryptoKey;
    v236 = *(_QWORD *)&v277->fields.friendshipRank.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v319.fields.currentCryptoKey = v235;
    *(_QWORD *)&v319.fields.fakeValue = v236;
    Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v319, 0);
    v237 = *p_servantEntity;
    if ( !*p_servantEntity )
      goto LABEL_450;
    v238 = (_DWORD)Master_object == v277->fields.friendshipExceedCount + v237->fields.maxFriendshipRank;
    this->fields.isFriendshipRankMax = v238;
    if ( v238 && !this->fields.isFriendshipExceedMax )
    {
      if ( this->fields.isHeroineSvt )
      {
        Master_object = UserServantEntity__IsUseFriendshipExceedItemHeroine(userSvtEntity, 0);
        if ( (Master_object & 1) == 0 )
          goto LABEL_384;
        v237 = *p_servantEntity;
        if ( !*p_servantEntity )
          goto LABEL_450;
      }
      maxFriendshipRank = v237->fields.maxFriendshipRank;
      friendshipExceedCount = v277->fields.friendshipExceedCount;
      Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Master_object )
        goto LABEL_450;
      Master_object = (int64_t)DataManager__GetMasterData_object_(
                                 (DataManager_o *)Master_object,
                                 (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_FriendshipMaster___);
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
      v259 = (UserServantEntity_o *)Master_object;
      v261 = *(_QWORD *)(Master_object + 32);
      v260 = *(_QWORD *)(Master_object + 40);
      Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Master_object )
        goto LABEL_450;
      v284 = v259;
      Master_object = (int64_t)DataManager__GetMasterData_object_(
                                 (DataManager_o *)Master_object,
                                 (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserItemMaster___);
      if ( !v260 )
        goto LABEL_450;
      if ( *(int *)(v260 + 24) < 1 )
      {
LABEL_432:
        if ( !v273 )
          goto LABEL_450;
        if ( *(_QWORD *)(v273 + 96) < SHIDWORD(v284->fields.id.fields.hiddenValue) )
          this->fields.isFriendshipExceedItemNum = 0;
        goto LABEL_384;
      }
      v262 = (UserItemMaster_o *)Master_object;
      v263 = 0;
      v264 = v260 + 32;
      while ( 1 )
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4C31812 )
        {
          sub_1C32C20(&NetworkManager_TypeInfo);
          byte_4C31812 = 1;
        }
        Master_object = (int64_t)NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          Master_object = (int64_t)NetworkManager_TypeInfo;
        }
        if ( v263 >= *(unsigned int *)(v260 + 24) )
          goto LABEL_457;
        if ( !v262 )
          goto LABEL_450;
        Master_object = UserItemMaster__TryGetEntity(
                          v262,
                          &v300,
                          *(_QWORD *)(*(_QWORD *)(Master_object + 184) + 64LL),
                          *(_DWORD *)(v264 + 4 * v263),
                          0);
        if ( (Master_object & 1) == 0 )
          break;
        if ( v263 >= *(unsigned int *)(v260 + 24) )
          goto LABEL_457;
        if ( !v300 )
          goto LABEL_450;
        if ( *(_DWORD *)(v264 + 4 * v263) == v300->fields.itemId )
        {
          if ( !v261 )
            goto LABEL_450;
          if ( v263 >= *(unsigned int *)(v261 + 24) )
            goto LABEL_457;
          v265 = *(_DWORD *)(v261 + 32 + 4 * v263) <= v300->fields.num;
          goto LABEL_430;
        }
LABEL_431:
        if ( (__int64)++v263 >= *(int *)(v260 + 24) )
          goto LABEL_432;
      }
      v265 = 0;
LABEL_430:
      this->fields.isFriendshipExceedItemNum = v265;
      goto LABEL_431;
    }
  }
LABEL_384:
  Master_object = (int64_t)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_450;
  Master_object = UserServantEntity__getDispLimitCount((UserServantEntity_o *)Master_object, 0, 0);
  v239 = this->fields.userSvtEntity;
  this->fields.dispLimitCount = Master_object;
  if ( !v239 )
    goto LABEL_450;
  SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v239, -1, -1, 0);
  this->fields.skillCategoryIdList = SkillCategoryIdList;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.skillCategoryIdList, (int32_t)SkillCategoryIdList, v241, v242);
  Master_object = (int64_t)this->fields.userSvtEntity;
  if ( !Master_object )
    goto LABEL_450;
  TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                   (UserServantEntity_o *)Master_object,
                                   0,
                                   -1,
                                   0);
  this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
  sub_1C32BC4(
    (CGThumbnailListItem_o *)&this->fields.tdCategoryIdList,
    (int32_t)TreasureDeviceCategoryIdList,
    v244,
    v245);
  Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_450;
  Master_object = (int64_t)DataManager__GetMasterData_object_(
                             (DataManager_o *)Master_object,
                             (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Master_object )
    goto LABEL_450;
  Master_object = (int64_t)DataMasterBase_object__object__int___GetEntity(
                             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                             this->fields.classId,
                             (const MethodInfo_3396838 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !Master_object )
    goto LABEL_450;
  v246 = *(int *)(Master_object + 52);
  v247 = this->fields.servantEntity;
  this->fields.priority = v246;
  this->fields.sortValue1B = v246;
  if ( !v247 )
    goto LABEL_450;
  v248 = (UserServantEntity_o *)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_450;
  v249 = ((__int64)v247->fields.collectionNo << 16)
       | ((unsigned __int64)(unsigned int)this->fields.rarity << 48)
       | v248->fields.lv;
  v250 = type == 2 && !this->fields.isLimitCntMax;
  this->fields.sortValue2 = v249 | v250;
  v252 = *(_QWORD *)&v248->fields.svtId.fields.currentCryptoKey;
  v251 = *(_QWORD *)&v248->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v320.fields.currentCryptoKey = v252;
  *(_QWORD *)&v320.fields.fakeValue = v251;
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v320, 0);
  v253 = this->fields.userSvtEntity;
  this->fields.sortValue2B = (int)Master_object;
  if ( !v253 )
    goto LABEL_450;
  v254 = *(_OWORD *)&v253->fields.id.fields.fakeValue;
  v255 = *v41;
  *(_OWORD *)&v299.fields.currentCryptoKey = *(_OWORD *)&v253->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v299.fields.fakeValue = v254;
  if ( !v255->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v255);
  v285 = v299;
  v256 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(&v285, 0);
  Master_object = (int64_t)this->fields.iconLabelInfo1;
  this->fields.sortValueLast = v256;
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

  if ( (byte_4C3BB7F & 1) == 0 )
  {
    sub_1C32C20(&SvtUseSkillData_TypeInfo);
    byte_4C3BB7F = 1;
  }
  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
    return UserServantEntity__getAppendSkillInfo(userSvtEntity, 0);
  v5 = (SvtUseSkillData_o *)sub_1C32E6C(SvtUseSkillData_TypeInfo);
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
  TreasureDvcInfo_o *v10; // x8
  int32_t maxLv; // w8
  TreasureDvcInfo_o *tdInfo; // [xsp+8h] [xbp-28h] BYREF

  tdInfo = 0;
  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
  {
    TreasureDeviceInfo = UserServantEntity__getTreasureDeviceInfo(this->fields.userSvtEntity, &tdInfo, -1, -1, 0, 0);
    v10 = tdInfo;
    if ( !tdInfo )
      sub_1C32E7C(TreasureDeviceInfo);
    *tdId = tdInfo->fields.id;
    *tdLv = v10->fields.lv;
    maxLv = v10->fields.maxLv;
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
  struct ServantEntity_o *servantEntity; // x8
  int32_t combineLimitId; // w2
  int32_t condTargetId; // w19
  int32_t condType; // w21
  int64_t condNum; // x20
  CombineLimitReleaseEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C3BB80 & 1) == 0 )
  {
    sub_1C32C20(&CondType_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMaster_CombineLimitReleaseMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    byte_4C3BB80 = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_CombineLimitReleaseMaster___);
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
    sub_1C32E7C(Master_object);
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

  if ( (byte_4C3BB7E & 1) == 0 )
  {
    sub_1C32C20(&BalanceConfig_TypeInfo);
    sub_1C32C20(&SkillInfo___TypeInfo);
    byte_4C3BB7E = 1;
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
    v7 = (SkillInfo_array *)sub_1C32CC8(SkillInfo___TypeInfo, (unsigned int)v6->static_fields->SvtSkillListMax);
    *skillInfoList = v7;
    sub_1C32BC4((CGThumbnailListItem_o *)skillInfoList, (int32_t)v7, v8, v9);
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

  if ( (byte_4C3BB6E & 1) == 0 )
  {
    sub_1C32C20(&FilterKindList_TypeInfo);
    sub_1C32C20(&ListViewSort_FilterKind___TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    sub_1C32C20(&ServantEventBonusFilterController_TypeInfo);
    byte_4C3BB6E = 1;
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
                                        (const MethodInfo_377FA7C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                            (const MethodInfo_377FA7C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                           (const MethodInfo_377FA7C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                           (const MethodInfo_377FA7C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                           (const MethodInfo_377FA7C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
    v20 = this->fields.userSvtEntity;
    if ( v20 )
    {
      dispLimitCount = this->fields.dispLimitCount;
      if ( dispLimitCount != UserServantEntity__getDispLimitCount(v20, 0, 0) )
      {
        ClassGroupFilterKindList = (__int64)this->fields.userSvtEntity;
        if ( !ClassGroupFilterKindList )
          goto LABEL_69;
        ClassGroupFilterKindList = UserServantEntity__getDispLimitCount(
                                     (UserServantEntity_o *)ClassGroupFilterKindList,
                                     0,
                                     0);
        v22 = this->fields.userSvtEntity;
        this->fields.dispLimitCount = ClassGroupFilterKindList;
        if ( !v22 )
          goto LABEL_69;
        SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v22, -1, -1, 0);
        this->fields.skillCategoryIdList = SkillCategoryIdList;
        sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.skillCategoryIdList, (int32_t)SkillCategoryIdList, v24, v25);
        ClassGroupFilterKindList = (__int64)this->fields.userSvtEntity;
        if ( !ClassGroupFilterKindList )
          goto LABEL_69;
        TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                         (UserServantEntity_o *)ClassGroupFilterKindList,
                                         0,
                                         -1,
                                         0);
        this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
        sub_1C32BC4(
          (CGThumbnailListItem_o *)&this->fields.tdCategoryIdList,
          (int32_t)TreasureDeviceCategoryIdList,
          v27,
          v28);
      }
    }
    ClassGroupFilterKindList = sub_1C32CC8(ListViewSort_FilterKind___TypeInfo, 1);
    if ( !ClassGroupFilterKindList )
      goto LABEL_69;
    if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
      goto LABEL_70;
    *(_DWORD *)(ClassGroupFilterKindList + 32) = 50;
    IsUnSelectedAllTargetFilters = ListViewSort__IsUnSelectedAllTargetFilters(
                                     sort,
                                     (ListViewSort_FilterKind_array *)ClassGroupFilterKindList,
                                     0);
    ClassGroupFilterKindList = sub_1C32CC8(ListViewSort_FilterKind___TypeInfo, 1);
    if ( !ClassGroupFilterKindList )
      goto LABEL_69;
    if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
LABEL_70:
      sub_1C32E84(ClassGroupFilterKindList);
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
  ClassGroupFilterKindList = sub_1C32CC8(ListViewSort_FilterKind___TypeInfo, 1);
  if ( !ClassGroupFilterKindList )
LABEL_69:
    sub_1C32E7C(ClassGroupFilterKindList);
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
  v17 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v17 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v17->static_fields->RarityFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_69;
  v18 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_377FA7C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v18, 0)
      || ListViewSort__IsSelectedAllTargetFilters(sort, v18, 0)
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
  _BOOL4 isChoice; // w21
  UserServantEntity_o *v18; // x0
  int32_t dispLimitCount; // w21
  UserServantEntity_o *v20; // x8
  System_Int32_array *SkillCategoryIdList; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  System_Int32_array *TreasureDeviceCategoryIdList; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  _BOOL4 IsUnSelectedAllTargetFilters; // w21
  _BOOL4 v28; // w23
  _BOOL4 IsMatchEffectCategory; // w22
  _BOOL4 v30; // w0
  const MethodInfo *v31; // x1
  bool v32; // w0
  FilterKindList_c *v34; // x0
  ListViewSort_FilterKind_array *v35; // x21

  v4 = this;
  if ( (byte_4C3BB6F & 1) == 0 )
  {
    sub_1C32C20(&FilterKindList_TypeInfo);
    sub_1C32C20(&ListViewSort_FilterKind___TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    this = (CombineServantListViewItem_o *)sub_1C32C20(&ServantEventBonusFilterController_TypeInfo);
    byte_4C3BB6F = 1;
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
                                          (const MethodInfo_377FA7C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                            (const MethodInfo_377FA7C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, v9, 0) )
    {
      this = (CombineServantListViewItem_o *)sub_1C32CC8(ListViewSort_FilterKind___TypeInfo, 1);
      if ( !this )
        goto LABEL_86;
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
  v10 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v10 = FilterKindList_TypeInfo;
  }
  this = (CombineServantListViewItem_o *)v10->static_fields->NpTypeFilterKindList;
  if ( !this )
    goto LABEL_86;
  v11 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)this,
                                           (const MethodInfo_377FA7C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
    goto LABEL_86;
  v13 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)this,
                                           (const MethodInfo_377FA7C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
    goto LABEL_86;
  v15 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)this,
                                           (const MethodInfo_377FA7C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
  v18 = v4->fields.userSvtEntity;
  if ( v18 )
  {
    dispLimitCount = v4->fields.dispLimitCount;
    if ( dispLimitCount != UserServantEntity__getDispLimitCount(v18, 0, 0) )
    {
      this = (CombineServantListViewItem_o *)v4->fields.userSvtEntity;
      if ( !this )
        goto LABEL_86;
      this = (CombineServantListViewItem_o *)UserServantEntity__getDispLimitCount((UserServantEntity_o *)this, 0, 0);
      v20 = v4->fields.userSvtEntity;
      v4->fields.dispLimitCount = (int)this;
      if ( !v20 )
        goto LABEL_86;
      SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v20, -1, -1, 0);
      v4->fields.skillCategoryIdList = SkillCategoryIdList;
      sub_1C32BC4((CGThumbnailListItem_o *)&v4->fields.skillCategoryIdList, (int32_t)SkillCategoryIdList, v22, v23);
      this = (CombineServantListViewItem_o *)v4->fields.userSvtEntity;
      if ( !this )
        goto LABEL_86;
      TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                       (UserServantEntity_o *)this,
                                       0,
                                       -1,
                                       0);
      v4->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
      sub_1C32BC4(
        (CGThumbnailListItem_o *)&v4->fields.tdCategoryIdList,
        (int32_t)TreasureDeviceCategoryIdList,
        v25,
        v26);
    }
  }
  this = (CombineServantListViewItem_o *)sub_1C32CC8(ListViewSort_FilterKind___TypeInfo, 1);
  if ( !this )
    goto LABEL_86;
  if ( !this->fields.sortIndex )
    goto LABEL_87;
  LODWORD(this->fields.sortValue0) = 50;
  IsUnSelectedAllTargetFilters = ListViewSort__IsUnSelectedAllTargetFilters(
                                   sort,
                                   (ListViewSort_FilterKind_array *)this,
                                   0);
  this = (CombineServantListViewItem_o *)sub_1C32CC8(ListViewSort_FilterKind___TypeInfo, 1);
  if ( !this )
    goto LABEL_86;
  if ( !this->fields.sortIndex )
    goto LABEL_87;
  LODWORD(this->fields.sortValue0) = 51;
  v28 = ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)this, 0);
  IsMatchEffectCategory = ServantEquipEffectFilterController__IsMatchEffectCategory(
                            v4->fields.tdCategoryIdList,
                            sort,
                            0);
  v30 = ServantEquipEffectFilterController__IsMatchEffectCategory(v4->fields.skillCategoryIdList, sort, 0);
  if ( ((IsUnSelectedAllTargetFilters ^ v28) & 1) != 0 )
  {
    if ( IsUnSelectedAllTargetFilters )
    {
      if ( !v30 )
        return 0;
    }
    else if ( !IsMatchEffectCategory )
    {
      return 0;
    }
  }
  else if ( !IsMatchEffectCategory && !v30 )
  {
    return 0;
  }
LABEL_42:
  if ( !ListViewSort__IsMatchServantAttriFilter(sort, v4->fields.userSvtEntity, v4->fields.servantEntity, 0)
    || !ListViewSort__IsMatchServantSubAttriFilter(sort, v4->fields.userSvtEntity, v4->fields.servantEntity, 0) )
  {
    return 0;
  }
  this = (CombineServantListViewItem_o *)sub_1C32CC8(ListViewSort_FilterKind___TypeInfo, 1);
  if ( !this )
LABEL_86:
    sub_1C32E7C(this);
  if ( !this->fields.sortIndex )
    goto LABEL_87;
  LODWORD(this->fields.sortValue0) = 39;
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)this, 0) )
  {
    this = (CombineServantListViewItem_o *)sub_1C32CC8(ListViewSort_FilterKind___TypeInfo, 1);
    if ( !this )
      goto LABEL_86;
    if ( this->fields.sortIndex )
    {
      LODWORD(this->fields.sortValue0) = 29;
      if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)this, 0) )
        goto LABEL_79;
      goto LABEL_50;
    }
LABEL_87:
    sub_1C32E84(this);
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
  v32 = !ListViewSort__GetFilter(sort, 29, 0) || CombineServantListViewItem__get_IsCanNotSelect(v4, v31);
  if ( !isChoice && v32 )
    return 0;
LABEL_79:
  v34 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v34 = FilterKindList_TypeInfo;
  }
  this = (CombineServantListViewItem_o *)v34->static_fields->RarityFilterKindList;
  if ( !this )
    goto LABEL_86;
  v35 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)this,
                                           (const MethodInfo_377FA7C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v35, 0)
      || ListViewSort__IsSelectedAllTargetFilters(sort, v35, 0)
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
  _BOOL4 isChoice; // w8
  FilterKindList_c *v15; // x0
  ListViewSort_FilterKind_array *v16; // x21
  UserServantEntity_o *v18; // x0
  int32_t dispLimitCount; // w21
  UserServantEntity_o *v20; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  _BOOL4 IsUnSelectedAllTargetFilters; // w21
  _BOOL4 v28; // w23
  _BOOL4 IsMatchEffectCategory; // w22
  _BOOL4 v30; // w0

  if ( (byte_4C3BB6D & 1) == 0 )
  {
    sub_1C32C20(&FilterKindList_TypeInfo);
    sub_1C32C20(&ListViewSort_FilterKind___TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    sub_1C32C20(&ServantEventBonusFilterController_TypeInfo);
    byte_4C3BB6D = 1;
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
                                        (const MethodInfo_377FA7C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                            (const MethodInfo_377FA7C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                           (const MethodInfo_377FA7C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                           (const MethodInfo_377FA7C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
    v18 = this->fields.userSvtEntity;
    if ( v18 )
    {
      dispLimitCount = this->fields.dispLimitCount;
      if ( dispLimitCount != UserServantEntity__getDispLimitCount(v18, 0, 0) )
      {
        ClassGroupFilterKindList = (__int64)this->fields.userSvtEntity;
        if ( !ClassGroupFilterKindList )
          goto LABEL_64;
        ClassGroupFilterKindList = UserServantEntity__getDispLimitCount(
                                     (UserServantEntity_o *)ClassGroupFilterKindList,
                                     0,
                                     0);
        v20 = this->fields.userSvtEntity;
        this->fields.dispLimitCount = ClassGroupFilterKindList;
        if ( !v20 )
          goto LABEL_64;
        SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v20, -1, -1, 0);
        this->fields.skillCategoryIdList = SkillCategoryIdList;
        sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.skillCategoryIdList, (int32_t)SkillCategoryIdList, v22, v23);
        ClassGroupFilterKindList = (__int64)this->fields.userSvtEntity;
        if ( !ClassGroupFilterKindList )
          goto LABEL_64;
        TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                         (UserServantEntity_o *)ClassGroupFilterKindList,
                                         0,
                                         -1,
                                         0);
        this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
        sub_1C32BC4(
          (CGThumbnailListItem_o *)&this->fields.tdCategoryIdList,
          (int32_t)TreasureDeviceCategoryIdList,
          v25,
          v26);
      }
    }
    ClassGroupFilterKindList = sub_1C32CC8(ListViewSort_FilterKind___TypeInfo, 1);
    if ( !ClassGroupFilterKindList )
      goto LABEL_64;
    if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
      goto LABEL_65;
    *(_DWORD *)(ClassGroupFilterKindList + 32) = 50;
    IsUnSelectedAllTargetFilters = ListViewSort__IsUnSelectedAllTargetFilters(
                                     sort,
                                     (ListViewSort_FilterKind_array *)ClassGroupFilterKindList,
                                     0);
    ClassGroupFilterKindList = sub_1C32CC8(ListViewSort_FilterKind___TypeInfo, 1);
    if ( !ClassGroupFilterKindList )
      goto LABEL_64;
    if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
LABEL_65:
      sub_1C32E84(ClassGroupFilterKindList);
    *(_DWORD *)(ClassGroupFilterKindList + 32) = 51;
    v28 = ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0);
    IsMatchEffectCategory = ServantEquipEffectFilterController__IsMatchEffectCategory(
                              this->fields.tdCategoryIdList,
                              sort,
                              0);
    v30 = ServantEquipEffectFilterController__IsMatchEffectCategory(this->fields.skillCategoryIdList, sort, 0);
    if ( ((IsUnSelectedAllTargetFilters ^ v28) & 1) != 0 )
    {
      if ( IsUnSelectedAllTargetFilters )
      {
        if ( !v30 )
          return 0;
      }
      else if ( !IsMatchEffectCategory )
      {
        return 0;
      }
    }
    else if ( !IsMatchEffectCategory && !v30 )
    {
      return 0;
    }
  }
  if ( !ListViewSort__IsMatchServantAttriFilter(sort, this->fields.userSvtEntity, this->fields.servantEntity, 0)
    || !ListViewSort__IsMatchServantSubAttriFilter(sort, this->fields.userSvtEntity, this->fields.servantEntity, 0) )
  {
    return 0;
  }
  ClassGroupFilterKindList = sub_1C32CC8(ListViewSort_FilterKind___TypeInfo, 1);
  if ( !ClassGroupFilterKindList )
LABEL_64:
    sub_1C32E7C(ClassGroupFilterKindList);
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
  v15 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v15 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v15->static_fields->RarityFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_64;
  v16 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_377FA7C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v16, 0)
      || ListViewSort__IsSelectedAllTargetFilters(sort, v16, 0)
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
    sub_1C32E7C(0);
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
    sub_1C32E7C(0);
  this->fields.isLock = UserServantEntity__IsLock(userSvtEntity, 0);
  this->fields.isSwapLock = 0;
}


void CombineServantListViewItem__ModifyPushItem(CombineServantListViewItem_o *this, const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x0
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v5; // q1
  int64_t pushUserSvtId; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v8; // [xsp+20h] [xbp-40h]

  if ( (byte_4C3BB6C & 1) == 0 )
  {
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C3BB6C = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame || (userSvtEntity = this->fields.userSvtEntity) == 0 )
    sub_1C32E7C(SelfUserGame);
  v5 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  pushUserSvtId = SelfUserGame->fields.pushUserSvtId;
  *(_OWORD *)&v8.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v8.fields.fakeValue = v5;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v7 = v8;
  this->fields.isPush = pushUserSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(&v7, 0);
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
  int32_t v32; // w1
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

  if ( (byte_4C3BB6B & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_CombineAppendPassiveSkillMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_SkillMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_SvtAppendPassiveSkillUnlockMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1C32C20(&Method_System_Linq_Enumerable_Any_int___);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C3BB6B = 1;
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
      userSvtEntity = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_SkillMaster___);
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
                        (const MethodInfo_3396838 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
      svtSkillLvList = v5->fields.svtSkillLvList;
      if ( !svtSkillLvList )
        goto LABEL_79;
      if ( v10 >= LODWORD(svtSkillLvList->max_length) )
LABEL_82:
        sub_1C32E84(userSvtEntity);
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
  *(_QWORD *)&v48.fields.currentCryptoKey = v16;
  *(_QWORD *)&v48.fields.fakeValue = v15;
  v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v48, 0);
  this->fields.isAppendSkillExChangeLimit = UserServantAppendPassiveSkillMaster__IsAppendSkillExchangeLimit(v17, 0);
  v18 = (System_Collections_Generic_List_int__o *)sub_1C32E6C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v18,
    (const MethodInfo_377AF44 *)Method_System_Collections_Generic_List_int___ctor__);
  v19 = v5->fields.svtUseSkillIdList;
  if ( !v19 )
LABEL_79:
    sub_1C32E7C(userSvtEntity);
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
        userSvtEntity = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_CombineAppendPassiveSkillMaster___);
        v25 = this->fields.userSvtEntity;
        if ( !v25 )
          goto LABEL_79;
        v26 = (CombineAppendPassiveSkillMaster_o *)userSvtEntity;
        v28 = *(_QWORD *)&v25->fields.svtId.fields.currentCryptoKey;
        v27 = *(_QWORD *)&v25->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v49.fields.currentCryptoKey = v28;
        *(_QWORD *)&v49.fields.fakeValue = v27;
        userSvtEntity = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v49, 0);
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
            v32 = *((_DWORD *)&v31->obj.klass + v20);
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
                v32,
                *(const MethodInfo_377B798 **)(*(_QWORD *)(v46 + 192) + 112LL));
              goto LABEL_78;
            }
            v36 = (char *)(v33 + 4 * v35);
            *((_DWORD *)userSvtEntity + 6) = v35 + 1;
LABEL_74:
            *((_DWORD *)v36 + 8) = v32;
            goto LABEL_78;
          }
        }
        goto LABEL_78;
      }
    }
    userSvtEntity = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_SvtAppendPassiveSkillUnlockMaster___);
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
    userSvtEntity = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v50, 0);
    v41 = v5->fields.svtSkillNumsList;
    if ( !v41 )
      goto LABEL_79;
    if ( v22 >= LODWORD(v41->max_length) )
      goto LABEL_82;
    if ( !v38 )
      goto LABEL_79;
    userSvtEntity = SvtAppendPassiveSkillUnlockMaster__GetEntity(
                      v38,
                      (int32_t)userSvtEntity,
                      *((_DWORD *)&v41->obj.klass + v20),
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
        v42 = v5->fields.svtUseSkillIdList;
        if ( !v42 )
          goto LABEL_79;
        if ( v22 >= LODWORD(v42->max_length) )
          goto LABEL_82;
        if ( !v18 )
          goto LABEL_79;
        v32 = *((_DWORD *)&v42->obj.klass + v20);
        items = v18->fields._items;
        v44 = Method_System_Collections_Generic_List_int__Add__;
        ++v18->fields._version;
        if ( !items )
          goto LABEL_79;
        size = v18->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          v46 = v44[4];
          userSvtEntity = v18;
          goto LABEL_77;
        }
        v36 = (char *)items + 4 * size;
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
                                          (const MethodInfo_30E8A38 *)Method_System_Linq_Enumerable_Any_int___);
  this->fields.isAppendSkillOpenItemNum = System_Linq_Enumerable__Any_int_(
                                            (System_Collections_Generic_IEnumerable_TSource__o *)v18,
                                            (const MethodInfo_30E8A38 *)Method_System_Linq_Enumerable_Any_int___);
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
  int klass; // w22
  _BOOL8 v13; // x0
  Il2CppObject *current; // x24
  UserServantEntity_o *userSvtEntity; // x0
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4C3BB71 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Array_IndexOf_int___);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventCampaignEntity__FindAll__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    sub_1C32C20(&System_Predicate_EventCampaignEntity__TypeInfo);
    sub_1C32C20(&Method_CombineServantListViewItem___c__SetIsCombineExpCampaignTarget_b__125_0__);
    sub_1C32C20(&CombineServantListViewItem___c_TypeInfo);
    byte_4C3BB71 = 1;
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
    _9__125_0 = (System_Predicate_object__o *)v5->static_fields->__9__125_0;
    if ( !_9__125_0 )
    {
      if ( !v5->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v5);
        v5 = CombineServantListViewItem___c_TypeInfo;
      }
      v7 = (Il2CppObject *)v5->static_fields->__9;
      _9__125_0 = (System_Predicate_object__o *)sub_1C32E6C(System_Predicate_EventCampaignEntity__TypeInfo);
      System_Predicate_object____ctor(
        _9__125_0,
        v7,
        Method_CombineServantListViewItem___c__SetIsCombineExpCampaignTarget_b__125_0__,
        0);
      static_fields = CombineServantListViewItem___c_TypeInfo->static_fields;
      static_fields->__9__125_0 = (struct System_Predicate_EventCampaignEntity__o *)_9__125_0;
      sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__125_0, (int32_t)_9__125_0, v9, v10);
    }
    All = System_Collections_Generic_List_object___FindAll(
            (System_Collections_Generic_List_object__o *)eventCampaignEntities,
            (System_Predicate_T__o *)_9__125_0,
            (const MethodInfo_3798ECC *)Method_System_Collections_Generic_List_EventCampaignEntity__FindAll__);
    if ( !All )
      sub_1C32E7C(0);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v16,
      (System_Collections_Generic_List_object__o *)All,
      (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    v17 = v16;
    klass = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v17,
                (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
        if ( !v13 )
        {
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v17,
            (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
          this->fields.combineExpCampaignValue = (float)klass / 1000.0;
          return;
        }
        current = v17.fields._current;
        if ( !v17.fields._current )
          sub_1C32E7C(v13);
        if ( HIDWORD(v17.fields._current[1].klass) == 27 )
          break;
        if ( (System_Array__IndexOf_int_(
                (System_Int32_array *)v17.fields._current[2].monitor,
                this->fields.svtId,
                (const MethodInfo_31E4470 *)Method_System_Array_IndexOf_int___)
            & 0x80000000) == 0 )
          goto LABEL_20;
      }
      userSvtEntity = this->fields.userSvtEntity;
      if ( !userSvtEntity )
        sub_1C32E7C(0);
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
  sub_1C32BC4(
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
    sub_1C32E7C(userSvtEntity);
  }
  *(_QWORD *)&this->fields.hp = *((_QWORD *)userSvtEntity + 2);
  this->fields.rarity = *((_DWORD *)userSvtEntity + 6);
  this->fields.actualRarity = *((_DWORD *)userSvtEntity + 10);
  this->fields.cost = *((_DWORD *)userSvtEntity + 7);
}


void CombineServantListViewItem__SetSkillInfo(CombineServantListViewItem_o *this, const MethodInfo *method)
{
  int64_t SelfUserGame; // x0
  UserServantEntity_o *userSvtEntity; // x8
  struct UserServantEntity_o *v5; // x8
  int64_t v6; // x21
  __int64 v7; // x8
  int64_t v8; // x22
  unsigned __int64 v9; // x20
  int32_t v10; // w23
  int v11; // w28
  __int64 v12; // x8
  CombineSkillMaster_o *v13; // x20
  unsigned __int64 v14; // x28
  char v15; // w26
  int32_t v16; // w24
  struct ServantEntity_o *servantEntity; // x8
  CombineSkillMaster_o *v18; // x21
  struct System_Int32_array *itemNums; // x20
  struct System_Int32_array *itemIds; // x27
  int max_length; // w8
  UserItemMaster_o *v22; // x25
  unsigned int v23; // w9
  unsigned int v24; // w29
  struct UserServantEntity_o *v25; // x8
  __int128 v26; // q1
  int32_t v27; // w26
  int32_t v28; // w23
  __int64 v29; // x8
  _QWORD *v30; // x9
  __int64 v31; // x10
  struct System_Collections_Generic_List_int__o *enableSkillUp; // x8
  int64_t v33; // [xsp+0h] [xbp-C0h]
  int64_t v34; // [xsp+8h] [xbp-B8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v35; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v36; // [xsp+30h] [xbp-90h]
  UserItemEntity_o *v37; // [xsp+50h] [xbp-70h] BYREF
  CombineSkillEntity_o *entity; // [xsp+58h] [xbp-68h] BYREF

  if ( (byte_4C3BB6A & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_CombineSkillMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1C32C20(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C3BB6A = 1;
  }
  v37 = 0;
  entity = 0;
  SelfUserGame = (int64_t)UserGameMaster__getSelfUserGame(0);
  userSvtEntity = this->fields.userSvtEntity;
  v34 = SelfUserGame;
  if ( !userSvtEntity )
    goto LABEL_60;
  SelfUserGame = (int64_t)UserServantEntity__getSkillIdList(userSvtEntity, -1, -1, 1, -1, 0);
  v5 = this->fields.userSvtEntity;
  if ( !v5 )
    goto LABEL_60;
  v6 = SelfUserGame;
  SelfUserGame = (int64_t)((int64_t (__fastcall *)(struct UserServantEntity_o *__return_ptr, struct UserServantEntity_o *, const MethodInfo *))v5->klass->vtable._6_getSkillLevelList.methodPtr)(
                            v5,
                            this->fields.userSvtEntity,
                            v5->klass->vtable._6_getSkillLevelList.method);
  this->fields.isSkillLvMax = 1;
  if ( !v6 )
    goto LABEL_60;
  v7 = *(_QWORD *)(v6 + 24);
  v8 = SelfUserGame;
  if ( (int)v7 >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= (unsigned int)v7 )
        goto LABEL_61;
      if ( !v8 )
        goto LABEL_60;
      if ( v9 >= *(unsigned int *)(v8 + 24) )
        goto LABEL_61;
      v10 = *(_DWORD *)(v6 + 32 + 4 * v9);
      if ( v10 >= 1 )
      {
        v11 = *(_DWORD *)(v8 + 32 + 4 * v9);
        SelfUserGame = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !SelfUserGame )
          goto LABEL_60;
        SelfUserGame = (int64_t)DataManager__GetMasterData_object_(
                                  (DataManager_o *)SelfUserGame,
                                  (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_SkillMaster___);
        if ( !SelfUserGame )
          goto LABEL_60;
        SelfUserGame = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)SelfUserGame,
                                  v10,
                                  (const MethodInfo_3396838 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        if ( !SelfUserGame )
          goto LABEL_60;
        if ( v11 < *(_DWORD *)(SelfUserGame + 40) )
          break;
      }
      LODWORD(v7) = *(_DWORD *)(v6 + 24);
      if ( (__int64)++v9 >= (int)v7 )
        goto LABEL_19;
    }
    this->fields.isSkillLvMax = 0;
  }
LABEL_19:
  SelfUserGame = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_60;
  SelfUserGame = (int64_t)DataManager__GetMasterData_object_(
                            (DataManager_o *)SelfUserGame,
                            (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_CombineSkillMaster___);
  v12 = *(_QWORD *)(v6 + 24);
  if ( (int)v12 >= 1 )
  {
    v13 = (CombineSkillMaster_o *)SelfUserGame;
    v14 = 0;
    v15 = 0;
    v33 = v6;
    while ( v14 < (unsigned int)v12 )
    {
      if ( !v8 )
        goto LABEL_60;
      if ( v14 >= *(unsigned int *)(v8 + 24) )
        break;
      v16 = *(_DWORD *)(v6 + 4 * v14 + 32);
      if ( v16 >= 1 )
      {
        servantEntity = this->fields.servantEntity;
        if ( !servantEntity || !v13 )
          goto LABEL_60;
        SelfUserGame = CombineSkillMaster__TryGetEntity(
                         v13,
                         &entity,
                         servantEntity->fields.combineSkillId,
                         *(_DWORD *)(v8 + 4 * v14 + 32),
                         0);
        if ( (SelfUserGame & 1) != 0 )
        {
          if ( !entity )
            goto LABEL_60;
          v18 = v13;
          itemIds = entity->fields.itemIds;
          itemNums = entity->fields.itemNums;
          SelfUserGame = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !SelfUserGame )
            goto LABEL_60;
          SelfUserGame = (int64_t)DataManager__GetMasterData_object_(
                                    (DataManager_o *)SelfUserGame,
                                    (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserItemMaster___);
          if ( !itemIds )
            goto LABEL_60;
          max_length = itemIds->max_length;
          if ( max_length >= 1 )
          {
            v22 = (UserItemMaster_o *)SelfUserGame;
            v23 = 0;
            while ( 1 )
            {
              if ( v23 >= max_length )
                goto LABEL_61;
              if ( !itemNums )
                goto LABEL_60;
              v24 = v23;
              if ( v23 >= LODWORD(itemNums->max_length) )
                goto LABEL_61;
              v25 = this->fields.userSvtEntity;
              if ( !v25 )
                goto LABEL_60;
              v26 = *(_OWORD *)&v25->fields.userId.fields.fakeValue;
              v27 = itemIds->m_Items[v23];
              v28 = itemNums->m_Items[v23];
              *(_OWORD *)&v36.fields.currentCryptoKey = *(_OWORD *)&v25->fields.userId.fields.currentCryptoKey;
              *(_OWORD *)&v36.fields.fakeValue = v26;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
              v35 = v36;
              SelfUserGame = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(&v35, 0);
              if ( !v22 )
                goto LABEL_60;
              SelfUserGame = UserItemMaster__TryGetEntity(v22, &v37, SelfUserGame, v27, 0);
              if ( (SelfUserGame & 1) == 0 )
                break;
              if ( !v37 )
                goto LABEL_60;
              if ( v28 > v37->fields.num )
                break;
              max_length = itemIds->max_length;
              v23 = v24 + 1;
              if ( (int)(v24 + 1) >= max_length )
              {
                v15 = 1;
                goto LABEL_47;
              }
            }
            v15 = 0;
          }
LABEL_47:
          if ( !v34 || !entity )
            goto LABEL_60;
          v13 = v18;
          v6 = v33;
          if ( *(_QWORD *)(v34 + 96) < entity->fields.qp || (v15 & 1) == 0 )
          {
            v15 = 0;
          }
          else
          {
            SelfUserGame = (int64_t)this->fields.enableSkillUp;
            if ( !SelfUserGame )
              goto LABEL_60;
            v29 = *(_QWORD *)(SelfUserGame + 16);
            v30 = Method_System_Collections_Generic_List_int__Add__;
            ++*(_DWORD *)(SelfUserGame + 28);
            if ( !v29 )
              goto LABEL_60;
            v31 = *(int *)(SelfUserGame + 24);
            if ( (unsigned int)v31 >= *(_DWORD *)(v29 + 24) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                (System_Collections_Generic_List_int__o *)SelfUserGame,
                v16,
                *(const MethodInfo_377B798 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
            }
            else
            {
              *(_DWORD *)(SelfUserGame + 24) = v31 + 1;
              *(_DWORD *)(v29 + 4 * v31 + 32) = v16;
            }
            v15 = 1;
          }
        }
      }
      LODWORD(v12) = *(_DWORD *)(v6 + 24);
      if ( (__int64)++v14 >= (int)v12 )
        goto LABEL_58;
    }
LABEL_61:
    sub_1C32E84(SelfUserGame);
  }
LABEL_58:
  enableSkillUp = this->fields.enableSkillUp;
  if ( !enableSkillUp )
LABEL_60:
    sub_1C32E7C(SelfUserGame);
  this->fields.isSkillUpItemNum = enableSkillUp->fields._size > 0;
}


bool CombineServantListViewItem__SetSortValue(
        CombineServantListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int64_t iconLabelInfo2; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t bonusKind2; // w8
  int32_t v10; // w2
  int32_t bonusKind2Id; // w8
  struct ListViewManager_o *v12; // x8
  __int64 v13; // x11
  UnityEngine_Object_o *v14; // x21
  int32_t v15; // w8
  int32_t v16; // w8
  bool IsEnableServant; // w0
  Il2CppObject *MasterData_object; // x0
  int32_t svtId; // w22
  ServantFilterMaster_o *v20; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // kr00_16
  System_Collections_Generic_List_EventGroupEntity__o *EntitiesByGroupId; // x22
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  struct ListViewManager_o *manager; // x8
  CombineServantListViewManager_c *v26; // x9
  __int64 v27; // x10
  struct ListViewManager_o *v28; // x11
  int32_t v29; // w8
  struct UserServantEntity_o *v30; // x8
  __int128 v31; // q1
  int32_t bonusKindId; // w22
  int64_t v33; // x0
  int32_t v34; // w1
  CGThumbnailListItem_o *v35; // x0
  System_Func_object__bool__o *v36; // x23
  const MethodInfo *v37; // x2
  _BOOL4 isChoice; // w11
  _BOOL4 isLock; // w23
  _BOOL4 v40; // w21
  const MethodInfo *v41; // x1
  int64_t *p_sortValue0; // x22
  __int64 v43; // x8
  unsigned int v44; // w8
  __int64 v45; // x8
  int32_t type; // w8
  __int64 v47; // x8
  const MethodInfo *v48; // x1
  int32_t rarity; // w8
  __int64 v50; // x9
  bool v51; // zf
  int64_t v52; // x8
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v54; // q1
  struct UserServantEntity_o *v55; // x8
  IconLabelInfo_o *v56; // x20
  int32_t v57; // w21
  struct UserServantEntity_o *v58; // x8
  int32_t v59; // w8
  struct UserServantEntity_o *v60; // x8
  int64_t v61; // x20
  struct IconLabelInfo_o *v62; // x21
  int32_t v63; // w3
  IconLabelInfo_o *v64; // x0
  int32_t v65; // w2
  unsigned int v66; // w8
  IconLabelInfo_o *v67; // x20
  int64_t hp; // x20
  IconLabelInfo_o *v69; // x21
  int64_t atk; // x20
  IconLabelInfo_o *v71; // x21
  struct IconLabelInfo_o *iconLabelInfo1; // x19
  int64_t cost; // x2
  int32_t lv; // w20
  int64_t friendship; // x2
  int32_t friendshipMax; // w3
  int32_t v77; // w1
  __int64 naturalAligment; // x10
  struct ServantEntity_o *servantEntity; // x8
  __int64 collectionNo; // x10
  struct UserServantEntity_o *v81; // x8
  int32_t v82; // w21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v84; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v85; // [xsp+30h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v86; // [xsp+50h] [xbp-60h]
  int32_t tdMaxLv[2]; // [xsp+78h] [xbp-38h] BYREF

  if ( (byte_4C3BB70 & 1) == 0 )
  {
    sub_1C32C20(&Method_BasicHelper_Any_EventGroupEntity___);
    sub_1C32C20(&CombineServantListViewManager_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantFilterMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_EventGroupMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&System_Func_EventGroupEntity__bool__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventGroupEntity__get_Count__);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&TutorialFlag_TypeInfo);
    sub_1C32C20(&Method_CombineServantListViewItem___c__DisplayClass124_0__SetSortValue_b__0__);
    sub_1C32C20(&CombineServantListViewItem___c__DisplayClass124_0_TypeInfo);
    byte_4C3BB70 = 1;
  }
  *(_QWORD *)tdMaxLv = 0;
  v5 = sub_1C32E6C(CombineServantListViewItem___c__DisplayClass124_0_TypeInfo);
  CombineServantListViewItem___c__DisplayClass124_0___ctor((CombineServantListViewItem___c__DisplayClass124_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_310;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v7, v8);
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
      if ( !CombineServantListViewItem__IsMatchMaterialFilter(this, sort, v37) )
        goto LABEL_104;
      goto LABEL_78;
    }
    if ( !type )
    {
      if ( !CombineServantListViewItem__IsMatchBaseServantFilter(this, sort, v37) )
        goto LABEL_104;
LABEL_78:
      isChoice = this->fields.isChoice;
      iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo2;
      if ( this->fields.isSwapLock )
        isLock = !this->fields.isLock;
      else
        isLock = this->fields.isLock;
      if ( this->fields.isSwapChoice )
        v40 = !isChoice;
      else
        v40 = isChoice;
      if ( !iconLabelInfo2 )
        goto LABEL_310;
      IconLabelInfo__Clear((IconLabelInfo_o *)iconLabelInfo2, 0);
      this->fields.sortValue0 = 0;
      p_sortValue0 = &this->fields.sortValue0;
      this->fields.sortValue0B = 0;
      if ( !sort->fields.isSmartSort )
      {
        if ( v40 && sort->fields.isChoiceSort )
        {
          v44 = this->fields.type;
          if ( v44 <= 0xC )
          {
            if ( ((1 << v44) & 0x1FDD) != 0 )
              v45 = 10;
            else
LABEL_124:
              v45 = -10;
            *p_sortValue0 = v45;
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
            v52 = !this->fields.isParty;
LABEL_232:
            this->fields.sortValue1 = v52;
            if ( !iconLabelInfo2 )
              break;
            iconLabelInfo1 = this->fields.iconLabelInfo1;
            goto LABEL_234;
          case 1:
            userSvtEntity = this->fields.userSvtEntity;
            if ( !userSvtEntity )
              break;
            v54 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
            *(_OWORD *)&v86.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v86.fields.fakeValue = v54;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v84 = v86;
            iconLabelInfo2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(&v84, 0);
            v55 = this->fields.userSvtEntity;
            this->fields.sortValue1 = iconLabelInfo2;
            if ( !v55 )
              break;
            iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
            if ( !iconLabelInfo2 )
              break;
            IconLabelInfo__SetTime((IconLabelInfo_o *)iconLabelInfo2, 49, v55->fields.createdAt, 0, 0, 0, 0);
            goto LABEL_227;
          case 2:
            iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
            this->fields.sortValue1 = this->fields.rarity;
            if ( !iconLabelInfo2 )
              break;
            v56 = this->fields.iconLabelInfo1;
            v57 = *(_DWORD *)(iconLabelInfo2 + 256);
            iconLabelInfo2 = UserServantEntity__getLevelMax((UserServantEntity_o *)iconLabelInfo2, 0);
            v58 = this->fields.userSvtEntity;
            if ( !v58 || !v56 )
              break;
            IconLabelInfo__Set_40818388(v56, 2, v57, iconLabelInfo2, 0, 0, 0, v58->fields.lv, 0, 0);
            v59 = this->fields.type;
            if ( v59 != 10 && v59 != 7 )
              goto LABEL_267;
            v60 = this->fields.userSvtEntity;
            if ( !v60 )
              break;
            iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo2;
            if ( !iconLabelInfo2 )
              break;
            IconLabelInfo__Set_40818388(
              (IconLabelInfo_o *)iconLabelInfo2,
              36,
              this->fields.rarity,
              v60->fields.exceedCount,
              0,
              0,
              0,
              v60->fields.lv,
              this->fields.actualRarity,
              0);
            goto LABEL_267;
          case 3:
            iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
            if ( !iconLabelInfo2 )
              break;
            v61 = *(int *)(iconLabelInfo2 + 256);
            v62 = this->fields.iconLabelInfo1;
            this->fields.sortValue1 = v61;
            iconLabelInfo2 = UserServantEntity__getLevelMax((UserServantEntity_o *)iconLabelInfo2, 0);
            if ( !v62 )
              break;
            v63 = iconLabelInfo2;
            v64 = v62;
            v65 = v61;
            goto LABEL_237;
          case 4:
            iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
            if ( !iconLabelInfo2 )
              break;
            v66 = this->fields.type & 0xFFFFFFFE;
            this->fields.sortValue1 = *(int *)(iconLabelInfo2 + 292);
            if ( v66 == 4 )
            {
              v67 = this->fields.iconLabelInfo1;
            }
            else
            {
              UserServantEntity__getTreasureDeviceInfo_43075456(
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
              v77 = 33;
LABEL_254:
              IconLabelInfo__Set_40818388(
                (IconLabelInfo_o *)iconLabelInfo2,
                v77,
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
              v67 = this->fields.iconLabelInfo2;
            }
            v82 = *(_DWORD *)(iconLabelInfo2 + 256);
            iconLabelInfo2 = UserServantEntity__getLevelMax((UserServantEntity_o *)iconLabelInfo2, 0);
            if ( v67 )
            {
              IconLabelInfo__Set_40818388(v67, 2, v82, iconLabelInfo2, 0, 0, 0, 0, 0, 0);
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
            v69 = this->fields.iconLabelInfo1;
            iconLabelInfo2 = UserServantEntity__get_HpBoostValue((UserServantEntity_o *)iconLabelInfo2, 0);
            if ( !v69 )
              break;
            IconLabelInfo__Set_40818388(v69, 3, hp, iconLabelInfo2, 0, 0, 0, 0, 0, 0);
            goto LABEL_227;
          case 6:
            atk = this->fields.atk;
            iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
            this->fields.sortValue1 = atk;
            if ( !iconLabelInfo2 )
              break;
            v71 = this->fields.iconLabelInfo1;
            iconLabelInfo2 = UserServantEntity__get_AtkBoostValue((UserServantEntity_o *)iconLabelInfo2, 0);
            if ( !v71 )
              break;
            IconLabelInfo__Set_40818388(v71, 5, atk, iconLabelInfo2, 0, 0, 0, 0, 0, 0);
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
            IconLabelInfo__Set_40818388((IconLabelInfo_o *)iconLabelInfo2, 7, cost, 0, 0, 0, 0, 0, 0, 0);
            goto LABEL_255;
          case 8:
            iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
            v52 = -this->fields.priority;
            goto LABEL_232;
          case 0xA:
            friendship = this->fields.friendship;
            iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
            this->fields.sortValue1 = friendship;
            if ( !iconLabelInfo2 )
              break;
            friendshipMax = this->fields.friendshipMax;
            v77 = 32;
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
                               0);
            this->fields.amountSortValue = iconLabelInfo2;
LABEL_245:
            servantEntity = this->fields.servantEntity;
            if ( !servantEntity )
              break;
            collectionNo = servantEntity->fields.collectionNo;
            v81 = this->fields.userSvtEntity;
            this->fields.sortValue1 = (((unsigned __int64)(unsigned int)this->fields.rarity << 32)
                                     + (iconLabelInfo2 << 48))
                                    | collectionNo;
            if ( !v81 )
              break;
            iconLabelInfo1 = this->fields.iconLabelInfo1;
            lv = v81->fields.lv;
            iconLabelInfo2 = (int64_t)v81;
LABEL_235:
            iconLabelInfo2 = UserServantEntity__getLevelMax((UserServantEntity_o *)iconLabelInfo2, 0);
            if ( !iconLabelInfo1 )
              break;
            v63 = iconLabelInfo2;
            v64 = iconLabelInfo1;
            v65 = lv;
LABEL_237:
            IconLabelInfo__Set_40818388(v64, 2, v65, v63, 0, 0, 0, 0, 0, 0);
            goto LABEL_267;
          case 0xF:
            friendship = this->fields.hpReinforceValue;
            iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
            this->fields.isDispHpStatusUpInfo = 1;
            this->fields.sortValue1 = friendship;
            if ( !iconLabelInfo2 )
              break;
            friendshipMax = this->fields.nowMaxHpReinforceValue;
            v77 = 44;
            goto LABEL_254;
          case 0x10:
            friendship = this->fields.atkReinforceValue;
            iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
            this->fields.isDispAtkStatusUpInfo = 1;
            this->fields.sortValue1 = friendship;
            if ( !iconLabelInfo2 )
              break;
            friendshipMax = this->fields.nowMaxAtkReinforceValue;
            v77 = 45;
            goto LABEL_254;
          default:
            return iconLabelInfo2;
        }
LABEL_310:
        sub_1C32E7C(iconLabelInfo2);
      }
      switch ( this->fields.type )
      {
        case 0:
          if ( this->fields.isHeroineSvt )
          {
            if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
            if ( TutorialFlag__Get_40328320(126, 0) )
              goto LABEL_166;
          }
          if ( this->fields.isParty )
          {
            v43 = 20;
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
              v47 = -120;
            }
            else
            {
              v47 = -5;
              if ( !isLock && !v40 )
                v47 = 30;
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
                  v47 = -90;
                  if ( !this->fields.isAtkSecondUpMax && this->fields.isAtkUpMax )
                    v47 = 90;
                  goto LABEL_296;
                }
                v50 = 70;
                v51 = !this->fields.isAtkUpMax;
                v47 = -110;
              }
              else
              {
                if ( rarity >= 4 )
                {
                  v47 = -80;
                  if ( !this->fields.isHpSecondUpMax && this->fields.isHpUpMax )
                    v47 = 100;
                  goto LABEL_296;
                }
                v50 = 80;
                v51 = !this->fields.isHpUpMax;
                v47 = -100;
              }
              if ( v51 )
                v47 = v50;
LABEL_296:
              *p_sortValue0 = v47;
              if ( isLock || v40 )
                v47 = -5;
              goto LABEL_298;
            }
            v47 = -150;
          }
          else
          {
            if ( !CombineServantListViewItem__get_IsCanNotSelectMaterial(this, v48) )
            {
LABEL_299:
              if ( this->fields.isFortification )
                *p_sortValue0 = -10;
              if ( v40 && sort->fields.isChoiceSort )
                *(_OWORD *)p_sortValue0 = xmmword_C0C420;
              goto LABEL_198;
            }
            if ( this->fields.isLimitCntTarget )
            {
              v47 = -20;
            }
            else if ( this->fields.isParty )
            {
              v47 = -30;
            }
            else if ( this->fields.isGrandSvt )
            {
              v47 = -40;
            }
            else if ( this->fields.isUseSupport )
            {
              v47 = -50;
            }
            else
            {
              v47 = -10;
              if ( this->fields.isUseRecommendSupport )
                v47 = -60;
            }
          }
LABEL_298:
          *p_sortValue0 = v47;
          goto LABEL_299;
        case 2:
          if ( this->fields.isSealCombineLimit || this->fields.isSealedLimitCount && this->fields.isLimitCntMax )
          {
            v43 = 0;
            goto LABEL_195;
          }
          if ( !CombineServantListViewItem__get_IsCanNotBaseSelect(this, v41)
            && this->fields.isLimitUpItemNum
            && this->fields.isLvMax )
          {
LABEL_194:
            v43 = 10;
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
            if ( TutorialFlag__Get_40328320(126, 0) )
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
          if ( v40 && sort->fields.isChoiceSort || this->fields.isFortification )
            goto LABEL_124;
          goto LABEL_198;
        case 6:
          if ( !CombineServantListViewItem__get_IsCanNotBaseSelect(this, v41)
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
          if ( !TutorialFlag__Get_40328320(126, 0) )
            goto LABEL_196;
          goto LABEL_166;
        case 8:
          if ( !CombineServantListViewItem__get_IsCanNotBaseSelect(this, v41)
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
          if ( !CombineServantListViewItem__get_IsCanNotBaseSelect(this, v41) )
            goto LABEL_194;
          if ( this->fields.isHeroineSvt )
            goto LABEL_191;
          if ( this->fields.isSealCombineLimit )
          {
LABEL_173:
            v43 = -15;
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
            if ( TutorialFlag__Get_40328320(126, 0) )
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
            if ( TutorialFlag__Get_40328320(126, 0) )
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
          if ( TutorialFlag__Get_40328320(126, 0) )
          {
            v43 = -40;
          }
          else
          {
LABEL_314:
            if ( this->fields.isEventJoin )
            {
              v43 = -35;
            }
            else if ( this->fields.isAppendSkillLvMax )
            {
LABEL_269:
              v43 = -30;
            }
            else if ( this->fields.isAllAppendSkillLock )
            {
LABEL_166:
              v43 = -20;
            }
            else
            {
              if ( !this->fields.isAppendSkillLvSame )
              {
LABEL_196:
                if ( v40 && sort->fields.isChoiceSort )
                  this->fields.sortValue0B = 10;
                goto LABEL_198;
              }
LABEL_191:
              v43 = -10;
            }
          }
LABEL_195:
          *p_sortValue0 = v43;
          goto LABEL_196;
        default:
          goto LABEL_198;
      }
    }
    if ( CombineServantListViewItem__IsMatchServantFilter(this, sort, v37) )
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
        iconLabelInfo2 = (int64_t)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_EventGroupMaster___);
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
              v26 = CombineServantListViewManager_TypeInfo;
              v27 = CombineServantListViewManager_TypeInfo->_2.naturalAligment;
              if ( manager->klass->_2.naturalAligment >= (unsigned int)v27 )
              {
                if ( (CombineServantListViewManager_c *)manager->klass->_2.typeHierarchy[v27 - 1] == CombineServantListViewManager_TypeInfo )
                  v28 = sort->fields.manager;
                else
                  v28 = 0;
              }
              else
              {
                v28 = 0;
              }
              *(_QWORD *)(v5 + 24) = v28;
              v35 = (CGThumbnailListItem_o *)(v5 + 24);
              if ( manager->klass->_2.naturalAligment >= (unsigned int)v27 )
              {
                if ( (CombineServantListViewManager_c *)manager->klass->_2.typeHierarchy[v27 - 1] == v26 )
                  v34 = (int)manager;
                else
                  v34 = 0;
              }
              else
              {
                v34 = 0;
              }
            }
            else
            {
              v34 = 0;
              *(_QWORD *)(v5 + 24) = 0;
              v35 = (CGThumbnailListItem_o *)(v5 + 24);
            }
            sub_1C32BC4(v35, v34, v23, v24);
            v36 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_EventGroupEntity__bool__TypeInfo);
            System_Func_object__bool____ctor(
              v36,
              (Il2CppObject *)v5,
              Method_CombineServantListViewItem___c__DisplayClass124_0__SetSortValue_b__0__,
              0);
            this->fields.isEventUpVal = BasicHelper__Any_object_(
                                          (System_Collections_Generic_List_T__o *)EntitiesByGroupId,
                                          (System_Func_T__bool__o *)v36,
                                          (const MethodInfo_30C6790 *)Method_BasicHelper_Any_EventGroupEntity___);
          }
        }
        goto LABEL_75;
      case 2:
        v12 = sort->fields.manager;
        if ( v12
          && (v13 = CombineServantListViewManager_TypeInfo->_2.naturalAligment,
              v12->klass->_2.naturalAligment >= (unsigned int)v13) )
        {
          if ( (CombineServantListViewManager_c *)v12->klass->_2.typeHierarchy[v13 - 1] == CombineServantListViewManager_TypeInfo )
            v14 = (UnityEngine_Object_o *)sort->fields.manager;
          else
            v14 = 0;
        }
        else
        {
          v14 = 0;
        }
        if ( this->fields.bonusKind == 2 )
        {
          v29 = sort->fields.bonusKind2Id;
          if ( this->fields.bonusKindId == v29 )
            goto LABEL_75;
        }
        else
        {
          v29 = sort->fields.bonusKind2Id;
        }
        this->fields.bonusKindId = v29;
        this->fields.bonusKind = 2;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        iconLabelInfo2 = UnityEngine_Object__op_Implicit(v14, 0);
        if ( (iconLabelInfo2 & 1) != 0 )
        {
          if ( !v14 )
            goto LABEL_310;
          iconLabelInfo2 = CombineServantListViewManager__IsLargeSuccessCampaignClassId(
                             (CombineServantListViewManager_o *)v14,
                             this->fields.bonusKindId,
                             this->fields.svtId,
                             0);
          v30 = this->fields.userSvtEntity;
          this->fields.isEventUpVal = iconLabelInfo2 & 1;
          if ( !v30 )
            goto LABEL_310;
          v31 = *(_OWORD *)&v30->fields.id.fields.fakeValue;
          bonusKindId = this->fields.bonusKindId;
          *(_OWORD *)&v86.fields.currentCryptoKey = *(_OWORD *)&v30->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v86.fields.fakeValue = v31;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v85 = v86;
          v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(&v85, 0);
          if ( CombineServantListViewManager__IsExchangeSvtExist(
                 (CombineServantListViewManager_o *)v14,
                 bonusKindId,
                 v33,
                 0) )
          {
            goto LABEL_76;
          }
        }
        goto LABEL_75;
      case 3:
        if ( this->fields.bonusKind == 3 )
        {
          v15 = sort->fields.bonusKind2Id;
          if ( this->fields.bonusKindId == v15 )
            goto LABEL_75;
        }
        else
        {
          v15 = sort->fields.bonusKind2Id;
        }
        this->fields.bonusKindId = v15;
        this->fields.bonusKind = 3;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        iconLabelInfo2 = (int64_t)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_EventCampaignMaster___);
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
          v10 = sort->fields.bonusKind2Id;
          if ( this->fields.bonusKindId == v10 )
            goto LABEL_75;
        }
        else
        {
          v10 = sort->fields.bonusKind2Id;
        }
        iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
        this->fields.bonusKind = bonusKind2;
        this->fields.bonusKindId = v10;
        if ( !iconLabelInfo2 )
          goto LABEL_310;
        IsEnableServant = UserServantEntity__getEventUpVal_43068196(
                            (UserServantEntity_o *)iconLabelInfo2,
                            this->fields.setupInfo,
                            v10,
                            0,
                            0);
        goto LABEL_37;
      case 7:
        if ( this->fields.bonusKind == 7 )
        {
          v16 = sort->fields.bonusKind2Id;
          if ( this->fields.bonusKindId == v16 )
          {
LABEL_75:
            if ( !this->fields.isEventUpVal )
              break;
            goto LABEL_76;
          }
        }
        else
        {
          v16 = sort->fields.bonusKind2Id;
        }
        this->fields.bonusKindId = v16;
        this->fields.bonusKind = 7;
        iconLabelInfo2 = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !iconLabelInfo2 )
          goto LABEL_310;
        MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)iconLabelInfo2,
                              (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantFilterMaster___);
        svtId = this->fields.svtId;
        v20 = (ServantFilterMaster_o *)MasterData_object;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(svtId, 0);
        iconLabelInfo2 = *(_QWORD *)&v21.fields.currentCryptoKey;
        if ( !v20 )
          goto LABEL_310;
        IsEnableServant = ServantFilterMaster__IsEnableServant(v20, v21, this->fields.bonusKindId, 0);
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

  if ( (byte_4C3BB7B & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_15230/*"UserSvt "*/);
    byte_4C3BB7B = 1;
  }
  NameText = CombineServantListViewItem__get_NameText(this, method);
  return System_String__Concat_63518544((System_String_o *)StringLiteral_15230/*"UserSvt "*/, NameText, 0);
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

  if ( (byte_4C3BB77 & 1) == 0 )
  {
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&StringLiteral_19066/*"error"*/);
    byte_4C3BB77 = 1;
  }
  servantEntity = this->fields.servantEntity;
  if ( !servantEntity )
    return (System_String_o *)StringLiteral_19066/*"error"*/;
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
  if ( (byte_4C3BB78 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C3BB78 = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


bool CombineServantListViewItem__get_IsAtkAdjustMax(CombineServantListViewItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0

  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_1C32E7C(0);
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
  bool IsUseLevelExceedItemHeroine; // w0

  if ( (byte_4C3BB79 & 1) == 0 )
  {
    sub_1C32C20(&TutorialFlag_TypeInfo);
    byte_4C3BB79 = 1;
  }
  if ( !this->fields.isHeroineSvt )
    goto LABEL_47;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_40328320(126, 0) )
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
          sub_1C32E7C(UserSvtEntity);
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

  if ( (byte_4C3BB7A & 1) == 0 )
  {
    sub_1C32C20(&TutorialFlag_TypeInfo);
    byte_4C3BB7A = 1;
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
    if ( TutorialFlag__Get_40328320(126, 0) )
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
  UserServantEntity_o *v5; // x0

  if ( this->fields.isEventJoin )
    return 1;
  if ( this->fields.isCanNotLock )
    return 1;
  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity || UserServantEntity__IsLeave(userSvtEntity, 0) )
    return 1;
  v5 = this->fields.userSvtEntity;
  if ( !v5 )
    goto LABEL_12;
  if ( UserServantEntity__IsCombineMaterial(v5, 0) )
    return 1;
  v5 = this->fields.userSvtEntity;
  if ( !v5 )
    goto LABEL_12;
  if ( UserServantEntity__IsStatusUp(v5, 0) )
    return 1;
  v5 = this->fields.userSvtEntity;
  if ( !v5 )
LABEL_12:
    sub_1C32E7C(v5);
  return UserServantEntity__IsMaterialTd(v5, 0);
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
    sub_1C32E7C(0);
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
    sub_1C32E7C(0);
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
    sub_1C32E7C(0);
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
    sub_1C32E7C(0);
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

  if ( (byte_4C3BB75 & 1) == 0 )
  {
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&StringLiteral_19066/*"error"*/);
    byte_4C3BB75 = 1;
  }
  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    return (System_String_o *)StringLiteral_19066/*"error"*/;
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
  if ( (byte_4C3BB74 & 1) == 0 )
  {
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (CombineServantListViewItem_o *)sub_1C32C20(&StringLiteral_19066/*"error"*/);
    byte_4C3BB74 = 1;
  }
  servantEntity = v2->fields.servantEntity;
  if ( !servantEntity )
    return (System_String_o *)StringLiteral_19066/*"error"*/;
  userSvtEntity = v2->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_1C32E7C(this);
  v6 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.currentCryptoKey;
  v5 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v9.fields.currentCryptoKey = v6;
  *(_QWORD *)&v9.fields.fakeValue = v5;
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v9, 0);
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

  if ( (byte_4C3BB76 & 1) == 0 )
  {
    sub_1C32C20(&LocalizationManager_TypeInfo);
    byte_4C3BB76 = 1;
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
  Il2CppObject *Entity; // x0

  if ( (byte_4C3BB7C & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_SvtCoinMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__GetEntity__);
    byte_4C3BB7C = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_SvtCoinMaster___);
  if ( !Master_object )
    sub_1C32E7C(0);
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             this->fields.svtId,
             (const MethodInfo_3396838 *)Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__GetEntity__);
  if ( Entity )
    return (int32_t)Entity[1].monitor;
  else
    return -1;
}


int32_t CombineServantListViewItem__get_SkillOpenItemNum(CombineServantListViewItem_o *this, const MethodInfo *method)
{
  int64_t Master_object; // x0
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v5; // q1
  UserSvtCoinMaster_o *v6; // x20
  struct UserServantEntity_o *v7; // x8
  int64_t v8; // x19
  __int64 v9; // x21
  __int64 v10; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v12; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v13; // [xsp+20h] [xbp-50h]
  UserSvtCoinEntity_o *entity; // [xsp+48h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_4C3BB7D & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_UserSvtCoinMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C3BB7D = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_UserSvtCoinMaster___);
  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_17;
  v5 = *(_OWORD *)&userSvtEntity->fields.userId.fields.fakeValue;
  v6 = (UserSvtCoinMaster_o *)Master_object;
  *(_OWORD *)&v13.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v13.fields.fakeValue = v5;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v12 = v13;
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(&v12, 0);
  v7 = this->fields.userSvtEntity;
  if ( !v7 )
    goto LABEL_17;
  v8 = Master_object;
  v10 = *(_QWORD *)&v7->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&v7->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v15.fields.currentCryptoKey = v10;
  *(_QWORD *)&v15.fields.fakeValue = v9;
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v15, 0);
  if ( !v6 )
    goto LABEL_17;
  Master_object = UserSvtCoinMaster__TryGetEntity(v6, &entity, v8, Master_object, 0);
  if ( (Master_object & 1) != 0 )
  {
    if ( entity )
      return entity->fields.num;
LABEL_17:
    sub_1C32E7C(Master_object);
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
  if ( (byte_4C3BB72 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C32C20(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    this = (CombineServantListViewItem_o *)sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C3BB72 = 1;
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
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(&v12, 0);
  this = (CombineServantListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (this = (CombineServantListViewItem_o *)DataManager__GetMasterData_object_(
                                                 (DataManager_o *)this,
                                                 (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0 )
  {
LABEL_9:
    sub_1C32E7C(this);
  }
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             v7,
             (const MethodInfo_3398D94 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  p_userSvtEntity->klass = (CGThumbnailListItem_c *)Entity;
  sub_1C32BC4(p_userSvtEntity, (int32_t)Entity, v9, v10);
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
  if ( (byte_4C3BB73 & 1) == 0 )
  {
    this = (CombineServantListViewItem_o *)sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C3BB73 = 1;
  }
  userSvtEntity = v2->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_1C32E7C(this);
  v4 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v7.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v7.fields.fakeValue = v4;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v6 = v7;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(&v6, 0);
}


void CombineServantListViewItem__setUserServantEntity(
        CombineServantListViewItem_o *this,
        UserServantEntity_o *entity,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.userSvtEntity = entity;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.userSvtEntity, (int32_t)entity, (int32_t)method, v3);
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
    sub_1C32E7C(0);
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
    sub_1C32E7C(0);
  this->fields.dragSelectNum = value - 1;
}


void CombineServantListViewItem__set_IsHpStatusMax(
        CombineServantListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  if ( !this )
    sub_1C32E7C(0);
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
    sub_1C32E7C(0);
  this->fields.isNotSelectSecondStatusUpAtk = this->fields.atkBase > 0 && value;
}


void CombineServantListViewItem__set_IsSecondHpStatusMax(
        CombineServantListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  if ( !this )
    sub_1C32E7C(0);
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
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields._NoticeTween_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void CombineServantListViewItem___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C3BB81 & 1) == 0 )
  {
    sub_1C32C20(&CombineServantListViewItem___c_TypeInfo);
    byte_4C3BB81 = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(CombineServantListViewItem___c_TypeInfo);
  System_Object___ctor(v1, 0);
  CombineServantListViewItem___c_TypeInfo->static_fields->__9 = (struct CombineServantListViewItem___c_o *)v1;
  sub_1C32BC4((CGThumbnailListItem_o *)CombineServantListViewItem___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1C32E7C(this);
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
  const MethodInfo *v7; // x3
  struct CombineServantListViewItem_o *_4__this; // x8
  struct CombineServantListViewItem_o *v9; // x8
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v11; // q1
  struct CombineServantListViewManager_o *v12; // x22
  int32_t eventId; // w21
  const MethodInfo *v14; // x3
  struct CombineServantListViewItem_o *v15; // x8
  struct CombineServantListViewItem_o *v16; // x8
  ServantFilterMaster_o *v17; // x21
  int32_t svtId; // w22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // kr00_16
  struct CombineServantListViewItem_o *v22; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v23; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v24; // [xsp+20h] [xbp-50h]

  if ( (byte_4C3BB82 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_ServantFilterMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C3BB82 = 1;
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
                                    v7);
  if ( (IsLargeSuccessCampaignClassId & 1) == 0 )
  {
    v9 = this->fields.__4__this;
    if ( !v9 )
      goto LABEL_34;
    userSvtEntity = v9->fields.userSvtEntity;
    if ( !userSvtEntity )
      goto LABEL_34;
    v11 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
    v12 = this->fields.manager;
    eventId = entity->fields.eventId;
    *(_OWORD *)&v24.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v24.fields.fakeValue = v11;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v23 = v24;
    IsLargeSuccessCampaignClassId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(&v23, 0);
    if ( !v12 )
      goto LABEL_34;
    if ( !CombineServantListViewManager__IsExchangeSvtExist(
            (CombineServantListViewManager_o *)IsLargeSuccessCampaignClassId,
            eventId,
            IsLargeSuccessCampaignClassId,
            v14) )
    {
LABEL_37:
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      IsLargeSuccessCampaignClassId = (int64_t)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_EventCampaignMaster___);
      v15 = this->fields.__4__this;
      if ( !v15 || !entity || !IsLargeSuccessCampaignClassId )
        goto LABEL_34;
      if ( !EventCampaignMaster__IsEnableServant(
              (EventCampaignMaster_o *)IsLargeSuccessCampaignClassId,
              v15->fields.svtId,
              entity->fields.eventId,
              0) )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        IsLargeSuccessCampaignClassId = (int64_t)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ServantFilterMaster___);
        v16 = this->fields.__4__this;
        if ( v16 )
        {
          v17 = (ServantFilterMaster_o *)IsLargeSuccessCampaignClassId;
          svtId = v16->fields.svtId;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(svtId, 0);
          IsLargeSuccessCampaignClassId = *(_QWORD *)&v19.fields.currentCryptoKey;
          if ( v17 )
          {
            IsLargeSuccessCampaignClassId = ServantFilterMaster__IsEnableServant(v17, v19, entity->fields.eventId, 0);
            if ( (IsLargeSuccessCampaignClassId & 1) != 0 )
              return 1;
            v22 = this->fields.__4__this;
            if ( v22 )
            {
              IsLargeSuccessCampaignClassId = (int64_t)v22->fields.userSvtEntity;
              if ( IsLargeSuccessCampaignClassId )
                return UserServantEntity__getEventUpVal_43068196(
                         (UserServantEntity_o *)IsLargeSuccessCampaignClassId,
                         v22->fields.setupInfo,
                         entity->fields.eventId,
                         0,
                         0);
            }
          }
        }
LABEL_34:
        sub_1C32E7C(IsLargeSuccessCampaignClassId);
      }
    }
  }
  return 1;
}