// local variable allocation has failed, the output may be wrong!
void __fastcall CombineServantListViewItem___ctor(
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
  __int64 v16; // x1
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
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x1
  __int64 v37; // x1
  __int64 v38; // x1
  __int64 v39; // x1
  __int64 v40; // x1
  __int64 v41; // x1
  __int64 v42; // x1
  __int64 v43; // x1
  __int64 v44; // x1
  __int64 v45; // x1
  __int64 v46; // x1
  __int64 v47; // x1
  __int64 v48; // x1
  __int64 v49; // x1
  __int64 v50; // x1
  __int64 v51; // x1
  __int64 v52; // x1
  __int64 v53; // x1
  __int64 v54; // x1
  __int64 v55; // x1
  __int64 v56; // x1
  IconLabelInfo_o *v57; // x20
  int32_t v58; // w2
  const MethodInfo *v59; // x3
  IconLabelInfo_o *v60; // x20
  int32_t v61; // w2
  const MethodInfo *v62; // x3
  System_Collections_Generic_List_int__o *v63; // x20
  int32_t v64; // w2
  const MethodInfo *v65; // x3
  System_Collections_Generic_List_int__o *v66; // x20
  int32_t v67; // w2
  const MethodInfo *v68; // x3
  int32_t v69; // w2
  const MethodInfo *v70; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_userSvtEntity; // x23
  int32_t v72; // w2
  const MethodInfo *v73; // x3
  int64_t Master_object; // x0
  const MethodInfo *v75; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v76; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v77; // x24
  __int64 v78; // x20
  __int64 v79; // x25
  Il2CppObject *v80; // x0
  int32_t v81; // w2
  const MethodInfo *v82; // x3
  __int128 v83; // q1
  UserServantCollectionMaster_o *v84; // x24
  int64_t v85; // x27
  UserServantCollectionEntity_o *EntityDefinitely; // x26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v87; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v88; // q0
  int64_t v89; // x0
  __int128 v90; // q1
  bool v91; // w8
  __int64 v92; // x20
  __int64 v93; // x24
  struct ServantEntity_o *servantEntity; // x8
  BalanceConfig_c *v95; // x0
  int32_t adjustHp; // w20
  struct BalanceConfig_StaticFields *static_fields; // x8
  const MethodInfo *v98; // x2
  const MethodInfo *v99; // x1
  const MethodInfo *v100; // x1
  int64_t UserSvtId; // x0
  unsigned int v102; // w8
  __int64 v103; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x29
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v106; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v109; // x8
  __int64 v110; // x9
  int32_t *v111; // x10
  __int64 v112; // x0
  __int64 v113; // x0
  __int64 v114; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v115; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v116; // q0
  __int64 v117; // x24
  System_Collections_Generic_IEnumerator_T__c *v118; // x8
  __int64 v119; // x9
  int32_t *v120; // x10
  __int64 v121; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v122; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v123; // q0
  UserRecommendSupportMaster_o *v124; // x24
  Il2CppObject *v125; // x0
  __int128 v126; // q1
  UserServantGrandMaster_o *v127; // x24
  UserServantEntity_o *v128; // x8
  Il2CppObject *MasterData_object; // x24
  struct ServantEntity_o *v130; // x8
  __int64 v131; // x20
  __int64 v132; // x21
  int64_t v133; // x29
  Il2CppObject *v134; // x24
  struct ServantEntity_o *v135; // x8
  __int64 v136; // x20
  __int64 v137; // x21
  int64_t v138; // x29
  __int64 v139; // x2
  struct System_Int32_array *commandCardParam; // x20
  int max_length; // w8
  __int64 v142; // x21
  int32_t v143; // w26
  bool v144; // w26
  __int64 v145; // x1
  System_Collections_Generic_IEnumerator_T__o *v146; // x28
  System_Collections_Generic_IEnumerator_T__c *v147; // x8
  __int64 v148; // x9
  int32_t *v149; // x10
  __int64 v150; // x0
  System_Collections_Generic_IEnumerator_T__c *v151; // x8
  __int64 v152; // x9
  int32_t *v153; // x10
  __int64 v154; // x0
  __int64 v155; // x0
  __int64 v156; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v157; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v158; // q0
  __int64 v159; // x24
  System_Collections_Generic_IEnumerator_T__c *v160; // x8
  __int64 v161; // x9
  int32_t *v162; // x10
  __int64 v163; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v164; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v165; // q0
  UserRecommendSupportMaster_o *v166; // x24
  Il2CppObject *v167; // x0
  __int128 v168; // q1
  UserServantGrandMaster_o *v169; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v170; // x8
  __int64 v171; // x20
  __int64 v172; // x21
  int32_t v173; // w20
  int32_t SvtClassId; // w0
  int32_t SvtClassGroupType; // w24
  int32_t materialExp; // w20
  BalanceConfig_c *v177; // x0
  int SameClassExp; // w21
  double v179; // d0
  int32_t v180; // w8
  UserServantEntity_o *v181; // x8
  ServantLimitMaster_o *v182; // x24
  __int64 v183; // x20
  __int64 v184; // x21
  int32_t v185; // w28
  int32_t v186; // w8
  int32_t v187; // w24
  bool v188; // w8
  bool v189; // w8
  bool v190; // w8
  bool v191; // w8
  Il2CppObject *v192; // x24
  struct ServantEntity_o *v193; // x8
  __int64 v194; // x20
  __int64 v195; // x21
  int64_t v196; // x28
  int32_t v197; // w8
  Il2CppObject *v198; // x0
  __int64 v199; // x20
  __int64 v200; // x21
  ServantLimitImageMaster_o *v201; // x24
  int32_t v202; // w28
  UserServantEntity_o *v203; // x8
  const MethodInfo *v204; // x1
  _BOOL4 isHeroineSvt; // w8
  UserServantEntity_o *v206; // x9
  int32_t combineLimitId; // w24
  __int64 v208; // x20
  __int64 v209; // x21
  int32_t v210; // w28
  int64_t v211; // x24
  __int64 v212; // x20
  __int64 v213; // x21
  __int64 v214; // x8
  UserItemMaster_o *v215; // x28
  unsigned __int64 v216; // x27
  UserServantEntity_o *v217; // x8
  __int128 v218; // q1
  int32_t v219; // w29
  int32_t v220; // w26
  UserServantEntity_o *v221; // x8
  UserServantEntity_o *v222; // x8
  const MethodInfo *v223; // x1
  int32_t v224; // w8
  __int64 v225; // x1
  System_Collections_Generic_IEnumerator_T__o *v226; // x28
  System_Collections_Generic_IEnumerator_T__c *v227; // x8
  __int64 v228; // x9
  int32_t *v229; // x10
  __int64 v230; // x0
  System_Collections_Generic_IEnumerator_T__c *v231; // x8
  __int64 v232; // x9
  int32_t *v233; // x10
  __int64 v234; // x0
  __int64 v235; // x0
  __int64 v236; // x1
  UserServantEntity_o *v237; // x8
  __int128 v238; // q0
  __int64 v239; // x24
  System_Collections_Generic_IEnumerator_T__c *v240; // x8
  __int64 v241; // x9
  int32_t *v242; // x10
  __int64 v243; // x0
  int id; // w24
  int32_t lv; // w20
  int32_t SameSvtNpLvCache; // w0
  const MethodInfo *v247; // x4
  int32_t v248; // w24
  __int64 v249; // x20
  UserServantEntity_o *v250; // x8
  __int128 v251; // q0
  UserRecommendSupportMaster_o *v252; // x24
  Il2CppObject *v253; // x0
  __int128 v254; // q1
  UserServantGrandMaster_o *v255; // x24
  bool v256; // w8
  bool IsMaterialTd; // w0
  UserServantEntity_o *v258; // x8
  UserServantEntity_o *v259; // x8
  bool isLevelMax; // w0
  _BOOL4 v261; // w8
  ServantExceedEntity_o *SvtExceedEnt; // x0
  int32_t *v263; // x26
  CommonConsumeEntity_array *IdEntityList; // x0
  CommonConsumeEntity_array *v265; // x29
  System_Collections_Generic_HashSet_int__o *v266; // x24
  System_Collections_Generic_HashSet_int__o *v267; // x28
  int v268; // w8
  __int64 v269; // x20
  CommonConsumeEntity_o *v270; // x27
  UserServantEntity_o *v271; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v272; // x29
  __int64 v273; // x20
  __int64 v274; // x21
  UserServantEntity_o *v275; // x29
  System_Int32_array *v276; // x24
  __int64 v277; // x20
  __int64 v278; // x24
  struct ServantEntity_o *v279; // x8
  bool v280; // zf
  UserServantEntity_o *v281; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  int32_t v283; // w2
  const MethodInfo *v284; // x3
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  int32_t v286; // w2
  const MethodInfo *v287; // x3
  int64_t v288; // x8
  struct ServantEntity_o *v289; // x9
  UserServantEntity_o *v290; // x8
  unsigned __int64 v291; // x9
  _BOOL8 v292; // x10
  __int64 v293; // x20
  __int64 v294; // x21
  int32_t v295; // w8
  int32_t maxFriendshipRank; // w20
  int32_t friendshipExceedCount; // w21
  int64_t v298; // x22
  __int64 v299; // x20
  __int64 v300; // x21
  UserItemMaster_o *v301; // x24
  unsigned __int64 v302; // x26
  __int64 v303; // x28
  bool v304; // w8
  int32_t v305; // w0
  int32_t v306; // w24
  int32_t v307; // w29
  int32_t v308; // w28
  int v309; // w21
  TreasureDvcLvEntity_o *v310; // x0
  int64_t v311; // [xsp+10h] [xbp-2B0h]
  bool *p_isLimitUpItemNum; // [xsp+18h] [xbp-2A8h]
  bool *p_isStatusUpSvt; // [xsp+20h] [xbp-2A0h]
  struct IconLabelInfo_o **p_iconLabelInfo2; // [xsp+28h] [xbp-298h]
  UserServantCollectionEntity_o *v315; // [xsp+30h] [xbp-290h]
  bool v317; // [xsp+38h] [xbp-288h]
  struct ServantEntity_o **p_servantEntity; // [xsp+48h] [xbp-278h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v321; // [xsp+50h] [xbp-270h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v322; // [xsp+70h] [xbp-250h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v323; // [xsp+90h] [xbp-230h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v324; // [xsp+B0h] [xbp-210h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v325; // [xsp+D0h] [xbp-1F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v326; // [xsp+F0h] [xbp-1D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v327; // [xsp+110h] [xbp-1B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v328; // [xsp+130h] [xbp-190h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v329; // [xsp+150h] [xbp-170h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v330; // [xsp+170h] [xbp-150h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v331; // [xsp+190h] [xbp-130h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v332; // [xsp+1B0h] [xbp-110h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v333; // [xsp+1D0h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v334; // [xsp+1F0h] [xbp-D0h]
  UserItemEntity_o *v335; // [xsp+218h] [xbp-A8h] BYREF
  int32_t tdMaxLv; // [xsp+224h] [xbp-9Ch] BYREF
  int32_t tdLv[2]; // [xsp+228h] [xbp-98h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+230h] [xbp-90h] BYREF
  UserItemEntity_o *v339; // [xsp+238h] [xbp-88h] BYREF
  __int64 v340; // [xsp+240h] [xbp-80h] BYREF
  UserServantCommandCodeEntity_o *v341; // [xsp+248h] [xbp-78h] BYREF
  UserServantCommandCardEntity_o *v342; // [xsp+250h] [xbp-70h] BYREF
  UserServantCommandCodeEntity_o *entity; // [xsp+258h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v344; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v345; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v346; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v347; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v348; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v349; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v350; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v351; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v352; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v353; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v354; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v355; // 0:x0.16

  v15 = isParty;
  if ( (byte_4B48A0D & 1) == 0 )
  {
    sub_1BDB878(&BalanceConfig_TypeInfo, *(_QWORD *)&type);
    sub_1BDB878(&Method_System_Collections_ObjectModel_Collection_UserServantLeaderEntity__GetEnumerator__, v16);
    sub_1BDB878(&Method_DataManager_GetMasterData_CombineLimitMaster___, v17);
    sub_1BDB878(&Method_DataManager_GetMasterData_CombineMaterialMaster___, v18);
    sub_1BDB878(&Method_DataManager_GetMasterData_FriendshipMaster___, v19);
    sub_1BDB878(&Method_DataManager_GetMasterData_ServantClassMaster___, v20);
    sub_1BDB878(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___, v21);
    sub_1BDB878(&Method_DataManager_GetMasterData_TreasureDvcMaster___, v22);
    sub_1BDB878(&Method_DataManager_GetMasterData_UserItemMaster___, v23);
    sub_1BDB878(&Method_DataManager_GetMasterData_UserServantCommandCardMaster___, v24);
    sub_1BDB878(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___, v25);
    sub_1BDB878(&Method_DataManager_GetMasterData_UserServantLeaderMaster___, v26);
    sub_1BDB878(&Method_DataManager_GetMaster_CommonConsumeMaster___, v27);
    sub_1BDB878(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v28);
    sub_1BDB878(&Method_DataManager_GetMaster_ServantLimitMaster___, v29);
    sub_1BDB878(&Method_DataManager_GetMaster_ServantMaster___, v30);
    sub_1BDB878(&Method_DataManager_GetMaster_SvtCoinMaster___, v31);
    sub_1BDB878(&Method_DataManager_GetMaster_UserRecommendSupportMaster___, v32);
    sub_1BDB878(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v33);
    sub_1BDB878(&Method_DataManager_GetMaster_UserServantGrandMaster___, v34);
    sub_1BDB878(&Method_DataManager_GetMaster_UserServantMaster___, v35);
    sub_1BDB878(&DataManager_TypeInfo, v36);
    sub_1BDB878(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v37);
    sub_1BDB878(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v38);
    sub_1BDB878(&Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__GetEntity__, v39);
    sub_1BDB878(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__, v40);
    sub_1BDB878(&Method_DataMasterBase_UserServantLeaderMaster__UserServantLeaderEntity__string__getEntityList__, v41);
    sub_1BDB878(&Method_System_Linq_Enumerable_ToArray_int___, v42);
    sub_1BDB878(&Method_System_Collections_Generic_HashSet_int__Add__, v43);
    sub_1BDB878(&Method_System_Collections_Generic_HashSet_int___ctor__, v44);
    sub_1BDB878(&System_Collections_Generic_HashSet_int__TypeInfo, v45);
    sub_1BDB878(&System_IDisposable_TypeInfo, v46);
    sub_1BDB878(&System_Collections_Generic_IEnumerator_UserServantLeaderEntity__TypeInfo, v47);
    sub_1BDB878(&System_Collections_IEnumerator_TypeInfo, v48);
    sub_1BDB878(&IconLabelInfo_TypeInfo, v49);
    sub_1BDB878(&Method_System_Collections_Generic_List_int___ctor__, v50);
    sub_1BDB878(&System_Collections_Generic_List_int__TypeInfo, v51);
    sub_1BDB878(&System_Math_TypeInfo, v52);
    sub_1BDB878(&NetworkManager_TypeInfo, v53);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v54);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v55);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v56);
    byte_4B48A0D = 1;
  }
  entity = 0LL;
  v342 = 0LL;
  v341 = 0LL;
  v340 = 0LL;
  v339 = 0LL;
  tdInfo = 0LL;
  *(_QWORD *)tdLv = 0LL;
  tdMaxLv = 0;
  v335 = 0LL;
  v57 = (IconLabelInfo_o *)sub_1BDBAC4(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v57, 0LL);
  this->fields.iconLabelInfo1 = v57;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.iconLabelInfo1, (int32_t)v57, v58, v59);
  v60 = (IconLabelInfo_o *)sub_1BDBAC4(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v60, 0LL);
  this->fields.iconLabelInfo2 = v60;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.iconLabelInfo2, (int32_t)v60, v61, v62);
  v63 = (System_Collections_Generic_List_int__o *)sub_1BDBAC4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v63,
    (const MethodInfo_36B854C *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.enableSkillUp = v63;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.enableSkillUp, (int32_t)v63, v64, v65);
  v66 = (System_Collections_Generic_List_int__o *)sub_1BDBAC4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v66,
    (const MethodInfo_36B854C *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.enableAppendSkillUp = v66;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.enableAppendSkillUp, (int32_t)v66, v67, v68);
  ListViewItem___ctor((ListViewItem_o *)this, 0LL);
  *(_WORD *)&this->fields.isFavorite = 0;
  this->fields.isLock = 0;
  this->fields.isChoice = 0;
  this->fields.isEventJoin = 0;
  *(_WORD *)&this->fields.isLimitCntTarget = 0;
  *(_DWORD *)&this->fields.isStatusUpSvt = 0;
  this->fields.isMaxSelect = 0;
  *(_QWORD *)&this->fields.isLimitUpItemNum = 0LL;
  *(_WORD *)&this->fields.isAllAppendSkillLock = 0;
  this->fields.isLvExceedItemNum = 0;
  this->fields.isCanNotLock = 0;
  *(_WORD *)&this->fields.isEquipedCmdCard = 0;
  *(_DWORD *)&this->fields.isBaseSvt = 0;
  *(_WORD *)&this->fields.isTdLvMax = 0;
  this->fields.isMaterialTdSvt = 0;
  *(_DWORD *)&this->fields.isBaseLvMax = 0;
  this->fields.isGrandSvt = 0;
  *(_QWORD *)&this->fields.isAtkUpMax = 0LL;
  *(_DWORD *)&this->fields.isNotSelectSecondStatusUpAtk = 0;
  this->fields.index = index;
  this->fields.type = type;
  this->fields.setupInfo = setupInfo;
  p_isLimitUpItemNum = &this->fields.isLimitUpItemNum;
  p_isStatusUpSvt = &this->fields.isStatusUpSvt;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v69, v70);
  this->fields.userSvtEntity = userSvtEntity;
  p_userSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userSvtEntity;
  this->fields.isParty = v15;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.userSvtEntity, (int32_t)userSvtEntity, v72, v73);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_ServantMaster___);
  v76 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_447;
  v77 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  v78 = *(_QWORD *)&v76[5].fields.currentCryptoKey;
  v79 = *(_QWORD *)&v76[5].fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v344.fields.currentCryptoKey = v78;
  *(_QWORD *)&v344.fields.fakeValue = v79;
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v344, 0LL);
  if ( !v77 )
    goto LABEL_447;
  v80 = DataMasterBase_object__object__int___GetEntity(
          v77,
          Master_object,
          (const MethodInfo_32E1E3C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)v80;
  p_servantEntity = &this->fields.servantEntity;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.servantEntity, (int32_t)v80, v81, v82);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !userSvtEntity )
    goto LABEL_447;
  v83 = *(_OWORD *)&userSvtEntity->fields.userId.fields.fakeValue;
  v84 = (UserServantCollectionMaster_o *)Master_object;
  *(_OWORD *)&v334.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v334.fields.fakeValue = v83;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v333 = v334;
  v85 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48231240(&v333, 0LL);
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(userSvtEntity->fields.svtId, 0LL);
  if ( !v84 )
    goto LABEL_447;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v84, v85, Master_object, 0LL);
  Master_object = (int64_t)UserGameMaster__getSelfUserGame(0LL);
  v311 = Master_object;
  if ( baseUsrSvtData )
  {
    v87 = *p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_447;
    v88 = v87[2];
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v334.fields.currentCryptoKey = v87[1];
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v334.fields.fakeValue = v88;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v332 = v334;
    v89 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48231240(&v332, 0LL);
    v90 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
    *(_OWORD *)&v331.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v331.fields.fakeValue = v90;
    v91 = v89 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48231240(&v331, 0LL);
  }
  else
  {
    v91 = 0;
  }
  this->fields.isBaseSvt = v91;
  v92 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v93 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v345.fields.currentCryptoKey = v92;
  *(_QWORD *)&v345.fields.fakeValue = v93;
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v345, 0LL);
  servantEntity = this->fields.servantEntity;
  this->fields.svtId = Master_object;
  if ( !servantEntity )
    goto LABEL_447;
  this->fields.classId = servantEntity->fields.classId;
  this->fields.isHeroineSvt = UserServantEntity__IsHeroine(userSvtEntity, 0LL);
  Master_object = UserServantEntity__IsEventJoin(userSvtEntity, 0LL);
  this->fields.isEventJoin = Master_object & 1;
  if ( !EntityDefinitely )
    goto LABEL_447;
  UserServantCollectionEntity__getFriendShipRankInfo(
    EntityDefinitely,
    &this->fields.friendship,
    &this->fields.friendshipMax,
    0LL);
  this->fields.maxLimitCnt = UserServantEntity__getLimitCntMax(userSvtEntity, 0LL);
  this->fields.currentLimitCnt = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(
                                   userSvtEntity->fields.limitCount,
                                   0LL);
  v95 = BalanceConfig_TypeInfo;
  adjustHp = userSvtEntity->fields.adjustHp;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v95 = BalanceConfig_TypeInfo;
  }
  static_fields = v95->static_fields;
  v315 = EntityDefinitely;
  this->fields.hpReinforceValue = static_fields->StatusUpAdjustHp * adjustHp;
  this->fields.atkReinforceValue = static_fields->StatusUpAdjustAtk * userSvtEntity->fields.adjustAtk;
  UserServantEntity__getAdjustMaxData(
    userSvtEntity,
    &this->fields.nowMaxHpReinforceValue,
    &this->fields.nowMaxAtkReinforceValue,
    0LL);
  CombineServantListViewItem__ModifyItem(this, isFavorite, v98);
  CombineServantListViewItem__SetOverwriteStatus(this, v99);
  UserSvtId = CombineServantListViewItem__get_UserSvtId(this, v100);
  EventFortificationDataLogic__SetFortification(
    &this->fields.isFortification,
    &this->fields.fortificationName,
    &this->fields.fortificationDetailName,
    UserSvtId,
    0LL);
  v102 = this->fields.type;
  if ( v102 <= 0xA && ((1 << v102) & 0x481) != 0 )
  {
    Master_object = (int64_t)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_447;
    if ( UserServantEntity__isLevelMax((UserServantEntity_o *)Master_object, 0LL) )
    {
      Master_object = (int64_t)*p_userSvtEntity;
      if ( !*p_userSvtEntity )
        goto LABEL_447;
      if ( UserServantEntity__isAdjustHpMax((UserServantEntity_o *)Master_object, 0LL) )
      {
        Master_object = (int64_t)*p_userSvtEntity;
        if ( !*p_userSvtEntity )
          goto LABEL_447;
        if ( UserServantEntity__isAdjustAtkMax((UserServantEntity_o *)Master_object, 0LL) )
        {
          Master_object = (int64_t)*p_userSvtEntity;
          if ( !*p_userSvtEntity )
            goto LABEL_447;
          if ( UserServantEntity__isSecondAdjustHpMax((UserServantEntity_o *)Master_object, 0LL) )
          {
            Master_object = (int64_t)*p_userSvtEntity;
            if ( !*p_userSvtEntity )
              goto LABEL_447;
            if ( UserServantEntity__isSecondAdjustAtkMax((UserServantEntity_o *)Master_object, 0LL) )
              this->fields.isLvMax = 1;
          }
        }
      }
    }
    this->fields.isLimitCntMax = UserServantEntity__isLimitCountMax(userSvtEntity, 0LL);
    Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Master_object )
      goto LABEL_447;
    Master_object = (int64_t)DataManager__GetMasterData_object_(
                               (DataManager_o *)Master_object,
                               (const MethodInfo_303395C *)Method_DataManager_GetMasterData_UserServantLeaderMaster___);
    if ( !Master_object )
      goto LABEL_447;
    Master_object = *(_QWORD *)(Master_object + 40);
    if ( !Master_object )
      goto LABEL_447;
    Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                   (System_Collections_ObjectModel_Collection_T__o *)Master_object,
                   (const MethodInfo_327DBFC *)Method_System_Collections_ObjectModel_Collection_UserServantLeaderEntity__GetEnumerator__);
    if ( !Enumerator )
      sub_1BDBAD4(0LL, v103);
    while ( 1 )
    {
      klass = Enumerator->klass;
      v106 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v106;
          p_offset += 4;
          if ( !v106 )
            goto LABEL_46;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_46:
        p_method = sub_1C2C00C(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
              Enumerator,
              *(_QWORD *)(p_method + 8)) & 1) == 0 )
        break;
      v109 = Enumerator->klass;
      v110 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
      {
        v111 = &v109->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerator_UserServantLeaderEntity__c **)v111 - 1) != System_Collections_Generic_IEnumerator_UserServantLeaderEntity__TypeInfo )
        {
          --v110;
          v111 += 4;
          if ( !v110 )
            goto LABEL_53;
        }
        v112 = (__int64)&v109->vtable[*v111].method;
      }
      else
      {
LABEL_53:
        v112 = sub_1C2C00C(Enumerator, System_Collections_Generic_IEnumerator_UserServantLeaderEntity__TypeInfo, 0LL);
      }
      v113 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v112)(
               Enumerator,
               *(_QWORD *)(v112 + 8));
      if ( !v113 )
        sub_1BDBAD4(0LL, v114);
      v115 = *p_userSvtEntity;
      if ( !*p_userSvtEntity )
        sub_1BDBAD4(v113, v114);
      v116 = v115[2];
      v117 = *(_QWORD *)(v113 + 56);
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v334.fields.currentCryptoKey = v115[1];
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v334.fields.fakeValue = v116;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v330 = v334;
      if ( v117 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48231240(&v330, 0LL) )
      {
        this->fields.isUseSupport = 1;
        break;
      }
    }
    v118 = Enumerator->klass;
    v119 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v120 = &v118->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v120 - 1) != System_IDisposable_TypeInfo )
      {
        --v119;
        v120 += 4;
        if ( !v119 )
          goto LABEL_65;
      }
      v121 = (__int64)&v118->vtable[*v120].method;
    }
    else
    {
LABEL_65:
      v121 = sub_1C2C00C(Enumerator, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v121)(
      Enumerator,
      *(_QWORD *)(v121 + 8));
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_UserRecommendSupportMaster___);
    v122 = *p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_447;
    v123 = v122[2];
    v124 = (UserRecommendSupportMaster_o *)Master_object;
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v334.fields.currentCryptoKey = v122[1];
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v334.fields.fakeValue = v123;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v329 = v334;
    Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48231240(&v329, 0LL);
    if ( !v124 )
      goto LABEL_447;
    this->fields.isUseRecommendSupport = UserRecommendSupportMaster__IsSettingServant(v124, Master_object, 0, 0LL);
    v125 = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_UserServantGrandMaster___);
    v126 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
    v127 = (UserServantGrandMaster_o *)v125;
    *(_OWORD *)&v328.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v328.fields.fakeValue = v126;
    Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48231240(&v328, 0LL);
    if ( !v127 )
      goto LABEL_447;
    Master_object = UserServantGrandMaster__IsSettingServant(v127, Master_object, 0LL);
    v128 = this->fields.userSvtEntity;
    this->fields.isGrandSvt = Master_object & 1;
    if ( !v128 )
      goto LABEL_447;
    if ( UserServantEntity__IsCombineExp(v128, 0LL) )
      this->fields.isExpUpSvt = 1;
    Master_object = (int64_t)*p_servantEntity;
    if ( !*p_servantEntity )
      goto LABEL_447;
    if ( ServantEntity__get_IsStatusUp((ServantEntity_o *)Master_object, 0LL) )
      *p_isStatusUpSvt = 1;
    Master_object = (int64_t)*p_servantEntity;
    if ( !*p_servantEntity )
      goto LABEL_447;
    if ( ServantEntity__get_IsServantMaterialTd((ServantEntity_o *)Master_object, 0LL) )
      this->fields.isMaterialTdSvt = 1;
    Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Master_object )
      goto LABEL_447;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Master_object,
                          (const MethodInfo_303395C *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4B3ED56 )
    {
      sub_1BDB878(&NetworkManager_TypeInfo, v75);
      byte_4B3ED56 = 1;
    }
    Master_object = (int64_t)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Master_object = (int64_t)NetworkManager_TypeInfo;
    }
    v130 = *p_servantEntity;
    if ( !*p_servantEntity )
      goto LABEL_447;
    v132 = *(_QWORD *)&v130->fields.id.fields.currentCryptoKey;
    v131 = *(_QWORD *)&v130->fields.id.fields.fakeValue;
    v133 = *(_QWORD *)(*(_QWORD *)(Master_object + 184) + 64LL);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v346.fields.currentCryptoKey = v132;
    *(_QWORD *)&v346.fields.fakeValue = v131;
    Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v346, 0LL);
    if ( !MasterData_object )
      goto LABEL_447;
    if ( UserServantCommandCodeMaster__TryGetEntity(
           (UserServantCommandCodeMaster_o *)MasterData_object,
           &entity,
           v133,
           (int)Master_object,
           0LL) )
    {
      Master_object = (int64_t)entity;
      if ( !entity )
        goto LABEL_447;
      this->fields.isEquipedCmdCard = UserServantCommandCodeEntity__IsEquipedCommandCode(entity, 0LL);
      Master_object = (int64_t)entity;
      if ( !entity )
        goto LABEL_447;
      this->fields.isCmdCardSlotOpen = UserServantCommandCodeEntity__IsCommandCardSlotOpen(entity, 0LL);
    }
    v102 = this->fields.type;
    if ( v102 == 10 )
    {
      Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Master_object )
        goto LABEL_447;
      v134 = DataManager__GetMasterData_object_(
               (DataManager_o *)Master_object,
               (const MethodInfo_303395C *)Method_DataManager_GetMasterData_UserServantCommandCardMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4B3ED56 )
      {
        sub_1BDB878(&NetworkManager_TypeInfo, v75);
        byte_4B3ED56 = 1;
      }
      Master_object = (int64_t)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Master_object = (int64_t)NetworkManager_TypeInfo;
      }
      v135 = *p_servantEntity;
      if ( !*p_servantEntity )
        goto LABEL_447;
      v137 = *(_QWORD *)&v135->fields.id.fields.currentCryptoKey;
      v136 = *(_QWORD *)&v135->fields.id.fields.fakeValue;
      v138 = *(_QWORD *)(*(_QWORD *)(Master_object + 184) + 64LL);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v347.fields.currentCryptoKey = v137;
      *(_QWORD *)&v347.fields.fakeValue = v136;
      Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v347, 0LL);
      if ( !v134 )
        goto LABEL_447;
      Master_object = UserServantCommandCardMaster__TryGetEntity(
                        (UserServantCommandCardMaster_o *)v134,
                        &v342,
                        v138,
                        (int)Master_object,
                        0LL);
      if ( (Master_object & 1) != 0 )
      {
        if ( !v342 )
          goto LABEL_447;
        commandCardParam = v342->fields.commandCardParam;
        if ( commandCardParam )
        {
          max_length = commandCardParam->max_length;
          if ( max_length >= 1 )
          {
            v142 = 0LL;
            while ( 1 )
            {
              if ( (unsigned int)v142 >= max_length )
                goto LABEL_454;
              Master_object = (int64_t)BalanceConfig_TypeInfo;
              v143 = commandCardParam->m_Items[v142 + 1];
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                Master_object = (int64_t)BalanceConfig_TypeInfo;
              }
              if ( v143 < *(_DWORD *)(*(_QWORD *)(Master_object + 184) + 772LL) )
                break;
              this->fields.isCommandCardExceedMax = 1;
              max_length = commandCardParam->max_length;
              if ( (int)++v142 >= max_length )
                goto LABEL_122;
            }
            this->fields.isCommandCardExceedMax = 0;
          }
        }
      }
