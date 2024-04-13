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
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  int v46; // w1
  int v47; // w2
  __int64 v48; // x3
  int v49; // w1
  int v50; // w2
  __int64 v51; // x3
  int v52; // w1
  int v53; // w2
  __int64 v54; // x3
  int v55; // w1
  int v56; // w2
  __int64 v57; // x3
  int v58; // w1
  int v59; // w2
  __int64 v60; // x3
  int v61; // w1
  int v62; // w2
  __int64 v63; // x3
  int v64; // w1
  int v65; // w2
  __int64 v66; // x3
  int v67; // w1
  int v68; // w2
  __int64 v69; // x3
  int v70; // w1
  int v71; // w2
  __int64 v72; // x3
  int v73; // w1
  int v74; // w2
  __int64 v75; // x3
  int v76; // w1
  int v77; // w2
  __int64 v78; // x3
  int v79; // w1
  int v80; // w2
  __int64 v81; // x3
  int v82; // w1
  int v83; // w2
  __int64 v84; // x3
  int v85; // w1
  int v86; // w2
  __int64 v87; // x3
  int v88; // w1
  int v89; // w2
  __int64 v90; // x3
  int v91; // w1
  int v92; // w2
  __int64 v93; // x3
  int v94; // w1
  int v95; // w2
  __int64 v96; // x3
  int v97; // w1
  int v98; // w2
  __int64 v99; // x3
  int v100; // w1
  int v101; // w2
  __int64 v102; // x3
  int v103; // w1
  int v104; // w2
  __int64 v105; // x3
  int v106; // w1
  int v107; // w2
  __int64 v108; // x3
  int v109; // w1
  int v110; // w2
  __int64 v111; // x3
  int v112; // w1
  int v113; // w2
  __int64 v114; // x3
  int v115; // w1
  int v116; // w2
  __int64 v117; // x3
  int v118; // w1
  int v119; // w2
  __int64 v120; // x3
  int v121; // w1
  int v122; // w2
  __int64 v123; // x3
  int v124; // w1
  int v125; // w2
  __int64 v126; // x3
  int v127; // w1
  int v128; // w2
  __int64 v129; // x3
  IconLabelInfo_o *v130; // x21
  System_String_array **v131; // x2
  System_String_array **v132; // x3
  System_Boolean_array **v133; // x4
  System_Int32_array **v134; // x5
  System_Int32_array *v135; // x6
  System_Int32_array *v136; // x7
  IconLabelInfo_o *v137; // x21
  System_String_array **v138; // x2
  System_String_array **v139; // x3
  System_Boolean_array **v140; // x4
  System_Int32_array **v141; // x5
  System_Int32_array *v142; // x6
  System_Int32_array *v143; // x7
  System_Collections_Generic_List_int__o *v144; // x21
  System_String_array **v145; // x2
  System_String_array **v146; // x3
  System_Boolean_array **v147; // x4
  System_Int32_array **v148; // x5
  System_Int32_array *v149; // x6
  System_Int32_array *v150; // x7
  System_Collections_Generic_List_int__o *v151; // x21
  System_String_array **v152; // x2
  System_String_array **v153; // x3
  System_Boolean_array **v154; // x4
  System_Int32_array **v155; // x5
  System_Int32_array *v156; // x6
  System_Int32_array *v157; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_userSvtEntity; // x21
  System_String_array **v159; // x2
  System_String_array **v160; // x3
  System_Boolean_array **v161; // x4
  System_Int32_array **v162; // x5
  System_Int32_array *v163; // x6
  System_Int32_array *v164; // x7
  int64_t Instance; // x0
  const MethodInfo *v166; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v167; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v168; // x20
  __int64 v169; // x24
  __int64 v170; // x25
  struct ServantEntity_o *v171; // x0
  System_String_array **v172; // x2
  System_String_array **v173; // x3
  System_Boolean_array **v174; // x4
  System_Int32_array **v175; // x5
  System_Int32_array *v176; // x6
  System_Int32_array *v177; // x7
  System_String_array **v178; // x2
  System_String_array **v179; // x3
  System_Boolean_array **v180; // x4
  System_Int32_array **v181; // x5
  System_Int32_array *v182; // x6
  System_Int32_array *v183; // x7
  struct UserServantEntity_o *v184; // x8
  struct ServantEntity_o *servantEntity; // x8
  ServantLimitMaster_o *v186; // x20
  int32_t v187; // w25
  int64_t v188; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v189; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v190; // q1
  UserServantCollectionMaster_o *v191; // x20
  int64_t v192; // x25
  int64_t v193; // x23
  int v194; // w8
  bool *p_isStatusUpSvt; // x28
  int64_t v196; // x22
  struct UserServantEntity_o *v197; // x8
  int32_t v198; // w20
  BalanceConfig_c *v199; // x8
  struct UserServantEntity_o *v200; // x8
  __int128 v201; // q0
  __int64 v202; // x20
  const MethodInfo *v203; // x1
  int64_t UserSvtId; // x0
  unsigned int v205; // w8
  UserServantEntity_o *v206; // x8
  __int64 v207; // x1
  __int64 v208; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v211; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v214; // x8
  unsigned __int64 v215; // x10
  int32_t *v216; // x11
  __int64 v217; // x0
  _QWORD *v218; // x0
  __int64 v219; // x1
  __int64 v220; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v221; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v222; // q0
  __int64 v223; // x22
  System_Collections_Generic_IEnumerator_T__c *v224; // x8
  unsigned __int64 v225; // x10
  int32_t *v226; // x11
  __int64 v227; // x0
  UserServantEntity_o *v228; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v229; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v230; // q0
  int64_t v231; // x0
  __int128 v232; // q0
  UserServantCommandCodeMaster_o *v233; // x20
  struct ServantEntity_o *v234; // x8
  int64_t v235; // x25
  __int64 v236; // x23
  __int64 v237; // x26
  int32_t v238; // w8
  UserServantCommandCardMaster_o *v239; // x20
  struct ServantEntity_o *v240; // x8
  int64_t v241; // x25
  __int64 v242; // x23
  __int64 v243; // x26
  struct System_Int32_array *commandCardParam; // x20
  int max_length; // w8
  __int64 v246; // x22
  int32_t v247; // w25
  __int64 v248; // x1
  __int64 v249; // x3
  System_Collections_Generic_IEnumerator_T__o *v250; // x20
  System_Collections_Generic_IEnumerator_T__c *v251; // x8
  unsigned __int64 v252; // x10
  int32_t *v253; // x11
  __int64 v254; // x0
  System_Collections_Generic_IEnumerator_T__c *v255; // x8
  unsigned __int64 v256; // x10
  int32_t *v257; // x11
  __int64 v258; // x0
  _QWORD *v259; // x0
  __int64 v260; // x1
  __int64 v261; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v262; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v263; // q0
  __int64 v264; // x22
  System_Collections_Generic_IEnumerator_T__c *v265; // x8
  unsigned __int64 v266; // x10
  int32_t *v267; // x11
  __int64 v268; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v269; // x8
  __int64 v270; // x20
  __int64 v271; // x23
  int32_t v272; // w20
  struct UserServantEntity_o *v273; // x8
  __int128 v274; // q0
  int64_t v275; // x0
  __int128 v276; // q0
  int32_t SvtClassId; // w20
  int32_t v278; // w0
  int32_t SvtClassGroupType; // w20
  int32_t materialExp; // w20
  BalanceConfig_c *v281; // x0
  int SameClassExp; // w22
  double v283; // d0
  int32_t classId; // w20
  UserServantEntity_o *v285; // x8
  int32_t v286; // w20
  bool v287; // w8
  bool v288; // w8
  bool v289; // w8
  bool v290; // w8
  UserServantCommandCodeMaster_o *v291; // x20
  struct ServantEntity_o *v292; // x8
  int64_t v293; // x25
  __int64 v294; // x23
  __int64 v295; // x26
  int32_t v296; // w8
  bool v297; // w28
  UserServantEntity_o *v298; // x8
  bool v299; // w8
  UserServantEntity_o *v300; // x8
  const MethodInfo *v301; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v302; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v303; // q0
  int64_t v304; // x0
  __int128 v305; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v306; // x9
  int32_t combineLimitId; // w20
  __int64 v308; // x23
  __int64 v309; // x25
  int32_t v310; // w25
  __int64 v311; // x23
  __int64 v312; // x26
  UserServantEntity_o *v313; // x20
  __int64 v314; // x8
  UserItemMaster_o *v315; // x27
  unsigned __int64 i; // x28
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v317; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v318; // q1
  int32_t v319; // w25
  int32_t v320; // w20
  UserServantEntity_o *v321; // x8
  bool isLevelMax; // w8
  UserServantEntity_o *v323; // x8
  UserServantEntity_o *v324; // x8
  const MethodInfo *v325; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v326; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v327; // q0
  int64_t v328; // x0
  __int128 v329; // q0
  UserServantEntity_o *v330; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v331; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v332; // q0
  int64_t v333; // x0
  __int128 v334; // q0
  UserServantEntity_o *v335; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v336; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v337; // q0
  int64_t v338; // x0
  __int128 v339; // q0
  int id; // w20
  int32_t lv; // w22
  int32_t SameSvtNpLvCache; // w0
  const MethodInfo *v343; // x4
  int32_t v344; // w20
  char v345; // w8
  int32_t v346; // w0
  int32_t v347; // w20
  int32_t v348; // w27
  int32_t v349; // w25
  int v350; // w22
  __int64 v351; // x1
  __int64 v352; // x3
  System_Collections_Generic_IEnumerator_T__o *v353; // x20
  System_Collections_Generic_IEnumerator_T__c *v354; // x8
  unsigned __int64 v355; // x10
  int32_t *v356; // x11
  __int64 v357; // x0
  System_Collections_Generic_IEnumerator_T__c *v358; // x8
  unsigned __int64 v359; // x10
  int32_t *v360; // x11
  __int64 v361; // x0
  _QWORD *v362; // x0
  __int64 v363; // x1
  __int64 v364; // x9
  UserServantEntity_o *v365; // x8
  __int128 v366; // q0
  __int64 v367; // x22
  System_Collections_Generic_IEnumerator_T__c *v368; // x8
  unsigned __int64 v369; // x10
  int32_t *v370; // x11
  __int64 v371; // x0
  int64_t IsLock; // x0
  UserServantEntity_o *v373; // x8
  bool v374; // w8
  UserServantEntity_o *v375; // x8
  __int128 v376; // q0
  int64_t v377; // x0
  __int128 v378; // q0
  int32_t v379; // w8
  UserServantEntity_o *v380; // x8
  UserServantEntity_o *v381; // x8
  bool v382; // w8
  UserServantEntity_o *v383; // x8
  UserServantEntity_o *v384; // x8
  __int128 v385; // q0
  int64_t v386; // x0
  __int128 v387; // q0
  ServantExceedEntity_o *SvtExceedEnt; // x0
  int32_t *v389; // x20
  CommonConsumeEntity_array *IdEntityList; // x0
  CommonConsumeEntity_array *v391; // x25
  System_Collections_Generic_HashSet_int__o *v392; // x27
  System_Collections_Generic_HashSet_int__o *v393; // x28
  int v394; // w8
  __int64 v395; // x22
  CommonConsumeEntity_o *v396; // x23
  UserServantEntity_o *v397; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v398; // x25
  __int64 v399; // x23
  __int64 v400; // x26
  UserServantEntity_o *v401; // x23
  System_Int32_array *v402; // x25
  System_Int32_array *v403; // x0
  __int64 v404; // x20
  __int64 v405; // x25
  int32_t maxFriendshipRank; // w9
  int v407; // w10
  UserServantEntity_o *v408; // x8
  UserServantEntity_o *v409; // x8
  UserServantEntity_o *v410; // x8
  __int128 v411; // q0
  int64_t v412; // x0
  __int128 v413; // q0
  int32_t v414; // w20
  int v415; // w22
  int64_t v416; // x20
  __int64 v417; // x23
  __int64 v418; // x24
  UserItemMaster_o *v419; // x22
  unsigned __int64 v420; // x25
  __int64 v421; // x26
  bool v422; // w8
  UserServantEntity_o *v423; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  System_String_array **v425; // x2
  System_String_array **v426; // x3
  System_Boolean_array **v427; // x4
  System_Int32_array **v428; // x5
  System_Int32_array *v429; // x6
  System_Int32_array *v430; // x7
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  System_String_array **v432; // x2
  System_String_array **v433; // x3
  System_Boolean_array **v434; // x4
  System_Int32_array **v435; // x5
  System_Int32_array *v436; // x6
  System_Int32_array *v437; // x7
  int64_t v438; // x8
  struct ServantEntity_o *v439; // x9
  UserServantEntity_o *v440; // x8
  __int64 v441; // x20
  __int64 v442; // x21
  int32_t v443; // w8
  __int64 v444; // x0
  __int64 v445; // x0
  int v446; // [xsp+Ch] [xbp-444h]
  UserServantMaster_o *MasterData_WarQuestSelectionMaster; // [xsp+10h] [xbp-440h]
  int64_t v448; // [xsp+18h] [xbp-438h]
  bool *p_isLimitUpItemNum; // [xsp+28h] [xbp-428h]
  struct IconLabelInfo_o **p_iconLabelInfo2; // [xsp+30h] [xbp-420h]
  int64_t v453; // [xsp+40h] [xbp-410h]
  UserServantEntity_o *v454; // [xsp+48h] [xbp-408h]
  UserServantEntity_o *v456; // [xsp+50h] [xbp-400h]
  bool v457; // [xsp+5Ch] [xbp-3F4h]
  bool *p_isChoice; // [xsp+60h] [xbp-3F0h]
  struct ServantEntity_o **p_servantEntity; // [xsp+68h] [xbp-3E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v460; // [xsp+70h] [xbp-3E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v461; // [xsp+90h] [xbp-3C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v462; // [xsp+B0h] [xbp-3A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v463; // [xsp+D0h] [xbp-380h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v464; // [xsp+F0h] [xbp-360h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v465; // [xsp+110h] [xbp-340h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v466; // [xsp+130h] [xbp-320h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v467; // [xsp+150h] [xbp-300h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v468; // [xsp+170h] [xbp-2E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v469; // [xsp+190h] [xbp-2C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v470; // [xsp+1B0h] [xbp-2A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v471; // [xsp+1D0h] [xbp-280h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v472; // [xsp+1F0h] [xbp-260h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v473; // [xsp+210h] [xbp-240h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v474; // [xsp+230h] [xbp-220h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v475; // [xsp+250h] [xbp-200h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v476; // [xsp+270h] [xbp-1E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v477; // [xsp+290h] [xbp-1C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v478; // [xsp+2B0h] [xbp-1A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v479; // [xsp+2D0h] [xbp-180h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v480; // [xsp+2F0h] [xbp-160h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v481; // [xsp+310h] [xbp-140h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v482; // [xsp+330h] [xbp-120h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v483; // [xsp+350h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v484; // [xsp+370h] [xbp-E0h]
  _DWORD v485[6]; // [xsp+390h] [xbp-C0h]
  int v486; // [xsp+3A8h] [xbp-A8h]
  UserItemEntity_o *v487; // [xsp+3B0h] [xbp-A0h] BYREF
  int32_t tdMaxLv; // [xsp+3BCh] [xbp-94h] BYREF
  int32_t tdLv[2]; // [xsp+3C0h] [xbp-90h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+3C8h] [xbp-88h] BYREF
  UserItemEntity_o *v491; // [xsp+3D0h] [xbp-80h] BYREF
  __int64 v492; // [xsp+3D8h] [xbp-78h] BYREF
  UserServantCommandCodeEntity_o *v493; // [xsp+3E0h] [xbp-70h] BYREF
  UserServantCommandCardEntity_o *v494; // [xsp+3E8h] [xbp-68h] BYREF
  UserServantCommandCodeEntity_o *entity; // [xsp+3F0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v496; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v497; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v498; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v499; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v500; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v501; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v502; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v503; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v504; // 0:x0.16

  if ( (byte_42EB563 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, type, index, userSvtEntity);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v16, v17, v18);
    sub_B5D5C4(&Method_DataManager_GetMasterData_CombineLimitMaster___, v19, v20, v21);
    sub_B5D5C4(&Method_DataManager_GetMasterData_CombineMaterialMaster___, v22, v23, v24);
    sub_B5D5C4(&Method_DataManager_GetMasterData_FriendshipMaster___, v25, v26, v27);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantClassMaster___, v28, v29, v30);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantLimitMaster___, v31, v32, v33);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v34, v35, v36);
    sub_B5D5C4(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___, v37, v38, v39);
    sub_B5D5C4(&Method_DataManager_GetMasterData_TreasureDvcMaster___, v40, v41, v42);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserItemMaster___, v43, v44, v45);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v46, v47, v48);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantCommandCardMaster___, v49, v50, v51);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___, v52, v53, v54);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantLeaderMaster___, v55, v56, v57);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, v58, v59, v60);
    sub_B5D5C4(&Method_DataManager_GetMaster_CommonConsumeMaster___, v61, v62, v63);
    sub_B5D5C4(&Method_DataManager_GetMaster_SvtCoinMaster___, v64, v65, v66);
    sub_B5D5C4(&DataManager_TypeInfo, v67, v68, v69);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v70, v71, v72);
    sub_B5D5C4(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v73, v74, v75);
    sub_B5D5C4(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__, v76, v77, v78);
    sub_B5D5C4(&Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__GetEntity__, v79, v80, v81);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_int___, v82, v83, v84);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int__Add__, v85, v86, v87);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int___ctor___68716232, v88, v89, v90);
    sub_B5D5C4(&System_Collections_Generic_HashSet_int__TypeInfo, v91, v92, v93);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v94, v95, v96);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v97, v98, v99);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v100, v101, v102);
    sub_B5D5C4(&IconLabelInfo_TypeInfo, v103, v104, v105);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v106, v107, v108);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v109, v110, v111);
    sub_B5D5C4(&System_Math_TypeInfo, v112, v113, v114);
    sub_B5D5C4(&NetworkManager_TypeInfo, v115, v116, v117);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v118, v119, v120);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v121, v122, v123);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v124, v125, v126);
    sub_B5D5C4(&UserServantLeaderEntity_TypeInfo, v127, v128, v129);
    byte_42EB563 = 1;
  }
  v494 = 0LL;
  entity = 0LL;
  v492 = 0LL;
  v493 = 0LL;
  tdInfo = 0LL;
  v491 = 0LL;
  *(_QWORD *)tdLv = 0LL;
  tdMaxLv = 0;
  v487 = 0LL;
  v486 = 0;
  v130 = (IconLabelInfo_o *)sub_B5D694(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v130, 0LL);
  this->fields.iconLabelInfo1 = v130;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo1,
    (System_Int32_array **)v130,
    v131,
    v132,
    v133,
    v134,
    v135,
    v136);
  v137 = (IconLabelInfo_o *)sub_B5D694(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v137, 0LL);
  this->fields.iconLabelInfo2 = v137;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo2,
    (System_Int32_array **)v137,
    v138,
    v139,
    v140,
    v141,
    v142,
    v143);
  v144 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v144,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  this->fields.enableSkillUp = v144;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.enableSkillUp,
    (System_Int32_array **)v144,
    v145,
    v146,
    v147,
    v148,
    v149,
    v150);
  v151 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v151,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  this->fields.enableAppendSkillUp = v151;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.enableAppendSkillUp,
    (System_Int32_array **)v151,
    v152,
    v153,
    v154,
    v155,
    v156,
    v157);
  ListViewItem___ctor((ListViewItem_o *)this, 0LL);
  this->fields.userSvtEntity = userSvtEntity;
  p_userSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userSvtEntity;
  this->fields.type = type;
  this->fields.index = index;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.userSvtEntity,
    (System_Int32_array **)userSvtEntity,
    v159,
    v160,
    v161,
    v162,
    v163,
    v164);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_544;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  v167 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_544;
  v168 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v170 = *(_QWORD *)&v167[5].fields.currentCryptoKey;
  v169 = *(_QWORD *)&v167[5].fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v496.fields.currentCryptoKey = v170;
  *(_QWORD *)&v496.fields.fakeValue = v169;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v496, 0LL);
  if ( !v168 )
    goto LABEL_544;
  v171 = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                     v168,
                                     Instance,
                                     (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = v171;
  p_servantEntity = &this->fields.servantEntity;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.servantEntity,
    (System_Int32_array **)v171,
    v172,
    v173,
    v174,
    v175,
    v176,
    v177);
  this->fields.setupInfo = setupInfo;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.setupInfo,
    (System_Int32_array **)setupInfo,
    v178,
    v179,
    v180,
    v181,
    v182,
    v183);
  v184 = this->fields.userSvtEntity;
  this->fields.isEventUpVal = 0;
  *(_QWORD *)&this->fields.bonusKind = 0LL;
  if ( !v184 )
    goto LABEL_544;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v184->fields.svtId, 0LL);
  servantEntity = this->fields.servantEntity;
  this->fields.svtId = Instance;
  if ( !servantEntity )
    goto LABEL_544;
  this->fields.classId = servantEntity->fields.classId;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_544;
  MasterData_WarQuestSelectionMaster = (UserServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                (DataManager_o *)Instance,
                                                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_544;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtEntity )
    goto LABEL_544;
  v186 = (ServantLimitMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288((*p_userSvtEntity)[5], 0LL);
  if ( !*p_userSvtEntity )
    goto LABEL_544;
  v187 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288((*p_userSvtEntity)[6], 0LL);
  if ( !v186 )
    goto LABEL_544;
  Instance = (int64_t)ServantLimitMaster__GetEntity(v186, v187, Instance, 0LL);
  if ( !Instance )
    goto LABEL_544;
  v188 = Instance;
  this->fields.rarity = *(_DWORD *)(Instance + 24);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_544;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v189 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_544;
  v190 = v189[4];
  v191 = (UserServantCollectionMaster_o *)Instance;
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v484.fields.currentCryptoKey = v189[3];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v484.fields.fakeValue = v190;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v483 = v484;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v483, 0LL);
  if ( !*p_userSvtEntity )
    goto LABEL_544;
  v192 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288((*p_userSvtEntity)[5], 0LL);
  if ( !v191 )
    goto LABEL_544;
  Instance = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(v191, v192, Instance, 0LL);
  if ( !Instance )
    goto LABEL_544;
  v193 = Instance;
  v457 = isParty;
  UserServantCollectionEntity__getFriendShipRankInfo(
    (UserServantCollectionEntity_o *)Instance,
    &this->fields.friendship,
    &this->fields.friendshipMax,
    0LL);
  Instance = (int64_t)UserGameMaster__getSelfUserGame(0LL);
  if ( !Instance )
    goto LABEL_544;
  v194 = *(_DWORD *)(Instance + 96);
  *(_DWORD *)&this->fields.isStatusUpSvt = 0;
  p_isStatusUpSvt = &this->fields.isStatusUpSvt;
  v446 = v194;
  *(_WORD *)&this->fields.isFavorite = 0;
  *(_WORD *)&this->fields.isLock = 0;
  *(_DWORD *)&this->fields.isChoice = 0;
  this->fields.isMaxSelect = 0;
  *(_QWORD *)&this->fields.isLimitUpItemNum = 0LL;
  v196 = Instance;
  Instance = (int64_t)this->fields.userSvtEntity;
  p_isChoice = &this->fields.isChoice;
  p_isLimitUpItemNum = &this->fields.isLimitUpItemNum;
  this->fields.isLvMax = 0;
  *(_WORD *)&this->fields.isEventJoin = 0;
  this->fields.isHeroineSvt = 0;
  *(_WORD *)&this->fields.isSameSvt = 0;
  this->fields.isMaterialTdSvt = 0;
  if ( !Instance )
    goto LABEL_544;
  Instance = UserServantEntity__getLimitCntMax((UserServantEntity_o *)Instance, 0LL);
  v197 = this->fields.userSvtEntity;
  this->fields.maxLimitCnt = Instance;
  if ( !v197 )
    goto LABEL_544;
  this->fields.currentLimitCnt = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                   v197->fields.limitCount,
                                   0LL);
  Instance = (int64_t)this->fields.userSvtEntity;
  *(_WORD *)&this->fields.isBaseLvMax = 0;
  this->fields.isUseSupport = 0;
  this->fields.isLvExceedItemNum = 0;
  this->fields.isCanNotLock = 0;
  this->fields.isSwapChoice = 0;
  *(_WORD *)&this->fields.isSameClass = 0;
  *(_QWORD *)&this->fields.isAtkUpMax = 0LL;
  this->fields.dragSelectNum = -1;
  if ( !Instance )
    goto LABEL_544;
  v198 = *(_DWORD *)(Instance + 276);
  v199 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    Instance = (int64_t)*p_userSvtEntity;
    v199 = BalanceConfig_TypeInfo;
  }
  this->fields.hpReinforceValue = v199->static_fields->StatusUpAdjustHp * v198;
  if ( !Instance )
    goto LABEL_544;
  v453 = v193;
  this->fields.atkReinforceValue = v199->static_fields->StatusUpAdjustAtk * *(_DWORD *)(Instance + 272);
  UserServantEntity__getAdjustMaxData(
    (UserServantEntity_o *)Instance,
    &this->fields.nowMaxHpReinforceValue,
    &this->fields.nowMaxAtkReinforceValue,
    0LL);
  v200 = this->fields.userSvtEntity;
  *(_WORD *)&this->fields.isEquipedCmdCard = 0;
  if ( !v200 )
    goto LABEL_544;
  v201 = *(_OWORD *)&v200->fields.id.fields.fakeValue;
  v202 = *(_QWORD *)(v196 + 120);
  v448 = v196;
  *(_OWORD *)&v482.fields.currentCryptoKey = *(_OWORD *)&v200->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v482.fields.fakeValue = v201;
  this->fields.isPush = v202 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v482, 0LL);
  UserSvtId = CombineServantListViewItem__get_UserSvtId(this, v203);
  EventFortificationDataLogic__SetFortification(
    &this->fields.isFortification,
    &this->fields.fortificationName,
    &this->fields.fortificationDetailName,
    UserSvtId,
    0LL);
  v205 = this->fields.type;
  v454 = baseUsrSvtData;
  if ( v205 > 0xA || ((1 << v205) & 0x481) == 0 )
    goto LABEL_141;
  Instance = (int64_t)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_544;
  if ( UserServantEntity__isLevelMax((UserServantEntity_o *)Instance, 0LL) )
  {
    Instance = (int64_t)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_544;
    if ( UserServantEntity__isAdjustHpMax((UserServantEntity_o *)Instance, 0LL) )
    {
      Instance = (int64_t)*p_userSvtEntity;
      if ( !*p_userSvtEntity )
        goto LABEL_544;
      if ( UserServantEntity__isAdjustAtkMax((UserServantEntity_o *)Instance, 0LL) )
      {
        Instance = (int64_t)*p_userSvtEntity;
        if ( !*p_userSvtEntity )
          goto LABEL_544;
        if ( UserServantEntity__isSecondAdjustHpMax((UserServantEntity_o *)Instance, 0LL) )
        {
          Instance = (int64_t)*p_userSvtEntity;
          if ( !*p_userSvtEntity )
            goto LABEL_544;
          if ( UserServantEntity__isSecondAdjustAtkMax((UserServantEntity_o *)Instance, 0LL) )
            this->fields.isLvMax = 1;
        }
      }
    }
  }
  Instance = (int64_t)userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_544;
  this->fields.isLimitCntMax = UserServantEntity__isLimitCountMax(userSvtEntity, 0LL);
  Instance = (int64_t)this->fields.userSvtEntity;
  this->fields.isParty = v457;
  if ( !Instance )
    goto LABEL_544;
  Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL);
  v206 = this->fields.userSvtEntity;
  this->fields.isLock = Instance & 1;
  if ( !v206 )
    goto LABEL_544;
  *p_isChoice = UserServantEntity__IsChoice(v206, 0LL);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_544;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantLeaderMaster___);
  if ( !Instance )
    goto LABEL_544;
  Instance = *(_QWORD *)(Instance + 32);
  if ( !Instance )
    goto LABEL_544;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                 (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B5D69C(0LL, v207);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v211 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v211;
        p_offset += 4;
        if ( v211 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_58;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_58:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v208);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v214 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v215 = 0LL;
      v216 = &v214->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v216 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v215;
        v216 += 4;
        if ( v215 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_65;
      }
      v217 = (__int64)&v214->vtable[*v216].method;
    }
    else
    {
LABEL_65:
      v217 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v208);
    }
    v218 = (_QWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v217)(
                       Enumerator,
                       *(_QWORD *)(v217 + 8));
    if ( !v218 )
      goto LABEL_549;
    v220 = *(&UserServantLeaderEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*v218 + 300LL) < (unsigned int)v220
      || *(UserServantLeaderEntity_c **)(*(_QWORD *)(*v218 + 200LL) + 8 * v220 - 8) != UserServantLeaderEntity_TypeInfo )
    {
      sub_B5D990(v218);
LABEL_547:
      sub_B5D990(v259);
LABEL_548:
      sub_B5D990(v362);
LABEL_549:
      sub_B5D69C(v218, v219);
    }
    v221 = *p_userSvtEntity;
    if ( !*p_userSvtEntity )
      sub_B5D69C(v218, UserServantLeaderEntity_TypeInfo);
    v222 = v221[2];
    v223 = v218[7];
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v484.fields.currentCryptoKey = v221[1];
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v484.fields.fakeValue = v222;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v481 = v484;
    if ( v223 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v481, 0LL) )
    {
      this->fields.isUseSupport = 1;
      break;
    }
  }
  v485[v486++] = 1071;
  v224 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v225 = 0LL;
    v226 = &v224->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v226 - 1) != System_IDisposable_TypeInfo )
    {
      ++v225;
      v226 += 4;
      if ( v225 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_80;
    }
    v227 = (__int64)&v224->vtable[*v226].method;
  }
  else
  {
LABEL_80:
    v227 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v208);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v227)(
    Enumerator,
    *(_QWORD *)(v227 + 8));
  if ( v486 && v485[v486 - 1] == 1071 )
    --v486;
  Instance = (int64_t)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_544;
  Instance = UserServantEntity__IsEventJoin((UserServantEntity_o *)Instance, 0LL);
  v228 = this->fields.userSvtEntity;
  this->fields.isEventJoin = Instance & 1;
  if ( !v228 )
    goto LABEL_544;
  Instance = UserServantEntity__IsHeroine(v228, 0LL);
  if ( (Instance & 1) != 0 )
    this->fields.isHeroineSvt = 1;
  if ( baseUsrSvtData )
  {
    v229 = *p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_544;
    v230 = v229[2];
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v484.fields.currentCryptoKey = v229[1];
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v484.fields.fakeValue = v230;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v480 = v484;
    v231 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v480, 0LL);
    v232 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
    *(_OWORD *)&v479.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v479.fields.fakeValue = v232;
    if ( v231 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v479, 0LL) )
      this->fields.isBaseSvt = 1;
  }
  Instance = (int64_t)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_544;
  if ( UserServantEntity__IsCombineExp((UserServantEntity_o *)Instance, 0LL) )
    this->fields.isExpUpSvt = 1;
  Instance = (int64_t)*p_servantEntity;
  if ( !*p_servantEntity )
    goto LABEL_544;
  if ( ServantEntity__get_IsStatusUp((ServantEntity_o *)Instance, 0LL) )
    *p_isStatusUpSvt = 1;
  Instance = (int64_t)*p_servantEntity;
  if ( !*p_servantEntity )
    goto LABEL_544;
  if ( ServantEntity__get_IsServantMaterialTd((ServantEntity_o *)Instance, 0LL) )
    this->fields.isMaterialTdSvt = 1;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_544;
  v233 = (UserServantCommandCodeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             (DataManager_o *)Instance,
                                             (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__get_UserId(0LL);
  v234 = *p_servantEntity;
  if ( !*p_servantEntity )
    goto LABEL_544;
  v235 = Instance;
  v236 = *(_QWORD *)&v234->fields.id.fields.currentCryptoKey;
  v237 = *(_QWORD *)&v234->fields.id.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v497.fields.currentCryptoKey = v236;
  *(_QWORD *)&v497.fields.fakeValue = v237;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v497, 0LL);
  if ( !v233 )
    goto LABEL_544;
  if ( UserServantCommandCodeMaster__TryGetEntity(v233, &entity, v235, (int)Instance, 0LL) )
  {
    Instance = (int64_t)entity;
    if ( !entity )
      goto LABEL_544;
    this->fields.isEquipedCmdCard = UserServantCommandCodeEntity__IsEquipedCommandCode(entity, 0LL);
    Instance = (int64_t)entity;
    if ( !entity )
      goto LABEL_544;
    this->fields.isCmdCardSlotOpen = UserServantCommandCodeEntity__IsCommandCardSlotOpen(entity, 0LL);
  }
  v238 = this->fields.type;
  if ( v238 == 10 )
  {
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_544;
    v239 = (UserServantCommandCardMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)Instance,
                                               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantCommandCardMaster___);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Instance = NetworkManager__get_UserId(0LL);
    v240 = *p_servantEntity;
    if ( !*p_servantEntity )
      goto LABEL_544;
    v241 = Instance;
    v242 = *(_QWORD *)&v240->fields.id.fields.currentCryptoKey;
    v243 = *(_QWORD *)&v240->fields.id.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v498.fields.currentCryptoKey = v242;
    *(_QWORD *)&v498.fields.fakeValue = v243;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v498, 0LL);
    if ( !v239 )
      goto LABEL_544;
    Instance = UserServantCommandCardMaster__TryGetEntity(v239, &v494, v241, (int)Instance, 0LL);
    if ( (Instance & 1) != 0 )
    {
      if ( !v494 )
        goto LABEL_544;
      commandCardParam = v494->fields.commandCardParam;
      if ( commandCardParam )
      {
        max_length = commandCardParam->max_length;
        if ( max_length >= 1 )
        {
          v246 = 0LL;
          while ( 1 )
          {
            if ( (unsigned int)v246 >= max_length )
            {
LABEL_556:
              v445 = sub_B5D6C8(Instance);
              sub_B5D668(v445, 0LL);
            }
            v247 = commandCardParam->m_Items[v246 + 1];
            Instance = (int64_t)BalanceConfig_TypeInfo;
            if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              Instance = (int64_t)BalanceConfig_TypeInfo;
            }
            if ( v247 < *(_DWORD *)(*(_QWORD *)(Instance + 184) + 700LL) )
              break;
            this->fields.isCommandCardExceedMax = 1;
            max_length = commandCardParam->max_length;
            if ( (int)++v246 >= max_length )
              goto LABEL_141;
          }
          this->fields.isCommandCardExceedMax = 0;
        }
      }
    }
