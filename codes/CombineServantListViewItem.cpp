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
  __int64 v57; // x1
  IconLabelInfo_o *v58; // x21
  int32_t v59; // w2
  const MethodInfo *v60; // x3
  IconLabelInfo_o *v61; // x21
  int32_t v62; // w2
  const MethodInfo *v63; // x3
  System_Collections_Generic_List_int__o *v64; // x21
  int32_t v65; // w2
  const MethodInfo *v66; // x3
  System_Collections_Generic_List_int__o *v67; // x21
  int32_t v68; // w2
  const MethodInfo *v69; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_userSvtEntity; // x22
  int32_t v71; // w2
  const MethodInfo *v72; // x3
  int64_t Instance; // x0
  const MethodInfo *v74; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v75; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v76; // x21
  __int64 v77; // x24
  __int64 v78; // x25
  Il2CppObject *v79; // x0
  int32_t v80; // w2
  const MethodInfo *v81; // x3
  int32_t v82; // w2
  const MethodInfo *v83; // x3
  struct UserServantEntity_o *v84; // x8
  struct ServantEntity_o *servantEntity; // x8
  ServantLimitMaster_o *v86; // x21
  int32_t v87; // w25
  int64_t v88; // x29
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v89; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v90; // q1
  UserServantCollectionMaster_o *v91; // x21
  int64_t v92; // x25
  int64_t v93; // x24
  int v94; // w8
  bool *p_isStatusUpSvt; // x29
  int64_t v96; // x21
  struct UserServantEntity_o *v97; // x8
  int32_t v98; // w20
  BalanceConfig_c *v99; // x8
  struct BalanceConfig_StaticFields *static_fields; // x8
  struct UserServantEntity_o *v101; // x8
  __int128 v102; // q1
  __int64 v103; // x20
  const MethodInfo *v104; // x1
  int64_t UserSvtId; // x0
  unsigned int v106; // w8
  bool isLimitCountMax; // w8
  UserServantEntity_o *v108; // x8
  __int64 v109; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x26
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v112; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v115; // x8
  __int64 v116; // x9
  int32_t *v117; // x10
  __int64 v118; // x0
  __int64 v119; // x0
  __int64 v120; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v121; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v122; // q0
  __int64 v123; // x20
  System_Collections_Generic_IEnumerator_T__c *v124; // x8
  __int64 v125; // x9
  int32_t *v126; // x10
  __int64 v127; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v128; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v129; // q0
  UserRecommendSupportMaster_o *v130; // x21
  UserServantEntity_o *v131; // x8
  UserServantEntity_o *v132; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v133; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v134; // q0
  int64_t v135; // x21
  __int128 v136; // q1
  Il2CppObject *v137; // x21
  struct ServantEntity_o *v138; // x8
  __int64 v139; // x25
  __int64 v140; // x27
  int64_t v141; // x26
  int32_t v142; // w8
  Il2CppObject *v143; // x21
  struct ServantEntity_o *v144; // x8
  __int64 v145; // x25
  __int64 v146; // x27
  int64_t v147; // x26
  struct System_Int32_array *commandCardParam; // x20
  int max_length; // w8
  __int64 v150; // x21
  int32_t v151; // w25
  bool v152; // w25
  __int64 v153; // x1
  System_Collections_Generic_IEnumerator_T__o *v154; // x20
  System_Collections_Generic_IEnumerator_T__c *v155; // x8
  __int64 v156; // x9
  int32_t *v157; // x10
  __int64 v158; // x0
  System_Collections_Generic_IEnumerator_T__c *v159; // x8
  __int64 v160; // x9
  int32_t *v161; // x10
  __int64 v162; // x0
  __int64 v163; // x0
  __int64 v164; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v165; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v166; // q0
  __int64 v167; // x23
  System_Collections_Generic_IEnumerator_T__c *v168; // x8
  __int64 v169; // x9
  int32_t *v170; // x10
  __int64 v171; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v172; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v173; // q0
  UserRecommendSupportMaster_o *v174; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v175; // x8
  __int64 v176; // x20
  __int64 v177; // x21
  UserServantEntity_o *v178; // x21
  int32_t v179; // w20
  struct UserServantEntity_o *v180; // x8
  __int128 v181; // q0
  int64_t v182; // x20
  __int128 v183; // q1
  int32_t SvtClassId; // w0
  int32_t SvtClassGroupType; // w20
  BalanceConfig_c *v186; // x0
  int32_t materialExp; // w20
  int SameClassExp; // w21
  double v189; // d0
  int32_t v190; // w8
  UserServantEntity_o *v191; // x8
  UserServantEntity_o *v192; // x8
  int32_t v193; // w20
  bool v194; // w8
  bool v195; // w8
  bool v196; // w8
  bool v197; // w8
  Il2CppObject *v198; // x20
  struct ServantEntity_o *v199; // x8
  __int64 v200; // x25
  __int64 v201; // x26
  int64_t v202; // x21
  unsigned int v203; // w8
  int32_t v204; // w24
  UserServantEntity_o *v205; // x29
  Il2CppObject *Master_object; // x0
  __int64 v207; // x21
  __int64 v208; // x25
  ServantLimitImageMaster_o *v209; // x20
  int32_t v210; // w21
  UserServantEntity_o *v211; // x8
  bool v212; // w8
  UserServantEntity_o *v213; // x8
  UserServantEntity_o *v214; // x8
  const MethodInfo *v215; // x1
  UserServantEntity_o *v216; // x8
  __int128 v217; // q0
  int64_t v218; // x0
  __int128 v219; // q1
  UserServantEntity_o *v220; // x9
  int64_t v221; // x24
  int32_t combineLimitId; // w20
  __int64 v223; // x21
  __int64 v224; // x25
  int32_t v225; // w21
  int64_t v226; // x20
  __int64 v227; // x23
  int64_t v228; // x25
  __int64 v229; // x8
  UserItemMaster_o *v230; // x21
  unsigned __int64 i; // x28
  UserServantEntity_o *v232; // x8
  __int128 v233; // q1
  int32_t v234; // w26
  int32_t v235; // w24
  UserServantEntity_o *v236; // x8
  bool isLevelMax; // w8
  UserServantEntity_o *v238; // x8
  UserServantEntity_o *v239; // x8
  UserServantEntity_o *v240; // x8
  const MethodInfo *v241; // x1
  UserServantEntity_o *v242; // x8
  __int128 v243; // q0
  int64_t v244; // x0
  __int128 v245; // q1
  UserServantEntity_o *v246; // x8
  UserServantEntity_o *v247; // x8
  UserServantEntity_o *v248; // x8
  __int128 v249; // q0
  int64_t v250; // x0
  __int128 v251; // q1
  UserServantEntity_o *v252; // x8
  UserServantEntity_o *v253; // x8
  UserServantEntity_o *v254; // x8
  __int128 v255; // q0
  int64_t v256; // x0
  __int128 v257; // q1
  int id; // w20
  int32_t lv; // w21
  int32_t SameSvtNpLvCache; // w0
  const MethodInfo *v261; // x4
  int32_t v262; // w20
  char v263; // w8
  int v264; // w8
  int32_t v265; // w0
  int32_t v266; // w20
  int32_t v267; // w26
  int32_t v268; // w21
  int v269; // w23
  __int64 v270; // x1
  System_Collections_Generic_IEnumerator_T__o *v271; // x20
  System_Collections_Generic_IEnumerator_T__c *v272; // x8
  __int64 v273; // x9
  int32_t *v274; // x10
  __int64 v275; // x0
  System_Collections_Generic_IEnumerator_T__c *v276; // x8
  __int64 v277; // x9
  int32_t *v278; // x10
  __int64 v279; // x0
  __int64 v280; // x0
  __int64 v281; // x1
  UserServantEntity_o *v282; // x8
  __int128 v283; // q0
  __int64 v284; // x23
  System_Collections_Generic_IEnumerator_T__c *v285; // x8
  __int64 v286; // x9
  int32_t *v287; // x10
  __int64 v288; // x0
  UserServantEntity_o *v289; // x8
  __int128 v290; // q0
  UserRecommendSupportMaster_o *v291; // x20
  bool IsSettingServant; // w8
  UserServantEntity_o *v293; // x8
  UserServantEntity_o *v294; // x8
  CombineServantListViewItem_o *v295; // x8
  CombineServantListViewItem_o *v296; // x20
  struct UserServantEntity_o *v297; // x8
  __int128 v298; // q0
  int64_t v299; // x0
  __int128 v300; // q1
  int32_t v301; // w8
  UserServantEntity_o *v302; // x8
  UserServantEntity_o *v303; // x8
  bool v304; // w8
  UserServantEntity_o *v305; // x8
  UserServantEntity_o *v306; // x8
  UserServantEntity_o *v307; // x8
  __int128 v308; // q0
  int64_t v309; // x0
  __int128 v310; // q1
  ServantExceedEntity_o *SvtExceedEnt; // x0
  int32_t *v312; // x20
  CommonConsumeEntity_array *IdEntityList; // x0
  CommonConsumeEntity_array *v314; // x27
  System_Collections_Generic_HashSet_int__o *v315; // x21
  System_Collections_Generic_HashSet_int__o *v316; // x26
  int v317; // w8
  __int64 v318; // x25
  CommonConsumeEntity_o *v319; // x29
  UserServantEntity_o *v320; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v321; // x27
  __int64 v322; // x25
  __int64 v323; // x28
  UserServantEntity_o *v324; // x25
  System_Int32_array *v325; // x21
  System_Int32_array *v326; // x0
  __int64 v327; // x20
  __int64 v328; // x21
  UserServantEntity_o *v329; // x8
  UserServantEntity_o *v330; // x8
  UserServantEntity_o *v331; // x8
  UserServantEntity_o *v332; // x8
  __int128 v333; // q0
  int64_t v334; // x0
  __int128 v335; // q1
  int32_t maxFriendshipRank; // w20
  int v337; // w21
  int64_t v338; // x20
  __int64 v339; // x24
  int64_t v340; // x25
  UserItemMaster_o *v341; // x21
  unsigned __int64 v342; // x26
  __int64 v343; // x28
  bool v344; // w8
  UserServantEntity_o *v345; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  int32_t v347; // w2
  const MethodInfo *v348; // x3
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  int32_t v350; // w2
  const MethodInfo *v351; // x3
  int64_t v352; // x8
  struct ServantEntity_o *v353; // x9
  UserServantEntity_o *v354; // x8
  unsigned __int64 v355; // x9
  _BOOL8 v356; // x10
  __int64 v357; // x20
  __int64 v358; // x21
  int32_t v359; // w8
  int v360; // [xsp+Ch] [xbp-494h]
  UserServantMaster_o *MasterData_object; // [xsp+18h] [xbp-488h]
  int64_t v362; // [xsp+20h] [xbp-480h]
  bool *p_isLimitUpItemNum; // [xsp+28h] [xbp-478h]
  struct IconLabelInfo_o **p_iconLabelInfo2; // [xsp+30h] [xbp-470h]
  int64_t v365; // [xsp+38h] [xbp-468h]
  bool v366; // [xsp+44h] [xbp-45Ch]
  bool v367; // [xsp+44h] [xbp-45Ch]
  bool v368; // [xsp+44h] [xbp-45Ch]
  bool v370; // [xsp+48h] [xbp-458h]
  int32_t v371; // [xsp+4Ch] [xbp-454h]
  int64_t v372; // [xsp+50h] [xbp-450h]
  UserServantEntity_o *v373; // [xsp+58h] [xbp-448h]
  bool v374; // [xsp+64h] [xbp-43Ch]
  struct ServantEntity_o **p_servantEntity; // [xsp+68h] [xbp-438h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v376; // [xsp+70h] [xbp-430h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v377; // [xsp+90h] [xbp-410h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v378; // [xsp+B0h] [xbp-3F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v379; // [xsp+D0h] [xbp-3D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v380; // [xsp+F0h] [xbp-3B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v381; // [xsp+110h] [xbp-390h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v382; // [xsp+130h] [xbp-370h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v383; // [xsp+150h] [xbp-350h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v384; // [xsp+170h] [xbp-330h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v385; // [xsp+190h] [xbp-310h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v386; // [xsp+1B0h] [xbp-2F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v387; // [xsp+1D0h] [xbp-2D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v388; // [xsp+1F0h] [xbp-2B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v389; // [xsp+210h] [xbp-290h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v390; // [xsp+230h] [xbp-270h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v391; // [xsp+250h] [xbp-250h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v392; // [xsp+270h] [xbp-230h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v393; // [xsp+290h] [xbp-210h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v394; // [xsp+2B0h] [xbp-1F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v395; // [xsp+2D0h] [xbp-1D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v396; // [xsp+2F0h] [xbp-1B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v397; // [xsp+310h] [xbp-190h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v398; // [xsp+330h] [xbp-170h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v399; // [xsp+350h] [xbp-150h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v400; // [xsp+370h] [xbp-130h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v401; // [xsp+390h] [xbp-110h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v402; // [xsp+3B0h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v403; // [xsp+3D0h] [xbp-D0h]
  UserItemEntity_o *v404; // [xsp+3F8h] [xbp-A8h] BYREF
  int32_t tdMaxLv; // [xsp+404h] [xbp-9Ch] BYREF
  int32_t tdLv[2]; // [xsp+408h] [xbp-98h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+410h] [xbp-90h] BYREF
  UserItemEntity_o *v408; // [xsp+418h] [xbp-88h] BYREF
  __int64 v409; // [xsp+420h] [xbp-80h] BYREF
  UserServantCommandCodeEntity_o *v410; // [xsp+428h] [xbp-78h] BYREF
  UserServantCommandCardEntity_o *v411; // [xsp+430h] [xbp-70h] BYREF
  UserServantCommandCodeEntity_o *entity; // [xsp+438h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v413; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v414; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v415; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v416; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v417; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v418; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v419; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v420; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v421; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v422; // 0:x0.16

  if ( (byte_49BEBF3 & 1) == 0 )
  {
    sub_1B4CF90(&BalanceConfig_TypeInfo, *(_QWORD *)&type);
    sub_1B4CF90(&Method_System_Collections_ObjectModel_Collection_UserServantLeaderEntity__GetEnumerator__, v18);
    sub_1B4CF90(&Method_DataManager_GetMasterData_CombineLimitMaster___, v19);
    sub_1B4CF90(&Method_DataManager_GetMasterData_CombineMaterialMaster___, v20);
    sub_1B4CF90(&Method_DataManager_GetMasterData_FriendshipMaster___, v21);
    sub_1B4CF90(&Method_DataManager_GetMasterData_ServantClassMaster___, v22);
    sub_1B4CF90(&Method_DataManager_GetMasterData_ServantLimitMaster___, v23);
    sub_1B4CF90(&Method_DataManager_GetMasterData_ServantMaster___, v24);
    sub_1B4CF90(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___, v25);
    sub_1B4CF90(&Method_DataManager_GetMasterData_TreasureDvcMaster___, v26);
    sub_1B4CF90(&Method_DataManager_GetMasterData_UserItemMaster___, v27);
    sub_1B4CF90(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v28);
    sub_1B4CF90(&Method_DataManager_GetMasterData_UserServantCommandCardMaster___, v29);
    sub_1B4CF90(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___, v30);
    sub_1B4CF90(&Method_DataManager_GetMasterData_UserServantLeaderMaster___, v31);
    sub_1B4CF90(&Method_DataManager_GetMasterData_UserServantMaster___, v32);
    sub_1B4CF90(&Method_DataManager_GetMaster_CommonConsumeMaster___, v33);
    sub_1B4CF90(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v34);
    sub_1B4CF90(&Method_DataManager_GetMaster_SvtCoinMaster___, v35);
    sub_1B4CF90(&Method_DataManager_GetMaster_UserRecommendSupportMaster___, v36);
    sub_1B4CF90(&DataManager_TypeInfo, v37);
    sub_1B4CF90(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v38);
    sub_1B4CF90(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v39);
    sub_1B4CF90(&Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__GetEntity__, v40);
    sub_1B4CF90(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__, v41);
    sub_1B4CF90(&Method_DataMasterBase_UserServantLeaderMaster__UserServantLeaderEntity__string__getEntityList__, v42);
    sub_1B4CF90(&Method_System_Linq_Enumerable_ToArray_int___, v43);
    sub_1B4CF90(&Method_System_Collections_Generic_HashSet_int__Add__, v44);
    sub_1B4CF90(&Method_System_Collections_Generic_HashSet_int___ctor__, v45);
    sub_1B4CF90(&System_Collections_Generic_HashSet_int__TypeInfo, v46);
    sub_1B4CF90(&System_IDisposable_TypeInfo, v47);
    sub_1B4CF90(&System_Collections_Generic_IEnumerator_UserServantLeaderEntity__TypeInfo, v48);
    sub_1B4CF90(&System_Collections_IEnumerator_TypeInfo, v49);
    sub_1B4CF90(&IconLabelInfo_TypeInfo, v50);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int___ctor__, v51);
    sub_1B4CF90(&System_Collections_Generic_List_int__TypeInfo, v52);
    sub_1B4CF90(&System_Math_TypeInfo, v53);
    sub_1B4CF90(&NetworkManager_TypeInfo, v54);
    sub_1B4CF90(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v55);
    sub_1B4CF90(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v56);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v57);
    byte_49BEBF3 = 1;
  }
  entity = 0LL;
  v411 = 0LL;
  v410 = 0LL;
  v409 = 0LL;
  v408 = 0LL;
  tdInfo = 0LL;
  *(_QWORD *)tdLv = 0LL;
  tdMaxLv = 0;
  v404 = 0LL;
  v58 = (IconLabelInfo_o *)sub_1B4D1DC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v58, 0LL);
  this->fields.iconLabelInfo1 = v58;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.iconLabelInfo1, (int32_t)v58, v59, v60);
  v61 = (IconLabelInfo_o *)sub_1B4D1DC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v61, 0LL);
  this->fields.iconLabelInfo2 = v61;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.iconLabelInfo2, (int32_t)v61, v62, v63);
  v64 = (System_Collections_Generic_List_int__o *)sub_1B4D1DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v64,
    (const MethodInfo_3562964 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.enableSkillUp = v64;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.enableSkillUp, (int32_t)v64, v65, v66);
  v67 = (System_Collections_Generic_List_int__o *)sub_1B4D1DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v67,
    (const MethodInfo_3562964 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.enableAppendSkillUp = v67;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.enableAppendSkillUp, (int32_t)v67, v68, v69);
  ListViewItem___ctor((ListViewItem_o *)this, 0LL);
  this->fields.userSvtEntity = userSvtEntity;
  p_userSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userSvtEntity;
  this->fields.type = type;
  this->fields.index = index;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.userSvtEntity, (int32_t)userSvtEntity, v71, v72);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_545;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_ServantMaster___);
  v75 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_545;
  v76 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v78 = *(_QWORD *)&v75[5].fields.currentCryptoKey;
  v77 = *(_QWORD *)&v75[5].fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v413.fields.currentCryptoKey = v78;
  *(_QWORD *)&v413.fields.fakeValue = v77;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(v413, 0LL);
  if ( !v76 )
    goto LABEL_545;
  v79 = DataMasterBase_object__object__int___GetEntity(
          v76,
          Instance,
          (const MethodInfo_319D99C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)v79;
  p_servantEntity = &this->fields.servantEntity;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.servantEntity, (int32_t)v79, v80, v81);
  this->fields.setupInfo = setupInfo;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v82, v83);
  v84 = this->fields.userSvtEntity;
  this->fields.isEventUpVal = 0;
  *(_QWORD *)&this->fields.bonusKind = 1LL;
  if ( !v84 )
    goto LABEL_545;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(v84->fields.svtId, 0LL);
  servantEntity = this->fields.servantEntity;
  this->fields.svtId = Instance;
  if ( !servantEntity )
    goto LABEL_545;
  this->fields.classId = servantEntity->fields.classId;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_545;
  MasterData_object = (UserServantMaster_o *)DataManager__GetMasterData_object_(
                                               (DataManager_o *)Instance,
                                               (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_545;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtEntity )
    goto LABEL_545;
  v86 = (ServantLimitMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572((*p_userSvtEntity)[5], 0LL);
  if ( !*p_userSvtEntity )
    goto LABEL_545;
  v87 = Instance;
  v366 = isMtSvt;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572((*p_userSvtEntity)[6], 0LL);
  if ( !v86 )
    goto LABEL_545;
  Instance = (int64_t)ServantLimitMaster__GetEntity(v86, v87, Instance, 0LL);
  if ( !Instance )
    goto LABEL_545;
  v88 = Instance;
  this->fields.rarity = *(_DWORD *)(Instance + 24);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_545;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v89 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_545;
  v90 = v89[4];
  v91 = (UserServantCollectionMaster_o *)Instance;
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v403.fields.currentCryptoKey = v89[3];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v403.fields.fakeValue = v90;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v402 = v403;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47012096(&v402, 0LL);
  if ( !*p_userSvtEntity )
    goto LABEL_545;
  v92 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572((*p_userSvtEntity)[5], 0LL);
  if ( !v91 )
    goto LABEL_545;
  Instance = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(v91, v92, Instance, 0LL);
  if ( !Instance )
    goto LABEL_545;
  v93 = Instance;
  v362 = v88;
  v373 = baseUsrSvtData;
  v371 = type;
  UserServantCollectionEntity__getFriendShipRankInfo(
    (UserServantCollectionEntity_o *)Instance,
    &this->fields.friendship,
    &this->fields.friendshipMax,
    0LL);
  Instance = (int64_t)UserGameMaster__getSelfUserGame(0LL);
  if ( !Instance )
    goto LABEL_545;
  v94 = *(_DWORD *)(Instance + 96);
  *(_DWORD *)&this->fields.isStatusUpSvt = 0;
  p_isStatusUpSvt = &this->fields.isStatusUpSvt;
  *(_WORD *)&this->fields.isFavorite = 0;
  v360 = v94;
  *(_WORD *)&this->fields.isLock = 0;
  this->fields.isChoice = 0;
  this->fields.isMaxSelect = 0;
  *(_QWORD *)&this->fields.isLimitUpItemNum = 0LL;
  v96 = Instance;
  Instance = (int64_t)this->fields.userSvtEntity;
  p_isLimitUpItemNum = &this->fields.isLimitUpItemNum;
  *(_WORD *)&this->fields.isAllAppendSkillLock = 0;
  this->fields.isLvMax = 0;
  *(_WORD *)&this->fields.isEventJoin = 0;
  *(_DWORD *)&this->fields.isBaseSvt = 0;
  *(_DWORD *)&this->fields.isAppendSkillLvSame = 0;
  this->fields.isMaterialTdSvt = 0;
  if ( !Instance )
    goto LABEL_545;
  Instance = UserServantEntity__getLimitCntMax((UserServantEntity_o *)Instance, 0LL);
  v97 = this->fields.userSvtEntity;
  this->fields.maxLimitCnt = Instance;
  if ( !v97 )
    goto LABEL_545;
  this->fields.currentLimitCnt = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(
                                   v97->fields.limitCount,
                                   0LL);
  this->fields.isLvExceedItemNum = 0;
  this->fields.isCanNotLock = 0;
  *(_DWORD *)&this->fields.isBaseLvMax = 0;
  *(_QWORD *)&this->fields.isAtkUpMax = 0LL;
  *(_DWORD *)&this->fields.isNotSelectSecondStatusUpAtk = 0;
  Instance = (int64_t)this->fields.userSvtEntity;
  this->fields.dragSelectNum = -1;
  if ( !Instance )
    goto LABEL_545;
  v98 = *(_DWORD *)(Instance + 276);
  v99 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v99 = BalanceConfig_TypeInfo;
    Instance = (int64_t)*p_userSvtEntity;
  }
  static_fields = v99->static_fields;
  this->fields.hpReinforceValue = static_fields->StatusUpAdjustHp * v98;
  if ( !Instance )
    goto LABEL_545;
  v365 = v93;
  this->fields.atkReinforceValue = static_fields->StatusUpAdjustAtk * *(_DWORD *)(Instance + 272);
  UserServantEntity__getAdjustMaxData(
    (UserServantEntity_o *)Instance,
    &this->fields.nowMaxHpReinforceValue,
    &this->fields.nowMaxAtkReinforceValue,
    0LL);
  v101 = this->fields.userSvtEntity;
  *(_WORD *)&this->fields.isEquipedCmdCard = 0;
  if ( !v101 )
    goto LABEL_545;
  v102 = *(_OWORD *)&v101->fields.id.fields.fakeValue;
  v103 = *(_QWORD *)(v96 + 120);
  v374 = isParty;
  v372 = v96;
  *(_OWORD *)&v401.fields.currentCryptoKey = *(_OWORD *)&v101->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v401.fields.fakeValue = v102;
  this->fields.isPush = v103 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47012096(&v401, 0LL);
  UserSvtId = CombineServantListViewItem__get_UserSvtId(this, v104);
  EventFortificationDataLogic__SetFortification(
    &this->fields.isFortification,
    &this->fields.fortificationName,
    &this->fields.fortificationDetailName,
    UserSvtId,
    0LL);
  v106 = this->fields.type;
  if ( v106 > 0xA || ((1 << v106) & 0x481) == 0 )
    goto LABEL_140;
  Instance = (int64_t)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_545;
  Instance = UserServantEntity__isLevelMax((UserServantEntity_o *)Instance, 0LL);
  if ( (Instance & 1) != 0 )
  {
    Instance = (int64_t)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_545;
    Instance = UserServantEntity__isAdjustHpMax((UserServantEntity_o *)Instance, 0LL);
    if ( (Instance & 1) != 0 )
    {
      Instance = (int64_t)*p_userSvtEntity;
      if ( !*p_userSvtEntity )
        goto LABEL_545;
      Instance = UserServantEntity__isAdjustAtkMax((UserServantEntity_o *)Instance, 0LL);
      if ( (Instance & 1) != 0 )
      {
        Instance = (int64_t)*p_userSvtEntity;
        if ( !*p_userSvtEntity )
          goto LABEL_545;
        Instance = UserServantEntity__isSecondAdjustHpMax((UserServantEntity_o *)Instance, 0LL);
        if ( (Instance & 1) != 0 )
        {
          Instance = (int64_t)*p_userSvtEntity;
          if ( !*p_userSvtEntity )
            goto LABEL_545;
          Instance = UserServantEntity__isSecondAdjustAtkMax((UserServantEntity_o *)Instance, 0LL);
          if ( (Instance & 1) != 0 )
            this->fields.isLvMax = 1;
        }
      }
    }
  }
  if ( !userSvtEntity )
    goto LABEL_545;
  isLimitCountMax = UserServantEntity__isLimitCountMax(userSvtEntity, 0LL);
  Instance = (int64_t)this->fields.userSvtEntity;
  this->fields.isLimitCntMax = isLimitCountMax;
  this->fields.isParty = v374;
  if ( !Instance )
    goto LABEL_545;
  Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL);
  v108 = this->fields.userSvtEntity;
  this->fields.isLock = Instance & 1;
  if ( !v108 )
    goto LABEL_545;
  this->fields.isChoice = UserServantEntity__IsChoice(v108, 0LL);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_545;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_UserServantLeaderMaster___);
  if ( !Instance )
    goto LABEL_545;
  Instance = *(_QWORD *)(Instance + 40);
  if ( !Instance )
    goto LABEL_545;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 (const MethodInfo_313B4BC *)Method_System_Collections_ObjectModel_Collection_UserServantLeaderEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1B4D1EC(0LL, v109);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v112 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v112;
        p_offset += 4;
        if ( !v112 )
          goto LABEL_55;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_55:
      p_method = sub_1B9D724(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v115 = Enumerator->klass;
    v116 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v117 = &v115->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_UserServantLeaderEntity__c **)v117 - 1) != System_Collections_Generic_IEnumerator_UserServantLeaderEntity__TypeInfo )
      {
        --v116;
        v117 += 4;
        if ( !v116 )
          goto LABEL_62;
      }
      v118 = (__int64)&v115->vtable[*v117].method;
    }
    else
    {
LABEL_62:
      v118 = sub_1B9D724(Enumerator, System_Collections_Generic_IEnumerator_UserServantLeaderEntity__TypeInfo, 0LL);
    }
    v119 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v118)(
             Enumerator,
             *(_QWORD *)(v118 + 8));
    if ( !v119 )
      sub_1B4D1EC(0LL, v120);
    v121 = *p_userSvtEntity;
    if ( !*p_userSvtEntity )
      sub_1B4D1EC(v119, v120);
    v122 = v121[2];
    v123 = *(_QWORD *)(v119 + 56);
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v403.fields.currentCryptoKey = v121[1];
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v403.fields.fakeValue = v122;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v400 = v403;
    if ( v123 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47012096(&v400, 0LL) )
    {
      this->fields.isUseSupport = 1;
      break;
    }
  }
  v124 = Enumerator->klass;
  v125 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v126 = &v124->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v126 - 1) != System_IDisposable_TypeInfo )
    {
      --v125;
      v126 += 4;
      if ( !v125 )
        goto LABEL_74;
    }
    v127 = (__int64)&v124->vtable[*v126].method;
  }
  else
  {
LABEL_74:
    v127 = sub_1B9D724(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v127)(
    Enumerator,
    *(_QWORD *)(v127 + 8));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_UserRecommendSupportMaster___);
  v128 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_545;
  v129 = v128[2];
  v130 = (UserRecommendSupportMaster_o *)Instance;
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v403.fields.currentCryptoKey = v128[1];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v403.fields.fakeValue = v129;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v399 = v403;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47012096(&v399, 0LL);
  if ( !v130 )
    goto LABEL_545;
  Instance = UserRecommendSupportMaster__IsSettingServant(v130, Instance, 0, 0LL);
  v131 = this->fields.userSvtEntity;
  this->fields.isUseRecommendSupport = Instance & 1;
  if ( !v131 )
    goto LABEL_545;
  Instance = UserServantEntity__IsEventJoin(v131, 0LL);
  v132 = this->fields.userSvtEntity;
  this->fields.isEventJoin = Instance & 1;
  if ( !v132 )
    goto LABEL_545;
  Instance = UserServantEntity__IsHeroine(v132, 0LL);
  if ( (Instance & 1) != 0 )
    this->fields.isHeroineSvt = 1;
  if ( baseUsrSvtData )
  {
    v133 = *p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_545;
    v134 = v133[2];
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v403.fields.currentCryptoKey = v133[1];
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v403.fields.fakeValue = v134;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v398 = v403;
    v135 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47012096(&v398, 0LL);
    v136 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
    *(_OWORD *)&v397.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v397.fields.fakeValue = v136;
    if ( v135 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47012096(&v397, 0LL) )
      this->fields.isBaseSvt = 1;
  }
  Instance = (int64_t)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_545;
  if ( UserServantEntity__IsCombineExp((UserServantEntity_o *)Instance, 0LL) )
    this->fields.isExpUpSvt = 1;
  Instance = (int64_t)*p_servantEntity;
  if ( !*p_servantEntity )
    goto LABEL_545;
  if ( ServantEntity__get_IsStatusUp((ServantEntity_o *)Instance, 0LL) )
    *p_isStatusUpSvt = 1;
  Instance = (int64_t)*p_servantEntity;
  if ( !*p_servantEntity )
    goto LABEL_545;
  if ( ServantEntity__get_IsServantMaterialTd((ServantEntity_o *)Instance, 0LL) )
    this->fields.isMaterialTdSvt = 1;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_545;
  v137 = DataManager__GetMasterData_object_(
           (DataManager_o *)Instance,
           (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_49B57A5 )
  {
    sub_1B4CF90(&NetworkManager_TypeInfo, v74);
    byte_49B57A5 = 1;
  }
  Instance = (int64_t)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (int64_t)NetworkManager_TypeInfo;
  }
  v138 = *p_servantEntity;
  if ( !*p_servantEntity )
    goto LABEL_545;
  v140 = *(_QWORD *)&v138->fields.id.fields.currentCryptoKey;
  v139 = *(_QWORD *)&v138->fields.id.fields.fakeValue;
  v141 = *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v414.fields.currentCryptoKey = v140;
  *(_QWORD *)&v414.fields.fakeValue = v139;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(v414, 0LL);
  if ( !v137 )
    goto LABEL_545;
  Instance = UserServantCommandCodeMaster__TryGetEntity(
               (UserServantCommandCodeMaster_o *)v137,
               &entity,
               v141,
               (int)Instance,
               0LL);
  if ( (Instance & 1) != 0 )
  {
    Instance = (int64_t)entity;
    if ( !entity )
      goto LABEL_545;
    this->fields.isEquipedCmdCard = UserServantCommandCodeEntity__IsEquipedCommandCode(entity, 0LL);
    Instance = (int64_t)entity;
    if ( !entity )
      goto LABEL_545;
    Instance = UserServantCommandCodeEntity__IsCommandCardSlotOpen(entity, 0LL);
    this->fields.isCmdCardSlotOpen = Instance & 1;
  }
  v142 = this->fields.type;
  if ( v142 == 10 )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_545;
    v143 = DataManager__GetMasterData_object_(
             (DataManager_o *)Instance,
             (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_UserServantCommandCardMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_49B57A5 )
    {
      sub_1B4CF90(&NetworkManager_TypeInfo, v74);
      byte_49B57A5 = 1;
    }
    Instance = (int64_t)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = (int64_t)NetworkManager_TypeInfo;
    }
    v144 = *p_servantEntity;
    if ( !*p_servantEntity )
      goto LABEL_545;
    v146 = *(_QWORD *)&v144->fields.id.fields.currentCryptoKey;
    v145 = *(_QWORD *)&v144->fields.id.fields.fakeValue;
    v147 = *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v415.fields.currentCryptoKey = v146;
    *(_QWORD *)&v415.fields.fakeValue = v145;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(v415, 0LL);
    if ( !v143 )
      goto LABEL_545;
    Instance = UserServantCommandCardMaster__TryGetEntity(
                 (UserServantCommandCardMaster_o *)v143,
                 &v411,
                 v147,
                 (int)Instance,
                 0LL);
    if ( (Instance & 1) != 0 )
    {
      if ( !v411 )
        goto LABEL_545;
      commandCardParam = v411->fields.commandCardParam;
      if ( commandCardParam )
      {
        max_length = commandCardParam->max_length;
        if ( max_length >= 1 )
        {
          v150 = 0LL;
          while ( 1 )
          {
            if ( (unsigned int)v150 >= max_length )
              goto LABEL_552;
            Instance = (int64_t)BalanceConfig_TypeInfo;
            v151 = commandCardParam->m_Items[v150 + 1];
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              Instance = (int64_t)BalanceConfig_TypeInfo;
            }
            if ( v151 < *(_DWORD *)(*(_QWORD *)(Instance + 184) + 748LL) )
              break;
            this->fields.isCommandCardExceedMax = 1;
            max_length = commandCardParam->max_length;
            if ( (int)++v150 >= max_length )
              goto LABEL_140;
          }
          this->fields.isCommandCardExceedMax = 0;
        }
      }
    }
