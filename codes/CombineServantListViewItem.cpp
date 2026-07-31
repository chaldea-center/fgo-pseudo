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
  bool v16; // w22
  IconLabelInfo_o *v17; // x20
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  IconLabelInfo_o *v24; // x20
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  System_Collections_Generic_List_int__o *v31; // x20
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  System_Collections_Generic_List_int__o *v38; // x20
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  System_String_o *v45; // x2
  System_String_o *v46; // x3
  int32_t v47; // w4
  int32_t v48; // w5
  bool v49; // w6
  bool v50; // w7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_userSvtEntity; // x23
  System_String_o *v52; // x2
  System_String_o *v53; // x3
  int32_t v54; // w4
  int32_t v55; // w5
  bool v56; // w6
  bool v57; // w7
  int64_t SelfUserGame; // x0
  const MethodInfo *v59; // x1
  struct ServantEntity_o *ServantEntity; // x0
  System_String_o *v61; // x2
  System_String_o *v62; // x3
  int32_t v63; // w4
  int32_t v64; // w5
  bool v65; // w6
  bool v66; // w7
  __int64 v67; // x1
  __int64 v68; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c **v69; // x26
  __int64 v70; // x1
  __int64 v71; // x2
  Il2CppObject *Master_object; // x24
  __int128 v73; // q1
  int v74; // w8
  int64_t v75; // x0
  __int64 v76; // x1
  __int64 v77; // x2
  __int64 v78; // x20
  __int64 v79; // x22
  int64_t v80; // x27
  UserServantCollectionEntity_o *EntityDefinitely; // x24
  __int64 v82; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v83; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v84; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v85; // q1
  int v86; // w8
  int64_t v87; // x0
  __int128 v88; // q1
  int64_t v89; // x20
  bool v90; // w9
  struct ServantEntity_o *v91; // x8
  __int64 v92; // x20
  __int64 v93; // x22
  struct ServantEntity_o *v94; // x8
  __int64 v95; // x1
  __int64 v96; // x2
  int32_t v97; // w8
  BalanceConfig_c *v98; // x0
  int32_t adjustHp; // w20
  struct BalanceConfig_StaticFields *static_fields; // x8
  const MethodInfo *v101; // x2
  const MethodInfo *v102; // x1
  const MethodInfo *v103; // x1
  int64_t UserSvtId; // x0
  unsigned int v105; // w8
  int32_t v106; // w20
  int32_t v107; // w22
  int32_t adjustAtk; // w24
  int32_t v109; // w25
  bool isLevelMax; // w0
  bool isLimitCountMax; // w0
  const MethodInfo_476E8C0 *v112; // x8
  int64_t Enumerator; // x0
  __int64 v114; // x1
  int64_t v115; // x24
  __int64 v116; // x8
  __int64 v117; // x9
  int *v118; // x10
  __int64 v119; // x0
  __int64 v120; // x0
  __int64 v121; // x2
  int64_t v122; // x24
  __int64 v123; // x8
  __int64 v124; // x9
  int *v125; // x10
  __int64 v126; // x0
  __int64 v127; // x0
  __int64 v128; // x1
  __int64 v129; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v130; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v131; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v132; // q1
  __int64 v133; // x20
  int v134; // w9
  int64_t v135; // x24
  __int64 v136; // x8
  __int64 v137; // x9
  int *v138; // x10
  __int64 v139; // x0
  __int64 v140; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v141; // x8
  UserRecommendSupportMaster_o *v142; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v143; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v144; // q1
  int v145; // w8
  Il2CppObject *v146; // x0
  __int128 v147; // q1
  UserServantGrandMaster_o *v148; // x24
  bool IsSettingServant; // w8
  __int64 v150; // x2
  Il2CppObject *MasterData_object; // x24
  struct ServantEntity_o *v152; // x9
  __int64 v153; // x20
  __int64 v154; // x22
  int64_t v155; // x29
  bool IsEquipedCommandCode; // w8
  __int64 v157; // x2
  Il2CppObject *v158; // x24
  struct ServantEntity_o *v159; // x9
  __int64 v160; // x20
  __int64 v161; // x22
  int64_t v162; // x29
  __int64 v163; // x2
  struct System_Int32_array *commandCardParam; // x20
  int max_length; // w8
  __int64 v166; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c **v167; // x28
  int32_t v168; // w26
  const MethodInfo_476E8C0 *v169; // x0
  int64_t v170; // x0
  __int64 v171; // x1
  int64_t v172; // x24
  __int64 v173; // x8
  __int64 v174; // x9
  int *v175; // x10
  __int64 v176; // x0
  __int64 v177; // x0
  __int64 v178; // x2
  int64_t v179; // x24
  __int64 v180; // x8
  __int64 v181; // x9
  int *v182; // x10
  __int64 v183; // x0
  __int64 v184; // x0
  __int64 v185; // x1
  __int64 v186; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v187; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v188; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v189; // q1
  __int64 v190; // x20
  int v191; // w9
  int64_t v192; // x24
  __int64 v193; // x8
  __int64 v194; // x9
  int *v195; // x10
  __int64 v196; // x0
  __int64 v197; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v198; // x8
  UserRecommendSupportMaster_o *v199; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v200; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v201; // q1
  int v202; // w8
  Il2CppObject *v203; // x0
  __int128 v204; // q1
  UserServantGrandMaster_o *v205; // x24
  bool v206; // w0
  const MethodInfo_476E8C0 *v207; // x8
  __int64 v208; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v209; // x8
  __int64 v210; // x20
  __int64 v211; // x22
  int32_t v212; // w20
  bool v213; // w0
  const MethodInfo_476E8C0 *v214; // x8
  int32_t SvtClassId; // w0
  int32_t SvtClassGroupType; // w24
  int32_t materialExp; // w20
  BalanceConfig_c *v218; // x0
  int SameClassExp; // w22
  double v220; // d0
  unsigned int v221; // w9
  int32_t v222; // w8
  __int64 v223; // x2
  UserServantEntity_o *v224; // x8
  ServantLimitMaster_o *v225; // x24
  __int64 v226; // x20
  __int64 v227; // x22
  int32_t v228; // w28
  int32_t v229; // w8
  int32_t v230; // w24
  struct ServantEntity_o *v231; // x8
  bool v232; // w8
  bool v233; // w8
  bool v234; // w8
  bool v235; // w8
  bool v236; // w8
  bool v237; // w8
  int32_t AdjustLimitByStatusUpMaterial; // w20
  int32_t v239; // w0
  bool v241; // w9
  bool v242; // cc
  bool v243; // w8
  bool IsAddParam2Max; // w0
  bool v245; // w8
  bool v246; // w8
  __int64 v247; // x2
  Il2CppObject *v248; // x24
  struct ServantEntity_o *v249; // x9
  __int64 v250; // x20
  __int64 v251; // x22
  int64_t v252; // x28
  bool v253; // w8
  int32_t v254; // w8
  __int64 v255; // x1
  __int64 v256; // x2
  Il2CppObject *v257; // x0
  __int64 v258; // x1
  __int64 v259; // x2
  __int64 v260; // x20
  __int64 v261; // x22
  ServantLimitImageMaster_o *v262; // x24
  int32_t v263; // w28
  bool IsServantLimitCountSeal; // w8
  const MethodInfo *v265; // x1
  __int64 v266; // x2
  UserServantEntity_o *v267; // x9
  __int64 v268; // x20
  __int64 v269; // x22
  int32_t combineLimitId; // w24
  int32_t v271; // w28
  int64_t v272; // x24
  __int64 v273; // x20
  __int64 v274; // x22
  __int64 v275; // x2
  __int64 v276; // x8
  UserItemMaster_o *v277; // x29
  unsigned __int64 v278; // x25
  UserServantEntity_o *v279; // x8
  __int128 v280; // q0
  __int128 v281; // q1
  int32_t v282; // w24
  int32_t v283; // w27
  int v284; // w8
  bool v285; // w8
  bool v286; // w8
  const MethodInfo *v287; // x1
  int32_t v288; // w8
  const MethodInfo_476E8C0 *v289; // x0
  int64_t v290; // x0
  __int64 v291; // x1
  int64_t v292; // x24
  __int64 v293; // x8
  __int64 v294; // x9
  int *v295; // x10
  __int64 v296; // x0
  __int64 v297; // x0
  __int64 v298; // x2
  int64_t v299; // x24
  __int64 v300; // x8
  __int64 v301; // x9
  int *v302; // x10
  __int64 v303; // x0
  __int64 v304; // x0
  __int64 v305; // x1
  __int64 v306; // x2
  UserServantEntity_o *v307; // x9
  __int128 v308; // q0
  __int128 v309; // q1
  __int64 v310; // x20
  int v311; // w9
  int64_t v312; // x24
  __int64 v313; // x8
  __int64 v314; // x9
  int *v315; // x10
  __int64 v316; // x0
  __int64 v317; // x2
  TreasureDvcInfo_o *v318; // x8
  int32_t id; // w24
  int32_t lv; // w20
  int32_t SameSvtNpLvCache; // w0
  const MethodInfo *v322; // x4
  int32_t v323; // w24
  __int64 v324; // x20
  __int64 v325; // x2
  UserServantEntity_o *v326; // x8
  UserRecommendSupportMaster_o *v327; // x24
  __int128 v328; // q0
  __int128 v329; // q1
  int v330; // w8
  Il2CppObject *v331; // x0
  __int128 v332; // q1
  UserServantGrandMaster_o *v333; // x24
  UserServantEntity_o *v334; // x8
  bool IsMaterialTd; // w0
  bool isExceedLvMax; // w8
  bool v337; // w8
  bool v338; // w0
  _BOOL4 isHeroineSvt; // w8
  ServantExceedEntity_o *SvtExceedEnt; // x0
  __int64 v341; // x2
  int32_t *v342; // x26
  CommonConsumeEntity_array *IdEntityList; // x0
  CommonConsumeEntity_array *v344; // x24
  System_Collections_Generic_HashSet_int__o *v345; // x28
  System_Collections_Generic_HashSet_int__o *v346; // x29
  __int64 v347; // x2
  int v348; // w8
  __int64 v349; // x20
  CommonConsumeEntity_o *v350; // x27
  __int64 v351; // x2
  UserServantEntity_o *v352; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v353; // x24
  __int64 v354; // x20
  __int64 v355; // x22
  UserServantEntity_o *v356; // x24
  System_Int32_array *v357; // x28
  __int64 v358; // x1
  __int64 v359; // x2
  bool isExceedFriendshipMax; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c *v361; // x0
  __int64 v362; // x20
  __int64 v363; // x22
  struct ServantEntity_o *v364; // x8
  bool v365; // zf
  char v366; // w8
  UserServantEntity_o *v367; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  System_String_o *v369; // x2
  System_String_o *v370; // x3
  int32_t v371; // w4
  int32_t v372; // w5
  bool v373; // w6
  bool v374; // w7
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  System_String_o *v376; // x2
  System_String_o *v377; // x3
  int32_t v378; // w4
  int32_t v379; // w5
  bool v380; // w6
  bool v381; // w7
  int64_t v382; // x8
  __int64 rarity; // x20
  __int64 v384; // x2
  UserServantEntity_o *v385; // x8
  __int64 v386; // x9
  _BOOL8 v387; // x10
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c *v388; // x0
  __int64 v389; // x20
  __int64 v390; // x21
  __int64 v391; // x2
  struct UserServantEntity_o *v392; // x8
  __int128 v393; // q0
  __int128 v394; // q1
  int v395; // w8
  int64_t v396; // x8
  int32_t maxFriendshipRank; // w20
  int32_t friendshipExceedCount; // w22
  int64_t v399; // x20
  __int64 v400; // x22
  __int64 v401; // x24
  __int64 v402; // x2
  UserItemMaster_o *v403; // x26
  unsigned __int64 v404; // x25
  __int64 v405; // x29
  bool v406; // w8
  int32_t v407; // w0
  int32_t v408; // w24
  int32_t v409; // w29
  int32_t v410; // w28
  int v411; // w22
  int64_t v412; // [xsp+18h] [xbp-318h]
  bool *p_isLimitUpItemNum; // [xsp+20h] [xbp-310h]
  bool *p_isStatusUpSvt; // [xsp+28h] [xbp-308h]
  int64_t v415; // [xsp+28h] [xbp-308h]
  struct IconLabelInfo_o **p_iconLabelInfo2; // [xsp+30h] [xbp-300h]
  UserServantCollectionEntity_o *v417; // [xsp+38h] [xbp-2F8h]
  bool v419; // [xsp+44h] [xbp-2ECh]
  UserServantEntity_o *v420; // [xsp+48h] [xbp-2E8h]
  struct ServantEntity_o **p_servantEntity; // [xsp+58h] [xbp-2D8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v423; // [xsp+60h] [xbp-2D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v424; // [xsp+80h] [xbp-2B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v425; // [xsp+A0h] [xbp-290h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v426; // [xsp+C0h] [xbp-270h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v427; // [xsp+E0h] [xbp-250h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v428; // [xsp+100h] [xbp-230h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v429; // [xsp+120h] [xbp-210h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v430; // [xsp+140h] [xbp-1F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v431; // [xsp+160h] [xbp-1D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v432; // [xsp+180h] [xbp-1B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v433; // [xsp+1A0h] [xbp-190h] BYREF
  __int64 v434; // [xsp+1C0h] [xbp-170h]
  int64_t *v435; // [xsp+1C8h] [xbp-168h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v436; // [xsp+1D0h] [xbp-160h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v437; // [xsp+1F0h] [xbp-140h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v438; // [xsp+210h] [xbp-120h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v439; // [xsp+230h] [xbp-100h]
  UserItemEntity_o *v440; // [xsp+250h] [xbp-E0h] BYREF
  int32_t tdMaxLv; // [xsp+25Ch] [xbp-D4h] BYREF
  int32_t tdLv[2]; // [xsp+260h] [xbp-D0h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+268h] [xbp-C8h] BYREF
  UserItemEntity_o *v444; // [xsp+270h] [xbp-C0h] BYREF
  int32_t addParamMaxAdjust1[2]; // [xsp+278h] [xbp-B8h] BYREF
  int32_t secondMaxAdjustHp[2]; // [xsp+280h] [xbp-B0h] BYREF
  int32_t maxAjustHp[2]; // [xsp+288h] [xbp-A8h] BYREF
  __int64 v448; // [xsp+290h] [xbp-A0h] BYREF
  UserServantCommandCodeEntity_o *v449; // [xsp+298h] [xbp-98h] BYREF
  UserServantCommandCardEntity_o *v450; // [xsp+2A0h] [xbp-90h] BYREF
  int64_t v451; // [xsp+2A8h] [xbp-88h] BYREF
  UserServantCommandCodeEntity_o *entity; // [xsp+2B0h] [xbp-80h] BYREF
  int32_t addParamMaxAdjust2[2]; // [xsp+2B8h] [xbp-78h] BYREF
  int32_t secondMaxAdjustAtk[2]; // [xsp+2C0h] [xbp-70h] BYREF
  int32_t maxAjustAtk[2]; // [xsp+2C8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v456; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v457; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v458; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v459; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v460; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v461; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v462; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v463; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v464; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v465; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v466; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v467; // 0:x0.16

  v16 = isParty;
  if ( (byte_5932195 & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_UserServantLeaderEntity__GetEnumerator__);
    sub_21FFC50(&Method_DataManager_GetMasterData_CombineLimitMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_CombineMaterialMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_FriendshipMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_TreasureDvcMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_UserServantCommandCardMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_UserServantLeaderMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_CommonConsumeMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_ServantLimitMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_SvtCoinMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_UserRecommendSupportMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_UserServantGrandMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_21FFC50(&Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__GetEntity__);
    sub_21FFC50(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
    sub_21FFC50(&Method_DataMasterBase_UserServantLeaderMaster__UserServantLeaderEntity__string__getEntityList__);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_21FFC50(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_UserServantLeaderEntity__TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    sub_21FFC50(&IconLabelInfo_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_int___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_int__TypeInfo);
    sub_21FFC50(&System_Math_TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5932195 = 1;
  }
  *(_QWORD *)maxAjustAtk = 0;
  *(_QWORD *)secondMaxAdjustAtk = 0;
  *(_QWORD *)addParamMaxAdjust2 = 0;
  entity = 0;
  v451 = 0;
  v450 = 0;
  v449 = 0;
  v448 = 0;
  *(_QWORD *)maxAjustHp = 0;
  *(_QWORD *)secondMaxAdjustHp = 0;
  *(_QWORD *)addParamMaxAdjust1 = 0;
  v444 = 0;
  tdInfo = 0;
  *(_QWORD *)tdLv = 0;
  tdMaxLv = 0;
  v440 = 0;
  v17 = (IconLabelInfo_o *)sub_21FFEBC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v17, 0);
  this->fields.iconLabelInfo1 = v17;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.iconLabelInfo1,
    (int32_t)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v24 = (IconLabelInfo_o *)sub_21FFEBC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v24, 0);
  this->fields.iconLabelInfo2 = v24;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.iconLabelInfo2,
    (int32_t)v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  v31 = (System_Collections_Generic_List_int__o *)sub_21FFEBC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v31,
    (const MethodInfo_44328A8 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.enableSkillUp = v31;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.enableSkillUp,
    (int32_t)v31,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  v38 = (System_Collections_Generic_List_int__o *)sub_21FFEBC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v38,
    (const MethodInfo_44328A8 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.enableAppendSkillUp = v38;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.enableAppendSkillUp,
    (int32_t)v38,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  ListViewItem___ctor((ListViewItem_o *)this, 0);
  *(_DWORD *)&this->fields.isStatusUpSvt = 0;
  p_isStatusUpSvt = &this->fields.isStatusUpSvt;
  *(_QWORD *)&this->fields.isLimitUpItemNum = 0;
  p_isLimitUpItemNum = &this->fields.isLimitUpItemNum;
  *(_WORD *)&this->fields.isAllAppendSkillLock = 0;
  this->fields.isChoice = 0;
  this->fields.isMaxSelect = 0;
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
  *(_QWORD *)&this->fields.isAtkUpMax = 0;
  *(_QWORD *)&this->fields.isOverParam2Threshold = 0;
  *(_DWORD *)&this->fields.isNotSelectAddParam2 = 0;
  this->fields.type = type;
  this->fields.index = index;
  this->fields.setupInfo = setupInfo;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.setupInfo,
    (int32_t)setupInfo,
    v45,
    v46,
    v47,
    v48,
    v49,
    v50);
  this->fields.userSvtEntity = userSvtEntity;
  p_userSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userSvtEntity;
  this->fields.isParty = v16;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.userSvtEntity,
    (int32_t)userSvtEntity,
    v52,
    v53,
    v54,
    v55,
    v56,
    v57);
  if ( !userSvtEntity )
    goto LABEL_482;
  ServantEntity = UserServantEntity__GetServantEntity(userSvtEntity, -1, 0);
  this->fields.servantEntity = ServantEntity;
  p_servantEntity = &this->fields.servantEntity;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.servantEntity,
    (int32_t)ServantEntity,
    v61,
    v62,
    v63,
    v64,
    v65,
    v66);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v67, v68);
  v69 = &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  v73 = *(_OWORD *)&userSvtEntity->fields.userId.fields.fakeValue;
  v74 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
  *(_OWORD *)&v439.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v439.fields.fakeValue = v73;
  if ( !v74 )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v70, v71);
  v438 = v439;
  v75 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v438, 0);
  v78 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v79 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  v80 = v75;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v76, v77);
  *(_QWORD *)&v456.fields.currentCryptoKey = v78;
  *(_QWORD *)&v456.fields.fakeValue = v79;
  SelfUserGame = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v456, 0);
  if ( !Master_object )
    goto LABEL_482;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                       (UserServantCollectionMaster_o *)Master_object,
                       v80,
                       SelfUserGame,
                       0);
  SelfUserGame = (int64_t)UserGameMaster__getSelfUserGame(0);
  v412 = SelfUserGame;
  if ( baseUsrSvtData )
  {
    v83 = *p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_482;
    v84 = v83[1];
    v85 = v83[2];
    v86 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v439.fields.currentCryptoKey = v84;
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v439.fields.fakeValue = v85;
    if ( !v86 )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v59, v82);
    v437 = v439;
    v87 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v437, 0);
    v88 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
    v89 = v87;
    *(_OWORD *)&v436.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v436.fields.fakeValue = v88;
    SelfUserGame = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v436, 0);
    v90 = v89 == SelfUserGame;
  }
  else
  {
    v90 = 0;
  }
  v91 = this->fields.servantEntity;
  this->fields.isBaseSvt = v90;
  if ( !v91 )
    goto LABEL_482;
  v92 = *(_QWORD *)&v91->fields.id.fields.currentCryptoKey;
  v93 = *(_QWORD *)&v91->fields.id.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v59, v82);
  *(_QWORD *)&v457.fields.currentCryptoKey = v92;
  *(_QWORD *)&v457.fields.fakeValue = v93;
  SelfUserGame = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v457, 0);
  v94 = this->fields.servantEntity;
  this->fields.svtId = SelfUserGame;
  if ( !v94 )
    goto LABEL_482;
  this->fields.classId = v94->fields.classId;
  this->fields.isHeroineSvt = UserServantEntity__IsHeroine(userSvtEntity, 0);
  SelfUserGame = UserServantEntity__IsEventJoin(userSvtEntity, 0);
  this->fields.isEventJoin = SelfUserGame & 1;
  if ( !EntityDefinitely )
    goto LABEL_482;
  UserServantCollectionEntity__getFriendShipRankInfo(
    EntityDefinitely,
    &this->fields.friendship,
    &this->fields.friendshipMax,
    0);
  this->fields.maxLimitCnt = UserServantEntity__getLimitCntMax(userSvtEntity, 0);
  v97 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(userSvtEntity->fields.limitCount, 0);
  v98 = BalanceConfig_TypeInfo;
  this->fields.currentLimitCnt = v97;
  adjustHp = userSvtEntity->fields.adjustHp;
  if ( !*(&v98->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v98, v95, v96);
    v98 = BalanceConfig_TypeInfo;
  }
  static_fields = v98->static_fields;
  v417 = EntityDefinitely;
  v420 = baseUsrSvtData;
  this->fields.hpReinforceValue = static_fields->StatusUpAdjustHp * adjustHp;
  this->fields.atkReinforceValue = static_fields->StatusUpAdjustAtk * userSvtEntity->fields.adjustAtk;
  UserServantEntity__GetAdjustMaxData(
    userSvtEntity,
    &this->fields.nowMaxHpReinforceValue,
    &this->fields.nowMaxAtkReinforceValue,
    0);
  CombineServantListViewItem__ModifyItem(this, isFavorite, v101);
  CombineServantListViewItem__SetOverwriteStatus(this, v102);
  UserSvtId = CombineServantListViewItem__get_UserSvtId(this, v103);
  EventFortificationDataLogic__SetFortification(
    &this->fields.isFortification,
    &this->fields.fortificationName,
    &this->fields.fortificationDetailName,
    UserSvtId,
    0);
  v105 = this->fields.type;
  if ( v105 <= 0xA && ((1 << v105) & 0x481) != 0 )
  {
    if ( UserServantEntity__GetAdjustMax(
           userSvtEntity,
           &maxAjustAtk[1],
           maxAjustAtk,
           &secondMaxAdjustAtk[1],
           secondMaxAdjustAtk,
           &addParamMaxAdjust2[1],
           addParamMaxAdjust2,
           0) )
    {
      v106 = userSvtEntity->fields.adjustHp;
      v107 = addParamMaxAdjust2[1];
      adjustAtk = userSvtEntity->fields.adjustAtk;
      v109 = addParamMaxAdjust2[0];
      isLevelMax = UserServantEntity__isLevelMax(userSvtEntity, 0);
      if ( adjustAtk >= v109 && v106 >= v107 && isLevelMax )
        this->fields.isLvMax = 1;
    }
    else
    {
      UserServantEntity__isLevelMax(userSvtEntity, 0);
    }
    isLimitCountMax = UserServantEntity__isLimitCountMax(userSvtEntity, 0);
    v112 = (const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__;
    this->fields.isLimitCntMax = isLimitCountMax;
    SelfUserGame = (int64_t)SingletonMonoBehaviour_object___get_Instance(v112);
    if ( !SelfUserGame )
      goto LABEL_482;
    SelfUserGame = (int64_t)DataManager__GetMasterData_object_(
                              (DataManager_o *)SelfUserGame,
                              (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserServantLeaderMaster___);
    if ( !SelfUserGame )
      goto LABEL_482;
    SelfUserGame = *(_QWORD *)(SelfUserGame + 40);
    if ( !SelfUserGame )
      goto LABEL_482;
    Enumerator = (int64_t)System_Collections_ObjectModel_Collection_object___GetEnumerator(
                            (System_Collections_ObjectModel_Collection_T__o *)SelfUserGame,
                            (const MethodInfo_3E61068 *)Method_System_Collections_ObjectModel_Collection_UserServantLeaderEntity__GetEnumerator__);
    v451 = Enumerator;
    v434 = 0;
    v435 = &v451;
    while ( 1 )
    {
      v115 = v451;
      if ( !v451 )
        sub_21FFECC(Enumerator, v114);
      v116 = *(_QWORD *)v451;
      v117 = *(unsigned __int16 *)(*(_QWORD *)v451 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v451 + 302LL) )
      {
        v118 = (int *)(*(_QWORD *)(v116 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v118 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v117;
          v118 += 4;
          if ( !v117 )
            goto LABEL_41;
        }
        v119 = v116 + 16LL * *v118 + 312;
      }
      else
      {
LABEL_41:
        v119 = sub_2237E2C(v451, System_Collections_IEnumerator_TypeInfo, 0);
      }
      v120 = (*(__int64 (__fastcall **)(int64_t, _QWORD))v119)(v115, *(_QWORD *)(v119 + 8));
      if ( (v120 & 1) == 0 )
        break;
      v122 = v451;
      if ( !v451 )
        sub_21FFECC(v120, v114);
      v123 = *(_QWORD *)v451;
      v124 = *(unsigned __int16 *)(*(_QWORD *)v451 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v451 + 302LL) )
      {
        v125 = (int *)(*(_QWORD *)(v123 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_UserServantLeaderEntity__c **)v125 - 1) != System_Collections_Generic_IEnumerator_UserServantLeaderEntity__TypeInfo )
        {
          --v124;
          v125 += 4;
          if ( !v124 )
            goto LABEL_49;
        }
        v126 = v123 + 16LL * *v125 + 312;
      }
      else
      {
LABEL_49:
        v126 = sub_2237E2C(v451, System_Collections_Generic_IEnumerator_UserServantLeaderEntity__TypeInfo, 0);
      }
      v127 = (*(__int64 (__fastcall **)(int64_t, _QWORD))v126)(v122, *(_QWORD *)(v126 + 8));
      if ( !v127 )
        sub_21FFECC(0, v128);
      v130 = *p_userSvtEntity;
      if ( !*p_userSvtEntity )
        sub_21FFECC(v127, v128);
      v131 = v130[1];
      v132 = v130[2];
      v133 = *(_QWORD *)(v127 + 56);
      v134 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v439.fields.currentCryptoKey = v131;
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v439.fields.fakeValue = v132;
      if ( !v134 )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v128, v129);
      v433 = v439;
      Enumerator = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v433, 0);
      if ( v133 == Enumerator )
      {
        this->fields.isUseSupport = 1;
        break;
      }
    }
    v135 = v451;
    if ( v451 )
    {
      v136 = *(_QWORD *)v451;
      v137 = *(unsigned __int16 *)(*(_QWORD *)v451 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v451 + 302LL) )
      {
        v138 = (int *)(*(_QWORD *)(v136 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v138 - 1) != System_IDisposable_TypeInfo )
        {
          --v137;
          v138 += 4;
          if ( !v137 )
            goto LABEL_62;
        }
        v139 = v136 + 16LL * *v138 + 312;
      }
      else
      {
LABEL_62:
        v139 = sub_2237E2C(v451, System_IDisposable_TypeInfo, 0);
      }
      (*(void (__fastcall **)(int64_t, _QWORD))v139)(v135, *(_QWORD *)(v139 + 8));
    }
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v114, v121);
    SelfUserGame = (int64_t)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserRecommendSupportMaster___);
    v141 = *p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_482;
    v142 = (UserRecommendSupportMaster_o *)SelfUserGame;
    v143 = v141[1];
    v144 = v141[2];
    v145 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v439.fields.currentCryptoKey = v143;
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v439.fields.fakeValue = v144;
    if ( !v145 )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v59, v140);
    v432 = v439;
    SelfUserGame = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v432, 0);
    if ( !v142 )
      goto LABEL_482;
    this->fields.isUseRecommendSupport = UserRecommendSupportMaster__IsSettingServant(v142, SelfUserGame, 0, 0);
    v146 = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserServantGrandMaster___);
    v147 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
    v148 = (UserServantGrandMaster_o *)v146;
    *(_OWORD *)&v431.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v431.fields.fakeValue = v147;
    SelfUserGame = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v431, 0);
    if ( !v148 )
      goto LABEL_482;
    IsSettingServant = UserServantGrandMaster__IsSettingServant(v148, SelfUserGame, 0);
    SelfUserGame = (int64_t)this->fields.userSvtEntity;
    this->fields.isGrandSvt = IsSettingServant;
    if ( !SelfUserGame )
      goto LABEL_482;
    if ( UserServantEntity__IsCombineExp((UserServantEntity_o *)SelfUserGame, 0) )
      this->fields.isExpUpSvt = 1;
    SelfUserGame = (int64_t)*p_servantEntity;
    if ( !*p_servantEntity )
      goto LABEL_482;
    if ( ServantEntity__get_IsStatusUp((ServantEntity_o *)SelfUserGame, 0) )
      *p_isStatusUpSvt = 1;
    SelfUserGame = (int64_t)*p_servantEntity;
    if ( !*p_servantEntity )
      goto LABEL_482;
    if ( ServantEntity__get_IsServantMaterialTd((ServantEntity_o *)SelfUserGame, 0) )
      this->fields.isMaterialTdSvt = 1;
    SelfUserGame = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !SelfUserGame )
      goto LABEL_482;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)SelfUserGame,
                          (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v59, v150);
    if ( !byte_5931D52 )
    {
      sub_21FFC50(&NetworkManager_TypeInfo);
      byte_5931D52 = 1;
    }
    SelfUserGame = (int64_t)NetworkManager_TypeInfo;
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v59, v150);
      SelfUserGame = (int64_t)NetworkManager_TypeInfo;
    }
    v152 = *p_servantEntity;
    if ( !*p_servantEntity )
      goto LABEL_482;
    v153 = *(_QWORD *)&v152->fields.id.fields.currentCryptoKey;
    v154 = *(_QWORD *)&v152->fields.id.fields.fakeValue;
    v155 = *(_QWORD *)(*(_QWORD *)(SelfUserGame + 184) + 64LL);
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v59, v150);
    *(_QWORD *)&v458.fields.currentCryptoKey = v153;
    *(_QWORD *)&v458.fields.fakeValue = v154;
    SelfUserGame = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v458, 0);
    if ( !MasterData_object )
      goto LABEL_482;
    if ( UserServantCommandCodeMaster__TryGetEntity(
           (UserServantCommandCodeMaster_o *)MasterData_object,
           &entity,
           v155,
           (int)SelfUserGame,
           0) )
    {
      SelfUserGame = (int64_t)entity;
      if ( !entity )
        goto LABEL_482;
      IsEquipedCommandCode = UserServantCommandCodeEntity__IsEquipedCommandCode(entity, 0);
      SelfUserGame = (int64_t)entity;
      this->fields.isEquipedCmdCard = IsEquipedCommandCode;
      if ( !SelfUserGame )
        goto LABEL_482;
      this->fields.isCmdCardSlotOpen = UserServantCommandCodeEntity__IsCommandCardSlotOpen(
                                         (UserServantCommandCodeEntity_o *)SelfUserGame,
                                         0);
    }
    v105 = this->fields.type;
    if ( v105 == 10 )
    {
      SelfUserGame = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !SelfUserGame )
        goto LABEL_482;
      v158 = DataManager__GetMasterData_object_(
               (DataManager_o *)SelfUserGame,
               (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserServantCommandCardMaster___);
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v59, v157);
      if ( !byte_5931D52 )
      {
        sub_21FFC50(&NetworkManager_TypeInfo);
        byte_5931D52 = 1;
      }
      SelfUserGame = (int64_t)NetworkManager_TypeInfo;
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v59, v157);
        SelfUserGame = (int64_t)NetworkManager_TypeInfo;
      }
      v159 = *p_servantEntity;
      if ( !*p_servantEntity )
        goto LABEL_482;
      v160 = *(_QWORD *)&v159->fields.id.fields.currentCryptoKey;
      v161 = *(_QWORD *)&v159->fields.id.fields.fakeValue;
      v162 = *(_QWORD *)(*(_QWORD *)(SelfUserGame + 184) + 64LL);
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v59, v157);
      *(_QWORD *)&v459.fields.currentCryptoKey = v160;
      *(_QWORD *)&v459.fields.fakeValue = v161;
      SelfUserGame = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v459, 0);
      if ( !v158 )
        goto LABEL_482;
      SelfUserGame = UserServantCommandCardMaster__TryGetEntity(
                       (UserServantCommandCardMaster_o *)v158,
                       &v450,
                       v162,
                       (int)SelfUserGame,
                       0);
      if ( (SelfUserGame & 1) != 0 )
      {
        if ( !v450 )
          goto LABEL_482;
        commandCardParam = v450->fields.commandCardParam;
        if ( commandCardParam )
        {
          max_length = commandCardParam->max_length;
          if ( max_length >= 1 )
          {
            v166 = 0;
            while ( 1 )
            {
              if ( (unsigned int)v166 >= max_length )
                goto LABEL_497;
              SelfUserGame = (int64_t)BalanceConfig_TypeInfo;
              v167 = v69;
              v168 = commandCardParam->m_Items[v166];
              if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v59, v163);
                SelfUserGame = (int64_t)BalanceConfig_TypeInfo;
              }
              if ( v168 < *(_DWORD *)(*(_QWORD *)(SelfUserGame + 184) + 772LL) )
                break;
              this->fields.isCommandCardExceedMax = 1;
              ++v166;
              v69 = v167;
              max_length = commandCardParam->max_length;
              if ( (int)v166 >= max_length )
                goto LABEL_120;
            }
            this->fields.isCommandCardExceedMax = 0;
            v69 = v167;
          }
        }
      }
