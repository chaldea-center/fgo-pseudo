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
  IconLabelInfo_o *v56; // x20
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  IconLabelInfo_o *v63; // x20
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  System_Collections_Generic_List_int__o *v70; // x20
  int64_t v71; // x2
  int32_t v72; // w3
  System_String_o *v73; // x4
  BattleSetupInfo_o *v74; // x5
  FollowerInfo_o *v75; // x6
  PartyListViewItem_o *v76; // x7
  System_Collections_Generic_List_int__o *v77; // x20
  int64_t v78; // x2
  int32_t v79; // w3
  System_String_o *v80; // x4
  BattleSetupInfo_o *v81; // x5
  FollowerInfo_o *v82; // x6
  PartyListViewItem_o *v83; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_userSvtEntity; // x21
  int64_t v85; // x2
  int32_t v86; // w3
  System_String_o *v87; // x4
  BattleSetupInfo_o *v88; // x5
  FollowerInfo_o *v89; // x6
  PartyListViewItem_o *v90; // x7
  int64_t Instance; // x0
  const MethodInfo *v92; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v93; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v94; // x20
  __int64 v95; // x23
  __int64 v96; // x24
  Il2CppObject *v97; // x0
  int64_t v98; // x2
  int32_t v99; // w3
  System_String_o *v100; // x4
  BattleSetupInfo_o *v101; // x5
  FollowerInfo_o *v102; // x6
  PartyListViewItem_o *v103; // x7
  int64_t v104; // x2
  int32_t v105; // w3
  System_String_o *v106; // x4
  BattleSetupInfo_o *v107; // x5
  FollowerInfo_o *v108; // x6
  PartyListViewItem_o *v109; // x7
  struct UserServantEntity_o *v110; // x8
  struct ServantEntity_o *servantEntity; // x8
  ServantLimitMaster_o *v112; // x20
  int32_t v113; // w24
  int64_t v114; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v115; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v116; // q1
  UserServantCollectionMaster_o *v117; // x20
  int64_t v118; // x24
  int v119; // w8
  bool *p_isStatusUpSvt; // x26
  int64_t v121; // x28
  struct UserServantEntity_o *v122; // x8
  int32_t v123; // w20
  BalanceConfig_c *v124; // x8
  struct BalanceConfig_StaticFields *static_fields; // x8
  struct UserServantEntity_o *v126; // x8
  __int128 v127; // q1
  __int64 v128; // x20
  const MethodInfo *v129; // x1
  int64_t UserSvtId; // x0
  unsigned int v131; // w8
  bool isLimitCountMax; // w8
  UserServantEntity_o *v133; // x8
  __int64 v134; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x25
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v137; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v140; // x8
  __int64 v141; // x9
  int32_t *v142; // x10
  __int64 v143; // x0
  _QWORD *v144; // x0
  __int64 v145; // x1
  __int64 methodPtr_low; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v147; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v148; // q0
  __int64 v149; // x22
  System_Collections_Generic_IEnumerator_T__c *v150; // x8
  __int64 v151; // x9
  int32_t *v152; // x10
  __int64 v153; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v154; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v155; // q0
  UserRecommendSupportMaster_o *v156; // x20
  UserServantEntity_o *v157; // x8
  UserServantEntity_o *v158; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v159; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v160; // q0
  int64_t v161; // x0
  __int128 v162; // q1
  Il2CppObject *v163; // x20
  struct ServantEntity_o *v164; // x8
  __int64 v165; // x24
  __int64 v166; // x29
  int64_t v167; // x25
  int32_t v168; // w8
  Il2CppObject *v169; // x20
  struct ServantEntity_o *v170; // x8
  __int64 v171; // x24
  __int64 v172; // x29
  int64_t v173; // x25
  struct System_Int32_array *commandCardParam; // x20
  int max_length; // w8
  __int64 v176; // x22
  int32_t v177; // w25
  UserServantEntity_o *v178; // x28
  bool v179; // w23
  __int64 v180; // x1
  System_Collections_Generic_IEnumerator_T__o *v181; // x25
  System_Collections_Generic_IEnumerator_T__c *v182; // x8
  __int64 v183; // x9
  int32_t *v184; // x10
  __int64 v185; // x0
  System_Collections_Generic_IEnumerator_T__c *v186; // x8
  __int64 v187; // x9
  int32_t *v188; // x10
  __int64 v189; // x0
  _QWORD *v190; // x0
  __int64 v191; // x1
  __int64 v192; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v193; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v194; // q0
  __int64 v195; // x22
  System_Collections_Generic_IEnumerator_T__c *v196; // x8
  __int64 v197; // x9
  int32_t *v198; // x10
  __int64 v199; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v200; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v201; // q0
  UserRecommendSupportMaster_o *v202; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v203; // x8
  __int64 v204; // x20
  __int64 v205; // x24
  int32_t v206; // w20
  struct UserServantEntity_o *v207; // x8
  __int128 v208; // q0
  int64_t v209; // x0
  __int128 v210; // q1
  int32_t SvtClassId; // w0
  int32_t SvtClassGroupType; // w20
  BalanceConfig_c *v213; // x0
  int32_t materialExp; // w20
  int SameClassExp; // w22
  double v216; // d0
  int32_t v217; // w8
  UserServantEntity_o *v218; // x8
  int32_t v219; // w20
  bool v220; // w8
  bool v221; // w8
  bool v222; // w8
  bool v223; // w8
  Il2CppObject *v224; // x20
  struct ServantEntity_o *v225; // x8
  __int64 v226; // x24
  __int64 v227; // x26
  int64_t v228; // x25
  unsigned int v229; // w8
  UserServantEntity_o *v230; // x8
  bool v231; // w8
  UserServantEntity_o *v232; // x8
  const MethodInfo *v233; // x1
  UserServantEntity_o *v234; // x8
  __int128 v235; // q0
  int64_t v236; // x0
  __int128 v237; // q1
  UserServantEntity_o *v238; // x9
  int32_t combineLimitId; // w20
  __int64 v240; // x24
  __int64 v241; // x25
  int32_t v242; // w25
  int64_t v243; // x20
  __int64 v244; // x22
  int64_t v245; // x24
  __int64 v246; // x8
  UserItemMaster_o *v247; // x25
  unsigned __int64 i; // x27
  UserServantEntity_o *v249; // x8
  __int128 v250; // q1
  int32_t v251; // w26
  int32_t v252; // w23
  UserServantEntity_o *v253; // x8
  bool isLevelMax; // w8
  UserServantEntity_o *v255; // x8
  UserServantEntity_o *v256; // x8
  const MethodInfo *v257; // x1
  UserServantEntity_o *v258; // x8
  __int128 v259; // q0
  int64_t v260; // x0
  __int128 v261; // q1
  UserServantEntity_o *v262; // x8
  UserServantEntity_o *v263; // x8
  __int128 v264; // q0
  int64_t v265; // x0
  __int128 v266; // q1
  UserServantEntity_o *v267; // x8
  UserServantEntity_o *v268; // x8
  __int128 v269; // q0
  int64_t v270; // x0
  __int128 v271; // q1
  int id; // w20
  int32_t lv; // w22
  int32_t SameSvtNpLvCache; // w0
  const MethodInfo *v275; // x4
  int32_t v276; // w20
  char v277; // w8
  int32_t v278; // w0
  int32_t v279; // w20
  int32_t v280; // w26
  int32_t v281; // w25
  int v282; // w22
  __int64 v283; // x1
  System_Collections_Generic_IEnumerator_T__o *v284; // x25
  System_Collections_Generic_IEnumerator_T__c *v285; // x8
  __int64 v286; // x9
  int32_t *v287; // x10
  __int64 v288; // x0
  System_Collections_Generic_IEnumerator_T__c *v289; // x8
  __int64 v290; // x9
  int32_t *v291; // x10
  __int64 v292; // x0
  _QWORD *v293; // x0
  __int64 v294; // x1
  __int64 v295; // x9
  UserServantEntity_o *v296; // x8
  __int128 v297; // q0
  __int64 v298; // x22
  System_Collections_Generic_IEnumerator_T__c *v299; // x8
  __int64 v300; // x9
  int32_t *v301; // x10
  __int64 v302; // x0
  UserServantEntity_o *v303; // x8
  __int128 v304; // q0
  UserRecommendSupportMaster_o *v305; // x20
  bool IsSettingServant; // w8
  UserServantEntity_o *v307; // x8
  CombineServantListViewItem_o *v308; // x8
  CombineServantListViewItem_o *v309; // x20
  struct UserServantEntity_o *v310; // x8
  __int128 v311; // q0
  int64_t v312; // x0
  __int128 v313; // q1
  int32_t v314; // w8
  UserServantEntity_o *v315; // x8
  UserServantEntity_o *v316; // x8
  bool v317; // w8
  UserServantEntity_o *v318; // x8
  UserServantEntity_o *v319; // x8
  __int128 v320; // q0
  int64_t v321; // x0
  __int128 v322; // q1
  ServantExceedEntity_o *SvtExceedEnt; // x0
  int32_t *v324; // x25
  CommonConsumeEntity_array *IdEntityList; // x0
  CommonConsumeEntity_array *v326; // x27
  System_Collections_Generic_HashSet_int__o *v327; // x20
  System_Collections_Generic_HashSet_int__o *v328; // x26
  int v329; // w8
  __int64 v330; // x24
  CommonConsumeEntity_o *v331; // x29
  UserServantEntity_o *v332; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v333; // x27
  __int64 v334; // x24
  __int64 v335; // x28
  UserServantEntity_o *v336; // x24
  System_Int32_array *v337; // x20
  System_Int32_array *v338; // x0
  __int64 v339; // x20
  __int64 v340; // x24
  UserServantEntity_o *v341; // x8
  UserServantEntity_o *v342; // x8
  UserServantEntity_o *v343; // x8
  __int128 v344; // q0
  int64_t v345; // x0
  __int128 v346; // q1
  int32_t maxFriendshipRank; // w20
  int v348; // w22
  int64_t v349; // x20
  __int64 v350; // x24
  int64_t v351; // x25
  UserItemMaster_o *v352; // x22
  unsigned __int64 v353; // x26
  __int64 v354; // x28
  bool v355; // w8
  UserServantEntity_o *v356; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  int64_t v358; // x2
  int32_t v359; // w3
  System_String_o *v360; // x4
  BattleSetupInfo_o *v361; // x5
  FollowerInfo_o *v362; // x6
  PartyListViewItem_o *v363; // x7
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  int64_t v365; // x2
  int32_t v366; // w3
  System_String_o *v367; // x4
  BattleSetupInfo_o *v368; // x5
  FollowerInfo_o *v369; // x6
  PartyListViewItem_o *v370; // x7
  int64_t v371; // x8
  struct ServantEntity_o *v372; // x9
  UserServantEntity_o *v373; // x8
  __int64 v374; // x20
  __int64 v375; // x21
  int32_t v376; // w8
  int v377; // [xsp+Ch] [xbp-494h]
  UserServantMaster_o *MasterData_object; // [xsp+18h] [xbp-488h]
  int64_t v379; // [xsp+20h] [xbp-480h]
  int64_t v380; // [xsp+28h] [xbp-478h]
  bool *p_isLimitUpItemNum; // [xsp+30h] [xbp-470h]
  struct IconLabelInfo_o **p_iconLabelInfo2; // [xsp+38h] [xbp-468h]
  int64_t v383; // [xsp+40h] [xbp-460h]
  bool v384; // [xsp+48h] [xbp-458h]
  bool v385; // [xsp+48h] [xbp-458h]
  bool v387; // [xsp+4Ch] [xbp-454h]
  bool *p_isChoice; // [xsp+58h] [xbp-448h]
  bool v390; // [xsp+64h] [xbp-43Ch]
  struct ServantEntity_o **p_servantEntity; // [xsp+68h] [xbp-438h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v392; // [xsp+70h] [xbp-430h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v393; // [xsp+90h] [xbp-410h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v394; // [xsp+B0h] [xbp-3F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v395; // [xsp+D0h] [xbp-3D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v396; // [xsp+F0h] [xbp-3B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v397; // [xsp+110h] [xbp-390h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v398; // [xsp+130h] [xbp-370h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v399; // [xsp+150h] [xbp-350h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v400; // [xsp+170h] [xbp-330h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v401; // [xsp+190h] [xbp-310h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v402; // [xsp+1B0h] [xbp-2F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v403; // [xsp+1D0h] [xbp-2D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v404; // [xsp+1F0h] [xbp-2B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v405; // [xsp+210h] [xbp-290h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v406; // [xsp+230h] [xbp-270h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v407; // [xsp+250h] [xbp-250h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v408; // [xsp+270h] [xbp-230h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v409; // [xsp+290h] [xbp-210h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v410; // [xsp+2B0h] [xbp-1F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v411; // [xsp+2D0h] [xbp-1D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v412; // [xsp+2F0h] [xbp-1B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v413; // [xsp+310h] [xbp-190h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v414; // [xsp+330h] [xbp-170h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v415; // [xsp+350h] [xbp-150h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v416; // [xsp+370h] [xbp-130h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v417; // [xsp+390h] [xbp-110h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v418; // [xsp+3B0h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v419; // [xsp+3D0h] [xbp-D0h]
  UserItemEntity_o *v420; // [xsp+3F8h] [xbp-A8h] BYREF
  int32_t tdMaxLv; // [xsp+404h] [xbp-9Ch] BYREF
  int32_t tdLv[2]; // [xsp+408h] [xbp-98h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+410h] [xbp-90h] BYREF
  UserItemEntity_o *v424; // [xsp+418h] [xbp-88h] BYREF
  __int64 v425; // [xsp+420h] [xbp-80h] BYREF
  UserServantCommandCodeEntity_o *v426; // [xsp+428h] [xbp-78h] BYREF
  UserServantCommandCardEntity_o *v427; // [xsp+430h] [xbp-70h] BYREF
  UserServantCommandCodeEntity_o *entity; // [xsp+438h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v429; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v430; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v431; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v432; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v433; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v434; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v435; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v436; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v437; // 0:x0.16

  if ( (byte_4B6A81E & 1) == 0 )
  {
    sub_1BE4ACC(&BalanceConfig_TypeInfo, *(_QWORD *)&type);
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v17);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_CombineLimitMaster___, v18);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_CombineMaterialMaster___, v19);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_FriendshipMaster___, v20);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ServantClassMaster___, v21);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ServantLimitMaster___, v22);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ServantMaster___, v23);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___, v24);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_TreasureDvcMaster___, v25);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_UserItemMaster___, v26);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v27);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_UserServantCommandCardMaster___, v28);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___, v29);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_UserServantLeaderMaster___, v30);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_UserServantMaster___, v31);
    sub_1BE4ACC(&Method_DataManager_GetMaster_CommonConsumeMaster___, v32);
    sub_1BE4ACC(&Method_DataManager_GetMaster_SvtCoinMaster___, v33);
    sub_1BE4ACC(&Method_DataManager_GetMaster_UserRecommendSupportMaster___, v34);
    sub_1BE4ACC(&DataManager_TypeInfo, v35);
    sub_1BE4ACC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v36);
    sub_1BE4ACC(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v37);
    sub_1BE4ACC(&Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__GetEntity__, v38);
    sub_1BE4ACC(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__, v39);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_ToArray_int___, v40);
    sub_1BE4ACC(&Method_System_Collections_Generic_HashSet_int__Add__, v41);
    sub_1BE4ACC(&Method_System_Collections_Generic_HashSet_int___ctor__, v42);
    sub_1BE4ACC(&System_Collections_Generic_HashSet_int__TypeInfo, v43);
    sub_1BE4ACC(&System_IDisposable_TypeInfo, v44);
    sub_1BE4ACC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v45);
    sub_1BE4ACC(&System_Collections_IEnumerator_TypeInfo, v46);
    sub_1BE4ACC(&IconLabelInfo_TypeInfo, v47);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int___ctor__, v48);
    sub_1BE4ACC(&System_Collections_Generic_List_int__TypeInfo, v49);
    sub_1BE4ACC(&System_Math_TypeInfo, v50);
    sub_1BE4ACC(&NetworkManager_TypeInfo, v51);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v52);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v53);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v54);
    sub_1BE4ACC(&UserServantLeaderEntity_TypeInfo, v55);
    byte_4B6A81E = 1;
  }
  entity = 0LL;
  v427 = 0LL;
  v426 = 0LL;
  v425 = 0LL;
  v424 = 0LL;
  tdInfo = 0LL;
  *(_QWORD *)tdLv = 0LL;
  tdMaxLv = 0;
  v420 = 0LL;
  v56 = (IconLabelInfo_o *)sub_1BE4D18(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v56, 0LL);
  this->fields.iconLabelInfo1 = v56;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.iconLabelInfo1, (int64_t)v56, v57, v58, v59, v60, v61, v62);
  v63 = (IconLabelInfo_o *)sub_1BE4D18(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v63, 0LL);
  this->fields.iconLabelInfo2 = v63;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.iconLabelInfo2, (int64_t)v63, v64, v65, v66, v67, v68, v69);
  v70 = (System_Collections_Generic_List_int__o *)sub_1BE4D18(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v70,
    (const MethodInfo_35CE9AC *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.enableSkillUp = v70;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.enableSkillUp, (int64_t)v70, v71, v72, v73, v74, v75, v76);
  v77 = (System_Collections_Generic_List_int__o *)sub_1BE4D18(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v77,
    (const MethodInfo_35CE9AC *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.enableAppendSkillUp = v77;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.enableAppendSkillUp,
    (int64_t)v77,
    v78,
    v79,
    v80,
    v81,
    v82,
    v83);
  ListViewItem___ctor((ListViewItem_o *)this, 0LL);
  this->fields.userSvtEntity = userSvtEntity;
  p_userSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userSvtEntity;
  this->fields.type = type;
  this->fields.index = index;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.userSvtEntity,
    (int64_t)userSvtEntity,
    v85,
    v86,
    v87,
    v88,
    v89,
    v90);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_543;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ServantMaster___);
  v93 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_543;
  v94 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v96 = *(_QWORD *)&v93[5].fields.currentCryptoKey;
  v95 = *(_QWORD *)&v93[5].fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v429.fields.currentCryptoKey = v96;
  *(_QWORD *)&v429.fields.fakeValue = v95;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v429, 0LL);
  if ( !v94 )
    goto LABEL_543;
  v97 = DataMasterBase_object__object__int___GetEntity(
          v94,
          Instance,
          (const MethodInfo_31FD7C4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)v97;
  p_servantEntity = &this->fields.servantEntity;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.servantEntity, (int64_t)v97, v98, v99, v100, v101, v102, v103);
  this->fields.setupInfo = setupInfo;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.setupInfo,
    (int64_t)setupInfo,
    v104,
    v105,
    v106,
    v107,
    v108,
    v109);
  v110 = this->fields.userSvtEntity;
  this->fields.isEventUpVal = 0;
  *(_QWORD *)&this->fields.bonusKind = 1LL;
  if ( !v110 )
    goto LABEL_543;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v110->fields.svtId, 0LL);
  servantEntity = this->fields.servantEntity;
  this->fields.svtId = Instance;
  if ( !servantEntity )
    goto LABEL_543;
  this->fields.classId = servantEntity->fields.classId;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_543;
  MasterData_object = (UserServantMaster_o *)DataManager__GetMasterData_object_(
                                               (DataManager_o *)Instance,
                                               (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_543;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtEntity )
    goto LABEL_543;
  v112 = (ServantLimitMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060((*p_userSvtEntity)[5], 0LL);
  if ( !*p_userSvtEntity )
    goto LABEL_543;
  v113 = Instance;
  v384 = isMtSvt;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060((*p_userSvtEntity)[6], 0LL);
  if ( !v112 )
    goto LABEL_543;
  Instance = (int64_t)ServantLimitMaster__GetEntity(v112, v113, Instance, 0LL);
  if ( !Instance )
    goto LABEL_543;
  v114 = Instance;
  this->fields.rarity = *(_DWORD *)(Instance + 24);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_543;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v115 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_543;
  v116 = v115[4];
  v117 = (UserServantCollectionMaster_o *)Instance;
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v419.fields.currentCryptoKey = v115[3];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v419.fields.fakeValue = v116;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v418 = v419;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v418, 0LL);
  if ( !*p_userSvtEntity )
    goto LABEL_543;
  v118 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060((*p_userSvtEntity)[5], 0LL);
  if ( !v117 )
    goto LABEL_543;
  Instance = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(v117, v118, Instance, 0LL);
  if ( !Instance )
    goto LABEL_543;
  v383 = Instance;
  UserServantCollectionEntity__getFriendShipRankInfo(
    (UserServantCollectionEntity_o *)Instance,
    &this->fields.friendship,
    &this->fields.friendshipMax,
    0LL);
  Instance = (int64_t)UserGameMaster__getSelfUserGame(0LL);
  if ( !Instance )
    goto LABEL_543;
  v119 = *(_DWORD *)(Instance + 96);
  *(_DWORD *)&this->fields.isStatusUpSvt = 0;
  p_isStatusUpSvt = &this->fields.isStatusUpSvt;
  v377 = v119;
  *(_WORD *)&this->fields.isFavorite = 0;
  *(_WORD *)&this->fields.isLock = 0;
  *(_DWORD *)&this->fields.isChoice = 0;
  this->fields.isMaxSelect = 0;
  *(_QWORD *)&this->fields.isLimitUpItemNum = 0LL;
  v121 = Instance;
  Instance = (int64_t)this->fields.userSvtEntity;
  p_isChoice = &this->fields.isChoice;
  p_isLimitUpItemNum = &this->fields.isLimitUpItemNum;
  *(_WORD *)&this->fields.isAllAppendSkillLock = 0;
  this->fields.isLvMax = 0;
  *(_WORD *)&this->fields.isEventJoin = 0;
  this->fields.isHeroineSvt = 0;
  *(_DWORD *)&this->fields.isAppendSkillLvSame = 0;
  this->fields.isMaterialTdSvt = 0;
  if ( !Instance )
    goto LABEL_543;
  Instance = UserServantEntity__getLimitCntMax((UserServantEntity_o *)Instance, 0LL);
  v122 = this->fields.userSvtEntity;
  this->fields.maxLimitCnt = Instance;
  if ( !v122 )
    goto LABEL_543;
  this->fields.currentLimitCnt = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(
                                   v122->fields.limitCount,
                                   0LL);
  this->fields.isLvExceedItemNum = 0;
  this->fields.isCanNotLock = 0;
  *(_DWORD *)&this->fields.isBaseLvMax = 0;
  *(_QWORD *)&this->fields.isAtkUpMax = 0LL;
  *(_DWORD *)&this->fields.isNotSelectSecondStatusUpAtk = 0;
  Instance = (int64_t)this->fields.userSvtEntity;
  this->fields.dragSelectNum = -1;
  if ( !Instance )
    goto LABEL_543;
  v123 = *(_DWORD *)(Instance + 276);
  v124 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v124 = BalanceConfig_TypeInfo;
    Instance = (int64_t)*p_userSvtEntity;
  }
  static_fields = v124->static_fields;
  this->fields.hpReinforceValue = static_fields->StatusUpAdjustHp * v123;
  if ( !Instance )
    goto LABEL_543;
  v380 = v114;
  this->fields.atkReinforceValue = static_fields->StatusUpAdjustAtk * *(_DWORD *)(Instance + 272);
  UserServantEntity__getAdjustMaxData(
    (UserServantEntity_o *)Instance,
    &this->fields.nowMaxHpReinforceValue,
    &this->fields.nowMaxAtkReinforceValue,
    0LL);
  v126 = this->fields.userSvtEntity;
  *(_WORD *)&this->fields.isEquipedCmdCard = 0;
  if ( !v126 )
    goto LABEL_543;
  v127 = *(_OWORD *)&v126->fields.id.fields.fakeValue;
  v128 = *(_QWORD *)(v121 + 120);
  v390 = isParty;
  *(_OWORD *)&v417.fields.currentCryptoKey = *(_OWORD *)&v126->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v417.fields.fakeValue = v127;
  this->fields.isPush = v128 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v417, 0LL);
  UserSvtId = CombineServantListViewItem__get_UserSvtId(this, v129);
  EventFortificationDataLogic__SetFortification(
    &this->fields.isFortification,
    &this->fields.fortificationName,
    &this->fields.fortificationDetailName,
    UserSvtId,
    0LL);
  v131 = this->fields.type;
  v379 = v121;
  if ( v131 > 0xA || ((1 << v131) & 0x481) == 0 )
    goto LABEL_142;
  Instance = (int64_t)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_543;
  Instance = UserServantEntity__isLevelMax((UserServantEntity_o *)Instance, 0LL);
  if ( (Instance & 1) != 0 )
  {
    Instance = (int64_t)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_543;
    Instance = UserServantEntity__isAdjustHpMax((UserServantEntity_o *)Instance, 0LL);
    if ( (Instance & 1) != 0 )
    {
      Instance = (int64_t)*p_userSvtEntity;
      if ( !*p_userSvtEntity )
        goto LABEL_543;
      Instance = UserServantEntity__isAdjustAtkMax((UserServantEntity_o *)Instance, 0LL);
      if ( (Instance & 1) != 0 )
      {
        Instance = (int64_t)*p_userSvtEntity;
        if ( !*p_userSvtEntity )
          goto LABEL_543;
        Instance = UserServantEntity__isSecondAdjustHpMax((UserServantEntity_o *)Instance, 0LL);
        if ( (Instance & 1) != 0 )
        {
          Instance = (int64_t)*p_userSvtEntity;
          if ( !*p_userSvtEntity )
            goto LABEL_543;
          Instance = UserServantEntity__isSecondAdjustAtkMax((UserServantEntity_o *)Instance, 0LL);
          if ( (Instance & 1) != 0 )
            this->fields.isLvMax = 1;
        }
      }
    }
  }
  if ( !userSvtEntity )
    goto LABEL_543;
  isLimitCountMax = UserServantEntity__isLimitCountMax(userSvtEntity, 0LL);
  Instance = (int64_t)this->fields.userSvtEntity;
  this->fields.isLimitCntMax = isLimitCountMax;
  this->fields.isParty = v390;
  if ( !Instance )
    goto LABEL_543;
  Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL);
  v133 = this->fields.userSvtEntity;
  this->fields.isLock = Instance & 1;
  if ( !v133 )
    goto LABEL_543;
  *p_isChoice = UserServantEntity__IsChoice(v133, 0LL);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_543;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserServantLeaderMaster___);
  if ( !Instance )
    goto LABEL_543;
  Instance = *(_QWORD *)(Instance + 32);
  if ( !Instance )
    goto LABEL_543;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 (const MethodInfo_319A36C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BE4D28(0LL, v134);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v137 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v137;
        p_offset += 4;
        if ( !v137 )
          goto LABEL_55;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_55:
      p_method = sub_1C36AAC(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v140 = Enumerator->klass;
    v141 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v142 = &v140->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v142 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v141;
        v142 += 4;
        if ( !v141 )
          goto LABEL_62;
      }
      v143 = (__int64)&v140->vtable[*v142].method;
    }
    else
    {
LABEL_62:
      v143 = sub_1C36AAC(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v144 = (_QWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v143)(
                       Enumerator,
                       *(_QWORD *)(v143 + 8));
    if ( !v144 )
      goto LABEL_545;
    methodPtr_low = LOBYTE(UserServantLeaderEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*v144 + 304LL) < (unsigned int)methodPtr_low
      || *(UserServantLeaderEntity_c **)(*(_QWORD *)(*v144 + 200LL) + 8 * methodPtr_low - 8) != UserServantLeaderEntity_TypeInfo )
    {
      sub_1BE4FE8(v144);
LABEL_545:
      sub_1BE4D28(v144, v145);
    }
    v147 = *p_userSvtEntity;
    if ( !*p_userSvtEntity )
      sub_1BE4D28(v144, UserServantLeaderEntity_TypeInfo);
    v148 = v147[2];
    v149 = v144[7];
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v419.fields.currentCryptoKey = v147[1];
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v419.fields.fakeValue = v148;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v416 = v419;
    if ( v149 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v416, 0LL) )
    {
      this->fields.isUseSupport = 1;
      break;
    }
  }
  v150 = Enumerator->klass;
  v151 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v152 = &v150->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v152 - 1) != System_IDisposable_TypeInfo )
    {
      --v151;
      v152 += 4;
      if ( !v151 )
        goto LABEL_76;
    }
    v153 = (__int64)&v150->vtable[*v152].method;
  }
  else
  {
LABEL_76:
    v153 = sub_1C36AAC(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v153)(
    Enumerator,
    *(_QWORD *)(v153 + 8));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_UserRecommendSupportMaster___);
  v154 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_543;
  v155 = v154[2];
  v156 = (UserRecommendSupportMaster_o *)Instance;
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v419.fields.currentCryptoKey = v154[1];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v419.fields.fakeValue = v155;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v415 = v419;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v415, 0LL);
  if ( !v156 )
    goto LABEL_543;
  Instance = UserRecommendSupportMaster__IsSettingServant(v156, Instance, 0, 0LL);
  v157 = this->fields.userSvtEntity;
  this->fields.isUseRecommendSupport = Instance & 1;
  if ( !v157 )
    goto LABEL_543;
  Instance = UserServantEntity__IsEventJoin(v157, 0LL);
  v158 = this->fields.userSvtEntity;
  this->fields.isEventJoin = Instance & 1;
  if ( !v158 )
    goto LABEL_543;
  Instance = UserServantEntity__IsHeroine(v158, 0LL);
  if ( (Instance & 1) != 0 )
    this->fields.isHeroineSvt = 1;
  if ( baseUsrSvtData )
  {
    v159 = *p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_543;
    v160 = v159[2];
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v419.fields.currentCryptoKey = v159[1];
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v419.fields.fakeValue = v160;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v414 = v419;
    v161 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v414, 0LL);
    v162 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
    *(_OWORD *)&v413.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v413.fields.fakeValue = v162;
    if ( v161 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v413, 0LL) )
      this->fields.isBaseSvt = 1;
  }
  Instance = (int64_t)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_543;
  if ( UserServantEntity__IsCombineExp((UserServantEntity_o *)Instance, 0LL) )
    this->fields.isExpUpSvt = 1;
  Instance = (int64_t)*p_servantEntity;
  if ( !*p_servantEntity )
    goto LABEL_543;
  if ( ServantEntity__get_IsStatusUp((ServantEntity_o *)Instance, 0LL) )
    *p_isStatusUpSvt = 1;
  Instance = (int64_t)*p_servantEntity;
  if ( !*p_servantEntity )
    goto LABEL_543;
  if ( ServantEntity__get_IsServantMaterialTd((ServantEntity_o *)Instance, 0LL) )
    this->fields.isMaterialTdSvt = 1;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_543;
  v163 = DataManager__GetMasterData_object_(
           (DataManager_o *)Instance,
           (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B61717 )
  {
    sub_1BE4ACC(&NetworkManager_TypeInfo, v92);
    byte_4B61717 = 1;
  }
  Instance = (int64_t)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (int64_t)NetworkManager_TypeInfo;
  }
  v164 = *p_servantEntity;
  if ( !*p_servantEntity )
    goto LABEL_543;
  v166 = *(_QWORD *)&v164->fields.id.fields.currentCryptoKey;
  v165 = *(_QWORD *)&v164->fields.id.fields.fakeValue;
  v167 = *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v430.fields.currentCryptoKey = v166;
  *(_QWORD *)&v430.fields.fakeValue = v165;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v430, 0LL);
  if ( !v163 )
    goto LABEL_543;
  Instance = UserServantCommandCodeMaster__TryGetEntity(
               (UserServantCommandCodeMaster_o *)v163,
               &entity,
               v167,
               (int)Instance,
               0LL);
  if ( (Instance & 1) != 0 )
  {
    Instance = (int64_t)entity;
    if ( !entity )
      goto LABEL_543;
    this->fields.isEquipedCmdCard = UserServantCommandCodeEntity__IsEquipedCommandCode(entity, 0LL);
    Instance = (int64_t)entity;
    if ( !entity )
      goto LABEL_543;
    Instance = UserServantCommandCodeEntity__IsCommandCardSlotOpen(entity, 0LL);
    this->fields.isCmdCardSlotOpen = Instance & 1;
  }
  v168 = this->fields.type;
  if ( v168 == 10 )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_543;
    v169 = DataManager__GetMasterData_object_(
             (DataManager_o *)Instance,
             (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserServantCommandCardMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4B61717 )
    {
      sub_1BE4ACC(&NetworkManager_TypeInfo, v92);
      byte_4B61717 = 1;
    }
    Instance = (int64_t)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = (int64_t)NetworkManager_TypeInfo;
    }
    v170 = *p_servantEntity;
    if ( !*p_servantEntity )
      goto LABEL_543;
    v172 = *(_QWORD *)&v170->fields.id.fields.currentCryptoKey;
    v171 = *(_QWORD *)&v170->fields.id.fields.fakeValue;
    v173 = *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v431.fields.currentCryptoKey = v172;
    *(_QWORD *)&v431.fields.fakeValue = v171;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v431, 0LL);
    if ( !v169 )
      goto LABEL_543;
    Instance = UserServantCommandCardMaster__TryGetEntity(
                 (UserServantCommandCardMaster_o *)v169,
                 &v427,
                 v173,
                 (int)Instance,
                 0LL);
    if ( (Instance & 1) != 0 )
    {
      if ( !v427 )
        goto LABEL_543;
      commandCardParam = v427->fields.commandCardParam;
      if ( commandCardParam )
      {
        max_length = commandCardParam->max_length;
        if ( max_length >= 1 )
        {
          v176 = 0LL;
          while ( 1 )
          {
            if ( (unsigned int)v176 >= max_length )
              goto LABEL_553;
            v177 = commandCardParam->m_Items[v176 + 1];
            Instance = (int64_t)BalanceConfig_TypeInfo;
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              Instance = (int64_t)BalanceConfig_TypeInfo;
            }
            if ( v177 < *(_DWORD *)(*(_QWORD *)(Instance + 184) + 740LL) )
              break;
            this->fields.isCommandCardExceedMax = 1;
            max_length = commandCardParam->max_length;
            if ( (int)++v176 >= max_length )
              goto LABEL_142;
          }
          this->fields.isCommandCardExceedMax = 0;
        }
      }
    }