LABEL_122:
      v102 = this->fields.type;
    }
  }
  v144 = isMtSvt;
  if ( v102 == 1 )
  {
    this->fields.isMaterialSvt = v144;
    Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Master_object )
      goto LABEL_447;
    Master_object = (int64_t)DataManager__GetMasterData_object_(
                               (DataManager_o *)Master_object,
                               (const MethodInfo_303395C *)Method_DataManager_GetMasterData_UserServantLeaderMaster___);
    if ( !Master_object )
      goto LABEL_447;
    Master_object = *(_QWORD *)(Master_object + 40);
    if ( !Master_object )
      goto LABEL_447;
    v146 = System_Collections_ObjectModel_Collection_object___GetEnumerator(
             (System_Collections_ObjectModel_Collection_T__o *)Master_object,
             (const MethodInfo_327DBFC *)Method_System_Collections_ObjectModel_Collection_UserServantLeaderEntity__GetEnumerator__);
    if ( !v146 )
      sub_1BDBAD4(0LL, v145);
    while ( 1 )
    {
      v147 = v146->klass;
      v148 = *(unsigned __int16 *)(&v146->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v146->klass->_2.bitflags2 + 3) )
      {
        v149 = &v147->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)v149 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v148;
          v149 += 4;
          if ( !v148 )
            goto LABEL_132;
        }
        v150 = (__int64)&v147->vtable[*v149].method;
      }
      else
      {
LABEL_132:
        v150 = sub_1C2C00C(v146, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v150)(
              v146,
              *(_QWORD *)(v150 + 8)) & 1) == 0 )
        break;
      v151 = v146->klass;
      v152 = *(unsigned __int16 *)(&v146->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v146->klass->_2.bitflags2 + 3) )
      {
        v153 = &v151->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerator_UserServantLeaderEntity__c **)v153 - 1) != System_Collections_Generic_IEnumerator_UserServantLeaderEntity__TypeInfo )
        {
          --v152;
          v153 += 4;
          if ( !v152 )
            goto LABEL_139;
        }
        v154 = (__int64)&v151->vtable[*v153].method;
      }
      else
      {
LABEL_139:
        v154 = sub_1C2C00C(v146, System_Collections_Generic_IEnumerator_UserServantLeaderEntity__TypeInfo, 0LL);
      }
      v155 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v154)(
               v146,
               *(_QWORD *)(v154 + 8));
      if ( !v155 )
        sub_1BDBAD4(0LL, v156);
      v157 = *p_userSvtEntity;
      if ( !*p_userSvtEntity )
        sub_1BDBAD4(v155, v156);
      v158 = v157[2];
      v159 = *(_QWORD *)(v155 + 56);
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v334.fields.currentCryptoKey = v157[1];
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v334.fields.fakeValue = v158;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v327 = v334;
      if ( v159 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48231240(&v327, 0LL) )
      {
        this->fields.isUseSupport = 1;
        break;
      }
    }
    v160 = v146->klass;
    v161 = *(unsigned __int16 *)(&v146->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v146->klass->_2.bitflags2 + 3) )
    {
      v162 = &v160->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v162 - 1) != System_IDisposable_TypeInfo )
      {
        --v161;
        v162 += 4;
        if ( !v161 )
          goto LABEL_151;
      }
      v163 = (__int64)&v160->vtable[*v162].method;
    }
    else
    {
LABEL_151:
      v163 = sub_1C2C00C(v146, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v163)(v146, *(_QWORD *)(v163 + 8));
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_UserRecommendSupportMaster___);
    v164 = *p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_447;
    v165 = v164[2];
    v166 = (UserRecommendSupportMaster_o *)Master_object;
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v334.fields.currentCryptoKey = v164[1];
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v334.fields.fakeValue = v165;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v326 = v334;
    Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48231240(&v326, 0LL);
    if ( !v166 )
      goto LABEL_447;
    this->fields.isUseRecommendSupport = UserRecommendSupportMaster__IsSettingServant(v166, Master_object, 0, 0LL);
    v167 = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_UserServantGrandMaster___);
    v168 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
    v169 = (UserServantGrandMaster_o *)v167;
    *(_OWORD *)&v325.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v325.fields.fakeValue = v168;
    Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48231240(&v325, 0LL);
    if ( !v169 )
      goto LABEL_447;
    this->fields.isGrandSvt = UserServantGrandMaster__IsSettingServant(v169, Master_object, 0LL);
    Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Master_object )
      goto LABEL_447;
    Master_object = (int64_t)DataManager__GetMasterData_object_(
                               (DataManager_o *)Master_object,
                               (const MethodInfo_303395C *)Method_DataManager_GetMasterData_CombineMaterialMaster___);
    if ( !*p_servantEntity )
      goto LABEL_447;
    if ( !*p_userSvtEntity )
      goto LABEL_447;
    if ( !Master_object )
      goto LABEL_447;
    Master_object = (int64_t)CombineMaterialMaster__GetEntity(
                               (CombineMaterialMaster_o *)Master_object,
                               (*p_servantEntity)->fields.combineMaterialId,
                               (*p_userSvtEntity)[16].fields.currentCryptoKey,
                               0LL);
    if ( !Master_object )
      goto LABEL_447;
    this->fields.materialExp = *(_DWORD *)(Master_object + 24);
    if ( baseUsrSvtData )
    {
      v170 = *p_userSvtEntity;
      if ( !*p_userSvtEntity )
        goto LABEL_447;
      v172 = *(_QWORD *)&v170[5].fields.currentCryptoKey;
      v171 = *(_QWORD *)&v170[5].fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v348.fields.currentCryptoKey = v172;
      *(_QWORD *)&v348.fields.fakeValue = v171;
      v173 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v348, 0LL);
      if ( v173 == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(
                     baseUsrSvtData->fields.svtId,
                     0LL) )
        this->fields.isLimitCntTarget = 1;
      Master_object = UserServantEntity__getSvtClassId(baseUsrSvtData, 1, 0, 0LL);
      if ( !*p_userSvtEntity )
        goto LABEL_447;
      if ( UserServantEntity__getSvtClassId((UserServantEntity_o *)*p_userSvtEntity, 1, 0, 0LL) == (_DWORD)Master_object )
        this->fields.isSameClass = 1;
      Master_object = (int64_t)*p_servantEntity;
      if ( !*p_servantEntity )
        goto LABEL_447;
      if ( ServantEntity__get_IsStatusUp((ServantEntity_o *)Master_object, 0LL) )
        goto LABEL_178;
      Master_object = (int64_t)*p_servantEntity;
      if ( !*p_servantEntity )
        goto LABEL_447;
      if ( ServantEntity__get_IsCombineMaterial((ServantEntity_o *)Master_object, 0LL) )
      {
LABEL_178:
        Master_object = (int64_t)*p_servantEntity;
        if ( !*p_servantEntity )
          goto LABEL_447;
        if ( ServantEntity__get_IsAllClass((ServantEntity_o *)Master_object, 0LL) )
          this->fields.isSameClass = 1;
      }
      this->fields.isBaseLvMax = UserServantEntity__isLevelMax(baseUsrSvtData, 0LL);
      Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Master_object )
        goto LABEL_447;
      Master_object = (int64_t)DataManager__GetMasterData_object_(
                                 (DataManager_o *)Master_object,
                                 (const MethodInfo_303395C *)Method_DataManager_GetMasterData_ServantClassMaster___);
      if ( !*p_servantEntity )
        goto LABEL_447;
      if ( !Master_object )
        goto LABEL_447;
      Master_object = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                 (*p_servantEntity)->fields.classId,
                                 (const MethodInfo_32E1E3C *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
      if ( !Master_object )
        goto LABEL_447;
      HIDWORD(v340) = *(_DWORD *)(Master_object + 56);
      SvtClassId = UserServantEntity__getSvtClassId(baseUsrSvtData, 0, 0, 0LL);
      SvtClassGroupType = UserServantEntity__getSvtClassGroupType(baseUsrSvtData, SvtClassId, 0LL);
      if ( System_Int32__Equals_64087084((int32_t)&v340 + 4, 3, 0LL)
        || System_Int32__Equals_64087084((int32_t)&v340 + 4, SvtClassGroupType, 0LL) && this->fields.isSameClass )
      {
        materialExp = this->fields.materialExp;
        v177 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v177 = BalanceConfig_TypeInfo;
        }
        SameClassExp = v177->static_fields->SameClassExp;
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        v179 = (double)materialExp * (double)SameClassExp / 1000.0;
        v180 = vcvtpd_s64_f64(v179);
        if ( ceil(v179) == INFINITY )
          v180 = 0x80000000;
        this->fields.materialExp = v180;
      }
    }
    else
    {
      this->fields.isLimitCntTarget = 0;
    }
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_ServantLimitMaster___);
    v181 = (UserServantEntity_o *)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_447;
    v182 = (ServantLimitMaster_o *)Master_object;
    v184 = *(_QWORD *)&v181->fields.svtId.fields.currentCryptoKey;
    v183 = *(_QWORD *)&v181->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v349.fields.currentCryptoKey = v184;
    *(_QWORD *)&v349.fields.fakeValue = v183;
    Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v349, 0LL);
    if ( !*p_userSvtEntity )
      goto LABEL_447;
    v185 = Master_object;
    Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716((*p_userSvtEntity)[6], 0LL);
    if ( !v182 )
      goto LABEL_447;
    Master_object = (int64_t)ServantLimitMaster__GetEntity(v182, v185, Master_object, 0LL);
    if ( !Master_object )
      goto LABEL_447;
    this->fields.hpBase = *(_DWORD *)(Master_object + 36);
    v186 = *(_DWORD *)(Master_object + 44);
    Master_object = (int64_t)this->fields.servantEntity;
    this->fields.atkBase = v186;
    if ( !Master_object )
      goto LABEL_447;
    Master_object = ServantEntity__get_IsStatusUp((ServantEntity_o *)Master_object, 0LL);
    if ( (Master_object & 1) != 0 )
    {
      *p_isStatusUpSvt = 1;
      if ( !baseUsrSvtData )
        goto LABEL_447;
      v187 = UserServantEntity__getSvtClassId(baseUsrSvtData, 0, 0, 0LL);
      Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Master_object )
        goto LABEL_447;
      Master_object = (int64_t)DataManager__GetMasterData_object_(
                                 (DataManager_o *)Master_object,
                                 (const MethodInfo_303395C *)Method_DataManager_GetMasterData_ServantClassMaster___);
      if ( !*p_servantEntity )
        goto LABEL_447;
      if ( !Master_object )
        goto LABEL_447;
      Master_object = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                 (*p_servantEntity)->fields.classId,
                                 (const MethodInfo_32E1E3C *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
      if ( !Master_object )
        goto LABEL_447;
      LODWORD(v340) = *(_DWORD *)(Master_object + 56);
      if ( !*p_servantEntity )
        goto LABEL_447;
      if ( (*p_servantEntity)->fields.classId == v187 || System_Int32__Equals_64087084((int32_t)&v340, 3, 0LL) )
      {
        this->fields.isCanStUp = 1;
        v188 = UserServantEntity__isAdjustAtkMax(baseUsrSvtData, 0LL) && this->fields.atkBase > 0;
        this->fields.isAtkUpMax = v188;
        v189 = UserServantEntity__isAdjustHpMax(baseUsrSvtData, 0LL) && this->fields.hpBase > 0;
        this->fields.isHpUpMax = v189;
        v190 = UserServantEntity__isSecondAdjustAtkMax(baseUsrSvtData, 0LL) && this->fields.atkBase > 0;
        this->fields.isAtkSecondUpMax = v190;
        v191 = UserServantEntity__isSecondAdjustHpMax(baseUsrSvtData, 0LL) && this->fields.hpBase > 0;
        this->fields.isHpSecondUpMax = v191;
      }
    }
    Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Master_object )
      goto LABEL_447;
    v192 = DataManager__GetMasterData_object_(
             (DataManager_o *)Master_object,
             (const MethodInfo_303395C *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4B3ED56 )
    {
      sub_1BDB878(&NetworkManager_TypeInfo, v75);
      byte_4B3ED56 = 1;
    }
    Master_object = (int64_t)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Master_object = (int64_t)NetworkManager_TypeInfo;
    }
    v193 = *p_servantEntity;
    if ( !*p_servantEntity )
      goto LABEL_447;
    v195 = *(_QWORD *)&v193->fields.id.fields.currentCryptoKey;
    v194 = *(_QWORD *)&v193->fields.id.fields.fakeValue;
    v196 = *(_QWORD *)(*(_QWORD *)(Master_object + 184) + 64LL);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v350.fields.currentCryptoKey = v195;
    *(_QWORD *)&v350.fields.fakeValue = v194;
    Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v350, 0LL);
    if ( !v192 )