LABEL_120:
      v105 = this->fields.type;
    }
  }
  v419 = isMtSvt;
  if ( v105 == 1 )
  {
    v169 = (const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__;
    this->fields.isMaterialSvt = v419;
    SelfUserGame = (int64_t)SingletonMonoBehaviour_object___get_Instance(v169);
    if ( !SelfUserGame )
      goto LABEL_482;
    SelfUserGame = (int64_t)DataManager__GetMasterData_object_(
                              (DataManager_o *)SelfUserGame,
                              (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserServantLeaderMaster___);
    if ( !SelfUserGame )
      goto LABEL_482;
    SelfUserGame = *(_QWORD *)(SelfUserGame + 40);
    if ( !SelfUserGame )
      goto LABEL_482;
    v170 = (int64_t)System_Collections_ObjectModel_Collection_object___GetEnumerator(
                      (System_Collections_ObjectModel_Collection_T__o *)SelfUserGame,
                      (const MethodInfo_3E61068 *)Method_System_Collections_ObjectModel_Collection_UserServantLeaderEntity__GetEnumerator__);
    v451 = v170;
    v434 = 0;
    v435 = &v451;
    while ( 1 )
    {
      v172 = v451;
      if ( !v451 )
        sub_21FFECC(v170, v171);
      v173 = *(_QWORD *)v451;
      v174 = *(unsigned __int16 *)(*(_QWORD *)v451 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v451 + 302LL) )
      {
        v175 = (int *)(*(_QWORD *)(v173 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v175 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v174;
          v175 += 4;
          if ( !v174 )
            goto LABEL_131;
        }
        v176 = v173 + 16LL * *v175 + 312;
      }
      else
      {
LABEL_131:
        v176 = sub_2237E2C(v451, System_Collections_IEnumerator_TypeInfo, 0);
      }
      v177 = (*(__int64 (__fastcall **)(int64_t, _QWORD))v176)(v172, *(_QWORD *)(v176 + 8));
      if ( (v177 & 1) == 0 )
        break;
      v179 = v451;
      if ( !v451 )
        sub_21FFECC(v177, v171);
      v180 = *(_QWORD *)v451;
      v181 = *(unsigned __int16 *)(*(_QWORD *)v451 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v451 + 302LL) )
      {
        v182 = (int *)(*(_QWORD *)(v180 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_UserServantLeaderEntity__c **)v182 - 1) != System_Collections_Generic_IEnumerator_UserServantLeaderEntity__TypeInfo )
        {
          --v181;
          v182 += 4;
          if ( !v181 )
            goto LABEL_139;
        }
        v183 = v180 + 16LL * *v182 + 312;
      }
      else
      {
LABEL_139:
        v183 = sub_2237E2C(v451, System_Collections_Generic_IEnumerator_UserServantLeaderEntity__TypeInfo, 0);
      }
      v184 = (*(__int64 (__fastcall **)(int64_t, _QWORD))v183)(v179, *(_QWORD *)(v183 + 8));
      if ( !v184 )
        sub_21FFECC(0, v185);
      v187 = *p_userSvtEntity;
      if ( !*p_userSvtEntity )
        sub_21FFECC(v184, v185);
      v188 = v187[1];
      v189 = v187[2];
      v190 = *(_QWORD *)(v184 + 56);
      v191 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v439.fields.currentCryptoKey = v188;
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v439.fields.fakeValue = v189;
      if ( !v191 )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v185, v186);
      v430 = v439;
      v170 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v430, 0);
      if ( v190 == v170 )
      {
        this->fields.isUseSupport = 1;
        break;
      }
    }
    v192 = v451;
    if ( v451 )
    {
      v193 = *(_QWORD *)v451;
      v194 = *(unsigned __int16 *)(*(_QWORD *)v451 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v451 + 302LL) )
      {
        v195 = (int *)(*(_QWORD *)(v193 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v195 - 1) != System_IDisposable_TypeInfo )
        {
          --v194;
          v195 += 4;
          if ( !v194 )
            goto LABEL_152;
        }
        v196 = v193 + 16LL * *v195 + 312;
      }
      else
      {
LABEL_152:
        v196 = sub_2237E2C(v451, System_IDisposable_TypeInfo, 0);
      }
      (*(void (__fastcall **)(int64_t, _QWORD))v196)(v192, *(_QWORD *)(v196 + 8));
    }
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v171, v178);
    SelfUserGame = (int64_t)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserRecommendSupportMaster___);
    v198 = *p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_482;
    v199 = (UserRecommendSupportMaster_o *)SelfUserGame;
    v200 = v198[1];
    v201 = v198[2];
    v202 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v439.fields.currentCryptoKey = v200;
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v439.fields.fakeValue = v201;
    if ( !v202 )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v59, v197);
    v429 = v439;
    SelfUserGame = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v429, 0);
    if ( !v199 )
      goto LABEL_482;
    this->fields.isUseRecommendSupport = UserRecommendSupportMaster__IsSettingServant(v199, SelfUserGame, 0, 0);
    v203 = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserServantGrandMaster___);
    v204 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
    v205 = (UserServantGrandMaster_o *)v203;
    *(_OWORD *)&v428.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v428.fields.fakeValue = v204;
    SelfUserGame = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v428, 0);
    if ( !v205 )
      goto LABEL_482;
    v206 = UserServantGrandMaster__IsSettingServant(v205, SelfUserGame, 0);
    v207 = (const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__;
    this->fields.isGrandSvt = v206;
    SelfUserGame = (int64_t)SingletonMonoBehaviour_object___get_Instance(v207);
    if ( !SelfUserGame )
      goto LABEL_482;
    SelfUserGame = (int64_t)DataManager__GetMasterData_object_(
                              (DataManager_o *)SelfUserGame,
                              (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_CombineMaterialMaster___);
    if ( !*p_servantEntity )
      goto LABEL_482;
    if ( !*p_userSvtEntity )
      goto LABEL_482;
    if ( !SelfUserGame )
      goto LABEL_482;
    SelfUserGame = (int64_t)CombineMaterialMaster__GetEntity(
                              (CombineMaterialMaster_o *)SelfUserGame,
                              (*p_servantEntity)->fields.combineMaterialId,
                              (*p_userSvtEntity)[25].fields.currentCryptoKey,
                              0);
    if ( !SelfUserGame )
      goto LABEL_482;
    this->fields.materialExp = *(_DWORD *)(SelfUserGame + 24);
    if ( v420 )
    {
      v209 = *p_userSvtEntity;
      if ( !*p_userSvtEntity )
        goto LABEL_482;
      v210 = *(_QWORD *)&v209[5].fields.currentCryptoKey;
      v211 = *(_QWORD *)&v209[5].fields.fakeValue;
      if ( !*(&(*v69)->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(*v69, v59, v208);
      *(_QWORD *)&v460.fields.currentCryptoKey = v210;
      *(_QWORD *)&v460.fields.fakeValue = v211;
      v212 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v460, 0);
      if ( v212 == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v420->fields.svtId, 0) )
        this->fields.isLimitCntTarget = 1;
      SelfUserGame = UserServantEntity__getSvtClassId(v420, 1, 0, 0);
      if ( !*p_userSvtEntity )
        goto LABEL_482;
      if ( UserServantEntity__getSvtClassId((UserServantEntity_o *)*p_userSvtEntity, 1, 0, 0) == (_DWORD)SelfUserGame )
        this->fields.isSameClass = 1;
      SelfUserGame = (int64_t)*p_servantEntity;
      if ( !*p_servantEntity )
        goto LABEL_482;
      if ( ServantEntity__get_IsStatusUp((ServantEntity_o *)SelfUserGame, 0) )
        goto LABEL_180;
      SelfUserGame = (int64_t)*p_servantEntity;
      if ( !*p_servantEntity )
        goto LABEL_482;
      if ( ServantEntity__get_IsCombineMaterial((ServantEntity_o *)SelfUserGame, 0) )
      {
LABEL_180:
        SelfUserGame = (int64_t)*p_servantEntity;
        if ( !*p_servantEntity )
          goto LABEL_482;
        if ( ServantEntity__get_IsAllClass((ServantEntity_o *)SelfUserGame, 0) )
          this->fields.isSameClass = 1;
      }
      v213 = UserServantEntity__isLevelMax(v420, 0);
      v214 = (const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__;
      this->fields.isBaseLvMax = v213;
      SelfUserGame = (int64_t)SingletonMonoBehaviour_object___get_Instance(v214);
      if ( !SelfUserGame )
        goto LABEL_482;
      SelfUserGame = (int64_t)DataManager__GetMasterData_object_(
                                (DataManager_o *)SelfUserGame,
                                (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantClassMaster___);
      if ( !*p_servantEntity )
        goto LABEL_482;
      if ( !SelfUserGame )
        goto LABEL_482;
      SelfUserGame = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)SelfUserGame,
                                (*p_servantEntity)->fields.classId,
                                (const MethodInfo_3EDD388 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
      if ( !SelfUserGame )
        goto LABEL_482;
      HIDWORD(v448) = *(_DWORD *)(SelfUserGame + 56);
      SvtClassId = UserServantEntity__getSvtClassId(v420, 0, 0, 0);
      SvtClassGroupType = UserServantEntity__getSvtClassGroupType(v420, SvtClassId, 0);
      if ( System_Int32__Equals_76925180((int32_t)&v448 + 4, 3, 0)
        || System_Int32__Equals_76925180((int32_t)&v448 + 4, SvtClassGroupType, 0) && this->fields.isSameClass )
      {
        materialExp = this->fields.materialExp;
        v218 = BalanceConfig_TypeInfo;
        if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v59, v208);
          v218 = BalanceConfig_TypeInfo;
        }
        SameClassExp = v218->static_fields->SameClassExp;
        if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v59, v208);
        v220 = (double)materialExp * (double)SameClassExp / 1000.0;
        v221 = vcvtpd_s64_f64(v220);
        if ( ceil(v220) == INFINITY )
          v222 = 0x80000000;
        else
          v222 = v221;
        this->fields.materialExp = v222;
      }
    }
    else
    {
      this->fields.isLimitCntTarget = 0;
    }
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v59, v208);
    SelfUserGame = (int64_t)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ServantLimitMaster___);
    v224 = (UserServantEntity_o *)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_482;
    v225 = (ServantLimitMaster_o *)SelfUserGame;
    v226 = *(_QWORD *)&v224->fields.svtId.fields.currentCryptoKey;
    v227 = *(_QWORD *)&v224->fields.svtId.fields.fakeValue;
    if ( !*(&(*v69)->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(*v69, v59, v223);
    *(_QWORD *)&v461.fields.currentCryptoKey = v226;
    *(_QWORD *)&v461.fields.fakeValue = v227;
    SelfUserGame = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v461, 0);
    if ( !*p_userSvtEntity )
      goto LABEL_482;
    v228 = SelfUserGame;
    SelfUserGame = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412((*p_userSvtEntity)[6], 0);
    if ( !v225 )
      goto LABEL_482;
    SelfUserGame = (int64_t)ServantLimitMaster__GetEntity(v225, v228, SelfUserGame, 0);
    if ( !SelfUserGame )
      goto LABEL_482;
    this->fields.hpBase = *(_DWORD *)(SelfUserGame + 36);
    v229 = *(_DWORD *)(SelfUserGame + 44);
    SelfUserGame = (int64_t)this->fields.servantEntity;
    this->fields.atkBase = v229;
    if ( !SelfUserGame )
      goto LABEL_482;
    SelfUserGame = ServantEntity__get_IsStatusUp((ServantEntity_o *)SelfUserGame, 0);
    if ( (SelfUserGame & 1) != 0 )
    {
      *p_isStatusUpSvt = 1;
      if ( !v420 )
        goto LABEL_482;
      v230 = UserServantEntity__getSvtClassId(v420, 0, 0, 0);
      SelfUserGame = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !SelfUserGame )
        goto LABEL_482;
      SelfUserGame = (int64_t)DataManager__GetMasterData_object_(
                                (DataManager_o *)SelfUserGame,
                                (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantClassMaster___);
      if ( !*p_servantEntity )
        goto LABEL_482;
      if ( !SelfUserGame )
        goto LABEL_482;
      SelfUserGame = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)SelfUserGame,
                                (*p_servantEntity)->fields.classId,
                                (const MethodInfo_3EDD388 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
      if ( !SelfUserGame )
        goto LABEL_482;
      v231 = *p_servantEntity;
      LODWORD(v448) = *(_DWORD *)(SelfUserGame + 56);
      if ( !v231 )
        goto LABEL_482;
      if ( v231->fields.classId == v230 || System_Int32__Equals_76925180((int32_t)&v448, 3, 0) )
      {
        this->fields.isCanStUp = 1;
        v232 = UserServantEntity__IsAdjustAtkMax(v420, 0) && this->fields.atkBase > 0;
        this->fields.isAtkUpMax = v232;
        v233 = UserServantEntity__IsAdjustHpMax(v420, 0) && this->fields.hpBase > 0;
        this->fields.isHpUpMax = v233;
        v234 = UserServantEntity__IsSecondAdjustAtkMax(v420, 0) && this->fields.atkBase > 0;
        this->fields.isParam2StageFull = v234;
        v235 = UserServantEntity__IsSecondAdjustHpMax(v420, 0) && this->fields.hpBase > 0;
        this->fields.isParam1StageFull = v235;
        v236 = UserServantEntity__IsAdjustAtkMaxByStatusUpMaterial(v420, userSvtEntity, 0) && this->fields.atkBase > 0;
        this->fields.isAtkSecondUpMax = v236;
        v237 = UserServantEntity__IsAdjustHpMaxByStatusUpMaterial(v420, userSvtEntity, 0) && this->fields.hpBase > 0;
        this->fields.isHpSecondUpMax = v237;
        UserServantEntity__GetAdjustMax(
          v420,
          &maxAjustHp[1],
          maxAjustHp,
          &secondMaxAdjustHp[1],
          secondMaxAdjustHp,
          &addParamMaxAdjust1[1],
          addParamMaxAdjust1,
          0);
        AdjustLimitByStatusUpMaterial = UserServantEntity__GetAdjustLimitByStatusUpMaterial(v420, userSvtEntity, 1, 0);
        v239 = UserServantEntity__GetAdjustLimitByStatusUpMaterial(v420, userSvtEntity, 0, 0);
        v241 = this->fields.hpBase > 0 && AdjustLimitByStatusUpMaterial > secondMaxAdjustHp[1];
        v242 = this->fields.atkBase <= 0 || v239 <= secondMaxAdjustHp[0];
        this->fields.isOverParam1Threshold = v241;
        v243 = !v242;
        this->fields.isOverParam2Threshold = v243;
        IsAddParam2Max = UserServantEntity__IsAddParam2Max(v420, 0);
        v245 = 0;
        if ( IsAddParam2Max )
          v245 = this->fields.atkBase > 0;
        this->fields.isAddParam2Max = v245;
        v246 = UserServantEntity__IsAddParam1Max(v420, 0) && this->fields.hpBase > 0;
        this->fields.isAddParam1Max = v246;
      }
    }
    SelfUserGame = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !SelfUserGame )
      goto LABEL_482;
    v248 = DataManager__GetMasterData_object_(
             (DataManager_o *)SelfUserGame,
             (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v59, v247);
    if ( !byte_5931D52 )
    {
      sub_21FFC50(&NetworkManager_TypeInfo);
      byte_5931D52 = 1;
    }
    SelfUserGame = (int64_t)NetworkManager_TypeInfo;
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v59, v247);
      SelfUserGame = (int64_t)NetworkManager_TypeInfo;
    }
    v249 = *p_servantEntity;
    if ( !*p_servantEntity )
      goto LABEL_482;
    v250 = *(_QWORD *)&v249->fields.id.fields.currentCryptoKey;
    v251 = *(_QWORD *)&v249->fields.id.fields.fakeValue;
    v252 = *(_QWORD *)(*(_QWORD *)(SelfUserGame + 184) + 64LL);
    if ( !*(&(*v69)->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(*v69, v59, v247);
    *(_QWORD *)&v462.fields.currentCryptoKey = v250;
    *(_QWORD *)&v462.fields.fakeValue = v251;
    SelfUserGame = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v462, 0);
    if ( !v248 )
LABEL_482:
      sub_21FFECC(SelfUserGame, v59);
    if ( UserServantCommandCodeMaster__TryGetEntity(
           (UserServantCommandCodeMaster_o *)v248,
           &v449,
           v252,
           (int)SelfUserGame,
           0) )
    {
      SelfUserGame = (int64_t)v449;
      if ( !v449 )
        goto LABEL_482;
      v253 = UserServantCommandCodeEntity__IsEquipedCommandCode(v449, 0);
      SelfUserGame = (int64_t)v449;
      this->fields.isEquipedCmdCard = v253;
      if ( !SelfUserGame )
        goto LABEL_482;
      this->fields.isCmdCardSlotOpen = UserServantCommandCodeEntity__IsCommandCardSlotOpen(
                                         (UserServantCommandCodeEntity_o *)SelfUserGame,
                                         0);
    }
  }
  v254 = this->fields.type;
  if ( v254 == 9 )
  {
    v285 = UserServantEntity__isLimitCountMax(userSvtEntity, 0);
    SelfUserGame = (int64_t)this->fields.userSvtEntity;
    this->fields.isLimitCntMax = v285;
    if ( SelfUserGame )
    {
      v286 = UserServantEntity__isLevelMax((UserServantEntity_o *)SelfUserGame, 0);
      SelfUserGame = (int64_t)this->fields.userSvtEntity;
      this->fields.isLvMax = v286;
      if ( SelfUserGame )
      {
        this->fields.isIgnoreCombineLimitSpecial = UserServantEntity__IsIgnoreCombineLimitSpecial(
                                                     (UserServantEntity_o *)SelfUserGame,
                                                     0);
        this->fields.isSealCombineLimit = CombineServantListViewItem__GetSealCombineLimit(this, v287);
        goto LABEL_305;
      }
    }
    goto LABEL_482;
  }
  if ( v254 != 2 )
    goto LABEL_306;
  this->fields.isLimitCntMax = UserServantEntity__isLimitCountMax(userSvtEntity, 0);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v255, v256);
  v257 = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  v260 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v261 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  v262 = (ServantLimitImageMaster_o *)v257;
  if ( !*(&(*v69)->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(*v69, v258, v259);
  *(_QWORD *)&v463.fields.currentCryptoKey = v260;
  *(_QWORD *)&v463.fields.fakeValue = v261;
  v263 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v463, 0);
  SelfUserGame = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(
                   userSvtEntity->fields.limitCount,
                   0);
  if ( !v262 )
    goto LABEL_482;
  IsServantLimitCountSeal = ServantLimitImageMaster__IsServantLimitCountSeal(v262, v263, SelfUserGame, 0);
  SelfUserGame = (int64_t)this->fields.userSvtEntity;
  this->fields.isSealedLimitCount = IsServantLimitCountSeal;
  if ( !SelfUserGame )
    goto LABEL_482;
  this->fields.isLvMax = UserServantEntity__isLevelMax((UserServantEntity_o *)SelfUserGame, 0);
  SelfUserGame = CombineServantListViewItem__GetSealCombineLimit(this, v265);
  this->fields.isSealCombineLimit = SelfUserGame & 1;
  if ( this->fields.isHeroineSvt )
    goto LABEL_305;
  if ( !*p_servantEntity )
    goto LABEL_482;
  v267 = (UserServantEntity_o *)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_482;
  v268 = *(_QWORD *)&v267->fields.limitCount.fields.currentCryptoKey;
  v269 = *(_QWORD *)&v267->fields.limitCount.fields.fakeValue;
  combineLimitId = (*p_servantEntity)->fields.combineLimitId;
  if ( !*(&(*v69)->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(*v69, v59, v266);
  *(_QWORD *)&v464.fields.currentCryptoKey = v268;
  *(_QWORD *)&v464.fields.fakeValue = v269;
  v271 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v464, 0);
  SelfUserGame = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_482;
  SelfUserGame = (int64_t)DataManager__GetMasterData_object_(
                            (DataManager_o *)SelfUserGame,
                            (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_CombineLimitMaster___);
  if ( !SelfUserGame )
    goto LABEL_482;
  SelfUserGame = (int64_t)CombineLimitMaster__GetEntity((CombineLimitMaster_o *)SelfUserGame, combineLimitId, v271, 0);
  if ( !SelfUserGame )
    goto LABEL_482;
  v272 = SelfUserGame;
  v274 = *(_QWORD *)(SelfUserGame + 32);
  v273 = *(_QWORD *)(SelfUserGame + 40);
  SelfUserGame = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_482;
  v415 = v272;
  SelfUserGame = (int64_t)DataManager__GetMasterData_object_(
                            (DataManager_o *)SelfUserGame,
                            (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !v273 )
    goto LABEL_482;
  v276 = *(_QWORD *)(v273 + 24);
  if ( (int)v276 < 1 )
    goto LABEL_470;
  v277 = (UserItemMaster_o *)SelfUserGame;
  v278 = 0;
  while ( 1 )
  {
    if ( v278 >= (unsigned int)v276 )
      goto LABEL_497;
    if ( !v274 )
      goto LABEL_482;
    if ( v278 >= *(unsigned int *)(v274 + 24) )
      goto LABEL_497;
    v279 = (UserServantEntity_o *)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_482;
    v280 = *(_OWORD *)&v279->fields.userId.fields.currentCryptoKey;
    v281 = *(_OWORD *)&v279->fields.userId.fields.fakeValue;
    v282 = *(_DWORD *)(v273 + 32 + 4 * v278);
    v283 = *(_DWORD *)(v274 + 32 + 4 * v278);
    v284 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
    *(_OWORD *)&v439.fields.currentCryptoKey = v280;
    *(_OWORD *)&v439.fields.fakeValue = v281;
    if ( !v284 )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v59, v275);
    v427 = v439;
    SelfUserGame = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v427, 0);
    if ( !v277 )
      goto LABEL_482;
    SelfUserGame = UserItemMaster__TryGetEntity(v277, &v444, SelfUserGame, v282, 0);
    if ( (SelfUserGame & 1) == 0 )
      goto LABEL_469;
    if ( !v444 )
      goto LABEL_482;
    if ( v282 == v444->fields.itemId )
      break;
LABEL_300:
    LODWORD(v276) = *(_DWORD *)(v273 + 24);
    if ( (__int64)++v278 >= (int)v276 )
      goto LABEL_470;
  }
  if ( v283 <= v444->fields.num )
  {
    *p_isLimitUpItemNum = 1;
    goto LABEL_300;
  }
LABEL_469:
  *p_isLimitUpItemNum = 0;
LABEL_470:
  if ( !v412 )
    goto LABEL_482;
  if ( *(_QWORD *)(v412 + 96) < *(int *)(v415 + 24) )
    *p_isLimitUpItemNum = 0;
LABEL_305:
  v254 = this->fields.type;
LABEL_306:
  if ( v254 == 3 )
  {
    CombineServantListViewItem__SetSkillInfo(this, v59);
    v254 = this->fields.type;
  }
  if ( (unsigned int)(v254 - 11) <= 1 )
  {
    CombineServantListViewItem__SetAppendSkillInfo(this, v59);
    v254 = this->fields.type;
  }
  if ( v254 == 4 && !this->fields.isHeroineSvt )
  {
    SelfUserGame = (int64_t)*p_userSvtEntity;
    if ( *p_userSvtEntity )
    {
      SelfUserGame = UserServantEntity__getTreasureDeviceInfo(
                       (UserServantEntity_o *)SelfUserGame,
                       &tdInfo,
                       -1,
                       -1,
                       0,
                       0);
      v318 = tdInfo;
      this->fields.isTdLvMax = 1;
      if ( v318 )
      {
        id = v318->fields.id;
        if ( id >= 1 )
        {
          lv = v318->fields.lv;
          SelfUserGame = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !SelfUserGame )
            goto LABEL_482;
          SelfUserGame = (int64_t)DataManager__GetMasterData_object_(
                                    (DataManager_o *)SelfUserGame,
                                    (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
          if ( !SelfUserGame )
            goto LABEL_482;
          SelfUserGame = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)SelfUserGame,
                                    id,
                                    (const MethodInfo_3EDD388 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
          if ( !SelfUserGame )
            goto LABEL_482;
          if ( lv < *(_DWORD *)(SelfUserGame + 48) )
            this->fields.isTdLvMax = 0;
        }
        if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v59, v317);
        SelfUserGame = (int64_t)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserServantMaster___);
        if ( SelfUserGame )
        {
          SameSvtNpLvCache = UserServantMaster__getSameSvtNpLvCache(
                               (UserServantMaster_o *)SelfUserGame,
                               (UserServantEntity_o *)*p_userSvtEntity,
                               &cachedUserServantNpLvDict,
                               0);
          if ( SameSvtNpLvCache < 1 || this->fields.isTdLvMax )
            goto LABEL_312;
          v323 = SameSvtNpLvCache;
          SelfUserGame = CombineServantListViewItem__GetNpInfo(this, &tdLv[1], tdLv, &tdMaxLv, v322);
          if ( v412 )
          {
            v324 = *(_QWORD *)(v412 + 96);
            if ( v324 > 1200000 )
            {
              this->fields.isSameSvt = 1;
              goto LABEL_312;
            }
            SelfUserGame = (int64_t)*p_userSvtEntity;
            if ( *p_userSvtEntity )
            {
              v407 = UserServantEntity__checkTreasureDeviceLevelUp((UserServantEntity_o *)SelfUserGame, v323, 0);
              v408 = tdLv[0];
              if ( tdLv[0] >= v407 )
              {
                v411 = 0;
              }
              else
              {
                v409 = tdLv[1];
                v410 = v407;
                v411 = 0;
                do
                {
                  SelfUserGame = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                  if ( !SelfUserGame )
                    goto LABEL_482;
                  SelfUserGame = (int64_t)DataManager__GetMasterData_object_(
                                            (DataManager_o *)SelfUserGame,
                                            (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
                  if ( !SelfUserGame )
                    goto LABEL_482;
                  SelfUserGame = (int64_t)TreasureDvcLvMaster__GetEntity(
                                            (TreasureDvcLvMaster_o *)SelfUserGame,
                                            v409,
                                            v408,
                                            0);
                  if ( SelfUserGame )
                    v411 += *(_DWORD *)(SelfUserGame + 92);
                  ++v408;
                }
                while ( v410 != v408 );
                if ( !this )
                  goto LABEL_482;
              }
              this->fields.isSameSvt = v324 >= v411;
              goto LABEL_312;
            }
          }
        }
      }
    }
    goto LABEL_482;
  }
LABEL_312:
  v288 = this->fields.type;
  if ( v288 != 5 )
    goto LABEL_374;
  v289 = (const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__;
  this->fields.isMaterialSvt = v419;
  SelfUserGame = (int64_t)SingletonMonoBehaviour_object___get_Instance(v289);
  if ( !SelfUserGame )
    goto LABEL_482;
  SelfUserGame = (int64_t)DataManager__GetMasterData_object_(
                            (DataManager_o *)SelfUserGame,
                            (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserServantLeaderMaster___);
  if ( !SelfUserGame )
    goto LABEL_482;
  SelfUserGame = *(_QWORD *)(SelfUserGame + 40);
  if ( !SelfUserGame )
    goto LABEL_482;
  v290 = (int64_t)System_Collections_ObjectModel_Collection_object___GetEnumerator(
                    (System_Collections_ObjectModel_Collection_T__o *)SelfUserGame,
                    (const MethodInfo_3E61068 *)Method_System_Collections_ObjectModel_Collection_UserServantLeaderEntity__GetEnumerator__);
  v451 = v290;
  v434 = 0;
  v435 = &v451;
  while ( 1 )
  {
    v292 = v451;
    if ( !v451 )
      sub_21FFECC(v290, v291);
    v293 = *(_QWORD *)v451;
    v294 = *(unsigned __int16 *)(*(_QWORD *)v451 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v451 + 302LL) )
    {
      v295 = (int *)(*(_QWORD *)(v293 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v295 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v294;
        v295 += 4;
        if ( !v294 )
          goto LABEL_322;
      }
      v296 = v293 + 16LL * *v295 + 312;
    }
    else
    {
LABEL_322:
      v296 = sub_2237E2C(v451, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v297 = (*(__int64 (__fastcall **)(int64_t, _QWORD))v296)(v292, *(_QWORD *)(v296 + 8));
    if ( (v297 & 1) == 0 )
      break;
    v299 = v451;
    if ( !v451 )
      sub_21FFECC(v297, v291);
    v300 = *(_QWORD *)v451;
    v301 = *(unsigned __int16 *)(*(_QWORD *)v451 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v451 + 302LL) )
    {
      v302 = (int *)(*(_QWORD *)(v300 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_UserServantLeaderEntity__c **)v302 - 1) != System_Collections_Generic_IEnumerator_UserServantLeaderEntity__TypeInfo )
      {
        --v301;
        v302 += 4;
        if ( !v301 )
          goto LABEL_330;
      }
      v303 = v300 + 16LL * *v302 + 312;
    }
    else
    {
LABEL_330:
      v303 = sub_2237E2C(v451, System_Collections_Generic_IEnumerator_UserServantLeaderEntity__TypeInfo, 0);
    }
    v304 = (*(__int64 (__fastcall **)(int64_t, _QWORD))v303)(v299, *(_QWORD *)(v303 + 8));
    if ( !v304 )
      sub_21FFECC(0, v305);
    v307 = (UserServantEntity_o *)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      sub_21FFECC(v304, v305);
    v308 = *(_OWORD *)&v307->fields.id.fields.currentCryptoKey;
    v309 = *(_OWORD *)&v307->fields.id.fields.fakeValue;
    v310 = *(_QWORD *)(v304 + 56);
    v311 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
    *(_OWORD *)&v439.fields.currentCryptoKey = v308;
    *(_OWORD *)&v439.fields.fakeValue = v309;
    if ( !v311 )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v305, v306);
    v426 = v439;
    v290 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v426, 0);
    if ( v310 == v290 )
    {
      this->fields.isUseSupport = 1;
      break;
    }
  }
  v312 = v451;
  if ( v451 )
  {
    v313 = *(_QWORD *)v451;
    v314 = *(unsigned __int16 *)(*(_QWORD *)v451 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v451 + 302LL) )
    {
      v315 = (int *)(*(_QWORD *)(v313 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v315 - 1) != System_IDisposable_TypeInfo )
      {
        --v314;
        v315 += 4;
        if ( !v314 )
          goto LABEL_343;
      }
      v316 = v313 + 16LL * *v315 + 312;
    }
    else
    {
LABEL_343:
      v316 = sub_2237E2C(v451, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(int64_t, _QWORD))v316)(v312, *(_QWORD *)(v316 + 8));
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v291, v298);
  SelfUserGame = (int64_t)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserRecommendSupportMaster___);
  v326 = (UserServantEntity_o *)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_482;
  v327 = (UserRecommendSupportMaster_o *)SelfUserGame;
  v328 = *(_OWORD *)&v326->fields.id.fields.currentCryptoKey;
  v329 = *(_OWORD *)&v326->fields.id.fields.fakeValue;
  v330 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
  *(_OWORD *)&v439.fields.currentCryptoKey = v328;
  *(_OWORD *)&v439.fields.fakeValue = v329;
  if ( !v330 )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v59, v325);
  v425 = v439;
  SelfUserGame = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v425, 0);
  if ( !v327 )
    goto LABEL_482;
  this->fields.isUseRecommendSupport = UserRecommendSupportMaster__IsSettingServant(v327, SelfUserGame, 0, 0);
  v331 = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserServantGrandMaster___);
  v332 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  v333 = (UserServantGrandMaster_o *)v331;
  *(_OWORD *)&v424.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v424.fields.fakeValue = v332;
  SelfUserGame = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v424, 0);
  if ( !v333 )
    goto LABEL_482;
  this->fields.isGrandSvt = UserServantGrandMaster__IsSettingServant(v333, SelfUserGame, 0);
  SelfUserGame = v420 && UserServantEntity__IsEventJoin(v420, 0);
  v334 = this->fields.userSvtEntity;
  this->fields.isEventJoinBaseSvt = SelfUserGame & 1;
  if ( !v334 )
    goto LABEL_482;
  IsMaterialTd = UserServantEntity__IsMaterialTd(v334, 0);
  v288 = this->fields.type;
  this->fields.isMaterialTdSvt = IsMaterialTd;
