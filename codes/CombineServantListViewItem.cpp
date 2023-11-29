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
  IconLabelInfo_o *v54; // x21
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x3
  __int64 v64; // x4
  IconLabelInfo_o *v65; // x21
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  __int64 v72; // x1
  __int64 v73; // x2
  __int64 v74; // x3
  __int64 v75; // x4
  System_Collections_Generic_List_int__o *v76; // x21
  System_String_array **v77; // x2
  System_String_array **v78; // x3
  System_Boolean_array **v79; // x4
  System_Int32_array **v80; // x5
  System_Int32_array *v81; // x6
  System_Int32_array *v82; // x7
  __int64 v83; // x1
  __int64 v84; // x2
  __int64 v85; // x3
  __int64 v86; // x4
  System_Collections_Generic_List_int__o *v87; // x21
  System_String_array **v88; // x2
  System_String_array **v89; // x3
  System_Boolean_array **v90; // x4
  System_Int32_array **v91; // x5
  System_Int32_array *v92; // x6
  System_Int32_array *v93; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_userSvtEntity; // x21
  System_String_array **v95; // x2
  System_String_array **v96; // x3
  System_Boolean_array **v97; // x4
  System_Int32_array **v98; // x5
  System_Int32_array *v99; // x6
  System_Int32_array *v100; // x7
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v103; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v104; // x20
  __int64 v105; // x24
  __int64 v106; // x25
  int32_t v107; // w0
  struct ServantEntity_o *v108; // x0
  System_String_array **v109; // x2
  System_String_array **v110; // x3
  System_Boolean_array **v111; // x4
  System_Int32_array **v112; // x5
  System_Int32_array *v113; // x6
  System_Int32_array *v114; // x7
  System_String_array **v115; // x2
  System_String_array **v116; // x3
  System_Boolean_array **v117; // x4
  System_Int32_array **v118; // x5
  System_Int32_array *v119; // x6
  System_Int32_array *v120; // x7
  struct UserServantEntity_o *v121; // x8
  int32_t v122; // w0
  struct ServantEntity_o *servantEntity; // x8
  WebViewManager_o *v124; // x0
  WebViewManager_o *v125; // x0
  WarQuestSelectionMaster_o *v126; // x0
  ServantLimitMaster_o *v127; // x20
  int32_t v128; // w0
  int32_t v129; // w25
  int32_t v130; // w0
  ServantLimitEntity_o *v131; // x0
  ServantLimitEntity_o *v132; // x24
  WebViewManager_o *v133; // x0
  WarQuestSelectionMaster_o *v134; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v135; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v136; // q1
  UserServantCollectionMaster_o *v137; // x20
  int64_t v138; // x0
  int64_t v139; // x25
  int32_t v140; // w0
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  UserServantCollectionEntity_o *v142; // x23
  UserGameEntity_o *SelfUserGame; // x0
  int qp; // w8
  bool *p_isStatusUpSvt; // x28
  UserGameEntity_o *v146; // x22
  UserServantEntity_o *v147; // x0
  int32_t LimitCntMax; // w0
  struct UserServantEntity_o *v149; // x8
  struct UserServantEntity_o *v150; // x0
  int32_t adjustHp; // w20
  BalanceConfig_c *v152; // x8
  struct UserServantEntity_o *v153; // x8
  __int128 v154; // q0
  int64_t pushUserSvtId; // x20
  const MethodInfo *v156; // x1
  int64_t UserSvtId; // x0
  unsigned int v158; // w8
  UserServantEntity_o *v159; // x0
  bool IsLock; // w0
  UserServantEntity_o *v161; // x8
  WebViewManager_o *v162; // x0
  WarQuestSelectionMaster_o *v163; // x0
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v167; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v170; // x8
  unsigned __int64 v171; // x10
  int32_t *v172; // x11
  __int64 v173; // x0
  _QWORD *v174; // x0
  __int64 v175; // x9
  UserServantEntity_o *v176; // x8
  __int128 v177; // q0
  __int64 v178; // x22
  System_Collections_Generic_IEnumerator_T__c *v179; // x8
  unsigned __int64 v180; // x10
  int32_t *v181; // x11
  __int64 v182; // x0
  bool IsEventJoin; // w0
  UserServantEntity_o *v184; // x8
  UserServantEntity_o *v185; // x8
  __int128 v186; // q0
  int64_t v187; // x0
  __int128 v188; // q0
  WebViewManager_o *v189; // x0
  UserServantCommandCodeMaster_o *v190; // x20
  int64_t UserId; // x0
  ServantEntity_o *v192; // x8
  int64_t v193; // x25
  __int64 v194; // x23
  __int64 v195; // x26
  int32_t v196; // w0
  int32_t v197; // w8
  WebViewManager_o *v198; // x0
  UserServantCommandCardMaster_o *v199; // x20
  int64_t v200; // x0
  ServantEntity_o *v201; // x8
  int64_t v202; // x25
  __int64 v203; // x23
  __int64 v204; // x26
  int32_t v205; // w0
  UserItemMaster_o *v206; // x0
  __int64 v207; // x1
  __int64 v208; // x2
  struct System_Int32_array *commandCardParam; // x20
  int max_length; // w8
  __int64 v211; // x22
  int32_t v212; // w25
  WebViewManager_o *v213; // x0
  WarQuestSelectionMaster_o *v214; // x0
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v215; // x0
  System_Collections_Generic_IEnumerator_T__o *v216; // x20
  System_Collections_Generic_IEnumerator_T__c *v217; // x8
  unsigned __int64 v218; // x10
  int32_t *v219; // x11
  __int64 v220; // x0
  System_Collections_Generic_IEnumerator_T__c *v221; // x8
  unsigned __int64 v222; // x10
  int32_t *v223; // x11
  __int64 v224; // x0
  _QWORD *v225; // x0
  __int64 v226; // x9
  UserServantEntity_o *v227; // x8
  __int128 v228; // q0
  __int64 v229; // x22
  System_Collections_Generic_IEnumerator_T__c *v230; // x8
  unsigned __int64 v231; // x10
  int32_t *v232; // x11
  __int64 v233; // x0
  WebViewManager_o *v234; // x0
  CombineMaterialMaster_o *v235; // x0
  CombineMaterialEntity_o *v236; // x0
  UserServantEntity_o *v237; // x8
  __int64 v238; // x20
  __int64 v239; // x23
  int32_t v240; // w20
  struct UserServantEntity_o *v241; // x8
  __int128 v242; // q0
  int64_t v243; // x0
  __int128 v244; // q0
  int32_t SvtClassId; // w20
  WebViewManager_o *v246; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v247; // x0
  WarEntity_o *v248; // x0
  int32_t v249; // w0
  int32_t SvtClassGroupType; // w20
  int32_t materialExp; // w20
  BalanceConfig_c *v252; // x0
  int SameClassExp; // w22
  double v254; // d0
  int32_t classId; // w20
  UserServantEntity_o *v256; // x0
  bool v257; // w0
  UserServantEntity_o *v258; // x8
  UserServantEntity_o *v259; // x0
  int32_t v260; // w20
  WebViewManager_o *v261; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v262; // x0
  WarEntity_o *v263; // x0
  bool v264; // w8
  bool v265; // w8
  bool v266; // w8
  bool v267; // w8
  WebViewManager_o *v268; // x0
  UserServantCommandCodeMaster_o *v269; // x20
  int64_t v270; // x0
  ServantEntity_o *v271; // x8
  int64_t v272; // x25
  __int64 v273; // x23
  __int64 v274; // x26
  int32_t v275; // w0
  int32_t v276; // w8
  bool v277; // w28
  bool v278; // w0
  UserServantEntity_o *v279; // x8
  bool v280; // w8
  UserServantEntity_o *v281; // x0
  bool v282; // w0
  UserServantEntity_o *v283; // x8
  const MethodInfo *v284; // x1
  UserServantEntity_o *v285; // x8
  __int128 v286; // q0
  int64_t v287; // x0
  __int128 v288; // q0
  UserServantEntity_o *v289; // x9
  int32_t combineLimitId; // w20
  __int64 v291; // x23
  __int64 v292; // x25
  int32_t v293; // w25
  WebViewManager_o *v294; // x0
  CombineLimitMaster_o *v295; // x0
  CombineLimitEntity_o *v296; // x0
  struct System_Int32_array *itemNums; // x23
  struct System_Int32_array *itemIds; // x26
  UserServantEntity_o *v299; // x20
  WebViewManager_o *v300; // x0
  __int64 v301; // x8
  UserItemMaster_o *v302; // x27
  unsigned __int64 i; // x28
  UserServantEntity_o *v304; // x8
  __int128 v305; // q1
  int32_t v306; // w25
  int32_t v307; // w20
  int64_t v308; // x0
  bool isLimitCountMax; // w0
  UserServantEntity_o *v310; // x8
  bool isLevelMax; // w8
  UserServantEntity_o *v312; // x0
  bool v313; // w0
  UserServantEntity_o *v314; // x8
  bool v315; // w0
  UserServantEntity_o *v316; // x8
  const MethodInfo *v317; // x1
  UserServantEntity_o *v318; // x8
  __int128 v319; // q0
  int64_t v320; // x0
  __int128 v321; // q0
  UserServantEntity_o *v322; // x0
  bool v323; // w0
  UserServantEntity_o *v324; // x8
  UserServantEntity_o *v325; // x8
  __int128 v326; // q0
  int64_t v327; // x0
  __int128 v328; // q0
  const MethodInfo *v329; // x1
  UserServantEntity_o *v330; // x0
  bool v331; // w0
  UserServantEntity_o *v332; // x8
  UserServantEntity_o *v333; // x8
  __int128 v334; // q0
  int64_t v335; // x0
  __int128 v336; // q0
  int id; // w20
  int32_t lv; // w22
  WebViewManager_o *v339; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v340; // x0
  WarEntity_o *v341; // x0
  int32_t SameSvtNpLvCache; // w0
  const MethodInfo *v343; // x4
  int32_t v344; // w20
  char v345; // w8
  int32_t v346; // w0
  int32_t v347; // w20
  int32_t v348; // w27
  int32_t v349; // w25
  int v350; // w22
  WebViewManager_o *v351; // x0
  TreasureDvcLvMaster_o *v352; // x0
  TreasureDvcLvEntity_o *v353; // x0
  WebViewManager_o *v354; // x0
  WarQuestSelectionMaster_o *v355; // x0
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v356; // x0
  System_Collections_Generic_IEnumerator_T__o *v357; // x20
  System_Collections_Generic_IEnumerator_T__c *v358; // x8
  unsigned __int64 v359; // x10
  int32_t *v360; // x11
  __int64 v361; // x0
  System_Collections_Generic_IEnumerator_T__c *v362; // x8
  unsigned __int64 v363; // x10
  int32_t *v364; // x11
  __int64 v365; // x0
  _QWORD *v366; // x0
  __int64 v367; // x9
  UserServantEntity_o *v368; // x8
  __int128 v369; // q0
  __int64 v370; // x22
  System_Collections_Generic_IEnumerator_T__c *v371; // x8
  unsigned __int64 v372; // x10
  int32_t *v373; // x11
  __int64 v374; // x0
  UserServantEntity_o *v375; // x0
  bool v376; // w0
  UserServantEntity_o *v377; // x8
  bool v378; // w8
  UserServantEntity_o *v379; // x0
  UserServantEntity_o *v380; // x8
  __int128 v381; // q0
  int64_t v382; // x0
  __int128 v383; // q0
  int32_t v384; // w8
  bool isExceedLvMax; // w0
  UserServantEntity_o *v386; // x8
  bool v387; // w0
  UserServantEntity_o *v388; // x8
  bool v389; // w8
  UserServantEntity_o *v390; // x0
  bool v391; // w0
  UserServantEntity_o *v392; // x8
  UserServantEntity_o *v393; // x8
  __int128 v394; // q0
  int64_t v395; // x0
  __int128 v396; // q0
  ServantExceedEntity_o *SvtExceedEnt; // x0
  int32_t *v398; // x20
  CommonConsumeMaster_o *Master_WarQuestSelectionMaster; // x0
  CommonConsumeEntity_array *IdEntityList; // x0
  __int64 v401; // x1
  __int64 v402; // x2
  __int64 v403; // x3
  __int64 v404; // x4
  CommonConsumeEntity_array *v405; // x25
  System_Collections_Generic_HashSet_int__o *v406; // x27
  __int64 v407; // x1
  __int64 v408; // x2
  __int64 v409; // x3
  __int64 v410; // x4
  System_Collections_Generic_HashSet_int__o *v411; // x28
  int64_t v412; // x0
  __int64 v413; // x1
  __int64 v414; // x2
  int v415; // w8
  __int64 v416; // x22
  CommonConsumeEntity_o *v417; // x23
  WarQuestSelectionMaster_o *v418; // x0
  UserServantEntity_o *v419; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v420; // x25
  __int64 v421; // x23
  __int64 v422; // x26
  int32_t v423; // w0
  WarEntity_o *v424; // x0
  UserServantEntity_o *v425; // x23
  System_Int32_array *v426; // x25
  System_Int32_array *v427; // x0
  __int64 v428; // x20
  __int64 v429; // x25
  int32_t v430; // w0
  int32_t maxFriendshipRank; // w9
  int32_t friendshipExceedCount; // w10
  UserServantEntity_o *v433; // x8
  bool v434; // w0
  UserServantEntity_o *v435; // x8
  UserServantEntity_o *v436; // x8
  __int128 v437; // q0
  int64_t v438; // x0
  __int128 v439; // q0
  int32_t v440; // w20
  int32_t v441; // w22
  WebViewManager_o *v442; // x0
  FriendshipMaster_o *v443; // x0
  FriendshipEntity_o *v444; // x0
  FriendshipEntity_o *v445; // x20
  struct System_Int32_array *v446; // x23
  struct System_Int32_array *v447; // x24
  WebViewManager_o *v448; // x0
  WarQuestSelectionMaster_o *v449; // x0
  UserItemMaster_o *v450; // x22
  unsigned __int64 v451; // x25
  int32_t *v452; // x26
  bool v453; // w8
  int32_t DispLimitCount; // w0
  UserServantEntity_o *v455; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  System_String_array **v457; // x2
  System_String_array **v458; // x3
  System_Boolean_array **v459; // x4
  System_Int32_array **v460; // x5
  System_Int32_array *v461; // x6
  System_Int32_array *v462; // x7
  UserServantEntity_o *v463; // x0
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  System_String_array **v465; // x2
  System_String_array **v466; // x3
  System_Boolean_array **v467; // x4
  System_Int32_array **v468; // x5
  System_Int32_array *v469; // x6
  System_Int32_array *v470; // x7
  WebViewManager_o *v471; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v472; // x0
  WarEntity_o *v473; // x0
  int64_t bannerId; // x8
  struct ServantEntity_o *v475; // x9
  UserServantEntity_o *v476; // x8
  __int64 v477; // x20
  __int64 v478; // x21
  int32_t v479; // w8
  IconLabelInfo_o *iconLabelInfo1; // x0
  int v481; // [xsp+Ch] [xbp-444h]
  UserServantMaster_o *v482; // [xsp+10h] [xbp-440h]
  UserGameEntity_o *v483; // [xsp+18h] [xbp-438h]
  bool *p_isLimitUpItemNum; // [xsp+28h] [xbp-428h]
  IconLabelInfo_o **p_iconLabelInfo2; // [xsp+30h] [xbp-420h]
  UserServantCollectionEntity_o *v488; // [xsp+40h] [xbp-410h]
  UserServantEntity_o *v489; // [xsp+48h] [xbp-408h]
  UserServantEntity_o *v491; // [xsp+50h] [xbp-400h]
  bool v492; // [xsp+5Ch] [xbp-3F4h]
  bool *p_isChoice; // [xsp+60h] [xbp-3F0h]
  ServantEntity_o **p_servantEntity; // [xsp+68h] [xbp-3E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v495; // [xsp+70h] [xbp-3E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v496; // [xsp+90h] [xbp-3C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v497; // [xsp+B0h] [xbp-3A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v498; // [xsp+D0h] [xbp-380h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v499; // [xsp+F0h] [xbp-360h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v500; // [xsp+110h] [xbp-340h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v501; // [xsp+130h] [xbp-320h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v502; // [xsp+150h] [xbp-300h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v503; // [xsp+170h] [xbp-2E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v504; // [xsp+190h] [xbp-2C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v505; // [xsp+1B0h] [xbp-2A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v506; // [xsp+1D0h] [xbp-280h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v507; // [xsp+1F0h] [xbp-260h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v508; // [xsp+210h] [xbp-240h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v509; // [xsp+230h] [xbp-220h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v510; // [xsp+250h] [xbp-200h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v511; // [xsp+270h] [xbp-1E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v512; // [xsp+290h] [xbp-1C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v513; // [xsp+2B0h] [xbp-1A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v514; // [xsp+2D0h] [xbp-180h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v515; // [xsp+2F0h] [xbp-160h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v516; // [xsp+310h] [xbp-140h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v517; // [xsp+330h] [xbp-120h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v518; // [xsp+350h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v519; // [xsp+370h] [xbp-E0h]
  _DWORD v520[6]; // [xsp+390h] [xbp-C0h]
  int v521; // [xsp+3A8h] [xbp-A8h]
  UserItemEntity_o *v522; // [xsp+3B0h] [xbp-A0h] BYREF
  int32_t tdMaxLv; // [xsp+3BCh] [xbp-94h] BYREF
  int32_t tdLv[2]; // [xsp+3C0h] [xbp-90h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+3C8h] [xbp-88h] BYREF
  UserItemEntity_o *v526; // [xsp+3D0h] [xbp-80h] BYREF
  __int64 v527; // [xsp+3D8h] [xbp-78h] BYREF
  UserServantCommandCodeEntity_o *v528; // [xsp+3E0h] [xbp-70h] BYREF
  UserServantCommandCardEntity_o *v529; // [xsp+3E8h] [xbp-68h] BYREF
  UserServantCommandCodeEntity_o *entity; // [xsp+3F0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v531; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v532; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v533; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v534; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v535; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v536; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v537; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v538; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v539; // 0:x0.16

  if ( (byte_40FC912 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, *(_QWORD *)&type);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v16);
    sub_B16FFC(&Method_DataManager_GetMasterData_CombineLimitMaster___, v17);
    sub_B16FFC(&Method_DataManager_GetMasterData_CombineMaterialMaster___, v18);
    sub_B16FFC(&Method_DataManager_GetMasterData_FriendshipMaster___, v19);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantClassMaster___, v20);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitMaster___, v21);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v22);
    sub_B16FFC(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___, v23);
    sub_B16FFC(&Method_DataManager_GetMasterData_TreasureDvcMaster___, v24);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserItemMaster___, v25);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v26);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantCommandCardMaster___, v27);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___, v28);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantLeaderMaster___, v29);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, v30);
    sub_B16FFC(&Method_DataManager_GetMaster_CommonConsumeMaster___, v31);
    sub_B16FFC(&Method_DataManager_GetMaster_SvtCoinMaster___, v32);
    sub_B16FFC(&DataManager_TypeInfo, v33);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v34);
    sub_B16FFC(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v35);
    sub_B16FFC(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__, v36);
    sub_B16FFC(&Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__GetEntity__, v37);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_int___, v38);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_int__Add__, v39);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_int___ctor___66713944, v40);
    sub_B16FFC(&System_Collections_Generic_HashSet_int__TypeInfo, v41);
    sub_B16FFC(&System_IDisposable_TypeInfo, v42);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v43);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v44);
    sub_B16FFC(&IconLabelInfo_TypeInfo, v45);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v46);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v47);
    sub_B16FFC(&System_Math_TypeInfo, v48);
    sub_B16FFC(&NetworkManager_TypeInfo, v49);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v50);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v51);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v52);
    sub_B16FFC(&UserServantLeaderEntity_TypeInfo, v53);
    byte_40FC912 = 1;
  }
  v529 = 0LL;
  entity = 0LL;
  v527 = 0LL;
  v528 = 0LL;
  tdInfo = 0LL;
  v526 = 0LL;
  *(_QWORD *)tdLv = 0LL;
  tdMaxLv = 0;
  v522 = 0LL;
  v521 = 0;
  v54 = (IconLabelInfo_o *)sub_B170CC(
                             IconLabelInfo_TypeInfo,
                             *(_QWORD *)&type,
                             *(_QWORD *)&index,
                             userSvtEntity,
                             isFavorite);
  IconLabelInfo___ctor(v54, 0LL);
  this->fields.iconLabelInfo1 = v54;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo1,
    (System_Int32_array **)v54,
    v55,
    v56,
    v57,
    v58,
    v59,
    v60);
  v65 = (IconLabelInfo_o *)sub_B170CC(IconLabelInfo_TypeInfo, v61, v62, v63, v64);
  IconLabelInfo___ctor(v65, 0LL);
  this->fields.iconLabelInfo2 = v65;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo2,
    (System_Int32_array **)v65,
    v66,
    v67,
    v68,
    v69,
    v70,
    v71);
  v76 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v72,
                                                    v73,
                                                    v74,
                                                    v75);
  System_Collections_Generic_List_int____ctor(
    v76,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.enableSkillUp = v76;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.enableSkillUp,
    (System_Int32_array **)v76,
    v77,
    v78,
    v79,
    v80,
    v81,
    v82);
  v87 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v83,
                                                    v84,
                                                    v85,
                                                    v86);
  System_Collections_Generic_List_int____ctor(
    v87,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.enableAppendSkillUp = v87;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.enableAppendSkillUp,
    (System_Int32_array **)v87,
    v88,
    v89,
    v90,
    v91,
    v92,
    v93);
  ListViewItem___ctor((ListViewItem_o *)this, 0LL);
  this->fields.userSvtEntity = userSvtEntity;
  p_userSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userSvtEntity;
  this->fields.type = type;
  this->fields.index = index;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.userSvtEntity,
    (System_Int32_array **)userSvtEntity,
    v95,
    v96,
    v97,
    v98,
    v99,
    v100);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_544;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  v103 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_544;
  v104 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  v106 = *(_QWORD *)&v103[5].fields.currentCryptoKey;
  v105 = *(_QWORD *)&v103[5].fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v531.fields.currentCryptoKey = v106;
  *(_QWORD *)&v531.fields.fakeValue = v105;
  v107 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v531, 0LL);
  if ( !v104 )
    goto LABEL_544;
  v108 = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                     v104,
                                     v107,
                                     (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = v108;
  p_servantEntity = &this->fields.servantEntity;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.servantEntity,
    (System_Int32_array **)v108,
    v109,
    v110,
    v111,
    v112,
    v113,
    v114);
  this->fields.setupInfo = setupInfo;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.setupInfo,
    (System_Int32_array **)setupInfo,
    v115,
    v116,
    v117,
    v118,
    v119,
    v120);
  v121 = this->fields.userSvtEntity;
  this->fields.isEventUpVal = 0;
  *(_QWORD *)&this->fields.bonusKind = 0LL;
  if ( !v121 )
    goto LABEL_544;
  v122 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v121->fields.svtId, 0LL);
  servantEntity = this->fields.servantEntity;
  this->fields.svtId = v122;
  if ( !servantEntity )
    goto LABEL_544;
  this->fields.classId = servantEntity->fields.classId;
  v124 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v124 )
    goto LABEL_544;
  v482 = (UserServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)v124,
                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
  v125 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v125 )
    goto LABEL_544;
  v126 = DataManager__GetMasterData_WarQuestSelectionMaster_(
           (DataManager_o *)v125,
           (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtEntity )
    goto LABEL_544;
  v127 = (ServantLimitMaster_o *)v126;
  v128 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536((*p_userSvtEntity)[5], 0LL);
  if ( !*p_userSvtEntity )
    goto LABEL_544;
  v129 = v128;
  v130 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536((*p_userSvtEntity)[6], 0LL);
  if ( !v127 )
    goto LABEL_544;
  v131 = ServantLimitMaster__GetEntity(v127, v129, v130, 0LL);
  if ( !v131 )
    goto LABEL_544;
  v132 = v131;
  this->fields.rarity = v131->fields.rarity;
  v133 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v133 )
    goto LABEL_544;
  v134 = DataManager__GetMasterData_WarQuestSelectionMaster_(
           (DataManager_o *)v133,
           (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v135 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_544;
  v136 = v135[4];
  v137 = (UserServantCollectionMaster_o *)v134;
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v519.fields.currentCryptoKey = v135[3];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v519.fields.fakeValue = v136;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v518 = v519;
  v138 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v518, 0LL);
  if ( !*p_userSvtEntity )
    goto LABEL_544;
  v139 = v138;
  v140 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536((*p_userSvtEntity)[5], 0LL);
  if ( !v137 )
    goto LABEL_544;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v137, v139, v140, 0LL);
  if ( !EntityDefinitely )
    goto LABEL_544;
  v142 = EntityDefinitely;
  v492 = isParty;
  UserServantCollectionEntity__getFriendShipRankInfo(
    EntityDefinitely,
    &this->fields.friendship,
    &this->fields.friendshipMax,
    0LL);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_544;
  qp = SelfUserGame->fields.qp;
  *(_DWORD *)&this->fields.isStatusUpSvt = 0;
  p_isStatusUpSvt = &this->fields.isStatusUpSvt;
  v481 = qp;
  *(_WORD *)&this->fields.isFavorite = 0;
  *(_WORD *)&this->fields.isLock = 0;
  *(_DWORD *)&this->fields.isChoice = 0;
  this->fields.isMaxSelect = 0;
  *(_QWORD *)&this->fields.isLimitUpItemNum = 0LL;
  v146 = SelfUserGame;
  v147 = this->fields.userSvtEntity;
  p_isChoice = &this->fields.isChoice;
  p_isLimitUpItemNum = &this->fields.isLimitUpItemNum;
  this->fields.isLvMax = 0;
  *(_WORD *)&this->fields.isEventJoin = 0;
  this->fields.isHeroineSvt = 0;
  *(_WORD *)&this->fields.isSameSvt = 0;
  this->fields.isMaterialTdSvt = 0;
  if ( !v147 )
    goto LABEL_544;
  LimitCntMax = UserServantEntity__getLimitCntMax(v147, 0LL);
  v149 = this->fields.userSvtEntity;
  this->fields.maxLimitCnt = LimitCntMax;
  if ( !v149 )
    goto LABEL_544;
  this->fields.currentLimitCnt = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
                                   v149->fields.limitCount,
                                   0LL);
  v150 = this->fields.userSvtEntity;
  *(_WORD *)&this->fields.isBaseLvMax = 0;
  this->fields.isUseSupport = 0;
  this->fields.isLvExceedItemNum = 0;
  this->fields.isCanNotLock = 0;
  this->fields.isSwapChoice = 0;
  *(_WORD *)&this->fields.isSameClass = 0;
  *(_QWORD *)&this->fields.isAtkUpMax = 0LL;
  this->fields.dragSelectNum = -1;
  if ( !v150 )
    goto LABEL_544;
  adjustHp = v150->fields.adjustHp;
  v152 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v150 = (struct UserServantEntity_o *)*p_userSvtEntity;
    v152 = BalanceConfig_TypeInfo;
  }
  this->fields.hpReinforceValue = v152->static_fields->StatusUpAdjustHp * adjustHp;
  if ( !v150 )
    goto LABEL_544;
  v488 = v142;
  this->fields.atkReinforceValue = v152->static_fields->StatusUpAdjustAtk * v150->fields.adjustAtk;
  UserServantEntity__getAdjustMaxData(
    v150,
    &this->fields.nowMaxHpReinforceValue,
    &this->fields.nowMaxAtkReinforceValue,
    0LL);
  v153 = this->fields.userSvtEntity;
  *(_WORD *)&this->fields.isEquipedCmdCard = 0;
  if ( !v153 )
    goto LABEL_544;
  v154 = *(_OWORD *)&v153->fields.id.fields.fakeValue;
  pushUserSvtId = v146->fields.pushUserSvtId;
  v483 = v146;
  *(_OWORD *)&v517.fields.currentCryptoKey = *(_OWORD *)&v153->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v517.fields.fakeValue = v154;
  this->fields.isPush = pushUserSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(
                                           &v517,
                                           0LL);
  UserSvtId = CombineServantListViewItem__get_UserSvtId(this, v156);
  EventFortificationDataLogic__SetFortification(
    &this->fields.isFortification,
    &this->fields.fortificationName,
    &this->fields.fortificationDetailName,
    UserSvtId,
    0LL);
  v158 = this->fields.type;
  v489 = baseUsrSvtData;
  if ( v158 > 0xA || ((1 << v158) & 0x481) == 0 )
    goto LABEL_141;
  if ( !*p_userSvtEntity )
    goto LABEL_544;
  if ( UserServantEntity__isLevelMax((UserServantEntity_o *)*p_userSvtEntity, 0LL) )
  {
    if ( !*p_userSvtEntity )
      goto LABEL_544;
    if ( UserServantEntity__isAdjustHpMax((UserServantEntity_o *)*p_userSvtEntity, 0LL) )
    {
      if ( !*p_userSvtEntity )
        goto LABEL_544;
      if ( UserServantEntity__isAdjustAtkMax((UserServantEntity_o *)*p_userSvtEntity, 0LL) )
      {
        if ( !*p_userSvtEntity )
          goto LABEL_544;
        if ( UserServantEntity__isSecondAdjustHpMax((UserServantEntity_o *)*p_userSvtEntity, 0LL) )
        {
          if ( !*p_userSvtEntity )
            goto LABEL_544;
          if ( UserServantEntity__isSecondAdjustAtkMax((UserServantEntity_o *)*p_userSvtEntity, 0LL) )
            this->fields.isLvMax = 1;
        }
      }
    }
  }
  if ( !userSvtEntity )
    goto LABEL_544;
  this->fields.isLimitCntMax = UserServantEntity__isLimitCountMax(userSvtEntity, 0LL);
  v159 = this->fields.userSvtEntity;
  this->fields.isParty = v492;
  if ( !v159 )
    goto LABEL_544;
  IsLock = UserServantEntity__IsLock(v159, 0LL);
  v161 = this->fields.userSvtEntity;
  this->fields.isLock = IsLock;
  if ( !v161 )
    goto LABEL_544;
  *p_isChoice = UserServantEntity__IsChoice(v161, 0LL);
  v162 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v162 )
    goto LABEL_544;
  v163 = DataManager__GetMasterData_WarQuestSelectionMaster_(
           (DataManager_o *)v162,
           (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantLeaderMaster___);
  if ( !v163 )
    goto LABEL_544;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)v163->fields.list;
  if ( !list )
    goto LABEL_544;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_290E508 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B170D4();
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v167 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v167;
        p_offset += 4;
        if ( v167 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_58;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_58:
      p_method = sub_AAFEF8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v170 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v171 = 0LL;
      v172 = &v170->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v172 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v171;
        v172 += 4;
        if ( v171 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_65;
      }
      v173 = (__int64)&v170->vtable[*v172].method;
    }
    else
    {
LABEL_65:
      v173 = sub_AAFEF8(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v174 = (_QWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v173)(
                       Enumerator,
                       *(_QWORD *)(v173 + 8));
    if ( !v174 )
      goto LABEL_549;
    v175 = *(&UserServantLeaderEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*v174 + 300LL) < (unsigned int)v175
      || *(UserServantLeaderEntity_c **)(*(_QWORD *)(*v174 + 200LL) + 8 * v175 - 8) != UserServantLeaderEntity_TypeInfo )
    {
      sub_B173C8(v174);
LABEL_547:
      sub_B173C8(v225);
LABEL_548:
      sub_B173C8(v366);
LABEL_549:
      sub_B170D4();
    }
    v176 = (UserServantEntity_o *)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      sub_B170D4();
    v177 = *(_OWORD *)&v176->fields.id.fields.fakeValue;
    v178 = v174[7];
    *(_OWORD *)&v519.fields.currentCryptoKey = *(_OWORD *)&v176->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v519.fields.fakeValue = v177;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v516 = v519;
    if ( v178 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v516, 0LL) )
    {
      this->fields.isUseSupport = 1;
      break;
    }
  }
  v520[v521++] = 1071;
  v179 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v180 = 0LL;
    v181 = &v179->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v181 - 1) != System_IDisposable_TypeInfo )
    {
      ++v180;
      v181 += 4;
      if ( v180 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_80;
    }
    v182 = (__int64)&v179->vtable[*v181].method;
  }
  else
  {
LABEL_80:
    v182 = sub_AAFEF8(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v182)(
    Enumerator,
    *(_QWORD *)(v182 + 8));
  if ( v521 && v520[v521 - 1] == 1071 )
    --v521;
  if ( !*p_userSvtEntity )
    goto LABEL_544;
  IsEventJoin = UserServantEntity__IsEventJoin((UserServantEntity_o *)*p_userSvtEntity, 0LL);
  v184 = this->fields.userSvtEntity;
  this->fields.isEventJoin = IsEventJoin;
  if ( !v184 )
    goto LABEL_544;
  if ( UserServantEntity__IsHeroine(v184, 0LL) )
    this->fields.isHeroineSvt = 1;
  if ( baseUsrSvtData )
  {
    v185 = (UserServantEntity_o *)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_544;
    v186 = *(_OWORD *)&v185->fields.id.fields.fakeValue;
    *(_OWORD *)&v519.fields.currentCryptoKey = *(_OWORD *)&v185->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v519.fields.fakeValue = v186;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v515 = v519;
    v187 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v515, 0LL);
    v188 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
    *(_OWORD *)&v514.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v514.fields.fakeValue = v188;
    if ( v187 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v514, 0LL) )
      this->fields.isBaseSvt = 1;
  }
  if ( !*p_userSvtEntity )
    goto LABEL_544;
  if ( UserServantEntity__IsCombineExp((UserServantEntity_o *)*p_userSvtEntity, 0LL) )
    this->fields.isExpUpSvt = 1;
  if ( !*p_servantEntity )
    goto LABEL_544;
  if ( ServantEntity__get_IsStatusUp(*p_servantEntity, 0LL) )
    *p_isStatusUpSvt = 1;
  if ( !*p_servantEntity )
    goto LABEL_544;
  if ( ServantEntity__get_IsServantMaterialTd(*p_servantEntity, 0LL) )
    this->fields.isMaterialTdSvt = 1;
  v189 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v189 )
    goto LABEL_544;
  v190 = (UserServantCommandCodeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             (DataManager_o *)v189,
                                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  v192 = *p_servantEntity;
  if ( !*p_servantEntity )
    goto LABEL_544;
  v193 = UserId;
  v194 = *(_QWORD *)&v192->fields.id.fields.currentCryptoKey;
  v195 = *(_QWORD *)&v192->fields.id.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v532.fields.currentCryptoKey = v194;
  *(_QWORD *)&v532.fields.fakeValue = v195;
  v196 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v532, 0LL);
  if ( !v190 )
    goto LABEL_544;
  if ( UserServantCommandCodeMaster__TryGetEntity(v190, &entity, v193, v196, 0LL) )
  {
    if ( !entity )
      goto LABEL_544;
    this->fields.isEquipedCmdCard = UserServantCommandCodeEntity__IsEquipedCommandCode(entity, 0LL);
    if ( !entity )
      goto LABEL_544;
    this->fields.isCmdCardSlotOpen = UserServantCommandCodeEntity__IsCommandCardSlotOpen(entity, 0LL);
  }
  v197 = this->fields.type;
  if ( v197 == 10 )
  {
    v198 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v198 )
      goto LABEL_544;
    v199 = (UserServantCommandCardMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)v198,
                                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantCommandCardMaster___);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    v200 = NetworkManager__get_UserId(0LL);
    v201 = *p_servantEntity;
    if ( !*p_servantEntity )
      goto LABEL_544;
    v202 = v200;
    v203 = *(_QWORD *)&v201->fields.id.fields.currentCryptoKey;
    v204 = *(_QWORD *)&v201->fields.id.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v533.fields.currentCryptoKey = v203;
    *(_QWORD *)&v533.fields.fakeValue = v204;
    v205 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v533, 0LL);
    if ( !v199 )
      goto LABEL_544;
    v206 = (UserItemMaster_o *)UserServantCommandCardMaster__TryGetEntity(v199, &v529, v202, v205, 0LL);
    if ( ((unsigned __int8)v206 & 1) != 0 )
    {
      if ( !v529 )
        goto LABEL_544;
      commandCardParam = v529->fields.commandCardParam;
      if ( commandCardParam )
      {
        max_length = commandCardParam->max_length;
        if ( max_length >= 1 )
        {
          v211 = 0LL;
          while ( 1 )
          {
            if ( (unsigned int)v211 >= max_length )
            {
LABEL_556:
              sub_B17100(v206, v207, v208);
              sub_B170A0();
            }
            v212 = commandCardParam->m_Items[v211 + 1];
            v206 = (UserItemMaster_o *)BalanceConfig_TypeInfo;
            if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              v206 = (UserItemMaster_o *)BalanceConfig_TypeInfo;
            }
            if ( v212 < SHIDWORD(v206[2].fields._lookup[8].fields.comparer) )
              break;
            this->fields.isCommandCardExceedMax = 1;
            max_length = commandCardParam->max_length;
            if ( (int)++v211 >= max_length )
              goto LABEL_141;
          }
          this->fields.isCommandCardExceedMax = 0;
        }
      }
    }