LABEL_140:
    v142 = this->fields.type;
  }
  v370 = isFavorite;
  v152 = v366;
  if ( v142 == 1 )
  {
    this->fields.isMaterialSvt = v152;
    this->fields.isParty = v374;
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_545;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_UserServantLeaderMaster___);
    if ( !Instance )
      goto LABEL_545;
    Instance = *(_QWORD *)(Instance + 40);
    if ( !Instance )
      goto LABEL_545;
    v367 = v366;
    v154 = System_Collections_ObjectModel_Collection_object___GetEnumerator(
             (System_Collections_ObjectModel_Collection_T__o *)Instance,
             (const MethodInfo_313B4BC *)Method_System_Collections_ObjectModel_Collection_UserServantLeaderEntity__GetEnumerator__);
    if ( !v154 )
      sub_1B4D1EC(0LL, v153);
    while ( 1 )
    {
      v155 = v154->klass;
      v156 = *(unsigned __int16 *)(&v154->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v154->klass->_2.bitflags2 + 3) )
      {
        v157 = &v155->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)v157 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v156;
          v157 += 4;
          if ( !v156 )
            goto LABEL_150;
        }
        v158 = (__int64)&v155->vtable[*v157].method;
      }
      else
      {
LABEL_150:
        v158 = sub_1B9D724(v154, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v158)(
              v154,
              *(_QWORD *)(v158 + 8)) & 1) == 0 )
        break;
      v159 = v154->klass;
      v160 = *(unsigned __int16 *)(&v154->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v154->klass->_2.bitflags2 + 3) )
      {
        v161 = &v159->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerator_UserServantLeaderEntity__c **)v161 - 1) != System_Collections_Generic_IEnumerator_UserServantLeaderEntity__TypeInfo )
        {
          --v160;
          v161 += 4;
          if ( !v160 )
            goto LABEL_157;
        }
        v162 = (__int64)&v159->vtable[*v161].method;
      }
      else
      {
LABEL_157:
        v162 = sub_1B9D724(v154, System_Collections_Generic_IEnumerator_UserServantLeaderEntity__TypeInfo, 0LL);
      }
      v163 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v162)(
               v154,
               *(_QWORD *)(v162 + 8));
      if ( !v163 )
        sub_1B4D1EC(0LL, v164);
      v165 = *p_userSvtEntity;
      if ( !*p_userSvtEntity )
        sub_1B4D1EC(v163, v164);
      v166 = v165[2];
      v167 = *(_QWORD *)(v163 + 56);
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v403.fields.currentCryptoKey = v165[1];
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v403.fields.fakeValue = v166;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v396 = v403;
      if ( v167 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47012096(&v396, 0LL) )
      {
        this->fields.isUseSupport = 1;
        break;
      }
    }
    v168 = v154->klass;
    v169 = *(unsigned __int16 *)(&v154->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v154->klass->_2.bitflags2 + 3) )
    {
      v170 = &v168->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v170 - 1) != System_IDisposable_TypeInfo )
      {
        --v169;
        v170 += 4;
        if ( !v169 )
          goto LABEL_169;
      }
      v171 = (__int64)&v168->vtable[*v170].method;
    }
    else
    {
LABEL_169:
      v171 = sub_1B9D724(v154, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v171)(v154, *(_QWORD *)(v171 + 8));
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Instance = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_UserRecommendSupportMaster___);
    v172 = *p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_545;
    v173 = v172[2];
    v174 = (UserRecommendSupportMaster_o *)Instance;
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v403.fields.currentCryptoKey = v172[1];
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v403.fields.fakeValue = v173;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v395 = v403;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47012096(&v395, 0LL);
    if ( !v174 )
      goto LABEL_545;
    this->fields.isUseRecommendSupport = UserRecommendSupportMaster__IsSettingServant(v174, Instance, 0, 0LL);
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_545;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_CombineMaterialMaster___);
    if ( !*p_servantEntity )
      goto LABEL_545;
    if ( !*p_userSvtEntity )
      goto LABEL_545;
    if ( !Instance )
      goto LABEL_545;
    Instance = (int64_t)CombineMaterialMaster__GetEntity(
                          (CombineMaterialMaster_o *)Instance,
                          (*p_servantEntity)->fields.combineMaterialId,
                          (*p_userSvtEntity)[16].fields.currentCryptoKey,
                          0LL);
    if ( !Instance )
      goto LABEL_545;
    this->fields.materialExp = *(_DWORD *)(Instance + 24);
    if ( v373 )
    {
      v175 = *p_userSvtEntity;
      if ( !*p_userSvtEntity )
        goto LABEL_545;
      v177 = *(_QWORD *)&v175[5].fields.currentCryptoKey;
      v176 = *(_QWORD *)&v175[5].fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v416.fields.currentCryptoKey = v177;
      *(_QWORD *)&v416.fields.fakeValue = v176;
      v178 = v373;
      v179 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(v416, 0LL);
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(v373->fields.svtId, 0LL);
      if ( v179 == (_DWORD)Instance )
      {
        v180 = this->fields.userSvtEntity;
        this->fields.isLimitCntTarget = 1;
        if ( !v180 )
          goto LABEL_545;
        v181 = *(_OWORD *)&v180->fields.id.fields.fakeValue;
        *(_OWORD *)&v403.fields.currentCryptoKey = *(_OWORD *)&v180->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v403.fields.fakeValue = v181;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v394 = v403;
        v178 = v373;
        v182 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47012096(&v394, 0LL);
        v183 = *(_OWORD *)&v373->fields.id.fields.fakeValue;
        *(_OWORD *)&v393.fields.currentCryptoKey = *(_OWORD *)&v373->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v393.fields.fakeValue = v183;
        if ( v182 != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47012096(&v393, 0LL) )
          this->fields.isSameBaseSvt = 1;
      }
      Instance = UserServantEntity__getSvtClassId(v178, 1, 0LL);
      if ( !*p_userSvtEntity )
        goto LABEL_545;
      if ( UserServantEntity__getSvtClassId((UserServantEntity_o *)*p_userSvtEntity, 1, 0LL) == (_DWORD)Instance )
        this->fields.isSameClass = 1;
      Instance = (int64_t)*p_servantEntity;
      if ( !*p_servantEntity )
        goto LABEL_545;
      if ( ServantEntity__get_IsStatusUp((ServantEntity_o *)Instance, 0LL) )
        goto LABEL_199;
      Instance = (int64_t)*p_servantEntity;
      if ( !*p_servantEntity )
        goto LABEL_545;
      if ( ServantEntity__get_IsCombineMaterial((ServantEntity_o *)Instance, 0LL) )
      {
LABEL_199:
        Instance = (int64_t)*p_servantEntity;
        if ( !*p_servantEntity )
          goto LABEL_545;
        if ( ServantEntity__get_IsAllClass((ServantEntity_o *)Instance, 0LL) )
          this->fields.isSameClass = 1;
      }
      this->fields.isBaseLvMax = UserServantEntity__isLevelMax(v373, 0LL);
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_545;
      Instance = (int64_t)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_ServantClassMaster___);
      if ( !*p_servantEntity )
        goto LABEL_545;
      if ( !Instance )
        goto LABEL_545;
      Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                            (*p_servantEntity)->fields.classId,
                            (const MethodInfo_319D99C *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_545;
      HIDWORD(v409) = *(_DWORD *)(Instance + 56);
      SvtClassId = UserServantEntity__getSvtClassId(v373, 0, 0LL);
      SvtClassGroupType = UserServantEntity__getSvtClassGroupType(v373, SvtClassId, 0LL);
      if ( System_Int32__Equals_62608292((int32_t)&v409 + 4, 3, 0LL)
        || System_Int32__Equals_62608292((int32_t)&v409 + 4, SvtClassGroupType, 0LL) && this->fields.isSameClass )
      {
        v186 = BalanceConfig_TypeInfo;
        materialExp = this->fields.materialExp;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v186 = BalanceConfig_TypeInfo;
        }
        SameClassExp = v186->static_fields->SameClassExp;
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        v189 = (double)materialExp * (double)SameClassExp / 1000.0;
        v190 = vcvtpd_s64_f64(v189);
        if ( ceil(v189) == INFINITY )
          v190 = 0x80000000;
        this->fields.materialExp = v190;
      }
    }
    else
    {
      this->fields.isLimitCntTarget = 0;
    }
    Instance = (int64_t)this->fields.userSvtEntity;
    this->fields.isFavorite = v370;
    if ( !Instance )
      goto LABEL_545;
    Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL);
    v191 = this->fields.userSvtEntity;
    this->fields.isLock = Instance & 1;
    if ( !v191 )
      goto LABEL_545;
    Instance = UserServantEntity__IsChoice(v191, 0LL);
    v192 = this->fields.userSvtEntity;
    this->fields.isChoice = Instance & 1;
    if ( !v192 )
      goto LABEL_545;
    this->fields.isEventJoin = UserServantEntity__IsEventJoin(v192, 0LL);
    Instance = (int64_t)this->fields.userSvtEntity;
    this->fields.hpBase = *(_DWORD *)(v362 + 36);
    this->fields.atkBase = *(_DWORD *)(v362 + 44);
    if ( !Instance )
      goto LABEL_545;
    if ( UserServantEntity__IsHeroine((UserServantEntity_o *)Instance, 0LL) )
      this->fields.isHeroineSvt = 1;
    Instance = (int64_t)*p_servantEntity;
    if ( !*p_servantEntity )
      goto LABEL_545;
    if ( ServantEntity__get_IsStatusUp((ServantEntity_o *)Instance, 0LL) )
    {
      Instance = (int64_t)v373;
      *p_isStatusUpSvt = 1;
      if ( !v373 )
        goto LABEL_545;
      v193 = UserServantEntity__getSvtClassId(v373, 0, 0LL);
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_545;
      Instance = (int64_t)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_ServantClassMaster___);
      if ( !*p_servantEntity )
        goto LABEL_545;
      if ( !Instance )
        goto LABEL_545;
      Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                            (*p_servantEntity)->fields.classId,
                            (const MethodInfo_319D99C *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_545;
      LODWORD(v409) = *(_DWORD *)(Instance + 56);
      if ( !*p_servantEntity )
        goto LABEL_545;
      if ( (*p_servantEntity)->fields.classId == v193 || System_Int32__Equals_62608292((int32_t)&v409, 3, 0LL) )
      {
        this->fields.isCanStUp = 1;
        v194 = UserServantEntity__isAdjustAtkMax(v373, 0LL) && this->fields.atkBase > 0;
        this->fields.isAtkUpMax = v194;
        v195 = UserServantEntity__isAdjustHpMax(v373, 0LL) && this->fields.hpBase > 0;
        this->fields.isHpUpMax = v195;
        v196 = UserServantEntity__isSecondAdjustAtkMax(v373, 0LL) && this->fields.atkBase > 0;
        this->fields.isAtkSecondUpMax = v196;
        v197 = UserServantEntity__isSecondAdjustHpMax(v373, 0LL) && this->fields.hpBase > 0;
        this->fields.isHpSecondUpMax = v197;
      }
    }
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_545;
    v198 = DataManager__GetMasterData_object_(
             (DataManager_o *)Instance,
             (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_49B57A5 )
    {
      sub_1B4CF90(&NetworkManager_TypeInfo, v74);
      byte_49B57A5 = 1;
    }
    Instance = (int64_t)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = (int64_t)NetworkManager_TypeInfo;
    }
    v199 = *p_servantEntity;
    if ( !*p_servantEntity )
      goto LABEL_545;
    v201 = *(_QWORD *)&v199->fields.id.fields.currentCryptoKey;
    v200 = *(_QWORD *)&v199->fields.id.fields.fakeValue;
    v202 = *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v417.fields.currentCryptoKey = v201;
    *(_QWORD *)&v417.fields.fakeValue = v200;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(v417, 0LL);
    if ( !v198 )
      goto LABEL_545;
    Instance = UserServantCommandCodeMaster__TryGetEntity(
                 (UserServantCommandCodeMaster_o *)v198,
                 &v410,
                 v202,
                 (int)Instance,
                 0LL);
    v152 = v367;
    if ( (Instance & 1) != 0 )
    {
      Instance = (int64_t)v410;
      if ( !v410 )
        goto LABEL_545;
      this->fields.isEquipedCmdCard = UserServantCommandCodeEntity__IsEquipedCommandCode(v410, 0LL);
      Instance = (int64_t)v410;
      if ( !v410 )
        goto LABEL_545;
      Instance = UserServantCommandCodeEntity__IsCommandCardSlotOpen(v410, 0LL);
      this->fields.isCmdCardSlotOpen = Instance & 1;
    }
  }
  v203 = this->fields.type;
  if ( v203 == 9 )
  {
    v204 = v371;
    v205 = v373;
    if ( !userSvtEntity )
      goto LABEL_545;
    Instance = UserServantEntity__isLimitCountMax(userSvtEntity, 0LL);
    v236 = this->fields.userSvtEntity;
    this->fields.isLimitCntMax = Instance & 1;
    if ( !v236 )
      goto LABEL_545;
    isLevelMax = UserServantEntity__isLevelMax(v236, 0LL);
    Instance = (int64_t)this->fields.userSvtEntity;
    this->fields.isLvMax = isLevelMax;
    this->fields.isParty = v374;
    if ( !Instance )
      goto LABEL_545;
    Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL);
    v238 = this->fields.userSvtEntity;
    this->fields.isLock = Instance & 1;
    if ( !v238 )
      goto LABEL_545;
    Instance = UserServantEntity__IsChoice(v238, 0LL);
    v239 = this->fields.userSvtEntity;
    this->fields.isChoice = Instance & 1;
    if ( !v239 )
      goto LABEL_545;
    Instance = UserServantEntity__IsEventJoin(v239, 0LL);
    v240 = this->fields.userSvtEntity;
    this->fields.isEventJoin = Instance & 1;
    if ( !v240 )
      goto LABEL_545;
    this->fields.isIgnoreCombineLimitSpecial = UserServantEntity__IsIgnoreCombineLimitSpecial(v240, 0LL);
    Instance = CombineServantListViewItem__GetSealCombineLimit(this, v241);
    this->fields.isSealCombineLimit = Instance & 1;
    if ( v373 )
    {
      v242 = (UserServantEntity_o *)*p_userSvtEntity;
      if ( !*p_userSvtEntity )
        goto LABEL_545;
      v243 = *(_OWORD *)&v242->fields.id.fields.fakeValue;
      *(_OWORD *)&v403.fields.currentCryptoKey = *(_OWORD *)&v242->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v403.fields.fakeValue = v243;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v389 = v403;
      v244 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47012096(&v389, 0LL);
      v245 = *(_OWORD *)&v373->fields.id.fields.fakeValue;
      *(_OWORD *)&v388.fields.currentCryptoKey = *(_OWORD *)&v373->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v388.fields.fakeValue = v245;
      if ( v244 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47012096(&v388, 0LL) )
        this->fields.isBaseSvt = 1;
    }
    Instance = (int64_t)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_545;
    if ( !UserServantEntity__IsHeroine((UserServantEntity_o *)Instance, 0LL) )
      goto LABEL_321;
    goto LABEL_320;
  }
  v204 = v371;
  v205 = v373;
  if ( v203 == 2 )
  {
    if ( !userSvtEntity )
      goto LABEL_545;
    v368 = v152;
    this->fields.isLimitCntMax = UserServantEntity__isLimitCountMax(userSvtEntity, 0LL);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    v208 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
    v207 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
    v209 = (ServantLimitImageMaster_o *)Master_object;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v418.fields.currentCryptoKey = v208;
    *(_QWORD *)&v418.fields.fakeValue = v207;
    v210 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(v418, 0LL);
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(
                 userSvtEntity->fields.limitCount,
                 0LL);
    if ( !v209 )
      goto LABEL_545;
    Instance = ServantLimitImageMaster__IsServantLimitCountSeal(v209, v210, Instance, 0LL);
    v211 = this->fields.userSvtEntity;
    v152 = v368;
    this->fields.isSealedLimitCount = Instance & 1;
    if ( !v211 )
      goto LABEL_545;
    v212 = UserServantEntity__isLevelMax(v211, 0LL);
    Instance = (int64_t)this->fields.userSvtEntity;
    this->fields.isLvMax = v212;
    this->fields.isParty = v374;
    if ( !Instance )
      goto LABEL_545;
    Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL);
    v213 = this->fields.userSvtEntity;
    this->fields.isLock = Instance & 1;
    if ( !v213 )
      goto LABEL_545;
    Instance = UserServantEntity__IsChoice(v213, 0LL);
    v214 = this->fields.userSvtEntity;
    this->fields.isChoice = Instance & 1;
    if ( !v214 )
      goto LABEL_545;
    this->fields.isEventJoin = UserServantEntity__IsEventJoin(v214, 0LL);
    Instance = CombineServantListViewItem__GetSealCombineLimit(this, v215);
    this->fields.isSealCombineLimit = Instance & 1;
    if ( v373 )
    {
      v216 = (UserServantEntity_o *)*p_userSvtEntity;
      if ( !*p_userSvtEntity )
        goto LABEL_545;
      v217 = *(_OWORD *)&v216->fields.id.fields.fakeValue;
      *(_OWORD *)&v403.fields.currentCryptoKey = *(_OWORD *)&v216->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v403.fields.fakeValue = v217;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v392 = v403;
      v218 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47012096(&v392, 0LL);
      v219 = *(_OWORD *)&v373->fields.id.fields.fakeValue;
      *(_OWORD *)&v391.fields.currentCryptoKey = *(_OWORD *)&v373->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v391.fields.fakeValue = v219;
      if ( v218 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47012096(&v391, 0LL) )
        this->fields.isBaseSvt = 1;
    }
    Instance = (int64_t)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_545;
    Instance = UserServantEntity__IsHeroine((UserServantEntity_o *)Instance, 0LL);
    if ( (Instance & 1) == 0 )
    {
      if ( !*p_servantEntity )
        goto LABEL_545;
      v220 = (UserServantEntity_o *)*p_userSvtEntity;
      v221 = v372;
      if ( !*p_userSvtEntity )
        goto LABEL_545;
      combineLimitId = (*p_servantEntity)->fields.combineLimitId;
      v224 = *(_QWORD *)&v220->fields.limitCount.fields.currentCryptoKey;
      v223 = *(_QWORD *)&v220->fields.limitCount.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v419.fields.currentCryptoKey = v224;
      *(_QWORD *)&v419.fields.fakeValue = v223;
      v225 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(v419, 0LL);
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_545;
      Instance = (int64_t)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_CombineLimitMaster___);
      if ( !Instance )
        goto LABEL_545;
      Instance = (int64_t)CombineLimitMaster__GetEntity((CombineLimitMaster_o *)Instance, combineLimitId, v225, 0LL);
      if ( !Instance )
        goto LABEL_545;
      v226 = Instance;
      v228 = *(_QWORD *)(Instance + 32);
      v227 = *(_QWORD *)(Instance + 40);
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_545;
      Instance = (int64_t)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_UserItemMaster___);
      if ( !v227 )
        goto LABEL_545;
      v229 = *(_QWORD *)(v227 + 24);
      if ( (int)v229 >= 1 )
      {
        v230 = (UserItemMaster_o *)Instance;
        for ( i = 0LL; (__int64)i < (int)v229; ++i )
        {
          if ( i >= (unsigned int)v229 )
            goto LABEL_552;
          if ( !v228 )
            goto LABEL_545;
          if ( i >= *(unsigned int *)(v228 + 24) )
            goto LABEL_552;
          v232 = (UserServantEntity_o *)*p_userSvtEntity;
          if ( !*p_userSvtEntity )
            goto LABEL_545;
          v233 = *(_OWORD *)&v232->fields.userId.fields.fakeValue;
          v234 = *(_DWORD *)(v227 + 32 + 4 * i);
          v235 = *(_DWORD *)(v228 + 32 + 4 * i);
          *(_OWORD *)&v403.fields.currentCryptoKey = *(_OWORD *)&v232->fields.userId.fields.currentCryptoKey;
          *(_OWORD *)&v403.fields.fakeValue = v233;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v390 = v403;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47012096(&v390, 0LL);
          if ( !v230 )
            goto LABEL_545;
          Instance = UserItemMaster__TryGetEntity(v230, &v408, Instance, v234, 0LL);
          if ( (Instance & 1) == 0 )
            goto LABEL_366;
          if ( !v408 )
            goto LABEL_545;
          if ( v234 == v408->fields.itemId )
          {
            if ( v235 > v408->fields.num )
            {
LABEL_366:
              v221 = v372;
              *p_isLimitUpItemNum = 0;
              break;
            }
            *p_isLimitUpItemNum = 1;
          }
          LODWORD(v229) = *(_DWORD *)(v227 + 24);
          v221 = v372;
        }
      }
      v264 = *(_DWORD *)(v221 + 96);
      v204 = v371;
      v205 = v373;
      v152 = v368;
      if ( v264 < *(_DWORD *)(v226 + 24) )
        *p_isLimitUpItemNum = 0;
      goto LABEL_321;
    }