LABEL_374:
  if ( v288 == 6 )
  {
    SelfUserGame = (int64_t)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_482;
    isExceedLvMax = UserServantEntity__isExceedLvMax((UserServantEntity_o *)SelfUserGame, 0);
    SelfUserGame = (int64_t)this->fields.userSvtEntity;
    this->fields.isLvExceedMax = isExceedLvMax;
    if ( !SelfUserGame )
      goto LABEL_482;
    v337 = UserServantEntity__isLimitCountMax((UserServantEntity_o *)SelfUserGame, 0);
    SelfUserGame = (int64_t)this->fields.userSvtEntity;
    this->fields.isLimitCntMax = v337;
    if ( !SelfUserGame )
      goto LABEL_482;
    v338 = UserServantEntity__isLevelMax((UserServantEntity_o *)SelfUserGame, 0);
    isHeroineSvt = this->fields.isHeroineSvt;
    this->fields.isLvMax = v338;
    if ( !isHeroineSvt || UserServantEntity__IsUseLevelExceedItemHeroine(userSvtEntity, 0) )
    {
      SelfUserGame = (int64_t)*p_userSvtEntity;
      if ( !*p_userSvtEntity )
        goto LABEL_482;
      SvtExceedEnt = UserServantEntity__getSvtExceedEnt((UserServantEntity_o *)SelfUserGame, 0);
      if ( SvtExceedEnt )
      {
        v342 = (int32_t *)SvtExceedEnt;
        if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v59, v341);
        SelfUserGame = (int64_t)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_CommonConsumeMaster___);
        if ( !SelfUserGame )
          goto LABEL_482;
        IdEntityList = CommonConsumeMaster__GetIdEntityList((CommonConsumeMaster_o *)SelfUserGame, v342[12], 0);
        if ( IdEntityList )
        {
          v344 = IdEntityList;
          v345 = (System_Collections_Generic_HashSet_int__o *)sub_21FFEBC(System_Collections_Generic_HashSet_int__TypeInfo);
          System_Collections_Generic_HashSet_int____ctor(
            v345,
            (const MethodInfo_4280264 *)Method_System_Collections_Generic_HashSet_int___ctor__);
          v346 = (System_Collections_Generic_HashSet_int__o *)sub_21FFEBC(System_Collections_Generic_HashSet_int__TypeInfo);
          System_Collections_Generic_HashSet_int____ctor(
            v346,
            (const MethodInfo_4280264 *)Method_System_Collections_Generic_HashSet_int___ctor__);
          v348 = v344->max_length;
          if ( v348 >= 1 )
          {
            v349 = 0;
            while ( (unsigned int)v349 < v348 )
            {
              v350 = v344->m_Items[v349];
              if ( !v350 )
                goto LABEL_482;
              if ( !v345 )
                goto LABEL_482;
              SelfUserGame = System_Collections_Generic_HashSet_int___Add(
                               v345,
                               v350->fields.objectId,
                               (const MethodInfo_42814A4 *)Method_System_Collections_Generic_HashSet_int__Add__);
              if ( !v346 )
                goto LABEL_482;
              SelfUserGame = System_Collections_Generic_HashSet_int___Add(
                               v346,
                               v350->fields.num,
                               (const MethodInfo_42814A4 *)Method_System_Collections_Generic_HashSet_int__Add__);
              v348 = v344->max_length;
              if ( (int)++v349 >= v348 )
                goto LABEL_393;
            }
LABEL_497:
            sub_21FFED4(SelfUserGame);
          }
LABEL_393:
          if ( v342[13] >= 1 )
          {
            if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v59, v347);
            SelfUserGame = (int64_t)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_SvtCoinMaster___);
            v352 = (UserServantEntity_o *)*p_userSvtEntity;
            if ( *p_userSvtEntity )
            {
              v353 = (DataMasterBase_TMaster__TEntity__PKType__o *)SelfUserGame;
              v354 = *(_QWORD *)&v352->fields.svtId.fields.currentCryptoKey;
              v355 = *(_QWORD *)&v352->fields.svtId.fields.fakeValue;
              if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v59, v351);
              *(_QWORD *)&v465.fields.currentCryptoKey = v354;
              *(_QWORD *)&v465.fields.fakeValue = v355;
              SelfUserGame = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v465, 0);
              if ( v353 )
              {
                SelfUserGame = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                          v353,
                                          SelfUserGame,
                                          (const MethodInfo_3EDD388 *)Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__GetEntity__);
                if ( SelfUserGame )
                {
                  if ( v345 )
                  {
                    SelfUserGame = System_Collections_Generic_HashSet_int___Add(
                                     v345,
                                     *(_DWORD *)(SelfUserGame + 24),
                                     (const MethodInfo_42814A4 *)Method_System_Collections_Generic_HashSet_int__Add__);
                    if ( v346 )
                    {
                      System_Collections_Generic_HashSet_int___Add(
                        v346,
                        v342[13],
                        (const MethodInfo_42814A4 *)Method_System_Collections_Generic_HashSet_int__Add__);
                      goto LABEL_404;
                    }
                  }
                }
              }
            }
            goto LABEL_482;
          }
