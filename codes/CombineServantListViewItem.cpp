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
  IconLabelInfo_o *v16; // x20
  System_Collections_Generic_List_int__o *v17; // x20
  System_Collections_Generic_List_int__o *v18; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_userSvtEntity; // x23
  int64_t Master_object; // x0
  const MethodInfo *v21; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v22; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v23; // x24
  __int64 v24; // x20
  __int64 v25; // x25
  Il2CppObject *v26; // x0
  __int128 v27; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c **v28; // x22
  UserServantCollectionMaster_o *v29; // x24
  int64_t v30; // x27
  UserServantCollectionEntity_o *EntityDefinitely; // x26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v32; // x8
  UserServantEntity_o *v33; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // q0
  int64_t v35; // x0
  __int128 v36; // q1
  bool v37; // w8
  __int64 v38; // x20
  __int64 v39; // x24
  struct ServantEntity_o *servantEntity; // x8
  BalanceConfig_c *v41; // x0
  int32_t adjustHp; // w20
  struct BalanceConfig_StaticFields *static_fields; // x8
  const MethodInfo *v44; // x2
  const MethodInfo *v45; // x1
  const MethodInfo *v46; // x1
  int64_t UserSvtId; // x0
  unsigned int v48; // w8
  __int64 v49; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x29
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v52; // x9
  int32_t *p_offset; // x10
  __int64 v54; // x0
  System_Collections_Generic_IEnumerator_T__c *v55; // x8
  __int64 v56; // x9
  int32_t *v57; // x10
  __int64 v58; // x0
  __int64 v59; // x0
  __int64 v60; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v61; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v62; // q0
  __int64 v63; // x24
  System_Collections_Generic_IEnumerator_T__c *v64; // x8
  __int64 v65; // x9
  int32_t *v66; // x10
  __int64 v67; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v68; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v69; // q0
  UserRecommendSupportMaster_o *v70; // x24
  Il2CppObject *v71; // x0
  __int128 v72; // q1
  UserServantGrandMaster_o *v73; // x24
  UserServantEntity_o *v74; // x8
  Il2CppObject *MasterData_object; // x24
  struct ServantEntity_o *v76; // x8
  __int64 v77; // x20
  __int64 v78; // x21
  int64_t v79; // x29
  Il2CppObject *v80; // x24
  struct ServantEntity_o *v81; // x8
  __int64 v82; // x20
  __int64 v83; // x21
  int64_t v84; // x29
  struct System_Int32_array *commandCardParam; // x20
  int max_length; // w8
  __int64 v87; // x21
  int32_t v88; // w26
  bool v89; // w29
  __int64 v90; // x1
  System_Collections_Generic_IEnumerator_T__o *v91; // x28
  System_Collections_Generic_IEnumerator_T__c *v92; // x8
  __int64 v93; // x9
  int32_t *v94; // x10
  __int64 v95; // x0
  System_Collections_Generic_IEnumerator_T__c *v96; // x8
  __int64 v97; // x9
  int32_t *v98; // x10
  __int64 v99; // x0
  __int64 v100; // x0
  __int64 v101; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v102; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v103; // q0
  __int64 v104; // x24
  System_Collections_Generic_IEnumerator_T__c *v105; // x8
  __int64 v106; // x9
  int32_t *v107; // x10
  __int64 v108; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v109; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v110; // q0
  UserRecommendSupportMaster_o *v111; // x24
  Il2CppObject *v112; // x0
  __int128 v113; // q1
  UserServantGrandMaster_o *v114; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v115; // x8
  __int64 v116; // x20
  __int64 v117; // x21
  int32_t v118; // w20
  int32_t SvtClassId; // w0
  int32_t SvtClassGroupType; // w24
  int32_t materialExp; // w20
  BalanceConfig_c *v122; // x0
  int SameClassExp; // w21
  double v124; // d0
  int32_t v125; // w8
  UserServantEntity_o *v126; // x8
  ServantLimitMaster_o *v127; // x24
  __int64 v128; // x20
  __int64 v129; // x21
  int32_t v130; // w28
  int32_t v131; // w8
  int32_t v132; // w24
  bool v133; // w8
  bool v134; // w8
  bool v135; // w8
  bool v136; // w8
  Il2CppObject *v137; // x24
  struct ServantEntity_o *v138; // x8
  __int64 v139; // x20
  __int64 v140; // x21
  int64_t v141; // x28
  int32_t v142; // w8
  Il2CppObject *v143; // x0
  __int64 v144; // x20
  __int64 v145; // x21
  ServantLimitImageMaster_o *v146; // x24
  int32_t v147; // w28
  UserServantEntity_o *v148; // x8
  const MethodInfo *v149; // x1
  _BOOL4 isHeroineSvt; // w8
  UserServantEntity_o *v151; // x9
  int32_t combineLimitId; // w24
  __int64 v153; // x20
  __int64 v154; // x21
  int32_t v155; // w28
  int64_t v156; // x24
  __int64 v157; // x20
  __int64 v158; // x21
  __int64 v159; // x8
  UserItemMaster_o *v160; // x28
  unsigned __int64 v161; // x27
  UserServantEntity_o *v162; // x8
  __int128 v163; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c *v164; // x0
  int32_t v165; // w29
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c **v166; // x26
  int32_t v167; // w22
  UserServantEntity_o *v168; // x8
  UserServantEntity_o *v169; // x8
  const MethodInfo *v170; // x1
  int32_t v171; // w8
  __int64 v172; // x1
  System_Collections_Generic_IEnumerator_T__o *v173; // x28
  System_Collections_Generic_IEnumerator_T__c *v174; // x8
  __int64 v175; // x9
  int32_t *v176; // x10
  __int64 v177; // x0
  System_Collections_Generic_IEnumerator_T__c *v178; // x8
  __int64 v179; // x9
  int32_t *v180; // x10
  __int64 v181; // x0
  __int64 v182; // x0
  __int64 v183; // x1
  UserServantEntity_o *v184; // x8
  __int128 v185; // q0
  __int128 v186; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c *v187; // x8
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
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c *v202; // x0
  Il2CppObject *v203; // x0
  __int128 v204; // q1
  UserServantGrandMaster_o *v205; // x24
  bool v206; // w8
  bool IsMaterialTd; // w0
  UserServantEntity_o *v208; // x8
  UserServantEntity_o *v209; // x8
  bool isLevelMax; // w0
  _BOOL4 v211; // w8
  ServantExceedEntity_o *SvtExceedEnt; // x0
  int32_t *v213; // x27
  CommonConsumeEntity_array *IdEntityList; // x0
  CommonConsumeEntity_array *v215; // x29
  System_Collections_Generic_HashSet_int__o *v216; // x24
  System_Collections_Generic_HashSet_int__o *v217; // x28
  int v218; // w8
  __int64 v219; // x20
  CommonConsumeEntity_o *v220; // x26
  UserServantEntity_o *v221; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v222; // x29
  __int64 v223; // x20
  __int64 v224; // x21
  UserServantEntity_o *v225; // x29
  System_Int32_array *v226; // x24
  __int64 v227; // x20
  __int64 v228; // x24
  struct ServantEntity_o *v229; // x8
  bool v230; // zf
  UserServantEntity_o *v231; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  int64_t v234; // x8
  struct ServantEntity_o *v235; // x9
  UserServantEntity_o *v236; // x8
  unsigned __int64 v237; // x9
  _BOOL8 v238; // x10
  __int64 v239; // x20
  __int64 v240; // x21
  struct UserServantEntity_o *v241; // x8
  __int128 v242; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c *v243; // x0
  int64_t v244; // x8
  int32_t maxFriendshipRank; // w20
  int32_t friendshipExceedCount; // w21
  UserServantEntity_o *v247; // x24
  __int64 v248; // x20
  __int64 v249; // x21
  UserItemMaster_o *v250; // x24
  unsigned __int64 v251; // x27
  __int64 v252; // x29
  bool v253; // w8
  bool v254; // w26
  int32_t v255; // w0
  int32_t v256; // w24
  int32_t v257; // w29
  int32_t v258; // w28
  int v259; // w21
  TreasureDvcLvEntity_o *v260; // x0
  int64_t v261; // [xsp+18h] [xbp-2D8h]
  bool *p_isLimitUpItemNum; // [xsp+20h] [xbp-2D0h]
  bool *p_isStatusUpSvt; // [xsp+28h] [xbp-2C8h]
  struct IconLabelInfo_o **p_iconLabelInfo2; // [xsp+30h] [xbp-2C0h]
  UserServantCollectionEntity_o *v265; // [xsp+38h] [xbp-2B8h]
  bool v267; // [xsp+40h] [xbp-2B0h]
  struct ServantEntity_o **p_servantEntity; // [xsp+50h] [xbp-2A0h]
  UserServantEntity_o *v272; // [xsp+58h] [xbp-298h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v273; // [xsp+60h] [xbp-290h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v274; // [xsp+80h] [xbp-270h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v275; // [xsp+A0h] [xbp-250h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v276; // [xsp+C0h] [xbp-230h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v277; // [xsp+E0h] [xbp-210h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v278; // [xsp+100h] [xbp-1F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v279; // [xsp+120h] [xbp-1D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v280; // [xsp+140h] [xbp-1B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v281; // [xsp+160h] [xbp-190h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v282; // [xsp+180h] [xbp-170h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v283; // [xsp+1A0h] [xbp-150h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v284; // [xsp+1C0h] [xbp-130h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v285; // [xsp+1E0h] [xbp-110h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v286; // [xsp+200h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v287; // [xsp+220h] [xbp-D0h]
  UserItemEntity_o *v288; // [xsp+248h] [xbp-A8h] BYREF
  int32_t tdMaxLv; // [xsp+254h] [xbp-9Ch] BYREF
  int32_t tdLv[2]; // [xsp+258h] [xbp-98h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+260h] [xbp-90h] BYREF
  UserItemEntity_o *v292; // [xsp+268h] [xbp-88h] BYREF
  __int64 v293; // [xsp+270h] [xbp-80h] BYREF
  UserServantCommandCodeEntity_o *v294; // [xsp+278h] [xbp-78h] BYREF
  UserServantCommandCardEntity_o *v295; // [xsp+280h] [xbp-70h] BYREF
  UserServantCommandCodeEntity_o *entity; // [xsp+288h] [xbp-68h] BYREF
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
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v307; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v308; // 0:x0.16

  v14 = isParty;
  if ( (byte_4D2666F & 1) == 0 )
  {
    sub_1C94098(&BalanceConfig_TypeInfo);
    sub_1C94098(&Method_System_Collections_ObjectModel_Collection_UserServantLeaderEntity__GetEnumerator__);
    sub_1C94098(&Method_DataManager_GetMasterData_CombineLimitMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_CombineMaterialMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_FriendshipMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_TreasureDvcMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_UserServantCommandCardMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_UserServantLeaderMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_CommonConsumeMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_ServantLimitMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_SvtCoinMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_UserRecommendSupportMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_UserServantGrandMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C94098(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_1C94098(&Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__GetEntity__);
    sub_1C94098(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
    sub_1C94098(&Method_DataMasterBase_UserServantLeaderMaster__UserServantLeaderEntity__string__getEntityList__);
    sub_1C94098(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C94098(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1C94098(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1C94098(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1C94098(&System_IDisposable_TypeInfo);
    sub_1C94098(&System_Collections_Generic_IEnumerator_UserServantLeaderEntity__TypeInfo);
    sub_1C94098(&System_Collections_IEnumerator_TypeInfo);
    sub_1C94098(&IconLabelInfo_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C94098(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C94098(&System_Math_TypeInfo);
    sub_1C94098(&NetworkManager_TypeInfo);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2666F = 1;
  }
  entity = 0;
  v295 = 0;
  v294 = 0;
  v293 = 0;
  v292 = 0;
  tdInfo = 0;
  *(_QWORD *)tdLv = 0;
  tdMaxLv = 0;
  v288 = 0;
  v15 = (IconLabelInfo_o *)sub_1C942E4(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v15, 0);
  this->fields.iconLabelInfo1 = v15;
  sub_1C9403C(&this->fields.iconLabelInfo1, v15);
  v16 = (IconLabelInfo_o *)sub_1C942E4(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v16, 0);
  this->fields.iconLabelInfo2 = v16;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  sub_1C9403C(&this->fields.iconLabelInfo2, v16);
  v17 = (System_Collections_Generic_List_int__o *)sub_1C942E4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v17,
    (const MethodInfo_384D5BC *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.enableSkillUp = v17;
  sub_1C9403C(&this->fields.enableSkillUp, v17);
  v18 = (System_Collections_Generic_List_int__o *)sub_1C942E4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v18,
    (const MethodInfo_384D5BC *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.enableAppendSkillUp = v18;
  sub_1C9403C(&this->fields.enableAppendSkillUp, v18);
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
  sub_1C9403C(&this->fields.setupInfo, setupInfo);
  this->fields.userSvtEntity = userSvtEntity;
  p_userSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userSvtEntity;
  this->fields.isParty = v14;
  sub_1C9403C(&this->fields.userSvtEntity, userSvtEntity);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_ServantMaster___);
  v22 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_450;
  v23 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  v24 = *(_QWORD *)&v22[5].fields.currentCryptoKey;
  v25 = *(_QWORD *)&v22[5].fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v297.fields.currentCryptoKey = v24;
  *(_QWORD *)&v297.fields.fakeValue = v25;
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v297, 0);
  if ( !v23 )
    goto LABEL_450;
  v26 = DataMasterBase_object__object__int___GetEntity(
          v23,
          Master_object,
          (const MethodInfo_345B4C0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)v26;
  p_servantEntity = &this->fields.servantEntity;
  sub_1C9403C(&this->fields.servantEntity, v26);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !userSvtEntity )
    goto LABEL_450;
  v27 = *(_OWORD *)&userSvtEntity->fields.userId.fields.fakeValue;
  v28 = &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo;
  v29 = (UserServantCollectionMaster_o *)Master_object;
  *(_OWORD *)&v287.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v287.fields.fakeValue = v27;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v286 = v287;
  v30 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49625068(&v286, 0);
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(userSvtEntity->fields.svtId, 0);
  if ( !v29 )
    goto LABEL_450;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v29, v30, Master_object, 0);
  Master_object = (int64_t)UserGameMaster__getSelfUserGame(0);
  v261 = Master_object;
  if ( baseUsrSvtData )
  {
    v32 = *p_userSvtEntity;
    v33 = userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_450;
    v34 = v32[2];
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v287.fields.currentCryptoKey = v32[1];
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v287.fields.fakeValue = v34;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v285 = v287;
    v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49625068(&v285, 0);
    v36 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
    *(_OWORD *)&v284.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v284.fields.fakeValue = v36;
    v37 = v35 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49625068(&v284, 0);
  }
  else
  {
    v33 = userSvtEntity;
    v37 = 0;
  }
  this->fields.isBaseSvt = v37;
  v38 = *(_QWORD *)&v33->fields.svtId.fields.currentCryptoKey;
  v39 = *(_QWORD *)&v33->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v298.fields.currentCryptoKey = v38;
  *(_QWORD *)&v298.fields.fakeValue = v39;
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v298, 0);
  servantEntity = this->fields.servantEntity;
  this->fields.svtId = Master_object;
  if ( !servantEntity )
    goto LABEL_450;
  this->fields.classId = servantEntity->fields.classId;
  this->fields.isHeroineSvt = UserServantEntity__IsHeroine(v33, 0);
  Master_object = UserServantEntity__IsEventJoin(v33, 0);
  this->fields.isEventJoin = Master_object & 1;
  if ( !EntityDefinitely )
    goto LABEL_450;
  UserServantCollectionEntity__getFriendShipRankInfo(
    EntityDefinitely,
    &this->fields.friendship,
    &this->fields.friendshipMax,
    0);
  this->fields.maxLimitCnt = UserServantEntity__getLimitCntMax(v33, 0);
  this->fields.currentLimitCnt = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(
                                   v33->fields.limitCount,
                                   0);
  v41 = BalanceConfig_TypeInfo;
  adjustHp = v33->fields.adjustHp;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v41 = BalanceConfig_TypeInfo;
  }
  static_fields = v41->static_fields;
  v265 = EntityDefinitely;
  this->fields.hpReinforceValue = static_fields->StatusUpAdjustHp * adjustHp;
  this->fields.atkReinforceValue = static_fields->StatusUpAdjustAtk * v33->fields.adjustAtk;
  UserServantEntity__getAdjustMaxData(
    v33,
    &this->fields.nowMaxHpReinforceValue,
    &this->fields.nowMaxAtkReinforceValue,
    0);
  CombineServantListViewItem__ModifyItem(this, isFavorite, v44);
  CombineServantListViewItem__SetOverwriteStatus(this, v45);
  UserSvtId = CombineServantListViewItem__get_UserSvtId(this, v46);
  EventFortificationDataLogic__SetFortification(
    &this->fields.isFortification,
    &this->fields.fortificationName,
    &this->fields.fortificationDetailName,
    UserSvtId,
    0);
  v48 = this->fields.type;
  if ( v48 <= 0xA && ((1 << v48) & 0x481) != 0 )
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
    Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Master_object )
      goto LABEL_450;
    Master_object = (int64_t)DataManager__GetMasterData_object_(
                               (DataManager_o *)Master_object,
                               (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_UserServantLeaderMaster___);
    if ( !Master_object )
      goto LABEL_450;
    Master_object = *(_QWORD *)(Master_object + 40);
    if ( !Master_object )
      goto LABEL_450;
    Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                   (System_Collections_ObjectModel_Collection_T__o *)Master_object,
                   (const MethodInfo_33F413C *)Method_System_Collections_ObjectModel_Collection_UserServantLeaderEntity__GetEnumerator__);
    if ( !Enumerator )
      sub_1C942F0(0, v49);
    while ( 1 )
    {
      klass = Enumerator->klass;
      v52 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
      if ( *(_WORD *)&Enumerator->klass->_2.rank )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v52;
          p_offset += 4;
          if ( !v52 )
            goto LABEL_46;
        }
        v54 = (__int64)&klass->vtable[*p_offset];
      }
      else
      {
LABEL_46:
        v54 = sub_1C6A420(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v54)(
              Enumerator,
              *(_QWORD *)(v54 + 8))
          & 1) == 0 )
        break;
      v55 = Enumerator->klass;
      v56 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
      if ( *(_WORD *)&Enumerator->klass->_2.rank )
      {
        v57 = &v55->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerator_UserServantLeaderEntity__c **)v57 - 1) != System_Collections_Generic_IEnumerator_UserServantLeaderEntity__TypeInfo )
        {
          --v56;
          v57 += 4;
          if ( !v56 )
            goto LABEL_53;
        }
        v58 = (__int64)&v55->vtable[*v57];
      }
      else
      {
LABEL_53:
        v58 = sub_1C6A420(Enumerator, System_Collections_Generic_IEnumerator_UserServantLeaderEntity__TypeInfo, 0);
      }
      v59 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v58)(
              Enumerator,
              *(_QWORD *)(v58 + 8));
      if ( !v59 )
        sub_1C942F0(0, v60);
      v61 = *p_userSvtEntity;
      if ( !*p_userSvtEntity )
        sub_1C942F0(v59, v60);
      v62 = v61[2];
      v63 = *(_QWORD *)(v59 + 56);
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v287.fields.currentCryptoKey = v61[1];
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v287.fields.fakeValue = v62;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v283 = v287;
      if ( v63 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49625068(&v283, 0) )
      {
        this->fields.isUseSupport = 1;
        break;
      }
    }
    v64 = Enumerator->klass;
    v65 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v66 = &v64->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v66 - 1) != System_IDisposable_TypeInfo )
      {
        --v65;
        v66 += 4;
        if ( !v65 )
          goto LABEL_65;
      }
      v67 = (__int64)&v64->vtable[*v66];
    }
    else
    {
LABEL_65:
      v67 = sub_1C6A420(Enumerator, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v67)(
      Enumerator,
      *(_QWORD *)(v67 + 8));
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_UserRecommendSupportMaster___);
    v68 = *p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_450;
    v69 = v68[2];
    v70 = (UserRecommendSupportMaster_o *)Master_object;
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v287.fields.currentCryptoKey = v68[1];
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v287.fields.fakeValue = v69;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v282 = v287;
    Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49625068(&v282, 0);
    if ( !v70 )
      goto LABEL_450;
    this->fields.isUseRecommendSupport = UserRecommendSupportMaster__IsSettingServant(v70, Master_object, 0, 0);
    v71 = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_UserServantGrandMaster___);
    v72 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
    v73 = (UserServantGrandMaster_o *)v71;
    *(_OWORD *)&v281.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v281.fields.fakeValue = v72;
    Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49625068(&v281, 0);
    if ( !v73 )
      goto LABEL_450;
    Master_object = UserServantGrandMaster__IsSettingServant(v73, Master_object, 0);
    v74 = this->fields.userSvtEntity;
    this->fields.isGrandSvt = Master_object & 1;
    if ( !v74 )
      goto LABEL_450;
    if ( UserServantEntity__IsCombineExp(v74, 0) )
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
    Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Master_object )
      goto LABEL_450;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Master_object,
                          (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4D2633A )
    {
      sub_1C94098(&NetworkManager_TypeInfo);
      byte_4D2633A = 1;
    }
    Master_object = (int64_t)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Master_object = (int64_t)NetworkManager_TypeInfo;
    }
    v76 = *p_servantEntity;
    if ( !*p_servantEntity )
      goto LABEL_450;
    v78 = *(_QWORD *)&v76->fields.id.fields.currentCryptoKey;
    v77 = *(_QWORD *)&v76->fields.id.fields.fakeValue;
    v79 = *(_QWORD *)(*(_QWORD *)(Master_object + 184) + 64LL);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v299.fields.currentCryptoKey = v78;
    *(_QWORD *)&v299.fields.fakeValue = v77;
    Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v299, 0);
    if ( !MasterData_object )
      goto LABEL_450;
    if ( UserServantCommandCodeMaster__TryGetEntity(
           (UserServantCommandCodeMaster_o *)MasterData_object,
           &entity,
           v79,
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
    v48 = this->fields.type;
    if ( v48 == 10 )
    {
      Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Master_object )
        goto LABEL_450;
      v80 = DataManager__GetMasterData_object_(
              (DataManager_o *)Master_object,
              (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_UserServantCommandCardMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4D2633A )
      {
        sub_1C94098(&NetworkManager_TypeInfo);
        byte_4D2633A = 1;
      }
      Master_object = (int64_t)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Master_object = (int64_t)NetworkManager_TypeInfo;
      }
      v81 = *p_servantEntity;
      if ( !*p_servantEntity )
        goto LABEL_450;
      v83 = *(_QWORD *)&v81->fields.id.fields.currentCryptoKey;
      v82 = *(_QWORD *)&v81->fields.id.fields.fakeValue;
      v84 = *(_QWORD *)(*(_QWORD *)(Master_object + 184) + 64LL);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v300.fields.currentCryptoKey = v83;
      *(_QWORD *)&v300.fields.fakeValue = v82;
      Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v300, 0);
      if ( !v80 )
        goto LABEL_450;
      Master_object = UserServantCommandCardMaster__TryGetEntity(
                        (UserServantCommandCardMaster_o *)v80,
                        &v295,
                        v84,
                        (int)Master_object,
                        0);
      if ( (Master_object & 1) != 0 )
      {
        if ( !v295 )
          goto LABEL_450;
        commandCardParam = v295->fields.commandCardParam;
        if ( commandCardParam )
        {
          max_length = commandCardParam->max_length;
          if ( max_length >= 1 )
          {
            v87 = 0;
            while ( 1 )
            {
              if ( (unsigned int)v87 >= max_length )
                goto LABEL_457;
              Master_object = (int64_t)BalanceConfig_TypeInfo;
              v88 = commandCardParam->m_Items[v87];
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                Master_object = (int64_t)BalanceConfig_TypeInfo;
              }
              if ( v88 < *(_DWORD *)(*(_QWORD *)(Master_object + 184) + 772LL) )
                break;
              this->fields.isCommandCardExceedMax = 1;
              max_length = commandCardParam->max_length;
              if ( (int)++v87 >= max_length )
                goto LABEL_122;
            }
            this->fields.isCommandCardExceedMax = 0;
          }
        }
      }