LABEL_447:
      sub_1BDBAD4(Master_object, v75);
    if ( UserServantCommandCodeMaster__TryGetEntity(
           (UserServantCommandCodeMaster_o *)v192,
           &v341,
           v196,
           (int)Master_object,
           0LL) )
    {
      Master_object = (int64_t)v341;
      if ( !v341 )
        goto LABEL_447;
      this->fields.isEquipedCmdCard = UserServantCommandCodeEntity__IsEquipedCommandCode(v341, 0LL);
      Master_object = (int64_t)v341;
      if ( !v341 )
        goto LABEL_447;
      this->fields.isCmdCardSlotOpen = UserServantCommandCodeEntity__IsCommandCardSlotOpen(v341, 0LL);
    }
  }
  v197 = this->fields.type;
  if ( v197 == 9 )
  {
    Master_object = UserServantEntity__isLimitCountMax(userSvtEntity, 0LL);
    v221 = this->fields.userSvtEntity;
    this->fields.isLimitCntMax = Master_object & 1;
    if ( v221 )
    {
      Master_object = UserServantEntity__isLevelMax(v221, 0LL);
      v222 = this->fields.userSvtEntity;
      this->fields.isLvMax = Master_object & 1;
      if ( v222 )
      {
        this->fields.isIgnoreCombineLimitSpecial = UserServantEntity__IsIgnoreCombineLimitSpecial(v222, 0LL);
        this->fields.isSealCombineLimit = CombineServantListViewItem__GetSealCombineLimit(this, v223);
        goto LABEL_279;
      }
    }
    goto LABEL_447;
  }
  if ( v197 != 2 )
    goto LABEL_280;
  v317 = isMtSvt;
  this->fields.isLimitCntMax = UserServantEntity__isLimitCountMax(userSvtEntity, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v198 = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  v200 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v199 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  v201 = (ServantLimitImageMaster_o *)v198;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v351.fields.currentCryptoKey = v200;
  *(_QWORD *)&v351.fields.fakeValue = v199;
  v202 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v351, 0LL);
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(
                    userSvtEntity->fields.limitCount,
                    0LL);
  if ( !v201 )
    goto LABEL_447;
  Master_object = ServantLimitImageMaster__IsServantLimitCountSeal(v201, v202, Master_object, 0LL);
  v203 = this->fields.userSvtEntity;
  this->fields.isSealedLimitCount = Master_object & 1;
  if ( !v203 )
    goto LABEL_447;
  this->fields.isLvMax = UserServantEntity__isLevelMax(v203, 0LL);
  Master_object = CombineServantListViewItem__GetSealCombineLimit(this, v204);
  isHeroineSvt = this->fields.isHeroineSvt;
  this->fields.isSealCombineLimit = Master_object & 1;
  if ( isHeroineSvt )
    goto LABEL_279;
  if ( !*p_servantEntity )
    goto LABEL_447;
  v206 = (UserServantEntity_o *)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_447;
  combineLimitId = (*p_servantEntity)->fields.combineLimitId;
  v209 = *(_QWORD *)&v206->fields.limitCount.fields.currentCryptoKey;
  v208 = *(_QWORD *)&v206->fields.limitCount.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v352.fields.currentCryptoKey = v209;
  *(_QWORD *)&v352.fields.fakeValue = v208;
  v210 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v352, 0LL);
  Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_447;
  Master_object = (int64_t)DataManager__GetMasterData_object_(
                             (DataManager_o *)Master_object,
                             (const MethodInfo_303395C *)Method_DataManager_GetMasterData_CombineLimitMaster___);
  if ( !Master_object )
    goto LABEL_447;
  Master_object = (int64_t)CombineLimitMaster__GetEntity(
                             (CombineLimitMaster_o *)Master_object,
                             combineLimitId,
                             v210,
                             0LL);
  if ( !Master_object )
    goto LABEL_447;
  v211 = Master_object;
  v213 = *(_QWORD *)(Master_object + 32);
  v212 = *(_QWORD *)(Master_object + 40);
  Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_447;
  Master_object = (int64_t)DataManager__GetMasterData_object_(
                             (DataManager_o *)Master_object,
                             (const MethodInfo_303395C *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !v212 )
    goto LABEL_447;
  v214 = *(_QWORD *)(v212 + 24);
  if ( (int)v214 < 1 )
    goto LABEL_433;
  v215 = (UserItemMaster_o *)Master_object;
  v216 = 0LL;
  while ( 1 )
  {
    if ( v216 >= (unsigned int)v214 )
      goto LABEL_454;
    if ( !v213 )
      goto LABEL_447;
    if ( v216 >= *(unsigned int *)(v213 + 24) )
      goto LABEL_454;
    v217 = (UserServantEntity_o *)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_447;
    v218 = *(_OWORD *)&v217->fields.userId.fields.fakeValue;
    v219 = *(_DWORD *)(v212 + 32 + 4 * v216);
    v220 = *(_DWORD *)(v213 + 32 + 4 * v216);
    *(_OWORD *)&v334.fields.currentCryptoKey = *(_OWORD *)&v217->fields.userId.fields.currentCryptoKey;
    *(_OWORD *)&v334.fields.fakeValue = v218;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v324 = v334;
    Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48231240(&v324, 0LL);
    if ( !v215 )
      goto LABEL_447;
    Master_object = UserItemMaster__TryGetEntity(v215, &v339, Master_object, v219, 0LL);
    if ( (Master_object & 1) == 0 )
      goto LABEL_432;
    if ( !v339 )
      goto LABEL_447;
    if ( v219 == v339->fields.itemId )
      break;
LABEL_274:
    LODWORD(v214) = *(_DWORD *)(v212 + 24);
    if ( (__int64)++v216 >= (int)v214 )
      goto LABEL_433;
  }
  if ( v220 <= v339->fields.num )
  {
    *p_isLimitUpItemNum = 1;
    goto LABEL_274;
  }
LABEL_432:
  *p_isLimitUpItemNum = 0;
LABEL_433:
  if ( !v311 )
    goto LABEL_447;
  v144 = v317;
  if ( *(_QWORD *)(v311 + 96) < *(int *)(v211 + 24) )
    *p_isLimitUpItemNum = 0;
LABEL_279:
  v197 = this->fields.type;
LABEL_280:
  if ( v197 == 3 )
  {
    CombineServantListViewItem__SetSkillInfo(this, v75);
    v197 = this->fields.type;
  }
  if ( (unsigned int)(v197 - 11) <= 1 )
  {
    CombineServantListViewItem__SetAppendSkillInfo(this, v75);
    v197 = this->fields.type;
  }
  if ( v197 == 4 && !this->fields.isHeroineSvt )
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
                        0LL);
      this->fields.isTdLvMax = 1;
      if ( tdInfo )
      {
        id = tdInfo->fields.id;
        if ( id >= 1 )
        {
          lv = tdInfo->fields.lv;
          Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Master_object )
            goto LABEL_447;
          Master_object = (int64_t)DataManager__GetMasterData_object_(
                                     (DataManager_o *)Master_object,
                                     (const MethodInfo_303395C *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
          if ( !Master_object )
            goto LABEL_447;
          Master_object = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                     id,
                                     (const MethodInfo_32E1E3C *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
          if ( !Master_object )
            goto LABEL_447;
          if ( lv < *(_DWORD *)(Master_object + 48) )
            this->fields.isTdLvMax = 0;
        }
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_UserServantMaster___);
        if ( Master_object )
        {
          SameSvtNpLvCache = UserServantMaster__getSameSvtNpLvCache(
                               (UserServantMaster_o *)Master_object,
                               (UserServantEntity_o *)*p_userSvtEntity,
                               &cachedUserServantNpLvDict,
                               0LL);
          if ( SameSvtNpLvCache < 1 || this->fields.isTdLvMax )
            goto LABEL_286;
          v248 = SameSvtNpLvCache;
          Master_object = CombineServantListViewItem__GetNpInfo(this, &tdLv[1], tdLv, &tdMaxLv, v247);
          if ( v311 )
          {
            v249 = *(_QWORD *)(v311 + 96);
            if ( v249 > 1200000 )
            {
              this->fields.isSameSvt = 1;
              goto LABEL_286;
            }
            Master_object = (int64_t)*p_userSvtEntity;
            if ( *p_userSvtEntity )
            {
              v305 = UserServantEntity__checkTreasureDeviceLevelUp((UserServantEntity_o *)Master_object, v248, 0LL);
              v306 = tdLv[0];
              if ( tdLv[0] >= v305 )
              {
                v309 = 0;
LABEL_446:
                this->fields.isSameSvt = v249 >= v309;
                goto LABEL_286;
              }
              v307 = tdLv[1];
              v308 = v305;
              v309 = 0;
              while ( 1 )
              {
                Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( !Master_object )
                  break;
                Master_object = (int64_t)DataManager__GetMasterData_object_(
                                           (DataManager_o *)Master_object,
                                           (const MethodInfo_303395C *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
                if ( !Master_object )
                  break;
                v310 = TreasureDvcLvMaster__GetEntity((TreasureDvcLvMaster_o *)Master_object, v307, v306, 0LL);
                if ( v310 )
                  v309 += v310->fields.qp;
                if ( v308 == ++v306 )
                  goto LABEL_446;
              }
            }
          }
        }
      }
    }
    goto LABEL_447;
  }
LABEL_286:
  v224 = this->fields.type;
  if ( v224 != 5 )
    goto LABEL_344;
  this->fields.isMaterialSvt = v144;
  Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_447;
  Master_object = (int64_t)DataManager__GetMasterData_object_(
                             (DataManager_o *)Master_object,
                             (const MethodInfo_303395C *)Method_DataManager_GetMasterData_UserServantLeaderMaster___);
  if ( !Master_object )
    goto LABEL_447;
  Master_object = *(_QWORD *)(Master_object + 40);
  if ( !Master_object )
    goto LABEL_447;
  v226 = System_Collections_ObjectModel_Collection_object___GetEnumerator(
           (System_Collections_ObjectModel_Collection_T__o *)Master_object,
           (const MethodInfo_327DBFC *)Method_System_Collections_ObjectModel_Collection_UserServantLeaderEntity__GetEnumerator__);
  if ( !v226 )
    sub_1BDBAD4(0LL, v225);
  while ( 1 )
  {
    v227 = v226->klass;
    v228 = *(unsigned __int16 *)(&v226->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v226->klass->_2.bitflags2 + 3) )
    {
      v229 = &v227->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)v229 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v228;
        v229 += 4;
        if ( !v228 )
          goto LABEL_295;
      }
      v230 = (__int64)&v227->vtable[*v229].method;
    }
    else
    {
LABEL_295:
      v230 = sub_1C2C00C(v226, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v230)(
            v226,
            *(_QWORD *)(v230 + 8)) & 1) == 0 )
      break;
    v231 = v226->klass;
    v232 = *(unsigned __int16 *)(&v226->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v226->klass->_2.bitflags2 + 3) )
    {
      v233 = &v231->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_UserServantLeaderEntity__c **)v233 - 1) != System_Collections_Generic_IEnumerator_UserServantLeaderEntity__TypeInfo )
      {
        --v232;
        v233 += 4;
        if ( !v232 )
          goto LABEL_302;
      }
      v234 = (__int64)&v231->vtable[*v233].method;
    }
    else
    {
LABEL_302:
      v234 = sub_1C2C00C(v226, System_Collections_Generic_IEnumerator_UserServantLeaderEntity__TypeInfo, 0LL);
    }
    v235 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v234)(
             v226,
             *(_QWORD *)(v234 + 8));
    if ( !v235 )
      sub_1BDBAD4(0LL, v236);
    v237 = (UserServantEntity_o *)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      sub_1BDBAD4(v235, v236);
    v238 = *(_OWORD *)&v237->fields.id.fields.fakeValue;
    v239 = *(_QWORD *)(v235 + 56);
    *(_OWORD *)&v334.fields.currentCryptoKey = *(_OWORD *)&v237->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v334.fields.fakeValue = v238;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v323 = v334;
    if ( v239 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48231240(&v323, 0LL) )
    {
      this->fields.isUseSupport = 1;
      break;
    }
  }
  v240 = v226->klass;
  v241 = *(unsigned __int16 *)(&v226->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v226->klass->_2.bitflags2 + 3) )
  {
    v242 = &v240->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v242 - 1) != System_IDisposable_TypeInfo )
    {
      --v241;
      v242 += 4;
      if ( !v241 )
        goto LABEL_314;
    }
    v243 = (__int64)&v240->vtable[*v242].method;
  }
  else
  {
LABEL_314:
    v243 = sub_1C2C00C(v226, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v243)(v226, *(_QWORD *)(v243 + 8));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_UserRecommendSupportMaster___);
  v250 = (UserServantEntity_o *)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_447;
  v251 = *(_OWORD *)&v250->fields.id.fields.fakeValue;
  v252 = (UserRecommendSupportMaster_o *)Master_object;
  *(_OWORD *)&v334.fields.currentCryptoKey = *(_OWORD *)&v250->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v334.fields.fakeValue = v251;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v322 = v334;
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48231240(&v322, 0LL);
  if ( !v252 )
    goto LABEL_447;
  this->fields.isUseRecommendSupport = UserRecommendSupportMaster__IsSettingServant(v252, Master_object, 0, 0LL);
  v253 = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_UserServantGrandMaster___);
  v254 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  v255 = (UserServantGrandMaster_o *)v253;
  *(_OWORD *)&v321.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v321.fields.fakeValue = v254;
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48231240(&v321, 0LL);
  if ( !v255 )
    goto LABEL_447;
  this->fields.isGrandSvt = UserServantGrandMaster__IsSettingServant(v255, Master_object, 0LL);
  v256 = baseUsrSvtData && UserServantEntity__IsEventJoin(baseUsrSvtData, 0LL);
  Master_object = (int64_t)this->fields.userSvtEntity;
  this->fields.isEventJoinBaseSvt = v256;
  if ( !Master_object )
    goto LABEL_447;
  IsMaterialTd = UserServantEntity__IsMaterialTd((UserServantEntity_o *)Master_object, 0LL);
  v224 = this->fields.type;
  this->fields.isMaterialTdSvt = IsMaterialTd;
LABEL_344:
  if ( v224 == 6 )
  {
    Master_object = (int64_t)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_447;
    Master_object = UserServantEntity__isExceedLvMax((UserServantEntity_o *)Master_object, 0LL);
    v258 = this->fields.userSvtEntity;
    this->fields.isLvExceedMax = Master_object & 1;
    if ( !v258 )
      goto LABEL_447;
    Master_object = UserServantEntity__isLimitCountMax(v258, 0LL);
    v259 = this->fields.userSvtEntity;
    this->fields.isLimitCntMax = Master_object & 1;
    if ( !v259 )
      goto LABEL_447;
    isLevelMax = UserServantEntity__isLevelMax(v259, 0LL);
    v261 = this->fields.isHeroineSvt;
    this->fields.isLvMax = isLevelMax;
    if ( !v261 || UserServantEntity__IsUseLevelExceedItemHeroine(userSvtEntity, 0LL) )
    {
      Master_object = (int64_t)*p_userSvtEntity;
      if ( !*p_userSvtEntity )
        goto LABEL_447;
      SvtExceedEnt = UserServantEntity__getSvtExceedEnt((UserServantEntity_o *)Master_object, 0LL);
      if ( SvtExceedEnt )
      {
        v263 = (int32_t *)SvtExceedEnt;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_CommonConsumeMaster___);
        if ( !Master_object )
          goto LABEL_447;
        IdEntityList = CommonConsumeMaster__GetIdEntityList((CommonConsumeMaster_o *)Master_object, v263[12], 0LL);
        if ( IdEntityList )
        {
          v265 = IdEntityList;
          v266 = (System_Collections_Generic_HashSet_int__o *)sub_1BDBAC4(System_Collections_Generic_HashSet_int__TypeInfo);
          System_Collections_Generic_HashSet_int____ctor(
            v266,
            (const MethodInfo_358B9A0 *)Method_System_Collections_Generic_HashSet_int___ctor__);
          v267 = (System_Collections_Generic_HashSet_int__o *)sub_1BDBAC4(System_Collections_Generic_HashSet_int__TypeInfo);
          System_Collections_Generic_HashSet_int____ctor(
            v267,
            (const MethodInfo_358B9A0 *)Method_System_Collections_Generic_HashSet_int___ctor__);
          v268 = v265->max_length;
          if ( v268 >= 1 )
          {
            v269 = 0LL;
            while ( (unsigned int)v269 < v268 )
            {
              v270 = v265->m_Items[v269];
              if ( !v270 )
                goto LABEL_447;
              if ( !v266 )
                goto LABEL_447;
              Master_object = System_Collections_Generic_HashSet_int___Add(
                                v266,
                                v270->fields.objectId,
                                (const MethodInfo_358CBA4 *)Method_System_Collections_Generic_HashSet_int__Add__);
              if ( !v267 )
                goto LABEL_447;
              Master_object = System_Collections_Generic_HashSet_int___Add(
                                v267,
                                v270->fields.num,
                                (const MethodInfo_358CBA4 *)Method_System_Collections_Generic_HashSet_int__Add__);
              v268 = v265->max_length;
              if ( (int)++v269 >= v268 )
                goto LABEL_363;
            }
LABEL_454:
            sub_1BDBADC(Master_object, v75, v139);
          }
LABEL_363:
          if ( v263[13] >= 1 )
          {
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_SvtCoinMaster___);
            v271 = (UserServantEntity_o *)*p_userSvtEntity;
            if ( *p_userSvtEntity )
            {
              v272 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
              v274 = *(_QWORD *)&v271->fields.svtId.fields.currentCryptoKey;
              v273 = *(_QWORD *)&v271->fields.svtId.fields.fakeValue;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v353.fields.currentCryptoKey = v274;
              *(_QWORD *)&v353.fields.fakeValue = v273;
              Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v353, 0LL);
              if ( v272 )
              {
                Master_object = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                           v272,
                                           Master_object,
                                           (const MethodInfo_32E1E3C *)Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__GetEntity__);
                if ( Master_object )
                {
                  if ( v266 )
                  {
                    Master_object = System_Collections_Generic_HashSet_int___Add(
                                      v266,
                                      *(_DWORD *)(Master_object + 24),
                                      (const MethodInfo_358CBA4 *)Method_System_Collections_Generic_HashSet_int__Add__);
                    if ( v267 )
                    {
                      System_Collections_Generic_HashSet_int___Add(
                        v267,
                        v263[13],
                        (const MethodInfo_358CBA4 *)Method_System_Collections_Generic_HashSet_int__Add__);
                      goto LABEL_374;
                    }
                  }
                }
              }
            }
            goto LABEL_447;
          }
LABEL_374:
          v275 = (UserServantEntity_o *)*p_userSvtEntity;
          v276 = System_Linq_Enumerable__ToArray_int_(
                   (System_Collections_Generic_IEnumerable_TSource__o *)v266,
                   (const MethodInfo_3070610 *)Method_System_Linq_Enumerable_ToArray_int___);
          Master_object = (int64_t)System_Linq_Enumerable__ToArray_int_(
                                     (System_Collections_Generic_IEnumerable_TSource__o *)v267,
                                     (const MethodInfo_3070610 *)Method_System_Linq_Enumerable_ToArray_int___);
          if ( !v311 )
            goto LABEL_447;
          this->fields.isLvExceedItemNum = CombineUtility__CheckCombineNeedItemsEnough(
                                             v275,
                                             v276,
                                             (System_Int32_array *)Master_object,
                                             *(_QWORD *)(v311 + 96),
                                             v263[8],
                                             0LL);
        }
      }
    }
  }
  if ( this->fields.type == 8 )
  {
    Master_object = (int64_t)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_447;
    this->fields.isFriendshipExceedMax = UserServantEntity__isExceedFriendshipMax(
                                           (UserServantEntity_o *)Master_object,
                                           0LL);
    v277 = *(_QWORD *)&v315->fields.friendshipRank.fields.currentCryptoKey;
    v278 = *(_QWORD *)&v315->fields.friendshipRank.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v354.fields.currentCryptoKey = v277;
    *(_QWORD *)&v354.fields.fakeValue = v278;
    Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v354, 0LL);
    v279 = *p_servantEntity;
    if ( !*p_servantEntity )
      goto LABEL_447;
    v280 = (_DWORD)Master_object == v315->fields.friendshipExceedCount + v279->fields.maxFriendshipRank;
    this->fields.isFriendshipRankMax = v280;
    if ( v280 && !this->fields.isFriendshipExceedMax )
    {
      if ( this->fields.isHeroineSvt )
      {
        Master_object = UserServantEntity__IsUseFriendshipExceedItemHeroine(userSvtEntity, 0LL);
        if ( (Master_object & 1) == 0 )
          goto LABEL_384;
        v279 = *p_servantEntity;
        if ( !*p_servantEntity )
          goto LABEL_447;
      }
      maxFriendshipRank = v279->fields.maxFriendshipRank;
      friendshipExceedCount = v315->fields.friendshipExceedCount;
      Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Master_object )
        goto LABEL_447;
      Master_object = (int64_t)DataManager__GetMasterData_object_(
                                 (DataManager_o *)Master_object,
                                 (const MethodInfo_303395C *)Method_DataManager_GetMasterData_FriendshipMaster___);
      if ( !*p_servantEntity )
        goto LABEL_447;
      if ( !Master_object )
        goto LABEL_447;
      Master_object = (int64_t)FriendshipMaster__GetEntity(
                                 (FriendshipMaster_o *)Master_object,
                                 (*p_servantEntity)->fields.friendshipId,
                                 maxFriendshipRank + friendshipExceedCount + 1,
                                 0LL);
      if ( !Master_object )
        goto LABEL_447;
      v298 = Master_object;
      v300 = *(_QWORD *)(Master_object + 32);
      v299 = *(_QWORD *)(Master_object + 40);
      Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Master_object )
        goto LABEL_447;
      Master_object = (int64_t)DataManager__GetMasterData_object_(
                                 (DataManager_o *)Master_object,
                                 (const MethodInfo_303395C *)Method_DataManager_GetMasterData_UserItemMaster___);
      if ( !v299 )
        goto LABEL_447;
      if ( *(int *)(v299 + 24) < 1 )
      {
LABEL_429:
        if ( !v311 )
          goto LABEL_447;
        if ( *(_QWORD *)(v311 + 96) < *(int *)(v298 + 28) )
          this->fields.isFriendshipExceedItemNum = 0;
        goto LABEL_384;
      }
      v301 = (UserItemMaster_o *)Master_object;
      v302 = 0LL;
      v303 = v299 + 32;
      while ( 1 )
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4B3ED56 )
        {
          sub_1BDB878(&NetworkManager_TypeInfo, v75);
          byte_4B3ED56 = 1;
        }
        Master_object = (int64_t)NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          Master_object = (int64_t)NetworkManager_TypeInfo;
        }
        if ( v302 >= *(unsigned int *)(v299 + 24) )
          goto LABEL_454;
        if ( !v301 )
          goto LABEL_447;
        Master_object = UserItemMaster__TryGetEntity(
                          v301,
                          &v335,
                          *(_QWORD *)(*(_QWORD *)(Master_object + 184) + 64LL),
                          *(_DWORD *)(v303 + 4 * v302),
                          0LL);
        if ( (Master_object & 1) == 0 )
          break;
        if ( v302 >= *(unsigned int *)(v299 + 24) )
          goto LABEL_454;
        if ( !v335 )
          goto LABEL_447;
        if ( *(_DWORD *)(v303 + 4 * v302) == v335->fields.itemId )
        {
          if ( !v300 )
            goto LABEL_447;
          if ( v302 >= *(unsigned int *)(v300 + 24) )
            goto LABEL_454;
          v304 = *(_DWORD *)(v300 + 32 + 4 * v302) <= v335->fields.num;
          goto LABEL_427;
        }
LABEL_428:
        if ( (__int64)++v302 >= *(int *)(v299 + 24) )
          goto LABEL_429;
      }
      v304 = 0;
LABEL_427:
      this->fields.isFriendshipExceedItemNum = v304;
      goto LABEL_428;
    }
  }
LABEL_384:
  Master_object = (int64_t)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_447;
  Master_object = UserServantEntity__getDispLimitCount((UserServantEntity_o *)Master_object, 0, 0LL);
  v281 = this->fields.userSvtEntity;
  this->fields.dispLimitCount = Master_object;
  if ( !v281 )
    goto LABEL_447;
  SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v281, -1, -1, 0LL);
  this->fields.skillCategoryIdList = SkillCategoryIdList;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.skillCategoryIdList, (int32_t)SkillCategoryIdList, v283, v284);
  Master_object = (int64_t)this->fields.userSvtEntity;
  if ( !Master_object )
    goto LABEL_447;
  TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                   (UserServantEntity_o *)Master_object,
                                   0,
                                   -1,
                                   0LL);
  this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
  sub_1BDB81C(
    (CGThumbnailListItem_o *)&this->fields.tdCategoryIdList,
    (int32_t)TreasureDeviceCategoryIdList,
    v286,
    v287);
  Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_447;
  Master_object = (int64_t)DataManager__GetMasterData_object_(
                             (DataManager_o *)Master_object,
                             (const MethodInfo_303395C *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Master_object )
    goto LABEL_447;
  Master_object = (int64_t)DataMasterBase_object__object__int___GetEntity(
                             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                             this->fields.classId,
                             (const MethodInfo_32E1E3C *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !Master_object )
    goto LABEL_447;
  v288 = *(int *)(Master_object + 52);
  v289 = this->fields.servantEntity;
  this->fields.priority = v288;
  this->fields.sortValue1B = v288;
  if ( !v289 )
    goto LABEL_447;
  v290 = (UserServantEntity_o *)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_447;
  v291 = ((__int64)v289->fields.collectionNo << 16) | ((unsigned __int64)(unsigned int)this->fields.rarity << 48) | v290->fields.lv;
  v292 = type == 2 && !this->fields.isLimitCntMax;
  this->fields.sortValue2 = v291 | v292;
  v294 = *(_QWORD *)&v290->fields.svtId.fields.currentCryptoKey;
  v293 = *(_QWORD *)&v290->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v355.fields.currentCryptoKey = v294;
  *(_QWORD *)&v355.fields.fakeValue = v293;
  v295 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v355, 0LL);
  Master_object = (int64_t)this->fields.iconLabelInfo1;
  this->fields.sortValue2B = v295;
  this->fields.amountSortValue = -1LL;
  if ( !Master_object )
    goto LABEL_447;
  IconLabelInfo__Clear((IconLabelInfo_o *)Master_object, 0LL);
  Master_object = (int64_t)*p_iconLabelInfo2;
  if ( !*p_iconLabelInfo2 )
    goto LABEL_447;
  IconLabelInfo__Clear((IconLabelInfo_o *)Master_object, 0LL);
}


void __fastcall CombineServantListViewItem__Finalize(CombineServantListViewItem_o *this, const MethodInfo *method)
{
  ListViewItem__Finalize((ListViewItem_o *)this, 0LL);
}


SvtUseSkillData_o *__fastcall CombineServantListViewItem__GetAppendSkillData(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0
  SvtUseSkillData_o *v5; // x19

  if ( (byte_4B48A23 & 1) == 0 )
  {
    sub_1BDB878(&SvtUseSkillData_TypeInfo, method);
    byte_4B48A23 = 1;
  }
  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
    return UserServantEntity__getAppendSkillInfo(userSvtEntity, 0LL);
  v5 = (SvtUseSkillData_o *)sub_1BDBAC4(SvtUseSkillData_TypeInfo);
  SvtUseSkillData___ctor(v5, 0LL);
  return v5;
}


