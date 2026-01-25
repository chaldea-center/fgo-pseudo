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
  bool v15; // w21
  IconLabelInfo_o *v16; // x20
  IconLabelInfo_o *v17; // x20
  System_Collections_Generic_List_int__o *v18; // x20
  System_Collections_Generic_List_int__o *v19; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_userSvtEntity; // x23
  int64_t Master_object; // x0
  const MethodInfo *v22; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v23; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v24; // x24
  __int64 v25; // x20
  __int64 v26; // x25
  Il2CppObject *v27; // x0
  __int128 v28; // q1
  UserServantCollectionMaster_o *v29; // x24
  int64_t v30; // x27
  UserServantCollectionEntity_o *EntityDefinitely; // x26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v32; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v33; // q0
  int64_t v34; // x0
  __int128 v35; // q1
  bool v36; // w8
  __int64 v37; // x20
  __int64 v38; // x24
  struct ServantEntity_o *servantEntity; // x8
  BalanceConfig_c *v40; // x0
  int32_t adjustHp; // w20
  struct BalanceConfig_StaticFields *static_fields; // x8
  const MethodInfo *v43; // x2
  const MethodInfo *v44; // x1
  const MethodInfo *v45; // x1
  int64_t UserSvtId; // x0
  unsigned int v47; // w8
  __int64 v48; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x29
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v51; // x9
  int32_t *p_offset; // x10
  __int64 v53; // x0
  System_Collections_Generic_IEnumerator_T__c *v54; // x8
  __int64 v55; // x9
  int32_t *v56; // x10
  __int64 v57; // x0
  __int64 v58; // x0
  __int64 v59; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v60; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v61; // q0
  __int64 v62; // x21
  System_Collections_Generic_IEnumerator_T__c *v63; // x8
  __int64 v64; // x9
  int32_t *v65; // x10
  __int64 v66; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v67; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v68; // q0
  UserRecommendSupportMaster_o *v69; // x24
  Il2CppObject *v70; // x0
  __int128 v71; // q1
  UserServantGrandMaster_o *v72; // x24
  UserServantEntity_o *v73; // x8
  Il2CppObject *MasterData_object; // x24
  struct ServantEntity_o *v75; // x8
  __int64 v76; // x20
  __int64 v77; // x27
  int64_t v78; // x29
  Il2CppObject *v79; // x24
  struct ServantEntity_o *v80; // x8
  __int64 v81; // x20
  __int64 v82; // x27
  int64_t v83; // x29
  struct System_Int32_array *commandCardParam; // x20
  int max_length; // w8
  __int64 v86; // x24
  int32_t v87; // w26
  bool v88; // w27
  __int64 v89; // x1
  System_Collections_Generic_IEnumerator_T__o *v90; // x28
  System_Collections_Generic_IEnumerator_T__c *v91; // x8
  __int64 v92; // x9
  int32_t *v93; // x10
  __int64 v94; // x0
  System_Collections_Generic_IEnumerator_T__c *v95; // x8
  __int64 v96; // x9
  int32_t *v97; // x10
  __int64 v98; // x0
  __int64 v99; // x0
  __int64 v100; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v101; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v102; // q0
  __int64 v103; // x21
  System_Collections_Generic_IEnumerator_T__c *v104; // x8
  __int64 v105; // x9
  int32_t *v106; // x10
  __int64 v107; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v108; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v109; // q0
  UserRecommendSupportMaster_o *v110; // x24
  Il2CppObject *v111; // x0
  __int128 v112; // q1
  UserServantGrandMaster_o *v113; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v114; // x8
  __int64 v115; // x20
  __int64 v116; // x24
  int32_t v117; // w20
  int32_t SvtClassId; // w0
  int32_t SvtClassGroupType; // w24
  BalanceConfig_c *v120; // x0
  int32_t materialExp; // w20
  int SameClassExp; // w21
  double v123; // d0
  int32_t v124; // w8
  UserServantEntity_o *v125; // x8
  ServantLimitMaster_o *v126; // x24
  __int64 v127; // x20
  __int64 v128; // x27
  int32_t v129; // w28
  int32_t v130; // w8
  int32_t v131; // w24
  bool v132; // w8
  bool v133; // w8
  bool v134; // w8
  bool v135; // w8
  Il2CppObject *v136; // x24
  struct ServantEntity_o *v137; // x8
  __int64 v138; // x20
  __int64 v139; // x27
  int64_t v140; // x28
  int32_t v141; // w8
  Il2CppObject *v142; // x0
  __int64 v143; // x20
  __int64 v144; // x27
  ServantLimitImageMaster_o *v145; // x24
  int32_t v146; // w28
  UserServantEntity_o *v147; // x8
  const MethodInfo *v148; // x1
  _BOOL4 isHeroineSvt; // w8
  UserServantEntity_o *v150; // x9
  int32_t combineLimitId; // w24
  __int64 v152; // x20
  __int64 v153; // x27
  int32_t v154; // w28
  __int64 v155; // x20
  __int64 v156; // x26
  int64_t v157; // x21
  __int64 v158; // x8
  UserItemMaster_o *v159; // x28
  unsigned __int64 v160; // x27
  UserServantEntity_o *v161; // x8
  __int128 v162; // q1
  int32_t v163; // w29
  int32_t v164; // w21
  UserServantEntity_o *v165; // x8
  UserServantEntity_o *v166; // x8
  const MethodInfo *v167; // x1
  int32_t v168; // w8
  __int64 v169; // x1
  System_Collections_Generic_IEnumerator_T__o *v170; // x28
  System_Collections_Generic_IEnumerator_T__c *v171; // x8
  __int64 v172; // x9
  int32_t *v173; // x10
  __int64 v174; // x0
  System_Collections_Generic_IEnumerator_T__c *v175; // x8
  __int64 v176; // x9
  int32_t *v177; // x10
  __int64 v178; // x0
  __int64 v179; // x0
  __int64 v180; // x1
  UserServantEntity_o *v181; // x8
  __int128 v182; // q0
  __int64 v183; // x21
  System_Collections_Generic_IEnumerator_T__c *v184; // x8
  __int64 v185; // x9
  int32_t *v186; // x10
  __int64 v187; // x0
  int id; // w24
  int32_t lv; // w20
  int32_t SameSvtNpLvCache; // w0
  const MethodInfo *v191; // x4
  int32_t v192; // w24
  __int64 v193; // x20
  UserServantEntity_o *v194; // x8
  __int128 v195; // q0
  UserRecommendSupportMaster_o *v196; // x24
  Il2CppObject *v197; // x0
  __int128 v198; // q1
  UserServantGrandMaster_o *v199; // x24
  bool v200; // w8
  bool IsMaterialTd; // w0
  UserServantEntity_o *v202; // x8
  UserServantEntity_o *v203; // x8
  bool isLevelMax; // w0
  _BOOL4 v205; // w8
  ServantExceedEntity_o *SvtExceedEnt; // x0
  int32_t *v207; // x26
  CommonConsumeEntity_array *IdEntityList; // x0
  CommonConsumeEntity_array *v209; // x29
  System_Collections_Generic_HashSet_int__o *v210; // x24
  System_Collections_Generic_HashSet_int__o *v211; // x28
  int v212; // w8
  __int64 v213; // x20
  CommonConsumeEntity_o *v214; // x27
  UserServantEntity_o *v215; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v216; // x29
  __int64 v217; // x20
  __int64 v218; // x27
  UserServantEntity_o *v219; // x29
  System_Int32_array *v220; // x24
  __int64 v221; // x20
  __int64 v222; // x24
  struct ServantEntity_o *v223; // x8
  bool v224; // zf
  UserServantEntity_o *v225; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  int64_t v228; // x8
  struct ServantEntity_o *v229; // x9
  UserServantEntity_o *v230; // x8
  unsigned __int64 v231; // x9
  _BOOL8 v232; // x10
  __int64 v233; // x20
  __int64 v234; // x22
  struct UserServantEntity_o *v235; // x8
  __int128 v236; // q0
  int64_t v237; // x8
  int32_t maxFriendshipRank; // w20
  int32_t friendshipExceedCount; // w21
  __int64 v240; // x20
  __int64 v241; // x26
  int64_t v242; // x21
  UserItemMaster_o *v243; // x24
  unsigned __int64 v244; // x27
  __int64 v245; // x29
  bool v246; // w8
  int32_t v247; // w0
  int32_t v248; // w24
  int32_t v249; // w29
  int32_t v250; // w28
  int v251; // w25
  TreasureDvcLvEntity_o *v252; // x0
  int64_t v253; // [xsp+10h] [xbp-2D0h]
  bool *p_isLimitUpItemNum; // [xsp+18h] [xbp-2C8h]
  bool *p_isStatusUpSvt; // [xsp+20h] [xbp-2C0h]
  int64_t v256; // [xsp+20h] [xbp-2C0h]
  struct IconLabelInfo_o **p_iconLabelInfo2; // [xsp+28h] [xbp-2B8h]
  UserServantCollectionEntity_o *v258; // [xsp+30h] [xbp-2B0h]
  bool v260; // [xsp+38h] [xbp-2A8h]
  struct ServantEntity_o **p_servantEntity; // [xsp+48h] [xbp-298h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v264; // [xsp+50h] [xbp-290h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v265; // [xsp+70h] [xbp-270h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v266; // [xsp+90h] [xbp-250h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v267; // [xsp+B0h] [xbp-230h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v268; // [xsp+D0h] [xbp-210h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v269; // [xsp+F0h] [xbp-1F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v270; // [xsp+110h] [xbp-1D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v271; // [xsp+130h] [xbp-1B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v272; // [xsp+150h] [xbp-190h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v273; // [xsp+170h] [xbp-170h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v274; // [xsp+190h] [xbp-150h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v275; // [xsp+1B0h] [xbp-130h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v276; // [xsp+1D0h] [xbp-110h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v277; // [xsp+1F0h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v278; // [xsp+210h] [xbp-D0h]
  UserItemEntity_o *v279; // [xsp+238h] [xbp-A8h] BYREF
  int32_t tdMaxLv; // [xsp+244h] [xbp-9Ch] BYREF
  int32_t tdLv[2]; // [xsp+248h] [xbp-98h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+250h] [xbp-90h] BYREF
  UserItemEntity_o *v283; // [xsp+258h] [xbp-88h] BYREF
  __int64 v284; // [xsp+260h] [xbp-80h] BYREF
  UserServantCommandCodeEntity_o *v285; // [xsp+268h] [xbp-78h] BYREF
  UserServantCommandCardEntity_o *v286; // [xsp+270h] [xbp-70h] BYREF
  UserServantCommandCodeEntity_o *entity; // [xsp+278h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v288; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v289; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v290; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v291; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v292; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v293; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v294; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v295; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v296; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v297; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v298; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v299; // 0:x0.16

  v15 = isParty;
  if ( (byte_4CE84F5 & 1) == 0 )
  {
    sub_1C7BAE8(&BalanceConfig_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_UserServantLeaderEntity__GetEnumerator__);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_CombineLimitMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_CombineMaterialMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_FriendshipMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_TreasureDvcMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_UserServantCommandCardMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_UserServantLeaderMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_CommonConsumeMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_ServantLimitMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_SvtCoinMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_UserRecommendSupportMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_UserServantGrandMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C7BAE8(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_1C7BAE8(&Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__GetEntity__);
    sub_1C7BAE8(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
    sub_1C7BAE8(&Method_DataMasterBase_UserServantLeaderMaster__UserServantLeaderEntity__string__getEntityList__);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C7BAE8(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1C7BAE8(&System_IDisposable_TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_IEnumerator_UserServantLeaderEntity__TypeInfo);
    sub_1C7BAE8(&System_Collections_IEnumerator_TypeInfo);
    sub_1C7BAE8(&IconLabelInfo_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C7BAE8(&System_Math_TypeInfo);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CE84F5 = 1;
  }
  entity = 0;
  v286 = 0;
  v285 = 0;
  v284 = 0;
  v283 = 0;
  tdInfo = 0;
  *(_QWORD *)tdLv = 0;
  tdMaxLv = 0;
  v279 = 0;
  v16 = (IconLabelInfo_o *)sub_1C7BD34(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v16, 0);
  this->fields.iconLabelInfo1 = v16;
  sub_1C7BA8C(&this->fields.iconLabelInfo1, v16);
  v17 = (IconLabelInfo_o *)sub_1C7BD34(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v17, 0);
  this->fields.iconLabelInfo2 = v17;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  sub_1C7BA8C(&this->fields.iconLabelInfo2, v17);
  v18 = (System_Collections_Generic_List_int__o *)sub_1C7BD34(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v18,
    (const MethodInfo_3821584 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.enableSkillUp = v18;
  sub_1C7BA8C(&this->fields.enableSkillUp, v18);
  v19 = (System_Collections_Generic_List_int__o *)sub_1C7BD34(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v19,
    (const MethodInfo_3821584 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.enableAppendSkillUp = v19;
  sub_1C7BA8C(&this->fields.enableAppendSkillUp, v19);
  ListViewItem___ctor((ListViewItem_o *)this, 0);
  this->fields.isChoice = 0;
  *(_DWORD *)&this->fields.isStatusUpSvt = 0;
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
  p_isStatusUpSvt = &this->fields.isStatusUpSvt;
  sub_1C7BA8C(&this->fields.setupInfo, setupInfo);
  this->fields.userSvtEntity = userSvtEntity;
  p_userSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userSvtEntity;
  this->fields.isParty = v15;
  sub_1C7BA8C(&this->fields.userSvtEntity, userSvtEntity);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_ServantMaster___);
  v23 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_450;
  v24 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  v25 = *(_QWORD *)&v23[5].fields.currentCryptoKey;
  v26 = *(_QWORD *)&v23[5].fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v288.fields.currentCryptoKey = v25;
  *(_QWORD *)&v288.fields.fakeValue = v26;
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v288, 0);
  if ( !v24 )
    goto LABEL_450;
  v27 = DataMasterBase_object__object__int___GetEntity(
          v24,
          Master_object,
          (const MethodInfo_342E2FC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)v27;
  p_servantEntity = &this->fields.servantEntity;
  sub_1C7BA8C(&this->fields.servantEntity, v27);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !userSvtEntity )
    goto LABEL_450;
  v28 = *(_OWORD *)&userSvtEntity->fields.userId.fields.fakeValue;
  v29 = (UserServantCollectionMaster_o *)Master_object;
  *(_OWORD *)&v278.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v278.fields.fakeValue = v28;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v277 = v278;
  v30 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v277, 0);
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(userSvtEntity->fields.svtId, 0);
  if ( !v29 )
    goto LABEL_450;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v29, v30, Master_object, 0);
  Master_object = (int64_t)UserGameMaster__getSelfUserGame(0);
  v253 = Master_object;
  if ( baseUsrSvtData )
  {
    v32 = *p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_450;
    v33 = v32[2];
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v278.fields.currentCryptoKey = v32[1];
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v278.fields.fakeValue = v33;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v276 = v278;
    v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v276, 0);
    v35 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
    *(_OWORD *)&v275.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v275.fields.fakeValue = v35;
    v36 = v34 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v275, 0);
  }
  else
  {
    v36 = 0;
  }
  this->fields.isBaseSvt = v36;
  v37 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v38 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v289.fields.currentCryptoKey = v37;
  *(_QWORD *)&v289.fields.fakeValue = v38;
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v289, 0);
  servantEntity = this->fields.servantEntity;
  this->fields.svtId = Master_object;
  if ( !servantEntity )
    goto LABEL_450;
  this->fields.classId = servantEntity->fields.classId;
  this->fields.isHeroineSvt = UserServantEntity__IsHeroine(userSvtEntity, 0);
  Master_object = UserServantEntity__IsEventJoin(userSvtEntity, 0);
  this->fields.isEventJoin = Master_object & 1;
  if ( !EntityDefinitely )
    goto LABEL_450;
  UserServantCollectionEntity__getFriendShipRankInfo(
    EntityDefinitely,
    &this->fields.friendship,
    &this->fields.friendshipMax,
    0);
  this->fields.maxLimitCnt = UserServantEntity__getLimitCntMax(userSvtEntity, 0);
  this->fields.currentLimitCnt = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(
                                   userSvtEntity->fields.limitCount,
                                   0);
  v40 = BalanceConfig_TypeInfo;
  adjustHp = userSvtEntity->fields.adjustHp;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v40 = BalanceConfig_TypeInfo;
  }
  static_fields = v40->static_fields;
  v258 = EntityDefinitely;
  this->fields.hpReinforceValue = static_fields->StatusUpAdjustHp * adjustHp;
  this->fields.atkReinforceValue = static_fields->StatusUpAdjustAtk * userSvtEntity->fields.adjustAtk;
  UserServantEntity__getAdjustMaxData(
    userSvtEntity,
    &this->fields.nowMaxHpReinforceValue,
    &this->fields.nowMaxAtkReinforceValue,
    0);
  CombineServantListViewItem__ModifyItem(this, isFavorite, v43);
  CombineServantListViewItem__SetOverwriteStatus(this, v44);
  UserSvtId = CombineServantListViewItem__get_UserSvtId(this, v45);
  EventFortificationDataLogic__SetFortification(
    &this->fields.isFortification,
    &this->fields.fortificationName,
    &this->fields.fortificationDetailName,
    UserSvtId,
    0);
  v47 = this->fields.type;
  if ( v47 <= 0xA && ((1 << v47) & 0x481) != 0 )
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
    Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Master_object )
      goto LABEL_450;
    Master_object = (int64_t)DataManager__GetMasterData_object_(
                               (DataManager_o *)Master_object,
                               (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_UserServantLeaderMaster___);
    if ( !Master_object )
      goto LABEL_450;
    Master_object = *(_QWORD *)(Master_object + 40);
    if ( !Master_object )
      goto LABEL_450;
    Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                   (System_Collections_ObjectModel_Collection_T__o *)Master_object,
                   (const MethodInfo_33C6F68 *)Method_System_Collections_ObjectModel_Collection_UserServantLeaderEntity__GetEnumerator__);
    if ( !Enumerator )
      sub_1C7BD40(0, v48);
    while ( 1 )
    {
      klass = Enumerator->klass;
      v51 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
      if ( *(_WORD *)&Enumerator->klass->_2.rank )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v51;
          p_offset += 4;
          if ( !v51 )
            goto LABEL_46;
        }
        v53 = (__int64)&klass->vtable[*p_offset];
      }
      else
      {
LABEL_46:
        v53 = sub_1C51E70(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v53)(
              Enumerator,
              *(_QWORD *)(v53 + 8))
          & 1) == 0 )
        break;
      v54 = Enumerator->klass;
      v55 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
      if ( *(_WORD *)&Enumerator->klass->_2.rank )
      {
        v56 = &v54->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerator_UserServantLeaderEntity__c **)v56 - 1) != System_Collections_Generic_IEnumerator_UserServantLeaderEntity__TypeInfo )
        {
          --v55;
          v56 += 4;
          if ( !v55 )
            goto LABEL_53;
        }
        v57 = (__int64)&v54->vtable[*v56];
      }
      else
      {
LABEL_53:
        v57 = sub_1C51E70(Enumerator, System_Collections_Generic_IEnumerator_UserServantLeaderEntity__TypeInfo, 0);
      }
      v58 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v57)(
              Enumerator,
              *(_QWORD *)(v57 + 8));
      if ( !v58 )
        sub_1C7BD40(0, v59);
      v60 = *p_userSvtEntity;
      if ( !*p_userSvtEntity )
        sub_1C7BD40(v58, v59);
      v61 = v60[2];
      v62 = *(_QWORD *)(v58 + 56);
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v278.fields.currentCryptoKey = v60[1];
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v278.fields.fakeValue = v61;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v274 = v278;
      if ( v62 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v274, 0) )
      {
        this->fields.isUseSupport = 1;
        break;
      }
    }
    v63 = Enumerator->klass;
    v64 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v65 = &v63->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v65 - 1) != System_IDisposable_TypeInfo )
      {
        --v64;
        v65 += 4;
        if ( !v64 )
          goto LABEL_65;
      }
      v66 = (__int64)&v63->vtable[*v65];
    }
    else
    {
LABEL_65:
      v66 = sub_1C51E70(Enumerator, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v66)(
      Enumerator,
      *(_QWORD *)(v66 + 8));
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_UserRecommendSupportMaster___);
    v67 = *p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_450;
    v68 = v67[2];
    v69 = (UserRecommendSupportMaster_o *)Master_object;
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v278.fields.currentCryptoKey = v67[1];
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v278.fields.fakeValue = v68;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v273 = v278;
    Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v273, 0);
    if ( !v69 )
      goto LABEL_450;
    this->fields.isUseRecommendSupport = UserRecommendSupportMaster__IsSettingServant(v69, Master_object, 0, 0);
    v70 = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_UserServantGrandMaster___);
    v71 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
    v72 = (UserServantGrandMaster_o *)v70;
    *(_OWORD *)&v272.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v272.fields.fakeValue = v71;
    Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v272, 0);
    if ( !v72 )
      goto LABEL_450;
    Master_object = UserServantGrandMaster__IsSettingServant(v72, Master_object, 0);
    v73 = this->fields.userSvtEntity;
    this->fields.isGrandSvt = Master_object & 1;
    if ( !v73 )
      goto LABEL_450;
    if ( UserServantEntity__IsCombineExp(v73, 0) )
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
    Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Master_object )
      goto LABEL_450;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Master_object,
                          (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4CE827C )
    {
      sub_1C7BAE8(&NetworkManager_TypeInfo);
      byte_4CE827C = 1;
    }
    Master_object = (int64_t)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Master_object = (int64_t)NetworkManager_TypeInfo;
    }
    v75 = *p_servantEntity;
    if ( !*p_servantEntity )
      goto LABEL_450;
    v77 = *(_QWORD *)&v75->fields.id.fields.currentCryptoKey;
    v76 = *(_QWORD *)&v75->fields.id.fields.fakeValue;
    v78 = *(_QWORD *)(*(_QWORD *)(Master_object + 184) + 64LL);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v290.fields.currentCryptoKey = v77;
    *(_QWORD *)&v290.fields.fakeValue = v76;
    Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v290, 0);
    if ( !MasterData_object )
      goto LABEL_450;
    if ( UserServantCommandCodeMaster__TryGetEntity(
           (UserServantCommandCodeMaster_o *)MasterData_object,
           &entity,
           v78,
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
    v47 = this->fields.type;
    if ( v47 == 10 )
    {
      Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Master_object )
        goto LABEL_450;
      v79 = DataManager__GetMasterData_object_(
              (DataManager_o *)Master_object,
              (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_UserServantCommandCardMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4CE827C )
      {
        sub_1C7BAE8(&NetworkManager_TypeInfo);
        byte_4CE827C = 1;
      }
      Master_object = (int64_t)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Master_object = (int64_t)NetworkManager_TypeInfo;
      }
      v80 = *p_servantEntity;
      if ( !*p_servantEntity )
        goto LABEL_450;
      v82 = *(_QWORD *)&v80->fields.id.fields.currentCryptoKey;
      v81 = *(_QWORD *)&v80->fields.id.fields.fakeValue;
      v83 = *(_QWORD *)(*(_QWORD *)(Master_object + 184) + 64LL);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v291.fields.currentCryptoKey = v82;
      *(_QWORD *)&v291.fields.fakeValue = v81;
      Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v291, 0);
      if ( !v79 )
        goto LABEL_450;
      Master_object = UserServantCommandCardMaster__TryGetEntity(
                        (UserServantCommandCardMaster_o *)v79,
                        &v286,
                        v83,
                        (int)Master_object,
                        0);
      if ( (Master_object & 1) != 0 )
      {
        if ( !v286 )
          goto LABEL_450;
        commandCardParam = v286->fields.commandCardParam;
        if ( commandCardParam )
        {
          max_length = commandCardParam->max_length;
          if ( max_length >= 1 )
          {
            v86 = 0;
            while ( 1 )
            {
              if ( (unsigned int)v86 >= max_length )
                goto LABEL_457;
              Master_object = (int64_t)BalanceConfig_TypeInfo;
              v87 = commandCardParam->m_Items[v86];
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                Master_object = (int64_t)BalanceConfig_TypeInfo;
              }
              if ( v87 < *(_DWORD *)(*(_QWORD *)(Master_object + 184) + 772LL) )
                break;
              this->fields.isCommandCardExceedMax = 1;
              max_length = commandCardParam->max_length;
              if ( (int)++v86 >= max_length )
                goto LABEL_122;
            }
            this->fields.isCommandCardExceedMax = 0;
          }
        }
      }