LABEL_141:
    v197 = this->fields.type;
  }
  if ( v197 == 1 )
  {
    this->fields.isMaterialSvt = isMtSvt;
    this->fields.isParty = v492;
    v213 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v213 )
      goto LABEL_544;
    v214 = DataManager__GetMasterData_WarQuestSelectionMaster_(
             (DataManager_o *)v213,
             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantLeaderMaster___);
    if ( !v214 )
      goto LABEL_544;
    v215 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)v214->fields.list;
    if ( !v215 )
      goto LABEL_544;
    v216 = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
             v215,
             (const MethodInfo_290E508 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    if ( !v216 )
      sub_B170D4();
    while ( 1 )
    {
      v217 = v216->klass;
      if ( *(_WORD *)&v216->klass->_2.bitflags1 )
      {
        v218 = 0LL;
        v219 = &v217->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)v219 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v218;
          v219 += 4;
          if ( v218 >= *(unsigned __int16 *)&v216->klass->_2.bitflags1 )
            goto LABEL_151;
        }
        v220 = (__int64)&v217->vtable[*v219].method;
      }
      else
      {
LABEL_151:
        v220 = sub_AAFEF8(v216, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v220)(
              v216,
              *(_QWORD *)(v220 + 8)) & 1) == 0 )
        break;
      v221 = v216->klass;
      if ( *(_WORD *)&v216->klass->_2.bitflags1 )
      {
        v222 = 0LL;
        v223 = &v221->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v223 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
        {
          ++v222;
          v223 += 4;
          if ( v222 >= *(unsigned __int16 *)&v216->klass->_2.bitflags1 )
            goto LABEL_158;
        }
        v224 = (__int64)&v221->vtable[*v223].method;
      }
      else
      {
LABEL_158:
        v224 = sub_AAFEF8(v216, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
      }
      v225 = (_QWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v224)(
                         v216,
                         *(_QWORD *)(v224 + 8));
      if ( !v225 )
        sub_B170D4();
      v226 = *(&UserServantLeaderEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*v225 + 300LL) < (unsigned int)v226
        || *(UserServantLeaderEntity_c **)(*(_QWORD *)(*v225 + 200LL) + 8 * v226 - 8) != UserServantLeaderEntity_TypeInfo )
      {
        goto LABEL_547;
      }
      v227 = (UserServantEntity_o *)*p_userSvtEntity;
      if ( !*p_userSvtEntity )
        sub_B170D4();
      v228 = *(_OWORD *)&v227->fields.id.fields.fakeValue;
      v229 = v225[7];
      *(_OWORD *)&v519.fields.currentCryptoKey = *(_OWORD *)&v227->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v519.fields.fakeValue = v228;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v513 = v519;
      if ( v229 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v513, 0LL) )
      {
        this->fields.isUseSupport = 1;
        break;
      }
    }
    v520[v521++] = 1511;
    v230 = v216->klass;
    if ( *(_WORD *)&v216->klass->_2.bitflags1 )
    {
      v231 = 0LL;
      v232 = &v230->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v232 - 1) != System_IDisposable_TypeInfo )
      {
        ++v231;
        v232 += 4;
        if ( v231 >= *(unsigned __int16 *)&v216->klass->_2.bitflags1 )
          goto LABEL_173;
      }
      v233 = (__int64)&v230->vtable[*v232].method;
    }
    else
    {
LABEL_173:
      v233 = sub_AAFEF8(v216, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v233)(v216, *(_QWORD *)(v233 + 8));
    if ( v521 && v520[v521 - 1] == 1511 )
      --v521;
    v234 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v234 )
      goto LABEL_544;
    v235 = (CombineMaterialMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        (DataManager_o *)v234,
                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_CombineMaterialMaster___);
    if ( !*p_servantEntity )
      goto LABEL_544;
    if ( !*p_userSvtEntity )
      goto LABEL_544;
    if ( !v235 )
      goto LABEL_544;
    v236 = CombineMaterialMaster__GetEntity(
             v235,
             (*p_servantEntity)->fields.combineMaterialId,
             (*p_userSvtEntity)[16].fields.currentCryptoKey,
             0LL);
    if ( !v236 )
      goto LABEL_544;
    this->fields.materialExp = v236->fields.value;
    if ( baseUsrSvtData )
    {
      v237 = (UserServantEntity_o *)*p_userSvtEntity;
      if ( !*p_userSvtEntity )
        goto LABEL_544;
      v239 = *(_QWORD *)&v237->fields.svtId.fields.currentCryptoKey;
      v238 = *(_QWORD *)&v237->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v534.fields.currentCryptoKey = v239;
      *(_QWORD *)&v534.fields.fakeValue = v238;
      v240 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v534, 0LL);
      if ( v240 == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
                     baseUsrSvtData->fields.svtId,
                     0LL) )
      {
        v241 = this->fields.userSvtEntity;
        this->fields.isLimitCntTarget = 1;
        if ( !v241 )
          goto LABEL_544;
        v242 = *(_OWORD *)&v241->fields.id.fields.fakeValue;
        *(_OWORD *)&v519.fields.currentCryptoKey = *(_OWORD *)&v241->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v519.fields.fakeValue = v242;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v512 = v519;
        v243 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v512, 0LL);
        v244 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
        *(_OWORD *)&v511.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v511.fields.fakeValue = v244;
        if ( v243 != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v511, 0LL) )
          this->fields.isSameBaseSvt = 1;
      }
      if ( !*p_userSvtEntity )
        goto LABEL_544;
      SvtClassId = UserServantEntity__getSvtClassId((UserServantEntity_o *)*p_userSvtEntity, 0LL);
      if ( SvtClassId == UserServantEntity__getSvtClassId(baseUsrSvtData, 0LL) )
        this->fields.isSameClass = 1;
      if ( !*p_servantEntity )
        goto LABEL_544;
      if ( ServantEntity__get_IsStatusUp(*p_servantEntity, 0LL) )
        goto LABEL_202;
      if ( !*p_servantEntity )
        goto LABEL_544;
      if ( ServantEntity__get_IsCombineMaterial(*p_servantEntity, 0LL) )
      {
LABEL_202:
        if ( !*p_servantEntity )
          goto LABEL_544;
        if ( ServantEntity__get_IsAllClass(*p_servantEntity, 0LL) )
          this->fields.isSameClass = 1;
      }
      this->fields.isBaseLvMax = UserServantEntity__isLevelMax(baseUsrSvtData, 0LL);
      v246 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v246 )
        goto LABEL_544;
      v247 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              (DataManager_o *)v246,
                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantClassMaster___);
      if ( !*p_servantEntity )
        goto LABEL_544;
      if ( !v247 )
        goto LABEL_544;
      v248 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
               v247,
               (*p_servantEntity)->fields.classId,
               (const MethodInfo_266F388 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
      if ( !v248 )
        goto LABEL_544;
      HIDWORD(v527) = v248->fields.priority;
      v249 = UserServantEntity__getSvtClassId(baseUsrSvtData, 0LL);
      SvtClassGroupType = UserServantEntity__getSvtClassGroupType(baseUsrSvtData, v249, 0LL);
      if ( System_Int32__Equals_38275732((int32_t)&v527 + 4, 3, 0LL) )
        goto LABEL_210;
      if ( System_Int32__Equals_38275732((int32_t)&v527 + 4, SvtClassGroupType, 0LL) )
      {
        if ( !*p_servantEntity )
          goto LABEL_544;
        classId = (*p_servantEntity)->fields.classId;
        if ( classId == UserServantEntity__getSvtClassId(baseUsrSvtData, 0LL) )
        {
LABEL_210:
          materialExp = this->fields.materialExp;
          v252 = BalanceConfig_TypeInfo;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v252 = BalanceConfig_TypeInfo;
          }
          SameClassExp = v252->static_fields->SameClassExp;
          if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !System_Math_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
          }
          v254 = ceil((double)materialExp * (double)SameClassExp / 1000.0);
          if ( v254 == INFINITY )
            v254 = -v254;
          this->fields.materialExp = (int)v254;
        }
      }
    }
    else
    {
      this->fields.isLimitCntTarget = 0;
    }
    v256 = this->fields.userSvtEntity;
    this->fields.isFavorite = isFavorite;
    if ( !v256 )
      goto LABEL_544;
    v257 = UserServantEntity__IsLock(v256, 0LL);
    v258 = this->fields.userSvtEntity;
    this->fields.isLock = v257;
    if ( !v258 )
      goto LABEL_544;
    *p_isChoice = UserServantEntity__IsChoice(v258, 0LL);
    if ( !*p_userSvtEntity )
      goto LABEL_544;
    this->fields.isEventJoin = UserServantEntity__IsEventJoin((UserServantEntity_o *)*p_userSvtEntity, 0LL);
    v259 = this->fields.userSvtEntity;
    this->fields.hpBase = v132->fields.hpBase;
    this->fields.atkBase = v132->fields.atkBase;
    if ( !v259 )
      goto LABEL_544;
    if ( UserServantEntity__IsHeroine(v259, 0LL) )
      this->fields.isHeroineSvt = 1;
    if ( !*p_servantEntity )
      goto LABEL_544;
    if ( ServantEntity__get_IsStatusUp(*p_servantEntity, 0LL) )
    {
      *p_isStatusUpSvt = 1;
      if ( !baseUsrSvtData )
        goto LABEL_544;
      v260 = UserServantEntity__getSvtClassId(baseUsrSvtData, 0LL);
      v261 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v261 )
        goto LABEL_544;
      v262 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              (DataManager_o *)v261,
                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantClassMaster___);
      if ( !*p_servantEntity )
        goto LABEL_544;
      if ( !v262 )
        goto LABEL_544;
      v263 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
               v262,
               (*p_servantEntity)->fields.classId,
               (const MethodInfo_266F388 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
      if ( !v263 )
        goto LABEL_544;
      LODWORD(v527) = v263->fields.priority;
      if ( !*p_servantEntity )
        goto LABEL_544;
      if ( (*p_servantEntity)->fields.classId == v260 || System_Int32__Equals_38275732((int32_t)&v527, 3, 0LL) )
      {
        this->fields.isCanStUp = 1;
        v264 = UserServantEntity__isAdjustAtkMax(baseUsrSvtData, 0LL) && this->fields.atkBase > 0;
        this->fields.isAtkUpMax = v264;
        v265 = UserServantEntity__isAdjustHpMax(baseUsrSvtData, 0LL) && this->fields.hpBase > 0;
        this->fields.isHpUpMax = v265;
        v266 = UserServantEntity__isSecondAdjustAtkMax(baseUsrSvtData, 0LL) && this->fields.atkBase > 0;
        this->fields.isAtkSecondUpMax = v266;
        v267 = UserServantEntity__isSecondAdjustHpMax(baseUsrSvtData, 0LL) && this->fields.hpBase > 0;
        this->fields.isHpSecondUpMax = v267;
      }
    }
    v268 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v268 )
      goto LABEL_544;
    v269 = (UserServantCommandCodeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)v268,
                                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    v270 = NetworkManager__get_UserId(0LL);
    v271 = *p_servantEntity;
    if ( !*p_servantEntity )
      goto LABEL_544;
    v272 = v270;
    v273 = *(_QWORD *)&v271->fields.id.fields.currentCryptoKey;
    v274 = *(_QWORD *)&v271->fields.id.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v535.fields.currentCryptoKey = v273;
    *(_QWORD *)&v535.fields.fakeValue = v274;
    v275 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v535, 0LL);
    if ( !v269 )
      goto LABEL_544;
    if ( UserServantCommandCodeMaster__TryGetEntity(v269, &v528, v272, v275, 0LL) )
    {
      if ( !v528 )
        goto LABEL_544;
      this->fields.isEquipedCmdCard = UserServantCommandCodeEntity__IsEquipedCommandCode(v528, 0LL);
      if ( !v528 )
        goto LABEL_544;
      this->fields.isCmdCardSlotOpen = UserServantCommandCodeEntity__IsCommandCardSlotOpen(v528, 0LL);
    }
  }
  v276 = this->fields.type;
  if ( v276 == 9 )
  {
    v277 = v492;
    if ( !userSvtEntity )
      goto LABEL_544;
    isLimitCountMax = UserServantEntity__isLimitCountMax(userSvtEntity, 0LL);
    v310 = this->fields.userSvtEntity;
    this->fields.isLimitCntMax = isLimitCountMax;
    if ( !v310 )
      goto LABEL_544;
    isLevelMax = UserServantEntity__isLevelMax(v310, 0LL);
    v312 = this->fields.userSvtEntity;
    this->fields.isLvMax = isLevelMax;
    this->fields.isParty = v492;
    if ( !v312 )
      goto LABEL_544;
    v313 = UserServantEntity__IsLock(v312, 0LL);
    v314 = this->fields.userSvtEntity;
    this->fields.isLock = v313;
    if ( !v314 )
      goto LABEL_544;
    *p_isChoice = UserServantEntity__IsChoice(v314, 0LL);
    if ( !*p_userSvtEntity )
      goto LABEL_544;
    v315 = UserServantEntity__IsEventJoin((UserServantEntity_o *)*p_userSvtEntity, 0LL);
    v316 = this->fields.userSvtEntity;
    this->fields.isEventJoin = v315;
    if ( !v316 )
      goto LABEL_544;
    this->fields.isIgnoreCombineLimitSpecial = UserServantEntity__IsIgnoreCombineLimitSpecial(v316, 0LL);
    this->fields.isSealCombineLimit = CombineServantListViewItem__GetSealCombineLimit(this, v317);
    if ( baseUsrSvtData )
    {
      v318 = (UserServantEntity_o *)*p_userSvtEntity;
      if ( !*p_userSvtEntity )
        goto LABEL_544;
      v319 = *(_OWORD *)&v318->fields.id.fields.fakeValue;
      *(_OWORD *)&v519.fields.currentCryptoKey = *(_OWORD *)&v318->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v519.fields.fakeValue = v319;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v507 = v519;
      v320 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v507, 0LL);
      v321 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
      *(_OWORD *)&v506.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v506.fields.fakeValue = v321;
      if ( v320 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v506, 0LL) )
        this->fields.isBaseSvt = 1;
    }
    if ( !*p_userSvtEntity )
      goto LABEL_544;
    if ( !UserServantEntity__IsHeroine((UserServantEntity_o *)*p_userSvtEntity, 0LL) )
      goto LABEL_324;
  }
  else
  {
    v277 = v492;
    if ( v276 != 2 )
      goto LABEL_325;
    if ( !userSvtEntity )
      goto LABEL_544;
    v278 = UserServantEntity__isLimitCountMax(userSvtEntity, 0LL);
    v279 = this->fields.userSvtEntity;
    this->fields.isLimitCntMax = v278;
    if ( !v279 )
      goto LABEL_544;
    v280 = UserServantEntity__isLevelMax(v279, 0LL);
    v281 = this->fields.userSvtEntity;
    this->fields.isLvMax = v280;
    this->fields.isParty = v492;
    if ( !v281 )
      goto LABEL_544;
    v282 = UserServantEntity__IsLock(v281, 0LL);
    v283 = this->fields.userSvtEntity;
    this->fields.isLock = v282;
    if ( !v283 )
      goto LABEL_544;
    *p_isChoice = UserServantEntity__IsChoice(v283, 0LL);
    if ( !*p_userSvtEntity )
      goto LABEL_544;
    this->fields.isEventJoin = UserServantEntity__IsEventJoin((UserServantEntity_o *)*p_userSvtEntity, 0LL);
    this->fields.isSealCombineLimit = CombineServantListViewItem__GetSealCombineLimit(this, v284);
    if ( baseUsrSvtData )
    {
      v285 = (UserServantEntity_o *)*p_userSvtEntity;
      if ( !*p_userSvtEntity )
        goto LABEL_544;
      v286 = *(_OWORD *)&v285->fields.id.fields.fakeValue;
      *(_OWORD *)&v519.fields.currentCryptoKey = *(_OWORD *)&v285->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v519.fields.fakeValue = v286;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v510 = v519;
      v287 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v510, 0LL);
      v288 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
      *(_OWORD *)&v509.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v509.fields.fakeValue = v288;
      if ( v287 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v509, 0LL) )
        this->fields.isBaseSvt = 1;
    }
    if ( !*p_userSvtEntity )
      goto LABEL_544;
    if ( !UserServantEntity__IsHeroine((UserServantEntity_o *)*p_userSvtEntity, 0LL) )
    {
      if ( !*p_servantEntity )
        goto LABEL_544;
      v289 = (UserServantEntity_o *)*p_userSvtEntity;
      if ( !*p_userSvtEntity )
        goto LABEL_544;
      combineLimitId = (*p_servantEntity)->fields.combineLimitId;
      v291 = *(_QWORD *)&v289->fields.limitCount.fields.currentCryptoKey;
      v292 = *(_QWORD *)&v289->fields.limitCount.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v536.fields.currentCryptoKey = v291;
      *(_QWORD *)&v536.fields.fakeValue = v292;
      v293 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v536, 0LL);
      v294 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v294 )
        goto LABEL_544;
      v295 = (CombineLimitMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                       (DataManager_o *)v294,
                                       (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_CombineLimitMaster___);
      if ( !v295 )
        goto LABEL_544;
      v296 = CombineLimitMaster__GetEntity(v295, combineLimitId, v293, 0LL);
      if ( !v296 )
        goto LABEL_544;
      itemNums = v296->fields.itemNums;
      itemIds = v296->fields.itemIds;
      v299 = (UserServantEntity_o *)v296;
      v300 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v300 )
        goto LABEL_544;
      v491 = v299;
      v206 = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   (DataManager_o *)v300,
                                   (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserItemMaster___);
      if ( !itemIds )
        goto LABEL_544;
      v301 = *(_QWORD *)&itemIds->max_length;
      if ( (int)v301 >= 1 )
      {
        v302 = v206;
        for ( i = 0LL; (__int64)i < (int)v301; ++i )
        {
          if ( i >= (unsigned int)v301 )
            goto LABEL_556;
          if ( !itemNums )
            goto LABEL_544;
          if ( i >= itemNums->max_length )
            goto LABEL_556;
          v304 = (UserServantEntity_o *)*p_userSvtEntity;
          if ( !*p_userSvtEntity )
            goto LABEL_544;
          v305 = *(_OWORD *)&v304->fields.userId.fields.fakeValue;
          v306 = itemIds->m_Items[i + 1];
          v307 = itemNums->m_Items[i + 1];
          *(_OWORD *)&v519.fields.currentCryptoKey = *(_OWORD *)&v304->fields.userId.fields.currentCryptoKey;
          *(_OWORD *)&v519.fields.fakeValue = v305;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v508 = v519;
          v308 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v508, 0LL);
          if ( !v302 )
            goto LABEL_544;
          v206 = (UserItemMaster_o *)UserItemMaster__TryGetEntity(v302, &v526, v308, v306, 0LL);
          if ( ((unsigned __int8)v206 & 1) == 0 )
            goto LABEL_370;
          if ( !v526 )
            goto LABEL_544;
          if ( v306 == v526->fields.itemId )
          {
            if ( v307 > v526->fields.num )
            {
LABEL_370:
              *p_isLimitUpItemNum = 0;
              break;
            }
            *p_isLimitUpItemNum = 1;
          }
          LODWORD(v301) = itemIds->max_length;
        }
      }
      baseUsrSvtData = v489;
      v277 = v492;
      if ( v483->fields.qp < SLODWORD(v491->fields.id.fields.hiddenValue) )
        *p_isLimitUpItemNum = 0;
      goto LABEL_324;
    }
  }
  this->fields.isHeroineSvt = 1;