LABEL_404:
          v356 = (UserServantEntity_o *)*p_userSvtEntity;
          v357 = System_Linq_Enumerable__ToArray_int_(
                   (System_Collections_Generic_IEnumerable_TSource__o *)v345,
                   (const MethodInfo_38684CC *)Method_System_Linq_Enumerable_ToArray_int___);
          SelfUserGame = (int64_t)System_Linq_Enumerable__ToArray_int_(
                                    (System_Collections_Generic_IEnumerable_TSource__o *)v346,
                                    (const MethodInfo_38684CC *)Method_System_Linq_Enumerable_ToArray_int___);
          if ( !v412 )
            goto LABEL_482;
          this->fields.isLvExceedItemNum = CombineUtility__CheckCombineNeedItemsEnough(
                                             v356,
                                             v357,
                                             (System_Int32_array *)SelfUserGame,
                                             *(_QWORD *)(v412 + 96),
                                             v342[8],
                                             0);
        }
      }
    }
  }
  if ( this->fields.type == 8 )
  {
    SelfUserGame = (int64_t)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_482;
    isExceedFriendshipMax = UserServantEntity__isExceedFriendshipMax((UserServantEntity_o *)SelfUserGame, 0);
    v361 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
    this->fields.isFriendshipExceedMax = isExceedFriendshipMax;
    v362 = *(_QWORD *)&v417->fields.friendshipRank.fields.currentCryptoKey;
    v363 = *(_QWORD *)&v417->fields.friendshipRank.fields.fakeValue;
    if ( !*(&v361->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(v361, v358, v359);
    *(_QWORD *)&v466.fields.currentCryptoKey = v362;
    *(_QWORD *)&v466.fields.fakeValue = v363;
    SelfUserGame = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v466, 0);
    v364 = *p_servantEntity;
    if ( !*p_servantEntity )
      goto LABEL_482;
    v365 = (_DWORD)SelfUserGame == v417->fields.friendshipExceedCount + v364->fields.maxFriendshipRank;
    this->fields.isFriendshipRankMax = v365;
    if ( v365 && !this->fields.isFriendshipExceedMax )
    {
      if ( this->fields.isHeroineSvt )
      {
        SelfUserGame = UserServantEntity__IsUseFriendshipExceedItemHeroine(userSvtEntity, 0);
        if ( (SelfUserGame & 1) == 0 )
          goto LABEL_414;
        v364 = *p_servantEntity;
        if ( !*p_servantEntity )
          goto LABEL_482;
      }
      maxFriendshipRank = v364->fields.maxFriendshipRank;
      friendshipExceedCount = v417->fields.friendshipExceedCount;
      SelfUserGame = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !SelfUserGame )
        goto LABEL_482;
      SelfUserGame = (int64_t)DataManager__GetMasterData_object_(
                                (DataManager_o *)SelfUserGame,
                                (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_FriendshipMaster___);
      if ( !*p_servantEntity )
        goto LABEL_482;
      if ( !SelfUserGame )
        goto LABEL_482;
      SelfUserGame = (int64_t)FriendshipMaster__GetEntity(
                                (FriendshipMaster_o *)SelfUserGame,
                                (*p_servantEntity)->fields.friendshipId,
                                maxFriendshipRank + friendshipExceedCount + 1,
                                0);
      if ( !SelfUserGame )
        goto LABEL_482;
      v399 = SelfUserGame;
      v401 = *(_QWORD *)(SelfUserGame + 32);
      v400 = *(_QWORD *)(SelfUserGame + 40);
      SelfUserGame = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !SelfUserGame )
        goto LABEL_482;
      SelfUserGame = (int64_t)DataManager__GetMasterData_object_(
                                (DataManager_o *)SelfUserGame,
                                (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserItemMaster___);
      if ( !v400 )
        goto LABEL_482;
      if ( *(int *)(v400 + 24) < 1 )
      {
LABEL_466:
        if ( !v412 )
          goto LABEL_482;
        if ( *(_QWORD *)(v412 + 96) < *(int *)(v399 + 28) )
          this->fields.isFriendshipExceedItemNum = 0;
        goto LABEL_414;
      }
      v403 = (UserItemMaster_o *)SelfUserGame;
      v404 = 0;
      v405 = v400 + 32;
      while ( 1 )
      {
        if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v59, v402);
        if ( !byte_5931D52 )
        {
          sub_21FFC50(&NetworkManager_TypeInfo);
          byte_5931D52 = 1;
        }
        SelfUserGame = (int64_t)NetworkManager_TypeInfo;
        if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v59, v402);
          SelfUserGame = (int64_t)NetworkManager_TypeInfo;
        }
        if ( v404 >= *(unsigned int *)(v400 + 24) )
          goto LABEL_497;
        if ( !v403 )
          goto LABEL_482;
        SelfUserGame = UserItemMaster__TryGetEntity(
                         v403,
                         &v440,
                         *(_QWORD *)(*(_QWORD *)(SelfUserGame + 184) + 64LL),
                         *(_DWORD *)(v405 + 4 * v404),
                         0);
        if ( (SelfUserGame & 1) == 0 )
          break;
        if ( v404 >= *(unsigned int *)(v400 + 24) )
          goto LABEL_497;
        if ( !v440 )
          goto LABEL_482;
        if ( *(_DWORD *)(v405 + 4 * v404) == v440->fields.itemId )
        {
          if ( !v401 )
            goto LABEL_482;
          if ( v404 >= *(unsigned int *)(v401 + 24) )
            goto LABEL_497;
          v406 = *(_DWORD *)(v401 + 32 + 4 * v404) <= v440->fields.num;
          goto LABEL_464;
        }
LABEL_465:
        if ( (__int64)++v404 >= *(int *)(v400 + 24) )
          goto LABEL_466;
      }
      v406 = 0;
LABEL_464:
      this->fields.isFriendshipExceedItemNum = v406;
      goto LABEL_465;
    }
  }
LABEL_414:
  SelfUserGame = UserServantEntity__get_IsSaveTransformServant(userSvtEntity, 0);
  if ( (SelfUserGame & 1) != 0 )
  {
    SelfUserGame = UserServantEntity__CheckBaseServant(userSvtEntity, -1, 0);
    v366 = SelfUserGame ^ 1;
  }
  else
  {
    v366 = 0;
  }
  if ( !this )
    goto LABEL_482;
  this->fields.isTransformed = v366 & 1;
  SelfUserGame = UserServantEntity__GetDispLimitCountStageSealAfterIndexZero(userSvtEntity, -1, 0, 0);
  v367 = this->fields.userSvtEntity;
  this->fields.dispLimitCount = SelfUserGame;
  if ( !v367 )
    goto LABEL_482;
  SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v367, -1, SelfUserGame, 0);
  this->fields.skillCategoryIdList = SkillCategoryIdList;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.skillCategoryIdList,
    (int32_t)SkillCategoryIdList,
    v369,
    v370,
    v371,
    v372,
    v373,
    v374);
  SelfUserGame = (int64_t)this->fields.userSvtEntity;
  if ( !SelfUserGame )
    goto LABEL_482;
  TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                   (UserServantEntity_o *)SelfUserGame,
                                   0,
                                   this->fields.dispLimitCount,
                                   0);
  this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.tdCategoryIdList,
    (int32_t)TreasureDeviceCategoryIdList,
    v376,
    v377,
    v378,
    v379,
    v380,
    v381);
  SelfUserGame = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_482;
  SelfUserGame = (int64_t)DataManager__GetMasterData_object_(
                            (DataManager_o *)SelfUserGame,
                            (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !SelfUserGame )
    goto LABEL_482;
  SelfUserGame = (int64_t)DataMasterBase_object__object__int___GetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)SelfUserGame,
                            this->fields.classId,
                            (const MethodInfo_3EDD388 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !SelfUserGame )
    goto LABEL_482;
  v382 = *(int *)(SelfUserGame + 52);
  SelfUserGame = (int64_t)this->fields.userSvtEntity;
  this->fields.priority = v382;
  this->fields.sortValue1B = v382;
  if ( !SelfUserGame )
    goto LABEL_482;
  rarity = (unsigned int)this->fields.rarity;
  SelfUserGame = (int64_t)UserServantEntity__get_BaseServantEntity((UserServantEntity_o *)SelfUserGame, 0);
  if ( !SelfUserGame )
    goto LABEL_482;
  v385 = (UserServantEntity_o *)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_482;
  v386 = ((__int64)*(int *)(SelfUserGame + 208) << 16) | (rarity << 48) | v385->fields.lv;
  v387 = type == 2 && !this->fields.isLimitCntMax;
  v388 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
  this->fields.sortValue2 = v386 | v387;
  v389 = *(_QWORD *)&v385->fields.svtId.fields.currentCryptoKey;
  v390 = *(_QWORD *)&v385->fields.svtId.fields.fakeValue;
  if ( !*(&v388->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v388, v59, v384);
  *(_QWORD *)&v467.fields.currentCryptoKey = v389;
  *(_QWORD *)&v467.fields.fakeValue = v390;
  SelfUserGame = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v467, 0);
  v392 = this->fields.userSvtEntity;
  this->fields.sortValue2B = (int)SelfUserGame;
  if ( !v392 )
    goto LABEL_482;
  v393 = *(_OWORD *)&v392->fields.id.fields.currentCryptoKey;
  v394 = *(_OWORD *)&v392->fields.id.fields.fakeValue;
  v395 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
  *(_OWORD *)&v439.fields.currentCryptoKey = v393;
  *(_OWORD *)&v439.fields.fakeValue = v394;
  if ( !v395 )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v59, v391);
  v423 = v439;
  v396 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v423, 0);
  SelfUserGame = (int64_t)this->fields.iconLabelInfo1;
  this->fields.sortValueLast = v396;
  this->fields.amountSortValue = -1;
  if ( !SelfUserGame )
    goto LABEL_482;
  IconLabelInfo__Clear((IconLabelInfo_o *)SelfUserGame, 0);
  SelfUserGame = (int64_t)*p_iconLabelInfo2;
  if ( !*p_iconLabelInfo2 )
    goto LABEL_482;
  IconLabelInfo__Clear((IconLabelInfo_o *)SelfUserGame, 0);
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

  if ( (byte_59321A6 & 1) == 0 )
  {
    sub_21FFC50(&SvtUseSkillData_TypeInfo);
    byte_59321A6 = 1;
  }
  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
    return UserServantEntity__getAppendSkillInfo(userSvtEntity, 0);
  v5 = (SvtUseSkillData_o *)sub_21FFEBC(SvtUseSkillData_TypeInfo);
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
  UserServantEntity_o *userSvtEntity; // x20
  _BOOL8 TreasureDeviceInfo; // x0
  __int64 v10; // x1
  TreasureDvcInfo_o *v11; // x8
  int32_t maxLv; // w8
  TreasureDvcInfo_o *tdInfo; // [xsp+8h] [xbp-28h] BYREF

  userSvtEntity = this->fields.userSvtEntity;
  tdInfo = 0;
  if ( userSvtEntity )
  {
    TreasureDeviceInfo = UserServantEntity__getTreasureDeviceInfo(userSvtEntity, &tdInfo, -1, -1, 0, 0);
    v11 = tdInfo;
    if ( !tdInfo )
      sub_21FFECC(TreasureDeviceInfo, v10);
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
  __int64 v2; // x2
  int v4; // w8
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1
  struct ServantEntity_o *servantEntity; // x8
  __int64 v9; // x2
  int64_t condNum; // x21
  int32_t condType; // w19
  int32_t condTargetId; // w20
  CombineLimitReleaseEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_59321A7 & 1) == 0 )
  {
    sub_21FFC50(&CondType_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMaster_CombineLimitReleaseMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    byte_59321A7 = 1;
  }
  v4 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  entity = 0;
  if ( !v4 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method, v2);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_CombineLimitReleaseMaster___);
  servantEntity = this->fields.servantEntity;
  if ( this->fields.type == 9 )
  {
    if ( servantEntity && Master_object )
      return CombineLimitReleaseMaster__IsExistSealedLimitCount(
               (CombineLimitReleaseMaster_o *)Master_object,
               servantEntity->fields.combineLimitId,
               0);
LABEL_19:
    sub_21FFECC(Master_object, v6);
  }
  if ( !servantEntity || !Master_object )
    goto LABEL_19;
  Master_object = (Il2CppObject *)CombineLimitReleaseMaster__TryGetEntity(
                                    (CombineLimitReleaseMaster_o *)Master_object,
                                    &entity,
                                    servantEntity->fields.combineLimitId,
                                    this->fields.currentLimitCnt + 1,
                                    0);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
    return 0;
  if ( !entity )
    goto LABEL_19;
  condNum = entity->fields.condNum;
  condType = entity->fields.condType;
  condTargetId = entity->fields.condTargetId;
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v6, v9);
  return !CondType__IsOpen(condType, condTargetId, condNum, 0, 0, 0);
}


bool CombineServantListViewItem__GetSkillInfo(
        CombineServantListViewItem_o *this,
        SkillInfo_array **skillInfoList,
        const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x20
  BalanceConfig_c *v6; // x0
  SkillInfo_array *v7; // x0
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7

  if ( (byte_59321A5 & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&SkillInfo___TypeInfo);
    byte_59321A5 = 1;
  }
  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
  {
    UserServantEntity__getSkillInfo(userSvtEntity, skillInfoList, -1, -1, 1, 0, -1, 0);
  }
  else
  {
    v6 = BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, skillInfoList, method);
      v6 = BalanceConfig_TypeInfo;
    }
    v7 = (SkillInfo_array *)sub_21FFD10(SkillInfo___TypeInfo, (unsigned int)v6->static_fields->SvtSkillListMax);
    *skillInfoList = v7;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)skillInfoList, (int32_t)v7, v8, v9, v10, v11, v12, v13);
  }
  return userSvtEntity != 0;
}


void CombineServantListViewItem__InitFlags(CombineServantListViewItem_o *this, const MethodInfo *method)
{
  this->fields.isChoice = 0;
  *(_WORD *)&this->fields.isAllAppendSkillLock = 0;
  this->fields.isMaxSelect = 0;
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
  *(_QWORD *)&this->fields.isOverParam2Threshold = 0;
  *(_DWORD *)&this->fields.isNotSelectAddParam2 = 0;
}


bool CombineServantListViewItem__IsCanNotSelectSecondStatusMaterial(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  if ( !this->fields.isStatusUpSvt || this->fields.rarity < 4 )
    return 0;
  if ( this->fields.hpBase >= 1 )
  {
    if ( this->fields.isOverParam1Threshold )
    {
      if ( !this->fields.isParam1StageFull )
        return 1;
    }
    else if ( !this->fields.isHpUpMax )
    {
      return 1;
    }
  }
  if ( this->fields.atkBase < 1 )
    return 0;
  if ( this->fields.isOverParam2Threshold )
  {
    if ( this->fields.isParam2StageFull )
      return 0;
  }
  else if ( this->fields.isAtkUpMax )
  {
    return 0;
  }
  return 1;
}


bool CombineServantListViewItem__IsMatchBaseServantFilter(
        CombineServantListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  FilterKindList_c *v5; // x0
  System_Int32Enum_array *ClassGroupFilterKindList; // x0
  __int64 v7; // x2
  FilterKindList_c *v8; // x0
  ListViewSort_FilterKind_array *v9; // x0
  __int64 v10; // x2
  FilterKindList_c *v11; // x0
  ListViewSort_FilterKind_array *v12; // x0
  __int64 v13; // x2
  FilterKindList_c *v14; // x0
  ListViewSort_FilterKind_array *v15; // x0
  __int64 v16; // x2
  FilterKindList_c *v17; // x0
  ListViewSort_FilterKind_array *v18; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  UserServantEntity_o *userSvtEntity; // x21
  const MethodInfo *v22; // x1
  __int64 v23; // x2
  _BOOL4 isChoice; // w8
  FilterKindList_c *v25; // x0
  ListViewSort_FilterKind_array *v26; // x21
  _BOOL4 IsUnSelectedAllTargetFilters; // w21
  _BOOL4 v29; // w23
  _BOOL4 IsMatchEffectCategory; // w22
  _BOOL4 v31; // w0

  if ( (byte_593219A & 1) == 0 )
  {
    sub_21FFC50(&FilterKindList_TypeInfo);
    sub_21FFC50(&ListViewSort_FilterKind___TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    sub_21FFC50(&ServantEventBonusFilterController_TypeInfo);
    byte_593219A = 1;
  }
  v5 = FilterKindList_TypeInfo;
  if ( !*(&FilterKindList_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort, method);
    v5 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Int32Enum_array *)v5->static_fields->ClassGroupFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_64;
  ClassGroupFilterKindList = System_Collections_Generic_List_Int32Enum___ToArray(
                               (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                               (const MethodInfo_44373D0 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_64;
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0) )
  {
    v8 = FilterKindList_TypeInfo;
    if ( !*(&FilterKindList_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort, v7);
      v8 = FilterKindList_TypeInfo;
    }
    ClassGroupFilterKindList = (System_Int32Enum_array *)v8->static_fields->ClassFilterKindList;
    if ( !ClassGroupFilterKindList )
      goto LABEL_64;
    v9 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                            (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                            (const MethodInfo_44373D0 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v9, 0)
      && !ListViewSort__IsMatchClassFilter(sort, this->fields.servantEntity, 0) )
    {
      return 0;
    }
  }
  else if ( !ListViewSort__IsMatchClassGroupFilter(sort, this->fields.servantEntity, 0) )
  {
    return 0;
  }
  v11 = FilterKindList_TypeInfo;
  if ( !*(&FilterKindList_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort, v10);
    v11 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Int32Enum_array *)v11->static_fields->NpTypeFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_64;
  v12 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_44373D0 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v12, 0)
    && !ListViewSort__IsMatchNPTypeFilter(sort, this->fields.userSvtEntity, 0) )
  {
    return 0;
  }
  v14 = FilterKindList_TypeInfo;
  if ( !*(&FilterKindList_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort, v13);
    v14 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Int32Enum_array *)v14->static_fields->NpEffectFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_64;
  v15 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_44373D0 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v15, 0)
    && !ListViewSort__IsMatchNPEffectFilter(sort, this->fields.userSvtEntity, 0) )
  {
    return 0;
  }
  v17 = FilterKindList_TypeInfo;
  if ( !*(&FilterKindList_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort, v16);
    v17 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Int32Enum_array *)v17->static_fields->CombineBaseServantFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_64;
  v18 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_44373D0 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v18, 0)
    && !ListViewSort__IsMatchServantStatusFilter(sort, this->fields.userSvtEntity, 0) )
  {
    return 0;
  }
  if ( !ListViewSort__CheckSvtEventBonusFilterDefaultAll(sort, -1, 0) )
  {
    userSvtEntity = this->fields.userSvtEntity;
    if ( !*(&ServantEventBonusFilterController_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ServantEventBonusFilterController_TypeInfo, v19, v20);
    if ( ServantEventBonusFilterController__IsHideServant(userSvtEntity, sort, -1, 0) )
      return 0;
  }
  if ( !ListViewSort__CheckSvtEquipEffectFilterDefaultAll(sort, 0) )
  {
    CombineServantListViewItem__UpdateCategoryIdList(this, v22);
    ClassGroupFilterKindList = (System_Int32Enum_array *)sub_21FFD10(ListViewSort_FilterKind___TypeInfo, 1);
    if ( !ClassGroupFilterKindList )
      goto LABEL_64;
    if ( !LODWORD(ClassGroupFilterKindList->max_length) )
      goto LABEL_65;
    ClassGroupFilterKindList->m_Items[0] = 50;
    IsUnSelectedAllTargetFilters = ListViewSort__IsUnSelectedAllTargetFilters(
                                     sort,
                                     (ListViewSort_FilterKind_array *)ClassGroupFilterKindList,
                                     0);
    ClassGroupFilterKindList = (System_Int32Enum_array *)sub_21FFD10(ListViewSort_FilterKind___TypeInfo, 1);
    if ( !ClassGroupFilterKindList )
      goto LABEL_64;
    if ( !LODWORD(ClassGroupFilterKindList->max_length) )
LABEL_65:
      sub_21FFED4(ClassGroupFilterKindList);
    ClassGroupFilterKindList->m_Items[0] = 51;
    v29 = ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0);
    IsMatchEffectCategory = ServantEquipEffectFilterController__IsMatchEffectCategory(
                              this->fields.tdCategoryIdList,
                              sort,
                              0);
    v31 = ServantEquipEffectFilterController__IsMatchEffectCategory(this->fields.skillCategoryIdList, sort, 0);
    if ( IsUnSelectedAllTargetFilters && v29 || !IsUnSelectedAllTargetFilters && !v29 )
    {
      if ( !IsMatchEffectCategory && !v31 )
        return 0;
    }
    else if ( IsUnSelectedAllTargetFilters )
    {
      if ( !v31 )
        return 0;
    }
    else if ( !IsMatchEffectCategory )
    {
      return 0;
    }
  }
  if ( !ListViewSort__IsMatchServantAttriFilter(sort, this->fields.userSvtEntity, this->fields.servantEntity, 0)
    || !ListViewSort__IsMatchServantSubAttriFilter(sort, this->fields.userSvtEntity, this->fields.servantEntity, 0) )
  {
    return 0;
  }
  ClassGroupFilterKindList = (System_Int32Enum_array *)sub_21FFD10(ListViewSort_FilterKind___TypeInfo, 1);
  if ( !ClassGroupFilterKindList )
LABEL_64:
    sub_21FFECC(ClassGroupFilterKindList, sort);
  if ( !LODWORD(ClassGroupFilterKindList->max_length) )
    goto LABEL_65;
  ClassGroupFilterKindList->m_Items[0] = 39;
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0)
    && ListViewSort__GetFilter(sort, 39, 0) )
  {
    isChoice = this->fields.isChoice;
    if ( this->fields.isSwapChoice )
      isChoice = !this->fields.isChoice;
    if ( !isChoice )
      return 0;
  }
  v25 = FilterKindList_TypeInfo;
  if ( !*(&FilterKindList_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort, v23);
    v25 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Int32Enum_array *)v25->static_fields->RarityFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_64;
  v26 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_44373D0 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v26, 0)
      || ListViewSort__IsSelectedAllTargetFilters(sort, v26, 0)
      || ListViewSort__IsMatchRarityFilter(sort, this->fields.rarity, 0);
}