LABEL_142:
    v168 = this->fields.type;
  }
  v178 = baseUsrSvtData;
  v387 = isFavorite;
  v179 = v384;
  if ( v168 == 1 )
  {
    this->fields.isMaterialSvt = v179;
    this->fields.isParty = v390;
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_543;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserServantLeaderMaster___);
    if ( !Instance )
      goto LABEL_543;
    Instance = *(_QWORD *)(Instance + 32);
    if ( !Instance )
      goto LABEL_543;
    v181 = System_Collections_ObjectModel_Collection_object___GetEnumerator(
             (System_Collections_ObjectModel_Collection_T__o *)Instance,
             (const MethodInfo_319A36C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    if ( !v181 )
      sub_1BE4D28(0LL, v180);
    while ( 1 )
    {
      v182 = v181->klass;
      v183 = *(unsigned __int16 *)(&v181->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v181->klass->_2.bitflags2 + 3) )
      {
        v184 = &v182->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)v184 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v183;
          v184 += 4;
          if ( !v183 )
            goto LABEL_152;
        }
        v185 = (__int64)&v182->vtable[*v184].method;
      }
      else
      {
LABEL_152:
        v185 = sub_1C36AAC(v181, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v185)(
              v181,
              *(_QWORD *)(v185 + 8)) & 1) == 0 )
        break;
      v186 = v181->klass;
      v187 = *(unsigned __int16 *)(&v181->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v181->klass->_2.bitflags2 + 3) )
      {
        v188 = &v186->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v188 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
        {
          --v187;
          v188 += 4;
          if ( !v187 )
            goto LABEL_159;
        }
        v189 = (__int64)&v186->vtable[*v188].method;
      }
      else
      {
LABEL_159:
        v189 = sub_1C36AAC(v181, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
      }
      v190 = (_QWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v189)(
                         v181,
                         *(_QWORD *)(v189 + 8));
      if ( !v190 )
        goto LABEL_549;
      v192 = LOBYTE(UserServantLeaderEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*v190 + 304LL) < (unsigned int)v192
        || *(UserServantLeaderEntity_c **)(*(_QWORD *)(*v190 + 200LL) + 8 * v192 - 8) != UserServantLeaderEntity_TypeInfo )
      {
        sub_1BE4FE8(v190);
LABEL_548:
        sub_1BE4FE8(v293);
LABEL_549:
        sub_1BE4D28(v190, v191);
      }
      v193 = *p_userSvtEntity;
      if ( !*p_userSvtEntity )
        sub_1BE4D28(v190, UserServantLeaderEntity_TypeInfo);
      v194 = v193[2];
      v195 = v190[7];
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v419.fields.currentCryptoKey = v193[1];
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v419.fields.fakeValue = v194;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v412 = v419;
      if ( v195 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v412, 0LL) )
      {
        this->fields.isUseSupport = 1;
        break;
      }
    }
    v196 = v181->klass;
    v197 = *(unsigned __int16 *)(&v181->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v181->klass->_2.bitflags2 + 3) )
    {
      v198 = &v196->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v198 - 1) != System_IDisposable_TypeInfo )
      {
        --v197;
        v198 += 4;
        if ( !v197 )
          goto LABEL_173;
      }
      v199 = (__int64)&v196->vtable[*v198].method;
    }
    else
    {
LABEL_173:
      v199 = sub_1C36AAC(v181, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v199)(v181, *(_QWORD *)(v199 + 8));
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Instance = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_UserRecommendSupportMaster___);
    v200 = *p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_543;
    v201 = v200[2];
    v202 = (UserRecommendSupportMaster_o *)Instance;
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v419.fields.currentCryptoKey = v200[1];
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v419.fields.fakeValue = v201;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v411 = v419;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v411, 0LL);
    if ( !v202 )
      goto LABEL_543;
    this->fields.isUseRecommendSupport = UserRecommendSupportMaster__IsSettingServant(v202, Instance, 0, 0LL);
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_543;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_CombineMaterialMaster___);
    if ( !*p_servantEntity )
      goto LABEL_543;
    if ( !*p_userSvtEntity )
      goto LABEL_543;
    if ( !Instance )
      goto LABEL_543;
    Instance = (int64_t)CombineMaterialMaster__GetEntity(
                          (CombineMaterialMaster_o *)Instance,
                          (*p_servantEntity)->fields.combineMaterialId,
                          (*p_userSvtEntity)[16].fields.currentCryptoKey,
                          0LL);
    if ( !Instance )
      goto LABEL_543;
    this->fields.materialExp = *(_DWORD *)(Instance + 24);
    if ( baseUsrSvtData )
    {
      v203 = *p_userSvtEntity;
      if ( !*p_userSvtEntity )
        goto LABEL_543;
      v205 = *(_QWORD *)&v203[5].fields.currentCryptoKey;
      v204 = *(_QWORD *)&v203[5].fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v432.fields.currentCryptoKey = v205;
      *(_QWORD *)&v432.fields.fakeValue = v204;
      v206 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v432, 0LL);
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(baseUsrSvtData->fields.svtId, 0LL);
      if ( v206 == (_DWORD)Instance )
      {
        v207 = this->fields.userSvtEntity;
        this->fields.isLimitCntTarget = 1;
        if ( !v207 )
          goto LABEL_543;
        v208 = *(_OWORD *)&v207->fields.id.fields.fakeValue;
        *(_OWORD *)&v419.fields.currentCryptoKey = *(_OWORD *)&v207->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v419.fields.fakeValue = v208;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v410 = v419;
        v209 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v410, 0LL);
        v210 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
        *(_OWORD *)&v409.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v409.fields.fakeValue = v210;
        if ( v209 != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v409, 0LL) )
          this->fields.isSameBaseSvt = 1;
      }
      Instance = UserServantEntity__getSvtClassId(baseUsrSvtData, 1, 0LL);
      if ( !*p_userSvtEntity )
        goto LABEL_543;
      if ( UserServantEntity__getSvtClassId((UserServantEntity_o *)*p_userSvtEntity, 1, 0LL) == (_DWORD)Instance )
        this->fields.isSameClass = 1;
      Instance = (int64_t)*p_servantEntity;
      if ( !*p_servantEntity )
        goto LABEL_543;
      if ( ServantEntity__get_IsStatusUp((ServantEntity_o *)Instance, 0LL) )
        goto LABEL_203;
      Instance = (int64_t)*p_servantEntity;
      if ( !*p_servantEntity )
        goto LABEL_543;
      if ( ServantEntity__get_IsCombineMaterial((ServantEntity_o *)Instance, 0LL) )
      {
LABEL_203:
        Instance = (int64_t)*p_servantEntity;
        if ( !*p_servantEntity )
          goto LABEL_543;
        if ( ServantEntity__get_IsAllClass((ServantEntity_o *)Instance, 0LL) )
          this->fields.isSameClass = 1;
      }
      this->fields.isBaseLvMax = UserServantEntity__isLevelMax(baseUsrSvtData, 0LL);
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_543;
      Instance = (int64_t)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ServantClassMaster___);
      if ( !*p_servantEntity )
        goto LABEL_543;
      if ( !Instance )
        goto LABEL_543;
      Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                            (*p_servantEntity)->fields.classId,
                            (const MethodInfo_31FD7C4 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_543;
      HIDWORD(v425) = *(_DWORD *)(Instance + 56);
      SvtClassId = UserServantEntity__getSvtClassId(baseUsrSvtData, 0, 0LL);
      SvtClassGroupType = UserServantEntity__getSvtClassGroupType(baseUsrSvtData, SvtClassId, 0LL);
      if ( System_Int32__Equals_63504244((int32_t)&v425 + 4, 3, 0LL)
        || System_Int32__Equals_63504244((int32_t)&v425 + 4, SvtClassGroupType, 0LL) && this->fields.isSameClass )
      {
        v213 = BalanceConfig_TypeInfo;
        materialExp = this->fields.materialExp;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v213 = BalanceConfig_TypeInfo;
        }
        SameClassExp = v213->static_fields->SameClassExp;
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        v216 = (double)materialExp * (double)SameClassExp / 1000.0;
        v217 = vcvtpd_s64_f64(v216);
        if ( ceil(v216) == INFINITY )
          v217 = 0x80000000;
        this->fields.materialExp = v217;
      }
    }
    else
    {
      this->fields.isLimitCntTarget = 0;
    }
    Instance = (int64_t)this->fields.userSvtEntity;
    this->fields.isFavorite = v387;
    if ( !Instance )
      goto LABEL_543;
    Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL);
    v218 = this->fields.userSvtEntity;
    this->fields.isLock = Instance & 1;
    if ( !v218 )
      goto LABEL_543;
    *p_isChoice = UserServantEntity__IsChoice(v218, 0LL);
    Instance = (int64_t)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_543;
    this->fields.isEventJoin = UserServantEntity__IsEventJoin((UserServantEntity_o *)Instance, 0LL);
    Instance = (int64_t)this->fields.userSvtEntity;
    this->fields.hpBase = *(_DWORD *)(v380 + 36);
    this->fields.atkBase = *(_DWORD *)(v380 + 44);
    if ( !Instance )
      goto LABEL_543;
    if ( UserServantEntity__IsHeroine((UserServantEntity_o *)Instance, 0LL) )
      this->fields.isHeroineSvt = 1;
    Instance = (int64_t)*p_servantEntity;
    if ( !*p_servantEntity )
      goto LABEL_543;
    Instance = ServantEntity__get_IsStatusUp((ServantEntity_o *)Instance, 0LL);
    if ( (Instance & 1) != 0 )
    {
      *p_isStatusUpSvt = 1;
      if ( !baseUsrSvtData )
        goto LABEL_543;
      v219 = UserServantEntity__getSvtClassId(baseUsrSvtData, 0, 0LL);
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_543;
      Instance = (int64_t)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ServantClassMaster___);
      if ( !*p_servantEntity )
        goto LABEL_543;
      if ( !Instance )
        goto LABEL_543;
      Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                            (*p_servantEntity)->fields.classId,
                            (const MethodInfo_31FD7C4 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_543;
      LODWORD(v425) = *(_DWORD *)(Instance + 56);
      if ( !*p_servantEntity )
        goto LABEL_543;
      if ( (*p_servantEntity)->fields.classId == v219 || System_Int32__Equals_63504244((int32_t)&v425, 3, 0LL) )
      {
        this->fields.isCanStUp = 1;
        v220 = UserServantEntity__isAdjustAtkMax(baseUsrSvtData, 0LL) && this->fields.atkBase > 0;
        this->fields.isAtkUpMax = v220;
        v221 = UserServantEntity__isAdjustHpMax(baseUsrSvtData, 0LL) && this->fields.hpBase > 0;
        this->fields.isHpUpMax = v221;
        v222 = UserServantEntity__isSecondAdjustAtkMax(baseUsrSvtData, 0LL) && this->fields.atkBase > 0;
        this->fields.isAtkSecondUpMax = v222;
        v223 = UserServantEntity__isSecondAdjustHpMax(baseUsrSvtData, 0LL) && this->fields.hpBase > 0;
        this->fields.isHpSecondUpMax = v223;
      }
    }
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_543;
    v224 = DataManager__GetMasterData_object_(
             (DataManager_o *)Instance,
             (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4B61717 )
    {
      sub_1BE4ACC(&NetworkManager_TypeInfo, v92);
      byte_4B61717 = 1;
    }
    Instance = (int64_t)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = (int64_t)NetworkManager_TypeInfo;
    }
    v225 = *p_servantEntity;
    if ( !*p_servantEntity )
      goto LABEL_543;
    v227 = *(_QWORD *)&v225->fields.id.fields.currentCryptoKey;
    v226 = *(_QWORD *)&v225->fields.id.fields.fakeValue;
    v228 = *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v433.fields.currentCryptoKey = v227;
    *(_QWORD *)&v433.fields.fakeValue = v226;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v433, 0LL);
    if ( !v224 )
      goto LABEL_543;
    Instance = UserServantCommandCodeMaster__TryGetEntity(
                 (UserServantCommandCodeMaster_o *)v224,
                 &v426,
                 v228,
                 (int)Instance,
                 0LL);
    if ( (Instance & 1) != 0 )
    {
      Instance = (int64_t)v426;
      if ( !v426 )
        goto LABEL_543;
      this->fields.isEquipedCmdCard = UserServantCommandCodeEntity__IsEquipedCommandCode(v426, 0LL);
      Instance = (int64_t)v426;
      if ( !v426 )
        goto LABEL_543;
      Instance = UserServantCommandCodeEntity__IsCommandCardSlotOpen(v426, 0LL);
      this->fields.isCmdCardSlotOpen = Instance & 1;
    }
  }
  v229 = this->fields.type;
  if ( v229 == 9 )
  {
    if ( !userSvtEntity )
      goto LABEL_543;
    Instance = UserServantEntity__isLimitCountMax(userSvtEntity, 0LL);
    v253 = this->fields.userSvtEntity;
    this->fields.isLimitCntMax = Instance & 1;
    if ( !v253 )
      goto LABEL_543;
    isLevelMax = UserServantEntity__isLevelMax(v253, 0LL);
    Instance = (int64_t)this->fields.userSvtEntity;
    this->fields.isLvMax = isLevelMax;
    this->fields.isParty = v390;
    if ( !Instance )
      goto LABEL_543;
    Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL);
    v255 = this->fields.userSvtEntity;
    this->fields.isLock = Instance & 1;
    if ( !v255 )
      goto LABEL_543;
    *p_isChoice = UserServantEntity__IsChoice(v255, 0LL);
    Instance = (int64_t)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_543;
    Instance = UserServantEntity__IsEventJoin((UserServantEntity_o *)Instance, 0LL);
    v256 = this->fields.userSvtEntity;
    this->fields.isEventJoin = Instance & 1;
    if ( !v256 )
      goto LABEL_543;
    this->fields.isIgnoreCombineLimitSpecial = UserServantEntity__IsIgnoreCombineLimitSpecial(v256, 0LL);
    Instance = CombineServantListViewItem__GetSealCombineLimit(this, v257);
    this->fields.isSealCombineLimit = Instance & 1;
    if ( baseUsrSvtData )
    {
      v258 = (UserServantEntity_o *)*p_userSvtEntity;
      if ( !*p_userSvtEntity )
        goto LABEL_543;
      v259 = *(_OWORD *)&v258->fields.id.fields.fakeValue;
      *(_OWORD *)&v419.fields.currentCryptoKey = *(_OWORD *)&v258->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v419.fields.fakeValue = v259;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v405 = v419;
      v260 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v405, 0LL);
      v261 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
      *(_OWORD *)&v404.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v404.fields.fakeValue = v261;
      if ( v260 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v404, 0LL) )
        this->fields.isBaseSvt = 1;
    }
    Instance = (int64_t)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_543;
    if ( !UserServantEntity__IsHeroine((UserServantEntity_o *)Instance, 0LL) )
      goto LABEL_320;
    goto LABEL_319;
  }
  if ( v229 == 2 )
  {
    if ( !userSvtEntity )
      goto LABEL_543;
    Instance = UserServantEntity__isLimitCountMax(userSvtEntity, 0LL);
    v230 = this->fields.userSvtEntity;
    this->fields.isLimitCntMax = Instance & 1;
    if ( !v230 )
      goto LABEL_543;
    v231 = UserServantEntity__isLevelMax(v230, 0LL);
    Instance = (int64_t)this->fields.userSvtEntity;
    this->fields.isLvMax = v231;
    this->fields.isParty = v390;
    if ( !Instance )
      goto LABEL_543;
    Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL);
    v232 = this->fields.userSvtEntity;
    this->fields.isLock = Instance & 1;
    if ( !v232 )
      goto LABEL_543;
    *p_isChoice = UserServantEntity__IsChoice(v232, 0LL);
    Instance = (int64_t)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_543;
    this->fields.isEventJoin = UserServantEntity__IsEventJoin((UserServantEntity_o *)Instance, 0LL);
    Instance = CombineServantListViewItem__GetSealCombineLimit(this, v233);
    this->fields.isSealCombineLimit = Instance & 1;
    if ( baseUsrSvtData )
    {
      v234 = (UserServantEntity_o *)*p_userSvtEntity;
      if ( !*p_userSvtEntity )
        goto LABEL_543;
      v235 = *(_OWORD *)&v234->fields.id.fields.fakeValue;
      *(_OWORD *)&v419.fields.currentCryptoKey = *(_OWORD *)&v234->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v419.fields.fakeValue = v235;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v408 = v419;
      v236 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v408, 0LL);
      v237 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
      *(_OWORD *)&v407.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v407.fields.fakeValue = v237;
      if ( v236 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v407, 0LL) )
        this->fields.isBaseSvt = 1;
    }
    Instance = (int64_t)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_543;
    Instance = UserServantEntity__IsHeroine((UserServantEntity_o *)Instance, 0LL);
    if ( (Instance & 1) == 0 )
    {
      if ( !*p_servantEntity )
        goto LABEL_543;
      v238 = (UserServantEntity_o *)*p_userSvtEntity;
      v385 = v384;
      if ( !*p_userSvtEntity )
        goto LABEL_543;
      combineLimitId = (*p_servantEntity)->fields.combineLimitId;
      v241 = *(_QWORD *)&v238->fields.limitCount.fields.currentCryptoKey;
      v240 = *(_QWORD *)&v238->fields.limitCount.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v434.fields.currentCryptoKey = v241;
      *(_QWORD *)&v434.fields.fakeValue = v240;
      v242 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v434, 0LL);
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_543;
      Instance = (int64_t)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_CombineLimitMaster___);
      if ( !Instance )
        goto LABEL_543;
      Instance = (int64_t)CombineLimitMaster__GetEntity((CombineLimitMaster_o *)Instance, combineLimitId, v242, 0LL);
      if ( !Instance )
        goto LABEL_543;
      v243 = Instance;
      v245 = *(_QWORD *)(Instance + 32);
      v244 = *(_QWORD *)(Instance + 40);
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_543;
      Instance = (int64_t)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserItemMaster___);
      if ( !v244 )
        goto LABEL_543;
      v246 = *(_QWORD *)(v244 + 24);
      if ( (int)v246 >= 1 )
      {
        v247 = (UserItemMaster_o *)Instance;
        for ( i = 0LL; (__int64)i < (int)v246; ++i )
        {
          if ( i >= (unsigned int)v246 )
            goto LABEL_553;
          if ( !v245 )
            goto LABEL_543;
          if ( i >= *(unsigned int *)(v245 + 24) )
            goto LABEL_553;
          v249 = (UserServantEntity_o *)*p_userSvtEntity;
          if ( !*p_userSvtEntity )
            goto LABEL_543;
          v250 = *(_OWORD *)&v249->fields.userId.fields.fakeValue;
          v251 = *(_DWORD *)(v244 + 32 + 4 * i);
          v252 = *(_DWORD *)(v245 + 32 + 4 * i);
          *(_OWORD *)&v419.fields.currentCryptoKey = *(_OWORD *)&v249->fields.userId.fields.currentCryptoKey;
          *(_OWORD *)&v419.fields.fakeValue = v250;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v406 = v419;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v406, 0LL);
          if ( !v247 )
            goto LABEL_543;
          Instance = UserItemMaster__TryGetEntity(v247, &v424, Instance, v251, 0LL);
          if ( (Instance & 1) == 0 )
            goto LABEL_365;
          if ( !v424 )
            goto LABEL_543;
          if ( v251 == v424->fields.itemId )
          {
            if ( v252 > v424->fields.num )
            {
LABEL_365:
              *p_isLimitUpItemNum = 0;
              break;
            }
            *p_isLimitUpItemNum = 1;
          }
          LODWORD(v246) = *(_DWORD *)(v244 + 24);
        }
      }
      v178 = baseUsrSvtData;
      v179 = v385;
      if ( *(_DWORD *)(v379 + 96) < *(_DWORD *)(v243 + 24) )
        *p_isLimitUpItemNum = 0;
      goto LABEL_320;
    }