LABEL_324:
  v276 = this->fields.type;
LABEL_325:
  if ( (v276 | 8) == 11 )
  {
    v322 = this->fields.userSvtEntity;
    this->fields.isParty = v277;
    if ( !v322 )
      goto LABEL_544;
    v323 = UserServantEntity__IsLock(v322, 0LL);
    v324 = this->fields.userSvtEntity;
    this->fields.isLock = v323;
    if ( !v324 )
      goto LABEL_544;
    *p_isChoice = UserServantEntity__IsChoice(v324, 0LL);
    if ( !*p_userSvtEntity )
      goto LABEL_544;
    this->fields.isEventJoin = UserServantEntity__IsEventJoin((UserServantEntity_o *)*p_userSvtEntity, 0LL);
    if ( baseUsrSvtData )
    {
      v325 = (UserServantEntity_o *)*p_userSvtEntity;
      if ( !*p_userSvtEntity )
        goto LABEL_544;
      v326 = *(_OWORD *)&v325->fields.id.fields.fakeValue;
      *(_OWORD *)&v519.fields.currentCryptoKey = *(_OWORD *)&v325->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v519.fields.fakeValue = v326;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v505 = v519;
      v327 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v505, 0LL);
      v328 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
      *(_OWORD *)&v504.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v504.fields.fakeValue = v328;
      if ( v327 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v504, 0LL) )
        this->fields.isBaseSvt = 1;
    }
    if ( !*p_userSvtEntity )
      goto LABEL_544;
    if ( UserServantEntity__IsHeroine((UserServantEntity_o *)*p_userSvtEntity, 0LL) )
      this->fields.isHeroineSvt = 1;
    v276 = this->fields.type;
    if ( v276 == 3 )
    {
      CombineServantListViewItem__SetSkillInfo(this, v329);
      v276 = this->fields.type;
    }
    if ( v276 == 11 )
    {
      CombineServantListViewItem__SetAppendSkillInfo(this, v329);
      v276 = this->fields.type;
    }
  }
  if ( v276 != 4 )
    goto LABEL_387;
  v330 = this->fields.userSvtEntity;
  this->fields.isParty = v277;
  if ( !v330 )
    goto LABEL_544;
  v331 = UserServantEntity__IsLock(v330, 0LL);
  v332 = this->fields.userSvtEntity;
  this->fields.isLock = v331;
  if ( !v332 )
    goto LABEL_544;
  *p_isChoice = UserServantEntity__IsChoice(v332, 0LL);
  if ( !*p_userSvtEntity )
    goto LABEL_544;
  this->fields.isEventJoin = UserServantEntity__IsEventJoin((UserServantEntity_o *)*p_userSvtEntity, 0LL);
  if ( baseUsrSvtData )
  {
    v333 = (UserServantEntity_o *)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_544;
    v334 = *(_OWORD *)&v333->fields.id.fields.fakeValue;
    *(_OWORD *)&v519.fields.currentCryptoKey = *(_OWORD *)&v333->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v519.fields.fakeValue = v334;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v503 = v519;
    v335 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v503, 0LL);
    v336 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
    *(_OWORD *)&v502.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v502.fields.fakeValue = v336;
    if ( v335 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v502, 0LL) )
      this->fields.isBaseSvt = 1;
  }
  if ( !*p_userSvtEntity )
LABEL_544:
    sub_B170D4();
  if ( UserServantEntity__IsHeroine((UserServantEntity_o *)*p_userSvtEntity, 0LL) )
  {
    this->fields.isHeroineSvt = 1;
  }
  else
  {
    if ( !*p_userSvtEntity )
      goto LABEL_544;
    UserServantEntity__getTreasureDeviceInfo((UserServantEntity_o *)*p_userSvtEntity, &tdInfo, -1, -1, 0, 0LL);
    this->fields.isTdLvMax = 1;
    if ( !tdInfo )
      goto LABEL_544;
    id = tdInfo->fields.id;
    if ( id >= 1 )
    {
      lv = tdInfo->fields.lv;
      v339 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v339 )
        goto LABEL_544;
      v340 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              (DataManager_o *)v339,
                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
      if ( !v340 )
        goto LABEL_544;
      v341 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
               v340,
               id,
               (const MethodInfo_266F388 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
      if ( !v341 )
        goto LABEL_544;
      if ( lv < v341->fields.bannerId )
        this->fields.isTdLvMax = 0;
    }
    if ( !v482 )
      goto LABEL_544;
    SameSvtNpLvCache = UserServantMaster__getSameSvtNpLvCache(
                         v482,
                         (UserServantEntity_o *)*p_userSvtEntity,
                         &cachedUserServantNpLvDict,
                         0LL);
    if ( SameSvtNpLvCache >= 1 && !this->fields.isTdLvMax )
    {
      v344 = SameSvtNpLvCache;
      CombineServantListViewItem__GetNpInfo(this, &tdLv[1], tdLv, &tdMaxLv, v343);
      if ( v481 <= 1200000 )
      {
        if ( !*p_userSvtEntity )
          goto LABEL_544;
        v346 = UserServantEntity__checkTreasureDeviceLevelUp((UserServantEntity_o *)*p_userSvtEntity, v344, 0LL);
        v347 = tdLv[0];
        if ( tdLv[0] >= v346 )
        {
          v350 = 0;
        }
        else
        {
          v348 = tdLv[1];
          v349 = v346;
          v350 = 0;
          do
          {
            v351 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !v351 )
              goto LABEL_544;
            v352 = (TreasureDvcLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                              (DataManager_o *)v351,
                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
            if ( !v352 )
              goto LABEL_544;
            v353 = TreasureDvcLvMaster__GetEntity(v352, v348, v347, 0LL);
            if ( v353 )
              v350 += v353->fields.qp;
            ++v347;
          }
          while ( v347 < v349 );
          baseUsrSvtData = v489;
          if ( !this )
            goto LABEL_544;
        }
        v345 = v481 >= v350;
      }
      else
      {
        v345 = 1;
      }
      this->fields.isSameSvt = v345;
    }
  }
  v276 = this->fields.type;
LABEL_387:
  if ( v276 != 5 )
    goto LABEL_437;
  this->fields.isParty = v277;
  this->fields.isMaterialSvt = isMtSvt;
  v354 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v354 )
    goto LABEL_544;
  v355 = DataManager__GetMasterData_WarQuestSelectionMaster_(
           (DataManager_o *)v354,
           (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantLeaderMaster___);
  if ( !v355 )
    goto LABEL_544;
  v356 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)v355->fields.list;
  if ( !v356 )
    goto LABEL_544;
  v357 = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
           v356,
           (const MethodInfo_290E508 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !v357 )
    sub_B170D4();
  while ( 1 )
  {
    v358 = v357->klass;
    if ( *(_WORD *)&v357->klass->_2.bitflags1 )
    {
      v359 = 0LL;
      v360 = &v358->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)v360 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v359;
        v360 += 4;
        if ( v359 >= *(unsigned __int16 *)&v357->klass->_2.bitflags1 )
          goto LABEL_396;
      }
      v361 = (__int64)&v358->vtable[*v360].method;
    }
    else
    {
LABEL_396:
      v361 = sub_AAFEF8(v357, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v361)(
            v357,
            *(_QWORD *)(v361 + 8)) & 1) == 0 )
      break;
    v362 = v357->klass;
    if ( *(_WORD *)&v357->klass->_2.bitflags1 )
    {
      v363 = 0LL;
      v364 = &v362->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v364 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v363;
        v364 += 4;
        if ( v363 >= *(unsigned __int16 *)&v357->klass->_2.bitflags1 )
          goto LABEL_403;
      }
      v365 = (__int64)&v362->vtable[*v364].method;
    }
    else
    {
LABEL_403:
      v365 = sub_AAFEF8(v357, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v366 = (_QWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v365)(
                       v357,
                       *(_QWORD *)(v365 + 8));
    if ( !v366 )
      sub_B170D4();
    v367 = *(&UserServantLeaderEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*v366 + 300LL) < (unsigned int)v367
      || *(UserServantLeaderEntity_c **)(*(_QWORD *)(*v366 + 200LL) + 8 * v367 - 8) != UserServantLeaderEntity_TypeInfo )
    {
      goto LABEL_548;
    }
    v368 = (UserServantEntity_o *)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      sub_B170D4();
    v369 = *(_OWORD *)&v368->fields.id.fields.fakeValue;
    v370 = v366[7];
    *(_OWORD *)&v519.fields.currentCryptoKey = *(_OWORD *)&v368->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v519.fields.fakeValue = v369;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v501 = v519;
    if ( v370 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v501, 0LL) )
    {
      this->fields.isUseSupport = 1;
      break;
    }
  }
  v520[v521++] = 3557;
  v371 = v357->klass;
  if ( *(_WORD *)&v357->klass->_2.bitflags1 )
  {
    v372 = 0LL;
    v373 = &v371->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v373 - 1) != System_IDisposable_TypeInfo )
    {
      ++v372;
      v373 += 4;
      if ( v372 >= *(unsigned __int16 *)&v357->klass->_2.bitflags1 )
        goto LABEL_418;
    }
    v374 = (__int64)&v371->vtable[*v373].method;
  }
  else
  {
LABEL_418:
    v374 = sub_AAFEF8(v357, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v374)(v357, *(_QWORD *)(v374 + 8));
  if ( v521 && v520[v521 - 1] == 3557 )
    --v521;
  v375 = this->fields.userSvtEntity;
  this->fields.isFavorite = isFavorite;
  if ( !v375 )
    goto LABEL_545;
  v376 = UserServantEntity__IsLock(v375, 0LL);
  v377 = this->fields.userSvtEntity;
  this->fields.isLock = v376;
  if ( !v377 )
    goto LABEL_545;
  *p_isChoice = UserServantEntity__IsChoice(v377, 0LL);
  if ( !*p_userSvtEntity )
    goto LABEL_545;
  this->fields.isEventJoin = UserServantEntity__IsEventJoin((UserServantEntity_o *)*p_userSvtEntity, 0LL);
  v378 = baseUsrSvtData && UserServantEntity__IsEventJoin(baseUsrSvtData, 0LL);
  v379 = this->fields.userSvtEntity;
  this->fields.isEventJoinBaseSvt = v378;
  if ( !v379 )
    goto LABEL_545;
  this->fields.isMaterialTdSvt = UserServantEntity__IsMaterialTd(v379, 0LL);
  if ( baseUsrSvtData )
  {
    v380 = (UserServantEntity_o *)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_545;
    v381 = *(_OWORD *)&v380->fields.id.fields.fakeValue;
    *(_OWORD *)&v519.fields.currentCryptoKey = *(_OWORD *)&v380->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v519.fields.fakeValue = v381;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v500 = v519;
    v382 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v500, 0LL);
    v383 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
    *(_OWORD *)&v499.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v499.fields.fakeValue = v383;
    if ( v382 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v499, 0LL) )
      this->fields.isBaseSvt = 1;
  }