bool __fastcall CombineServantListViewItem__GetNpInfo(
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

  tdInfo = 0LL;
  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
  {
    TreasureDeviceInfo = UserServantEntity__getTreasureDeviceInfo(this->fields.userSvtEntity, &tdInfo, -1, -1, 0, 0LL);
    v11 = tdInfo;
    if ( !tdInfo )
      sub_1BDBAD4(TreasureDeviceInfo, v10);
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
  return userSvtEntity != 0LL;
}


bool __fastcall CombineServantListViewItem__GetSealCombineLimit(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1
  struct ServantEntity_o *servantEntity; // x8
  int32_t combineLimitId; // w2
  int32_t condTargetId; // w19
  int32_t condType; // w21
  int64_t condNum; // x20
  CombineLimitReleaseEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B48A24 & 1) == 0 )
  {
    sub_1BDB878(&CondType_TypeInfo, method);
    sub_1BDB878(&Method_DataManager_GetMaster_CombineLimitReleaseMaster___, v3);
    sub_1BDB878(&DataManager_TypeInfo, v4);
    byte_4B48A24 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_CombineLimitReleaseMaster___);
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
                                        0LL);
      if ( ((unsigned __int8)Master_object & 1) == 0 )
        return 0;
      if ( entity )
      {
        condType = entity->fields.condType;
        condTargetId = entity->fields.condTargetId;
        condNum = entity->fields.condNum;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        return !CondType__IsOpen(condType, condTargetId, condNum, 0, 0LL, 0LL);
      }
    }
LABEL_18:
    sub_1BDBAD4(Master_object, v6);
  }
  if ( !Master_object )
    goto LABEL_18;
  return CombineLimitReleaseMaster__IsExistSealedLimitCount(
           (CombineLimitReleaseMaster_o *)Master_object,
           combineLimitId,
           0LL);
}


bool __fastcall CombineServantListViewItem__GetSkillInfo(
        CombineServantListViewItem_o *this,
        SkillInfo_array **skillInfoList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UserServantEntity_o *userSvtEntity; // x20
  BalanceConfig_c *v7; // x0
  SkillInfo_array *v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4B48A22 & 1) == 0 )
  {
    sub_1BDB878(&BalanceConfig_TypeInfo, skillInfoList);
    sub_1BDB878(&SkillInfo___TypeInfo, v5);
    byte_4B48A22 = 1;
  }
  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
  {
    UserServantEntity__getSkillInfo(userSvtEntity, skillInfoList, -1, -1, 1, 0, -1, 0LL);
  }
  else
  {
    v7 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v7 = BalanceConfig_TypeInfo;
    }
    v8 = (SkillInfo_array *)sub_1BDB920(SkillInfo___TypeInfo, (unsigned int)v7->static_fields->SvtSkillListMax);
    *skillInfoList = v8;
    sub_1BDB81C((CGThumbnailListItem_o *)skillInfoList, (int32_t)v8, v9, v10);
  }
  return userSvtEntity != 0LL;
}


void __fastcall CombineServantListViewItem__InitFlags(CombineServantListViewItem_o *this, const MethodInfo *method)
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
  *(_QWORD *)&this->fields.isLimitUpItemNum = 0LL;
  *(_WORD *)&this->fields.isTdLvMax = 0;
  *(_DWORD *)&this->fields.isStatusUpSvt = 0;
  this->fields.isMaterialTdSvt = 0;
  this->fields.isGrandSvt = 0;
  *(_DWORD *)&this->fields.isBaseLvMax = 0;
  *(_DWORD *)&this->fields.isNotSelectSecondStatusUpAtk = 0;
  *(_QWORD *)&this->fields.isAtkUpMax = 0LL;
}


bool __fastcall CombineServantListViewItem__IsCanNotSelectSecondStatusMaterial(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isStatusUpSvt
      && this->fields.rarity >= 4
      && (this->fields.hpBase >= 1 && !this->fields.isHpUpMax || this->fields.atkBase >= 1 && !this->fields.isAtkUpMax);
}


bool __fastcall CombineServantListViewItem__IsMatchBaseServantFilter(
        CombineServantListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  FilterKindList_c *v8; // x0
  __int64 ClassGroupFilterKindList; // x0
  FilterKindList_c *v10; // x0
  ListViewSort_FilterKind_array *v11; // x0
  FilterKindList_c *v12; // x0
  ListViewSort_FilterKind_array *v13; // x0
  FilterKindList_c *v14; // x0
  ListViewSort_FilterKind_array *v15; // x0
  FilterKindList_c *v16; // x0
  ListViewSort_FilterKind_array *v17; // x0
  UserServantEntity_o *userSvtEntity; // x21
  __int64 v19; // x2
  __int64 v20; // x1
  _BOOL4 isChoice; // w8
  FilterKindList_c *v22; // x0
  ListViewSort_FilterKind_array *v23; // x21
  UserServantEntity_o *v25; // x0
  int32_t dispLimitCount; // w21
  UserServantEntity_o *v27; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  _BOOL4 IsUnSelectedAllTargetFilters; // w21
  _BOOL4 v35; // w23
  _BOOL4 IsMatchEffectCategory; // w22
  _BOOL4 v37; // w0

  if ( (byte_4B48A12 & 1) == 0 )
  {
    sub_1BDB878(&FilterKindList_TypeInfo, sort);
    sub_1BDB878(&ListViewSort_FilterKind___TypeInfo, v5);
    sub_1BDB878(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v6);
    sub_1BDB878(&ServantEventBonusFilterController_TypeInfo, v7);
    byte_4B48A12 = 1;
  }
  v8 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v8 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v8->static_fields->ClassGroupFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_69;
  ClassGroupFilterKindList = (__int64)System_Collections_Generic_List_Int32Enum___ToArray(
                                        (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                        (const MethodInfo_36BD084 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_69;
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0LL) )
  {
    v10 = FilterKindList_TypeInfo;
    if ( !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
      v10 = FilterKindList_TypeInfo;
    }
    ClassGroupFilterKindList = (__int64)v10->static_fields->ClassFilterKindList;
    if ( !ClassGroupFilterKindList )
      goto LABEL_69;
    v11 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                             (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                             (const MethodInfo_36BD084 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v11, 0LL)
      && !ListViewSort__IsMatchClassFilter(sort, this->fields.servantEntity, 0LL) )
    {
      return 0;
    }
  }
  else if ( !ListViewSort__IsMatchClassGroupFilter(sort, this->fields.servantEntity, 0LL) )
  {
    return 0;
  }
  v12 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v12 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v12->static_fields->NpTypeFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_69;
  v13 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_36BD084 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v13, 0LL)
    && !ListViewSort__IsMatchNPTypeFilter(sort, this->fields.userSvtEntity, 0LL) )
  {
    return 0;
  }
  v14 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v14 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v14->static_fields->NpEffectFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_69;
  v15 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_36BD084 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v15, 0LL)
    && !ListViewSort__IsMatchNPEffectFilter(sort, this->fields.userSvtEntity, 0LL) )
  {
    return 0;
  }
  v16 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v16 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v16->static_fields->CombineBaseServantFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_69;
  v17 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_36BD084 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v17, 0LL)
    && !ListViewSort__IsMatchServantStatusFilter(sort, this->fields.userSvtEntity, 0LL) )
  {
    return 0;
  }
  if ( !ListViewSort__CheckSvtEventBonusFilterDefaultAll(sort, -1, 0LL) )
  {
    userSvtEntity = this->fields.userSvtEntity;
    if ( !ServantEventBonusFilterController_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantEventBonusFilterController_TypeInfo);
    if ( ServantEventBonusFilterController__IsHideServant(userSvtEntity, sort, -1, 0LL) )
      return 0;
  }
  if ( !ListViewSort__CheckSvtEquipEffectFilterDefaultAll(sort, 0LL) )
  {
    v25 = this->fields.userSvtEntity;
    if ( v25 )
    {
      dispLimitCount = this->fields.dispLimitCount;
      if ( dispLimitCount != UserServantEntity__getDispLimitCount(v25, 0, 0LL) )
      {
        ClassGroupFilterKindList = (__int64)this->fields.userSvtEntity;
        if ( !ClassGroupFilterKindList )
          goto LABEL_69;
        ClassGroupFilterKindList = UserServantEntity__getDispLimitCount(
                                     (UserServantEntity_o *)ClassGroupFilterKindList,
                                     0,
                                     0LL);
        v27 = this->fields.userSvtEntity;
        this->fields.dispLimitCount = ClassGroupFilterKindList;
        if ( !v27 )
          goto LABEL_69;
        SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v27, -1, -1, 0LL);
        this->fields.skillCategoryIdList = SkillCategoryIdList;
        sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.skillCategoryIdList, (int32_t)SkillCategoryIdList, v29, v30);
        ClassGroupFilterKindList = (__int64)this->fields.userSvtEntity;
        if ( !ClassGroupFilterKindList )
          goto LABEL_69;
        TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                         (UserServantEntity_o *)ClassGroupFilterKindList,
                                         0,
                                         -1,
                                         0LL);
        this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
        sub_1BDB81C(
          (CGThumbnailListItem_o *)&this->fields.tdCategoryIdList,
          (int32_t)TreasureDeviceCategoryIdList,
          v32,
          v33);
      }
    }
    ClassGroupFilterKindList = sub_1BDB920(ListViewSort_FilterKind___TypeInfo, 1LL);
    if ( !ClassGroupFilterKindList )
      goto LABEL_69;
    v20 = ClassGroupFilterKindList;
    if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
      goto LABEL_70;
    *(_DWORD *)(ClassGroupFilterKindList + 32) = 50;
    IsUnSelectedAllTargetFilters = ListViewSort__IsUnSelectedAllTargetFilters(
                                     sort,
                                     (ListViewSort_FilterKind_array *)ClassGroupFilterKindList,
                                     0LL);
    ClassGroupFilterKindList = sub_1BDB920(ListViewSort_FilterKind___TypeInfo, 1LL);
    if ( !ClassGroupFilterKindList )
      goto LABEL_69;
    v20 = ClassGroupFilterKindList;
    if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
LABEL_70:
      sub_1BDBADC(ClassGroupFilterKindList, v20, v19);
    *(_DWORD *)(ClassGroupFilterKindList + 32) = 51;
    v35 = ListViewSort__IsUnSelectedAllTargetFilters(
            sort,
            (ListViewSort_FilterKind_array *)ClassGroupFilterKindList,
            0LL);
    IsMatchEffectCategory = ServantEquipEffectFilterController__IsMatchEffectCategory(
                              this->fields.tdCategoryIdList,
                              sort,
                              0LL);
    v37 = ServantEquipEffectFilterController__IsMatchEffectCategory(this->fields.skillCategoryIdList, sort, 0LL);
    if ( ((IsUnSelectedAllTargetFilters ^ v35) & 1) != 0 )
    {
      if ( IsUnSelectedAllTargetFilters )
      {
        if ( !v37 )
          return 0;
      }
      else if ( !IsMatchEffectCategory )
      {
        return 0;
      }
    }
    else if ( !IsMatchEffectCategory && !v37 )
    {
      return 0;
    }
  }
  if ( !ListViewSort__IsMatchServantAttriFilter(sort, this->fields.userSvtEntity, this->fields.servantEntity, 0LL)
    || !ListViewSort__IsMatchServantSubAttriFilter(sort, this->fields.userSvtEntity, this->fields.servantEntity, 0LL) )
  {
    return 0;
  }
  ClassGroupFilterKindList = sub_1BDB920(ListViewSort_FilterKind___TypeInfo, 1LL);
  if ( !ClassGroupFilterKindList )
LABEL_69:
    sub_1BDBAD4(ClassGroupFilterKindList, sort);
  v20 = ClassGroupFilterKindList;
  if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
    goto LABEL_70;
  *(_DWORD *)(ClassGroupFilterKindList + 32) = 39;
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0LL)
    && ListViewSort__GetFilter(sort, 39, 0LL) )
  {
    isChoice = !this->fields.isChoice;
    if ( !this->fields.isSwapChoice )
      isChoice = this->fields.isChoice;
    if ( !isChoice )
      return 0;
  }
  v22 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v22 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v22->static_fields->RarityFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_69;
  v23 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_36BD084 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v23, 0LL)
      || ListViewSort__IsSelectedAllTargetFilters(sort, v23, 0LL)
      || ListViewSort__IsMatchRarityFilter(sort, this->fields.rarity, 0LL);
}


bool __fastcall CombineServantListViewItem__IsMatchMaterialFilter(
        CombineServantListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  CombineServantListViewItem_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  _BOOL4 v8; // w21
  FilterKindList_c *v9; // x0
  ListViewSort_FilterKind_array *v10; // x0
  FilterKindList_c *v11; // x0
  ListViewSort_FilterKind_array *v12; // x0
  __int64 v13; // x2
  CombineServantListViewItem_o *v14; // x1
  FilterKindList_c *v15; // x0
  ListViewSort_FilterKind_array *v16; // x0
  FilterKindList_c *v17; // x0
  ListViewSort_FilterKind_array *v18; // x0
  FilterKindList_c *v19; // x0
  ListViewSort_FilterKind_array *v20; // x0
  UserServantEntity_o *userSvtEntity; // x21
  _BOOL4 isChoice; // w21
  UserServantEntity_o *v23; // x0
  int32_t dispLimitCount; // w21
  UserServantEntity_o *v25; // x8
  System_Int32_array *SkillCategoryIdList; // x0
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  System_Int32_array *TreasureDeviceCategoryIdList; // x0
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  _BOOL4 IsUnSelectedAllTargetFilters; // w21
  _BOOL4 v33; // w23
  _BOOL4 IsMatchEffectCategory; // w22
  _BOOL4 v35; // w0
  bool v36; // w0
  FilterKindList_c *v38; // x0
  ListViewSort_FilterKind_array *v39; // x21

  v4 = this;
  if ( (byte_4B48A13 & 1) == 0 )
  {
    sub_1BDB878(&FilterKindList_TypeInfo, sort);
    sub_1BDB878(&ListViewSort_FilterKind___TypeInfo, v5);
    sub_1BDB878(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v6);
    this = (CombineServantListViewItem_o *)sub_1BDB878(&ServantEventBonusFilterController_TypeInfo, v7);
    byte_4B48A13 = 1;
  }
  if ( !sort )
    goto LABEL_86;
  v8 = ListViewSort__GetFilter(sort, 28, 0LL) && v4->fields.isSameClass;
  v9 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v9 = FilterKindList_TypeInfo;
  }
  this = (CombineServantListViewItem_o *)v9->static_fields->ClassGroupFilterKindList;
  if ( !this )
    goto LABEL_86;
  v10 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)this,
                                           (const MethodInfo_36BD084 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, v10, 0LL) )
  {
    v11 = FilterKindList_TypeInfo;
    if ( !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
      v11 = FilterKindList_TypeInfo;
    }
    this = (CombineServantListViewItem_o *)v11->static_fields->ClassFilterKindList;
    if ( !this )
      goto LABEL_86;
    v12 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                             (System_Collections_Generic_List_T__o *)this,
                                             (const MethodInfo_36BD084 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, v12, 0LL) )
    {
      this = (CombineServantListViewItem_o *)sub_1BDB920(ListViewSort_FilterKind___TypeInfo, 1LL);
      if ( !this )
        goto LABEL_86;
      v14 = this;
      if ( !this->fields.sortIndex )
        goto LABEL_87;
      LODWORD(this->fields.sortValue0) = 28;
      if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)this, 0LL) )
        goto LABEL_22;
    }
    if ( ListViewSort__IsMatchClassFilter(sort, v4->fields.servantEntity, 0LL) )
      goto LABEL_22;
  }
  else if ( ListViewSort__IsMatchClassGroupFilter(sort, v4->fields.servantEntity, 0LL) )
  {
    goto LABEL_22;
  }
  if ( !v8 )
    return 0;
LABEL_22:
  v15 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v15 = FilterKindList_TypeInfo;
  }
  this = (CombineServantListViewItem_o *)v15->static_fields->NpTypeFilterKindList;
  if ( !this )
    goto LABEL_86;
  v16 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)this,
                                           (const MethodInfo_36BD084 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v16, 0LL)
    && !ListViewSort__IsMatchNPTypeFilter(sort, v4->fields.userSvtEntity, 0LL) )
  {
    return 0;
  }
  v17 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v17 = FilterKindList_TypeInfo;
  }
  this = (CombineServantListViewItem_o *)v17->static_fields->NpEffectFilterKindList;
  if ( !this )
    goto LABEL_86;
  v18 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)this,
                                           (const MethodInfo_36BD084 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v18, 0LL)
    && !ListViewSort__IsMatchNPEffectFilter(sort, v4->fields.userSvtEntity, 0LL) )
  {
    return 0;
  }
  v19 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v19 = FilterKindList_TypeInfo;
  }
  this = (CombineServantListViewItem_o *)v19->static_fields->ServantTypeFilterKindList;
  if ( !this )
    goto LABEL_86;
  v20 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)this,
                                           (const MethodInfo_36BD084 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v20, 0LL)
    && !ListViewSort__IsMatchServantTypeFilter(sort, v4->fields.servantEntity, 0LL) )
  {
    return 0;
  }
  if ( !ListViewSort__CheckSvtEventBonusFilterDefaultAll(sort, -1, 0LL) )
  {
    userSvtEntity = v4->fields.userSvtEntity;
    if ( !ServantEventBonusFilterController_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantEventBonusFilterController_TypeInfo);
    if ( ServantEventBonusFilterController__IsHideServant(userSvtEntity, sort, -1, 0LL) )
      return 0;
  }
  if ( ListViewSort__CheckSvtEquipEffectFilterDefaultAll(sort, 0LL) )
    goto LABEL_42;
  v23 = v4->fields.userSvtEntity;
  if ( v23 )
  {
    dispLimitCount = v4->fields.dispLimitCount;
    if ( dispLimitCount != UserServantEntity__getDispLimitCount(v23, 0, 0LL) )
    {
      this = (CombineServantListViewItem_o *)v4->fields.userSvtEntity;
      if ( !this )
        goto LABEL_86;
      this = (CombineServantListViewItem_o *)UserServantEntity__getDispLimitCount((UserServantEntity_o *)this, 0, 0LL);
      v25 = v4->fields.userSvtEntity;
      v4->fields.dispLimitCount = (int)this;
      if ( !v25 )
        goto LABEL_86;
      SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v25, -1, -1, 0LL);
      v4->fields.skillCategoryIdList = SkillCategoryIdList;
      sub_1BDB81C((CGThumbnailListItem_o *)&v4->fields.skillCategoryIdList, (int32_t)SkillCategoryIdList, v27, v28);
      this = (CombineServantListViewItem_o *)v4->fields.userSvtEntity;
      if ( !this )
        goto LABEL_86;
      TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                       (UserServantEntity_o *)this,
                                       0,
                                       -1,
                                       0LL);
      v4->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
      sub_1BDB81C(
        (CGThumbnailListItem_o *)&v4->fields.tdCategoryIdList,
        (int32_t)TreasureDeviceCategoryIdList,
        v30,
        v31);
    }
  }
  this = (CombineServantListViewItem_o *)sub_1BDB920(ListViewSort_FilterKind___TypeInfo, 1LL);
  if ( !this )
    goto LABEL_86;
  v14 = this;
  if ( !this->fields.sortIndex )
    goto LABEL_87;
  LODWORD(this->fields.sortValue0) = 50;
  IsUnSelectedAllTargetFilters = ListViewSort__IsUnSelectedAllTargetFilters(
                                   sort,
                                   (ListViewSort_FilterKind_array *)this,
                                   0LL);
  this = (CombineServantListViewItem_o *)sub_1BDB920(ListViewSort_FilterKind___TypeInfo, 1LL);
  if ( !this )
    goto LABEL_86;
  v14 = this;
  if ( !this->fields.sortIndex )
    goto LABEL_87;
  LODWORD(this->fields.sortValue0) = 51;
  v33 = ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)this, 0LL);
  IsMatchEffectCategory = ServantEquipEffectFilterController__IsMatchEffectCategory(
                            v4->fields.tdCategoryIdList,
                            sort,
                            0LL);
  v35 = ServantEquipEffectFilterController__IsMatchEffectCategory(v4->fields.skillCategoryIdList, sort, 0LL);
  if ( ((IsUnSelectedAllTargetFilters ^ v33) & 1) != 0 )
  {
    if ( IsUnSelectedAllTargetFilters )
    {
      if ( !v35 )
        return 0;
    }
    else if ( !IsMatchEffectCategory )
    {
      return 0;
    }
  }
  else if ( !IsMatchEffectCategory && !v35 )
  {
    return 0;
  }
LABEL_42:
  if ( !ListViewSort__IsMatchServantAttriFilter(sort, v4->fields.userSvtEntity, v4->fields.servantEntity, 0LL)
    || !ListViewSort__IsMatchServantSubAttriFilter(sort, v4->fields.userSvtEntity, v4->fields.servantEntity, 0LL) )
  {
    return 0;
  }
  this = (CombineServantListViewItem_o *)sub_1BDB920(ListViewSort_FilterKind___TypeInfo, 1LL);
  if ( !this )
LABEL_86:
    sub_1BDBAD4(this, sort);
  v14 = this;
  if ( !this->fields.sortIndex )
    goto LABEL_87;
  LODWORD(this->fields.sortValue0) = 39;
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)this, 0LL) )
  {
    this = (CombineServantListViewItem_o *)sub_1BDB920(ListViewSort_FilterKind___TypeInfo, 1LL);
    if ( !this )
      goto LABEL_86;
    v14 = this;
    if ( this->fields.sortIndex )
    {
      LODWORD(this->fields.sortValue0) = 29;
      if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)this, 0LL) )
        goto LABEL_79;
      goto LABEL_50;
    }
LABEL_87:
    sub_1BDBADC(this, v14, v13);
  }
LABEL_50:
  if ( ListViewSort__GetFilter(sort, 39, 0LL) )
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
  v36 = !ListViewSort__GetFilter(sort, 29, 0LL)
     || CombineServantListViewItem__get_IsCanNotSelect(v4, (const MethodInfo *)sort);
  if ( !isChoice && v36 )
    return 0;
LABEL_79:
  v38 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v38 = FilterKindList_TypeInfo;
  }
  this = (CombineServantListViewItem_o *)v38->static_fields->RarityFilterKindList;
  if ( !this )
    goto LABEL_86;
  v39 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)this,
                                           (const MethodInfo_36BD084 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v39, 0LL)
      || ListViewSort__IsSelectedAllTargetFilters(sort, v39, 0LL)
      || ListViewSort__IsMatchRarityFilter(sort, v4->fields.rarity, 0LL);
}