LABEL_319:
    this->fields.isHeroineSvt = 1;
LABEL_320:
    v229 = this->fields.type;
  }
  if ( v229 <= 0xC && ((1 << v229) & 0x1808) != 0 )
  {
    Instance = (int64_t)this->fields.userSvtEntity;
    this->fields.isParty = v390;
    if ( !Instance )
      goto LABEL_543;
    Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL);
    v262 = this->fields.userSvtEntity;
    this->fields.isLock = Instance & 1;
    if ( !v262 )
      goto LABEL_543;
    *p_isChoice = UserServantEntity__IsChoice(v262, 0LL);
    Instance = (int64_t)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_543;
    Instance = UserServantEntity__IsEventJoin((UserServantEntity_o *)Instance, 0LL);
    this->fields.isEventJoin = Instance & 1;
    if ( v178 )
    {
      v263 = (UserServantEntity_o *)*p_userSvtEntity;
      if ( !*p_userSvtEntity )
        goto LABEL_543;
      v264 = *(_OWORD *)&v263->fields.id.fields.fakeValue;
      *(_OWORD *)&v419.fields.currentCryptoKey = *(_OWORD *)&v263->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v419.fields.fakeValue = v264;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v403 = v419;
      v265 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v403, 0LL);
      v266 = *(_OWORD *)&v178->fields.id.fields.fakeValue;
      *(_OWORD *)&v402.fields.currentCryptoKey = *(_OWORD *)&v178->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v402.fields.fakeValue = v266;
      if ( v265 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v402, 0LL) )
        this->fields.isBaseSvt = 1;
    }
    Instance = (int64_t)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_543;
    if ( UserServantEntity__IsHeroine((UserServantEntity_o *)Instance, 0LL) )
      this->fields.isHeroineSvt = 1;
    v229 = this->fields.type;
    if ( v229 == 3 )
    {
      CombineServantListViewItem__SetSkillInfo(this, v92);
      v229 = this->fields.type;
    }
    if ( v229 - 11 <= 1 )
    {
      CombineServantListViewItem__SetAppendSkillInfo(this, v92);
      v229 = this->fields.type;
    }
  }
  if ( v229 == 4 )
  {
    Instance = (int64_t)this->fields.userSvtEntity;
    this->fields.isParty = v390;
    if ( !Instance )
      goto LABEL_543;
    Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL);
    v267 = this->fields.userSvtEntity;
    this->fields.isLock = Instance & 1;
    if ( !v267 )
      goto LABEL_543;
    *p_isChoice = UserServantEntity__IsChoice(v267, 0LL);
    Instance = (int64_t)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_543;
    Instance = UserServantEntity__IsEventJoin((UserServantEntity_o *)Instance, 0LL);
    this->fields.isEventJoin = Instance & 1;
    if ( v178 )
    {
      v268 = (UserServantEntity_o *)*p_userSvtEntity;
      if ( !*p_userSvtEntity )
        goto LABEL_543;
      v269 = *(_OWORD *)&v268->fields.id.fields.fakeValue;
      *(_OWORD *)&v419.fields.currentCryptoKey = *(_OWORD *)&v268->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v419.fields.fakeValue = v269;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v401 = v419;
      v270 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v401, 0LL);
      v271 = *(_OWORD *)&v178->fields.id.fields.fakeValue;
      *(_OWORD *)&v400.fields.currentCryptoKey = *(_OWORD *)&v178->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v400.fields.fakeValue = v271;
      if ( v270 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v400, 0LL) )
        this->fields.isBaseSvt = 1;
    }
    Instance = (int64_t)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_543;
    if ( UserServantEntity__IsHeroine((UserServantEntity_o *)Instance, 0LL) )
    {
      this->fields.isHeroineSvt = 1;
    }
    else
    {
      Instance = (int64_t)*p_userSvtEntity;
      if ( !*p_userSvtEntity )
        goto LABEL_543;
      Instance = UserServantEntity__getTreasureDeviceInfo((UserServantEntity_o *)Instance, &tdInfo, -1, -1, 0, 0LL);
      this->fields.isTdLvMax = 1;
      if ( !tdInfo )
        goto LABEL_543;
      id = tdInfo->fields.id;
      if ( id >= 1 )
      {
        lv = tdInfo->fields.lv;
        Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_543;
        Instance = (int64_t)DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
        if ( !Instance )
          goto LABEL_543;
        Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                              id,
                              (const MethodInfo_31FD7C4 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_543;
        if ( lv < *(_DWORD *)(Instance + 48) )
          this->fields.isTdLvMax = 0;
      }
      Instance = (int64_t)MasterData_object;
      if ( !MasterData_object )
        goto LABEL_543;
      SameSvtNpLvCache = UserServantMaster__getSameSvtNpLvCache(
                           MasterData_object,
                           (UserServantEntity_o *)*p_userSvtEntity,
                           &cachedUserServantNpLvDict,
                           0LL);
      if ( SameSvtNpLvCache >= 1 && !this->fields.isTdLvMax )
      {
        v276 = SameSvtNpLvCache;
        CombineServantListViewItem__GetNpInfo(this, &tdLv[1], tdLv, &tdMaxLv, v275);
        if ( v377 <= 1200000 )
        {
          Instance = (int64_t)*p_userSvtEntity;
          if ( !*p_userSvtEntity )
            goto LABEL_543;
          v278 = UserServantEntity__checkTreasureDeviceLevelUp((UserServantEntity_o *)Instance, v276, 0LL);
          v279 = tdLv[0];
          if ( tdLv[0] >= v278 )
          {
            v282 = 0;
          }
          else
          {
            v280 = tdLv[1];
            v281 = v278;
            v282 = 0;
            do
            {
              Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !Instance )
                goto LABEL_543;
              Instance = (int64_t)DataManager__GetMasterData_object_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
              if ( !Instance )
                goto LABEL_543;
              Instance = (int64_t)TreasureDvcLvMaster__GetEntity((TreasureDvcLvMaster_o *)Instance, v280, v279, 0LL);
              if ( Instance )
                v282 += *(_DWORD *)(Instance + 92);
              ++v279;
            }
            while ( v281 != v279 );
            if ( !this )
              goto LABEL_543;
          }
          v277 = v377 >= v282;
        }
        else
        {
          v277 = 1;
        }
        this->fields.isSameSvt = v277;
      }
    }
    v229 = this->fields.type;
  }
  if ( v229 == 5 )
  {
    this->fields.isMaterialSvt = v179;
    this->fields.isParty = v390;
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_543;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserServantLeaderMaster___);
    if ( !Instance )
      goto LABEL_543;
    Instance = *(_QWORD *)(Instance + 32);
    if ( !Instance )
      goto LABEL_543;
    v284 = System_Collections_ObjectModel_Collection_object___GetEnumerator(
             (System_Collections_ObjectModel_Collection_T__o *)Instance,
             (const MethodInfo_319A36C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    if ( !v284 )
      sub_1BE4D28(0LL, v283);
    while ( 1 )
    {
      v285 = v284->klass;
      v286 = *(unsigned __int16 *)(&v284->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v284->klass->_2.bitflags2 + 3) )
      {
        v287 = &v285->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)v287 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v286;
          v287 += 4;
          if ( !v286 )
            goto LABEL_391;
        }
        v288 = (__int64)&v285->vtable[*v287].method;
      }
      else
      {
LABEL_391:
        v288 = sub_1C36AAC(v284, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v288)(
              v284,
              *(_QWORD *)(v288 + 8)) & 1) == 0 )
        break;
      v289 = v284->klass;
      v290 = *(unsigned __int16 *)(&v284->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v284->klass->_2.bitflags2 + 3) )
      {
        v291 = &v289->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v291 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
        {
          --v290;
          v291 += 4;
          if ( !v290 )
            goto LABEL_398;
        }
        v292 = (__int64)&v289->vtable[*v291].method;
      }
      else
      {
LABEL_398:
        v292 = sub_1C36AAC(v284, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
      }
      v293 = (_QWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v292)(
                         v284,
                         *(_QWORD *)(v292 + 8));
      if ( !v293 )
        sub_1BE4D28(0LL, v294);
      v295 = LOBYTE(UserServantLeaderEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*v293 + 304LL) < (unsigned int)v295
        || *(UserServantLeaderEntity_c **)(*(_QWORD *)(*v293 + 200LL) + 8 * v295 - 8) != UserServantLeaderEntity_TypeInfo )
      {
        goto LABEL_548;
      }
      v296 = (UserServantEntity_o *)*p_userSvtEntity;
      if ( !*p_userSvtEntity )
        sub_1BE4D28(v293, UserServantLeaderEntity_TypeInfo);
      v297 = *(_OWORD *)&v296->fields.id.fields.fakeValue;
      v298 = v293[7];
      *(_OWORD *)&v419.fields.currentCryptoKey = *(_OWORD *)&v296->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v419.fields.fakeValue = v297;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v399 = v419;
      if ( v298 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v399, 0LL) )
      {
        this->fields.isUseSupport = 1;
        break;
      }
    }
    v299 = v284->klass;
    v300 = *(unsigned __int16 *)(&v284->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v284->klass->_2.bitflags2 + 3) )
    {
      v301 = &v299->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v301 - 1) != System_IDisposable_TypeInfo )
      {
        --v300;
        v301 += 4;
        if ( !v300 )
          goto LABEL_412;
      }
      v302 = (__int64)&v299->vtable[*v301].method;
    }
    else
    {
LABEL_412:
      v302 = sub_1C36AAC(v284, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v302)(v284, *(_QWORD *)(v302 + 8));
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Instance = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_UserRecommendSupportMaster___);
    v303 = (UserServantEntity_o *)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_543;
    v304 = *(_OWORD *)&v303->fields.id.fields.fakeValue;
    v305 = (UserRecommendSupportMaster_o *)Instance;
    *(_OWORD *)&v419.fields.currentCryptoKey = *(_OWORD *)&v303->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v419.fields.fakeValue = v304;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v398 = v419;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v398, 0LL);
    if ( !v305 )
      goto LABEL_543;
    IsSettingServant = UserRecommendSupportMaster__IsSettingServant(v305, Instance, 0, 0LL);
    Instance = (int64_t)this->fields.userSvtEntity;
    this->fields.isUseRecommendSupport = IsSettingServant;
    this->fields.isFavorite = v387;
    if ( !Instance )
      goto LABEL_543;
    Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL);
    v307 = this->fields.userSvtEntity;
    this->fields.isLock = Instance & 1;
    if ( !v307 )
      goto LABEL_543;
    *p_isChoice = UserServantEntity__IsChoice(v307, 0LL);
    Instance = (int64_t)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_543;
    Instance = UserServantEntity__IsEventJoin((UserServantEntity_o *)Instance, 0LL);
    this->fields.isEventJoin = Instance & 1;
    if ( v178 )
      v308 = 0LL;
    else
      v308 = this;
    if ( v178 )
      v309 = this;
    else
      v309 = 0LL;
    if ( v178 )
    {
      Instance = UserServantEntity__IsEventJoin(v178, 0LL);
      if ( !v309 )
        goto LABEL_543;
      v309->fields.isEventJoinBaseSvt = Instance & 1;
      Instance = (int64_t)*p_userSvtEntity;
      if ( !*p_userSvtEntity )
        goto LABEL_543;
      Instance = UserServantEntity__IsMaterialTd((UserServantEntity_o *)Instance, 0LL);
      v310 = this->fields.userSvtEntity;
      this->fields.isMaterialTdSvt = Instance & 1;
      if ( !v310 )
        goto LABEL_543;
      v311 = *(_OWORD *)&v310->fields.id.fields.fakeValue;
      *(_OWORD *)&v419.fields.currentCryptoKey = *(_OWORD *)&v310->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v419.fields.fakeValue = v311;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v397 = v419;
      v312 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v397, 0LL);
      v313 = *(_OWORD *)&v178->fields.id.fields.fakeValue;
      *(_OWORD *)&v396.fields.currentCryptoKey = *(_OWORD *)&v178->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v396.fields.fakeValue = v313;
      if ( v312 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v396, 0LL) )
        this->fields.isBaseSvt = 1;
    }
    else
    {
      if ( !v308 )
        goto LABEL_543;
      v308->fields.isEventJoinBaseSvt = 0;
      Instance = (int64_t)*p_userSvtEntity;
      if ( !*p_userSvtEntity )
        goto LABEL_543;
      this->fields.isMaterialTdSvt = UserServantEntity__IsMaterialTd((UserServantEntity_o *)Instance, 0LL);
    }
  }
  v314 = this->fields.type;
  if ( v314 == 6 )
  {
    Instance = (int64_t)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_543;
    Instance = UserServantEntity__isExceedLvMax((UserServantEntity_o *)Instance, 0LL);
    v315 = this->fields.userSvtEntity;
    this->fields.isLvExceedMax = Instance & 1;
    if ( !v315 )
      goto LABEL_543;
    Instance = UserServantEntity__isLimitCountMax(v315, 0LL);
    v316 = this->fields.userSvtEntity;
    this->fields.isLimitCntMax = Instance & 1;
    if ( !v316 )
      goto LABEL_543;
    v317 = UserServantEntity__isLevelMax(v316, 0LL);
    Instance = (int64_t)this->fields.userSvtEntity;
    this->fields.isLvMax = v317;
    this->fields.isParty = v390;
    if ( !Instance )
      goto LABEL_543;
    Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL);
    v318 = this->fields.userSvtEntity;
    this->fields.isLock = Instance & 1;
    if ( !v318 )
      goto LABEL_543;
    *p_isChoice = UserServantEntity__IsChoice(v318, 0LL);
    Instance = (int64_t)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_543;
    Instance = UserServantEntity__IsEventJoin((UserServantEntity_o *)Instance, 0LL);
    this->fields.isEventJoin = Instance & 1;
    if ( v178 )
    {
      v319 = (UserServantEntity_o *)*p_userSvtEntity;
      if ( !*p_userSvtEntity )
        goto LABEL_543;
      v320 = *(_OWORD *)&v319->fields.id.fields.fakeValue;
      *(_OWORD *)&v419.fields.currentCryptoKey = *(_OWORD *)&v319->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v419.fields.fakeValue = v320;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v395 = v419;
      v321 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v395, 0LL);
      v322 = *(_OWORD *)&v178->fields.id.fields.fakeValue;
      *(_OWORD *)&v394.fields.currentCryptoKey = *(_OWORD *)&v178->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v394.fields.fakeValue = v322;
      if ( v321 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v394, 0LL) )
        this->fields.isBaseSvt = 1;
    }
    Instance = (int64_t)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_543;
    if ( UserServantEntity__IsHeroine((UserServantEntity_o *)Instance, 0LL) )
    {
      this->fields.isHeroineSvt = 1;
    }
    else
    {
      Instance = (int64_t)*p_userSvtEntity;
      if ( !*p_userSvtEntity )
        goto LABEL_543;
      SvtExceedEnt = UserServantEntity__getSvtExceedEnt((UserServantEntity_o *)Instance, 0LL);
      if ( SvtExceedEnt )
      {
        v324 = (int32_t *)SvtExceedEnt;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Instance = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_CommonConsumeMaster___);
        if ( !Instance )
          goto LABEL_543;
        IdEntityList = CommonConsumeMaster__GetIdEntityList((CommonConsumeMaster_o *)Instance, v324[12], 0LL);
        if ( IdEntityList )
        {
          v326 = IdEntityList;
          v327 = (System_Collections_Generic_HashSet_int__o *)sub_1BE4D18(System_Collections_Generic_HashSet_int__TypeInfo);
          System_Collections_Generic_HashSet_int____ctor(
            v327,
            (const MethodInfo_349EE6C *)Method_System_Collections_Generic_HashSet_int___ctor__);
          v328 = (System_Collections_Generic_HashSet_int__o *)sub_1BE4D18(System_Collections_Generic_HashSet_int__TypeInfo);
          System_Collections_Generic_HashSet_int____ctor(
            v328,
            (const MethodInfo_349EE6C *)Method_System_Collections_Generic_HashSet_int___ctor__);
          v329 = v326->max_length;
          if ( v329 >= 1 )
          {
            v330 = 0LL;
            while ( (unsigned int)v330 < v329 )
            {
              v331 = v326->m_Items[v330];
              if ( !v331 )
                goto LABEL_543;
              if ( !v327 )
                goto LABEL_543;
              Instance = System_Collections_Generic_HashSet_int___Add(
                           v327,
                           v331->fields.objectId,
                           (const MethodInfo_34A0070 *)Method_System_Collections_Generic_HashSet_int__Add__);
              if ( !v328 )
                goto LABEL_543;
              Instance = System_Collections_Generic_HashSet_int___Add(
                           v328,
                           v331->fields.num,
                           (const MethodInfo_34A0070 *)Method_System_Collections_Generic_HashSet_int__Add__);
              v329 = v326->max_length;
              if ( (int)++v330 >= v329 )
                goto LABEL_469;
            }
LABEL_553:
            sub_1BE4D30(Instance, v92);
          }
LABEL_469:
          v178 = baseUsrSvtData;
          if ( v324[13] >= 1 )
          {
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            Instance = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_SvtCoinMaster___);
            v332 = (UserServantEntity_o *)*p_userSvtEntity;
            if ( !*p_userSvtEntity )
              goto LABEL_543;
            v333 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
            v335 = *(_QWORD *)&v332->fields.svtId.fields.currentCryptoKey;
            v334 = *(_QWORD *)&v332->fields.svtId.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v435.fields.currentCryptoKey = v335;
            *(_QWORD *)&v435.fields.fakeValue = v334;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v435, 0LL);
            if ( !v333 )
              goto LABEL_543;
            Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                  v333,
                                  Instance,
                                  (const MethodInfo_31FD7C4 *)Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__GetEntity__);
            v178 = baseUsrSvtData;
            if ( !Instance )
              goto LABEL_543;
            if ( !v327 )
              goto LABEL_543;
            Instance = System_Collections_Generic_HashSet_int___Add(
                         v327,
                         *(_DWORD *)(Instance + 24),
                         (const MethodInfo_34A0070 *)Method_System_Collections_Generic_HashSet_int__Add__);
            if ( !v328 )
              goto LABEL_543;
            System_Collections_Generic_HashSet_int___Add(
              v328,
              v324[13],
              (const MethodInfo_34A0070 *)Method_System_Collections_Generic_HashSet_int__Add__);
          }
          v336 = this->fields.userSvtEntity;
          v337 = System_Linq_Enumerable__ToArray_int_(
                   (System_Collections_Generic_IEnumerable_TSource__o *)v327,
                   (const MethodInfo_2F9293C *)Method_System_Linq_Enumerable_ToArray_int___);
          v338 = System_Linq_Enumerable__ToArray_int_(
                   (System_Collections_Generic_IEnumerable_TSource__o *)v328,
                   (const MethodInfo_2F9293C *)Method_System_Linq_Enumerable_ToArray_int___);
          this->fields.isLvExceedItemNum = CombineUtility__CheckCombineNeedItemsEnough(
                                             v336,
                                             v337,
                                             v338,
                                             *(_DWORD *)(v379 + 96),
                                             v324[8],
                                             0LL);
        }
      }
    }
    v314 = this->fields.type;
  }
  if ( v314 != 8 )
    goto LABEL_530;
  Instance = (int64_t)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_543;
  this->fields.isFriendshipExceedMax = UserServantEntity__isExceedFriendshipMax((UserServantEntity_o *)Instance, 0LL);
  v339 = *(_QWORD *)(v383 + 100);
  v340 = *(_QWORD *)(v383 + 108);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v436.fields.currentCryptoKey = v339;
  *(_QWORD *)&v436.fields.fakeValue = v340;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v436, 0LL);
  if ( !*p_servantEntity )
    goto LABEL_543;
  v341 = this->fields.userSvtEntity;
  this->fields.isFriendshipRankMax = (_DWORD)Instance == *(_DWORD *)(v383 + 116)
                                                       + (*p_servantEntity)->fields.maxFriendshipRank;
  this->fields.isParty = v390;
  if ( !v341 )
    goto LABEL_543;
  Instance = UserServantEntity__IsLock(v341, 0LL);
  v342 = this->fields.userSvtEntity;
  this->fields.isLock = Instance & 1;
  if ( !v342 )
    goto LABEL_543;
  *p_isChoice = UserServantEntity__IsChoice(v342, 0LL);
  Instance = (int64_t)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_543;
  Instance = UserServantEntity__IsEventJoin((UserServantEntity_o *)Instance, 0LL);
  this->fields.isEventJoin = Instance & 1;
  if ( v178 )
  {
    v343 = (UserServantEntity_o *)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_543;
    v344 = *(_OWORD *)&v343->fields.id.fields.fakeValue;
    *(_OWORD *)&v419.fields.currentCryptoKey = *(_OWORD *)&v343->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v419.fields.fakeValue = v344;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v393 = v419;
    v345 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v393, 0LL);
    v346 = *(_OWORD *)&v178->fields.id.fields.fakeValue;
    *(_OWORD *)&v392.fields.currentCryptoKey = *(_OWORD *)&v178->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v392.fields.fakeValue = v346;
    if ( v345 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v392, 0LL) )
      this->fields.isBaseSvt = 1;
  }
  Instance = (int64_t)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