LABEL_320:
    this->fields.isHeroineSvt = 1;
LABEL_321:
    v203 = this->fields.type;
  }
  if ( v203 <= 0xC && ((1 << v203) & 0x1808) != 0 )
  {
    Instance = (int64_t)this->fields.userSvtEntity;
    this->fields.isParty = v374;
    if ( !Instance )
      goto LABEL_545;
    Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL);
    v246 = this->fields.userSvtEntity;
    this->fields.isLock = Instance & 1;
    if ( !v246 )
      goto LABEL_545;
    Instance = UserServantEntity__IsChoice(v246, 0LL);
    v247 = this->fields.userSvtEntity;
    this->fields.isChoice = Instance & 1;
    if ( !v247 )
      goto LABEL_545;
    Instance = UserServantEntity__IsEventJoin(v247, 0LL);
    this->fields.isEventJoin = Instance & 1;
    if ( v205 )
    {
      v248 = (UserServantEntity_o *)*p_userSvtEntity;
      if ( !*p_userSvtEntity )
        goto LABEL_545;
      v249 = *(_OWORD *)&v248->fields.id.fields.fakeValue;
      *(_OWORD *)&v403.fields.currentCryptoKey = *(_OWORD *)&v248->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v403.fields.fakeValue = v249;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v387 = v403;
      v250 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47012096(&v387, 0LL);
      v251 = *(_OWORD *)&v205->fields.id.fields.fakeValue;
      *(_OWORD *)&v386.fields.currentCryptoKey = *(_OWORD *)&v205->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v386.fields.fakeValue = v251;
      if ( v250 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47012096(&v386, 0LL) )
        this->fields.isBaseSvt = 1;
    }
    Instance = (int64_t)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_545;
    if ( UserServantEntity__IsHeroine((UserServantEntity_o *)Instance, 0LL) )
      this->fields.isHeroineSvt = 1;
    v203 = this->fields.type;
    if ( v203 == 3 )
    {
      CombineServantListViewItem__SetSkillInfo(this, v74);
      v203 = this->fields.type;
    }
    if ( v203 - 11 <= 1 )
    {
      CombineServantListViewItem__SetAppendSkillInfo(this, v74);
      v203 = this->fields.type;
    }
  }
  if ( v203 == 4 )
  {
    Instance = (int64_t)this->fields.userSvtEntity;
    this->fields.isParty = v374;
    if ( !Instance )
      goto LABEL_545;
    Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL);
    v252 = this->fields.userSvtEntity;
    this->fields.isLock = Instance & 1;
    if ( !v252 )
      goto LABEL_545;
    Instance = UserServantEntity__IsChoice(v252, 0LL);
    v253 = this->fields.userSvtEntity;
    this->fields.isChoice = Instance & 1;
    if ( !v253 )
      goto LABEL_545;
    Instance = UserServantEntity__IsEventJoin(v253, 0LL);
    this->fields.isEventJoin = Instance & 1;
    if ( v205 )
    {
      v254 = (UserServantEntity_o *)*p_userSvtEntity;
      if ( !*p_userSvtEntity )
        goto LABEL_545;
      v255 = *(_OWORD *)&v254->fields.id.fields.fakeValue;
      *(_OWORD *)&v403.fields.currentCryptoKey = *(_OWORD *)&v254->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v403.fields.fakeValue = v255;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v385 = v403;
      v256 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47012096(&v385, 0LL);
      v257 = *(_OWORD *)&v205->fields.id.fields.fakeValue;
      *(_OWORD *)&v384.fields.currentCryptoKey = *(_OWORD *)&v205->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v384.fields.fakeValue = v257;
      if ( v256 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47012096(&v384, 0LL) )
        this->fields.isBaseSvt = 1;
    }
    Instance = (int64_t)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_545;
    if ( UserServantEntity__IsHeroine((UserServantEntity_o *)Instance, 0LL) )
    {
      this->fields.isHeroineSvt = 1;
    }
    else
    {
      Instance = (int64_t)*p_userSvtEntity;
      if ( !*p_userSvtEntity )
        goto LABEL_545;
      Instance = UserServantEntity__getTreasureDeviceInfo((UserServantEntity_o *)Instance, &tdInfo, -1, -1, 0, 0LL);
      this->fields.isTdLvMax = 1;
      if ( !tdInfo )
        goto LABEL_545;
      id = tdInfo->fields.id;
      if ( id >= 1 )
      {
        lv = tdInfo->fields.lv;
        Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_545;
        Instance = (int64_t)DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
        if ( !Instance )
          goto LABEL_545;
        Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                              id,
                              (const MethodInfo_319D99C *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_545;
        if ( lv < *(_DWORD *)(Instance + 48) )
          this->fields.isTdLvMax = 0;
      }
      Instance = (int64_t)MasterData_object;
      if ( !MasterData_object )
        goto LABEL_545;
      SameSvtNpLvCache = UserServantMaster__getSameSvtNpLvCache(
                           MasterData_object,
                           (UserServantEntity_o *)*p_userSvtEntity,
                           &cachedUserServantNpLvDict,
                           0LL);
      if ( SameSvtNpLvCache >= 1 && !this->fields.isTdLvMax )
      {
        v262 = SameSvtNpLvCache;
        CombineServantListViewItem__GetNpInfo(this, &tdLv[1], tdLv, &tdMaxLv, v261);
        if ( v360 <= 1200000 )
        {
          Instance = (int64_t)*p_userSvtEntity;
          if ( !*p_userSvtEntity )
            goto LABEL_545;
          v265 = UserServantEntity__checkTreasureDeviceLevelUp((UserServantEntity_o *)Instance, v262, 0LL);
          v266 = tdLv[0];
          if ( tdLv[0] >= v265 )
          {
            v269 = 0;
          }
          else
          {
            v267 = tdLv[1];
            v268 = v265;
            v269 = 0;
            do
            {
              Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !Instance )
                goto LABEL_545;
              Instance = (int64_t)DataManager__GetMasterData_object_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
              if ( !Instance )
                goto LABEL_545;
              Instance = (int64_t)TreasureDvcLvMaster__GetEntity((TreasureDvcLvMaster_o *)Instance, v267, v266, 0LL);
              if ( Instance )
                v269 += *(_DWORD *)(Instance + 92);
              ++v266;
            }
            while ( v268 != v266 );
            if ( !this )
              goto LABEL_545;
          }
          v263 = v360 >= v269;
        }
        else
        {
          v263 = 1;
        }
        this->fields.isSameSvt = v263;
      }
    }
    v203 = this->fields.type;
  }
  if ( v203 == 5 )
  {
    this->fields.isMaterialSvt = v152;
    this->fields.isParty = v374;
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_545;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_UserServantLeaderMaster___);
    if ( !Instance )
      goto LABEL_545;
    Instance = *(_QWORD *)(Instance + 40);
    if ( !Instance )
      goto LABEL_545;
    v271 = System_Collections_ObjectModel_Collection_object___GetEnumerator(
             (System_Collections_ObjectModel_Collection_T__o *)Instance,
             (const MethodInfo_313B4BC *)Method_System_Collections_ObjectModel_Collection_UserServantLeaderEntity__GetEnumerator__);
    if ( !v271 )
      sub_1B4D1EC(0LL, v270);
    while ( 1 )
    {
      v272 = v271->klass;
      v273 = *(unsigned __int16 *)(&v271->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v271->klass->_2.bitflags2 + 3) )
      {
        v274 = &v272->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)v274 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v273;
          v274 += 4;
          if ( !v273 )
            goto LABEL_392;
        }
        v275 = (__int64)&v272->vtable[*v274].method;
      }
      else
      {
LABEL_392:
        v275 = sub_1B9D724(v271, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v275)(
              v271,
              *(_QWORD *)(v275 + 8)) & 1) == 0 )
        break;
      v276 = v271->klass;
      v277 = *(unsigned __int16 *)(&v271->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v271->klass->_2.bitflags2 + 3) )
      {
        v278 = &v276->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerator_UserServantLeaderEntity__c **)v278 - 1) != System_Collections_Generic_IEnumerator_UserServantLeaderEntity__TypeInfo )
        {
          --v277;
          v278 += 4;
          if ( !v277 )
            goto LABEL_399;
        }
        v279 = (__int64)&v276->vtable[*v278].method;
      }
      else
      {
LABEL_399:
        v279 = sub_1B9D724(v271, System_Collections_Generic_IEnumerator_UserServantLeaderEntity__TypeInfo, 0LL);
      }
      v280 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v279)(
               v271,
               *(_QWORD *)(v279 + 8));
      if ( !v280 )
        sub_1B4D1EC(0LL, v281);
      v282 = (UserServantEntity_o *)*p_userSvtEntity;
      if ( !*p_userSvtEntity )
        sub_1B4D1EC(v280, v281);
      v283 = *(_OWORD *)&v282->fields.id.fields.fakeValue;
      v284 = *(_QWORD *)(v280 + 56);
      *(_OWORD *)&v403.fields.currentCryptoKey = *(_OWORD *)&v282->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v403.fields.fakeValue = v283;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v383 = v403;
      if ( v284 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47012096(&v383, 0LL) )
      {
        this->fields.isUseSupport = 1;
        break;
      }
    }
    v285 = v271->klass;
    v286 = *(unsigned __int16 *)(&v271->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v271->klass->_2.bitflags2 + 3) )
    {
      v287 = &v285->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v287 - 1) != System_IDisposable_TypeInfo )
      {
        --v286;
        v287 += 4;
        if ( !v286 )
          goto LABEL_411;
      }
      v288 = (__int64)&v285->vtable[*v287].method;
    }
    else
    {
LABEL_411:
      v288 = sub_1B9D724(v271, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v288)(v271, *(_QWORD *)(v288 + 8));
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Instance = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_UserRecommendSupportMaster___);
    v289 = (UserServantEntity_o *)*p_userSvtEntity;
    v204 = v371;
    v205 = v373;
    if ( !*p_userSvtEntity )
      goto LABEL_545;
    v290 = *(_OWORD *)&v289->fields.id.fields.fakeValue;
    v291 = (UserRecommendSupportMaster_o *)Instance;
    *(_OWORD *)&v403.fields.currentCryptoKey = *(_OWORD *)&v289->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v403.fields.fakeValue = v290;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v382 = v403;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47012096(&v382, 0LL);
    if ( !v291 )
      goto LABEL_545;
    IsSettingServant = UserRecommendSupportMaster__IsSettingServant(v291, Instance, 0, 0LL);
    Instance = (int64_t)this->fields.userSvtEntity;
    this->fields.isUseRecommendSupport = IsSettingServant;
    this->fields.isFavorite = v370;
    if ( !Instance )
      goto LABEL_545;
    Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL);
    v293 = this->fields.userSvtEntity;
    this->fields.isLock = Instance & 1;
    if ( !v293 )
      goto LABEL_545;
    Instance = UserServantEntity__IsChoice(v293, 0LL);
    v294 = this->fields.userSvtEntity;
    this->fields.isChoice = Instance & 1;
    if ( !v294 )
      goto LABEL_545;
    Instance = UserServantEntity__IsEventJoin(v294, 0LL);
    this->fields.isEventJoin = Instance & 1;
    if ( v373 )
      v295 = 0LL;
    else
      v295 = this;
    if ( v373 )
      v296 = this;
    else
      v296 = 0LL;
    if ( v373 )
    {
      Instance = UserServantEntity__IsEventJoin(v373, 0LL);
      if ( !v296 )
        goto LABEL_545;
      v296->fields.isEventJoinBaseSvt = Instance & 1;
      Instance = (int64_t)*p_userSvtEntity;
      if ( !*p_userSvtEntity )
        goto LABEL_545;
      Instance = UserServantEntity__IsMaterialTd((UserServantEntity_o *)Instance, 0LL);
      v297 = this->fields.userSvtEntity;
      this->fields.isMaterialTdSvt = Instance & 1;
      if ( !v297 )
        goto LABEL_545;
      v298 = *(_OWORD *)&v297->fields.id.fields.fakeValue;
      *(_OWORD *)&v403.fields.currentCryptoKey = *(_OWORD *)&v297->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v403.fields.fakeValue = v298;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v381 = v403;
      v299 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47012096(&v381, 0LL);
      v300 = *(_OWORD *)&v373->fields.id.fields.fakeValue;
      *(_OWORD *)&v380.fields.currentCryptoKey = *(_OWORD *)&v373->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v380.fields.fakeValue = v300;
      if ( v299 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47012096(&v380, 0LL) )
        this->fields.isBaseSvt = 1;
    }
    else
    {
      if ( !v295 )
        goto LABEL_545;
      v295->fields.isEventJoinBaseSvt = 0;
      Instance = (int64_t)*p_userSvtEntity;
      if ( !*p_userSvtEntity )
        goto LABEL_545;
      this->fields.isMaterialTdSvt = UserServantEntity__IsMaterialTd((UserServantEntity_o *)Instance, 0LL);
    }
  }
  v301 = this->fields.type;
  if ( v301 == 6 )
  {
    Instance = (int64_t)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_545;
    Instance = UserServantEntity__isExceedLvMax((UserServantEntity_o *)Instance, 0LL);
    v302 = this->fields.userSvtEntity;
    this->fields.isLvExceedMax = Instance & 1;
    if ( !v302 )
      goto LABEL_545;
    Instance = UserServantEntity__isLimitCountMax(v302, 0LL);
    v303 = this->fields.userSvtEntity;
    this->fields.isLimitCntMax = Instance & 1;
    if ( !v303 )
      goto LABEL_545;
    v304 = UserServantEntity__isLevelMax(v303, 0LL);
    Instance = (int64_t)this->fields.userSvtEntity;
    this->fields.isLvMax = v304;
    this->fields.isParty = v374;
    if ( !Instance )
      goto LABEL_545;
    Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL);
    v305 = this->fields.userSvtEntity;
    this->fields.isLock = Instance & 1;
    if ( !v305 )
      goto LABEL_545;
    Instance = UserServantEntity__IsChoice(v305, 0LL);
    v306 = this->fields.userSvtEntity;
    this->fields.isChoice = Instance & 1;
    if ( !v306 )
      goto LABEL_545;
    Instance = UserServantEntity__IsEventJoin(v306, 0LL);
    this->fields.isEventJoin = Instance & 1;
    if ( v205 )
    {
      v307 = (UserServantEntity_o *)*p_userSvtEntity;
      if ( !*p_userSvtEntity )
        goto LABEL_545;
      v308 = *(_OWORD *)&v307->fields.id.fields.fakeValue;
      *(_OWORD *)&v403.fields.currentCryptoKey = *(_OWORD *)&v307->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v403.fields.fakeValue = v308;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v379 = v403;
      v309 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47012096(&v379, 0LL);
      v310 = *(_OWORD *)&v205->fields.id.fields.fakeValue;
      *(_OWORD *)&v378.fields.currentCryptoKey = *(_OWORD *)&v205->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v378.fields.fakeValue = v310;
      if ( v309 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47012096(&v378, 0LL) )
        this->fields.isBaseSvt = 1;
    }
    Instance = (int64_t)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_545;
    if ( UserServantEntity__IsHeroine((UserServantEntity_o *)Instance, 0LL) )
    {
      this->fields.isHeroineSvt = 1;
    }
    else
    {
      Instance = (int64_t)*p_userSvtEntity;
      if ( !*p_userSvtEntity )
        goto LABEL_545;
      SvtExceedEnt = UserServantEntity__getSvtExceedEnt((UserServantEntity_o *)Instance, 0LL);
      if ( SvtExceedEnt )
      {
        v312 = (int32_t *)SvtExceedEnt;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Instance = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_CommonConsumeMaster___);
        if ( !Instance )
          goto LABEL_545;
        IdEntityList = CommonConsumeMaster__GetIdEntityList((CommonConsumeMaster_o *)Instance, v312[12], 0LL);
        if ( IdEntityList )
        {
          v314 = IdEntityList;
          v315 = (System_Collections_Generic_HashSet_int__o *)sub_1B4D1DC(System_Collections_Generic_HashSet_int__TypeInfo);
          System_Collections_Generic_HashSet_int____ctor(
            v315,
            (const MethodInfo_343E3DC *)Method_System_Collections_Generic_HashSet_int___ctor__);
          v316 = (System_Collections_Generic_HashSet_int__o *)sub_1B4D1DC(System_Collections_Generic_HashSet_int__TypeInfo);
          System_Collections_Generic_HashSet_int____ctor(
            v316,
            (const MethodInfo_343E3DC *)Method_System_Collections_Generic_HashSet_int___ctor__);
          v317 = v314->max_length;
          if ( v317 >= 1 )
          {
            v318 = 0LL;
            while ( (unsigned int)v318 < v317 )
            {
              v319 = v314->m_Items[v318];
              if ( !v319 )
                goto LABEL_545;
              if ( !v315 )
                goto LABEL_545;
              Instance = System_Collections_Generic_HashSet_int___Add(
                           v315,
                           v319->fields.objectId,
                           (const MethodInfo_343F5E0 *)Method_System_Collections_Generic_HashSet_int__Add__);
              if ( !v316 )
                goto LABEL_545;
              Instance = System_Collections_Generic_HashSet_int___Add(
                           v316,
                           v319->fields.num,
                           (const MethodInfo_343F5E0 *)Method_System_Collections_Generic_HashSet_int__Add__);
              v317 = v314->max_length;
              if ( (int)++v318 >= v317 )
                goto LABEL_468;
            }
LABEL_552:
            sub_1B4D1F4(Instance, v74);
          }
LABEL_468:
          v204 = v371;
          v205 = v373;
          if ( v312[13] >= 1 )
          {
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            Instance = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_SvtCoinMaster___);
            v320 = (UserServantEntity_o *)*p_userSvtEntity;
            if ( !*p_userSvtEntity )
              goto LABEL_545;
            v321 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
            v323 = *(_QWORD *)&v320->fields.svtId.fields.currentCryptoKey;
            v322 = *(_QWORD *)&v320->fields.svtId.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v420.fields.currentCryptoKey = v323;
            *(_QWORD *)&v420.fields.fakeValue = v322;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(v420, 0LL);
            if ( !v321 )
              goto LABEL_545;
            Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                  v321,
                                  Instance,
                                  (const MethodInfo_319D99C *)Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__GetEntity__);
            if ( !Instance )
              goto LABEL_545;
            if ( !v315 )
              goto LABEL_545;
            Instance = System_Collections_Generic_HashSet_int___Add(
                         v315,
                         *(_DWORD *)(Instance + 24),
                         (const MethodInfo_343F5E0 *)Method_System_Collections_Generic_HashSet_int__Add__);
            if ( !v316 )
              goto LABEL_545;
            System_Collections_Generic_HashSet_int___Add(
              v316,
              v312[13],
              (const MethodInfo_343F5E0 *)Method_System_Collections_Generic_HashSet_int__Add__);
          }
          v324 = this->fields.userSvtEntity;
          v325 = System_Linq_Enumerable__ToArray_int_(
                   (System_Collections_Generic_IEnumerable_TSource__o *)v315,
                   (const MethodInfo_2F3C24C *)Method_System_Linq_Enumerable_ToArray_int___);
          v326 = System_Linq_Enumerable__ToArray_int_(
                   (System_Collections_Generic_IEnumerable_TSource__o *)v316,
                   (const MethodInfo_2F3C24C *)Method_System_Linq_Enumerable_ToArray_int___);
          this->fields.isLvExceedItemNum = CombineUtility__CheckCombineNeedItemsEnough(
                                             v324,
                                             v325,
                                             v326,
                                             *(_DWORD *)(v372 + 96),
                                             v312[8],
                                             0LL);
        }
      }
    }
    v301 = this->fields.type;
  }
  if ( v301 != 8 )
    goto LABEL_529;
  Instance = (int64_t)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_545;
  this->fields.isFriendshipExceedMax = UserServantEntity__isExceedFriendshipMax((UserServantEntity_o *)Instance, 0LL);
  v327 = *(_QWORD *)(v365 + 100);
  v328 = *(_QWORD *)(v365 + 108);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v421.fields.currentCryptoKey = v327;
  *(_QWORD *)&v421.fields.fakeValue = v328;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(v421, 0LL);
  if ( !*p_servantEntity )
    goto LABEL_545;
  v329 = this->fields.userSvtEntity;
  this->fields.isFriendshipRankMax = (_DWORD)Instance == *(_DWORD *)(v365 + 116)
                                                       + (*p_servantEntity)->fields.maxFriendshipRank;
  this->fields.isParty = v374;
  if ( !v329 )
    goto LABEL_545;
  Instance = UserServantEntity__IsLock(v329, 0LL);
  v330 = this->fields.userSvtEntity;
  this->fields.isLock = Instance & 1;
  if ( !v330 )
    goto LABEL_545;
  Instance = UserServantEntity__IsChoice(v330, 0LL);
  v331 = this->fields.userSvtEntity;
  this->fields.isChoice = Instance & 1;
  if ( !v331 )
    goto LABEL_545;
  Instance = UserServantEntity__IsEventJoin(v331, 0LL);
  this->fields.isEventJoin = Instance & 1;
  if ( v205 )
  {
    v332 = (UserServantEntity_o *)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_545;
    v333 = *(_OWORD *)&v332->fields.id.fields.fakeValue;
    *(_OWORD *)&v403.fields.currentCryptoKey = *(_OWORD *)&v332->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v403.fields.fakeValue = v333;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v377 = v403;
    v334 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47012096(&v377, 0LL);
    v335 = *(_OWORD *)&v205->fields.id.fields.fakeValue;
    *(_OWORD *)&v376.fields.currentCryptoKey = *(_OWORD *)&v205->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v376.fields.fakeValue = v335;
    if ( v334 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47012096(&v376, 0LL) )
      this->fields.isBaseSvt = 1;
  }
  Instance = (int64_t)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
