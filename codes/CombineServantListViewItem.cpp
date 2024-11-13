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
  __int64 v16; // x1
  __int64 v17; // x2
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
  __int64 v56; // x1
  __int64 v57; // x2
  __int64 v58; // x1
  __int64 v59; // x2
  __int64 v60; // x1
  __int64 v61; // x2
  __int64 v62; // x1
  __int64 v63; // x2
  __int64 v64; // x1
  __int64 v65; // x2
  __int64 v66; // x1
  __int64 v67; // x2
  __int64 v68; // x1
  __int64 v69; // x2
  __int64 v70; // x1
  __int64 v71; // x2
  __int64 v72; // x1
  __int64 v73; // x2
  __int64 v74; // x1
  __int64 v75; // x2
  __int64 v76; // x1
  __int64 v77; // x2
  __int64 v78; // x1
  __int64 v79; // x2
  __int64 v80; // x1
  __int64 v81; // x2
  __int64 v82; // x1
  __int64 v83; // x2
  __int64 v84; // x1
  __int64 v85; // x2
  __int64 v86; // x1
  __int64 v87; // x2
  __int64 v88; // x1
  __int64 v89; // x2
  __int64 v90; // x1
  __int64 v91; // x2
  __int64 v92; // x1
  __int64 v93; // x2
  IconLabelInfo_o *v94; // x20
  int64_t v95; // x2
  int32_t v96; // w3
  System_String_o *v97; // x4
  BattleSetupInfo_o *v98; // x5
  FollowerInfo_o *v99; // x6
  PartyListViewItem_o *v100; // x7
  __int64 v101; // x1
  __int64 v102; // x2
  __int64 v103; // x3
  IconLabelInfo_o *v104; // x20
  int64_t v105; // x2
  int32_t v106; // w3
  System_String_o *v107; // x4
  BattleSetupInfo_o *v108; // x5
  FollowerInfo_o *v109; // x6
  PartyListViewItem_o *v110; // x7
  __int64 v111; // x1
  __int64 v112; // x2
  __int64 v113; // x3
  System_Collections_Generic_List_int__o *v114; // x20
  int64_t v115; // x2
  int32_t v116; // w3
  System_String_o *v117; // x4
  BattleSetupInfo_o *v118; // x5
  FollowerInfo_o *v119; // x6
  PartyListViewItem_o *v120; // x7
  __int64 v121; // x1
  __int64 v122; // x2
  __int64 v123; // x3
  System_Collections_Generic_List_int__o *v124; // x20
  int64_t v125; // x2
  int32_t v126; // w3
  System_String_o *v127; // x4
  BattleSetupInfo_o *v128; // x5
  FollowerInfo_o *v129; // x6
  PartyListViewItem_o *v130; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_userSvtEntity; // x21
  int64_t v132; // x2
  int32_t v133; // w3
  System_String_o *v134; // x4
  BattleSetupInfo_o *v135; // x5
  FollowerInfo_o *v136; // x6
  PartyListViewItem_o *v137; // x7
  int64_t Instance; // x0
  const MethodInfo *v139; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v140; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v141; // x20
  __int64 v142; // x23
  __int64 v143; // x24
  Il2CppObject *v144; // x0
  int64_t v145; // x2
  int32_t v146; // w3
  System_String_o *v147; // x4
  BattleSetupInfo_o *v148; // x5
  FollowerInfo_o *v149; // x6
  PartyListViewItem_o *v150; // x7
  int64_t v151; // x2
  int32_t v152; // w3
  System_String_o *v153; // x4
  BattleSetupInfo_o *v154; // x5
  FollowerInfo_o *v155; // x6
  PartyListViewItem_o *v156; // x7
  struct UserServantEntity_o *v157; // x8
  struct ServantEntity_o *servantEntity; // x8
  ServantLimitMaster_o *v159; // x20
  int32_t v160; // w24
  int64_t v161; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v162; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v163; // q1
  UserServantCollectionMaster_o *v164; // x20
  int64_t v165; // x24
  int64_t v166; // x23
  int v167; // w8
  bool *p_isStatusUpSvt; // x26
  int64_t v169; // x22
  struct UserServantEntity_o *v170; // x8
  int32_t v171; // w20
  BalanceConfig_c *v172; // x8
  struct BalanceConfig_StaticFields *static_fields; // x8
  struct UserServantEntity_o *v174; // x8
  __int128 v175; // q1
  __int64 v176; // x20
  const MethodInfo *v177; // x1
  int64_t UserSvtId; // x0
  unsigned int v179; // w8
  bool isLimitCountMax; // w8
  UserServantEntity_o *v181; // x8
  __int64 v182; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x25
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v185; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v188; // x8
  __int64 v189; // x9
  int32_t *v190; // x10
  __int64 v191; // x0
  _QWORD *v192; // x0
  __int64 v193; // x1
  __int64 methodPtr_low; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v195; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v196; // q0
  __int64 v197; // x22
  System_Collections_Generic_IEnumerator_T__c *v198; // x8
  __int64 v199; // x9
  int32_t *v200; // x10
  __int64 v201; // x0
  __int64 v202; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v203; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v204; // q0
  UserRecommendSupportMaster_o *v205; // x20
  UserServantEntity_o *v206; // x8
  UserServantEntity_o *v207; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v208; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v209; // q0
  int64_t v210; // x0
  __int128 v211; // q1
  __int64 v212; // x1
  Il2CppObject *v213; // x20
  struct ServantEntity_o *v214; // x8
  int64_t v215; // x25
  __int64 v216; // x24
  __int64 v217; // x29
  int32_t v218; // w8
  __int64 v219; // x1
  Il2CppObject *v220; // x20
  struct ServantEntity_o *v221; // x8
  int64_t v222; // x25
  __int64 v223; // x24
  __int64 v224; // x29
  struct System_Int32_array *commandCardParam; // x20
  int max_length; // w8
  __int64 v227; // x22
  int32_t v228; // w25
  UserServantEntity_o *v229; // x23
  bool v230; // w24
  __int64 v231; // x1
  System_Collections_Generic_IEnumerator_T__o *v232; // x25
  System_Collections_Generic_IEnumerator_T__c *v233; // x8
  __int64 v234; // x9
  int32_t *v235; // x10
  __int64 v236; // x0
  System_Collections_Generic_IEnumerator_T__c *v237; // x8
  __int64 v238; // x9
  int32_t *v239; // x10
  __int64 v240; // x0
  _QWORD *v241; // x0
  __int64 v242; // x1
  __int64 v243; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v244; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v245; // q0
  __int64 v246; // x22
  System_Collections_Generic_IEnumerator_T__c *v247; // x8
  __int64 v248; // x9
  int32_t *v249; // x10
  __int64 v250; // x0
  __int64 v251; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v252; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v253; // q0
  UserRecommendSupportMaster_o *v254; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v255; // x8
  __int64 v256; // x20
  __int64 v257; // x24
  int32_t v258; // w20
  struct UserServantEntity_o *v259; // x8
  __int128 v260; // q0
  int64_t v261; // x0
  __int128 v262; // q1
  int32_t SvtClassId; // w0
  int32_t SvtClassGroupType; // w20
  int32_t materialExp; // w20
  BalanceConfig_c *v266; // x0
  int SameClassExp; // w22
  double v268; // d0
  int32_t v269; // w8
  UserServantEntity_o *v270; // x8
  int32_t v271; // w20
  bool v272; // w8
  bool v273; // w8
  bool v274; // w8
  bool v275; // w8
  __int64 v276; // x1
  Il2CppObject *v277; // x20
  struct ServantEntity_o *v278; // x8
  int64_t v279; // x25
  __int64 v280; // x24
  __int64 v281; // x26
  unsigned int v282; // w8
  UserServantEntity_o *v283; // x8
  bool v284; // w8
  UserServantEntity_o *v285; // x8
  const MethodInfo *v286; // x1
  UserServantEntity_o *v287; // x8
  __int128 v288; // q0
  int64_t v289; // x0
  __int128 v290; // q1
  UserServantEntity_o *v291; // x9
  int64_t v292; // x23
  int32_t combineLimitId; // w20
  __int64 v294; // x24
  __int64 v295; // x25
  int32_t v296; // w25
  int64_t v297; // x20
  __int64 v298; // x24
  __int64 v299; // x27
  __int64 v300; // x8
  UserItemMaster_o *v301; // x25
  unsigned __int64 i; // x28
  UserServantEntity_o *v303; // x8
  __int128 v304; // q1
  int32_t v305; // w26
  int32_t v306; // w23
  UserServantEntity_o *v307; // x8
  bool isLevelMax; // w8
  UserServantEntity_o *v309; // x8
  UserServantEntity_o *v310; // x8
  const MethodInfo *v311; // x1
  UserServantEntity_o *v312; // x8
  __int128 v313; // q0
  int64_t v314; // x0
  __int128 v315; // q1
  UserServantEntity_o *v316; // x8
  UserServantEntity_o *v317; // x8
  __int128 v318; // q0
  int64_t v319; // x0
  __int128 v320; // q1
  UserServantEntity_o *v321; // x8
  UserServantEntity_o *v322; // x8
  __int128 v323; // q0
  int64_t v324; // x0
  __int128 v325; // q1
  int id; // w20
  int32_t lv; // w22
  int32_t SameSvtNpLvCache; // w0
  const MethodInfo *v329; // x4
  int32_t v330; // w20
  char v331; // w8
  int v332; // w8
  int32_t v333; // w0
  int32_t v334; // w20
  int32_t v335; // w26
  int32_t v336; // w25
  int v337; // w22
  __int64 v338; // x1
  System_Collections_Generic_IEnumerator_T__o *v339; // x25
  System_Collections_Generic_IEnumerator_T__c *v340; // x8
  __int64 v341; // x9
  int32_t *v342; // x10
  __int64 v343; // x0
  System_Collections_Generic_IEnumerator_T__c *v344; // x8
  __int64 v345; // x9
  int32_t *v346; // x10
  __int64 v347; // x0
  _QWORD *v348; // x0
  __int64 v349; // x1
  __int64 v350; // x9
  UserServantEntity_o *v351; // x8
  __int128 v352; // q0
  __int64 v353; // x22
  System_Collections_Generic_IEnumerator_T__c *v354; // x8
  __int64 v355; // x9
  int32_t *v356; // x10
  __int64 v357; // x0
  __int64 v358; // x1
  UserServantEntity_o *v359; // x8
  __int128 v360; // q0
  UserRecommendSupportMaster_o *v361; // x20
  bool IsSettingServant; // w8
  UserServantEntity_o *v363; // x8
  CombineServantListViewItem_o *v364; // x8
  CombineServantListViewItem_o *v365; // x20
  struct UserServantEntity_o *v366; // x8
  __int128 v367; // q0
  int64_t v368; // x0
  __int128 v369; // q1
  int32_t v370; // w8
  UserServantEntity_o *v371; // x8
  UserServantEntity_o *v372; // x8
  bool v373; // w8
  UserServantEntity_o *v374; // x8
  UserServantEntity_o *v375; // x8
  __int128 v376; // q0
  int64_t v377; // x0
  __int128 v378; // q1
  ServantExceedEntity_o *SvtExceedEnt; // x0
  int32_t *v380; // x25
  CommonConsumeEntity_array *IdEntityList; // x0
  __int64 v382; // x2
  __int64 v383; // x3
  CommonConsumeEntity_array *v384; // x27
  System_Collections_Generic_HashSet_int__o *v385; // x20
  __int64 v386; // x1
  __int64 v387; // x2
  __int64 v388; // x3
  System_Collections_Generic_HashSet_int__o *v389; // x26
  int v390; // w8
  __int64 v391; // x22
  CommonConsumeEntity_o *v392; // x29
  UserServantEntity_o *v393; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v394; // x27
  __int64 v395; // x24
  __int64 v396; // x28
  UserServantEntity_o *v397; // x24
  System_Int32_array *v398; // x20
  System_Int32_array *v399; // x0
  __int64 v400; // x1
  __int64 v401; // x20
  __int64 v402; // x24
  UserServantEntity_o *v403; // x8
  UserServantEntity_o *v404; // x8
  UserServantEntity_o *v405; // x8
  __int128 v406; // q0
  int64_t v407; // x0
  __int128 v408; // q1
  int32_t maxFriendshipRank; // w20
  int v410; // w22
  int64_t v411; // x20
  __int64 v412; // x23
  __int64 v413; // x24
  UserItemMaster_o *v414; // x22
  unsigned __int64 v415; // x25
  __int64 v416; // x27
  bool v417; // w8
  UserServantEntity_o *v418; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  int64_t v420; // x2
  int32_t v421; // w3
  System_String_o *v422; // x4
  BattleSetupInfo_o *v423; // x5
  FollowerInfo_o *v424; // x6
  PartyListViewItem_o *v425; // x7
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  int64_t v427; // x2
  int32_t v428; // w3
  System_String_o *v429; // x4
  BattleSetupInfo_o *v430; // x5
  FollowerInfo_o *v431; // x6
  PartyListViewItem_o *v432; // x7
  int64_t v433; // x8
  struct ServantEntity_o *v434; // x9
  UserServantEntity_o *v435; // x8
  __int64 v436; // x20
  __int64 v437; // x21
  int32_t v438; // w8
  int v439; // [xsp+Ch] [xbp-494h]
  UserServantMaster_o *MasterData_object; // [xsp+18h] [xbp-488h]
  int64_t v441; // [xsp+20h] [xbp-480h]
  bool *p_isLimitUpItemNum; // [xsp+28h] [xbp-478h]
  struct IconLabelInfo_o **p_iconLabelInfo2; // [xsp+30h] [xbp-470h]
  int64_t v444; // [xsp+38h] [xbp-468h]
  bool v446; // [xsp+40h] [xbp-460h]
  bool v448; // [xsp+44h] [xbp-45Ch]
  bool v449; // [xsp+44h] [xbp-45Ch]
  int64_t v450; // [xsp+48h] [xbp-458h]
  bool *p_isChoice; // [xsp+58h] [xbp-448h]
  bool v453; // [xsp+64h] [xbp-43Ch]
  struct ServantEntity_o **p_servantEntity; // [xsp+68h] [xbp-438h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v455; // [xsp+70h] [xbp-430h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v456; // [xsp+90h] [xbp-410h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v457; // [xsp+B0h] [xbp-3F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v458; // [xsp+D0h] [xbp-3D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v459; // [xsp+F0h] [xbp-3B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v460; // [xsp+110h] [xbp-390h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v461; // [xsp+130h] [xbp-370h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v462; // [xsp+150h] [xbp-350h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v463; // [xsp+170h] [xbp-330h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v464; // [xsp+190h] [xbp-310h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v465; // [xsp+1B0h] [xbp-2F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v466; // [xsp+1D0h] [xbp-2D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v467; // [xsp+1F0h] [xbp-2B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v468; // [xsp+210h] [xbp-290h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v469; // [xsp+230h] [xbp-270h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v470; // [xsp+250h] [xbp-250h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v471; // [xsp+270h] [xbp-230h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v472; // [xsp+290h] [xbp-210h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v473; // [xsp+2B0h] [xbp-1F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v474; // [xsp+2D0h] [xbp-1D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v475; // [xsp+2F0h] [xbp-1B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v476; // [xsp+310h] [xbp-190h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v477; // [xsp+330h] [xbp-170h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v478; // [xsp+350h] [xbp-150h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v479; // [xsp+370h] [xbp-130h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v480; // [xsp+390h] [xbp-110h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v481; // [xsp+3B0h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v482; // [xsp+3D0h] [xbp-D0h]
  UserItemEntity_o *v483; // [xsp+3F8h] [xbp-A8h] BYREF
  int32_t tdMaxLv; // [xsp+404h] [xbp-9Ch] BYREF
  int32_t tdLv[2]; // [xsp+408h] [xbp-98h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+410h] [xbp-90h] BYREF
  UserItemEntity_o *v487; // [xsp+418h] [xbp-88h] BYREF
  __int64 v488; // [xsp+420h] [xbp-80h] BYREF
  UserServantCommandCodeEntity_o *v489; // [xsp+428h] [xbp-78h] BYREF
  UserServantCommandCardEntity_o *v490; // [xsp+430h] [xbp-70h] BYREF
  UserServantCommandCodeEntity_o *entity; // [xsp+438h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v492; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v493; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v494; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v495; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v496; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v497; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v498; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v499; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v500; // 0:x0.16

  if ( (byte_4B19D95 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, *(_QWORD *)&type, *(_QWORD *)&index);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v16, v17);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_CombineLimitMaster___, v18, v19);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_CombineMaterialMaster___, v20, v21);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_FriendshipMaster___, v22, v23);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantClassMaster___, v24, v25);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitMaster___, v26, v27);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v28, v29);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___, v30, v31);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_TreasureDvcMaster___, v32, v33);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserItemMaster___, v34, v35);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v36, v37);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantCommandCardMaster___, v38, v39);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___, v40, v41);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantLeaderMaster___, v42, v43);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, v44, v45);
    sub_1BCA7E0(&Method_DataManager_GetMaster_CommonConsumeMaster___, v46, v47);
    sub_1BCA7E0(&Method_DataManager_GetMaster_SvtCoinMaster___, v48, v49);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserRecommendSupportMaster___, v50, v51);
    sub_1BCA7E0(&DataManager_TypeInfo, v52, v53);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v54, v55);
    sub_1BCA7E0(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v56, v57);
    sub_1BCA7E0(&Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__GetEntity__, v58, v59);
    sub_1BCA7E0(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__, v60, v61);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_int___, v62, v63);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int__Add__, v64, v65);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int___ctor__, v66, v67);
    sub_1BCA7E0(&System_Collections_Generic_HashSet_int__TypeInfo, v68, v69);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v70, v71);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v72, v73);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v74, v75);
    sub_1BCA7E0(&IconLabelInfo_TypeInfo, v76, v77);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v78, v79);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v80, v81);
    sub_1BCA7E0(&System_Math_TypeInfo, v82, v83);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v84, v85);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v86, v87);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v88, v89);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v90, v91);
    sub_1BCA7E0(&UserServantLeaderEntity_TypeInfo, v92, v93);
    byte_4B19D95 = 1;
  }
  entity = 0LL;
  v490 = 0LL;
  v489 = 0LL;
  v488 = 0LL;
  v487 = 0LL;
  tdInfo = 0LL;
  *(_QWORD *)tdLv = 0LL;
  tdMaxLv = 0;
  v483 = 0LL;
  v94 = (IconLabelInfo_o *)sub_1BCAA2C(IconLabelInfo_TypeInfo, *(_QWORD *)&type, *(_QWORD *)&index, userSvtEntity);
  IconLabelInfo___ctor(v94, 0LL);
  this->fields.iconLabelInfo1 = v94;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.iconLabelInfo1, (int64_t)v94, v95, v96, v97, v98, v99, v100);
  v104 = (IconLabelInfo_o *)sub_1BCAA2C(IconLabelInfo_TypeInfo, v101, v102, v103);
  IconLabelInfo___ctor(v104, 0LL);
  this->fields.iconLabelInfo2 = v104;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.iconLabelInfo2,
    (int64_t)v104,
    v105,
    v106,
    v107,
    v108,
    v109,
    v110);
  v114 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                     System_Collections_Generic_List_int__TypeInfo,
                                                     v111,
                                                     v112,
                                                     v113);
  System_Collections_Generic_List_int____ctor(
    v114,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.enableSkillUp = v114;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.enableSkillUp,
    (int64_t)v114,
    v115,
    v116,
    v117,
    v118,
    v119,
    v120);
  v124 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                     System_Collections_Generic_List_int__TypeInfo,
                                                     v121,
                                                     v122,
                                                     v123);
  System_Collections_Generic_List_int____ctor(
    v124,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.enableAppendSkillUp = v124;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.enableAppendSkillUp,
    (int64_t)v124,
    v125,
    v126,
    v127,
    v128,
    v129,
    v130);
  ListViewItem___ctor((ListViewItem_o *)this, 0LL);
  this->fields.userSvtEntity = userSvtEntity;
  p_userSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userSvtEntity;
  this->fields.type = type;
  this->fields.index = index;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.userSvtEntity,
    (int64_t)userSvtEntity,
    v132,
    v133,
    v134,
    v135,
    v136,
    v137);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_527;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  v140 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_527;
  v141 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v143 = *(_QWORD *)&v140[5].fields.currentCryptoKey;
  v142 = *(_QWORD *)&v140[5].fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v139);
  *(_QWORD *)&v492.fields.currentCryptoKey = v143;
  *(_QWORD *)&v492.fields.fakeValue = v142;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v492, 0LL);
  if ( !v141 )
    goto LABEL_527;
  v144 = DataMasterBase_object__object__int___GetEntity(
           v141,
           Instance,
           (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)v144;
  p_servantEntity = &this->fields.servantEntity;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.servantEntity,
    (int64_t)v144,
    v145,
    v146,
    v147,
    v148,
    v149,
    v150);
  this->fields.setupInfo = setupInfo;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.setupInfo,
    (int64_t)setupInfo,
    v151,
    v152,
    v153,
    v154,
    v155,
    v156);
  v157 = this->fields.userSvtEntity;
  this->fields.isEventUpVal = 0;
  *(_QWORD *)&this->fields.bonusKind = 1LL;
  if ( !v157 )
    goto LABEL_527;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v157->fields.svtId, 0LL);
  servantEntity = this->fields.servantEntity;
  this->fields.svtId = Instance;
  if ( !servantEntity )
    goto LABEL_527;
  this->fields.classId = servantEntity->fields.classId;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_527;
  MasterData_object = (UserServantMaster_o *)DataManager__GetMasterData_object_(
                                               (DataManager_o *)Instance,
                                               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_527;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtEntity )
    goto LABEL_527;
  v159 = (ServantLimitMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428((*p_userSvtEntity)[5], 0LL);
  if ( !*p_userSvtEntity )
    goto LABEL_527;
  v160 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428((*p_userSvtEntity)[6], 0LL);
  if ( !v159 )
    goto LABEL_527;
  Instance = (int64_t)ServantLimitMaster__GetEntity(v159, v160, Instance, 0LL);
  if ( !Instance )
    goto LABEL_527;
  v161 = Instance;
  this->fields.rarity = *(_DWORD *)(Instance + 24);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_527;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v162 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_527;
  v163 = v162[4];
  v164 = (UserServantCollectionMaster_o *)Instance;
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v482.fields.currentCryptoKey = v162[3];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v482.fields.fakeValue = v163;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v139);
  v481 = v482;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v481, 0LL);
  if ( !*p_userSvtEntity )
    goto LABEL_527;
  v165 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428((*p_userSvtEntity)[5], 0LL);
  if ( !v164 )
    goto LABEL_527;
  Instance = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(v164, v165, Instance, 0LL);
  if ( !Instance )
    goto LABEL_527;
  v166 = Instance;
  v441 = v161;
  UserServantCollectionEntity__getFriendShipRankInfo(
    (UserServantCollectionEntity_o *)Instance,
    &this->fields.friendship,
    &this->fields.friendshipMax,
    0LL);
  Instance = (int64_t)UserGameMaster__getSelfUserGame(0LL);
  if ( !Instance )
    goto LABEL_527;
  v167 = *(_DWORD *)(Instance + 96);
  *(_DWORD *)&this->fields.isStatusUpSvt = 0;
  p_isStatusUpSvt = &this->fields.isStatusUpSvt;
  v439 = v167;
  *(_WORD *)&this->fields.isFavorite = 0;
  *(_WORD *)&this->fields.isLock = 0;
  *(_DWORD *)&this->fields.isChoice = 0;
  this->fields.isMaxSelect = 0;
  *(_QWORD *)&this->fields.isLimitUpItemNum = 0LL;
  v169 = Instance;
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
    goto LABEL_527;
  Instance = UserServantEntity__getLimitCntMax((UserServantEntity_o *)Instance, 0LL);
  v170 = this->fields.userSvtEntity;
  this->fields.maxLimitCnt = Instance;
  if ( !v170 )
    goto LABEL_527;
  this->fields.currentLimitCnt = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                   v170->fields.limitCount,
                                   0LL);
  this->fields.isLvExceedItemNum = 0;
  this->fields.isCanNotLock = 0;
  *(_DWORD *)&this->fields.isBaseLvMax = 0;
  *(_QWORD *)&this->fields.isAtkUpMax = 0LL;
  *(_DWORD *)&this->fields.isNotSelectSecondStatusUpAtk = 0;
  Instance = (int64_t)this->fields.userSvtEntity;
  this->fields.dragSelectNum = -1;
  if ( !Instance )
    goto LABEL_527;
  v171 = *(_DWORD *)(Instance + 276);
  v172 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v139);
    v172 = BalanceConfig_TypeInfo;
    Instance = (int64_t)*p_userSvtEntity;
  }
  static_fields = v172->static_fields;
  this->fields.hpReinforceValue = static_fields->StatusUpAdjustHp * v171;
  if ( !Instance )
    goto LABEL_527;
  v444 = v166;
  this->fields.atkReinforceValue = static_fields->StatusUpAdjustAtk * *(_DWORD *)(Instance + 272);
  UserServantEntity__getAdjustMaxData(
    (UserServantEntity_o *)Instance,
    &this->fields.nowMaxHpReinforceValue,
    &this->fields.nowMaxAtkReinforceValue,
    0LL);
  v174 = this->fields.userSvtEntity;
  *(_WORD *)&this->fields.isEquipedCmdCard = 0;
  if ( !v174 )
    goto LABEL_527;
  v175 = *(_OWORD *)&v174->fields.id.fields.fakeValue;
  v176 = *(_QWORD *)(v169 + 120);
  v453 = isParty;
  v450 = v169;
  *(_OWORD *)&v480.fields.currentCryptoKey = *(_OWORD *)&v174->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v480.fields.fakeValue = v175;
  this->fields.isPush = v176 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v480, 0LL);
  UserSvtId = CombineServantListViewItem__get_UserSvtId(this, v177);
  EventFortificationDataLogic__SetFortification(
    &this->fields.isFortification,
    &this->fields.fortificationName,
    &this->fields.fortificationDetailName,
    UserSvtId,
    0LL);
  v179 = this->fields.type;
  if ( v179 > 0xA || ((1 << v179) & 0x481) == 0 )
    goto LABEL_134;
  Instance = (int64_t)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_527;
  Instance = UserServantEntity__isLevelMax((UserServantEntity_o *)Instance, 0LL);
  if ( (Instance & 1) != 0 )
  {
    Instance = (int64_t)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_527;
    Instance = UserServantEntity__isAdjustHpMax((UserServantEntity_o *)Instance, 0LL);
    if ( (Instance & 1) != 0 )
    {
      Instance = (int64_t)*p_userSvtEntity;
      if ( !*p_userSvtEntity )
        goto LABEL_527;
      Instance = UserServantEntity__isAdjustAtkMax((UserServantEntity_o *)Instance, 0LL);
      if ( (Instance & 1) != 0 )
      {
        Instance = (int64_t)*p_userSvtEntity;
        if ( !*p_userSvtEntity )
          goto LABEL_527;
        Instance = UserServantEntity__isSecondAdjustHpMax((UserServantEntity_o *)Instance, 0LL);
        if ( (Instance & 1) != 0 )
        {
          Instance = (int64_t)*p_userSvtEntity;
          if ( !*p_userSvtEntity )
            goto LABEL_527;
          Instance = UserServantEntity__isSecondAdjustAtkMax((UserServantEntity_o *)Instance, 0LL);
          if ( (Instance & 1) != 0 )
            this->fields.isLvMax = 1;
        }
      }
    }
  }
  if ( !userSvtEntity )
    goto LABEL_527;
  isLimitCountMax = UserServantEntity__isLimitCountMax(userSvtEntity, 0LL);
  Instance = (int64_t)this->fields.userSvtEntity;
  this->fields.isLimitCntMax = isLimitCountMax;
  this->fields.isParty = v453;
  if ( !Instance )
    goto LABEL_527;
  Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL);
  v181 = this->fields.userSvtEntity;
  this->fields.isLock = Instance & 1;
  if ( !v181 )
    goto LABEL_527;
  *p_isChoice = UserServantEntity__IsChoice(v181, 0LL);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_527;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantLeaderMaster___);
  if ( !Instance )
    goto LABEL_527;
  Instance = *(_QWORD *)(Instance + 32);
  if ( !Instance )
    goto LABEL_527;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 (const MethodInfo_314F9E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v182);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v185 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v185;
        p_offset += 4;
        if ( !v185 )
          goto LABEL_55;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_55:
      p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v188 = Enumerator->klass;
    v189 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v190 = &v188->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v190 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v189;
        v190 += 4;
        if ( !v189 )
          goto LABEL_62;
      }
      v191 = (__int64)&v188->vtable[*v190].method;
    }
    else
    {
LABEL_62:
      v191 = sub_1C1C7C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v192 = (_QWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v191)(
                       Enumerator,
                       *(_QWORD *)(v191 + 8));
    if ( !v192 )
      goto LABEL_529;
    methodPtr_low = LOBYTE(UserServantLeaderEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*v192 + 304LL) < (unsigned int)methodPtr_low
      || *(UserServantLeaderEntity_c **)(*(_QWORD *)(*v192 + 200LL) + 8 * methodPtr_low - 8) != UserServantLeaderEntity_TypeInfo )
    {
      sub_1BCACFC(v192);
LABEL_529:
      sub_1BCAA3C(v192, v193);
    }
    v195 = *p_userSvtEntity;
    if ( !*p_userSvtEntity )
      sub_1BCAA3C(v192, UserServantLeaderEntity_TypeInfo);
    v196 = v195[2];
    v197 = v192[7];
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v482.fields.currentCryptoKey = v195[1];
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v482.fields.fakeValue = v196;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(
        CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
        UserServantLeaderEntity_TypeInfo);
    v479 = v482;
    if ( v197 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v479, 0LL) )
    {
      this->fields.isUseSupport = 1;
      break;
    }
  }
  v198 = Enumerator->klass;
  v199 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v200 = &v198->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v200 - 1) != System_IDisposable_TypeInfo )
    {
      --v199;
      v200 += 4;
      if ( !v199 )
        goto LABEL_76;
    }
    v201 = (__int64)&v198->vtable[*v200].method;
  }
  else
  {
LABEL_76:
    v201 = sub_1C1C7C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v201)(
    Enumerator,
    *(_QWORD *)(v201 + 8));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v202);
  Instance = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserRecommendSupportMaster___);
  v203 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_527;
  v204 = v203[2];
  v205 = (UserRecommendSupportMaster_o *)Instance;
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v482.fields.currentCryptoKey = v203[1];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v482.fields.fakeValue = v204;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v139);
  v478 = v482;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v478, 0LL);
  if ( !v205 )
    goto LABEL_527;
  Instance = UserRecommendSupportMaster__IsSettingServant(v205, Instance, 0, 0LL);
  v206 = this->fields.userSvtEntity;
  this->fields.isUseRecommendSupport = Instance & 1;
  if ( !v206 )
    goto LABEL_527;
  Instance = UserServantEntity__IsEventJoin(v206, 0LL);
  v207 = this->fields.userSvtEntity;
  this->fields.isEventJoin = Instance & 1;
  if ( !v207 )
    goto LABEL_527;
  Instance = UserServantEntity__IsHeroine(v207, 0LL);
  if ( (Instance & 1) != 0 )
    this->fields.isHeroineSvt = 1;
  if ( baseUsrSvtData )
  {
    v208 = *p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_527;
    v209 = v208[2];
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v482.fields.currentCryptoKey = v208[1];
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v482.fields.fakeValue = v209;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v139);
    v477 = v482;
    v210 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v477, 0LL);
    v211 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
    *(_OWORD *)&v476.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v476.fields.fakeValue = v211;
    if ( v210 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v476, 0LL) )
      this->fields.isBaseSvt = 1;
  }
  Instance = (int64_t)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_527;
  if ( UserServantEntity__IsCombineExp((UserServantEntity_o *)Instance, 0LL) )
    this->fields.isExpUpSvt = 1;
  Instance = (int64_t)*p_servantEntity;
  if ( !*p_servantEntity )
    goto LABEL_527;
  if ( ServantEntity__get_IsStatusUp((ServantEntity_o *)Instance, 0LL) )
    *p_isStatusUpSvt = 1;
  Instance = (int64_t)*p_servantEntity;
  if ( !*p_servantEntity )
    goto LABEL_527;
  if ( ServantEntity__get_IsServantMaterialTd((ServantEntity_o *)Instance, 0LL) )
    this->fields.isMaterialTdSvt = 1;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_527;
  v213 = DataManager__GetMasterData_object_(
           (DataManager_o *)Instance,
           (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v212);
  Instance = NetworkManager__get_UserId(0LL);
  v214 = *p_servantEntity;
  if ( !*p_servantEntity )
    goto LABEL_527;
  v215 = Instance;
  v217 = *(_QWORD *)&v214->fields.id.fields.currentCryptoKey;
  v216 = *(_QWORD *)&v214->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v139);
  *(_QWORD *)&v493.fields.currentCryptoKey = v217;
  *(_QWORD *)&v493.fields.fakeValue = v216;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v493, 0LL);
  if ( !v213 )
    goto LABEL_527;
  Instance = UserServantCommandCodeMaster__TryGetEntity(
               (UserServantCommandCodeMaster_o *)v213,
               &entity,
               v215,
               (int)Instance,
               0LL);
  if ( (Instance & 1) != 0 )
  {
    Instance = (int64_t)entity;
    if ( !entity )
      goto LABEL_527;
    this->fields.isEquipedCmdCard = UserServantCommandCodeEntity__IsEquipedCommandCode(entity, 0LL);
    Instance = (int64_t)entity;
    if ( !entity )
      goto LABEL_527;
    Instance = UserServantCommandCodeEntity__IsCommandCardSlotOpen(entity, 0LL);
    this->fields.isCmdCardSlotOpen = Instance & 1;
  }
  v218 = this->fields.type;
  if ( v218 == 10 )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_527;
    v220 = DataManager__GetMasterData_object_(
             (DataManager_o *)Instance,
             (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantCommandCardMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v219);
    Instance = NetworkManager__get_UserId(0LL);
    v221 = *p_servantEntity;
    if ( !*p_servantEntity )
      goto LABEL_527;
    v222 = Instance;
    v224 = *(_QWORD *)&v221->fields.id.fields.currentCryptoKey;
    v223 = *(_QWORD *)&v221->fields.id.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v139);
    *(_QWORD *)&v494.fields.currentCryptoKey = v224;
    *(_QWORD *)&v494.fields.fakeValue = v223;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v494, 0LL);
    if ( !v220 )
      goto LABEL_527;
    Instance = UserServantCommandCardMaster__TryGetEntity(
                 (UserServantCommandCardMaster_o *)v220,
                 &v490,
                 v222,
                 (int)Instance,
                 0LL);
    if ( (Instance & 1) != 0 )
    {
      if ( !v490 )
        goto LABEL_527;
      commandCardParam = v490->fields.commandCardParam;
      if ( commandCardParam )
      {
        max_length = commandCardParam->max_length;
        if ( max_length >= 1 )
        {
          v227 = 0LL;
          while ( 1 )
          {
            if ( (unsigned int)v227 >= max_length )
              goto LABEL_537;
            Instance = (int64_t)BalanceConfig_TypeInfo;
            v228 = commandCardParam->m_Items[v227 + 1];
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v139);
              Instance = (int64_t)BalanceConfig_TypeInfo;
            }
            if ( v228 < *(_DWORD *)(*(_QWORD *)(Instance + 184) + 740LL) )
              break;
            this->fields.isCommandCardExceedMax = 1;
            max_length = commandCardParam->max_length;
            if ( (int)++v227 >= max_length )
              goto LABEL_134;
          }
          this->fields.isCommandCardExceedMax = 0;
        }
      }
    }