LABEL_122:
      v48 = this->fields.type;
    }
  }
  v89 = isMtSvt;
  if ( v48 == 1 )
  {
    this->fields.isMaterialSvt = v89;
    Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Master_object )
      goto LABEL_450;
    Master_object = (int64_t)DataManager__GetMasterData_object_(
                               (DataManager_o *)Master_object,
                               (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_UserServantLeaderMaster___);
    if ( !Master_object )
      goto LABEL_450;
    Master_object = *(_QWORD *)(Master_object + 40);
    if ( !Master_object )
      goto LABEL_450;
    v91 = System_Collections_ObjectModel_Collection_object___GetEnumerator(
            (System_Collections_ObjectModel_Collection_T__o *)Master_object,
            (const MethodInfo_33F413C *)Method_System_Collections_ObjectModel_Collection_UserServantLeaderEntity__GetEnumerator__);
    if ( !v91 )
      sub_1C942F0(0, v90);
    while ( 1 )
    {
      v92 = v91->klass;
      v93 = *(unsigned __int16 *)&v91->klass->_2.rank;
      if ( *(_WORD *)&v91->klass->_2.rank )
      {
        v94 = &v92->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)v94 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v93;
          v94 += 4;
          if ( !v93 )
            goto LABEL_132;
        }
        v95 = (__int64)&v92->vtable[*v94];
      }
      else
      {
LABEL_132:
        v95 = sub_1C6A420(v91, System_Collections_IEnumerator_TypeInfo, 0);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v95)(
              v91,
              *(_QWORD *)(v95 + 8))
          & 1) == 0 )
        break;
      v96 = v91->klass;
      v97 = *(unsigned __int16 *)&v91->klass->_2.rank;
      if ( *(_WORD *)&v91->klass->_2.rank )
      {
        v98 = &v96->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerator_UserServantLeaderEntity__c **)v98 - 1) != System_Collections_Generic_IEnumerator_UserServantLeaderEntity__TypeInfo )
        {
          --v97;
          v98 += 4;
          if ( !v97 )
            goto LABEL_139;
        }
        v99 = (__int64)&v96->vtable[*v98];
      }
      else
      {
LABEL_139:
        v99 = sub_1C6A420(v91, System_Collections_Generic_IEnumerator_UserServantLeaderEntity__TypeInfo, 0);
      }
      v100 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v99)(
               v91,
               *(_QWORD *)(v99 + 8));
      if ( !v100 )
        sub_1C942F0(0, v101);
      v102 = *p_userSvtEntity;
      if ( !*p_userSvtEntity )
        sub_1C942F0(v100, v101);
      v103 = v102[2];
      v104 = *(_QWORD *)(v100 + 56);
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v287.fields.currentCryptoKey = v102[1];
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v287.fields.fakeValue = v103;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v280 = v287;
      if ( v104 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49625068(&v280, 0) )
      {
        this->fields.isUseSupport = 1;
        break;
      }
    }
    v105 = v91->klass;
    v106 = *(unsigned __int16 *)&v91->klass->_2.rank;
    if ( *(_WORD *)&v91->klass->_2.rank )
    {
      v107 = &v105->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v107 - 1) != System_IDisposable_TypeInfo )
      {
        --v106;
        v107 += 4;
        if ( !v106 )
          goto LABEL_151;
      }
      v108 = (__int64)&v105->vtable[*v107];
    }
    else
    {
LABEL_151:
      v108 = sub_1C6A420(v91, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v108)(v91, *(_QWORD *)(v108 + 8));
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_UserRecommendSupportMaster___);
    v109 = *p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_450;
    v110 = v109[2];
    v111 = (UserRecommendSupportMaster_o *)Master_object;
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v287.fields.currentCryptoKey = v109[1];
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v287.fields.fakeValue = v110;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v279 = v287;
    Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49625068(&v279, 0);
    if ( !v111 )
      goto LABEL_450;
    this->fields.isUseRecommendSupport = UserRecommendSupportMaster__IsSettingServant(v111, Master_object, 0, 0);
    v112 = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_UserServantGrandMaster___);
    v113 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
    v114 = (UserServantGrandMaster_o *)v112;
    *(_OWORD *)&v278.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v278.fields.fakeValue = v113;
    Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49625068(&v278, 0);
    if ( !v114 )
      goto LABEL_450;
    this->fields.isGrandSvt = UserServantGrandMaster__IsSettingServant(v114, Master_object, 0);
    Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Master_object )
      goto LABEL_450;
    Master_object = (int64_t)DataManager__GetMasterData_object_(
                               (DataManager_o *)Master_object,
                               (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_CombineMaterialMaster___);
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
      v115 = *p_userSvtEntity;
      if ( !*p_userSvtEntity )
        goto LABEL_450;
      v117 = *(_QWORD *)&v115[5].fields.currentCryptoKey;
      v116 = *(_QWORD *)&v115[5].fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v301.fields.currentCryptoKey = v117;
      *(_QWORD *)&v301.fields.fakeValue = v116;
      v118 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v301, 0);
      if ( v118 == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(baseUsrSvtData->fields.svtId, 0) )
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
      Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Master_object )
        goto LABEL_450;
      Master_object = (int64_t)DataManager__GetMasterData_object_(
                                 (DataManager_o *)Master_object,
                                 (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_ServantClassMaster___);
      if ( !*p_servantEntity )
        goto LABEL_450;
      if ( !Master_object )
        goto LABEL_450;
      Master_object = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                 (*p_servantEntity)->fields.classId,
                                 (const MethodInfo_345B4C0 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
      if ( !Master_object )
        goto LABEL_450;
      HIDWORD(v293) = *(_DWORD *)(Master_object + 56);
      SvtClassId = UserServantEntity__getSvtClassId(baseUsrSvtData, 0, 0, 0);
      SvtClassGroupType = UserServantEntity__getSvtClassGroupType(baseUsrSvtData, SvtClassId, 0);
      if ( System_Int32__Equals_65926068((int32_t)&v293 + 4, 3, 0)
        || System_Int32__Equals_65926068((int32_t)&v293 + 4, SvtClassGroupType, 0) && this->fields.isSameClass )
      {
        materialExp = this->fields.materialExp;
        v122 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v122 = BalanceConfig_TypeInfo;
        }
        SameClassExp = v122->static_fields->SameClassExp;
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        v124 = (double)materialExp * (double)SameClassExp / 1000.0;
        v125 = vcvtpd_s64_f64(v124);
        if ( ceil(v124) == INFINITY )
          v125 = 0x80000000;
        this->fields.materialExp = v125;
      }
    }
    else
    {
      this->fields.isLimitCntTarget = 0;
    }
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_ServantLimitMaster___);
    v126 = (UserServantEntity_o *)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_450;
    v127 = (ServantLimitMaster_o *)Master_object;
    v129 = *(_QWORD *)&v126->fields.svtId.fields.currentCryptoKey;
    v128 = *(_QWORD *)&v126->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v302.fields.currentCryptoKey = v129;
    *(_QWORD *)&v302.fields.fakeValue = v128;
    Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v302, 0);
    if ( !*p_userSvtEntity )
      goto LABEL_450;
    v130 = Master_object;
    Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544((*p_userSvtEntity)[6], 0);
    if ( !v127 )
      goto LABEL_450;
    Master_object = (int64_t)ServantLimitMaster__GetEntity(v127, v130, Master_object, 0);
    if ( !Master_object )
      goto LABEL_450;
    this->fields.hpBase = *(_DWORD *)(Master_object + 36);
    v131 = *(_DWORD *)(Master_object + 44);
    Master_object = (int64_t)this->fields.servantEntity;
    this->fields.atkBase = v131;
    if ( !Master_object )
      goto LABEL_450;
    Master_object = ServantEntity__get_IsStatusUp((ServantEntity_o *)Master_object, 0);
    if ( (Master_object & 1) != 0 )
    {
      *p_isStatusUpSvt = 1;
      if ( !baseUsrSvtData )
        goto LABEL_450;
      v132 = UserServantEntity__getSvtClassId(baseUsrSvtData, 0, 0, 0);
      Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Master_object )
        goto LABEL_450;
      Master_object = (int64_t)DataManager__GetMasterData_object_(
                                 (DataManager_o *)Master_object,
                                 (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_ServantClassMaster___);
      if ( !*p_servantEntity )
        goto LABEL_450;
      if ( !Master_object )
        goto LABEL_450;
      Master_object = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                 (*p_servantEntity)->fields.classId,
                                 (const MethodInfo_345B4C0 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
      if ( !Master_object )
        goto LABEL_450;
      LODWORD(v293) = *(_DWORD *)(Master_object + 56);
      if ( !*p_servantEntity )
        goto LABEL_450;
      if ( (*p_servantEntity)->fields.classId == v132 || System_Int32__Equals_65926068((int32_t)&v293, 3, 0) )
      {
        this->fields.isCanStUp = 1;
        v133 = UserServantEntity__isAdjustAtkMax(baseUsrSvtData, 0) && this->fields.atkBase > 0;
        this->fields.isAtkUpMax = v133;
        v134 = UserServantEntity__isAdjustHpMax(baseUsrSvtData, 0) && this->fields.hpBase > 0;
        this->fields.isHpUpMax = v134;
        v135 = UserServantEntity__isSecondAdjustAtkMax(baseUsrSvtData, 0) && this->fields.atkBase > 0;
        this->fields.isAtkSecondUpMax = v135;
        v136 = UserServantEntity__isSecondAdjustHpMax(baseUsrSvtData, 0) && this->fields.hpBase > 0;
        this->fields.isHpSecondUpMax = v136;
      }
    }
    Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Master_object )
      goto LABEL_450;
    v137 = DataManager__GetMasterData_object_(
             (DataManager_o *)Master_object,
             (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4D2633A )
    {
      sub_1C94098(&NetworkManager_TypeInfo);
      byte_4D2633A = 1;
    }
    Master_object = (int64_t)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Master_object = (int64_t)NetworkManager_TypeInfo;
    }
    v138 = *p_servantEntity;
    if ( !*p_servantEntity )
      goto LABEL_450;
    v140 = *(_QWORD *)&v138->fields.id.fields.currentCryptoKey;
    v139 = *(_QWORD *)&v138->fields.id.fields.fakeValue;
    v141 = *(_QWORD *)(*(_QWORD *)(Master_object + 184) + 64LL);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v303.fields.currentCryptoKey = v140;
    *(_QWORD *)&v303.fields.fakeValue = v139;
    Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v303, 0);
    if ( !v137 )