LABEL_437:
  v384 = this->fields.type;
  if ( v384 == 6 )
  {
    if ( !*p_userSvtEntity )
      goto LABEL_545;
    isExceedLvMax = UserServantEntity__isExceedLvMax((UserServantEntity_o *)*p_userSvtEntity, 0LL);
    v386 = this->fields.userSvtEntity;
    this->fields.isLvExceedMax = isExceedLvMax;
    if ( !v386 )
      goto LABEL_545;
    v387 = UserServantEntity__isLimitCountMax(v386, 0LL);
    v388 = this->fields.userSvtEntity;
    this->fields.isLimitCntMax = v387;
    if ( !v388 )
      goto LABEL_545;
    v389 = UserServantEntity__isLevelMax(v388, 0LL);
    v390 = this->fields.userSvtEntity;
    this->fields.isLvMax = v389;
    this->fields.isParty = v277;
    if ( !v390 )
      goto LABEL_545;
    v391 = UserServantEntity__IsLock(v390, 0LL);
    v392 = this->fields.userSvtEntity;
    this->fields.isLock = v391;
    if ( !v392 )
      goto LABEL_545;
    *p_isChoice = UserServantEntity__IsChoice(v392, 0LL);
    if ( !*p_userSvtEntity )
      goto LABEL_545;
    this->fields.isEventJoin = UserServantEntity__IsEventJoin((UserServantEntity_o *)*p_userSvtEntity, 0LL);
    if ( baseUsrSvtData )
    {
      v393 = (UserServantEntity_o *)*p_userSvtEntity;
      if ( !*p_userSvtEntity )
        goto LABEL_545;
      v394 = *(_OWORD *)&v393->fields.id.fields.fakeValue;
      *(_OWORD *)&v519.fields.currentCryptoKey = *(_OWORD *)&v393->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v519.fields.fakeValue = v394;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v498 = v519;
      v395 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v498, 0LL);
      v396 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
      *(_OWORD *)&v497.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v497.fields.fakeValue = v396;
      if ( v395 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v497, 0LL) )
        this->fields.isBaseSvt = 1;
    }
    if ( !*p_userSvtEntity )
      goto LABEL_545;
    if ( UserServantEntity__IsHeroine((UserServantEntity_o *)*p_userSvtEntity, 0LL) )
    {
      this->fields.isHeroineSvt = 1;
    }
    else
    {
      if ( !*p_userSvtEntity )
        goto LABEL_545;
      SvtExceedEnt = UserServantEntity__getSvtExceedEnt((UserServantEntity_o *)*p_userSvtEntity, 0LL);
      if ( SvtExceedEnt )
      {
        v398 = (int32_t *)SvtExceedEnt;
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        Master_WarQuestSelectionMaster = (CommonConsumeMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_CommonConsumeMaster___);
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_545;
        IdEntityList = CommonConsumeMaster__GetIdEntityList(Master_WarQuestSelectionMaster, v398[12], 0LL);
        if ( IdEntityList )
        {
          v405 = IdEntityList;
          v406 = (System_Collections_Generic_HashSet_int__o *)sub_B170CC(
                                                                System_Collections_Generic_HashSet_int__TypeInfo,
                                                                v401,
                                                                v402,
                                                                v403,
                                                                v404);
          System_Collections_Generic_HashSet_int____ctor(
            v406,
            (const MethodInfo_21D7F80 *)Method_System_Collections_Generic_HashSet_int___ctor___66713944);
          v411 = (System_Collections_Generic_HashSet_int__o *)sub_B170CC(
                                                                System_Collections_Generic_HashSet_int__TypeInfo,
                                                                v407,
                                                                v408,
                                                                v409,
                                                                v410);
          System_Collections_Generic_HashSet_int____ctor(
            v411,
            (const MethodInfo_21D7F80 *)Method_System_Collections_Generic_HashSet_int___ctor___66713944);
          v415 = v405->max_length;
          if ( v415 >= 1 )
          {
            v416 = 0LL;
            do
            {
              if ( (unsigned int)v416 >= v415 )
              {
LABEL_555:
                sub_B17100(v412, v413, v414);
                sub_B170A0();
              }
              v417 = v405->m_Items[v416];
              if ( !v417 )
                goto LABEL_545;
              if ( !v406 )
                goto LABEL_545;
              System_Collections_Generic_HashSet_int___Add(
                v406,
                v417->fields.objectId,
                (const MethodInfo_21D915C *)Method_System_Collections_Generic_HashSet_int__Add__);
              if ( !v411 )
                goto LABEL_545;
              v412 = System_Collections_Generic_HashSet_int___Add(
                       v411,
                       v417->fields.num,
                       (const MethodInfo_21D915C *)Method_System_Collections_Generic_HashSet_int__Add__);
              v415 = v405->max_length;
            }
            while ( (int)++v416 < v415 );
          }
          if ( v398[13] >= 1 )
          {
            if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !DataManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            }
            v418 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_SvtCoinMaster___);
            v419 = (UserServantEntity_o *)*p_userSvtEntity;
            if ( !*p_userSvtEntity )
              goto LABEL_545;
            v420 = (DataMasterBase_WarMaster__WarEntity__int__o *)v418;
            v421 = *(_QWORD *)&v419->fields.svtId.fields.currentCryptoKey;
            v422 = *(_QWORD *)&v419->fields.svtId.fields.fakeValue;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v537.fields.currentCryptoKey = v421;
            *(_QWORD *)&v537.fields.fakeValue = v422;
            v423 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v537, 0LL);
            if ( !v420 )
              goto LABEL_545;
            v424 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                     v420,
                     v423,
                     (const MethodInfo_266F388 *)Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__GetEntity__);
            if ( !v424 )
              goto LABEL_545;
            if ( !v406 )
              goto LABEL_545;
            System_Collections_Generic_HashSet_int___Add(
              v406,
              (int32_t)v424->fields.age,
              (const MethodInfo_21D915C *)Method_System_Collections_Generic_HashSet_int__Add__);
            if ( !v411 )
              goto LABEL_545;
            System_Collections_Generic_HashSet_int___Add(
              v411,
              v398[13],
              (const MethodInfo_21D915C *)Method_System_Collections_Generic_HashSet_int__Add__);
          }
          v425 = this->fields.userSvtEntity;
          v426 = System_Linq_Enumerable__ToArray_int_(
                   (System_Collections_Generic_IEnumerable_TSource__o *)v406,
                   (const MethodInfo_19C4A28 *)Method_System_Linq_Enumerable_ToArray_int___);
          v427 = System_Linq_Enumerable__ToArray_int_(
                   (System_Collections_Generic_IEnumerable_TSource__o *)v411,
                   (const MethodInfo_19C4A28 *)Method_System_Linq_Enumerable_ToArray_int___);
          baseUsrSvtData = v489;
          v277 = v492;
          this->fields.isLvExceedItemNum = CombineUtility__CheckCombineNeedItemsEnough(
                                             v425,
                                             v426,
                                             v427,
                                             v483->fields.qp,
                                             v398[8],
                                             0LL);
        }
      }
    }
    v384 = this->fields.type;
  }
  if ( v384 != 8 )
    goto LABEL_530;
  if ( !*p_userSvtEntity )
    goto LABEL_545;
  this->fields.isFriendshipExceedMax = UserServantEntity__isExceedFriendshipMax(
                                         (UserServantEntity_o *)*p_userSvtEntity,
                                         0LL);
  v428 = *(_QWORD *)&v488->fields.friendshipRank.fields.currentCryptoKey;
  v429 = *(_QWORD *)&v488->fields.friendshipRank.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v538.fields.currentCryptoKey = v428;
  *(_QWORD *)&v538.fields.fakeValue = v429;
  v430 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v538, 0LL);
  if ( !*p_servantEntity )
    goto LABEL_545;
  maxFriendshipRank = (*p_servantEntity)->fields.maxFriendshipRank;
  friendshipExceedCount = v488->fields.friendshipExceedCount;
  v433 = this->fields.userSvtEntity;
  this->fields.isParty = v277;
  this->fields.isFriendshipRankMax = v430 == friendshipExceedCount + maxFriendshipRank;
  if ( !v433 )
    goto LABEL_545;
  v434 = UserServantEntity__IsLock(v433, 0LL);
  v435 = this->fields.userSvtEntity;
  this->fields.isLock = v434;
  if ( !v435 )
    goto LABEL_545;
  *p_isChoice = UserServantEntity__IsChoice(v435, 0LL);
  if ( !*p_userSvtEntity )
    goto LABEL_545;
  this->fields.isEventJoin = UserServantEntity__IsEventJoin((UserServantEntity_o *)*p_userSvtEntity, 0LL);
  if ( baseUsrSvtData )
  {
    v436 = (UserServantEntity_o *)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_545;
    v437 = *(_OWORD *)&v436->fields.id.fields.fakeValue;
    *(_OWORD *)&v519.fields.currentCryptoKey = *(_OWORD *)&v436->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v519.fields.fakeValue = v437;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v496 = v519;
    v438 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v496, 0LL);
    v439 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
    *(_OWORD *)&v495.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v495.fields.fakeValue = v439;
    if ( v438 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v495, 0LL) )
      this->fields.isBaseSvt = 1;
  }
  if ( !*p_userSvtEntity )
LABEL_545:
    sub_B170D4();
  if ( UserServantEntity__IsHeroine((UserServantEntity_o *)*p_userSvtEntity, 0LL) )
  {
    this->fields.isHeroineSvt = 1;
    goto LABEL_530;
  }
  if ( !this->fields.isFriendshipRankMax || this->fields.isFriendshipExceedMax )
    goto LABEL_530;
  if ( !*p_servantEntity )
    goto LABEL_545;
  v440 = (*p_servantEntity)->fields.maxFriendshipRank;
  v441 = v488->fields.friendshipExceedCount;
  v442 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v442 )
    goto LABEL_545;
  v443 = (FriendshipMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                 (DataManager_o *)v442,
                                 (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_FriendshipMaster___);
  if ( !*p_servantEntity )
    goto LABEL_545;
  if ( !v443 )
    goto LABEL_545;
  v444 = FriendshipMaster__GetEntity(v443, (*p_servantEntity)->fields.friendshipId, v440 + v441 + 1, 0LL);
  if ( !v444 )
    goto LABEL_545;
  v445 = v444;
  v446 = v444->fields.itemNums;
  v447 = v444->fields.itemIds;
  v448 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v448 )
    goto LABEL_545;
  v449 = DataManager__GetMasterData_WarQuestSelectionMaster_(
           (DataManager_o *)v448,
           (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !v447 )
    goto LABEL_545;
  if ( (int)v447->max_length >= 1 )
  {
    v450 = (UserItemMaster_o *)v449;
    v451 = 0LL;
    v452 = &v447->m_Items[1];
    while ( 1 )
    {
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      v412 = NetworkManager__get_UserId(0LL);
      if ( v451 >= v447->max_length )
        goto LABEL_555;
      if ( !v450 )
        goto LABEL_545;
      v412 = UserItemMaster__TryGetEntity(v450, &v522, v412, v452[v451], 0LL);
      if ( (v412 & 1) == 0 )
        break;
      if ( v451 >= v447->max_length )
        goto LABEL_555;
      if ( !v522 )
        goto LABEL_545;
      if ( v452[v451] == v522->fields.itemId )
      {
        if ( !v446 )
          goto LABEL_545;
        if ( v451 >= v446->max_length )
          goto LABEL_555;
        v453 = v446->m_Items[v451 + 1] <= v522->fields.num;
        goto LABEL_526;
      }
LABEL_527:
      if ( (__int64)++v451 >= (int)v447->max_length )
        goto LABEL_528;
    }
    v453 = 0;
LABEL_526:
    this->fields.isFriendshipExceedItemNum = v453;
    goto LABEL_527;
  }
LABEL_528:
  if ( v483->fields.qp < v445->fields.qp )
    this->fields.isFriendshipExceedItemNum = 0;
LABEL_530:
  if ( !*p_userSvtEntity )
    goto LABEL_545;
  DispLimitCount = UserServantEntity__getDispLimitCount((UserServantEntity_o *)*p_userSvtEntity, 0, 0LL);
  v455 = this->fields.userSvtEntity;
  this->fields.dispLimitCount = DispLimitCount;
  if ( !v455 )
    goto LABEL_545;
  SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v455, -1, 0LL);
  this->fields.skillCategoryIdList = SkillCategoryIdList;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.skillCategoryIdList,
    (System_Int32_array **)SkillCategoryIdList,
    v457,
    v458,
    v459,
    v460,
    v461,
    v462);
  v463 = this->fields.userSvtEntity;
  if ( !v463 )
    goto LABEL_545;
  TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(v463, 0, 0LL);
  this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.tdCategoryIdList,
    (System_Int32_array **)TreasureDeviceCategoryIdList,
    v465,
    v466,
    v467,
    v468,
    v469,
    v470);
  v471 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v471 )
    goto LABEL_545;
  v472 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                          (DataManager_o *)v471,
                                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !v472 )
    goto LABEL_545;
  v473 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
           v472,
           this->fields.classId,
           (const MethodInfo_266F388 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !v473 )
    goto LABEL_545;
  bannerId = v473->fields.bannerId;
  v475 = this->fields.servantEntity;
  this->fields.priority = bannerId;
  this->fields.sortValue1B = bannerId;
  if ( !v475 )
    goto LABEL_545;
  v476 = (UserServantEntity_o *)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_545;
  this->fields.sortValue2 = ((__int64)v475->fields.collectionNo << 16) | ((unsigned __int64)(unsigned int)this->fields.rarity << 48) | v476->fields.lv;
  v478 = *(_QWORD *)&v476->fields.svtId.fields.currentCryptoKey;
  v477 = *(_QWORD *)&v476->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v539.fields.currentCryptoKey = v478;
  *(_QWORD *)&v539.fields.fakeValue = v477;
  v479 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v539, 0LL);
  iconLabelInfo1 = this->fields.iconLabelInfo1;
  this->fields.sortValue2B = v479;
  this->fields.amountSortValue = -1LL;
  if ( !iconLabelInfo1 )
    goto LABEL_545;
  IconLabelInfo__Clear(iconLabelInfo1, 0LL);
  if ( !*p_iconLabelInfo2 )
    goto LABEL_545;
  IconLabelInfo__Clear(*p_iconLabelInfo2, 0LL);
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
  __int64 v4; // x4
  UserServantEntity_o *userSvtEntity; // x0
  SvtUseSkillData_o *v8; // x19

  if ( (byte_40FC928 & 1) == 0 )
  {
    sub_B16FFC(&SvtUseSkillData_TypeInfo, method);
    byte_40FC928 = 1;
  }
  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
    return UserServantEntity__getAppendSkillInfo(userSvtEntity, 0LL);
  v8 = (SvtUseSkillData_o *)sub_B170CC(SvtUseSkillData_TypeInfo, method, v2, v3, v4);
  SvtUseSkillData___ctor(v8, 0LL);
  return v8;
}


bool __fastcall CombineServantListViewItem__GetNpInfo(
        CombineServantListViewItem_o *this,
        int32_t *tdId,
        int32_t *tdLv,
        int32_t *tdMaxLv,
        const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0
  TreasureDvcInfo_o *v9; // x8
  int32_t maxLv; // w8
  TreasureDvcInfo_o *tdInfo; // [xsp+8h] [xbp-18h] BYREF

  tdInfo = 0LL;
  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
  {
    UserServantEntity__getTreasureDeviceInfo(userSvtEntity, &tdInfo, -1, -1, 0, 0LL);
    v9 = tdInfo;
    if ( !tdInfo )
      sub_B170D4();
    LOBYTE(userSvtEntity) = 1;
    *tdId = tdInfo->fields.id;
    *tdLv = v9->fields.lv;
    maxLv = v9->fields.maxLv;
  }
  else
  {
    maxLv = 0;
    *tdId = 0;
    *tdLv = 0;
  }
  *tdMaxLv = maxLv;
  return (char)userSvtEntity;
}


bool __fastcall CombineServantListViewItem__GetSealCombineLimit(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  CombineLimitReleaseMaster_o *Master_WarQuestSelectionMaster; // x0
  struct ServantEntity_o *servantEntity; // x8
  int32_t combineLimitId; // w2
  int32_t condTargetId; // w19
  int32_t condType; // w21
  int64_t condNum; // x20
  CombineLimitReleaseEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40FC929 & 1) == 0 )
  {
    sub_B16FFC(&CondType_TypeInfo, method);
    sub_B16FFC(&Method_DataManager_GetMaster_CombineLimitReleaseMaster___, v3);
    sub_B16FFC(&DataManager_TypeInfo, v4);
    byte_40FC929 = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (CombineLimitReleaseMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_CombineLimitReleaseMaster___);
  servantEntity = this->fields.servantEntity;
  if ( !servantEntity )
    goto LABEL_20;
  combineLimitId = servantEntity->fields.combineLimitId;
  if ( this->fields.type != 9 )
  {
    if ( Master_WarQuestSelectionMaster )
    {
      if ( !CombineLimitReleaseMaster__TryGetEntity(
              Master_WarQuestSelectionMaster,
              &entity,
              combineLimitId,
              this->fields.currentLimitCnt + 1,
              0LL) )
        return 0;
      if ( entity )
      {
        condType = entity->fields.condType;
        condTargetId = entity->fields.condTargetId;
        condNum = entity->fields.condNum;
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        return !CondType__IsOpen(condType, condTargetId, condNum, 0, 0LL);
      }
    }
LABEL_20:
    sub_B170D4();
  }
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_20;
  return CombineLimitReleaseMaster__IsExistSealedLimitCount(Master_WarQuestSelectionMaster, combineLimitId, 0LL);
}


bool __fastcall CombineServantListViewItem__GetSkillInfo(
        CombineServantListViewItem_o *this,
        SkillInfo_array **skillInfoList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UserServantEntity_o *userSvtEntity; // x0
  bool v7; // w20
  BalanceConfig_c *v8; // x0
  SkillInfo_array *v9; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  if ( (byte_40FC927 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, skillInfoList);
    sub_B16FFC(&SkillInfo___TypeInfo, v5);
    byte_40FC927 = 1;
  }
  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
  {
    v7 = 1;
    UserServantEntity__getSkillInfo(userSvtEntity, skillInfoList, -1, -1, 1, 0, -1, 0LL);
  }
  else
  {
    v8 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v8 = BalanceConfig_TypeInfo;
    }
    v9 = (SkillInfo_array *)sub_B17014(SkillInfo___TypeInfo, (unsigned int)v8->static_fields->SvtSkillListMax, method);
    *skillInfoList = v9;
    sub_B16F98((BattleServantConfConponent_o *)skillInfoList, (System_Int32_array **)v9, v10, v11, v12, v13, v14, v15);
    return 0;
  }
  return v7;
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
  System_Collections_Generic_List_Voice_BATTLE__o *ClassGroupFilterKindList; // x0
  ListViewSort_FilterKind_array *v10; // x0
  FilterKindList_c *v11; // x0
  System_Collections_Generic_List_Voice_BATTLE__o *ClassFilterKindList; // x0
  ListViewSort_FilterKind_array *v13; // x0
  FilterKindList_c *v14; // x0
  System_Collections_Generic_List_Voice_BATTLE__o *NpTypeFilterKindList; // x0
  ListViewSort_FilterKind_array *v16; // x0
  FilterKindList_c *v17; // x0
  System_Collections_Generic_List_Voice_BATTLE__o *NpEffectFilterKindList; // x0
  ListViewSort_FilterKind_array *v19; // x0
  FilterKindList_c *v20; // x0
  System_Collections_Generic_List_Voice_BATTLE__o *CombineBaseServantFilterKindList; // x0
  ListViewSort_FilterKind_array *v22; // x0
  UserServantEntity_o *userSvtEntity; // x21
  __int64 v24; // x2
  ListViewSort_FilterKind_array *v25; // x0
  __int64 v26; // x2
  ListViewSort_FilterKind_array *v27; // x1
  FilterKindList_c *v28; // x0
  System_Collections_Generic_List_Voice_BATTLE__o *RarityFilterKindList; // x0
  ListViewSort_FilterKind_array *v30; // x21
  UserServantEntity_o *v32; // x0
  int32_t dispLimitCount; // w21
  UserServantEntity_o *v34; // x0
  int32_t v35; // w0
  UserServantEntity_o *v36; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  UserServantEntity_o *v44; // x0
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  _BOOL4 IsUnSelectedAllTargetFilters; // w21
  __int64 v53; // x2
  _BOOL4 v54; // w23
  _BOOL4 IsMatchEffectCategory; // w22
  _BOOL4 v56; // w0

  if ( (byte_40FC917 & 1) == 0 )
  {
    sub_B16FFC(&FilterKindList_TypeInfo, sort);
    sub_B16FFC(&ListViewSort_FilterKind___TypeInfo, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v6);
    sub_B16FFC(&ServantEventBonusFilterController_TypeInfo, v7);
    byte_40FC917 = 1;
  }
  v8 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v8 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)v8->static_fields->ClassGroupFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_72;
  v10 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           ClassGroupFilterKindList,
                                           (const MethodInfo_2F155D4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_72;
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, v10, 0LL) )
  {
    v11 = FilterKindList_TypeInfo;
    if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
      v11 = FilterKindList_TypeInfo;
    }
    ClassFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)v11->static_fields->ClassFilterKindList;
    if ( !ClassFilterKindList )
      goto LABEL_72;
    v13 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                             ClassFilterKindList,
                                             (const MethodInfo_2F155D4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v13, 0LL)
      && !ListViewSort__IsMatchClassFilter(sort, this->fields.servantEntity, 0LL) )
    {
      return 0;
    }
  }
  else if ( !ListViewSort__IsMatchClassGroupFilter(sort, this->fields.servantEntity, 0LL) )
  {
    return 0;
  }
  v14 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v14 = FilterKindList_TypeInfo;
  }
  NpTypeFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)v14->static_fields->NpTypeFilterKindList;
  if ( !NpTypeFilterKindList )
    goto LABEL_72;
  v16 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           NpTypeFilterKindList,
                                           (const MethodInfo_2F155D4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v16, 0LL)
    && !ListViewSort__IsMatchNPTypeFilter(sort, this->fields.userSvtEntity, 0LL) )
  {
    return 0;
  }
  v17 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v17 = FilterKindList_TypeInfo;
  }
  NpEffectFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)v17->static_fields->NpEffectFilterKindList;
  if ( !NpEffectFilterKindList )
    goto LABEL_72;
  v19 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           NpEffectFilterKindList,
                                           (const MethodInfo_2F155D4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v19, 0LL)
    && !ListViewSort__IsMatchNPEffectFilter(sort, this->fields.userSvtEntity, 0LL) )
  {
    return 0;
  }
  v20 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v20 = FilterKindList_TypeInfo;
  }
  CombineBaseServantFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)v20->static_fields->CombineBaseServantFilterKindList;
  if ( !CombineBaseServantFilterKindList )