LABEL_134:
    v218 = this->fields.type;
  }
  v446 = isFavorite;
  v229 = baseUsrSvtData;
  v230 = isMtSvt;
  if ( v218 == 1 )
  {
    this->fields.isMaterialSvt = v230;
    this->fields.isParty = v453;
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_527;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantLeaderMaster___);
    if ( !Instance )
      goto LABEL_527;
    Instance = *(_QWORD *)(Instance + 32);
    if ( !Instance )
      goto LABEL_527;
    v448 = isMtSvt;
    v232 = System_Collections_ObjectModel_Collection_object___GetEnumerator(
             (System_Collections_ObjectModel_Collection_T__o *)Instance,
             (const MethodInfo_314F9E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    if ( !v232 )
      sub_1BCAA3C(0LL, v231);
    while ( 1 )
    {
      v233 = v232->klass;
      v234 = *(unsigned __int16 *)(&v232->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v232->klass->_2.bitflags2 + 3) )
      {
        v235 = &v233->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)v235 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v234;
          v235 += 4;
          if ( !v234 )
            goto LABEL_144;
        }
        v236 = (__int64)&v233->vtable[*v235].method;
      }
      else
      {
LABEL_144:
        v236 = sub_1C1C7C0(v232, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v236)(
              v232,
              *(_QWORD *)(v236 + 8)) & 1) == 0 )
        break;
      v237 = v232->klass;
      v238 = *(unsigned __int16 *)(&v232->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v232->klass->_2.bitflags2 + 3) )
      {
        v239 = &v237->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v239 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
        {
          --v238;
          v239 += 4;
          if ( !v238 )
            goto LABEL_151;
        }
        v240 = (__int64)&v237->vtable[*v239].method;
      }
      else
      {
LABEL_151:
        v240 = sub_1C1C7C0(v232, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
      }
      v241 = (_QWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v240)(
                         v232,
                         *(_QWORD *)(v240 + 8));
      if ( !v241 )
        goto LABEL_533;
      v243 = LOBYTE(UserServantLeaderEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*v241 + 304LL) < (unsigned int)v243
        || *(UserServantLeaderEntity_c **)(*(_QWORD *)(*v241 + 200LL) + 8 * v243 - 8) != UserServantLeaderEntity_TypeInfo )
      {
        sub_1BCACFC(v241);
LABEL_532:
        sub_1BCACFC(v348);
LABEL_533:
        sub_1BCAA3C(v241, v242);
      }
      v244 = *p_userSvtEntity;
      if ( !*p_userSvtEntity )
        sub_1BCAA3C(v241, UserServantLeaderEntity_TypeInfo);
      v245 = v244[2];
      v246 = v241[7];
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v482.fields.currentCryptoKey = v244[1];
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v482.fields.fakeValue = v245;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(
          CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
          UserServantLeaderEntity_TypeInfo);
      v475 = v482;
      if ( v246 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v475, 0LL) )
      {
        this->fields.isUseSupport = 1;
        break;
      }
    }
    v247 = v232->klass;
    v248 = *(unsigned __int16 *)(&v232->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v232->klass->_2.bitflags2 + 3) )
    {
      v249 = &v247->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v249 - 1) != System_IDisposable_TypeInfo )
      {
        --v248;
        v249 += 4;
        if ( !v248 )
          goto LABEL_165;
      }
      v250 = (__int64)&v247->vtable[*v249].method;
    }
    else
    {
LABEL_165:
      v250 = sub_1C1C7C0(v232, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v250)(v232, *(_QWORD *)(v250 + 8));
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v251);
    Instance = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserRecommendSupportMaster___);
    v252 = *p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_527;
    v253 = v252[2];
    v254 = (UserRecommendSupportMaster_o *)Instance;
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v482.fields.currentCryptoKey = v252[1];
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v482.fields.fakeValue = v253;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v139);
    v474 = v482;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v474, 0LL);
    if ( !v254 )
      goto LABEL_527;
    this->fields.isUseRecommendSupport = UserRecommendSupportMaster__IsSettingServant(v254, Instance, 0, 0LL);
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_527;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_CombineMaterialMaster___);
    if ( !*p_servantEntity )
      goto LABEL_527;
    if ( !*p_userSvtEntity )
      goto LABEL_527;
    if ( !Instance )
      goto LABEL_527;
    Instance = (int64_t)CombineMaterialMaster__GetEntity(
                          (CombineMaterialMaster_o *)Instance,
                          (*p_servantEntity)->fields.combineMaterialId,
                          (*p_userSvtEntity)[16].fields.currentCryptoKey,
                          0LL);
    if ( !Instance )
      goto LABEL_527;
    this->fields.materialExp = *(_DWORD *)(Instance + 24);
    if ( baseUsrSvtData )
    {
      v255 = *p_userSvtEntity;
      if ( !*p_userSvtEntity )
        goto LABEL_527;
      v257 = *(_QWORD *)&v255[5].fields.currentCryptoKey;
      v256 = *(_QWORD *)&v255[5].fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v139);
      *(_QWORD *)&v495.fields.currentCryptoKey = v257;
      *(_QWORD *)&v495.fields.fakeValue = v256;
      v258 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v495, 0LL);
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(baseUsrSvtData->fields.svtId, 0LL);
      if ( v258 == (_DWORD)Instance )
      {
        v259 = this->fields.userSvtEntity;
        this->fields.isLimitCntTarget = 1;
        if ( !v259 )
          goto LABEL_527;
        v260 = *(_OWORD *)&v259->fields.id.fields.fakeValue;
        *(_OWORD *)&v482.fields.currentCryptoKey = *(_OWORD *)&v259->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v482.fields.fakeValue = v260;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v139);
        v473 = v482;
        v261 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v473, 0LL);
        v262 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
        *(_OWORD *)&v472.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v472.fields.fakeValue = v262;
        if ( v261 != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v472, 0LL) )
          this->fields.isSameBaseSvt = 1;
      }
      Instance = UserServantEntity__getSvtClassId(baseUsrSvtData, 1, 0LL);
      if ( !*p_userSvtEntity )
        goto LABEL_527;
      if ( UserServantEntity__getSvtClassId((UserServantEntity_o *)*p_userSvtEntity, 1, 0LL) == (_DWORD)Instance )
        this->fields.isSameClass = 1;
      Instance = (int64_t)*p_servantEntity;
      if ( !*p_servantEntity )
        goto LABEL_527;
      if ( ServantEntity__get_IsStatusUp((ServantEntity_o *)Instance, 0LL) )
        goto LABEL_195;
      Instance = (int64_t)*p_servantEntity;
      if ( !*p_servantEntity )
        goto LABEL_527;
      if ( ServantEntity__get_IsCombineMaterial((ServantEntity_o *)Instance, 0LL) )
      {
LABEL_195:
        Instance = (int64_t)*p_servantEntity;
        if ( !*p_servantEntity )
          goto LABEL_527;
        if ( ServantEntity__get_IsAllClass((ServantEntity_o *)Instance, 0LL) )
          this->fields.isSameClass = 1;
      }
      this->fields.isBaseLvMax = UserServantEntity__isLevelMax(baseUsrSvtData, 0LL);
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_527;
      Instance = (int64_t)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantClassMaster___);
      if ( !*p_servantEntity )
        goto LABEL_527;
      if ( !Instance )
        goto LABEL_527;
      Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                            (*p_servantEntity)->fields.classId,
                            (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_527;
      HIDWORD(v488) = *(_DWORD *)(Instance + 56);
      SvtClassId = UserServantEntity__getSvtClassId(baseUsrSvtData, 0, 0LL);
      SvtClassGroupType = UserServantEntity__getSvtClassGroupType(baseUsrSvtData, SvtClassId, 0LL);
      if ( System_Int32__Equals_63206656((int32_t)&v488 + 4, 3, 0LL)
        || System_Int32__Equals_63206656((int32_t)&v488 + 4, SvtClassGroupType, 0LL) && this->fields.isSameClass )
      {
        materialExp = this->fields.materialExp;
        v266 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v139);
          v266 = BalanceConfig_TypeInfo;
        }
        SameClassExp = v266->static_fields->SameClassExp;
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v139);
        v268 = (double)materialExp * (double)SameClassExp / 1000.0;
        v269 = vcvtpd_s64_f64(v268);
        if ( ceil(v268) == INFINITY )
          v269 = 0x80000000;
        this->fields.materialExp = v269;
      }
    }
    else
    {
      this->fields.isLimitCntTarget = 0;
    }
    Instance = (int64_t)this->fields.userSvtEntity;
    this->fields.isFavorite = v446;
    if ( !Instance )
      goto LABEL_527;
    Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL);
    v270 = this->fields.userSvtEntity;
    this->fields.isLock = Instance & 1;
    if ( !v270 )
      goto LABEL_527;
    *p_isChoice = UserServantEntity__IsChoice(v270, 0LL);
    Instance = (int64_t)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_527;
    this->fields.isEventJoin = UserServantEntity__IsEventJoin((UserServantEntity_o *)Instance, 0LL);
    Instance = (int64_t)this->fields.userSvtEntity;
    this->fields.hpBase = *(_DWORD *)(v441 + 36);
    this->fields.atkBase = *(_DWORD *)(v441 + 44);
    if ( !Instance )
      goto LABEL_527;
    if ( UserServantEntity__IsHeroine((UserServantEntity_o *)Instance, 0LL) )
      this->fields.isHeroineSvt = 1;
    Instance = (int64_t)*p_servantEntity;
    if ( !*p_servantEntity )
      goto LABEL_527;
    Instance = ServantEntity__get_IsStatusUp((ServantEntity_o *)Instance, 0LL);
    if ( (Instance & 1) != 0 )
    {
      *p_isStatusUpSvt = 1;
      if ( !baseUsrSvtData )
        goto LABEL_527;
      v271 = UserServantEntity__getSvtClassId(baseUsrSvtData, 0, 0LL);
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_527;
      Instance = (int64_t)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantClassMaster___);
      if ( !*p_servantEntity )
        goto LABEL_527;
      if ( !Instance )
        goto LABEL_527;
      Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                            (*p_servantEntity)->fields.classId,
                            (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_527;
      LODWORD(v488) = *(_DWORD *)(Instance + 56);
      if ( !*p_servantEntity )
        goto LABEL_527;
      if ( (*p_servantEntity)->fields.classId == v271 || System_Int32__Equals_63206656((int32_t)&v488, 3, 0LL) )
      {
        this->fields.isCanStUp = 1;
        v272 = UserServantEntity__isAdjustAtkMax(baseUsrSvtData, 0LL) && this->fields.atkBase > 0;
        this->fields.isAtkUpMax = v272;
        v273 = UserServantEntity__isAdjustHpMax(baseUsrSvtData, 0LL) && this->fields.hpBase > 0;
        this->fields.isHpUpMax = v273;
        v274 = UserServantEntity__isSecondAdjustAtkMax(baseUsrSvtData, 0LL) && this->fields.atkBase > 0;
        this->fields.isAtkSecondUpMax = v274;
        v275 = UserServantEntity__isSecondAdjustHpMax(baseUsrSvtData, 0LL) && this->fields.hpBase > 0;
        this->fields.isHpSecondUpMax = v275;
      }
    }
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_527;
    v277 = DataManager__GetMasterData_object_(
             (DataManager_o *)Instance,
             (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v276);
    Instance = NetworkManager__get_UserId(0LL);
    v278 = *p_servantEntity;
    if ( !*p_servantEntity )
      goto LABEL_527;
    v279 = Instance;
    v281 = *(_QWORD *)&v278->fields.id.fields.currentCryptoKey;
    v280 = *(_QWORD *)&v278->fields.id.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v139);
    *(_QWORD *)&v496.fields.currentCryptoKey = v281;
    *(_QWORD *)&v496.fields.fakeValue = v280;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v496, 0LL);
    if ( !v277 )
      goto LABEL_527;
    Instance = UserServantCommandCodeMaster__TryGetEntity(
                 (UserServantCommandCodeMaster_o *)v277,
                 &v489,
                 v279,
                 (int)Instance,
                 0LL);
    v230 = v448;
    if ( (Instance & 1) != 0 )
    {
      Instance = (int64_t)v489;
      if ( !v489 )
        goto LABEL_527;
      this->fields.isEquipedCmdCard = UserServantCommandCodeEntity__IsEquipedCommandCode(v489, 0LL);
      Instance = (int64_t)v489;
      if ( !v489 )
        goto LABEL_527;
      Instance = UserServantCommandCodeEntity__IsCommandCardSlotOpen(v489, 0LL);
      this->fields.isCmdCardSlotOpen = Instance & 1;
    }
  }
  v282 = this->fields.type;
  if ( v282 == 9 )
  {
    if ( !userSvtEntity )
      goto LABEL_527;
    Instance = UserServantEntity__isLimitCountMax(userSvtEntity, 0LL);
    v307 = this->fields.userSvtEntity;
    this->fields.isLimitCntMax = Instance & 1;
    if ( !v307 )
      goto LABEL_527;
    isLevelMax = UserServantEntity__isLevelMax(v307, 0LL);
    Instance = (int64_t)this->fields.userSvtEntity;
    this->fields.isLvMax = isLevelMax;
    this->fields.isParty = v453;
    if ( !Instance )
      goto LABEL_527;
    Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL);
    v309 = this->fields.userSvtEntity;
    this->fields.isLock = Instance & 1;
    if ( !v309 )
      goto LABEL_527;
    *p_isChoice = UserServantEntity__IsChoice(v309, 0LL);
    Instance = (int64_t)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_527;
    Instance = UserServantEntity__IsEventJoin((UserServantEntity_o *)Instance, 0LL);
    v310 = this->fields.userSvtEntity;
    this->fields.isEventJoin = Instance & 1;
    if ( !v310 )
      goto LABEL_527;
    this->fields.isIgnoreCombineLimitSpecial = UserServantEntity__IsIgnoreCombineLimitSpecial(v310, 0LL);
    Instance = CombineServantListViewItem__GetSealCombineLimit(this, v311);
    this->fields.isSealCombineLimit = Instance & 1;
    if ( baseUsrSvtData )
    {
      v312 = (UserServantEntity_o *)*p_userSvtEntity;
      if ( !*p_userSvtEntity )
        goto LABEL_527;
      v313 = *(_OWORD *)&v312->fields.id.fields.fakeValue;
      *(_OWORD *)&v482.fields.currentCryptoKey = *(_OWORD *)&v312->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v482.fields.fakeValue = v313;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v139);
      v468 = v482;
      v314 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v468, 0LL);
      v315 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
      *(_OWORD *)&v467.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v467.fields.fakeValue = v315;
      if ( v314 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v467, 0LL) )
        this->fields.isBaseSvt = 1;
    }
    Instance = (int64_t)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_527;
    if ( !UserServantEntity__IsHeroine((UserServantEntity_o *)Instance, 0LL) )
      goto LABEL_308;
    goto LABEL_307;
  }
  if ( v282 == 2 )
  {
    if ( !userSvtEntity )
      goto LABEL_527;
    Instance = UserServantEntity__isLimitCountMax(userSvtEntity, 0LL);
    v283 = this->fields.userSvtEntity;
    this->fields.isLimitCntMax = Instance & 1;
    if ( !v283 )
      goto LABEL_527;
    v284 = UserServantEntity__isLevelMax(v283, 0LL);
    Instance = (int64_t)this->fields.userSvtEntity;
    this->fields.isLvMax = v284;
    this->fields.isParty = v453;
    if ( !Instance )
      goto LABEL_527;
    Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL);
    v285 = this->fields.userSvtEntity;
    this->fields.isLock = Instance & 1;
    if ( !v285 )
      goto LABEL_527;
    *p_isChoice = UserServantEntity__IsChoice(v285, 0LL);
    Instance = (int64_t)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_527;
    this->fields.isEventJoin = UserServantEntity__IsEventJoin((UserServantEntity_o *)Instance, 0LL);
    Instance = CombineServantListViewItem__GetSealCombineLimit(this, v286);
    this->fields.isSealCombineLimit = Instance & 1;
    if ( baseUsrSvtData )
    {
      v287 = (UserServantEntity_o *)*p_userSvtEntity;
      if ( !*p_userSvtEntity )
        goto LABEL_527;
      v288 = *(_OWORD *)&v287->fields.id.fields.fakeValue;
      *(_OWORD *)&v482.fields.currentCryptoKey = *(_OWORD *)&v287->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v482.fields.fakeValue = v288;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v139);
      v471 = v482;
      v289 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v471, 0LL);
      v290 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
      *(_OWORD *)&v470.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v470.fields.fakeValue = v290;
      if ( v289 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v470, 0LL) )
        this->fields.isBaseSvt = 1;
    }
    Instance = (int64_t)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_527;
    Instance = UserServantEntity__IsHeroine((UserServantEntity_o *)Instance, 0LL);
    if ( (Instance & 1) == 0 )
    {
      if ( !*p_servantEntity )
        goto LABEL_527;
      v291 = (UserServantEntity_o *)*p_userSvtEntity;
      v292 = v450;
      v449 = v230;
      if ( !*p_userSvtEntity )
        goto LABEL_527;
      combineLimitId = (*p_servantEntity)->fields.combineLimitId;
      v295 = *(_QWORD *)&v291->fields.limitCount.fields.currentCryptoKey;
      v294 = *(_QWORD *)&v291->fields.limitCount.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v139);
      *(_QWORD *)&v497.fields.currentCryptoKey = v295;
      *(_QWORD *)&v497.fields.fakeValue = v294;
      v296 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v497, 0LL);
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_527;
      Instance = (int64_t)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_CombineLimitMaster___);
      if ( !Instance )
        goto LABEL_527;
      Instance = (int64_t)CombineLimitMaster__GetEntity((CombineLimitMaster_o *)Instance, combineLimitId, v296, 0LL);
      if ( !Instance )
        goto LABEL_527;
      v297 = Instance;
      v299 = *(_QWORD *)(Instance + 32);
      v298 = *(_QWORD *)(Instance + 40);
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_527;
      Instance = (int64_t)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserItemMaster___);
      if ( !v298 )
        goto LABEL_527;
      v300 = *(_QWORD *)(v298 + 24);
      if ( (int)v300 >= 1 )
      {
        v301 = (UserItemMaster_o *)Instance;
        for ( i = 0LL; (__int64)i < (int)v300; ++i )
        {
          if ( i >= (unsigned int)v300 )
            goto LABEL_537;
          if ( !v299 )
            goto LABEL_527;
          if ( i >= *(unsigned int *)(v299 + 24) )
            goto LABEL_537;
          v303 = (UserServantEntity_o *)*p_userSvtEntity;
          if ( !*p_userSvtEntity )
            goto LABEL_527;
          v304 = *(_OWORD *)&v303->fields.userId.fields.fakeValue;
          v305 = *(_DWORD *)(v298 + 32 + 4 * i);
          v306 = *(_DWORD *)(v299 + 32 + 4 * i);
          *(_OWORD *)&v482.fields.currentCryptoKey = *(_OWORD *)&v303->fields.userId.fields.currentCryptoKey;
          *(_OWORD *)&v482.fields.fakeValue = v304;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v139);
          v469 = v482;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v469, 0LL);
          if ( !v301 )
            goto LABEL_527;
          Instance = UserItemMaster__TryGetEntity(v301, &v487, Instance, v305, 0LL);
          if ( (Instance & 1) == 0 )
            goto LABEL_353;
          if ( !v487 )
            goto LABEL_527;
          if ( v305 == v487->fields.itemId )
          {
            if ( v306 > v487->fields.num )
            {
LABEL_353:
              v292 = v450;
              *p_isLimitUpItemNum = 0;
              break;
            }
            *p_isLimitUpItemNum = 1;
          }
          LODWORD(v300) = *(_DWORD *)(v298 + 24);
          v292 = v450;
        }
      }
      v332 = *(_DWORD *)(v292 + 96);
      v229 = baseUsrSvtData;
      v230 = v449;
      if ( v332 < *(_DWORD *)(v297 + 24) )
        *p_isLimitUpItemNum = 0;
      goto LABEL_308;
    }