bool __fastcall CombineServantListViewItem__IsMatchServantFilter(
        CombineServantListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  FilterKindList_c *v8; // x0
  __int64 ClassGroupFilterKindList; // x0
  FilterKindList_c *v10; // x0
  ListViewSort_FilterKind_array *v11; // x0
  FilterKindList_c *v12; // x0
  ListViewSort_FilterKind_array *v13; // x0
  FilterKindList_c *v14; // x0
  ListViewSort_FilterKind_array *v15; // x0
  UserServantEntity_o *userSvtEntity; // x21
  __int64 v17; // x2
  __int64 v18; // x1
  _BOOL4 isChoice; // w8
  FilterKindList_c *v20; // x0
  ListViewSort_FilterKind_array *v21; // x21
  UserServantEntity_o *v23; // x0
  int32_t dispLimitCount; // w21
  UserServantEntity_o *v25; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  _BOOL4 IsUnSelectedAllTargetFilters; // w21
  _BOOL4 v33; // w23
  _BOOL4 IsMatchEffectCategory; // w22
  _BOOL4 v35; // w0

  if ( (byte_4B48A11 & 1) == 0 )
  {
    sub_1BDB878(&FilterKindList_TypeInfo, sort);
    sub_1BDB878(&ListViewSort_FilterKind___TypeInfo, v5);
    sub_1BDB878(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v6);
    sub_1BDB878(&ServantEventBonusFilterController_TypeInfo, v7);
    byte_4B48A11 = 1;
  }
  v8 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v8 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v8->static_fields->ClassGroupFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_64;
  ClassGroupFilterKindList = (__int64)System_Collections_Generic_List_Int32Enum___ToArray(
                                        (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                        (const MethodInfo_36BD084 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_64;
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0LL) )
  {
    v10 = FilterKindList_TypeInfo;
    if ( !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
      v10 = FilterKindList_TypeInfo;
    }
    ClassGroupFilterKindList = (__int64)v10->static_fields->ClassFilterKindList;
    if ( !ClassGroupFilterKindList )
      goto LABEL_64;
    v11 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                             (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                             (const MethodInfo_36BD084 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v11, 0LL)
      && !ListViewSort__IsMatchClassFilter(sort, this->fields.servantEntity, 0LL) )
    {
      return 0;
    }
  }
  else if ( !ListViewSort__IsMatchClassGroupFilter(sort, this->fields.servantEntity, 0LL) )
  {
    return 0;
  }
  v12 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v12 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v12->static_fields->NpTypeFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_64;
  v13 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_36BD084 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v13, 0LL)
    && !ListViewSort__IsMatchNPTypeFilter(sort, this->fields.userSvtEntity, 0LL) )
  {
    return 0;
  }
  v14 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v14 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v14->static_fields->NpEffectFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_64;
  v15 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_36BD084 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v15, 0LL)
    && !ListViewSort__IsMatchNPEffectFilter(sort, this->fields.userSvtEntity, 0LL) )
  {
    return 0;
  }
  if ( !ListViewSort__CheckSvtEventBonusFilterDefaultAll(sort, -1, 0LL) )
  {
    userSvtEntity = this->fields.userSvtEntity;
    if ( !ServantEventBonusFilterController_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantEventBonusFilterController_TypeInfo);
    if ( ServantEventBonusFilterController__IsHideServant(userSvtEntity, sort, -1, 0LL) )
      return 0;
  }
  if ( !ListViewSort__CheckSvtEquipEffectFilterDefaultAll(sort, 0LL) )
  {
    v23 = this->fields.userSvtEntity;
    if ( v23 )
    {
      dispLimitCount = this->fields.dispLimitCount;
      if ( dispLimitCount != UserServantEntity__getDispLimitCount(v23, 0, 0LL) )
      {
        ClassGroupFilterKindList = (__int64)this->fields.userSvtEntity;
        if ( !ClassGroupFilterKindList )
          goto LABEL_64;
        ClassGroupFilterKindList = UserServantEntity__getDispLimitCount(
                                     (UserServantEntity_o *)ClassGroupFilterKindList,
                                     0,
                                     0LL);
        v25 = this->fields.userSvtEntity;
        this->fields.dispLimitCount = ClassGroupFilterKindList;
        if ( !v25 )
          goto LABEL_64;
        SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v25, -1, -1, 0LL);
        this->fields.skillCategoryIdList = SkillCategoryIdList;
        sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.skillCategoryIdList, (int32_t)SkillCategoryIdList, v27, v28);
        ClassGroupFilterKindList = (__int64)this->fields.userSvtEntity;
        if ( !ClassGroupFilterKindList )
          goto LABEL_64;
        TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                         (UserServantEntity_o *)ClassGroupFilterKindList,
                                         0,
                                         -1,
                                         0LL);
        this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
        sub_1BDB81C(
          (CGThumbnailListItem_o *)&this->fields.tdCategoryIdList,
          (int32_t)TreasureDeviceCategoryIdList,
          v30,
          v31);
      }
    }
    ClassGroupFilterKindList = sub_1BDB920(ListViewSort_FilterKind___TypeInfo, 1LL);
    if ( !ClassGroupFilterKindList )
      goto LABEL_64;
    v18 = ClassGroupFilterKindList;
    if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
      goto LABEL_65;
    *(_DWORD *)(ClassGroupFilterKindList + 32) = 50;
    IsUnSelectedAllTargetFilters = ListViewSort__IsUnSelectedAllTargetFilters(
                                     sort,
                                     (ListViewSort_FilterKind_array *)ClassGroupFilterKindList,
                                     0LL);
    ClassGroupFilterKindList = sub_1BDB920(ListViewSort_FilterKind___TypeInfo, 1LL);
    if ( !ClassGroupFilterKindList )
      goto LABEL_64;
    v18 = ClassGroupFilterKindList;
    if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
LABEL_65:
      sub_1BDBADC(ClassGroupFilterKindList, v18, v17);
    *(_DWORD *)(ClassGroupFilterKindList + 32) = 51;
    v33 = ListViewSort__IsUnSelectedAllTargetFilters(
            sort,
            (ListViewSort_FilterKind_array *)ClassGroupFilterKindList,
            0LL);
    IsMatchEffectCategory = ServantEquipEffectFilterController__IsMatchEffectCategory(
                              this->fields.tdCategoryIdList,
                              sort,
                              0LL);
    v35 = ServantEquipEffectFilterController__IsMatchEffectCategory(this->fields.skillCategoryIdList, sort, 0LL);
    if ( ((IsUnSelectedAllTargetFilters ^ v33) & 1) != 0 )
    {
      if ( IsUnSelectedAllTargetFilters )
      {
        if ( !v35 )
          return 0;
      }
      else if ( !IsMatchEffectCategory )
      {
        return 0;
      }
    }
    else if ( !IsMatchEffectCategory && !v35 )
    {
      return 0;
    }
  }
  if ( !ListViewSort__IsMatchServantAttriFilter(sort, this->fields.userSvtEntity, this->fields.servantEntity, 0LL)
    || !ListViewSort__IsMatchServantSubAttriFilter(sort, this->fields.userSvtEntity, this->fields.servantEntity, 0LL) )
  {
    return 0;
  }
  ClassGroupFilterKindList = sub_1BDB920(ListViewSort_FilterKind___TypeInfo, 1LL);
  if ( !ClassGroupFilterKindList )
LABEL_64:
    sub_1BDBAD4(ClassGroupFilterKindList, sort);
  v18 = ClassGroupFilterKindList;
  if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
    goto LABEL_65;
  *(_DWORD *)(ClassGroupFilterKindList + 32) = 39;
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0LL)
    && ListViewSort__GetFilter(sort, 39, 0LL) )
  {
    isChoice = !this->fields.isChoice;
    if ( !this->fields.isSwapChoice )
      isChoice = this->fields.isChoice;
    if ( !isChoice )
      return 0;
  }
  v20 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v20 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v20->static_fields->RarityFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_64;
  v21 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_36BD084 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v21, 0LL)
      || ListViewSort__IsSelectedAllTargetFilters(sort, v21, 0LL)
      || ListViewSort__IsMatchRarityFilter(sort, this->fields.rarity, 0LL);
}


bool __fastcall CombineServantListViewItem__IsStatusMax(CombineServantListViewItem_o *this, const MethodInfo *method)
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


void __fastcall CombineServantListViewItem__ModifyChoiceItem(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0

  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_1BDBAD4(0LL, method);
  this->fields.isChoice = UserServantEntity__IsChoice(userSvtEntity, 0LL);
  this->fields.isSwapChoice = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineServantListViewItem__ModifyItem(
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
  *(_QWORD *)&this->fields.bonusKind = 1LL;
}


void __fastcall CombineServantListViewItem__ModifyLockItem(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0

  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_1BDBAD4(0LL, method);
  this->fields.isLock = UserServantEntity__IsLock(userSvtEntity, 0LL);
  this->fields.isSwapLock = 0;
}


void __fastcall CombineServantListViewItem__ModifyPushItem(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v4; // x1
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v6; // q1
  int64_t pushUserSvtId; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v8; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v9; // [xsp+20h] [xbp-40h]

  if ( (byte_4B48A10 & 1) == 0 )
  {
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
    byte_4B48A10 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame || (userSvtEntity = this->fields.userSvtEntity) == 0LL )
    sub_1BDBAD4(SelfUserGame, v4);
  v6 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  pushUserSvtId = SelfUserGame->fields.pushUserSvtId;
  *(_OWORD *)&v9.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v9.fields.fakeValue = v6;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v8 = v9;
  this->fields.isPush = pushUserSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48231240(&v8, 0LL);
}


void __fastcall CombineServantListViewItem__SetAppendSkillInfo(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  void *userSvtEntity; // x0
  SvtUseSkillData_o *AppendSkillInfo; // x0
  SvtUseSkillData_o *v14; // x20
  __int64 v15; // x2
  int64_t v16; // x21
  struct System_Int32_array *svtUseSkillIdList; // x8
  __int64 v18; // x26
  unsigned __int64 max_length; // x9
  unsigned __int64 v20; // x29
  struct System_Int32_array *v21; // x8
  struct System_Int32_array *svtSkillLvList; // x8
  int v23; // w9
  struct UserServantEntity_o *v24; // x8
  __int64 v25; // x22
  __int64 v26; // x23
  int32_t v27; // w0
  System_Collections_Generic_List_int__o *v28; // x22
  struct System_Int32_array *v29; // x8
  __int64 v30; // x29
  unsigned __int64 v31; // x9
  unsigned __int64 v32; // x26
  struct System_Int32_array *v33; // x8
  int v34; // w23
  struct UserServantEntity_o *v35; // x8
  CombineAppendPassiveSkillMaster_o *v36; // x23
  __int64 v37; // x24
  __int64 v38; // x25
  struct System_Int32_array *svtSkillNumsList; // x8
  struct System_Int32_array *v40; // x9
  struct System_Int32_array *v41; // x8
  __int64 v42; // x8
  _QWORD *v43; // x9
  __int64 v44; // x10
  char *v45; // x8
  struct UserServantEntity_o *v46; // x8
  SvtAppendPassiveSkillUnlockMaster_o *v47; // x23
  __int64 v48; // x24
  __int64 v49; // x25
  struct System_Int32_array *v50; // x8
  struct System_Int32_array *v51; // x8
  struct System_Int32_array *items; // x8
  _QWORD *v53; // x9
  __int64 size; // x10
  __int64 v55; // x8
  CombineAppendPassiveSkillEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v57; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v58; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v59; // 0:x0.16

  if ( (byte_4B48A0F & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMaster_CombineAppendPassiveSkillMaster___, method);
    sub_1BDB878(&Method_DataManager_GetMaster_SkillMaster___, v3);
    sub_1BDB878(&Method_DataManager_GetMaster_SvtAppendPassiveSkillUnlockMaster___, v4);
    sub_1BDB878(&DataManager_TypeInfo, v5);
    sub_1BDB878(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v6);
    sub_1BDB878(&Method_System_Linq_Enumerable_Any_int___, v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_int__Add__, v8);
    sub_1BDB878(&Method_System_Collections_Generic_List_int___ctor__, v9);
    sub_1BDB878(&System_Collections_Generic_List_int__TypeInfo, v10);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    byte_4B48A0F = 1;
  }
  entity = 0LL;
  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_79;
  AppendSkillInfo = UserServantEntity__getAppendSkillInfo((UserServantEntity_o *)userSvtEntity, 0LL);
  if ( !AppendSkillInfo )
    return;
  v14 = AppendSkillInfo;
  userSvtEntity = UserGameMaster__getSelfUserGame(0LL);
  if ( !userSvtEntity )
    goto LABEL_79;
  v16 = *((_QWORD *)userSvtEntity + 12);
  this->fields.isAppendSkillLvMax = 1;
  this->fields.isAllAppendSkillLock = 1;
  this->fields.isAppendSkillLvSame = 1;
  svtUseSkillIdList = v14->fields.svtUseSkillIdList;
  if ( !svtUseSkillIdList )
    goto LABEL_79;
  v18 = 8LL;
  while ( 1 )
  {
    max_length = svtUseSkillIdList->max_length;
    v20 = v18 - 8;
    if ( v18 - 8 >= (int)max_length )
      break;
    if ( v20 >= max_length )
      goto LABEL_82;
    if ( *((int *)&svtUseSkillIdList->obj.klass + v18) >= 1 )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      userSvtEntity = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_SkillMaster___);
      v21 = v14->fields.svtUseSkillIdList;
      if ( !v21 )
        goto LABEL_79;
      if ( v20 >= v21->max_length )
        goto LABEL_82;
      if ( !userSvtEntity )
        goto LABEL_79;
      userSvtEntity = DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)userSvtEntity,
                        *((_DWORD *)&v21->obj.klass + v18),
                        (const MethodInfo_32E1E3C *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
      svtSkillLvList = v14->fields.svtSkillLvList;
      if ( !svtSkillLvList )
        goto LABEL_79;
      if ( v20 >= svtSkillLvList->max_length )
LABEL_82:
        sub_1BDBADC(userSvtEntity, method, v15);
      if ( !userSvtEntity )
        goto LABEL_79;
      v23 = *((_DWORD *)&svtSkillLvList->obj.klass + v18);
      if ( v23 < *((_DWORD *)userSvtEntity + 10) && this->fields.isAppendSkillLvMax )
        this->fields.isAppendSkillLvMax = 0;
      if ( v23 >= 1 && this->fields.isAllAppendSkillLock )
        this->fields.isAllAppendSkillLock = 0;
      if ( svtSkillLvList->m_Items[1] != v23 && this->fields.isAppendSkillLvSame )
        this->fields.isAppendSkillLvSame = 0;
    }
    svtUseSkillIdList = v14->fields.svtUseSkillIdList;
    ++v18;
    if ( !svtUseSkillIdList )
      goto LABEL_79;
  }
  v24 = this->fields.userSvtEntity;
  if ( !v24 )
    goto LABEL_79;
  v26 = *(_QWORD *)&v24->fields.svtId.fields.currentCryptoKey;
  v25 = *(_QWORD *)&v24->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v57.fields.currentCryptoKey = v26;
  *(_QWORD *)&v57.fields.fakeValue = v25;
  v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v57, 0LL);
  this->fields.isAppendSkillExChangeLimit = UserServantAppendPassiveSkillMaster__IsAppendSkillExchangeLimit(v27, 0LL);
  v28 = (System_Collections_Generic_List_int__o *)sub_1BDBAC4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v28,
    (const MethodInfo_36B854C *)Method_System_Collections_Generic_List_int___ctor__);
  v29 = v14->fields.svtUseSkillIdList;
  if ( !v29 )
LABEL_79:
    sub_1BDBAD4(userSvtEntity, method);
  v30 = 8LL;
  while ( 1 )
  {
    v31 = v29->max_length;
    v32 = v30 - 8;
    if ( v30 - 8 >= (int)v31 )
      break;
    if ( v32 >= v31 )
      goto LABEL_82;
    if ( *((int *)&v29->obj.klass + v30) < 1 )
      goto LABEL_78;
    v33 = v14->fields.svtSkillLvList;
    if ( !v33 )
      goto LABEL_79;
    if ( v32 >= v33->max_length )
      goto LABEL_82;
    v34 = *((_DWORD *)&v33->obj.klass + v30);
    if ( DataManager_TypeInfo->_2.cctor_finished )
    {
      if ( v34 )
        goto LABEL_42;
    }
    else
    {
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      if ( v34 )
      {
LABEL_42:
        userSvtEntity = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_CombineAppendPassiveSkillMaster___);
        v35 = this->fields.userSvtEntity;
        if ( !v35 )
          goto LABEL_79;
        v36 = (CombineAppendPassiveSkillMaster_o *)userSvtEntity;
        v38 = *(_QWORD *)&v35->fields.svtId.fields.currentCryptoKey;
        v37 = *(_QWORD *)&v35->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v58.fields.currentCryptoKey = v38;
        *(_QWORD *)&v58.fields.fakeValue = v37;
        userSvtEntity = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v58, 0LL);
        svtSkillNumsList = v14->fields.svtSkillNumsList;
        if ( !svtSkillNumsList )
          goto LABEL_79;
        if ( v32 >= svtSkillNumsList->max_length )
          goto LABEL_82;
        v40 = v14->fields.svtSkillLvList;
        if ( !v40 )
          goto LABEL_79;
        if ( v32 >= v40->max_length )
          goto LABEL_82;
        if ( !v36 )
          goto LABEL_79;
        userSvtEntity = (void *)CombineAppendPassiveSkillMaster__TryGetEntityWithTryNum(
                                  v36,
                                  &entity,
                                  (int32_t)userSvtEntity,
                                  *((_DWORD *)&svtSkillNumsList->obj.klass + v30),
                                  *((_DWORD *)&v40->obj.klass + v30),
                                  0LL);
        if ( ((unsigned __int8)userSvtEntity & 1) != 0 )
        {
          if ( !entity )
            goto LABEL_79;
          userSvtEntity = (void *)CombineUtility__CheckCombineNeedItemsEnough(
                                    this->fields.userSvtEntity,
                                    entity->fields.itemIds,
                                    entity->fields.itemNums,
                                    v16,
                                    entity->fields.qp,
                                    0LL);
          if ( ((unsigned __int8)userSvtEntity & 1) != 0 )
          {
            v41 = v14->fields.svtUseSkillIdList;
            if ( !v41 )
              goto LABEL_79;
            if ( v32 >= v41->max_length )
              goto LABEL_82;
            userSvtEntity = this->fields.enableAppendSkillUp;
            if ( !userSvtEntity )
              goto LABEL_79;
            method = (const MethodInfo *)*((unsigned int *)&v41->obj.klass + v30);
            v42 = *((_QWORD *)userSvtEntity + 2);
            v43 = Method_System_Collections_Generic_List_int__Add__;
            ++*((_DWORD *)userSvtEntity + 7);
            if ( !v42 )
              goto LABEL_79;
            v44 = *((int *)userSvtEntity + 6);
            if ( (unsigned int)v44 >= *(_DWORD *)(v42 + 24) )
            {
              v55 = v43[4];
LABEL_77:
              System_Collections_Generic_List_int___AddWithResize(
                (System_Collections_Generic_List_int__o *)userSvtEntity,
                (int32_t)method,
                *(const MethodInfo_36B8DA0 **)(*(_QWORD *)(v55 + 192) + 112LL));
              goto LABEL_78;
            }
            v45 = (char *)(v42 + 4 * v44);
            *((_DWORD *)userSvtEntity + 6) = v44 + 1;
LABEL_74:
            *((_DWORD *)v45 + 8) = (_DWORD)method;
            goto LABEL_78;
          }
        }
        goto LABEL_78;
      }
    }
    userSvtEntity = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_SvtAppendPassiveSkillUnlockMaster___);
    v46 = this->fields.userSvtEntity;
    if ( !v46 )
      goto LABEL_79;
    v47 = (SvtAppendPassiveSkillUnlockMaster_o *)userSvtEntity;
    v49 = *(_QWORD *)&v46->fields.svtId.fields.currentCryptoKey;
    v48 = *(_QWORD *)&v46->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v59.fields.currentCryptoKey = v49;
    *(_QWORD *)&v59.fields.fakeValue = v48;
    userSvtEntity = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v59, 0LL);
    v50 = v14->fields.svtSkillNumsList;
    if ( !v50 )
      goto LABEL_79;
    if ( v32 >= v50->max_length )
      goto LABEL_82;
    if ( !v47 )
      goto LABEL_79;
    userSvtEntity = SvtAppendPassiveSkillUnlockMaster__GetEntity(
                      v47,
                      (int32_t)userSvtEntity,
                      *((_DWORD *)&v50->obj.klass + v30),
                      0LL);
    if ( userSvtEntity )
    {
      userSvtEntity = (void *)CombineUtility__CheckCombineNeedItemsEnough(
                                this->fields.userSvtEntity,
                                *((System_Int32_array **)userSvtEntity + 3),
                                *((System_Int32_array **)userSvtEntity + 4),
                                v16,
                                0,
                                0LL);
      if ( ((unsigned __int8)userSvtEntity & 1) != 0 )
      {
        v51 = v14->fields.svtUseSkillIdList;
        if ( !v51 )
          goto LABEL_79;
        if ( v32 >= v51->max_length )
          goto LABEL_82;
        if ( !v28 )
          goto LABEL_79;
        method = (const MethodInfo *)*((unsigned int *)&v51->obj.klass + v30);
        items = v28->fields._items;
        v53 = Method_System_Collections_Generic_List_int__Add__;
        ++v28->fields._version;
        if ( !items )
          goto LABEL_79;
        size = v28->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          v55 = v53[4];
          userSvtEntity = v28;
          goto LABEL_77;
        }
        v45 = (char *)items + 4 * size;
        v28->fields._size = size + 1;
        goto LABEL_74;
      }
    }
LABEL_78:
    v29 = v14->fields.svtUseSkillIdList;
    ++v30;
    if ( !v29 )
      goto LABEL_79;
  }
  this->fields.isAppendSkillUpItemNum = System_Linq_Enumerable__Any_int_(
                                          (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.enableAppendSkillUp,
                                          (const MethodInfo_303F0C0 *)Method_System_Linq_Enumerable_Any_int___);
  this->fields.isAppendSkillOpenItemNum = System_Linq_Enumerable__Any_int_(
                                            (System_Collections_Generic_IEnumerable_TSource__o *)v28,
                                            (const MethodInfo_303F0C0 *)Method_System_Linq_Enumerable_Any_int___);
}


void __fastcall CombineServantListViewItem__SetIsCombineExpCampaignTarget(
        CombineServantListViewItem_o *this,
        System_Collections_Generic_List_EventCampaignEntity__o *eventCampaignEntities,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  CombineServantListViewItem___c_c *v13; // x0
  System_Predicate_object__o *_9__125_0; // x21
  Il2CppObject *v15; // x22
  struct CombineServantListViewItem___c_StaticFields *static_fields; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  System_Collections_Generic_List_T__o *All; // x0
  __int64 v20; // x1
  int klass; // w22
  _BOOL8 v22; // x0
  __int64 v23; // x1
  Il2CppObject *current; // x24
  UserServantEntity_o *userSvtEntity; // x0
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4B48A15 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Array_IndexOf_int___, eventCampaignEntities);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__, v5);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__, v6);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__, v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_EventCampaignEntity__FindAll__, v8);
    sub_1BDB878(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__, v9);
    sub_1BDB878(&System_Predicate_EventCampaignEntity__TypeInfo, v10);
    sub_1BDB878(&Method_CombineServantListViewItem___c__SetIsCombineExpCampaignTarget_b__125_0__, v11);
    sub_1BDB878(&CombineServantListViewItem___c_TypeInfo, v12);
    byte_4B48A15 = 1;
  }
  memset(&v27, 0, sizeof(v27));
  this->fields.isCombineExpCampaignTarget = 0;
  this->fields.combineExpCampaignValue = 0.0;
  if ( eventCampaignEntities && !this->fields.type )
  {
    v13 = CombineServantListViewItem___c_TypeInfo;
    if ( !CombineServantListViewItem___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CombineServantListViewItem___c_TypeInfo);
      v13 = CombineServantListViewItem___c_TypeInfo;
    }
    _9__125_0 = (System_Predicate_object__o *)v13->static_fields->__9__125_0;
    if ( !_9__125_0 )
    {
      if ( !v13->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v13);
        v13 = CombineServantListViewItem___c_TypeInfo;
      }
      v15 = (Il2CppObject *)v13->static_fields->__9;
      _9__125_0 = (System_Predicate_object__o *)sub_1BDBAC4(System_Predicate_EventCampaignEntity__TypeInfo);
      System_Predicate_object____ctor(
        _9__125_0,
        v15,
        Method_CombineServantListViewItem___c__SetIsCombineExpCampaignTarget_b__125_0__,
        0LL);
      static_fields = CombineServantListViewItem___c_TypeInfo->static_fields;
      static_fields->__9__125_0 = (struct System_Predicate_EventCampaignEntity__o *)_9__125_0;
      sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->__9__125_0, (int32_t)_9__125_0, v17, v18);
    }
    All = System_Collections_Generic_List_object___FindAll(
            (System_Collections_Generic_List_object__o *)eventCampaignEntities,
            (System_Predicate_T__o *)_9__125_0,
            (const MethodInfo_36D64D4 *)Method_System_Collections_Generic_List_EventCampaignEntity__FindAll__);
    if ( !All )
      sub_1BDBAD4(0LL, v20);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v26,
      (System_Collections_Generic_List_object__o *)All,
      (const MethodInfo_36D68BC *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    v27 = v26;
    klass = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        v22 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v27,
                (const MethodInfo_346A2A4 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
        if ( !v22 )
        {
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v27,
            (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
          this->fields.combineExpCampaignValue = (float)klass / 1000.0;
          return;
        }
        current = v27.fields._current;
        if ( !v27.fields._current )
          sub_1BDBAD4(v22, v23);
        if ( HIDWORD(v27.fields._current[1].klass) == 27 )
          break;
        if ( (System_Array__IndexOf_int_(
                (System_Int32_array *)v27.fields._current[2].monitor,
                this->fields.svtId,
                (const MethodInfo_3132F28 *)Method_System_Array_IndexOf_int___) & 0x80000000) == 0 )
          goto LABEL_20;
      }
      userSvtEntity = this->fields.userSvtEntity;
      if ( !userSvtEntity )
        sub_1BDBAD4(0LL, v23);
      if ( UserServantEntity__IsExchangeSvt(userSvtEntity, 0LL) )
      {
LABEL_20:
        this->fields.isCombineExpCampaignTarget = 1;
        if ( SLODWORD(current[3].klass) > klass )
          klass = (int)current[3].klass;
      }
    }
  }
}