LABEL_122:
      v47 = this->fields.type;
    }
  }
  v88 = isMtSvt;
  if ( v47 == 1 )
  {
    this->fields.isMaterialSvt = v88;
    Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Master_object )
      goto LABEL_450;
    Master_object = (int64_t)DataManager__GetMasterData_object_(
                               (DataManager_o *)Master_object,
                               (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_UserServantLeaderMaster___);
    if ( !Master_object )
      goto LABEL_450;
    Master_object = *(_QWORD *)(Master_object + 40);
    if ( !Master_object )
      goto LABEL_450;
    v90 = System_Collections_ObjectModel_Collection_object___GetEnumerator(
            (System_Collections_ObjectModel_Collection_T__o *)Master_object,
            (const MethodInfo_33C6F68 *)Method_System_Collections_ObjectModel_Collection_UserServantLeaderEntity__GetEnumerator__);
    if ( !v90 )
      sub_1C7BD40(0, v89);
    while ( 1 )
    {
      v91 = v90->klass;
      v92 = *(unsigned __int16 *)&v90->klass->_2.rank;
      if ( *(_WORD *)&v90->klass->_2.rank )
      {
        v93 = &v91->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)v93 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v92;
          v93 += 4;
          if ( !v92 )
            goto LABEL_132;
        }
        v94 = (__int64)&v91->vtable[*v93];
      }
      else
      {
LABEL_132:
        v94 = sub_1C51E70(v90, System_Collections_IEnumerator_TypeInfo, 0);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v94)(
              v90,
              *(_QWORD *)(v94 + 8))
          & 1) == 0 )
        break;
      v95 = v90->klass;
      v96 = *(unsigned __int16 *)&v90->klass->_2.rank;
      if ( *(_WORD *)&v90->klass->_2.rank )
      {
        v97 = &v95->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerator_UserServantLeaderEntity__c **)v97 - 1) != System_Collections_Generic_IEnumerator_UserServantLeaderEntity__TypeInfo )
        {
          --v96;
          v97 += 4;
          if ( !v96 )
            goto LABEL_139;
        }
        v98 = (__int64)&v95->vtable[*v97];
      }
      else
      {
LABEL_139:
        v98 = sub_1C51E70(v90, System_Collections_Generic_IEnumerator_UserServantLeaderEntity__TypeInfo, 0);
      }
      v99 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v98)(
              v90,
              *(_QWORD *)(v98 + 8));
      if ( !v99 )
        sub_1C7BD40(0, v100);
      v101 = *p_userSvtEntity;
      if ( !*p_userSvtEntity )
        sub_1C7BD40(v99, v100);
      v102 = v101[2];
      v103 = *(_QWORD *)(v99 + 56);
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v278.fields.currentCryptoKey = v101[1];
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v278.fields.fakeValue = v102;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v271 = v278;
      if ( v103 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v271, 0) )
      {
        this->fields.isUseSupport = 1;
        break;
      }
    }
    v104 = v90->klass;
    v105 = *(unsigned __int16 *)&v90->klass->_2.rank;
    if ( *(_WORD *)&v90->klass->_2.rank )
    {
      v106 = &v104->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v106 - 1) != System_IDisposable_TypeInfo )
      {
        --v105;
        v106 += 4;
        if ( !v105 )
          goto LABEL_151;
      }
      v107 = (__int64)&v104->vtable[*v106];
    }
    else
    {
LABEL_151:
      v107 = sub_1C51E70(v90, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v107)(v90, *(_QWORD *)(v107 + 8));
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_UserRecommendSupportMaster___);
    v108 = *p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_450;
    v109 = v108[2];
    v110 = (UserRecommendSupportMaster_o *)Master_object;
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v278.fields.currentCryptoKey = v108[1];
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v278.fields.fakeValue = v109;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v270 = v278;
    Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v270, 0);
    if ( !v110 )
      goto LABEL_450;
    this->fields.isUseRecommendSupport = UserRecommendSupportMaster__IsSettingServant(v110, Master_object, 0, 0);
    v111 = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_UserServantGrandMaster___);
    v112 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
    v113 = (UserServantGrandMaster_o *)v111;
    *(_OWORD *)&v269.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v269.fields.fakeValue = v112;
    Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v269, 0);
    if ( !v113 )
      goto LABEL_450;
    this->fields.isGrandSvt = UserServantGrandMaster__IsSettingServant(v113, Master_object, 0);
    Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Master_object )
      goto LABEL_450;
    Master_object = (int64_t)DataManager__GetMasterData_object_(
                               (DataManager_o *)Master_object,
                               (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_CombineMaterialMaster___);
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
      v114 = *p_userSvtEntity;
      if ( !*p_userSvtEntity )
        goto LABEL_450;
      v116 = *(_QWORD *)&v114[5].fields.currentCryptoKey;
      v115 = *(_QWORD *)&v114[5].fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v292.fields.currentCryptoKey = v116;
      *(_QWORD *)&v292.fields.fakeValue = v115;
      v117 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v292, 0);
      if ( v117 == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(baseUsrSvtData->fields.svtId, 0) )
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
      Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Master_object )
        goto LABEL_450;
      Master_object = (int64_t)DataManager__GetMasterData_object_(
                                 (DataManager_o *)Master_object,
                                 (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ServantClassMaster___);
      if ( !*p_servantEntity )
        goto LABEL_450;
      if ( !Master_object )
        goto LABEL_450;
      Master_object = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                 (*p_servantEntity)->fields.classId,
                                 (const MethodInfo_342E2FC *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
      if ( !Master_object )
        goto LABEL_450;
      HIDWORD(v284) = *(_DWORD *)(Master_object + 56);
      SvtClassId = UserServantEntity__getSvtClassId(baseUsrSvtData, 0, 0, 0);
      SvtClassGroupType = UserServantEntity__getSvtClassGroupType(baseUsrSvtData, SvtClassId, 0);
      if ( System_Int32__Equals_65685244((int32_t)&v284 + 4, 3, 0)
        || System_Int32__Equals_65685244((int32_t)&v284 + 4, SvtClassGroupType, 0) && this->fields.isSameClass )
      {
        v120 = BalanceConfig_TypeInfo;
        materialExp = this->fields.materialExp;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v120 = BalanceConfig_TypeInfo;
        }
        SameClassExp = v120->static_fields->SameClassExp;
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        v123 = (double)materialExp * (double)SameClassExp / 1000.0;
        v124 = vcvtpd_s64_f64(v123);
        if ( ceil(v123) == INFINITY )
          v124 = 0x80000000;
        this->fields.materialExp = v124;
      }
    }
    else
    {
      this->fields.isLimitCntTarget = 0;
    }
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_ServantLimitMaster___);
    v125 = (UserServantEntity_o *)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_450;
    v126 = (ServantLimitMaster_o *)Master_object;
    v128 = *(_QWORD *)&v125->fields.svtId.fields.currentCryptoKey;
    v127 = *(_QWORD *)&v125->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v293.fields.currentCryptoKey = v128;
    *(_QWORD *)&v293.fields.fakeValue = v127;
    Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v293, 0);
    if ( !*p_userSvtEntity )
      goto LABEL_450;
    v129 = Master_object;
    Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776((*p_userSvtEntity)[6], 0);
    if ( !v126 )
      goto LABEL_450;
    Master_object = (int64_t)ServantLimitMaster__GetEntity(v126, v129, Master_object, 0);
    if ( !Master_object )
      goto LABEL_450;
    this->fields.hpBase = *(_DWORD *)(Master_object + 36);
    v130 = *(_DWORD *)(Master_object + 44);
    Master_object = (int64_t)this->fields.servantEntity;
    this->fields.atkBase = v130;
    if ( !Master_object )
      goto LABEL_450;
    Master_object = ServantEntity__get_IsStatusUp((ServantEntity_o *)Master_object, 0);
    if ( (Master_object & 1) != 0 )
    {
      *p_isStatusUpSvt = 1;
      if ( !baseUsrSvtData )
        goto LABEL_450;
      v131 = UserServantEntity__getSvtClassId(baseUsrSvtData, 0, 0, 0);
      Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Master_object )
        goto LABEL_450;
      Master_object = (int64_t)DataManager__GetMasterData_object_(
                                 (DataManager_o *)Master_object,
                                 (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ServantClassMaster___);
      if ( !*p_servantEntity )
        goto LABEL_450;
      if ( !Master_object )
        goto LABEL_450;
      Master_object = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                 (*p_servantEntity)->fields.classId,
                                 (const MethodInfo_342E2FC *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
      if ( !Master_object )
        goto LABEL_450;
      LODWORD(v284) = *(_DWORD *)(Master_object + 56);
      if ( !*p_servantEntity )
        goto LABEL_450;
      if ( (*p_servantEntity)->fields.classId == v131 || System_Int32__Equals_65685244((int32_t)&v284, 3, 0) )
      {
        this->fields.isCanStUp = 1;
        v132 = UserServantEntity__isAdjustAtkMax(baseUsrSvtData, 0) && this->fields.atkBase > 0;
        this->fields.isAtkUpMax = v132;
        v133 = UserServantEntity__isAdjustHpMax(baseUsrSvtData, 0) && this->fields.hpBase > 0;
        this->fields.isHpUpMax = v133;
        v134 = UserServantEntity__isSecondAdjustAtkMax(baseUsrSvtData, 0) && this->fields.atkBase > 0;
        this->fields.isAtkSecondUpMax = v134;
        v135 = UserServantEntity__isSecondAdjustHpMax(baseUsrSvtData, 0) && this->fields.hpBase > 0;
        this->fields.isHpSecondUpMax = v135;
      }
    }
    Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Master_object )
      goto LABEL_450;
    v136 = DataManager__GetMasterData_object_(
             (DataManager_o *)Master_object,
             (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4CE827C )
    {
      sub_1C7BAE8(&NetworkManager_TypeInfo);
      byte_4CE827C = 1;
    }
    Master_object = (int64_t)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Master_object = (int64_t)NetworkManager_TypeInfo;
    }
    v137 = *p_servantEntity;
    if ( !*p_servantEntity )
      goto LABEL_450;
    v139 = *(_QWORD *)&v137->fields.id.fields.currentCryptoKey;
    v138 = *(_QWORD *)&v137->fields.id.fields.fakeValue;
    v140 = *(_QWORD *)(*(_QWORD *)(Master_object + 184) + 64LL);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v294.fields.currentCryptoKey = v139;
    *(_QWORD *)&v294.fields.fakeValue = v138;
    Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v294, 0);
    if ( !v136 )