bool CombineServantListViewItem__IsMatchMaterialFilter(
        CombineServantListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  CombineServantListViewItem_o *v4; // x20
  __int64 v5; // x2
  _BOOL4 v6; // w21
  FilterKindList_c *v7; // x0
  ListViewSort_FilterKind_array *v8; // x0
  __int64 v9; // x2
  FilterKindList_c *v10; // x0
  ListViewSort_FilterKind_array *v11; // x0
  __int64 v12; // x2
  FilterKindList_c *v13; // x0
  ListViewSort_FilterKind_array *v14; // x0
  __int64 v15; // x2
  FilterKindList_c *v16; // x0
  ListViewSort_FilterKind_array *v17; // x0
  __int64 v18; // x2
  FilterKindList_c *v19; // x0
  ListViewSort_FilterKind_array *v20; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  UserServantEntity_o *userSvtEntity; // x21
  const MethodInfo *v24; // x1
  __int64 v25; // x2
  _BOOL4 isChoice; // w21
  _BOOL4 IsUnSelectedAllTargetFilters; // w21
  _BOOL4 v28; // w23
  _BOOL4 IsMatchEffectCategory; // w22
  _BOOL4 v30; // w0
  bool Filter; // w8
  bool result; // w0
  bool CanNotSelect; // w0
  FilterKindList_c *v34; // x0
  ListViewSort_FilterKind_array *v35; // x21

  v4 = this;
  if ( (byte_593219B & 1) == 0 )
  {
    sub_21FFC50(&FilterKindList_TypeInfo);
    sub_21FFC50(&ListViewSort_FilterKind___TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    this = (CombineServantListViewItem_o *)sub_21FFC50(&ServantEventBonusFilterController_TypeInfo);
    byte_593219B = 1;
  }
  if ( !sort )
    goto LABEL_82;
  v6 = ListViewSort__GetFilter(sort, 28, 0) && v4->fields.isSameClass;
  v7 = FilterKindList_TypeInfo;
  if ( !*(&FilterKindList_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort, v5);
    v7 = FilterKindList_TypeInfo;
  }
  this = (CombineServantListViewItem_o *)v7->static_fields->ClassGroupFilterKindList;
  if ( !this )
    goto LABEL_82;
  v8 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                          (System_Collections_Generic_List_T__o *)this,
                                          (const MethodInfo_44373D0 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, v8, 0) )
  {
    v10 = FilterKindList_TypeInfo;
    if ( !*(&FilterKindList_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort, v9);
      v10 = FilterKindList_TypeInfo;
    }
    this = (CombineServantListViewItem_o *)v10->static_fields->ClassFilterKindList;
    if ( !this )
      goto LABEL_82;
    v11 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                             (System_Collections_Generic_List_T__o *)this,
                                             (const MethodInfo_44373D0 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, v11, 0) )
    {
      this = (CombineServantListViewItem_o *)sub_21FFD10(ListViewSort_FilterKind___TypeInfo, 1);
      if ( !this )
        goto LABEL_82;
      if ( !this->fields.sortIndex )
        goto LABEL_83;
      LODWORD(this->fields.sortValue0) = 28;
      if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)this, 0) )
        goto LABEL_22;
    }
    if ( ListViewSort__IsMatchClassFilter(sort, v4->fields.servantEntity, 0) )
    {
LABEL_22:
      v13 = FilterKindList_TypeInfo;
      if ( !*(&FilterKindList_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort, v12);
        v13 = FilterKindList_TypeInfo;
      }
      this = (CombineServantListViewItem_o *)v13->static_fields->NpTypeFilterKindList;
      if ( this )
      {
        v14 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                                 (System_Collections_Generic_List_T__o *)this,
                                                 (const MethodInfo_44373D0 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
        if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v14, 0)
          && !ListViewSort__IsMatchNPTypeFilter(sort, v4->fields.userSvtEntity, 0) )
        {
          return 0;
        }
        v16 = FilterKindList_TypeInfo;
        if ( !*(&FilterKindList_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort, v15);
          v16 = FilterKindList_TypeInfo;
        }
        this = (CombineServantListViewItem_o *)v16->static_fields->NpEffectFilterKindList;
        if ( this )
        {
          v17 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                                   (System_Collections_Generic_List_T__o *)this,
                                                   (const MethodInfo_44373D0 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
          if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v17, 0)
            && !ListViewSort__IsMatchNPEffectFilter(sort, v4->fields.userSvtEntity, 0) )
          {
            return 0;
          }
          v19 = FilterKindList_TypeInfo;
          if ( !*(&FilterKindList_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort, v18);
            v19 = FilterKindList_TypeInfo;
          }
          this = (CombineServantListViewItem_o *)v19->static_fields->ServantTypeFilterKindList;
          if ( this )
          {
            v20 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                                     (System_Collections_Generic_List_T__o *)this,
                                                     (const MethodInfo_44373D0 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
            if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v20, 0)
              && !ListViewSort__IsMatchServantTypeFilter(sort, v4->fields.servantEntity, 0) )
            {
              return 0;
            }
            if ( !ListViewSort__CheckSvtEventBonusFilterDefaultAll(sort, -1, 0) )
            {
              userSvtEntity = v4->fields.userSvtEntity;
              if ( !*(&ServantEventBonusFilterController_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(ServantEventBonusFilterController_TypeInfo, v21, v22);
              if ( ServantEventBonusFilterController__IsHideServant(userSvtEntity, sort, -1, 0) )
                return 0;
            }
            if ( !ListViewSort__CheckSvtEquipEffectFilterDefaultAll(sort, 0) )
            {
              CombineServantListViewItem__UpdateCategoryIdList(v4, v24);
              this = (CombineServantListViewItem_o *)sub_21FFD10(ListViewSort_FilterKind___TypeInfo, 1);
              if ( !this )
                goto LABEL_82;
              if ( !this->fields.sortIndex )
                goto LABEL_83;
              LODWORD(this->fields.sortValue0) = 50;
              IsUnSelectedAllTargetFilters = ListViewSort__IsUnSelectedAllTargetFilters(
                                               sort,
                                               (ListViewSort_FilterKind_array *)this,
                                               0);
              this = (CombineServantListViewItem_o *)sub_21FFD10(ListViewSort_FilterKind___TypeInfo, 1);
              if ( !this )
                goto LABEL_82;
              if ( !this->fields.sortIndex )
                goto LABEL_83;
              LODWORD(this->fields.sortValue0) = 51;
              v28 = ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)this, 0);
              IsMatchEffectCategory = ServantEquipEffectFilterController__IsMatchEffectCategory(
                                        v4->fields.tdCategoryIdList,
                                        sort,
                                        0);
              v30 = ServantEquipEffectFilterController__IsMatchEffectCategory(v4->fields.skillCategoryIdList, sort, 0);
              if ( IsUnSelectedAllTargetFilters && v28 || !IsUnSelectedAllTargetFilters && !v28 )
              {
                if ( !IsMatchEffectCategory && !v30 )
                  return 0;
              }
              else if ( IsUnSelectedAllTargetFilters )
              {
                if ( !v30 )
                  return 0;
              }
              else if ( !IsMatchEffectCategory )
              {
                return 0;
              }
            }
            if ( !ListViewSort__IsMatchServantAttriFilter(sort, v4->fields.userSvtEntity, v4->fields.servantEntity, 0)
              || !ListViewSort__IsMatchServantSubAttriFilter(
                    sort,
                    v4->fields.userSvtEntity,
                    v4->fields.servantEntity,
                    0) )
            {
              return 0;
            }
            this = (CombineServantListViewItem_o *)sub_21FFD10(ListViewSort_FilterKind___TypeInfo, 1);
            if ( this )
            {
              if ( this->fields.sortIndex )
              {
                LODWORD(this->fields.sortValue0) = 39;
                if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)this, 0) )
                {
LABEL_50:
                  if ( ListViewSort__GetFilter(sort, 39, 0) )
                  {
                    if ( v4->fields.isSwapChoice )
                      isChoice = !v4->fields.isChoice;
                    else
                      isChoice = v4->fields.isChoice;
                    if ( !ListViewSort__GetFilter(sort, 29, 0) )
                    {
                      if ( !isChoice )
                        return 0;
                      goto LABEL_73;
                    }
                  }
                  else
                  {
                    Filter = ListViewSort__GetFilter(sort, 29, 0);
                    LOBYTE(isChoice) = 0;
                    result = 0;
                    if ( !Filter )
                      return result;
                  }
                  CanNotSelect = CombineServantListViewItem__get_IsCanNotSelect(v4, (const MethodInfo *)sort);
                  if ( !isChoice && CanNotSelect )
                    return 0;
LABEL_73:
                  v34 = FilterKindList_TypeInfo;
                  if ( !*(&FilterKindList_TypeInfo->_2.cctor_finished + 1) )
                  {
                    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort, v25);
                    v34 = FilterKindList_TypeInfo;
                  }
                  this = (CombineServantListViewItem_o *)v34->static_fields->RarityFilterKindList;
                  if ( this )
                  {
                    v35 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                                             (System_Collections_Generic_List_T__o *)this,
                                                             (const MethodInfo_44373D0 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
                    return ListViewSort__IsUnSelectedAllTargetFilters(sort, v35, 0)
                        || ListViewSort__IsSelectedAllTargetFilters(sort, v35, 0)
                        || ListViewSort__IsMatchRarityFilter(sort, v4->fields.rarity, 0);
                  }
                  goto LABEL_82;
                }
                this = (CombineServantListViewItem_o *)sub_21FFD10(ListViewSort_FilterKind___TypeInfo, 1);
                if ( !this )
                  goto LABEL_82;
                if ( this->fields.sortIndex )
                {
                  LODWORD(this->fields.sortValue0) = 29;
                  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)this, 0) )
                    goto LABEL_73;
                  goto LABEL_50;
                }
              }
LABEL_83:
              sub_21FFED4(this);
            }
          }
        }
      }
LABEL_82:
      sub_21FFECC(this, sort);
    }
  }
  else if ( ListViewSort__IsMatchClassGroupFilter(sort, v4->fields.servantEntity, 0) )
  {
    goto LABEL_22;
  }
  if ( v6 )
    goto LABEL_22;
  return 0;
}


bool CombineServantListViewItem__IsMatchServantFilter(
        CombineServantListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  FilterKindList_c *v5; // x0
  System_Int32Enum_array *ClassGroupFilterKindList; // x0
  __int64 v7; // x2
  FilterKindList_c *v8; // x0
  ListViewSort_FilterKind_array *v9; // x0
  __int64 v10; // x2
  FilterKindList_c *v11; // x0
  ListViewSort_FilterKind_array *v12; // x0
  __int64 v13; // x2
  FilterKindList_c *v14; // x0
  ListViewSort_FilterKind_array *v15; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  UserServantEntity_o *userSvtEntity; // x21
  const MethodInfo *v19; // x1
  __int64 v20; // x2
  _BOOL4 isChoice; // w8
  FilterKindList_c *v22; // x0
  ListViewSort_FilterKind_array *v23; // x21
  _BOOL4 IsUnSelectedAllTargetFilters; // w21
  _BOOL4 v26; // w23
  _BOOL4 IsMatchEffectCategory; // w22
  _BOOL4 v28; // w0

  if ( (byte_5932199 & 1) == 0 )
  {
    sub_21FFC50(&FilterKindList_TypeInfo);
    sub_21FFC50(&ListViewSort_FilterKind___TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    sub_21FFC50(&ServantEventBonusFilterController_TypeInfo);
    byte_5932199 = 1;
  }
  v5 = FilterKindList_TypeInfo;
  if ( !*(&FilterKindList_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort, method);
    v5 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Int32Enum_array *)v5->static_fields->ClassGroupFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_59;
  ClassGroupFilterKindList = System_Collections_Generic_List_Int32Enum___ToArray(
                               (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                               (const MethodInfo_44373D0 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_59;
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0) )
  {
    v8 = FilterKindList_TypeInfo;
    if ( !*(&FilterKindList_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort, v7);
      v8 = FilterKindList_TypeInfo;
    }
    ClassGroupFilterKindList = (System_Int32Enum_array *)v8->static_fields->ClassFilterKindList;
    if ( !ClassGroupFilterKindList )
      goto LABEL_59;
    v9 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                            (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                            (const MethodInfo_44373D0 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v9, 0)
      && !ListViewSort__IsMatchClassFilter(sort, this->fields.servantEntity, 0) )
    {
      return 0;
    }
  }
  else if ( !ListViewSort__IsMatchClassGroupFilter(sort, this->fields.servantEntity, 0) )
  {
    return 0;
  }
  v11 = FilterKindList_TypeInfo;
  if ( !*(&FilterKindList_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort, v10);
    v11 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Int32Enum_array *)v11->static_fields->NpTypeFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_59;
  v12 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_44373D0 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v12, 0)
    && !ListViewSort__IsMatchNPTypeFilter(sort, this->fields.userSvtEntity, 0) )
  {
    return 0;
  }
  v14 = FilterKindList_TypeInfo;
  if ( !*(&FilterKindList_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort, v13);
    v14 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Int32Enum_array *)v14->static_fields->NpEffectFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_59;
  v15 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_44373D0 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v15, 0)
    && !ListViewSort__IsMatchNPEffectFilter(sort, this->fields.userSvtEntity, 0) )
  {
    return 0;
  }
  if ( !ListViewSort__CheckSvtEventBonusFilterDefaultAll(sort, -1, 0) )
  {
    userSvtEntity = this->fields.userSvtEntity;
    if ( !*(&ServantEventBonusFilterController_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ServantEventBonusFilterController_TypeInfo, v16, v17);
    if ( ServantEventBonusFilterController__IsHideServant(userSvtEntity, sort, -1, 0) )
      return 0;
  }
  if ( !ListViewSort__CheckSvtEquipEffectFilterDefaultAll(sort, 0) )
  {
    CombineServantListViewItem__UpdateCategoryIdList(this, v19);
    ClassGroupFilterKindList = (System_Int32Enum_array *)sub_21FFD10(ListViewSort_FilterKind___TypeInfo, 1);
    if ( !ClassGroupFilterKindList )
      goto LABEL_59;
    if ( !LODWORD(ClassGroupFilterKindList->max_length) )
      goto LABEL_60;
    ClassGroupFilterKindList->m_Items[0] = 50;
    IsUnSelectedAllTargetFilters = ListViewSort__IsUnSelectedAllTargetFilters(
                                     sort,
                                     (ListViewSort_FilterKind_array *)ClassGroupFilterKindList,
                                     0);
    ClassGroupFilterKindList = (System_Int32Enum_array *)sub_21FFD10(ListViewSort_FilterKind___TypeInfo, 1);
    if ( !ClassGroupFilterKindList )
      goto LABEL_59;
    if ( !LODWORD(ClassGroupFilterKindList->max_length) )
LABEL_60:
      sub_21FFED4(ClassGroupFilterKindList);
    ClassGroupFilterKindList->m_Items[0] = 51;
    v26 = ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0);
    IsMatchEffectCategory = ServantEquipEffectFilterController__IsMatchEffectCategory(
                              this->fields.tdCategoryIdList,
                              sort,
                              0);
    v28 = ServantEquipEffectFilterController__IsMatchEffectCategory(this->fields.skillCategoryIdList, sort, 0);
    if ( IsUnSelectedAllTargetFilters && v26 || !IsUnSelectedAllTargetFilters && !v26 )
    {
      if ( !IsMatchEffectCategory && !v28 )
        return 0;
    }
    else if ( IsUnSelectedAllTargetFilters )
    {
      if ( !v28 )
        return 0;
    }
    else if ( !IsMatchEffectCategory )
    {
      return 0;
    }
  }
  if ( !ListViewSort__IsMatchServantAttriFilter(sort, this->fields.userSvtEntity, this->fields.servantEntity, 0)
    || !ListViewSort__IsMatchServantSubAttriFilter(sort, this->fields.userSvtEntity, this->fields.servantEntity, 0) )
  {
    return 0;
  }
  ClassGroupFilterKindList = (System_Int32Enum_array *)sub_21FFD10(ListViewSort_FilterKind___TypeInfo, 1);
  if ( !ClassGroupFilterKindList )
LABEL_59:
    sub_21FFECC(ClassGroupFilterKindList, sort);
  if ( !LODWORD(ClassGroupFilterKindList->max_length) )
    goto LABEL_60;
  ClassGroupFilterKindList->m_Items[0] = 39;
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0)
    && ListViewSort__GetFilter(sort, 39, 0) )
  {
    isChoice = this->fields.isChoice;
    if ( this->fields.isSwapChoice )
      isChoice = !this->fields.isChoice;
    if ( !isChoice )
      return 0;
  }
  v22 = FilterKindList_TypeInfo;
  if ( !*(&FilterKindList_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort, v20);
    v22 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Int32Enum_array *)v22->static_fields->RarityFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_59;
  v23 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_44373D0 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v23, 0)
      || ListViewSort__IsSelectedAllTargetFilters(sort, v23, 0)
      || ListViewSort__IsMatchRarityFilter(sort, this->fields.rarity, 0);
}


bool CombineServantListViewItem__IsStatusMax(CombineServantListViewItem_o *this, const MethodInfo *method)
{
  bool isStatusUpSvt; // w8
  int32_t hpBase; // w8
  int32_t atkBase; // w9
  bool v6; // w10

  isStatusUpSvt = this->fields.isStatusUpSvt;
  if ( !isStatusUpSvt )
    return isStatusUpSvt;
  hpBase = this->fields.hpBase;
  atkBase = this->fields.atkBase;
  v6 = hpBase < 1 || atkBase > 0;
  if ( this->fields.rarity <= 3 )
  {
    if ( !v6 )
      return this->fields.isHpUpMax;
    if ( atkBase < 1 || hpBase > 0 )
    {
      if ( hpBase < 1 )
        return 0;
      isStatusUpSvt = 0;
      if ( !this->fields.isHpUpMax || atkBase < 1 )
        return isStatusUpSvt;
    }
    return this->fields.isAtkUpMax;
  }
  if ( !v6 )
    return this->fields.isHpSecondUpMax;
  if ( atkBase >= 1 && hpBase <= 0 )
    return this->fields.isAtkSecondUpMax;
  if ( hpBase < 1 )
    return 0;
  isStatusUpSvt = 0;
  if ( this->fields.isHpSecondUpMax && atkBase >= 1 )
    return this->fields.isAtkSecondUpMax;
  return isStatusUpSvt;
}


void CombineServantListViewItem__ModifyChoiceItem(CombineServantListViewItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0
  bool IsChoice; // w0

  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_21FFECC(0, method);
  IsChoice = UserServantEntity__IsChoice(userSvtEntity, 0);
  this->fields.isSwapChoice = 0;
  this->fields.isChoice = IsChoice;
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
  bool IsLock; // w0

  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_21FFECC(0, method);
  IsLock = UserServantEntity__IsLock(userSvtEntity, 0);
  this->fields.isSwapLock = 0;
  this->fields.isLock = IsLock;
}


void CombineServantListViewItem__ModifyPushItem(CombineServantListViewItem_o *this, const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  struct UserServantEntity_o *userSvtEntity; // x9
  __int128 v7; // q1
  int64_t pushUserSvtId; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v9; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v10; // [xsp+20h] [xbp-40h]

  if ( (byte_5932198 & 1) == 0 )
  {
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_5932198 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame || (userSvtEntity = this->fields.userSvtEntity) == 0 )
    sub_21FFECC(SelfUserGame, v4);
  v7 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  pushUserSvtId = SelfUserGame->fields.pushUserSvtId;
  *(_OWORD *)&v10.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v10.fields.fakeValue = v7;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v4, v5);
  v9 = v10;
  this->fields.isPush = pushUserSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v9, 0);
}


void CombineServantListViewItem__SetAppendSkillInfo(CombineServantListViewItem_o *this, const MethodInfo *method)
{
  void *userSvtEntity; // x0
  SvtUseSkillData_o *AppendSkillInfo; // x0
  SvtUseSkillData_o *v5; // x20
  __int64 v6; // x2
  struct System_Int32_array *svtUseSkillIdList; // x8
  int64_t v8; // x21
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
  bool IsAppendSkillExchangeLimit; // w0
  System_Collections_Generic_List_int__c *v20; // x8
  System_Collections_Generic_List_int__o *v21; // x22
  __int64 v22; // x2
  struct System_Int32_array *v23; // x8
  __int64 v24; // x29
  unsigned __int64 v25; // x9
  unsigned __int64 v26; // x26
  struct System_Int32_array *v27; // x8
  int v28; // w9
  int v29; // w8
  __int64 v30; // x2
  struct UserServantEntity_o *v31; // x8
  CombineAppendPassiveSkillMaster_o *v32; // x23
  __int64 v33; // x24
  __int64 v34; // x25
  struct System_Int32_array *svtSkillNumsList; // x8
  struct System_Int32_array *v36; // x9
  struct System_Int32_array *v37; // x8
  __int64 v38; // x9
  _QWORD *v39; // x8
  __int64 v40; // x10
  char *v41; // x9
  __int64 v42; // x2
  struct UserServantEntity_o *v43; // x8
  SvtAppendPassiveSkillUnlockMaster_o *v44; // x23
  __int64 v45; // x24
  __int64 v46; // x25
  struct System_Int32_array *v47; // x8
  struct System_Int32_array *v48; // x8
  struct System_Int32_array *items; // x9
  _QWORD *v50; // x8
  __int64 size; // x10
  __int64 v52; // x8
  bool v53; // w0
  const MethodInfo_38327B4 *v54; // x1
  CombineAppendPassiveSkillEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v56; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v57; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v58; // 0:x0.16

  if ( (byte_5932197 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_CombineAppendPassiveSkillMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_SkillMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_SvtAppendPassiveSkillUnlockMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_21FFC50(&Method_System_Linq_Enumerable_Any_int___);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_int__TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_5932197 = 1;
  }
  userSvtEntity = this->fields.userSvtEntity;
  entity = 0;
  if ( !userSvtEntity )
    goto LABEL_81;
  AppendSkillInfo = UserServantEntity__getAppendSkillInfo((UserServantEntity_o *)userSvtEntity, 0);
  if ( !AppendSkillInfo )
    return;
  v5 = AppendSkillInfo;
  userSvtEntity = UserGameMaster__getSelfUserGame(0);
  if ( !userSvtEntity )
    goto LABEL_81;
  svtUseSkillIdList = v5->fields.svtUseSkillIdList;
  v8 = *((_QWORD *)userSvtEntity + 12);
  this->fields.isAppendSkillLvMax = 1;
  this->fields.isAllAppendSkillLock = 1;
  this->fields.isAppendSkillLvSame = 1;
  if ( !svtUseSkillIdList )
    goto LABEL_81;
  v9 = 8;
  while ( 1 )
  {
    max_length_low = LODWORD(svtUseSkillIdList->max_length);
    v11 = v9 - 8;
    if ( v9 - 8 >= (int)max_length_low )
      break;
    if ( v11 >= max_length_low )
      goto LABEL_84;
    if ( *((int *)&svtUseSkillIdList->obj.klass + v9) >= 1 )
    {
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method, v6);
      userSvtEntity = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_SkillMaster___);
      v12 = v5->fields.svtUseSkillIdList;
      if ( !v12 )
        goto LABEL_81;
      if ( v11 >= LODWORD(v12->max_length) )
        goto LABEL_84;
      if ( !userSvtEntity )
        goto LABEL_81;
      userSvtEntity = DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)userSvtEntity,
                        *((_DWORD *)&v12->obj.klass + v9),
                        (const MethodInfo_3EDD388 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
      svtSkillLvList = v5->fields.svtSkillLvList;
      if ( !svtSkillLvList )
        goto LABEL_81;
      if ( v11 >= LODWORD(svtSkillLvList->max_length) )
LABEL_84:
        sub_21FFED4(userSvtEntity);
      if ( !userSvtEntity )
        goto LABEL_81;
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
      goto LABEL_81;
  }
  v15 = this->fields.userSvtEntity;
  if ( !v15 )
    goto LABEL_81;
  v16 = *(_QWORD *)&v15->fields.svtId.fields.currentCryptoKey;
  v17 = *(_QWORD *)&v15->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method, v6);
  *(_QWORD *)&v56.fields.currentCryptoKey = v16;
  *(_QWORD *)&v56.fields.fakeValue = v17;
  v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v56, 0);
  IsAppendSkillExchangeLimit = UserServantAppendPassiveSkillMaster__IsAppendSkillExchangeLimit(v18, 0);
  v20 = System_Collections_Generic_List_int__TypeInfo;
  this->fields.isAppendSkillExChangeLimit = IsAppendSkillExchangeLimit;
  v21 = (System_Collections_Generic_List_int__o *)sub_21FFEBC(v20);
  System_Collections_Generic_List_int____ctor(
    v21,
    (const MethodInfo_44328A8 *)Method_System_Collections_Generic_List_int___ctor__);
  v23 = v5->fields.svtUseSkillIdList;
  if ( !v23 )
LABEL_81:
    sub_21FFECC(userSvtEntity, method);
  v24 = 8;
  while ( 1 )
  {
    v25 = LODWORD(v23->max_length);
    v26 = v24 - 8;
    if ( v24 - 8 >= (int)v25 )
      break;
    if ( v26 >= v25 )
      goto LABEL_84;
    if ( *((int *)&v23->obj.klass + v24) < 1 )
      goto LABEL_80;
    v27 = v5->fields.svtSkillLvList;
    if ( !v27 )
      goto LABEL_81;
    if ( v26 >= LODWORD(v27->max_length) )
      goto LABEL_84;
    v28 = *((_DWORD *)&v27->obj.klass + v24);
    v29 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
    if ( v28 )
    {
      if ( !v29 )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method, v22);
      userSvtEntity = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_CombineAppendPassiveSkillMaster___);
      v31 = this->fields.userSvtEntity;
      if ( !v31 )
        goto LABEL_81;
      v32 = (CombineAppendPassiveSkillMaster_o *)userSvtEntity;
      v33 = *(_QWORD *)&v31->fields.svtId.fields.currentCryptoKey;
      v34 = *(_QWORD *)&v31->fields.svtId.fields.fakeValue;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method, v30);
      *(_QWORD *)&v57.fields.currentCryptoKey = v33;
      *(_QWORD *)&v57.fields.fakeValue = v34;
      userSvtEntity = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v57, 0);
      svtSkillNumsList = v5->fields.svtSkillNumsList;
      if ( !svtSkillNumsList )
        goto LABEL_81;
      if ( v26 >= LODWORD(svtSkillNumsList->max_length) )
        goto LABEL_84;
      v36 = v5->fields.svtSkillLvList;
      if ( !v36 )
        goto LABEL_81;
      if ( v26 >= LODWORD(v36->max_length) )
        goto LABEL_84;
      if ( !v32 )
        goto LABEL_81;
      userSvtEntity = (void *)CombineAppendPassiveSkillMaster__TryGetEntityWithTryNum(
                                v32,
                                &entity,
                                (int32_t)userSvtEntity,
                                *((_DWORD *)&svtSkillNumsList->obj.klass + v24),
                                *((_DWORD *)&v36->obj.klass + v24),
                                0);
      if ( ((unsigned __int8)userSvtEntity & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_81;
        userSvtEntity = (void *)CombineUtility__CheckCombineNeedItemsEnough(
                                  this->fields.userSvtEntity,
                                  entity->fields.itemIds,
                                  entity->fields.itemNums,
                                  v8,
                                  entity->fields.qp,
                                  0);
        if ( ((unsigned __int8)userSvtEntity & 1) != 0 )
        {
          v37 = v5->fields.svtUseSkillIdList;
          if ( !v37 )
            goto LABEL_81;
          if ( v26 >= LODWORD(v37->max_length) )
            goto LABEL_84;
          userSvtEntity = this->fields.enableAppendSkillUp;
          if ( !userSvtEntity )
            goto LABEL_81;
          method = (const MethodInfo *)*((unsigned int *)&v37->obj.klass + v24);
          v38 = *((_QWORD *)userSvtEntity + 2);
          v39 = Method_System_Collections_Generic_List_int__Add__;
          ++*((_DWORD *)userSvtEntity + 7);
          if ( !v38 )
            goto LABEL_81;
          v40 = *((int *)userSvtEntity + 6);
          if ( (unsigned int)v40 >= *(_DWORD *)(v38 + 24) )
          {
            v52 = v39[4];
LABEL_79:
            System_Collections_Generic_List_int___AddWithResize(
              (System_Collections_Generic_List_int__o *)userSvtEntity,
              (int32_t)method,
              *(const MethodInfo_4433138 **)(*(_QWORD *)(v52 + 192) + 112LL));
            goto LABEL_80;
          }
          v41 = (char *)(v38 + 4 * v40);
          *((_DWORD *)userSvtEntity + 6) = v40 + 1;
LABEL_76:
          *((_DWORD *)v41 + 8) = (_DWORD)method;
        }
      }
    }
    else
    {
      if ( !v29 )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method, v22);
      userSvtEntity = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_SvtAppendPassiveSkillUnlockMaster___);
      v43 = this->fields.userSvtEntity;
      if ( !v43 )
        goto LABEL_81;
      v44 = (SvtAppendPassiveSkillUnlockMaster_o *)userSvtEntity;
      v45 = *(_QWORD *)&v43->fields.svtId.fields.currentCryptoKey;
      v46 = *(_QWORD *)&v43->fields.svtId.fields.fakeValue;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method, v42);
      *(_QWORD *)&v58.fields.currentCryptoKey = v45;
      *(_QWORD *)&v58.fields.fakeValue = v46;
      userSvtEntity = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v58, 0);
      v47 = v5->fields.svtSkillNumsList;
      if ( !v47 )
        goto LABEL_81;
      if ( v26 >= LODWORD(v47->max_length) )
        goto LABEL_84;
      if ( !v44 )
        goto LABEL_81;
      userSvtEntity = SvtAppendPassiveSkillUnlockMaster__GetEntity(
                        v44,
                        (int32_t)userSvtEntity,
                        *((_DWORD *)&v47->obj.klass + v24),
                        0);
      if ( userSvtEntity )
      {
        userSvtEntity = (void *)CombineUtility__CheckCombineNeedItemsEnough(
                                  this->fields.userSvtEntity,
                                  *((System_Int32_array **)userSvtEntity + 3),
                                  *((System_Int32_array **)userSvtEntity + 4),
                                  v8,
                                  0,
                                  0);
        if ( ((unsigned __int8)userSvtEntity & 1) != 0 )
        {
          v48 = v5->fields.svtUseSkillIdList;
          if ( !v48 )
            goto LABEL_81;
          if ( v26 >= LODWORD(v48->max_length) )
            goto LABEL_84;
          if ( !v21 )
            goto LABEL_81;
          method = (const MethodInfo *)*((unsigned int *)&v48->obj.klass + v24);
          items = v21->fields._items;
          v50 = Method_System_Collections_Generic_List_int__Add__;
          ++v21->fields._version;
          if ( !items )
            goto LABEL_81;
          size = v21->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            v52 = v50[4];
            userSvtEntity = v21;
            goto LABEL_79;
          }
          v41 = (char *)items + 4 * size;
          v21->fields._size = size + 1;
          goto LABEL_76;
        }
      }
    }