LABEL_450:
      sub_1C942F0(Master_object, v21);
    if ( UserServantCommandCodeMaster__TryGetEntity(
           (UserServantCommandCodeMaster_o *)v137,
           &v294,
           v141,
           (int)Master_object,
           0) )
    {
      Master_object = (int64_t)v294;
      if ( !v294 )
        goto LABEL_450;
      this->fields.isEquipedCmdCard = UserServantCommandCodeEntity__IsEquipedCommandCode(v294, 0);
      Master_object = (int64_t)v294;
      if ( !v294 )
        goto LABEL_450;
      this->fields.isCmdCardSlotOpen = UserServantCommandCodeEntity__IsCommandCardSlotOpen(v294, 0);
    }
  }
  v142 = this->fields.type;
  if ( v142 == 9 )
  {
    Master_object = UserServantEntity__isLimitCountMax(userSvtEntity, 0);
    v168 = this->fields.userSvtEntity;
    this->fields.isLimitCntMax = Master_object & 1;
    if ( v168 )
    {
      Master_object = UserServantEntity__isLevelMax(v168, 0);
      v169 = this->fields.userSvtEntity;
      this->fields.isLvMax = Master_object & 1;
      if ( v169 )
      {
        this->fields.isIgnoreCombineLimitSpecial = UserServantEntity__IsIgnoreCombineLimitSpecial(v169, 0);
        this->fields.isSealCombineLimit = CombineServantListViewItem__GetSealCombineLimit(this, v170);
        goto LABEL_279;
      }
    }
    goto LABEL_450;
  }
  if ( v142 != 2 )
    goto LABEL_280;
  v267 = isMtSvt;
  this->fields.isLimitCntMax = UserServantEntity__isLimitCountMax(userSvtEntity, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v143 = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  v145 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v144 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  v146 = (ServantLimitImageMaster_o *)v143;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v304.fields.currentCryptoKey = v145;
  *(_QWORD *)&v304.fields.fakeValue = v144;
  v147 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v304, 0);
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(
                    userSvtEntity->fields.limitCount,
                    0);
  if ( !v146 )
    goto LABEL_450;
  Master_object = ServantLimitImageMaster__IsServantLimitCountSeal(v146, v147, Master_object, 0);
  v148 = this->fields.userSvtEntity;
  this->fields.isSealedLimitCount = Master_object & 1;
  if ( !v148 )
    goto LABEL_450;
  this->fields.isLvMax = UserServantEntity__isLevelMax(v148, 0);
  Master_object = CombineServantListViewItem__GetSealCombineLimit(this, v149);
  isHeroineSvt = this->fields.isHeroineSvt;
  this->fields.isSealCombineLimit = Master_object & 1;
  if ( isHeroineSvt )
    goto LABEL_279;
  if ( !*p_servantEntity )
    goto LABEL_450;
  v151 = (UserServantEntity_o *)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_450;
  combineLimitId = (*p_servantEntity)->fields.combineLimitId;
  v154 = *(_QWORD *)&v151->fields.limitCount.fields.currentCryptoKey;
  v153 = *(_QWORD *)&v151->fields.limitCount.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v305.fields.currentCryptoKey = v154;
  *(_QWORD *)&v305.fields.fakeValue = v153;
  v155 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v305, 0);
  Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_450;
  Master_object = (int64_t)DataManager__GetMasterData_object_(
                             (DataManager_o *)Master_object,
                             (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_CombineLimitMaster___);
  if ( !Master_object )
    goto LABEL_450;
  Master_object = (int64_t)CombineLimitMaster__GetEntity((CombineLimitMaster_o *)Master_object, combineLimitId, v155, 0);
  if ( !Master_object )
    goto LABEL_450;
  v156 = Master_object;
  v158 = *(_QWORD *)(Master_object + 32);
  v157 = *(_QWORD *)(Master_object + 40);
  Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_450;
  Master_object = (int64_t)DataManager__GetMasterData_object_(
                             (DataManager_o *)Master_object,
                             (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !v157 )
    goto LABEL_450;
  v159 = *(_QWORD *)(v157 + 24);
  if ( (int)v159 < 1 )
    goto LABEL_436;
  v160 = (UserItemMaster_o *)Master_object;
  v161 = 0;
  while ( 1 )
  {
    if ( v161 >= (unsigned int)v159 )
      goto LABEL_457;
    if ( !v158 )
      goto LABEL_450;
    if ( v161 >= *(unsigned int *)(v158 + 24) )
      goto LABEL_457;
    v162 = (UserServantEntity_o *)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_450;
    v163 = *(_OWORD *)&v162->fields.userId.fields.fakeValue;
    v164 = *v28;
    v165 = *(_DWORD *)(v157 + 32 + 4 * v161);
    v166 = v28;
    v167 = *(_DWORD *)(v158 + 32 + 4 * v161);
    *(_OWORD *)&v287.fields.currentCryptoKey = *(_OWORD *)&v162->fields.userId.fields.currentCryptoKey;
    *(_OWORD *)&v287.fields.fakeValue = v163;
    if ( !v164->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v164);
    v277 = v287;
    Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49625068(&v277, 0);
    if ( !v160 )
      goto LABEL_450;
    Master_object = UserItemMaster__TryGetEntity(v160, &v292, Master_object, v165, 0);
    if ( (Master_object & 1) == 0 )
      goto LABEL_435;
    if ( !v292 )
      goto LABEL_450;
    if ( v165 == v292->fields.itemId )
      break;
LABEL_274:
    LODWORD(v159) = *(_DWORD *)(v157 + 24);
    ++v161;
    v28 = v166;
    if ( (__int64)v161 >= (int)v159 )
      goto LABEL_436;
  }
  if ( v167 <= v292->fields.num )
  {
    *p_isLimitUpItemNum = 1;
    goto LABEL_274;
  }
LABEL_435:
  v28 = v166;
  *p_isLimitUpItemNum = 0;
LABEL_436:
  if ( !v261 )
    goto LABEL_450;
  v89 = v267;
  if ( *(_QWORD *)(v261 + 96) < *(int *)(v156 + 24) )
    *p_isLimitUpItemNum = 0;
LABEL_279:
  v142 = this->fields.type;
LABEL_280:
  if ( v142 == 3 )
  {
    CombineServantListViewItem__SetSkillInfo(this, v21);
    v142 = this->fields.type;
  }
  if ( (unsigned int)(v142 - 11) <= 1 )
  {
    CombineServantListViewItem__SetAppendSkillInfo(this, v21);
    v142 = this->fields.type;
  }
  if ( v142 == 4 && !this->fields.isHeroineSvt )
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
          Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Master_object )
            goto LABEL_450;
          Master_object = (int64_t)DataManager__GetMasterData_object_(
                                     (DataManager_o *)Master_object,
                                     (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
          if ( !Master_object )
            goto LABEL_450;
          Master_object = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                     id,
                                     (const MethodInfo_345B4C0 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
          if ( !Master_object )
            goto LABEL_450;
          if ( lv < *(_DWORD *)(Master_object + 48) )
            this->fields.isTdLvMax = 0;
        }
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_UserServantMaster___);
        if ( Master_object )
        {
          SameSvtNpLvCache = UserServantMaster__getSameSvtNpLvCache(
                               (UserServantMaster_o *)Master_object,
                               (UserServantEntity_o *)*p_userSvtEntity,
                               &cachedUserServantNpLvDict,
                               0);
          if ( SameSvtNpLvCache < 1 || this->fields.isTdLvMax )
            goto LABEL_286;
          v197 = SameSvtNpLvCache;
          Master_object = CombineServantListViewItem__GetNpInfo(this, &tdLv[1], tdLv, &tdMaxLv, v196);
          if ( v261 )
          {
            v198 = *(_QWORD *)(v261 + 96);
            if ( v198 > 1200000 )
            {
              this->fields.isSameSvt = 1;
              goto LABEL_286;
            }
            Master_object = (int64_t)*p_userSvtEntity;
            if ( *p_userSvtEntity )
            {
              v254 = v89;
              v255 = UserServantEntity__checkTreasureDeviceLevelUp((UserServantEntity_o *)Master_object, v197, 0);
              v256 = tdLv[0];
              if ( tdLv[0] >= v255 )
              {
                v259 = 0;
LABEL_449:
                this->fields.isSameSvt = v198 >= v259;
                v89 = v254;
                goto LABEL_286;
              }
              v257 = tdLv[1];
              v258 = v255;
              v259 = 0;
              while ( 1 )
              {
                Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( !Master_object )
                  break;
                Master_object = (int64_t)DataManager__GetMasterData_object_(
                                           (DataManager_o *)Master_object,
                                           (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
                if ( !Master_object )
                  break;
                v260 = TreasureDvcLvMaster__GetEntity((TreasureDvcLvMaster_o *)Master_object, v257, v256, 0);
                if ( v260 )
                  v259 += v260->fields.qp;
                if ( v258 == ++v256 )
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
  v171 = this->fields.type;
  if ( v171 != 5 )
    goto LABEL_344;
  this->fields.isMaterialSvt = v89;
  Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_450;
  Master_object = (int64_t)DataManager__GetMasterData_object_(
                             (DataManager_o *)Master_object,
                             (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_UserServantLeaderMaster___);
  if ( !Master_object )
    goto LABEL_450;
  Master_object = *(_QWORD *)(Master_object + 40);
  if ( !Master_object )
    goto LABEL_450;
  v173 = System_Collections_ObjectModel_Collection_object___GetEnumerator(
           (System_Collections_ObjectModel_Collection_T__o *)Master_object,
           (const MethodInfo_33F413C *)Method_System_Collections_ObjectModel_Collection_UserServantLeaderEntity__GetEnumerator__);
  if ( !v173 )
    sub_1C942F0(0, v172);
  while ( 1 )
  {
    v174 = v173->klass;
    v175 = *(unsigned __int16 *)&v173->klass->_2.rank;
    if ( *(_WORD *)&v173->klass->_2.rank )
    {
      v176 = &v174->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)v176 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v175;
        v176 += 4;
        if ( !v175 )
          goto LABEL_295;
      }
      v177 = (__int64)&v174->vtable[*v176];
    }
    else
    {
LABEL_295:
      v177 = sub_1C6A420(v173, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v177)(
            v173,
            *(_QWORD *)(v177 + 8))
        & 1) == 0 )
      break;
    v178 = v173->klass;
    v179 = *(unsigned __int16 *)&v173->klass->_2.rank;
    if ( *(_WORD *)&v173->klass->_2.rank )
    {
      v180 = &v178->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_UserServantLeaderEntity__c **)v180 - 1) != System_Collections_Generic_IEnumerator_UserServantLeaderEntity__TypeInfo )
      {
        --v179;
        v180 += 4;
        if ( !v179 )
          goto LABEL_302;
      }
      v181 = (__int64)&v178->vtable[*v180];
    }
    else
    {
LABEL_302:
      v181 = sub_1C6A420(v173, System_Collections_Generic_IEnumerator_UserServantLeaderEntity__TypeInfo, 0);
    }
    v182 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v181)(
             v173,
             *(_QWORD *)(v181 + 8));
    if ( !v182 )
      sub_1C942F0(0, v183);
    v184 = (UserServantEntity_o *)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      sub_1C942F0(v182, v183);
    v186 = *(_OWORD *)&v184->fields.id.fields.currentCryptoKey;
    v185 = *(_OWORD *)&v184->fields.id.fields.fakeValue;
    v187 = *v28;
    v188 = *(_QWORD *)(v182 + 56);
    *(_OWORD *)&v287.fields.currentCryptoKey = v186;
    *(_OWORD *)&v287.fields.fakeValue = v185;
    if ( !v187->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v187);
    v276 = v287;
    if ( v188 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49625068(&v276, 0) )
    {
      this->fields.isUseSupport = 1;
      break;
    }
  }
  v189 = v173->klass;
  v190 = *(unsigned __int16 *)&v173->klass->_2.rank;
  if ( *(_WORD *)&v173->klass->_2.rank )
  {
    v191 = &v189->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v191 - 1) != System_IDisposable_TypeInfo )
    {
      --v190;
      v191 += 4;
      if ( !v190 )
        goto LABEL_314;
    }
    v192 = (__int64)&v189->vtable[*v191];
  }
  else
  {
LABEL_314:
    v192 = sub_1C6A420(v173, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v192)(v173, *(_QWORD *)(v192 + 8));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_UserRecommendSupportMaster___);
  v199 = (UserServantEntity_o *)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_450;
  v200 = *(_OWORD *)&v199->fields.id.fields.fakeValue;
  v201 = (UserRecommendSupportMaster_o *)Master_object;
  v202 = *v28;
  *(_OWORD *)&v287.fields.currentCryptoKey = *(_OWORD *)&v199->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v287.fields.fakeValue = v200;
  if ( !v202->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v202);
  v275 = v287;
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49625068(&v275, 0);
  if ( !v201 )
    goto LABEL_450;
  this->fields.isUseRecommendSupport = UserRecommendSupportMaster__IsSettingServant(v201, Master_object, 0, 0);
  v203 = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_UserServantGrandMaster___);
  v204 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  v205 = (UserServantGrandMaster_o *)v203;
  *(_OWORD *)&v274.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v274.fields.fakeValue = v204;
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49625068(&v274, 0);
  if ( !v205 )
    goto LABEL_450;
  this->fields.isGrandSvt = UserServantGrandMaster__IsSettingServant(v205, Master_object, 0);
  v206 = baseUsrSvtData && UserServantEntity__IsEventJoin(baseUsrSvtData, 0);
  Master_object = (int64_t)this->fields.userSvtEntity;
  this->fields.isEventJoinBaseSvt = v206;
  if ( !Master_object )
    goto LABEL_450;
  IsMaterialTd = UserServantEntity__IsMaterialTd((UserServantEntity_o *)Master_object, 0);
  v171 = this->fields.type;
  this->fields.isMaterialTdSvt = IsMaterialTd;