LABEL_307:
    this->fields.isHeroineSvt = 1;
LABEL_308:
    v282 = this->fields.type;
  }
  if ( v282 <= 0xC && ((1 << v282) & 0x1808) != 0 )
  {
    Instance = (int64_t)this->fields.userSvtEntity;
    this->fields.isParty = v453;
    if ( !Instance )
      goto LABEL_527;
    Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL);
    v316 = this->fields.userSvtEntity;
    this->fields.isLock = Instance & 1;
    if ( !v316 )
      goto LABEL_527;
    *p_isChoice = UserServantEntity__IsChoice(v316, 0LL);
    Instance = (int64_t)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_527;
    Instance = UserServantEntity__IsEventJoin((UserServantEntity_o *)Instance, 0LL);
    this->fields.isEventJoin = Instance & 1;
    if ( v229 )
    {
      v317 = (UserServantEntity_o *)*p_userSvtEntity;
      if ( !*p_userSvtEntity )
        goto LABEL_527;
      v318 = *(_OWORD *)&v317->fields.id.fields.fakeValue;
      *(_OWORD *)&v482.fields.currentCryptoKey = *(_OWORD *)&v317->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v482.fields.fakeValue = v318;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v139);
      v466 = v482;
      v319 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v466, 0LL);
      v320 = *(_OWORD *)&v229->fields.id.fields.fakeValue;
      *(_OWORD *)&v465.fields.currentCryptoKey = *(_OWORD *)&v229->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v465.fields.fakeValue = v320;
      if ( v319 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v465, 0LL) )
        this->fields.isBaseSvt = 1;
    }
    Instance = (int64_t)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_527;
    if ( UserServantEntity__IsHeroine((UserServantEntity_o *)Instance, 0LL) )
      this->fields.isHeroineSvt = 1;
    v282 = this->fields.type;
    if ( v282 == 3 )
    {
      CombineServantListViewItem__SetSkillInfo(this, v139);
      v282 = this->fields.type;
    }
    if ( v282 - 11 <= 1 )
    {
      CombineServantListViewItem__SetAppendSkillInfo(this, v139);
      v282 = this->fields.type;
    }
  }
  if ( v282 == 4 )
  {
    Instance = (int64_t)this->fields.userSvtEntity;
    this->fields.isParty = v453;
    if ( !Instance )
      goto LABEL_527;
    Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL);
    v321 = this->fields.userSvtEntity;
    this->fields.isLock = Instance & 1;
    if ( !v321 )
      goto LABEL_527;
    *p_isChoice = UserServantEntity__IsChoice(v321, 0LL);
    Instance = (int64_t)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_527;
    Instance = UserServantEntity__IsEventJoin((UserServantEntity_o *)Instance, 0LL);
    this->fields.isEventJoin = Instance & 1;
    if ( v229 )
    {
      v322 = (UserServantEntity_o *)*p_userSvtEntity;
      if ( !*p_userSvtEntity )
        goto LABEL_527;
      v323 = *(_OWORD *)&v322->fields.id.fields.fakeValue;
      *(_OWORD *)&v482.fields.currentCryptoKey = *(_OWORD *)&v322->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v482.fields.fakeValue = v323;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v139);
      v464 = v482;
      v324 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v464, 0LL);
      v325 = *(_OWORD *)&v229->fields.id.fields.fakeValue;
      *(_OWORD *)&v463.fields.currentCryptoKey = *(_OWORD *)&v229->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v463.fields.fakeValue = v325;
      if ( v324 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v463, 0LL) )
        this->fields.isBaseSvt = 1;
    }
    Instance = (int64_t)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_527;
    if ( UserServantEntity__IsHeroine((UserServantEntity_o *)Instance, 0LL) )
    {
      this->fields.isHeroineSvt = 1;
    }
    else
    {
      Instance = (int64_t)*p_userSvtEntity;
      if ( !*p_userSvtEntity )
        goto LABEL_527;
      Instance = UserServantEntity__getTreasureDeviceInfo((UserServantEntity_o *)Instance, &tdInfo, -1, -1, 0, 0LL);
      this->fields.isTdLvMax = 1;
      if ( !tdInfo )
        goto LABEL_527;
      id = tdInfo->fields.id;
      if ( id >= 1 )
      {
        lv = tdInfo->fields.lv;
        Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_527;
        Instance = (int64_t)DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
        if ( !Instance )
          goto LABEL_527;
        Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                              id,
                              (const MethodInfo_31B2E40 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_527;
        if ( lv < *(_DWORD *)(Instance + 48) )
          this->fields.isTdLvMax = 0;
      }
      Instance = (int64_t)MasterData_object;
      if ( !MasterData_object )
        goto LABEL_527;
      SameSvtNpLvCache = UserServantMaster__getSameSvtNpLvCache(
                           MasterData_object,
                           (UserServantEntity_o *)*p_userSvtEntity,
                           &cachedUserServantNpLvDict,
                           0LL);
      if ( SameSvtNpLvCache >= 1 && !this->fields.isTdLvMax )
      {
        v330 = SameSvtNpLvCache;
        CombineServantListViewItem__GetNpInfo(this, &tdLv[1], tdLv, &tdMaxLv, v329);
        if ( v439 <= 1200000 )
        {
          Instance = (int64_t)*p_userSvtEntity;
          if ( !*p_userSvtEntity )
            goto LABEL_527;
          v333 = UserServantEntity__checkTreasureDeviceLevelUp((UserServantEntity_o *)Instance, v330, 0LL);
          v334 = tdLv[0];
          if ( tdLv[0] >= v333 )
          {
            v337 = 0;
          }
          else
          {
            v335 = tdLv[1];
            v336 = v333;
            v337 = 0;
            do
            {
              Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !Instance )
                goto LABEL_527;
              Instance = (int64_t)DataManager__GetMasterData_object_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
              if ( !Instance )
                goto LABEL_527;
              Instance = (int64_t)TreasureDvcLvMaster__GetEntity((TreasureDvcLvMaster_o *)Instance, v335, v334, 0LL);
              if ( Instance )
                v337 += *(_DWORD *)(Instance + 92);
              ++v334;
            }
            while ( v336 != v334 );
            if ( !this )
              goto LABEL_527;
          }
          v331 = v439 >= v337;
        }
        else
        {
          v331 = 1;
        }
        this->fields.isSameSvt = v331;
      }
    }
    v282 = this->fields.type;
  }
  if ( v282 == 5 )
  {
    this->fields.isMaterialSvt = v230;
    this->fields.isParty = v453;
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_527;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantLeaderMaster___);
    if ( !Instance )
      goto LABEL_527;
    Instance = *(_QWORD *)(Instance + 32);
    if ( !Instance )
      goto LABEL_527;
    v339 = System_Collections_ObjectModel_Collection_object___GetEnumerator(
             (System_Collections_ObjectModel_Collection_T__o *)Instance,
             (const MethodInfo_314F9E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    if ( !v339 )
      sub_1BCAA3C(0LL, v338);
    while ( 1 )
    {
      v340 = v339->klass;
      v341 = *(unsigned __int16 *)(&v339->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v339->klass->_2.bitflags2 + 3) )
      {
        v342 = &v340->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)v342 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v341;
          v342 += 4;
          if ( !v341 )
            goto LABEL_379;
        }
        v343 = (__int64)&v340->vtable[*v342].method;
      }
      else
      {
LABEL_379:
        v343 = sub_1C1C7C0(v339, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v343)(
              v339,
              *(_QWORD *)(v343 + 8)) & 1) == 0 )
        break;
      v344 = v339->klass;
      v345 = *(unsigned __int16 *)(&v339->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v339->klass->_2.bitflags2 + 3) )
      {
        v346 = &v344->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v346 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
        {
          --v345;
          v346 += 4;
          if ( !v345 )
            goto LABEL_386;
        }
        v347 = (__int64)&v344->vtable[*v346].method;
      }
      else
      {
LABEL_386:
        v347 = sub_1C1C7C0(v339, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
      }
      v348 = (_QWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v347)(
                         v339,
                         *(_QWORD *)(v347 + 8));
      if ( !v348 )
        sub_1BCAA3C(0LL, v349);
      v350 = LOBYTE(UserServantLeaderEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*v348 + 304LL) < (unsigned int)v350
        || *(UserServantLeaderEntity_c **)(*(_QWORD *)(*v348 + 200LL) + 8 * v350 - 8) != UserServantLeaderEntity_TypeInfo )
      {
        goto LABEL_532;
      }
      v351 = (UserServantEntity_o *)*p_userSvtEntity;
      if ( !*p_userSvtEntity )
        sub_1BCAA3C(v348, UserServantLeaderEntity_TypeInfo);
      v352 = *(_OWORD *)&v351->fields.id.fields.fakeValue;
      v353 = v348[7];
      *(_OWORD *)&v482.fields.currentCryptoKey = *(_OWORD *)&v351->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v482.fields.fakeValue = v352;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(
          CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
          UserServantLeaderEntity_TypeInfo);
      v462 = v482;
      if ( v353 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v462, 0LL) )
      {
        this->fields.isUseSupport = 1;
        break;
      }
    }
    v354 = v339->klass;
    v355 = *(unsigned __int16 *)(&v339->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v339->klass->_2.bitflags2 + 3) )
    {
      v356 = &v354->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v356 - 1) != System_IDisposable_TypeInfo )
      {
        --v355;
        v356 += 4;
        if ( !v355 )
          goto LABEL_400;
      }
      v357 = (__int64)&v354->vtable[*v356].method;
    }
    else
    {
LABEL_400:
      v357 = sub_1C1C7C0(v339, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v357)(v339, *(_QWORD *)(v357 + 8));
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v358);
    Instance = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserRecommendSupportMaster___);
    v359 = (UserServantEntity_o *)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_527;
    v360 = *(_OWORD *)&v359->fields.id.fields.fakeValue;
    v361 = (UserRecommendSupportMaster_o *)Instance;
    *(_OWORD *)&v482.fields.currentCryptoKey = *(_OWORD *)&v359->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v482.fields.fakeValue = v360;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v139);
    v461 = v482;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v461, 0LL);
    if ( !v361 )
      goto LABEL_527;
    IsSettingServant = UserRecommendSupportMaster__IsSettingServant(v361, Instance, 0, 0LL);
    Instance = (int64_t)this->fields.userSvtEntity;
    this->fields.isUseRecommendSupport = IsSettingServant;
    this->fields.isFavorite = v446;
    if ( !Instance )
      goto LABEL_527;
    Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL);
    v363 = this->fields.userSvtEntity;
    this->fields.isLock = Instance & 1;
    if ( !v363 )
      goto LABEL_527;
    *p_isChoice = UserServantEntity__IsChoice(v363, 0LL);
    Instance = (int64_t)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_527;
    Instance = UserServantEntity__IsEventJoin((UserServantEntity_o *)Instance, 0LL);
    this->fields.isEventJoin = Instance & 1;
    if ( v229 )
      v364 = 0LL;
    else
      v364 = this;
    if ( v229 )
      v365 = this;
    else
      v365 = 0LL;
    if ( v229 )
    {
      Instance = UserServantEntity__IsEventJoin(v229, 0LL);
      if ( !v365 )
        goto LABEL_527;
      v365->fields.isEventJoinBaseSvt = Instance & 1;
      Instance = (int64_t)*p_userSvtEntity;
      if ( !*p_userSvtEntity )
        goto LABEL_527;
      Instance = UserServantEntity__IsMaterialTd((UserServantEntity_o *)Instance, 0LL);
      v366 = this->fields.userSvtEntity;
      this->fields.isMaterialTdSvt = Instance & 1;
      if ( !v366 )
        goto LABEL_527;
      v367 = *(_OWORD *)&v366->fields.id.fields.fakeValue;
      *(_OWORD *)&v482.fields.currentCryptoKey = *(_OWORD *)&v366->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v482.fields.fakeValue = v367;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v139);
      v460 = v482;
      v368 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v460, 0LL);
      v369 = *(_OWORD *)&v229->fields.id.fields.fakeValue;
      *(_OWORD *)&v459.fields.currentCryptoKey = *(_OWORD *)&v229->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v459.fields.fakeValue = v369;
      if ( v368 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v459, 0LL) )
        this->fields.isBaseSvt = 1;
    }
    else
    {
      if ( !v364 )
        goto LABEL_527;
      v364->fields.isEventJoinBaseSvt = 0;
      Instance = (int64_t)*p_userSvtEntity;
      if ( !*p_userSvtEntity )
        goto LABEL_527;
      this->fields.isMaterialTdSvt = UserServantEntity__IsMaterialTd((UserServantEntity_o *)Instance, 0LL);
    }
  }
  v370 = this->fields.type;
  if ( v370 == 6 )
  {
    Instance = (int64_t)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_527;
    Instance = UserServantEntity__isExceedLvMax((UserServantEntity_o *)Instance, 0LL);
    v371 = this->fields.userSvtEntity;
    this->fields.isLvExceedMax = Instance & 1;
    if ( !v371 )
      goto LABEL_527;
    Instance = UserServantEntity__isLimitCountMax(v371, 0LL);
    v372 = this->fields.userSvtEntity;
    this->fields.isLimitCntMax = Instance & 1;
    if ( !v372 )
      goto LABEL_527;
    v373 = UserServantEntity__isLevelMax(v372, 0LL);
    Instance = (int64_t)this->fields.userSvtEntity;
    this->fields.isLvMax = v373;
    this->fields.isParty = v453;
    if ( !Instance )
      goto LABEL_527;
    Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL);
    v374 = this->fields.userSvtEntity;
    this->fields.isLock = Instance & 1;
    if ( !v374 )
      goto LABEL_527;
    *p_isChoice = UserServantEntity__IsChoice(v374, 0LL);
    Instance = (int64_t)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_527;
    Instance = UserServantEntity__IsEventJoin((UserServantEntity_o *)Instance, 0LL);
    this->fields.isEventJoin = Instance & 1;
    if ( v229 )
    {
      v375 = (UserServantEntity_o *)*p_userSvtEntity;
      if ( !*p_userSvtEntity )
        goto LABEL_527;
      v376 = *(_OWORD *)&v375->fields.id.fields.fakeValue;
      *(_OWORD *)&v482.fields.currentCryptoKey = *(_OWORD *)&v375->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v482.fields.fakeValue = v376;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v139);
      v458 = v482;
      v377 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v458, 0LL);
      v378 = *(_OWORD *)&v229->fields.id.fields.fakeValue;
      *(_OWORD *)&v457.fields.currentCryptoKey = *(_OWORD *)&v229->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v457.fields.fakeValue = v378;
      if ( v377 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v457, 0LL) )
        this->fields.isBaseSvt = 1;
    }
    Instance = (int64_t)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_527;
    if ( UserServantEntity__IsHeroine((UserServantEntity_o *)Instance, 0LL) )
    {
      this->fields.isHeroineSvt = 1;
    }
    else
    {
      Instance = (int64_t)*p_userSvtEntity;
      if ( !*p_userSvtEntity )
        goto LABEL_527;
      SvtExceedEnt = UserServantEntity__getSvtExceedEnt((UserServantEntity_o *)Instance, 0LL);
      if ( SvtExceedEnt )
      {
        v380 = (int32_t *)SvtExceedEnt;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v139);
        Instance = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_CommonConsumeMaster___);
        if ( !Instance )
          goto LABEL_527;
        IdEntityList = CommonConsumeMaster__GetIdEntityList((CommonConsumeMaster_o *)Instance, v380[12], 0LL);
        if ( IdEntityList )
        {
          v384 = IdEntityList;
          v385 = (System_Collections_Generic_HashSet_int__o *)sub_1BCAA2C(
                                                                System_Collections_Generic_HashSet_int__TypeInfo,
                                                                v139,
                                                                v382,
                                                                v383);
          System_Collections_Generic_HashSet_int____ctor(
            v385,
            (const MethodInfo_3454BA4 *)Method_System_Collections_Generic_HashSet_int___ctor__);
          v389 = (System_Collections_Generic_HashSet_int__o *)sub_1BCAA2C(
                                                                System_Collections_Generic_HashSet_int__TypeInfo,
                                                                v386,
                                                                v387,
                                                                v388);
          System_Collections_Generic_HashSet_int____ctor(
            v389,
            (const MethodInfo_3454BA4 *)Method_System_Collections_Generic_HashSet_int___ctor__);
          v390 = v384->max_length;
          if ( v390 >= 1 )
          {
            v391 = 0LL;
            while ( (unsigned int)v391 < v390 )
            {
              v392 = v384->m_Items[v391];
              if ( !v392 )
                goto LABEL_527;
              if ( !v385 )
                goto LABEL_527;
              Instance = System_Collections_Generic_HashSet_int___Add(
                           v385,
                           v392->fields.objectId,
                           (const MethodInfo_3455DA8 *)Method_System_Collections_Generic_HashSet_int__Add__);
              if ( !v389 )
                goto LABEL_527;
              Instance = System_Collections_Generic_HashSet_int___Add(
                           v389,
                           v392->fields.num,
                           (const MethodInfo_3455DA8 *)Method_System_Collections_Generic_HashSet_int__Add__);
              v390 = v384->max_length;
              if ( (int)++v391 >= v390 )
                goto LABEL_457;
            }
LABEL_537:
            sub_1BCAA44(Instance, v139);
          }
LABEL_457:
          v229 = baseUsrSvtData;
          if ( v380[13] >= 1 )
          {
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v139);
            Instance = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_SvtCoinMaster___);
            v393 = (UserServantEntity_o *)*p_userSvtEntity;
            if ( !*p_userSvtEntity )
              goto LABEL_527;
            v394 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
            v396 = *(_QWORD *)&v393->fields.svtId.fields.currentCryptoKey;
            v395 = *(_QWORD *)&v393->fields.svtId.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v139);
            *(_QWORD *)&v498.fields.currentCryptoKey = v396;
            *(_QWORD *)&v498.fields.fakeValue = v395;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v498, 0LL);
            if ( !v394 )
              goto LABEL_527;
            Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                  v394,
                                  Instance,
                                  (const MethodInfo_31B2E40 *)Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__GetEntity__);
            v229 = baseUsrSvtData;
            if ( !Instance )
              goto LABEL_527;
            if ( !v385 )
              goto LABEL_527;
            Instance = System_Collections_Generic_HashSet_int___Add(
                         v385,
                         *(_DWORD *)(Instance + 24),
                         (const MethodInfo_3455DA8 *)Method_System_Collections_Generic_HashSet_int__Add__);
            if ( !v389 )
              goto LABEL_527;
            System_Collections_Generic_HashSet_int___Add(
              v389,
              v380[13],
              (const MethodInfo_3455DA8 *)Method_System_Collections_Generic_HashSet_int__Add__);
          }
          v397 = this->fields.userSvtEntity;
          v398 = System_Linq_Enumerable__ToArray_int_(
                   (System_Collections_Generic_IEnumerable_TSource__o *)v385,
                   (const MethodInfo_2F4B870 *)Method_System_Linq_Enumerable_ToArray_int___);
          v399 = System_Linq_Enumerable__ToArray_int_(
                   (System_Collections_Generic_IEnumerable_TSource__o *)v389,
                   (const MethodInfo_2F4B870 *)Method_System_Linq_Enumerable_ToArray_int___);
          this->fields.isLvExceedItemNum = CombineUtility__CheckCombineNeedItemsEnough(
                                             v397,
                                             v398,
                                             v399,
                                             *(_DWORD *)(v450 + 96),
                                             v380[8],
                                             0LL);
        }
      }
    }
    v370 = this->fields.type;
  }
  if ( v370 != 8 )
    goto LABEL_514;
  Instance = (int64_t)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_527;
  this->fields.isFriendshipExceedMax = UserServantEntity__isExceedFriendshipMax((UserServantEntity_o *)Instance, 0LL);
  v401 = *(_QWORD *)(v444 + 100);
  v402 = *(_QWORD *)(v444 + 108);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v400);
  *(_QWORD *)&v499.fields.currentCryptoKey = v401;
  *(_QWORD *)&v499.fields.fakeValue = v402;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v499, 0LL);
  if ( !*p_servantEntity )
    goto LABEL_527;
  v403 = this->fields.userSvtEntity;
  this->fields.isFriendshipRankMax = (_DWORD)Instance == *(_DWORD *)(v444 + 116)
                                                       + (*p_servantEntity)->fields.maxFriendshipRank;
  this->fields.isParty = v453;
  if ( !v403 )
    goto LABEL_527;
  Instance = UserServantEntity__IsLock(v403, 0LL);
  v404 = this->fields.userSvtEntity;
  this->fields.isLock = Instance & 1;
  if ( !v404 )
    goto LABEL_527;
  *p_isChoice = UserServantEntity__IsChoice(v404, 0LL);
  Instance = (int64_t)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_527;
  Instance = UserServantEntity__IsEventJoin((UserServantEntity_o *)Instance, 0LL);
  this->fields.isEventJoin = Instance & 1;
  if ( v229 )
  {
    v405 = (UserServantEntity_o *)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_527;
    v406 = *(_OWORD *)&v405->fields.id.fields.fakeValue;
    *(_OWORD *)&v482.fields.currentCryptoKey = *(_OWORD *)&v405->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v482.fields.fakeValue = v406;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v139);
    v456 = v482;
    v407 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v456, 0LL);
    v408 = *(_OWORD *)&v229->fields.id.fields.fakeValue;
    *(_OWORD *)&v455.fields.currentCryptoKey = *(_OWORD *)&v229->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v455.fields.fakeValue = v408;
    if ( v407 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v455, 0LL) )
      this->fields.isBaseSvt = 1;
  }
  Instance = (int64_t)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