LABEL_545:
    sub_1B4D1EC(Instance, v74);
  Instance = UserServantEntity__IsHeroine((UserServantEntity_o *)Instance, 0LL);
  if ( (Instance & 1) != 0 )
  {
    this->fields.isHeroineSvt = 1;
    goto LABEL_529;
  }
  if ( !this->fields.isFriendshipRankMax || this->fields.isFriendshipExceedMax )
    goto LABEL_529;
  if ( !*p_servantEntity )
    goto LABEL_545;
  maxFriendshipRank = (*p_servantEntity)->fields.maxFriendshipRank;
  v337 = *(_DWORD *)(v365 + 116);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_545;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_FriendshipMaster___);
  if ( !*p_servantEntity )
    goto LABEL_545;
  if ( !Instance )
    goto LABEL_545;
  Instance = (int64_t)FriendshipMaster__GetEntity(
                        (FriendshipMaster_o *)Instance,
                        (*p_servantEntity)->fields.friendshipId,
                        maxFriendshipRank + v337 + 1,
                        0LL);
  if ( !Instance )
    goto LABEL_545;
  v338 = Instance;
  v340 = *(_QWORD *)(Instance + 32);
  v339 = *(_QWORD *)(Instance + 40);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_545;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !v339 )
    goto LABEL_545;
  if ( *(int *)(v339 + 24) >= 1 )
  {
    v341 = (UserItemMaster_o *)Instance;
    v342 = 0LL;
    v343 = v339 + 32;
    while ( 1 )
    {
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_49B57A5 )
      {
        sub_1B4CF90(&NetworkManager_TypeInfo, v74);
        byte_49B57A5 = 1;
      }
      Instance = (int64_t)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = (int64_t)NetworkManager_TypeInfo;
      }
      if ( v342 >= *(unsigned int *)(v339 + 24) )
        goto LABEL_552;
      if ( !v341 )
        goto LABEL_545;
      Instance = UserItemMaster__TryGetEntity(
                   v341,
                   &v404,
                   *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL),
                   *(_DWORD *)(v343 + 4 * v342),
                   0LL);
      if ( (Instance & 1) == 0 )
        break;
      if ( v342 >= *(unsigned int *)(v339 + 24) )
        goto LABEL_552;
      if ( !v404 )
        goto LABEL_545;
      if ( *(_DWORD *)(v343 + 4 * v342) == v404->fields.itemId )
      {
        if ( !v340 )
          goto LABEL_545;
        if ( v342 >= *(unsigned int *)(v340 + 24) )
          goto LABEL_552;
        v344 = *(_DWORD *)(v340 + 32 + 4 * v342) <= v404->fields.num;
        goto LABEL_525;
      }
LABEL_526:
      if ( (__int64)++v342 >= *(int *)(v339 + 24) )
        goto LABEL_527;
    }
    v344 = 0;
LABEL_525:
    this->fields.isFriendshipExceedItemNum = v344;
    goto LABEL_526;
  }
LABEL_527:
  v204 = v371;
  if ( *(_DWORD *)(v372 + 96) < *(_DWORD *)(v338 + 28) )
    this->fields.isFriendshipExceedItemNum = 0;