LABEL_72:
    sub_B170D4();
  v22 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           CombineBaseServantFilterKindList,
                                           (const MethodInfo_2F155D4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v22, 0LL)
    && !ListViewSort__IsMatchServantStatusFilter(sort, this->fields.userSvtEntity, 0LL) )
  {
    return 0;
  }
  if ( !ListViewSort__CheckSvtEventBonusFilterDefaultAll(sort, -1, 0LL) )
  {
    userSvtEntity = this->fields.userSvtEntity;
    if ( (BYTE3(ServantEventBonusFilterController_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantEventBonusFilterController_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantEventBonusFilterController_TypeInfo);
    }
    if ( ServantEventBonusFilterController__IsHideServant(userSvtEntity, sort, -1, 0LL) )
      return 0;
  }
  if ( !ListViewSort__CheckSvtEquipEffectFilterDefaultAll(sort, 0LL) )
  {
    v32 = this->fields.userSvtEntity;
    if ( v32 )
    {
      dispLimitCount = this->fields.dispLimitCount;
      if ( dispLimitCount != UserServantEntity__getDispLimitCount(v32, 0, 0LL) )
      {
        v34 = this->fields.userSvtEntity;
        if ( !v34 )
          goto LABEL_72;
        v35 = UserServantEntity__getDispLimitCount(v34, 0, 0LL);
        v36 = this->fields.userSvtEntity;
        this->fields.dispLimitCount = v35;
        if ( !v36 )
          goto LABEL_72;
        SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v36, -1, 0LL);
        this->fields.skillCategoryIdList = SkillCategoryIdList;
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields.skillCategoryIdList,
          (System_Int32_array **)SkillCategoryIdList,
          v38,
          v39,
          v40,
          v41,
          v42,
          v43);
        v44 = this->fields.userSvtEntity;
        if ( !v44 )
          goto LABEL_72;
        TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(v44, 0, 0LL);
        this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields.tdCategoryIdList,
          (System_Int32_array **)TreasureDeviceCategoryIdList,
          v46,
          v47,
          v48,
          v49,
          v50,
          v51);
      }
    }
    v25 = (ListViewSort_FilterKind_array *)sub_B17014(ListViewSort_FilterKind___TypeInfo, 1LL, v24);
    if ( !v25 )
      goto LABEL_72;
    v27 = v25;
    if ( !v25->max_length )
      goto LABEL_73;
    v25->m_Items[1] = 50;
    IsUnSelectedAllTargetFilters = ListViewSort__IsUnSelectedAllTargetFilters(sort, v25, 0LL);
    v25 = (ListViewSort_FilterKind_array *)sub_B17014(ListViewSort_FilterKind___TypeInfo, 1LL, v53);
    if ( !v25 )
      goto LABEL_72;
    v27 = v25;
    if ( !v25->max_length )
    {
LABEL_73:
      sub_B17100(v25, v27, v26);
      sub_B170A0();
    }
    v25->m_Items[1] = 51;
    v54 = ListViewSort__IsUnSelectedAllTargetFilters(sort, v25, 0LL);
    IsMatchEffectCategory = ServantEquipEffectFilterController__IsMatchEffectCategory(
                              this->fields.tdCategoryIdList,
                              sort,
                              0LL);
    v56 = ServantEquipEffectFilterController__IsMatchEffectCategory(this->fields.skillCategoryIdList, sort, 0LL);
    if ( ((IsUnSelectedAllTargetFilters ^ v54) & 1) != 0 )
    {
      if ( IsUnSelectedAllTargetFilters )
      {
        if ( !v56 )
          return 0;
      }
      else if ( !IsMatchEffectCategory )
      {
        return 0;
      }
    }
    else if ( !IsMatchEffectCategory && !v56 )
    {
      return 0;
    }
  }
  v25 = (ListViewSort_FilterKind_array *)sub_B17014(ListViewSort_FilterKind___TypeInfo, 1LL, v24);
  if ( !v25 )
    goto LABEL_72;
  v27 = v25;
  if ( !v25->max_length )
    goto LABEL_73;
  v25->m_Items[1] = 39;
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v25, 0LL)
    && ListViewSort__GetFilter(sort, 39, 0LL)
    && this->fields.isSwapChoice == this->fields.isChoice )
  {
    return 0;
  }
  v28 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v28 = FilterKindList_TypeInfo;
  }
  RarityFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)v28->static_fields->RarityFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_72;
  v30 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           RarityFilterKindList,
                                           (const MethodInfo_2F155D4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v30, 0LL)
      || ListViewSort__IsSelectedAllTargetFilters(sort, v30, 0LL)
      || ListViewSort__IsMatchRarityFilter(sort, this->fields.rarity, 0LL);
}


bool __fastcall CombineServantListViewItem__IsMatchMaterialFilter(
        CombineServantListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  _BOOL4 v8; // w21
  FilterKindList_c *v9; // x0
  System_Collections_Generic_List_Voice_BATTLE__o *ClassGroupFilterKindList; // x0
  ListViewSort_FilterKind_array *v11; // x0
  FilterKindList_c *v12; // x0
  System_Collections_Generic_List_Voice_BATTLE__o *ClassFilterKindList; // x0
  ListViewSort_FilterKind_array *v14; // x0
  __int64 v15; // x2
  ListViewSort_FilterKind_array *v16; // x0
  __int64 v17; // x2
  ListViewSort_FilterKind_array *v18; // x1
  bool IsMatchClassGroupFilter; // w0
  FilterKindList_c *v20; // x0
  System_Collections_Generic_List_Voice_BATTLE__o *NpTypeFilterKindList; // x0
  ListViewSort_FilterKind_array *v22; // x0
  FilterKindList_c *v23; // x0
  System_Collections_Generic_List_Voice_BATTLE__o *NpEffectFilterKindList; // x0
  ListViewSort_FilterKind_array *v25; // x0
  FilterKindList_c *v26; // x0
  System_Collections_Generic_List_Voice_BATTLE__o *ServantTypeFilterKindList; // x0
  ListViewSort_FilterKind_array *v28; // x0
  UserServantEntity_o *userSvtEntity; // x21
  __int64 v30; // x2
  __int64 v31; // x2
  int v32; // w21
  UserServantEntity_o *v33; // x0
  int32_t dispLimitCount; // w21
  UserServantEntity_o *v35; // x0
  int32_t v36; // w0
  UserServantEntity_o *v37; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  UserServantEntity_o *v45; // x0
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  _BOOL4 IsUnSelectedAllTargetFilters; // w21
  __int64 v54; // x2
  _BOOL4 v55; // w23
  _BOOL4 IsMatchEffectCategory; // w22
  _BOOL4 v57; // w0
  const MethodInfo *v58; // x1
  bool CanNotSelect; // w0
  FilterKindList_c *v60; // x0
  System_Collections_Generic_List_Voice_BATTLE__o *RarityFilterKindList; // x0
  ListViewSort_FilterKind_array *v62; // x21

  if ( (byte_40FC918 & 1) == 0 )
  {
    sub_B16FFC(&FilterKindList_TypeInfo, sort);
    sub_B16FFC(&ListViewSort_FilterKind___TypeInfo, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v6);
    sub_B16FFC(&ServantEventBonusFilterController_TypeInfo, v7);
    byte_40FC918 = 1;
  }
  if ( !sort )
    goto LABEL_88;
  v8 = ListViewSort__GetFilter(sort, 28, 0LL) && this->fields.isSameClass;
  v9 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v9 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)v9->static_fields->ClassGroupFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_88;
  v11 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           ClassGroupFilterKindList,
                                           (const MethodInfo_2F155D4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v11, 0LL) )
  {
    IsMatchClassGroupFilter = ListViewSort__IsMatchClassGroupFilter(sort, this->fields.servantEntity, 0LL);
    if ( v8 )
      goto LABEL_24;
    goto LABEL_21;
  }
  v12 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v12 = FilterKindList_TypeInfo;
  }
  ClassFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)v12->static_fields->ClassFilterKindList;
  if ( !ClassFilterKindList )
    goto LABEL_88;
  v14 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           ClassFilterKindList,
                                           (const MethodInfo_2F155D4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v14, 0LL) )
    goto LABEL_92;
  v16 = (ListViewSort_FilterKind_array *)sub_B17014(ListViewSort_FilterKind___TypeInfo, 1LL, v15);
  if ( !v16 )
    goto LABEL_88;
  v18 = v16;
  if ( !v16->max_length )
    goto LABEL_89;
  v16->m_Items[1] = 28;
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v16, 0LL) )
  {
LABEL_92:
    IsMatchClassGroupFilter = ListViewSort__IsMatchClassFilter(sort, this->fields.servantEntity, 0LL);
    if ( !v8 )
    {
LABEL_21:
      if ( !IsMatchClassGroupFilter )
        return 0;
    }
  }
LABEL_24:
  v20 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v20 = FilterKindList_TypeInfo;
  }
  NpTypeFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)v20->static_fields->NpTypeFilterKindList;
  if ( !NpTypeFilterKindList )
    goto LABEL_88;
  v22 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           NpTypeFilterKindList,
                                           (const MethodInfo_2F155D4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v22, 0LL)
    && !ListViewSort__IsMatchNPTypeFilter(sort, this->fields.userSvtEntity, 0LL) )
  {
    return 0;
  }
  v23 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v23 = FilterKindList_TypeInfo;
  }
  NpEffectFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)v23->static_fields->NpEffectFilterKindList;
  if ( !NpEffectFilterKindList )
    goto LABEL_88;
  v25 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           NpEffectFilterKindList,
                                           (const MethodInfo_2F155D4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v25, 0LL)
    && !ListViewSort__IsMatchNPEffectFilter(sort, this->fields.userSvtEntity, 0LL) )
  {
    return 0;
  }
  v26 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v26 = FilterKindList_TypeInfo;
  }
  ServantTypeFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)v26->static_fields->ServantTypeFilterKindList;
  if ( !ServantTypeFilterKindList )
LABEL_88:
    sub_B170D4();
  v28 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           ServantTypeFilterKindList,
                                           (const MethodInfo_2F155D4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v28, 0LL)
    && !ListViewSort__IsMatchServantTypeFilter(sort, this->fields.servantEntity, 0LL) )
  {
    return 0;
  }
  if ( !ListViewSort__CheckSvtEventBonusFilterDefaultAll(sort, -1, 0LL) )
  {
    userSvtEntity = this->fields.userSvtEntity;
    if ( (BYTE3(ServantEventBonusFilterController_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantEventBonusFilterController_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantEventBonusFilterController_TypeInfo);
    }
    if ( ServantEventBonusFilterController__IsHideServant(userSvtEntity, sort, -1, 0LL) )
      return 0;
  }
  if ( !ListViewSort__CheckSvtEquipEffectFilterDefaultAll(sort, 0LL) )
  {
    v33 = this->fields.userSvtEntity;
    if ( v33 )
    {
      dispLimitCount = this->fields.dispLimitCount;
      if ( dispLimitCount != UserServantEntity__getDispLimitCount(v33, 0, 0LL) )
      {
        v35 = this->fields.userSvtEntity;
        if ( !v35 )
          goto LABEL_88;
        v36 = UserServantEntity__getDispLimitCount(v35, 0, 0LL);
        v37 = this->fields.userSvtEntity;
        this->fields.dispLimitCount = v36;
        if ( !v37 )
          goto LABEL_88;
        SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v37, -1, 0LL);
        this->fields.skillCategoryIdList = SkillCategoryIdList;
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields.skillCategoryIdList,
          (System_Int32_array **)SkillCategoryIdList,
          v39,
          v40,
          v41,
          v42,
          v43,
          v44);
        v45 = this->fields.userSvtEntity;
        if ( !v45 )
          goto LABEL_88;
        TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(v45, 0, 0LL);
        this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields.tdCategoryIdList,
          (System_Int32_array **)TreasureDeviceCategoryIdList,
          v47,
          v48,
          v49,
          v50,
          v51,
          v52);
      }
    }
    v16 = (ListViewSort_FilterKind_array *)sub_B17014(ListViewSort_FilterKind___TypeInfo, 1LL, v30);
    if ( !v16 )
      goto LABEL_88;
    v18 = v16;
    if ( !v16->max_length )
      goto LABEL_89;
    v16->m_Items[1] = 50;
    IsUnSelectedAllTargetFilters = ListViewSort__IsUnSelectedAllTargetFilters(sort, v16, 0LL);
    v16 = (ListViewSort_FilterKind_array *)sub_B17014(ListViewSort_FilterKind___TypeInfo, 1LL, v54);
    if ( !v16 )
      goto LABEL_88;
    v18 = v16;
    if ( !v16->max_length )
      goto LABEL_89;
    v16->m_Items[1] = 51;
    v55 = ListViewSort__IsUnSelectedAllTargetFilters(sort, v16, 0LL);
    IsMatchEffectCategory = ServantEquipEffectFilterController__IsMatchEffectCategory(
                              this->fields.tdCategoryIdList,
                              sort,
                              0LL);
    v57 = ServantEquipEffectFilterController__IsMatchEffectCategory(this->fields.skillCategoryIdList, sort, 0LL);
    if ( ((IsUnSelectedAllTargetFilters ^ v55) & 1) != 0 )
    {
      if ( IsUnSelectedAllTargetFilters )
      {
        if ( !v57 )
          return 0;
      }
      else if ( !IsMatchEffectCategory )
      {
        return 0;
      }
    }
    else if ( !IsMatchEffectCategory && !v57 )
    {
      return 0;
    }
  }
  v16 = (ListViewSort_FilterKind_array *)sub_B17014(ListViewSort_FilterKind___TypeInfo, 1LL, v30);
  if ( !v16 )
    goto LABEL_88;
  v18 = v16;
  if ( !v16->max_length )
    goto LABEL_89;
  v16->m_Items[1] = 39;
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, v16, 0LL) )
  {
    v16 = (ListViewSort_FilterKind_array *)sub_B17014(ListViewSort_FilterKind___TypeInfo, 1LL, v31);
    if ( !v16 )
      goto LABEL_88;
    v18 = v16;
    if ( v16->max_length )
    {
      v16->m_Items[1] = 29;
      if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, v16, 0LL) )
        goto LABEL_76;
      goto LABEL_54;
    }
LABEL_89:
    sub_B17100(v16, v18, v17);
    sub_B170A0();
  }
LABEL_54:
  if ( ListViewSort__GetFilter(sort, 39, 0LL) )
    v32 = this->fields.isSwapChoice ^ this->fields.isChoice;
  else
    v32 = 0;
  if ( ListViewSort__GetFilter(sort, 29, 0LL) )
  {
    CanNotSelect = CombineServantListViewItem__get_IsCanNotSelect(this, v58);
    if ( v32 )
      goto LABEL_76;
  }
  else
  {
    CanNotSelect = 1;
    if ( v32 )
      goto LABEL_76;
  }
  if ( CanNotSelect )
    return 0;
LABEL_76:
  v60 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v60 = FilterKindList_TypeInfo;
  }
  RarityFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)v60->static_fields->RarityFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_88;
  v62 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           RarityFilterKindList,
                                           (const MethodInfo_2F155D4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v62, 0LL)
      || ListViewSort__IsSelectedAllTargetFilters(sort, v62, 0LL)
      || ListViewSort__IsMatchRarityFilter(sort, this->fields.rarity, 0LL);
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
  System_Collections_Generic_List_Voice_BATTLE__o *ClassGroupFilterKindList; // x0
  ListViewSort_FilterKind_array *v10; // x0
  FilterKindList_c *v11; // x0
  System_Collections_Generic_List_Voice_BATTLE__o *ClassFilterKindList; // x0
  ListViewSort_FilterKind_array *v13; // x0
  FilterKindList_c *v14; // x0
  System_Collections_Generic_List_Voice_BATTLE__o *NpTypeFilterKindList; // x0
  ListViewSort_FilterKind_array *v16; // x0
  FilterKindList_c *v17; // x0
  System_Collections_Generic_List_Voice_BATTLE__o *NpEffectFilterKindList; // x0
  ListViewSort_FilterKind_array *v19; // x0
  UserServantEntity_o *userSvtEntity; // x21
  __int64 v21; // x2
  ListViewSort_FilterKind_array *v22; // x0
  __int64 v23; // x2
  ListViewSort_FilterKind_array *v24; // x1
  FilterKindList_c *v25; // x0
  System_Collections_Generic_List_Voice_BATTLE__o *RarityFilterKindList; // x0
  ListViewSort_FilterKind_array *v27; // x21
  UserServantEntity_o *v29; // x0
  int32_t dispLimitCount; // w21
  UserServantEntity_o *v31; // x0
  int32_t v32; // w0
  UserServantEntity_o *v33; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  UserServantEntity_o *v41; // x0
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  _BOOL4 IsUnSelectedAllTargetFilters; // w21
  __int64 v50; // x2
  _BOOL4 v51; // w23
  _BOOL4 IsMatchEffectCategory; // w22
  _BOOL4 v53; // w0

  if ( (byte_40FC916 & 1) == 0 )
  {
    sub_B16FFC(&FilterKindList_TypeInfo, sort);
    sub_B16FFC(&ListViewSort_FilterKind___TypeInfo, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v6);
    sub_B16FFC(&ServantEventBonusFilterController_TypeInfo, v7);
    byte_40FC916 = 1;
  }
  v8 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v8 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)v8->static_fields->ClassGroupFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_66;
  v10 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           ClassGroupFilterKindList,
                                           (const MethodInfo_2F155D4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_66;
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, v10, 0LL) )
  {
    v11 = FilterKindList_TypeInfo;
    if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
      v11 = FilterKindList_TypeInfo;
    }
    ClassFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)v11->static_fields->ClassFilterKindList;
    if ( !ClassFilterKindList )
      goto LABEL_66;
    v13 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                             ClassFilterKindList,
                                             (const MethodInfo_2F155D4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v13, 0LL)
      && !ListViewSort__IsMatchClassFilter(sort, this->fields.servantEntity, 0LL) )
    {
      return 0;
    }
  }
  else if ( !ListViewSort__IsMatchClassGroupFilter(sort, this->fields.servantEntity, 0LL) )
  {
    return 0;
  }
  v14 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v14 = FilterKindList_TypeInfo;
  }
  NpTypeFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)v14->static_fields->NpTypeFilterKindList;
  if ( !NpTypeFilterKindList )
    goto LABEL_66;
  v16 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           NpTypeFilterKindList,
                                           (const MethodInfo_2F155D4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v16, 0LL)
    && !ListViewSort__IsMatchNPTypeFilter(sort, this->fields.userSvtEntity, 0LL) )
  {
    return 0;
  }
  v17 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v17 = FilterKindList_TypeInfo;
  }
  NpEffectFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)v17->static_fields->NpEffectFilterKindList;
  if ( !NpEffectFilterKindList )