LABEL_527:
    sub_1BCAA3C(Instance, v139);
  Instance = UserServantEntity__IsHeroine((UserServantEntity_o *)Instance, 0LL);
  if ( (Instance & 1) != 0 )
  {
    this->fields.isHeroineSvt = 1;
    goto LABEL_514;
  }
  if ( !this->fields.isFriendshipRankMax || this->fields.isFriendshipExceedMax )
    goto LABEL_514;
  if ( !*p_servantEntity )
    goto LABEL_527;
  maxFriendshipRank = (*p_servantEntity)->fields.maxFriendshipRank;
  v410 = *(_DWORD *)(v444 + 116);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_527;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_FriendshipMaster___);
  if ( !*p_servantEntity )
    goto LABEL_527;
  if ( !Instance )
    goto LABEL_527;
  Instance = (int64_t)FriendshipMaster__GetEntity(
                        (FriendshipMaster_o *)Instance,
                        (*p_servantEntity)->fields.friendshipId,
                        maxFriendshipRank + v410 + 1,
                        0LL);
  if ( !Instance )
    goto LABEL_527;
  v411 = Instance;
  v413 = *(_QWORD *)(Instance + 32);
  v412 = *(_QWORD *)(Instance + 40);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_527;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !v412 )
    goto LABEL_527;
  if ( *(int *)(v412 + 24) >= 1 )
  {
    v414 = (UserItemMaster_o *)Instance;
    v415 = 0LL;
    v416 = v412 + 32;
    while ( 1 )
    {
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v139);
      Instance = NetworkManager__get_UserId(0LL);
      if ( v415 >= *(unsigned int *)(v412 + 24) )
        goto LABEL_537;
      if ( !v414 )
        goto LABEL_527;
      Instance = UserItemMaster__TryGetEntity(v414, &v483, Instance, *(_DWORD *)(v416 + 4 * v415), 0LL);
      if ( (Instance & 1) == 0 )
        break;
      if ( v415 >= *(unsigned int *)(v412 + 24) )
        goto LABEL_537;
      if ( !v483 )
        goto LABEL_527;
      if ( *(_DWORD *)(v416 + 4 * v415) == v483->fields.itemId )
      {
        if ( !v413 )
          goto LABEL_527;
        if ( v415 >= *(unsigned int *)(v413 + 24) )
          goto LABEL_537;
        v417 = *(_DWORD *)(v413 + 32 + 4 * v415) <= v483->fields.num;
        goto LABEL_510;
      }
LABEL_511:
      if ( (__int64)++v415 >= *(int *)(v412 + 24) )
        goto LABEL_512;
    }
    v417 = 0;
LABEL_510:
    this->fields.isFriendshipExceedItemNum = v417;
    goto LABEL_511;
  }
LABEL_512:
  if ( *(_DWORD *)(v450 + 96) < *(_DWORD *)(v411 + 28) )
    this->fields.isFriendshipExceedItemNum = 0;
LABEL_514:
  Instance = (int64_t)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_527;
  Instance = UserServantEntity__getDispLimitCount((UserServantEntity_o *)Instance, 0, 0LL);
  v418 = this->fields.userSvtEntity;
  this->fields.dispLimitCount = Instance;
  if ( !v418 )
    goto LABEL_527;
  SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v418, -1, 0LL);
  this->fields.skillCategoryIdList = SkillCategoryIdList;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.skillCategoryIdList,
    (int64_t)SkillCategoryIdList,
    v420,
    v421,
    v422,
    v423,
    v424,
    v425);
  Instance = (int64_t)this->fields.userSvtEntity;
  if ( !Instance )
    goto LABEL_527;
  TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                   (UserServantEntity_o *)Instance,
                                   0,
                                   0LL);
  this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.tdCategoryIdList,
    (int64_t)TreasureDeviceCategoryIdList,
    v427,
    v428,
    v429,
    v430,
    v431,
    v432);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_527;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Instance )
    goto LABEL_527;
  Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                        this->fields.classId,
                        (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_527;
  v433 = *(int *)(Instance + 52);
  v434 = this->fields.servantEntity;
  this->fields.priority = v433;
  this->fields.sortValue1B = v433;
  if ( !v434 )
    goto LABEL_527;
  v435 = (UserServantEntity_o *)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_527;
  this->fields.sortValue2 = ((__int64)v434->fields.collectionNo << 16) | ((unsigned __int64)(unsigned int)this->fields.rarity << 48) | v435->fields.lv;
  v437 = *(_QWORD *)&v435->fields.svtId.fields.currentCryptoKey;
  v436 = *(_QWORD *)&v435->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v139);
  *(_QWORD *)&v500.fields.currentCryptoKey = v437;
  *(_QWORD *)&v500.fields.fakeValue = v436;
  v438 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v500, 0LL);
  Instance = (int64_t)this->fields.iconLabelInfo1;
  this->fields.sortValue2B = v438;
  this->fields.amountSortValue = -1LL;
  if ( !Instance )
    goto LABEL_527;
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0LL);
  Instance = (int64_t)*p_iconLabelInfo2;
  if ( !*p_iconLabelInfo2 )
    goto LABEL_527;
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
  __int64 v2; // x2
  __int64 v3; // x3
  UserServantEntity_o *userSvtEntity; // x0
  SvtUseSkillData_o *v7; // x19

  if ( (byte_4B19DAB & 1) == 0 )
  {
    sub_1BCA7E0(&SvtUseSkillData_TypeInfo, method, v2);
    byte_4B19DAB = 1;
  }
  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
    return UserServantEntity__getAppendSkillInfo(userSvtEntity, 0LL);
  v7 = (SvtUseSkillData_o *)sub_1BCAA2C(SvtUseSkillData_TypeInfo, method, v2, v3);
  SvtUseSkillData___ctor(v7, 0LL);
  return v7;
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
      sub_1BCAA3C(TreasureDeviceInfo, v10);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Master_object; // x0
  __int64 v9; // x1
  struct ServantEntity_o *servantEntity; // x8
  int32_t combineLimitId; // w2
  int32_t condTargetId; // w19
  int32_t condType; // w21
  int64_t condNum; // x20
  CombineLimitReleaseEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B19DAC & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMaster_CombineLimitReleaseMaster___, v4, v5);
    sub_1BCA7E0(&DataManager_TypeInfo, v6, v7);
    byte_4B19DAC = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_CombineLimitReleaseMaster___);
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
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v9);
        return !CondType__IsOpen(condType, condTargetId, condNum, 0, 0LL, 0LL);
      }
    }
LABEL_18:
    sub_1BCAA3C(Master_object, v9);
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
  __int64 v6; // x2
  UserServantEntity_o *userSvtEntity; // x20
  BalanceConfig_c *v8; // x0
  SkillInfo_array *v9; // x0
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7

  if ( (byte_4B19DAA & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, skillInfoList, method);
    sub_1BCA7E0(&SkillInfo___TypeInfo, v5, v6);
    byte_4B19DAA = 1;
  }
  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
  {
    UserServantEntity__getSkillInfo(userSvtEntity, skillInfoList, -1, -1, 1, 0, -1, 0LL);
  }
  else
  {
    v8 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, skillInfoList);
      v8 = BalanceConfig_TypeInfo;
    }
    v9 = (SkillInfo_array *)sub_1BCA888(SkillInfo___TypeInfo, (unsigned int)v8->static_fields->SvtSkillListMax);
    *skillInfoList = v9;
    sub_1BCA784((PartyOrganizationUtility_o *)skillInfoList, (int64_t)v9, v10, v11, v12, v13, v14, v15);
  }
  return userSvtEntity != 0LL;
}


bool __fastcall CombineServantListViewItem__IsMatchBaseServantFilter(
        CombineServantListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  FilterKindList_c *v11; // x0
  __int64 ClassGroupFilterKindList; // x0
  FilterKindList_c *v13; // x0
  ListViewSort_FilterKind_array *v14; // x0
  FilterKindList_c *v15; // x0
  ListViewSort_FilterKind_array *v16; // x0
  FilterKindList_c *v17; // x0
  ListViewSort_FilterKind_array *v18; // x0
  FilterKindList_c *v19; // x0
  ListViewSort_FilterKind_array *v20; // x0
  __int64 v21; // x1
  UserServantEntity_o *userSvtEntity; // x21
  __int64 v23; // x1
  _BOOL4 isChoice; // w8
  FilterKindList_c *v25; // x0
  ListViewSort_FilterKind_array *v26; // x21
  UserServantEntity_o *v28; // x0
  int32_t dispLimitCount; // w21
  UserServantEntity_o *v30; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  _BOOL4 IsUnSelectedAllTargetFilters; // w21
  _BOOL4 v46; // w23
  _BOOL4 IsMatchEffectCategory; // w22
  _BOOL4 v48; // w0

  if ( (byte_4B19D9A & 1) == 0 )
  {
    sub_1BCA7E0(&FilterKindList_TypeInfo, sort, method);
    sub_1BCA7E0(&ListViewSort_FilterKind___TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v7, v8);
    sub_1BCA7E0(&ServantEventBonusFilterController_TypeInfo, v9, v10);
    byte_4B19D9A = 1;
  }
  v11 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort);
    v11 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v11->static_fields->ClassGroupFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_67;
  ClassGroupFilterKindList = (__int64)System_Collections_Generic_List_Int32Enum___ToArray(
                                        (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                        (const MethodInfo_3588F1C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_67;
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0LL) )
  {
    v13 = FilterKindList_TypeInfo;
    if ( !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort);
      v13 = FilterKindList_TypeInfo;
    }
    ClassGroupFilterKindList = (__int64)v13->static_fields->ClassFilterKindList;
    if ( !ClassGroupFilterKindList )
      goto LABEL_67;
    v14 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                             (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                             (const MethodInfo_3588F1C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v14, 0LL)
      && !ListViewSort__IsMatchClassFilter(sort, this->fields.servantEntity, 0LL) )
    {
      return 0;
    }
  }
  else if ( !ListViewSort__IsMatchClassGroupFilter(sort, this->fields.servantEntity, 0LL) )
  {
    return 0;
  }
  v15 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort);
    v15 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v15->static_fields->NpTypeFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_67;
  v16 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_3588F1C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v16, 0LL)
    && !ListViewSort__IsMatchNPTypeFilter(sort, this->fields.userSvtEntity, 0LL) )
  {
    return 0;
  }
  v17 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort);
    v17 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v17->static_fields->NpEffectFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_67;
  v18 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_3588F1C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v18, 0LL)
    && !ListViewSort__IsMatchNPEffectFilter(sort, this->fields.userSvtEntity, 0LL) )
  {
    return 0;
  }
  v19 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort);
    v19 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v19->static_fields->CombineBaseServantFilterKindList;
  if ( !ClassGroupFilterKindList )