LABEL_450:
      sub_1C7BD40(Master_object, v22);
    v88 = isMtSvt;
    if ( UserServantCommandCodeMaster__TryGetEntity(
           (UserServantCommandCodeMaster_o *)v136,
           &v285,
           v140,
           (int)Master_object,
           0) )
    {
      Master_object = (int64_t)v285;
      if ( !v285 )
        goto LABEL_450;
      this->fields.isEquipedCmdCard = UserServantCommandCodeEntity__IsEquipedCommandCode(v285, 0);
      Master_object = (int64_t)v285;
      if ( !v285 )
        goto LABEL_450;
      this->fields.isCmdCardSlotOpen = UserServantCommandCodeEntity__IsCommandCardSlotOpen(v285, 0);
    }
  }
  v141 = this->fields.type;
  if ( v141 == 9 )
  {
    Master_object = UserServantEntity__isLimitCountMax(userSvtEntity, 0);
    v165 = this->fields.userSvtEntity;
    this->fields.isLimitCntMax = Master_object & 1;
    if ( v165 )
    {
      Master_object = UserServantEntity__isLevelMax(v165, 0);
      v166 = this->fields.userSvtEntity;
      this->fields.isLvMax = Master_object & 1;
      if ( v166 )
      {
        this->fields.isIgnoreCombineLimitSpecial = UserServantEntity__IsIgnoreCombineLimitSpecial(v166, 0);
        this->fields.isSealCombineLimit = CombineServantListViewItem__GetSealCombineLimit(this, v167);
        goto LABEL_279;
      }
    }
    goto LABEL_450;
  }
  if ( v141 != 2 )
    goto LABEL_280;
  v260 = v88;
  this->fields.isLimitCntMax = UserServantEntity__isLimitCountMax(userSvtEntity, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v142 = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  v144 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v143 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  v145 = (ServantLimitImageMaster_o *)v142;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v295.fields.currentCryptoKey = v144;
  *(_QWORD *)&v295.fields.fakeValue = v143;
  v146 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v295, 0);
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(
                    userSvtEntity->fields.limitCount,
                    0);
  if ( !v145 )
    goto LABEL_450;
  Master_object = ServantLimitImageMaster__IsServantLimitCountSeal(v145, v146, Master_object, 0);
  v147 = this->fields.userSvtEntity;
  v88 = v260;
  this->fields.isSealedLimitCount = Master_object & 1;
  if ( !v147 )
    goto LABEL_450;
  this->fields.isLvMax = UserServantEntity__isLevelMax(v147, 0);
  Master_object = CombineServantListViewItem__GetSealCombineLimit(this, v148);
  isHeroineSvt = this->fields.isHeroineSvt;
  this->fields.isSealCombineLimit = Master_object & 1;
  if ( isHeroineSvt )
    goto LABEL_279;
  if ( !*p_servantEntity )
    goto LABEL_450;
  v150 = (UserServantEntity_o *)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_450;
  combineLimitId = (*p_servantEntity)->fields.combineLimitId;
  v153 = *(_QWORD *)&v150->fields.limitCount.fields.currentCryptoKey;
  v152 = *(_QWORD *)&v150->fields.limitCount.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v296.fields.currentCryptoKey = v153;
  *(_QWORD *)&v296.fields.fakeValue = v152;
  v154 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v296, 0);
  Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_450;
  Master_object = (int64_t)DataManager__GetMasterData_object_(
                             (DataManager_o *)Master_object,
                             (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_CombineLimitMaster___);
  if ( !Master_object )
    goto LABEL_450;
  Master_object = (int64_t)CombineLimitMaster__GetEntity((CombineLimitMaster_o *)Master_object, combineLimitId, v154, 0);
  if ( !Master_object )
    goto LABEL_450;
  v156 = *(_QWORD *)(Master_object + 32);
  v155 = *(_QWORD *)(Master_object + 40);
  v157 = Master_object;
  Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_450;
  v256 = v157;
  Master_object = (int64_t)DataManager__GetMasterData_object_(
                             (DataManager_o *)Master_object,
                             (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !v155 )
    goto LABEL_450;
  v158 = *(_QWORD *)(v155 + 24);
  if ( (int)v158 < 1 )
    goto LABEL_436;
  v159 = (UserItemMaster_o *)Master_object;
  v160 = 0;
  while ( 1 )
  {
    if ( v160 >= (unsigned int)v158 )
      goto LABEL_457;
    if ( !v156 )
      goto LABEL_450;
    if ( v160 >= *(unsigned int *)(v156 + 24) )
      goto LABEL_457;
    v161 = (UserServantEntity_o *)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_450;
    v162 = *(_OWORD *)&v161->fields.userId.fields.fakeValue;
    v163 = *(_DWORD *)(v155 + 32 + 4 * v160);
    v164 = *(_DWORD *)(v156 + 32 + 4 * v160);
    *(_OWORD *)&v278.fields.currentCryptoKey = *(_OWORD *)&v161->fields.userId.fields.currentCryptoKey;
    *(_OWORD *)&v278.fields.fakeValue = v162;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v268 = v278;
    Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v268, 0);
    if ( !v159 )
      goto LABEL_450;
    Master_object = UserItemMaster__TryGetEntity(v159, &v283, Master_object, v163, 0);
    if ( (Master_object & 1) == 0 )
      goto LABEL_435;
    if ( !v283 )
      goto LABEL_450;
    if ( v163 == v283->fields.itemId )
      break;
LABEL_274:
    LODWORD(v158) = *(_DWORD *)(v155 + 24);
    if ( (__int64)++v160 >= (int)v158 )
      goto LABEL_436;
  }
  if ( v164 <= v283->fields.num )
  {
    *p_isLimitUpItemNum = 1;
    goto LABEL_274;
  }
LABEL_435:
  *p_isLimitUpItemNum = 0;
LABEL_436:
  if ( !v253 )
    goto LABEL_450;
  v88 = v260;
  if ( *(_QWORD *)(v253 + 96) < *(int *)(v256 + 24) )
    *p_isLimitUpItemNum = 0;
LABEL_279:
  v141 = this->fields.type;
LABEL_280:
  if ( v141 == 3 )
  {
    CombineServantListViewItem__SetSkillInfo(this, v22);
    v141 = this->fields.type;
  }
  if ( (unsigned int)(v141 - 11) <= 1 )
  {
    CombineServantListViewItem__SetAppendSkillInfo(this, v22);
    v141 = this->fields.type;
  }
  if ( v141 == 4 && !this->fields.isHeroineSvt )
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
          Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Master_object )
            goto LABEL_450;
          Master_object = (int64_t)DataManager__GetMasterData_object_(
                                     (DataManager_o *)Master_object,
                                     (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
          if ( !Master_object )
            goto LABEL_450;
          Master_object = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                     id,
                                     (const MethodInfo_342E2FC *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
          if ( !Master_object )
            goto LABEL_450;
          if ( lv < *(_DWORD *)(Master_object + 48) )
            this->fields.isTdLvMax = 0;
        }
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_UserServantMaster___);
        if ( Master_object )
        {
          SameSvtNpLvCache = UserServantMaster__getSameSvtNpLvCache(
                               (UserServantMaster_o *)Master_object,
                               (UserServantEntity_o *)*p_userSvtEntity,
                               &cachedUserServantNpLvDict,
                               0);
          if ( SameSvtNpLvCache < 1 || this->fields.isTdLvMax )
            goto LABEL_286;
          v192 = SameSvtNpLvCache;
          Master_object = CombineServantListViewItem__GetNpInfo(this, &tdLv[1], tdLv, &tdMaxLv, v191);
          if ( v253 )
          {
            v193 = *(_QWORD *)(v253 + 96);
            if ( v193 > 1200000 )
            {
              this->fields.isSameSvt = 1;
              goto LABEL_286;
            }
            Master_object = (int64_t)*p_userSvtEntity;
            if ( *p_userSvtEntity )
            {
              v247 = UserServantEntity__checkTreasureDeviceLevelUp((UserServantEntity_o *)Master_object, v192, 0);
              v248 = tdLv[0];
              if ( tdLv[0] >= v247 )
              {
                v251 = 0;
LABEL_449:
                this->fields.isSameSvt = v193 >= v251;
                goto LABEL_286;
              }
              v249 = tdLv[1];
              v250 = v247;
              v251 = 0;
              while ( 1 )
              {
                Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( !Master_object )
                  break;
                Master_object = (int64_t)DataManager__GetMasterData_object_(
                                           (DataManager_o *)Master_object,
                                           (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
                if ( !Master_object )
                  break;
                v252 = TreasureDvcLvMaster__GetEntity((TreasureDvcLvMaster_o *)Master_object, v249, v248, 0);
                if ( v252 )
                  v251 += v252->fields.qp;
                if ( v250 == ++v248 )
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
  v168 = this->fields.type;
  if ( v168 != 5 )
    goto LABEL_344;
  this->fields.isMaterialSvt = v88;
  Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_450;
  Master_object = (int64_t)DataManager__GetMasterData_object_(
                             (DataManager_o *)Master_object,
                             (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_UserServantLeaderMaster___);
  if ( !Master_object )
    goto LABEL_450;
  Master_object = *(_QWORD *)(Master_object + 40);
  if ( !Master_object )
    goto LABEL_450;
  v170 = System_Collections_ObjectModel_Collection_object___GetEnumerator(
           (System_Collections_ObjectModel_Collection_T__o *)Master_object,
           (const MethodInfo_33C6F68 *)Method_System_Collections_ObjectModel_Collection_UserServantLeaderEntity__GetEnumerator__);
  if ( !v170 )
    sub_1C7BD40(0, v169);
  while ( 1 )
  {
    v171 = v170->klass;
    v172 = *(unsigned __int16 *)&v170->klass->_2.rank;
    if ( *(_WORD *)&v170->klass->_2.rank )
    {
      v173 = &v171->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)v173 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v172;
        v173 += 4;
        if ( !v172 )
          goto LABEL_295;
      }
      v174 = (__int64)&v171->vtable[*v173];
    }
    else
    {
LABEL_295:
      v174 = sub_1C51E70(v170, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v174)(
            v170,
            *(_QWORD *)(v174 + 8))
        & 1) == 0 )
      break;
    v175 = v170->klass;
    v176 = *(unsigned __int16 *)&v170->klass->_2.rank;
    if ( *(_WORD *)&v170->klass->_2.rank )
    {
      v177 = &v175->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_UserServantLeaderEntity__c **)v177 - 1) != System_Collections_Generic_IEnumerator_UserServantLeaderEntity__TypeInfo )
      {
        --v176;
        v177 += 4;
        if ( !v176 )
          goto LABEL_302;
      }
      v178 = (__int64)&v175->vtable[*v177];
    }
    else
    {
LABEL_302:
      v178 = sub_1C51E70(v170, System_Collections_Generic_IEnumerator_UserServantLeaderEntity__TypeInfo, 0);
    }
    v179 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v178)(
             v170,
             *(_QWORD *)(v178 + 8));
    if ( !v179 )
      sub_1C7BD40(0, v180);
    v181 = (UserServantEntity_o *)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      sub_1C7BD40(v179, v180);
    v182 = *(_OWORD *)&v181->fields.id.fields.fakeValue;
    v183 = *(_QWORD *)(v179 + 56);
    *(_OWORD *)&v278.fields.currentCryptoKey = *(_OWORD *)&v181->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v278.fields.fakeValue = v182;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v267 = v278;
    if ( v183 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v267, 0) )
    {
      this->fields.isUseSupport = 1;
      break;
    }
  }
  v184 = v170->klass;
  v185 = *(unsigned __int16 *)&v170->klass->_2.rank;
  if ( *(_WORD *)&v170->klass->_2.rank )
  {
    v186 = &v184->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v186 - 1) != System_IDisposable_TypeInfo )
    {
      --v185;
      v186 += 4;
      if ( !v185 )
        goto LABEL_314;
    }
    v187 = (__int64)&v184->vtable[*v186];
  }
  else
  {
LABEL_314:
    v187 = sub_1C51E70(v170, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v187)(v170, *(_QWORD *)(v187 + 8));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_UserRecommendSupportMaster___);
  v194 = (UserServantEntity_o *)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_450;
  v195 = *(_OWORD *)&v194->fields.id.fields.fakeValue;
  v196 = (UserRecommendSupportMaster_o *)Master_object;
  *(_OWORD *)&v278.fields.currentCryptoKey = *(_OWORD *)&v194->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v278.fields.fakeValue = v195;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v266 = v278;
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v266, 0);
  if ( !v196 )
    goto LABEL_450;
  this->fields.isUseRecommendSupport = UserRecommendSupportMaster__IsSettingServant(v196, Master_object, 0, 0);
  v197 = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_UserServantGrandMaster___);
  v198 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  v199 = (UserServantGrandMaster_o *)v197;
  *(_OWORD *)&v265.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v265.fields.fakeValue = v198;
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v265, 0);
  if ( !v199 )
    goto LABEL_450;
  this->fields.isGrandSvt = UserServantGrandMaster__IsSettingServant(v199, Master_object, 0);
  v200 = baseUsrSvtData && UserServantEntity__IsEventJoin(baseUsrSvtData, 0);
  Master_object = (int64_t)this->fields.userSvtEntity;
  this->fields.isEventJoinBaseSvt = v200;
  if ( !Master_object )
    goto LABEL_450;
  IsMaterialTd = UserServantEntity__IsMaterialTd((UserServantEntity_o *)Master_object, 0);
  v168 = this->fields.type;
  this->fields.isMaterialTdSvt = IsMaterialTd;