LABEL_141:
    v238 = this->fields.type;
  }
  if ( v238 == 1 )
  {
    this->fields.isMaterialSvt = isMtSvt;
    this->fields.isParty = v457;
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_544;
    Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantLeaderMaster___);
    if ( !Instance )
      goto LABEL_544;
    Instance = *(_QWORD *)(Instance + 32);
    if ( !Instance )
      goto LABEL_544;
    v250 = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
             (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
             (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    if ( !v250 )
      sub_B5D69C(0LL, v248);
    while ( 1 )
    {
      v251 = v250->klass;
      if ( *(_WORD *)&v250->klass->_2.bitflags1 )
      {
        v252 = 0LL;
        v253 = &v251->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)v253 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v252;
          v253 += 4;
          if ( v252 >= *(unsigned __int16 *)&v250->klass->_2.bitflags1 )
            goto LABEL_151;
        }
        v254 = (__int64)&v251->vtable[*v253].method;
      }
      else
      {
LABEL_151:
        v254 = sub_AF54C0(v250, System_Collections_IEnumerator_TypeInfo, 0LL, v249);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v254)(
              v250,
              *(_QWORD *)(v254 + 8)) & 1) == 0 )
        break;
      v255 = v250->klass;
      if ( *(_WORD *)&v250->klass->_2.bitflags1 )
      {
        v256 = 0LL;
        v257 = &v255->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v257 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
        {
          ++v256;
          v257 += 4;
          if ( v256 >= *(unsigned __int16 *)&v250->klass->_2.bitflags1 )
            goto LABEL_158;
        }
        v258 = (__int64)&v255->vtable[*v257].method;
      }
      else
      {
LABEL_158:
        v258 = sub_AF54C0(v250, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v249);
      }
      v259 = (_QWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v258)(
                         v250,
                         *(_QWORD *)(v258 + 8));
      if ( !v259 )
        sub_B5D69C(0LL, v260);
      v261 = *(&UserServantLeaderEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*v259 + 300LL) < (unsigned int)v261
        || *(UserServantLeaderEntity_c **)(*(_QWORD *)(*v259 + 200LL) + 8 * v261 - 8) != UserServantLeaderEntity_TypeInfo )
      {
        goto LABEL_547;
      }
      v262 = *p_userSvtEntity;
      if ( !*p_userSvtEntity )
        sub_B5D69C(v259, UserServantLeaderEntity_TypeInfo);
      v263 = v262[2];
      v264 = v259[7];
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v484.fields.currentCryptoKey = v262[1];
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v484.fields.fakeValue = v263;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v478 = v484;
      if ( v264 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v478, 0LL) )
      {
        this->fields.isUseSupport = 1;
        break;
      }
    }
    v485[v486++] = 1511;
    v265 = v250->klass;
    if ( *(_WORD *)&v250->klass->_2.bitflags1 )
    {
      v266 = 0LL;
      v267 = &v265->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v267 - 1) != System_IDisposable_TypeInfo )
      {
        ++v266;
        v267 += 4;
        if ( v266 >= *(unsigned __int16 *)&v250->klass->_2.bitflags1 )
          goto LABEL_173;
      }
      v268 = (__int64)&v265->vtable[*v267].method;
    }
    else
    {
LABEL_173:
      v268 = sub_AF54C0(v250, System_IDisposable_TypeInfo, 0LL, v249);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v268)(v250, *(_QWORD *)(v268 + 8));
    if ( v486 && v485[v486 - 1] == 1511 )
      --v486;
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_544;
    Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_CombineMaterialMaster___);
    if ( !*p_servantEntity )
      goto LABEL_544;
    if ( !*p_userSvtEntity )
      goto LABEL_544;
    if ( !Instance )
      goto LABEL_544;
    Instance = (int64_t)CombineMaterialMaster__GetEntity(
                          (CombineMaterialMaster_o *)Instance,
                          (*p_servantEntity)->fields.combineMaterialId,
                          (*p_userSvtEntity)[16].fields.currentCryptoKey,
                          0LL);
    if ( !Instance )
      goto LABEL_544;
    this->fields.materialExp = *(_DWORD *)(Instance + 24);
    if ( baseUsrSvtData )
    {
      v269 = *p_userSvtEntity;
      if ( !*p_userSvtEntity )
        goto LABEL_544;
      v271 = *(_QWORD *)&v269[5].fields.currentCryptoKey;
      v270 = *(_QWORD *)&v269[5].fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v499.fields.currentCryptoKey = v271;
      *(_QWORD *)&v499.fields.fakeValue = v270;
      v272 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v499, 0LL);
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(baseUsrSvtData->fields.svtId, 0LL);
      if ( v272 == (_DWORD)Instance )
      {
        v273 = this->fields.userSvtEntity;
        this->fields.isLimitCntTarget = 1;
        if ( !v273 )
          goto LABEL_544;
        v274 = *(_OWORD *)&v273->fields.id.fields.fakeValue;
        *(_OWORD *)&v484.fields.currentCryptoKey = *(_OWORD *)&v273->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v484.fields.fakeValue = v274;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v477 = v484;
        v275 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v477, 0LL);
        v276 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
        *(_OWORD *)&v476.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v476.fields.fakeValue = v276;
        if ( v275 != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v476, 0LL) )
          this->fields.isSameBaseSvt = 1;
      }
      Instance = (int64_t)*p_userSvtEntity;
      if ( !*p_userSvtEntity )
        goto LABEL_544;
      SvtClassId = UserServantEntity__getSvtClassId((UserServantEntity_o *)Instance, 0LL);
      if ( SvtClassId == UserServantEntity__getSvtClassId(baseUsrSvtData, 0LL) )
        this->fields.isSameClass = 1;
      Instance = (int64_t)*p_servantEntity;
      if ( !*p_servantEntity )
        goto LABEL_544;
      if ( ServantEntity__get_IsStatusUp((ServantEntity_o *)Instance, 0LL) )
        goto LABEL_202;
      Instance = (int64_t)*p_servantEntity;
      if ( !*p_servantEntity )
        goto LABEL_544;
      if ( ServantEntity__get_IsCombineMaterial((ServantEntity_o *)Instance, 0LL) )
      {
LABEL_202:
        Instance = (int64_t)*p_servantEntity;
        if ( !*p_servantEntity )
          goto LABEL_544;
        if ( ServantEntity__get_IsAllClass((ServantEntity_o *)Instance, 0LL) )
          this->fields.isSameClass = 1;
      }
      this->fields.isBaseLvMax = UserServantEntity__isLevelMax(baseUsrSvtData, 0LL);
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_544;
      Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantClassMaster___);
      if ( !*p_servantEntity )
        goto LABEL_544;
      if ( !Instance )
        goto LABEL_544;
      Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                            (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                            (*p_servantEntity)->fields.classId,
                            (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_544;
      HIDWORD(v492) = *(_DWORD *)(Instance + 52);
      v278 = UserServantEntity__getSvtClassId(baseUsrSvtData, 0LL);
      SvtClassGroupType = UserServantEntity__getSvtClassGroupType(baseUsrSvtData, v278, 0LL);
      if ( System_Int32__Equals_39741700((int32_t)&v492 + 4, 3, 0LL) )
        goto LABEL_210;
      Instance = System_Int32__Equals_39741700((int32_t)&v492 + 4, SvtClassGroupType, 0LL);
      if ( (Instance & 1) != 0 )
      {
        if ( !*p_servantEntity )
          goto LABEL_544;
        classId = (*p_servantEntity)->fields.classId;
        if ( classId == UserServantEntity__getSvtClassId(baseUsrSvtData, 0LL) )
        {
LABEL_210:
          materialExp = this->fields.materialExp;
          v281 = BalanceConfig_TypeInfo;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v281 = BalanceConfig_TypeInfo;
          }
          SameClassExp = v281->static_fields->SameClassExp;
          if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !System_Math_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
          }
          v283 = ceil((double)materialExp * (double)SameClassExp / 1000.0);
          if ( v283 == INFINITY )
            v283 = -v283;
          this->fields.materialExp = (int)v283;
        }
      }
    }
    else
    {
      this->fields.isLimitCntTarget = 0;
    }
    Instance = (int64_t)this->fields.userSvtEntity;
    this->fields.isFavorite = isFavorite;
    if ( !Instance )
      goto LABEL_544;
    Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL);
    v285 = this->fields.userSvtEntity;
    this->fields.isLock = Instance & 1;
    if ( !v285 )
      goto LABEL_544;
    *p_isChoice = UserServantEntity__IsChoice(v285, 0LL);
    Instance = (int64_t)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_544;
    this->fields.isEventJoin = UserServantEntity__IsEventJoin((UserServantEntity_o *)Instance, 0LL);
    Instance = (int64_t)this->fields.userSvtEntity;
    this->fields.hpBase = *(_DWORD *)(v188 + 36);
    this->fields.atkBase = *(_DWORD *)(v188 + 44);
    if ( !Instance )
      goto LABEL_544;
    if ( UserServantEntity__IsHeroine((UserServantEntity_o *)Instance, 0LL) )
      this->fields.isHeroineSvt = 1;
    Instance = (int64_t)*p_servantEntity;
    if ( !*p_servantEntity )
      goto LABEL_544;
    Instance = ServantEntity__get_IsStatusUp((ServantEntity_o *)Instance, 0LL);
    if ( (Instance & 1) != 0 )
    {
      *p_isStatusUpSvt = 1;
      if ( !baseUsrSvtData )
        goto LABEL_544;
      v286 = UserServantEntity__getSvtClassId(baseUsrSvtData, 0LL);
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_544;
      Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantClassMaster___);
      if ( !*p_servantEntity )
        goto LABEL_544;
      if ( !Instance )
        goto LABEL_544;
      Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                            (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                            (*p_servantEntity)->fields.classId,
                            (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_544;
      LODWORD(v492) = *(_DWORD *)(Instance + 52);
      if ( !*p_servantEntity )
        goto LABEL_544;
      if ( (*p_servantEntity)->fields.classId == v286 || System_Int32__Equals_39741700((int32_t)&v492, 3, 0LL) )
      {
        this->fields.isCanStUp = 1;
        v287 = UserServantEntity__isAdjustAtkMax(baseUsrSvtData, 0LL) && this->fields.atkBase > 0;
        this->fields.isAtkUpMax = v287;
        v288 = UserServantEntity__isAdjustHpMax(baseUsrSvtData, 0LL) && this->fields.hpBase > 0;
        this->fields.isHpUpMax = v288;
        v289 = UserServantEntity__isSecondAdjustAtkMax(baseUsrSvtData, 0LL) && this->fields.atkBase > 0;
        this->fields.isAtkSecondUpMax = v289;
        v290 = UserServantEntity__isSecondAdjustHpMax(baseUsrSvtData, 0LL) && this->fields.hpBase > 0;
        this->fields.isHpSecondUpMax = v290;
      }
    }
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_544;
    v291 = (UserServantCommandCodeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)Instance,
                                               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Instance = NetworkManager__get_UserId(0LL);
    v292 = *p_servantEntity;
    if ( !*p_servantEntity )
      goto LABEL_544;
    v293 = Instance;
    v294 = *(_QWORD *)&v292->fields.id.fields.currentCryptoKey;
    v295 = *(_QWORD *)&v292->fields.id.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v500.fields.currentCryptoKey = v294;
    *(_QWORD *)&v500.fields.fakeValue = v295;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v500, 0LL);
    if ( !v291 )
      goto LABEL_544;
    if ( UserServantCommandCodeMaster__TryGetEntity(v291, &v493, v293, (int)Instance, 0LL) )
    {
      Instance = (int64_t)v493;
      if ( !v493 )
        goto LABEL_544;
      this->fields.isEquipedCmdCard = UserServantCommandCodeEntity__IsEquipedCommandCode(v493, 0LL);
      Instance = (int64_t)v493;
      if ( !v493 )
        goto LABEL_544;
      this->fields.isCmdCardSlotOpen = UserServantCommandCodeEntity__IsCommandCardSlotOpen(v493, 0LL);
    }
  }
  v296 = this->fields.type;
  if ( v296 == 9 )
  {
    v297 = v457;
    Instance = (int64_t)userSvtEntity;
    if ( !userSvtEntity )
      goto LABEL_544;
    Instance = UserServantEntity__isLimitCountMax(userSvtEntity, 0LL);
    v321 = this->fields.userSvtEntity;
    this->fields.isLimitCntMax = Instance & 1;
    if ( !v321 )
      goto LABEL_544;
    isLevelMax = UserServantEntity__isLevelMax(v321, 0LL);
    Instance = (int64_t)this->fields.userSvtEntity;
    this->fields.isLvMax = isLevelMax;
    this->fields.isParty = v457;
    if ( !Instance )
      goto LABEL_544;
    Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL);
    v323 = this->fields.userSvtEntity;
    this->fields.isLock = Instance & 1;
    if ( !v323 )
      goto LABEL_544;
    *p_isChoice = UserServantEntity__IsChoice(v323, 0LL);
    Instance = (int64_t)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_544;
    Instance = UserServantEntity__IsEventJoin((UserServantEntity_o *)Instance, 0LL);
    v324 = this->fields.userSvtEntity;
    this->fields.isEventJoin = Instance & 1;
    if ( !v324 )
      goto LABEL_544;
    this->fields.isIgnoreCombineLimitSpecial = UserServantEntity__IsIgnoreCombineLimitSpecial(v324, 0LL);
    Instance = CombineServantListViewItem__GetSealCombineLimit(this, v325);
    this->fields.isSealCombineLimit = Instance & 1;
    if ( baseUsrSvtData )
    {
      v326 = *p_userSvtEntity;
      if ( !*p_userSvtEntity )
        goto LABEL_544;
      v327 = v326[2];
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v484.fields.currentCryptoKey = v326[1];
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v484.fields.fakeValue = v327;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v472 = v484;
      v328 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v472, 0LL);
      v329 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
      *(_OWORD *)&v471.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v471.fields.fakeValue = v329;
      if ( v328 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v471, 0LL) )
        this->fields.isBaseSvt = 1;
    }
    Instance = (int64_t)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_544;
    if ( !UserServantEntity__IsHeroine((UserServantEntity_o *)Instance, 0LL) )
      goto LABEL_324;
  }
  else
  {
    v297 = v457;
    if ( v296 != 2 )
      goto LABEL_325;
    Instance = (int64_t)userSvtEntity;
    if ( !userSvtEntity )
      goto LABEL_544;
    Instance = UserServantEntity__isLimitCountMax(userSvtEntity, 0LL);
    v298 = this->fields.userSvtEntity;
    this->fields.isLimitCntMax = Instance & 1;
    if ( !v298 )
      goto LABEL_544;
    v299 = UserServantEntity__isLevelMax(v298, 0LL);
    Instance = (int64_t)this->fields.userSvtEntity;
    this->fields.isLvMax = v299;
    this->fields.isParty = v457;
    if ( !Instance )
      goto LABEL_544;
    Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL);
    v300 = this->fields.userSvtEntity;
    this->fields.isLock = Instance & 1;
    if ( !v300 )
      goto LABEL_544;
    *p_isChoice = UserServantEntity__IsChoice(v300, 0LL);
    Instance = (int64_t)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_544;
    this->fields.isEventJoin = UserServantEntity__IsEventJoin((UserServantEntity_o *)Instance, 0LL);
    Instance = CombineServantListViewItem__GetSealCombineLimit(this, v301);
    this->fields.isSealCombineLimit = Instance & 1;
    if ( baseUsrSvtData )
    {
      v302 = *p_userSvtEntity;
      if ( !*p_userSvtEntity )
        goto LABEL_544;
      v303 = v302[2];
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v484.fields.currentCryptoKey = v302[1];
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v484.fields.fakeValue = v303;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v475 = v484;
      v304 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v475, 0LL);
      v305 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
      *(_OWORD *)&v474.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v474.fields.fakeValue = v305;
      if ( v304 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v474, 0LL) )
        this->fields.isBaseSvt = 1;
    }
    Instance = (int64_t)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_544;
    Instance = UserServantEntity__IsHeroine((UserServantEntity_o *)Instance, 0LL);
    if ( (Instance & 1) == 0 )
    {
      if ( !*p_servantEntity )
        goto LABEL_544;
      v306 = *p_userSvtEntity;
      if ( !*p_userSvtEntity )
        goto LABEL_544;
      combineLimitId = (*p_servantEntity)->fields.combineLimitId;
      v308 = *(_QWORD *)&v306[6].fields.currentCryptoKey;
      v309 = *(_QWORD *)&v306[6].fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v501.fields.currentCryptoKey = v308;
      *(_QWORD *)&v501.fields.fakeValue = v309;
      v310 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v501, 0LL);
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_544;
      Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_CombineLimitMaster___);
      if ( !Instance )
        goto LABEL_544;
      Instance = (int64_t)CombineLimitMaster__GetEntity((CombineLimitMaster_o *)Instance, combineLimitId, v310, 0LL);
      if ( !Instance )
        goto LABEL_544;
      v311 = *(_QWORD *)(Instance + 32);
      v312 = *(_QWORD *)(Instance + 40);
      v313 = (UserServantEntity_o *)Instance;
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_544;
      v456 = v313;
      Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserItemMaster___);
      if ( !v312 )
        goto LABEL_544;
      v314 = *(_QWORD *)(v312 + 24);
      if ( (int)v314 >= 1 )
      {
        v315 = (UserItemMaster_o *)Instance;
        for ( i = 0LL; (__int64)i < (int)v314; ++i )
        {
          if ( i >= (unsigned int)v314 )
            goto LABEL_556;
          if ( !v311 )
            goto LABEL_544;
          if ( i >= *(unsigned int *)(v311 + 24) )
            goto LABEL_556;
          v317 = *p_userSvtEntity;
          if ( !*p_userSvtEntity )
            goto LABEL_544;
          v318 = v317[4];
          v319 = *(_DWORD *)(v312 + 32 + 4 * i);
          v320 = *(_DWORD *)(v311 + 32 + 4 * i);
          *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v484.fields.currentCryptoKey = v317[3];
          *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v484.fields.fakeValue = v318;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v473 = v484;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v473, 0LL);
          if ( !v315 )
            goto LABEL_544;
          Instance = UserItemMaster__TryGetEntity(v315, &v491, Instance, v319, 0LL);
          if ( (Instance & 1) == 0 )
            goto LABEL_370;
          if ( !v491 )
            goto LABEL_544;
          if ( v319 == v491->fields.itemId )
          {
            if ( v320 > v491->fields.num )
            {
LABEL_370:
              *p_isLimitUpItemNum = 0;
              break;
            }
            *p_isLimitUpItemNum = 1;
          }
          LODWORD(v314) = *(_DWORD *)(v312 + 24);
        }
      }
      baseUsrSvtData = v454;
      v297 = v457;
      if ( *(_DWORD *)(v448 + 96) < SLODWORD(v456->fields.id.fields.hiddenValue) )
        *p_isLimitUpItemNum = 0;
      goto LABEL_324;
    }
  }
  this->fields.isHeroineSvt = 1;