LABEL_529:
  Instance = (int64_t)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_545;
  Instance = UserServantEntity__getDispLimitCount((UserServantEntity_o *)Instance, 0, 0LL);
  v345 = this->fields.userSvtEntity;
  this->fields.dispLimitCount = Instance;
  if ( !v345 )
    goto LABEL_545;
  SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v345, -1, 0LL);
  this->fields.skillCategoryIdList = SkillCategoryIdList;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.skillCategoryIdList, (int32_t)SkillCategoryIdList, v347, v348);
  Instance = (int64_t)this->fields.userSvtEntity;
  if ( !Instance )
    goto LABEL_545;
  TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                   (UserServantEntity_o *)Instance,
                                   0,
                                   0LL);
  this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
  sub_1B4CF34(
    (CGThumbnailListItem_o *)&this->fields.tdCategoryIdList,
    (int32_t)TreasureDeviceCategoryIdList,
    v350,
    v351);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_545;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Instance )
    goto LABEL_545;
  Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                        this->fields.classId,
                        (const MethodInfo_319D99C *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_545;
  v352 = *(int *)(Instance + 52);
  v353 = this->fields.servantEntity;
  this->fields.priority = v352;
  this->fields.sortValue1B = v352;
  if ( !v353 )
    goto LABEL_545;
  v354 = (UserServantEntity_o *)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_545;
  v355 = ((__int64)v353->fields.collectionNo << 16) | ((unsigned __int64)(unsigned int)this->fields.rarity << 48) | v354->fields.lv;
  v356 = v204 == 2 && !this->fields.isLimitCntMax;
  this->fields.sortValue2 = v355 | v356;
  v358 = *(_QWORD *)&v354->fields.svtId.fields.currentCryptoKey;
  v357 = *(_QWORD *)&v354->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v422.fields.currentCryptoKey = v358;
  *(_QWORD *)&v422.fields.fakeValue = v357;
  v359 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(v422, 0LL);
  Instance = (int64_t)this->fields.iconLabelInfo1;
  this->fields.sortValue2B = v359;
  this->fields.amountSortValue = -1LL;
  if ( !Instance )
    goto LABEL_545;
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0LL);
  Instance = (int64_t)*p_iconLabelInfo2;
  if ( !*p_iconLabelInfo2 )
    goto LABEL_545;
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0LL);
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

  if ( (byte_49BEC09 & 1) == 0 )
  {
    sub_1B4CF90(&SvtUseSkillData_TypeInfo, method);
    byte_49BEC09 = 1;
  }
  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
    return UserServantEntity__getAppendSkillInfo(userSvtEntity, 0LL);
  v5 = (SvtUseSkillData_o *)sub_1B4D1DC(SvtUseSkillData_TypeInfo);
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
      sub_1B4D1EC(TreasureDeviceInfo, v10);
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

  if ( (byte_49BEC0A & 1) == 0 )
  {
    sub_1B4CF90(&CondType_TypeInfo, method);
    sub_1B4CF90(&Method_DataManager_GetMaster_CombineLimitReleaseMaster___, v3);
    sub_1B4CF90(&DataManager_TypeInfo, v4);
    byte_49BEC0A = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_CombineLimitReleaseMaster___);
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
    sub_1B4D1EC(Master_object, v6);
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

  if ( (byte_49BEC08 & 1) == 0 )
  {
    sub_1B4CF90(&BalanceConfig_TypeInfo, skillInfoList);
    sub_1B4CF90(&SkillInfo___TypeInfo, v5);
    byte_49BEC08 = 1;
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
    v8 = (SkillInfo_array *)sub_1B4D038(SkillInfo___TypeInfo, (unsigned int)v7->static_fields->SvtSkillListMax);
    *skillInfoList = v8;
    sub_1B4CF34((CGThumbnailListItem_o *)skillInfoList, (int32_t)v8, v9, v10);
  }
  return userSvtEntity != 0LL;
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
  __int64 v19; // x1
  _BOOL4 isChoice; // w8
  FilterKindList_c *v21; // x0
  ListViewSort_FilterKind_array *v22; // x21
  UserServantEntity_o *v24; // x0
  int32_t dispLimitCount; // w21
  UserServantEntity_o *v26; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  _BOOL4 IsUnSelectedAllTargetFilters; // w21
  _BOOL4 v34; // w23
  _BOOL4 IsMatchEffectCategory; // w22
  _BOOL4 v36; // w0

  if ( (byte_49BEBF8 & 1) == 0 )
  {
    sub_1B4CF90(&FilterKindList_TypeInfo, sort);
    sub_1B4CF90(&ListViewSort_FilterKind___TypeInfo, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v6);
    sub_1B4CF90(&ServantEventBonusFilterController_TypeInfo, v7);
    byte_49BEBF8 = 1;
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
                                        (const MethodInfo_356749C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                             (const MethodInfo_356749C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                           (const MethodInfo_356749C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                           (const MethodInfo_356749C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                           (const MethodInfo_356749C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
    v24 = this->fields.userSvtEntity;
    if ( v24 )
    {
      dispLimitCount = this->fields.dispLimitCount;
      if ( dispLimitCount != UserServantEntity__getDispLimitCount(v24, 0, 0LL) )
      {
        ClassGroupFilterKindList = (__int64)this->fields.userSvtEntity;
        if ( !ClassGroupFilterKindList )
          goto LABEL_69;
        ClassGroupFilterKindList = UserServantEntity__getDispLimitCount(
                                     (UserServantEntity_o *)ClassGroupFilterKindList,
                                     0,
                                     0LL);
        v26 = this->fields.userSvtEntity;
        this->fields.dispLimitCount = ClassGroupFilterKindList;
        if ( !v26 )
          goto LABEL_69;
        SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v26, -1, 0LL);
        this->fields.skillCategoryIdList = SkillCategoryIdList;
        sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.skillCategoryIdList, (int32_t)SkillCategoryIdList, v28, v29);
        ClassGroupFilterKindList = (__int64)this->fields.userSvtEntity;
        if ( !ClassGroupFilterKindList )
          goto LABEL_69;
        TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                         (UserServantEntity_o *)ClassGroupFilterKindList,
                                         0,
                                         0LL);
        this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
        sub_1B4CF34(
          (CGThumbnailListItem_o *)&this->fields.tdCategoryIdList,
          (int32_t)TreasureDeviceCategoryIdList,
          v31,
          v32);
      }
    }
    ClassGroupFilterKindList = sub_1B4D038(ListViewSort_FilterKind___TypeInfo, 1LL);
    if ( !ClassGroupFilterKindList )
      goto LABEL_69;
    v19 = ClassGroupFilterKindList;
    if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
      goto LABEL_70;
    *(_DWORD *)(ClassGroupFilterKindList + 32) = 50;
    IsUnSelectedAllTargetFilters = ListViewSort__IsUnSelectedAllTargetFilters(
                                     sort,
                                     (ListViewSort_FilterKind_array *)ClassGroupFilterKindList,
                                     0LL);
    ClassGroupFilterKindList = sub_1B4D038(ListViewSort_FilterKind___TypeInfo, 1LL);
    if ( !ClassGroupFilterKindList )
      goto LABEL_69;
    v19 = ClassGroupFilterKindList;
    if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
LABEL_70:
      sub_1B4D1F4(ClassGroupFilterKindList, v19);
    *(_DWORD *)(ClassGroupFilterKindList + 32) = 51;
    v34 = ListViewSort__IsUnSelectedAllTargetFilters(
            sort,
            (ListViewSort_FilterKind_array *)ClassGroupFilterKindList,
            0LL);
    IsMatchEffectCategory = ServantEquipEffectFilterController__IsMatchEffectCategory(
                              this->fields.tdCategoryIdList,
                              sort,
                              0LL);
    v36 = ServantEquipEffectFilterController__IsMatchEffectCategory(this->fields.skillCategoryIdList, sort, 0LL);
    if ( ((IsUnSelectedAllTargetFilters ^ v34) & 1) != 0 )
    {
      if ( IsUnSelectedAllTargetFilters )
      {
        if ( !v36 )
          return 0;
      }
      else if ( !IsMatchEffectCategory )
      {
        return 0;
      }
    }
    else if ( !IsMatchEffectCategory && !v36 )
    {
      return 0;
    }
  }
  if ( !ListViewSort__IsMatchServantAttriFilter(sort, this->fields.userSvtEntity, this->fields.servantEntity, 0LL)
    || !ListViewSort__IsMatchServantSubAttriFilter(sort, this->fields.userSvtEntity, this->fields.servantEntity, 0LL) )
  {
    return 0;
  }
  ClassGroupFilterKindList = sub_1B4D038(ListViewSort_FilterKind___TypeInfo, 1LL);
  if ( !ClassGroupFilterKindList )
LABEL_69:
    sub_1B4D1EC(ClassGroupFilterKindList, sort);
  v19 = ClassGroupFilterKindList;
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
  v21 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v21 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v21->static_fields->RarityFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_69;
  v22 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_356749C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v22, 0LL)
      || ListViewSort__IsSelectedAllTargetFilters(sort, v22, 0LL)
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
  CombineServantListViewItem_o *v13; // x1
  FilterKindList_c *v14; // x0
  ListViewSort_FilterKind_array *v15; // x0
  FilterKindList_c *v16; // x0
  ListViewSort_FilterKind_array *v17; // x0
  FilterKindList_c *v18; // x0
  ListViewSort_FilterKind_array *v19; // x0
  UserServantEntity_o *userSvtEntity; // x21
  _BOOL4 isChoice; // w21
  UserServantEntity_o *v22; // x0
  int32_t dispLimitCount; // w21
  UserServantEntity_o *v24; // x8
  System_Int32_array *SkillCategoryIdList; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  System_Int32_array *TreasureDeviceCategoryIdList; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  _BOOL4 IsUnSelectedAllTargetFilters; // w21
  _BOOL4 v32; // w23
  _BOOL4 IsMatchEffectCategory; // w22
  _BOOL4 v34; // w0
  bool v35; // w0
  FilterKindList_c *v37; // x0
  ListViewSort_FilterKind_array *v38; // x21

  v4 = this;
  if ( (byte_49BEBF9 & 1) == 0 )
  {
    sub_1B4CF90(&FilterKindList_TypeInfo, sort);
    sub_1B4CF90(&ListViewSort_FilterKind___TypeInfo, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v6);
    this = (CombineServantListViewItem_o *)sub_1B4CF90(&ServantEventBonusFilterController_TypeInfo, v7);
    byte_49BEBF9 = 1;
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
                                           (const MethodInfo_356749C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                             (const MethodInfo_356749C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, v12, 0LL) )
    {
      this = (CombineServantListViewItem_o *)sub_1B4D038(ListViewSort_FilterKind___TypeInfo, 1LL);
      if ( !this )
        goto LABEL_86;
      v13 = this;
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
  v14 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v14 = FilterKindList_TypeInfo;
  }
  this = (CombineServantListViewItem_o *)v14->static_fields->NpTypeFilterKindList;
  if ( !this )
    goto LABEL_86;
  v15 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)this,
                                           (const MethodInfo_356749C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v15, 0LL)
    && !ListViewSort__IsMatchNPTypeFilter(sort, v4->fields.userSvtEntity, 0LL) )
  {
    return 0;
  }
  v16 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v16 = FilterKindList_TypeInfo;
  }
  this = (CombineServantListViewItem_o *)v16->static_fields->NpEffectFilterKindList;
  if ( !this )
    goto LABEL_86;
  v17 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)this,
                                           (const MethodInfo_356749C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v17, 0LL)
    && !ListViewSort__IsMatchNPEffectFilter(sort, v4->fields.userSvtEntity, 0LL) )
  {
    return 0;
  }
  v18 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v18 = FilterKindList_TypeInfo;
  }
  this = (CombineServantListViewItem_o *)v18->static_fields->ServantTypeFilterKindList;
  if ( !this )
    goto LABEL_86;
  v19 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)this,
                                           (const MethodInfo_356749C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v19, 0LL)
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
  v22 = v4->fields.userSvtEntity;
  if ( v22 )
  {
    dispLimitCount = v4->fields.dispLimitCount;
    if ( dispLimitCount != UserServantEntity__getDispLimitCount(v22, 0, 0LL) )
    {
      this = (CombineServantListViewItem_o *)v4->fields.userSvtEntity;
      if ( !this )
        goto LABEL_86;
      this = (CombineServantListViewItem_o *)UserServantEntity__getDispLimitCount((UserServantEntity_o *)this, 0, 0LL);
      v24 = v4->fields.userSvtEntity;
      v4->fields.dispLimitCount = (int)this;
      if ( !v24 )
        goto LABEL_86;
      SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v24, -1, 0LL);
      v4->fields.skillCategoryIdList = SkillCategoryIdList;
      sub_1B4CF34((CGThumbnailListItem_o *)&v4->fields.skillCategoryIdList, (int32_t)SkillCategoryIdList, v26, v27);
      this = (CombineServantListViewItem_o *)v4->fields.userSvtEntity;
      if ( !this )
        goto LABEL_86;
      TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                       (UserServantEntity_o *)this,
                                       0,
                                       0LL);
      v4->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
      sub_1B4CF34(
        (CGThumbnailListItem_o *)&v4->fields.tdCategoryIdList,
        (int32_t)TreasureDeviceCategoryIdList,
        v29,
        v30);
    }
  }
  this = (CombineServantListViewItem_o *)sub_1B4D038(ListViewSort_FilterKind___TypeInfo, 1LL);
  if ( !this )
    goto LABEL_86;
  v13 = this;
  if ( !this->fields.sortIndex )
    goto LABEL_87;
  LODWORD(this->fields.sortValue0) = 50;
  IsUnSelectedAllTargetFilters = ListViewSort__IsUnSelectedAllTargetFilters(
                                   sort,
                                   (ListViewSort_FilterKind_array *)this,
                                   0LL);
  this = (CombineServantListViewItem_o *)sub_1B4D038(ListViewSort_FilterKind___TypeInfo, 1LL);
  if ( !this )
    goto LABEL_86;
  v13 = this;
  if ( !this->fields.sortIndex )
    goto LABEL_87;
  LODWORD(this->fields.sortValue0) = 51;
  v32 = ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)this, 0LL);
  IsMatchEffectCategory = ServantEquipEffectFilterController__IsMatchEffectCategory(
                            v4->fields.tdCategoryIdList,
                            sort,
                            0LL);
  v34 = ServantEquipEffectFilterController__IsMatchEffectCategory(v4->fields.skillCategoryIdList, sort, 0LL);
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
LABEL_42:
  if ( !ListViewSort__IsMatchServantAttriFilter(sort, v4->fields.userSvtEntity, v4->fields.servantEntity, 0LL)
    || !ListViewSort__IsMatchServantSubAttriFilter(sort, v4->fields.userSvtEntity, v4->fields.servantEntity, 0LL) )
  {
    return 0;
  }
  this = (CombineServantListViewItem_o *)sub_1B4D038(ListViewSort_FilterKind___TypeInfo, 1LL);
  if ( !this )
LABEL_86:
    sub_1B4D1EC(this, sort);
  v13 = this;
  if ( !this->fields.sortIndex )
    goto LABEL_87;
  LODWORD(this->fields.sortValue0) = 39;
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)this, 0LL) )
  {
    this = (CombineServantListViewItem_o *)sub_1B4D038(ListViewSort_FilterKind___TypeInfo, 1LL);
    if ( !this )
      goto LABEL_86;
    v13 = this;
    if ( this->fields.sortIndex )
    {
      LODWORD(this->fields.sortValue0) = 29;
      if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)this, 0LL) )
        goto LABEL_79;
      goto LABEL_50;
    }
LABEL_87:
    sub_1B4D1F4(this, v13);
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
  v35 = !ListViewSort__GetFilter(sort, 29, 0LL)
     || CombineServantListViewItem__get_IsCanNotSelect(v4, (const MethodInfo *)sort);
  if ( !isChoice && v35 )
    return 0;
LABEL_79:
  v37 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v37 = FilterKindList_TypeInfo;
  }
  this = (CombineServantListViewItem_o *)v37->static_fields->RarityFilterKindList;
  if ( !this )
    goto LABEL_86;
  v38 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)this,
                                           (const MethodInfo_356749C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v38, 0LL)
      || ListViewSort__IsSelectedAllTargetFilters(sort, v38, 0LL)
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

  if ( (byte_49BEBF7 & 1) == 0 )
  {
    sub_1B4CF90(&FilterKindList_TypeInfo, sort);
    sub_1B4CF90(&ListViewSort_FilterKind___TypeInfo, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v6);
    sub_1B4CF90(&ServantEventBonusFilterController_TypeInfo, v7);
    byte_49BEBF7 = 1;
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
                                        (const MethodInfo_356749C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                             (const MethodInfo_356749C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                           (const MethodInfo_356749C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                           (const MethodInfo_356749C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
    v22 = this->fields.userSvtEntity;
    if ( v22 )
    {
      dispLimitCount = this->fields.dispLimitCount;
      if ( dispLimitCount != UserServantEntity__getDispLimitCount(v22, 0, 0LL) )
      {
        ClassGroupFilterKindList = (__int64)this->fields.userSvtEntity;
        if ( !ClassGroupFilterKindList )
          goto LABEL_64;
        ClassGroupFilterKindList = UserServantEntity__getDispLimitCount(
                                     (UserServantEntity_o *)ClassGroupFilterKindList,
                                     0,
                                     0LL);
        v24 = this->fields.userSvtEntity;
        this->fields.dispLimitCount = ClassGroupFilterKindList;
        if ( !v24 )
          goto LABEL_64;
        SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v24, -1, 0LL);
        this->fields.skillCategoryIdList = SkillCategoryIdList;
        sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.skillCategoryIdList, (int32_t)SkillCategoryIdList, v26, v27);
        ClassGroupFilterKindList = (__int64)this->fields.userSvtEntity;
        if ( !ClassGroupFilterKindList )
          goto LABEL_64;
        TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                         (UserServantEntity_o *)ClassGroupFilterKindList,
                                         0,
                                         0LL);
        this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
        sub_1B4CF34(
          (CGThumbnailListItem_o *)&this->fields.tdCategoryIdList,
          (int32_t)TreasureDeviceCategoryIdList,
          v29,
          v30);
      }
    }
    ClassGroupFilterKindList = sub_1B4D038(ListViewSort_FilterKind___TypeInfo, 1LL);
    if ( !ClassGroupFilterKindList )
      goto LABEL_64;
    v17 = ClassGroupFilterKindList;
    if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
      goto LABEL_65;
    *(_DWORD *)(ClassGroupFilterKindList + 32) = 50;
    IsUnSelectedAllTargetFilters = ListViewSort__IsUnSelectedAllTargetFilters(
                                     sort,
                                     (ListViewSort_FilterKind_array *)ClassGroupFilterKindList,
                                     0LL);
    ClassGroupFilterKindList = sub_1B4D038(ListViewSort_FilterKind___TypeInfo, 1LL);
    if ( !ClassGroupFilterKindList )
      goto LABEL_64;
    v17 = ClassGroupFilterKindList;
    if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
LABEL_65:
      sub_1B4D1F4(ClassGroupFilterKindList, v17);
    *(_DWORD *)(ClassGroupFilterKindList + 32) = 51;
    v32 = ListViewSort__IsUnSelectedAllTargetFilters(
            sort,
            (ListViewSort_FilterKind_array *)ClassGroupFilterKindList,
            0LL);
    IsMatchEffectCategory = ServantEquipEffectFilterController__IsMatchEffectCategory(
                              this->fields.tdCategoryIdList,
                              sort,
                              0LL);
    v34 = ServantEquipEffectFilterController__IsMatchEffectCategory(this->fields.skillCategoryIdList, sort, 0LL);
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
  if ( !ListViewSort__IsMatchServantAttriFilter(sort, this->fields.userSvtEntity, this->fields.servantEntity, 0LL)
    || !ListViewSort__IsMatchServantSubAttriFilter(sort, this->fields.userSvtEntity, this->fields.servantEntity, 0LL) )
  {
    return 0;
  }
  ClassGroupFilterKindList = sub_1B4D038(ListViewSort_FilterKind___TypeInfo, 1LL);
  if ( !ClassGroupFilterKindList )
LABEL_64:
    sub_1B4D1EC(ClassGroupFilterKindList, sort);
  v17 = ClassGroupFilterKindList;
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
  v19 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v19 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v19->static_fields->RarityFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_64;
  v20 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_356749C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v20, 0LL)
      || ListViewSort__IsSelectedAllTargetFilters(sort, v20, 0LL)
      || ListViewSort__IsMatchRarityFilter(sort, this->fields.rarity, 0LL);
}