LABEL_344:
  if ( v168 == 6 )
  {
    Master_object = (int64_t)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_450;
    Master_object = UserServantEntity__isExceedLvMax((UserServantEntity_o *)Master_object, 0);
    v202 = this->fields.userSvtEntity;
    this->fields.isLvExceedMax = Master_object & 1;
    if ( !v202 )
      goto LABEL_450;
    Master_object = UserServantEntity__isLimitCountMax(v202, 0);
    v203 = this->fields.userSvtEntity;
    this->fields.isLimitCntMax = Master_object & 1;
    if ( !v203 )
      goto LABEL_450;
    isLevelMax = UserServantEntity__isLevelMax(v203, 0);
    v205 = this->fields.isHeroineSvt;
    this->fields.isLvMax = isLevelMax;
    if ( !v205 || UserServantEntity__IsUseLevelExceedItemHeroine(userSvtEntity, 0) )
    {
      Master_object = (int64_t)*p_userSvtEntity;
      if ( !*p_userSvtEntity )
        goto LABEL_450;
      SvtExceedEnt = UserServantEntity__getSvtExceedEnt((UserServantEntity_o *)Master_object, 0);
      if ( SvtExceedEnt )
      {
        v207 = (int32_t *)SvtExceedEnt;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_CommonConsumeMaster___);
        if ( !Master_object )
          goto LABEL_450;
        IdEntityList = CommonConsumeMaster__GetIdEntityList((CommonConsumeMaster_o *)Master_object, v207[12], 0);
        if ( IdEntityList )
        {
          v209 = IdEntityList;
          v210 = (System_Collections_Generic_HashSet_int__o *)sub_1C7BD34(System_Collections_Generic_HashSet_int__TypeInfo);
          System_Collections_Generic_HashSet_int____ctor(
            v210,
            (const MethodInfo_36E9940 *)Method_System_Collections_Generic_HashSet_int___ctor__);
          v211 = (System_Collections_Generic_HashSet_int__o *)sub_1C7BD34(System_Collections_Generic_HashSet_int__TypeInfo);
          System_Collections_Generic_HashSet_int____ctor(
            v211,
            (const MethodInfo_36E9940 *)Method_System_Collections_Generic_HashSet_int___ctor__);
          v212 = v209->max_length;
          if ( v212 >= 1 )
          {
            v213 = 0;
            while ( (unsigned int)v213 < v212 )
            {
              v214 = v209->m_Items[v213];
              if ( !v214 )
                goto LABEL_450;
              if ( !v210 )
                goto LABEL_450;
              Master_object = System_Collections_Generic_HashSet_int___Add(
                                v210,
                                v214->fields.objectId,
                                (const MethodInfo_36EAB44 *)Method_System_Collections_Generic_HashSet_int__Add__);
              if ( !v211 )
                goto LABEL_450;
              Master_object = System_Collections_Generic_HashSet_int___Add(
                                v211,
                                v214->fields.num,
                                (const MethodInfo_36EAB44 *)Method_System_Collections_Generic_HashSet_int__Add__);
              v212 = v209->max_length;
              if ( (int)++v213 >= v212 )
                goto LABEL_363;
            }
LABEL_457:
            sub_1C7BD48(Master_object);
          }
LABEL_363:
          if ( v207[13] >= 1 )
          {
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_SvtCoinMaster___);
            v215 = (UserServantEntity_o *)*p_userSvtEntity;
            if ( *p_userSvtEntity )
            {
              v216 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
              v218 = *(_QWORD *)&v215->fields.svtId.fields.currentCryptoKey;
              v217 = *(_QWORD *)&v215->fields.svtId.fields.fakeValue;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v297.fields.currentCryptoKey = v218;
              *(_QWORD *)&v297.fields.fakeValue = v217;
              Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v297, 0);
              if ( v216 )
              {
                Master_object = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                           v216,
                                           Master_object,
                                           (const MethodInfo_342E2FC *)Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__GetEntity__);
                if ( Master_object )
                {
                  if ( v210 )
                  {
                    Master_object = System_Collections_Generic_HashSet_int___Add(
                                      v210,
                                      *(_DWORD *)(Master_object + 24),
                                      (const MethodInfo_36EAB44 *)Method_System_Collections_Generic_HashSet_int__Add__);
                    if ( v211 )
                    {
                      System_Collections_Generic_HashSet_int___Add(
                        v211,
                        v207[13],
                        (const MethodInfo_36EAB44 *)Method_System_Collections_Generic_HashSet_int__Add__);
                      goto LABEL_374;
                    }
                  }
                }
              }
            }
            goto LABEL_450;
          }