LABEL_324:
  v296 = this->fields.type;
LABEL_325:
  if ( (v296 | 8) == 11 )
  {
    Instance = (int64_t)this->fields.userSvtEntity;
    this->fields.isParty = v297;
    if ( !Instance )
      goto LABEL_544;
    Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL);
    v330 = this->fields.userSvtEntity;
    this->fields.isLock = Instance & 1;
    if ( !v330 )
      goto LABEL_544;
    *p_isChoice = UserServantEntity__IsChoice(v330, 0LL);
    Instance = (int64_t)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_544;
    Instance = UserServantEntity__IsEventJoin((UserServantEntity_o *)Instance, 0LL);
    this->fields.isEventJoin = Instance & 1;
    if ( baseUsrSvtData )
    {
      v331 = *p_userSvtEntity;
      if ( !*p_userSvtEntity )
        goto LABEL_544;
      v332 = v331[2];
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v484.fields.currentCryptoKey = v331[1];
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v484.fields.fakeValue = v332;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v470 = v484;
      v333 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v470, 0LL);
      v334 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
      *(_OWORD *)&v469.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v469.fields.fakeValue = v334;
      if ( v333 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v469, 0LL) )
        this->fields.isBaseSvt = 1;
    }
    Instance = (int64_t)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_544;
    if ( UserServantEntity__IsHeroine((UserServantEntity_o *)Instance, 0LL) )
      this->fields.isHeroineSvt = 1;
    v296 = this->fields.type;
    if ( v296 == 3 )
    {
      CombineServantListViewItem__SetSkillInfo(this, v166);
      v296 = this->fields.type;
    }
    if ( v296 == 11 )
    {
      CombineServantListViewItem__SetAppendSkillInfo(this, v166);
      v296 = this->fields.type;
    }
  }
  if ( v296 != 4 )
    goto LABEL_387;
  Instance = (int64_t)this->fields.userSvtEntity;
  this->fields.isParty = v297;
  if ( !Instance )
    goto LABEL_544;
  Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL);
  v335 = this->fields.userSvtEntity;
  this->fields.isLock = Instance & 1;
  if ( !v335 )
    goto LABEL_544;
  *p_isChoice = UserServantEntity__IsChoice(v335, 0LL);
  Instance = (int64_t)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_544;
  Instance = UserServantEntity__IsEventJoin((UserServantEntity_o *)Instance, 0LL);
  this->fields.isEventJoin = Instance & 1;
  if ( baseUsrSvtData )
  {
    v336 = *p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_544;
    v337 = v336[2];
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v484.fields.currentCryptoKey = v336[1];
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v484.fields.fakeValue = v337;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v468 = v484;
    v338 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v468, 0LL);
    v339 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
    *(_OWORD *)&v467.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v467.fields.fakeValue = v339;
    if ( v338 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v467, 0LL) )
      this->fields.isBaseSvt = 1;
  }
  Instance = (int64_t)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
LABEL_544:
    sub_B5D69C(Instance, v166);
  if ( UserServantEntity__IsHeroine((UserServantEntity_o *)Instance, 0LL) )
  {
    this->fields.isHeroineSvt = 1;
  }
  else
  {
    Instance = (int64_t)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_544;
    Instance = UserServantEntity__getTreasureDeviceInfo((UserServantEntity_o *)Instance, &tdInfo, -1, -1, 0, 0LL);
    this->fields.isTdLvMax = 1;
    if ( !tdInfo )
      goto LABEL_544;
    id = tdInfo->fields.id;
    if ( id >= 1 )
    {
      lv = tdInfo->fields.lv;
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_544;
      Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
      if ( !Instance )
        goto LABEL_544;
      Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                            (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                            id,
                            (const MethodInfo_23FAE10 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_544;
      if ( lv < *(_DWORD *)(Instance + 48) )
        this->fields.isTdLvMax = 0;
    }
    Instance = (int64_t)MasterData_WarQuestSelectionMaster;
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_544;
    SameSvtNpLvCache = UserServantMaster__getSameSvtNpLvCache(
                         MasterData_WarQuestSelectionMaster,
                         (UserServantEntity_o *)*p_userSvtEntity,
                         &cachedUserServantNpLvDict,
                         0LL);
    if ( SameSvtNpLvCache >= 1 && !this->fields.isTdLvMax )
    {
      v344 = SameSvtNpLvCache;
      CombineServantListViewItem__GetNpInfo(this, &tdLv[1], tdLv, &tdMaxLv, v343);
      if ( v446 <= 1200000 )
      {
        Instance = (int64_t)*p_userSvtEntity;
        if ( !*p_userSvtEntity )
          goto LABEL_544;
        v346 = UserServantEntity__checkTreasureDeviceLevelUp((UserServantEntity_o *)Instance, v344, 0LL);
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
            Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !Instance )
              goto LABEL_544;
            Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
            if ( !Instance )
              goto LABEL_544;
            Instance = (int64_t)TreasureDvcLvMaster__GetEntity((TreasureDvcLvMaster_o *)Instance, v348, v347, 0LL);
            if ( Instance )
              v350 += *(_DWORD *)(Instance + 92);
            ++v347;
          }
          while ( v347 < v349 );
          baseUsrSvtData = v454;
          if ( !this )
            goto LABEL_544;
        }
        v345 = v446 >= v350;
      }
      else
      {
        v345 = 1;
      }
      this->fields.isSameSvt = v345;
    }
  }
  v296 = this->fields.type;
LABEL_387:
  if ( v296 != 5 )
    goto LABEL_437;
  this->fields.isParty = v297;
  this->fields.isMaterialSvt = isMtSvt;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_544;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantLeaderMaster___);
  if ( !Instance )
    goto LABEL_544;
  Instance = *(_QWORD *)(Instance + 32);
  if ( !Instance )
    goto LABEL_544;
  v353 = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
           (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
           (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !v353 )
    sub_B5D69C(0LL, v351);
  while ( 1 )
  {
    v354 = v353->klass;
    if ( *(_WORD *)&v353->klass->_2.bitflags1 )
    {
      v355 = 0LL;
      v356 = &v354->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)v356 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v355;
        v356 += 4;
        if ( v355 >= *(unsigned __int16 *)&v353->klass->_2.bitflags1 )
          goto LABEL_396;
      }
      v357 = (__int64)&v354->vtable[*v356].method;
    }
    else
    {
LABEL_396:
      v357 = sub_AF54C0(v353, System_Collections_IEnumerator_TypeInfo, 0LL, v352);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v357)(
            v353,
            *(_QWORD *)(v357 + 8)) & 1) == 0 )
      break;
    v358 = v353->klass;
    if ( *(_WORD *)&v353->klass->_2.bitflags1 )
    {
      v359 = 0LL;
      v360 = &v358->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v360 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v359;
        v360 += 4;
        if ( v359 >= *(unsigned __int16 *)&v353->klass->_2.bitflags1 )
          goto LABEL_403;
      }
      v361 = (__int64)&v358->vtable[*v360].method;
    }
    else
    {
LABEL_403:
      v361 = sub_AF54C0(v353, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v352);
    }
    v362 = (_QWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v361)(
                       v353,
                       *(_QWORD *)(v361 + 8));
    if ( !v362 )
      sub_B5D69C(0LL, v363);
    v364 = *(&UserServantLeaderEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*v362 + 300LL) < (unsigned int)v364
      || *(UserServantLeaderEntity_c **)(*(_QWORD *)(*v362 + 200LL) + 8 * v364 - 8) != UserServantLeaderEntity_TypeInfo )
    {
      goto LABEL_548;
    }
    v365 = (UserServantEntity_o *)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      sub_B5D69C(v362, UserServantLeaderEntity_TypeInfo);
    v366 = *(_OWORD *)&v365->fields.id.fields.fakeValue;
    v367 = v362[7];
    *(_OWORD *)&v484.fields.currentCryptoKey = *(_OWORD *)&v365->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v484.fields.fakeValue = v366;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v466 = v484;
    if ( v367 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v466, 0LL) )
    {
      this->fields.isUseSupport = 1;
      break;
    }
  }
  v485[v486++] = 3557;
  v368 = v353->klass;
  if ( *(_WORD *)&v353->klass->_2.bitflags1 )
  {
    v369 = 0LL;
    v370 = &v368->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v370 - 1) != System_IDisposable_TypeInfo )
    {
      ++v369;
      v370 += 4;
      if ( v369 >= *(unsigned __int16 *)&v353->klass->_2.bitflags1 )
        goto LABEL_418;
    }
    v371 = (__int64)&v368->vtable[*v370].method;
  }
  else
  {
LABEL_418:
    v371 = sub_AF54C0(v353, System_IDisposable_TypeInfo, 0LL, v352);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v371)(v353, *(_QWORD *)(v371 + 8));
  if ( v486 && v485[v486 - 1] == 3557 )
    --v486;
  IsLock = (int64_t)this->fields.userSvtEntity;
  this->fields.isFavorite = isFavorite;
  if ( !IsLock )
    goto LABEL_545;
  IsLock = UserServantEntity__IsLock((UserServantEntity_o *)IsLock, 0LL);
  v373 = this->fields.userSvtEntity;
  this->fields.isLock = IsLock & 1;
  if ( !v373 )
    goto LABEL_545;
  *p_isChoice = UserServantEntity__IsChoice(v373, 0LL);
  IsLock = (int64_t)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_545;
  this->fields.isEventJoin = UserServantEntity__IsEventJoin((UserServantEntity_o *)IsLock, 0LL);
  v374 = baseUsrSvtData && UserServantEntity__IsEventJoin(baseUsrSvtData, 0LL);
  IsLock = (int64_t)this->fields.userSvtEntity;
  this->fields.isEventJoinBaseSvt = v374;
  if ( !IsLock )
    goto LABEL_545;
  IsLock = UserServantEntity__IsMaterialTd((UserServantEntity_o *)IsLock, 0LL);
  this->fields.isMaterialTdSvt = IsLock & 1;
  if ( baseUsrSvtData )
  {
    v375 = (UserServantEntity_o *)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_545;
    v376 = *(_OWORD *)&v375->fields.id.fields.fakeValue;
    *(_OWORD *)&v484.fields.currentCryptoKey = *(_OWORD *)&v375->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v484.fields.fakeValue = v376;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v465 = v484;
    v377 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v465, 0LL);
    v378 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
    *(_OWORD *)&v464.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v464.fields.fakeValue = v378;
    if ( v377 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v464, 0LL) )
      this->fields.isBaseSvt = 1;
  }