LABEL_543:
    sub_1BE4D28(Instance, v92);
  Instance = UserServantEntity__IsHeroine((UserServantEntity_o *)Instance, 0LL);
  if ( (Instance & 1) != 0 )
  {
    this->fields.isHeroineSvt = 1;
    goto LABEL_530;
  }
  if ( !this->fields.isFriendshipRankMax || this->fields.isFriendshipExceedMax )
    goto LABEL_530;
  if ( !*p_servantEntity )
    goto LABEL_543;
  maxFriendshipRank = (*p_servantEntity)->fields.maxFriendshipRank;
  v348 = *(_DWORD *)(v383 + 116);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_543;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_FriendshipMaster___);
  if ( !*p_servantEntity )
    goto LABEL_543;
  if ( !Instance )
    goto LABEL_543;
  Instance = (int64_t)FriendshipMaster__GetEntity(
                        (FriendshipMaster_o *)Instance,
                        (*p_servantEntity)->fields.friendshipId,
                        maxFriendshipRank + v348 + 1,
                        0LL);
  if ( !Instance )
    goto LABEL_543;
  v349 = Instance;
  v351 = *(_QWORD *)(Instance + 32);
  v350 = *(_QWORD *)(Instance + 40);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_543;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !v350 )
    goto LABEL_543;
  if ( *(int *)(v350 + 24) >= 1 )
  {
    v352 = (UserItemMaster_o *)Instance;
    v353 = 0LL;
    v354 = v350 + 32;
    while ( 1 )
    {
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4B61717 )
      {
        sub_1BE4ACC(&NetworkManager_TypeInfo, v92);
        byte_4B61717 = 1;
      }
      Instance = (int64_t)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = (int64_t)NetworkManager_TypeInfo;
      }
      if ( v353 >= *(unsigned int *)(v350 + 24) )
        goto LABEL_553;
      if ( !v352 )
        goto LABEL_543;
      Instance = UserItemMaster__TryGetEntity(
                   v352,
                   &v420,
                   *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL),
                   *(_DWORD *)(v354 + 4 * v353),
                   0LL);
      if ( (Instance & 1) == 0 )
        break;
      if ( v353 >= *(unsigned int *)(v350 + 24) )
        goto LABEL_553;
      if ( !v420 )
        goto LABEL_543;
      if ( *(_DWORD *)(v354 + 4 * v353) == v420->fields.itemId )
      {
        if ( !v351 )
          goto LABEL_543;
        if ( v353 >= *(unsigned int *)(v351 + 24) )
          goto LABEL_553;
        v355 = *(_DWORD *)(v351 + 32 + 4 * v353) <= v420->fields.num;
        goto LABEL_526;
      }