LABEL_67:
    sub_1BCAA3C(ClassGroupFilterKindList, sort);
  v20 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_3588F1C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v20, 0LL)
    && !ListViewSort__IsMatchServantStatusFilter(sort, this->fields.userSvtEntity, 0LL) )
  {
    return 0;
  }
  if ( !ListViewSort__CheckSvtEventBonusFilterDefaultAll(sort, -1, 0LL) )
  {
    userSvtEntity = this->fields.userSvtEntity;
    if ( !ServantEventBonusFilterController_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantEventBonusFilterController_TypeInfo, v21);
    if ( ServantEventBonusFilterController__IsHideServant(userSvtEntity, sort, -1, 0LL) )
      return 0;
  }
  if ( !ListViewSort__CheckSvtEquipEffectFilterDefaultAll(sort, 0LL) )
  {
    v28 = this->fields.userSvtEntity;
    if ( v28 )
    {
      dispLimitCount = this->fields.dispLimitCount;
      if ( dispLimitCount != UserServantEntity__getDispLimitCount(v28, 0, 0LL) )
      {
        ClassGroupFilterKindList = (__int64)this->fields.userSvtEntity;
        if ( !ClassGroupFilterKindList )
          goto LABEL_67;
        ClassGroupFilterKindList = UserServantEntity__getDispLimitCount(
                                     (UserServantEntity_o *)ClassGroupFilterKindList,
                                     0,
                                     0LL);
        v30 = this->fields.userSvtEntity;
        this->fields.dispLimitCount = ClassGroupFilterKindList;
        if ( !v30 )
          goto LABEL_67;
        SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v30, -1, 0LL);
        this->fields.skillCategoryIdList = SkillCategoryIdList;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&this->fields.skillCategoryIdList,
          (int64_t)SkillCategoryIdList,
          v32,
          v33,
          v34,
          v35,
          v36,
          v37);
        ClassGroupFilterKindList = (__int64)this->fields.userSvtEntity;
        if ( !ClassGroupFilterKindList )
          goto LABEL_67;
        TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                         (UserServantEntity_o *)ClassGroupFilterKindList,
                                         0,
                                         0LL);
        this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&this->fields.tdCategoryIdList,
          (int64_t)TreasureDeviceCategoryIdList,
          v39,
          v40,
          v41,
          v42,
          v43,
          v44);
      }
    }
    ClassGroupFilterKindList = sub_1BCA888(ListViewSort_FilterKind___TypeInfo, 1LL);
    if ( !ClassGroupFilterKindList )
      goto LABEL_67;
    v23 = ClassGroupFilterKindList;
    if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
      goto LABEL_68;
    *(_DWORD *)(ClassGroupFilterKindList + 32) = 50;
    IsUnSelectedAllTargetFilters = ListViewSort__IsUnSelectedAllTargetFilters(
                                     sort,
                                     (ListViewSort_FilterKind_array *)ClassGroupFilterKindList,
                                     0LL);
    ClassGroupFilterKindList = sub_1BCA888(ListViewSort_FilterKind___TypeInfo, 1LL);
    if ( !ClassGroupFilterKindList )
      goto LABEL_67;
    v23 = ClassGroupFilterKindList;
    if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
LABEL_68:
      sub_1BCAA44(ClassGroupFilterKindList, v23);
    *(_DWORD *)(ClassGroupFilterKindList + 32) = 51;
    v46 = ListViewSort__IsUnSelectedAllTargetFilters(
            sort,
            (ListViewSort_FilterKind_array *)ClassGroupFilterKindList,
            0LL);
    IsMatchEffectCategory = ServantEquipEffectFilterController__IsMatchEffectCategory(
                              this->fields.tdCategoryIdList,
                              sort,
                              0LL);
    v48 = ServantEquipEffectFilterController__IsMatchEffectCategory(this->fields.skillCategoryIdList, sort, 0LL);
    if ( ((IsUnSelectedAllTargetFilters ^ v46) & 1) != 0 )
    {
      if ( IsUnSelectedAllTargetFilters )
      {
        if ( !v48 )
          return 0;
      }
      else if ( !IsMatchEffectCategory )
      {
        return 0;
      }
    }
    else if ( !IsMatchEffectCategory && !v48 )
    {
      return 0;
    }
  }
  ClassGroupFilterKindList = sub_1BCA888(ListViewSort_FilterKind___TypeInfo, 1LL);
  if ( !ClassGroupFilterKindList )
    goto LABEL_67;
  v23 = ClassGroupFilterKindList;
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
  v25 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort);
    v25 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v25->static_fields->RarityFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_67;
  v26 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_3588F1C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v26, 0LL)
      || ListViewSort__IsSelectedAllTargetFilters(sort, v26, 0LL)
      || ListViewSort__IsMatchRarityFilter(sort, this->fields.rarity, 0LL);
}


bool __fastcall CombineServantListViewItem__IsMatchMaterialFilter(
        CombineServantListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  CombineServantListViewItem_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  _BOOL4 v11; // w21
  FilterKindList_c *v12; // x0
  ListViewSort_FilterKind_array *v13; // x0
  FilterKindList_c *v14; // x0
  ListViewSort_FilterKind_array *v15; // x0
  CombineServantListViewItem_o *v16; // x1
  FilterKindList_c *v17; // x0
  ListViewSort_FilterKind_array *v18; // x0
  FilterKindList_c *v19; // x0
  ListViewSort_FilterKind_array *v20; // x0
  FilterKindList_c *v21; // x0
  ListViewSort_FilterKind_array *v22; // x0
  __int64 v23; // x1
  UserServantEntity_o *userSvtEntity; // x21
  _BOOL4 isChoice; // w21
  UserServantEntity_o *v26; // x0
  int32_t dispLimitCount; // w21
  UserServantEntity_o *v28; // x8
  System_Int32_array *SkillCategoryIdList; // x0
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  System_Int32_array *TreasureDeviceCategoryIdList; // x0
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  _BOOL4 IsUnSelectedAllTargetFilters; // w21
  _BOOL4 v44; // w23
  _BOOL4 IsMatchEffectCategory; // w22
  _BOOL4 v46; // w0
  bool CanNotSelect; // w0
  FilterKindList_c *v48; // x0
  ListViewSort_FilterKind_array *v49; // x21

  v4 = this;
  if ( (byte_4B19D9B & 1) == 0 )
  {
    sub_1BCA7E0(&FilterKindList_TypeInfo, sort, method);
    sub_1BCA7E0(&ListViewSort_FilterKind___TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v7, v8);
    this = (CombineServantListViewItem_o *)sub_1BCA7E0(&ServantEventBonusFilterController_TypeInfo, v9, v10);
    byte_4B19D9B = 1;
  }
  if ( !sort )
    goto LABEL_83;
  v11 = ListViewSort__GetFilter(sort, 28, 0LL) && v4->fields.isSameClass;
  v12 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort);
    v12 = FilterKindList_TypeInfo;
  }
  this = (CombineServantListViewItem_o *)v12->static_fields->ClassGroupFilterKindList;
  if ( !this )
    goto LABEL_83;
  v13 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)this,
                                           (const MethodInfo_3588F1C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v13, 0LL) )
  {
    if ( ListViewSort__IsMatchClassGroupFilter(sort, v4->fields.servantEntity, 0LL) )
      goto LABEL_22;
    goto LABEL_21;
  }
  v14 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort);
    v14 = FilterKindList_TypeInfo;
  }
  this = (CombineServantListViewItem_o *)v14->static_fields->ClassFilterKindList;
  if ( !this )
    goto LABEL_83;
  v15 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)this,
                                           (const MethodInfo_3588F1C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v15, 0LL) )
    goto LABEL_18;
  this = (CombineServantListViewItem_o *)sub_1BCA888(ListViewSort_FilterKind___TypeInfo, 1LL);
  if ( !this )
    goto LABEL_83;
  v16 = this;
  if ( !this->fields.sortIndex )
    goto LABEL_84;
  LODWORD(this->fields.sortValue0) = 28;
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)this, 0LL) )
  {
LABEL_18:
    if ( !ListViewSort__IsMatchClassFilter(sort, v4->fields.servantEntity, 0LL) )
    {
LABEL_21:
      if ( !v11 )
        return 0;
    }
  }
LABEL_22:
  v17 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort);
    v17 = FilterKindList_TypeInfo;
  }
  this = (CombineServantListViewItem_o *)v17->static_fields->NpTypeFilterKindList;
  if ( !this )
    goto LABEL_83;
  v18 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)this,
                                           (const MethodInfo_3588F1C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v18, 0LL)
    && !ListViewSort__IsMatchNPTypeFilter(sort, v4->fields.userSvtEntity, 0LL) )
  {
    return 0;
  }
  v19 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort);
    v19 = FilterKindList_TypeInfo;
  }
  this = (CombineServantListViewItem_o *)v19->static_fields->NpEffectFilterKindList;
  if ( !this )
    goto LABEL_83;
  v20 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)this,
                                           (const MethodInfo_3588F1C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v20, 0LL)
    && !ListViewSort__IsMatchNPEffectFilter(sort, v4->fields.userSvtEntity, 0LL) )
  {
    return 0;
  }
  v21 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort);
    v21 = FilterKindList_TypeInfo;
  }
  this = (CombineServantListViewItem_o *)v21->static_fields->ServantTypeFilterKindList;
  if ( !this )
LABEL_83:
    sub_1BCAA3C(this, sort);
  v22 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)this,
                                           (const MethodInfo_3588F1C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v22, 0LL)
    && !ListViewSort__IsMatchServantTypeFilter(sort, v4->fields.servantEntity, 0LL) )
  {
    return 0;
  }
  if ( !ListViewSort__CheckSvtEventBonusFilterDefaultAll(sort, -1, 0LL) )
  {
    userSvtEntity = v4->fields.userSvtEntity;
    if ( !ServantEventBonusFilterController_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantEventBonusFilterController_TypeInfo, v23);
    if ( ServantEventBonusFilterController__IsHideServant(userSvtEntity, sort, -1, 0LL) )
      return 0;
  }
  if ( !ListViewSort__CheckSvtEquipEffectFilterDefaultAll(sort, 0LL) )
  {
    v26 = v4->fields.userSvtEntity;
    if ( v26 )
    {
      dispLimitCount = v4->fields.dispLimitCount;
      if ( dispLimitCount != UserServantEntity__getDispLimitCount(v26, 0, 0LL) )
      {
        this = (CombineServantListViewItem_o *)v4->fields.userSvtEntity;
        if ( !this )
          goto LABEL_83;
        this = (CombineServantListViewItem_o *)UserServantEntity__getDispLimitCount((UserServantEntity_o *)this, 0, 0LL);
        v28 = v4->fields.userSvtEntity;
        v4->fields.dispLimitCount = (int)this;
        if ( !v28 )
          goto LABEL_83;
        SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v28, -1, 0LL);
        v4->fields.skillCategoryIdList = SkillCategoryIdList;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&v4->fields.skillCategoryIdList,
          (int64_t)SkillCategoryIdList,
          v30,
          v31,
          v32,
          v33,
          v34,
          v35);
        this = (CombineServantListViewItem_o *)v4->fields.userSvtEntity;
        if ( !this )
          goto LABEL_83;
        TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                         (UserServantEntity_o *)this,
                                         0,
                                         0LL);
        v4->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&v4->fields.tdCategoryIdList,
          (int64_t)TreasureDeviceCategoryIdList,
          v37,
          v38,
          v39,
          v40,
          v41,
          v42);
      }
    }
    this = (CombineServantListViewItem_o *)sub_1BCA888(ListViewSort_FilterKind___TypeInfo, 1LL);
    if ( !this )
      goto LABEL_83;
    v16 = this;
    if ( !this->fields.sortIndex )
      goto LABEL_84;
    LODWORD(this->fields.sortValue0) = 50;
    IsUnSelectedAllTargetFilters = ListViewSort__IsUnSelectedAllTargetFilters(
                                     sort,
                                     (ListViewSort_FilterKind_array *)this,
                                     0LL);
    this = (CombineServantListViewItem_o *)sub_1BCA888(ListViewSort_FilterKind___TypeInfo, 1LL);
    if ( !this )
      goto LABEL_83;
    v16 = this;
    if ( !this->fields.sortIndex )
      goto LABEL_84;
    LODWORD(this->fields.sortValue0) = 51;
    v44 = ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)this, 0LL);
    IsMatchEffectCategory = ServantEquipEffectFilterController__IsMatchEffectCategory(
                              v4->fields.tdCategoryIdList,
                              sort,
                              0LL);
    v46 = ServantEquipEffectFilterController__IsMatchEffectCategory(v4->fields.skillCategoryIdList, sort, 0LL);
    if ( ((IsUnSelectedAllTargetFilters ^ v44) & 1) != 0 )
    {
      if ( IsUnSelectedAllTargetFilters )
      {
        if ( !v46 )
          return 0;
      }
      else if ( !IsMatchEffectCategory )
      {
        return 0;
      }
    }
    else if ( !IsMatchEffectCategory && !v46 )
    {
      return 0;
    }
  }
  this = (CombineServantListViewItem_o *)sub_1BCA888(ListViewSort_FilterKind___TypeInfo, 1LL);
  if ( !this )
    goto LABEL_83;
  v16 = this;
  if ( !this->fields.sortIndex )
    goto LABEL_84;
  LODWORD(this->fields.sortValue0) = 39;
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)this, 0LL) )
    goto LABEL_48;
  this = (CombineServantListViewItem_o *)sub_1BCA888(ListViewSort_FilterKind___TypeInfo, 1LL);
  if ( !this )
    goto LABEL_83;
  v16 = this;
  if ( !this->fields.sortIndex )
LABEL_84:
    sub_1BCAA44(this, v16);
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
  v48 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort);
    v48 = FilterKindList_TypeInfo;
  }
  this = (CombineServantListViewItem_o *)v48->static_fields->RarityFilterKindList;
  if ( !this )
    goto LABEL_83;
  v49 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)this,
                                           (const MethodInfo_3588F1C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v49, 0LL)
      || ListViewSort__IsSelectedAllTargetFilters(sort, v49, 0LL)
      || ListViewSort__IsMatchRarityFilter(sort, v4->fields.rarity, 0LL);
}


bool __fastcall CombineServantListViewItem__IsMatchServantFilter(
        CombineServantListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  FilterKindList_c *v11; // x0
  __int64 ClassGroupFilterKindList; // x0
  FilterKindList_c *v13; // x0
  ListViewSort_FilterKind_array *v14; // x0
  FilterKindList_c *v15; // x0
  ListViewSort_FilterKind_array *v16; // x0
  FilterKindList_c *v17; // x0
  ListViewSort_FilterKind_array *v18; // x0
  __int64 v19; // x1
  UserServantEntity_o *userSvtEntity; // x21
  __int64 v21; // x1
  _BOOL4 isChoice; // w8
  FilterKindList_c *v23; // x0
  ListViewSort_FilterKind_array *v24; // x21
  UserServantEntity_o *v26; // x0
  int32_t dispLimitCount; // w21
  UserServantEntity_o *v28; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  _BOOL4 IsUnSelectedAllTargetFilters; // w21
  _BOOL4 v44; // w23
  _BOOL4 IsMatchEffectCategory; // w22
  _BOOL4 v46; // w0

  if ( (byte_4B19D99 & 1) == 0 )
  {
    sub_1BCA7E0(&FilterKindList_TypeInfo, sort, method);
    sub_1BCA7E0(&ListViewSort_FilterKind___TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v7, v8);
    sub_1BCA7E0(&ServantEventBonusFilterController_TypeInfo, v9, v10);
    byte_4B19D99 = 1;
  }
  v11 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort);
    v11 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v11->static_fields->ClassGroupFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_62;
  ClassGroupFilterKindList = (__int64)System_Collections_Generic_List_Int32Enum___ToArray(
                                        (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                        (const MethodInfo_3588F1C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_62;
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0LL) )
  {
    v13 = FilterKindList_TypeInfo;
    if ( !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort);
      v13 = FilterKindList_TypeInfo;
    }
    ClassGroupFilterKindList = (__int64)v13->static_fields->ClassFilterKindList;
    if ( !ClassGroupFilterKindList )
      goto LABEL_62;
    v14 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                             (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                             (const MethodInfo_3588F1C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v14, 0LL)
      && !ListViewSort__IsMatchClassFilter(sort, this->fields.servantEntity, 0LL) )
    {
      return 0;
    }
  }
  else if ( !ListViewSort__IsMatchClassGroupFilter(sort, this->fields.servantEntity, 0LL) )
  {
    return 0;
  }
  v15 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort);
    v15 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v15->static_fields->NpTypeFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_62;
  v16 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_3588F1C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v16, 0LL)
    && !ListViewSort__IsMatchNPTypeFilter(sort, this->fields.userSvtEntity, 0LL) )
  {
    return 0;
  }
  v17 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort);
    v17 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v17->static_fields->NpEffectFilterKindList;
  if ( !ClassGroupFilterKindList )
LABEL_62:
    sub_1BCAA3C(ClassGroupFilterKindList, sort);
  v18 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_3588F1C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v18, 0LL)
    && !ListViewSort__IsMatchNPEffectFilter(sort, this->fields.userSvtEntity, 0LL) )
  {
    return 0;
  }
  if ( !ListViewSort__CheckSvtEventBonusFilterDefaultAll(sort, -1, 0LL) )
  {
    userSvtEntity = this->fields.userSvtEntity;
    if ( !ServantEventBonusFilterController_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantEventBonusFilterController_TypeInfo, v19);
    if ( ServantEventBonusFilterController__IsHideServant(userSvtEntity, sort, -1, 0LL) )
      return 0;
  }
  if ( !ListViewSort__CheckSvtEquipEffectFilterDefaultAll(sort, 0LL) )
  {
    v26 = this->fields.userSvtEntity;
    if ( v26 )
    {
      dispLimitCount = this->fields.dispLimitCount;
      if ( dispLimitCount != UserServantEntity__getDispLimitCount(v26, 0, 0LL) )
      {
        ClassGroupFilterKindList = (__int64)this->fields.userSvtEntity;
        if ( !ClassGroupFilterKindList )
          goto LABEL_62;
        ClassGroupFilterKindList = UserServantEntity__getDispLimitCount(
                                     (UserServantEntity_o *)ClassGroupFilterKindList,
                                     0,
                                     0LL);
        v28 = this->fields.userSvtEntity;
        this->fields.dispLimitCount = ClassGroupFilterKindList;
        if ( !v28 )
          goto LABEL_62;
        SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v28, -1, 0LL);
        this->fields.skillCategoryIdList = SkillCategoryIdList;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&this->fields.skillCategoryIdList,
          (int64_t)SkillCategoryIdList,
          v30,
          v31,
          v32,
          v33,
          v34,
          v35);
        ClassGroupFilterKindList = (__int64)this->fields.userSvtEntity;
        if ( !ClassGroupFilterKindList )
          goto LABEL_62;
        TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                         (UserServantEntity_o *)ClassGroupFilterKindList,
                                         0,
                                         0LL);
        this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&this->fields.tdCategoryIdList,
          (int64_t)TreasureDeviceCategoryIdList,
          v37,
          v38,
          v39,
          v40,
          v41,
          v42);
      }
    }
    ClassGroupFilterKindList = sub_1BCA888(ListViewSort_FilterKind___TypeInfo, 1LL);
    if ( !ClassGroupFilterKindList )
      goto LABEL_62;
    v21 = ClassGroupFilterKindList;
    if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
      goto LABEL_63;
    *(_DWORD *)(ClassGroupFilterKindList + 32) = 50;
    IsUnSelectedAllTargetFilters = ListViewSort__IsUnSelectedAllTargetFilters(
                                     sort,
                                     (ListViewSort_FilterKind_array *)ClassGroupFilterKindList,
                                     0LL);
    ClassGroupFilterKindList = sub_1BCA888(ListViewSort_FilterKind___TypeInfo, 1LL);
    if ( !ClassGroupFilterKindList )
      goto LABEL_62;
    v21 = ClassGroupFilterKindList;
    if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
LABEL_63:
      sub_1BCAA44(ClassGroupFilterKindList, v21);
    *(_DWORD *)(ClassGroupFilterKindList + 32) = 51;
    v44 = ListViewSort__IsUnSelectedAllTargetFilters(
            sort,
            (ListViewSort_FilterKind_array *)ClassGroupFilterKindList,
            0LL);
    IsMatchEffectCategory = ServantEquipEffectFilterController__IsMatchEffectCategory(
                              this->fields.tdCategoryIdList,
                              sort,
                              0LL);
    v46 = ServantEquipEffectFilterController__IsMatchEffectCategory(this->fields.skillCategoryIdList, sort, 0LL);
    if ( ((IsUnSelectedAllTargetFilters ^ v44) & 1) != 0 )
    {
      if ( IsUnSelectedAllTargetFilters )
      {
        if ( !v46 )
          return 0;
      }
      else if ( !IsMatchEffectCategory )
      {
        return 0;
      }
    }
    else if ( !IsMatchEffectCategory && !v46 )
    {
      return 0;
    }
  }
  ClassGroupFilterKindList = sub_1BCA888(ListViewSort_FilterKind___TypeInfo, 1LL);
  if ( !ClassGroupFilterKindList )
    goto LABEL_62;
  v21 = ClassGroupFilterKindList;
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
  v23 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort);
    v23 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v23->static_fields->RarityFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_62;
  v24 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_3588F1C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v24, 0LL)
      || ListViewSort__IsSelectedAllTargetFilters(sort, v24, 0LL)
      || ListViewSort__IsMatchRarityFilter(sort, this->fields.rarity, 0LL);
}