LABEL_437:
  v379 = this->fields.type;
  if ( v379 == 6 )
  {
    IsLock = (int64_t)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_545;
    IsLock = UserServantEntity__isExceedLvMax((UserServantEntity_o *)IsLock, 0LL);
    v380 = this->fields.userSvtEntity;
    this->fields.isLvExceedMax = IsLock & 1;
    if ( !v380 )
      goto LABEL_545;
    IsLock = UserServantEntity__isLimitCountMax(v380, 0LL);
    v381 = this->fields.userSvtEntity;
    this->fields.isLimitCntMax = IsLock & 1;
    if ( !v381 )
      goto LABEL_545;
    v382 = UserServantEntity__isLevelMax(v381, 0LL);
    IsLock = (int64_t)this->fields.userSvtEntity;
    this->fields.isLvMax = v382;
    this->fields.isParty = v297;
    if ( !IsLock )
      goto LABEL_545;
    IsLock = UserServantEntity__IsLock((UserServantEntity_o *)IsLock, 0LL);
    v383 = this->fields.userSvtEntity;
    this->fields.isLock = IsLock & 1;
    if ( !v383 )
      goto LABEL_545;
    *p_isChoice = UserServantEntity__IsChoice(v383, 0LL);
    IsLock = (int64_t)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_545;
    IsLock = UserServantEntity__IsEventJoin((UserServantEntity_o *)IsLock, 0LL);
    this->fields.isEventJoin = IsLock & 1;
    if ( baseUsrSvtData )
    {
      v384 = (UserServantEntity_o *)*p_userSvtEntity;
      if ( !*p_userSvtEntity )
        goto LABEL_545;
      v385 = *(_OWORD *)&v384->fields.id.fields.fakeValue;
      *(_OWORD *)&v484.fields.currentCryptoKey = *(_OWORD *)&v384->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v484.fields.fakeValue = v385;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v463 = v484;
      v386 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v463, 0LL);
      v387 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
      *(_OWORD *)&v462.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v462.fields.fakeValue = v387;
      if ( v386 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v462, 0LL) )
        this->fields.isBaseSvt = 1;
    }
    IsLock = (int64_t)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_545;
    if ( UserServantEntity__IsHeroine((UserServantEntity_o *)IsLock, 0LL) )
    {
      this->fields.isHeroineSvt = 1;
    }
    else
    {
      IsLock = (int64_t)*p_userSvtEntity;
      if ( !*p_userSvtEntity )
        goto LABEL_545;
      SvtExceedEnt = UserServantEntity__getSvtExceedEnt((UserServantEntity_o *)IsLock, 0LL);
      if ( SvtExceedEnt )
      {
        v389 = (int32_t *)SvtExceedEnt;
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        IsLock = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_CommonConsumeMaster___);
        if ( !IsLock )
          goto LABEL_545;
        IdEntityList = CommonConsumeMaster__GetIdEntityList((CommonConsumeMaster_o *)IsLock, v389[12], 0LL);
        if ( IdEntityList )
        {
          v391 = IdEntityList;
          v392 = (System_Collections_Generic_HashSet_int__o *)sub_B5D694(System_Collections_Generic_HashSet_int__TypeInfo);
          System_Collections_Generic_HashSet_int____ctor(
            v392,
            (const MethodInfo_24FF478 *)Method_System_Collections_Generic_HashSet_int___ctor___68716232);
          v393 = (System_Collections_Generic_HashSet_int__o *)sub_B5D694(System_Collections_Generic_HashSet_int__TypeInfo);
          System_Collections_Generic_HashSet_int____ctor(
            v393,
            (const MethodInfo_24FF478 *)Method_System_Collections_Generic_HashSet_int___ctor___68716232);
          v394 = v391->max_length;
          if ( v394 >= 1 )
          {
            v395 = 0LL;
            do
            {
              if ( (unsigned int)v395 >= v394 )
              {
LABEL_555:
                v444 = sub_B5D6C8(IsLock);
                sub_B5D668(v444, 0LL);
              }
              v396 = v391->m_Items[v395];
              if ( !v396 )
                goto LABEL_545;
              if ( !v392 )
                goto LABEL_545;
              IsLock = System_Collections_Generic_HashSet_int___Add(
                         v392,
                         v396->fields.objectId,
                         (const MethodInfo_2500654 *)Method_System_Collections_Generic_HashSet_int__Add__);
              if ( !v393 )
                goto LABEL_545;
              IsLock = System_Collections_Generic_HashSet_int___Add(
                         v393,
                         v396->fields.num,
                         (const MethodInfo_2500654 *)Method_System_Collections_Generic_HashSet_int__Add__);
              v394 = v391->max_length;
            }
            while ( (int)++v395 < v394 );
          }
          if ( v389[13] >= 1 )
          {
            if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !DataManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            }
            IsLock = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_SvtCoinMaster___);
            v397 = (UserServantEntity_o *)*p_userSvtEntity;
            if ( !*p_userSvtEntity )
              goto LABEL_545;
            v398 = (DataMasterBase_WarMaster__WarEntity__int__o *)IsLock;
            v399 = *(_QWORD *)&v397->fields.svtId.fields.currentCryptoKey;
            v400 = *(_QWORD *)&v397->fields.svtId.fields.fakeValue;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v502.fields.currentCryptoKey = v399;
            *(_QWORD *)&v502.fields.fakeValue = v400;
            IsLock = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v502, 0LL);
            if ( !v398 )
              goto LABEL_545;
            IsLock = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                v398,
                                IsLock,
                                (const MethodInfo_23FAE10 *)Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__GetEntity__);
            if ( !IsLock )
              goto LABEL_545;
            if ( !v392 )
              goto LABEL_545;
            IsLock = System_Collections_Generic_HashSet_int___Add(
                       v392,
                       *(_DWORD *)(IsLock + 24),
                       (const MethodInfo_2500654 *)Method_System_Collections_Generic_HashSet_int__Add__);
            if ( !v393 )
              goto LABEL_545;
            System_Collections_Generic_HashSet_int___Add(
              v393,
              v389[13],
              (const MethodInfo_2500654 *)Method_System_Collections_Generic_HashSet_int__Add__);
          }
          v401 = this->fields.userSvtEntity;
          v402 = System_Linq_Enumerable__ToArray_int_(
                   (System_Collections_Generic_IEnumerable_TSource__o *)v392,
                   (const MethodInfo_1CB76BC *)Method_System_Linq_Enumerable_ToArray_int___);
          v403 = System_Linq_Enumerable__ToArray_int_(
                   (System_Collections_Generic_IEnumerable_TSource__o *)v393,
                   (const MethodInfo_1CB76BC *)Method_System_Linq_Enumerable_ToArray_int___);
          baseUsrSvtData = v454;
          v297 = v457;
          this->fields.isLvExceedItemNum = CombineUtility__CheckCombineNeedItemsEnough(
                                             v401,
                                             v402,
                                             v403,
                                             *(_DWORD *)(v448 + 96),
                                             v389[8],
                                             0LL);
        }
      }
    }
    v379 = this->fields.type;
  }
  if ( v379 != 8 )
    goto LABEL_530;
  IsLock = (int64_t)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_545;
  this->fields.isFriendshipExceedMax = UserServantEntity__isExceedFriendshipMax((UserServantEntity_o *)IsLock, 0LL);
  v404 = *(_QWORD *)(v453 + 100);
  v405 = *(_QWORD *)(v453 + 108);
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v503.fields.currentCryptoKey = v404;
  *(_QWORD *)&v503.fields.fakeValue = v405;
  IsLock = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v503, 0LL);
  if ( !*p_servantEntity )
    goto LABEL_545;
  maxFriendshipRank = (*p_servantEntity)->fields.maxFriendshipRank;
  v407 = *(_DWORD *)(v453 + 116);
  v408 = this->fields.userSvtEntity;
  this->fields.isParty = v297;
  this->fields.isFriendshipRankMax = (_DWORD)IsLock == v407 + maxFriendshipRank;
  if ( !v408 )
    goto LABEL_545;
  IsLock = UserServantEntity__IsLock(v408, 0LL);
  v409 = this->fields.userSvtEntity;
  this->fields.isLock = IsLock & 1;
  if ( !v409 )
    goto LABEL_545;
  *p_isChoice = UserServantEntity__IsChoice(v409, 0LL);
  IsLock = (int64_t)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_545;
  IsLock = UserServantEntity__IsEventJoin((UserServantEntity_o *)IsLock, 0LL);
  this->fields.isEventJoin = IsLock & 1;
  if ( baseUsrSvtData )
  {
    v410 = (UserServantEntity_o *)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_545;
    v411 = *(_OWORD *)&v410->fields.id.fields.fakeValue;
    *(_OWORD *)&v484.fields.currentCryptoKey = *(_OWORD *)&v410->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v484.fields.fakeValue = v411;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v461 = v484;
    v412 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v461, 0LL);
    v413 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
    *(_OWORD *)&v460.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v460.fields.fakeValue = v413;
    if ( v412 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v460, 0LL) )
      this->fields.isBaseSvt = 1;
  }
  IsLock = (int64_t)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
LABEL_545:
    sub_B5D69C(IsLock, v166);
  IsLock = UserServantEntity__IsHeroine((UserServantEntity_o *)IsLock, 0LL);
  if ( (IsLock & 1) != 0 )
  {
    this->fields.isHeroineSvt = 1;
    goto LABEL_530;
  }
  if ( !this->fields.isFriendshipRankMax || this->fields.isFriendshipExceedMax )
    goto LABEL_530;
  if ( !*p_servantEntity )
    goto LABEL_545;
  v414 = (*p_servantEntity)->fields.maxFriendshipRank;
  v415 = *(_DWORD *)(v453 + 116);
  IsLock = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !IsLock )
    goto LABEL_545;
  IsLock = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                      (DataManager_o *)IsLock,
                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_FriendshipMaster___);
  if ( !*p_servantEntity )
    goto LABEL_545;
  if ( !IsLock )
    goto LABEL_545;
  IsLock = (int64_t)FriendshipMaster__GetEntity(
                      (FriendshipMaster_o *)IsLock,
                      (*p_servantEntity)->fields.friendshipId,
                      v414 + v415 + 1,
                      0LL);
  if ( !IsLock )
    goto LABEL_545;
  v416 = IsLock;
  v417 = *(_QWORD *)(IsLock + 32);
  v418 = *(_QWORD *)(IsLock + 40);
  IsLock = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !IsLock )
    goto LABEL_545;
  IsLock = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                      (DataManager_o *)IsLock,
                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !v418 )
    goto LABEL_545;
  if ( *(int *)(v418 + 24) >= 1 )
  {
    v419 = (UserItemMaster_o *)IsLock;
    v420 = 0LL;
    v421 = v418 + 32;
    while ( 1 )
    {
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      IsLock = NetworkManager__get_UserId(0LL);
      if ( v420 >= *(unsigned int *)(v418 + 24) )
        goto LABEL_555;
      if ( !v419 )
        goto LABEL_545;
      IsLock = UserItemMaster__TryGetEntity(v419, &v487, IsLock, *(_DWORD *)(v421 + 4 * v420), 0LL);
      if ( (IsLock & 1) == 0 )
        break;
      if ( v420 >= *(unsigned int *)(v418 + 24) )
        goto LABEL_555;
      if ( !v487 )
        goto LABEL_545;
      if ( *(_DWORD *)(v421 + 4 * v420) == v487->fields.itemId )
      {
        if ( !v417 )
          goto LABEL_545;
        if ( v420 >= *(unsigned int *)(v417 + 24) )
          goto LABEL_555;
        v422 = *(_DWORD *)(v417 + 32 + 4 * v420) <= v487->fields.num;
        goto LABEL_526;
      }
LABEL_527:
      if ( (__int64)++v420 >= *(int *)(v418 + 24) )
        goto LABEL_528;
    }
    v422 = 0;
LABEL_526:
    this->fields.isFriendshipExceedItemNum = v422;
    goto LABEL_527;
  }
LABEL_528:
  if ( *(_DWORD *)(v448 + 96) < *(_DWORD *)(v416 + 28) )
    this->fields.isFriendshipExceedItemNum = 0;
LABEL_530:
  IsLock = (int64_t)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_545;
  IsLock = UserServantEntity__getDispLimitCount((UserServantEntity_o *)IsLock, 0, 0LL);
  v423 = this->fields.userSvtEntity;
  this->fields.dispLimitCount = IsLock;
  if ( !v423 )
    goto LABEL_545;
  SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v423, -1, 0LL);
  this->fields.skillCategoryIdList = SkillCategoryIdList;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.skillCategoryIdList,
    (System_Int32_array **)SkillCategoryIdList,
    v425,
    v426,
    v427,
    v428,
    v429,
    v430);
  IsLock = (int64_t)this->fields.userSvtEntity;
  if ( !IsLock )
    goto LABEL_545;
  TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                   (UserServantEntity_o *)IsLock,
                                   0,
                                   0LL);
  this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.tdCategoryIdList,
    (System_Int32_array **)TreasureDeviceCategoryIdList,
    v432,
    v433,
    v434,
    v435,
    v436,
    v437);
  IsLock = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !IsLock )
    goto LABEL_545;
  IsLock = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                      (DataManager_o *)IsLock,
                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !IsLock )
    goto LABEL_545;
  IsLock = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                      (DataMasterBase_WarMaster__WarEntity__int__o *)IsLock,
                      this->fields.classId,
                      (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !IsLock )
    goto LABEL_545;
  v438 = *(int *)(IsLock + 48);
  v439 = this->fields.servantEntity;
  this->fields.priority = v438;
  this->fields.sortValue1B = v438;
  if ( !v439 )
    goto LABEL_545;
  v440 = (UserServantEntity_o *)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_545;
  this->fields.sortValue2 = ((__int64)v439->fields.collectionNo << 16) | ((unsigned __int64)(unsigned int)this->fields.rarity << 48) | v440->fields.lv;
  v442 = *(_QWORD *)&v440->fields.svtId.fields.currentCryptoKey;
  v441 = *(_QWORD *)&v440->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v504.fields.currentCryptoKey = v442;
  *(_QWORD *)&v504.fields.fakeValue = v441;
  v443 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v504, 0LL);
  IsLock = (int64_t)this->fields.iconLabelInfo1;
  this->fields.sortValue2B = v443;
  this->fields.amountSortValue = -1LL;
  if ( !IsLock )
    goto LABEL_545;
  IconLabelInfo__Clear((IconLabelInfo_o *)IsLock, 0LL);
  IsLock = (int64_t)*p_iconLabelInfo2;
  if ( !*p_iconLabelInfo2 )
    goto LABEL_545;
  IconLabelInfo__Clear((IconLabelInfo_o *)IsLock, 0LL);
}


void __fastcall CombineServantListViewItem__Finalize(CombineServantListViewItem_o *this, const MethodInfo *method)
{
  ListViewItem__Finalize((ListViewItem_o *)this, 0LL);
}


SvtUseSkillData_o *__fastcall CombineServantListViewItem__GetAppendSkillData(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UserServantEntity_o *userSvtEntity; // x0
  SvtUseSkillData_o *v7; // x19

  if ( (byte_42EB579 & 1) == 0 )
  {
    sub_B5D5C4(&SvtUseSkillData_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EB579 = 1;
  }
  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
    return UserServantEntity__getAppendSkillInfo(userSvtEntity, 0LL);
  v7 = (SvtUseSkillData_o *)sub_B5D694(SvtUseSkillData_TypeInfo);
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
  UserServantEntity_o *userSvtEntity; // x0
  _BOOL8 TreasureDeviceInfo; // x0
  __int64 v10; // x1
  TreasureDvcInfo_o *v11; // x8
  int32_t maxLv; // w8
  TreasureDvcInfo_o *tdInfo; // [xsp+8h] [xbp-18h] BYREF

  tdInfo = 0LL;
  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
  {
    TreasureDeviceInfo = UserServantEntity__getTreasureDeviceInfo(userSvtEntity, &tdInfo, -1, -1, 0, 0LL);
    v11 = tdInfo;
    if ( !tdInfo )
      sub_B5D69C(TreasureDeviceInfo, v10);
    LOBYTE(userSvtEntity) = 1;
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
  return (char)userSvtEntity;
}


bool __fastcall CombineServantListViewItem__GetSealCombineLimit(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v12; // x1
  struct ServantEntity_o *servantEntity; // x8
  int32_t combineLimitId; // w2
  int32_t condTargetId; // w19
  int32_t condType; // w21
  int64_t condNum; // x20
  CombineLimitReleaseEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42EB57A & 1) == 0 )
  {
    sub_B5D5C4(&CondType_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMaster_CombineLimitReleaseMaster___, v5, v6, v7);
    sub_B5D5C4(&DataManager_TypeInfo, v8, v9, v10);
    byte_42EB57A = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_CombineLimitReleaseMaster___);
  servantEntity = this->fields.servantEntity;
  if ( !servantEntity )
    goto LABEL_20;
  combineLimitId = servantEntity->fields.combineLimitId;
  if ( this->fields.type != 9 )
  {
    if ( Master_WarQuestSelectionMaster )
    {
      Master_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)CombineLimitReleaseMaster__TryGetEntity(
                                                                      (CombineLimitReleaseMaster_o *)Master_WarQuestSelectionMaster,
                                                                      &entity,
                                                                      combineLimitId,
                                                                      this->fields.currentLimitCnt + 1,
                                                                      0LL);
      if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) == 0 )
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
    sub_B5D69C(Master_WarQuestSelectionMaster, v12);
  }
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_20;
  return CombineLimitReleaseMaster__IsExistSealedLimitCount(
           (CombineLimitReleaseMaster_o *)Master_WarQuestSelectionMaster,
           combineLimitId,
           0LL);
}


bool __fastcall CombineServantListViewItem__GetSkillInfo(
        CombineServantListViewItem_o *this,
        SkillInfo_array **skillInfoList,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  UserServantEntity_o *userSvtEntity; // x0
  bool v10; // w20
  BalanceConfig_c *v11; // x0
  SkillInfo_array *v12; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( (byte_42EB578 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)skillInfoList, (_DWORD)method, v3);
    sub_B5D5C4(&SkillInfo___TypeInfo, v6, v7, v8);
    byte_42EB578 = 1;
  }
  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
  {
    v10 = 1;
    UserServantEntity__getSkillInfo(userSvtEntity, skillInfoList, -1, -1, 1, 0, -1, 0LL);
  }
  else
  {
    v11 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v11 = BalanceConfig_TypeInfo;
    }
    v12 = (SkillInfo_array *)sub_B5D5DC(SkillInfo___TypeInfo, (unsigned int)v11->static_fields->SvtSkillListMax);
    *skillInfoList = v12;
    sub_B5D560((BattleServantConfConponent_o *)skillInfoList, (System_Int32_array **)v12, v13, v14, v15, v16, v17, v18);
    return 0;
  }
  return v10;
}


bool __fastcall CombineServantListViewItem__IsMatchBaseServantFilter(
        CombineServantListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  FilterKindList_c *v15; // x0
  __int64 ClassGroupFilterKindList; // x0
  FilterKindList_c *v17; // x0
  ListViewSort_FilterKind_array *v18; // x0
  FilterKindList_c *v19; // x0
  ListViewSort_FilterKind_array *v20; // x0
  FilterKindList_c *v21; // x0
  ListViewSort_FilterKind_array *v22; // x0
  FilterKindList_c *v23; // x0
  ListViewSort_FilterKind_array *v24; // x0
  UserServantEntity_o *userSvtEntity; // x21
  FilterKindList_c *v26; // x0
  ListViewSort_FilterKind_array *v27; // x21
  UserServantEntity_o *v29; // x0
  int32_t dispLimitCount; // w21
  UserServantEntity_o *v31; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  _BOOL4 IsUnSelectedAllTargetFilters; // w21
  _BOOL4 v47; // w23
  _BOOL4 IsMatchEffectCategory; // w22
  _BOOL4 v49; // w0
  __int64 v50; // x0

  if ( (byte_42EB568 & 1) == 0 )
  {
    sub_B5D5C4(&FilterKindList_TypeInfo, (_DWORD)sort, (_DWORD)method, v3);
    sub_B5D5C4(&ListViewSort_FilterKind___TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v9, v10, v11);
    sub_B5D5C4(&ServantEventBonusFilterController_TypeInfo, v12, v13, v14);
    byte_42EB568 = 1;
  }
  v15 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v15 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v15->static_fields->ClassGroupFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_72;
  ClassGroupFilterKindList = (__int64)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                        (System_Collections_Generic_List_Voice_BATTLE__o *)ClassGroupFilterKindList,
                                        (const MethodInfo_30468BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_72;
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0LL) )
  {
    v17 = FilterKindList_TypeInfo;
    if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
      v17 = FilterKindList_TypeInfo;
    }
    ClassGroupFilterKindList = (__int64)v17->static_fields->ClassFilterKindList;
    if ( !ClassGroupFilterKindList )
      goto LABEL_72;
    v18 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                             (System_Collections_Generic_List_Voice_BATTLE__o *)ClassGroupFilterKindList,
                                             (const MethodInfo_30468BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v18, 0LL)
      && !ListViewSort__IsMatchClassFilter(sort, this->fields.servantEntity, 0LL) )
    {
      return 0;
    }
  }
  else if ( !ListViewSort__IsMatchClassGroupFilter(sort, this->fields.servantEntity, 0LL) )
  {
    return 0;
  }
  v19 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v19 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v19->static_fields->NpTypeFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_72;
  v20 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           (System_Collections_Generic_List_Voice_BATTLE__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_30468BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v20, 0LL)
    && !ListViewSort__IsMatchNPTypeFilter(sort, this->fields.userSvtEntity, 0LL) )
  {
    return 0;
  }
  v21 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v21 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v21->static_fields->NpEffectFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_72;
  v22 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           (System_Collections_Generic_List_Voice_BATTLE__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_30468BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v22, 0LL)
    && !ListViewSort__IsMatchNPEffectFilter(sort, this->fields.userSvtEntity, 0LL) )
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
  ClassGroupFilterKindList = (__int64)v23->static_fields->CombineBaseServantFilterKindList;
  if ( !ClassGroupFilterKindList )