LABEL_344:
  if ( v171 == 6 )
  {
    Master_object = (int64_t)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_450;
    Master_object = UserServantEntity__isExceedLvMax((UserServantEntity_o *)Master_object, 0);
    v208 = this->fields.userSvtEntity;
    this->fields.isLvExceedMax = Master_object & 1;
    if ( !v208 )
      goto LABEL_450;
    Master_object = UserServantEntity__isLimitCountMax(v208, 0);
    v209 = this->fields.userSvtEntity;
    this->fields.isLimitCntMax = Master_object & 1;
    if ( !v209 )
      goto LABEL_450;
    isLevelMax = UserServantEntity__isLevelMax(v209, 0);
    v211 = this->fields.isHeroineSvt;
    this->fields.isLvMax = isLevelMax;
    if ( !v211 || UserServantEntity__IsUseLevelExceedItemHeroine(userSvtEntity, 0) )
    {
      Master_object = (int64_t)*p_userSvtEntity;
      if ( !*p_userSvtEntity )
        goto LABEL_450;
      SvtExceedEnt = UserServantEntity__getSvtExceedEnt((UserServantEntity_o *)Master_object, 0);
      if ( SvtExceedEnt )
      {
        v213 = (int32_t *)SvtExceedEnt;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_CommonConsumeMaster___);
        if ( !Master_object )
          goto LABEL_450;
        IdEntityList = CommonConsumeMaster__GetIdEntityList((CommonConsumeMaster_o *)Master_object, v213[12], 0);
        if ( IdEntityList )
        {
          v215 = IdEntityList;
          v216 = (System_Collections_Generic_HashSet_int__o *)sub_1C942E4(System_Collections_Generic_HashSet_int__TypeInfo);
          System_Collections_Generic_HashSet_int____ctor(
            v216,
            (const MethodInfo_3718384 *)Method_System_Collections_Generic_HashSet_int___ctor__);
          v217 = (System_Collections_Generic_HashSet_int__o *)sub_1C942E4(System_Collections_Generic_HashSet_int__TypeInfo);
          System_Collections_Generic_HashSet_int____ctor(
            v217,
            (const MethodInfo_3718384 *)Method_System_Collections_Generic_HashSet_int___ctor__);
          v218 = v215->max_length;
          if ( v218 >= 1 )
          {
            v219 = 0;
            while ( (unsigned int)v219 < v218 )
            {
              v220 = v215->m_Items[v219];
              if ( !v220 )
                goto LABEL_450;
              if ( !v216 )
                goto LABEL_450;
              Master_object = System_Collections_Generic_HashSet_int___Add(
                                v216,
                                v220->fields.objectId,
                                (const MethodInfo_3719588 *)Method_System_Collections_Generic_HashSet_int__Add__);
              if ( !v217 )
                goto LABEL_450;
              Master_object = System_Collections_Generic_HashSet_int___Add(
                                v217,
                                v220->fields.num,
                                (const MethodInfo_3719588 *)Method_System_Collections_Generic_HashSet_int__Add__);
              v218 = v215->max_length;
              if ( (int)++v219 >= v218 )
                goto LABEL_363;
            }
LABEL_457:
            sub_1C942F8(Master_object);
          }
LABEL_363:
          v28 = &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo;
          if ( v213[13] >= 1 )
          {
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_SvtCoinMaster___);
            v221 = (UserServantEntity_o *)*p_userSvtEntity;
            if ( *p_userSvtEntity )
            {
              v222 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
              v224 = *(_QWORD *)&v221->fields.svtId.fields.currentCryptoKey;
              v223 = *(_QWORD *)&v221->fields.svtId.fields.fakeValue;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v306.fields.currentCryptoKey = v224;
              *(_QWORD *)&v306.fields.fakeValue = v223;
              Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v306, 0);
              if ( v222 )
              {
                Master_object = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                           v222,
                                           Master_object,
                                           (const MethodInfo_345B4C0 *)Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__GetEntity__);
                if ( Master_object )
                {
                  if ( v216 )
                  {
                    Master_object = System_Collections_Generic_HashSet_int___Add(
                                      v216,
                                      *(_DWORD *)(Master_object + 24),
                                      (const MethodInfo_3719588 *)Method_System_Collections_Generic_HashSet_int__Add__);
                    if ( v217 )
                    {
                      System_Collections_Generic_HashSet_int___Add(
                        v217,
                        v213[13],
                        (const MethodInfo_3719588 *)Method_System_Collections_Generic_HashSet_int__Add__);
                      goto LABEL_374;
                    }
                  }
                }
              }
            }
            goto LABEL_450;
          }