void __fastcall CombineServantListViewItem__ModifyChoiceItem(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0

  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_1BCAA3C(0LL, method);
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
    sub_1BCAA3C(0LL, method);
  this->fields.isLock = UserServantEntity__IsLock(userSvtEntity, 0LL);
  this->fields.isSwapLock = 0;
}


void __fastcall CombineServantListViewItem__ModifyPushItem(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v5; // x1
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v7; // q1
  int64_t pushUserSvtId; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v9; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v10; // [xsp+20h] [xbp-40h]

  if ( (byte_4B19D98 & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method, v2);
    byte_4B19D98 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame || (userSvtEntity = this->fields.userSvtEntity) == 0LL )
    sub_1BCAA3C(SelfUserGame, v5);
  v7 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  pushUserSvtId = SelfUserGame->fields.pushUserSvtId;
  *(_OWORD *)&v10.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v10.fields.fakeValue = v7;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5);
  v9 = v10;
  this->fields.isPush = pushUserSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v9, 0LL);
}


void __fastcall CombineServantListViewItem__SetAppendSkillInfo(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  void *userSvtEntity; // x0
  SvtUseSkillData_o *AppendSkillInfo; // x0
  SvtUseSkillData_o *v24; // x20
  int32_t v25; // w21
  struct System_Int32_array *svtUseSkillIdList; // x8
  __int64 v27; // x26
  unsigned __int64 max_length; // x9
  unsigned __int64 v29; // x29
  struct System_Int32_array *v30; // x8
  struct System_Int32_array *svtSkillLvList; // x8
  int v32; // w9
  struct UserServantEntity_o *v33; // x8
  __int64 v34; // x22
  __int64 v35; // x23
  int32_t v36; // w0
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  System_Collections_Generic_List_int__o *v40; // x22
  struct System_Int32_array *v41; // x8
  __int64 v42; // x29
  unsigned __int64 v43; // x9
  unsigned __int64 v44; // x26
  struct System_Int32_array *v45; // x8
  int v46; // w23
  struct UserServantEntity_o *v47; // x8
  CombineAppendPassiveSkillMaster_o *v48; // x23
  __int64 v49; // x24
  __int64 v50; // x25
  struct System_Int32_array *svtSkillNumsList; // x8
  struct System_Int32_array *v52; // x9
  struct System_Int32_array *v53; // x8
  __int64 v54; // x8
  _QWORD *v55; // x9
  __int64 v56; // x10
  char *v57; // x8
  struct UserServantEntity_o *v58; // x8
  SvtAppendPassiveSkillUnlockMaster_o *v59; // x23
  __int64 v60; // x24
  __int64 v61; // x25
  struct System_Int32_array *v62; // x8
  struct System_Int32_array *v63; // x8
  struct System_Int32_array *items; // x8
  _QWORD *v65; // x9
  __int64 size; // x10
  __int64 v67; // x8
  CombineAppendPassiveSkillEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v69; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v70; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v71; // 0:x0.16

  if ( (byte_4B19D97 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_CombineAppendPassiveSkillMaster___, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMaster_SkillMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMaster_SvtAppendPassiveSkillUnlockMaster___, v6, v7);
    sub_1BCA7E0(&DataManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v10, v11);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Any_int___, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v16, v17);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v18, v19);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v20, v21);
    byte_4B19D97 = 1;
  }
  entity = 0LL;
  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_79;
  AppendSkillInfo = UserServantEntity__getAppendSkillInfo((UserServantEntity_o *)userSvtEntity, 0LL);
  if ( !AppendSkillInfo )
    return;
  v24 = AppendSkillInfo;
  userSvtEntity = UserGameMaster__getSelfUserGame(0LL);
  if ( !userSvtEntity )
    goto LABEL_79;
  v25 = *((_DWORD *)userSvtEntity + 24);
  this->fields.isAppendSkillLvMax = 1;
  this->fields.isAllAppendSkillLock = 1;
  this->fields.isAppendSkillLvSame = 1;
  svtUseSkillIdList = v24->fields.svtUseSkillIdList;
  if ( !svtUseSkillIdList )
    goto LABEL_79;
  v27 = 8LL;
  while ( 1 )
  {
    max_length = svtUseSkillIdList->max_length;
    v29 = v27 - 8;
    if ( v27 - 8 >= (int)max_length )
      break;
    if ( v29 >= max_length )
      goto LABEL_82;
    if ( *((int *)&svtUseSkillIdList->obj.klass + v27) >= 1 )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
      userSvtEntity = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_SkillMaster___);
      v30 = v24->fields.svtUseSkillIdList;
      if ( !v30 )
        goto LABEL_79;
      if ( v29 >= v30->max_length )
        goto LABEL_82;
      if ( !userSvtEntity )
        goto LABEL_79;
      userSvtEntity = DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)userSvtEntity,
                        *((_DWORD *)&v30->obj.klass + v27),
                        (const MethodInfo_31B2E40 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
      svtSkillLvList = v24->fields.svtSkillLvList;
      if ( !svtSkillLvList )
        goto LABEL_79;
      if ( v29 >= svtSkillLvList->max_length )
LABEL_82:
        sub_1BCAA44(userSvtEntity, method);
      if ( !userSvtEntity )
        goto LABEL_79;
      v32 = *((_DWORD *)&svtSkillLvList->obj.klass + v27);
      if ( v32 < *((_DWORD *)userSvtEntity + 10) && this->fields.isAppendSkillLvMax )
        this->fields.isAppendSkillLvMax = 0;
      if ( v32 >= 1 && this->fields.isAllAppendSkillLock )
        this->fields.isAllAppendSkillLock = 0;
      if ( svtSkillLvList->m_Items[1] != v32 && this->fields.isAppendSkillLvSame )
        this->fields.isAppendSkillLvSame = 0;
    }
    svtUseSkillIdList = v24->fields.svtUseSkillIdList;
    ++v27;
    if ( !svtUseSkillIdList )
      goto LABEL_79;
  }
  v33 = this->fields.userSvtEntity;
  if ( !v33 )
    goto LABEL_79;
  v35 = *(_QWORD *)&v33->fields.svtId.fields.currentCryptoKey;
  v34 = *(_QWORD *)&v33->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
  *(_QWORD *)&v69.fields.currentCryptoKey = v35;
  *(_QWORD *)&v69.fields.fakeValue = v34;
  v36 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v69, 0LL);
  this->fields.isAppendSkillExChangeLimit = UserServantAppendPassiveSkillMaster__IsAppendSkillExchangeLimit(v36, 0LL);
  v40 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v37,
                                                    v38,
                                                    v39);
  System_Collections_Generic_List_int____ctor(
    v40,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  v41 = v24->fields.svtUseSkillIdList;
  if ( !v41 )
LABEL_79:
    sub_1BCAA3C(userSvtEntity, method);
  v42 = 8LL;
  while ( 1 )
  {
    v43 = v41->max_length;
    v44 = v42 - 8;
    if ( v42 - 8 >= (int)v43 )
      break;
    if ( v44 >= v43 )
      goto LABEL_82;
    if ( *((int *)&v41->obj.klass + v42) < 1 )
      goto LABEL_78;
    v45 = v24->fields.svtSkillLvList;
    if ( !v45 )
      goto LABEL_79;
    if ( v44 >= v45->max_length )
      goto LABEL_82;
    v46 = *((_DWORD *)&v45->obj.klass + v42);
    if ( DataManager_TypeInfo->_2.cctor_finished )
    {
      if ( v46 )
        goto LABEL_42;
    }
    else
    {
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
      if ( v46 )
      {
LABEL_42:
        userSvtEntity = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_CombineAppendPassiveSkillMaster___);
        v47 = this->fields.userSvtEntity;
        if ( !v47 )
          goto LABEL_79;
        v48 = (CombineAppendPassiveSkillMaster_o *)userSvtEntity;
        v50 = *(_QWORD *)&v47->fields.svtId.fields.currentCryptoKey;
        v49 = *(_QWORD *)&v47->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
        *(_QWORD *)&v70.fields.currentCryptoKey = v50;
        *(_QWORD *)&v70.fields.fakeValue = v49;
        userSvtEntity = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v70, 0LL);
        svtSkillNumsList = v24->fields.svtSkillNumsList;
        if ( !svtSkillNumsList )
          goto LABEL_79;
        if ( v44 >= svtSkillNumsList->max_length )
          goto LABEL_82;
        v52 = v24->fields.svtSkillLvList;
        if ( !v52 )
          goto LABEL_79;
        if ( v44 >= v52->max_length )
          goto LABEL_82;
        if ( !v48 )
          goto LABEL_79;
        userSvtEntity = (void *)CombineAppendPassiveSkillMaster__TryGetEntityWithTryNum(
                                  v48,
                                  &entity,
                                  (int32_t)userSvtEntity,
                                  *((_DWORD *)&svtSkillNumsList->obj.klass + v42),
                                  *((_DWORD *)&v52->obj.klass + v42),
                                  0LL);
        if ( ((unsigned __int8)userSvtEntity & 1) != 0 )
        {
          if ( !entity )
            goto LABEL_79;
          userSvtEntity = (void *)CombineUtility__CheckCombineNeedItemsEnough(
                                    this->fields.userSvtEntity,
                                    entity->fields.itemIds,
                                    entity->fields.itemNums,
                                    v25,
                                    entity->fields.qp,
                                    0LL);
          if ( ((unsigned __int8)userSvtEntity & 1) != 0 )
          {
            v53 = v24->fields.svtUseSkillIdList;
            if ( !v53 )
              goto LABEL_79;
            if ( v44 >= v53->max_length )
              goto LABEL_82;
            userSvtEntity = this->fields.enableAppendSkillUp;
            if ( !userSvtEntity )
              goto LABEL_79;
            method = (const MethodInfo *)*((unsigned int *)&v53->obj.klass + v42);
            v54 = *((_QWORD *)userSvtEntity + 2);
            v55 = Method_System_Collections_Generic_List_int__Add__;
            ++*((_DWORD *)userSvtEntity + 7);
            if ( !v54 )
              goto LABEL_79;
            v56 = *((int *)userSvtEntity + 6);
            if ( (unsigned int)v56 >= *(_DWORD *)(v54 + 24) )
            {
              v67 = v55[4];
LABEL_77:
              System_Collections_Generic_List_int___AddWithResize(
                (System_Collections_Generic_List_int__o *)userSvtEntity,
                (int32_t)method,
                *(const MethodInfo_3584C38 **)(*(_QWORD *)(v67 + 192) + 112LL));
              goto LABEL_78;
            }
            v57 = (char *)(v54 + 4 * v56);
            *((_DWORD *)userSvtEntity + 6) = v56 + 1;
LABEL_74:
            *((_DWORD *)v57 + 8) = (_DWORD)method;
            goto LABEL_78;
          }
        }
        goto LABEL_78;
      }
    }
    userSvtEntity = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_SvtAppendPassiveSkillUnlockMaster___);
    v58 = this->fields.userSvtEntity;
    if ( !v58 )
      goto LABEL_79;
    v59 = (SvtAppendPassiveSkillUnlockMaster_o *)userSvtEntity;
    v61 = *(_QWORD *)&v58->fields.svtId.fields.currentCryptoKey;
    v60 = *(_QWORD *)&v58->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    *(_QWORD *)&v71.fields.currentCryptoKey = v61;
    *(_QWORD *)&v71.fields.fakeValue = v60;
    userSvtEntity = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v71, 0LL);
    v62 = v24->fields.svtSkillNumsList;
    if ( !v62 )
      goto LABEL_79;
    if ( v44 >= v62->max_length )
      goto LABEL_82;
    if ( !v59 )
      goto LABEL_79;
    userSvtEntity = SvtAppendPassiveSkillUnlockMaster__GetEntity(
                      v59,
                      (int32_t)userSvtEntity,
                      *((_DWORD *)&v62->obj.klass + v42),
                      0LL);
    if ( userSvtEntity )
    {
      userSvtEntity = (void *)CombineUtility__CheckCombineNeedItemsEnough(
                                this->fields.userSvtEntity,
                                *((System_Int32_array **)userSvtEntity + 3),
                                *((System_Int32_array **)userSvtEntity + 4),
                                v25,
                                0,
                                0LL);
      if ( ((unsigned __int8)userSvtEntity & 1) != 0 )
      {
        v63 = v24->fields.svtUseSkillIdList;
        if ( !v63 )
          goto LABEL_79;
        if ( v44 >= v63->max_length )
          goto LABEL_82;
        if ( !v40 )
          goto LABEL_79;
        method = (const MethodInfo *)*((unsigned int *)&v63->obj.klass + v42);
        items = v40->fields._items;
        v65 = Method_System_Collections_Generic_List_int__Add__;
        ++v40->fields._version;
        if ( !items )
          goto LABEL_79;
        size = v40->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          v67 = v65[4];
          userSvtEntity = v40;
          goto LABEL_77;
        }
        v57 = (char *)items + 4 * size;
        v40->fields._size = size + 1;
        goto LABEL_74;
      }
    }
LABEL_78:
    v41 = v24->fields.svtUseSkillIdList;
    ++v42;
    if ( !v41 )
      goto LABEL_79;
  }
  this->fields.isAppendSkillUpItemNum = System_Linq_Enumerable__Any_int_(
                                          (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.enableAppendSkillUp,
                                          (const MethodInfo_2F1E314 *)Method_System_Linq_Enumerable_Any_int___);
  this->fields.isAppendSkillOpenItemNum = System_Linq_Enumerable__Any_int_(
                                            (System_Collections_Generic_IEnumerable_TSource__o *)v40,
                                            (const MethodInfo_2F1E314 *)Method_System_Linq_Enumerable_Any_int___);
}


void __fastcall CombineServantListViewItem__SetIsCombineExpCampaignTarget(
        CombineServantListViewItem_o *this,
        System_Collections_Generic_List_EventCampaignEntity__o *eventCampaignEntities,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  CombineServantListViewItem___c_c *v22; // x0
  System_Predicate_object__o *_9__118_0; // x21
  Il2CppObject *v24; // x22
  struct CombineServantListViewItem___c_StaticFields *static_fields; // x0
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  System_Collections_Generic_List_T__o *All; // x0
  __int64 v33; // x1
  int klass; // w22
  _BOOL8 v35; // x0
  __int64 v36; // x1
  Il2CppObject *current; // x24
  UserServantEntity_o *userSvtEntity; // x0
  System_Collections_Generic_List_Enumerator_object__o v39; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v40; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4B19D9D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_IndexOf_int___, eventCampaignEntities, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventCampaignEntity__FindAll__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__, v14, v15);
    sub_1BCA7E0(&System_Predicate_EventCampaignEntity__TypeInfo, v16, v17);
    sub_1BCA7E0(&Method_CombineServantListViewItem___c__SetIsCombineExpCampaignTarget_b__118_0__, v18, v19);
    sub_1BCA7E0(&CombineServantListViewItem___c_TypeInfo, v20, v21);
    byte_4B19D9D = 1;
  }
  memset(&v40, 0, sizeof(v40));
  this->fields.isCombineExpCampaignTarget = 0;
  this->fields.combineExpCampaignValue = 0.0;
  if ( eventCampaignEntities && !this->fields.type )
  {
    v22 = CombineServantListViewItem___c_TypeInfo;
    if ( !CombineServantListViewItem___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CombineServantListViewItem___c_TypeInfo, eventCampaignEntities);
      v22 = CombineServantListViewItem___c_TypeInfo;
    }
    _9__118_0 = (System_Predicate_object__o *)v22->static_fields->__9__118_0;
    if ( !_9__118_0 )
    {
      if ( !v22->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v22, eventCampaignEntities);
        v22 = CombineServantListViewItem___c_TypeInfo;
      }
      v24 = (Il2CppObject *)v22->static_fields->__9;
      _9__118_0 = (System_Predicate_object__o *)sub_1BCAA2C(
                                                  System_Predicate_EventCampaignEntity__TypeInfo,
                                                  eventCampaignEntities,
                                                  method,
                                                  v3);
      System_Predicate_object____ctor(
        _9__118_0,
        v24,
        Method_CombineServantListViewItem___c__SetIsCombineExpCampaignTarget_b__118_0__,
        0LL);
      static_fields = CombineServantListViewItem___c_TypeInfo->static_fields;
      static_fields->__9__118_0 = (struct System_Predicate_EventCampaignEntity__o *)_9__118_0;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->__9__118_0,
        (int64_t)_9__118_0,
        v26,
        v27,
        v28,
        v29,
        v30,
        v31);
    }
    All = System_Collections_Generic_List_object___FindAll(
            (System_Collections_Generic_List_object__o *)eventCampaignEntities,
            (System_Predicate_T__o *)_9__118_0,
            (const MethodInfo_35A236C *)Method_System_Collections_Generic_List_EventCampaignEntity__FindAll__);
    if ( !All )
      sub_1BCAA3C(0LL, v33);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v39,
      (System_Collections_Generic_List_object__o *)All,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    v40 = v39;
    klass = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        v35 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v40,
                (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
        if ( !v35 )
        {
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v40,
            (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
          this->fields.combineExpCampaignValue = (float)klass / 1000.0;
          return;
        }
        current = v40.fields._current;
        if ( !v40.fields._current )
          sub_1BCAA3C(v35, v36);
        if ( HIDWORD(v40.fields._current[1].klass) == 27 )
          break;
        if ( (System_Array__IndexOf_int_(
                (System_Int32_array *)v40.fields._current[2].monitor,
                this->fields.svtId,
                (const MethodInfo_300E9A0 *)Method_System_Array_IndexOf_int___) & 0x80000000) == 0 )
          goto LABEL_20;
      }
      userSvtEntity = this->fields.userSvtEntity;
      if ( !userSvtEntity )
        sub_1BCAA3C(0LL, v36);
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
  sub_1BCA784(
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 SelfUserGame; // x0
  __int64 v19; // x1
  UserServantEntity_o *userSvtEntity; // x8
  struct UserServantEntity_o *v21; // x8
  __int64 v22; // x21
  __int64 v23; // x8
  __int64 v24; // x22
  unsigned __int64 v25; // x20
  int32_t v26; // w23
  int v27; // w28
  __int64 v28; // x8
  CombineSkillMaster_o *v29; // x20
  unsigned __int64 v30; // x28
  char v31; // w26
  int32_t v32; // w24
  struct ServantEntity_o *servantEntity; // x8
  CombineSkillMaster_o *v34; // x21
  struct System_Int32_array *itemNums; // x20
  struct System_Int32_array *itemIds; // x27
  int max_length; // w8
  UserItemMaster_o *v38; // x25
  il2cpp_array_size_t v39; // w9
  il2cpp_array_size_t v40; // w29
  struct UserServantEntity_o *v41; // x8
  __int128 v42; // q1
  int32_t v43; // w26
  int32_t v44; // w23
  __int64 v45; // x8
  _QWORD *v46; // x9
  __int64 v47; // x10
  struct System_Collections_Generic_List_int__o *enableSkillUp; // x8
  __int64 v49; // [xsp+0h] [xbp-C0h]
  __int64 v50; // [xsp+8h] [xbp-B8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v51; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v52; // [xsp+30h] [xbp-90h]
  UserItemEntity_o *v53; // [xsp+50h] [xbp-70h] BYREF
  CombineSkillEntity_o *entity; // [xsp+58h] [xbp-68h] BYREF

  if ( (byte_4B19D96 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_CombineSkillMaster___, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_SkillMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserItemMaster___, v6, v7);
    sub_1BCA7E0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Count__, v12, v13);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v14, v15);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16, v17);
    byte_4B19D96 = 1;
  }
  v53 = 0LL;
  entity = 0LL;
  SelfUserGame = (__int64)UserGameMaster__getSelfUserGame(0LL);
  userSvtEntity = this->fields.userSvtEntity;
  v50 = SelfUserGame;
  if ( !userSvtEntity )
    goto LABEL_60;
  SelfUserGame = (__int64)UserServantEntity__getSkillIdList(userSvtEntity, -1, -1, 1, -1, 0LL);
  v21 = this->fields.userSvtEntity;
  if ( !v21 )
    goto LABEL_60;
  v22 = SelfUserGame;
  SelfUserGame = ((__int64 (__fastcall *)(struct UserServantEntity_o *, void *))v21->klass->vtable._6_getSkillLevelList.method)(
                   this->fields.userSvtEntity,
                   v21->klass[1]._1.image);
  this->fields.isSkillLvMax = 1;
  if ( !v22 )
    goto LABEL_60;
  v23 = *(_QWORD *)(v22 + 24);
  v24 = SelfUserGame;
  if ( (int)v23 >= 1 )
  {
    v25 = 0LL;
    while ( 1 )
    {
      if ( v25 >= (unsigned int)v23 )
        goto LABEL_61;
      if ( !v24 )
        goto LABEL_60;
      if ( v25 >= *(unsigned int *)(v24 + 24) )
        goto LABEL_61;
      v26 = *(_DWORD *)(v22 + 32 + 4 * v25);
      if ( v26 >= 1 )
      {
        v27 = *(_DWORD *)(v24 + 32 + 4 * v25);
        SelfUserGame = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !SelfUserGame )
          goto LABEL_60;
        SelfUserGame = (__int64)DataManager__GetMasterData_object_(
                                  (DataManager_o *)SelfUserGame,
                                  (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_SkillMaster___);
        if ( !SelfUserGame )
          goto LABEL_60;
        SelfUserGame = (__int64)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)SelfUserGame,
                                  v26,
                                  (const MethodInfo_31B2E40 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        if ( !SelfUserGame )
          goto LABEL_60;
        if ( v27 < *(_DWORD *)(SelfUserGame + 40) )
          break;
      }
      LODWORD(v23) = *(_DWORD *)(v22 + 24);
      if ( (__int64)++v25 >= (int)v23 )
        goto LABEL_19;
    }
    this->fields.isSkillLvMax = 0;
  }