void __fastcall CombineServantListViewItem__SetNoticeTween(
        CombineServantListViewItem_o *this,
        CombineServantListViewNoticeTween_o *noticeTween,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._NoticeTween_k__BackingField = noticeTween;
  sub_1BDB81C(
    (CGThumbnailListItem_o *)&this->fields._NoticeTween_k__BackingField,
    (int32_t)noticeTween,
    (int32_t)method,
    v3);
}


void __fastcall CombineServantListViewItem__SetOverwriteStatus(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  void *userSvtEntity; // x0

  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity
    || (userSvtEntity = UserServantEntity__GetOverwriteStatus((UserServantEntity_o *)userSvtEntity, 0LL, 0LL)) == 0LL )
  {
    sub_1BDBAD4(userSvtEntity, method);
  }
  *(_QWORD *)&this->fields.hp = *((_QWORD *)userSvtEntity + 2);
  this->fields.rarity = *((_DWORD *)userSvtEntity + 6);
  this->fields.actualRarity = *((_DWORD *)userSvtEntity + 10);
  this->fields.cost = *((_DWORD *)userSvtEntity + 7);
}


void __fastcall CombineServantListViewItem__SetSkillInfo(CombineServantListViewItem_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 SelfUserGame; // x0
  __int64 v11; // x1
  UserServantEntity_o *userSvtEntity; // x8
  struct UserServantEntity_o *v13; // x8
  __int64 v14; // x21
  __int64 v15; // x2
  __int64 v16; // x8
  __int64 v17; // x22
  unsigned __int64 v18; // x20
  int32_t v19; // w23
  int v20; // w28
  __int64 v21; // x8
  CombineSkillMaster_o *v22; // x20
  unsigned __int64 v23; // x28
  char v24; // w26
  int32_t v25; // w24
  struct ServantEntity_o *servantEntity; // x8
  CombineSkillMaster_o *v27; // x21
  struct System_Int32_array *itemNums; // x20
  struct System_Int32_array *itemIds; // x27
  int max_length; // w8
  UserItemMaster_o *v31; // x25
  il2cpp_array_size_t v32; // w9
  il2cpp_array_size_t v33; // w29
  struct UserServantEntity_o *v34; // x8
  __int128 v35; // q1
  int32_t v36; // w26
  int32_t v37; // w23
  __int64 v38; // x8
  _QWORD *v39; // x9
  __int64 v40; // x10
  struct System_Collections_Generic_List_int__o *enableSkillUp; // x8
  __int64 v42; // [xsp+0h] [xbp-C0h]
  __int64 v43; // [xsp+8h] [xbp-B8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v44; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v45; // [xsp+30h] [xbp-90h]
  UserItemEntity_o *v46; // [xsp+50h] [xbp-70h] BYREF
  CombineSkillEntity_o *entity; // [xsp+58h] [xbp-68h] BYREF

  if ( (byte_4B48A0E & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_CombineSkillMaster___, method);
    sub_1BDB878(&Method_DataManager_GetMasterData_SkillMaster___, v3);
    sub_1BDB878(&Method_DataManager_GetMasterData_UserItemMaster___, v4);
    sub_1BDB878(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v5);
    sub_1BDB878(&Method_System_Collections_Generic_List_int__Add__, v6);
    sub_1BDB878(&Method_System_Collections_Generic_List_int__get_Count__, v7);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4B48A0E = 1;
  }
  v46 = 0LL;
  entity = 0LL;
  SelfUserGame = (__int64)UserGameMaster__getSelfUserGame(0LL);
  userSvtEntity = this->fields.userSvtEntity;
  v43 = SelfUserGame;
  if ( !userSvtEntity )
    goto LABEL_60;
  SelfUserGame = (__int64)UserServantEntity__getSkillIdList(userSvtEntity, -1, -1, 1, -1, 0LL);
  v13 = this->fields.userSvtEntity;
  if ( !v13 )
    goto LABEL_60;
  v14 = SelfUserGame;
  SelfUserGame = ((__int64 (__fastcall *)(struct UserServantEntity_o *, void *))v13->klass->vtable._6_getSkillLevelList.method)(
                   this->fields.userSvtEntity,
                   v13->klass[1]._1.image);
  this->fields.isSkillLvMax = 1;
  if ( !v14 )
    goto LABEL_60;
  v16 = *(_QWORD *)(v14 + 24);
  v17 = SelfUserGame;
  if ( (int)v16 >= 1 )
  {
    v18 = 0LL;
    while ( 1 )
    {
      if ( v18 >= (unsigned int)v16 )
        goto LABEL_61;
      if ( !v17 )
        goto LABEL_60;
      if ( v18 >= *(unsigned int *)(v17 + 24) )
        goto LABEL_61;
      v19 = *(_DWORD *)(v14 + 32 + 4 * v18);
      if ( v19 >= 1 )
      {
        v20 = *(_DWORD *)(v17 + 32 + 4 * v18);
        SelfUserGame = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !SelfUserGame )
          goto LABEL_60;
        SelfUserGame = (__int64)DataManager__GetMasterData_object_(
                                  (DataManager_o *)SelfUserGame,
                                  (const MethodInfo_303395C *)Method_DataManager_GetMasterData_SkillMaster___);
        if ( !SelfUserGame )
          goto LABEL_60;
        SelfUserGame = (__int64)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)SelfUserGame,
                                  v19,
                                  (const MethodInfo_32E1E3C *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        if ( !SelfUserGame )
          goto LABEL_60;
        if ( v20 < *(_DWORD *)(SelfUserGame + 40) )
          break;
      }
      LODWORD(v16) = *(_DWORD *)(v14 + 24);
      if ( (__int64)++v18 >= (int)v16 )
        goto LABEL_19;
    }
    this->fields.isSkillLvMax = 0;
  }
LABEL_19:
  SelfUserGame = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_60;
  SelfUserGame = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)SelfUserGame,
                            (const MethodInfo_303395C *)Method_DataManager_GetMasterData_CombineSkillMaster___);
  v21 = *(_QWORD *)(v14 + 24);
  if ( (int)v21 >= 1 )
  {
    v22 = (CombineSkillMaster_o *)SelfUserGame;
    v23 = 0LL;
    v24 = 0;
    v42 = v14;
    while ( v23 < (unsigned int)v21 )
    {
      if ( !v17 )
        goto LABEL_60;
      if ( v23 >= *(unsigned int *)(v17 + 24) )
        break;
      v25 = *(_DWORD *)(v14 + 4 * v23 + 32);
      if ( v25 >= 1 )
      {
        servantEntity = this->fields.servantEntity;
        if ( !servantEntity || !v22 )
          goto LABEL_60;
        SelfUserGame = CombineSkillMaster__TryGetEntity(
                         v22,
                         &entity,
                         servantEntity->fields.combineSkillId,
                         *(_DWORD *)(v17 + 4 * v23 + 32),
                         0LL);
        if ( (SelfUserGame & 1) != 0 )
        {
          if ( !entity )
            goto LABEL_60;
          v27 = v22;
          itemIds = entity->fields.itemIds;
          itemNums = entity->fields.itemNums;
          SelfUserGame = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !SelfUserGame )
            goto LABEL_60;
          SelfUserGame = (__int64)DataManager__GetMasterData_object_(
                                    (DataManager_o *)SelfUserGame,
                                    (const MethodInfo_303395C *)Method_DataManager_GetMasterData_UserItemMaster___);
          if ( !itemIds )
            goto LABEL_60;
          max_length = itemIds->max_length;
          if ( max_length >= 1 )
          {
            v31 = (UserItemMaster_o *)SelfUserGame;
            v32 = 0;
            while ( 1 )
            {
              if ( v32 >= max_length )
                goto LABEL_61;
              if ( !itemNums )
                goto LABEL_60;
              v33 = v32;
              if ( v32 >= itemNums->max_length )
                goto LABEL_61;
              v34 = this->fields.userSvtEntity;
              if ( !v34 )
                goto LABEL_60;
              v35 = *(_OWORD *)&v34->fields.userId.fields.fakeValue;
              v36 = itemIds->m_Items[v32 + 1];
              v37 = itemNums->m_Items[v32 + 1];
              *(_OWORD *)&v45.fields.currentCryptoKey = *(_OWORD *)&v34->fields.userId.fields.currentCryptoKey;
              *(_OWORD *)&v45.fields.fakeValue = v35;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
              v44 = v45;
              SelfUserGame = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48231240(&v44, 0LL);
              if ( !v31 )
                goto LABEL_60;
              SelfUserGame = UserItemMaster__TryGetEntity(v31, &v46, SelfUserGame, v36, 0LL);
              if ( (SelfUserGame & 1) == 0 )
                break;
              if ( !v46 )
                goto LABEL_60;
              if ( v37 > v46->fields.num )
                break;
              max_length = itemIds->max_length;
              v32 = v33 + 1;
              if ( (int)(v33 + 1) >= max_length )
              {
                v24 = 1;
                goto LABEL_47;
              }
            }
            v24 = 0;
          }
LABEL_47:
          if ( !v43 || !entity )
            goto LABEL_60;
          v22 = v27;
          v14 = v42;
          if ( *(_QWORD *)(v43 + 96) < entity->fields.qp || (v24 & 1) == 0 )
          {
            v24 = 0;
          }
          else
          {
            SelfUserGame = (__int64)this->fields.enableSkillUp;
            if ( !SelfUserGame )
              goto LABEL_60;
            v38 = *(_QWORD *)(SelfUserGame + 16);
            v39 = Method_System_Collections_Generic_List_int__Add__;
            ++*(_DWORD *)(SelfUserGame + 28);
            if ( !v38 )
              goto LABEL_60;
            v40 = *(int *)(SelfUserGame + 24);
            if ( (unsigned int)v40 >= *(_DWORD *)(v38 + 24) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                (System_Collections_Generic_List_int__o *)SelfUserGame,
                v25,
                *(const MethodInfo_36B8DA0 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
            }
            else
            {
              *(_DWORD *)(SelfUserGame + 24) = v40 + 1;
              *(_DWORD *)(v38 + 4 * v40 + 32) = v25;
            }
            v24 = 1;
          }
        }
      }
      LODWORD(v21) = *(_DWORD *)(v14 + 24);
      if ( (__int64)++v23 >= (int)v21 )
        goto LABEL_58;
    }
LABEL_61:
    sub_1BDBADC(SelfUserGame, v11, v15);
  }
LABEL_58:
  enableSkillUp = this->fields.enableSkillUp;
  if ( !enableSkillUp )
LABEL_60:
    sub_1BDBAD4(SelfUserGame, v11);
  this->fields.isSkillUpItemNum = enableSkillUp->fields._size > 0;
}