LABEL_374:
          v219 = (UserServantEntity_o *)*p_userSvtEntity;
          v220 = System_Linq_Enumerable__ToArray_int_(
                   (System_Collections_Generic_IEnumerable_TSource__o *)v210,
                   (const MethodInfo_31AF04C *)Method_System_Linq_Enumerable_ToArray_int___);
          Master_object = (int64_t)System_Linq_Enumerable__ToArray_int_(
                                     (System_Collections_Generic_IEnumerable_TSource__o *)v211,
                                     (const MethodInfo_31AF04C *)Method_System_Linq_Enumerable_ToArray_int___);
          if ( !v253 )
            goto LABEL_450;
          this->fields.isLvExceedItemNum = CombineUtility__CheckCombineNeedItemsEnough(
                                             v219,
                                             v220,
                                             (System_Int32_array *)Master_object,
                                             *(_QWORD *)(v253 + 96),
                                             v207[8],
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
    v221 = *(_QWORD *)&v258->fields.friendshipRank.fields.currentCryptoKey;
    v222 = *(_QWORD *)&v258->fields.friendshipRank.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v298.fields.currentCryptoKey = v221;
    *(_QWORD *)&v298.fields.fakeValue = v222;
    Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v298, 0);
    v223 = *p_servantEntity;
    if ( !*p_servantEntity )
      goto LABEL_450;
    v224 = (_DWORD)Master_object == v258->fields.friendshipExceedCount + v223->fields.maxFriendshipRank;
    this->fields.isFriendshipRankMax = v224;
    if ( v224 && !this->fields.isFriendshipExceedMax )
    {
      if ( this->fields.isHeroineSvt )
      {
        Master_object = UserServantEntity__IsUseFriendshipExceedItemHeroine(userSvtEntity, 0);
        if ( (Master_object & 1) == 0 )
          goto LABEL_384;
        v223 = *p_servantEntity;
        if ( !*p_servantEntity )
          goto LABEL_450;
      }
      maxFriendshipRank = v223->fields.maxFriendshipRank;
      friendshipExceedCount = v258->fields.friendshipExceedCount;
      Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Master_object )
        goto LABEL_450;
      Master_object = (int64_t)DataManager__GetMasterData_object_(
                                 (DataManager_o *)Master_object,
                                 (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_FriendshipMaster___);
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
      v241 = *(_QWORD *)(Master_object + 32);
      v240 = *(_QWORD *)(Master_object + 40);
      v242 = Master_object;
      Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Master_object )
        goto LABEL_450;
      Master_object = (int64_t)DataManager__GetMasterData_object_(
                                 (DataManager_o *)Master_object,
                                 (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_UserItemMaster___);
      if ( !v240 )
        goto LABEL_450;
      if ( *(int *)(v240 + 24) < 1 )
      {
LABEL_432:
        if ( !v253 )
          goto LABEL_450;
        if ( *(_QWORD *)(v253 + 96) < *(int *)(v242 + 28) )
          this->fields.isFriendshipExceedItemNum = 0;
        goto LABEL_384;
      }
      v243 = (UserItemMaster_o *)Master_object;
      v244 = 0;
      v245 = v240 + 32;
      while ( 1 )
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4CE827C )
        {
          sub_1C7BAE8(&NetworkManager_TypeInfo);
          byte_4CE827C = 1;
        }
        Master_object = (int64_t)NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          Master_object = (int64_t)NetworkManager_TypeInfo;
        }
        if ( v244 >= *(unsigned int *)(v240 + 24) )
          goto LABEL_457;
        if ( !v243 )
          goto LABEL_450;
        Master_object = UserItemMaster__TryGetEntity(
                          v243,
                          &v279,
                          *(_QWORD *)(*(_QWORD *)(Master_object + 184) + 64LL),
                          *(_DWORD *)(v245 + 4 * v244),
                          0);
        if ( (Master_object & 1) == 0 )
          break;
        if ( v244 >= *(unsigned int *)(v240 + 24) )
          goto LABEL_457;
        if ( !v279 )
          goto LABEL_450;
        if ( *(_DWORD *)(v245 + 4 * v244) == v279->fields.itemId )
        {
          if ( !v241 )
            goto LABEL_450;
          if ( v244 >= *(unsigned int *)(v241 + 24) )
            goto LABEL_457;
          v246 = *(_DWORD *)(v241 + 32 + 4 * v244) <= v279->fields.num;
          goto LABEL_430;
        }