LABEL_66:
    sub_B170D4();
  v19 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           NpEffectFilterKindList,
                                           (const MethodInfo_2F155D4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v19, 0LL)
    && !ListViewSort__IsMatchNPEffectFilter(sort, this->fields.userSvtEntity, 0LL) )
  {
    return 0;
  }
  if ( !ListViewSort__CheckSvtEventBonusFilterDefaultAll(sort, -1, 0LL) )
  {
    userSvtEntity = this->fields.userSvtEntity;
    if ( (BYTE3(ServantEventBonusFilterController_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantEventBonusFilterController_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantEventBonusFilterController_TypeInfo);
    }
    if ( ServantEventBonusFilterController__IsHideServant(userSvtEntity, sort, -1, 0LL) )
      return 0;
  }
  if ( !ListViewSort__CheckSvtEquipEffectFilterDefaultAll(sort, 0LL) )
  {
    v29 = this->fields.userSvtEntity;
    if ( v29 )
    {
      dispLimitCount = this->fields.dispLimitCount;
      if ( dispLimitCount != UserServantEntity__getDispLimitCount(v29, 0, 0LL) )
      {
        v31 = this->fields.userSvtEntity;
        if ( !v31 )
          goto LABEL_66;
        v32 = UserServantEntity__getDispLimitCount(v31, 0, 0LL);
        v33 = this->fields.userSvtEntity;
        this->fields.dispLimitCount = v32;
        if ( !v33 )
          goto LABEL_66;
        SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v33, -1, 0LL);
        this->fields.skillCategoryIdList = SkillCategoryIdList;
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields.skillCategoryIdList,
          (System_Int32_array **)SkillCategoryIdList,
          v35,
          v36,
          v37,
          v38,
          v39,
          v40);
        v41 = this->fields.userSvtEntity;
        if ( !v41 )
          goto LABEL_66;
        TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(v41, 0, 0LL);
        this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields.tdCategoryIdList,
          (System_Int32_array **)TreasureDeviceCategoryIdList,
          v43,
          v44,
          v45,
          v46,
          v47,
          v48);
      }
    }
    v22 = (ListViewSort_FilterKind_array *)sub_B17014(ListViewSort_FilterKind___TypeInfo, 1LL, v21);
    if ( !v22 )
      goto LABEL_66;
    v24 = v22;
    if ( !v22->max_length )
      goto LABEL_67;
    v22->m_Items[1] = 50;
    IsUnSelectedAllTargetFilters = ListViewSort__IsUnSelectedAllTargetFilters(sort, v22, 0LL);
    v22 = (ListViewSort_FilterKind_array *)sub_B17014(ListViewSort_FilterKind___TypeInfo, 1LL, v50);
    if ( !v22 )
      goto LABEL_66;
    v24 = v22;
    if ( !v22->max_length )
    {
LABEL_67:
      sub_B17100(v22, v24, v23);
      sub_B170A0();
    }
    v22->m_Items[1] = 51;
    v51 = ListViewSort__IsUnSelectedAllTargetFilters(sort, v22, 0LL);
    IsMatchEffectCategory = ServantEquipEffectFilterController__IsMatchEffectCategory(
                              this->fields.tdCategoryIdList,
                              sort,
                              0LL);
    v53 = ServantEquipEffectFilterController__IsMatchEffectCategory(this->fields.skillCategoryIdList, sort, 0LL);
    if ( ((IsUnSelectedAllTargetFilters ^ v51) & 1) != 0 )
    {
      if ( IsUnSelectedAllTargetFilters )
      {
        if ( !v53 )
          return 0;
      }
      else if ( !IsMatchEffectCategory )
      {
        return 0;
      }
    }
    else if ( !IsMatchEffectCategory && !v53 )
    {
      return 0;
    }
  }
  v22 = (ListViewSort_FilterKind_array *)sub_B17014(ListViewSort_FilterKind___TypeInfo, 1LL, v21);
  if ( !v22 )
    goto LABEL_66;
  v24 = v22;
  if ( !v22->max_length )
    goto LABEL_67;
  v22->m_Items[1] = 39;
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v22, 0LL)
    && ListViewSort__GetFilter(sort, 39, 0LL)
    && this->fields.isSwapChoice == this->fields.isChoice )
  {
    return 0;
  }
  v25 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v25 = FilterKindList_TypeInfo;
  }
  RarityFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)v25->static_fields->RarityFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_66;
  v27 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           RarityFilterKindList,
                                           (const MethodInfo_2F155D4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v27, 0LL)
      || ListViewSort__IsSelectedAllTargetFilters(sort, v27, 0LL)
      || ListViewSort__IsMatchRarityFilter(sort, this->fields.rarity, 0LL);
}


void __fastcall CombineServantListViewItem__ModifyChoiceItem(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0

  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_B170D4();
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
  *(_QWORD *)&this->fields.bonusKind = 0LL;
}


void __fastcall CombineServantListViewItem__ModifyLockItem(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0

  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_B170D4();
  this->fields.isLock = UserServantEntity__IsLock(userSvtEntity, 0LL);
  this->fields.isSwapLock = 0;
}