LABEL_80:
    v23 = v5->fields.svtUseSkillIdList;
    ++v24;
    if ( !v23 )
      goto LABEL_81;
  }
  v53 = System_Linq_Enumerable__Any_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.enableAppendSkillUp,
          (const MethodInfo_38327B4 *)Method_System_Linq_Enumerable_Any_int___);
  v54 = (const MethodInfo_38327B4 *)Method_System_Linq_Enumerable_Any_int___;
  this->fields.isAppendSkillUpItemNum = v53;
  this->fields.isAppendSkillOpenItemNum = System_Linq_Enumerable__Any_int_(
                                            (System_Collections_Generic_IEnumerable_TSource__o *)v21,
                                            v54);
}


void CombineServantListViewItem__SetIsCombineExpCampaignTarget(
        CombineServantListViewItem_o *this,
        System_Collections_Generic_List_EventCampaignEntity__o *eventCampaignEntities,
        const MethodInfo *method)
{
  CombineServantListViewItem___c_c *v5; // x0
  struct CombineServantListViewItem___c_StaticFields *static_fields; // x8
  System_Predicate_object__o *_9__127_0; // x21
  Il2CppObject *v8; // x22
  struct CombineServantListViewItem___c_StaticFields *v9; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_Collections_Generic_List_T__o *All; // x0
  __int64 v17; // x1
  int klass; // w21
  _BOOL8 v19; // x0
  __int64 v20; // x1
  Il2CppObject *current; // x24
  UserServantEntity_o *userSvtEntity; // x0
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_593219D & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Array_IndexOf_int___);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventCampaignEntity__FindAll__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    sub_21FFC50(&System_Predicate_EventCampaignEntity__TypeInfo);
    sub_21FFC50(&Method_CombineServantListViewItem___c__SetIsCombineExpCampaignTarget_b__127_0__);
    sub_21FFC50(&CombineServantListViewItem___c_TypeInfo);
    byte_593219D = 1;
  }
  memset(&v24, 0, sizeof(v24));
  this->fields.isCombineExpCampaignTarget = 0;
  this->fields.combineExpCampaignValue = 0.0;
  if ( eventCampaignEntities && !this->fields.type )
  {
    v5 = CombineServantListViewItem___c_TypeInfo;
    if ( !*(&CombineServantListViewItem___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(CombineServantListViewItem___c_TypeInfo, eventCampaignEntities, method);
      v5 = CombineServantListViewItem___c_TypeInfo;
    }
    static_fields = v5->static_fields;
    _9__127_0 = (System_Predicate_object__o *)static_fields->__9__127_0;
    if ( !_9__127_0 )
    {
      if ( !*(&v5->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v5, eventCampaignEntities, method);
        static_fields = CombineServantListViewItem___c_TypeInfo->static_fields;
      }
      v8 = (Il2CppObject *)static_fields->__9;
      _9__127_0 = (System_Predicate_object__o *)sub_21FFEBC(System_Predicate_EventCampaignEntity__TypeInfo);
      System_Predicate_object____ctor(
        _9__127_0,
        v8,
        Method_CombineServantListViewItem___c__SetIsCombineExpCampaignTarget_b__127_0__,
        0);
      v9 = CombineServantListViewItem___c_TypeInfo->static_fields;
      v9->__9__127_0 = (struct System_Predicate_EventCampaignEntity__o *)_9__127_0;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v9->__9__127_0, (int32_t)_9__127_0, v10, v11, v12, v13, v14, v15);
    }
    All = System_Collections_Generic_List_object___FindAll(
            (System_Collections_Generic_List_object__o *)eventCampaignEntities,
            (System_Predicate_T__o *)_9__127_0,
            (const MethodInfo_4450234 *)Method_System_Collections_Generic_List_EventCampaignEntity__FindAll__);
    if ( !All )
      sub_21FFECC(0, v17);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v23,
      (System_Collections_Generic_List_object__o *)All,
      (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    klass = 0;
    v24 = v23;
    v23.fields._list = 0;
    *(_QWORD *)&v23.fields._index = &v24;
    while ( 1 )
    {
      while ( 1 )
      {
        v19 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v24,
                (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
        if ( !v19 )
        {
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v24,
            (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
          this->fields.combineExpCampaignValue = (float)klass / 1000.0;
          return;
        }
        current = v24.fields._current;
        if ( !v24.fields._current )
          sub_21FFECC(v19, v20);
        if ( HIDWORD(v24.fields._current[1].klass) == 27 )
          break;
        if ( (System_Array__IndexOf_int_(
                (System_Int32_array *)v24.fields._current[2].monitor,
                this->fields.svtId,
                (const MethodInfo_39FAFC4 *)Method_System_Array_IndexOf_int___)
            & 0x80000000) == 0 )
          goto LABEL_20;
      }
      userSvtEntity = this->fields.userSvtEntity;
      if ( !userSvtEntity )
        sub_21FFECC(0, v20);
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._NoticeTween_k__BackingField = noticeTween;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._NoticeTween_k__BackingField,
    (int32_t)noticeTween,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void CombineServantListViewItem__SetOverwriteStatus(CombineServantListViewItem_o *this, const MethodInfo *method)
{
  void *userSvtEntity; // x0
  int32_t v4; // w10
  int32_t v5; // w9

  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity
    || (userSvtEntity = UserServantEntity__GetOverwriteStatus((UserServantEntity_o *)userSvtEntity, 0, 0)) == 0 )
  {
    sub_21FFECC(userSvtEntity, method);
  }
  *(_QWORD *)&this->fields.hp = *((_QWORD *)userSvtEntity + 2);
  v4 = *((_DWORD *)userSvtEntity + 7);
  v5 = *((_DWORD *)userSvtEntity + 10);
  this->fields.rarity = *((_DWORD *)userSvtEntity + 6);
  this->fields.actualRarity = v5;
  this->fields.cost = v4;
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
  __int64 v22; // x2
  int max_length; // w8
  UserItemMaster_o *v24; // x25
  unsigned int v25; // w9
  unsigned int v26; // w29
  struct UserServantEntity_o *v27; // x8
  __int128 v28; // q1
  int32_t v29; // w23
  int32_t v30; // w26
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

  if ( (byte_5932196 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_CombineSkillMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_21FFC50(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5932196 = 1;
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
        SelfUserGame = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !SelfUserGame )
          goto LABEL_60;
        SelfUserGame = (int64_t)DataManager__GetMasterData_object_(
                                  (DataManager_o *)SelfUserGame,
                                  (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_SkillMaster___);
        if ( !SelfUserGame )
          goto LABEL_60;
        SelfUserGame = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)SelfUserGame,
                                  v11,
                                  (const MethodInfo_3EDD388 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
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
  SelfUserGame = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_60;
  SelfUserGame = (int64_t)DataManager__GetMasterData_object_(
                            (DataManager_o *)SelfUserGame,
                            (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_CombineSkillMaster___);
  v13 = *(_QWORD *)(v7 + 24);
  if ( (int)v13 >= 1 )
  {
    v14 = (CombineSkillMaster_o *)SelfUserGame;
    v15 = 0;
    v16 = 0;
    v35 = v7;
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
          SelfUserGame = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !SelfUserGame )
            goto LABEL_60;
          SelfUserGame = (int64_t)DataManager__GetMasterData_object_(
                                    (DataManager_o *)SelfUserGame,
                                    (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserItemMaster___);
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
              v29 = itemNums->m_Items[v25];
              *(_OWORD *)&v38.fields.currentCryptoKey = *(_OWORD *)&v27->fields.userId.fields.currentCryptoKey;
              *(_OWORD *)&v38.fields.fakeValue = v28;
              v30 = itemIds->m_Items[v25];
              if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v4, v22);
              v37 = v38;
              SelfUserGame = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v37, 0);
              if ( !v24 )
                goto LABEL_60;
              SelfUserGame = UserItemMaster__TryGetEntity(v24, &v39, SelfUserGame, v30, 0);
              if ( (SelfUserGame & 1) == 0 )
                break;
              if ( !v39 )
                goto LABEL_60;
              if ( v29 > v39->fields.num )
                break;
              max_length = itemIds->max_length;
              v25 = v26 + 1;
              if ( (int)(v26 + 1) >= max_length )
              {
                v16 = 1;
                goto LABEL_47;
              }
            }
            v16 = 0;
          }
LABEL_47:
          if ( !v36 || !entity )
            goto LABEL_60;
          v14 = v19;
          v7 = v35;
          if ( ((*(_QWORD *)(v36 + 96) >= entity->fields.qp) & (unsigned __int8)v16) == 1 )
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
                v17,
                *(const MethodInfo_4433138 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
            }
            else
            {
              *(_DWORD *)(SelfUserGame + 24) = v33 + 1;
              *(_DWORD *)(v31 + 4 * v33 + 32) = v17;
            }
            v16 = 1;
          }
          else
          {
            v16 = 0;
          }
        }
      }
      LODWORD(v13) = *(_DWORD *)(v7 + 24);
      if ( (__int64)++v15 >= (int)v13 )
        goto LABEL_58;
    }
LABEL_61:
    sub_21FFED4(SelfUserGame);
  }
LABEL_58:
  enableSkillUp = this->fields.enableSkillUp;
  if ( !enableSkillUp )
LABEL_60:
    sub_21FFECC(SelfUserGame, v4);
  this->fields.isSkillUpItemNum = enableSkillUp->fields._size > 0;
}


bool CombineServantListViewItem__SetSortValue(
        CombineServantListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int64_t Instance; // x0
  const MethodInfo *v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  __int64 v14; // x2
  int bonusKind2; // w8
  int32_t v16; // w8
  int32_t v17; // w2
  int32_t bonusKind2Id; // w8
  int32_t v19; // w8
  bool IsEnableServant; // w0
  struct ListViewManager_o *v21; // x8
  __int64 v22; // x11
  UnityEngine_Object_o *v23; // x21
  __int64 v24; // x1
  __int64 v25; // x2
  Il2CppObject *MasterData_object; // x21
  int32_t svtId; // w22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // kr00_16
  System_Collections_Generic_List_EventGroupEntity__o *EntitiesByGroupId; // x22
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  struct ListViewManager_o *manager; // x8
  CombineServantListViewManager_c *v37; // x9
  __int64 naturalAligment; // x10
  struct ListViewManager_o *v39; // x11
  int32_t v40; // w8
  __int64 v41; // x2
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v43; // q1
  int32_t bonusKindId; // w22
  int64_t v45; // x0
  bool IsExchangeSvtExist; // w0
  int32_t v47; // w1
  MissionNaviTransitionBoardItem_o *v48; // x0
  System_Func_object__bool__o *v49; // x23
  const MethodInfo *v50; // x2
  _BOOL4 isChoice; // w8
  _BOOL4 isLock; // w23
  _BOOL4 v53; // w8
  int v54; // w10
  int v55; // w21
  __int64 v56; // x2
  int64_t *p_sortValue0; // x22
  __int64 v58; // x8
  char v59; // w8
  unsigned int v60; // w8
  __int64 v61; // x8
  int32_t type; // w8
  __int64 v63; // x8
  char v64; // w8
  int32_t v65; // w8
  __int64 v66; // x9
  bool v67; // zf
  __int64 v68; // x8
  char v69; // w8
  int64_t v70; // x8
  int64_t amountSortValue; // x21
  struct ListViewManager_o *v72; // x8
  __int64 v73; // x11
  struct ListViewManager_o *v74; // x20
  unsigned int v75; // w8
  IconLabelInfo_o *v76; // x21
  int32_t v77; // w20
  int64_t atkReinforceValue; // x2
  int64_t hp; // x20
  IconLabelInfo_o *v80; // x21
  int64_t hpReinforceValue; // x2
  int64_t v82; // x20
  struct IconLabelInfo_o *v83; // x21
  int32_t v84; // w3
  IconLabelInfo_o *v85; // x0
  int32_t v86; // w2
  IconLabelInfo_o *iconLabelInfo1; // x20
  int32_t v88; // w21
  struct UserServantEntity_o *v89; // x8
  int32_t v90; // w8
  struct UserServantEntity_o *v91; // x8
  struct UserServantEntity_o *v92; // x8
  __int128 v93; // q1
  struct UserServantEntity_o *v94; // x8
  int64_t atk; // x20
  IconLabelInfo_o *v96; // x21
  struct IconLabelInfo_o *v97; // x19
  int64_t cost; // x2
  int64_t friendship; // x2
  int32_t v100; // w2
  IconLabelInfo_o *iconLabelInfo2; // x20
  int32_t v102; // w21
  struct UserServantEntity_o *v103; // x8
  __int64 v104; // x21
  __int64 v105; // x22
  __int64 rarity; // x20
  __int64 v107; // x9
  int32_t v108; // w20
  __int64 v109; // x24
  char v110; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v112; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v113; // [xsp+30h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v114; // [xsp+50h] [xbp-60h]
  int32_t tdMaxLv[2]; // [xsp+78h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v116; // 0:x0.16

  if ( (byte_593219C & 1) == 0 )
  {
    sub_21FFC50(&Method_BasicHelper_Any_EventGroupEntity___);
    sub_21FFC50(&CombineServantListViewManager_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantFilterMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_EventGroupMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&System_Func_EventGroupEntity__bool__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventGroupEntity__get_Count__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&TutorialFlag_TypeInfo);
    sub_21FFC50(&Method_CombineServantListViewItem___c__DisplayClass126_0__SetSortValue_b__0__);
    sub_21FFC50(&CombineServantListViewItem___c__DisplayClass126_0_TypeInfo);
    byte_593219C = 1;
  }
  *(_QWORD *)tdMaxLv = 0;
  v5 = sub_21FFEBC(CombineServantListViewItem___c__DisplayClass126_0_TypeInfo);
  CombineServantListViewItem___c__DisplayClass126_0___ctor((CombineServantListViewItem___c__DisplayClass126_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_334;
  *(_QWORD *)(v5 + 16) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_WORD *)&this->fields.isTermination = 0;
  this->fields.sortValue1 = -1;
  *(_WORD *)&this->fields.isDispAtkStatusUpInfo = 0;
  if ( !sort )
    goto LABEL_334;
  if ( !sort->fields.isBonusKind || this->fields.isBaseSvt || ListViewItem__get_IsSelect((ListViewItem_o *)this, 0) )
    goto LABEL_84;
  bonusKind2 = sort->fields.bonusKind2;
  if ( bonusKind2 > 3 )
  {
    if ( (unsigned int)(bonusKind2 - 4) >= 2 )
    {
      if ( bonusKind2 != 7 )
        goto LABEL_84;
      if ( this->fields.bonusKind == 7 )
      {
        bonusKind2Id = sort->fields.bonusKind2Id;
        if ( this->fields.bonusKindId == bonusKind2Id )
          goto LABEL_83;
      }
      else
      {
        bonusKind2Id = sort->fields.bonusKind2Id;
      }
      this->fields.bonusKind = 7;
      this->fields.bonusKindId = bonusKind2Id;
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_334;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantFilterMaster___);
      svtId = this->fields.svtId;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v24, v25);
      v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(svtId, 0);
      v7 = *(const MethodInfo **)&v28.fields.fakeValue;
      Instance = *(_QWORD *)&v28.fields.currentCryptoKey;
      if ( !MasterData_object )
        goto LABEL_334;
      IsEnableServant = ServantFilterMaster__IsEnableServant(
                          (ServantFilterMaster_o *)MasterData_object,
                          v28,
                          this->fields.bonusKindId,
                          0);
    }
    else
    {
      if ( this->fields.bonusKind == bonusKind2 )
      {
        v17 = sort->fields.bonusKind2Id;
        if ( this->fields.bonusKindId == v17 )
          goto LABEL_83;
      }
      else
      {
        v17 = sort->fields.bonusKind2Id;
      }
      Instance = (int64_t)this->fields.userSvtEntity;
      this->fields.bonusKind = bonusKind2;
      this->fields.bonusKindId = v17;
      if ( !Instance )
        goto LABEL_334;
      IsEnableServant = UserServantEntity__getEventUpVal(
                          (UserServantEntity_o *)Instance,
                          this->fields.setupInfo,
                          v17,
                          0,
                          0);
    }
LABEL_42:
    this->fields.isEventUpVal = IsEnableServant;
    if ( !IsEnableServant )
      goto LABEL_117;
    goto LABEL_84;
  }
  switch ( bonusKind2 )
  {
    case 0:
      if ( this->fields.bonusKind )
      {
        v19 = sort->fields.bonusKind2Id;
      }
      else
      {
        v19 = sort->fields.bonusKind2Id;
        if ( this->fields.bonusKindId == v19 )
          goto LABEL_83;
      }
      this->fields.bonusKind = 0;
      this->fields.bonusKindId = v19;
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v7, v14);
      Instance = (int64_t)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_EventGroupMaster___);
      if ( !Instance )
        goto LABEL_334;
      EntitiesByGroupId = EventGroupMaster__GetEntitiesByGroupId(
                            (EventGroupMaster_o *)Instance,
                            this->fields.bonusKindId,
                            0);
      Instance = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)EntitiesByGroupId, 0);
      if ( (Instance & 1) == 0 )
      {
        if ( !EntitiesByGroupId )
          goto LABEL_334;
        if ( EntitiesByGroupId->fields._size >= 2 )
        {
          manager = sort->fields.manager;
          if ( manager )
          {
            v37 = CombineServantListViewManager_TypeInfo;
            naturalAligment = CombineServantListViewManager_TypeInfo->_2.naturalAligment;
            if ( manager->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
            {
              if ( (CombineServantListViewManager_c *)manager->klass->_2.typeHierarchy[naturalAligment - 1] == CombineServantListViewManager_TypeInfo )
                v39 = sort->fields.manager;
              else
                v39 = 0;
            }
            else
            {
              v39 = 0;
            }
            *(_QWORD *)(v5 + 24) = v39;
            v48 = (MissionNaviTransitionBoardItem_o *)(v5 + 24);
            if ( manager->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
            {
              if ( (CombineServantListViewManager_c *)manager->klass->_2.typeHierarchy[naturalAligment - 1] == v37 )
                v47 = (int)manager;
              else
                v47 = 0;
            }
            else
            {
              v47 = 0;
            }
          }
          else
          {
            v47 = 0;
            *(_QWORD *)(v5 + 24) = 0;
            v48 = (MissionNaviTransitionBoardItem_o *)(v5 + 24);
          }
          sub_21FFBF4(v48, v47, v30, v31, v32, v33, v34, v35);
          v49 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_EventGroupEntity__bool__TypeInfo);
          System_Func_object__bool____ctor(
            v49,
            (Il2CppObject *)v5,
            Method_CombineServantListViewItem___c__DisplayClass126_0__SetSortValue_b__0__,
            0);
          this->fields.isEventUpVal = BasicHelper__Any_object_(
                                        (System_Collections_Generic_List_T__o *)EntitiesByGroupId,
                                        (System_Func_T__bool__o *)v49,
                                        (const MethodInfo_37DCA30 *)Method_BasicHelper_Any_EventGroupEntity___);
        }
      }
LABEL_83:
      if ( !this->fields.isEventUpVal )
        goto LABEL_117;
      break;
    case 2:
      v21 = sort->fields.manager;
      if ( v21
        && (v22 = CombineServantListViewManager_TypeInfo->_2.naturalAligment,
            v21->klass->_2.naturalAligment >= (unsigned int)v22) )
      {
        if ( (CombineServantListViewManager_c *)v21->klass->_2.typeHierarchy[v22 - 1] == CombineServantListViewManager_TypeInfo )
          v23 = (UnityEngine_Object_o *)sort->fields.manager;
        else
          v23 = 0;
      }
      else
      {
        v23 = 0;
      }
      if ( this->fields.bonusKind == 2 )
      {
        v40 = sort->fields.bonusKind2Id;
        if ( this->fields.bonusKindId == v40 )
          goto LABEL_69;
      }
      else
      {
        v40 = sort->fields.bonusKind2Id;
      }
      this->fields.bonusKind = 2;
      this->fields.bonusKindId = v40;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v14);
      Instance = UnityEngine_Object__op_Implicit(v23, 0);
      if ( (Instance & 1) != 0 )
      {
        if ( !v23 )
          goto LABEL_334;
        Instance = CombineServantListViewManager__IsLargeSuccessCampaignClassId(
                     (CombineServantListViewManager_o *)v23,
                     this->fields.bonusKindId,
                     this->fields.svtId,
                     0);
        userSvtEntity = this->fields.userSvtEntity;
        this->fields.isEventUpVal = Instance & 1;
        if ( !userSvtEntity )
          goto LABEL_334;
        v43 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
        bonusKindId = this->fields.bonusKindId;
        *(_OWORD *)&v114.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v114.fields.fakeValue = v43;
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v7, v41);
        v113 = v114;
        v45 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v113, 0);
        IsExchangeSvtExist = CombineServantListViewManager__IsExchangeSvtExist(
                               (CombineServantListViewManager_o *)v23,
                               bonusKindId,
                               v45,
                               0);
LABEL_70:
        if ( !this->fields.isEventUpVal && !IsExchangeSvtExist )
          goto LABEL_117;
        break;
      }
LABEL_69:
      IsExchangeSvtExist = 0;
      goto LABEL_70;
    case 3:
      if ( this->fields.bonusKind == 3 )
      {
        v16 = sort->fields.bonusKind2Id;
        if ( this->fields.bonusKindId == v16 )
          goto LABEL_83;
      }
      else
      {
        v16 = sort->fields.bonusKind2Id;
      }
      this->fields.bonusKind = 3;
      this->fields.bonusKindId = v16;
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v7, v14);
      Instance = (int64_t)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_EventCampaignMaster___);
      if ( !Instance )
        goto LABEL_334;
      IsEnableServant = EventCampaignMaster__IsEnableServant(
                          (EventCampaignMaster_o *)Instance,
                          this->fields.svtId,
                          this->fields.bonusKindId,
                          0);
      goto LABEL_42;
  }