LABEL_374:
          v225 = (UserServantEntity_o *)*p_userSvtEntity;
          v226 = System_Linq_Enumerable__ToArray_int_(
                   (System_Collections_Generic_IEnumerable_TSource__o *)v216,
                   (const MethodInfo_31DC714 *)Method_System_Linq_Enumerable_ToArray_int___);
          Master_object = (int64_t)System_Linq_Enumerable__ToArray_int_(
                                     (System_Collections_Generic_IEnumerable_TSource__o *)v217,
                                     (const MethodInfo_31DC714 *)Method_System_Linq_Enumerable_ToArray_int___);
          if ( !v261 )
            goto LABEL_450;
          this->fields.isLvExceedItemNum = CombineUtility__CheckCombineNeedItemsEnough(
                                             v225,
                                             v226,
                                             (System_Int32_array *)Master_object,
                                             *(_QWORD *)(v261 + 96),
                                             v213[8],
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
    v227 = *(_QWORD *)&v265->fields.friendshipRank.fields.currentCryptoKey;
    v228 = *(_QWORD *)&v265->fields.friendshipRank.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v307.fields.currentCryptoKey = v227;
    *(_QWORD *)&v307.fields.fakeValue = v228;
    Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v307, 0);
    v229 = *p_servantEntity;
    if ( !*p_servantEntity )
      goto LABEL_450;
    v230 = (_DWORD)Master_object == v265->fields.friendshipExceedCount + v229->fields.maxFriendshipRank;
    this->fields.isFriendshipRankMax = v230;
    if ( v230 && !this->fields.isFriendshipExceedMax )
    {
      if ( this->fields.isHeroineSvt )
      {
        Master_object = UserServantEntity__IsUseFriendshipExceedItemHeroine(userSvtEntity, 0);
        if ( (Master_object & 1) == 0 )
          goto LABEL_384;
        v229 = *p_servantEntity;
        if ( !*p_servantEntity )
          goto LABEL_450;
      }
      maxFriendshipRank = v229->fields.maxFriendshipRank;
      friendshipExceedCount = v265->fields.friendshipExceedCount;
      Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Master_object )
        goto LABEL_450;
      Master_object = (int64_t)DataManager__GetMasterData_object_(
                                 (DataManager_o *)Master_object,
                                 (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_FriendshipMaster___);
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
      v247 = (UserServantEntity_o *)Master_object;
      v249 = *(_QWORD *)(Master_object + 32);
      v248 = *(_QWORD *)(Master_object + 40);
      Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Master_object )
        goto LABEL_450;
      v272 = v247;
      Master_object = (int64_t)DataManager__GetMasterData_object_(
                                 (DataManager_o *)Master_object,
                                 (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_UserItemMaster___);
      if ( !v248 )
        goto LABEL_450;
      if ( *(int *)(v248 + 24) < 1 )
      {
LABEL_432:
        if ( !v261 )
          goto LABEL_450;
        if ( *(_QWORD *)(v261 + 96) < SHIDWORD(v272->fields.id.fields.hiddenValue) )
          this->fields.isFriendshipExceedItemNum = 0;
        goto LABEL_384;
      }
      v250 = (UserItemMaster_o *)Master_object;
      v251 = 0;
      v252 = v248 + 32;
      while ( 1 )
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4D2633A )
        {
          sub_1C94098(&NetworkManager_TypeInfo);
          byte_4D2633A = 1;
        }
        Master_object = (int64_t)NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          Master_object = (int64_t)NetworkManager_TypeInfo;
        }
        if ( v251 >= *(unsigned int *)(v248 + 24) )
          goto LABEL_457;
        if ( !v250 )
          goto LABEL_450;
        Master_object = UserItemMaster__TryGetEntity(
                          v250,
                          &v288,
                          *(_QWORD *)(*(_QWORD *)(Master_object + 184) + 64LL),
                          *(_DWORD *)(v252 + 4 * v251),
                          0);
        if ( (Master_object & 1) == 0 )
          break;
        if ( v251 >= *(unsigned int *)(v248 + 24) )
          goto LABEL_457;
        if ( !v288 )
          goto LABEL_450;
        if ( *(_DWORD *)(v252 + 4 * v251) == v288->fields.itemId )
        {
          if ( !v249 )
            goto LABEL_450;
          if ( v251 >= *(unsigned int *)(v249 + 24) )
            goto LABEL_457;
          v253 = *(_DWORD *)(v249 + 32 + 4 * v251) <= v288->fields.num;
          goto LABEL_430;
        }
LABEL_431:
        if ( (__int64)++v251 >= *(int *)(v248 + 24) )
          goto LABEL_432;
      }
      v253 = 0;
LABEL_430:
      this->fields.isFriendshipExceedItemNum = v253;
      goto LABEL_431;
    }
  }