void __fastcall CombineServantListViewItem__ModifyPushItem(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x0
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v5; // q1
  int64_t pushUserSvtId; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+0h] [xbp-50h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v8; // [xsp+20h] [xbp-30h]

  if ( (byte_40FC915 & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
    byte_40FC915 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame || (userSvtEntity = this->fields.userSvtEntity) == 0LL )
    sub_B170D4();
  v5 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  pushUserSvtId = SelfUserGame->fields.pushUserSvtId;
  *(_OWORD *)&v8.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v8.fields.fakeValue = v5;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v7 = v8;
  this->fields.isPush = pushUserSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v7, 0LL);
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
  UserServantEntity_o *userSvtEntity; // x0
  SvtUseSkillData_o *AppendSkillInfo; // x0
  SvtUseSkillData_o *v14; // x20
  void *SelfUserGame; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  int32_t v20; // w21
  struct System_Int32_array *svtUseSkillIdList; // x8
  __int64 v22; // x22
  unsigned __int64 max_length; // x9
  unsigned __int64 v24; // x25
  struct System_Int32_array *v25; // x8
  struct System_Int32_array *svtSkillLvList; // x8
  struct System_Int32_array *v27; // x8
  __int64 v28; // x27
  unsigned __int64 v29; // x9
  unsigned __int64 v30; // x22
  struct System_Int32_array *v31; // x8
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  struct UserServantEntity_o *v33; // x8
  CombineAppendPassiveSkillMaster_o *v34; // x23
  __int64 v35; // x24
  __int64 v36; // x25
  struct System_Int32_array *svtSkillNumsList; // x8
  struct System_Int32_array *v38; // x9
  struct System_Int32_array *v39; // x8
  System_Collections_Generic_List_int__o *enableAppendSkillUp; // x0
  WarQuestSelectionMaster_o *v41; // x0
  struct UserServantEntity_o *v42; // x8
  SvtAppendPassiveSkillUnlockMaster_o *v43; // x23
  __int64 v44; // x24
  __int64 v45; // x25
  struct System_Int32_array *v46; // x8
  System_Collections_Generic_List_int__o *v47; // [xsp+0h] [xbp-60h]
  CombineAppendPassiveSkillEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v49; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v50; // 0:x0.16

  if ( (byte_40FC914 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_CombineAppendPassiveSkillMaster___, method);
    sub_B16FFC(&Method_DataManager_GetMaster_SkillMaster___, v3);
    sub_B16FFC(&Method_DataManager_GetMaster_SvtAppendPassiveSkillUnlockMaster___, v4);
    sub_B16FFC(&DataManager_TypeInfo, v5);
    sub_B16FFC(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v6);
    sub_B16FFC(&Method_System_Linq_Enumerable_Any_int___, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v9);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v10);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    byte_40FC914 = 1;
  }
  entity = 0LL;
  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_69;
  AppendSkillInfo = UserServantEntity__getAppendSkillInfo(userSvtEntity, 0LL);
  if ( !AppendSkillInfo )
    return;
  v14 = AppendSkillInfo;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_69;
  v20 = *((_DWORD *)SelfUserGame + 24);
  this->fields.isAppendSkillLvMax = 1;
  svtUseSkillIdList = v14->fields.svtUseSkillIdList;
  if ( !svtUseSkillIdList )
    goto LABEL_69;
  v22 = 8LL;
  while ( 1 )
  {
    max_length = svtUseSkillIdList->max_length;
    v24 = v22 - 8;
    if ( v22 - 8 >= (int)max_length )
      break;
    if ( v24 >= max_length )
      goto LABEL_72;
    if ( *((int *)&svtUseSkillIdList->obj.klass + v22) >= 1 )
    {
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      SelfUserGame = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_SkillMaster___);
      v25 = v14->fields.svtUseSkillIdList;
      if ( !v25 )
        goto LABEL_69;
      if ( v24 >= v25->max_length )
        goto LABEL_72;
      if ( !SelfUserGame )
        goto LABEL_69;
      SelfUserGame = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                       (DataMasterBase_WarMaster__WarEntity__int__o *)SelfUserGame,
                       *((_DWORD *)&v25->obj.klass + v22),
                       (const MethodInfo_266F388 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
      svtSkillLvList = v14->fields.svtSkillLvList;
      if ( !svtSkillLvList )
        goto LABEL_69;
      if ( v24 >= svtSkillLvList->max_length )
      {
LABEL_72:
        sub_B17100(SelfUserGame, v16, v17);
        sub_B170A0();
      }
      if ( !SelfUserGame )
        goto LABEL_69;
      if ( *((_DWORD *)&svtSkillLvList->obj.klass + v22) < *((_DWORD *)SelfUserGame + 10) )
      {
        this->fields.isAppendSkillLvMax = 0;
        break;
      }
      svtUseSkillIdList = v14->fields.svtUseSkillIdList;
    }
    ++v22;
    if ( !svtUseSkillIdList )
      goto LABEL_69;
  }
  v47 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v16,
                                                    v17,
                                                    v18,
                                                    v19);
  System_Collections_Generic_List_int____ctor(
    v47,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  v27 = v14->fields.svtUseSkillIdList;
  if ( !v27 )
LABEL_69:
    sub_B170D4();
  v28 = 8LL;
  while ( 1 )
  {
    v29 = v27->max_length;
    v30 = v28 - 8;
    if ( v28 - 8 >= (int)v29 )
      break;
    if ( v30 >= v29 )
      goto LABEL_72;
    if ( *((int *)&v27->obj.klass + v28) < 1 )
      goto LABEL_68;
    v31 = v14->fields.svtSkillLvList;
    if ( !v31 )
      goto LABEL_69;
    if ( v30 >= v31->max_length )
      goto LABEL_72;
    if ( *((_DWORD *)&v31->obj.klass + v28) )
    {
      if ( (WORD1(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_CombineAppendPassiveSkillMaster___);
      v33 = this->fields.userSvtEntity;
      if ( !v33 )
        goto LABEL_69;
      v34 = (CombineAppendPassiveSkillMaster_o *)Master_WarQuestSelectionMaster;
      v36 = *(_QWORD *)&v33->fields.svtId.fields.currentCryptoKey;
      v35 = *(_QWORD *)&v33->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v49.fields.currentCryptoKey = v36;
      *(_QWORD *)&v49.fields.fakeValue = v35;
      SelfUserGame = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v49, 0LL);
      svtSkillNumsList = v14->fields.svtSkillNumsList;
      if ( !svtSkillNumsList )
        goto LABEL_69;
      if ( v30 >= svtSkillNumsList->max_length )
        goto LABEL_72;
      v38 = v14->fields.svtSkillLvList;
      if ( !v38 )
        goto LABEL_69;
      if ( v30 >= v38->max_length )
        goto LABEL_72;
      if ( !v34 )
        goto LABEL_69;
      SelfUserGame = (void *)CombineAppendPassiveSkillMaster__TryGetEntityWithTryNum(
                               v34,
                               &entity,
                               (int32_t)SelfUserGame,
                               *((_DWORD *)&svtSkillNumsList->obj.klass + v28),
                               *((_DWORD *)&v38->obj.klass + v28),
                               0LL);
      if ( ((unsigned __int8)SelfUserGame & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_69;
        SelfUserGame = (void *)CombineUtility__CheckCombineNeedItemsEnough(
                                 this->fields.userSvtEntity,
                                 entity->fields.itemIds,
                                 entity->fields.itemNums,
                                 v20,
                                 entity->fields.qp,
                                 0LL);
        if ( ((unsigned __int8)SelfUserGame & 1) != 0 )
        {
          v39 = v14->fields.svtUseSkillIdList;
          if ( !v39 )
            goto LABEL_69;
          if ( v30 >= v39->max_length )
            goto LABEL_72;
          enableAppendSkillUp = this->fields.enableAppendSkillUp;
          if ( !enableAppendSkillUp )
            goto LABEL_69;
LABEL_67:
          System_Collections_Generic_List_int___Add(
            enableAppendSkillUp,
            *((_DWORD *)&v39->obj.klass + v28),
            (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
        }
      }
    }
    else
    {
      if ( (WORD1(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      v41 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_SvtAppendPassiveSkillUnlockMaster___);
      v42 = this->fields.userSvtEntity;
      if ( !v42 )
        goto LABEL_69;
      v43 = (SvtAppendPassiveSkillUnlockMaster_o *)v41;
      v45 = *(_QWORD *)&v42->fields.svtId.fields.currentCryptoKey;
      v44 = *(_QWORD *)&v42->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v50.fields.currentCryptoKey = v45;
      *(_QWORD *)&v50.fields.fakeValue = v44;
      SelfUserGame = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v50, 0LL);
      v46 = v14->fields.svtSkillNumsList;
      if ( !v46 )
        goto LABEL_69;
      if ( v30 >= v46->max_length )
        goto LABEL_72;
      if ( !v43 )
        goto LABEL_69;
      SelfUserGame = SvtAppendPassiveSkillUnlockMaster__GetEntity(
                       v43,
                       (int32_t)SelfUserGame,
                       *((_DWORD *)&v46->obj.klass + v28),
                       0LL);
      if ( SelfUserGame )
      {
        SelfUserGame = (void *)CombineUtility__CheckCombineNeedItemsEnough(
                                 this->fields.userSvtEntity,
                                 *((System_Int32_array **)SelfUserGame + 3),
                                 *((System_Int32_array **)SelfUserGame + 4),
                                 v20,
                                 0,
                                 0LL);
        if ( ((unsigned __int8)SelfUserGame & 1) != 0 )
        {
          v39 = v14->fields.svtUseSkillIdList;
          if ( !v39 )
            goto LABEL_69;
          if ( v30 >= v39->max_length )
            goto LABEL_72;
          enableAppendSkillUp = v47;
          if ( !v47 )
            goto LABEL_69;
          goto LABEL_67;
        }
      }
    }
LABEL_68:
    v27 = v14->fields.svtUseSkillIdList;
    ++v28;
    if ( !v27 )
      goto LABEL_69;
  }
  this->fields.isAppendSkillUpItemNum = System_Linq_Enumerable__Any_int_(
                                          (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.enableAppendSkillUp,
                                          (const MethodInfo_18C7BC4 *)Method_System_Linq_Enumerable_Any_int___);
  this->fields.isAppendSkillOpenItemNum = System_Linq_Enumerable__Any_int_(
                                            (System_Collections_Generic_IEnumerable_TSource__o *)v47,
                                            (const MethodInfo_18C7BC4 *)Method_System_Linq_Enumerable_Any_int___);
}


void __fastcall CombineServantListViewItem__SetIsCombineExpCampaignTarget(
        CombineServantListViewItem_o *this,
        System_Collections_Generic_List_EventCampaignEntity__o *eventCampaignEntities,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x20
  _BOOL8 IsExchangeSvt; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  int32_t size; // w8
  __int64 v16; // x22
  unsigned int v17; // w24
  __int64 v18; // x8
  int v19; // w8
  int monitor; // w23
  unsigned int v21; // w21
  EventMissionProgressRequest_Argument_ProgressData_o *v22; // x8
  UserServantEntity_o *userSvtEntity; // x0
  EventMissionProgressRequest_Argument_ProgressData_c *klass; // x8
  int namespaze; // w9
  unsigned int v26; // w10
  EventMissionProgressRequest_Argument_ProgressData_o *v27; // x8
  EventMissionProgressRequest_Argument_ProgressData_o *v28; // x8

  if ( (byte_40FC91A & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__, eventCampaignEntities);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Count__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__, v9);
    sub_B16FFC(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo, v10);
    byte_40FC91A = 1;
  }
  this->fields.isCombineExpCampaignTarget = 0;
  this->fields.combineExpCampaignValue = 0.0;
  if ( !eventCampaignEntities || this->fields.type )
    return;
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_EventCampaignEntity__TypeInfo,
                                                                                                  eventCampaignEntities,
                                                                                                  method,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
  size = eventCampaignEntities->fields._size;
  if ( size >= 1 )
  {
    v16 = 4LL;
    while ( 1 )
    {
      v17 = v16 - 4;
      if ( size <= (unsigned int)(v16 - 4) )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v18 = *((_QWORD *)&eventCampaignEntities->fields._items->obj.klass + v16);
      if ( !v18 )
        break;
      if ( *(_DWORD *)(v18 + 20) == 2 )
        goto LABEL_14;
      if ( eventCampaignEntities->fields._size <= v17 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      if ( *(_DWORD *)(v18 + 20) == 27 )
      {
LABEL_14:
        if ( eventCampaignEntities->fields._size <= v17 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        if ( !v11 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v11,
          *((EventMissionProgressRequest_Argument_ProgressData_o **)&eventCampaignEntities->fields._items->obj.klass
          + v16),
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
      }
      size = eventCampaignEntities->fields._size;
      if ( (int)++v16 - 4 >= size )
        goto LABEL_19;
    }
LABEL_54:
    sub_B170D4();
  }
LABEL_19:
  if ( !v11 )
    return;
  v19 = v11->fields._size;
  if ( v19 < 1 )
  {
    monitor = 0;
    goto LABEL_52;
  }
  monitor = 0;
  v21 = 0;
  while ( 1 )
  {
    if ( v19 <= v21 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v22 = v11->fields._items->m_Items[v21];
    if ( !v22 )
      goto LABEL_54;
    if ( v22->fields.missionConditionDetailId == 27 )
      break;
    if ( v11->fields._size <= v21 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    klass = v22[1].klass;
    if ( !klass )
      goto LABEL_54;
    namespaze = (int)klass->_1.namespaze;
    if ( namespaze >= 1 )
    {
      v26 = 0;
      while ( 1 )
      {
        if ( v26 >= namespaze )
        {
          sub_B17100(IsExchangeSvt, v13, v14);
          sub_B170A0();
        }
        if ( this->fields.svtId == *((_DWORD *)&klass->_1.byval_arg.data + (int)v26) )
          break;
        if ( (int)++v26 >= namespaze )
          goto LABEL_45;
      }
      this->fields.isCombineExpCampaignTarget = 1;
      if ( v11->fields._size <= v21 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v27 = v11->fields._items->m_Items[v21];
      if ( !v27 )
        goto LABEL_54;
      if ( SLODWORD(v27[1].monitor) > monitor )
      {
        if ( v11->fields._size <= v21 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        monitor = (int)v27[1].monitor;
      }
    }
LABEL_45:
    v19 = v11->fields._size;
    if ( (int)++v21 >= v19 )
      goto LABEL_52;
  }
  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_54;
  IsExchangeSvt = UserServantEntity__IsExchangeSvt(userSvtEntity, 0LL);
  if ( !IsExchangeSvt )
    goto LABEL_45;
  this->fields.isCombineExpCampaignTarget = 1;
  if ( v11->fields._size <= v21 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  v28 = v11->fields._items->m_Items[v21];
  if ( !v28 )
    goto LABEL_54;
  monitor = (int)v28[1].monitor;
LABEL_52:
  this->fields.combineExpCampaignValue = (float)monitor / 1000.0;
}


void __fastcall CombineServantListViewItem__SetNoticeTween(
        CombineServantListViewItem_o *this,
        CombineServantListViewNoticeTween_o *noticeTween,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._NoticeTween_k__BackingField = noticeTween;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._NoticeTween_k__BackingField,
    (System_Int32_array **)noticeTween,
    (System_String_array **)method,
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
  UserGameEntity_o *SelfUserGame; // x0
  UserServantEntity_o *userSvtEntity; // x8
  System_Int32_array *SkillIdList; // x0
  struct UserServantEntity_o *v13; // x8
  System_Int32_array *v14; // x21
  __int64 v15; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x8
  __int64 v19; // x22
  unsigned __int64 v20; // x20
  int32_t v21; // w23
  int v22; // w19
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  WebViewManager_o *v25; // x0
  __int64 v26; // x8
  CombineServantListViewItem_o *v27; // x19
  CombineSkillMaster_o *v28; // x20
  unsigned __int64 v29; // x27
  char v30; // w26
  int32_t v31; // w24
  struct ServantEntity_o *servantEntity; // x8
  CombineSkillMaster_o *v33; // x21
  struct System_Int32_array *itemIds; // x20
  struct System_Int32_array *itemNums; // x28
  WebViewManager_o *v36; // x0
  int max_length; // w8
  UserItemMaster_o *v38; // x25
  il2cpp_array_size_t v39; // w9
  il2cpp_array_size_t v40; // w23
  struct UserServantEntity_o *v41; // x8
  __int128 v42; // q1
  int32_t v43; // w26
  int32_t v44; // w19
  int64_t v45; // x0
  struct System_Collections_Generic_List_int__o **p_enableSkillUp; // x8
  struct System_Collections_Generic_List_int__o *v47; // x8
  System_Collections_Generic_List_int__o **v48; // [xsp+0h] [xbp-C0h]
  System_Int32_array *v49; // [xsp+8h] [xbp-B8h]
  UserGameEntity_o *v50; // [xsp+10h] [xbp-B0h]
  CombineServantListViewItem_o *v51; // [xsp+18h] [xbp-A8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v52; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v53; // [xsp+40h] [xbp-80h]
  UserItemEntity_o *v54; // [xsp+60h] [xbp-60h] BYREF
  CombineSkillEntity_o *entity; // [xsp+68h] [xbp-58h] BYREF

  if ( (byte_40FC913 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_CombineSkillMaster___, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_SkillMaster___, v3);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserItemMaster___, v4);
    sub_B16FFC(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Count__, v7);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_40FC913 = 1;
  }
  entity = 0LL;
  v54 = 0LL;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  userSvtEntity = this->fields.userSvtEntity;
  v50 = SelfUserGame;
  if ( !userSvtEntity )
    goto LABEL_60;
  SkillIdList = UserServantEntity__getSkillIdList(userSvtEntity, -1, -1, 1, 0LL);
  v13 = this->fields.userSvtEntity;
  if ( !v13 )
    goto LABEL_60;
  v14 = SkillIdList;
  v15 = ((__int64 (__fastcall *)(struct UserServantEntity_o *, void *))v13->klass->vtable._6_getSkillLevelList.method)(
          this->fields.userSvtEntity,
          v13->klass[1]._1.image);
  v51 = this;
  this->fields.isSkillLvMax = 1;
  if ( !v14 )
    goto LABEL_60;
  v18 = *(_QWORD *)&v14->max_length;
  v19 = v15;
  if ( (int)v18 >= 1 )
  {
    v20 = 0LL;
    while ( 1 )
    {
      if ( v20 >= (unsigned int)v18 )
        goto LABEL_61;
      if ( !v19 )
        goto LABEL_60;
      if ( v20 >= *(unsigned int *)(v19 + 24) )
      {
LABEL_61:
        sub_B17100(v15, v16, v17);
        sub_B170A0();
      }
      v21 = v14->m_Items[v20 + 1];
      if ( v21 >= 1 )
      {
        v22 = *(_DWORD *)(v19 + 32 + 4 * v20);
        Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_60;
        MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                              (DataManager_o *)Instance,
                                                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_SkillMaster___);
        if ( !MasterData_WarQuestSelectionMaster )
          goto LABEL_60;
        v15 = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                         MasterData_WarQuestSelectionMaster,
                         v21,
                         (const MethodInfo_266F388 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        if ( !v15 )
          goto LABEL_60;
        if ( v22 < *(_DWORD *)(v15 + 40) )
          break;
      }
      LODWORD(v18) = v14->max_length;
      if ( (__int64)++v20 >= (int)v18 )
        goto LABEL_19;
    }
    v51->fields.isSkillLvMax = 0;
  }
LABEL_19:
  v25 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v25 )
    goto LABEL_60;
  v15 = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                   (DataManager_o *)v25,
                   (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_CombineSkillMaster___);
  v26 = *(_QWORD *)&v14->max_length;
  v27 = v51;
  if ( (int)v26 <= 0 )
  {
    p_enableSkillUp = &v51->fields.enableSkillUp;
  }
  else
  {
    v28 = (CombineSkillMaster_o *)v15;
    v29 = 0LL;
    v30 = 0;
    v48 = &v51->fields.enableSkillUp;
    v49 = v14;
    do
    {
      if ( v29 >= (unsigned int)v26 )
        goto LABEL_61;
      if ( !v19 )
        goto LABEL_60;
      if ( v29 >= *(unsigned int *)(v19 + 24) )
        goto LABEL_61;
      v31 = v14->m_Items[v29 + 1];
      if ( v31 >= 1 )
      {
        servantEntity = v27->fields.servantEntity;
        if ( !servantEntity || !v28 )
          goto LABEL_60;
        v15 = CombineSkillMaster__TryGetEntity(
                v28,
                &entity,
                servantEntity->fields.combineSkillId,
                *(_DWORD *)(v19 + 4 * v29 + 32),
                0LL);
        if ( (v15 & 1) != 0 )
        {
          if ( !entity )
            goto LABEL_60;
          v33 = v28;
          itemIds = entity->fields.itemIds;
          itemNums = entity->fields.itemNums;
          v36 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !v36 )
            goto LABEL_60;
          v15 = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                           (DataManager_o *)v36,
                           (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserItemMaster___);
          if ( !itemIds )
            goto LABEL_60;
          max_length = itemIds->max_length;
          if ( max_length >= 1 )
          {
            v38 = (UserItemMaster_o *)v15;
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
              v41 = v51->fields.userSvtEntity;
              if ( !v41 )
                goto LABEL_60;
              v42 = *(_OWORD *)&v41->fields.userId.fields.fakeValue;
              v43 = itemIds->m_Items[v39 + 1];
              v44 = itemNums->m_Items[v39 + 1];
              *(_OWORD *)&v53.fields.currentCryptoKey = *(_OWORD *)&v41->fields.userId.fields.currentCryptoKey;
              *(_OWORD *)&v53.fields.fakeValue = v42;
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
              }
              v52 = v53;
              v45 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v52, 0LL);
              if ( !v38 )
                goto LABEL_60;
              v15 = UserItemMaster__TryGetEntity(v38, &v54, v45, v43, 0LL);
              if ( (v15 & 1) == 0 )
                break;
              if ( !v54 )
                goto LABEL_60;
              if ( v44 > v54->fields.num )
                break;
              max_length = itemIds->max_length;
              v39 = v40 + 1;
              if ( (int)(v40 + 1) >= max_length )
              {
                v30 = 1;
                goto LABEL_48;
              }
            }
            v30 = 0;
          }
LABEL_48:
          if ( !v50 )
            goto LABEL_60;
          v27 = v51;
          if ( !entity )
            goto LABEL_60;
          v28 = v33;
          v14 = v49;
          if ( v50->fields.qp < entity->fields.qp || (v30 & 1) == 0 )
          {
            v30 = 0;
          }
          else
          {
            if ( !*v48 )
              goto LABEL_60;
            System_Collections_Generic_List_int___Add(
              *v48,
              v31,
              (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
            v30 = 1;
          }
        }
      }
      LODWORD(v26) = v14->max_length;
      ++v29;
    }
    while ( (__int64)v29 < (int)v26 );
    p_enableSkillUp = &v51->fields.enableSkillUp;
  }
  v47 = *p_enableSkillUp;
  if ( !v47 || !v27 )
LABEL_60:
    sub_B170D4();
  v27->fields.isSkillUpItemNum = v47->fields._size > 0;
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
  const MethodInfo *v10; // x3
  int32_t bonusKind2; // w8
  struct ListViewManager_o *manager; // x8
  __int64 v13; // x11
  struct ListViewManager_o *v14; // x21
  int32_t *p_bonusKind2Id; // x8
  int32_t *v16; // x8
  int32_t v17; // w2
  UserServantEntity_o *userSvtEntity; // x0
  bool EventUpVal_21445528; // w0
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  int32_t svtId; // w22
  ServantFilterMaster_o *v23; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // kr00_16
  int32_t bonusKind2Id; // w1
  bool IsLargeSuccessCampaignServantId; // w0
  struct UserServantEntity_o *v27; // x8
  __int128 v28; // q1
  int32_t bonusKindId; // w22
  int64_t v30; // x0
  const MethodInfo *v31; // x3
  const MethodInfo *v32; // x2
  IconLabelInfo_o *iconLabelInfo2; // x0
  _BOOL4 isSwapLock; // w23
  _BOOL4 isLock; // w24
  int v36; // w21
  const MethodInfo *v37; // x1
  const MethodInfo *v38; // x2
  int64_t *p_sortValue0; // x22
  __int64 v40; // x8
  unsigned int v41; // w8
  __int64 v42; // x8
  int32_t type; // w8
  ServantEntity_o *servantEntity; // x0
  int v45; // w23
  __int64 v46; // x8
  bool result; // w0
  ServantEntity_o *v48; // x0
  const MethodInfo *v49; // x1
  int32_t rarity; // w8
  struct UserServantEntity_o *v51; // x0
  int64_t v52; // x8
  struct UserServantEntity_o *v53; // x8
  __int128 v54; // q1
  int64_t v55; // x0
  struct UserServantEntity_o *v56; // x8
  IconLabelInfo_o *iconLabelInfo1; // x0
  struct UserServantEntity_o *v58; // x0
  IconLabelInfo_o *v59; // x20
  int32_t lv; // w21
  int32_t LevelMax; // w0
  struct UserServantEntity_o *v62; // x8
  int32_t v63; // w8
  UserServantEntity_o *v64; // x0
  IconLabelInfo_o *v65; // x20
  int32_t v66; // w0
  struct UserServantEntity_o *v67; // x8
  struct UserServantEntity_o *v68; // x0
  unsigned int v69; // w8
  IconLabelInfo_o *v70; // x20
  struct UserServantEntity_o *v71; // x8
  IconLabelInfo_o *v72; // x0
  int32_t adjustHp; // w3
  int32_t hp; // w2
  int32_t v75; // w1
  struct UserServantEntity_o *v76; // x8
  IconLabelInfo_o *v77; // x19
  struct ServantEntity_o *v78; // x8
  IconLabelInfo_o *v79; // x0
  int64_t amountSortValue; // x0
  struct ListViewManager_o *v81; // x0
  __int64 v82; // x10
  struct ServantEntity_o *v83; // x8
  __int64 collectionNo; // x10
  struct UserServantEntity_o *v85; // x8
  int32_t v86; // w20
  int64_t friendship; // x2
  IconLabelInfo_o *v88; // x0
  int32_t friendshipMax; // w3
  int32_t v90; // w1
  int32_t v91; // w0
  int32_t v92; // w21
  int32_t v93; // w0
  ServantEntity_o *v94; // x0
  ServantEntity_o *v95; // x0
  ServantEntity_o *v96; // x0
  IconLabelInfo_o *v97; // x0
  IconLabelInfo_o *v98; // x0
  __int64 v99; // x9
  bool v100; // zf
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v101; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v102; // [xsp+30h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v103; // [xsp+50h] [xbp-60h]
  int32_t tdMaxLv[2]; // [xsp+78h] [xbp-38h] BYREF

  if ( (byte_40FC919 & 1) == 0 )
  {
    sub_B16FFC(&CombineServantListViewManager_TypeInfo, sort);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantFilterMaster___, v5);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_B16FFC(&TutorialFlag_TypeInfo, v9);
    byte_40FC919 = 1;
  }
  *(_QWORD *)tdMaxLv = 0LL;
  *(_WORD *)&this->fields.isTermination = 0;
  this->fields.sortValue1 = -1LL;
  *(_WORD *)&this->fields.isDispAtkStatusUpInfo = 0;
  if ( !sort )
    goto LABEL_254;
  if ( !sort->fields.isBonusKind )
    goto LABEL_41;
  if ( this->fields.isBaseSvt )
    goto LABEL_43;
  if ( ListViewItem__get_IsSelect((ListViewItem_o *)this, 0LL) )
    goto LABEL_41;
  bonusKind2 = sort->fields.bonusKind2;
  if ( bonusKind2 == 1 )
  {
    if ( this->fields.bonusKind == 1 )
    {
      p_bonusKind2Id = &sort->fields.bonusKind2Id;
      if ( this->fields.bonusKindId == sort->fields.bonusKind2Id )
        goto LABEL_40;
    }
    else
    {
      p_bonusKind2Id = &sort->fields.bonusKind2Id;
    }
    this->fields.bonusKind = 1;
    v17 = *p_bonusKind2Id;
    userSvtEntity = this->fields.userSvtEntity;
    this->fields.bonusKindId = *p_bonusKind2Id;
    if ( !userSvtEntity )
      goto LABEL_254;
    EventUpVal_21445528 = UserServantEntity__getEventUpVal_21445528(userSvtEntity, this->fields.setupInfo, v17, 0LL);
LABEL_29:
    this->fields.isEventUpVal = EventUpVal_21445528;
    if ( !EventUpVal_21445528 )
      return 0;
    goto LABEL_41;
  }
  if ( bonusKind2 != 2 )
  {
    if ( bonusKind2 != 3 )
      goto LABEL_41;
    manager = sort->fields.manager;
    if ( manager
      && (v13 = *(&CombineServantListViewManager_TypeInfo->_2.bitflags2 + 1),
          *(&manager->klass->_2.bitflags2 + 1) >= (unsigned int)v13) )
    {
      if ( (CombineServantListViewManager_c *)manager->klass->_2.typeHierarchy[v13 - 1] == CombineServantListViewManager_TypeInfo )
        v14 = sort->fields.manager;
      else
        v14 = 0LL;
    }
    else
    {
      v14 = 0LL;
    }
    this->fields.bonusKind = 3;
    bonusKind2Id = sort->fields.bonusKind2Id;
    this->fields.bonusKindId = bonusKind2Id;
    if ( !v14 )
      goto LABEL_254;
    IsLargeSuccessCampaignServantId = CombineServantListViewManager__IsLargeSuccessCampaignServantId(
                                        (CombineServantListViewManager_o *)v14,
                                        bonusKind2Id,
                                        this->fields.svtId,
                                        v10);
    v27 = this->fields.userSvtEntity;
    this->fields.isEventUpVal = IsLargeSuccessCampaignServantId;
    if ( !v27 )
      goto LABEL_254;
    v28 = *(_OWORD *)&v27->fields.id.fields.fakeValue;
    bonusKindId = this->fields.bonusKindId;
    *(_OWORD *)&v103.fields.currentCryptoKey = *(_OWORD *)&v27->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v103.fields.fakeValue = v28;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v102 = v103;
    v30 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v102, 0LL);
    if ( CombineServantListViewManager__IsExchangeSvtExist(
           (CombineServantListViewManager_o *)v14,
           bonusKindId,
           v30,
           v31) )
    {
      goto LABEL_41;
    }
    goto LABEL_40;
  }
  if ( this->fields.bonusKind != 2 )
  {
    v16 = &sort->fields.bonusKind2Id;
LABEL_23:
    this->fields.bonusKind = 2;
    this->fields.bonusKindId = *v16;
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_254;
    MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)Instance,
                                           (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantFilterMaster___);
    svtId = this->fields.svtId;
    v23 = (ServantFilterMaster_o *)MasterData_WarQuestSelectionMaster;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(svtId, 0LL);
    if ( !v23 )
      goto LABEL_254;
    EventUpVal_21445528 = ServantFilterMaster__IsEnableServant(v23, v24, this->fields.bonusKindId, 0LL);
    goto LABEL_29;
  }
  v16 = &sort->fields.bonusKind2Id;
  if ( this->fields.bonusKindId != sort->fields.bonusKind2Id )
    goto LABEL_23;
LABEL_40:
  if ( !this->fields.isEventUpVal )
    return 0;
LABEL_41:
  if ( !this->fields.isBaseSvt && !ListViewItem__get_IsSelect((ListViewItem_o *)this, 0LL) )
  {
    type = this->fields.type;
    if ( type == 1 )
    {
      if ( CombineServantListViewItem__IsMatchMaterialFilter(this, sort, v32) )
        goto LABEL_43;
    }
    else if ( type )
    {
      if ( CombineServantListViewItem__IsMatchServantFilter(this, sort, v32) )
        goto LABEL_43;
    }
    else if ( CombineServantListViewItem__IsMatchBaseServantFilter(this, sort, v32) )
    {
      goto LABEL_43;
    }
    return 0;
  }
LABEL_43:
  iconLabelInfo2 = this->fields.iconLabelInfo2;
  isSwapLock = this->fields.isSwapLock;
  isLock = this->fields.isLock;
  if ( !iconLabelInfo2 )
    goto LABEL_254;
  v36 = this->fields.isSwapChoice ^ this->fields.isChoice;
  IconLabelInfo__Clear(iconLabelInfo2, 0LL);
  this->fields.sortValue0 = 0LL;
  p_sortValue0 = &this->fields.sortValue0;
  this->fields.sortValue0B = 0LL;
  if ( sort->fields.isSmartSort )
  {
    switch ( this->fields.type )
    {
      case 0:
        if ( this->fields.isHeroineSvt )
        {
          if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TutorialFlag_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
          }
          if ( TutorialFlag__Get_28023340(126, 0LL) )
            goto LABEL_127;
        }
        if ( this->fields.isParty )
        {
          v40 = 20LL;
          goto LABEL_150;
        }
        if ( !this->fields.isLvMax )
          goto LABEL_151;
        goto LABEL_149;
      case 1:
        servantEntity = this->fields.servantEntity;
        if ( !servantEntity )
          goto LABEL_254;
        v45 = isSwapLock ^ isLock;
        if ( ServantEntity__get_IsExpUp(servantEntity, 0LL) )
        {
          if ( this->fields.isBaseLvMax )
          {
            v46 = -120LL;
          }
          else
          {
            v46 = -5LL;
            if ( !(v45 | v36) )
              v46 = 30LL;
          }
          goto LABEL_246;
        }
        v48 = this->fields.servantEntity;
        if ( !v48 )
          goto LABEL_254;
        if ( ServantEntity__get_IsStatusUp(v48, 0LL) )
        {
          if ( !this->fields.isSameClass )
          {
            v46 = -150LL;
            goto LABEL_246;
          }
          rarity = this->fields.rarity;
          if ( this->fields.hpBase < 1 )
          {
            if ( rarity == 4 )
            {
              v46 = -90LL;
              if ( !this->fields.isAtkSecondUpMax && this->fields.isAtkUpMax )
                v46 = 90LL;
              goto LABEL_244;
            }
            v99 = 70LL;
            v100 = !this->fields.isAtkUpMax;
            v46 = -110LL;
          }
          else
          {
            if ( rarity == 4 )
            {
              v46 = -80LL;
              if ( !this->fields.isHpSecondUpMax && this->fields.isHpUpMax )
                v46 = 100LL;
LABEL_244:
              *p_sortValue0 = v46;
              if ( v45 | v36 )
                v46 = -5LL;
              goto LABEL_246;
            }
            v99 = 80LL;
            v100 = !this->fields.isHpUpMax;
            v46 = -100LL;
          }
          if ( v100 )
            v46 = v99;
          goto LABEL_244;
        }
        if ( !CombineServantListViewItem__get_IsCanNotSelectMaterial(this, v49) )
          goto LABEL_247;
        if ( this->fields.isLimitCntTarget )
        {
          v46 = -20LL;
        }
        else if ( this->fields.isParty )
        {
          v46 = -30LL;
        }
        else
        {
          v46 = -10LL;
          if ( this->fields.isUseSupport )
            v46 = -40LL;
        }
LABEL_246:
        *p_sortValue0 = v46;
LABEL_247:
        if ( this->fields.isFortification )
          *p_sortValue0 = -10LL;
        if ( !((v36 ^ 1) & 1 | !sort->fields.isChoiceSort) )
          *(_OWORD *)p_sortValue0 = xmmword_31471E0;
        break;
      case 2:
        if ( this->fields.isSealCombineLimit )
        {
          v40 = 0LL;
          goto LABEL_150;
        }
        if ( !CombineServantListViewItem__get_IsCanNotBaseSelect(this, v37)
          && this->fields.isLimitUpItemNum
          && this->fields.isLvMax )
        {
LABEL_147:
          v40 = 10LL;
          goto LABEL_150;
        }
        if ( this->fields.isHeroineSvt )
        {
LABEL_149:
          v40 = -10LL;
          goto LABEL_150;
        }
        if ( this->fields.isLimitCntMax )
          goto LABEL_127;
        goto LABEL_151;
      case 3:
        if ( this->fields.isHeroineSvt )
        {
          if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TutorialFlag_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
          }
          if ( TutorialFlag__Get_28023340(126, 0LL) )
            goto LABEL_127;
        }
        if ( this->fields.isSkillUpItemNum )
          goto LABEL_147;
        if ( !this->fields.isSkillLvMax )
          goto LABEL_151;
        goto LABEL_149;
      case 4:
        if ( this->fields.isSameSvt )
          goto LABEL_147;
        if ( this->fields.isHeroineSvt )
          goto LABEL_149;
        if ( !this->fields.isTdLvMax )
          goto LABEL_151;
        goto LABEL_127;
      case 5:
        if ( !((v36 ^ 1) & 1 | !sort->fields.isChoiceSort) || this->fields.isFortification )
          goto LABEL_81;
        break;
      case 6:
        if ( !CombineServantListViewItem__get_IsCanNotBaseSelect(this, v37)
          && this->fields.isLvMax
          && this->fields.isLimitCntMax
          && this->fields.isLvExceedItemNum )
        {
          goto LABEL_147;
        }
        if ( this->fields.isHeroineSvt )
          goto LABEL_149;
        if ( !this->fields.isLvExceedMax )
          goto LABEL_151;
        goto LABEL_127;
      case 7:
        if ( this->fields.isEventJoin )
          goto LABEL_149;
        if ( !this->fields.isHeroineSvt )
          goto LABEL_151;
        if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TutorialFlag_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
        }
        if ( !TutorialFlag__Get_28023340(126, 0LL) )
          goto LABEL_151;
        goto LABEL_127;
      case 8:
        if ( !CombineServantListViewItem__get_IsCanNotBaseSelect(this, v37)
          && this->fields.isFriendshipRankMax
          && this->fields.isFriendshipExceedItemNum )
        {
          goto LABEL_147;
        }
        if ( this->fields.isHeroineSvt )
          goto LABEL_149;
        if ( !this->fields.isFriendshipExceedMax )
          goto LABEL_151;
        goto LABEL_127;
      case 9:
        if ( !CombineServantListViewItem__get_IsCanNotBaseSelect(this, v37) )
          goto LABEL_147;
        if ( this->fields.isHeroineSvt )
          goto LABEL_149;
        if ( this->fields.isSealCombineLimit )
        {
LABEL_121:
          v40 = -15LL;
        }
        else if ( this->fields.isLimitCntMax )
        {
LABEL_127:
          v40 = -20LL;
        }
        else
        {
          if ( !this->fields.isEventJoin )
            goto LABEL_151;
LABEL_114:
          v40 = -30LL;
        }
LABEL_150:
        *p_sortValue0 = v40;
LABEL_151:
        if ( !((v36 ^ 1) & 1 | !sort->fields.isChoiceSort) )
          this->fields.sortValue0B = 10LL;
        break;
      case 0xA:
        if ( this->fields.isHeroineSvt )
        {
          if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TutorialFlag_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
          }
          if ( TutorialFlag__Get_28023340(126, 0LL) )
            goto LABEL_114;
        }
        if ( this->fields.isEventJoin )
          goto LABEL_127;
        if ( this->fields.isCommandCardExceedMax )
          goto LABEL_149;
        goto LABEL_151;
      case 0xB:
        if ( this->fields.isHeroineSvt )
        {
          if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TutorialFlag_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
          }
          if ( TutorialFlag__Get_28023340(126, 0LL) )
            goto LABEL_127;
        }
        if ( this->fields.isEventJoin )
          goto LABEL_121;
        if ( this->fields.isAppendSkillOpenItemNum || this->fields.isAppendSkillUpItemNum )
          goto LABEL_147;
        if ( !this->fields.isAppendSkillLvMax )
          goto LABEL_151;
        goto LABEL_149;
      default:
        break;
    }
  }
  else if ( !((v36 ^ 1) & 1 | !sort->fields.isChoiceSort) )
  {
    v41 = this->fields.type;
    if ( v41 <= 0xB )
    {
      if ( ((1 << v41) & 0xFDD) != 0 )
        v42 = 10LL;
      else
LABEL_81:
        v42 = -10LL;
      *p_sortValue0 = v42;
    }
  }
  result = 1;
  switch ( sort->fields.sortKind )
  {
    case 0:
      v51 = this->fields.userSvtEntity;
      v52 = !this->fields.isParty;
      goto LABEL_201;
    case 1:
      v53 = this->fields.userSvtEntity;
      if ( !v53 )
        goto LABEL_254;
      v54 = *(_OWORD *)&v53->fields.id.fields.fakeValue;
      *(_OWORD *)&v103.fields.currentCryptoKey = *(_OWORD *)&v53->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v103.fields.fakeValue = v54;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v101 = v103;
      v55 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v101, 0LL);
      v56 = this->fields.userSvtEntity;
      this->fields.sortValue1 = v55;
      if ( !v56 )
        goto LABEL_254;
      iconLabelInfo1 = this->fields.iconLabelInfo1;
      if ( !iconLabelInfo1 )
        goto LABEL_254;
      IconLabelInfo__SetTime(iconLabelInfo1, 49, v56->fields.createdAt, 0, 0, 0, 0LL);
      goto LABEL_183;
    case 2:
      v58 = this->fields.userSvtEntity;
      this->fields.sortValue1 = this->fields.rarity;
      if ( !v58 )
        goto LABEL_254;
      v59 = this->fields.iconLabelInfo1;
      lv = v58->fields.lv;
      LevelMax = UserServantEntity__getLevelMax(v58, 0LL);
      v62 = this->fields.userSvtEntity;
      if ( !v62 || !v59 )
        goto LABEL_254;
      IconLabelInfo__Set_28888132(v59, 2, lv, LevelMax, 0, 0, 0, v62->fields.lv, 0LL);
      v63 = this->fields.type;
      if ( v63 != 10 && v63 != 7 )
        return 1;
      v64 = this->fields.userSvtEntity;
      if ( !v64 )
        goto LABEL_254;
      v65 = this->fields.iconLabelInfo2;
      v66 = UserServantEntity__getRarity(v64, 0LL);
      v67 = this->fields.userSvtEntity;
      if ( !v67 || !v65 )
        goto LABEL_254;
      IconLabelInfo__Set_28888132(v65, 36, v66, v67->fields.exceedCount, 0, 0, 0, v67->fields.lv, 0LL);
      return 1;
    case 3:
      v51 = this->fields.userSvtEntity;
      if ( !v51 )
        goto LABEL_254;
      this->fields.sortValue1 = v51->fields.lv;
      goto LABEL_202;
    case 4:
      v68 = this->fields.userSvtEntity;
      if ( !v68 )
        goto LABEL_254;
      v69 = this->fields.type & 0xFFFFFFFE;
      this->fields.sortValue1 = v68->fields.treasureDeviceLv1;
      if ( v69 == 4 )
      {
        v70 = this->fields.iconLabelInfo1;
      }
      else
      {
        UserServantEntity__getTreasureDeviceInfo_21453148(v68, &tdMaxLv[1], tdMaxLv, 0LL);
        LODWORD(friendship) = tdMaxLv[1];
        v88 = this->fields.iconLabelInfo1;
        this->fields.sortValue1 = tdMaxLv[1];
        if ( !v88 )
          goto LABEL_254;
        friendshipMax = tdMaxLv[0];
        v90 = 33;
LABEL_210:
        IconLabelInfo__Set_28888132(v88, v90, friendship, friendshipMax, 0, 0, 0, 0, 0LL);
LABEL_211:
        v68 = this->fields.userSvtEntity;
        if ( !v68 )
          goto LABEL_254;
        v70 = this->fields.iconLabelInfo2;
      }
      v92 = v68->fields.lv;
      v93 = UserServantEntity__getLevelMax(v68, 0LL);
      if ( !v70 )
        goto LABEL_254;
      IconLabelInfo__Set_28888132(v70, 2, v92, v93, 0, 0, 0, 0, 0LL);
      v94 = this->fields.servantEntity;
      if ( !v94 )
        goto LABEL_254;
      if ( ServantEntity__get_IsExpUp(v94, 0LL) )
        goto LABEL_220;
      v95 = this->fields.servantEntity;
      if ( !v95 )
        goto LABEL_254;
      if ( ServantEntity__get_IsStatusUp(v95, 0LL) )
        goto LABEL_220;
      v96 = this->fields.servantEntity;
      if ( !v96 )
        goto LABEL_254;
      if ( ServantEntity__get_IsServantMaterialTd(v96, 0LL) )
      {
LABEL_220:
        v97 = this->fields.iconLabelInfo1;
        if ( v97 )
        {
          IconLabelInfo__Clear(v97, 0LL);
          v98 = this->fields.iconLabelInfo2;
          if ( v98 )
          {
            IconLabelInfo__Clear(v98, 0LL);
            return 1;
          }
        }
LABEL_254:
        sub_B170D4();
      }
      return 1;
    case 5:
      v71 = this->fields.userSvtEntity;
      if ( !v71 )
        goto LABEL_254;
      v72 = this->fields.iconLabelInfo1;
      this->fields.sortValue1 = v71->fields.hp;
      if ( !v72 )
        goto LABEL_254;
      adjustHp = v71->fields.adjustHp;
      hp = v71->fields.hp;
      v75 = 3;
      goto LABEL_182;
    case 6:
      v76 = this->fields.userSvtEntity;
      if ( !v76 )
        goto LABEL_254;
      v72 = this->fields.iconLabelInfo1;
      this->fields.sortValue1 = v76->fields.atk;
      if ( !v72 )
        goto LABEL_254;
      adjustHp = v76->fields.adjustAtk;
      hp = v76->fields.atk;
      v75 = 5;
LABEL_182:
      IconLabelInfo__Set_28888132(v72, v75, hp, adjustHp, 0, 0, 0, 0, 0LL);
LABEL_183:
      v51 = this->fields.userSvtEntity;
      if ( !v51 )
        goto LABEL_254;
      v77 = this->fields.iconLabelInfo2;
      goto LABEL_203;
    case 7:
      v78 = this->fields.servantEntity;
      if ( !v78 )
        goto LABEL_254;
      v79 = this->fields.iconLabelInfo1;
      this->fields.sortValue1 = v78->fields.cost;
      if ( !v79 )
        goto LABEL_254;
      IconLabelInfo__Set_28888132(v79, 7, v78->fields.cost, 0, 0, 0, 0, 0, 0LL);
      goto LABEL_211;
    case 8:
      v51 = this->fields.userSvtEntity;
      v52 = -this->fields.priority;
LABEL_201:
      this->fields.sortValue1 = v52;
      if ( !v51 )
        goto LABEL_254;
LABEL_202:
      v77 = this->fields.iconLabelInfo1;
LABEL_203:
      v86 = v51->fields.lv;
      goto LABEL_204;
    case 0xA:
      friendship = this->fields.friendship;
      v88 = this->fields.iconLabelInfo1;
      this->fields.sortValue1 = friendship;
      if ( !v88 )
        goto LABEL_254;
      friendshipMax = this->fields.friendshipMax;
      v90 = 32;
      goto LABEL_210;
    case 0xE:
      amountSortValue = this->fields.amountSortValue;
      if ( (amountSortValue & 0x8000000000000000LL) == 0 )
        goto LABEL_193;
      v81 = sort->fields.manager;
      if ( !v81 )
        goto LABEL_254;
      v82 = *(&CombineServantListViewManager_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v81->klass->_2.bitflags2 + 1) < (unsigned int)v82
        || (CombineServantListViewManager_c *)v81->klass->_2.typeHierarchy[v82 - 1] != CombineServantListViewManager_TypeInfo )
      {
        goto LABEL_254;
      }
      amountSortValue = CombineServantListViewManager__GetAmountSortValue(
                          (CombineServantListViewManager_o *)v81,
                          this->fields.svtId,
                          v38);
      this->fields.amountSortValue = amountSortValue;
LABEL_193:
      v83 = this->fields.servantEntity;
      if ( !v83 )
        goto LABEL_254;
      collectionNo = v83->fields.collectionNo;
      v85 = this->fields.userSvtEntity;
      this->fields.sortValue1 = (((unsigned __int64)(unsigned int)this->fields.rarity << 32) + (amountSortValue << 48)) | collectionNo;
      if ( !v85 )
        goto LABEL_254;
      v77 = this->fields.iconLabelInfo1;
      v86 = v85->fields.lv;
      v51 = v85;
LABEL_204:
      v91 = UserServantEntity__getLevelMax(v51, 0LL);
      if ( !v77 )
        goto LABEL_254;
      IconLabelInfo__Set_28888132(v77, 2, v86, v91, 0, 0, 0, 0, 0LL);
      return 1;
    case 0xF:
      friendship = this->fields.hpReinforceValue;
      v88 = this->fields.iconLabelInfo1;
      this->fields.isDispHpStatusUpInfo = 1;
      this->fields.sortValue1 = friendship;
      if ( !v88 )
        goto LABEL_254;
      friendshipMax = this->fields.nowMaxHpReinforceValue;
      v90 = 44;
      goto LABEL_210;
    case 0x10:
      friendship = this->fields.atkReinforceValue;
      v88 = this->fields.iconLabelInfo1;
      this->fields.isDispAtkStatusUpInfo = 1;
      this->fields.sortValue1 = friendship;
      if ( !v88 )
        goto LABEL_254;
      friendshipMax = this->fields.nowMaxAtkReinforceValue;
      v90 = 45;
      goto LABEL_210;
    default:
      return result;
  }
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

  if ( (byte_40FC924 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_15043, method);
    byte_40FC924 = 1;
  }
  NameText = CombineServantListViewItem__get_NameText(this, method);
  return System_String__Concat_43743732((System_String_o *)StringLiteral_15043, NameText, 0LL);
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

  if ( (byte_40FC920 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_18326, v3);
    byte_40FC920 = 1;
  }
  servantEntity = this->fields.servantEntity;
  if ( !servantEntity )
    return (System_String_o *)StringLiteral_18326;
  cost = servantEntity->fields.cost;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
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
  if ( (byte_40FC921 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1, method);
    byte_40FC921 = 1;
  }
  return (System_String_o *)StringLiteral_1;
}