LABEL_19:
  SelfUserGame = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_60;
  SelfUserGame = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)SelfUserGame,
                            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_CombineSkillMaster___);
  v28 = *(_QWORD *)(v22 + 24);
  if ( (int)v28 >= 1 )
  {
    v29 = (CombineSkillMaster_o *)SelfUserGame;
    v30 = 0LL;
    v31 = 0;
    v49 = v22;
    while ( v30 < (unsigned int)v28 )
    {
      if ( !v24 )
        goto LABEL_60;
      if ( v30 >= *(unsigned int *)(v24 + 24) )
        break;
      v32 = *(_DWORD *)(v22 + 4 * v30 + 32);
      if ( v32 >= 1 )
      {
        servantEntity = this->fields.servantEntity;
        if ( !servantEntity || !v29 )
          goto LABEL_60;
        SelfUserGame = CombineSkillMaster__TryGetEntity(
                         v29,
                         &entity,
                         servantEntity->fields.combineSkillId,
                         *(_DWORD *)(v24 + 4 * v30 + 32),
                         0LL);
        if ( (SelfUserGame & 1) != 0 )
        {
          if ( !entity )
            goto LABEL_60;
          v34 = v29;
          itemIds = entity->fields.itemIds;
          itemNums = entity->fields.itemNums;
          SelfUserGame = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !SelfUserGame )
            goto LABEL_60;
          SelfUserGame = (__int64)DataManager__GetMasterData_object_(
                                    (DataManager_o *)SelfUserGame,
                                    (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserItemMaster___);
          if ( !itemIds )
            goto LABEL_60;
          max_length = itemIds->max_length;
          if ( max_length >= 1 )
          {
            v38 = (UserItemMaster_o *)SelfUserGame;
            v39 = 0;
            while ( 1 )
            {
              if ( v39 >= max_length )
                goto LABEL_61;
              if ( !itemNums )
                goto LABEL_60;
              v40 = v39;
              if ( v39 >= itemNums->max_length )
                goto LABEL_61;
              v41 = this->fields.userSvtEntity;
              if ( !v41 )
                goto LABEL_60;
              v42 = *(_OWORD *)&v41->fields.userId.fields.fakeValue;
              v43 = itemIds->m_Items[v39 + 1];
              v44 = itemNums->m_Items[v39 + 1];
              *(_OWORD *)&v52.fields.currentCryptoKey = *(_OWORD *)&v41->fields.userId.fields.currentCryptoKey;
              *(_OWORD *)&v52.fields.fakeValue = v42;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v19);
              v51 = v52;
              SelfUserGame = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v51, 0LL);
              if ( !v38 )
                goto LABEL_60;
              SelfUserGame = UserItemMaster__TryGetEntity(v38, &v53, SelfUserGame, v43, 0LL);
              if ( (SelfUserGame & 1) == 0 )
                break;
              if ( !v53 )
                goto LABEL_60;
              if ( v44 > v53->fields.num )
                break;
              max_length = itemIds->max_length;
              v39 = v40 + 1;
              if ( (int)(v40 + 1) >= max_length )
              {
                v31 = 1;
                goto LABEL_47;
              }
            }
            v31 = 0;
          }
LABEL_47:
          if ( !v50 || !entity )
            goto LABEL_60;
          v29 = v34;
          v22 = v49;
          if ( *(_DWORD *)(v50 + 96) < entity->fields.qp || (v31 & 1) == 0 )
          {
            v31 = 0;
          }
          else
          {
            SelfUserGame = (__int64)this->fields.enableSkillUp;
            if ( !SelfUserGame )
              goto LABEL_60;
            v45 = *(_QWORD *)(SelfUserGame + 16);
            v46 = Method_System_Collections_Generic_List_int__Add__;
            ++*(_DWORD *)(SelfUserGame + 28);
            if ( !v45 )
              goto LABEL_60;
            v47 = *(int *)(SelfUserGame + 24);
            if ( (unsigned int)v47 >= *(_DWORD *)(v45 + 24) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                (System_Collections_Generic_List_int__o *)SelfUserGame,
                v32,
                *(const MethodInfo_3584C38 **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
            }
            else
            {
              *(_DWORD *)(SelfUserGame + 24) = v47 + 1;
              *(_DWORD *)(v45 + 4 * v47 + 32) = v32;
            }
            v31 = 1;
          }
        }
      }
      LODWORD(v28) = *(_DWORD *)(v22 + 24);
      if ( (__int64)++v30 >= (int)v28 )
        goto LABEL_58;
    }
LABEL_61:
    sub_1BCAA44(SelfUserGame, v19);
  }
LABEL_58:
  enableSkillUp = this->fields.enableSkillUp;
  if ( !enableSkillUp )
LABEL_60:
    sub_1BCAA3C(SelfUserGame, v19);
  this->fields.isSkillUpItemNum = enableSkillUp->fields._size > 0;
}


bool __fastcall CombineServantListViewItem__SetSortValue(
        CombineServantListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
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
  __int64 v34; // x21
  int64_t iconLabelInfo2; // x0
  const MethodInfo *v36; // x1
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  int32_t bonusKind2; // w8
  int32_t v44; // w2
  int32_t bonusKind2Id; // w8
  struct ListViewManager_o *v46; // x8
  __int64 v47; // x11
  UnityEngine_Object_o *v48; // x21
  int32_t v49; // w8
  int32_t v50; // w8
  bool IsEnableServant; // w0
  Il2CppObject *MasterData_object; // x0
  __int64 v53; // x1
  int32_t svtId; // w22
  ServantFilterMaster_o *v55; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v56; // kr00_16
  System_Collections_Generic_List_EventGroupEntity__o *EntitiesByGroupId; // x22
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  struct ListViewManager_o *manager; // x8
  CombineServantListViewManager_c *v65; // x9
  __int64 v66; // x10
  struct ListViewManager_o *v67; // x11
  int32_t v68; // w8
  struct UserServantEntity_o *v69; // x8
  __int128 v70; // q1
  int32_t bonusKindId; // w22
  int64_t v72; // x0
  int64_t v73; // x1
  PartyOrganizationUtility_o *v74; // x0
  __int64 v75; // x1
  __int64 v76; // x2
  __int64 v77; // x3
  System_Func_object__bool__o *v78; // x23
  const MethodInfo *v79; // x2
  _BOOL4 isChoice; // w11
  _BOOL4 isLock; // w23
  _BOOL4 v82; // w21
  int64_t *p_sortValue0; // x22
  __int64 v84; // x8
  unsigned int v85; // w8
  __int64 v86; // x8
  int32_t type; // w8
  __int64 v88; // x8
  int32_t rarity; // w8
  int64_t v90; // x8
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v92; // q1
  struct UserServantEntity_o *v93; // x8
  IconLabelInfo_o *v94; // x20
  int32_t v95; // w21
  struct UserServantEntity_o *v96; // x8
  int32_t v97; // w8
  IconLabelInfo_o *v98; // x20
  struct UserServantEntity_o *v99; // x8
  int64_t v100; // x20
  struct IconLabelInfo_o *v101; // x21
  int32_t v102; // w3
  IconLabelInfo_o *v103; // x0
  int32_t v104; // w2
  unsigned int v105; // w8
  IconLabelInfo_o *v106; // x20
  struct UserServantEntity_o *v107; // x8
  int64_t hp; // x2
  int32_t adjustHp; // w3
  int32_t v110; // w1
  struct UserServantEntity_o *v111; // x8
  struct IconLabelInfo_o *iconLabelInfo1; // x19
  struct ServantEntity_o *servantEntity; // x8
  int64_t cost; // x2
  int32_t lv; // w20
  int64_t friendship; // x2
  int32_t friendshipMax; // w3
  int32_t v118; // w1
  __int64 methodPtr_low; // x10
  struct ServantEntity_o *v120; // x8
  __int64 collectionNo; // x10
  struct UserServantEntity_o *v122; // x8
  int32_t v123; // w21
  __int64 v124; // x9
  bool v125; // zf
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v127; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v128; // [xsp+30h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v129; // [xsp+50h] [xbp-60h]
  int32_t tdMaxLv[2]; // [xsp+78h] [xbp-38h] BYREF

  if ( (byte_4B19D9C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Any_EventGroupEntity___, sort, method);
    sub_1BCA7E0(&CombineServantListViewManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantFilterMaster___, v8, v9);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventCampaignMaster___, v10, v11);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventGroupMaster___, v12, v13);
    sub_1BCA7E0(&DataManager_TypeInfo, v14, v15);
    sub_1BCA7E0(&System_Func_EventGroupEntity__bool__TypeInfo, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventGroupEntity__get_Count__, v18, v19);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v20, v21);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v22, v23);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v24, v25);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v26, v27);
    sub_1BCA7E0(&TutorialFlag_TypeInfo, v28, v29);
    sub_1BCA7E0(&Method_CombineServantListViewItem___c__DisplayClass117_0__SetSortValue_b__0__, v30, v31);
    sub_1BCA7E0(&CombineServantListViewItem___c__DisplayClass117_0_TypeInfo, v32, v33);
    byte_4B19D9C = 1;
  }
  *(_QWORD *)tdMaxLv = 0LL;
  v34 = sub_1BCAA2C(CombineServantListViewItem___c__DisplayClass117_0_TypeInfo, sort, method, v3);
  CombineServantListViewItem___c__DisplayClass117_0___ctor(
    (CombineServantListViewItem___c__DisplayClass117_0_o *)v34,
    0LL);
  if ( !v34 )
    goto LABEL_305;
  *(_QWORD *)(v34 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v34 + 16), (int64_t)this, v37, v38, v39, v40, v41, v42);
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
      if ( !CombineServantListViewItem__IsMatchMaterialFilter(this, sort, v79) )
        goto LABEL_104;
      goto LABEL_78;
    }
    if ( !type )
    {
      if ( !CombineServantListViewItem__IsMatchBaseServantFilter(this, sort, v79) )
        goto LABEL_104;
LABEL_78:
      isChoice = this->fields.isChoice;
      iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo2;
      if ( this->fields.isSwapLock )
        isLock = !this->fields.isLock;
      else
        isLock = this->fields.isLock;
      if ( this->fields.isSwapChoice )
        v82 = !isChoice;
      else
        v82 = isChoice;
      if ( !iconLabelInfo2 )
        goto LABEL_305;
      IconLabelInfo__Clear((IconLabelInfo_o *)iconLabelInfo2, 0LL);
      this->fields.sortValue0 = 0LL;
      p_sortValue0 = &this->fields.sortValue0;
      this->fields.sortValue0B = 0LL;
      if ( !sort->fields.isSmartSort )
      {
        if ( v82 && sort->fields.isChoiceSort )
        {
          v85 = this->fields.type;
          if ( v85 <= 0xC )
          {
            if ( ((1 << v85) & 0x1FDD) != 0 )
              v86 = 10LL;
            else
LABEL_124:
              v86 = -10LL;
            *p_sortValue0 = v86;
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
            v90 = !this->fields.isParty;
LABEL_232:
            this->fields.sortValue1 = v90;
            if ( !iconLabelInfo2 )
              break;
            iconLabelInfo1 = this->fields.iconLabelInfo1;
            goto LABEL_234;
          case 1:
            userSvtEntity = this->fields.userSvtEntity;
            if ( !userSvtEntity )
              break;
            v92 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
            *(_OWORD *)&v129.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v129.fields.fakeValue = v92;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v36);
            v127 = v129;
            iconLabelInfo2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v127, 0LL);
            v93 = this->fields.userSvtEntity;
            this->fields.sortValue1 = iconLabelInfo2;
            if ( !v93 )
              break;
            iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
            if ( !iconLabelInfo2 )
              break;
            IconLabelInfo__SetTime((IconLabelInfo_o *)iconLabelInfo2, 49, v93->fields.createdAt, 0, 0, 0, 0LL);
            goto LABEL_226;
          case 2:
            iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
            this->fields.sortValue1 = this->fields.rarity;
            if ( !iconLabelInfo2 )
              break;
            v94 = this->fields.iconLabelInfo1;
            v95 = *(_DWORD *)(iconLabelInfo2 + 256);
            iconLabelInfo2 = UserServantEntity__getLevelMax((UserServantEntity_o *)iconLabelInfo2, 0LL);
            v96 = this->fields.userSvtEntity;
            if ( !v96 || !v94 )
              break;
            IconLabelInfo__Set_38850420(v94, 2, v95, iconLabelInfo2, 0, 0, 0, v96->fields.lv, 0LL);
            v97 = this->fields.type;
            if ( v97 != 10 && v97 != 7 )
              goto LABEL_267;
            iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
            if ( !iconLabelInfo2 )
              break;
            v98 = this->fields.iconLabelInfo2;
            iconLabelInfo2 = UserServantEntity__getRarity((UserServantEntity_o *)iconLabelInfo2, 0LL);
            v99 = this->fields.userSvtEntity;
            if ( !v99 || !v98 )
              break;
            IconLabelInfo__Set_38850420(v98, 36, iconLabelInfo2, v99->fields.exceedCount, 0, 0, 0, v99->fields.lv, 0LL);
            goto LABEL_267;
          case 3:
            iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
            if ( !iconLabelInfo2 )
              break;
            v100 = *(int *)(iconLabelInfo2 + 256);
            v101 = this->fields.iconLabelInfo1;
            this->fields.sortValue1 = v100;
            iconLabelInfo2 = UserServantEntity__getLevelMax((UserServantEntity_o *)iconLabelInfo2, 0LL);
            if ( !v101 )
              break;
            v102 = iconLabelInfo2;
            v103 = v101;
            v104 = v100;
            goto LABEL_237;
          case 4:
            iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
            if ( !iconLabelInfo2 )
              break;
            v105 = this->fields.type & 0xFFFFFFFE;
            this->fields.sortValue1 = *(int *)(iconLabelInfo2 + 292);
            if ( v105 == 4 )
            {
              v106 = this->fields.iconLabelInfo1;
            }
            else
            {
              UserServantEntity__getTreasureDeviceInfo_40943792(
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
              v118 = 33;
LABEL_254:
              IconLabelInfo__Set_38850420(
                (IconLabelInfo_o *)iconLabelInfo2,
                v118,
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
              v106 = this->fields.iconLabelInfo2;
            }
            v123 = *(_DWORD *)(iconLabelInfo2 + 256);
            iconLabelInfo2 = UserServantEntity__getLevelMax((UserServantEntity_o *)iconLabelInfo2, 0LL);
            if ( v106 )
            {
              IconLabelInfo__Set_38850420(v106, 2, v123, iconLabelInfo2, 0, 0, 0, 0, 0LL);
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
            v107 = this->fields.userSvtEntity;
            if ( !v107 )
              break;
            hp = v107->fields.hp;
            iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
            this->fields.sortValue1 = hp;
            if ( !iconLabelInfo2 )
              break;
            adjustHp = v107->fields.adjustHp;
            v110 = 3;
            goto LABEL_225;
          case 6:
            v111 = this->fields.userSvtEntity;
            if ( !v111 )
              break;
            hp = v111->fields.atk;
            iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
            this->fields.sortValue1 = hp;
            if ( !iconLabelInfo2 )
              break;
            adjustHp = v111->fields.adjustAtk;
            v110 = 5;
LABEL_225:
            IconLabelInfo__Set_38850420((IconLabelInfo_o *)iconLabelInfo2, v110, hp, adjustHp, 0, 0, 0, 0, 0LL);
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
            IconLabelInfo__Set_38850420((IconLabelInfo_o *)iconLabelInfo2, 7, cost, 0, 0, 0, 0, 0, 0LL);
            goto LABEL_255;
          case 8:
            iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
            v90 = -this->fields.priority;
            goto LABEL_232;
          case 0xA:
            friendship = this->fields.friendship;
            iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
            this->fields.sortValue1 = friendship;
            if ( !iconLabelInfo2 )
              break;
            friendshipMax = this->fields.friendshipMax;
            v118 = 32;
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
            v120 = this->fields.servantEntity;
            if ( !v120 )
              break;
            collectionNo = v120->fields.collectionNo;
            v122 = this->fields.userSvtEntity;
            this->fields.sortValue1 = (((unsigned __int64)(unsigned int)this->fields.rarity << 32)
                                     + (iconLabelInfo2 << 48)) | collectionNo;
            if ( !v122 )
              break;
            iconLabelInfo1 = this->fields.iconLabelInfo1;
            lv = v122->fields.lv;
            iconLabelInfo2 = (int64_t)v122;
LABEL_235:
            iconLabelInfo2 = UserServantEntity__getLevelMax((UserServantEntity_o *)iconLabelInfo2, 0LL);
            if ( !iconLabelInfo1 )
              break;
            v102 = iconLabelInfo2;
            v103 = iconLabelInfo1;
            v104 = lv;
LABEL_237:
            IconLabelInfo__Set_38850420(v103, 2, v104, v102, 0, 0, 0, 0, 0LL);
            goto LABEL_267;
          case 0xF:
            friendship = this->fields.hpReinforceValue;
            iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
            this->fields.isDispHpStatusUpInfo = 1;
            this->fields.sortValue1 = friendship;
            if ( !iconLabelInfo2 )
              break;
            friendshipMax = this->fields.nowMaxHpReinforceValue;
            v118 = 44;
            goto LABEL_254;
          case 0x10:
            friendship = this->fields.atkReinforceValue;
            iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
            this->fields.isDispAtkStatusUpInfo = 1;
            this->fields.sortValue1 = friendship;
            if ( !iconLabelInfo2 )
              break;
            friendshipMax = this->fields.nowMaxAtkReinforceValue;
            v118 = 45;
            goto LABEL_254;
          default:
            return iconLabelInfo2;
        }
LABEL_305:
        sub_1BCAA3C(iconLabelInfo2, v36);
      }
      switch ( this->fields.type )
      {
        case 0:
          if ( this->fields.isHeroineSvt )
          {
            if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, v36);
            if ( TutorialFlag__Get_38402052(126, 0LL) )
              goto LABEL_162;
          }
          if ( this->fields.isParty )
          {
            v84 = 20LL;
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
              v88 = -120LL;
            }
            else
            {
              v88 = -5LL;
              if ( !isLock && !v82 )
                v88 = 30LL;
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
                  v88 = -90LL;
                  if ( !this->fields.isAtkSecondUpMax && this->fields.isAtkUpMax )
                    v88 = 90LL;
                  goto LABEL_293;
                }
                v124 = 70LL;
                v125 = !this->fields.isAtkUpMax;
                v88 = -110LL;
              }
              else
              {
                if ( rarity == 4 )
                {
                  v88 = -80LL;
                  if ( !this->fields.isHpSecondUpMax && this->fields.isHpUpMax )
                    v88 = 100LL;
LABEL_293:
                  *p_sortValue0 = v88;
                  if ( isLock || v82 )
                    v88 = -5LL;
                  goto LABEL_295;
                }
                v124 = 80LL;
                v125 = !this->fields.isHpUpMax;
                v88 = -100LL;
              }
              if ( v125 )
                v88 = v124;
              goto LABEL_293;
            }
            v88 = -150LL;
          }
          else
          {
            if ( !CombineServantListViewItem__get_IsCanNotSelectMaterial(this, v36) )
            {
LABEL_296:
              if ( this->fields.isFortification )
                *p_sortValue0 = -10LL;
              if ( v82 && sort->fields.isChoiceSort )
                *(_OWORD *)p_sortValue0 = xmmword_BD2260;
              goto LABEL_195;
            }
            if ( this->fields.isLimitCntTarget )
            {
              v88 = -20LL;
            }
            else if ( this->fields.isParty )
            {
              v88 = -30LL;
            }
            else if ( this->fields.isUseSupport )
            {
              v88 = -40LL;
            }
            else
            {
              v88 = -10LL;
              if ( this->fields.isUseRecommendSupport )
                v88 = -50LL;
            }
          }
LABEL_295:
          *p_sortValue0 = v88;
          goto LABEL_296;
        case 2:
          if ( this->fields.isSealCombineLimit )
          {
            v84 = 0LL;
            goto LABEL_192;
          }
          if ( !CombineServantListViewItem__get_IsCanNotBaseSelect(this, v36)
            && this->fields.isLimitUpItemNum
            && this->fields.isLvMax )
          {
LABEL_191:
            v84 = 10LL;
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
              j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, v36);
            if ( TutorialFlag__Get_38402052(126, 0LL) )
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
          if ( v82 && sort->fields.isChoiceSort || this->fields.isFortification )
            goto LABEL_124;
          goto LABEL_195;
        case 6:
          if ( !CombineServantListViewItem__get_IsCanNotBaseSelect(this, v36)
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
            j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, v36);
          if ( !TutorialFlag__Get_38402052(126, 0LL) )
            goto LABEL_193;
          goto LABEL_162;
        case 8:
          if ( !CombineServantListViewItem__get_IsCanNotBaseSelect(this, v36)
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
          if ( !CombineServantListViewItem__get_IsCanNotBaseSelect(this, v36) )
            goto LABEL_191;
          if ( this->fields.isHeroineSvt )
            goto LABEL_188;
          if ( this->fields.isSealCombineLimit )
          {
LABEL_169:
            v84 = -15LL;
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
              j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, v36);
            if ( TutorialFlag__Get_38402052(126, 0LL) )
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
              j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, v36);
            if ( TutorialFlag__Get_38402052(126, 0LL) )
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
            j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, v36);
          if ( TutorialFlag__Get_38402052(126, 0LL) )
          {
            v84 = -40LL;
          }
          else
          {
LABEL_309:
            if ( this->fields.isEventJoin )
            {
              v84 = -35LL;
            }
            else if ( this->fields.isAppendSkillLvMax )
            {
LABEL_269:
              v84 = -30LL;
            }
            else if ( this->fields.isAllAppendSkillLock )
            {
LABEL_162:
              v84 = -20LL;
            }
            else
            {
              if ( !this->fields.isAppendSkillLvSame )
              {
LABEL_193:
                if ( v82 && sort->fields.isChoiceSort )
                  this->fields.sortValue0B = 10LL;
                goto LABEL_195;
              }
LABEL_188:
              v84 = -10LL;
            }
          }