LABEL_384:
  Master_object = (int64_t)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_450;
  Master_object = UserServantEntity__getDispLimitCount((UserServantEntity_o *)Master_object, 0, 0);
  v231 = this->fields.userSvtEntity;
  this->fields.dispLimitCount = Master_object;
  if ( !v231 )
    goto LABEL_450;
  SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v231, -1, -1, 0);
  this->fields.skillCategoryIdList = SkillCategoryIdList;
  sub_1C9403C(&this->fields.skillCategoryIdList, SkillCategoryIdList);
  Master_object = (int64_t)this->fields.userSvtEntity;
  if ( !Master_object )
    goto LABEL_450;
  TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                   (UserServantEntity_o *)Master_object,
                                   0,
                                   -1,
                                   0);
  this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
  sub_1C9403C(&this->fields.tdCategoryIdList, TreasureDeviceCategoryIdList);
  Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_450;
  Master_object = (int64_t)DataManager__GetMasterData_object_(
                             (DataManager_o *)Master_object,
                             (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Master_object )
    goto LABEL_450;
  Master_object = (int64_t)DataMasterBase_object__object__int___GetEntity(
                             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                             this->fields.classId,
                             (const MethodInfo_345B4C0 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !Master_object )
    goto LABEL_450;
  v234 = *(int *)(Master_object + 52);
  v235 = this->fields.servantEntity;
  this->fields.priority = v234;
  this->fields.sortValue1B = v234;
  if ( !v235 )
    goto LABEL_450;
  v236 = (UserServantEntity_o *)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_450;
  v237 = ((__int64)v235->fields.collectionNo << 16)
       | ((unsigned __int64)(unsigned int)this->fields.rarity << 48)
       | v236->fields.lv;
  v238 = type == 2 && !this->fields.isLimitCntMax;
  this->fields.sortValue2 = v237 | v238;
  v240 = *(_QWORD *)&v236->fields.svtId.fields.currentCryptoKey;
  v239 = *(_QWORD *)&v236->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v308.fields.currentCryptoKey = v240;
  *(_QWORD *)&v308.fields.fakeValue = v239;
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v308, 0);
  v241 = this->fields.userSvtEntity;
  this->fields.sortValue2B = (int)Master_object;
  if ( !v241 )
    goto LABEL_450;
  v242 = *(_OWORD *)&v241->fields.id.fields.fakeValue;
  v243 = *v28;
  *(_OWORD *)&v287.fields.currentCryptoKey = *(_OWORD *)&v241->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v287.fields.fakeValue = v242;
  if ( !v243->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v243);
  v273 = v287;
  v244 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49625068(&v273, 0);
  Master_object = (int64_t)this->fields.iconLabelInfo1;
  this->fields.sortValueLast = v244;
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

  if ( (byte_4D26685 & 1) == 0 )
  {
    sub_1C94098(&SvtUseSkillData_TypeInfo);
    byte_4D26685 = 1;
  }
  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
    return UserServantEntity__getAppendSkillInfo(userSvtEntity, 0);
  v5 = (SvtUseSkillData_o *)sub_1C942E4(SvtUseSkillData_TypeInfo);
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
      sub_1C942F0(TreasureDeviceInfo, v10);
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

  if ( (byte_4D26686 & 1) == 0 )
  {
    sub_1C94098(&CondType_TypeInfo);
    sub_1C94098(&Method_DataManager_GetMaster_CombineLimitReleaseMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    byte_4D26686 = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_CombineLimitReleaseMaster___);
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
    sub_1C942F0(Master_object, v4);
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

  if ( (byte_4D26684 & 1) == 0 )
  {
    sub_1C94098(&BalanceConfig_TypeInfo);
    sub_1C94098(&SkillInfo___TypeInfo);
    byte_4D26684 = 1;
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
    v7 = (SkillInfo_array *)sub_1C94140(SkillInfo___TypeInfo, (unsigned int)v6->static_fields->SvtSkillListMax);
    *skillInfoList = v7;
    sub_1C9403C(skillInfoList, v7);
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
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  _BOOL4 IsUnSelectedAllTargetFilters; // w21
  _BOOL4 v26; // w23
  _BOOL4 IsMatchEffectCategory; // w22
  _BOOL4 v28; // w0

  if ( (byte_4D26674 & 1) == 0 )
  {
    sub_1C94098(&FilterKindList_TypeInfo);
    sub_1C94098(&ListViewSort_FilterKind___TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    sub_1C94098(&ServantEventBonusFilterController_TypeInfo);
    byte_4D26674 = 1;
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
                                        (const MethodInfo_38520F4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                            (const MethodInfo_38520F4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                           (const MethodInfo_38520F4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                           (const MethodInfo_38520F4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                           (const MethodInfo_38520F4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
        sub_1C9403C(&this->fields.skillCategoryIdList, SkillCategoryIdList);
        ClassGroupFilterKindList = (__int64)this->fields.userSvtEntity;
        if ( !ClassGroupFilterKindList )
          goto LABEL_69;
        TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                         (UserServantEntity_o *)ClassGroupFilterKindList,
                                         0,
                                         -1,
                                         0);
        this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
        sub_1C9403C(&this->fields.tdCategoryIdList, TreasureDeviceCategoryIdList);
      }
    }
    ClassGroupFilterKindList = sub_1C94140(ListViewSort_FilterKind___TypeInfo, 1);
    if ( !ClassGroupFilterKindList )
      goto LABEL_69;
    if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
      goto LABEL_70;
    *(_DWORD *)(ClassGroupFilterKindList + 32) = 50;
    IsUnSelectedAllTargetFilters = ListViewSort__IsUnSelectedAllTargetFilters(
                                     sort,
                                     (ListViewSort_FilterKind_array *)ClassGroupFilterKindList,
                                     0);
    ClassGroupFilterKindList = sub_1C94140(ListViewSort_FilterKind___TypeInfo, 1);
    if ( !ClassGroupFilterKindList )
      goto LABEL_69;
    if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
LABEL_70:
      sub_1C942F8(ClassGroupFilterKindList);
    *(_DWORD *)(ClassGroupFilterKindList + 32) = 51;
    v26 = ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0);
    IsMatchEffectCategory = ServantEquipEffectFilterController__IsMatchEffectCategory(
                              this->fields.tdCategoryIdList,
                              sort,
                              0);
    v28 = ServantEquipEffectFilterController__IsMatchEffectCategory(this->fields.skillCategoryIdList, sort, 0);
    if ( ((IsUnSelectedAllTargetFilters ^ v26) & 1) != 0 )
    {
      if ( IsUnSelectedAllTargetFilters )
      {
        if ( !v28 )
          return 0;
      }
      else if ( !IsMatchEffectCategory )
      {
        return 0;
      }
    }
    else if ( !IsMatchEffectCategory && !v28 )
    {
      return 0;
    }
  }
  if ( !ListViewSort__IsMatchServantAttriFilter(sort, this->fields.userSvtEntity, this->fields.servantEntity, 0)
    || !ListViewSort__IsMatchServantSubAttriFilter(sort, this->fields.userSvtEntity, this->fields.servantEntity, 0) )
  {
    return 0;
  }
  ClassGroupFilterKindList = sub_1C94140(ListViewSort_FilterKind___TypeInfo, 1);
  if ( !ClassGroupFilterKindList )
LABEL_69:
    sub_1C942F0(ClassGroupFilterKindList, sort);
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
                                           (const MethodInfo_38520F4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
  System_Int32_array *TreasureDeviceCategoryIdList; // x0
  _BOOL4 IsUnSelectedAllTargetFilters; // w21
  _BOOL4 v24; // w23
  _BOOL4 IsMatchEffectCategory; // w22
  _BOOL4 v26; // w0
  bool v27; // w0
  FilterKindList_c *v29; // x0
  ListViewSort_FilterKind_array *v30; // x21

  v4 = this;
  if ( (byte_4D26675 & 1) == 0 )
  {
    sub_1C94098(&FilterKindList_TypeInfo);
    sub_1C94098(&ListViewSort_FilterKind___TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    this = (CombineServantListViewItem_o *)sub_1C94098(&ServantEventBonusFilterController_TypeInfo);
    byte_4D26675 = 1;
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
                                          (const MethodInfo_38520F4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                            (const MethodInfo_38520F4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, v9, 0) )
    {
      this = (CombineServantListViewItem_o *)sub_1C94140(ListViewSort_FilterKind___TypeInfo, 1);
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
                                           (const MethodInfo_38520F4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                           (const MethodInfo_38520F4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                           (const MethodInfo_38520F4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
      sub_1C9403C(&v4->fields.skillCategoryIdList, SkillCategoryIdList);
      this = (CombineServantListViewItem_o *)v4->fields.userSvtEntity;
      if ( !this )
        goto LABEL_86;
      TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                       (UserServantEntity_o *)this,
                                       0,
                                       -1,
                                       0);
      v4->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
      sub_1C9403C(&v4->fields.tdCategoryIdList, TreasureDeviceCategoryIdList);
    }
  }
  this = (CombineServantListViewItem_o *)sub_1C94140(ListViewSort_FilterKind___TypeInfo, 1);
  if ( !this )
    goto LABEL_86;
  if ( !this->fields.sortIndex )
    goto LABEL_87;
  LODWORD(this->fields.sortValue0) = 50;
  IsUnSelectedAllTargetFilters = ListViewSort__IsUnSelectedAllTargetFilters(
                                   sort,
                                   (ListViewSort_FilterKind_array *)this,
                                   0);
  this = (CombineServantListViewItem_o *)sub_1C94140(ListViewSort_FilterKind___TypeInfo, 1);
  if ( !this )
    goto LABEL_86;
  if ( !this->fields.sortIndex )
    goto LABEL_87;
  LODWORD(this->fields.sortValue0) = 51;
  v24 = ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)this, 0);
  IsMatchEffectCategory = ServantEquipEffectFilterController__IsMatchEffectCategory(
                            v4->fields.tdCategoryIdList,
                            sort,
                            0);
  v26 = ServantEquipEffectFilterController__IsMatchEffectCategory(v4->fields.skillCategoryIdList, sort, 0);
  if ( ((IsUnSelectedAllTargetFilters ^ v24) & 1) != 0 )
  {
    if ( IsUnSelectedAllTargetFilters )
    {
      if ( !v26 )
        return 0;
    }
    else if ( !IsMatchEffectCategory )
    {
      return 0;
    }
  }
  else if ( !IsMatchEffectCategory && !v26 )
  {
    return 0;
  }
LABEL_42:
  if ( !ListViewSort__IsMatchServantAttriFilter(sort, v4->fields.userSvtEntity, v4->fields.servantEntity, 0)
    || !ListViewSort__IsMatchServantSubAttriFilter(sort, v4->fields.userSvtEntity, v4->fields.servantEntity, 0) )
  {
    return 0;
  }
  this = (CombineServantListViewItem_o *)sub_1C94140(ListViewSort_FilterKind___TypeInfo, 1);
  if ( !this )
LABEL_86:
    sub_1C942F0(this, sort);
  if ( !this->fields.sortIndex )
    goto LABEL_87;
  LODWORD(this->fields.sortValue0) = 39;
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)this, 0) )
  {
    this = (CombineServantListViewItem_o *)sub_1C94140(ListViewSort_FilterKind___TypeInfo, 1);
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
    sub_1C942F8(this);
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
  v27 = !ListViewSort__GetFilter(sort, 29, 0)
     || CombineServantListViewItem__get_IsCanNotSelect(v4, (const MethodInfo *)sort);
  if ( !isChoice && v27 )
    return 0;
LABEL_79:
  v29 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v29 = FilterKindList_TypeInfo;
  }
  this = (CombineServantListViewItem_o *)v29->static_fields->RarityFilterKindList;
  if ( !this )
    goto LABEL_86;
  v30 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)this,
                                           (const MethodInfo_38520F4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v30, 0)
      || ListViewSort__IsSelectedAllTargetFilters(sort, v30, 0)
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
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  _BOOL4 IsUnSelectedAllTargetFilters; // w21
  _BOOL4 v24; // w23
  _BOOL4 IsMatchEffectCategory; // w22
  _BOOL4 v26; // w0

  if ( (byte_4D26673 & 1) == 0 )
  {
    sub_1C94098(&FilterKindList_TypeInfo);
    sub_1C94098(&ListViewSort_FilterKind___TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    sub_1C94098(&ServantEventBonusFilterController_TypeInfo);
    byte_4D26673 = 1;
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
                                        (const MethodInfo_38520F4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                            (const MethodInfo_38520F4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                           (const MethodInfo_38520F4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                           (const MethodInfo_38520F4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
        sub_1C9403C(&this->fields.skillCategoryIdList, SkillCategoryIdList);
        ClassGroupFilterKindList = (__int64)this->fields.userSvtEntity;
        if ( !ClassGroupFilterKindList )
          goto LABEL_64;
        TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                         (UserServantEntity_o *)ClassGroupFilterKindList,
                                         0,
                                         -1,
                                         0);
        this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
        sub_1C9403C(&this->fields.tdCategoryIdList, TreasureDeviceCategoryIdList);
      }
    }
    ClassGroupFilterKindList = sub_1C94140(ListViewSort_FilterKind___TypeInfo, 1);
    if ( !ClassGroupFilterKindList )
      goto LABEL_64;
    if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
      goto LABEL_65;
    *(_DWORD *)(ClassGroupFilterKindList + 32) = 50;
    IsUnSelectedAllTargetFilters = ListViewSort__IsUnSelectedAllTargetFilters(
                                     sort,
                                     (ListViewSort_FilterKind_array *)ClassGroupFilterKindList,
                                     0);
    ClassGroupFilterKindList = sub_1C94140(ListViewSort_FilterKind___TypeInfo, 1);
    if ( !ClassGroupFilterKindList )
      goto LABEL_64;
    if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
LABEL_65:
      sub_1C942F8(ClassGroupFilterKindList);
    *(_DWORD *)(ClassGroupFilterKindList + 32) = 51;
    v24 = ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0);
    IsMatchEffectCategory = ServantEquipEffectFilterController__IsMatchEffectCategory(
                              this->fields.tdCategoryIdList,
                              sort,
                              0);
    v26 = ServantEquipEffectFilterController__IsMatchEffectCategory(this->fields.skillCategoryIdList, sort, 0);
    if ( ((IsUnSelectedAllTargetFilters ^ v24) & 1) != 0 )
    {
      if ( IsUnSelectedAllTargetFilters )
      {
        if ( !v26 )
          return 0;
      }
      else if ( !IsMatchEffectCategory )
      {
        return 0;
      }
    }
    else if ( !IsMatchEffectCategory && !v26 )
    {
      return 0;
    }
  }
  if ( !ListViewSort__IsMatchServantAttriFilter(sort, this->fields.userSvtEntity, this->fields.servantEntity, 0)
    || !ListViewSort__IsMatchServantSubAttriFilter(sort, this->fields.userSvtEntity, this->fields.servantEntity, 0) )
  {
    return 0;
  }
  ClassGroupFilterKindList = sub_1C94140(ListViewSort_FilterKind___TypeInfo, 1);
  if ( !ClassGroupFilterKindList )
LABEL_64:
    sub_1C942F0(ClassGroupFilterKindList, sort);
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
                                           (const MethodInfo_38520F4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
    sub_1C942F0(0, method);
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
    sub_1C942F0(0, method);
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

  if ( (byte_4D26672 & 1) == 0 )
  {
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4D26672 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame || (userSvtEntity = this->fields.userSvtEntity) == 0 )
    sub_1C942F0(SelfUserGame, v4);
  v6 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  pushUserSvtId = SelfUserGame->fields.pushUserSvtId;
  *(_OWORD *)&v9.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v9.fields.fakeValue = v6;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v8 = v9;
  this->fields.isPush = pushUserSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49625068(&v8, 0);
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

  if ( (byte_4D26671 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMaster_CombineAppendPassiveSkillMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_SkillMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_SvtAppendPassiveSkillUnlockMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1C94098(&Method_System_Linq_Enumerable_Any_int___);
    sub_1C94098(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C94098(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4D26671 = 1;
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
      userSvtEntity = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_SkillMaster___);
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
                        (const MethodInfo_345B4C0 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
      svtSkillLvList = v5->fields.svtSkillLvList;
      if ( !svtSkillLvList )
        goto LABEL_79;
      if ( v10 >= LODWORD(svtSkillLvList->max_length) )
LABEL_82:
        sub_1C942F8(userSvtEntity);
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
  v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v47, 0);
  this->fields.isAppendSkillExChangeLimit = UserServantAppendPassiveSkillMaster__IsAppendSkillExchangeLimit(v17, 0);
  v18 = (System_Collections_Generic_List_int__o *)sub_1C942E4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v18,
    (const MethodInfo_384D5BC *)Method_System_Collections_Generic_List_int___ctor__);
  v19 = v5->fields.svtUseSkillIdList;
  if ( !v19 )
LABEL_79:
    sub_1C942F0(userSvtEntity, method);
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
        userSvtEntity = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_CombineAppendPassiveSkillMaster___);
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
        userSvtEntity = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v48, 0);
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
                *(const MethodInfo_384DE10 **)(*(_QWORD *)(v45 + 192) + 112LL));
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
    userSvtEntity = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_SvtAppendPassiveSkillUnlockMaster___);
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
    userSvtEntity = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v49, 0);
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
                                          (const MethodInfo_31A7A14 *)Method_System_Linq_Enumerable_Any_int___);
  this->fields.isAppendSkillOpenItemNum = System_Linq_Enumerable__Any_int_(
                                            (System_Collections_Generic_IEnumerable_TSource__o *)v18,
                                            (const MethodInfo_31A7A14 *)Method_System_Linq_Enumerable_Any_int___);
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
  System_Collections_Generic_List_T__o *All; // x0
  __int64 v10; // x1
  int klass; // w22
  _BOOL8 v12; // x0
  __int64 v13; // x1
  Il2CppObject *current; // x24
  UserServantEntity_o *userSvtEntity; // x0
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4D26677 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Array_IndexOf_int___);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_EventCampaignEntity__FindAll__);
    sub_1C94098(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    sub_1C94098(&System_Predicate_EventCampaignEntity__TypeInfo);
    sub_1C94098(&Method_CombineServantListViewItem___c__SetIsCombineExpCampaignTarget_b__125_0__);
    sub_1C94098(&CombineServantListViewItem___c_TypeInfo);
    byte_4D26677 = 1;
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
      _9__125_0 = (System_Predicate_object__o *)sub_1C942E4(System_Predicate_EventCampaignEntity__TypeInfo);
      System_Predicate_object____ctor(
        _9__125_0,
        v7,
        Method_CombineServantListViewItem___c__SetIsCombineExpCampaignTarget_b__125_0__,
        0);
      static_fields = CombineServantListViewItem___c_TypeInfo->static_fields;
      static_fields->__9__125_0 = (struct System_Predicate_EventCampaignEntity__o *)_9__125_0;
      sub_1C9403C(&static_fields->__9__125_0, _9__125_0);
    }
    All = System_Collections_Generic_List_object___FindAll(
            (System_Collections_Generic_List_object__o *)eventCampaignEntities,
            (System_Predicate_T__o *)_9__125_0,
            (const MethodInfo_386B544 *)Method_System_Collections_Generic_List_EventCampaignEntity__FindAll__);
    if ( !All )
      sub_1C942F0(0, v10);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v16,
      (System_Collections_Generic_List_object__o *)All,
      (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    v17 = v16;
    klass = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        v12 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v17,
                (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
        if ( !v12 )
        {
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v17,
            (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
          this->fields.combineExpCampaignValue = (float)klass / 1000.0;
          return;
        }
        current = v17.fields._current;
        if ( !v17.fields._current )
          sub_1C942F0(v12, v13);
        if ( HIDWORD(v17.fields._current[1].klass) == 27 )
          break;
        if ( (System_Array__IndexOf_int_(
                (System_Int32_array *)v17.fields._current[2].monitor,
                this->fields.svtId,
                (const MethodInfo_32A4AE8 *)Method_System_Array_IndexOf_int___)
            & 0x80000000) == 0 )
          goto LABEL_20;
      }
      userSvtEntity = this->fields.userSvtEntity;
      if ( !userSvtEntity )
        sub_1C942F0(0, v13);
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
  sub_1C9403C(&this->fields._NoticeTween_k__BackingField, noticeTween);
}


void CombineServantListViewItem__SetOverwriteStatus(CombineServantListViewItem_o *this, const MethodInfo *method)
{
  void *userSvtEntity; // x0

  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity
    || (userSvtEntity = UserServantEntity__GetOverwriteStatus((UserServantEntity_o *)userSvtEntity, 0, 0)) == 0 )
  {
    sub_1C942F0(userSvtEntity, method);
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

  if ( (byte_4D26670 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_CombineSkillMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1C94098(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1C94098(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D26670 = 1;
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
        SelfUserGame = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !SelfUserGame )
          goto LABEL_60;
        SelfUserGame = (int64_t)DataManager__GetMasterData_object_(
                                  (DataManager_o *)SelfUserGame,
                                  (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_SkillMaster___);
        if ( !SelfUserGame )
          goto LABEL_60;
        SelfUserGame = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)SelfUserGame,
                                  v11,
                                  (const MethodInfo_345B4C0 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
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
  SelfUserGame = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_60;
  SelfUserGame = (int64_t)DataManager__GetMasterData_object_(
                            (DataManager_o *)SelfUserGame,
                            (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_CombineSkillMaster___);
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
          SelfUserGame = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !SelfUserGame )
            goto LABEL_60;
          SelfUserGame = (int64_t)DataManager__GetMasterData_object_(
                                    (DataManager_o *)SelfUserGame,
                                    (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_UserItemMaster___);
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
              SelfUserGame = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49625068(&v36, 0);
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
                *(const MethodInfo_384DE10 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
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
    sub_1C942F8(SelfUserGame);
  }
LABEL_58:
  enableSkillUp = this->fields.enableSkillUp;
  if ( !enableSkillUp )
LABEL_60:
    sub_1C942F0(SelfUserGame, v4);
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
  struct ListViewManager_o *manager; // x8
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
  const MethodInfo *v40; // x2
  int64_t *p_sortValue0; // x22
  __int64 v42; // x8
  unsigned int v43; // w8
  __int64 v44; // x8
  int32_t type; // w8
  __int64 v46; // x8
  int32_t rarity; // w8
  __int64 v48; // x9
  bool v49; // zf
  int64_t v50; // x8
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v52; // q1
  struct UserServantEntity_o *v53; // x8
  IconLabelInfo_o *v54; // x20
  int32_t v55; // w21
  struct UserServantEntity_o *v56; // x8
  int32_t v57; // w8
  struct UserServantEntity_o *v58; // x8
  int64_t v59; // x20
  struct IconLabelInfo_o *v60; // x21
  int32_t v61; // w3
  IconLabelInfo_o *v62; // x0
  int32_t v63; // w2
  unsigned int v64; // w8
  IconLabelInfo_o *v65; // x20
  int64_t hp; // x20
  IconLabelInfo_o *v67; // x21
  int64_t atk; // x20
  IconLabelInfo_o *v69; // x21
  struct IconLabelInfo_o *iconLabelInfo1; // x19
  int64_t cost; // x2
  int32_t lv; // w20
  int64_t friendship; // x2
  int32_t friendshipMax; // w3
  int32_t v75; // w1
  __int64 naturalAligment; // x10
  struct ServantEntity_o *servantEntity; // x8
  __int64 collectionNo; // x10
  struct UserServantEntity_o *v79; // x8
  int32_t v80; // w21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v82; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v83; // [xsp+30h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v84; // [xsp+50h] [xbp-60h]
  int32_t tdMaxLv[2]; // [xsp+78h] [xbp-38h] BYREF

  if ( (byte_4D26676 & 1) == 0 )
  {
    sub_1C94098(&Method_BasicHelper_Any_EventGroupEntity___);
    sub_1C94098(&CombineServantListViewManager_TypeInfo);
    sub_1C94098(&Method_DataManager_GetMasterData_ServantFilterMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_EventGroupMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&System_Func_EventGroupEntity__bool__TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_EventGroupEntity__get_Count__);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C94098(&TutorialFlag_TypeInfo);
    sub_1C94098(&Method_CombineServantListViewItem___c__DisplayClass124_0__SetSortValue_b__0__);
    sub_1C94098(&CombineServantListViewItem___c__DisplayClass124_0_TypeInfo);
    byte_4D26676 = 1;
  }
  *(_QWORD *)tdMaxLv = 0;
  v5 = (Il2CppObject *)sub_1C942E4(CombineServantListViewItem___c__DisplayClass124_0_TypeInfo);
  System_Object___ctor(v5, 0);
  if ( !v5 )
    goto LABEL_310;
  v5[1].klass = (Il2CppClass *)this;
  iconLabelInfo2 = sub_1C9403C(&v5[1], this);
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
        goto LABEL_310;
      IconLabelInfo__Clear((IconLabelInfo_o *)iconLabelInfo2, 0);
      this->fields.sortValue0 = 0;
      p_sortValue0 = &this->fields.sortValue0;
      this->fields.sortValue0B = 0;
      if ( !sort->fields.isSmartSort )
      {
        if ( v39 && sort->fields.isChoiceSort )
        {
          v43 = this->fields.type;
          if ( v43 <= 0xC )
          {
            if ( ((1 << v43) & 0x1FDD) != 0 )
              v44 = 10;
            else
LABEL_124:
              v44 = -10;
            *p_sortValue0 = v44;
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
            v50 = !this->fields.isParty;
LABEL_232:
            this->fields.sortValue1 = v50;
            if ( !iconLabelInfo2 )
              break;
            iconLabelInfo1 = this->fields.iconLabelInfo1;
            goto LABEL_234;
          case 1:
            userSvtEntity = this->fields.userSvtEntity;
            if ( !userSvtEntity )
              break;
            v52 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
            *(_OWORD *)&v84.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v84.fields.fakeValue = v52;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v82 = v84;
            iconLabelInfo2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49625068(&v82, 0);
            v53 = this->fields.userSvtEntity;
            this->fields.sortValue1 = iconLabelInfo2;
            if ( !v53 )
              break;
            iconLabelInfo2 = (__int64)this->fields.iconLabelInfo1;
            if ( !iconLabelInfo2 )
              break;
            IconLabelInfo__SetTime((IconLabelInfo_o *)iconLabelInfo2, 49, v53->fields.createdAt, 0, 0, 0, 0);
            goto LABEL_227;
          case 2:
            iconLabelInfo2 = (__int64)this->fields.userSvtEntity;
            this->fields.sortValue1 = this->fields.rarity;
            if ( !iconLabelInfo2 )
              break;
            v54 = this->fields.iconLabelInfo1;
            v55 = *(_DWORD *)(iconLabelInfo2 + 256);
            iconLabelInfo2 = UserServantEntity__getLevelMax((UserServantEntity_o *)iconLabelInfo2, 0);
            v56 = this->fields.userSvtEntity;
            if ( !v56 || !v54 )
              break;
            IconLabelInfo__Set_41670428(v54, 2, v55, iconLabelInfo2, 0, 0, 0, v56->fields.lv, 0, 0);
            v57 = this->fields.type;
            if ( v57 != 10 && v57 != 7 )
              goto LABEL_267;
            v58 = this->fields.userSvtEntity;
            if ( !v58 )
              break;
            iconLabelInfo2 = (__int64)this->fields.iconLabelInfo2;
            if ( !iconLabelInfo2 )
              break;
            IconLabelInfo__Set_41670428(
              (IconLabelInfo_o *)iconLabelInfo2,
              36,
              this->fields.rarity,
              v58->fields.exceedCount,
              0,
              0,
              0,
              v58->fields.lv,
              this->fields.actualRarity,
              0);
            goto LABEL_267;
          case 3:
            iconLabelInfo2 = (__int64)this->fields.userSvtEntity;
            if ( !iconLabelInfo2 )
              break;
            v59 = *(int *)(iconLabelInfo2 + 256);
            v60 = this->fields.iconLabelInfo1;
            this->fields.sortValue1 = v59;
            iconLabelInfo2 = UserServantEntity__getLevelMax((UserServantEntity_o *)iconLabelInfo2, 0);
            if ( !v60 )
              break;
            v61 = iconLabelInfo2;
            v62 = v60;
            v63 = v59;
            goto LABEL_237;
          case 4:
            iconLabelInfo2 = (__int64)this->fields.userSvtEntity;
            if ( !iconLabelInfo2 )
              break;
            v64 = this->fields.type & 0xFFFFFFFE;
            this->fields.sortValue1 = *(int *)(iconLabelInfo2 + 292);
            if ( v64 == 4 )
            {
              v65 = this->fields.iconLabelInfo1;
            }
            else
            {
              UserServantEntity__getTreasureDeviceInfo_43961964(
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
              v75 = 33;
LABEL_254:
              IconLabelInfo__Set_41670428(
                (IconLabelInfo_o *)iconLabelInfo2,
                v75,
                friendship,
                friendshipMax,
                0,
                0,
                0,
                0,
                0,
                0);
LABEL_255:
              iconLabelInfo2 = (__int64)this->fields.userSvtEntity;
              if ( !iconLabelInfo2 )
                break;
              v65 = this->fields.iconLabelInfo2;
            }
            v80 = *(_DWORD *)(iconLabelInfo2 + 256);
            iconLabelInfo2 = UserServantEntity__getLevelMax((UserServantEntity_o *)iconLabelInfo2, 0);
            if ( v65 )
            {
              IconLabelInfo__Set_41670428(v65, 2, v80, iconLabelInfo2, 0, 0, 0, 0, 0, 0);
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
LABEL_267:
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
                    goto LABEL_267;
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
            v67 = this->fields.iconLabelInfo1;
            iconLabelInfo2 = UserServantEntity__get_HpBoostValue((UserServantEntity_o *)iconLabelInfo2, 0);
            if ( !v67 )
              break;
            IconLabelInfo__Set_41670428(v67, 3, hp, iconLabelInfo2, 0, 0, 0, 0, 0, 0);
            goto LABEL_227;
          case 6:
            atk = this->fields.atk;
            iconLabelInfo2 = (__int64)this->fields.userSvtEntity;
            this->fields.sortValue1 = atk;
            if ( !iconLabelInfo2 )
              break;
            v69 = this->fields.iconLabelInfo1;
            iconLabelInfo2 = UserServantEntity__get_AtkBoostValue((UserServantEntity_o *)iconLabelInfo2, 0);
            if ( !v69 )
              break;
            IconLabelInfo__Set_41670428(v69, 5, atk, iconLabelInfo2, 0, 0, 0, 0, 0, 0);
LABEL_227:
            iconLabelInfo2 = (__int64)this->fields.userSvtEntity;
            if ( !iconLabelInfo2 )
              break;
            iconLabelInfo1 = this->fields.iconLabelInfo2;
LABEL_234:
            lv = *(_DWORD *)(iconLabelInfo2 + 256);
            goto LABEL_235;
          case 7:
            cost = this->fields.cost;
            iconLabelInfo2 = (__int64)this->fields.iconLabelInfo1;
            this->fields.sortValue1 = cost;
            if ( !iconLabelInfo2 )
              break;
            IconLabelInfo__Set_41670428((IconLabelInfo_o *)iconLabelInfo2, 7, cost, 0, 0, 0, 0, 0, 0, 0);
            goto LABEL_255;
          case 8:
            iconLabelInfo2 = (__int64)this->fields.userSvtEntity;
            v50 = -this->fields.priority;
            goto LABEL_232;
          case 0xA:
            friendship = this->fields.friendship;
            iconLabelInfo2 = (__int64)this->fields.iconLabelInfo1;
            this->fields.sortValue1 = friendship;
            if ( !iconLabelInfo2 )
              break;
            friendshipMax = this->fields.friendshipMax;
            v75 = 32;
            goto LABEL_254;
          case 0xE:
            iconLabelInfo2 = this->fields.amountSortValue;
            if ( (iconLabelInfo2 & 0x8000000000000000LL) == 0 )
              goto LABEL_245;
            iconLabelInfo2 = (__int64)sort->fields.manager;
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
                               v40);
            this->fields.amountSortValue = iconLabelInfo2;
LABEL_245:
            servantEntity = this->fields.servantEntity;
            if ( !servantEntity )
              break;
            collectionNo = servantEntity->fields.collectionNo;
            v79 = this->fields.userSvtEntity;
            this->fields.sortValue1 = (((unsigned __int64)(unsigned int)this->fields.rarity << 32)
                                     + (iconLabelInfo2 << 48))
                                    | collectionNo;
            if ( !v79 )
              break;
            iconLabelInfo1 = this->fields.iconLabelInfo1;
            lv = v79->fields.lv;
            iconLabelInfo2 = (__int64)v79;
LABEL_235:
            iconLabelInfo2 = UserServantEntity__getLevelMax((UserServantEntity_o *)iconLabelInfo2, 0);
            if ( !iconLabelInfo1 )
              break;
            v61 = iconLabelInfo2;
            v62 = iconLabelInfo1;
            v63 = lv;
LABEL_237:
            IconLabelInfo__Set_41670428(v62, 2, v63, v61, 0, 0, 0, 0, 0, 0);
            goto LABEL_267;
          case 0xF:
            friendship = this->fields.hpReinforceValue;
            iconLabelInfo2 = (__int64)this->fields.iconLabelInfo1;
            this->fields.isDispHpStatusUpInfo = 1;
            this->fields.sortValue1 = friendship;
            if ( !iconLabelInfo2 )
              break;
            friendshipMax = this->fields.nowMaxHpReinforceValue;
            v75 = 44;
            goto LABEL_254;
          case 0x10:
            friendship = this->fields.atkReinforceValue;
            iconLabelInfo2 = (__int64)this->fields.iconLabelInfo1;
            this->fields.isDispAtkStatusUpInfo = 1;
            this->fields.sortValue1 = friendship;
            if ( !iconLabelInfo2 )
              break;
            friendshipMax = this->fields.nowMaxAtkReinforceValue;
            v75 = 45;
            goto LABEL_254;
          default:
            return iconLabelInfo2;
        }
LABEL_310:
        sub_1C942F0(iconLabelInfo2, v7);
      }
      switch ( this->fields.type )
      {
        case 0:
          if ( this->fields.isHeroineSvt )
          {
            if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
            if ( TutorialFlag__Get_41176064(126, 0) )
              goto LABEL_166;
          }
          if ( this->fields.isParty )
          {
            v42 = 20;
            goto LABEL_195;
          }
          if ( this->fields.isLvMax )
            goto LABEL_191;
          goto LABEL_196;
        case 1:
          iconLabelInfo2 = (__int64)this->fields.servantEntity;
          if ( !iconLabelInfo2 )
            goto LABEL_310;
          if ( ServantEntity__get_IsExpUp((ServantEntity_o *)iconLabelInfo2, 0) )
          {
            if ( this->fields.isBaseLvMax )
            {
              v46 = -120;
            }
            else
            {
              v46 = -5;
              if ( !isLock && !v39 )
                v46 = 30;
            }
            goto LABEL_298;
          }
          iconLabelInfo2 = (__int64)this->fields.servantEntity;
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
                  v46 = -90;
                  if ( !this->fields.isAtkSecondUpMax && this->fields.isAtkUpMax )
                    v46 = 90;
                  goto LABEL_296;
                }
                v48 = 70;
                v49 = !this->fields.isAtkUpMax;
                v46 = -110;
              }
              else
              {
                if ( rarity >= 4 )
                {
                  v46 = -80;
                  if ( !this->fields.isHpSecondUpMax && this->fields.isHpUpMax )
                    v46 = 100;
                  goto LABEL_296;
                }
                v48 = 80;
                v49 = !this->fields.isHpUpMax;
                v46 = -100;
              }
              if ( v49 )
                v46 = v48;
LABEL_296:
              *p_sortValue0 = v46;
              if ( isLock || v39 )
                v46 = -5;
              goto LABEL_298;
            }
            v46 = -150;
          }
          else
          {
            if ( !CombineServantListViewItem__get_IsCanNotSelectMaterial(this, v7) )
            {
LABEL_299:
              if ( this->fields.isFortification )
                *p_sortValue0 = -10;
              if ( v39 && sort->fields.isChoiceSort )
                *(_OWORD *)p_sortValue0 = xmmword_CFE4B0;
              goto LABEL_198;
            }
            if ( this->fields.isLimitCntTarget )
            {
              v46 = -20;
            }
            else if ( this->fields.isParty )
            {
              v46 = -30;
            }
            else if ( this->fields.isGrandSvt )
            {
              v46 = -40;
            }
            else if ( this->fields.isUseSupport )
            {
              v46 = -50;
            }
            else
            {
              v46 = -10;
              if ( this->fields.isUseRecommendSupport )
                v46 = -60;
            }
          }
LABEL_298:
          *p_sortValue0 = v46;
          goto LABEL_299;
        case 2:
          if ( this->fields.isSealCombineLimit || this->fields.isSealedLimitCount && this->fields.isLimitCntMax )
          {
            v42 = 0;
            goto LABEL_195;
          }
          if ( !CombineServantListViewItem__get_IsCanNotBaseSelect(this, v7)
            && this->fields.isLimitUpItemNum
            && this->fields.isLvMax )
          {
LABEL_194:
            v42 = 10;
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
            if ( TutorialFlag__Get_41176064(126, 0) )
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
          if ( !TutorialFlag__Get_41176064(126, 0) )
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
            v42 = -15;
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
            if ( TutorialFlag__Get_41176064(126, 0) )
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
            if ( TutorialFlag__Get_41176064(126, 0) )
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
          if ( TutorialFlag__Get_41176064(126, 0) )
          {
            v42 = -40;
          }
          else
          {
LABEL_314:
            if ( this->fields.isEventJoin )
            {
              v42 = -35;
            }
            else if ( this->fields.isAppendSkillLvMax )
            {
LABEL_269:
              v42 = -30;
            }
            else if ( this->fields.isAllAppendSkillLock )
            {
LABEL_166:
              v42 = -20;
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
              v42 = -10;
            }
          }
LABEL_195:
          *p_sortValue0 = v42;
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
        iconLabelInfo2 = (__int64)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_EventGroupMaster___);
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
              v23 = CombineServantListViewManager_TypeInfo;
              v24 = CombineServantListViewManager_TypeInfo->_2.naturalAligment;
              if ( manager->klass->_2.naturalAligment >= (unsigned int)v24 )
              {
                if ( (CombineServantListViewManager_c *)manager->klass->_2.typeHierarchy[v24 - 1] == CombineServantListViewManager_TypeInfo )
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
              if ( manager->klass->_2.naturalAligment >= (unsigned int)v24 )
              {
                if ( (CombineServantListViewManager_c *)manager->klass->_2.typeHierarchy[v24 - 1] == v23 )
                  v33 = manager;
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
            sub_1C9403C(p_monitor, v33);
            v35 = (System_Func_object__bool__o *)sub_1C942E4(System_Func_EventGroupEntity__bool__TypeInfo);
            System_Func_object__bool____ctor(
              v35,
              v5,
              Method_CombineServantListViewItem___c__DisplayClass124_0__SetSortValue_b__0__,
              0);
            this->fields.isEventUpVal = BasicHelper__Any_object_(
                                          (System_Collections_Generic_List_T__o *)EntitiesByGroupId,
                                          (System_Func_T__bool__o *)v35,
                                          (const MethodInfo_3185468 *)Method_BasicHelper_Any_EventGroupEntity___);
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
            goto LABEL_310;
          iconLabelInfo2 = CombineServantListViewManager__IsLargeSuccessCampaignClassId(
                             (CombineServantListViewManager_o *)v13,
                             this->fields.bonusKindId,
                             this->fields.svtId,
                             v27);
          v28 = this->fields.userSvtEntity;
          this->fields.isEventUpVal = iconLabelInfo2 & 1;
          if ( !v28 )
            goto LABEL_310;
          v29 = *(_OWORD *)&v28->fields.id.fields.fakeValue;
          bonusKindId = this->fields.bonusKindId;
          *(_OWORD *)&v84.fields.currentCryptoKey = *(_OWORD *)&v28->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v84.fields.fakeValue = v29;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v83 = v84;
          v31 = (CombineServantListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49625068(
                                                     &v83,
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
        iconLabelInfo2 = (__int64)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_EventCampaignMaster___);
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
          goto LABEL_310;
        IsEnableServant = UserServantEntity__getEventUpVal_43954324(
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
        iconLabelInfo2 = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !iconLabelInfo2 )
          goto LABEL_310;
        MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)iconLabelInfo2,
                              (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_ServantFilterMaster___);
        svtId = this->fields.svtId;
        v19 = (ServantFilterMaster_o *)MasterData_object;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(svtId, 0);
        v7 = *(const MethodInfo **)&v20.fields.fakeValue;
        iconLabelInfo2 = *(_QWORD *)&v20.fields.currentCryptoKey;
        if ( !v19 )
          goto LABEL_310;
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


System_String_o *CombineServantListViewItem__ToString(CombineServantListViewItem_o *this, const MethodInfo *method)
{
  System_String_o *NameText; // x0

  if ( (byte_4D26681 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_15288/*"UserSvt "*/);
    byte_4D26681 = 1;
  }
  NameText = CombineServantListViewItem__get_NameText(this, method);
  return System_String__Concat_64417744((System_String_o *)StringLiteral_15288/*"UserSvt "*/, NameText, 0);
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

  if ( (byte_4D2667D & 1) == 0 )
  {
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&StringLiteral_19212/*"error"*/);
    byte_4D2667D = 1;
  }
  servantEntity = this->fields.servantEntity;
  if ( !servantEntity )
    return (System_String_o *)StringLiteral_19212/*"error"*/;
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
  if ( (byte_4D2667E & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D2667E = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


bool CombineServantListViewItem__get_IsAtkAdjustMax(CombineServantListViewItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0

  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_1C942F0(0, method);
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

  if ( (byte_4D2667F & 1) == 0 )
  {
    sub_1C94098(&TutorialFlag_TypeInfo);
    byte_4D2667F = 1;
  }
  if ( !this->fields.isHeroineSvt )
    goto LABEL_47;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_41176064(126, 0) )
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
          sub_1C942F0(UserSvtEntity, v6);
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

  if ( (byte_4D26680 & 1) == 0 )
  {
    sub_1C94098(&TutorialFlag_TypeInfo);
    byte_4D26680 = 1;
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
    if ( TutorialFlag__Get_41176064(126, 0) )
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
    sub_1C942F0(v6, v5);
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
    sub_1C942F0(0, method);
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
    sub_1C942F0(0, method);
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
    sub_1C942F0(0, v4);
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
    sub_1C942F0(0, method);
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
    sub_1C942F0(0, method);
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

  if ( (byte_4D2667B & 1) == 0 )
  {
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&StringLiteral_19212/*"error"*/);
    byte_4D2667B = 1;
  }
  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    return (System_String_o *)StringLiteral_19212/*"error"*/;
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
  if ( (byte_4D2667A & 1) == 0 )
  {
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (CombineServantListViewItem_o *)sub_1C94098(&StringLiteral_19212/*"error"*/);
    byte_4D2667A = 1;
  }
  servantEntity = v2->fields.servantEntity;
  if ( !servantEntity )
    return (System_String_o *)StringLiteral_19212/*"error"*/;
  userSvtEntity = v2->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_1C942F0(this, method);
  v6 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.currentCryptoKey;
  v5 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v9.fields.currentCryptoKey = v6;
  *(_QWORD *)&v9.fields.fakeValue = v5;
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v9, 0);
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

  if ( (byte_4D2667C & 1) == 0 )
  {
    sub_1C94098(&LocalizationManager_TypeInfo);
    byte_4D2667C = 1;
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

  if ( (byte_4D26682 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMaster_SvtCoinMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__GetEntity__);
    byte_4D26682 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_SvtCoinMaster___);
  if ( !Master_object )
    sub_1C942F0(0, v4);
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             this->fields.svtId,
             (const MethodInfo_345B4C0 *)Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__GetEntity__);
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

  if ( (byte_4D26683 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMaster_UserSvtCoinMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4D26683 = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_UserSvtCoinMaster___);
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
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49625068(&v13, 0);
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
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v16, 0);
  if ( !v7 )
    goto LABEL_17;
  Master_object = UserSvtCoinMaster__TryGetEntity(v7, &entity, v9, Master_object, 0);
  if ( (Master_object & 1) != 0 )
  {
    if ( entity )
      return entity->fields.num;
LABEL_17:
    sub_1C942F0(Master_object, v4);
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
  if ( (byte_4D26678 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C94098(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    this = (CombineServantListViewItem_o *)sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D26678 = 1;
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
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49625068(&v10, 0);
  this = (CombineServantListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (this = (CombineServantListViewItem_o *)DataManager__GetMasterData_object_(
                                                 (DataManager_o *)this,
                                                 (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0 )
  {
LABEL_9:
    sub_1C942F0(this, method);
  }
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             v7,
             (const MethodInfo_345DA1C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  *p_userSvtEntity = Entity;
  sub_1C9403C(p_userSvtEntity, Entity);
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
  if ( (byte_4D26679 & 1) == 0 )
  {
    this = (CombineServantListViewItem_o *)sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4D26679 = 1;
  }
  userSvtEntity = v2->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_1C942F0(this, method);
  v4 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v7.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v7.fields.fakeValue = v4;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v6 = v7;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49625068(&v6, 0);
}


void CombineServantListViewItem__setUserServantEntity(
        CombineServantListViewItem_o *this,
        UserServantEntity_o *entity,
        const MethodInfo *method)
{
  this->fields.userSvtEntity = entity;
  sub_1C9403C(&this->fields.userSvtEntity, entity);
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
    sub_1C942F0(0, value);
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
    sub_1C942F0(0, value);
  this->fields.dragSelectNum = value - 1;
}


void CombineServantListViewItem__set_IsHpStatusMax(
        CombineServantListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  if ( !this )
    sub_1C942F0(0, value);
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
    sub_1C942F0(0, value);
  this->fields.isNotSelectSecondStatusUpAtk = this->fields.atkBase > 0 && value;
}


void CombineServantListViewItem__set_IsSecondHpStatusMax(
        CombineServantListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  if ( !this )
    sub_1C942F0(0, value);
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
  sub_1C9403C(&this->fields._NoticeTween_k__BackingField, value);
}


void CombineServantListViewItem___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19

  if ( (byte_4D26687 & 1) == 0 )
  {
    sub_1C94098(&CombineServantListViewItem___c_TypeInfo);
    byte_4D26687 = 1;
  }
  v1 = (Il2CppObject *)sub_1C942E4(CombineServantListViewItem___c_TypeInfo);
  System_Object___ctor(v1, 0);
  CombineServantListViewItem___c_TypeInfo->static_fields->__9 = (struct CombineServantListViewItem___c_o *)v1;
  sub_1C9403C(CombineServantListViewItem___c_TypeInfo->static_fields, v1);
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
    sub_1C942F0(this, 0);
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

  if ( (byte_4D26688 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_ServantFilterMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4D26688 = 1;
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
    IsLargeSuccessCampaignClassId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49625068(&v24, 0);
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
      IsLargeSuccessCampaignClassId = (int64_t)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_EventCampaignMaster___);
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
        IsLargeSuccessCampaignClassId = (int64_t)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_ServantFilterMaster___);
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
                return UserServantEntity__getEventUpVal_43954324(
                         (UserServantEntity_o *)IsLargeSuccessCampaignClassId,
                         v23->fields.setupInfo,
                         entity->fields.eventId,
                         0,
                         0);
            }
          }
        }
LABEL_34:
        sub_1C942F0(IsLargeSuccessCampaignClassId, v7);
      }
    }
  }
  return 1;
}