bool __fastcall CombineServantListViewItem__get_IsAtkAdjustMax(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0

  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_B170D4();
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
  bool result; // w0
  _BOOL4 v5; // w8
  _BOOL4 isSealCombineLimit; // w8
  _BOOL4 v7; // w9
  int32_t v8; // w8

  if ( (byte_40FC922 & 1) == 0 )
  {
    sub_B16FFC(&TutorialFlag_TypeInfo, method);
    byte_40FC922 = 1;
  }
  type = this->fields.type;
  if ( type )
  {
    result = 1;
  }
  else
  {
    if ( !this->fields.isHeroineSvt )
      goto LABEL_77;
    if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TutorialFlag_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    }
    if ( TutorialFlag__Get_28023340(126, 0LL) )
    {
      result = 1;
    }
    else
    {
LABEL_77:
      v5 = this->fields.isLvMax
        || this->fields.isExpUpSvt
        || this->fields.isStatusUpSvt && !this->fields.isCanStUp
        || this->fields.isMaterialTdSvt;
      result = v5;
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
        goto LABEL_48;
      }
      isSealCombineLimit = this->fields.isSealCombineLimit;
      break;
    case 3:
      if ( this->fields.isHeroineSvt )
      {
        if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TutorialFlag_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
        }
        v7 = TutorialFlag__Get_28023340(126, 0LL) || this->fields.isSkillLvMax;
        type = this->fields.type;
        result = v7;
        goto LABEL_35;
      }
      isSealCombineLimit = this->fields.isSkillLvMax;
      break;
    case 2:
      if ( !this->fields.isLimitCntMax )
      {
LABEL_37:
        isSealCombineLimit = this->fields.isHeroineSvt;
        break;
      }
LABEL_48:
      result = 1;
      goto LABEL_51;
    default:
LABEL_35:
      switch ( type )
      {
        case 4:
          if ( !this->fields.isTdLvMax )
            goto LABEL_37;
          goto LABEL_48;
        case 6:
          if ( this->fields.isLvExceedMax )
            goto LABEL_48;
          goto LABEL_47;
        case 7:
          if ( this->fields.isHeroineSvt )
          {
            if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !TutorialFlag_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
            }
            if ( TutorialFlag__Get_28023340(126, 0LL) )
              goto LABEL_48;
          }
          goto LABEL_49;
        case 8:
          if ( this->fields.isFriendshipExceedMax )
            goto LABEL_48;
LABEL_47:
          if ( this->fields.isHeroineSvt )
            goto LABEL_48;
LABEL_49:
          isSealCombineLimit = this->fields.isEventJoin;
          break;
        default:
          goto LABEL_51;
      }
      break;
  }
  result = isSealCombineLimit;
LABEL_51:
  v8 = this->fields.type;
  if ( v8 == 10 )
  {
    if ( this->fields.isHeroineSvt )
    {
      if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TutorialFlag_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
      }
      if ( TutorialFlag__Get_28023340(126, 0LL) )
        goto LABEL_58;
    }
    if ( this->fields.isCommandCardExceedMax )
LABEL_58:
      result = 1;
    else
      result = this->fields.isEventJoin;
    v8 = this->fields.type;
  }
  if ( v8 == 11 )
  {
    if ( this->fields.isAppendSkillLvMax || this->fields.isEventJoin )
    {
      return 1;
    }
    else if ( this->fields.isHeroineSvt )
    {
      if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TutorialFlag_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
      }
      return TutorialFlag__Get_28023340(126, 0LL);
    }
    else
    {
      return 0;
    }
  }
  return result;
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

  if ( (byte_40FC923 & 1) == 0 )
  {
    sub_B16FFC(&TutorialFlag_TypeInfo, method);
    byte_40FC923 = 1;
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
    if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TutorialFlag_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    }
    if ( TutorialFlag__Get_28023340(126, 0LL) )
      return 1;
  }
  return this->fields.isStatusUpSvt && !this->fields.isCanStUp;
}


bool __fastcall CombineServantListViewItem__get_IsCanNotSelectMaterial(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  _BOOL4 isStatusUpSvt; // w21
  _BOOL4 isAtkSecondUpMax; // w8
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
  if ( this->fields.rarity > 3 )
  {
    if ( !this->fields.isHpSecondUpMax )
    {
      isAtkSecondUpMax = this->fields.isAtkSecondUpMax;
      goto LABEL_9;
    }
LABEL_7:
    v5 = 1;
    goto LABEL_10;
  }
  if ( this->fields.isHpUpMax )
    goto LABEL_7;
  isAtkSecondUpMax = this->fields.isAtkUpMax;
LABEL_9:
  v5 = isAtkSecondUpMax;
LABEL_10:
  CanNotSelectSecondStatusMaterial = CombineServantListViewItem__isCanNotSelectSecondStatusMaterial(this, method);
  if ( *(_WORD *)&this->fields.isFavorite
    || this->fields.isLock
    || this->fields.isChoice
    || this->fields.isHeroineSvt
    || this->fields.isLimitCntTarget
    || isStatusUpSvt && !this->fields.isCanStUp
    || this->fields.isEventJoin
    || this->fields.isUseSupport )
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
  UserServantEntity_o *v5; // x0
  UserServantEntity_o *v6; // x0
  UserServantEntity_o *v7; // x0

  if ( this->fields.isEventJoin )
    return 1;
  if ( this->fields.isCanNotLock )
    return 1;
  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity || UserServantEntity__IsLeave(userSvtEntity, 0LL) )
    return 1;
  v5 = this->fields.userSvtEntity;
  if ( !v5 )
    goto LABEL_12;
  if ( UserServantEntity__IsCombineMaterial(v5, 0LL) )
    return 1;
  v6 = this->fields.userSvtEntity;
  if ( !v6 )
    goto LABEL_12;
  if ( UserServantEntity__IsStatusUp(v6, 0LL) )
    return 1;
  v7 = this->fields.userSvtEntity;
  if ( !v7 )
LABEL_12:
    sub_B170D4();
  return UserServantEntity__IsMaterialTd(v7, 0LL);
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
  return this->fields.isSwapChoice ^ this->fields.isChoice;
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
  return this->fields.isSwapLock ^ this->fields.isLock;
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
    sub_B170D4();
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
    sub_B170D4();
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
    sub_B170D4();
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
    sub_B170D4();
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

  if ( (byte_40FC91E & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_18326, v3);
    byte_40FC91E = 1;
  }
  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    return (System_String_o *)StringLiteral_18326;
  lv = userSvtEntity->fields.lv;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
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
  __int64 v3; // x1
  ServantEntity_o *servantEntity; // x19
  struct UserServantEntity_o *userSvtEntity; // x8
  __int64 v6; // x20
  __int64 v7; // x21
  int32_t v8; // w1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  if ( (byte_40FC91D & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    sub_B16FFC(&StringLiteral_18326, v3);
    byte_40FC91D = 1;
  }
  servantEntity = this->fields.servantEntity;
  if ( !servantEntity )
    return (System_String_o *)StringLiteral_18326;
  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_B170D4();
  v7 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.currentCryptoKey;
  v6 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v10.fields.currentCryptoKey = v7;
  *(_QWORD *)&v10.fields.fakeValue = v6;
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v10, 0LL);
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

  if ( (byte_40FC91F & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, method);
    byte_40FC91F = 1;
  }
  rarity = this->fields.rarity;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
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
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  WarEntity_o *Entity; // x0

  if ( (byte_40FC925 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_SvtCoinMaster___, method);
    sub_B16FFC(&DataManager_TypeInfo, v3);
    sub_B16FFC(&Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__GetEntity__, v4);
    byte_40FC925 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_SvtCoinMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B170D4();
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             Master_WarQuestSelectionMaster,
             this->fields.svtId,
             (const MethodInfo_266F388 *)Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__GetEntity__);
  if ( Entity )
    return (int32_t)Entity->fields.age;
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
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v8; // q1
  UserSvtCoinMaster_o *v9; // x20
  int64_t v10; // x0
  struct UserServantEntity_o *v11; // x8
  int64_t v12; // x19
  __int64 v13; // x21
  __int64 v14; // x22
  int32_t v15; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v17; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v18; // [xsp+20h] [xbp-50h]
  UserSvtCoinEntity_o *entity; // [xsp+48h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_40FC926 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_UserSvtCoinMaster___, method);
    sub_B16FFC(&DataManager_TypeInfo, v3);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5);
    byte_40FC926 = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserSvtCoinMaster___);
  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_20;
  v8 = *(_OWORD *)&userSvtEntity->fields.userId.fields.fakeValue;
  v9 = (UserSvtCoinMaster_o *)Master_WarQuestSelectionMaster;
  *(_OWORD *)&v18.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v18.fields.fakeValue = v8;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v17 = v18;
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v17, 0LL);
  v11 = this->fields.userSvtEntity;
  if ( !v11 )
    goto LABEL_20;
  v12 = v10;
  v14 = *(_QWORD *)&v11->fields.svtId.fields.currentCryptoKey;
  v13 = *(_QWORD *)&v11->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v20.fields.currentCryptoKey = v14;
  *(_QWORD *)&v20.fields.fakeValue = v13;
  v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v20, 0LL);
  if ( !v9 )
    goto LABEL_20;
  if ( UserSvtCoinMaster__TryGetEntity(v9, &entity, v12, v15, 0LL) )
  {
    if ( entity )
      return entity->fields.num;
LABEL_20:
    sub_B170D4();
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct UserServantEntity_o *v6; // x8
  BattleServantConfConponent_o *p_userSvtEntity; // x19
  struct UserServantEntity_o *userSvtEntity; // t1
  __int128 v9; // q1
  int64_t v10; // x20
  WebViewManager_o *Instance; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x0
  System_Int32_array **Entity; // x20
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v21; // [xsp+0h] [xbp-50h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v22; // [xsp+20h] [xbp-30h]

  if ( (byte_40FC91B & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, method);
    sub_B16FFC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v3);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_40FC91B = 1;
  }
  userSvtEntity = this->fields.userSvtEntity;
  p_userSvtEntity = (BattleServantConfConponent_o *)&this->fields.userSvtEntity;
  v6 = userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_10;
  v9 = *(_OWORD *)&v6->fields.id.fields.fakeValue;
  *(_OWORD *)&v22.fields.currentCryptoKey = *(_OWORD *)&v6->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v22.fields.fakeValue = v9;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v21 = v22;
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v21, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
  {
LABEL_10:
    sub_B170D4();
  }
  Entity = (System_Int32_array **)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                    MasterData_WarQuestSelectionMaster,
                                    v10,
                                    (const MethodInfo_266F5B0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  p_userSvtEntity->klass = (BattleServantConfConponent_c *)Entity;
  sub_B16F98(p_userSvtEntity, Entity, v14, v15, v16, v17, v18, v19);
  return (UserServantEntity_o *)Entity;
}


int64_t __fastcall CombineServantListViewItem__get_UserSvtId(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v4; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v6; // [xsp+0h] [xbp-50h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+20h] [xbp-30h]

  if ( (byte_40FC91C & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
    byte_40FC91C = 1;
  }
  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_B170D4();
  v4 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v7.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v7.fields.fakeValue = v4;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v6 = v7;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v6, 0LL);
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
  if ( this->fields.rarity > 3 )
  {
    if ( !this->fields.isHpSecondUpMax )
      return this->fields.isAtkSecondUpMax;
    return 1;
  }
  if ( this->fields.isHpUpMax )
    return 1;
  return this->fields.isAtkUpMax;
}


void __fastcall CombineServantListViewItem__setUserServantEntity(
        CombineServantListViewItem_o *this,
        UserServantEntity_o *entity,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.userSvtEntity = entity;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.userSvtEntity,
    (System_Int32_array **)entity,
    (System_String_array **)method,
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
    sub_B170D4();
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
    sub_B170D4();
  this->fields.dragSelectNum = ~value << 31 >> 31;
}


void __fastcall CombineServantListViewItem__set_IsHpStatusMax(
        CombineServantListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  if ( !this )
    sub_B170D4();
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
    sub_B170D4();
  this->fields.isNotSelectSecondStatusUpAtk = this->fields.atkBase > 0 && value;
}


void __fastcall CombineServantListViewItem__set_IsSecondHpStatusMax(
        CombineServantListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  if ( !this )
    sub_B170D4();
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._NoticeTween_k__BackingField = value;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._NoticeTween_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}