void __fastcall CombineServantListViewItem__ModifyChoiceItem(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0

  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_1B4D1EC(0LL, method);
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
    sub_1B4D1EC(0LL, method);
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

  if ( (byte_49BEBF6 & 1) == 0 )
  {
    sub_1B4CF90(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
    byte_49BEBF6 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame || (userSvtEntity = this->fields.userSvtEntity) == 0LL )
    sub_1B4D1EC(SelfUserGame, v4);
  v6 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  pushUserSvtId = SelfUserGame->fields.pushUserSvtId;
  *(_OWORD *)&v9.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v9.fields.fakeValue = v6;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v8 = v9;
  this->fields.isPush = pushUserSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47012096(&v8, 0LL);
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
  int32_t v15; // w21
  struct System_Int32_array *svtUseSkillIdList; // x8
  __int64 v17; // x26
  unsigned __int64 max_length; // x9
  unsigned __int64 v19; // x29
  struct System_Int32_array *v20; // x8
  struct System_Int32_array *svtSkillLvList; // x8
  int v22; // w9
  struct UserServantEntity_o *v23; // x8
  __int64 v24; // x22
  __int64 v25; // x23
  int32_t v26; // w0
  System_Collections_Generic_List_int__o *v27; // x22
  struct System_Int32_array *v28; // x8
  __int64 v29; // x29
  unsigned __int64 v30; // x9
  unsigned __int64 v31; // x26
  struct System_Int32_array *v32; // x8
  int v33; // w23
  struct UserServantEntity_o *v34; // x8
  CombineAppendPassiveSkillMaster_o *v35; // x23
  __int64 v36; // x24
  __int64 v37; // x25
  struct System_Int32_array *svtSkillNumsList; // x8
  struct System_Int32_array *v39; // x9
  struct System_Int32_array *v40; // x8
  __int64 v41; // x8
  _QWORD *v42; // x9
  __int64 v43; // x10
  char *v44; // x8
  struct UserServantEntity_o *v45; // x8
  SvtAppendPassiveSkillUnlockMaster_o *v46; // x23
  __int64 v47; // x24
  __int64 v48; // x25
  struct System_Int32_array *v49; // x8
  struct System_Int32_array *v50; // x8
  struct System_Int32_array *items; // x8
  _QWORD *v52; // x9
  __int64 size; // x10
  __int64 v54; // x8
  CombineAppendPassiveSkillEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v56; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v57; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v58; // 0:x0.16

  if ( (byte_49BEBF5 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMaster_CombineAppendPassiveSkillMaster___, method);
    sub_1B4CF90(&Method_DataManager_GetMaster_SkillMaster___, v3);
    sub_1B4CF90(&Method_DataManager_GetMaster_SvtAppendPassiveSkillUnlockMaster___, v4);
    sub_1B4CF90(&DataManager_TypeInfo, v5);
    sub_1B4CF90(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v6);
    sub_1B4CF90(&Method_System_Linq_Enumerable_Any_int___, v7);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__Add__, v8);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int___ctor__, v9);
    sub_1B4CF90(&System_Collections_Generic_List_int__TypeInfo, v10);
    sub_1B4CF90(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    byte_49BEBF5 = 1;
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
  v15 = *((_DWORD *)userSvtEntity + 24);
  this->fields.isAppendSkillLvMax = 1;
  this->fields.isAllAppendSkillLock = 1;
  this->fields.isAppendSkillLvSame = 1;
  svtUseSkillIdList = v14->fields.svtUseSkillIdList;
  if ( !svtUseSkillIdList )
    goto LABEL_79;
  v17 = 8LL;
  while ( 1 )
  {
    max_length = svtUseSkillIdList->max_length;
    v19 = v17 - 8;
    if ( v17 - 8 >= (int)max_length )
      break;
    if ( v19 >= max_length )
      goto LABEL_82;
    if ( *((int *)&svtUseSkillIdList->obj.klass + v17) >= 1 )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      userSvtEntity = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_SkillMaster___);
      v20 = v14->fields.svtUseSkillIdList;
      if ( !v20 )
        goto LABEL_79;
      if ( v19 >= v20->max_length )
        goto LABEL_82;
      if ( !userSvtEntity )
        goto LABEL_79;
      userSvtEntity = DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)userSvtEntity,
                        *((_DWORD *)&v20->obj.klass + v17),
                        (const MethodInfo_319D99C *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
      svtSkillLvList = v14->fields.svtSkillLvList;
      if ( !svtSkillLvList )
        goto LABEL_79;
      if ( v19 >= svtSkillLvList->max_length )
LABEL_82:
        sub_1B4D1F4(userSvtEntity, method);
      if ( !userSvtEntity )
        goto LABEL_79;
      v22 = *((_DWORD *)&svtSkillLvList->obj.klass + v17);
      if ( v22 < *((_DWORD *)userSvtEntity + 10) && this->fields.isAppendSkillLvMax )
        this->fields.isAppendSkillLvMax = 0;
      if ( v22 >= 1 && this->fields.isAllAppendSkillLock )
        this->fields.isAllAppendSkillLock = 0;
      if ( svtSkillLvList->m_Items[1] != v22 && this->fields.isAppendSkillLvSame )
        this->fields.isAppendSkillLvSame = 0;
    }
    svtUseSkillIdList = v14->fields.svtUseSkillIdList;
    ++v17;
    if ( !svtUseSkillIdList )
      goto LABEL_79;
  }
  v23 = this->fields.userSvtEntity;
  if ( !v23 )
    goto LABEL_79;
  v25 = *(_QWORD *)&v23->fields.svtId.fields.currentCryptoKey;
  v24 = *(_QWORD *)&v23->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v56.fields.currentCryptoKey = v25;
  *(_QWORD *)&v56.fields.fakeValue = v24;
  v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(v56, 0LL);
  this->fields.isAppendSkillExChangeLimit = UserServantAppendPassiveSkillMaster__IsAppendSkillExchangeLimit(v26, 0LL);
  v27 = (System_Collections_Generic_List_int__o *)sub_1B4D1DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v27,
    (const MethodInfo_3562964 *)Method_System_Collections_Generic_List_int___ctor__);
  v28 = v14->fields.svtUseSkillIdList;
  if ( !v28 )
LABEL_79:
    sub_1B4D1EC(userSvtEntity, method);
  v29 = 8LL;
  while ( 1 )
  {
    v30 = v28->max_length;
    v31 = v29 - 8;
    if ( v29 - 8 >= (int)v30 )
      break;
    if ( v31 >= v30 )
      goto LABEL_82;
    if ( *((int *)&v28->obj.klass + v29) < 1 )
      goto LABEL_78;
    v32 = v14->fields.svtSkillLvList;
    if ( !v32 )
      goto LABEL_79;
    if ( v31 >= v32->max_length )
      goto LABEL_82;
    v33 = *((_DWORD *)&v32->obj.klass + v29);
    if ( DataManager_TypeInfo->_2.cctor_finished )
    {
      if ( v33 )
        goto LABEL_42;
    }
    else
    {
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      if ( v33 )
      {
LABEL_42:
        userSvtEntity = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_CombineAppendPassiveSkillMaster___);
        v34 = this->fields.userSvtEntity;
        if ( !v34 )
          goto LABEL_79;
        v35 = (CombineAppendPassiveSkillMaster_o *)userSvtEntity;
        v37 = *(_QWORD *)&v34->fields.svtId.fields.currentCryptoKey;
        v36 = *(_QWORD *)&v34->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v57.fields.currentCryptoKey = v37;
        *(_QWORD *)&v57.fields.fakeValue = v36;
        userSvtEntity = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(v57, 0LL);
        svtSkillNumsList = v14->fields.svtSkillNumsList;
        if ( !svtSkillNumsList )
          goto LABEL_79;
        if ( v31 >= svtSkillNumsList->max_length )
          goto LABEL_82;
        v39 = v14->fields.svtSkillLvList;
        if ( !v39 )
          goto LABEL_79;
        if ( v31 >= v39->max_length )
          goto LABEL_82;
        if ( !v35 )
          goto LABEL_79;
        userSvtEntity = (void *)CombineAppendPassiveSkillMaster__TryGetEntityWithTryNum(
                                  v35,
                                  &entity,
                                  (int32_t)userSvtEntity,
                                  *((_DWORD *)&svtSkillNumsList->obj.klass + v29),
                                  *((_DWORD *)&v39->obj.klass + v29),
                                  0LL);
        if ( ((unsigned __int8)userSvtEntity & 1) != 0 )
        {
          if ( !entity )
            goto LABEL_79;
          userSvtEntity = (void *)CombineUtility__CheckCombineNeedItemsEnough(
                                    this->fields.userSvtEntity,
                                    entity->fields.itemIds,
                                    entity->fields.itemNums,
                                    v15,
                                    entity->fields.qp,
                                    0LL);
          if ( ((unsigned __int8)userSvtEntity & 1) != 0 )
          {
            v40 = v14->fields.svtUseSkillIdList;
            if ( !v40 )
              goto LABEL_79;
            if ( v31 >= v40->max_length )
              goto LABEL_82;
            userSvtEntity = this->fields.enableAppendSkillUp;
            if ( !userSvtEntity )
              goto LABEL_79;
            method = (const MethodInfo *)*((unsigned int *)&v40->obj.klass + v29);
            v41 = *((_QWORD *)userSvtEntity + 2);
            v42 = Method_System_Collections_Generic_List_int__Add__;
            ++*((_DWORD *)userSvtEntity + 7);
            if ( !v41 )
              goto LABEL_79;
            v43 = *((int *)userSvtEntity + 6);
            if ( (unsigned int)v43 >= *(_DWORD *)(v41 + 24) )
            {
              v54 = v42[4];
LABEL_77:
              System_Collections_Generic_List_int___AddWithResize(
                (System_Collections_Generic_List_int__o *)userSvtEntity,
                (int32_t)method,
                *(const MethodInfo_35631B8 **)(*(_QWORD *)(v54 + 192) + 112LL));
              goto LABEL_78;
            }
            v44 = (char *)(v41 + 4 * v43);
            *((_DWORD *)userSvtEntity + 6) = v43 + 1;
LABEL_74:
            *((_DWORD *)v44 + 8) = (_DWORD)method;
            goto LABEL_78;
          }
        }
        goto LABEL_78;
      }
    }
    userSvtEntity = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_SvtAppendPassiveSkillUnlockMaster___);
    v45 = this->fields.userSvtEntity;
    if ( !v45 )
      goto LABEL_79;
    v46 = (SvtAppendPassiveSkillUnlockMaster_o *)userSvtEntity;
    v48 = *(_QWORD *)&v45->fields.svtId.fields.currentCryptoKey;
    v47 = *(_QWORD *)&v45->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v58.fields.currentCryptoKey = v48;
    *(_QWORD *)&v58.fields.fakeValue = v47;
    userSvtEntity = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(v58, 0LL);
    v49 = v14->fields.svtSkillNumsList;
    if ( !v49 )
      goto LABEL_79;
    if ( v31 >= v49->max_length )
      goto LABEL_82;
    if ( !v46 )
      goto LABEL_79;
    userSvtEntity = SvtAppendPassiveSkillUnlockMaster__GetEntity(
                      v46,
                      (int32_t)userSvtEntity,
                      *((_DWORD *)&v49->obj.klass + v29),
                      0LL);
    if ( userSvtEntity )
    {
      userSvtEntity = (void *)CombineUtility__CheckCombineNeedItemsEnough(
                                this->fields.userSvtEntity,
                                *((System_Int32_array **)userSvtEntity + 3),
                                *((System_Int32_array **)userSvtEntity + 4),
                                v15,
                                0,
                                0LL);
      if ( ((unsigned __int8)userSvtEntity & 1) != 0 )
      {
        v50 = v14->fields.svtUseSkillIdList;
        if ( !v50 )
          goto LABEL_79;
        if ( v31 >= v50->max_length )
          goto LABEL_82;
        if ( !v27 )
          goto LABEL_79;
        method = (const MethodInfo *)*((unsigned int *)&v50->obj.klass + v29);
        items = v27->fields._items;
        v52 = Method_System_Collections_Generic_List_int__Add__;
        ++v27->fields._version;
        if ( !items )
          goto LABEL_79;
        size = v27->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          v54 = v52[4];
          userSvtEntity = v27;
          goto LABEL_77;
        }
        v44 = (char *)items + 4 * size;
        v27->fields._size = size + 1;
        goto LABEL_74;
      }
    }