bool __fastcall CombineServantListViewItem__SetSortValue(
        CombineServantListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x21
  int64_t iconLabelInfo2; // x0
  const MethodInfo *v21; // x1
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  int32_t bonusKind2; // w8
  int32_t v25; // w2
  int32_t bonusKind2Id; // w8
  struct ListViewManager_o *v27; // x8
  __int64 v28; // x11
  UnityEngine_Object_o *v29; // x21
  int32_t v30; // w8
  int32_t v31; // w8
  bool IsEnableServant; // w0
  Il2CppObject *MasterData_object; // x0
  int32_t svtId; // w22
  ServantFilterMaster_o *v35; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v36; // kr00_16
  System_Collections_Generic_List_EventGroupEntity__o *EntitiesByGroupId; // x22
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  struct ListViewManager_o *manager; // x8
  CombineServantListViewManager_c *v41; // x9
  __int64 v42; // x10
  struct ListViewManager_o *v43; // x11
  int32_t v44; // w8
  struct UserServantEntity_o *v45; // x8
  __int128 v46; // q1
  int32_t bonusKindId; // w22
  int64_t v48; // x0
  int32_t v49; // w1
  CGThumbnailListItem_o *v50; // x0
  System_Func_object__bool__o *v51; // x23
  const MethodInfo *v52; // x2
  _BOOL4 isChoice; // w11
  _BOOL4 isLock; // w23
  _BOOL4 v55; // w21
  int64_t *p_sortValue0; // x22
  __int64 v57; // x8
  unsigned int v58; // w8
  __int64 v59; // x8
  int32_t type; // w8
  __int64 v61; // x8
  int32_t rarity; // w8
  __int64 v63; // x9
  bool v64; // zf
  int64_t v65; // x8
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v67; // q1
  struct UserServantEntity_o *v68; // x8
  IconLabelInfo_o *v69; // x20
  int32_t v70; // w21
  struct UserServantEntity_o *v71; // x8
  int32_t v72; // w8
  struct UserServantEntity_o *v73; // x8
  int64_t v74; // x20
  struct IconLabelInfo_o *v75; // x21
  int32_t v76; // w3
  IconLabelInfo_o *v77; // x0
  int32_t v78; // w2
  unsigned int v79; // w8
  IconLabelInfo_o *v80; // x20
  int64_t hp; // x20
  IconLabelInfo_o *v82; // x21
  int64_t atk; // x20
  IconLabelInfo_o *v84; // x21
  struct IconLabelInfo_o *iconLabelInfo1; // x19
  int64_t cost; // x2
  int32_t lv; // w20
  int64_t friendship; // x2
  int32_t friendshipMax; // w3
  int32_t v90; // w1
  __int64 methodPtr_low; // x10
  struct ServantEntity_o *servantEntity; // x8
  __int64 collectionNo; // x10
  struct UserServantEntity_o *v94; // x8
  int32_t v95; // w21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v97; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v98; // [xsp+30h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v99; // [xsp+50h] [xbp-60h]
  int32_t tdMaxLv[2]; // [xsp+78h] [xbp-38h] BYREF

  if ( (byte_4B48A14 & 1) == 0 )
  {
    sub_1BDB878(&Method_BasicHelper_Any_EventGroupEntity___, sort);
    sub_1BDB878(&CombineServantListViewManager_TypeInfo, v5);
    sub_1BDB878(&Method_DataManager_GetMasterData_ServantFilterMaster___, v6);
    sub_1BDB878(&Method_DataManager_GetMaster_EventCampaignMaster___, v7);
    sub_1BDB878(&Method_DataManager_GetMaster_EventGroupMaster___, v8);
    sub_1BDB878(&DataManager_TypeInfo, v9);
    sub_1BDB878(&System_Func_EventGroupEntity__bool__TypeInfo, v10);
    sub_1BDB878(&Method_System_Collections_Generic_List_EventGroupEntity__get_Count__, v11);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v12);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v14);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_1BDB878(&TutorialFlag_TypeInfo, v16);
    sub_1BDB878(&Method_CombineServantListViewItem___c__DisplayClass124_0__SetSortValue_b__0__, v17);
    sub_1BDB878(&CombineServantListViewItem___c__DisplayClass124_0_TypeInfo, v18);
    byte_4B48A14 = 1;
  }
  *(_QWORD *)tdMaxLv = 0LL;
  v19 = sub_1BDBAC4(CombineServantListViewItem___c__DisplayClass124_0_TypeInfo);
  CombineServantListViewItem___c__DisplayClass124_0___ctor(
    (CombineServantListViewItem___c__DisplayClass124_0_o *)v19,
    0LL);
  if ( !v19 )
    goto LABEL_310;
  *(_QWORD *)(v19 + 16) = this;
  sub_1BDB81C((CGThumbnailListItem_o *)(v19 + 16), (int32_t)this, v22, v23);
  *(_WORD *)&this->fields.isTermination = 0;
  this->fields.sortValue1 = -1LL;
  *(_WORD *)&this->fields.isDispAtkStatusUpInfo = 0;
  if ( !sort )
    goto LABEL_310;
  if ( !sort->fields.isBonusKind || this->fields.isBaseSvt || ListViewItem__get_IsSelect((ListViewItem_o *)this, 0LL) )
  {
LABEL_76:
    if ( this->fields.isBaseSvt || ListViewItem__get_IsSelect((ListViewItem_o *)this, 0LL) )
      goto LABEL_78;
    type = this->fields.type;
    if ( type == 1 )
    {
      if ( !CombineServantListViewItem__IsMatchMaterialFilter(this, sort, v52) )
        goto LABEL_104;
      goto LABEL_78;
    }
    if ( !type )
    {
      if ( !CombineServantListViewItem__IsMatchBaseServantFilter(this, sort, v52) )
        goto LABEL_104;
LABEL_78:
      isChoice = this->fields.isChoice;
      iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo2;
      if ( this->fields.isSwapLock )
        isLock = !this->fields.isLock;
      else
        isLock = this->fields.isLock;
      if ( this->fields.isSwapChoice )
        v55 = !isChoice;
      else
        v55 = isChoice;
      if ( !iconLabelInfo2 )
        goto LABEL_310;
      IconLabelInfo__Clear((IconLabelInfo_o *)iconLabelInfo2, 0LL);
      this->fields.sortValue0 = 0LL;
      p_sortValue0 = &this->fields.sortValue0;
      this->fields.sortValue0B = 0LL;
      if ( !sort->fields.isSmartSort )
      {
        if ( v55 && sort->fields.isChoiceSort )
        {
          v58 = this->fields.type;
          if ( v58 <= 0xC )
          {
            if ( ((1 << v58) & 0x1FDD) != 0 )
              v59 = 10LL;
            else
LABEL_124:
              v59 = -10LL;
            *p_sortValue0 = v59;
          }
        }
LABEL_198:
        iconLabelInfo2 = 1LL;
        switch ( sort->fields.sortKind )
        {
          case 0:
            if ( !this )
              break;
            iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
            v65 = !this->fields.isParty;
LABEL_232:
            this->fields.sortValue1 = v65;
            if ( !iconLabelInfo2 )
              break;
            iconLabelInfo1 = this->fields.iconLabelInfo1;
            goto LABEL_234;
          case 1:
            userSvtEntity = this->fields.userSvtEntity;
            if ( !userSvtEntity )
              break;
            v67 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
            *(_OWORD *)&v99.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v99.fields.fakeValue = v67;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v97 = v99;
            iconLabelInfo2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48231240(&v97, 0LL);
            v68 = this->fields.userSvtEntity;
            this->fields.sortValue1 = iconLabelInfo2;
            if ( !v68 )
              break;
            iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
            if ( !iconLabelInfo2 )
              break;
            IconLabelInfo__SetTime((IconLabelInfo_o *)iconLabelInfo2, 49, v68->fields.createdAt, 0, 0, 0, 0LL);
            goto LABEL_227;
          case 2:
            iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
            this->fields.sortValue1 = this->fields.rarity;
            if ( !iconLabelInfo2 )
              break;
            v69 = this->fields.iconLabelInfo1;
            v70 = *(_DWORD *)(iconLabelInfo2 + 256);
            iconLabelInfo2 = UserServantEntity__getLevelMax((UserServantEntity_o *)iconLabelInfo2, 0LL);
            v71 = this->fields.userSvtEntity;
            if ( !v71 || !v69 )
              break;
            IconLabelInfo__Set_39930232(v69, 2, v70, iconLabelInfo2, 0, 0, 0, v71->fields.lv, 0, 0LL);
            v72 = this->fields.type;
            if ( v72 != 10 && v72 != 7 )
              goto LABEL_267;
            v73 = this->fields.userSvtEntity;
            if ( !v73 )
              break;
            iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo2;
            if ( !iconLabelInfo2 )
              break;
            IconLabelInfo__Set_39930232(
              (IconLabelInfo_o *)iconLabelInfo2,
              36,
              this->fields.rarity,
              v73->fields.exceedCount,
              0,
              0,
              0,
              v73->fields.lv,
              this->fields.actualRarity,
              0LL);
            goto LABEL_267;
          case 3:
            iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
            if ( !iconLabelInfo2 )
              break;
            v74 = *(int *)(iconLabelInfo2 + 256);
            v75 = this->fields.iconLabelInfo1;
            this->fields.sortValue1 = v74;
            iconLabelInfo2 = UserServantEntity__getLevelMax((UserServantEntity_o *)iconLabelInfo2, 0LL);
            if ( !v75 )
              break;
            v76 = iconLabelInfo2;
            v77 = v75;
            v78 = v74;
            goto LABEL_237;
          case 4:
            iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
            if ( !iconLabelInfo2 )
              break;
            v79 = this->fields.type & 0xFFFFFFFE;
            this->fields.sortValue1 = *(int *)(iconLabelInfo2 + 292);
            if ( v79 == 4 )
            {
              v80 = this->fields.iconLabelInfo1;
            }
            else
            {
              UserServantEntity__getTreasureDeviceInfo_42114760(
                (UserServantEntity_o *)iconLabelInfo2,
                &tdMaxLv[1],
                tdMaxLv,
                0LL);
              LODWORD(friendship) = tdMaxLv[1];
              iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
              this->fields.sortValue1 = tdMaxLv[1];
              if ( !iconLabelInfo2 )
                break;
              friendshipMax = tdMaxLv[0];
              v90 = 33;
LABEL_254:
              IconLabelInfo__Set_39930232(
                (IconLabelInfo_o *)iconLabelInfo2,
                v90,
                friendship,
                friendshipMax,
                0,
                0,
                0,
                0,
                0,
                0LL);
LABEL_255:
              iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
              if ( !iconLabelInfo2 )
                break;
              v80 = this->fields.iconLabelInfo2;
            }
            v95 = *(_DWORD *)(iconLabelInfo2 + 256);
            iconLabelInfo2 = UserServantEntity__getLevelMax((UserServantEntity_o *)iconLabelInfo2, 0LL);
            if ( v80 )
            {
              IconLabelInfo__Set_39930232(v80, 2, v95, iconLabelInfo2, 0, 0, 0, 0, 0, 0LL);
              iconLabelInfo2 = (int64_t)this->fields.servantEntity;
              if ( iconLabelInfo2 )
              {
                if ( !ServantEntity__get_IsExpUp((ServantEntity_o *)iconLabelInfo2, 0LL) )
                {
                  iconLabelInfo2 = (int64_t)this->fields.servantEntity;
                  if ( !iconLabelInfo2 )
                    break;
                  if ( !ServantEntity__get_IsStatusUp((ServantEntity_o *)iconLabelInfo2, 0LL) )
                  {
                    iconLabelInfo2 = (int64_t)this->fields.servantEntity;
                    if ( !iconLabelInfo2 )
                      break;
                    if ( !ServantEntity__get_IsServantMaterialTd((ServantEntity_o *)iconLabelInfo2, 0LL) )
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
                  IconLabelInfo__Clear((IconLabelInfo_o *)iconLabelInfo2, 0LL);
                  iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo2;
                  if ( iconLabelInfo2 )
                  {
                    IconLabelInfo__Clear((IconLabelInfo_o *)iconLabelInfo2, 0LL);
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
            v82 = this->fields.iconLabelInfo1;
            iconLabelInfo2 = UserServantEntity__get_HpBoostValue((UserServantEntity_o *)iconLabelInfo2, 0LL);
            if ( !v82 )
              break;
            IconLabelInfo__Set_39930232(v82, 3, hp, iconLabelInfo2, 0, 0, 0, 0, 0, 0LL);
            goto LABEL_227;
          case 6:
            atk = this->fields.atk;
            iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
            this->fields.sortValue1 = atk;
            if ( !iconLabelInfo2 )
              break;
            v84 = this->fields.iconLabelInfo1;
            iconLabelInfo2 = UserServantEntity__get_AtkBoostValue((UserServantEntity_o *)iconLabelInfo2, 0LL);
            if ( !v84 )
              break;
            IconLabelInfo__Set_39930232(v84, 5, atk, iconLabelInfo2, 0, 0, 0, 0, 0, 0LL);
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
            IconLabelInfo__Set_39930232((IconLabelInfo_o *)iconLabelInfo2, 7, cost, 0, 0, 0, 0, 0, 0, 0LL);
            goto LABEL_255;
          case 8:
            iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
            v65 = -this->fields.priority;
            goto LABEL_232;
          case 0xA:
            friendship = this->fields.friendship;
            iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
            this->fields.sortValue1 = friendship;
            if ( !iconLabelInfo2 )
              break;
            friendshipMax = this->fields.friendshipMax;
            v90 = 32;
            goto LABEL_254;
          case 0xE:
            iconLabelInfo2 = this->fields.amountSortValue;
            if ( (iconLabelInfo2 & 0x8000000000000000LL) == 0 )
              goto LABEL_245;
            iconLabelInfo2 = (int64_t)sort->fields.manager;
            if ( !iconLabelInfo2 )
              break;
            methodPtr_low = LOBYTE(CombineServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
            if ( *(unsigned __int8 *)(*(_QWORD *)iconLabelInfo2 + 304LL) < (unsigned int)methodPtr_low
              || *(CombineServantListViewManager_c **)(*(_QWORD *)(*(_QWORD *)iconLabelInfo2 + 200LL)
                                                     + 8 * methodPtr_low
                                                     - 8) != CombineServantListViewManager_TypeInfo )
            {
              break;
            }
            iconLabelInfo2 = CombineServantListViewManager__GetAmountSortValue(
                               (CombineServantListViewManager_o *)iconLabelInfo2,
                               this->fields.svtId,
                               0LL);
            this->fields.amountSortValue = iconLabelInfo2;
LABEL_245:
            servantEntity = this->fields.servantEntity;
            if ( !servantEntity )
              break;
            collectionNo = servantEntity->fields.collectionNo;
            v94 = this->fields.userSvtEntity;
            this->fields.sortValue1 = (((unsigned __int64)(unsigned int)this->fields.rarity << 32)
                                     + (iconLabelInfo2 << 48)) | collectionNo;
            if ( !v94 )
              break;
            iconLabelInfo1 = this->fields.iconLabelInfo1;
            lv = v94->fields.lv;
            iconLabelInfo2 = (int64_t)v94;
LABEL_235:
            iconLabelInfo2 = UserServantEntity__getLevelMax((UserServantEntity_o *)iconLabelInfo2, 0LL);
            if ( !iconLabelInfo1 )
              break;
            v76 = iconLabelInfo2;
            v77 = iconLabelInfo1;
            v78 = lv;
LABEL_237:
            IconLabelInfo__Set_39930232(v77, 2, v78, v76, 0, 0, 0, 0, 0, 0LL);
            goto LABEL_267;
          case 0xF:
            friendship = this->fields.hpReinforceValue;
            iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
            this->fields.isDispHpStatusUpInfo = 1;
            this->fields.sortValue1 = friendship;
            if ( !iconLabelInfo2 )
              break;
            friendshipMax = this->fields.nowMaxHpReinforceValue;
            v90 = 44;
            goto LABEL_254;
          case 0x10:
            friendship = this->fields.atkReinforceValue;
            iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
            this->fields.isDispAtkStatusUpInfo = 1;
            this->fields.sortValue1 = friendship;
            if ( !iconLabelInfo2 )
              break;
            friendshipMax = this->fields.nowMaxAtkReinforceValue;
            v90 = 45;
            goto LABEL_254;
          default:
            return iconLabelInfo2;
        }
LABEL_310:
        sub_1BDBAD4(iconLabelInfo2, v21);
      }
      switch ( this->fields.type )
      {
        case 0:
          if ( this->fields.isHeroineSvt )
          {
            if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
            if ( TutorialFlag__Get_39449392(126, 0LL) )
              goto LABEL_166;
          }
          if ( this->fields.isParty )
          {
            v57 = 20LL;
            goto LABEL_195;
          }
          if ( this->fields.isLvMax )
            goto LABEL_191;
          goto LABEL_196;
        case 1:
          iconLabelInfo2 = (int64_t)this->fields.servantEntity;
          if ( !iconLabelInfo2 )
            goto LABEL_310;
          if ( ServantEntity__get_IsExpUp((ServantEntity_o *)iconLabelInfo2, 0LL) )
          {
            if ( this->fields.isBaseLvMax )
            {
              v61 = -120LL;
            }
            else
            {
              v61 = -5LL;
              if ( !isLock && !v55 )
                v61 = 30LL;
            }
            goto LABEL_298;
          }
          iconLabelInfo2 = (int64_t)this->fields.servantEntity;
          if ( !iconLabelInfo2 )
            goto LABEL_310;
          if ( ServantEntity__get_IsStatusUp((ServantEntity_o *)iconLabelInfo2, 0LL) )
          {
            if ( this->fields.isSameClass )
            {
              rarity = this->fields.rarity;
              if ( this->fields.hpBase < 1 )
              {
                if ( rarity >= 4 )
                {
                  v61 = -90LL;
                  if ( !this->fields.isAtkSecondUpMax && this->fields.isAtkUpMax )
                    v61 = 90LL;
                  goto LABEL_296;
                }
                v63 = 70LL;
                v64 = !this->fields.isAtkUpMax;
                v61 = -110LL;
              }
              else
              {
                if ( rarity >= 4 )
                {
                  v61 = -80LL;
                  if ( !this->fields.isHpSecondUpMax && this->fields.isHpUpMax )
                    v61 = 100LL;
                  goto LABEL_296;
                }
                v63 = 80LL;
                v64 = !this->fields.isHpUpMax;
                v61 = -100LL;
              }
              if ( v64 )
                v61 = v63;
LABEL_296:
              *p_sortValue0 = v61;
              if ( isLock || v55 )
                v61 = -5LL;
              goto LABEL_298;
            }
            v61 = -150LL;
          }
          else
          {
            if ( !CombineServantListViewItem__get_IsCanNotSelectMaterial(this, v21) )
            {
LABEL_299:
              if ( this->fields.isFortification )
                *p_sortValue0 = -10LL;
              if ( v55 && sort->fields.isChoiceSort )
                *(_OWORD *)p_sortValue0 = xmmword_BEA610;
              goto LABEL_198;
            }
            if ( this->fields.isLimitCntTarget )
            {
              v61 = -20LL;
            }
            else if ( this->fields.isParty )
            {
              v61 = -30LL;
            }
            else if ( this->fields.isGrandSvt )
            {
              v61 = -40LL;
            }
            else if ( this->fields.isUseSupport )
            {
              v61 = -50LL;
            }
            else
            {
              v61 = -10LL;
              if ( this->fields.isUseRecommendSupport )
                v61 = -60LL;
            }
          }
LABEL_298:
          *p_sortValue0 = v61;
          goto LABEL_299;
        case 2:
          if ( this->fields.isSealCombineLimit || this->fields.isSealedLimitCount && this->fields.isLimitCntMax )
          {
            v57 = 0LL;
            goto LABEL_195;
          }
          if ( !CombineServantListViewItem__get_IsCanNotBaseSelect(this, v21)
            && this->fields.isLimitUpItemNum
            && this->fields.isLvMax )
          {
LABEL_194:
            v57 = 10LL;
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
            if ( TutorialFlag__Get_39449392(126, 0LL) )
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
          if ( v55 && sort->fields.isChoiceSort || this->fields.isFortification )
            goto LABEL_124;
          goto LABEL_198;
        case 6:
          if ( !CombineServantListViewItem__get_IsCanNotBaseSelect(this, v21)
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
          if ( !UserServantEntity__IsUseLevelExceedItemHeroine((UserServantEntity_o *)iconLabelInfo2, 0LL) )
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
          if ( !TutorialFlag__Get_39449392(126, 0LL) )
            goto LABEL_196;
          goto LABEL_166;
        case 8:
          if ( !CombineServantListViewItem__get_IsCanNotBaseSelect(this, v21)
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
          if ( !UserServantEntity__IsUseFriendshipExceedItemHeroine((UserServantEntity_o *)iconLabelInfo2, 0LL) )
            goto LABEL_191;
LABEL_147:
          if ( !this->fields.isFriendshipExceedMax )
            goto LABEL_196;
          goto LABEL_166;
        case 9:
          if ( !CombineServantListViewItem__get_IsCanNotBaseSelect(this, v21) )
            goto LABEL_194;
          if ( this->fields.isHeroineSvt )
            goto LABEL_191;
          if ( this->fields.isSealCombineLimit )
          {
LABEL_173:
            v57 = -15LL;
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
            if ( TutorialFlag__Get_39449392(126, 0LL) )
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
            if ( TutorialFlag__Get_39449392(126, 0LL) )
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
          if ( TutorialFlag__Get_39449392(126, 0LL) )
          {
            v57 = -40LL;
          }
          else
          {
LABEL_314:
            if ( this->fields.isEventJoin )
            {
              v57 = -35LL;
            }
            else if ( this->fields.isAppendSkillLvMax )
            {
LABEL_269:
              v57 = -30LL;
            }
            else if ( this->fields.isAllAppendSkillLock )
            {
LABEL_166:
              v57 = -20LL;
            }
            else
            {
              if ( !this->fields.isAppendSkillLvSame )
              {
LABEL_196:
                if ( v55 && sort->fields.isChoiceSort )
                  this->fields.sortValue0B = 10LL;
                goto LABEL_198;
              }
LABEL_191:
              v57 = -10LL;
            }
          }
LABEL_195:
          *p_sortValue0 = v57;
          goto LABEL_196;
        default:
          goto LABEL_198;
      }
    }
    if ( CombineServantListViewItem__IsMatchServantFilter(this, sort, v52) )
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
        iconLabelInfo2 = (int64_t)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_EventGroupMaster___);
        if ( !iconLabelInfo2 )
          goto LABEL_310;
        EntitiesByGroupId = EventGroupMaster__GetEntitiesByGroupId(
                              (EventGroupMaster_o *)iconLabelInfo2,
                              this->fields.bonusKindId,
                              0LL);
        iconLabelInfo2 = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)EntitiesByGroupId, 0LL);
        if ( (iconLabelInfo2 & 1) == 0 )
        {
          if ( !EntitiesByGroupId )
            goto LABEL_310;
          if ( EntitiesByGroupId->fields._size >= 2 )
          {
            manager = sort->fields.manager;
            if ( manager )
            {
              v41 = CombineServantListViewManager_TypeInfo;
              v42 = LOBYTE(CombineServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
              if ( LOBYTE(manager->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v42 )
              {
                if ( (CombineServantListViewManager_c *)manager->klass->_2.typeHierarchy[v42 - 1] == CombineServantListViewManager_TypeInfo )
                  v43 = sort->fields.manager;
                else
                  v43 = 0LL;
              }
              else
              {
                v43 = 0LL;
              }
              *(_QWORD *)(v19 + 24) = v43;
              v50 = (CGThumbnailListItem_o *)(v19 + 24);
              if ( LOBYTE(manager->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v42 )
              {
                if ( (CombineServantListViewManager_c *)manager->klass->_2.typeHierarchy[v42 - 1] == v41 )
                  v49 = (int)manager;
                else
                  v49 = 0;
              }
              else
              {
                v49 = 0;
              }
            }
            else
            {
              v49 = 0;
              *(_QWORD *)(v19 + 24) = 0LL;
              v50 = (CGThumbnailListItem_o *)(v19 + 24);
            }
            sub_1BDB81C(v50, v49, v38, v39);
            v51 = (System_Func_object__bool__o *)sub_1BDBAC4(System_Func_EventGroupEntity__bool__TypeInfo);
            System_Func_object__bool____ctor(
              v51,
              (Il2CppObject *)v19,
              Method_CombineServantListViewItem___c__DisplayClass124_0__SetSortValue_b__0__,
              0LL);
            this->fields.isEventUpVal = BasicHelper__Any_object_(
                                          (System_Collections_Generic_List_T__o *)EntitiesByGroupId,
                                          (System_Func_T__bool__o *)v51,
                                          (const MethodInfo_301CDFC *)Method_BasicHelper_Any_EventGroupEntity___);
          }
        }
        goto LABEL_75;
      case 2:
        v27 = sort->fields.manager;
        if ( v27
          && (v28 = LOBYTE(CombineServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr),
              LOBYTE(v27->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v28) )
        {
          if ( (CombineServantListViewManager_c *)v27->klass->_2.typeHierarchy[v28 - 1] == CombineServantListViewManager_TypeInfo )
            v29 = (UnityEngine_Object_o *)sort->fields.manager;
          else
            v29 = 0LL;
        }
        else
        {
          v29 = 0LL;
        }
        if ( this->fields.bonusKind == 2 )
        {
          v44 = sort->fields.bonusKind2Id;
          if ( this->fields.bonusKindId == v44 )
            goto LABEL_75;
        }
        else
        {
          v44 = sort->fields.bonusKind2Id;
        }
        this->fields.bonusKindId = v44;
        this->fields.bonusKind = 2;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        iconLabelInfo2 = UnityEngine_Object__op_Implicit(v29, 0LL);
        if ( (iconLabelInfo2 & 1) != 0 )
        {
          if ( !v29 )
            goto LABEL_310;
          iconLabelInfo2 = CombineServantListViewManager__IsLargeSuccessCampaignClassId(
                             (CombineServantListViewManager_o *)v29,
                             this->fields.bonusKindId,
                             this->fields.svtId,
                             0LL);
          v45 = this->fields.userSvtEntity;
          this->fields.isEventUpVal = iconLabelInfo2 & 1;
          if ( !v45 )
            goto LABEL_310;
          v46 = *(_OWORD *)&v45->fields.id.fields.fakeValue;
          bonusKindId = this->fields.bonusKindId;
          *(_OWORD *)&v99.fields.currentCryptoKey = *(_OWORD *)&v45->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v99.fields.fakeValue = v46;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v98 = v99;
          v48 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48231240(&v98, 0LL);
          if ( CombineServantListViewManager__IsExchangeSvtExist(
                 (CombineServantListViewManager_o *)v29,
                 bonusKindId,
                 v48,
                 0LL) )
          {
            goto LABEL_76;
          }
        }
        goto LABEL_75;
      case 3:
        if ( this->fields.bonusKind == 3 )
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
        this->fields.bonusKind = 3;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        iconLabelInfo2 = (int64_t)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_EventCampaignMaster___);
        if ( !iconLabelInfo2 )
          goto LABEL_310;
        IsEnableServant = EventCampaignMaster__IsEnableServant(
                            (EventCampaignMaster_o *)iconLabelInfo2,
                            this->fields.svtId,
                            this->fields.bonusKindId,
                            0LL);
        goto LABEL_37;
      case 4:
      case 5:
        if ( this->fields.bonusKind == bonusKind2 )
        {
          v25 = sort->fields.bonusKind2Id;
          if ( this->fields.bonusKindId == v25 )
            goto LABEL_75;
        }
        else
        {
          v25 = sort->fields.bonusKind2Id;
        }
        iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
        this->fields.bonusKind = bonusKind2;
        this->fields.bonusKindId = v25;
        if ( !iconLabelInfo2 )
          goto LABEL_310;
        IsEnableServant = UserServantEntity__getEventUpVal_42107500(
                            (UserServantEntity_o *)iconLabelInfo2,
                            this->fields.setupInfo,
                            v25,
                            0LL,
                            0LL);
        goto LABEL_37;
      case 7:
        if ( this->fields.bonusKind == 7 )
        {
          v31 = sort->fields.bonusKind2Id;
          if ( this->fields.bonusKindId == v31 )
          {
LABEL_75:
            if ( !this->fields.isEventUpVal )
              break;
            goto LABEL_76;
          }
        }
        else
        {
          v31 = sort->fields.bonusKind2Id;
        }
        this->fields.bonusKindId = v31;
        this->fields.bonusKind = 7;
        iconLabelInfo2 = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !iconLabelInfo2 )
          goto LABEL_310;
        MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)iconLabelInfo2,
                              (const MethodInfo_303395C *)Method_DataManager_GetMasterData_ServantFilterMaster___);
        svtId = this->fields.svtId;
        v35 = (ServantFilterMaster_o *)MasterData_object;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        v36 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(svtId, 0LL);
        v21 = *(const MethodInfo **)&v36.fields.fakeValue;
        iconLabelInfo2 = *(_QWORD *)&v36.fields.currentCryptoKey;
        if ( !v35 )
          goto LABEL_310;
        IsEnableServant = ServantFilterMaster__IsEnableServant(v35, v36, this->fields.bonusKindId, 0LL);
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


bool __fastcall CombineServantListViewItem__SwapChoice(CombineServantListViewItem_o *this, const MethodInfo *method)
{
  bool v2; // w8

  v2 = !this->fields.isSwapChoice;
  this->fields.isSwapChoice ^= 1u;
  return v2;
}


bool __fastcall CombineServantListViewItem__SwapLock(CombineServantListViewItem_o *this, const MethodInfo *method)
{
  bool v2; // w8

  v2 = !this->fields.isSwapLock;
  this->fields.isSwapLock ^= 1u;
  return v2;
}


System_String_o *__fastcall CombineServantListViewItem__ToString(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  System_String_o *NameText; // x0

  if ( (byte_4B48A1F & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_15203/*"UserSvt "*/, method);
    byte_4B48A1F = 1;
  }
  NameText = CombineServantListViewItem__get_NameText(this, method);
  return System_String__Concat_62572260((System_String_o *)StringLiteral_15203/*"UserSvt "*/, NameText, 0LL);
}


int32_t __fastcall CombineServantListViewItem__get_AdjustAttack(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  struct UserServantEntity_o *userSvtEntity; // x8

  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
    return userSvtEntity->fields.adjustAtk;
  else
    return 0;
}


int32_t __fastcall CombineServantListViewItem__get_AdjustHp(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  struct UserServantEntity_o *userSvtEntity; // x8

  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
    return userSvtEntity->fields.adjustHp;
  else
    return 0;
}


int32_t __fastcall CombineServantListViewItem__get_Attack(CombineServantListViewItem_o *this, const MethodInfo *method)
{
  struct UserServantEntity_o *userSvtEntity; // x8

  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
    return userSvtEntity->fields.atk;
  else
    return 0;
}


float __fastcall CombineServantListViewItem__get_CombineExpCampaignValue(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.combineExpCampaignValue;
}


System_String_o *__fastcall CombineServantListViewItem__get_CostText(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct ServantEntity_o *servantEntity; // x8
  int32_t cost; // w19

  if ( (byte_4B48A1B & 1) == 0 )
  {
    sub_1BDB878(&LocalizationManager_TypeInfo, method);
    sub_1BDB878(&StringLiteral_19073/*"error"*/, v3);
    byte_4B48A1B = 1;
  }
  servantEntity = this->fields.servantEntity;
  if ( !servantEntity )
    return (System_String_o *)StringLiteral_19073/*"error"*/;
  cost = servantEntity->fields.cost;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__GetCostInfo(cost, 0LL);
}


int32_t __fastcall CombineServantListViewItem__get_DragSelectNum(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.dragSelectNum;
}


System_String_o *__fastcall CombineServantListViewItem__get_FortificationDetailName(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.fortificationDetailName;
}


System_String_o *__fastcall CombineServantListViewItem__get_FortificationName(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.fortificationName;
}


int32_t __fastcall CombineServantListViewItem__get_GetAtkAdjustMax(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.adjustAtkMax;
}


int32_t __fastcall CombineServantListViewItem__get_GetAtkUpVal(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.atkBase;
}


int32_t __fastcall CombineServantListViewItem__get_GetCurrentLimitCnt(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.currentLimitCnt;
}


System_Collections_Generic_List_int__o *__fastcall CombineServantListViewItem__get_GetEnableAppendSkillupList(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.enableAppendSkillUp;
}


System_Collections_Generic_List_int__o *__fastcall CombineServantListViewItem__get_GetEnableSkillupList(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.enableSkillUp;
}


int32_t __fastcall CombineServantListViewItem__get_GetHpAdjustMax(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.adjustHpMax;
}


int32_t __fastcall CombineServantListViewItem__get_GetHpUpVal(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.hpBase;
}


int32_t __fastcall CombineServantListViewItem__get_GetMaterialExp(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.materialExp;
}


int32_t __fastcall CombineServantListViewItem__get_GetMaxLimitCnt(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.maxLimitCnt;
}


int32_t __fastcall CombineServantListViewItem__get_Hp(CombineServantListViewItem_o *this, const MethodInfo *method)
{
  struct UserServantEntity_o *userSvtEntity; // x8

  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
    return userSvtEntity->fields.hp;
  else
    return 0;
}


IconLabelInfo_o *__fastcall CombineServantListViewItem__get_IconInfo1(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.iconLabelInfo1;
}


IconLabelInfo_o *__fastcall CombineServantListViewItem__get_IconInfo2(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.iconLabelInfo2;
}


System_String_o *__fastcall CombineServantListViewItem__get_ImageName(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B48A1C & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_1/*""*/, method);
    byte_4B48A1C = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


bool __fastcall CombineServantListViewItem__get_IsAtkAdjustMax(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0

  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_1BDBAD4(0LL, method);
  return UserServantEntity__isAdjustAtkMax(userSvtEntity, 0LL);
}


bool __fastcall CombineServantListViewItem__get_IsAtkStatusMax(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isNotSelectStatusUpAtk;
}


bool __fastcall CombineServantListViewItem__get_IsAtkUpMax(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isAtkUpMax;
}


bool __fastcall CombineServantListViewItem__get_IsBaseLvMax(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isBaseLvMax;
}


bool __fastcall CombineServantListViewItem__get_IsBaseSvt(CombineServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isBaseSvt;
}


bool __fastcall CombineServantListViewItem__get_IsCanNotBaseSelect(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  char isHeroineSvt; // w8
  _BOOL4 isMaterialTdSvt; // w8
  UserServantEntity_o *UserSvtEntity; // x0
  __int64 v6; // x1
  bool IsUseLevelExceedItemHeroine; // w0

  if ( (byte_4B48A1D & 1) == 0 )
  {
    sub_1BDB878(&TutorialFlag_TypeInfo, method);
    byte_4B48A1D = 1;
  }
  if ( !this->fields.isHeroineSvt )
    goto LABEL_47;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_39449392(126, 0LL) )
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
        IsUseLevelExceedItemHeroine = UserServantEntity__IsUseLevelExceedItemHeroine(UserSvtEntity, 0LL);
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
          sub_1BDBAD4(UserSvtEntity, v6);
        IsUseLevelExceedItemHeroine = UserServantEntity__IsUseFriendshipExceedItemHeroine(UserSvtEntity, 0LL);
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


bool __fastcall CombineServantListViewItem__get_IsCanNotLimitUp(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isLimitCntMax;
}


bool __fastcall CombineServantListViewItem__get_IsCanNotLock(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isCanNotLock;
}


bool __fastcall CombineServantListViewItem__get_IsCanNotSelect(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  unsigned int type; // w20
  bool CanNotSelectMaterial; // w0

  if ( (byte_4B48A1E & 1) == 0 )
  {
    sub_1BDB878(&TutorialFlag_TypeInfo, method);
    byte_4B48A1E = 1;
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
    if ( TutorialFlag__Get_39449392(126, 0LL) )
      return 1;
  }
  return this->fields.isStatusUpSvt && !this->fields.isCanStUp;
}


bool __fastcall CombineServantListViewItem__get_IsCanNotSelectMaterial(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  _BOOL4 isStatusUpSvt; // w21
  _BOOL4 isAtkUpMax; // w8
  _BOOL4 v5; // w20
  _BOOL4 CanNotSelectSecondStatusMaterial; // w0
  _BOOL4 v7; // w8
  UserServantEntity_o *userSvtEntity; // x0
  _BOOL4 v10; // [xsp+Ch] [xbp-24h]

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
        if ( UserServantEntity__IsProtectedEventServant(userSvtEntity, 0LL) )
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


bool __fastcall CombineServantListViewItem__get_IsCanNotSelectPush(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0
  __int64 v5; // x1
  UserServantEntity_o *v6; // x0

  if ( this->fields.isEventJoin )
    return 1;
  if ( this->fields.isCanNotLock )
    return 1;
  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity || UserServantEntity__IsLeave(userSvtEntity, 0LL) )
    return 1;
  v6 = this->fields.userSvtEntity;
  if ( !v6 )
    goto LABEL_12;
  if ( UserServantEntity__IsCombineMaterial(v6, 0LL) )
    return 1;
  v6 = this->fields.userSvtEntity;
  if ( !v6 )
    goto LABEL_12;
  if ( UserServantEntity__IsStatusUp(v6, 0LL) )
    return 1;
  v6 = this->fields.userSvtEntity;
  if ( !v6 )
LABEL_12:
    sub_1BDBAD4(v6, v5);
  return UserServantEntity__IsMaterialTd(v6, 0LL);
}


bool __fastcall CombineServantListViewItem__get_IsCanStatusUp(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isCanStUp;
}


bool __fastcall CombineServantListViewItem__get_IsChoice(CombineServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isChoice;
}


bool __fastcall CombineServantListViewItem__get_IsCmdCardSlotOpen(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isCmdCardSlotOpen;
}


bool __fastcall CombineServantListViewItem__get_IsCombineEnableServant(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  return !this->fields.isHeroineSvt && !this->fields.isEventJoin;
}


bool __fastcall CombineServantListViewItem__get_IsCombineExpCampaignTarget(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isCombineExpCampaignTarget;
}


bool __fastcall CombineServantListViewItem__get_IsCommandCardExceedmax(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isCommandCardExceedMax;
}


bool __fastcall CombineServantListViewItem__get_IsDispAtkStatusUpInfo(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isDispAtkStatusUpInfo;
}


bool __fastcall CombineServantListViewItem__get_IsDispChoice(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  if ( this->fields.isSwapChoice )
    return !this->fields.isChoice;
  else
    return this->fields.isChoice;
}


bool __fastcall CombineServantListViewItem__get_IsDispHpStatusUpInfo(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isDispHpStatusUpInfo;
}


bool __fastcall CombineServantListViewItem__get_IsDispLock(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  if ( this->fields.isSwapLock )
    return !this->fields.isLock;
  else
    return this->fields.isLock;
}


bool __fastcall CombineServantListViewItem__get_IsDragSelect(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.dragSelectNum >= 0;
}


bool __fastcall CombineServantListViewItem__get_IsEquip(CombineServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isEquiped;
}


bool __fastcall CombineServantListViewItem__get_IsEquipedCmdCard(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isEquipedCmdCard;
}


bool __fastcall CombineServantListViewItem__get_IsEventJoin(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isEventJoin;
}


bool __fastcall CombineServantListViewItem__get_IsExpUpSvt(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isExpUpSvt;
}


bool __fastcall CombineServantListViewItem__get_IsFavorite(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isFavorite;
}


bool __fastcall CombineServantListViewItem__get_IsFortification(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isFortification;
}


bool __fastcall CombineServantListViewItem__get_IsFriendshipExceedItemNum(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isFriendshipExceedItemNum;
}


bool __fastcall CombineServantListViewItem__get_IsFriendshipExceedMax(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isFriendshipExceedMax;
}


bool __fastcall CombineServantListViewItem__get_IsFriendshipRankMax(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isFriendshipRankMax;
}


bool __fastcall CombineServantListViewItem__get_IsGrandServant(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isGrandSvt;
}


bool __fastcall CombineServantListViewItem__get_IsHeroine(CombineServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isHeroineSvt;
}


bool __fastcall CombineServantListViewItem__get_IsHpAdjustMax(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0

  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_1BDBAD4(0LL, method);
  return UserServantEntity__isAdjustHpMax(userSvtEntity, 0LL);
}


bool __fastcall CombineServantListViewItem__get_IsHpStatusMax(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isNotSelectStatusUpHp;
}


bool __fastcall CombineServantListViewItem__get_IsHpUpMax(CombineServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isHpUpMax;
}


bool __fastcall CombineServantListViewItem__get_IsIgnoreCombineLimitSpecial(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isIgnoreCombineLimitSpecial;
}


bool __fastcall CombineServantListViewItem__get_IsLimitCntMax(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isLimitCntMax;
}


bool __fastcall CombineServantListViewItem__get_IsLimitCountSealed(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isSealedLimitCount;
}


bool __fastcall CombineServantListViewItem__get_IsLimitTarget(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isLimitCntTarget;
}


bool __fastcall CombineServantListViewItem__get_IsLimitUpItemNum(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isLimitUpItemNum;
}


bool __fastcall CombineServantListViewItem__get_IsLock(CombineServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isLock;
}


bool __fastcall CombineServantListViewItem__get_IsLvExceedItemNum(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isLvExceedItemNum;
}


bool __fastcall CombineServantListViewItem__get_IsLvExceedMax(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isLvExceedMax;
}


bool __fastcall CombineServantListViewItem__get_IsLvMax(CombineServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isLvMax;
}


bool __fastcall CombineServantListViewItem__get_IsMaterialTdSvt(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isMaterialTdSvt;
}


bool __fastcall CombineServantListViewItem__get_IsMaxNextLv(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isMaxNextLv;
}


bool __fastcall CombineServantListViewItem__get_IsMtSelect(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isMaterialSvt;
}


bool __fastcall CombineServantListViewItem__get_IsOrganization(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  ServantEntity_o *servantEntity; // x0

  servantEntity = this->fields.servantEntity;
  if ( !servantEntity )
    sub_1BDBAD4(0LL, method);
  return ServantEntity__get_IsOrganization(servantEntity, 0LL);
}


bool __fastcall CombineServantListViewItem__get_IsParty(CombineServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isParty;
}


bool __fastcall CombineServantListViewItem__get_IsProtected(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0

  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
    LOBYTE(userSvtEntity) = UserServantEntity__IsProtectedEventServant(userSvtEntity, 0LL);
  return (char)userSvtEntity;
}


bool __fastcall CombineServantListViewItem__get_IsPush(CombineServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isPush;
}


bool __fastcall CombineServantListViewItem__get_IsSameServant(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isSameSvt;
}


bool __fastcall CombineServantListViewItem__get_IsSealCombineLimit(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isSealCombineLimit;
}


bool __fastcall CombineServantListViewItem__get_IsSecondAtkAdjustMax(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0

  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_1BDBAD4(0LL, method);
  return UserServantEntity__isSecondAdjustAtkMax(userSvtEntity, 0LL);
}


bool __fastcall CombineServantListViewItem__get_IsSecondAtkStatusMax(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isNotSelectSecondStatusUpAtk;
}


bool __fastcall CombineServantListViewItem__get_IsSecondAtkUpMax(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isAtkSecondUpMax;
}


bool __fastcall CombineServantListViewItem__get_IsSecondHpAdjustMax(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0

  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_1BDBAD4(0LL, method);
  return UserServantEntity__isSecondAdjustHpMax(userSvtEntity, 0LL);
}


bool __fastcall CombineServantListViewItem__get_IsSecondHpStatusMax(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isNotSelectSecondStatusUpHp;
}


bool __fastcall CombineServantListViewItem__get_IsSecondHpUpMax(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isHpSecondUpMax;
}


bool __fastcall CombineServantListViewItem__get_IsSelectMax(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isMaxSelect;
}


bool __fastcall CombineServantListViewItem__get_IsSkillUpItemNum(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isSkillUpItemNum;
}


bool __fastcall CombineServantListViewItem__get_IsStatusUp(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isStatusUpSvt;
}


bool __fastcall CombineServantListViewItem__get_IsSwapChoice(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isSwapChoice;
}


bool __fastcall CombineServantListViewItem__get_IsSwapLock(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isSwapLock;
}


bool __fastcall CombineServantListViewItem__get_IsUseRecommendSupportServant(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isUseRecommendSupport;
}


bool __fastcall CombineServantListViewItem__get_IsUseSupportServant(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isUseSupport;
}


System_String_o *__fastcall CombineServantListViewItem__get_LevelText(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct UserServantEntity_o *userSvtEntity; // x8
  int32_t lv; // w19

  if ( (byte_4B48A19 & 1) == 0 )
  {
    sub_1BDB878(&LocalizationManager_TypeInfo, method);
    sub_1BDB878(&StringLiteral_19073/*"error"*/, v3);
    byte_4B48A19 = 1;
  }
  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    return (System_String_o *)StringLiteral_19073/*"error"*/;
  lv = userSvtEntity->fields.lv;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__GetLevelInfo(lv, 0LL);
}


int32_t __fastcall CombineServantListViewItem__get_ListType(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.type;
}


System_String_o *__fastcall CombineServantListViewItem__get_NameText(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  CombineServantListViewItem_o *v2; // x20
  __int64 v3; // x1
  ServantEntity_o *servantEntity; // x19
  struct UserServantEntity_o *userSvtEntity; // x8
  __int64 v6; // x20
  __int64 v7; // x21
  int32_t v8; // w1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  v2 = this;
  if ( (byte_4B48A18 & 1) == 0 )
  {
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    this = (CombineServantListViewItem_o *)sub_1BDB878(&StringLiteral_19073/*"error"*/, v3);
    byte_4B48A18 = 1;
  }
  servantEntity = v2->fields.servantEntity;
  if ( !servantEntity )
    return (System_String_o *)StringLiteral_19073/*"error"*/;
  userSvtEntity = v2->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_1BDBAD4(this, method);
  v7 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.currentCryptoKey;
  v6 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v10.fields.currentCryptoKey = v7;
  *(_QWORD *)&v10.fields.fakeValue = v6;
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v10, 0LL);
  return ServantEntity__getName(servantEntity, v8, -1, 0, 0LL);
}


CombineServantListViewNoticeTween_o *__fastcall CombineServantListViewItem__get_NoticeTween(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._NoticeTween_k__BackingField;
}


System_String_o *__fastcall CombineServantListViewItem__get_RarityText(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  int32_t rarity; // w19

  if ( (byte_4B48A1A & 1) == 0 )
  {
    sub_1BDB878(&LocalizationManager_TypeInfo, method);
    byte_4B48A1A = 1;
  }
  rarity = this->fields.rarity;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__GetRarityInfo(rarity, 0LL);
}


ServantEntity_o *__fastcall CombineServantListViewItem__get_ServantEntity(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.servantEntity;
}


int32_t __fastcall CombineServantListViewItem__get_SkillOpenItemId(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1
  Il2CppObject *Entity; // x0

  if ( (byte_4B48A20 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMaster_SvtCoinMaster___, method);
    sub_1BDB878(&DataManager_TypeInfo, v3);
    sub_1BDB878(&Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__GetEntity__, v4);
    byte_4B48A20 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_SvtCoinMaster___);
  if ( !Master_object )
    sub_1BDBAD4(0LL, v6);
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             this->fields.svtId,
             (const MethodInfo_32E1E3C *)Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__GetEntity__);
  if ( Entity )
    return (int32_t)Entity[1].monitor;
  else
    return -1;
}


int32_t __fastcall CombineServantListViewItem__get_SkillOpenItemNum(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  int64_t Master_object; // x0
  __int64 v7; // x1
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v9; // q1
  UserSvtCoinMaster_o *v10; // x20
  struct UserServantEntity_o *v11; // x8
  int64_t v12; // x19
  __int64 v13; // x21
  __int64 v14; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v16; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v17; // [xsp+20h] [xbp-50h]
  UserSvtCoinEntity_o *entity; // [xsp+48h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_4B48A21 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMaster_UserSvtCoinMaster___, method);
    sub_1BDB878(&DataManager_TypeInfo, v3);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5);
    byte_4B48A21 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_UserSvtCoinMaster___);
  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_17;
  v9 = *(_OWORD *)&userSvtEntity->fields.userId.fields.fakeValue;
  v10 = (UserSvtCoinMaster_o *)Master_object;
  *(_OWORD *)&v17.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v17.fields.fakeValue = v9;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v16 = v17;
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48231240(&v16, 0LL);
  v11 = this->fields.userSvtEntity;
  if ( !v11 )
    goto LABEL_17;
  v12 = Master_object;
  v14 = *(_QWORD *)&v11->fields.svtId.fields.currentCryptoKey;
  v13 = *(_QWORD *)&v11->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v19.fields.currentCryptoKey = v14;
  *(_QWORD *)&v19.fields.fakeValue = v13;
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v19, 0LL);
  if ( !v10 )
    goto LABEL_17;
  Master_object = UserSvtCoinMaster__TryGetEntity(v10, &entity, v12, Master_object, 0LL);
  if ( (Master_object & 1) != 0 )
  {
    if ( entity )
      return entity->fields.num;
LABEL_17:
    sub_1BDBAD4(Master_object, v7);
  }
  return 0;
}


int32_t __fastcall CombineServantListViewItem__get_SvtActualRariry(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.actualRarity;
}


int32_t __fastcall CombineServantListViewItem__get_SvtId(CombineServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.svtId;
}


int32_t __fastcall CombineServantListViewItem__get_SvtRariry(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.rarity;
}


UserServantEntity_o *__fastcall CombineServantListViewItem__get_UserSvtEntity(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  CombineServantListViewItem_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct UserServantEntity_o *v6; // x8
  CGThumbnailListItem_o *p_userSvtEntity; // x19
  struct UserServantEntity_o *userSvtEntity; // t1
  __int128 v9; // q1
  int64_t v10; // x20
  Il2CppObject *Entity; // x20
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v15; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v16; // [xsp+20h] [xbp-40h]

  v2 = this;
  if ( (byte_4B48A16 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_UserServantMaster___, method);
    sub_1BDB878(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v3);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v4);
    this = (CombineServantListViewItem_o *)sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4B48A16 = 1;
  }
  userSvtEntity = v2->fields.userSvtEntity;
  p_userSvtEntity = (CGThumbnailListItem_o *)&v2->fields.userSvtEntity;
  v6 = userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_9;
  v9 = *(_OWORD *)&v6->fields.id.fields.fakeValue;
  *(_OWORD *)&v16.fields.currentCryptoKey = *(_OWORD *)&v6->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v16.fields.fakeValue = v9;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v15 = v16;
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48231240(&v15, 0LL);
  this = (CombineServantListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (this = (CombineServantListViewItem_o *)DataManager__GetMasterData_object_(
                                                 (DataManager_o *)this,
                                                 (const MethodInfo_303395C *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
  {
LABEL_9:
    sub_1BDBAD4(this, method);
  }
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             v10,
             (const MethodInfo_32E4398 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  p_userSvtEntity->klass = (CGThumbnailListItem_c *)Entity;
  sub_1BDB81C(p_userSvtEntity, (int32_t)Entity, v12, v13);
  return (UserServantEntity_o *)Entity;
}


int64_t __fastcall CombineServantListViewItem__get_UserSvtId(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  CombineServantListViewItem_o *v2; // x19
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v4; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v6; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+20h] [xbp-40h]

  v2 = this;
  if ( (byte_4B48A17 & 1) == 0 )
  {
    this = (CombineServantListViewItem_o *)sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
    byte_4B48A17 = 1;
  }
  userSvtEntity = v2->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_1BDBAD4(this, method);
  v4 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v7.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v7.fields.fakeValue = v4;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v6 = v7;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48231240(&v6, 0LL);
}


void __fastcall CombineServantListViewItem__setUserServantEntity(
        CombineServantListViewItem_o *this,
        UserServantEntity_o *entity,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.userSvtEntity = entity;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.userSvtEntity, (int32_t)entity, (int32_t)method, v3);
}


void __fastcall CombineServantListViewItem__set_DragSelectNum(
        CombineServantListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields.dragSelectNum = value;
}


void __fastcall CombineServantListViewItem__set_IsAtkStatusMax(
        CombineServantListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  if ( !this )
    sub_1BDBAD4(0LL, value);
  this->fields.isNotSelectStatusUpAtk = this->fields.atkBase > 0 && value;
}


void __fastcall CombineServantListViewItem__set_IsCanNotLock(
        CombineServantListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields.isCanNotLock = value;
}


void __fastcall CombineServantListViewItem__set_IsDragSelect(
        CombineServantListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  if ( !this )
    sub_1BDBAD4(0LL, value);
  this->fields.dragSelectNum = value - 1;
}


void __fastcall CombineServantListViewItem__set_IsHpStatusMax(
        CombineServantListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  if ( !this )
    sub_1BDBAD4(0LL, value);
  this->fields.isNotSelectStatusUpHp = this->fields.hpBase > 0 && value;
}


void __fastcall CombineServantListViewItem__set_IsMaxNextLv(
        CombineServantListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields.isMaxNextLv = value;
}


void __fastcall CombineServantListViewItem__set_IsMtSelect(
        CombineServantListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields.isMaterialSvt = value;
}


void __fastcall CombineServantListViewItem__set_IsSecondAtkStatusMax(
        CombineServantListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  if ( !this )
    sub_1BDBAD4(0LL, value);
  this->fields.isNotSelectSecondStatusUpAtk = this->fields.atkBase > 0 && value;
}


void __fastcall CombineServantListViewItem__set_IsSecondHpStatusMax(
        CombineServantListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  if ( !this )
    sub_1BDBAD4(0LL, value);
  this->fields.isNotSelectSecondStatusUpHp = this->fields.hpBase > 0 && value;
}


void __fastcall CombineServantListViewItem__set_IsSelectMax(
        CombineServantListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields.isMaxSelect = value;
}


void __fastcall CombineServantListViewItem__set_NoticeTween(
        CombineServantListViewItem_o *this,
        CombineServantListViewNoticeTween_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._NoticeTween_k__BackingField = value;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields._NoticeTween_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void __fastcall CombineServantListViewItem___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B48A25 & 1) == 0 )
  {
    sub_1BDB878(&CombineServantListViewItem___c_TypeInfo, v1);
    byte_4B48A25 = 1;
  }
  v2 = (Il2CppObject *)sub_1BDBAC4(CombineServantListViewItem___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  CombineServantListViewItem___c_TypeInfo->static_fields->__9 = (struct CombineServantListViewItem___c_o *)v2;
  sub_1BDB81C((CGThumbnailListItem_o *)CombineServantListViewItem___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall CombineServantListViewItem___c___ctor(CombineServantListViewItem___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall CombineServantListViewItem___c___SetIsCombineExpCampaignTarget_b__125_0(
        CombineServantListViewItem___c_o *this,
        EventCampaignEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BDBAD4(this, 0LL);
  return x->fields.target == 2 || x->fields.target == 27;
}


void __fastcall CombineServantListViewItem___c__DisplayClass124_0___ctor(
        CombineServantListViewItem___c__DisplayClass124_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall CombineServantListViewItem___c__DisplayClass124_0___SetSortValue_b__0(
        CombineServantListViewItem___c__DisplayClass124_0_o *this,
        EventGroupEntity_o *entity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  UnityEngine_Object_o *manager; // x21
  int64_t IsLargeSuccessCampaignClassId; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x3
  struct CombineServantListViewItem_o *_4__this; // x8
  struct CombineServantListViewItem_o *v15; // x8
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v17; // q1
  struct CombineServantListViewManager_o *v18; // x22
  int32_t eventId; // w21
  const MethodInfo *v20; // x3
  struct CombineServantListViewItem_o *v21; // x8
  struct CombineServantListViewItem_o *v22; // x8
  ServantFilterMaster_o *v23; // x21
  int32_t svtId; // w22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // kr00_16
  struct CombineServantListViewItem_o *v28; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+20h] [xbp-50h]

  if ( (byte_4B48A26 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMaster_EventCampaignMaster___, entity);
    sub_1BDB878(&Method_DataManager_GetMaster_ServantFilterMaster___, v5);
    sub_1BDB878(&DataManager_TypeInfo, v6);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v7);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9);
    byte_4B48A26 = 1;
  }
  manager = (UnityEngine_Object_o *)this->fields.manager;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  IsLargeSuccessCampaignClassId = UnityEngine_Object__op_Implicit(manager, 0LL);
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
                                    v13);
  if ( (IsLargeSuccessCampaignClassId & 1) == 0 )
  {
    v15 = this->fields.__4__this;
    if ( !v15 )
      goto LABEL_34;
    userSvtEntity = v15->fields.userSvtEntity;
    if ( !userSvtEntity )
      goto LABEL_34;
    v17 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
    v18 = this->fields.manager;
    eventId = entity->fields.eventId;
    *(_OWORD *)&v30.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v30.fields.fakeValue = v17;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v29 = v30;
    IsLargeSuccessCampaignClassId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48231240(&v29, 0LL);
    if ( !v18 )
      goto LABEL_34;
    if ( !CombineServantListViewManager__IsExchangeSvtExist(
            (CombineServantListViewManager_o *)IsLargeSuccessCampaignClassId,
            eventId,
            IsLargeSuccessCampaignClassId,
            v20) )
    {
LABEL_37:
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      IsLargeSuccessCampaignClassId = (int64_t)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_EventCampaignMaster___);
      v21 = this->fields.__4__this;
      if ( !v21 || !entity || !IsLargeSuccessCampaignClassId )
        goto LABEL_34;
      if ( !EventCampaignMaster__IsEnableServant(
              (EventCampaignMaster_o *)IsLargeSuccessCampaignClassId,
              v21->fields.svtId,
              entity->fields.eventId,
              0LL) )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        IsLargeSuccessCampaignClassId = (int64_t)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_ServantFilterMaster___);
        v22 = this->fields.__4__this;
        if ( v22 )
        {
          v23 = (ServantFilterMaster_o *)IsLargeSuccessCampaignClassId;
          svtId = v22->fields.svtId;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(svtId, 0LL);
          v12 = *(_QWORD *)&v25.fields.fakeValue;
          IsLargeSuccessCampaignClassId = *(_QWORD *)&v25.fields.currentCryptoKey;
          if ( v23 )
          {
            IsLargeSuccessCampaignClassId = ServantFilterMaster__IsEnableServant(v23, v25, entity->fields.eventId, 0LL);
            if ( (IsLargeSuccessCampaignClassId & 1) != 0 )
              return 1;
            v28 = this->fields.__4__this;
            if ( v28 )
            {
              IsLargeSuccessCampaignClassId = (int64_t)v28->fields.userSvtEntity;
              if ( IsLargeSuccessCampaignClassId )
                return UserServantEntity__getEventUpVal_42107500(
                         (UserServantEntity_o *)IsLargeSuccessCampaignClassId,
                         v28->fields.setupInfo,
                         entity->fields.eventId,
                         0LL,
                         0LL);
            }
          }
        }
LABEL_34:
        sub_1BDBAD4(IsLargeSuccessCampaignClassId, v12);
      }
    }
  }
  return 1;
}