LABEL_527:
      if ( (__int64)++v353 >= *(int *)(v350 + 24) )
        goto LABEL_528;
    }
    v355 = 0;
LABEL_526:
    this->fields.isFriendshipExceedItemNum = v355;
    goto LABEL_527;
  }
LABEL_528:
  if ( *(_DWORD *)(v379 + 96) < *(_DWORD *)(v349 + 28) )
    this->fields.isFriendshipExceedItemNum = 0;
LABEL_530:
  Instance = (int64_t)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_543;
  Instance = UserServantEntity__getDispLimitCount((UserServantEntity_o *)Instance, 0, 0LL);
  v356 = this->fields.userSvtEntity;
  this->fields.dispLimitCount = Instance;
  if ( !v356 )
    goto LABEL_543;
  SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v356, -1, 0LL);
  this->fields.skillCategoryIdList = SkillCategoryIdList;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.skillCategoryIdList,
    (int64_t)SkillCategoryIdList,
    v358,
    v359,
    v360,
    v361,
    v362,
    v363);
  Instance = (int64_t)this->fields.userSvtEntity;
  if ( !Instance )
    goto LABEL_543;
  TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                   (UserServantEntity_o *)Instance,
                                   0,
                                   0LL);
  this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.tdCategoryIdList,
    (int64_t)TreasureDeviceCategoryIdList,
    v365,
    v366,
    v367,
    v368,
    v369,
    v370);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_543;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Instance )
    goto LABEL_543;
  Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                        this->fields.classId,
                        (const MethodInfo_31FD7C4 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_543;
  v371 = *(int *)(Instance + 52);
  v372 = this->fields.servantEntity;
  this->fields.priority = v371;
  this->fields.sortValue1B = v371;
  if ( !v372 )
    goto LABEL_543;
  v373 = (UserServantEntity_o *)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_543;
  this->fields.sortValue2 = ((__int64)v372->fields.collectionNo << 16) | ((unsigned __int64)(unsigned int)this->fields.rarity << 48) | v373->fields.lv;
  v375 = *(_QWORD *)&v373->fields.svtId.fields.currentCryptoKey;
  v374 = *(_QWORD *)&v373->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v437.fields.currentCryptoKey = v375;
  *(_QWORD *)&v437.fields.fakeValue = v374;
  v376 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v437, 0LL);
  Instance = (int64_t)this->fields.iconLabelInfo1;
  this->fields.sortValue2B = v376;
  this->fields.amountSortValue = -1LL;
  if ( !Instance )
    goto LABEL_543;
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0LL);
  Instance = (int64_t)*p_iconLabelInfo2;
  if ( !*p_iconLabelInfo2 )
    goto LABEL_543;
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

  if ( (byte_4B6A834 & 1) == 0 )
  {
    sub_1BE4ACC(&SvtUseSkillData_TypeInfo, method);
    byte_4B6A834 = 1;
  }
  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
    return UserServantEntity__getAppendSkillInfo(userSvtEntity, 0LL);
  v5 = (SvtUseSkillData_o *)sub_1BE4D18(SvtUseSkillData_TypeInfo);
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
      sub_1BE4D28(TreasureDeviceInfo, v10);
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

  if ( (byte_4B6A835 & 1) == 0 )
  {
    sub_1BE4ACC(&CondType_TypeInfo, method);
    sub_1BE4ACC(&Method_DataManager_GetMaster_CombineLimitReleaseMaster___, v3);
    sub_1BE4ACC(&DataManager_TypeInfo, v4);
    byte_4B6A835 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_CombineLimitReleaseMaster___);
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
    sub_1BE4D28(Master_object, v6);
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
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  if ( (byte_4B6A833 & 1) == 0 )
  {
    sub_1BE4ACC(&BalanceConfig_TypeInfo, skillInfoList);
    sub_1BE4ACC(&SkillInfo___TypeInfo, v5);
    byte_4B6A833 = 1;
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
    v8 = (SkillInfo_array *)sub_1BE4B74(SkillInfo___TypeInfo, (unsigned int)v7->static_fields->SvtSkillListMax);
    *skillInfoList = v8;
    sub_1BE4A70((PartyOrganizationUtility_o *)skillInfoList, (int64_t)v8, v9, v10, v11, v12, v13, v14);
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
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  _BOOL4 IsUnSelectedAllTargetFilters; // w21
  _BOOL4 v42; // w23
  _BOOL4 IsMatchEffectCategory; // w22
  _BOOL4 v44; // w0

  if ( (byte_4B6A823 & 1) == 0 )
  {
    sub_1BE4ACC(&FilterKindList_TypeInfo, sort);
    sub_1BE4ACC(&ListViewSort_FilterKind___TypeInfo, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v6);
    sub_1BE4ACC(&ServantEventBonusFilterController_TypeInfo, v7);
    byte_4B6A823 = 1;
  }
  v8 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v8 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v8->static_fields->ClassGroupFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_67;
  ClassGroupFilterKindList = (__int64)System_Collections_Generic_List_Int32Enum___ToArray(
                                        (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                        (const MethodInfo_35D34E4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_67;
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
      goto LABEL_67;
    v11 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                             (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                             (const MethodInfo_35D34E4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
    goto LABEL_67;
  v13 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_35D34E4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
    goto LABEL_67;
  v15 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_35D34E4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
LABEL_67:
    sub_1BE4D28(ClassGroupFilterKindList, sort);
  v17 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_35D34E4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
          goto LABEL_67;
        ClassGroupFilterKindList = UserServantEntity__getDispLimitCount(
                                     (UserServantEntity_o *)ClassGroupFilterKindList,
                                     0,
                                     0LL);
        v26 = this->fields.userSvtEntity;
        this->fields.dispLimitCount = ClassGroupFilterKindList;
        if ( !v26 )
          goto LABEL_67;
        SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v26, -1, 0LL);
        this->fields.skillCategoryIdList = SkillCategoryIdList;
        sub_1BE4A70(
          (PartyOrganizationUtility_o *)&this->fields.skillCategoryIdList,
          (int64_t)SkillCategoryIdList,
          v28,
          v29,
          v30,
          v31,
          v32,
          v33);
        ClassGroupFilterKindList = (__int64)this->fields.userSvtEntity;
        if ( !ClassGroupFilterKindList )
          goto LABEL_67;
        TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                         (UserServantEntity_o *)ClassGroupFilterKindList,
                                         0,
                                         0LL);
        this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
        sub_1BE4A70(
          (PartyOrganizationUtility_o *)&this->fields.tdCategoryIdList,
          (int64_t)TreasureDeviceCategoryIdList,
          v35,
          v36,
          v37,
          v38,
          v39,
          v40);
      }
    }
    ClassGroupFilterKindList = sub_1BE4B74(ListViewSort_FilterKind___TypeInfo, 1LL);
    if ( !ClassGroupFilterKindList )
      goto LABEL_67;
    v19 = ClassGroupFilterKindList;
    if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
      goto LABEL_68;
    *(_DWORD *)(ClassGroupFilterKindList + 32) = 50;
    IsUnSelectedAllTargetFilters = ListViewSort__IsUnSelectedAllTargetFilters(
                                     sort,
                                     (ListViewSort_FilterKind_array *)ClassGroupFilterKindList,
                                     0LL);
    ClassGroupFilterKindList = sub_1BE4B74(ListViewSort_FilterKind___TypeInfo, 1LL);
    if ( !ClassGroupFilterKindList )
      goto LABEL_67;
    v19 = ClassGroupFilterKindList;
    if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
LABEL_68:
      sub_1BE4D30(ClassGroupFilterKindList, v19);
    *(_DWORD *)(ClassGroupFilterKindList + 32) = 51;
    v42 = ListViewSort__IsUnSelectedAllTargetFilters(
            sort,
            (ListViewSort_FilterKind_array *)ClassGroupFilterKindList,
            0LL);
    IsMatchEffectCategory = ServantEquipEffectFilterController__IsMatchEffectCategory(
                              this->fields.tdCategoryIdList,
                              sort,
                              0LL);
    v44 = ServantEquipEffectFilterController__IsMatchEffectCategory(this->fields.skillCategoryIdList, sort, 0LL);
    if ( ((IsUnSelectedAllTargetFilters ^ v42) & 1) != 0 )
    {
      if ( IsUnSelectedAllTargetFilters )
      {
        if ( !v44 )
          return 0;
      }
      else if ( !IsMatchEffectCategory )
      {
        return 0;
      }
    }
    else if ( !IsMatchEffectCategory && !v44 )
    {
      return 0;
    }
  }
  ClassGroupFilterKindList = sub_1BE4B74(ListViewSort_FilterKind___TypeInfo, 1LL);
  if ( !ClassGroupFilterKindList )
    goto LABEL_67;
  v19 = ClassGroupFilterKindList;
  if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
    goto LABEL_68;
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
    goto LABEL_67;
  v22 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_35D34E4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  System_Int32_array *TreasureDeviceCategoryIdList; // x0
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  _BOOL4 IsUnSelectedAllTargetFilters; // w21
  _BOOL4 v40; // w23
  _BOOL4 IsMatchEffectCategory; // w22
  _BOOL4 v42; // w0
  bool CanNotSelect; // w0
  FilterKindList_c *v44; // x0
  ListViewSort_FilterKind_array *v45; // x21

  v4 = this;
  if ( (byte_4B6A824 & 1) == 0 )
  {
    sub_1BE4ACC(&FilterKindList_TypeInfo, sort);
    sub_1BE4ACC(&ListViewSort_FilterKind___TypeInfo, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v6);
    this = (CombineServantListViewItem_o *)sub_1BE4ACC(&ServantEventBonusFilterController_TypeInfo, v7);
    byte_4B6A824 = 1;
  }
  if ( !sort )
    goto LABEL_83;
  v8 = ListViewSort__GetFilter(sort, 28, 0LL) && v4->fields.isSameClass;
  v9 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v9 = FilterKindList_TypeInfo;
  }
  this = (CombineServantListViewItem_o *)v9->static_fields->ClassGroupFilterKindList;
  if ( !this )
    goto LABEL_83;
  v10 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)this,
                                           (const MethodInfo_35D34E4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v10, 0LL) )
  {
    if ( ListViewSort__IsMatchClassGroupFilter(sort, v4->fields.servantEntity, 0LL) )
      goto LABEL_22;
    goto LABEL_21;
  }
  v11 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v11 = FilterKindList_TypeInfo;
  }
  this = (CombineServantListViewItem_o *)v11->static_fields->ClassFilterKindList;
  if ( !this )
    goto LABEL_83;
  v12 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)this,
                                           (const MethodInfo_35D34E4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v12, 0LL) )
    goto LABEL_18;
  this = (CombineServantListViewItem_o *)sub_1BE4B74(ListViewSort_FilterKind___TypeInfo, 1LL);
  if ( !this )
    goto LABEL_83;
  v13 = this;
  if ( !this->fields.sortIndex )
    goto LABEL_84;
  LODWORD(this->fields.sortValue0) = 28;
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)this, 0LL) )
  {
LABEL_18:
    if ( !ListViewSort__IsMatchClassFilter(sort, v4->fields.servantEntity, 0LL) )
    {
LABEL_21:
      if ( !v8 )
        return 0;
    }
  }
LABEL_22:
  v14 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v14 = FilterKindList_TypeInfo;
  }
  this = (CombineServantListViewItem_o *)v14->static_fields->NpTypeFilterKindList;
  if ( !this )
    goto LABEL_83;
  v15 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)this,
                                           (const MethodInfo_35D34E4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
    goto LABEL_83;
  v17 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)this,
                                           (const MethodInfo_35D34E4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
LABEL_83:
    sub_1BE4D28(this, sort);
  v19 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)this,
                                           (const MethodInfo_35D34E4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
  if ( !ListViewSort__CheckSvtEquipEffectFilterDefaultAll(sort, 0LL) )
  {
    v22 = v4->fields.userSvtEntity;
    if ( v22 )
    {
      dispLimitCount = v4->fields.dispLimitCount;
      if ( dispLimitCount != UserServantEntity__getDispLimitCount(v22, 0, 0LL) )
      {
        this = (CombineServantListViewItem_o *)v4->fields.userSvtEntity;
        if ( !this )
          goto LABEL_83;
        this = (CombineServantListViewItem_o *)UserServantEntity__getDispLimitCount((UserServantEntity_o *)this, 0, 0LL);
        v24 = v4->fields.userSvtEntity;
        v4->fields.dispLimitCount = (int)this;
        if ( !v24 )
          goto LABEL_83;
        SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v24, -1, 0LL);
        v4->fields.skillCategoryIdList = SkillCategoryIdList;
        sub_1BE4A70(
          (PartyOrganizationUtility_o *)&v4->fields.skillCategoryIdList,
          (int64_t)SkillCategoryIdList,
          v26,
          v27,
          v28,
          v29,
          v30,
          v31);
        this = (CombineServantListViewItem_o *)v4->fields.userSvtEntity;
        if ( !this )
          goto LABEL_83;
        TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                         (UserServantEntity_o *)this,
                                         0,
                                         0LL);
        v4->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
        sub_1BE4A70(
          (PartyOrganizationUtility_o *)&v4->fields.tdCategoryIdList,
          (int64_t)TreasureDeviceCategoryIdList,
          v33,
          v34,
          v35,
          v36,
          v37,
          v38);
      }
    }
    this = (CombineServantListViewItem_o *)sub_1BE4B74(ListViewSort_FilterKind___TypeInfo, 1LL);
    if ( !this )
      goto LABEL_83;
    v13 = this;
    if ( !this->fields.sortIndex )
      goto LABEL_84;
    LODWORD(this->fields.sortValue0) = 50;
    IsUnSelectedAllTargetFilters = ListViewSort__IsUnSelectedAllTargetFilters(
                                     sort,
                                     (ListViewSort_FilterKind_array *)this,
                                     0LL);
    this = (CombineServantListViewItem_o *)sub_1BE4B74(ListViewSort_FilterKind___TypeInfo, 1LL);
    if ( !this )
      goto LABEL_83;
    v13 = this;
    if ( !this->fields.sortIndex )
      goto LABEL_84;
    LODWORD(this->fields.sortValue0) = 51;
    v40 = ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)this, 0LL);
    IsMatchEffectCategory = ServantEquipEffectFilterController__IsMatchEffectCategory(
                              v4->fields.tdCategoryIdList,
                              sort,
                              0LL);
    v42 = ServantEquipEffectFilterController__IsMatchEffectCategory(v4->fields.skillCategoryIdList, sort, 0LL);
    if ( ((IsUnSelectedAllTargetFilters ^ v40) & 1) != 0 )
    {
      if ( IsUnSelectedAllTargetFilters )
      {
        if ( !v42 )
          return 0;
      }
      else if ( !IsMatchEffectCategory )
      {
        return 0;
      }
    }
    else if ( !IsMatchEffectCategory && !v42 )
    {
      return 0;
    }
  }
  this = (CombineServantListViewItem_o *)sub_1BE4B74(ListViewSort_FilterKind___TypeInfo, 1LL);
  if ( !this )
    goto LABEL_83;
  v13 = this;
  if ( !this->fields.sortIndex )
    goto LABEL_84;
  LODWORD(this->fields.sortValue0) = 39;
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)this, 0LL) )
    goto LABEL_48;
  this = (CombineServantListViewItem_o *)sub_1BE4B74(ListViewSort_FilterKind___TypeInfo, 1LL);
  if ( !this )
    goto LABEL_83;
  v13 = this;
  if ( !this->fields.sortIndex )