LABEL_72:
    sub_B5D69C(ClassGroupFilterKindList, sort);
  v24 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           (System_Collections_Generic_List_Voice_BATTLE__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_30468BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v24, 0LL)
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
    v29 = this->fields.userSvtEntity;
    if ( v29 )
    {
      dispLimitCount = this->fields.dispLimitCount;
      if ( dispLimitCount != UserServantEntity__getDispLimitCount(v29, 0, 0LL) )
      {
        ClassGroupFilterKindList = (__int64)this->fields.userSvtEntity;
        if ( !ClassGroupFilterKindList )
          goto LABEL_72;
        ClassGroupFilterKindList = UserServantEntity__getDispLimitCount(
                                     (UserServantEntity_o *)ClassGroupFilterKindList,
                                     0,
                                     0LL);
        v31 = this->fields.userSvtEntity;
        this->fields.dispLimitCount = ClassGroupFilterKindList;
        if ( !v31 )
          goto LABEL_72;
        SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v31, -1, 0LL);
        this->fields.skillCategoryIdList = SkillCategoryIdList;
        sub_B5D560(
          (BattleServantConfConponent_o *)&this->fields.skillCategoryIdList,
          (System_Int32_array **)SkillCategoryIdList,
          v33,
          v34,
          v35,
          v36,
          v37,
          v38);
        ClassGroupFilterKindList = (__int64)this->fields.userSvtEntity;
        if ( !ClassGroupFilterKindList )
          goto LABEL_72;
        TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                         (UserServantEntity_o *)ClassGroupFilterKindList,
                                         0,
                                         0LL);
        this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
        sub_B5D560(
          (BattleServantConfConponent_o *)&this->fields.tdCategoryIdList,
          (System_Int32_array **)TreasureDeviceCategoryIdList,
          v40,
          v41,
          v42,
          v43,
          v44,
          v45);
      }
    }
    ClassGroupFilterKindList = sub_B5D5DC(ListViewSort_FilterKind___TypeInfo, 1LL);
    if ( !ClassGroupFilterKindList )
      goto LABEL_72;
    if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
      goto LABEL_73;
    *(_DWORD *)(ClassGroupFilterKindList + 32) = 50;
    IsUnSelectedAllTargetFilters = ListViewSort__IsUnSelectedAllTargetFilters(
                                     sort,
                                     (ListViewSort_FilterKind_array *)ClassGroupFilterKindList,
                                     0LL);
    ClassGroupFilterKindList = sub_B5D5DC(ListViewSort_FilterKind___TypeInfo, 1LL);
    if ( !ClassGroupFilterKindList )
      goto LABEL_72;
    if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
    {
LABEL_73:
      v50 = sub_B5D6C8(ClassGroupFilterKindList);
      sub_B5D668(v50, 0LL);
    }
    *(_DWORD *)(ClassGroupFilterKindList + 32) = 51;
    v47 = ListViewSort__IsUnSelectedAllTargetFilters(
            sort,
            (ListViewSort_FilterKind_array *)ClassGroupFilterKindList,
            0LL);
    IsMatchEffectCategory = ServantEquipEffectFilterController__IsMatchEffectCategory(
                              this->fields.tdCategoryIdList,
                              sort,
                              0LL);
    v49 = ServantEquipEffectFilterController__IsMatchEffectCategory(this->fields.skillCategoryIdList, sort, 0LL);
    if ( ((IsUnSelectedAllTargetFilters ^ v47) & 1) != 0 )
    {
      if ( IsUnSelectedAllTargetFilters )
      {
        if ( !v49 )
          return 0;
      }
      else if ( !IsMatchEffectCategory )
      {
        return 0;
      }
    }
    else if ( !IsMatchEffectCategory && !v49 )
    {
      return 0;
    }
  }
  ClassGroupFilterKindList = sub_B5D5DC(ListViewSort_FilterKind___TypeInfo, 1LL);
  if ( !ClassGroupFilterKindList )
    goto LABEL_72;
  if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
    goto LABEL_73;
  *(_DWORD *)(ClassGroupFilterKindList + 32) = 39;
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0LL)
    && ListViewSort__GetFilter(sort, 39, 0LL)
    && this->fields.isSwapChoice == this->fields.isChoice )
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
  ClassGroupFilterKindList = (__int64)v26->static_fields->RarityFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_72;
  v27 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           (System_Collections_Generic_List_Voice_BATTLE__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_30468BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v27, 0LL)
      || ListViewSort__IsSelectedAllTargetFilters(sort, v27, 0LL)
      || ListViewSort__IsMatchRarityFilter(sort, this->fields.rarity, 0LL);
}


bool __fastcall CombineServantListViewItem__IsMatchMaterialFilter(
        CombineServantListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  __int64 v3; // x3
  CombineServantListViewItem_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  _BOOL4 v15; // w21
  FilterKindList_c *v16; // x0
  ListViewSort_FilterKind_array *v17; // x0
  FilterKindList_c *v18; // x0
  ListViewSort_FilterKind_array *v19; // x0
  bool IsMatchClassGroupFilter; // w0
  FilterKindList_c *v21; // x0
  ListViewSort_FilterKind_array *v22; // x0
  FilterKindList_c *v23; // x0
  ListViewSort_FilterKind_array *v24; // x0
  FilterKindList_c *v25; // x0
  ListViewSort_FilterKind_array *v26; // x0
  UserServantEntity_o *userSvtEntity; // x21
  int v28; // w21
  UserServantEntity_o *v29; // x0
  int32_t dispLimitCount; // w21
  UserServantEntity_o *v31; // x8
  System_Int32_array **SkillCategoryIdList; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_Int32_array **TreasureDeviceCategoryIdList; // x0
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  _BOOL4 IsUnSelectedAllTargetFilters; // w21
  _BOOL4 v47; // w23
  _BOOL4 IsMatchEffectCategory; // w22
  _BOOL4 v49; // w0
  bool CanNotSelect; // w0
  FilterKindList_c *v51; // x0
  ListViewSort_FilterKind_array *v52; // x21
  __int64 v54; // x0

  v5 = this;
  if ( (byte_42EB569 & 1) == 0 )
  {
    sub_B5D5C4(&FilterKindList_TypeInfo, (_DWORD)sort, (_DWORD)method, v3);
    sub_B5D5C4(&ListViewSort_FilterKind___TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v9, v10, v11);
    this = (CombineServantListViewItem_o *)sub_B5D5C4(&ServantEventBonusFilterController_TypeInfo, v12, v13, v14);
    byte_42EB569 = 1;
  }
  if ( !sort )
    goto LABEL_88;
  v15 = ListViewSort__GetFilter(sort, 28, 0LL) && v5->fields.isSameClass;
  v16 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v16 = FilterKindList_TypeInfo;
  }
  this = (CombineServantListViewItem_o *)v16->static_fields->ClassGroupFilterKindList;
  if ( !this )
    goto LABEL_88;
  v17 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           (System_Collections_Generic_List_Voice_BATTLE__o *)this,
                                           (const MethodInfo_30468BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v17, 0LL) )
  {
    IsMatchClassGroupFilter = ListViewSort__IsMatchClassGroupFilter(sort, v5->fields.servantEntity, 0LL);
    if ( v15 )
      goto LABEL_24;
    goto LABEL_21;
  }
  v18 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v18 = FilterKindList_TypeInfo;
  }
  this = (CombineServantListViewItem_o *)v18->static_fields->ClassFilterKindList;
  if ( !this )
    goto LABEL_88;
  v19 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           (System_Collections_Generic_List_Voice_BATTLE__o *)this,
                                           (const MethodInfo_30468BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v19, 0LL) )
    goto LABEL_92;
  this = (CombineServantListViewItem_o *)sub_B5D5DC(ListViewSort_FilterKind___TypeInfo, 1LL);
  if ( !this )
    goto LABEL_88;
  if ( !this->fields.sortIndex )
    goto LABEL_89;
  LODWORD(this->fields.sortValue0) = 28;
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)this, 0LL) )
  {
LABEL_92:
    IsMatchClassGroupFilter = ListViewSort__IsMatchClassFilter(sort, v5->fields.servantEntity, 0LL);
    if ( !v15 )
    {
LABEL_21:
      if ( !IsMatchClassGroupFilter )
        return 0;
    }
  }
LABEL_24:
  v21 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v21 = FilterKindList_TypeInfo;
  }
  this = (CombineServantListViewItem_o *)v21->static_fields->NpTypeFilterKindList;
  if ( !this )
    goto LABEL_88;
  v22 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           (System_Collections_Generic_List_Voice_BATTLE__o *)this,
                                           (const MethodInfo_30468BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v22, 0LL)
    && !ListViewSort__IsMatchNPTypeFilter(sort, v5->fields.userSvtEntity, 0LL) )
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
  this = (CombineServantListViewItem_o *)v23->static_fields->NpEffectFilterKindList;
  if ( !this )
    goto LABEL_88;
  v24 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           (System_Collections_Generic_List_Voice_BATTLE__o *)this,
                                           (const MethodInfo_30468BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v24, 0LL)
    && !ListViewSort__IsMatchNPEffectFilter(sort, v5->fields.userSvtEntity, 0LL) )
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
  this = (CombineServantListViewItem_o *)v25->static_fields->ServantTypeFilterKindList;
  if ( !this )
LABEL_88:
    sub_B5D69C(this, sort);
  v26 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           (System_Collections_Generic_List_Voice_BATTLE__o *)this,
                                           (const MethodInfo_30468BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v26, 0LL)
    && !ListViewSort__IsMatchServantTypeFilter(sort, v5->fields.servantEntity, 0LL) )
  {
    return 0;
  }
  if ( !ListViewSort__CheckSvtEventBonusFilterDefaultAll(sort, -1, 0LL) )
  {
    userSvtEntity = v5->fields.userSvtEntity;
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
    v29 = v5->fields.userSvtEntity;
    if ( v29 )
    {
      dispLimitCount = v5->fields.dispLimitCount;
      if ( dispLimitCount != UserServantEntity__getDispLimitCount(v29, 0, 0LL) )
      {
        this = (CombineServantListViewItem_o *)v5->fields.userSvtEntity;
        if ( !this )
          goto LABEL_88;
        this = (CombineServantListViewItem_o *)UserServantEntity__getDispLimitCount((UserServantEntity_o *)this, 0, 0LL);
        v31 = v5->fields.userSvtEntity;
        v5->fields.dispLimitCount = (int)this;
        if ( !v31 )
          goto LABEL_88;
        SkillCategoryIdList = (System_Int32_array **)UserServantEntity__GetSkillCategoryIdList(v31, -1, 0LL);
        v5->fields.skillCategoryIdList = (struct System_Int32_array *)SkillCategoryIdList;
        sub_B5D560(
          (BattleServantConfConponent_o *)&v5->fields.skillCategoryIdList,
          SkillCategoryIdList,
          v33,
          v34,
          v35,
          v36,
          v37,
          v38);
        this = (CombineServantListViewItem_o *)v5->fields.userSvtEntity;
        if ( !this )
          goto LABEL_88;
        TreasureDeviceCategoryIdList = (System_Int32_array **)UserServantEntity__GetTreasureDeviceCategoryIdList(
                                                                (UserServantEntity_o *)this,
                                                                0,
                                                                0LL);
        v5->fields.tdCategoryIdList = (struct System_Int32_array *)TreasureDeviceCategoryIdList;
        sub_B5D560(
          (BattleServantConfConponent_o *)&v5->fields.tdCategoryIdList,
          TreasureDeviceCategoryIdList,
          v40,
          v41,
          v42,
          v43,
          v44,
          v45);
      }
    }
    this = (CombineServantListViewItem_o *)sub_B5D5DC(ListViewSort_FilterKind___TypeInfo, 1LL);
    if ( !this )
      goto LABEL_88;
    if ( !this->fields.sortIndex )
      goto LABEL_89;
    LODWORD(this->fields.sortValue0) = 50;
    IsUnSelectedAllTargetFilters = ListViewSort__IsUnSelectedAllTargetFilters(
                                     sort,
                                     (ListViewSort_FilterKind_array *)this,
                                     0LL);
    this = (CombineServantListViewItem_o *)sub_B5D5DC(ListViewSort_FilterKind___TypeInfo, 1LL);
    if ( !this )
      goto LABEL_88;
    if ( !this->fields.sortIndex )
      goto LABEL_89;
    LODWORD(this->fields.sortValue0) = 51;
    v47 = ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)this, 0LL);
    IsMatchEffectCategory = ServantEquipEffectFilterController__IsMatchEffectCategory(
                              v5->fields.tdCategoryIdList,
                              sort,
                              0LL);
    v49 = ServantEquipEffectFilterController__IsMatchEffectCategory(v5->fields.skillCategoryIdList, sort, 0LL);
    if ( ((IsUnSelectedAllTargetFilters ^ v47) & 1) != 0 )
    {
      if ( IsUnSelectedAllTargetFilters )
      {
        if ( !v49 )
          return 0;
      }
      else if ( !IsMatchEffectCategory )
      {
        return 0;
      }
    }
    else if ( !IsMatchEffectCategory && !v49 )
    {
      return 0;
    }
  }
  this = (CombineServantListViewItem_o *)sub_B5D5DC(ListViewSort_FilterKind___TypeInfo, 1LL);
  if ( !this )
    goto LABEL_88;
  if ( !this->fields.sortIndex )
    goto LABEL_89;
  LODWORD(this->fields.sortValue0) = 39;
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)this, 0LL) )
  {
    this = (CombineServantListViewItem_o *)sub_B5D5DC(ListViewSort_FilterKind___TypeInfo, 1LL);
    if ( !this )
      goto LABEL_88;
    if ( this->fields.sortIndex )
    {
      LODWORD(this->fields.sortValue0) = 29;
      if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)this, 0LL) )
        goto LABEL_76;
      goto LABEL_54;
    }
LABEL_89:
    v54 = sub_B5D6C8(this);
    sub_B5D668(v54, 0LL);
  }
LABEL_54:
  if ( ListViewSort__GetFilter(sort, 39, 0LL) )
    v28 = v5->fields.isSwapChoice ^ v5->fields.isChoice;
  else
    v28 = 0;
  if ( ListViewSort__GetFilter(sort, 29, 0LL) )
  {
    CanNotSelect = CombineServantListViewItem__get_IsCanNotSelect(v5, (const MethodInfo *)sort);
    if ( v28 )
      goto LABEL_76;
  }
  else
  {
    CanNotSelect = 1;
    if ( v28 )
      goto LABEL_76;
  }
  if ( CanNotSelect )
    return 0;
LABEL_76:
  v51 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v51 = FilterKindList_TypeInfo;
  }
  this = (CombineServantListViewItem_o *)v51->static_fields->RarityFilterKindList;
  if ( !this )
    goto LABEL_88;
  v52 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           (System_Collections_Generic_List_Voice_BATTLE__o *)this,
                                           (const MethodInfo_30468BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v52, 0LL)
      || ListViewSort__IsSelectedAllTargetFilters(sort, v52, 0LL)
      || ListViewSort__IsMatchRarityFilter(sort, v5->fields.rarity, 0LL);
}


bool __fastcall CombineServantListViewItem__IsMatchServantFilter(
        CombineServantListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  FilterKindList_c *v15; // x0
  __int64 ClassGroupFilterKindList; // x0
  FilterKindList_c *v17; // x0
  ListViewSort_FilterKind_array *v18; // x0
  FilterKindList_c *v19; // x0
  ListViewSort_FilterKind_array *v20; // x0
  FilterKindList_c *v21; // x0
  ListViewSort_FilterKind_array *v22; // x0
  UserServantEntity_o *userSvtEntity; // x21
  FilterKindList_c *v24; // x0
  ListViewSort_FilterKind_array *v25; // x21
  UserServantEntity_o *v27; // x0
  int32_t dispLimitCount; // w21
  UserServantEntity_o *v29; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  _BOOL4 IsUnSelectedAllTargetFilters; // w21
  _BOOL4 v45; // w23
  _BOOL4 IsMatchEffectCategory; // w22
  _BOOL4 v47; // w0
  __int64 v48; // x0

  if ( (byte_42EB567 & 1) == 0 )
  {
    sub_B5D5C4(&FilterKindList_TypeInfo, (_DWORD)sort, (_DWORD)method, v3);
    sub_B5D5C4(&ListViewSort_FilterKind___TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v9, v10, v11);
    sub_B5D5C4(&ServantEventBonusFilterController_TypeInfo, v12, v13, v14);
    byte_42EB567 = 1;
  }
  v15 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v15 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v15->static_fields->ClassGroupFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_66;
  ClassGroupFilterKindList = (__int64)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                        (System_Collections_Generic_List_Voice_BATTLE__o *)ClassGroupFilterKindList,
                                        (const MethodInfo_30468BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_66;
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0LL) )
  {
    v17 = FilterKindList_TypeInfo;
    if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
      v17 = FilterKindList_TypeInfo;
    }
    ClassGroupFilterKindList = (__int64)v17->static_fields->ClassFilterKindList;
    if ( !ClassGroupFilterKindList )
      goto LABEL_66;
    v18 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                             (System_Collections_Generic_List_Voice_BATTLE__o *)ClassGroupFilterKindList,
                                             (const MethodInfo_30468BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v18, 0LL)
      && !ListViewSort__IsMatchClassFilter(sort, this->fields.servantEntity, 0LL) )
    {
      return 0;
    }
  }
  else if ( !ListViewSort__IsMatchClassGroupFilter(sort, this->fields.servantEntity, 0LL) )
  {
    return 0;
  }
  v19 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v19 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v19->static_fields->NpTypeFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_66;
  v20 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           (System_Collections_Generic_List_Voice_BATTLE__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_30468BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v20, 0LL)
    && !ListViewSort__IsMatchNPTypeFilter(sort, this->fields.userSvtEntity, 0LL) )
  {
    return 0;
  }
  v21 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v21 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v21->static_fields->NpEffectFilterKindList;
  if ( !ClassGroupFilterKindList )