LABEL_431:
        if ( (__int64)++v244 >= *(int *)(v240 + 24) )
          goto LABEL_432;
      }
      v246 = 0;
LABEL_430:
      this->fields.isFriendshipExceedItemNum = v246;
      goto LABEL_431;
    }
  }
LABEL_384:
  Master_object = (int64_t)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_450;
  Master_object = UserServantEntity__getDispLimitCount((UserServantEntity_o *)Master_object, 0, 0);
  v225 = this->fields.userSvtEntity;
  this->fields.dispLimitCount = Master_object;
  if ( !v225 )
    goto LABEL_450;
  SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v225, -1, -1, 0);
  this->fields.skillCategoryIdList = SkillCategoryIdList;
  sub_1C7BA8C(&this->fields.skillCategoryIdList, SkillCategoryIdList);
  Master_object = (int64_t)this->fields.userSvtEntity;
  if ( !Master_object )
    goto LABEL_450;
  TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                   (UserServantEntity_o *)Master_object,
                                   0,
                                   -1,
                                   0);
  this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
  sub_1C7BA8C(&this->fields.tdCategoryIdList, TreasureDeviceCategoryIdList);
  Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_450;
  Master_object = (int64_t)DataManager__GetMasterData_object_(
                             (DataManager_o *)Master_object,
                             (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Master_object )
    goto LABEL_450;
  Master_object = (int64_t)DataMasterBase_object__object__int___GetEntity(
                             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                             this->fields.classId,
                             (const MethodInfo_342E2FC *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !Master_object )
    goto LABEL_450;
  v228 = *(int *)(Master_object + 52);
  v229 = this->fields.servantEntity;
  this->fields.priority = v228;
  this->fields.sortValue1B = v228;
  if ( !v229 )
    goto LABEL_450;
  v230 = (UserServantEntity_o *)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_450;
  v231 = ((__int64)v229->fields.collectionNo << 16)
       | ((unsigned __int64)(unsigned int)this->fields.rarity << 48)
       | v230->fields.lv;
  v232 = type == 2 && !this->fields.isLimitCntMax;
  this->fields.sortValue2 = v231 | v232;
  v234 = *(_QWORD *)&v230->fields.svtId.fields.currentCryptoKey;
  v233 = *(_QWORD *)&v230->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v299.fields.currentCryptoKey = v234;
  *(_QWORD *)&v299.fields.fakeValue = v233;
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v299, 0);
  v235 = this->fields.userSvtEntity;
  this->fields.sortValue2B = (int)Master_object;
  if ( !v235 )
    goto LABEL_450;
  v236 = *(_OWORD *)&v235->fields.id.fields.fakeValue;
  *(_OWORD *)&v278.fields.currentCryptoKey = *(_OWORD *)&v235->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v278.fields.fakeValue = v236;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v264 = v278;
  v237 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v264, 0);
  Master_object = (int64_t)this->fields.iconLabelInfo1;
  this->fields.sortValueLast = v237;
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

  if ( (byte_4CE8505 & 1) == 0 )
  {
    sub_1C7BAE8(&SvtUseSkillData_TypeInfo);
    byte_4CE8505 = 1;
  }
  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
    return UserServantEntity__getAppendSkillInfo(userSvtEntity, 0);
  v5 = (SvtUseSkillData_o *)sub_1C7BD34(SvtUseSkillData_TypeInfo);
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
      sub_1C7BD40(TreasureDeviceInfo, v10);
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

  if ( (byte_4CE8506 & 1) == 0 )
  {
    sub_1C7BAE8(&CondType_TypeInfo);
    sub_1C7BAE8(&Method_DataManager_GetMaster_CombineLimitReleaseMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    byte_4CE8506 = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_CombineLimitReleaseMaster___);
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
    sub_1C7BD40(Master_object, v4);
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

  if ( (byte_4CE8504 & 1) == 0 )
  {
    sub_1C7BAE8(&BalanceConfig_TypeInfo);
    sub_1C7BAE8(&SkillInfo___TypeInfo);
    byte_4CE8504 = 1;
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
    v7 = (SkillInfo_array *)sub_1C7BB90(SkillInfo___TypeInfo, (unsigned int)v6->static_fields->SvtSkillListMax);
    *skillInfoList = v7;
    sub_1C7BA8C(skillInfoList, v7);
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

  if ( (byte_4CE84FA & 1) == 0 )
  {
    sub_1C7BAE8(&FilterKindList_TypeInfo);
    sub_1C7BAE8(&ListViewSort_FilterKind___TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    sub_1C7BAE8(&ServantEventBonusFilterController_TypeInfo);
    byte_4CE84FA = 1;
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
                                        (const MethodInfo_38260BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                            (const MethodInfo_38260BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                           (const MethodInfo_38260BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                           (const MethodInfo_38260BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                           (const MethodInfo_38260BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
        sub_1C7BA8C(&this->fields.skillCategoryIdList, SkillCategoryIdList);
        ClassGroupFilterKindList = (__int64)this->fields.userSvtEntity;
        if ( !ClassGroupFilterKindList )
          goto LABEL_69;
        TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                         (UserServantEntity_o *)ClassGroupFilterKindList,
                                         0,
                                         -1,
                                         0);
        this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
        sub_1C7BA8C(&this->fields.tdCategoryIdList, TreasureDeviceCategoryIdList);
      }
    }
    ClassGroupFilterKindList = sub_1C7BB90(ListViewSort_FilterKind___TypeInfo, 1);
    if ( !ClassGroupFilterKindList )
      goto LABEL_69;
    if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
      goto LABEL_70;
    *(_DWORD *)(ClassGroupFilterKindList + 32) = 50;
    IsUnSelectedAllTargetFilters = ListViewSort__IsUnSelectedAllTargetFilters(
                                     sort,
                                     (ListViewSort_FilterKind_array *)ClassGroupFilterKindList,
                                     0);
    ClassGroupFilterKindList = sub_1C7BB90(ListViewSort_FilterKind___TypeInfo, 1);
    if ( !ClassGroupFilterKindList )
      goto LABEL_69;
    if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
LABEL_70:
      sub_1C7BD48(ClassGroupFilterKindList);
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
  ClassGroupFilterKindList = sub_1C7BB90(ListViewSort_FilterKind___TypeInfo, 1);
  if ( !ClassGroupFilterKindList )
LABEL_69:
    sub_1C7BD40(ClassGroupFilterKindList, sort);
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
                                           (const MethodInfo_38260BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
  if ( (byte_4CE84FB & 1) == 0 )
  {
    sub_1C7BAE8(&FilterKindList_TypeInfo);
    sub_1C7BAE8(&ListViewSort_FilterKind___TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    this = (CombineServantListViewItem_o *)sub_1C7BAE8(&ServantEventBonusFilterController_TypeInfo);
    byte_4CE84FB = 1;
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
                                          (const MethodInfo_38260BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                            (const MethodInfo_38260BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, v9, 0) )
    {
      this = (CombineServantListViewItem_o *)sub_1C7BB90(ListViewSort_FilterKind___TypeInfo, 1);
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
                                           (const MethodInfo_38260BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                           (const MethodInfo_38260BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                           (const MethodInfo_38260BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
      sub_1C7BA8C(&v4->fields.skillCategoryIdList, SkillCategoryIdList);
      this = (CombineServantListViewItem_o *)v4->fields.userSvtEntity;
      if ( !this )
        goto LABEL_86;
      TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                       (UserServantEntity_o *)this,
                                       0,
                                       -1,
                                       0);
      v4->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
      sub_1C7BA8C(&v4->fields.tdCategoryIdList, TreasureDeviceCategoryIdList);
    }
  }
  this = (CombineServantListViewItem_o *)sub_1C7BB90(ListViewSort_FilterKind___TypeInfo, 1);
  if ( !this )
    goto LABEL_86;
  if ( !this->fields.sortIndex )
    goto LABEL_87;
  LODWORD(this->fields.sortValue0) = 50;
  IsUnSelectedAllTargetFilters = ListViewSort__IsUnSelectedAllTargetFilters(
                                   sort,
                                   (ListViewSort_FilterKind_array *)this,
                                   0);
  this = (CombineServantListViewItem_o *)sub_1C7BB90(ListViewSort_FilterKind___TypeInfo, 1);
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
  this = (CombineServantListViewItem_o *)sub_1C7BB90(ListViewSort_FilterKind___TypeInfo, 1);
  if ( !this )
LABEL_86:
    sub_1C7BD40(this, sort);
  if ( !this->fields.sortIndex )
    goto LABEL_87;
  LODWORD(this->fields.sortValue0) = 39;
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)this, 0) )
  {
    this = (CombineServantListViewItem_o *)sub_1C7BB90(ListViewSort_FilterKind___TypeInfo, 1);
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
    sub_1C7BD48(this);
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
                                           (const MethodInfo_38260BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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

  if ( (byte_4CE84F9 & 1) == 0 )
  {
    sub_1C7BAE8(&FilterKindList_TypeInfo);
    sub_1C7BAE8(&ListViewSort_FilterKind___TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    sub_1C7BAE8(&ServantEventBonusFilterController_TypeInfo);
    byte_4CE84F9 = 1;
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
                                        (const MethodInfo_38260BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                            (const MethodInfo_38260BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                           (const MethodInfo_38260BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                           (const MethodInfo_38260BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
        sub_1C7BA8C(&this->fields.skillCategoryIdList, SkillCategoryIdList);
        ClassGroupFilterKindList = (__int64)this->fields.userSvtEntity;
        if ( !ClassGroupFilterKindList )
          goto LABEL_64;
        TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                         (UserServantEntity_o *)ClassGroupFilterKindList,
                                         0,
                                         -1,
                                         0);
        this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
        sub_1C7BA8C(&this->fields.tdCategoryIdList, TreasureDeviceCategoryIdList);
      }
    }
    ClassGroupFilterKindList = sub_1C7BB90(ListViewSort_FilterKind___TypeInfo, 1);
    if ( !ClassGroupFilterKindList )
      goto LABEL_64;
    if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
      goto LABEL_65;
    *(_DWORD *)(ClassGroupFilterKindList + 32) = 50;
    IsUnSelectedAllTargetFilters = ListViewSort__IsUnSelectedAllTargetFilters(
                                     sort,
                                     (ListViewSort_FilterKind_array *)ClassGroupFilterKindList,
                                     0);
    ClassGroupFilterKindList = sub_1C7BB90(ListViewSort_FilterKind___TypeInfo, 1);
    if ( !ClassGroupFilterKindList )
      goto LABEL_64;
    if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
LABEL_65:
      sub_1C7BD48(ClassGroupFilterKindList);
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
  ClassGroupFilterKindList = sub_1C7BB90(ListViewSort_FilterKind___TypeInfo, 1);
  if ( !ClassGroupFilterKindList )
LABEL_64:
    sub_1C7BD40(ClassGroupFilterKindList, sort);
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
                                           (const MethodInfo_38260BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
    sub_1C7BD40(0, method);
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
    sub_1C7BD40(0, method);
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

  if ( (byte_4CE84F8 & 1) == 0 )
  {
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4CE84F8 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame || (userSvtEntity = this->fields.userSvtEntity) == 0 )
    sub_1C7BD40(SelfUserGame, v4);
  v6 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  pushUserSvtId = SelfUserGame->fields.pushUserSvtId;
  *(_OWORD *)&v9.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v9.fields.fakeValue = v6;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v8 = v9;
  this->fields.isPush = pushUserSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v8, 0);
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

  if ( (byte_4CE84F7 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMaster_CombineAppendPassiveSkillMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_SkillMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_SvtAppendPassiveSkillUnlockMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_Any_int___);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CE84F7 = 1;
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
      userSvtEntity = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_SkillMaster___);
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
                        (const MethodInfo_342E2FC *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
      svtSkillLvList = v5->fields.svtSkillLvList;
      if ( !svtSkillLvList )
        goto LABEL_79;
      if ( v10 >= LODWORD(svtSkillLvList->max_length) )
LABEL_82:
        sub_1C7BD48(userSvtEntity);
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
  v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v47, 0);
  this->fields.isAppendSkillExChangeLimit = UserServantAppendPassiveSkillMaster__IsAppendSkillExchangeLimit(v17, 0);
  v18 = (System_Collections_Generic_List_int__o *)sub_1C7BD34(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v18,
    (const MethodInfo_3821584 *)Method_System_Collections_Generic_List_int___ctor__);
  v19 = v5->fields.svtUseSkillIdList;
  if ( !v19 )
LABEL_79:
    sub_1C7BD40(userSvtEntity, method);
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
        userSvtEntity = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_CombineAppendPassiveSkillMaster___);
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
        userSvtEntity = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v48, 0);
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
                *(const MethodInfo_3821DD8 **)(*(_QWORD *)(v45 + 192) + 112LL));
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
    userSvtEntity = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_SvtAppendPassiveSkillUnlockMaster___);
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
    userSvtEntity = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v49, 0);
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
                                          (const MethodInfo_317BCD4 *)Method_System_Linq_Enumerable_Any_int___);
  this->fields.isAppendSkillOpenItemNum = System_Linq_Enumerable__Any_int_(
                                            (System_Collections_Generic_IEnumerable_TSource__o *)v18,
                                            (const MethodInfo_317BCD4 *)Method_System_Linq_Enumerable_Any_int___);
}


void CombineServantListViewItem__SetIsCombineExpCampaignTarget(
        CombineServantListViewItem_o *this,
        System_Collections_Generic_List_EventCampaignEntity__o *eventCampaignEntities,
        const MethodInfo *method)
{
  CombineServantListViewItem___c_c *v5; // x0
  System_Predicate_object__o *_9__118_0; // x21
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

  if ( (byte_4CE84FD & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Array_IndexOf_int___);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventCampaignEntity__FindAll__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    sub_1C7BAE8(&System_Predicate_EventCampaignEntity__TypeInfo);
    sub_1C7BAE8(&Method_CombineServantListViewItem___c__SetIsCombineExpCampaignTarget_b__118_0__);
    sub_1C7BAE8(&CombineServantListViewItem___c_TypeInfo);
    byte_4CE84FD = 1;
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
    _9__118_0 = (System_Predicate_object__o *)v5->static_fields->__9__118_0;
    if ( !_9__118_0 )
    {
      if ( !v5->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v5);
        v5 = CombineServantListViewItem___c_TypeInfo;
      }
      v7 = (Il2CppObject *)v5->static_fields->__9;
      _9__118_0 = (System_Predicate_object__o *)sub_1C7BD34(System_Predicate_EventCampaignEntity__TypeInfo);
      System_Predicate_object____ctor(
        _9__118_0,
        v7,
        Method_CombineServantListViewItem___c__SetIsCombineExpCampaignTarget_b__118_0__,
        0);
      static_fields = CombineServantListViewItem___c_TypeInfo->static_fields;
      static_fields->__9__118_0 = (struct System_Predicate_EventCampaignEntity__o *)_9__118_0;
      sub_1C7BA8C(&static_fields->__9__118_0, _9__118_0);
    }
    All = System_Collections_Generic_List_object___FindAll(
            (System_Collections_Generic_List_object__o *)eventCampaignEntities,
            (System_Predicate_T__o *)_9__118_0,
            (const MethodInfo_383F50C *)Method_System_Collections_Generic_List_EventCampaignEntity__FindAll__);
    if ( !All )
      sub_1C7BD40(0, v10);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v16,
      (System_Collections_Generic_List_object__o *)All,
      (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    v17 = v16;
    klass = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        v12 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v17,
                (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
        if ( !v12 )
        {
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v17,
            (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
          this->fields.combineExpCampaignValue = (float)klass / 1000.0;
          return;
        }
        current = v17.fields._current;
        if ( !v17.fields._current )
          sub_1C7BD40(v12, v13);
        if ( HIDWORD(v17.fields._current[1].klass) == 27 )
          break;
        if ( (System_Array__IndexOf_int_(
                (System_Int32_array *)v17.fields._current[2].monitor,
                this->fields.svtId,
                (const MethodInfo_3275200 *)Method_System_Array_IndexOf_int___)
            & 0x80000000) == 0 )
          goto LABEL_20;
      }
      userSvtEntity = this->fields.userSvtEntity;
      if ( !userSvtEntity )
        sub_1C7BD40(0, v13);
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
  sub_1C7BA8C(&this->fields._NoticeTween_k__BackingField, noticeTween);
}


void CombineServantListViewItem__SetOverwriteStatus(CombineServantListViewItem_o *this, const MethodInfo *method)
{
  void *userSvtEntity; // x0

  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity
    || (userSvtEntity = UserServantEntity__GetOverwriteStatus((UserServantEntity_o *)userSvtEntity, 0, 0)) == 0 )
  {
    sub_1C7BD40(userSvtEntity, method);
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

  if ( (byte_4CE84F6 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_CombineSkillMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1C7BAE8(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CE84F6 = 1;
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
        SelfUserGame = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !SelfUserGame )
          goto LABEL_60;
        SelfUserGame = (int64_t)DataManager__GetMasterData_object_(
                                  (DataManager_o *)SelfUserGame,
                                  (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_SkillMaster___);
        if ( !SelfUserGame )
          goto LABEL_60;
        SelfUserGame = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)SelfUserGame,
                                  v11,
                                  (const MethodInfo_342E2FC *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
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
  SelfUserGame = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_60;
  SelfUserGame = (int64_t)DataManager__GetMasterData_object_(
                            (DataManager_o *)SelfUserGame,
                            (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_CombineSkillMaster___);
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
          SelfUserGame = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !SelfUserGame )
            goto LABEL_60;
          SelfUserGame = (int64_t)DataManager__GetMasterData_object_(
                                    (DataManager_o *)SelfUserGame,
                                    (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_UserItemMaster___);
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
              SelfUserGame = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v36, 0);
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
                *(const MethodInfo_3821DD8 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
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
    sub_1C7BD48(SelfUserGame);
  }
LABEL_58:
  enableSkillUp = this->fields.enableSkillUp;
  if ( !enableSkillUp )
LABEL_60:
    sub_1C7BD40(SelfUserGame, v4);
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

  if ( (byte_4CE84FC & 1) == 0 )
  {
    sub_1C7BAE8(&Method_BasicHelper_Any_EventGroupEntity___);
    sub_1C7BAE8(&CombineServantListViewManager_TypeInfo);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ServantFilterMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_EventGroupMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&System_Func_EventGroupEntity__bool__TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventGroupEntity__get_Count__);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C7BAE8(&TutorialFlag_TypeInfo);
    sub_1C7BAE8(&Method_CombineServantListViewItem___c__DisplayClass117_0__SetSortValue_b__0__);
    sub_1C7BAE8(&CombineServantListViewItem___c__DisplayClass117_0_TypeInfo);
    byte_4CE84FC = 1;
  }
  *(_QWORD *)tdMaxLv = 0;
  v5 = (Il2CppObject *)sub_1C7BD34(CombineServantListViewItem___c__DisplayClass117_0_TypeInfo);
  System_Object___ctor(v5, 0);
  if ( !v5 )
    goto LABEL_310;
  v5[1].klass = (Il2CppClass *)this;
  iconLabelInfo2 = sub_1C7BA8C(&v5[1], this);
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
            iconLabelInfo2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v82, 0);
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
            IconLabelInfo__Set_41483756(v54, 2, v55, iconLabelInfo2, 0, 0, 0, v56->fields.lv, 0, 0);
            v57 = this->fields.type;
            if ( v57 != 10 && v57 != 7 )
              goto LABEL_267;
            v58 = this->fields.userSvtEntity;
            if ( !v58 )
              break;
            iconLabelInfo2 = (__int64)this->fields.iconLabelInfo2;
            if ( !iconLabelInfo2 )
              break;
            IconLabelInfo__Set_41483756(
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
              UserServantEntity__getTreasureDeviceInfo_43714172(
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
              IconLabelInfo__Set_41483756(
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
              IconLabelInfo__Set_41483756(v65, 2, v80, iconLabelInfo2, 0, 0, 0, 0, 0, 0);
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
            IconLabelInfo__Set_41483756(v67, 3, hp, iconLabelInfo2, 0, 0, 0, 0, 0, 0);
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
            IconLabelInfo__Set_41483756(v69, 5, atk, iconLabelInfo2, 0, 0, 0, 0, 0, 0);
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
            IconLabelInfo__Set_41483756((IconLabelInfo_o *)iconLabelInfo2, 7, cost, 0, 0, 0, 0, 0, 0, 0);
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
            IconLabelInfo__Set_41483756(v62, 2, v63, v61, 0, 0, 0, 0, 0, 0);
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
        sub_1C7BD40(iconLabelInfo2, v7);
      }
      switch ( this->fields.type )
      {
        case 0:
          if ( this->fields.isHeroineSvt )
          {
            if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
            if ( TutorialFlag__Get_40989036(126, 0) )
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
                *(_OWORD *)p_sortValue0 = xmmword_CF5210;
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
            if ( TutorialFlag__Get_40989036(126, 0) )
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
          if ( !TutorialFlag__Get_40989036(126, 0) )
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
            if ( TutorialFlag__Get_40989036(126, 0) )
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
            if ( TutorialFlag__Get_40989036(126, 0) )
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
          if ( TutorialFlag__Get_40989036(126, 0) )
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
        iconLabelInfo2 = (__int64)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_EventGroupMaster___);
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
            sub_1C7BA8C(p_monitor, v33);
            v35 = (System_Func_object__bool__o *)sub_1C7BD34(System_Func_EventGroupEntity__bool__TypeInfo);
            System_Func_object__bool____ctor(
              v35,
              v5,
              Method_CombineServantListViewItem___c__DisplayClass117_0__SetSortValue_b__0__,
              0);
            this->fields.isEventUpVal = BasicHelper__Any_object_(
                                          (System_Collections_Generic_List_T__o *)EntitiesByGroupId,
                                          (System_Func_T__bool__o *)v35,
                                          (const MethodInfo_3159728 *)Method_BasicHelper_Any_EventGroupEntity___);
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
          v31 = (CombineServantListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(
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
        iconLabelInfo2 = (__int64)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_EventCampaignMaster___);
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
        iconLabelInfo2 = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !iconLabelInfo2 )
          goto LABEL_310;
        MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)iconLabelInfo2,
                              (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ServantFilterMaster___);
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
    sub_1C7BD40(0, method);
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

  if ( (byte_4CE8500 & 1) == 0 )
  {
    sub_1C7BAE8(&TutorialFlag_TypeInfo);
    byte_4CE8500 = 1;
  }
  if ( !this->fields.isHeroineSvt )
    goto LABEL_47;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_40989036(126, 0) )
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
          sub_1C7BD40(UserSvtEntity, v6);
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

  if ( (byte_4CE8501 & 1) == 0 )
  {
    sub_1C7BAE8(&TutorialFlag_TypeInfo);
    byte_4CE8501 = 1;
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
    if ( TutorialFlag__Get_40989036(126, 0) )
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
    sub_1C7BD40(v6, v5);
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
    sub_1C7BD40(0, method);
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
    sub_1C7BD40(0, method);
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
    sub_1C7BD40(0, v4);
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
    sub_1C7BD40(0, method);
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
    sub_1C7BD40(0, method);
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
  Il2CppObject *Entity; // x0

  if ( (byte_4CE8502 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMaster_SvtCoinMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__GetEntity__);
    byte_4CE8502 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_SvtCoinMaster___);
  if ( !Master_object )
    sub_1C7BD40(0, v4);
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             this->fields.svtId,
             (const MethodInfo_342E2FC *)Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__GetEntity__);
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

  if ( (byte_4CE8503 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMaster_UserSvtCoinMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4CE8503 = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_UserSvtCoinMaster___);
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
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v13, 0);
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
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v16, 0);
  if ( !v7 )
    goto LABEL_17;
  Master_object = UserSvtCoinMaster__TryGetEntity(v7, &entity, v9, Master_object, 0);
  if ( (Master_object & 1) != 0 )
  {
    if ( entity )
      return entity->fields.num;
LABEL_17:
    sub_1C7BD40(Master_object, v4);
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
  if ( (byte_4CE84FE & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C7BAE8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    this = (CombineServantListViewItem_o *)sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CE84FE = 1;
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
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v10, 0);
  this = (CombineServantListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (this = (CombineServantListViewItem_o *)DataManager__GetMasterData_object_(
                                                 (DataManager_o *)this,
                                                 (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0 )
  {
LABEL_9:
    sub_1C7BD40(this, method);
  }
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             v7,
             (const MethodInfo_3430858 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  *p_userSvtEntity = Entity;
  sub_1C7BA8C(p_userSvtEntity, Entity);
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
  if ( (byte_4CE84FF & 1) == 0 )
  {
    this = (CombineServantListViewItem_o *)sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4CE84FF = 1;
  }
  userSvtEntity = v2->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_1C7BD40(this, method);
  v4 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v7.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v7.fields.fakeValue = v4;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v6 = v7;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v6, 0);
}


void CombineServantListViewItem__setUserServantEntity(
        CombineServantListViewItem_o *this,
        UserServantEntity_o *entity,
        const MethodInfo *method)
{
  this->fields.userSvtEntity = entity;
  sub_1C7BA8C(&this->fields.userSvtEntity, entity);
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
    sub_1C7BD40(0, value);
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
    sub_1C7BD40(0, value);
  this->fields.dragSelectNum = value - 1;
}


void CombineServantListViewItem__set_IsHpStatusMax(
        CombineServantListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  if ( !this )
    sub_1C7BD40(0, value);
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
    sub_1C7BD40(0, value);
  this->fields.isNotSelectSecondStatusUpAtk = this->fields.atkBase > 0 && value;
}


void CombineServantListViewItem__set_IsSecondHpStatusMax(
        CombineServantListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  if ( !this )
    sub_1C7BD40(0, value);
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
  sub_1C7BA8C(&this->fields._NoticeTween_k__BackingField, value);
}


void CombineServantListViewItem___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19

  if ( (byte_4CE8507 & 1) == 0 )
  {
    sub_1C7BAE8(&CombineServantListViewItem___c_TypeInfo);
    byte_4CE8507 = 1;
  }
  v1 = (Il2CppObject *)sub_1C7BD34(CombineServantListViewItem___c_TypeInfo);
  System_Object___ctor(v1, 0);
  CombineServantListViewItem___c_TypeInfo->static_fields->__9 = (struct CombineServantListViewItem___c_o *)v1;
  sub_1C7BA8C(CombineServantListViewItem___c_TypeInfo->static_fields, v1);
}


void CombineServantListViewItem___c___ctor(CombineServantListViewItem___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool CombineServantListViewItem___c___SetIsCombineExpCampaignTarget_b__118_0(
        CombineServantListViewItem___c_o *this,
        EventCampaignEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C7BD40(this, 0);
  return x->fields.target == 2 || x->fields.target == 27;
}


void CombineServantListViewItem___c__DisplayClass117_0___ctor(
        CombineServantListViewItem___c__DisplayClass117_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool CombineServantListViewItem___c__DisplayClass117_0___SetSortValue_b__0(
        CombineServantListViewItem___c__DisplayClass117_0_o *this,
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

  if ( (byte_4CE8508 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_ServantFilterMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4CE8508 = 1;
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
    IsLargeSuccessCampaignClassId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v24, 0);
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
      IsLargeSuccessCampaignClassId = (int64_t)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_EventCampaignMaster___);
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
        IsLargeSuccessCampaignClassId = (int64_t)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_ServantFilterMaster___);
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
        sub_1C7BD40(IsLargeSuccessCampaignClassId, v7);
      }
    }
  }
  return 1;
}