LABEL_192:
          *p_sortValue0 = v84;
          goto LABEL_193;
        default:
          goto LABEL_195;
      }
    }
    if ( CombineServantListViewItem__IsMatchServantFilter(this, sort, v79) )
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
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v36);
        iconLabelInfo2 = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventGroupMaster___);
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
              v65 = CombineServantListViewManager_TypeInfo;
              v66 = LOBYTE(CombineServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
              if ( LOBYTE(manager->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v66 )
              {
                if ( (CombineServantListViewManager_c *)manager->klass->_2.typeHierarchy[v66 - 1] == CombineServantListViewManager_TypeInfo )
                  v67 = sort->fields.manager;
                else
                  v67 = 0LL;
              }
              else
              {
                v67 = 0LL;
              }
              *(_QWORD *)(v34 + 24) = v67;
              v74 = (PartyOrganizationUtility_o *)(v34 + 24);
              if ( LOBYTE(manager->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v66 )
              {
                if ( (CombineServantListViewManager_c *)manager->klass->_2.typeHierarchy[v66 - 1] == v65 )
                  v73 = (int64_t)manager;
                else
                  v73 = 0LL;
              }
              else
              {
                v73 = 0LL;
              }
            }
            else
            {
              v73 = 0LL;
              *(_QWORD *)(v34 + 24) = 0LL;
              v74 = (PartyOrganizationUtility_o *)(v34 + 24);
            }
            sub_1BCA784(v74, v73, v58, v59, v60, v61, v62, v63);
            v78 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                   System_Func_EventGroupEntity__bool__TypeInfo,
                                                   v75,
                                                   v76,
                                                   v77);
            System_Func_object__bool____ctor(
              v78,
              (Il2CppObject *)v34,
              Method_CombineServantListViewItem___c__DisplayClass117_0__SetSortValue_b__0__,
              0LL);
            this->fields.isEventUpVal = BasicHelper__Any_object_(
                                          (System_Collections_Generic_List_T__o *)EntitiesByGroupId,
                                          (System_Func_T__bool__o *)v78,
                                          (const MethodInfo_2EFDC94 *)Method_BasicHelper_Any_EventGroupEntity___);
          }
        }
        goto LABEL_75;
      case 2:
        v46 = sort->fields.manager;
        if ( v46
          && (v47 = LOBYTE(CombineServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr),
              LOBYTE(v46->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v47) )
        {
          if ( (CombineServantListViewManager_c *)v46->klass->_2.typeHierarchy[v47 - 1] == CombineServantListViewManager_TypeInfo )
            v48 = (UnityEngine_Object_o *)sort->fields.manager;
          else
            v48 = 0LL;
        }
        else
        {
          v48 = 0LL;
        }
        if ( this->fields.bonusKind == 2 )
        {
          v68 = sort->fields.bonusKind2Id;
          if ( this->fields.bonusKindId == v68 )
            goto LABEL_75;
        }
        else
        {
          v68 = sort->fields.bonusKind2Id;
        }
        this->fields.bonusKindId = v68;
        this->fields.bonusKind = 2;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v36);
        iconLabelInfo2 = UnityEngine_Object__op_Implicit(v48, 0LL);
        if ( (iconLabelInfo2 & 1) != 0 )
        {
          if ( !v48 )
            goto LABEL_305;
          iconLabelInfo2 = CombineServantListViewManager__IsLargeSuccessCampaignClassId(
                             (CombineServantListViewManager_o *)v48,
                             this->fields.bonusKindId,
                             this->fields.svtId,
                             0LL);
          v69 = this->fields.userSvtEntity;
          this->fields.isEventUpVal = iconLabelInfo2 & 1;
          if ( !v69 )
            goto LABEL_305;
          v70 = *(_OWORD *)&v69->fields.id.fields.fakeValue;
          bonusKindId = this->fields.bonusKindId;
          *(_OWORD *)&v129.fields.currentCryptoKey = *(_OWORD *)&v69->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v129.fields.fakeValue = v70;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v36);
          v128 = v129;
          v72 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v128, 0LL);
          if ( CombineServantListViewManager__IsExchangeSvtExist(
                 (CombineServantListViewManager_o *)v48,
                 bonusKindId,
                 v72,
                 0LL) )
          {
            goto LABEL_76;
          }
        }
        goto LABEL_75;
      case 3:
        if ( this->fields.bonusKind == 3 )
        {
          v49 = sort->fields.bonusKind2Id;
          if ( this->fields.bonusKindId == v49 )
            goto LABEL_75;
        }
        else
        {
          v49 = sort->fields.bonusKind2Id;
        }
        this->fields.bonusKindId = v49;
        this->fields.bonusKind = 3;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v36);
        iconLabelInfo2 = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventCampaignMaster___);
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
          v44 = sort->fields.bonusKind2Id;
          if ( this->fields.bonusKindId == v44 )
            goto LABEL_75;
        }
        else
        {
          v44 = sort->fields.bonusKind2Id;
        }
        iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
        this->fields.bonusKind = bonusKind2;
        this->fields.bonusKindId = v44;
        if ( !iconLabelInfo2 )
          goto LABEL_305;
        IsEnableServant = UserServantEntity__getEventUpVal_40936552(
                            (UserServantEntity_o *)iconLabelInfo2,
                            this->fields.setupInfo,
                            v44,
                            0LL,
                            0LL);
        goto LABEL_37;
      case 7:
        if ( this->fields.bonusKind == 7 )
        {
          v50 = sort->fields.bonusKind2Id;
          if ( this->fields.bonusKindId == v50 )
          {
LABEL_75:
            if ( !this->fields.isEventUpVal )
              break;
            goto LABEL_76;
          }
        }
        else
        {
          v50 = sort->fields.bonusKind2Id;
        }
        this->fields.bonusKindId = v50;
        this->fields.bonusKind = 7;
        iconLabelInfo2 = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !iconLabelInfo2 )
          goto LABEL_305;
        MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)iconLabelInfo2,
                              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantFilterMaster___);
        svtId = this->fields.svtId;
        v55 = (ServantFilterMaster_o *)MasterData_object;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v53);
        v56 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(svtId, 0LL);
        v36 = *(const MethodInfo **)&v56.fields.fakeValue;
        iconLabelInfo2 = *(_QWORD *)&v56.fields.currentCryptoKey;
        if ( !v55 )
          goto LABEL_305;
        IsEnableServant = ServantFilterMaster__IsEnableServant(v55, v56, this->fields.bonusKindId, 0LL);
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
  __int64 v2; // x2
  System_String_o *NameText; // x0

  if ( (byte_4B19DA7 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_15393/*"UserSvt "*/, method, v2);
    byte_4B19DA7 = 1;
  }
  NameText = CombineServantListViewItem__get_NameText(this, method);
  return System_String__Concat_62401220((System_String_o *)StringLiteral_15393/*"UserSvt "*/, NameText, 0LL);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  struct ServantEntity_o *servantEntity; // x8
  int32_t cost; // w19

  if ( (byte_4B19DA3 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_19249/*"error"*/, v4, v5);
    byte_4B19DA3 = 1;
  }
  servantEntity = this->fields.servantEntity;
  if ( !servantEntity )
    return (System_String_o *)StringLiteral_19249/*"error"*/;
  cost = servantEntity->fields.cost;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
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
  __int64 v2; // x2

  if ( (byte_4B19DA4 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, method, v2);
    byte_4B19DA4 = 1;
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
    sub_1BCAA3C(0LL, method);
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
  __int64 v2; // x2
  int32_t type; // w8
  bool isEventJoin; // w0
  _BOOL4 v6; // w8
  _BOOL4 isSealCombineLimit; // w8
  _BOOL4 v8; // w9
  int32_t v9; // w8

  if ( (byte_4B19DA5 & 1) == 0 )
  {
    sub_1BCA7E0(&TutorialFlag_TypeInfo, method, v2);
    byte_4B19DA5 = 1;
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
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, method);
    if ( TutorialFlag__Get_38402052(126, 0LL) )
    {
      isEventJoin = 1;
    }
    else
    {
LABEL_81:
      v6 = this->fields.isLvMax
        || this->fields.isExpUpSvt
        || this->fields.isStatusUpSvt && !this->fields.isCanStUp
        || this->fields.isMaterialTdSvt;
      isEventJoin = v6;
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
          j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, method);
        v8 = TutorialFlag__Get_38402052(126, 0LL) || this->fields.isSkillLvMax;
        type = this->fields.type;
        isEventJoin = v8;
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
              j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, method);
            if ( TutorialFlag__Get_38402052(126, 0LL) )
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
  v9 = this->fields.type;
  if ( v9 == 10 )
  {
    if ( this->fields.isHeroineSvt )
    {
      if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, method);
      if ( TutorialFlag__Get_38402052(126, 0LL) )
        goto LABEL_54;
    }
    if ( this->fields.isCommandCardExceedMax )
LABEL_54:
      isEventJoin = 1;
    else
      isEventJoin = this->fields.isEventJoin;
    v9 = this->fields.type;
  }
  if ( v9 == 11 )
  {
    if ( this->fields.isAppendSkillLvMax || this->fields.isEventJoin )
      return 1;
    if ( !this->fields.isHeroineSvt )
      return 0;
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, method);
    isEventJoin = TutorialFlag__Get_38402052(126, 0LL);
    v9 = this->fields.type;
  }
  if ( v9 != 12 )
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
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, method);
  return TutorialFlag__Get_38402052(126, 0LL);
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
  __int64 v2; // x2
  unsigned int type; // w20
  bool CanNotSelectMaterial; // w0

  if ( (byte_4B19DA6 & 1) == 0 )
  {
    sub_1BCA7E0(&TutorialFlag_TypeInfo, method, v2);
    byte_4B19DA6 = 1;
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
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, method);
    if ( TutorialFlag__Get_38402052(126, 0LL) )
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
    sub_1BCAA3C(v6, v5);
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
    sub_1BCAA3C(0LL, method);
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
    sub_1BCAA3C(0LL, method);
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
    sub_1BCAA3C(0LL, method);
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
    sub_1BCAA3C(0LL, method);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  struct UserServantEntity_o *userSvtEntity; // x8
  int32_t lv; // w19

  if ( (byte_4B19DA1 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_19249/*"error"*/, v4, v5);
    byte_4B19DA1 = 1;
  }
  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    return (System_String_o *)StringLiteral_19249/*"error"*/;
  lv = userSvtEntity->fields.lv;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
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
  __int64 v2; // x2
  CombineServantListViewItem_o *v3; // x20
  __int64 v4; // x1
  __int64 v5; // x2
  ServantEntity_o *servantEntity; // x19
  struct UserServantEntity_o *userSvtEntity; // x8
  __int64 v8; // x20
  __int64 v9; // x21
  int32_t v10; // w1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16

  v3 = this;
  if ( (byte_4B19DA0 & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method, v2);
    this = (CombineServantListViewItem_o *)sub_1BCA7E0(&StringLiteral_19249/*"error"*/, v4, v5);
    byte_4B19DA0 = 1;
  }
  servantEntity = v3->fields.servantEntity;
  if ( !servantEntity )
    return (System_String_o *)StringLiteral_19249/*"error"*/;
  userSvtEntity = v3->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_1BCAA3C(this, method);
  v9 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.currentCryptoKey;
  v8 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
  *(_QWORD *)&v12.fields.currentCryptoKey = v9;
  *(_QWORD *)&v12.fields.fakeValue = v8;
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v12, 0LL);
  return ServantEntity__getName(servantEntity, v10, -1, 0LL);
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
  __int64 v2; // x2
  int32_t rarity; // w19

  if ( (byte_4B19DA2 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    byte_4B19DA2 = 1;
  }
  rarity = this->fields.rarity;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Master_object; // x0
  __int64 v9; // x1
  Il2CppObject *Entity; // x0

  if ( (byte_4B19DA8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_SvtCoinMaster___, method, v2);
    sub_1BCA7E0(&DataManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__GetEntity__, v6, v7);
    byte_4B19DA8 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_SvtCoinMaster___);
  if ( !Master_object )
    sub_1BCAA3C(0LL, v9);
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             this->fields.svtId,
             (const MethodInfo_31B2E40 *)Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__GetEntity__);
  if ( Entity )
    return (int32_t)Entity[1].monitor;
  else
    return -1;
}


int32_t __fastcall CombineServantListViewItem__get_SkillOpenItemNum(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  int64_t Master_object; // x0
  __int64 v11; // x1
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v13; // q1
  UserSvtCoinMaster_o *v14; // x20
  struct UserServantEntity_o *v15; // x8
  int64_t v16; // x19
  __int64 v17; // x21
  __int64 v18; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v20; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v21; // [xsp+20h] [xbp-50h]
  UserSvtCoinEntity_o *entity; // [xsp+48h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  if ( (byte_4B19DA9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserSvtCoinMaster___, method, v2);
    sub_1BCA7E0(&DataManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6, v7);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8, v9);
    byte_4B19DA9 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserSvtCoinMaster___);
  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_17;
  v13 = *(_OWORD *)&userSvtEntity->fields.userId.fields.fakeValue;
  v14 = (UserSvtCoinMaster_o *)Master_object;
  *(_OWORD *)&v21.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v21.fields.fakeValue = v13;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v11);
  v20 = v21;
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v20, 0LL);
  v15 = this->fields.userSvtEntity;
  if ( !v15 )
    goto LABEL_17;
  v16 = Master_object;
  v18 = *(_QWORD *)&v15->fields.svtId.fields.currentCryptoKey;
  v17 = *(_QWORD *)&v15->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
  *(_QWORD *)&v23.fields.currentCryptoKey = v18;
  *(_QWORD *)&v23.fields.fakeValue = v17;
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v23, 0LL);
  if ( !v14 )
    goto LABEL_17;
  Master_object = UserSvtCoinMaster__TryGetEntity(v14, &entity, v16, Master_object, 0LL);
  if ( (Master_object & 1) != 0 )
  {
    if ( entity )
      return entity->fields.num;
LABEL_17:
    sub_1BCAA3C(Master_object, v11);
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
  __int64 v2; // x2
  CombineServantListViewItem_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  struct UserServantEntity_o *v10; // x8
  PartyOrganizationUtility_o *p_userSvtEntity; // x19
  struct UserServantEntity_o *userSvtEntity; // t1
  __int128 v13; // q1
  int64_t v14; // x20
  Il2CppObject *Entity; // x20
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v23; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v24; // [xsp+20h] [xbp-40h]

  v3 = this;
  if ( (byte_4B19D9E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, method, v2);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v4, v5);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v6, v7);
    this = (CombineServantListViewItem_o *)sub_1BCA7E0(
                                             &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                             v8,
                                             v9);
    byte_4B19D9E = 1;
  }
  userSvtEntity = v3->fields.userSvtEntity;
  p_userSvtEntity = (PartyOrganizationUtility_o *)&v3->fields.userSvtEntity;
  v10 = userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_9;
  v13 = *(_OWORD *)&v10->fields.id.fields.fakeValue;
  *(_OWORD *)&v24.fields.currentCryptoKey = *(_OWORD *)&v10->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v24.fields.fakeValue = v13;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
  v23 = v24;
  v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v23, 0LL);
  this = (CombineServantListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (this = (CombineServantListViewItem_o *)DataManager__GetMasterData_object_(
                                                 (DataManager_o *)this,
                                                 (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
  {
LABEL_9:
    sub_1BCAA3C(this, method);
  }
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             v14,
             (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  p_userSvtEntity->klass = (PartyOrganizationUtility_c *)Entity;
  sub_1BCA784(p_userSvtEntity, (int64_t)Entity, v16, v17, v18, v19, v20, v21);
  return (UserServantEntity_o *)Entity;
}


int64_t __fastcall CombineServantListViewItem__get_UserSvtId(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  CombineServantListViewItem_o *v3; // x19
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v5; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v8; // [xsp+20h] [xbp-40h]

  v3 = this;
  if ( (byte_4B19D9F & 1) == 0 )
  {
    this = (CombineServantListViewItem_o *)sub_1BCA7E0(
                                             &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
                                             method,
                                             v2);
    byte_4B19D9F = 1;
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


void __fastcall CombineServantListViewItem__set_DragSelectNum(
        CombineServantListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields.dragSelectNum = value;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineServantListViewItem__set_IsAtkStatusMax(
        CombineServantListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  if ( !this )
    sub_1BCAA3C(0LL, value);
  this->fields.isNotSelectStatusUpAtk = this->fields.atkBase > 0 && value;
}


void __fastcall CombineServantListViewItem__set_IsCanNotLock(
        CombineServantListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields.isCanNotLock = value;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineServantListViewItem__set_IsDragSelect(
        CombineServantListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  if ( !this )
    sub_1BCAA3C(0LL, value);
  this->fields.dragSelectNum = value - 1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineServantListViewItem__set_IsHpStatusMax(
        CombineServantListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  if ( !this )
    sub_1BCAA3C(0LL, value);
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


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineServantListViewItem__set_IsSecondAtkStatusMax(
        CombineServantListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  if ( !this )
    sub_1BCAA3C(0LL, value);
  this->fields.isNotSelectSecondStatusUpAtk = this->fields.atkBase > 0 && value;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineServantListViewItem__set_IsSecondHpStatusMax(
        CombineServantListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  if ( !this )
    sub_1BCAA3C(0LL, value);
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
  sub_1BCA784(
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
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B19DAD & 1) == 0 )
  {
    sub_1BCA7E0(&CombineServantListViewItem___c_TypeInfo, v1, v2);
    byte_4B19DAD = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(CombineServantListViewItem___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  CombineServantListViewItem___c_TypeInfo->static_fields->__9 = (struct CombineServantListViewItem___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)CombineServantListViewItem___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, 0LL);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  UnityEngine_Object_o *manager; // x21
  int64_t IsLargeSuccessCampaignClassId; // x0
  __int64 v17; // x1
  const MethodInfo *v18; // x3
  struct CombineServantListViewItem_o *_4__this; // x8
  struct CombineServantListViewItem_o *v20; // x8
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v22; // q1
  struct CombineServantListViewManager_o *v23; // x22
  int32_t eventId; // w21
  const MethodInfo *v25; // x3
  struct CombineServantListViewItem_o *v26; // x8
  __int64 v27; // x1
  struct CombineServantListViewItem_o *v28; // x8
  ServantFilterMaster_o *v29; // x21
  int32_t svtId; // w22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v31; // kr00_16
  struct CombineServantListViewItem_o *v34; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v35; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v36; // [xsp+20h] [xbp-50h]

  if ( (byte_4B19DAE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventCampaignMaster___, entity, method);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantFilterMaster___, v5, v6);
    sub_1BCA7E0(&DataManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v9, v10);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11, v12);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13, v14);
    byte_4B19DAE = 1;
  }
  manager = (UnityEngine_Object_o *)this->fields.manager;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, entity);
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
                                    v18);
  if ( (IsLargeSuccessCampaignClassId & 1) == 0 )
  {
    v20 = this->fields.__4__this;
    if ( !v20 )
      goto LABEL_34;
    userSvtEntity = v20->fields.userSvtEntity;
    if ( !userSvtEntity )
      goto LABEL_34;
    v22 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
    v23 = this->fields.manager;
    eventId = entity->fields.eventId;
    *(_OWORD *)&v36.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v36.fields.fakeValue = v22;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v17);
    v35 = v36;
    IsLargeSuccessCampaignClassId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v35, 0LL);
    if ( !v23 )
      goto LABEL_34;
    if ( !CombineServantListViewManager__IsExchangeSvtExist(
            (CombineServantListViewManager_o *)IsLargeSuccessCampaignClassId,
            eventId,
            IsLargeSuccessCampaignClassId,
            v25) )
    {
LABEL_37:
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v17);
      IsLargeSuccessCampaignClassId = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventCampaignMaster___);
      v26 = this->fields.__4__this;
      if ( !v26 || !entity || !IsLargeSuccessCampaignClassId )
        goto LABEL_34;
      if ( !EventCampaignMaster__IsEnableServant(
              (EventCampaignMaster_o *)IsLargeSuccessCampaignClassId,
              v26->fields.svtId,
              entity->fields.eventId,
              0LL) )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v27);
        IsLargeSuccessCampaignClassId = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantFilterMaster___);
        v28 = this->fields.__4__this;
        if ( v28 )
        {
          v29 = (ServantFilterMaster_o *)IsLargeSuccessCampaignClassId;
          svtId = v28->fields.svtId;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17);
          v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(svtId, 0LL);
          v17 = *(_QWORD *)&v31.fields.fakeValue;
          IsLargeSuccessCampaignClassId = *(_QWORD *)&v31.fields.currentCryptoKey;
          if ( v29 )
          {
            IsLargeSuccessCampaignClassId = ServantFilterMaster__IsEnableServant(v29, v31, entity->fields.eventId, 0LL);
            if ( (IsLargeSuccessCampaignClassId & 1) != 0 )
              return 1;
            v34 = this->fields.__4__this;
            if ( v34 )
            {
              IsLargeSuccessCampaignClassId = (int64_t)v34->fields.userSvtEntity;
              if ( IsLargeSuccessCampaignClassId )
                return UserServantEntity__getEventUpVal_40936552(
                         (UserServantEntity_o *)IsLargeSuccessCampaignClassId,
                         v34->fields.setupInfo,
                         entity->fields.eventId,
                         0LL,
                         0LL);
            }
          }
        }
LABEL_34:
        sub_1BCAA3C(IsLargeSuccessCampaignClassId, v17);
      }
    }
  }
  return 1;
}