LABEL_66:
    sub_B5D69C(ClassGroupFilterKindList, sort);
  v22 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           (System_Collections_Generic_List_Voice_BATTLE__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_30468BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v22, 0LL)
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
    v27 = this->fields.userSvtEntity;
    if ( v27 )
    {
      dispLimitCount = this->fields.dispLimitCount;
      if ( dispLimitCount != UserServantEntity__getDispLimitCount(v27, 0, 0LL) )
      {
        ClassGroupFilterKindList = (__int64)this->fields.userSvtEntity;
        if ( !ClassGroupFilterKindList )
          goto LABEL_66;
        ClassGroupFilterKindList = UserServantEntity__getDispLimitCount(
                                     (UserServantEntity_o *)ClassGroupFilterKindList,
                                     0,
                                     0LL);
        v29 = this->fields.userSvtEntity;
        this->fields.dispLimitCount = ClassGroupFilterKindList;
        if ( !v29 )
          goto LABEL_66;
        SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v29, -1, 0LL);
        this->fields.skillCategoryIdList = SkillCategoryIdList;
        sub_B5D560(
          (BattleServantConfConponent_o *)&this->fields.skillCategoryIdList,
          (System_Int32_array **)SkillCategoryIdList,
          v31,
          v32,
          v33,
          v34,
          v35,
          v36);
        ClassGroupFilterKindList = (__int64)this->fields.userSvtEntity;
        if ( !ClassGroupFilterKindList )
          goto LABEL_66;
        TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                         (UserServantEntity_o *)ClassGroupFilterKindList,
                                         0,
                                         0LL);
        this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
        sub_B5D560(
          (BattleServantConfConponent_o *)&this->fields.tdCategoryIdList,
          (System_Int32_array **)TreasureDeviceCategoryIdList,
          v38,
          v39,
          v40,
          v41,
          v42,
          v43);
      }
    }
    ClassGroupFilterKindList = sub_B5D5DC(ListViewSort_FilterKind___TypeInfo, 1LL);
    if ( !ClassGroupFilterKindList )
      goto LABEL_66;
    if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
      goto LABEL_67;
    *(_DWORD *)(ClassGroupFilterKindList + 32) = 50;
    IsUnSelectedAllTargetFilters = ListViewSort__IsUnSelectedAllTargetFilters(
                                     sort,
                                     (ListViewSort_FilterKind_array *)ClassGroupFilterKindList,
                                     0LL);
    ClassGroupFilterKindList = sub_B5D5DC(ListViewSort_FilterKind___TypeInfo, 1LL);
    if ( !ClassGroupFilterKindList )
      goto LABEL_66;
    if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
    {
LABEL_67:
      v48 = sub_B5D6C8(ClassGroupFilterKindList);
      sub_B5D668(v48, 0LL);
    }
    *(_DWORD *)(ClassGroupFilterKindList + 32) = 51;
    v45 = ListViewSort__IsUnSelectedAllTargetFilters(
            sort,
            (ListViewSort_FilterKind_array *)ClassGroupFilterKindList,
            0LL);
    IsMatchEffectCategory = ServantEquipEffectFilterController__IsMatchEffectCategory(
                              this->fields.tdCategoryIdList,
                              sort,
                              0LL);
    v47 = ServantEquipEffectFilterController__IsMatchEffectCategory(this->fields.skillCategoryIdList, sort, 0LL);
    if ( ((IsUnSelectedAllTargetFilters ^ v45) & 1) != 0 )
    {
      if ( IsUnSelectedAllTargetFilters )
      {
        if ( !v47 )
          return 0;
      }
      else if ( !IsMatchEffectCategory )
      {
        return 0;
      }
    }
    else if ( !IsMatchEffectCategory && !v47 )
    {
      return 0;
    }
  }
  ClassGroupFilterKindList = sub_B5D5DC(ListViewSort_FilterKind___TypeInfo, 1LL);
  if ( !ClassGroupFilterKindList )
    goto LABEL_66;
  if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
    goto LABEL_67;
  *(_DWORD *)(ClassGroupFilterKindList + 32) = 39;
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0LL)
    && ListViewSort__GetFilter(sort, 39, 0LL)
    && this->fields.isSwapChoice == this->fields.isChoice )
  {
    return 0;
  }
  v24 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v24 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v24->static_fields->RarityFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_66;
  v25 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           (System_Collections_Generic_List_Voice_BATTLE__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_30468BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v25, 0LL)
      || ListViewSort__IsSelectedAllTargetFilters(sort, v25, 0LL)
      || ListViewSort__IsMatchRarityFilter(sort, this->fields.rarity, 0LL);
}


void __fastcall CombineServantListViewItem__ModifyChoiceItem(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0

  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_B5D69C(0LL, method);
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
    sub_B5D69C(0LL, method);
  this->fields.isLock = UserServantEntity__IsLock(userSvtEntity, 0LL);
  this->fields.isSwapLock = 0;
}


void __fastcall CombineServantListViewItem__ModifyPushItem(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v6; // x1
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v8; // q1
  int64_t pushUserSvtId; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v10; // [xsp+0h] [xbp-50h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v11; // [xsp+20h] [xbp-30h]

  if ( (byte_42EB566 & 1) == 0 )
  {
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EB566 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame || (userSvtEntity = this->fields.userSvtEntity) == 0LL )
    sub_B5D69C(SelfUserGame, v6);
  v8 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  pushUserSvtId = SelfUserGame->fields.pushUserSvtId;
  *(_OWORD *)&v11.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v11.fields.fakeValue = v8;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v10 = v11;
  this->fields.isPush = pushUserSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v10, 0LL);
}


void __fastcall CombineServantListViewItem__SetAppendSkillInfo(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  void *userSvtEntity; // x0
  SvtUseSkillData_o *AppendSkillInfo; // x0
  SvtUseSkillData_o *v34; // x20
  int32_t v35; // w21
  struct System_Int32_array *svtUseSkillIdList; // x8
  __int64 v37; // x22
  unsigned __int64 max_length; // x9
  unsigned __int64 v39; // x25
  struct System_Int32_array *v40; // x8
  struct System_Int32_array *svtSkillLvList; // x8
  struct System_Int32_array *v42; // x8
  __int64 v43; // x27
  unsigned __int64 v44; // x9
  unsigned __int64 v45; // x22
  struct System_Int32_array *v46; // x8
  struct UserServantEntity_o *v47; // x8
  CombineAppendPassiveSkillMaster_o *v48; // x23
  __int64 v49; // x24
  __int64 v50; // x25
  struct System_Int32_array *svtSkillNumsList; // x8
  struct System_Int32_array *v52; // x9
  struct System_Int32_array *v53; // x8
  struct UserServantEntity_o *v54; // x8
  SvtAppendPassiveSkillUnlockMaster_o *v55; // x23
  __int64 v56; // x24
  __int64 v57; // x25
  struct System_Int32_array *v58; // x8
  __int64 v59; // x0
  System_Collections_Generic_List_int__o *v60; // [xsp+0h] [xbp-60h]
  CombineAppendPassiveSkillEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v62; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v63; // 0:x0.16

  if ( (byte_42EB565 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_CombineAppendPassiveSkillMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMaster_SkillMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMaster_SvtAppendPassiveSkillUnlockMaster___, v8, v9, v10);
    sub_B5D5C4(&DataManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Any_int___, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v23, v24, v25);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v26, v27, v28);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v29, v30, v31);
    byte_42EB565 = 1;
  }
  entity = 0LL;
  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_69;
  AppendSkillInfo = UserServantEntity__getAppendSkillInfo((UserServantEntity_o *)userSvtEntity, 0LL);
  if ( !AppendSkillInfo )
    return;
  v34 = AppendSkillInfo;
  userSvtEntity = UserGameMaster__getSelfUserGame(0LL);
  if ( !userSvtEntity )
    goto LABEL_69;
  v35 = *((_DWORD *)userSvtEntity + 24);
  this->fields.isAppendSkillLvMax = 1;
  svtUseSkillIdList = v34->fields.svtUseSkillIdList;
  if ( !svtUseSkillIdList )
    goto LABEL_69;
  v37 = 8LL;
  while ( 1 )
  {
    max_length = svtUseSkillIdList->max_length;
    v39 = v37 - 8;
    if ( v37 - 8 >= (int)max_length )
      break;
    if ( v39 >= max_length )
      goto LABEL_72;
    if ( *((int *)&svtUseSkillIdList->obj.klass + v37) >= 1 )
    {
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      userSvtEntity = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_SkillMaster___);
      v40 = v34->fields.svtUseSkillIdList;
      if ( !v40 )
        goto LABEL_69;
      if ( v39 >= v40->max_length )
        goto LABEL_72;
      if ( !userSvtEntity )
        goto LABEL_69;
      userSvtEntity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                        (DataMasterBase_WarMaster__WarEntity__int__o *)userSvtEntity,
                        *((_DWORD *)&v40->obj.klass + v37),
                        (const MethodInfo_23FAE10 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
      svtSkillLvList = v34->fields.svtSkillLvList;
      if ( !svtSkillLvList )
        goto LABEL_69;
      if ( v39 >= svtSkillLvList->max_length )
      {
LABEL_72:
        v59 = sub_B5D6C8(userSvtEntity);
        sub_B5D668(v59, 0LL);
      }
      if ( !userSvtEntity )
        goto LABEL_69;
      if ( *((_DWORD *)&svtSkillLvList->obj.klass + v37) < *((_DWORD *)userSvtEntity + 10) )
      {
        this->fields.isAppendSkillLvMax = 0;
        break;
      }
      svtUseSkillIdList = v34->fields.svtUseSkillIdList;
    }
    ++v37;
    if ( !svtUseSkillIdList )
      goto LABEL_69;
  }
  v60 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v60,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  v42 = v34->fields.svtUseSkillIdList;
  if ( !v42 )