LABEL_84:
    sub_1BE4D30(this, v13);
  LODWORD(this->fields.sortValue0) = 29;
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)this, 0LL) )
    goto LABEL_72;
LABEL_48:
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
  if ( ListViewSort__GetFilter(sort, 29, 0LL) )
  {
    CanNotSelect = CombineServantListViewItem__get_IsCanNotSelect(v4, (const MethodInfo *)sort);
    if ( isChoice )
      goto LABEL_72;
  }
  else
  {
    CanNotSelect = 1;
    if ( isChoice )
      goto LABEL_72;
  }
  if ( CanNotSelect )
    return 0;
LABEL_72:
  v44 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v44 = FilterKindList_TypeInfo;
  }
  this = (CombineServantListViewItem_o *)v44->static_fields->RarityFilterKindList;
  if ( !this )
    goto LABEL_83;
  v45 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)this,
                                           (const MethodInfo_35D34E4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v45, 0LL)
      || ListViewSort__IsSelectedAllTargetFilters(sort, v45, 0LL)
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
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  _BOOL4 IsUnSelectedAllTargetFilters; // w21
  _BOOL4 v40; // w23
  _BOOL4 IsMatchEffectCategory; // w22
  _BOOL4 v42; // w0

  if ( (byte_4B6A822 & 1) == 0 )
  {
    sub_1BE4ACC(&FilterKindList_TypeInfo, sort);
    sub_1BE4ACC(&ListViewSort_FilterKind___TypeInfo, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v6);
    sub_1BE4ACC(&ServantEventBonusFilterController_TypeInfo, v7);
    byte_4B6A822 = 1;
  }
  v8 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v8 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v8->static_fields->ClassGroupFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_62;
  ClassGroupFilterKindList = (__int64)System_Collections_Generic_List_Int32Enum___ToArray(
                                        (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                        (const MethodInfo_35D34E4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_62;
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
      goto LABEL_62;
    v11 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                             (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                             (const MethodInfo_35D34E4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
    goto LABEL_62;
  v13 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_35D34E4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
LABEL_62:
    sub_1BE4D28(ClassGroupFilterKindList, sort);
  v15 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_35D34E4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
          goto LABEL_62;
        ClassGroupFilterKindList = UserServantEntity__getDispLimitCount(
                                     (UserServantEntity_o *)ClassGroupFilterKindList,
                                     0,
                                     0LL);
        v24 = this->fields.userSvtEntity;
        this->fields.dispLimitCount = ClassGroupFilterKindList;
        if ( !v24 )
          goto LABEL_62;
        SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v24, -1, 0LL);
        this->fields.skillCategoryIdList = SkillCategoryIdList;
        sub_1BE4A70(
          (PartyOrganizationUtility_o *)&this->fields.skillCategoryIdList,
          (int64_t)SkillCategoryIdList,
          v26,
          v27,
          v28,
          v29,
          v30,
          v31);
        ClassGroupFilterKindList = (__int64)this->fields.userSvtEntity;
        if ( !ClassGroupFilterKindList )
          goto LABEL_62;
        TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                         (UserServantEntity_o *)ClassGroupFilterKindList,
                                         0,
                                         0LL);
        this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
        sub_1BE4A70(
          (PartyOrganizationUtility_o *)&this->fields.tdCategoryIdList,
          (int64_t)TreasureDeviceCategoryIdList,
          v33,
          v34,
          v35,
          v36,
          v37,
          v38);
      }
    }
    ClassGroupFilterKindList = sub_1BE4B74(ListViewSort_FilterKind___TypeInfo, 1LL);
    if ( !ClassGroupFilterKindList )
      goto LABEL_62;
    v17 = ClassGroupFilterKindList;
    if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
      goto LABEL_63;
    *(_DWORD *)(ClassGroupFilterKindList + 32) = 50;
    IsUnSelectedAllTargetFilters = ListViewSort__IsUnSelectedAllTargetFilters(
                                     sort,
                                     (ListViewSort_FilterKind_array *)ClassGroupFilterKindList,
                                     0LL);
    ClassGroupFilterKindList = sub_1BE4B74(ListViewSort_FilterKind___TypeInfo, 1LL);
    if ( !ClassGroupFilterKindList )
      goto LABEL_62;
    v17 = ClassGroupFilterKindList;
    if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
LABEL_63:
      sub_1BE4D30(ClassGroupFilterKindList, v17);
    *(_DWORD *)(ClassGroupFilterKindList + 32) = 51;
    v40 = ListViewSort__IsUnSelectedAllTargetFilters(
            sort,
            (ListViewSort_FilterKind_array *)ClassGroupFilterKindList,
            0LL);
    IsMatchEffectCategory = ServantEquipEffectFilterController__IsMatchEffectCategory(
                              this->fields.tdCategoryIdList,
                              sort,
                              0LL);
    v42 = ServantEquipEffectFilterController__IsMatchEffectCategory(this->fields.skillCategoryIdList, sort, 0LL);
    if ( ((IsUnSelectedAllTargetFilters ^ v40) & 1) != 0 )
    {
      if ( IsUnSelectedAllTargetFilters )
      {
        if ( !v42 )
          return 0;
      }
      else if ( !IsMatchEffectCategory )
      {
        return 0;
      }
    }
    else if ( !IsMatchEffectCategory && !v42 )
    {
      return 0;
    }
  }
  ClassGroupFilterKindList = sub_1BE4B74(ListViewSort_FilterKind___TypeInfo, 1LL);
  if ( !ClassGroupFilterKindList )
    goto LABEL_62;
  v17 = ClassGroupFilterKindList;
  if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
    goto LABEL_63;
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
    goto LABEL_62;
  v20 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_35D34E4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
    sub_1BE4D28(0LL, method);
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
    sub_1BE4D28(0LL, method);
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

  if ( (byte_4B6A821 & 1) == 0 )
  {
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
    byte_4B6A821 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame || (userSvtEntity = this->fields.userSvtEntity) == 0LL )
    sub_1BE4D28(SelfUserGame, v4);
  v6 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  pushUserSvtId = SelfUserGame->fields.pushUserSvtId;
  *(_OWORD *)&v9.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v9.fields.fakeValue = v6;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v8 = v9;
  this->fields.isPush = pushUserSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v8, 0LL);
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

  if ( (byte_4B6A820 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMaster_CombineAppendPassiveSkillMaster___, method);
    sub_1BE4ACC(&Method_DataManager_GetMaster_SkillMaster___, v3);
    sub_1BE4ACC(&Method_DataManager_GetMaster_SvtAppendPassiveSkillUnlockMaster___, v4);
    sub_1BE4ACC(&DataManager_TypeInfo, v5);
    sub_1BE4ACC(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v6);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_Any_int___, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int__Add__, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int___ctor__, v9);
    sub_1BE4ACC(&System_Collections_Generic_List_int__TypeInfo, v10);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    byte_4B6A820 = 1;
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
      userSvtEntity = DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_SkillMaster___);
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
                        (const MethodInfo_31FD7C4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
      svtSkillLvList = v14->fields.svtSkillLvList;
      if ( !svtSkillLvList )
        goto LABEL_79;
      if ( v19 >= svtSkillLvList->max_length )
LABEL_82:
        sub_1BE4D30(userSvtEntity, method);
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
  v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v56, 0LL);
  this->fields.isAppendSkillExChangeLimit = UserServantAppendPassiveSkillMaster__IsAppendSkillExchangeLimit(v26, 0LL);
  v27 = (System_Collections_Generic_List_int__o *)sub_1BE4D18(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v27,
    (const MethodInfo_35CE9AC *)Method_System_Collections_Generic_List_int___ctor__);
  v28 = v14->fields.svtUseSkillIdList;
  if ( !v28 )
LABEL_79:
    sub_1BE4D28(userSvtEntity, method);
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
        userSvtEntity = DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_CombineAppendPassiveSkillMaster___);
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
        userSvtEntity = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v57, 0LL);
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
                *(const MethodInfo_35CF200 **)(*(_QWORD *)(v54 + 192) + 112LL));
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
    userSvtEntity = DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_SvtAppendPassiveSkillUnlockMaster___);
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
    userSvtEntity = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v58, 0LL);
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
                                          (const MethodInfo_2F64794 *)Method_System_Linq_Enumerable_Any_int___);
  this->fields.isAppendSkillOpenItemNum = System_Linq_Enumerable__Any_int_(
                                            (System_Collections_Generic_IEnumerable_TSource__o *)v27,
                                            (const MethodInfo_2F64794 *)Method_System_Linq_Enumerable_Any_int___);
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
  System_Predicate_object__o *_9__118_0; // x21
  Il2CppObject *v15; // x22
  struct CombineServantListViewItem___c_StaticFields *static_fields; // x0
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  System_Collections_Generic_List_T__o *All; // x0
  __int64 v24; // x1
  int klass; // w22
  _BOOL8 v26; // x0
  __int64 v27; // x1
  Il2CppObject *current; // x24
  UserServantEntity_o *userSvtEntity; // x0
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4B6A826 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Array_IndexOf_int___, eventCampaignEntities);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventCampaignEntity__FindAll__, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__, v9);
    sub_1BE4ACC(&System_Predicate_EventCampaignEntity__TypeInfo, v10);
    sub_1BE4ACC(&Method_CombineServantListViewItem___c__SetIsCombineExpCampaignTarget_b__118_0__, v11);
    sub_1BE4ACC(&CombineServantListViewItem___c_TypeInfo, v12);
    byte_4B6A826 = 1;
  }
  memset(&v31, 0, sizeof(v31));
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
    _9__118_0 = (System_Predicate_object__o *)v13->static_fields->__9__118_0;
    if ( !_9__118_0 )
    {
      if ( !v13->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v13);
        v13 = CombineServantListViewItem___c_TypeInfo;
      }
      v15 = (Il2CppObject *)v13->static_fields->__9;
      _9__118_0 = (System_Predicate_object__o *)sub_1BE4D18(System_Predicate_EventCampaignEntity__TypeInfo);
      System_Predicate_object____ctor(
        _9__118_0,
        v15,
        Method_CombineServantListViewItem___c__SetIsCombineExpCampaignTarget_b__118_0__,
        0LL);
      static_fields = CombineServantListViewItem___c_TypeInfo->static_fields;
      static_fields->__9__118_0 = (struct System_Predicate_EventCampaignEntity__o *)_9__118_0;
      sub_1BE4A70(
        (PartyOrganizationUtility_o *)&static_fields->__9__118_0,
        (int64_t)_9__118_0,
        v17,
        v18,
        v19,
        v20,
        v21,
        v22);
    }
    All = System_Collections_Generic_List_object___FindAll(
            (System_Collections_Generic_List_object__o *)eventCampaignEntities,
            (System_Predicate_T__o *)_9__118_0,
            (const MethodInfo_35EC934 *)Method_System_Collections_Generic_List_EventCampaignEntity__FindAll__);
    if ( !All )
      sub_1BE4D28(0LL, v24);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v30,
      (System_Collections_Generic_List_object__o *)All,
      (const MethodInfo_35ECD1C *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    v31 = v30;
    klass = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        v26 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v31,
                (const MethodInfo_3361CE0 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
        if ( !v26 )
        {
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v31,
            (const MethodInfo_3361CDC *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
          this->fields.combineExpCampaignValue = (float)klass / 1000.0;
          return;
        }
        current = v31.fields._current;
        if ( !v31.fields._current )
          sub_1BE4D28(v26, v27);
        if ( HIDWORD(v31.fields._current[1].klass) == 27 )
          break;
        if ( (System_Array__IndexOf_int_(
                (System_Int32_array *)v31.fields._current[2].monitor,
                this->fields.svtId,
                (const MethodInfo_3055D98 *)Method_System_Array_IndexOf_int___) & 0x80000000) == 0 )
          goto LABEL_20;
      }
      userSvtEntity = this->fields.userSvtEntity;
      if ( !userSvtEntity )
        sub_1BE4D28(0LL, v27);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._NoticeTween_k__BackingField = noticeTween;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields._NoticeTween_k__BackingField,
    (int64_t)noticeTween,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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

  if ( (byte_4B6A81F & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_CombineSkillMaster___, method);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_SkillMaster___, v3);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_UserItemMaster___, v4);
    sub_1BE4ACC(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int__Add__, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int__get_Count__, v7);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4B6A81F = 1;
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
        SelfUserGame = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !SelfUserGame )
          goto LABEL_60;
        SelfUserGame = (__int64)DataManager__GetMasterData_object_(
                                  (DataManager_o *)SelfUserGame,
                                  (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_SkillMaster___);
        if ( !SelfUserGame )
          goto LABEL_60;
        SelfUserGame = (__int64)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)SelfUserGame,
                                  v18,
                                  (const MethodInfo_31FD7C4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
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
  SelfUserGame = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_60;
  SelfUserGame = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)SelfUserGame,
                            (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_CombineSkillMaster___);
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
          SelfUserGame = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !SelfUserGame )
            goto LABEL_60;
          SelfUserGame = (__int64)DataManager__GetMasterData_object_(
                                    (DataManager_o *)SelfUserGame,
                                    (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserItemMaster___);
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
              SelfUserGame = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v43, 0LL);
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
                *(const MethodInfo_35CF200 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
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
    sub_1BE4D30(SelfUserGame, v11);
  }
LABEL_58:
  enableSkillUp = this->fields.enableSkillUp;
  if ( !enableSkillUp )