LABEL_84:
  if ( this->fields.isBaseSvt || ListViewItem__get_IsSelect((ListViewItem_o *)this, 0) )
    goto LABEL_86;
  type = this->fields.type;
  if ( type == 1 )
  {
    if ( !CombineServantListViewItem__IsMatchMaterialFilter(this, sort, v50) )
      goto LABEL_117;
    goto LABEL_86;
  }
  if ( !type )
  {
    if ( !CombineServantListViewItem__IsMatchBaseServantFilter(this, sort, v50) )
      goto LABEL_117;
LABEL_86:
    Instance = (int64_t)this->fields.iconLabelInfo2;
    isChoice = this->fields.isChoice;
    if ( this->fields.isSwapLock )
      isLock = !this->fields.isLock;
    else
      isLock = this->fields.isLock;
    v67 = !isChoice;
    v53 = isChoice;
    v54 = v67;
    if ( this->fields.isSwapChoice )
      v55 = v54;
    else
      v55 = v53;
    if ( !Instance )
      goto LABEL_334;
    IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0);
    this->fields.sortValue0 = 0;
    this->fields.sortValue0B = 0;
    p_sortValue0 = &this->fields.sortValue0;
    if ( !sort->fields.isSmartSort )
    {
      v59 = v55 ^ 1;
      if ( !sort->fields.isChoiceSort )
        v59 = 1;
      if ( (v59 & 1) == 0 )
      {
        v60 = this->fields.type;
        if ( v60 <= 0xC )
        {
          if ( ((1 << v60) & 0x1FDD) != 0 )
            v61 = 10;
          else
LABEL_163:
            v61 = -10;
          *p_sortValue0 = v61;
        }
      }
LABEL_215:
      Instance = 1;
      switch ( sort->fields.sortKind )
      {
        case 0:
          if ( !this )
            break;
          Instance = (int64_t)this->fields.userSvtEntity;
          v70 = !this->fields.isParty;
          goto LABEL_288;
        case 1:
          v92 = this->fields.userSvtEntity;
          if ( !v92 )
            break;
          v93 = *(_OWORD *)&v92->fields.id.fields.fakeValue;
          *(_OWORD *)&v114.fields.currentCryptoKey = *(_OWORD *)&v92->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v114.fields.fakeValue = v93;
          if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v7, v56);
          v112 = v114;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v112, 0);
          v94 = this->fields.userSvtEntity;
          this->fields.sortValue1 = Instance;
          if ( !v94 )
            break;
          Instance = (int64_t)this->fields.iconLabelInfo1;
          if ( !Instance )
            break;
          IconLabelInfo__SetTime((IconLabelInfo_o *)Instance, 49, v94->fields.createdAt, 0, 0, 0, 0);
          goto LABEL_253;
        case 2:
          Instance = (int64_t)this->fields.userSvtEntity;
          this->fields.sortValue1 = this->fields.rarity;
          if ( !Instance )
            break;
          iconLabelInfo1 = this->fields.iconLabelInfo1;
          v88 = *(_DWORD *)(Instance + 400);
          Instance = UserServantEntity__getLevelMax((UserServantEntity_o *)Instance, 0);
          v89 = this->fields.userSvtEntity;
          if ( !v89 || !iconLabelInfo1 )
            break;
          IconLabelInfo__Set_47932852(iconLabelInfo1, 2, v88, Instance, 0, 0, 0, v89->fields.lv, 0, 0);
          v90 = this->fields.type;
          if ( v90 != 10 && v90 != 7 )
            goto LABEL_293;
          v91 = this->fields.userSvtEntity;
          if ( !v91 )
            break;
          Instance = (int64_t)this->fields.iconLabelInfo2;
          if ( !Instance )
            break;
          IconLabelInfo__Set_47932852(
            (IconLabelInfo_o *)Instance,
            36,
            this->fields.rarity,
            v91->fields.exceedCount,
            0,
            0,
            0,
            v91->fields.lv,
            this->fields.actualRarity,
            0);
          goto LABEL_293;
        case 3:
          Instance = (int64_t)this->fields.userSvtEntity;
          if ( !Instance )
            break;
          v82 = *(int *)(Instance + 400);
          v83 = this->fields.iconLabelInfo1;
          this->fields.sortValue1 = v82;
          Instance = UserServantEntity__getLevelMax((UserServantEntity_o *)Instance, 0);
          if ( !v83 )
            break;
          v84 = Instance;
          v85 = v83;
          v86 = v82;
          goto LABEL_292;
        case 4:
          Instance = (int64_t)this->fields.userSvtEntity;
          if ( !Instance )
            break;
          v75 = this->fields.type & 0xFFFFFFFE;
          this->fields.sortValue1 = *(int *)(Instance + 436);
          if ( v75 == 4 )
          {
            v76 = this->fields.iconLabelInfo1;
            v77 = *(_DWORD *)(Instance + 400);
            Instance = UserServantEntity__getLevelMax((UserServantEntity_o *)Instance, 0);
            if ( !v76 )
              break;
            IconLabelInfo__Set_47932852(v76, 2, v77, Instance, 0, 0, 0, 0, 0, 0);
          }
          else
          {
            UserServantEntity__getTreasureDeviceInfo_50128532((UserServantEntity_o *)Instance, &tdMaxLv[1], tdMaxLv, 0);
            v100 = tdMaxLv[1];
            Instance = (int64_t)this->fields.iconLabelInfo1;
            this->fields.sortValue1 = tdMaxLv[1];
            if ( !Instance )
              break;
            IconLabelInfo__Set_47932852((IconLabelInfo_o *)Instance, 33, v100, tdMaxLv[0], 0, 0, 0, 0, 0, 0);
LABEL_262:
            Instance = (int64_t)this->fields.userSvtEntity;
            if ( !Instance )
              break;
            iconLabelInfo2 = this->fields.iconLabelInfo2;
            v102 = *(_DWORD *)(Instance + 400);
            Instance = UserServantEntity__getLevelMax((UserServantEntity_o *)Instance, 0);
            if ( !iconLabelInfo2 )
              break;
            IconLabelInfo__Set_47932852(iconLabelInfo2, 2, v102, Instance, 0, 0, 0, 0, 0, 0);
          }
          Instance = (int64_t)this->fields.servantEntity;
          if ( !Instance )
            break;
          if ( !ServantEntity__get_IsExpUp((ServantEntity_o *)Instance, 0) )
          {
            Instance = (int64_t)this->fields.servantEntity;
            if ( !Instance )
              break;
            if ( !ServantEntity__get_IsStatusUp((ServantEntity_o *)Instance, 0) )
            {
              Instance = (int64_t)this->fields.servantEntity;
              if ( !Instance )
                break;
              if ( !ServantEntity__get_IsServantMaterialTd((ServantEntity_o *)Instance, 0) )
              {
LABEL_293:
                LOBYTE(Instance) = 1;
                return Instance;
              }
            }
          }
          Instance = (int64_t)this->fields.iconLabelInfo1;
          if ( Instance )
          {
            IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0);
            Instance = (int64_t)this->fields.iconLabelInfo2;
            if ( Instance )
            {
              IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0);
              goto LABEL_293;
            }
          }
          break;
        case 5:
          hp = this->fields.hp;
          Instance = (int64_t)this->fields.userSvtEntity;
          this->fields.sortValue1 = hp;
          if ( !Instance )
            break;
          v80 = this->fields.iconLabelInfo1;
          Instance = UserServantEntity__get_HpBoostValue((UserServantEntity_o *)Instance, 0);
          if ( !v80 )
            break;
          IconLabelInfo__Set_47932852(v80, 3, hp, Instance, 0, 0, 0, 0, 0, 0);
          goto LABEL_253;
        case 6:
          atk = this->fields.atk;
          Instance = (int64_t)this->fields.userSvtEntity;
          this->fields.sortValue1 = atk;
          if ( !Instance )
            break;
          v96 = this->fields.iconLabelInfo1;
          Instance = UserServantEntity__get_AtkBoostValue((UserServantEntity_o *)Instance, 0);
          if ( !v96 )
            break;
          IconLabelInfo__Set_47932852(v96, 5, atk, Instance, 0, 0, 0, 0, 0, 0);
LABEL_253:
          Instance = (int64_t)this->fields.userSvtEntity;
          if ( !Instance )
            break;
          v97 = this->fields.iconLabelInfo2;
          goto LABEL_290;
        case 7:
          cost = this->fields.cost;
          Instance = (int64_t)this->fields.iconLabelInfo1;
          this->fields.sortValue1 = cost;
          if ( !Instance )
            break;
          IconLabelInfo__Set_47932852((IconLabelInfo_o *)Instance, 7, cost, 0, 0, 0, 0, 0, 0, 0);
          goto LABEL_262;
        case 8:
          Instance = (int64_t)this->fields.userSvtEntity;
          v70 = -this->fields.priority;
          goto LABEL_288;
        case 0xA:
          friendship = this->fields.friendship;
          Instance = (int64_t)this->fields.iconLabelInfo1;
          this->fields.sortValue1 = friendship;
          if ( !Instance )
            break;
          IconLabelInfo__Set_47932852(
            (IconLabelInfo_o *)Instance,
            32,
            friendship,
            this->fields.friendshipMax,
            0,
            0,
            0,
            0,
            0,
            0);
          goto LABEL_262;
        case 0xE:
          amountSortValue = this->fields.amountSortValue;
          if ( (amountSortValue & 0x8000000000000000LL) == 0 )
            goto LABEL_285;
          v72 = sort->fields.manager;
          if ( v72
            && (v73 = CombineServantListViewManager_TypeInfo->_2.naturalAligment,
                v72->klass->_2.naturalAligment >= (unsigned int)v73) )
          {
            if ( (CombineServantListViewManager_c *)v72->klass->_2.typeHierarchy[v73 - 1] == CombineServantListViewManager_TypeInfo )
              v74 = sort->fields.manager;
            else
              v74 = 0;
          }
          else
          {
            v74 = 0;
          }
          v103 = this->fields.userSvtEntity;
          if ( !v103 )
            break;
          v104 = *(_QWORD *)&v103->fields.svtId.fields.currentCryptoKey;
          v105 = *(_QWORD *)&v103->fields.svtId.fields.fakeValue;
          if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7, v56);
          *(_QWORD *)&v116.fields.currentCryptoKey = v104;
          *(_QWORD *)&v116.fields.fakeValue = v105;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v116, 0);
          if ( !v74 )
            break;
          amountSortValue = CombineServantListViewManager__GetAmountSortValue(
                              (CombineServantListViewManager_o *)v74,
                              Instance,
                              0);
          this->fields.amountSortValue = amountSortValue;
LABEL_285:
          Instance = (int64_t)this->fields.userSvtEntity;
          if ( !Instance )
            break;
          rarity = this->fields.rarity;
          Instance = (int64_t)UserServantEntity__get_BaseServantEntity((UserServantEntity_o *)Instance, 0);
          if ( !Instance )
            break;
          v107 = *(int *)(Instance + 208);
          Instance = (int64_t)this->fields.userSvtEntity;
          v70 = ((rarity << 32) + (amountSortValue << 48)) | v107;
LABEL_288:
          this->fields.sortValue1 = v70;
          if ( !Instance )
            break;
          v97 = this->fields.iconLabelInfo1;
LABEL_290:
          v108 = *(_DWORD *)(Instance + 400);
          Instance = UserServantEntity__getLevelMax((UserServantEntity_o *)Instance, 0);
          if ( !v97 )
            break;
          v84 = Instance;
          v85 = v97;
          v86 = v108;
LABEL_292:
          IconLabelInfo__Set_47932852(v85, 2, v86, v84, 0, 0, 0, 0, 0, 0);
          goto LABEL_293;
        case 0xF:
          hpReinforceValue = this->fields.hpReinforceValue;
          Instance = (int64_t)this->fields.iconLabelInfo1;
          this->fields.isDispHpStatusUpInfo = 1;
          this->fields.sortValue1 = hpReinforceValue;
          if ( !Instance )
            break;
          IconLabelInfo__Set_47932852(
            (IconLabelInfo_o *)Instance,
            44,
            hpReinforceValue,
            this->fields.nowMaxHpReinforceValue,
            0,
            0,
            0,
            0,
            0,
            0);
          goto LABEL_262;
        case 0x10:
          atkReinforceValue = this->fields.atkReinforceValue;
          Instance = (int64_t)this->fields.iconLabelInfo1;
          this->fields.isDispAtkStatusUpInfo = 1;
          this->fields.sortValue1 = atkReinforceValue;
          if ( !Instance )
            break;
          IconLabelInfo__Set_47932852(
            (IconLabelInfo_o *)Instance,
            45,
            atkReinforceValue,
            this->fields.nowMaxAtkReinforceValue,
            0,
            0,
            0,
            0,
            0,
            0);
          goto LABEL_262;
        default:
          return Instance;
      }
LABEL_334:
      sub_21FFECC(Instance, v7);
    }
    switch ( this->fields.type )
    {
      case 0:
        if ( this->fields.isHeroineSvt )
        {
          if ( !*(&TutorialFlag_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, v7, v56);
          if ( TutorialFlag__Get_47357952(126, 0) )
            goto LABEL_189;
        }
        if ( this->fields.isParty )
        {
          v58 = 20;
          goto LABEL_210;
        }
        if ( this->fields.isLvMax )
          goto LABEL_209;
        goto LABEL_211;
      case 1:
        Instance = (int64_t)this->fields.servantEntity;
        if ( !Instance )
          goto LABEL_334;
        if ( ServantEntity__get_IsExpUp((ServantEntity_o *)Instance, 0) )
        {
          if ( this->fields.isBaseLvMax )
          {
            v63 = -120;
          }
          else
          {
            v63 = 30;
            if ( isLock | v55 )
              v63 = -5;
          }
          goto LABEL_320;
        }
        Instance = (int64_t)this->fields.servantEntity;
        if ( !Instance )
          goto LABEL_334;
        if ( !ServantEntity__get_IsStatusUp((ServantEntity_o *)Instance, 0) )
        {
          if ( CombineServantListViewItem__get_IsCanNotSelectMaterial(this, v7) )
          {
            if ( this->fields.isLimitCntTarget )
            {
              v63 = -20;
            }
            else if ( this->fields.isParty )
            {
              v63 = -30;
            }
            else if ( this->fields.isGrandSvt )
            {
              v63 = -40;
            }
            else if ( this->fields.isUseSupport )
            {
              v63 = -50;
            }
            else
            {
              v63 = -60;
              if ( !this->fields.isUseRecommendSupport )
                v63 = -10;
            }
            goto LABEL_320;
          }
          goto LABEL_321;
        }
        if ( !this->fields.isSameClass )
        {
          v63 = -150;
LABEL_320:
          *p_sortValue0 = v63;
          goto LABEL_321;
        }
        v65 = this->fields.rarity;
        if ( this->fields.hpBase < 1 )
        {
          if ( v65 < 4 )
          {
            v66 = -110;
            v67 = !this->fields.isAtkUpMax;
            v68 = 70;
LABEL_306:
            if ( v67 )
              v109 = v68;
            else
              v109 = v66;
            goto LABEL_318;
          }
          v109 = -90;
          if ( !this->fields.isAtkSecondUpMax
            && !CombineServantListViewItem__IsCanNotSelectSecondStatusMaterial(this, v7) )
          {
            v109 = 90;
          }
        }
        else
        {
          if ( v65 < 4 )
          {
            v66 = -100;
            v67 = !this->fields.isHpUpMax;
            v68 = 80;
            goto LABEL_306;
          }
          v109 = -80;
          if ( !this->fields.isHpSecondUpMax
            && !CombineServantListViewItem__IsCanNotSelectSecondStatusMaterial(this, v7) )
          {
            v109 = 100;
          }
        }
LABEL_318:
        *p_sortValue0 = v109;
        if ( ((isLock | v55) & 1) != 0 )
        {
          v63 = -5;
          goto LABEL_320;
        }
LABEL_321:
        if ( this->fields.isFortification )
          *p_sortValue0 = -10;
        v110 = v55 ^ 1;
        if ( !sort->fields.isChoiceSort )
          v110 = 1;
        if ( (v110 & 1) == 0 )
          *(_OWORD *)p_sortValue0 = xmmword_E93A20;
        goto LABEL_215;
      case 2:
        if ( this->fields.isSealCombineLimit || this->fields.isSealedLimitCount && this->fields.isLimitCntMax )
        {
          v58 = 0;
          goto LABEL_210;
        }
        if ( !CombineServantListViewItem__get_IsCanNotBaseSelect(this, v7)
          && this->fields.isLimitUpItemNum
          && this->fields.isLvMax )
        {
LABEL_184:
          v58 = 10;
          goto LABEL_210;
        }
        if ( this->fields.isHeroineSvt )
          goto LABEL_209;
        if ( !this->fields.isLimitCntMax )
          goto LABEL_211;
        goto LABEL_189;
      case 3:
        if ( this->fields.isHeroineSvt )
        {
          if ( !*(&TutorialFlag_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, v7, v56);
          if ( TutorialFlag__Get_47357952(126, 0) )
            goto LABEL_189;
        }
        if ( this->fields.isSkillUpItemNum )
          goto LABEL_184;
        if ( !this->fields.isSkillLvMax )
          goto LABEL_211;
        goto LABEL_209;
      case 4:
        if ( this->fields.isSameSvt )
          goto LABEL_184;
        if ( this->fields.isHeroineSvt )
          goto LABEL_209;
        if ( !this->fields.isTdLvMax )
          goto LABEL_211;
        goto LABEL_189;
      case 5:
        v64 = v55 ^ 1;
        if ( !sort->fields.isChoiceSort )
          v64 = 1;
        if ( (v64 & 1) == 0 || this->fields.isFortification )
          goto LABEL_163;
        goto LABEL_215;
      case 6:
        if ( !CombineServantListViewItem__get_IsCanNotBaseSelect(this, v7)
          && this->fields.isLvMax
          && this->fields.isLimitCntMax
          && this->fields.isLvExceedItemNum )
        {
          goto LABEL_184;
        }
        if ( !this->fields.isHeroineSvt )
          goto LABEL_172;
        Instance = (int64_t)this->fields.userSvtEntity;
        if ( !Instance )
          goto LABEL_334;
        if ( !UserServantEntity__IsUseLevelExceedItemHeroine((UserServantEntity_o *)Instance, 0) )
          goto LABEL_209;
LABEL_172:
        if ( !this->fields.isLvExceedMax )
          goto LABEL_211;
        goto LABEL_189;
      case 7:
        if ( this->fields.isEventJoin )
          goto LABEL_209;
        if ( !this->fields.isHeroineSvt )
          goto LABEL_211;
        if ( !*(&TutorialFlag_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, v7, v56);
        if ( !TutorialFlag__Get_47357952(126, 0) )
          goto LABEL_211;
        goto LABEL_189;
      case 8:
        if ( !CombineServantListViewItem__get_IsCanNotBaseSelect(this, v7)
          && this->fields.isFriendshipRankMax
          && this->fields.isFriendshipExceedItemNum )
        {
          goto LABEL_184;
        }
        if ( !this->fields.isHeroineSvt )
          goto LABEL_188;
        Instance = (int64_t)this->fields.userSvtEntity;
        if ( !Instance )
          goto LABEL_334;
        if ( !UserServantEntity__IsUseFriendshipExceedItemHeroine((UserServantEntity_o *)Instance, 0) )
          goto LABEL_209;
LABEL_188:
        if ( this->fields.isFriendshipExceedMax )
          goto LABEL_189;
        goto LABEL_211;
      case 9:
        if ( !CombineServantListViewItem__get_IsCanNotBaseSelect(this, v7) )
          goto LABEL_184;
        if ( this->fields.isHeroineSvt )
          goto LABEL_209;
        if ( this->fields.isSealCombineLimit )
        {
LABEL_139:
          v58 = -15;
          goto LABEL_210;
        }
        if ( this->fields.isLimitCntMax )
          goto LABEL_189;
        if ( !this->fields.isEventJoin )
          goto LABEL_211;
        goto LABEL_207;
      case 0xA:
        if ( this->fields.isHeroineSvt )
        {
          if ( !*(&TutorialFlag_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, v7, v56);
          if ( TutorialFlag__Get_47357952(126, 0) )
            goto LABEL_207;
        }
        if ( this->fields.isEventJoin )
          goto LABEL_189;
        if ( !this->fields.isCommandCardExceedMax )
          goto LABEL_211;
        goto LABEL_209;
      case 0xB:
        if ( this->fields.isHeroineSvt )
        {
          if ( !*(&TutorialFlag_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, v7, v56);
          if ( TutorialFlag__Get_47357952(126, 0) )
            goto LABEL_189;
        }
        if ( this->fields.isEventJoin )
          goto LABEL_139;
        if ( this->fields.isAppendSkillOpenItemNum || this->fields.isAppendSkillUpItemNum )
          goto LABEL_184;
        if ( !this->fields.isAppendSkillLvMax )
          goto LABEL_211;
        goto LABEL_209;
      case 0xC:
        if ( !this->fields.isHeroineSvt )
          goto LABEL_338;
        if ( !*(&TutorialFlag_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, v7, v56);
        if ( TutorialFlag__Get_47357952(126, 0) )
        {
          v58 = -40;
        }
        else
        {
LABEL_338:
          if ( this->fields.isEventJoin )
          {
            v58 = -35;
          }
          else if ( this->fields.isAppendSkillLvMax )
          {
LABEL_207:
            v58 = -30;
          }
          else if ( this->fields.isAllAppendSkillLock )
          {
LABEL_189:
            v58 = -20;
          }
          else
          {
            if ( !this->fields.isAppendSkillLvSame )
            {
LABEL_211:
              v69 = v55 ^ 1;
              if ( !sort->fields.isChoiceSort )
                v69 = 1;
              if ( (v69 & 1) == 0 )
                this->fields.sortValue0B = 10;
              goto LABEL_215;
            }
LABEL_209:
            v58 = -10;
          }
        }
LABEL_210:
        *p_sortValue0 = v58;
        goto LABEL_211;
      default:
        goto LABEL_215;
    }
  }
  if ( CombineServantListViewItem__IsMatchServantFilter(this, sort, v50) )
    goto LABEL_86;
LABEL_117:
  LOBYTE(Instance) = 0;
  return Instance;
}


bool CombineServantListViewItem__SwapChoice(CombineServantListViewItem_o *this, const MethodInfo *method)
{
  _BOOL4 isSwapChoice; // w9
  bool v4; // zf
  bool v5; // w9
  bool result; // w0

  isSwapChoice = this->fields.isSwapChoice;
  v4 = !isSwapChoice;
  v5 = !isSwapChoice;
  result = v4;
  this->fields.isSwapChoice = v5;
  return result;
}


bool CombineServantListViewItem__SwapLock(CombineServantListViewItem_o *this, const MethodInfo *method)
{
  _BOOL4 isSwapLock; // w9
  bool v4; // zf
  bool v5; // w9
  bool result; // w0

  isSwapLock = this->fields.isSwapLock;
  v4 = !isSwapLock;
  v5 = !isSwapLock;
  result = v4;
  this->fields.isSwapLock = v5;
  return result;
}


void CombineServantListViewItem__UpdateCategoryIdList(CombineServantListViewItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0
  __int64 v4; // x1
  UserServantEntity_o *v5; // x0
  bool v6; // w8
  _BOOL4 v7; // w20
  int32_t DispLimitCountStageSealAfterIndexZero; // w2
  struct System_Int32_array *SkillCategoryIdList; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x1
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7

  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
  {
    if ( UserServantEntity__get_IsSaveTransformServant(userSvtEntity, 0) )
    {
      v5 = this->fields.userSvtEntity;
      if ( !v5 )
        goto LABEL_13;
      v6 = !UserServantEntity__CheckBaseServant(v5, -1, 0);
    }
    else
    {
      v6 = 0;
    }
    v5 = this->fields.userSvtEntity;
    if ( v5 )
    {
      v7 = v6;
      DispLimitCountStageSealAfterIndexZero = UserServantEntity__GetDispLimitCountStageSealAfterIndexZero(v5, -1, 0, 0);
      if ( this->fields.isTransformed == v7 && this->fields.dispLimitCount == DispLimitCountStageSealAfterIndexZero )
        return;
      v5 = this->fields.userSvtEntity;
      this->fields.isTransformed = v7;
      this->fields.dispLimitCount = DispLimitCountStageSealAfterIndexZero;
      if ( v5 )
      {
        SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(
                                v5,
                                -1,
                                DispLimitCountStageSealAfterIndexZero,
                                0);
        this->fields.skillCategoryIdList = SkillCategoryIdList;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&this->fields.skillCategoryIdList,
          (int32_t)SkillCategoryIdList,
          v10,
          v11,
          v12,
          v13,
          v14,
          v15);
        v5 = this->fields.userSvtEntity;
        if ( v5 )
        {
          TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                           v5,
                                           0,
                                           this->fields.dispLimitCount,
                                           0);
          this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
          sub_21FFBF4(
            (MissionNaviTransitionBoardItem_o *)&this->fields.tdCategoryIdList,
            (int32_t)TreasureDeviceCategoryIdList,
            v17,
            v18,
            v19,
            v20,
            v21,
            v22);
          return;
        }
      }
    }
LABEL_13:
    sub_21FFECC(v5, v4);
  }
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


bool CombineServantListViewItem__get_IsAddParam1Max(CombineServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isNotSelectAddParam1;
}


bool CombineServantListViewItem__get_IsAddParam2Max(CombineServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isNotSelectAddParam2;
}


bool CombineServantListViewItem__get_IsAtkAdjustMax(CombineServantListViewItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0

  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_21FFECC(0, method);
  return UserServantEntity__IsAdjustAtkMax(userSvtEntity, 0);
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
  __int64 v2; // x2
  char isHeroineSvt; // w8
  int32_t type; // w9
  _BOOL4 isSealCombineLimit; // w8
  UserServantEntity_o *UserSvtEntity; // x0
  __int64 v8; // x1
  bool IsUseFriendshipExceedItemHeroine; // w0

  if ( (byte_59321A1 & 1) == 0 )
  {
    sub_21FFC50(&TutorialFlag_TypeInfo);
    byte_59321A1 = 1;
  }
  if ( this->fields.isHeroineSvt )
  {
    if ( !*(&TutorialFlag_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, method, v2);
    if ( TutorialFlag__Get_47357952(126, 0) )
      goto LABEL_7;
  }
  type = this->fields.type;
  isHeroineSvt = 1;
  if ( type > 6 )
  {
    if ( type > 9 )
    {
      if ( type == 10 )
      {
        if ( this->fields.isCommandCardExceedMax )
          goto LABEL_7;
      }
      else
      {
        if ( type != 11 )
        {
          if ( type != 12 )
            return isHeroineSvt & 1;
          if ( this->fields.isAppendSkillExChangeLimit || this->fields.isAllAppendSkillLock )
            goto LABEL_7;
        }
        if ( this->fields.isAppendSkillLvMax )
          goto LABEL_7;
      }
    }
    else if ( type != 7 )
    {
      if ( type != 8 )
      {
        if ( !this->fields.isLimitCntMax
          && !this->fields.isHeroineSvt
          && !this->fields.isEventJoin
          && !this->fields.isIgnoreCombineLimitSpecial )
        {
          isSealCombineLimit = this->fields.isSealCombineLimit;
LABEL_54:
          isHeroineSvt = isSealCombineLimit;
          return isHeroineSvt & 1;
        }
        goto LABEL_7;
      }
      if ( this->fields.isFriendshipExceedMax || this->fields.isEventJoin )
        goto LABEL_7;
      isHeroineSvt = this->fields.isHeroineSvt;
      if ( !isHeroineSvt )
        return isHeroineSvt & 1;
      UserSvtEntity = CombineServantListViewItem__get_UserSvtEntity(this, method);
      if ( UserSvtEntity )
      {
        IsUseFriendshipExceedItemHeroine = UserServantEntity__IsUseFriendshipExceedItemHeroine(UserSvtEntity, 0);
        goto LABEL_50;
      }
      goto LABEL_56;
    }
    isSealCombineLimit = this->fields.isEventJoin;
    goto LABEL_54;
  }
  if ( type > 2 )
  {
    if ( type == 3 )
    {
      isSealCombineLimit = this->fields.isSkillLvMax;
      goto LABEL_54;
    }
    if ( type != 4 )
    {
      if ( type != 6 )
        return isHeroineSvt & 1;
      if ( this->fields.isLvExceedMax || this->fields.isEventJoin )
        goto LABEL_7;
      isHeroineSvt = this->fields.isHeroineSvt;
      if ( !isHeroineSvt )
        return isHeroineSvt & 1;
      UserSvtEntity = CombineServantListViewItem__get_UserSvtEntity(this, method);
      if ( UserSvtEntity )
      {
        IsUseFriendshipExceedItemHeroine = UserServantEntity__IsUseLevelExceedItemHeroine(UserSvtEntity, 0);
LABEL_50:
        isHeroineSvt = !IsUseFriendshipExceedItemHeroine;
        return isHeroineSvt & 1;
      }
LABEL_56:
      sub_21FFECC(UserSvtEntity, v8);
    }
    if ( this->fields.isTdLvMax )
      goto LABEL_7;
LABEL_44:
    isSealCombineLimit = this->fields.isHeroineSvt;
    goto LABEL_54;
  }
  if ( type )
  {
    if ( type != 2 )
      return isHeroineSvt & 1;
    if ( this->fields.isLimitCntMax && !this->fields.isSealedLimitCount )
      goto LABEL_7;
    goto LABEL_44;
  }
  if ( !this->fields.isLvMax && !this->fields.isExpUpSvt && (!this->fields.isStatusUpSvt || this->fields.isCanStUp) )
  {
    isSealCombineLimit = this->fields.isMaterialTdSvt;
    goto LABEL_54;
  }
LABEL_7:
  isHeroineSvt = 1;
  return isHeroineSvt & 1;
}


bool CombineServantListViewItem__get_IsCanNotLock(CombineServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isCanNotLock;
}


bool CombineServantListViewItem__get_IsCanNotSelect(CombineServantListViewItem_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t type; // w8

  if ( (byte_59321A2 & 1) == 0 )
  {
    sub_21FFC50(&TutorialFlag_TypeInfo);
    byte_59321A2 = 1;
  }
  type = this->fields.type;
  if ( (unsigned int)(type - 2) >= 3 )
  {
    if ( type == 5 )
    {
      if ( !CombineServantListViewItem__get_IsCanNotSelectMaterial(this, method)
        && !this->fields.isBaseSvt
        && !this->fields.isMaxNextLv
        && (!this->fields.isEventJoinBaseSvt || this->fields.isEventJoin || this->fields.isMaterialTdSvt) )
      {
        return this->fields.isFortification;
      }
    }
    else
    {
      if ( !type )
        goto LABEL_6;
      if ( !CombineServantListViewItem__get_IsCanNotSelectMaterial(this, method)
        && (!this->fields.isMaxNextLv || this->fields.isStatusUpSvt)
        && (!this->fields.isBaseLvMax || this->fields.isStatusUpSvt) )
      {
        return this->fields.isFortification;
      }
    }
    return 1;
  }
LABEL_6:
  if ( this->fields.isHeroineSvt )
  {
    if ( !*(&TutorialFlag_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, method, v2);
    if ( TutorialFlag__Get_47357952(126, 0) )
      return 1;
  }
  return this->fields.isStatusUpSvt && !this->fields.isCanStUp;
}


bool CombineServantListViewItem__get_IsCanNotSelectMaterial(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  bool IsStatusMax; // w20
  const MethodInfo *v4; // x1
  bool CanNotSelectSecondStatusMaterial; // w0
  const MethodInfo *v6; // x1
  _BOOL4 isStatusUpSvt; // w8
  bool v9; // [xsp+Ch] [xbp-14h]

  IsStatusMax = CombineServantListViewItem__IsStatusMax(this, method);
  CanNotSelectSecondStatusMaterial = CombineServantListViewItem__IsCanNotSelectSecondStatusMaterial(this, v4);
  if ( this->fields.isFavorite
    || this->fields.isLock
    || this->fields.isChoice
    || this->fields.isPush
    || this->fields.isHeroineSvt
    || this->fields.isEventJoin
    || this->fields.isParty
    || this->fields.isUseSupport
    || this->fields.isUseRecommendSupport
    || this->fields.isGrandSvt )
  {
    isStatusUpSvt = 1;
  }
  else
  {
    v9 = CanNotSelectSecondStatusMaterial;
    if ( this->fields.isLimitCntTarget
      || this->fields.type != 5 && CombineServantListViewItem__get_IsProtected(this, v6) )
    {
      isStatusUpSvt = 1;
    }
    else
    {
      isStatusUpSvt = this->fields.isStatusUpSvt;
      if ( this->fields.isStatusUpSvt )
        isStatusUpSvt = !this->fields.isCanStUp;
    }
    CanNotSelectSecondStatusMaterial = v9;
  }
  return isStatusUpSvt
      || CanNotSelectSecondStatusMaterial
      || IsStatusMax
      || this->fields.isNotSelectStatusUpHp
      || this->fields.isNotSelectStatusUpAtk
      || this->fields.isNotSelectSecondStatusUpHp
      || this->fields.isNotSelectSecondStatusUpAtk
      || this->fields.isNotSelectAddParam1
      || this->fields.isNotSelectAddParam2;
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
    sub_21FFECC(v6, v5);
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
    sub_21FFECC(0, method);
  return UserServantEntity__IsAdjustHpMax(userSvtEntity, 0);
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
    sub_21FFECC(0, method);
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
    sub_21FFECC(0, v4);
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
    sub_21FFECC(0, method);
  return UserServantEntity__IsSecondAdjustAtkMax(userSvtEntity, 0);
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
    sub_21FFECC(0, method);
  return UserServantEntity__IsSecondAdjustHpMax(userSvtEntity, 0);
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
  __int64 v2; // x2
  Il2CppObject *Master_object; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  struct UserServantEntity_o *userSvtEntity; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v8; // x19
  __int64 v9; // x20
  __int64 v10; // x21
  Il2CppObject *Entity; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_59321A3 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_SvtCoinMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__GetEntity__);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_59321A3 = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method, v2);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_SvtCoinMaster___);
  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_12;
  v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  v9 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5, v6);
  *(_QWORD *)&v13.fields.currentCryptoKey = v9;
  *(_QWORD *)&v13.fields.fakeValue = v10;
  Master_object = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v13, 0);
  if ( !v8 )
LABEL_12:
    sub_21FFECC(Master_object, v5);
  Entity = DataMasterBase_object__object__int___GetEntity(
             v8,
             (int32_t)Master_object,
             (const MethodInfo_3EDD388 *)Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__GetEntity__);
  if ( Entity )
    return (int32_t)Entity[1].monitor;
  else
    return -1;
}