LABEL_69:
    sub_B5D69C(userSvtEntity, method);
  v43 = 8LL;
  while ( 1 )
  {
    v44 = v42->max_length;
    v45 = v43 - 8;
    if ( v43 - 8 >= (int)v44 )
      break;
    if ( v45 >= v44 )
      goto LABEL_72;
    if ( *((int *)&v42->obj.klass + v43) < 1 )
      goto LABEL_68;
    v46 = v34->fields.svtSkillLvList;
    if ( !v46 )
      goto LABEL_69;
    if ( v45 >= v46->max_length )
      goto LABEL_72;
    if ( *((_DWORD *)&v46->obj.klass + v43) )
    {
      if ( (WORD1(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      userSvtEntity = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_CombineAppendPassiveSkillMaster___);
      v47 = this->fields.userSvtEntity;
      if ( !v47 )
        goto LABEL_69;
      v48 = (CombineAppendPassiveSkillMaster_o *)userSvtEntity;
      v50 = *(_QWORD *)&v47->fields.svtId.fields.currentCryptoKey;
      v49 = *(_QWORD *)&v47->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v62.fields.currentCryptoKey = v50;
      *(_QWORD *)&v62.fields.fakeValue = v49;
      userSvtEntity = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v62, 0LL);
      svtSkillNumsList = v34->fields.svtSkillNumsList;
      if ( !svtSkillNumsList )
        goto LABEL_69;
      if ( v45 >= svtSkillNumsList->max_length )
        goto LABEL_72;
      v52 = v34->fields.svtSkillLvList;
      if ( !v52 )
        goto LABEL_69;
      if ( v45 >= v52->max_length )
        goto LABEL_72;
      if ( !v48 )
        goto LABEL_69;
      userSvtEntity = (void *)CombineAppendPassiveSkillMaster__TryGetEntityWithTryNum(
                                v48,
                                &entity,
                                (int32_t)userSvtEntity,
                                *((_DWORD *)&svtSkillNumsList->obj.klass + v43),
                                *((_DWORD *)&v52->obj.klass + v43),
                                0LL);
      if ( ((unsigned __int8)userSvtEntity & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_69;
        userSvtEntity = (void *)CombineUtility__CheckCombineNeedItemsEnough(
                                  this->fields.userSvtEntity,
                                  entity->fields.itemIds,
                                  entity->fields.itemNums,
                                  v35,
                                  entity->fields.qp,
                                  0LL);
        if ( ((unsigned __int8)userSvtEntity & 1) != 0 )
        {
          v53 = v34->fields.svtUseSkillIdList;
          if ( !v53 )
            goto LABEL_69;
          if ( v45 >= v53->max_length )
            goto LABEL_72;
          userSvtEntity = this->fields.enableAppendSkillUp;
          if ( !userSvtEntity )
            goto LABEL_69;
LABEL_67:
          System_Collections_Generic_List_int___Add(
            (System_Collections_Generic_List_int__o *)userSvtEntity,
            *((_DWORD *)&v53->obj.klass + v43),
            (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
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
      userSvtEntity = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_SvtAppendPassiveSkillUnlockMaster___);
      v54 = this->fields.userSvtEntity;
      if ( !v54 )
        goto LABEL_69;
      v55 = (SvtAppendPassiveSkillUnlockMaster_o *)userSvtEntity;
      v57 = *(_QWORD *)&v54->fields.svtId.fields.currentCryptoKey;
      v56 = *(_QWORD *)&v54->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v63.fields.currentCryptoKey = v57;
      *(_QWORD *)&v63.fields.fakeValue = v56;
      userSvtEntity = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v63, 0LL);
      v58 = v34->fields.svtSkillNumsList;
      if ( !v58 )
        goto LABEL_69;
      if ( v45 >= v58->max_length )
        goto LABEL_72;
      if ( !v55 )
        goto LABEL_69;
      userSvtEntity = SvtAppendPassiveSkillUnlockMaster__GetEntity(
                        v55,
                        (int32_t)userSvtEntity,
                        *((_DWORD *)&v58->obj.klass + v43),
                        0LL);
      if ( userSvtEntity )
      {
        userSvtEntity = (void *)CombineUtility__CheckCombineNeedItemsEnough(
                                  this->fields.userSvtEntity,
                                  *((System_Int32_array **)userSvtEntity + 3),
                                  *((System_Int32_array **)userSvtEntity + 4),
                                  v35,
                                  0,
                                  0LL);
        if ( ((unsigned __int8)userSvtEntity & 1) != 0 )
        {
          v53 = v34->fields.svtUseSkillIdList;
          if ( !v53 )
            goto LABEL_69;
          if ( v45 >= v53->max_length )
            goto LABEL_72;
          userSvtEntity = v60;
          if ( !v60 )
            goto LABEL_69;
          goto LABEL_67;
        }
      }
    }
LABEL_68:
    v42 = v34->fields.svtUseSkillIdList;
    ++v43;
    if ( !v42 )
      goto LABEL_69;
  }
  this->fields.isAppendSkillUpItemNum = System_Linq_Enumerable__Any_int_(
                                          (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.enableAppendSkillUp,
                                          (const MethodInfo_1C98960 *)Method_System_Linq_Enumerable_Any_int___);
  this->fields.isAppendSkillOpenItemNum = System_Linq_Enumerable__Any_int_(
                                            (System_Collections_Generic_IEnumerable_TSource__o *)v60,
                                            (const MethodInfo_1C98960 *)Method_System_Linq_Enumerable_Any_int___);
}


void __fastcall CombineServantListViewItem__SetIsCombineExpCampaignTarget(
        CombineServantListViewItem_o *this,
        System_Collections_Generic_List_EventCampaignEntity__o *eventCampaignEntities,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v18; // x20
  UserServantEntity_o *userSvtEntity; // x0
  __int64 v20; // x1
  int32_t size; // w8
  __int64 v22; // x22
  unsigned int v23; // w24
  __int64 v24; // x8
  int v25; // w8
  int monitor; // w23
  unsigned int v27; // w21
  EventMissionProgressRequest_Argument_ProgressData_o *v28; // x8
  EventMissionProgressRequest_Argument_ProgressData_c *klass; // x8
  int namespaze; // w9
  unsigned int v31; // w10
  EventMissionProgressRequest_Argument_ProgressData_o *v32; // x8
  EventMissionProgressRequest_Argument_ProgressData_o *v33; // x8
  __int64 v34; // x0

  if ( (byte_42EB56B & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_EventCampaignEntity__Add__,
      (_DWORD)eventCampaignEntities,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Count__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__, v12, v13, v14);
    sub_B5D5C4(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo, v15, v16, v17);
    byte_42EB56B = 1;
  }
  this->fields.isCombineExpCampaignTarget = 0;
  this->fields.combineExpCampaignValue = 0.0;
  if ( !eventCampaignEntities || this->fields.type )
    return;
  v18 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v18,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
  size = eventCampaignEntities->fields._size;
  if ( size >= 1 )
  {
    v22 = 4LL;
    while ( 1 )
    {
      v23 = v22 - 4;
      if ( size <= (unsigned int)(v22 - 4) )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v24 = *((_QWORD *)&eventCampaignEntities->fields._items->obj.klass + v22);
      if ( !v24 )
        break;
      if ( *(_DWORD *)(v24 + 20) == 2 )
        goto LABEL_14;
      if ( eventCampaignEntities->fields._size <= v23 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      if ( *(_DWORD *)(v24 + 20) == 27 )
      {
LABEL_14:
        if ( eventCampaignEntities->fields._size <= v23 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        if ( !v18 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v18,
          *((EventMissionProgressRequest_Argument_ProgressData_o **)&eventCampaignEntities->fields._items->obj.klass
          + v22),
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
      }
      size = eventCampaignEntities->fields._size;
      if ( (int)++v22 - 4 >= size )
        goto LABEL_19;
    }
LABEL_54:
    sub_B5D69C(userSvtEntity, v20);
  }
LABEL_19:
  if ( !v18 )
    return;
  v25 = v18->fields._size;
  if ( v25 < 1 )
  {
    monitor = 0;
    goto LABEL_52;
  }
  monitor = 0;
  v27 = 0;
  while ( 1 )
  {
    if ( v25 <= v27 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v28 = v18->fields._items->m_Items[v27];
    if ( !v28 )
      goto LABEL_54;
    if ( v28->fields.missionConditionDetailId == 27 )
      break;
    if ( v18->fields._size <= v27 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    klass = v28[1].klass;
    if ( !klass )
      goto LABEL_54;
    namespaze = (int)klass->_1.namespaze;
    if ( namespaze >= 1 )
    {
      v31 = 0;
      while ( 1 )
      {
        if ( v31 >= namespaze )
        {
          v34 = sub_B5D6C8(userSvtEntity);
          sub_B5D668(v34, 0LL);
        }
        if ( this->fields.svtId == *((_DWORD *)&klass->_1.byval_arg.data + (int)v31) )
          break;
        if ( (int)++v31 >= namespaze )
          goto LABEL_45;
      }
      this->fields.isCombineExpCampaignTarget = 1;
      if ( v18->fields._size <= v27 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v32 = v18->fields._items->m_Items[v27];
      if ( !v32 )
        goto LABEL_54;
      if ( SLODWORD(v32[1].monitor) > monitor )
      {
        if ( v18->fields._size <= v27 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        monitor = (int)v32[1].monitor;
      }
    }
LABEL_45:
    v25 = v18->fields._size;
    if ( (int)++v27 >= v25 )
      goto LABEL_52;
  }
  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_54;
  userSvtEntity = (UserServantEntity_o *)UserServantEntity__IsExchangeSvt(userSvtEntity, 0LL);
  if ( ((unsigned __int8)userSvtEntity & 1) == 0 )
    goto LABEL_45;
  this->fields.isCombineExpCampaignTarget = 1;
  if ( v18->fields._size <= v27 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  v33 = v18->fields._items->m_Items[v27];
  if ( !v33 )
    goto LABEL_54;
  monitor = (int)v33[1].monitor;
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
  sub_B5D560(
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  __int64 SelfUserGame; // x0
  __int64 v27; // x1
  UserServantEntity_o *userSvtEntity; // x8
  struct UserServantEntity_o *v29; // x8
  __int64 v30; // x21
  __int64 v31; // x8
  __int64 v32; // x22
  unsigned __int64 v33; // x20
  int32_t v34; // w23
  int v35; // w19
  __int64 v36; // x8
  CombineServantListViewItem_o *v37; // x19
  CombineSkillMaster_o *v38; // x20
  unsigned __int64 v39; // x27
  char v40; // w26
  int32_t v41; // w24
  struct ServantEntity_o *servantEntity; // x8
  CombineSkillMaster_o *v43; // x21
  struct System_Int32_array *itemIds; // x20
  struct System_Int32_array *itemNums; // x28
  int max_length; // w8
  UserItemMaster_o *v47; // x25
  il2cpp_array_size_t v48; // w9
  il2cpp_array_size_t v49; // w23
  struct UserServantEntity_o *v50; // x8
  __int128 v51; // q1
  int32_t v52; // w26
  int32_t v53; // w19
  struct System_Collections_Generic_List_int__o **p_enableSkillUp; // x8
  struct System_Collections_Generic_List_int__o *v55; // x8
  __int64 v56; // x0
  __int64 *v57; // [xsp+0h] [xbp-C0h]
  __int64 v58; // [xsp+8h] [xbp-B8h]
  __int64 v59; // [xsp+10h] [xbp-B0h]
  CombineServantListViewItem_o *v60; // [xsp+18h] [xbp-A8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v61; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v62; // [xsp+40h] [xbp-80h]
  UserItemEntity_o *v63; // [xsp+60h] [xbp-60h] BYREF
  CombineSkillEntity_o *entity; // [xsp+68h] [xbp-58h] BYREF

  if ( (byte_42EB564 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_CombineSkillMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_SkillMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserItemMaster___, v8, v9, v10);
    sub_B5D5C4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Count__, v17, v18, v19);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23, v24, v25);
    byte_42EB564 = 1;
  }
  entity = 0LL;
  v63 = 0LL;
  SelfUserGame = (__int64)UserGameMaster__getSelfUserGame(0LL);
  userSvtEntity = this->fields.userSvtEntity;
  v59 = SelfUserGame;
  if ( !userSvtEntity )
    goto LABEL_60;
  SelfUserGame = (__int64)UserServantEntity__getSkillIdList(userSvtEntity, -1, -1, 1, 0LL);
  v29 = this->fields.userSvtEntity;
  if ( !v29 )
    goto LABEL_60;
  v30 = SelfUserGame;
  SelfUserGame = ((__int64 (__fastcall *)(struct UserServantEntity_o *, void *))v29->klass->vtable._6_getSkillLevelList.method)(
                   this->fields.userSvtEntity,
                   v29->klass[1]._1.image);
  v60 = this;
  this->fields.isSkillLvMax = 1;
  if ( !v30 )
    goto LABEL_60;
  v31 = *(_QWORD *)(v30 + 24);
  v32 = SelfUserGame;
  if ( (int)v31 >= 1 )
  {
    v33 = 0LL;
    while ( 1 )
    {
      if ( v33 >= (unsigned int)v31 )
        goto LABEL_61;
      if ( !v32 )
        goto LABEL_60;
      if ( v33 >= *(unsigned int *)(v32 + 24) )
      {
LABEL_61:
        v56 = sub_B5D6C8(SelfUserGame);
        sub_B5D668(v56, 0LL);
      }
      v34 = *(_DWORD *)(v30 + 32 + 4 * v33);
      if ( v34 >= 1 )
      {
        v35 = *(_DWORD *)(v32 + 32 + 4 * v33);
        SelfUserGame = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !SelfUserGame )
          goto LABEL_60;
        SelfUserGame = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)SelfUserGame,
                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_SkillMaster___);
        if ( !SelfUserGame )
          goto LABEL_60;
        SelfUserGame = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                  (DataMasterBase_WarMaster__WarEntity__int__o *)SelfUserGame,
                                  v34,
                                  (const MethodInfo_23FAE10 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        if ( !SelfUserGame )
          goto LABEL_60;
        if ( v35 < *(_DWORD *)(SelfUserGame + 40) )
          break;
      }
      LODWORD(v31) = *(_DWORD *)(v30 + 24);
      if ( (__int64)++v33 >= (int)v31 )
        goto LABEL_19;
    }
    v60->fields.isSkillLvMax = 0;
  }
LABEL_19:
  SelfUserGame = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_60;
  SelfUserGame = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)SelfUserGame,
                            (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_CombineSkillMaster___);
  v36 = *(_QWORD *)(v30 + 24);
  v37 = v60;
  if ( (int)v36 <= 0 )
  {
    p_enableSkillUp = &v60->fields.enableSkillUp;
  }
  else
  {
    v38 = (CombineSkillMaster_o *)SelfUserGame;
    v39 = 0LL;
    v40 = 0;
    v57 = (__int64 *)&v60->fields.enableSkillUp;
    v58 = v30;
    do
    {
      if ( v39 >= (unsigned int)v36 )
        goto LABEL_61;
      if ( !v32 )
        goto LABEL_60;
      if ( v39 >= *(unsigned int *)(v32 + 24) )
        goto LABEL_61;
      v41 = *(_DWORD *)(v30 + 4 * v39 + 32);
      if ( v41 >= 1 )
      {
        servantEntity = v37->fields.servantEntity;
        if ( !servantEntity || !v38 )
          goto LABEL_60;
        SelfUserGame = CombineSkillMaster__TryGetEntity(
                         v38,
                         &entity,
                         servantEntity->fields.combineSkillId,
                         *(_DWORD *)(v32 + 4 * v39 + 32),
                         0LL);
        if ( (SelfUserGame & 1) != 0 )
        {
          if ( !entity )
            goto LABEL_60;
          v43 = v38;
          itemIds = entity->fields.itemIds;
          itemNums = entity->fields.itemNums;
          SelfUserGame = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !SelfUserGame )
            goto LABEL_60;
          SelfUserGame = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    (DataManager_o *)SelfUserGame,
                                    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserItemMaster___);
          if ( !itemIds )
            goto LABEL_60;
          max_length = itemIds->max_length;
          if ( max_length >= 1 )
          {
            v47 = (UserItemMaster_o *)SelfUserGame;
            v48 = 0;
            while ( 1 )
            {
              if ( v48 >= max_length )
                goto LABEL_61;
              if ( !itemNums )
                goto LABEL_60;
              v49 = v48;
              if ( v48 >= itemNums->max_length )
                goto LABEL_61;
              v50 = v60->fields.userSvtEntity;
              if ( !v50 )
                goto LABEL_60;
              v51 = *(_OWORD *)&v50->fields.userId.fields.fakeValue;
              v52 = itemIds->m_Items[v48 + 1];
              v53 = itemNums->m_Items[v48 + 1];
              *(_OWORD *)&v62.fields.currentCryptoKey = *(_OWORD *)&v50->fields.userId.fields.currentCryptoKey;
              *(_OWORD *)&v62.fields.fakeValue = v51;
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
              }
              v61 = v62;
              SelfUserGame = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v61, 0LL);
              if ( !v47 )
                goto LABEL_60;
              SelfUserGame = UserItemMaster__TryGetEntity(v47, &v63, SelfUserGame, v52, 0LL);
              if ( (SelfUserGame & 1) == 0 )
                break;
              if ( !v63 )
                goto LABEL_60;
              if ( v53 > v63->fields.num )
                break;
              max_length = itemIds->max_length;
              v48 = v49 + 1;
              if ( (int)(v49 + 1) >= max_length )
              {
                v40 = 1;
                goto LABEL_48;
              }
            }
            v40 = 0;
          }
LABEL_48:
          if ( !v59 )
            goto LABEL_60;
          v37 = v60;
          if ( !entity )
            goto LABEL_60;
          v38 = v43;
          v30 = v58;
          if ( *(_DWORD *)(v59 + 96) < entity->fields.qp || (v40 & 1) == 0 )
          {
            v40 = 0;
          }
          else
          {
            SelfUserGame = *v57;
            if ( !*v57 )
              goto LABEL_60;
            System_Collections_Generic_List_int___Add(
              (System_Collections_Generic_List_int__o *)SelfUserGame,
              v41,
              (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
            v40 = 1;
          }
        }
      }
      LODWORD(v36) = *(_DWORD *)(v30 + 24);
      ++v39;
    }
    while ( (__int64)v39 < (int)v36 );
    p_enableSkillUp = &v60->fields.enableSkillUp;
  }
  v55 = *p_enableSkillUp;
  if ( !v55 || !v37 )
LABEL_60:
    sub_B5D69C(SelfUserGame, v27);
  v37->fields.isSkillUpItemNum = v55->fields._size > 0;
}


bool __fastcall CombineServantListViewItem__SetSortValue(
        CombineServantListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  __int64 v3; // x3
  ListViewSort_o *v4; // x20
  CombineServantListViewItem_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  const MethodInfo *v21; // x3
  int32_t bonusKind2; // w8
  struct ListViewManager_o *manager; // x8
  __int64 v24; // x11
  CombineServantListViewManager_o *v25; // x21
  int32_t *p_bonusKind2Id; // x8
  int32_t *v27; // x8
  int32_t v28; // w2
  bool EventUpVal_21840416; // w0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  int32_t svtId; // w22
  ServantFilterMaster_o *v32; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v33; // kr00_16
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v35; // q1
  int32_t bonusKindId; // w22
  int64_t v37; // x0
  const MethodInfo *v38; // x3
  const MethodInfo *v39; // x2
  _BOOL4 isSwapLock; // w23
  _BOOL4 isLock; // w24
  int v42; // w21
  const MethodInfo *v43; // x2
  int64_t *p_sortValue0; // x22
  __int64 v45; // x8
  unsigned int type; // w8
  __int64 v47; // x8
  int32_t v48; // w8
  int v49; // w23
  __int64 v50; // x8
  int32_t rarity; // w8
  __int64 v52; // x8
  struct UserServantEntity_o *v53; // x8
  __int128 v54; // q1
  struct UserServantEntity_o *v55; // x8
  IconLabelInfo_o *iconLabelInfo1; // x20
  int32_t amountSortValue; // w21
  struct UserServantEntity_o *v58; // x8
  int32_t v59; // w8
  IconLabelInfo_o *iconLabelInfo2; // x20
  struct UserServantEntity_o *v61; // x8
  unsigned int v62; // w8
  IconLabelInfo_o *v63; // x20
  struct UserServantEntity_o *v64; // x8
  int32_t adjustHp; // w3
  int32_t hp; // w2
  int32_t v67; // w1
  struct UserServantEntity_o *v68; // x8
  IconLabelInfo_o *v69; // x19
  struct ServantEntity_o *servantEntity; // x8
  __int64 v71; // x10
  struct ServantEntity_o *v72; // x8
  __int64 collectionNo; // x10
  struct UserServantEntity_o *v74; // x8
  int32_t lv; // w20
  int64_t friendship; // x2
  int32_t friendshipMax; // w3
  int32_t v78; // w1
  int32_t v79; // w21
  __int64 v80; // x9
  bool v81; // zf
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v83; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v84; // [xsp+30h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v85; // [xsp+50h] [xbp-60h]
  int32_t tdMaxLv[2]; // [xsp+78h] [xbp-38h] BYREF

  v4 = sort;
  v5 = this;
  if ( (byte_42EB56A & 1) == 0 )
  {
    sub_B5D5C4(&CombineServantListViewManager_TypeInfo, (_DWORD)sort, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantFilterMaster___, v6, v7, v8);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15, v16, v17);
    this = (CombineServantListViewItem_o *)sub_B5D5C4(&TutorialFlag_TypeInfo, v18, v19, v20);
    byte_42EB56A = 1;
  }
  *(_QWORD *)tdMaxLv = 0LL;
  *(_WORD *)&v5->fields.isTermination = 0;
  v5->fields.sortValue1 = -1LL;
  *(_WORD *)&v5->fields.isDispAtkStatusUpInfo = 0;
  if ( !v4 )
    goto LABEL_254;
  if ( !v4->fields.isBonusKind )
    goto LABEL_41;
  if ( v5->fields.isBaseSvt )
    goto LABEL_43;
  this = (CombineServantListViewItem_o *)ListViewItem__get_IsSelect((ListViewItem_o *)v5, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
    goto LABEL_41;
  bonusKind2 = v4->fields.bonusKind2;
  switch ( bonusKind2 )
  {
    case 1:
      if ( v5->fields.bonusKind == 1 )
      {
        p_bonusKind2Id = &v4->fields.bonusKind2Id;
        if ( v5->fields.bonusKindId == v4->fields.bonusKind2Id )
          goto LABEL_40;
      }
      else
      {
        p_bonusKind2Id = &v4->fields.bonusKind2Id;
      }
      v5->fields.bonusKind = 1;
      v28 = *p_bonusKind2Id;
      this = (CombineServantListViewItem_o *)v5->fields.userSvtEntity;
      v5->fields.bonusKindId = *p_bonusKind2Id;
      if ( !this )
        goto LABEL_254;
      EventUpVal_21840416 = UserServantEntity__getEventUpVal_21840416(
                              (UserServantEntity_o *)this,
                              v5->fields.setupInfo,
                              v28,
                              0LL);
LABEL_29:
      v5->fields.isEventUpVal = EventUpVal_21840416;
      if ( !EventUpVal_21840416 )
        goto LABEL_125;
      break;
    case 2:
      if ( v5->fields.bonusKind == 2 )
      {
        v27 = &v4->fields.bonusKind2Id;
        if ( v5->fields.bonusKindId == v4->fields.bonusKind2Id )
          goto LABEL_40;
      }
      else
      {
        v27 = &v4->fields.bonusKind2Id;
      }
      v5->fields.bonusKind = 2;
      v5->fields.bonusKindId = *v27;
      this = (CombineServantListViewItem_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_254;
      MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             (DataManager_o *)this,
                                             (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantFilterMaster___);
      svtId = v5->fields.svtId;
      v32 = (ServantFilterMaster_o *)MasterData_WarQuestSelectionMaster;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(svtId, 0LL);
      sort = *(ListViewSort_o **)&v33.fields.fakeValue;
      this = *(CombineServantListViewItem_o **)&v33.fields.currentCryptoKey;
      if ( !v32 )
        goto LABEL_254;
      EventUpVal_21840416 = ServantFilterMaster__IsEnableServant(v32, v33, v5->fields.bonusKindId, 0LL);
      goto LABEL_29;
    case 3:
      manager = v4->fields.manager;
      if ( manager
        && (v24 = *(&CombineServantListViewManager_TypeInfo->_2.bitflags2 + 1),
            *(&manager->klass->_2.bitflags2 + 1) >= (unsigned int)v24) )
      {
        if ( (CombineServantListViewManager_c *)manager->klass->_2.typeHierarchy[v24 - 1] == CombineServantListViewManager_TypeInfo )
          v25 = (CombineServantListViewManager_o *)v4->fields.manager;
        else
          v25 = 0LL;
      }
      else
      {
        v25 = 0LL;
      }
      v5->fields.bonusKind = 3;
      sort = (ListViewSort_o *)(unsigned int)v4->fields.bonusKind2Id;
      v5->fields.bonusKindId = (int)sort;
      if ( !v25 )
        goto LABEL_254;
      this = (CombineServantListViewItem_o *)CombineServantListViewManager__IsLargeSuccessCampaignServantId(
                                               v25,
                                               (int32_t)sort,
                                               v5->fields.svtId,
                                               v21);
      userSvtEntity = v5->fields.userSvtEntity;
      v5->fields.isEventUpVal = (unsigned __int8)this & 1;
      if ( !userSvtEntity )
        goto LABEL_254;
      v35 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
      bonusKindId = v5->fields.bonusKindId;
      *(_OWORD *)&v85.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v85.fields.fakeValue = v35;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v84 = v85;
      v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v84, 0LL);
      if ( !CombineServantListViewManager__IsExchangeSvtExist(v25, bonusKindId, v37, v38) )
      {
LABEL_40:
        if ( !v5->fields.isEventUpVal )
          goto LABEL_125;
      }
      break;
  }
LABEL_41:
  if ( v5->fields.isBaseSvt || ListViewItem__get_IsSelect((ListViewItem_o *)v5, 0LL) )
  {
LABEL_43:
    this = (CombineServantListViewItem_o *)v5->fields.iconLabelInfo2;
    isSwapLock = v5->fields.isSwapLock;
    isLock = v5->fields.isLock;
    if ( !this )
      goto LABEL_254;
    v42 = v5->fields.isSwapChoice ^ v5->fields.isChoice;
    IconLabelInfo__Clear((IconLabelInfo_o *)this, 0LL);
    v5->fields.sortValue0 = 0LL;
    p_sortValue0 = &v5->fields.sortValue0;
    v5->fields.sortValue0B = 0LL;
    if ( !v4->fields.isSmartSort )
    {
      if ( !((v42 ^ 1) & 1 | !v4->fields.isChoiceSort) )
      {
        type = v5->fields.type;
        if ( type <= 0xB )
        {
          if ( ((1 << type) & 0xFDD) != 0 )
            v47 = 10LL;
          else
LABEL_81:
            v47 = -10LL;
          *p_sortValue0 = v47;
        }
      }
LABEL_153:
      this = (CombineServantListViewItem_o *)(&dword_0 + 1);
      switch ( v4->fields.sortKind )
      {
        case 0:
          this = (CombineServantListViewItem_o *)v5->fields.userSvtEntity;
          v52 = !v5->fields.isParty;
          goto LABEL_201;
        case 1:
          v53 = v5->fields.userSvtEntity;
          if ( !v53 )
            break;
          v54 = *(_OWORD *)&v53->fields.id.fields.fakeValue;
          *(_OWORD *)&v85.fields.currentCryptoKey = *(_OWORD *)&v53->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v85.fields.fakeValue = v54;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v83 = v85;
          this = (CombineServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(
                                                   &v83,
                                                   0LL);
          v55 = v5->fields.userSvtEntity;
          v5->fields.sortValue1 = (int64_t)this;
          if ( !v55 )
            break;
          this = (CombineServantListViewItem_o *)v5->fields.iconLabelInfo1;
          if ( !this )
            break;
          IconLabelInfo__SetTime((IconLabelInfo_o *)this, 49, v55->fields.createdAt, 0, 0, 0, 0LL);
          goto LABEL_183;
        case 2:
          this = (CombineServantListViewItem_o *)v5->fields.userSvtEntity;
          v5->fields.sortValue1 = v5->fields.rarity;
          if ( !this )
            break;
          iconLabelInfo1 = v5->fields.iconLabelInfo1;
          amountSortValue = this->fields.amountSortValue;
          this = (CombineServantListViewItem_o *)UserServantEntity__getLevelMax((UserServantEntity_o *)this, 0LL);
          v58 = v5->fields.userSvtEntity;
          if ( !v58 || !iconLabelInfo1 )
            break;
          IconLabelInfo__Set_28463004(iconLabelInfo1, 2, amountSortValue, (int32_t)this, 0, 0, 0, v58->fields.lv, 0LL);
          v59 = v5->fields.type;
          if ( v59 != 10 && v59 != 7 )
            goto LABEL_223;
          this = (CombineServantListViewItem_o *)v5->fields.userSvtEntity;
          if ( !this )
            break;
          iconLabelInfo2 = v5->fields.iconLabelInfo2;
          this = (CombineServantListViewItem_o *)UserServantEntity__getRarity((UserServantEntity_o *)this, 0LL);
          v61 = v5->fields.userSvtEntity;
          if ( !v61 || !iconLabelInfo2 )
            break;
          IconLabelInfo__Set_28463004(
            iconLabelInfo2,
            36,
            (int32_t)this,
            v61->fields.exceedCount,
            0,
            0,
            0,
            v61->fields.lv,
            0LL);
          goto LABEL_223;
        case 3:
          this = (CombineServantListViewItem_o *)v5->fields.userSvtEntity;
          if ( !this )
            break;
          v5->fields.sortValue1 = SLODWORD(this->fields.amountSortValue);
          goto LABEL_202;
        case 4:
          this = (CombineServantListViewItem_o *)v5->fields.userSvtEntity;
          if ( !this )
            break;
          v62 = v5->fields.type & 0xFFFFFFFE;
          v5->fields.sortValue1 = *(int *)&this->fields.isLvExceedMax;
          if ( v62 == 4 )
          {
            v63 = v5->fields.iconLabelInfo1;
          }
          else
          {
            UserServantEntity__getTreasureDeviceInfo_21848072((UserServantEntity_o *)this, &tdMaxLv[1], tdMaxLv, 0LL);
            LODWORD(friendship) = tdMaxLv[1];
            this = (CombineServantListViewItem_o *)v5->fields.iconLabelInfo1;
            v5->fields.sortValue1 = tdMaxLv[1];
            if ( !this )
              break;
            friendshipMax = tdMaxLv[0];
            v78 = 33;
LABEL_210:
            IconLabelInfo__Set_28463004((IconLabelInfo_o *)this, v78, friendship, friendshipMax, 0, 0, 0, 0, 0LL);
LABEL_211:
            this = (CombineServantListViewItem_o *)v5->fields.userSvtEntity;
            if ( !this )
              break;
            v63 = v5->fields.iconLabelInfo2;
          }
          v79 = this->fields.amountSortValue;
          this = (CombineServantListViewItem_o *)UserServantEntity__getLevelMax((UserServantEntity_o *)this, 0LL);
          if ( v63 )
          {
            IconLabelInfo__Set_28463004(v63, 2, v79, (int32_t)this, 0, 0, 0, 0, 0LL);
            this = (CombineServantListViewItem_o *)v5->fields.servantEntity;
            if ( this )
            {
              if ( !ServantEntity__get_IsExpUp((ServantEntity_o *)this, 0LL) )
              {
                this = (CombineServantListViewItem_o *)v5->fields.servantEntity;
                if ( !this )
                  break;
                if ( !ServantEntity__get_IsStatusUp((ServantEntity_o *)this, 0LL) )
                {
                  this = (CombineServantListViewItem_o *)v5->fields.servantEntity;
                  if ( !this )
                    break;
                  if ( !ServantEntity__get_IsServantMaterialTd((ServantEntity_o *)this, 0LL) )
                  {
LABEL_223:
                    LOBYTE(this) = 1;
                    return (char)this;
                  }
                }
              }
              this = (CombineServantListViewItem_o *)v5->fields.iconLabelInfo1;
              if ( this )
              {
                IconLabelInfo__Clear((IconLabelInfo_o *)this, 0LL);
                this = (CombineServantListViewItem_o *)v5->fields.iconLabelInfo2;
                if ( this )
                {
                  IconLabelInfo__Clear((IconLabelInfo_o *)this, 0LL);
                  goto LABEL_223;
                }
              }
            }
          }
          break;
        case 5:
          v64 = v5->fields.userSvtEntity;
          if ( !v64 )
            break;
          this = (CombineServantListViewItem_o *)v5->fields.iconLabelInfo1;
          v5->fields.sortValue1 = v64->fields.hp;
          if ( !this )
            break;
          adjustHp = v64->fields.adjustHp;
          hp = v64->fields.hp;
          v67 = 3;
          goto LABEL_182;
        case 6:
          v68 = v5->fields.userSvtEntity;
          if ( !v68 )
            break;
          this = (CombineServantListViewItem_o *)v5->fields.iconLabelInfo1;
          v5->fields.sortValue1 = v68->fields.atk;
          if ( !this )
            break;
          adjustHp = v68->fields.adjustAtk;
          hp = v68->fields.atk;
          v67 = 5;
LABEL_182:
          IconLabelInfo__Set_28463004((IconLabelInfo_o *)this, v67, hp, adjustHp, 0, 0, 0, 0, 0LL);
LABEL_183:
          this = (CombineServantListViewItem_o *)v5->fields.userSvtEntity;
          if ( !this )
            break;
          v69 = v5->fields.iconLabelInfo2;
          goto LABEL_203;
        case 7:
          servantEntity = v5->fields.servantEntity;
          if ( !servantEntity )
            break;
          this = (CombineServantListViewItem_o *)v5->fields.iconLabelInfo1;
          v5->fields.sortValue1 = servantEntity->fields.cost;
          if ( !this )
            break;
          IconLabelInfo__Set_28463004((IconLabelInfo_o *)this, 7, servantEntity->fields.cost, 0, 0, 0, 0, 0, 0LL);
          goto LABEL_211;
        case 8:
          this = (CombineServantListViewItem_o *)v5->fields.userSvtEntity;
          v52 = -v5->fields.priority;
LABEL_201:
          v5->fields.sortValue1 = v52;
          if ( !this )
            break;
LABEL_202:
          v69 = v5->fields.iconLabelInfo1;
LABEL_203:
          lv = this->fields.amountSortValue;
          goto LABEL_204;
        case 0xA:
          friendship = v5->fields.friendship;
          this = (CombineServantListViewItem_o *)v5->fields.iconLabelInfo1;
          v5->fields.sortValue1 = friendship;
          if ( !this )
            break;
          friendshipMax = v5->fields.friendshipMax;
          v78 = 32;
          goto LABEL_210;
        case 0xE:
          this = (CombineServantListViewItem_o *)v5->fields.amountSortValue;
          if ( ((unsigned __int64)this & 0x8000000000000000LL) == 0 )
            goto LABEL_193;
          this = (CombineServantListViewItem_o *)v4->fields.manager;
          if ( !this )
            break;
          v71 = *(&CombineServantListViewManager_TypeInfo->_2.bitflags2 + 1);
          if ( *(&this->klass->_2.bitflags2 + 1) < (unsigned int)v71
            || (CombineServantListViewManager_c *)this->klass->_2.typeHierarchy[v71 - 1] != CombineServantListViewManager_TypeInfo )
          {
            break;
          }
          this = (CombineServantListViewItem_o *)CombineServantListViewManager__GetAmountSortValue(
                                                   (CombineServantListViewManager_o *)this,
                                                   v5->fields.svtId,
                                                   v43);
          v5->fields.amountSortValue = (int64_t)this;
LABEL_193:
          v72 = v5->fields.servantEntity;
          if ( !v72 )
            break;
          collectionNo = v72->fields.collectionNo;
          v74 = v5->fields.userSvtEntity;
          v5->fields.sortValue1 = (((unsigned __int64)(unsigned int)v5->fields.rarity << 32) + ((_QWORD)this << 48)) | collectionNo;
          if ( !v74 )
            break;
          v69 = v5->fields.iconLabelInfo1;
          lv = v74->fields.lv;
          this = (CombineServantListViewItem_o *)v74;
LABEL_204:
          this = (CombineServantListViewItem_o *)UserServantEntity__getLevelMax((UserServantEntity_o *)this, 0LL);
          if ( !v69 )
            break;
          IconLabelInfo__Set_28463004(v69, 2, lv, (int32_t)this, 0, 0, 0, 0, 0LL);
          goto LABEL_223;
        case 0xF:
          friendship = v5->fields.hpReinforceValue;
          this = (CombineServantListViewItem_o *)v5->fields.iconLabelInfo1;
          v5->fields.isDispHpStatusUpInfo = 1;
          v5->fields.sortValue1 = friendship;
          if ( !this )
            break;
          friendshipMax = v5->fields.nowMaxHpReinforceValue;
          v78 = 44;
          goto LABEL_210;
        case 0x10:
          friendship = v5->fields.atkReinforceValue;
          this = (CombineServantListViewItem_o *)v5->fields.iconLabelInfo1;
          v5->fields.isDispAtkStatusUpInfo = 1;
          v5->fields.sortValue1 = friendship;
          if ( !this )
            break;
          friendshipMax = v5->fields.nowMaxAtkReinforceValue;
          v78 = 45;
          goto LABEL_210;
        default:
          return (char)this;
      }
LABEL_254:
      sub_B5D69C(this, sort);
    }
    switch ( v5->fields.type )
    {
      case 0:
        if ( v5->fields.isHeroineSvt )
        {
          if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TutorialFlag_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
          }
          if ( TutorialFlag__Get_29295864(126, 0LL) )
            goto LABEL_127;
        }
        if ( v5->fields.isParty )
        {
          v45 = 20LL;
          goto LABEL_150;
        }
        if ( !v5->fields.isLvMax )
          goto LABEL_151;
        goto LABEL_149;
      case 1:
        this = (CombineServantListViewItem_o *)v5->fields.servantEntity;
        if ( !this )
          goto LABEL_254;
        v49 = isSwapLock ^ isLock;
        if ( ServantEntity__get_IsExpUp((ServantEntity_o *)this, 0LL) )
        {
          if ( v5->fields.isBaseLvMax )
          {
            v50 = -120LL;
          }
          else
          {
            v50 = -5LL;
            if ( !(v49 | v42) )
              v50 = 30LL;
          }
          goto LABEL_246;
        }
        this = (CombineServantListViewItem_o *)v5->fields.servantEntity;
        if ( !this )
          goto LABEL_254;
        if ( ServantEntity__get_IsStatusUp((ServantEntity_o *)this, 0LL) )
        {
          if ( v5->fields.isSameClass )
          {
            rarity = v5->fields.rarity;
            if ( v5->fields.hpBase < 1 )
            {
              if ( rarity == 4 )
              {
                v50 = -90LL;
                if ( !v5->fields.isAtkSecondUpMax && v5->fields.isAtkUpMax )
                  v50 = 90LL;
                goto LABEL_244;
              }
              v80 = 70LL;
              v81 = !v5->fields.isAtkUpMax;
              v50 = -110LL;
            }
            else
            {
              if ( rarity == 4 )
              {
                v50 = -80LL;
                if ( !v5->fields.isHpSecondUpMax && v5->fields.isHpUpMax )
                  v50 = 100LL;
LABEL_244:
                *p_sortValue0 = v50;
                if ( v49 | v42 )
                  v50 = -5LL;
                goto LABEL_246;
              }
              v80 = 80LL;
              v81 = !v5->fields.isHpUpMax;
              v50 = -100LL;
            }
            if ( v81 )
              v50 = v80;
            goto LABEL_244;
          }
          v50 = -150LL;
        }
        else
        {
          if ( !CombineServantListViewItem__get_IsCanNotSelectMaterial(v5, (const MethodInfo *)sort) )
          {
LABEL_247:
            if ( v5->fields.isFortification )
              *p_sortValue0 = -10LL;
            if ( !((v42 ^ 1) & 1 | !v4->fields.isChoiceSort) )
              *(_OWORD *)p_sortValue0 = xmmword_32B46C0;
            goto LABEL_153;
          }
          if ( v5->fields.isLimitCntTarget )
          {
            v50 = -20LL;
          }
          else if ( v5->fields.isParty )
          {
            v50 = -30LL;
          }
          else
          {
            v50 = -10LL;
            if ( v5->fields.isUseSupport )
              v50 = -40LL;
          }
        }
LABEL_246:
        *p_sortValue0 = v50;
        goto LABEL_247;
      case 2:
        if ( v5->fields.isSealCombineLimit )
        {
          v45 = 0LL;
          goto LABEL_150;
        }
        if ( !CombineServantListViewItem__get_IsCanNotBaseSelect(v5, (const MethodInfo *)sort)
          && v5->fields.isLimitUpItemNum
          && v5->fields.isLvMax )
        {
LABEL_147:
          v45 = 10LL;
          goto LABEL_150;
        }
        if ( v5->fields.isHeroineSvt )
        {
LABEL_149:
          v45 = -10LL;
          goto LABEL_150;
        }
        if ( v5->fields.isLimitCntMax )
          goto LABEL_127;
        goto LABEL_151;
      case 3:
        if ( v5->fields.isHeroineSvt )
        {
          if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TutorialFlag_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
          }
          if ( TutorialFlag__Get_29295864(126, 0LL) )
            goto LABEL_127;
        }
        if ( v5->fields.isSkillUpItemNum )
          goto LABEL_147;
        if ( !v5->fields.isSkillLvMax )
          goto LABEL_151;
        goto LABEL_149;
      case 4:
        if ( v5->fields.isSameSvt )
          goto LABEL_147;
        if ( v5->fields.isHeroineSvt )
          goto LABEL_149;
        if ( !v5->fields.isTdLvMax )
          goto LABEL_151;
        goto LABEL_127;
      case 5:
        if ( !((v42 ^ 1) & 1 | !v4->fields.isChoiceSort) || v5->fields.isFortification )
          goto LABEL_81;
        goto LABEL_153;
      case 6:
        if ( !CombineServantListViewItem__get_IsCanNotBaseSelect(v5, (const MethodInfo *)sort)
          && v5->fields.isLvMax
          && v5->fields.isLimitCntMax
          && v5->fields.isLvExceedItemNum )
        {
          goto LABEL_147;
        }
        if ( v5->fields.isHeroineSvt )
          goto LABEL_149;
        if ( !v5->fields.isLvExceedMax )
          goto LABEL_151;
        goto LABEL_127;
      case 7:
        if ( v5->fields.isEventJoin )
          goto LABEL_149;
        if ( !v5->fields.isHeroineSvt )
          goto LABEL_151;
        if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TutorialFlag_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
        }
        if ( !TutorialFlag__Get_29295864(126, 0LL) )
          goto LABEL_151;
        goto LABEL_127;
      case 8:
        if ( !CombineServantListViewItem__get_IsCanNotBaseSelect(v5, (const MethodInfo *)sort)
          && v5->fields.isFriendshipRankMax
          && v5->fields.isFriendshipExceedItemNum )
        {
          goto LABEL_147;
        }
        if ( v5->fields.isHeroineSvt )
          goto LABEL_149;
        if ( !v5->fields.isFriendshipExceedMax )
          goto LABEL_151;
        goto LABEL_127;
      case 9:
        if ( !CombineServantListViewItem__get_IsCanNotBaseSelect(v5, (const MethodInfo *)sort) )
          goto LABEL_147;
        if ( v5->fields.isHeroineSvt )
          goto LABEL_149;
        if ( v5->fields.isSealCombineLimit )
        {
LABEL_121:
          v45 = -15LL;
        }
        else if ( v5->fields.isLimitCntMax )
        {
LABEL_127:
          v45 = -20LL;
        }
        else
        {
          if ( !v5->fields.isEventJoin )
            goto LABEL_151;
LABEL_114:
          v45 = -30LL;
        }
LABEL_150:
        *p_sortValue0 = v45;
LABEL_151:
        if ( !((v42 ^ 1) & 1 | !v4->fields.isChoiceSort) )
          v5->fields.sortValue0B = 10LL;
        goto LABEL_153;
      case 0xA:
        if ( v5->fields.isHeroineSvt )
        {
          if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TutorialFlag_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
          }
          if ( TutorialFlag__Get_29295864(126, 0LL) )
            goto LABEL_114;
        }
        if ( v5->fields.isEventJoin )
          goto LABEL_127;
        if ( v5->fields.isCommandCardExceedMax )
          goto LABEL_149;
        goto LABEL_151;
      case 0xB:
        if ( v5->fields.isHeroineSvt )
        {
          if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TutorialFlag_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
          }
          if ( TutorialFlag__Get_29295864(126, 0LL) )
            goto LABEL_127;
        }
        if ( v5->fields.isEventJoin )
          goto LABEL_121;
        if ( v5->fields.isAppendSkillOpenItemNum || v5->fields.isAppendSkillUpItemNum )
          goto LABEL_147;
        if ( !v5->fields.isAppendSkillLvMax )
          goto LABEL_151;
        goto LABEL_149;
      default:
        goto LABEL_153;
    }
  }
  v48 = v5->fields.type;
  if ( v48 == 1 )
  {
    if ( CombineServantListViewItem__IsMatchMaterialFilter(v5, v4, v39) )
      goto LABEL_43;
  }
  else if ( v48 )
  {
    if ( CombineServantListViewItem__IsMatchServantFilter(v5, v4, v39) )
      goto LABEL_43;
  }
  else if ( CombineServantListViewItem__IsMatchBaseServantFilter(v5, v4, v39) )
  {
    goto LABEL_43;
  }
LABEL_125:
  LOBYTE(this) = 0;
  return (char)this;
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
  int v2; // w2
  __int64 v3; // x3
  System_String_o *NameText; // x0

  if ( (byte_42EB575 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_15261/*"UserSvt "*/, (_DWORD)method, v2, v3);
    byte_42EB575 = 1;
  }
  NameText = CombineServantListViewItem__get_NameText(this, method);
  return System_String__Concat_44577788((System_String_o *)StringLiteral_15261/*"UserSvt "*/, NameText, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct ServantEntity_o *servantEntity; // x8
  int32_t cost; // w19

  if ( (byte_42EB571 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_18624/*"error"*/, v5, v6, v7);
    byte_42EB571 = 1;
  }
  servantEntity = this->fields.servantEntity;
  if ( !servantEntity )
    return (System_String_o *)StringLiteral_18624/*"error"*/;
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
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EB572 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)method, v2, v3);
    byte_42EB572 = 1;
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
    sub_B5D69C(0LL, method);
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
  int v2; // w2
  __int64 v3; // x3
  int32_t type; // w8
  bool result; // w0
  _BOOL4 v7; // w8
  _BOOL4 isSealCombineLimit; // w8
  _BOOL4 v9; // w9
  int32_t v10; // w8

  if ( (byte_42EB573 & 1) == 0 )
  {
    sub_B5D5C4(&TutorialFlag_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EB573 = 1;
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
    if ( TutorialFlag__Get_29295864(126, 0LL) )
    {
      result = 1;
    }
    else
    {
LABEL_77:
      v7 = this->fields.isLvMax
        || this->fields.isExpUpSvt
        || this->fields.isStatusUpSvt && !this->fields.isCanStUp
        || this->fields.isMaterialTdSvt;
      result = v7;
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
        v9 = TutorialFlag__Get_29295864(126, 0LL) || this->fields.isSkillLvMax;
        type = this->fields.type;
        result = v9;
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
            if ( TutorialFlag__Get_29295864(126, 0LL) )
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
  v10 = this->fields.type;
  if ( v10 == 10 )
  {
    if ( this->fields.isHeroineSvt )
    {
      if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TutorialFlag_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
      }
      if ( TutorialFlag__Get_29295864(126, 0LL) )
        goto LABEL_58;
    }
    if ( this->fields.isCommandCardExceedMax )
LABEL_58:
      result = 1;
    else
      result = this->fields.isEventJoin;
    v10 = this->fields.type;
  }
  if ( v10 == 11 )
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
      return TutorialFlag__Get_29295864(126, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  unsigned int type; // w20
  bool CanNotSelectMaterial; // w0

  if ( (byte_42EB574 & 1) == 0 )
  {
    sub_B5D5C4(&TutorialFlag_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EB574 = 1;
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
    if ( TutorialFlag__Get_29295864(126, 0LL) )
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
    sub_B5D69C(v6, v5);
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
    sub_B5D69C(0LL, method);
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
    sub_B5D69C(0LL, method);
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
    sub_B5D69C(0LL, method);
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
    sub_B5D69C(0LL, method);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct UserServantEntity_o *userSvtEntity; // x8
  int32_t lv; // w19

  if ( (byte_42EB56F & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_18624/*"error"*/, v5, v6, v7);
    byte_42EB56F = 1;
  }
  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    return (System_String_o *)StringLiteral_18624/*"error"*/;
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
  int v2; // w2
  __int64 v3; // x3
  CombineServantListViewItem_o *v4; // x20
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  ServantEntity_o *servantEntity; // x19
  struct UserServantEntity_o *userSvtEntity; // x8
  __int64 v10; // x20
  __int64 v11; // x21
  int32_t v12; // w1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  v4 = this;
  if ( (byte_42EB56E & 1) == 0 )
  {
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, (_DWORD)method, v2, v3);
    this = (CombineServantListViewItem_o *)sub_B5D5C4(&StringLiteral_18624/*"error"*/, v5, v6, v7);
    byte_42EB56E = 1;
  }
  servantEntity = v4->fields.servantEntity;
  if ( !servantEntity )
    return (System_String_o *)StringLiteral_18624/*"error"*/;
  userSvtEntity = v4->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_B5D69C(this, method);
  v11 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.currentCryptoKey;
  v10 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v14.fields.currentCryptoKey = v11;
  *(_QWORD *)&v14.fields.fakeValue = v10;
  v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v14, 0LL);
  return ServantEntity__getName(servantEntity, v12, -1, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  int32_t rarity; // w19

  if ( (byte_42EB570 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EB570 = 1;
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  __int64 v12; // x1
  WarEntity_o *Entity; // x0

  if ( (byte_42EB576 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_SvtCoinMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__GetEntity__, v8, v9, v10);
    byte_42EB576 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_SvtCoinMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B5D69C(0LL, v12);
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             Master_WarQuestSelectionMaster,
             this->fields.svtId,
             (const MethodInfo_23FAE10 *)Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__GetEntity__);
  if ( Entity )
    return (int32_t)Entity->fields.age;
  else
    return -1;
}


int32_t __fastcall CombineServantListViewItem__get_SkillOpenItemNum(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int64_t Master_WarQuestSelectionMaster; // x0
  __int64 v15; // x1
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v17; // q1
  UserSvtCoinMaster_o *v18; // x20
  struct UserServantEntity_o *v19; // x8
  int64_t v20; // x19
  __int64 v21; // x21
  __int64 v22; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v24; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v25; // [xsp+20h] [xbp-50h]
  UserSvtCoinEntity_o *entity; // [xsp+48h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16

  if ( (byte_42EB577 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_UserSvtCoinMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v11, v12, v13);
    byte_42EB577 = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserSvtCoinMaster___);
  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_20;
  v17 = *(_OWORD *)&userSvtEntity->fields.userId.fields.fakeValue;
  v18 = (UserSvtCoinMaster_o *)Master_WarQuestSelectionMaster;
  *(_OWORD *)&v25.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v25.fields.fakeValue = v17;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v24 = v25;
  Master_WarQuestSelectionMaster = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v24, 0LL);
  v19 = this->fields.userSvtEntity;
  if ( !v19 )
    goto LABEL_20;
  v20 = Master_WarQuestSelectionMaster;
  v22 = *(_QWORD *)&v19->fields.svtId.fields.currentCryptoKey;
  v21 = *(_QWORD *)&v19->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v27.fields.currentCryptoKey = v22;
  *(_QWORD *)&v27.fields.fakeValue = v21;
  Master_WarQuestSelectionMaster = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v27, 0LL);
  if ( !v18 )
    goto LABEL_20;
  Master_WarQuestSelectionMaster = UserSvtCoinMaster__TryGetEntity(
                                     v18,
                                     &entity,
                                     v20,
                                     Master_WarQuestSelectionMaster,
                                     0LL);
  if ( (Master_WarQuestSelectionMaster & 1) != 0 )
  {
    if ( entity )
      return entity->fields.num;
LABEL_20:
    sub_B5D69C(Master_WarQuestSelectionMaster, v15);
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
  int v2; // w2
  __int64 v3; // x3
  CombineServantListViewItem_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  struct UserServantEntity_o *v14; // x8
  BattleServantConfConponent_o *p_userSvtEntity; // x19
  struct UserServantEntity_o *userSvtEntity; // t1
  __int128 v17; // q1
  int64_t v18; // x20
  System_Int32_array **Entity; // x20
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+0h] [xbp-50h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v28; // [xsp+20h] [xbp-30h]

  v4 = this;
  if ( (byte_42EB56C & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v5, v6, v7);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8, v9, v10);
    this = (CombineServantListViewItem_o *)sub_B5D5C4(
                                             &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                             v11,
                                             v12,
                                             v13);
    byte_42EB56C = 1;
  }
  userSvtEntity = v4->fields.userSvtEntity;
  p_userSvtEntity = (BattleServantConfConponent_o *)&v4->fields.userSvtEntity;
  v14 = userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_10;
  v17 = *(_OWORD *)&v14->fields.id.fields.fakeValue;
  *(_OWORD *)&v28.fields.currentCryptoKey = *(_OWORD *)&v14->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v28.fields.fakeValue = v17;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v27 = v28;
  v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v27, 0LL);
  this = (CombineServantListViewItem_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (this = (CombineServantListViewItem_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                 (DataManager_o *)this,
                                                 (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
  {
LABEL_10:
    sub_B5D69C(this, method);
  }
  Entity = (System_Int32_array **)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                    (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)this,
                                    v18,
                                    (const MethodInfo_23FB038 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  p_userSvtEntity->klass = (BattleServantConfConponent_c *)Entity;
  sub_B5D560(p_userSvtEntity, Entity, v20, v21, v22, v23, v24, v25);
  return (UserServantEntity_o *)Entity;
}


int64_t __fastcall CombineServantListViewItem__get_UserSvtId(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  CombineServantListViewItem_o *v4; // x19
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v6; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v8; // [xsp+0h] [xbp-50h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v9; // [xsp+20h] [xbp-30h]

  v4 = this;
  if ( (byte_42EB56D & 1) == 0 )
  {
    this = (CombineServantListViewItem_o *)sub_B5D5C4(
                                             &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
                                             (_DWORD)method,
                                             v2,
                                             v3);
    byte_42EB56D = 1;
  }
  userSvtEntity = v4->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_B5D69C(this, method);
  v6 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v9.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v9.fields.fakeValue = v6;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v8 = v9;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v8, 0LL);
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
  sub_B5D560(
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
    sub_B5D69C(0LL, value);
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
    sub_B5D69C(0LL, value);
  this->fields.dragSelectNum = ~value << 31 >> 31;
}


void __fastcall CombineServantListViewItem__set_IsHpStatusMax(
        CombineServantListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  if ( !this )
    sub_B5D69C(0LL, value);
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
    sub_B5D69C(0LL, value);
  this->fields.isNotSelectSecondStatusUpAtk = this->fields.atkBase > 0 && value;
}


void __fastcall CombineServantListViewItem__set_IsSecondHpStatusMax(
        CombineServantListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  if ( !this )
    sub_B5D69C(0LL, value);
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._NoticeTween_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}