LABEL_60:
    sub_1BE4D28(SelfUserGame, v11);
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
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  int32_t bonusKind2; // w8
  int32_t v29; // w2
  int32_t bonusKind2Id; // w8
  struct ListViewManager_o *v31; // x8
  __int64 v32; // x11
  UnityEngine_Object_o *v33; // x21
  int32_t v34; // w8
  int32_t v35; // w8
  bool IsEnableServant; // w0
  Il2CppObject *MasterData_object; // x0
  int32_t svtId; // w22
  ServantFilterMaster_o *v39; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // kr00_16
  System_Collections_Generic_List_EventGroupEntity__o *EntitiesByGroupId; // x22
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  struct ListViewManager_o *manager; // x8
  CombineServantListViewManager_c *v49; // x9
  __int64 v50; // x10
  struct ListViewManager_o *v51; // x11
  int32_t v52; // w8
  struct UserServantEntity_o *v53; // x8
  __int128 v54; // q1
  int32_t bonusKindId; // w22
  int64_t v56; // x0
  int64_t v57; // x1
  PartyOrganizationUtility_o *v58; // x0
  System_Func_object__bool__o *v59; // x23
  const MethodInfo *v60; // x2
  _BOOL4 isChoice; // w11
  _BOOL4 isLock; // w23
  _BOOL4 v63; // w21
  int64_t *p_sortValue0; // x22
  __int64 v65; // x8
  unsigned int v66; // w8
  __int64 v67; // x8
  int32_t type; // w8
  __int64 v69; // x8
  int32_t rarity; // w8
  int64_t v71; // x8
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v73; // q1
  struct UserServantEntity_o *v74; // x8
  IconLabelInfo_o *v75; // x20
  int32_t v76; // w21
  struct UserServantEntity_o *v77; // x8
  int32_t v78; // w8
  IconLabelInfo_o *v79; // x20
  struct UserServantEntity_o *v80; // x8
  int64_t v81; // x20
  struct IconLabelInfo_o *v82; // x21
  int32_t v83; // w3
  IconLabelInfo_o *v84; // x0
  int32_t v85; // w2
  unsigned int v86; // w8
  IconLabelInfo_o *v87; // x20
  struct UserServantEntity_o *v88; // x8
  int64_t hp; // x2
  int32_t adjustHp; // w3
  int32_t v91; // w1
  struct UserServantEntity_o *v92; // x8
  struct IconLabelInfo_o *iconLabelInfo1; // x19
  struct ServantEntity_o *servantEntity; // x8
  int64_t cost; // x2
  int32_t lv; // w20
  int64_t friendship; // x2
  int32_t friendshipMax; // w3
  int32_t v99; // w1
  __int64 methodPtr_low; // x10
  struct ServantEntity_o *v101; // x8
  __int64 collectionNo; // x10
  struct UserServantEntity_o *v103; // x8
  int32_t v104; // w21
  __int64 v105; // x9
  bool v106; // zf
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v108; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v109; // [xsp+30h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v110; // [xsp+50h] [xbp-60h]
  int32_t tdMaxLv[2]; // [xsp+78h] [xbp-38h] BYREF

  if ( (byte_4B6A825 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_BasicHelper_Any_EventGroupEntity___, sort);
    sub_1BE4ACC(&CombineServantListViewManager_TypeInfo, v5);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ServantFilterMaster___, v6);
    sub_1BE4ACC(&Method_DataManager_GetMaster_EventCampaignMaster___, v7);
    sub_1BE4ACC(&Method_DataManager_GetMaster_EventGroupMaster___, v8);
    sub_1BE4ACC(&DataManager_TypeInfo, v9);
    sub_1BE4ACC(&System_Func_EventGroupEntity__bool__TypeInfo, v10);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventGroupEntity__get_Count__, v11);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v12);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v14);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_1BE4ACC(&TutorialFlag_TypeInfo, v16);
    sub_1BE4ACC(&Method_CombineServantListViewItem___c__DisplayClass117_0__SetSortValue_b__0__, v17);
    sub_1BE4ACC(&CombineServantListViewItem___c__DisplayClass117_0_TypeInfo, v18);
    byte_4B6A825 = 1;
  }
  *(_QWORD *)tdMaxLv = 0LL;
  v19 = sub_1BE4D18(CombineServantListViewItem___c__DisplayClass117_0_TypeInfo);
  CombineServantListViewItem___c__DisplayClass117_0___ctor(
    (CombineServantListViewItem___c__DisplayClass117_0_o *)v19,
    0LL);
  if ( !v19 )
    goto LABEL_305;
  *(_QWORD *)(v19 + 16) = this;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v19 + 16), (int64_t)this, v22, v23, v24, v25, v26, v27);
  *(_WORD *)&this->fields.isTermination = 0;
  this->fields.sortValue1 = -1LL;
  *(_WORD *)&this->fields.isDispAtkStatusUpInfo = 0;
  if ( !sort )
    goto LABEL_305;
  if ( !sort->fields.isBonusKind || this->fields.isBaseSvt || ListViewItem__get_IsSelect((ListViewItem_o *)this, 0LL) )
  {
LABEL_76:
    if ( this->fields.isBaseSvt || ListViewItem__get_IsSelect((ListViewItem_o *)this, 0LL) )
      goto LABEL_78;
    type = this->fields.type;
    if ( type == 1 )
    {
      if ( !CombineServantListViewItem__IsMatchMaterialFilter(this, sort, v60) )
        goto LABEL_104;
      goto LABEL_78;
    }
    if ( !type )
    {
      if ( !CombineServantListViewItem__IsMatchBaseServantFilter(this, sort, v60) )
        goto LABEL_104;
LABEL_78:
      isChoice = this->fields.isChoice;
      iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo2;
      if ( this->fields.isSwapLock )
        isLock = !this->fields.isLock;
      else
        isLock = this->fields.isLock;
      if ( this->fields.isSwapChoice )
        v63 = !isChoice;
      else
        v63 = isChoice;
      if ( !iconLabelInfo2 )
        goto LABEL_305;
      IconLabelInfo__Clear((IconLabelInfo_o *)iconLabelInfo2, 0LL);
      this->fields.sortValue0 = 0LL;
      p_sortValue0 = &this->fields.sortValue0;
      this->fields.sortValue0B = 0LL;
      if ( !sort->fields.isSmartSort )
      {
        if ( v63 && sort->fields.isChoiceSort )
        {
          v66 = this->fields.type;
          if ( v66 <= 0xC )
          {
            if ( ((1 << v66) & 0x1FDD) != 0 )
              v67 = 10LL;
            else
LABEL_124:
              v67 = -10LL;
            *p_sortValue0 = v67;
          }
        }
LABEL_195:
        iconLabelInfo2 = 1LL;
        switch ( sort->fields.sortKind )
        {
          case 0:
            if ( !this )
              break;
            iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
            v71 = !this->fields.isParty;
LABEL_232:
            this->fields.sortValue1 = v71;
            if ( !iconLabelInfo2 )
              break;
            iconLabelInfo1 = this->fields.iconLabelInfo1;
            goto LABEL_234;
          case 1:
            userSvtEntity = this->fields.userSvtEntity;
            if ( !userSvtEntity )
              break;
            v73 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
            *(_OWORD *)&v110.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v110.fields.fakeValue = v73;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v108 = v110;
            iconLabelInfo2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v108, 0LL);
            v74 = this->fields.userSvtEntity;
            this->fields.sortValue1 = iconLabelInfo2;
            if ( !v74 )
              break;
            iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
            if ( !iconLabelInfo2 )
              break;
            IconLabelInfo__SetTime((IconLabelInfo_o *)iconLabelInfo2, 49, v74->fields.createdAt, 0, 0, 0, 0LL);
            goto LABEL_226;
          case 2:
            iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
            this->fields.sortValue1 = this->fields.rarity;
            if ( !iconLabelInfo2 )
              break;
            v75 = this->fields.iconLabelInfo1;
            v76 = *(_DWORD *)(iconLabelInfo2 + 256);
            iconLabelInfo2 = UserServantEntity__getLevelMax((UserServantEntity_o *)iconLabelInfo2, 0LL);
            v77 = this->fields.userSvtEntity;
            if ( !v77 || !v75 )
              break;
            IconLabelInfo__Set_39043324(v75, 2, v76, iconLabelInfo2, 0, 0, 0, v77->fields.lv, 0LL);
            v78 = this->fields.type;
            if ( v78 != 10 && v78 != 7 )
              goto LABEL_267;
            iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
            if ( !iconLabelInfo2 )
              break;
            v79 = this->fields.iconLabelInfo2;
            iconLabelInfo2 = UserServantEntity__getRarity((UserServantEntity_o *)iconLabelInfo2, 0LL);
            v80 = this->fields.userSvtEntity;
            if ( !v80 || !v79 )
              break;
            IconLabelInfo__Set_39043324(v79, 36, iconLabelInfo2, v80->fields.exceedCount, 0, 0, 0, v80->fields.lv, 0LL);
            goto LABEL_267;
          case 3:
            iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
            if ( !iconLabelInfo2 )
              break;
            v81 = *(int *)(iconLabelInfo2 + 256);
            v82 = this->fields.iconLabelInfo1;
            this->fields.sortValue1 = v81;
            iconLabelInfo2 = UserServantEntity__getLevelMax((UserServantEntity_o *)iconLabelInfo2, 0LL);
            if ( !v82 )
              break;
            v83 = iconLabelInfo2;
            v84 = v82;
            v85 = v81;
            goto LABEL_237;
          case 4:
            iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
            if ( !iconLabelInfo2 )
              break;
            v86 = this->fields.type & 0xFFFFFFFE;
            this->fields.sortValue1 = *(int *)(iconLabelInfo2 + 292);
            if ( v86 == 4 )
            {
              v87 = this->fields.iconLabelInfo1;
            }
            else
            {
              UserServantEntity__getTreasureDeviceInfo_41175800(
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
              v99 = 33;
LABEL_254:
              IconLabelInfo__Set_39043324(
                (IconLabelInfo_o *)iconLabelInfo2,
                v99,
                friendship,
                friendshipMax,
                0,
                0,
                0,
                0,
                0LL);
LABEL_255:
              iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
              if ( !iconLabelInfo2 )
                break;
              v87 = this->fields.iconLabelInfo2;
            }
            v104 = *(_DWORD *)(iconLabelInfo2 + 256);
            iconLabelInfo2 = UserServantEntity__getLevelMax((UserServantEntity_o *)iconLabelInfo2, 0LL);
            if ( v87 )
            {
              IconLabelInfo__Set_39043324(v87, 2, v104, iconLabelInfo2, 0, 0, 0, 0, 0LL);
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
            v88 = this->fields.userSvtEntity;
            if ( !v88 )
              break;
            hp = v88->fields.hp;
            iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
            this->fields.sortValue1 = hp;
            if ( !iconLabelInfo2 )
              break;
            adjustHp = v88->fields.adjustHp;
            v91 = 3;
            goto LABEL_225;
          case 6:
            v92 = this->fields.userSvtEntity;
            if ( !v92 )
              break;
            hp = v92->fields.atk;
            iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
            this->fields.sortValue1 = hp;
            if ( !iconLabelInfo2 )
              break;
            adjustHp = v92->fields.adjustAtk;
            v91 = 5;
LABEL_225:
            IconLabelInfo__Set_39043324((IconLabelInfo_o *)iconLabelInfo2, v91, hp, adjustHp, 0, 0, 0, 0, 0LL);
LABEL_226:
            iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
            if ( !iconLabelInfo2 )
              break;
            iconLabelInfo1 = this->fields.iconLabelInfo2;
LABEL_234:
            lv = *(_DWORD *)(iconLabelInfo2 + 256);
            goto LABEL_235;
          case 7:
            servantEntity = this->fields.servantEntity;
            if ( !servantEntity )
              break;
            cost = servantEntity->fields.cost;
            iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
            this->fields.sortValue1 = cost;
            if ( !iconLabelInfo2 )
              break;
            IconLabelInfo__Set_39043324((IconLabelInfo_o *)iconLabelInfo2, 7, cost, 0, 0, 0, 0, 0, 0LL);
            goto LABEL_255;
          case 8:
            iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
            v71 = -this->fields.priority;
            goto LABEL_232;
          case 0xA:
            friendship = this->fields.friendship;
            iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
            this->fields.sortValue1 = friendship;
            if ( !iconLabelInfo2 )
              break;
            friendshipMax = this->fields.friendshipMax;
            v99 = 32;
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
            v101 = this->fields.servantEntity;
            if ( !v101 )
              break;
            collectionNo = v101->fields.collectionNo;
            v103 = this->fields.userSvtEntity;
            this->fields.sortValue1 = (((unsigned __int64)(unsigned int)this->fields.rarity << 32)
                                     + (iconLabelInfo2 << 48)) | collectionNo;
            if ( !v103 )
              break;
            iconLabelInfo1 = this->fields.iconLabelInfo1;
            lv = v103->fields.lv;
            iconLabelInfo2 = (int64_t)v103;
LABEL_235:
            iconLabelInfo2 = UserServantEntity__getLevelMax((UserServantEntity_o *)iconLabelInfo2, 0LL);
            if ( !iconLabelInfo1 )
              break;
            v83 = iconLabelInfo2;
            v84 = iconLabelInfo1;
            v85 = lv;
LABEL_237:
            IconLabelInfo__Set_39043324(v84, 2, v85, v83, 0, 0, 0, 0, 0LL);
            goto LABEL_267;
          case 0xF:
            friendship = this->fields.hpReinforceValue;
            iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
            this->fields.isDispHpStatusUpInfo = 1;
            this->fields.sortValue1 = friendship;
            if ( !iconLabelInfo2 )
              break;
            friendshipMax = this->fields.nowMaxHpReinforceValue;
            v99 = 44;
            goto LABEL_254;
          case 0x10:
            friendship = this->fields.atkReinforceValue;
            iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
            this->fields.isDispAtkStatusUpInfo = 1;
            this->fields.sortValue1 = friendship;
            if ( !iconLabelInfo2 )
              break;
            friendshipMax = this->fields.nowMaxAtkReinforceValue;
            v99 = 45;
            goto LABEL_254;
          default:
            return iconLabelInfo2;
        }
LABEL_305:
        sub_1BE4D28(iconLabelInfo2, v21);
      }
      switch ( this->fields.type )
      {
        case 0:
          if ( this->fields.isHeroineSvt )
          {
            if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
            if ( TutorialFlag__Get_38593888(126, 0LL) )
              goto LABEL_162;
          }
          if ( this->fields.isParty )
          {
            v65 = 20LL;
            goto LABEL_192;
          }
          if ( this->fields.isLvMax )
            goto LABEL_188;
          goto LABEL_193;
        case 1:
          iconLabelInfo2 = (int64_t)this->fields.servantEntity;
          if ( !iconLabelInfo2 )
            goto LABEL_305;
          if ( ServantEntity__get_IsExpUp((ServantEntity_o *)iconLabelInfo2, 0LL) )
          {
            if ( this->fields.isBaseLvMax )
            {
              v69 = -120LL;
            }
            else
            {
              v69 = -5LL;
              if ( !isLock && !v63 )
                v69 = 30LL;
            }
            goto LABEL_295;
          }
          iconLabelInfo2 = (int64_t)this->fields.servantEntity;
          if ( !iconLabelInfo2 )
            goto LABEL_305;
          if ( ServantEntity__get_IsStatusUp((ServantEntity_o *)iconLabelInfo2, 0LL) )
          {
            if ( this->fields.isSameClass )
            {
              rarity = this->fields.rarity;
              if ( this->fields.hpBase < 1 )
              {
                if ( rarity == 4 )
                {
                  v69 = -90LL;
                  if ( !this->fields.isAtkSecondUpMax && this->fields.isAtkUpMax )
                    v69 = 90LL;
                  goto LABEL_293;
                }
                v105 = 70LL;
                v106 = !this->fields.isAtkUpMax;
                v69 = -110LL;
              }
              else
              {
                if ( rarity == 4 )
                {
                  v69 = -80LL;
                  if ( !this->fields.isHpSecondUpMax && this->fields.isHpUpMax )
                    v69 = 100LL;
LABEL_293:
                  *p_sortValue0 = v69;
                  if ( isLock || v63 )
                    v69 = -5LL;
                  goto LABEL_295;
                }
                v105 = 80LL;
                v106 = !this->fields.isHpUpMax;
                v69 = -100LL;
              }
              if ( v106 )
                v69 = v105;
              goto LABEL_293;
            }
            v69 = -150LL;
          }
          else
          {
            if ( !CombineServantListViewItem__get_IsCanNotSelectMaterial(this, v21) )
            {
LABEL_296:
              if ( this->fields.isFortification )
                *p_sortValue0 = -10LL;
              if ( v63 && sort->fields.isChoiceSort )
                *(_OWORD *)p_sortValue0 = xmmword_BE17E0;
              goto LABEL_195;
            }
            if ( this->fields.isLimitCntTarget )
            {
              v69 = -20LL;
            }
            else if ( this->fields.isParty )
            {
              v69 = -30LL;
            }
            else if ( this->fields.isUseSupport )
            {
              v69 = -40LL;
            }
            else
            {
              v69 = -10LL;
              if ( this->fields.isUseRecommendSupport )
                v69 = -50LL;
            }
          }
LABEL_295:
          *p_sortValue0 = v69;
          goto LABEL_296;
        case 2:
          if ( this->fields.isSealCombineLimit )
          {
            v65 = 0LL;
            goto LABEL_192;
          }
          if ( !CombineServantListViewItem__get_IsCanNotBaseSelect(this, v21)
            && this->fields.isLimitUpItemNum
            && this->fields.isLvMax )
          {
LABEL_191:
            v65 = 10LL;
            goto LABEL_192;
          }
          if ( this->fields.isHeroineSvt )
            goto LABEL_188;
          if ( !this->fields.isLimitCntMax )
            goto LABEL_193;
          goto LABEL_162;
        case 3:
          if ( this->fields.isHeroineSvt )
          {
            if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
            if ( TutorialFlag__Get_38593888(126, 0LL) )
              goto LABEL_162;
          }
          if ( this->fields.isSkillUpItemNum )
            goto LABEL_191;
          if ( !this->fields.isSkillLvMax )
            goto LABEL_193;
          goto LABEL_188;
        case 4:
          if ( this->fields.isSameSvt )
            goto LABEL_191;
          if ( this->fields.isHeroineSvt )
            goto LABEL_188;
          if ( !this->fields.isTdLvMax )
            goto LABEL_193;
          goto LABEL_162;
        case 5:
          if ( v63 && sort->fields.isChoiceSort || this->fields.isFortification )
            goto LABEL_124;
          goto LABEL_195;
        case 6:
          if ( !CombineServantListViewItem__get_IsCanNotBaseSelect(this, v21)
            && this->fields.isLvMax
            && this->fields.isLimitCntMax
            && this->fields.isLvExceedItemNum )
          {
            goto LABEL_191;
          }
          if ( this->fields.isHeroineSvt )
            goto LABEL_188;
          if ( !this->fields.isLvExceedMax )
            goto LABEL_193;
          goto LABEL_162;
        case 7:
          if ( this->fields.isEventJoin )
            goto LABEL_188;
          if ( !this->fields.isHeroineSvt )
            goto LABEL_193;
          if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
          if ( !TutorialFlag__Get_38593888(126, 0LL) )
            goto LABEL_193;
          goto LABEL_162;
        case 8:
          if ( !CombineServantListViewItem__get_IsCanNotBaseSelect(this, v21)
            && this->fields.isFriendshipRankMax
            && this->fields.isFriendshipExceedItemNum )
          {
            goto LABEL_191;
          }
          if ( this->fields.isHeroineSvt )
            goto LABEL_188;
          if ( !this->fields.isFriendshipExceedMax )
            goto LABEL_193;
          goto LABEL_162;
        case 9:
          if ( !CombineServantListViewItem__get_IsCanNotBaseSelect(this, v21) )
            goto LABEL_191;
          if ( this->fields.isHeroineSvt )
            goto LABEL_188;
          if ( this->fields.isSealCombineLimit )
          {
LABEL_169:
            v65 = -15LL;
            goto LABEL_192;
          }
          if ( this->fields.isLimitCntMax )
            goto LABEL_162;
          if ( !this->fields.isEventJoin )
            goto LABEL_193;
          goto LABEL_269;
        case 0xA:
          if ( this->fields.isHeroineSvt )
          {
            if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
            if ( TutorialFlag__Get_38593888(126, 0LL) )
              goto LABEL_269;
          }
          if ( this->fields.isEventJoin )
            goto LABEL_162;
          if ( !this->fields.isCommandCardExceedMax )
            goto LABEL_193;
          goto LABEL_188;
        case 0xB:
          if ( this->fields.isHeroineSvt )
          {
            if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
            if ( TutorialFlag__Get_38593888(126, 0LL) )
              goto LABEL_162;
          }
          if ( this->fields.isEventJoin )
            goto LABEL_169;
          if ( this->fields.isAppendSkillOpenItemNum || this->fields.isAppendSkillUpItemNum )
            goto LABEL_191;
          if ( !this->fields.isAppendSkillLvMax )
            goto LABEL_193;
          goto LABEL_188;
        case 0xC:
          if ( !this->fields.isHeroineSvt )
            goto LABEL_309;
          if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
          if ( TutorialFlag__Get_38593888(126, 0LL) )
          {
            v65 = -40LL;
          }
          else
          {
LABEL_309:
            if ( this->fields.isEventJoin )
            {
              v65 = -35LL;
            }
            else if ( this->fields.isAppendSkillLvMax )
            {
LABEL_269:
              v65 = -30LL;
            }
            else if ( this->fields.isAllAppendSkillLock )
            {
LABEL_162:
              v65 = -20LL;
            }
            else
            {
              if ( !this->fields.isAppendSkillLvSame )
              {
LABEL_193:
                if ( v63 && sort->fields.isChoiceSort )
                  this->fields.sortValue0B = 10LL;
                goto LABEL_195;
              }
LABEL_188:
              v65 = -10LL;
            }
          }
LABEL_192:
          *p_sortValue0 = v65;
          goto LABEL_193;
        default:
          goto LABEL_195;
      }
    }
    if ( CombineServantListViewItem__IsMatchServantFilter(this, sort, v60) )
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
        iconLabelInfo2 = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_EventGroupMaster___);
        if ( !iconLabelInfo2 )
          goto LABEL_305;
        EntitiesByGroupId = EventGroupMaster__GetEntitiesByGroupId(
                              (EventGroupMaster_o *)iconLabelInfo2,
                              this->fields.bonusKindId,
                              0LL);
        iconLabelInfo2 = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)EntitiesByGroupId, 0LL);
        if ( (iconLabelInfo2 & 1) == 0 )
        {
          if ( !EntitiesByGroupId )
            goto LABEL_305;
          if ( EntitiesByGroupId->fields._size >= 2 )
          {
            manager = sort->fields.manager;
            if ( manager )
            {
              v49 = CombineServantListViewManager_TypeInfo;
              v50 = LOBYTE(CombineServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
              if ( LOBYTE(manager->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v50 )
              {
                if ( (CombineServantListViewManager_c *)manager->klass->_2.typeHierarchy[v50 - 1] == CombineServantListViewManager_TypeInfo )
                  v51 = sort->fields.manager;
                else
                  v51 = 0LL;
              }
              else
              {
                v51 = 0LL;
              }
              *(_QWORD *)(v19 + 24) = v51;
              v58 = (PartyOrganizationUtility_o *)(v19 + 24);
              if ( LOBYTE(manager->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v50 )
              {
                if ( (CombineServantListViewManager_c *)manager->klass->_2.typeHierarchy[v50 - 1] == v49 )
                  v57 = (int64_t)manager;
                else
                  v57 = 0LL;
              }
              else
              {
                v57 = 0LL;
              }
            }
            else
            {
              v57 = 0LL;
              *(_QWORD *)(v19 + 24) = 0LL;
              v58 = (PartyOrganizationUtility_o *)(v19 + 24);
            }
            sub_1BE4A70(v58, v57, v42, v43, v44, v45, v46, v47);
            v59 = (System_Func_object__bool__o *)sub_1BE4D18(System_Func_EventGroupEntity__bool__TypeInfo);
            System_Func_object__bool____ctor(
              v59,
              (Il2CppObject *)v19,
              Method_CombineServantListViewItem___c__DisplayClass117_0__SetSortValue_b__0__,
              0LL);
            this->fields.isEventUpVal = BasicHelper__Any_object_(
                                          (System_Collections_Generic_List_T__o *)EntitiesByGroupId,
                                          (System_Func_T__bool__o *)v59,
                                          (const MethodInfo_2F4407C *)Method_BasicHelper_Any_EventGroupEntity___);
          }
        }
        goto LABEL_75;
      case 2:
        v31 = sort->fields.manager;
        if ( v31
          && (v32 = LOBYTE(CombineServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr),
              LOBYTE(v31->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v32) )
        {
          if ( (CombineServantListViewManager_c *)v31->klass->_2.typeHierarchy[v32 - 1] == CombineServantListViewManager_TypeInfo )
            v33 = (UnityEngine_Object_o *)sort->fields.manager;
          else
            v33 = 0LL;
        }
        else
        {
          v33 = 0LL;
        }
        if ( this->fields.bonusKind == 2 )
        {
          v52 = sort->fields.bonusKind2Id;
          if ( this->fields.bonusKindId == v52 )
            goto LABEL_75;
        }
        else
        {
          v52 = sort->fields.bonusKind2Id;
        }
        this->fields.bonusKindId = v52;
        this->fields.bonusKind = 2;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        iconLabelInfo2 = UnityEngine_Object__op_Implicit(v33, 0LL);
        if ( (iconLabelInfo2 & 1) != 0 )
        {
          if ( !v33 )
            goto LABEL_305;
          iconLabelInfo2 = CombineServantListViewManager__IsLargeSuccessCampaignClassId(
                             (CombineServantListViewManager_o *)v33,
                             this->fields.bonusKindId,
                             this->fields.svtId,
                             0LL);
          v53 = this->fields.userSvtEntity;
          this->fields.isEventUpVal = iconLabelInfo2 & 1;
          if ( !v53 )
            goto LABEL_305;
          v54 = *(_OWORD *)&v53->fields.id.fields.fakeValue;
          bonusKindId = this->fields.bonusKindId;
          *(_OWORD *)&v110.fields.currentCryptoKey = *(_OWORD *)&v53->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v110.fields.fakeValue = v54;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v109 = v110;
          v56 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v109, 0LL);
          if ( CombineServantListViewManager__IsExchangeSvtExist(
                 (CombineServantListViewManager_o *)v33,
                 bonusKindId,
                 v56,
                 0LL) )
          {
            goto LABEL_76;
          }
        }
        goto LABEL_75;
      case 3:
        if ( this->fields.bonusKind == 3 )
        {
          v34 = sort->fields.bonusKind2Id;
          if ( this->fields.bonusKindId == v34 )
            goto LABEL_75;
        }
        else
        {
          v34 = sort->fields.bonusKind2Id;
        }
        this->fields.bonusKindId = v34;
        this->fields.bonusKind = 3;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        iconLabelInfo2 = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_EventCampaignMaster___);
        if ( !iconLabelInfo2 )
          goto LABEL_305;
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
          v29 = sort->fields.bonusKind2Id;
          if ( this->fields.bonusKindId == v29 )
            goto LABEL_75;
        }
        else
        {
          v29 = sort->fields.bonusKind2Id;
        }
        iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
        this->fields.bonusKind = bonusKind2;
        this->fields.bonusKindId = v29;
        if ( !iconLabelInfo2 )
          goto LABEL_305;
        IsEnableServant = UserServantEntity__getEventUpVal_41168560(
                            (UserServantEntity_o *)iconLabelInfo2,
                            this->fields.setupInfo,
                            v29,
                            0LL,
                            0LL);
        goto LABEL_37;
      case 7:
        if ( this->fields.bonusKind == 7 )
        {
          v35 = sort->fields.bonusKind2Id;
          if ( this->fields.bonusKindId == v35 )
          {
LABEL_75:
            if ( !this->fields.isEventUpVal )
              break;
            goto LABEL_76;
          }
        }
        else
        {
          v35 = sort->fields.bonusKind2Id;
        }
        this->fields.bonusKindId = v35;
        this->fields.bonusKind = 7;
        iconLabelInfo2 = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !iconLabelInfo2 )
          goto LABEL_305;
        MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)iconLabelInfo2,
                              (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ServantFilterMaster___);
        svtId = this->fields.svtId;
        v39 = (ServantFilterMaster_o *)MasterData_object;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        v40 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(svtId, 0LL);
        v21 = *(const MethodInfo **)&v40.fields.fakeValue;
        iconLabelInfo2 = *(_QWORD *)&v40.fields.currentCryptoKey;
        if ( !v39 )
          goto LABEL_305;
        IsEnableServant = ServantFilterMaster__IsEnableServant(v39, v40, this->fields.bonusKindId, 0LL);
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

  if ( (byte_4B6A830 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_15433/*"UserSvt "*/, method);
    byte_4B6A830 = 1;
  }
  NameText = CombineServantListViewItem__get_NameText(this, method);
  return System_String__Concat_62698808((System_String_o *)StringLiteral_15433/*"UserSvt "*/, NameText, 0LL);
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

  if ( (byte_4B6A82C & 1) == 0 )
  {
    sub_1BE4ACC(&LocalizationManager_TypeInfo, method);
    sub_1BE4ACC(&StringLiteral_19307/*"error"*/, v3);
    byte_4B6A82C = 1;
  }
  servantEntity = this->fields.servantEntity;
  if ( !servantEntity )
    return (System_String_o *)StringLiteral_19307/*"error"*/;
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
  if ( (byte_4B6A82D & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_1/*""*/, method);
    byte_4B6A82D = 1;
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
    sub_1BE4D28(0LL, method);
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

  if ( (byte_4B6A82E & 1) == 0 )
  {
    sub_1BE4ACC(&TutorialFlag_TypeInfo, method);
    byte_4B6A82E = 1;
  }
  type = this->fields.type;
  if ( type )
  {
    isEventJoin = 1;
  }
  else
  {
    if ( !this->fields.isHeroineSvt )
      goto LABEL_81;
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    if ( TutorialFlag__Get_38593888(126, 0LL) )
    {
      isEventJoin = 1;
    }
    else
    {
LABEL_81:
      v5 = this->fields.isLvMax
        || this->fields.isExpUpSvt
        || this->fields.isStatusUpSvt && !this->fields.isCanStUp
        || this->fields.isMaterialTdSvt;
      isEventJoin = v5;
    }
    type = this->fields.type;
  }
  switch ( type )
  {
    case 9:
      if ( this->fields.isLimitCntMax
        || this->fields.isHeroineSvt
        || this->fields.isEventJoin
        || this->fields.isIgnoreCombineLimitSpecial )
      {
        goto LABEL_45;
      }
      isSealCombineLimit = this->fields.isSealCombineLimit;
      break;
    case 3:
      if ( this->fields.isHeroineSvt )
      {
        if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
        v7 = TutorialFlag__Get_38593888(126, 0LL) || this->fields.isSkillLvMax;
        type = this->fields.type;
        isEventJoin = v7;
        goto LABEL_33;
      }
      isSealCombineLimit = this->fields.isSkillLvMax;
      break;
    case 2:
      if ( !this->fields.isLimitCntMax )
      {
LABEL_35:
        isSealCombineLimit = this->fields.isHeroineSvt;
        break;
      }
LABEL_45:
      isEventJoin = 1;
      goto LABEL_48;
    default:
LABEL_33:
      switch ( type )
      {
        case 4:
          if ( !this->fields.isTdLvMax )
            goto LABEL_35;
          goto LABEL_45;
        case 6:
          if ( this->fields.isLvExceedMax )
            goto LABEL_45;
          goto LABEL_44;
        case 7:
          if ( this->fields.isHeroineSvt )
          {
            if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
            if ( TutorialFlag__Get_38593888(126, 0LL) )
              goto LABEL_45;
          }
          goto LABEL_46;
        case 8:
          if ( this->fields.isFriendshipExceedMax )
            goto LABEL_45;
LABEL_44:
          if ( this->fields.isHeroineSvt )
            goto LABEL_45;
LABEL_46:
          isSealCombineLimit = this->fields.isEventJoin;
          break;
        default:
          goto LABEL_48;
      }
      break;
  }
  isEventJoin = isSealCombineLimit;
LABEL_48:
  v8 = this->fields.type;
  if ( v8 == 10 )
  {
    if ( this->fields.isHeroineSvt )
    {
      if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
      if ( TutorialFlag__Get_38593888(126, 0LL) )
        goto LABEL_54;
    }
    if ( this->fields.isCommandCardExceedMax )
LABEL_54:
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
    isEventJoin = TutorialFlag__Get_38593888(126, 0LL);
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
  return TutorialFlag__Get_38593888(126, 0LL);
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

  if ( (byte_4B6A82F & 1) == 0 )
  {
    sub_1BE4ACC(&TutorialFlag_TypeInfo, method);
    byte_4B6A82F = 1;
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
    if ( TutorialFlag__Get_38593888(126, 0LL) )
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
    sub_1BE4D28(v6, v5);
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
    sub_1BE4D28(0LL, method);
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
    sub_1BE4D28(0LL, method);
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
    sub_1BE4D28(0LL, method);
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
    sub_1BE4D28(0LL, method);
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

  if ( (byte_4B6A82A & 1) == 0 )
  {
    sub_1BE4ACC(&LocalizationManager_TypeInfo, method);
    sub_1BE4ACC(&StringLiteral_19307/*"error"*/, v3);
    byte_4B6A82A = 1;
  }
  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    return (System_String_o *)StringLiteral_19307/*"error"*/;
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
  if ( (byte_4B6A829 & 1) == 0 )
  {
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    this = (CombineServantListViewItem_o *)sub_1BE4ACC(&StringLiteral_19307/*"error"*/, v3);
    byte_4B6A829 = 1;
  }
  servantEntity = v2->fields.servantEntity;
  if ( !servantEntity )
    return (System_String_o *)StringLiteral_19307/*"error"*/;
  userSvtEntity = v2->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_1BE4D28(this, method);
  v7 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.currentCryptoKey;
  v6 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v10.fields.currentCryptoKey = v7;
  *(_QWORD *)&v10.fields.fakeValue = v6;
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v10, 0LL);
  return ServantEntity__getName(servantEntity, v8, -1, 0LL);
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

  if ( (byte_4B6A82B & 1) == 0 )
  {
    sub_1BE4ACC(&LocalizationManager_TypeInfo, method);
    byte_4B6A82B = 1;
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

  if ( (byte_4B6A831 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMaster_SvtCoinMaster___, method);
    sub_1BE4ACC(&DataManager_TypeInfo, v3);
    sub_1BE4ACC(&Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__GetEntity__, v4);
    byte_4B6A831 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_SvtCoinMaster___);
  if ( !Master_object )
    sub_1BE4D28(0LL, v6);
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             this->fields.svtId,
             (const MethodInfo_31FD7C4 *)Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__GetEntity__);
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

  if ( (byte_4B6A832 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMaster_UserSvtCoinMaster___, method);
    sub_1BE4ACC(&DataManager_TypeInfo, v3);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5);
    byte_4B6A832 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_UserSvtCoinMaster___);
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
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v16, 0LL);
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
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v19, 0LL);
  if ( !v10 )
    goto LABEL_17;
  Master_object = UserSvtCoinMaster__TryGetEntity(v10, &entity, v12, Master_object, 0LL);
  if ( (Master_object & 1) != 0 )
  {
    if ( entity )
      return entity->fields.num;
LABEL_17:
    sub_1BE4D28(Master_object, v7);
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
  PartyOrganizationUtility_o *p_userSvtEntity; // x19
  struct UserServantEntity_o *userSvtEntity; // t1
  __int128 v9; // q1
  int64_t v10; // x20
  Il2CppObject *Entity; // x20
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v19; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v20; // [xsp+20h] [xbp-40h]

  v2 = this;
  if ( (byte_4B6A827 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_UserServantMaster___, method);
    sub_1BE4ACC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v3);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v4);
    this = (CombineServantListViewItem_o *)sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4B6A827 = 1;
  }
  userSvtEntity = v2->fields.userSvtEntity;
  p_userSvtEntity = (PartyOrganizationUtility_o *)&v2->fields.userSvtEntity;
  v6 = userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_9;
  v9 = *(_OWORD *)&v6->fields.id.fields.fakeValue;
  *(_OWORD *)&v20.fields.currentCryptoKey = *(_OWORD *)&v6->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v20.fields.fakeValue = v9;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v19 = v20;
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v19, 0LL);
  this = (CombineServantListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (this = (CombineServantListViewItem_o *)DataManager__GetMasterData_object_(
                                                 (DataManager_o *)this,
                                                 (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
  {
LABEL_9:
    sub_1BE4D28(this, method);
  }
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             v10,
             (const MethodInfo_31FD970 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  p_userSvtEntity->klass = (PartyOrganizationUtility_c *)Entity;
  sub_1BE4A70(p_userSvtEntity, (int64_t)Entity, v12, v13, v14, v15, v16, v17);
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
  if ( (byte_4B6A828 & 1) == 0 )
  {
    this = (CombineServantListViewItem_o *)sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
    byte_4B6A828 = 1;
  }
  userSvtEntity = v2->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_1BE4D28(this, method);
  v4 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v7.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v7.fields.fakeValue = v4;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v6 = v7;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v6, 0LL);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.userSvtEntity = entity;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.userSvtEntity,
    (int64_t)entity,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_1BE4D28(0LL, value);
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
    sub_1BE4D28(0LL, value);
  this->fields.dragSelectNum = value - 1;
}


void __fastcall CombineServantListViewItem__set_IsHpStatusMax(
        CombineServantListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  if ( !this )
    sub_1BE4D28(0LL, value);
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
    sub_1BE4D28(0LL, value);
  this->fields.isNotSelectSecondStatusUpAtk = this->fields.atkBase > 0 && value;
}


void __fastcall CombineServantListViewItem__set_IsSecondHpStatusMax(
        CombineServantListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  if ( !this )
    sub_1BE4D28(0LL, value);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._NoticeTween_k__BackingField = value;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields._NoticeTween_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall CombineServantListViewItem___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4B6A836 & 1) == 0 )
  {
    sub_1BE4ACC(&CombineServantListViewItem___c_TypeInfo, v1);
    byte_4B6A836 = 1;
  }
  v2 = (Il2CppObject *)sub_1BE4D18(CombineServantListViewItem___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  CombineServantListViewItem___c_TypeInfo->static_fields->__9 = (struct CombineServantListViewItem___c_o *)v2;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)CombineServantListViewItem___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
}


void __fastcall CombineServantListViewItem___c___ctor(CombineServantListViewItem___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall CombineServantListViewItem___c___SetIsCombineExpCampaignTarget_b__118_0(
        CombineServantListViewItem___c_o *this,
        EventCampaignEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BE4D28(this, 0LL);
  return x->fields.target == 2 || x->fields.target == 27;
}


void __fastcall CombineServantListViewItem___c__DisplayClass117_0___ctor(
        CombineServantListViewItem___c__DisplayClass117_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall CombineServantListViewItem___c__DisplayClass117_0___SetSortValue_b__0(
        CombineServantListViewItem___c__DisplayClass117_0_o *this,
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

  if ( (byte_4B6A837 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMaster_EventCampaignMaster___, entity);
    sub_1BE4ACC(&Method_DataManager_GetMaster_ServantFilterMaster___, v5);
    sub_1BE4ACC(&DataManager_TypeInfo, v6);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v7);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9);
    byte_4B6A837 = 1;
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
    IsLargeSuccessCampaignClassId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v29, 0LL);
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
      IsLargeSuccessCampaignClassId = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_EventCampaignMaster___);
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
        IsLargeSuccessCampaignClassId = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_ServantFilterMaster___);
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
                return UserServantEntity__getEventUpVal_41168560(
                         (UserServantEntity_o *)IsLargeSuccessCampaignClassId,
                         v28->fields.setupInfo,
                         entity->fields.eventId,
                         0LL,
                         0LL);
            }
          }
        }
LABEL_34:
        sub_1BE4D28(IsLargeSuccessCampaignClassId, v12);
      }
    }
  }
  return 1;
}