int32_t CombineServantListViewItem__get_SkillOpenItemNum(CombineServantListViewItem_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  int v4; // w8
  int64_t Master_object; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  struct UserServantEntity_o *userSvtEntity; // x8
  UserSvtCoinMaster_o *v9; // x20
  __int128 v10; // q1
  __int64 v11; // x2
  struct UserServantEntity_o *v12; // x8
  int64_t v13; // x19
  __int64 v14; // x21
  __int64 v15; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v17; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v18; // [xsp+20h] [xbp-50h]
  UserSvtCoinEntity_o *entity; // [xsp+48h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_59321A4 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_UserSvtCoinMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_59321A4 = 1;
  }
  v4 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  entity = 0;
  if ( !v4 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method, v2);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserSvtCoinMaster___);
  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_17;
  v9 = (UserSvtCoinMaster_o *)Master_object;
  v10 = *(_OWORD *)&userSvtEntity->fields.userId.fields.fakeValue;
  *(_OWORD *)&v18.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v18.fields.fakeValue = v10;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v6, v7);
  v17 = v18;
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v17, 0);
  v12 = this->fields.userSvtEntity;
  if ( !v12 )
    goto LABEL_17;
  v13 = Master_object;
  v14 = *(_QWORD *)&v12->fields.svtId.fields.currentCryptoKey;
  v15 = *(_QWORD *)&v12->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6, v11);
  *(_QWORD *)&v20.fields.currentCryptoKey = v14;
  *(_QWORD *)&v20.fields.fakeValue = v15;
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v20, 0);
  if ( !v9 )
    goto LABEL_17;
  Master_object = UserSvtCoinMaster__TryGetEntity(v9, &entity, v13, Master_object, 0);
  if ( (Master_object & 1) != 0 )
  {
    if ( entity )
      return entity->fields.num;
LABEL_17:
    sub_21FFECC(Master_object, v6);
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
  __int64 v2; // x2
  CombineServantListViewItem_o *v3; // x19
  struct UserServantEntity_o *v4; // x8
  MissionNaviTransitionBoardItem_o *p_userSvtEntity; // x19
  struct UserServantEntity_o *userSvtEntity; // t1
  __int128 v7; // q0
  __int128 v8; // q1
  int v9; // w8
  int64_t v10; // x20
  Il2CppObject *Entity; // x20
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v19; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v20; // [xsp+20h] [xbp-40h]

  v3 = this;
  if ( (byte_593219F & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_21FFC50(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    this = (CombineServantListViewItem_o *)sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_593219F = 1;
  }
  userSvtEntity = v3->fields.userSvtEntity;
  p_userSvtEntity = (MissionNaviTransitionBoardItem_o *)&v3->fields.userSvtEntity;
  v4 = userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_9;
  v7 = *(_OWORD *)&v4->fields.id.fields.currentCryptoKey;
  v8 = *(_OWORD *)&v4->fields.id.fields.fakeValue;
  v9 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
  *(_OWORD *)&v20.fields.currentCryptoKey = v7;
  *(_OWORD *)&v20.fields.fakeValue = v8;
  if ( !v9 )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method, v2);
  v19 = v20;
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v19, 0);
  this = (CombineServantListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (this = (CombineServantListViewItem_o *)DataManager__GetMasterData_object_(
                                                 (DataManager_o *)this,
                                                 (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0 )
  {
LABEL_9:
    sub_21FFECC(this, method);
  }
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             v10,
             (const MethodInfo_3EDF9E8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  p_userSvtEntity->klass = (MissionNaviTransitionBoardItem_c *)Entity;
  sub_21FFBF4(p_userSvtEntity, (int32_t)Entity, v12, v13, v14, v15, v16, v17);
  return (UserServantEntity_o *)Entity;
}


int64_t CombineServantListViewItem__get_UserSvtId(CombineServantListViewItem_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  CombineServantListViewItem_o *v3; // x19
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v5; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v8; // [xsp+20h] [xbp-40h]

  v3 = this;
  if ( (byte_59321A0 & 1) == 0 )
  {
    this = (CombineServantListViewItem_o *)sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_59321A0 = 1;
  }
  userSvtEntity = v3->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_21FFECC(this, method);
  v5 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v8.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v8.fields.fakeValue = v5;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method, v2);
  v7 = v8;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v7, 0);
}


void CombineServantListViewItem__setUserServantEntity(
        CombineServantListViewItem_o *this,
        UserServantEntity_o *entity,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct UserServantEntity_o **p_userSvtEntity; // x20
  __int64 v11; // x1
  UserServantEntity_o *userSvtEntity; // x0
  struct ServantEntity_o *ServantEntity; // x0
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  __int64 v20; // x2
  struct ServantEntity_o *v21; // x8
  __int64 v22; // x21
  __int64 v23; // x22
  struct ServantEntity_o *v24; // x8
  const MethodInfo_476E8C0 *v25; // x0
  int64_t currentCryptoKey_high; // x8
  __int64 rarity; // x21
  _BOOL8 v28; // x10
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v29; // 0:x0.16

  if ( (byte_593219E & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_21FFC50(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_593219E = 1;
  }
  this->fields.userSvtEntity = entity;
  p_userSvtEntity = &this->fields.userSvtEntity;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.userSvtEntity,
    (int32_t)entity,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_18;
  ServantEntity = UserServantEntity__GetServantEntity(userSvtEntity, -1, 0);
  this->fields.servantEntity = ServantEntity;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.servantEntity,
    (int32_t)ServantEntity,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  v21 = this->fields.servantEntity;
  if ( !v21 )
    goto LABEL_18;
  v22 = *(_QWORD *)&v21->fields.id.fields.currentCryptoKey;
  v23 = *(_QWORD *)&v21->fields.id.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11, v20);
  *(_QWORD *)&v29.fields.currentCryptoKey = v22;
  *(_QWORD *)&v29.fields.fakeValue = v23;
  userSvtEntity = (UserServantEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v29, 0);
  v24 = this->fields.servantEntity;
  this->fields.svtId = (int)userSvtEntity;
  if ( !v24 )
    goto LABEL_18;
  v25 = (const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__;
  this->fields.classId = v24->fields.classId;
  userSvtEntity = (UserServantEntity_o *)SingletonMonoBehaviour_object___get_Instance(v25);
  if ( !userSvtEntity )
    goto LABEL_18;
  userSvtEntity = (UserServantEntity_o *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)userSvtEntity,
                                           (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !userSvtEntity
    || (userSvtEntity = (UserServantEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                                 (DataMasterBase_TMaster__TEntity__PKType__o *)userSvtEntity,
                                                 this->fields.classId,
                                                 (const MethodInfo_3EDD388 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__)) == 0
    || (currentCryptoKey_high = SHIDWORD(userSvtEntity->fields.userId.fields.currentCryptoKey),
        userSvtEntity = this->fields.userSvtEntity,
        this->fields.priority = currentCryptoKey_high,
        this->fields.sortValue1B = currentCryptoKey_high,
        !userSvtEntity)
    || (rarity = (unsigned int)this->fields.rarity,
        (userSvtEntity = (UserServantEntity_o *)UserServantEntity__get_BaseServantEntity(userSvtEntity, 0)) == 0)
    || !*p_userSvtEntity )
  {
LABEL_18:
    sub_21FFECC(userSvtEntity, v11);
  }
  v28 = this->fields.type == 2 && !this->fields.isLimitCntMax;
  this->fields.sortValue2 = ((__int64)userSvtEntity->fields.randomLimitCount.fields.currentCryptoKey << 16)
                          | (rarity << 48)
                          | (*p_userSvtEntity)->fields.lv
                          | (unsigned __int64)v28;
}


void CombineServantListViewItem__set_DragSelectNum(
        CombineServantListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields.dragSelectNum = value;
}


// local variable allocation has failed, the output may be wrong!
void CombineServantListViewItem__set_IsAddParam1Max(
        CombineServantListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  if ( !this )
    sub_21FFECC(0, value);
  this->fields.isNotSelectAddParam1 = this->fields.hpBase > 0 && value;
}


// local variable allocation has failed, the output may be wrong!
void CombineServantListViewItem__set_IsAddParam2Max(
        CombineServantListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  if ( !this )
    sub_21FFECC(0, value);
  this->fields.isNotSelectAddParam2 = this->fields.atkBase > 0 && value;
}


// local variable allocation has failed, the output may be wrong!
void CombineServantListViewItem__set_IsAtkStatusMax(
        CombineServantListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  if ( !this )
    sub_21FFECC(0, value);
  this->fields.isNotSelectStatusUpAtk = this->fields.atkBase > 0 && value;
}


void CombineServantListViewItem__set_IsCanNotLock(
        CombineServantListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields.isCanNotLock = value;
}


// local variable allocation has failed, the output may be wrong!
void CombineServantListViewItem__set_IsDragSelect(
        CombineServantListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  if ( !this )
    sub_21FFECC(0, value);
  this->fields.dragSelectNum = value - 1;
}


// local variable allocation has failed, the output may be wrong!
void CombineServantListViewItem__set_IsHpStatusMax(
        CombineServantListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  if ( !this )
    sub_21FFECC(0, value);
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


// local variable allocation has failed, the output may be wrong!
void CombineServantListViewItem__set_IsSecondAtkStatusMax(
        CombineServantListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  if ( !this )
    sub_21FFECC(0, value);
  this->fields.isNotSelectSecondStatusUpAtk = this->fields.atkBase > 0 && value;
}


// local variable allocation has failed, the output may be wrong!
void CombineServantListViewItem__set_IsSecondHpStatusMax(
        CombineServantListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  if ( !this )
    sub_21FFECC(0, value);
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._NoticeTween_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._NoticeTween_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void CombineServantListViewItem___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_59321A9 & 1) == 0 )
  {
    sub_21FFC50(&CombineServantListViewItem___c_TypeInfo);
    byte_59321A9 = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(CombineServantListViewItem___c_TypeInfo);
  System_Object___ctor(v1, 0);
  CombineServantListViewItem___c_TypeInfo->static_fields->__9 = (struct CombineServantListViewItem___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)CombineServantListViewItem___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void CombineServantListViewItem___c___ctor(CombineServantListViewItem___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool CombineServantListViewItem___c___SetIsCombineExpCampaignTarget_b__127_0(
        CombineServantListViewItem___c_o *this,
        EventCampaignEntity_o *x,
        const MethodInfo *method)
{
  int32_t target; // w8

  if ( !x )
    sub_21FFECC(this, 0);
  target = x->fields.target;
  return target == 2 || target == 27;
}


void CombineServantListViewItem___c__DisplayClass126_0___ctor(
        CombineServantListViewItem___c__DisplayClass126_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool CombineServantListViewItem___c__DisplayClass126_0___SetSortValue_b__0(
        CombineServantListViewItem___c__DisplayClass126_0_o *this,
        EventGroupEntity_o *entity,
        const MethodInfo *method)
{
  UnityEngine_Object_o *manager; // x21
  int64_t IsLargeSuccessCampaignClassId; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  const MethodInfo *v9; // x3
  struct CombineServantListViewItem_o *_4__this; // x8
  __int64 v11; // x2
  struct CombineServantListViewItem_o *v12; // x8
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v14; // q1
  struct CombineServantListViewManager_o *v15; // x22
  int32_t eventId; // w21
  const MethodInfo *v17; // x3
  struct CombineServantListViewItem_o *v18; // x8
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x2
  struct CombineServantListViewItem_o *v22; // x8
  ServantFilterMaster_o *v23; // x21
  int32_t svtId; // w22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // kr00_16
  struct CombineServantListViewItem_o *v28; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+20h] [xbp-50h]

  if ( (byte_59321AA & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_ServantFilterMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_59321AA = 1;
  }
  manager = (UnityEngine_Object_o *)this->fields.manager;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, entity, method);
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
                                    v9);
  if ( (IsLargeSuccessCampaignClassId & 1) == 0 )
  {
    v12 = this->fields.__4__this;
    if ( !v12 )
      goto LABEL_34;
    userSvtEntity = v12->fields.userSvtEntity;
    if ( !userSvtEntity )
      goto LABEL_34;
    v14 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
    v15 = this->fields.manager;
    eventId = entity->fields.eventId;
    *(_OWORD *)&v30.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v30.fields.fakeValue = v14;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v7, v11);
    v29 = v30;
    IsLargeSuccessCampaignClassId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v29, 0);
    if ( !v15 )
      goto LABEL_34;
    if ( !CombineServantListViewManager__IsExchangeSvtExist(
            (CombineServantListViewManager_o *)IsLargeSuccessCampaignClassId,
            eventId,
            IsLargeSuccessCampaignClassId,
            v17) )
    {
LABEL_37:
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v7, v8);
      IsLargeSuccessCampaignClassId = (int64_t)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_EventCampaignMaster___);
      v18 = this->fields.__4__this;
      if ( !v18 || !entity || !IsLargeSuccessCampaignClassId )
        goto LABEL_34;
      if ( !EventCampaignMaster__IsEnableServant(
              (EventCampaignMaster_o *)IsLargeSuccessCampaignClassId,
              v18->fields.svtId,
              entity->fields.eventId,
              0) )
      {
        if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v19, v20);
        IsLargeSuccessCampaignClassId = (int64_t)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ServantFilterMaster___);
        v22 = this->fields.__4__this;
        if ( v22 )
        {
          v23 = (ServantFilterMaster_o *)IsLargeSuccessCampaignClassId;
          svtId = v22->fields.svtId;
          if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7, v21);
          v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(svtId, 0);
          v7 = *(_QWORD *)&v25.fields.fakeValue;
          IsLargeSuccessCampaignClassId = *(_QWORD *)&v25.fields.currentCryptoKey;
          if ( v23 )
          {
            IsLargeSuccessCampaignClassId = ServantFilterMaster__IsEnableServant(v23, v25, entity->fields.eventId, 0);
            if ( (IsLargeSuccessCampaignClassId & 1) != 0 )
              return 1;
            v28 = this->fields.__4__this;
            if ( v28 )
            {
              IsLargeSuccessCampaignClassId = (int64_t)v28->fields.userSvtEntity;
              if ( IsLargeSuccessCampaignClassId )
                return UserServantEntity__getEventUpVal(
                         (UserServantEntity_o *)IsLargeSuccessCampaignClassId,
                         v28->fields.setupInfo,
                         entity->fields.eventId,
                         0,
                         0);
            }
          }
        }
LABEL_34:
        sub_21FFECC(IsLargeSuccessCampaignClassId, v7);
      }
    }
  }
  return 1;
}