LABEL_78:
    v28 = v14->fields.svtUseSkillIdList;
    ++v29;
    if ( !v28 )
      goto LABEL_79;
  }
  this->fields.isAppendSkillUpItemNum = System_Linq_Enumerable__Any_int_(
                                          (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.enableAppendSkillUp,
                                          (const MethodInfo_2F0EF80 *)Method_System_Linq_Enumerable_Any_int___);
  this->fields.isAppendSkillOpenItemNum = System_Linq_Enumerable__Any_int_(
                                            (System_Collections_Generic_IEnumerable_TSource__o *)v27,
                                            (const MethodInfo_2F0EF80 *)Method_System_Linq_Enumerable_Any_int___);
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
  System_Predicate_object__o *_9__119_0; // x21
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

  if ( (byte_49BEBFB & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Array_IndexOf_int___, eventCampaignEntities);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__, v6);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__, v7);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventCampaignEntity__FindAll__, v8);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__, v9);
    sub_1B4CF90(&System_Predicate_EventCampaignEntity__TypeInfo, v10);
    sub_1B4CF90(&Method_CombineServantListViewItem___c__SetIsCombineExpCampaignTarget_b__119_0__, v11);
    sub_1B4CF90(&CombineServantListViewItem___c_TypeInfo, v12);
    byte_49BEBFB = 1;
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
    _9__119_0 = (System_Predicate_object__o *)v13->static_fields->__9__119_0;
    if ( !_9__119_0 )
    {
      if ( !v13->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v13);
        v13 = CombineServantListViewItem___c_TypeInfo;
      }
      v15 = (Il2CppObject *)v13->static_fields->__9;
      _9__119_0 = (System_Predicate_object__o *)sub_1B4D1DC(System_Predicate_EventCampaignEntity__TypeInfo);
      System_Predicate_object____ctor(
        _9__119_0,
        v15,
        Method_CombineServantListViewItem___c__SetIsCombineExpCampaignTarget_b__119_0__,
        0LL);
      static_fields = CombineServantListViewItem___c_TypeInfo->static_fields;
      static_fields->__9__119_0 = (struct System_Predicate_EventCampaignEntity__o *)_9__119_0;
      sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__119_0, (int32_t)_9__119_0, v17, v18);
    }
    All = System_Collections_Generic_List_object___FindAll(
            (System_Collections_Generic_List_object__o *)eventCampaignEntities,
            (System_Predicate_T__o *)_9__119_0,
            (const MethodInfo_35808EC *)Method_System_Collections_Generic_List_EventCampaignEntity__FindAll__);
    if ( !All )
      sub_1B4D1EC(0LL, v20);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v26,
      (System_Collections_Generic_List_object__o *)All,
      (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    v27 = v26;
    klass = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        v22 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v27,
                (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
        if ( !v22 )
        {
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v27,
            (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
          this->fields.combineExpCampaignValue = (float)klass / 1000.0;
          return;
        }
        current = v27.fields._current;
        if ( !v27.fields._current )
          sub_1B4D1EC(v22, v23);
        if ( HIDWORD(v27.fields._current[1].klass) == 27 )
          break;
        if ( (System_Array__IndexOf_int_(
                (System_Int32_array *)v27.fields._current[2].monitor,
                this->fields.svtId,
                (const MethodInfo_2FFB2B4 *)Method_System_Array_IndexOf_int___) & 0x80000000) == 0 )
          goto LABEL_20;
      }
      userSvtEntity = this->fields.userSvtEntity;
      if ( !userSvtEntity )
        sub_1B4D1EC(0LL, v23);
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
  sub_1B4CF34(
    (CGThumbnailListItem_o *)&this->fields._NoticeTween_k__BackingField,
    (int32_t)noticeTween,
    (int32_t)method,
    v3);
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
  __int64 v15; // x8
  __int64 v16; // x22
  unsigned __int64 v17; // x20
  int32_t v18; // w23
  int v19; // w28
  __int64 v20; // x8
  CombineSkillMaster_o *v21; // x20
  unsigned __int64 v22; // x28
  char v23; // w26
  int32_t v24; // w24
  struct ServantEntity_o *servantEntity; // x8
  CombineSkillMaster_o *v26; // x21
  struct System_Int32_array *itemNums; // x20
  struct System_Int32_array *itemIds; // x27
  int max_length; // w8
  UserItemMaster_o *v30; // x25
  il2cpp_array_size_t v31; // w9
  il2cpp_array_size_t v32; // w29
  struct UserServantEntity_o *v33; // x8
  __int128 v34; // q1
  int32_t v35; // w26
  int32_t v36; // w23
  __int64 v37; // x8
  _QWORD *v38; // x9
  __int64 v39; // x10
  struct System_Collections_Generic_List_int__o *enableSkillUp; // x8
  __int64 v41; // [xsp+0h] [xbp-C0h]
  __int64 v42; // [xsp+8h] [xbp-B8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v43; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v44; // [xsp+30h] [xbp-90h]
  UserItemEntity_o *v45; // [xsp+50h] [xbp-70h] BYREF
  CombineSkillEntity_o *entity; // [xsp+58h] [xbp-68h] BYREF

  if ( (byte_49BEBF4 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMasterData_CombineSkillMaster___, method);
    sub_1B4CF90(&Method_DataManager_GetMasterData_SkillMaster___, v3);
    sub_1B4CF90(&Method_DataManager_GetMasterData_UserItemMaster___, v4);
    sub_1B4CF90(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__Add__, v6);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__get_Count__, v7);
    sub_1B4CF90(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_49BEBF4 = 1;
  }
  v45 = 0LL;
  entity = 0LL;
  SelfUserGame = (__int64)UserGameMaster__getSelfUserGame(0LL);
  userSvtEntity = this->fields.userSvtEntity;
  v42 = SelfUserGame;
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
  v15 = *(_QWORD *)(v14 + 24);
  v16 = SelfUserGame;
  if ( (int)v15 >= 1 )
  {
    v17 = 0LL;
    while ( 1 )
    {
      if ( v17 >= (unsigned int)v15 )
        goto LABEL_61;
      if ( !v16 )
        goto LABEL_60;
      if ( v17 >= *(unsigned int *)(v16 + 24) )
        goto LABEL_61;
      v18 = *(_DWORD *)(v14 + 32 + 4 * v17);
      if ( v18 >= 1 )
      {
        v19 = *(_DWORD *)(v16 + 32 + 4 * v17);
        SelfUserGame = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !SelfUserGame )
          goto LABEL_60;
        SelfUserGame = (__int64)DataManager__GetMasterData_object_(
                                  (DataManager_o *)SelfUserGame,
                                  (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_SkillMaster___);
        if ( !SelfUserGame )
          goto LABEL_60;
        SelfUserGame = (__int64)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)SelfUserGame,
                                  v18,
                                  (const MethodInfo_319D99C *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        if ( !SelfUserGame )
          goto LABEL_60;
        if ( v19 < *(_DWORD *)(SelfUserGame + 40) )
          break;
      }
      LODWORD(v15) = *(_DWORD *)(v14 + 24);
      if ( (__int64)++v17 >= (int)v15 )
        goto LABEL_19;
    }
    this->fields.isSkillLvMax = 0;
  }
LABEL_19:
  SelfUserGame = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_60;
  SelfUserGame = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)SelfUserGame,
                            (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_CombineSkillMaster___);
  v20 = *(_QWORD *)(v14 + 24);
  if ( (int)v20 >= 1 )
  {
    v21 = (CombineSkillMaster_o *)SelfUserGame;
    v22 = 0LL;
    v23 = 0;
    v41 = v14;
    while ( v22 < (unsigned int)v20 )
    {
      if ( !v16 )
        goto LABEL_60;
      if ( v22 >= *(unsigned int *)(v16 + 24) )
        break;
      v24 = *(_DWORD *)(v14 + 4 * v22 + 32);
      if ( v24 >= 1 )
      {
        servantEntity = this->fields.servantEntity;
        if ( !servantEntity || !v21 )
          goto LABEL_60;
        SelfUserGame = CombineSkillMaster__TryGetEntity(
                         v21,
                         &entity,
                         servantEntity->fields.combineSkillId,
                         *(_DWORD *)(v16 + 4 * v22 + 32),
                         0LL);
        if ( (SelfUserGame & 1) != 0 )
        {
          if ( !entity )
            goto LABEL_60;
          v26 = v21;
          itemIds = entity->fields.itemIds;
          itemNums = entity->fields.itemNums;
          SelfUserGame = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !SelfUserGame )
            goto LABEL_60;
          SelfUserGame = (__int64)DataManager__GetMasterData_object_(
                                    (DataManager_o *)SelfUserGame,
                                    (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_UserItemMaster___);
          if ( !itemIds )
            goto LABEL_60;
          max_length = itemIds->max_length;
          if ( max_length >= 1 )
          {
            v30 = (UserItemMaster_o *)SelfUserGame;
            v31 = 0;
            while ( 1 )
            {
              if ( v31 >= max_length )
                goto LABEL_61;
              if ( !itemNums )
                goto LABEL_60;
              v32 = v31;
              if ( v31 >= itemNums->max_length )
                goto LABEL_61;
              v33 = this->fields.userSvtEntity;
              if ( !v33 )
                goto LABEL_60;
              v34 = *(_OWORD *)&v33->fields.userId.fields.fakeValue;
              v35 = itemIds->m_Items[v31 + 1];
              v36 = itemNums->m_Items[v31 + 1];
              *(_OWORD *)&v44.fields.currentCryptoKey = *(_OWORD *)&v33->fields.userId.fields.currentCryptoKey;
              *(_OWORD *)&v44.fields.fakeValue = v34;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
              v43 = v44;
              SelfUserGame = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47012096(&v43, 0LL);
              if ( !v30 )
                goto LABEL_60;
              SelfUserGame = UserItemMaster__TryGetEntity(v30, &v45, SelfUserGame, v35, 0LL);
              if ( (SelfUserGame & 1) == 0 )
                break;
              if ( !v45 )
                goto LABEL_60;
              if ( v36 > v45->fields.num )
                break;
              max_length = itemIds->max_length;
              v31 = v32 + 1;
              if ( (int)(v32 + 1) >= max_length )
              {
                v23 = 1;
                goto LABEL_47;
              }
            }
            v23 = 0;
          }
LABEL_47:
          if ( !v42 || !entity )
            goto LABEL_60;
          v21 = v26;
          v14 = v41;
          if ( *(_DWORD *)(v42 + 96) < entity->fields.qp || (v23 & 1) == 0 )
          {
            v23 = 0;
          }
          else
          {
            SelfUserGame = (__int64)this->fields.enableSkillUp;
            if ( !SelfUserGame )
              goto LABEL_60;
            v37 = *(_QWORD *)(SelfUserGame + 16);
            v38 = Method_System_Collections_Generic_List_int__Add__;
            ++*(_DWORD *)(SelfUserGame + 28);
            if ( !v37 )
              goto LABEL_60;
            v39 = *(int *)(SelfUserGame + 24);
            if ( (unsigned int)v39 >= *(_DWORD *)(v37 + 24) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                (System_Collections_Generic_List_int__o *)SelfUserGame,
                v24,
                *(const MethodInfo_35631B8 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
            }
            else
            {
              *(_DWORD *)(SelfUserGame + 24) = v39 + 1;
              *(_DWORD *)(v37 + 4 * v39 + 32) = v24;
            }
            v23 = 1;
          }
        }
      }
      LODWORD(v20) = *(_DWORD *)(v14 + 24);
      if ( (__int64)++v22 >= (int)v20 )
        goto LABEL_58;
    }
LABEL_61:
    sub_1B4D1F4(SelfUserGame, v11);
  }
LABEL_58:
  enableSkillUp = this->fields.enableSkillUp;
  if ( !enableSkillUp )
LABEL_60:
    sub_1B4D1EC(SelfUserGame, v11);
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
  int64_t v63; // x8
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v65; // q1
  struct UserServantEntity_o *v66; // x8
  IconLabelInfo_o *v67; // x20
  int32_t v68; // w21
  struct UserServantEntity_o *v69; // x8
  int32_t v70; // w8
  IconLabelInfo_o *v71; // x20
  struct UserServantEntity_o *v72; // x8
  int64_t v73; // x20
  struct IconLabelInfo_o *v74; // x21
  int32_t v75; // w3
  IconLabelInfo_o *v76; // x0
  int32_t v77; // w2
  unsigned int v78; // w8
  IconLabelInfo_o *v79; // x20
  struct UserServantEntity_o *v80; // x8
  int64_t hp; // x2
  int32_t adjustHp; // w3
  int32_t v83; // w1
  struct UserServantEntity_o *v84; // x8
  struct IconLabelInfo_o *iconLabelInfo1; // x19
  struct ServantEntity_o *servantEntity; // x8
  int64_t cost; // x2
  int32_t lv; // w20
  int64_t friendship; // x2
  int32_t friendshipMax; // w3
  int32_t v91; // w1
  __int64 methodPtr_low; // x10
  struct ServantEntity_o *v93; // x8
  __int64 collectionNo; // x10
  struct UserServantEntity_o *v95; // x8
  int32_t v96; // w21
  __int64 v97; // x9
  bool v98; // zf
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v100; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v101; // [xsp+30h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v102; // [xsp+50h] [xbp-60h]
  int32_t tdMaxLv[2]; // [xsp+78h] [xbp-38h] BYREF

  if ( (byte_49BEBFA & 1) == 0 )
  {
    sub_1B4CF90(&Method_BasicHelper_Any_EventGroupEntity___, sort);
    sub_1B4CF90(&CombineServantListViewManager_TypeInfo, v5);
    sub_1B4CF90(&Method_DataManager_GetMasterData_ServantFilterMaster___, v6);
    sub_1B4CF90(&Method_DataManager_GetMaster_EventCampaignMaster___, v7);
    sub_1B4CF90(&Method_DataManager_GetMaster_EventGroupMaster___, v8);
    sub_1B4CF90(&DataManager_TypeInfo, v9);
    sub_1B4CF90(&System_Func_EventGroupEntity__bool__TypeInfo, v10);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventGroupEntity__get_Count__, v11);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v12);
    sub_1B4CF90(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
    sub_1B4CF90(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v14);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_1B4CF90(&TutorialFlag_TypeInfo, v16);
    sub_1B4CF90(&Method_CombineServantListViewItem___c__DisplayClass118_0__SetSortValue_b__0__, v17);
    sub_1B4CF90(&CombineServantListViewItem___c__DisplayClass118_0_TypeInfo, v18);
    byte_49BEBFA = 1;
  }
  *(_QWORD *)tdMaxLv = 0LL;
  v19 = sub_1B4D1DC(CombineServantListViewItem___c__DisplayClass118_0_TypeInfo);
  CombineServantListViewItem___c__DisplayClass118_0___ctor(
    (CombineServantListViewItem___c__DisplayClass118_0_o *)v19,
    0LL);
  if ( !v19 )
    goto LABEL_307;
  *(_QWORD *)(v19 + 16) = this;
  sub_1B4CF34((CGThumbnailListItem_o *)(v19 + 16), (int32_t)this, v22, v23);
  *(_WORD *)&this->fields.isTermination = 0;
  this->fields.sortValue1 = -1LL;
  *(_WORD *)&this->fields.isDispAtkStatusUpInfo = 0;
  if ( !sort )
    goto LABEL_307;
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
        goto LABEL_307;
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
LABEL_197:
        iconLabelInfo2 = 1LL;
        switch ( sort->fields.sortKind )
        {
          case 0:
            if ( !this )
              break;
            iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
            v63 = !this->fields.isParty;
LABEL_234:
            this->fields.sortValue1 = v63;
            if ( !iconLabelInfo2 )
              break;
            iconLabelInfo1 = this->fields.iconLabelInfo1;
            goto LABEL_236;
          case 1:
            userSvtEntity = this->fields.userSvtEntity;
            if ( !userSvtEntity )
              break;
            v65 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
            *(_OWORD *)&v102.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v102.fields.fakeValue = v65;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v100 = v102;
            iconLabelInfo2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47012096(&v100, 0LL);
            v66 = this->fields.userSvtEntity;
            this->fields.sortValue1 = iconLabelInfo2;
            if ( !v66 )
              break;
            iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
            if ( !iconLabelInfo2 )
              break;
            IconLabelInfo__SetTime((IconLabelInfo_o *)iconLabelInfo2, 49, v66->fields.createdAt, 0, 0, 0, 0LL);
            goto LABEL_228;
          case 2:
            iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
            this->fields.sortValue1 = this->fields.rarity;
            if ( !iconLabelInfo2 )
              break;
            v67 = this->fields.iconLabelInfo1;
            v68 = *(_DWORD *)(iconLabelInfo2 + 256);
            iconLabelInfo2 = UserServantEntity__getLevelMax((UserServantEntity_o *)iconLabelInfo2, 0LL);
            v69 = this->fields.userSvtEntity;
            if ( !v69 || !v67 )
              break;
            IconLabelInfo__Set_38677548(v67, 2, v68, iconLabelInfo2, 0, 0, 0, v69->fields.lv, 0LL);
            v70 = this->fields.type;
            if ( v70 != 10 && v70 != 7 )
              goto LABEL_269;
            iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
            if ( !iconLabelInfo2 )
              break;
            v71 = this->fields.iconLabelInfo2;
            iconLabelInfo2 = UserServantEntity__getRarity((UserServantEntity_o *)iconLabelInfo2, 0LL);
            v72 = this->fields.userSvtEntity;
            if ( !v72 || !v71 )
              break;
            IconLabelInfo__Set_38677548(v71, 36, iconLabelInfo2, v72->fields.exceedCount, 0, 0, 0, v72->fields.lv, 0LL);
            goto LABEL_269;
          case 3:
            iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
            if ( !iconLabelInfo2 )
              break;
            v73 = *(int *)(iconLabelInfo2 + 256);
            v74 = this->fields.iconLabelInfo1;
            this->fields.sortValue1 = v73;
            iconLabelInfo2 = UserServantEntity__getLevelMax((UserServantEntity_o *)iconLabelInfo2, 0LL);
            if ( !v74 )
              break;
            v75 = iconLabelInfo2;
            v76 = v74;
            v77 = v73;
            goto LABEL_239;
          case 4:
            iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
            if ( !iconLabelInfo2 )
              break;
            v78 = this->fields.type & 0xFFFFFFFE;
            this->fields.sortValue1 = *(int *)(iconLabelInfo2 + 292);
            if ( v78 == 4 )
            {
              v79 = this->fields.iconLabelInfo1;
            }
            else
            {
              UserServantEntity__getTreasureDeviceInfo_40813636(
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
              v91 = 33;
LABEL_256:
              IconLabelInfo__Set_38677548(
                (IconLabelInfo_o *)iconLabelInfo2,
                v91,
                friendship,
                friendshipMax,
                0,
                0,
                0,
                0,
                0LL);
LABEL_257:
              iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
              if ( !iconLabelInfo2 )
                break;
              v79 = this->fields.iconLabelInfo2;
            }
            v96 = *(_DWORD *)(iconLabelInfo2 + 256);
            iconLabelInfo2 = UserServantEntity__getLevelMax((UserServantEntity_o *)iconLabelInfo2, 0LL);
            if ( v79 )
            {
              IconLabelInfo__Set_38677548(v79, 2, v96, iconLabelInfo2, 0, 0, 0, 0, 0LL);
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
LABEL_269:
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
                    goto LABEL_269;
                  }
                }
              }
            }
            break;
          case 5:
            v80 = this->fields.userSvtEntity;
            if ( !v80 )
              break;
            hp = v80->fields.hp;
            iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
            this->fields.sortValue1 = hp;
            if ( !iconLabelInfo2 )
              break;
            adjustHp = v80->fields.adjustHp;
            v83 = 3;
            goto LABEL_227;
          case 6:
            v84 = this->fields.userSvtEntity;
            if ( !v84 )
              break;
            hp = v84->fields.atk;
            iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
            this->fields.sortValue1 = hp;
            if ( !iconLabelInfo2 )
              break;
            adjustHp = v84->fields.adjustAtk;
            v83 = 5;
LABEL_227:
            IconLabelInfo__Set_38677548((IconLabelInfo_o *)iconLabelInfo2, v83, hp, adjustHp, 0, 0, 0, 0, 0LL);
LABEL_228:
            iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
            if ( !iconLabelInfo2 )
              break;
            iconLabelInfo1 = this->fields.iconLabelInfo2;
LABEL_236:
            lv = *(_DWORD *)(iconLabelInfo2 + 256);
            goto LABEL_237;
          case 7:
            servantEntity = this->fields.servantEntity;
            if ( !servantEntity )
              break;
            cost = servantEntity->fields.cost;
            iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
            this->fields.sortValue1 = cost;
            if ( !iconLabelInfo2 )
              break;
            IconLabelInfo__Set_38677548((IconLabelInfo_o *)iconLabelInfo2, 7, cost, 0, 0, 0, 0, 0, 0LL);
            goto LABEL_257;
          case 8:
            iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
            v63 = -this->fields.priority;
            goto LABEL_234;
          case 0xA:
            friendship = this->fields.friendship;
            iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
            this->fields.sortValue1 = friendship;
            if ( !iconLabelInfo2 )
              break;
            friendshipMax = this->fields.friendshipMax;
            v91 = 32;
            goto LABEL_256;
          case 0xE:
            iconLabelInfo2 = this->fields.amountSortValue;
            if ( (iconLabelInfo2 & 0x8000000000000000LL) == 0 )
              goto LABEL_247;
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
LABEL_247:
            v93 = this->fields.servantEntity;
            if ( !v93 )
              break;
            collectionNo = v93->fields.collectionNo;
            v95 = this->fields.userSvtEntity;
            this->fields.sortValue1 = (((unsigned __int64)(unsigned int)this->fields.rarity << 32)
                                     + (iconLabelInfo2 << 48)) | collectionNo;
            if ( !v95 )
              break;
            iconLabelInfo1 = this->fields.iconLabelInfo1;
            lv = v95->fields.lv;
            iconLabelInfo2 = (int64_t)v95;
LABEL_237:
            iconLabelInfo2 = UserServantEntity__getLevelMax((UserServantEntity_o *)iconLabelInfo2, 0LL);
            if ( !iconLabelInfo1 )
              break;
            v75 = iconLabelInfo2;
            v76 = iconLabelInfo1;
            v77 = lv;
LABEL_239:
            IconLabelInfo__Set_38677548(v76, 2, v77, v75, 0, 0, 0, 0, 0LL);
            goto LABEL_269;
          case 0xF:
            friendship = this->fields.hpReinforceValue;
            iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
            this->fields.isDispHpStatusUpInfo = 1;
            this->fields.sortValue1 = friendship;
            if ( !iconLabelInfo2 )
              break;
            friendshipMax = this->fields.nowMaxHpReinforceValue;
            v91 = 44;
            goto LABEL_256;
          case 0x10:
            friendship = this->fields.atkReinforceValue;
            iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
            this->fields.isDispAtkStatusUpInfo = 1;
            this->fields.sortValue1 = friendship;
            if ( !iconLabelInfo2 )
              break;
            friendshipMax = this->fields.nowMaxAtkReinforceValue;
            v91 = 45;
            goto LABEL_256;
          default:
            return iconLabelInfo2;
        }
LABEL_307:
        sub_1B4D1EC(iconLabelInfo2, v21);
      }
      switch ( this->fields.type )
      {
        case 0:
          if ( this->fields.isHeroineSvt )
          {
            if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
            if ( TutorialFlag__Get_38224448(126, 0LL) )
              goto LABEL_162;
          }
          if ( this->fields.isParty )
          {
            v57 = 20LL;
            goto LABEL_194;
          }
          if ( this->fields.isLvMax )
            goto LABEL_190;
          goto LABEL_195;
        case 1:
          iconLabelInfo2 = (int64_t)this->fields.servantEntity;
          if ( !iconLabelInfo2 )
            goto LABEL_307;
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
            goto LABEL_297;
          }
          iconLabelInfo2 = (int64_t)this->fields.servantEntity;
          if ( !iconLabelInfo2 )
            goto LABEL_307;
          if ( ServantEntity__get_IsStatusUp((ServantEntity_o *)iconLabelInfo2, 0LL) )
          {
            if ( this->fields.isSameClass )
            {
              rarity = this->fields.rarity;
              if ( this->fields.hpBase < 1 )
              {
                if ( rarity == 4 )
                {
                  v61 = -90LL;
                  if ( !this->fields.isAtkSecondUpMax && this->fields.isAtkUpMax )
                    v61 = 90LL;
                  goto LABEL_295;
                }
                v97 = 70LL;
                v98 = !this->fields.isAtkUpMax;
                v61 = -110LL;
              }
              else
              {
                if ( rarity == 4 )
                {
                  v61 = -80LL;
                  if ( !this->fields.isHpSecondUpMax && this->fields.isHpUpMax )
                    v61 = 100LL;
LABEL_295:
                  *p_sortValue0 = v61;
                  if ( isLock || v55 )
                    v61 = -5LL;
                  goto LABEL_297;
                }
                v97 = 80LL;
                v98 = !this->fields.isHpUpMax;
                v61 = -100LL;
              }
              if ( v98 )
                v61 = v97;
              goto LABEL_295;
            }
            v61 = -150LL;
          }
          else
          {
            if ( !CombineServantListViewItem__get_IsCanNotSelectMaterial(this, v21) )
            {
LABEL_298:
              if ( this->fields.isFortification )
                *p_sortValue0 = -10LL;
              if ( v55 && sort->fields.isChoiceSort )
                *(_OWORD *)p_sortValue0 = xmmword_BA9A50;
              goto LABEL_197;
            }
            if ( this->fields.isLimitCntTarget )
            {
              v61 = -20LL;
            }
            else if ( this->fields.isParty )
            {
              v61 = -30LL;
            }
            else if ( this->fields.isUseSupport )
            {
              v61 = -40LL;
            }
            else
            {
              v61 = -10LL;
              if ( this->fields.isUseRecommendSupport )
                v61 = -50LL;
            }
          }
LABEL_297:
          *p_sortValue0 = v61;
          goto LABEL_298;
        case 2:
          if ( this->fields.isSealCombineLimit || this->fields.isSealedLimitCount && this->fields.isLimitCntMax )
          {
            v57 = 0LL;
            goto LABEL_194;
          }
          if ( !CombineServantListViewItem__get_IsCanNotBaseSelect(this, v21)
            && this->fields.isLimitUpItemNum
            && this->fields.isLvMax )
          {
LABEL_193:
            v57 = 10LL;
            goto LABEL_194;
          }
          if ( this->fields.isHeroineSvt )
            goto LABEL_190;
          if ( !this->fields.isLimitCntMax )
            goto LABEL_195;
          goto LABEL_162;
        case 3:
          if ( this->fields.isHeroineSvt )
          {
            if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
            if ( TutorialFlag__Get_38224448(126, 0LL) )
              goto LABEL_162;
          }
          if ( this->fields.isSkillUpItemNum )
            goto LABEL_193;
          if ( !this->fields.isSkillLvMax )
            goto LABEL_195;
          goto LABEL_190;
        case 4:
          if ( this->fields.isSameSvt )
            goto LABEL_193;
          if ( this->fields.isHeroineSvt )
            goto LABEL_190;
          if ( !this->fields.isTdLvMax )
            goto LABEL_195;
          goto LABEL_162;
        case 5:
          if ( v55 && sort->fields.isChoiceSort || this->fields.isFortification )
            goto LABEL_124;
          goto LABEL_197;
        case 6:
          if ( !CombineServantListViewItem__get_IsCanNotBaseSelect(this, v21)
            && this->fields.isLvMax
            && this->fields.isLimitCntMax
            && this->fields.isLvExceedItemNum )
          {
            goto LABEL_193;
          }
          if ( this->fields.isHeroineSvt )
            goto LABEL_190;
          if ( !this->fields.isLvExceedMax )
            goto LABEL_195;
          goto LABEL_162;
        case 7:
          if ( this->fields.isEventJoin )
            goto LABEL_190;
          if ( !this->fields.isHeroineSvt )
            goto LABEL_195;
          if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
          if ( !TutorialFlag__Get_38224448(126, 0LL) )
            goto LABEL_195;
          goto LABEL_162;
        case 8:
          if ( !CombineServantListViewItem__get_IsCanNotBaseSelect(this, v21)
            && this->fields.isFriendshipRankMax
            && this->fields.isFriendshipExceedItemNum )
          {
            goto LABEL_193;
          }
          if ( this->fields.isHeroineSvt )
            goto LABEL_190;
          if ( !this->fields.isFriendshipExceedMax )
            goto LABEL_195;
          goto LABEL_162;
        case 9:
          if ( !CombineServantListViewItem__get_IsCanNotBaseSelect(this, v21) )
            goto LABEL_193;
          if ( this->fields.isHeroineSvt )
            goto LABEL_190;
          if ( this->fields.isSealCombineLimit )
          {
LABEL_169:
            v57 = -15LL;
            goto LABEL_194;
          }
          if ( this->fields.isLimitCntMax )
            goto LABEL_162;
          if ( !this->fields.isEventJoin )
            goto LABEL_195;
          goto LABEL_271;
        case 0xA:
          if ( this->fields.isHeroineSvt )
          {
            if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
            if ( TutorialFlag__Get_38224448(126, 0LL) )
              goto LABEL_271;
          }
          if ( this->fields.isEventJoin )
            goto LABEL_162;
          if ( !this->fields.isCommandCardExceedMax )
            goto LABEL_195;
          goto LABEL_190;
        case 0xB:
          if ( this->fields.isHeroineSvt )
          {
            if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
            if ( TutorialFlag__Get_38224448(126, 0LL) )
              goto LABEL_162;
          }
          if ( this->fields.isEventJoin )
            goto LABEL_169;
          if ( this->fields.isAppendSkillOpenItemNum || this->fields.isAppendSkillUpItemNum )
            goto LABEL_193;
          if ( !this->fields.isAppendSkillLvMax )
            goto LABEL_195;
          goto LABEL_190;
        case 0xC:
          if ( !this->fields.isHeroineSvt )
            goto LABEL_311;
          if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
          if ( TutorialFlag__Get_38224448(126, 0LL) )
          {
            v57 = -40LL;
          }
          else
          {
LABEL_311:
            if ( this->fields.isEventJoin )
            {
              v57 = -35LL;
            }
            else if ( this->fields.isAppendSkillLvMax )
            {
LABEL_271:
              v57 = -30LL;
            }
            else if ( this->fields.isAllAppendSkillLock )
            {
LABEL_162:
              v57 = -20LL;
            }
            else
            {
              if ( !this->fields.isAppendSkillLvSame )
              {
LABEL_195:
                if ( v55 && sort->fields.isChoiceSort )
                  this->fields.sortValue0B = 10LL;
                goto LABEL_197;
              }
LABEL_190:
              v57 = -10LL;
            }
          }
LABEL_194:
          *p_sortValue0 = v57;
          goto LABEL_195;
        default:
          goto LABEL_197;
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
        iconLabelInfo2 = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_EventGroupMaster___);
        if ( !iconLabelInfo2 )
          goto LABEL_307;
        EntitiesByGroupId = EventGroupMaster__GetEntitiesByGroupId(
                              (EventGroupMaster_o *)iconLabelInfo2,
                              this->fields.bonusKindId,
                              0LL);
        iconLabelInfo2 = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)EntitiesByGroupId, 0LL);
        if ( (iconLabelInfo2 & 1) == 0 )
        {
          if ( !EntitiesByGroupId )
            goto LABEL_307;
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
            sub_1B4CF34(v50, v49, v38, v39);
            v51 = (System_Func_object__bool__o *)sub_1B4D1DC(System_Func_EventGroupEntity__bool__TypeInfo);
            System_Func_object__bool____ctor(
              v51,
              (Il2CppObject *)v19,
              Method_CombineServantListViewItem___c__DisplayClass118_0__SetSortValue_b__0__,
              0LL);
            this->fields.isEventUpVal = BasicHelper__Any_object_(
                                          (System_Collections_Generic_List_T__o *)EntitiesByGroupId,
                                          (System_Func_T__bool__o *)v51,
                                          (const MethodInfo_2EEC494 *)Method_BasicHelper_Any_EventGroupEntity___);
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
            goto LABEL_307;
          iconLabelInfo2 = CombineServantListViewManager__IsLargeSuccessCampaignClassId(
                             (CombineServantListViewManager_o *)v29,
                             this->fields.bonusKindId,
                             this->fields.svtId,
                             0LL);
          v45 = this->fields.userSvtEntity;
          this->fields.isEventUpVal = iconLabelInfo2 & 1;
          if ( !v45 )
            goto LABEL_307;
          v46 = *(_OWORD *)&v45->fields.id.fields.fakeValue;
          bonusKindId = this->fields.bonusKindId;
          *(_OWORD *)&v102.fields.currentCryptoKey = *(_OWORD *)&v45->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v102.fields.fakeValue = v46;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v101 = v102;
          v48 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47012096(&v101, 0LL);
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
        iconLabelInfo2 = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_EventCampaignMaster___);
        if ( !iconLabelInfo2 )
          goto LABEL_307;
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
          goto LABEL_307;
        IsEnableServant = UserServantEntity__getEventUpVal_40806396(
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
        iconLabelInfo2 = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !iconLabelInfo2 )
          goto LABEL_307;
        MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)iconLabelInfo2,
                              (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_ServantFilterMaster___);
        svtId = this->fields.svtId;
        v35 = (ServantFilterMaster_o *)MasterData_object;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        v36 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(svtId, 0LL);
        v21 = *(const MethodInfo **)&v36.fields.fakeValue;
        iconLabelInfo2 = *(_QWORD *)&v36.fields.currentCryptoKey;
        if ( !v35 )
          goto LABEL_307;
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

  if ( (byte_49BEC05 & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_14930/*"UserSvt "*/, method);
    byte_49BEC05 = 1;
  }
  NameText = CombineServantListViewItem__get_NameText(this, method);
  return System_String__Concat_61093468((System_String_o *)StringLiteral_14930/*"UserSvt "*/, NameText, 0LL);
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

  if ( (byte_49BEC01 & 1) == 0 )
  {
    sub_1B4CF90(&LocalizationManager_TypeInfo, method);
    sub_1B4CF90(&StringLiteral_18745/*"error"*/, v3);
    byte_49BEC01 = 1;
  }
  servantEntity = this->fields.servantEntity;
  if ( !servantEntity )
    return (System_String_o *)StringLiteral_18745/*"error"*/;
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
  if ( (byte_49BEC02 & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_1/*""*/, method);
    byte_49BEC02 = 1;
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
    sub_1B4D1EC(0LL, method);
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
  int32_t type; // w8
  bool isEventJoin; // w0
  _BOOL4 v5; // w8
  _BOOL4 isSealCombineLimit; // w8
  _BOOL4 v7; // w9
  int32_t v8; // w8

  if ( (byte_49BEC03 & 1) == 0 )
  {
    sub_1B4CF90(&TutorialFlag_TypeInfo, method);
    byte_49BEC03 = 1;
  }
  type = this->fields.type;
  if ( type )
  {
    isEventJoin = 1;
  }
  else
  {
    if ( !this->fields.isHeroineSvt )
      goto LABEL_82;
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    if ( TutorialFlag__Get_38224448(126, 0LL) )
    {
      isEventJoin = 1;
    }
    else
    {
LABEL_82:
      v5 = this->fields.isLvMax
        || this->fields.isExpUpSvt
        || this->fields.isStatusUpSvt && !this->fields.isCanStUp
        || this->fields.isMaterialTdSvt;
      isEventJoin = v5;
    }
    type = this->fields.type;
  }
  if ( type == 9 )
  {
    if ( this->fields.isLimitCntMax
      || this->fields.isHeroineSvt
      || this->fields.isEventJoin
      || this->fields.isIgnoreCombineLimitSpecial )
    {
      goto LABEL_46;
    }
    isSealCombineLimit = this->fields.isSealCombineLimit;
    goto LABEL_48;
  }
  if ( type == 3 )
  {
    if ( !this->fields.isHeroineSvt )
    {
      isSealCombineLimit = this->fields.isSkillLvMax;
      goto LABEL_48;
    }
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    v7 = TutorialFlag__Get_38224448(126, 0LL) || this->fields.isSkillLvMax;
    type = this->fields.type;
    isEventJoin = v7;
LABEL_34:
    switch ( type )
    {
      case 4:
        if ( !this->fields.isTdLvMax )
          goto LABEL_36;
        goto LABEL_46;
      case 6:
        if ( this->fields.isLvExceedMax )
          goto LABEL_46;
        goto LABEL_45;
      case 7:
        if ( this->fields.isHeroineSvt )
        {
          if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
          if ( TutorialFlag__Get_38224448(126, 0LL) )
            goto LABEL_46;
        }
        goto LABEL_47;
      case 8:
        if ( this->fields.isFriendshipExceedMax )
          goto LABEL_46;
LABEL_45:
        if ( this->fields.isHeroineSvt )
          goto LABEL_46;
LABEL_47:
        isSealCombineLimit = this->fields.isEventJoin;
        break;
      default:
        goto LABEL_49;
    }
    goto LABEL_48;
  }
  if ( type != 2 )
    goto LABEL_34;
  if ( this->fields.isLimitCntMax && !this->fields.isSealedLimitCount )
  {
LABEL_46:
    isEventJoin = 1;
    goto LABEL_49;
  }
LABEL_36:
  isSealCombineLimit = this->fields.isHeroineSvt;
LABEL_48:
  isEventJoin = isSealCombineLimit;
LABEL_49:
  v8 = this->fields.type;
  if ( v8 == 10 )
  {
    if ( this->fields.isHeroineSvt )
    {
      if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
      if ( TutorialFlag__Get_38224448(126, 0LL) )
        goto LABEL_55;
    }
    if ( this->fields.isCommandCardExceedMax )
LABEL_55:
      isEventJoin = 1;
    else
      isEventJoin = this->fields.isEventJoin;
    v8 = this->fields.type;
  }
  if ( v8 == 11 )
  {
    if ( this->fields.isAppendSkillLvMax || this->fields.isEventJoin )
      return 1;
    if ( !this->fields.isHeroineSvt )
      return 0;
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    isEventJoin = TutorialFlag__Get_38224448(126, 0LL);
    v8 = this->fields.type;
  }
  if ( v8 != 12 )
    return isEventJoin;
  if ( this->fields.isAppendSkillExChangeLimit
    || this->fields.isAllAppendSkillLock
    || this->fields.isAppendSkillLvMax
    || this->fields.isEventJoin )
  {
    return 1;
  }
  if ( !this->fields.isHeroineSvt )
    return 0;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  return TutorialFlag__Get_38224448(126, 0LL);
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

  if ( (byte_49BEC04 & 1) == 0 )
  {
    sub_1B4CF90(&TutorialFlag_TypeInfo, method);
    byte_49BEC04 = 1;
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
    if ( TutorialFlag__Get_38224448(126, 0LL) )
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
  _BOOL4 IsProtectedEventServant; // w8
  _BOOL4 v9; // w21
  UserServantEntity_o *userSvtEntity; // x0

  isStatusUpSvt = this->fields.isStatusUpSvt;
  if ( !this->fields.isStatusUpSvt )
  {
    v5 = 0;
    goto LABEL_10;
  }
  if ( this->fields.rarity <= 3 )
  {
    if ( !this->fields.isHpUpMax )
    {
      isAtkUpMax = this->fields.isAtkUpMax;
      goto LABEL_9;
    }
LABEL_7:
    v5 = 1;
    goto LABEL_10;
  }
  if ( this->fields.isHpSecondUpMax )
    goto LABEL_7;
  isAtkUpMax = this->fields.isAtkSecondUpMax;
LABEL_9:
  v5 = isAtkUpMax;
LABEL_10:
  CanNotSelectSecondStatusMaterial = CombineServantListViewItem__isCanNotSelectSecondStatusMaterial(this, method);
  if ( *(_WORD *)&this->fields.isFavorite
    || this->fields.isLock
    || this->fields.isChoice
    || this->fields.isHeroineSvt
    || this->fields.isLimitCntTarget
    || isStatusUpSvt && !this->fields.isCanStUp
    || this->fields.isEventJoin
    || this->fields.isUseSupport
    || this->fields.isUseRecommendSupport )
  {
    IsProtectedEventServant = 1;
  }
  else if ( this->fields.type == 5 )
  {
    IsProtectedEventServant = 0;
  }
  else
  {
    v9 = CanNotSelectSecondStatusMaterial;
    userSvtEntity = this->fields.userSvtEntity;
    if ( userSvtEntity )
      IsProtectedEventServant = UserServantEntity__IsProtectedEventServant(userSvtEntity, 0LL);
    else
      IsProtectedEventServant = 0;
    CanNotSelectSecondStatusMaterial = v9;
  }
  return IsProtectedEventServant
      || CanNotSelectSecondStatusMaterial
      || v5
      || this->fields.isNotSelectStatusUpHp
      || this->fields.isNotSelectStatusUpAtk
      || this->fields.isNotSelectSecondStatusUpHp
      || this->fields.isNotSelectSecondStatusUpAtk
      || this->fields.isPush;
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
    sub_1B4D1EC(v6, v5);
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
    sub_1B4D1EC(0LL, method);
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
    sub_1B4D1EC(0LL, method);
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
    sub_1B4D1EC(0LL, method);
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
    sub_1B4D1EC(0LL, method);
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

  if ( (byte_49BEBFF & 1) == 0 )
  {
    sub_1B4CF90(&LocalizationManager_TypeInfo, method);
    sub_1B4CF90(&StringLiteral_18745/*"error"*/, v3);
    byte_49BEBFF = 1;
  }
  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    return (System_String_o *)StringLiteral_18745/*"error"*/;
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
  if ( (byte_49BEBFE & 1) == 0 )
  {
    sub_1B4CF90(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    this = (CombineServantListViewItem_o *)sub_1B4CF90(&StringLiteral_18745/*"error"*/, v3);
    byte_49BEBFE = 1;
  }
  servantEntity = v2->fields.servantEntity;
  if ( !servantEntity )
    return (System_String_o *)StringLiteral_18745/*"error"*/;
  userSvtEntity = v2->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_1B4D1EC(this, method);
  v7 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.currentCryptoKey;
  v6 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v10.fields.currentCryptoKey = v7;
  *(_QWORD *)&v10.fields.fakeValue = v6;
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(v10, 0LL);
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

  if ( (byte_49BEC00 & 1) == 0 )
  {
    sub_1B4CF90(&LocalizationManager_TypeInfo, method);
    byte_49BEC00 = 1;
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

  if ( (byte_49BEC06 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMaster_SvtCoinMaster___, method);
    sub_1B4CF90(&DataManager_TypeInfo, v3);
    sub_1B4CF90(&Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__GetEntity__, v4);
    byte_49BEC06 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_SvtCoinMaster___);
  if ( !Master_object )
    sub_1B4D1EC(0LL, v6);
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             this->fields.svtId,
             (const MethodInfo_319D99C *)Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__GetEntity__);
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

  if ( (byte_49BEC07 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMaster_UserSvtCoinMaster___, method);
    sub_1B4CF90(&DataManager_TypeInfo, v3);
    sub_1B4CF90(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_1B4CF90(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5);
    byte_49BEC07 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_UserSvtCoinMaster___);
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
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47012096(&v16, 0LL);
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
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(v19, 0LL);
  if ( !v10 )
    goto LABEL_17;
  Master_object = UserSvtCoinMaster__TryGetEntity(v10, &entity, v12, Master_object, 0LL);
  if ( (Master_object & 1) != 0 )
  {
    if ( entity )
      return entity->fields.num;
LABEL_17:
    sub_1B4D1EC(Master_object, v7);
  }
  return 0;
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
  if ( (byte_49BEBFC & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMasterData_UserServantMaster___, method);
    sub_1B4CF90(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v3);
    sub_1B4CF90(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v4);
    this = (CombineServantListViewItem_o *)sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_49BEBFC = 1;
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
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47012096(&v15, 0LL);
  this = (CombineServantListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (this = (CombineServantListViewItem_o *)DataManager__GetMasterData_object_(
                                                 (DataManager_o *)this,
                                                 (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
  {
LABEL_9:
    sub_1B4D1EC(this, method);
  }
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             v10,
             (const MethodInfo_319FEF8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  p_userSvtEntity->klass = (CGThumbnailListItem_c *)Entity;
  sub_1B4CF34(p_userSvtEntity, (int32_t)Entity, v12, v13);
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
  if ( (byte_49BEBFD & 1) == 0 )
  {
    this = (CombineServantListViewItem_o *)sub_1B4CF90(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
    byte_49BEBFD = 1;
  }
  userSvtEntity = v2->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_1B4D1EC(this, method);
  v4 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v7.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v7.fields.fakeValue = v4;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v6 = v7;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47012096(&v6, 0LL);
}


bool __fastcall CombineServantListViewItem__isCanNotSelectSecondStatusMaterial(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isStatusUpSvt
      && this->fields.rarity == 4
      && (this->fields.hpBase >= 1 && !this->fields.isHpUpMax || this->fields.atkBase >= 1 && !this->fields.isAtkUpMax);
}


bool __fastcall CombineServantListViewItem__isStatusMax(CombineServantListViewItem_o *this, const MethodInfo *method)
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


void __fastcall CombineServantListViewItem__setUserServantEntity(
        CombineServantListViewItem_o *this,
        UserServantEntity_o *entity,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.userSvtEntity = entity;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.userSvtEntity, (int32_t)entity, (int32_t)method, v3);
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
    sub_1B4D1EC(0LL, value);
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
    sub_1B4D1EC(0LL, value);
  this->fields.dragSelectNum = value - 1;
}


void __fastcall CombineServantListViewItem__set_IsHpStatusMax(
        CombineServantListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  if ( !this )
    sub_1B4D1EC(0LL, value);
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
    sub_1B4D1EC(0LL, value);
  this->fields.isNotSelectSecondStatusUpAtk = this->fields.atkBase > 0 && value;
}


void __fastcall CombineServantListViewItem__set_IsSecondHpStatusMax(
        CombineServantListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  if ( !this )
    sub_1B4D1EC(0LL, value);
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
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields._NoticeTween_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void __fastcall CombineServantListViewItem___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_49BEC0B & 1) == 0 )
  {
    sub_1B4CF90(&CombineServantListViewItem___c_TypeInfo, v1);
    byte_49BEC0B = 1;
  }
  v2 = (Il2CppObject *)sub_1B4D1DC(CombineServantListViewItem___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  CombineServantListViewItem___c_TypeInfo->static_fields->__9 = (struct CombineServantListViewItem___c_o *)v2;
  sub_1B4CF34((CGThumbnailListItem_o *)CombineServantListViewItem___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall CombineServantListViewItem___c___ctor(CombineServantListViewItem___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall CombineServantListViewItem___c___SetIsCombineExpCampaignTarget_b__119_0(
        CombineServantListViewItem___c_o *this,
        EventCampaignEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B4D1EC(this, 0LL);
  return x->fields.target == 2 || x->fields.target == 27;
}


void __fastcall CombineServantListViewItem___c__DisplayClass118_0___ctor(
        CombineServantListViewItem___c__DisplayClass118_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall CombineServantListViewItem___c__DisplayClass118_0___SetSortValue_b__0(
        CombineServantListViewItem___c__DisplayClass118_0_o *this,
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

  if ( (byte_49BEC0C & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMaster_EventCampaignMaster___, entity);
    sub_1B4CF90(&Method_DataManager_GetMaster_ServantFilterMaster___, v5);
    sub_1B4CF90(&DataManager_TypeInfo, v6);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v7);
    sub_1B4CF90(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_1B4CF90(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9);
    byte_49BEC0C = 1;
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
    IsLargeSuccessCampaignClassId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47012096(&v29, 0LL);
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
      IsLargeSuccessCampaignClassId = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_EventCampaignMaster___);
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
        IsLargeSuccessCampaignClassId = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_ServantFilterMaster___);
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
                return UserServantEntity__getEventUpVal_40806396(
                         (UserServantEntity_o *)IsLargeSuccessCampaignClassId,
                         v28->fields.setupInfo,
                         entity->fields.eventId,
                         0LL,
                         0LL);
            }
          }
        }
LABEL_34:
        sub_1B4D1EC(IsLargeSuccessCampaignClassId, v12);
      }
    }
  }
  return 1;
}