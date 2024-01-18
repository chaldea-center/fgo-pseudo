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
  IconLabelInfo_o *v61; // x21
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  System_Collections_Generic_List_int__o *v68; // x21
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  System_Collections_Generic_List_int__o *v75; // x21
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_userSvtEntity; // x21
  System_String_array **v83; // x2
  System_String_array **v84; // x3
  System_Boolean_array **v85; // x4
  System_Int32_array **v86; // x5
  System_Int32_array *v87; // x6
  System_Int32_array *v88; // x7
  int64_t Instance; // x0
  const MethodInfo *v90; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v91; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v92; // x20
  __int64 v93; // x24
  __int64 v94; // x25
  struct ServantEntity_o *v95; // x0
  System_String_array **v96; // x2
  System_String_array **v97; // x3
  System_Boolean_array **v98; // x4
  System_Int32_array **v99; // x5
  System_Int32_array *v100; // x6
  System_Int32_array *v101; // x7
  System_String_array **v102; // x2
  System_String_array **v103; // x3
  System_Boolean_array **v104; // x4
  System_Int32_array **v105; // x5
  System_Int32_array *v106; // x6
  System_Int32_array *v107; // x7
  struct UserServantEntity_o *v108; // x8
  struct ServantEntity_o *servantEntity; // x8
  ServantLimitMaster_o *v110; // x20
  int32_t v111; // w25
  int64_t v112; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v113; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v114; // q1
  UserServantCollectionMaster_o *v115; // x20
  int64_t v116; // x25
  int64_t v117; // x23
  int v118; // w8
  bool *p_isStatusUpSvt; // x28
  int64_t v120; // x22
  struct UserServantEntity_o *v121; // x8
  int32_t v122; // w20
  BalanceConfig_c *v123; // x8
  struct UserServantEntity_o *v124; // x8
  __int128 v125; // q0
  __int64 v126; // x20
  const MethodInfo *v127; // x1
  int64_t UserSvtId; // x0
  unsigned int v129; // w8
  UserServantEntity_o *v130; // x8
  __int64 v131; // x1
  __int64 v132; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v135; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v138; // x8
  unsigned __int64 v139; // x10
  int32_t *v140; // x11
  __int64 v141; // x0
  _QWORD *v142; // x0
  __int64 v143; // x1
  __int64 v144; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v145; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v146; // q0
  __int64 v147; // x22
  System_Collections_Generic_IEnumerator_T__c *v148; // x8
  unsigned __int64 v149; // x10
  int32_t *v150; // x11
  __int64 v151; // x0
  UserServantEntity_o *v152; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v153; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v154; // q0
  int64_t v155; // x0
  __int128 v156; // q0
  UserServantCommandCodeMaster_o *v157; // x20
  struct ServantEntity_o *v158; // x8
  int64_t v159; // x25
  __int64 v160; // x23
  __int64 v161; // x26
  int32_t v162; // w8
  UserServantCommandCardMaster_o *v163; // x20
  struct ServantEntity_o *v164; // x8
  int64_t v165; // x25
  __int64 v166; // x23
  __int64 v167; // x26
  struct System_Int32_array *commandCardParam; // x20
  int max_length; // w8
  __int64 v170; // x22
  int32_t v171; // w25
  __int64 v172; // x1
  __int64 v173; // x3
  System_Collections_Generic_IEnumerator_T__o *v174; // x20
  System_Collections_Generic_IEnumerator_T__c *v175; // x8
  unsigned __int64 v176; // x10
  int32_t *v177; // x11
  __int64 v178; // x0
  System_Collections_Generic_IEnumerator_T__c *v179; // x8
  unsigned __int64 v180; // x10
  int32_t *v181; // x11
  __int64 v182; // x0
  _QWORD *v183; // x0
  __int64 v184; // x1
  __int64 v185; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v186; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v187; // q0
  __int64 v188; // x22
  System_Collections_Generic_IEnumerator_T__c *v189; // x8
  unsigned __int64 v190; // x10
  int32_t *v191; // x11
  __int64 v192; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v193; // x8
  __int64 v194; // x20
  __int64 v195; // x23
  int32_t v196; // w20
  struct UserServantEntity_o *v197; // x8
  __int128 v198; // q0
  int64_t v199; // x0
  __int128 v200; // q0
  int32_t SvtClassId; // w20
  int32_t v202; // w0
  int32_t SvtClassGroupType; // w20
  int32_t materialExp; // w20
  BalanceConfig_c *v205; // x0
  int SameClassExp; // w22
  double v207; // d0
  int32_t classId; // w20
  UserServantEntity_o *v209; // x8
  int32_t v210; // w20
  bool v211; // w8
  bool v212; // w8
  bool v213; // w8
  bool v214; // w8
  UserServantCommandCodeMaster_o *v215; // x20
  struct ServantEntity_o *v216; // x8
  int64_t v217; // x25
  __int64 v218; // x23
  __int64 v219; // x26
  int32_t v220; // w8
  bool v221; // w28
  UserServantEntity_o *v222; // x8
  bool v223; // w8
  UserServantEntity_o *v224; // x8
  const MethodInfo *v225; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v226; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v227; // q0
  int64_t v228; // x0
  __int128 v229; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v230; // x9
  int32_t combineLimitId; // w20
  __int64 v232; // x23
  __int64 v233; // x25
  int32_t v234; // w25
  __int64 v235; // x23
  __int64 v236; // x26
  UserServantEntity_o *v237; // x20
  __int64 v238; // x8
  UserItemMaster_o *v239; // x27
  unsigned __int64 i; // x28
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v241; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v242; // q1
  int32_t v243; // w25
  int32_t v244; // w20
  UserServantEntity_o *v245; // x8
  bool isLevelMax; // w8
  UserServantEntity_o *v247; // x8
  UserServantEntity_o *v248; // x8
  const MethodInfo *v249; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v250; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v251; // q0
  int64_t v252; // x0
  __int128 v253; // q0
  UserServantEntity_o *v254; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v255; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v256; // q0
  int64_t v257; // x0
  __int128 v258; // q0
  UserServantEntity_o *v259; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v260; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v261; // q0
  int64_t v262; // x0
  __int128 v263; // q0
  int id; // w20
  int32_t lv; // w22
  int32_t SameSvtNpLvCache; // w0
  const MethodInfo *v267; // x4
  int32_t v268; // w20
  char v269; // w8
  int32_t v270; // w0
  int32_t v271; // w20
  int32_t v272; // w27
  int32_t v273; // w25
  int v274; // w22
  __int64 v275; // x1
  __int64 v276; // x3
  System_Collections_Generic_IEnumerator_T__o *v277; // x20
  System_Collections_Generic_IEnumerator_T__c *v278; // x8
  unsigned __int64 v279; // x10
  int32_t *v280; // x11
  __int64 v281; // x0
  System_Collections_Generic_IEnumerator_T__c *v282; // x8
  unsigned __int64 v283; // x10
  int32_t *v284; // x11
  __int64 v285; // x0
  _QWORD *v286; // x0
  __int64 v287; // x1
  __int64 v288; // x9
  UserServantEntity_o *v289; // x8
  __int128 v290; // q0
  __int64 v291; // x22
  System_Collections_Generic_IEnumerator_T__c *v292; // x8
  unsigned __int64 v293; // x10
  int32_t *v294; // x11
  __int64 v295; // x0
  int64_t IsLock; // x0
  UserServantEntity_o *v297; // x8
  bool v298; // w8
  UserServantEntity_o *v299; // x8
  __int128 v300; // q0
  int64_t v301; // x0
  __int128 v302; // q0
  int32_t v303; // w8
  UserServantEntity_o *v304; // x8
  UserServantEntity_o *v305; // x8
  bool v306; // w8
  UserServantEntity_o *v307; // x8
  UserServantEntity_o *v308; // x8
  __int128 v309; // q0
  int64_t v310; // x0
  __int128 v311; // q0
  ServantExceedEntity_o *SvtExceedEnt; // x0
  int32_t *v313; // x20
  CommonConsumeEntity_array *IdEntityList; // x0
  CommonConsumeEntity_array *v315; // x25
  System_Collections_Generic_HashSet_int__o *v316; // x27
  System_Collections_Generic_HashSet_int__o *v317; // x28
  int v318; // w8
  __int64 v319; // x22
  CommonConsumeEntity_o *v320; // x23
  UserServantEntity_o *v321; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v322; // x25
  __int64 v323; // x23
  __int64 v324; // x26
  UserServantEntity_o *v325; // x23
  System_Int32_array *v326; // x25
  System_Int32_array *v327; // x0
  __int64 v328; // x20
  __int64 v329; // x25
  int32_t maxFriendshipRank; // w9
  int v331; // w10
  UserServantEntity_o *v332; // x8
  UserServantEntity_o *v333; // x8
  UserServantEntity_o *v334; // x8
  __int128 v335; // q0
  int64_t v336; // x0
  __int128 v337; // q0
  int32_t v338; // w20
  int v339; // w22
  int64_t v340; // x20
  __int64 v341; // x23
  __int64 v342; // x24
  UserItemMaster_o *v343; // x22
  unsigned __int64 v344; // x25
  __int64 v345; // x26
  bool v346; // w8
  UserServantEntity_o *v347; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  System_String_array **v349; // x2
  System_String_array **v350; // x3
  System_Boolean_array **v351; // x4
  System_Int32_array **v352; // x5
  System_Int32_array *v353; // x6
  System_Int32_array *v354; // x7
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  System_String_array **v356; // x2
  System_String_array **v357; // x3
  System_Boolean_array **v358; // x4
  System_Int32_array **v359; // x5
  System_Int32_array *v360; // x6
  System_Int32_array *v361; // x7
  int64_t v362; // x8
  struct ServantEntity_o *v363; // x9
  UserServantEntity_o *v364; // x8
  __int64 v365; // x20
  __int64 v366; // x21
  int32_t v367; // w8
  __int64 v368; // x0
  __int64 v369; // x0
  int v370; // [xsp+Ch] [xbp-444h]
  UserServantMaster_o *MasterData_WarQuestSelectionMaster; // [xsp+10h] [xbp-440h]
  int64_t v372; // [xsp+18h] [xbp-438h]
  bool *p_isLimitUpItemNum; // [xsp+28h] [xbp-428h]
  struct IconLabelInfo_o **p_iconLabelInfo2; // [xsp+30h] [xbp-420h]
  int64_t v377; // [xsp+40h] [xbp-410h]
  UserServantEntity_o *v378; // [xsp+48h] [xbp-408h]
  UserServantEntity_o *v380; // [xsp+50h] [xbp-400h]
  bool v381; // [xsp+5Ch] [xbp-3F4h]
  bool *p_isChoice; // [xsp+60h] [xbp-3F0h]
  struct ServantEntity_o **p_servantEntity; // [xsp+68h] [xbp-3E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v384; // [xsp+70h] [xbp-3E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v385; // [xsp+90h] [xbp-3C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v386; // [xsp+B0h] [xbp-3A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v387; // [xsp+D0h] [xbp-380h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v388; // [xsp+F0h] [xbp-360h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v389; // [xsp+110h] [xbp-340h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v390; // [xsp+130h] [xbp-320h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v391; // [xsp+150h] [xbp-300h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v392; // [xsp+170h] [xbp-2E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v393; // [xsp+190h] [xbp-2C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v394; // [xsp+1B0h] [xbp-2A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v395; // [xsp+1D0h] [xbp-280h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v396; // [xsp+1F0h] [xbp-260h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v397; // [xsp+210h] [xbp-240h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v398; // [xsp+230h] [xbp-220h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v399; // [xsp+250h] [xbp-200h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v400; // [xsp+270h] [xbp-1E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v401; // [xsp+290h] [xbp-1C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v402; // [xsp+2B0h] [xbp-1A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v403; // [xsp+2D0h] [xbp-180h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v404; // [xsp+2F0h] [xbp-160h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v405; // [xsp+310h] [xbp-140h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v406; // [xsp+330h] [xbp-120h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v407; // [xsp+350h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v408; // [xsp+370h] [xbp-E0h]
  _DWORD v409[6]; // [xsp+390h] [xbp-C0h]
  int v410; // [xsp+3A8h] [xbp-A8h]
  UserItemEntity_o *v411; // [xsp+3B0h] [xbp-A0h] BYREF
  int32_t tdMaxLv; // [xsp+3BCh] [xbp-94h] BYREF
  int32_t tdLv[2]; // [xsp+3C0h] [xbp-90h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+3C8h] [xbp-88h] BYREF
  UserItemEntity_o *v415; // [xsp+3D0h] [xbp-80h] BYREF
  __int64 v416; // [xsp+3D8h] [xbp-78h] BYREF
  UserServantCommandCodeEntity_o *v417; // [xsp+3E0h] [xbp-70h] BYREF
  UserServantCommandCardEntity_o *v418; // [xsp+3E8h] [xbp-68h] BYREF
  UserServantCommandCodeEntity_o *entity; // [xsp+3F0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v420; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v421; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v422; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v423; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v424; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v425; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v426; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v427; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v428; // 0:x0.16

  if ( (byte_418A5D9 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, *(_QWORD *)&type);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v16);
    sub_B2C35C(&Method_DataManager_GetMasterData_CombineLimitMaster___, v17);
    sub_B2C35C(&Method_DataManager_GetMasterData_CombineMaterialMaster___, v18);
    sub_B2C35C(&Method_DataManager_GetMasterData_FriendshipMaster___, v19);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantClassMaster___, v20);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitMaster___, v21);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v22);
    sub_B2C35C(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___, v23);
    sub_B2C35C(&Method_DataManager_GetMasterData_TreasureDvcMaster___, v24);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserItemMaster___, v25);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v26);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantCommandCardMaster___, v27);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___, v28);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantLeaderMaster___, v29);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, v30);
    sub_B2C35C(&Method_DataManager_GetMaster_CommonConsumeMaster___, v31);
    sub_B2C35C(&Method_DataManager_GetMaster_SvtCoinMaster___, v32);
    sub_B2C35C(&DataManager_TypeInfo, v33);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v34);
    sub_B2C35C(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v35);
    sub_B2C35C(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__, v36);
    sub_B2C35C(&Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__GetEntity__, v37);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_int___, v38);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_int__Add__, v39);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_int___ctor___67287824, v40);
    sub_B2C35C(&System_Collections_Generic_HashSet_int__TypeInfo, v41);
    sub_B2C35C(&System_IDisposable_TypeInfo, v42);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v43);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v44);
    sub_B2C35C(&IconLabelInfo_TypeInfo, v45);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v46);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v47);
    sub_B2C35C(&System_Math_TypeInfo, v48);
    sub_B2C35C(&NetworkManager_TypeInfo, v49);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v50);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v51);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v52);
    sub_B2C35C(&UserServantLeaderEntity_TypeInfo, v53);
    byte_418A5D9 = 1;
  }
  v418 = 0LL;
  entity = 0LL;
  v416 = 0LL;
  v417 = 0LL;
  tdInfo = 0LL;
  v415 = 0LL;
  *(_QWORD *)tdLv = 0LL;
  tdMaxLv = 0;
  v411 = 0LL;
  v410 = 0;
  v54 = (IconLabelInfo_o *)sub_B2C42C(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v54, 0LL);
  this->fields.iconLabelInfo1 = v54;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo1,
    (System_Int32_array **)v54,
    v55,
    v56,
    v57,
    v58,
    v59,
    v60);
  v61 = (IconLabelInfo_o *)sub_B2C42C(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v61, 0LL);
  this->fields.iconLabelInfo2 = v61;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo2,
    (System_Int32_array **)v61,
    v62,
    v63,
    v64,
    v65,
    v66,
    v67);
  v68 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v68,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.enableSkillUp = v68;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.enableSkillUp,
    (System_Int32_array **)v68,
    v69,
    v70,
    v71,
    v72,
    v73,
    v74);
  v75 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v75,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.enableAppendSkillUp = v75;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.enableAppendSkillUp,
    (System_Int32_array **)v75,
    v76,
    v77,
    v78,
    v79,
    v80,
    v81);
  ListViewItem___ctor((ListViewItem_o *)this, 0LL);
  this->fields.userSvtEntity = userSvtEntity;
  p_userSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userSvtEntity;
  this->fields.type = type;
  this->fields.index = index;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.userSvtEntity,
    (System_Int32_array **)userSvtEntity,
    v83,
    v84,
    v85,
    v86,
    v87,
    v88);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_544;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  v91 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_544;
  v92 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v94 = *(_QWORD *)&v91[5].fields.currentCryptoKey;
  v93 = *(_QWORD *)&v91[5].fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v420.fields.currentCryptoKey = v94;
  *(_QWORD *)&v420.fields.fakeValue = v93;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v420, 0LL);
  if ( !v92 )
    goto LABEL_544;
  v95 = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    v92,
                                    Instance,
                                    (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = v95;
  p_servantEntity = &this->fields.servantEntity;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.servantEntity,
    (System_Int32_array **)v95,
    v96,
    v97,
    v98,
    v99,
    v100,
    v101);
  this->fields.setupInfo = setupInfo;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.setupInfo,
    (System_Int32_array **)setupInfo,
    v102,
    v103,
    v104,
    v105,
    v106,
    v107);
  v108 = this->fields.userSvtEntity;
  this->fields.isEventUpVal = 0;
  *(_QWORD *)&this->fields.bonusKind = 0LL;
  if ( !v108 )
    goto LABEL_544;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v108->fields.svtId, 0LL);
  servantEntity = this->fields.servantEntity;
  this->fields.svtId = Instance;
  if ( !servantEntity )
    goto LABEL_544;
  this->fields.classId = servantEntity->fields.classId;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_544;
  MasterData_WarQuestSelectionMaster = (UserServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                (DataManager_o *)Instance,
                                                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_544;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtEntity )
    goto LABEL_544;
  v110 = (ServantLimitMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064((*p_userSvtEntity)[5], 0LL);
  if ( !*p_userSvtEntity )
    goto LABEL_544;
  v111 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064((*p_userSvtEntity)[6], 0LL);
  if ( !v110 )
    goto LABEL_544;
  Instance = (int64_t)ServantLimitMaster__GetEntity(v110, v111, Instance, 0LL);
  if ( !Instance )
    goto LABEL_544;
  v112 = Instance;
  this->fields.rarity = *(_DWORD *)(Instance + 24);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_544;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v113 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_544;
  v114 = v113[4];
  v115 = (UserServantCollectionMaster_o *)Instance;
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v408.fields.currentCryptoKey = v113[3];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v408.fields.fakeValue = v114;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v407 = v408;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v407, 0LL);
  if ( !*p_userSvtEntity )
    goto LABEL_544;
  v116 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064((*p_userSvtEntity)[5], 0LL);
  if ( !v115 )
    goto LABEL_544;
  Instance = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(v115, v116, Instance, 0LL);
  if ( !Instance )
    goto LABEL_544;
  v117 = Instance;
  v381 = isParty;
  UserServantCollectionEntity__getFriendShipRankInfo(
    (UserServantCollectionEntity_o *)Instance,
    &this->fields.friendship,
    &this->fields.friendshipMax,
    0LL);
  Instance = (int64_t)UserGameMaster__getSelfUserGame(0LL);
  if ( !Instance )
    goto LABEL_544;
  v118 = *(_DWORD *)(Instance + 96);
  *(_DWORD *)&this->fields.isStatusUpSvt = 0;
  p_isStatusUpSvt = &this->fields.isStatusUpSvt;
  v370 = v118;
  *(_WORD *)&this->fields.isFavorite = 0;
  *(_WORD *)&this->fields.isLock = 0;
  *(_DWORD *)&this->fields.isChoice = 0;
  this->fields.isMaxSelect = 0;
  *(_QWORD *)&this->fields.isLimitUpItemNum = 0LL;
  v120 = Instance;
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
  v121 = this->fields.userSvtEntity;
  this->fields.maxLimitCnt = Instance;
  if ( !v121 )
    goto LABEL_544;
  this->fields.currentLimitCnt = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                   v121->fields.limitCount,
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
  v122 = *(_DWORD *)(Instance + 276);
  v123 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    Instance = (int64_t)*p_userSvtEntity;
    v123 = BalanceConfig_TypeInfo;
  }
  this->fields.hpReinforceValue = v123->static_fields->StatusUpAdjustHp * v122;
  if ( !Instance )
    goto LABEL_544;
  v377 = v117;
  this->fields.atkReinforceValue = v123->static_fields->StatusUpAdjustAtk * *(_DWORD *)(Instance + 272);
  UserServantEntity__getAdjustMaxData(
    (UserServantEntity_o *)Instance,
    &this->fields.nowMaxHpReinforceValue,
    &this->fields.nowMaxAtkReinforceValue,
    0LL);
  v124 = this->fields.userSvtEntity;
  *(_WORD *)&this->fields.isEquipedCmdCard = 0;
  if ( !v124 )
    goto LABEL_544;
  v125 = *(_OWORD *)&v124->fields.id.fields.fakeValue;
  v126 = *(_QWORD *)(v120 + 120);
  v372 = v120;
  *(_OWORD *)&v406.fields.currentCryptoKey = *(_OWORD *)&v124->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v406.fields.fakeValue = v125;
  this->fields.isPush = v126 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v406, 0LL);
  UserSvtId = CombineServantListViewItem__get_UserSvtId(this, v127);
  EventFortificationDataLogic__SetFortification(
    &this->fields.isFortification,
    &this->fields.fortificationName,
    &this->fields.fortificationDetailName,
    UserSvtId,
    0LL);
  v129 = this->fields.type;
  v378 = baseUsrSvtData;
  if ( v129 > 0xA || ((1 << v129) & 0x481) == 0 )
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
  this->fields.isParty = v381;
  if ( !Instance )
    goto LABEL_544;
  Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL);
  v130 = this->fields.userSvtEntity;
  this->fields.isLock = Instance & 1;
  if ( !v130 )
    goto LABEL_544;
  *p_isChoice = UserServantEntity__IsChoice(v130, 0LL);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_544;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantLeaderMaster___);
  if ( !Instance )
    goto LABEL_544;
  Instance = *(_QWORD *)(Instance + 32);
  if ( !Instance )
    goto LABEL_544;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B2C434(0LL, v131);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v135 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v135;
        p_offset += 4;
        if ( v135 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_58;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_58:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v132);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v138 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v139 = 0LL;
      v140 = &v138->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v140 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v139;
        v140 += 4;
        if ( v139 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_65;
      }
      v141 = (__int64)&v138->vtable[*v140].method;
    }
    else
    {
LABEL_65:
      v141 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v132);
    }
    v142 = (_QWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v141)(
                       Enumerator,
                       *(_QWORD *)(v141 + 8));
    if ( !v142 )
      goto LABEL_549;
    v144 = *(&UserServantLeaderEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*v142 + 300LL) < (unsigned int)v144
      || *(UserServantLeaderEntity_c **)(*(_QWORD *)(*v142 + 200LL) + 8 * v144 - 8) != UserServantLeaderEntity_TypeInfo )
    {
      sub_B2C728(v142);
LABEL_547:
      sub_B2C728(v183);
LABEL_548:
      sub_B2C728(v286);
LABEL_549:
      sub_B2C434(v142, v143);
    }
    v145 = *p_userSvtEntity;
    if ( !*p_userSvtEntity )
      sub_B2C434(v142, UserServantLeaderEntity_TypeInfo);
    v146 = v145[2];
    v147 = v142[7];
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v408.fields.currentCryptoKey = v145[1];
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v408.fields.fakeValue = v146;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v405 = v408;
    if ( v147 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v405, 0LL) )
    {
      this->fields.isUseSupport = 1;
      break;
    }
  }
  v409[v410++] = 1071;
  v148 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v149 = 0LL;
    v150 = &v148->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v150 - 1) != System_IDisposable_TypeInfo )
    {
      ++v149;
      v150 += 4;
      if ( v149 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_80;
    }
    v151 = (__int64)&v148->vtable[*v150].method;
  }
  else
  {
LABEL_80:
    v151 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v132);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v151)(
    Enumerator,
    *(_QWORD *)(v151 + 8));
  if ( v410 && v409[v410 - 1] == 1071 )
    --v410;
  Instance = (int64_t)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_544;
  Instance = UserServantEntity__IsEventJoin((UserServantEntity_o *)Instance, 0LL);
  v152 = this->fields.userSvtEntity;
  this->fields.isEventJoin = Instance & 1;
  if ( !v152 )
    goto LABEL_544;
  Instance = UserServantEntity__IsHeroine(v152, 0LL);
  if ( (Instance & 1) != 0 )
    this->fields.isHeroineSvt = 1;
  if ( baseUsrSvtData )
  {
    v153 = *p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_544;
    v154 = v153[2];
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v408.fields.currentCryptoKey = v153[1];
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v408.fields.fakeValue = v154;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v404 = v408;
    v155 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v404, 0LL);
    v156 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
    *(_OWORD *)&v403.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v403.fields.fakeValue = v156;
    if ( v155 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v403, 0LL) )
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
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_544;
  v157 = (UserServantCommandCodeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             (DataManager_o *)Instance,
                                             (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__get_UserId(0LL);
  v158 = *p_servantEntity;
  if ( !*p_servantEntity )
    goto LABEL_544;
  v159 = Instance;
  v160 = *(_QWORD *)&v158->fields.id.fields.currentCryptoKey;
  v161 = *(_QWORD *)&v158->fields.id.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v421.fields.currentCryptoKey = v160;
  *(_QWORD *)&v421.fields.fakeValue = v161;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v421, 0LL);
  if ( !v157 )
    goto LABEL_544;
  if ( UserServantCommandCodeMaster__TryGetEntity(v157, &entity, v159, (int)Instance, 0LL) )
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
  v162 = this->fields.type;
  if ( v162 == 10 )
  {
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_544;
    v163 = (UserServantCommandCardMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)Instance,
                                               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantCommandCardMaster___);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Instance = NetworkManager__get_UserId(0LL);
    v164 = *p_servantEntity;
    if ( !*p_servantEntity )
      goto LABEL_544;
    v165 = Instance;
    v166 = *(_QWORD *)&v164->fields.id.fields.currentCryptoKey;
    v167 = *(_QWORD *)&v164->fields.id.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v422.fields.currentCryptoKey = v166;
    *(_QWORD *)&v422.fields.fakeValue = v167;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v422, 0LL);
    if ( !v163 )
      goto LABEL_544;
    Instance = UserServantCommandCardMaster__TryGetEntity(v163, &v418, v165, (int)Instance, 0LL);
    if ( (Instance & 1) != 0 )
    {
      if ( !v418 )
        goto LABEL_544;
      commandCardParam = v418->fields.commandCardParam;
      if ( commandCardParam )
      {
        max_length = commandCardParam->max_length;
        if ( max_length >= 1 )
        {
          v170 = 0LL;
          while ( 1 )
          {
            if ( (unsigned int)v170 >= max_length )
            {
LABEL_556:
              v369 = sub_B2C460(Instance);
              sub_B2C400(v369, 0LL);
            }
            v171 = commandCardParam->m_Items[v170 + 1];
            Instance = (int64_t)BalanceConfig_TypeInfo;
            if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              Instance = (int64_t)BalanceConfig_TypeInfo;
            }
            if ( v171 < *(_DWORD *)(*(_QWORD *)(Instance + 184) + 700LL) )
              break;
            this->fields.isCommandCardExceedMax = 1;
            max_length = commandCardParam->max_length;
            if ( (int)++v170 >= max_length )
              goto LABEL_141;
          }
          this->fields.isCommandCardExceedMax = 0;
        }
      }
    }
LABEL_141:
    v162 = this->fields.type;
  }
  if ( v162 == 1 )
  {
    this->fields.isMaterialSvt = isMtSvt;
    this->fields.isParty = v381;
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_544;
    Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantLeaderMaster___);
    if ( !Instance )
      goto LABEL_544;
    Instance = *(_QWORD *)(Instance + 32);
    if ( !Instance )
      goto LABEL_544;
    v174 = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
             (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
             (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    if ( !v174 )
      sub_B2C434(0LL, v172);
    while ( 1 )
    {
      v175 = v174->klass;
      if ( *(_WORD *)&v174->klass->_2.bitflags1 )
      {
        v176 = 0LL;
        v177 = &v175->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)v177 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v176;
          v177 += 4;
          if ( v176 >= *(unsigned __int16 *)&v174->klass->_2.bitflags1 )
            goto LABEL_151;
        }
        v178 = (__int64)&v175->vtable[*v177].method;
      }
      else
      {
LABEL_151:
        v178 = sub_AC5258(v174, System_Collections_IEnumerator_TypeInfo, 0LL, v173);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v178)(
              v174,
              *(_QWORD *)(v178 + 8)) & 1) == 0 )
        break;
      v179 = v174->klass;
      if ( *(_WORD *)&v174->klass->_2.bitflags1 )
      {
        v180 = 0LL;
        v181 = &v179->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v181 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
        {
          ++v180;
          v181 += 4;
          if ( v180 >= *(unsigned __int16 *)&v174->klass->_2.bitflags1 )
            goto LABEL_158;
        }
        v182 = (__int64)&v179->vtable[*v181].method;
      }
      else
      {
LABEL_158:
        v182 = sub_AC5258(v174, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v173);
      }
      v183 = (_QWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v182)(
                         v174,
                         *(_QWORD *)(v182 + 8));
      if ( !v183 )
        sub_B2C434(0LL, v184);
      v185 = *(&UserServantLeaderEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*v183 + 300LL) < (unsigned int)v185
        || *(UserServantLeaderEntity_c **)(*(_QWORD *)(*v183 + 200LL) + 8 * v185 - 8) != UserServantLeaderEntity_TypeInfo )
      {
        goto LABEL_547;
      }
      v186 = *p_userSvtEntity;
      if ( !*p_userSvtEntity )
        sub_B2C434(v183, UserServantLeaderEntity_TypeInfo);
      v187 = v186[2];
      v188 = v183[7];
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v408.fields.currentCryptoKey = v186[1];
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v408.fields.fakeValue = v187;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v402 = v408;
      if ( v188 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v402, 0LL) )
      {
        this->fields.isUseSupport = 1;
        break;
      }
    }
    v409[v410++] = 1511;
    v189 = v174->klass;
    if ( *(_WORD *)&v174->klass->_2.bitflags1 )
    {
      v190 = 0LL;
      v191 = &v189->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v191 - 1) != System_IDisposable_TypeInfo )
      {
        ++v190;
        v191 += 4;
        if ( v190 >= *(unsigned __int16 *)&v174->klass->_2.bitflags1 )
          goto LABEL_173;
      }
      v192 = (__int64)&v189->vtable[*v191].method;
    }
    else
    {
LABEL_173:
      v192 = sub_AC5258(v174, System_IDisposable_TypeInfo, 0LL, v173);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v192)(v174, *(_QWORD *)(v192 + 8));
    if ( v410 && v409[v410 - 1] == 1511 )
      --v410;
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_544;
    Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_CombineMaterialMaster___);
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
      v193 = *p_userSvtEntity;
      if ( !*p_userSvtEntity )
        goto LABEL_544;
      v195 = *(_QWORD *)&v193[5].fields.currentCryptoKey;
      v194 = *(_QWORD *)&v193[5].fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v423.fields.currentCryptoKey = v195;
      *(_QWORD *)&v423.fields.fakeValue = v194;
      v196 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v423, 0LL);
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(baseUsrSvtData->fields.svtId, 0LL);
      if ( v196 == (_DWORD)Instance )
      {
        v197 = this->fields.userSvtEntity;
        this->fields.isLimitCntTarget = 1;
        if ( !v197 )
          goto LABEL_544;
        v198 = *(_OWORD *)&v197->fields.id.fields.fakeValue;
        *(_OWORD *)&v408.fields.currentCryptoKey = *(_OWORD *)&v197->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v408.fields.fakeValue = v198;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v401 = v408;
        v199 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v401, 0LL);
        v200 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
        *(_OWORD *)&v400.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v400.fields.fakeValue = v200;
        if ( v199 != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v400, 0LL) )
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
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_544;
      Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantClassMaster___);
      if ( !*p_servantEntity )
        goto LABEL_544;
      if ( !Instance )
        goto LABEL_544;
      Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                            (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                            (*p_servantEntity)->fields.classId,
                            (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_544;
      HIDWORD(v416) = *(_DWORD *)(Instance + 52);
      v202 = UserServantEntity__getSvtClassId(baseUsrSvtData, 0LL);
      SvtClassGroupType = UserServantEntity__getSvtClassGroupType(baseUsrSvtData, v202, 0LL);
      if ( System_Int32__Equals_38381340((int32_t)&v416 + 4, 3, 0LL) )
        goto LABEL_210;
      Instance = System_Int32__Equals_38381340((int32_t)&v416 + 4, SvtClassGroupType, 0LL);
      if ( (Instance & 1) != 0 )
      {
        if ( !*p_servantEntity )
          goto LABEL_544;
        classId = (*p_servantEntity)->fields.classId;
        if ( classId == UserServantEntity__getSvtClassId(baseUsrSvtData, 0LL) )
        {
LABEL_210:
          materialExp = this->fields.materialExp;
          v205 = BalanceConfig_TypeInfo;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v205 = BalanceConfig_TypeInfo;
          }
          SameClassExp = v205->static_fields->SameClassExp;
          if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !System_Math_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
          }
          v207 = ceil((double)materialExp * (double)SameClassExp / 1000.0);
          if ( v207 == INFINITY )
            v207 = -v207;
          this->fields.materialExp = (int)v207;
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
    v209 = this->fields.userSvtEntity;
    this->fields.isLock = Instance & 1;
    if ( !v209 )
      goto LABEL_544;
    *p_isChoice = UserServantEntity__IsChoice(v209, 0LL);
    Instance = (int64_t)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_544;
    this->fields.isEventJoin = UserServantEntity__IsEventJoin((UserServantEntity_o *)Instance, 0LL);
    Instance = (int64_t)this->fields.userSvtEntity;
    this->fields.hpBase = *(_DWORD *)(v112 + 36);
    this->fields.atkBase = *(_DWORD *)(v112 + 44);
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
      v210 = UserServantEntity__getSvtClassId(baseUsrSvtData, 0LL);
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_544;
      Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantClassMaster___);
      if ( !*p_servantEntity )
        goto LABEL_544;
      if ( !Instance )
        goto LABEL_544;
      Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                            (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                            (*p_servantEntity)->fields.classId,
                            (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_544;
      LODWORD(v416) = *(_DWORD *)(Instance + 52);
      if ( !*p_servantEntity )
        goto LABEL_544;
      if ( (*p_servantEntity)->fields.classId == v210 || System_Int32__Equals_38381340((int32_t)&v416, 3, 0LL) )
      {
        this->fields.isCanStUp = 1;
        v211 = UserServantEntity__isAdjustAtkMax(baseUsrSvtData, 0LL) && this->fields.atkBase > 0;
        this->fields.isAtkUpMax = v211;
        v212 = UserServantEntity__isAdjustHpMax(baseUsrSvtData, 0LL) && this->fields.hpBase > 0;
        this->fields.isHpUpMax = v212;
        v213 = UserServantEntity__isSecondAdjustAtkMax(baseUsrSvtData, 0LL) && this->fields.atkBase > 0;
        this->fields.isAtkSecondUpMax = v213;
        v214 = UserServantEntity__isSecondAdjustHpMax(baseUsrSvtData, 0LL) && this->fields.hpBase > 0;
        this->fields.isHpSecondUpMax = v214;
      }
    }
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_544;
    v215 = (UserServantCommandCodeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)Instance,
                                               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Instance = NetworkManager__get_UserId(0LL);
    v216 = *p_servantEntity;
    if ( !*p_servantEntity )
      goto LABEL_544;
    v217 = Instance;
    v218 = *(_QWORD *)&v216->fields.id.fields.currentCryptoKey;
    v219 = *(_QWORD *)&v216->fields.id.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v424.fields.currentCryptoKey = v218;
    *(_QWORD *)&v424.fields.fakeValue = v219;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v424, 0LL);
    if ( !v215 )
      goto LABEL_544;
    if ( UserServantCommandCodeMaster__TryGetEntity(v215, &v417, v217, (int)Instance, 0LL) )
    {
      Instance = (int64_t)v417;
      if ( !v417 )
        goto LABEL_544;
      this->fields.isEquipedCmdCard = UserServantCommandCodeEntity__IsEquipedCommandCode(v417, 0LL);
      Instance = (int64_t)v417;
      if ( !v417 )
        goto LABEL_544;
      this->fields.isCmdCardSlotOpen = UserServantCommandCodeEntity__IsCommandCardSlotOpen(v417, 0LL);
    }
  }
  v220 = this->fields.type;
  if ( v220 == 9 )
  {
    v221 = v381;
    Instance = (int64_t)userSvtEntity;
    if ( !userSvtEntity )
      goto LABEL_544;
    Instance = UserServantEntity__isLimitCountMax(userSvtEntity, 0LL);
    v245 = this->fields.userSvtEntity;
    this->fields.isLimitCntMax = Instance & 1;
    if ( !v245 )
      goto LABEL_544;
    isLevelMax = UserServantEntity__isLevelMax(v245, 0LL);
    Instance = (int64_t)this->fields.userSvtEntity;
    this->fields.isLvMax = isLevelMax;
    this->fields.isParty = v381;
    if ( !Instance )
      goto LABEL_544;
    Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL);
    v247 = this->fields.userSvtEntity;
    this->fields.isLock = Instance & 1;
    if ( !v247 )
      goto LABEL_544;
    *p_isChoice = UserServantEntity__IsChoice(v247, 0LL);
    Instance = (int64_t)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_544;
    Instance = UserServantEntity__IsEventJoin((UserServantEntity_o *)Instance, 0LL);
    v248 = this->fields.userSvtEntity;
    this->fields.isEventJoin = Instance & 1;
    if ( !v248 )
      goto LABEL_544;
    this->fields.isIgnoreCombineLimitSpecial = UserServantEntity__IsIgnoreCombineLimitSpecial(v248, 0LL);
    Instance = CombineServantListViewItem__GetSealCombineLimit(this, v249);
    this->fields.isSealCombineLimit = Instance & 1;
    if ( baseUsrSvtData )
    {
      v250 = *p_userSvtEntity;
      if ( !*p_userSvtEntity )
        goto LABEL_544;
      v251 = v250[2];
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v408.fields.currentCryptoKey = v250[1];
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v408.fields.fakeValue = v251;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v396 = v408;
      v252 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v396, 0LL);
      v253 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
      *(_OWORD *)&v395.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v395.fields.fakeValue = v253;
      if ( v252 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v395, 0LL) )
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
    v221 = v381;
    if ( v220 != 2 )
      goto LABEL_325;
    Instance = (int64_t)userSvtEntity;
    if ( !userSvtEntity )
      goto LABEL_544;
    Instance = UserServantEntity__isLimitCountMax(userSvtEntity, 0LL);
    v222 = this->fields.userSvtEntity;
    this->fields.isLimitCntMax = Instance & 1;
    if ( !v222 )
      goto LABEL_544;
    v223 = UserServantEntity__isLevelMax(v222, 0LL);
    Instance = (int64_t)this->fields.userSvtEntity;
    this->fields.isLvMax = v223;
    this->fields.isParty = v381;
    if ( !Instance )
      goto LABEL_544;
    Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL);
    v224 = this->fields.userSvtEntity;
    this->fields.isLock = Instance & 1;
    if ( !v224 )
      goto LABEL_544;
    *p_isChoice = UserServantEntity__IsChoice(v224, 0LL);
    Instance = (int64_t)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_544;
    this->fields.isEventJoin = UserServantEntity__IsEventJoin((UserServantEntity_o *)Instance, 0LL);
    Instance = CombineServantListViewItem__GetSealCombineLimit(this, v225);
    this->fields.isSealCombineLimit = Instance & 1;
    if ( baseUsrSvtData )
    {
      v226 = *p_userSvtEntity;
      if ( !*p_userSvtEntity )
        goto LABEL_544;
      v227 = v226[2];
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v408.fields.currentCryptoKey = v226[1];
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v408.fields.fakeValue = v227;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v399 = v408;
      v228 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v399, 0LL);
      v229 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
      *(_OWORD *)&v398.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v398.fields.fakeValue = v229;
      if ( v228 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v398, 0LL) )
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
      v230 = *p_userSvtEntity;
      if ( !*p_userSvtEntity )
        goto LABEL_544;
      combineLimitId = (*p_servantEntity)->fields.combineLimitId;
      v232 = *(_QWORD *)&v230[6].fields.currentCryptoKey;
      v233 = *(_QWORD *)&v230[6].fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v425.fields.currentCryptoKey = v232;
      *(_QWORD *)&v425.fields.fakeValue = v233;
      v234 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v425, 0LL);
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_544;
      Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_CombineLimitMaster___);
      if ( !Instance )
        goto LABEL_544;
      Instance = (int64_t)CombineLimitMaster__GetEntity((CombineLimitMaster_o *)Instance, combineLimitId, v234, 0LL);
      if ( !Instance )
        goto LABEL_544;
      v235 = *(_QWORD *)(Instance + 32);
      v236 = *(_QWORD *)(Instance + 40);
      v237 = (UserServantEntity_o *)Instance;
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_544;
      v380 = v237;
      Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserItemMaster___);
      if ( !v236 )
        goto LABEL_544;
      v238 = *(_QWORD *)(v236 + 24);
      if ( (int)v238 >= 1 )
      {
        v239 = (UserItemMaster_o *)Instance;
        for ( i = 0LL; (__int64)i < (int)v238; ++i )
        {
          if ( i >= (unsigned int)v238 )
            goto LABEL_556;
          if ( !v235 )
            goto LABEL_544;
          if ( i >= *(unsigned int *)(v235 + 24) )
            goto LABEL_556;
          v241 = *p_userSvtEntity;
          if ( !*p_userSvtEntity )
            goto LABEL_544;
          v242 = v241[4];
          v243 = *(_DWORD *)(v236 + 32 + 4 * i);
          v244 = *(_DWORD *)(v235 + 32 + 4 * i);
          *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v408.fields.currentCryptoKey = v241[3];
          *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v408.fields.fakeValue = v242;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v397 = v408;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v397, 0LL);
          if ( !v239 )
            goto LABEL_544;
          Instance = UserItemMaster__TryGetEntity(v239, &v415, Instance, v243, 0LL);
          if ( (Instance & 1) == 0 )
            goto LABEL_370;
          if ( !v415 )
            goto LABEL_544;
          if ( v243 == v415->fields.itemId )
          {
            if ( v244 > v415->fields.num )
            {
LABEL_370:
              *p_isLimitUpItemNum = 0;
              break;
            }
            *p_isLimitUpItemNum = 1;
          }
          LODWORD(v238) = *(_DWORD *)(v236 + 24);
        }
      }
      baseUsrSvtData = v378;
      v221 = v381;
      if ( *(_DWORD *)(v372 + 96) < SLODWORD(v380->fields.id.fields.hiddenValue) )
        *p_isLimitUpItemNum = 0;
      goto LABEL_324;
    }
  }
  this->fields.isHeroineSvt = 1;
LABEL_324:
  v220 = this->fields.type;
LABEL_325:
  if ( (v220 | 8) == 11 )
  {
    Instance = (int64_t)this->fields.userSvtEntity;
    this->fields.isParty = v221;
    if ( !Instance )
      goto LABEL_544;
    Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL);
    v254 = this->fields.userSvtEntity;
    this->fields.isLock = Instance & 1;
    if ( !v254 )
      goto LABEL_544;
    *p_isChoice = UserServantEntity__IsChoice(v254, 0LL);
    Instance = (int64_t)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_544;
    Instance = UserServantEntity__IsEventJoin((UserServantEntity_o *)Instance, 0LL);
    this->fields.isEventJoin = Instance & 1;
    if ( baseUsrSvtData )
    {
      v255 = *p_userSvtEntity;
      if ( !*p_userSvtEntity )
        goto LABEL_544;
      v256 = v255[2];
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v408.fields.currentCryptoKey = v255[1];
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v408.fields.fakeValue = v256;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v394 = v408;
      v257 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v394, 0LL);
      v258 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
      *(_OWORD *)&v393.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v393.fields.fakeValue = v258;
      if ( v257 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v393, 0LL) )
        this->fields.isBaseSvt = 1;
    }
    Instance = (int64_t)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_544;
    if ( UserServantEntity__IsHeroine((UserServantEntity_o *)Instance, 0LL) )
      this->fields.isHeroineSvt = 1;
    v220 = this->fields.type;
    if ( v220 == 3 )
    {
      CombineServantListViewItem__SetSkillInfo(this, v90);
      v220 = this->fields.type;
    }
    if ( v220 == 11 )
    {
      CombineServantListViewItem__SetAppendSkillInfo(this, v90);
      v220 = this->fields.type;
    }
  }
  if ( v220 != 4 )
    goto LABEL_387;
  Instance = (int64_t)this->fields.userSvtEntity;
  this->fields.isParty = v221;
  if ( !Instance )
    goto LABEL_544;
  Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL);
  v259 = this->fields.userSvtEntity;
  this->fields.isLock = Instance & 1;
  if ( !v259 )
    goto LABEL_544;
  *p_isChoice = UserServantEntity__IsChoice(v259, 0LL);
  Instance = (int64_t)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_544;
  Instance = UserServantEntity__IsEventJoin((UserServantEntity_o *)Instance, 0LL);
  this->fields.isEventJoin = Instance & 1;
  if ( baseUsrSvtData )
  {
    v260 = *p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_544;
    v261 = v260[2];
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v408.fields.currentCryptoKey = v260[1];
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v408.fields.fakeValue = v261;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v392 = v408;
    v262 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v392, 0LL);
    v263 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
    *(_OWORD *)&v391.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v391.fields.fakeValue = v263;
    if ( v262 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v391, 0LL) )
      this->fields.isBaseSvt = 1;
  }
  Instance = (int64_t)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
LABEL_544:
    sub_B2C434(Instance, v90);
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
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_544;
      Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
      if ( !Instance )
        goto LABEL_544;
      Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                            (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                            id,
                            (const MethodInfo_24E40D0 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
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
      v268 = SameSvtNpLvCache;
      CombineServantListViewItem__GetNpInfo(this, &tdLv[1], tdLv, &tdMaxLv, v267);
      if ( v370 <= 1200000 )
      {
        Instance = (int64_t)*p_userSvtEntity;
        if ( !*p_userSvtEntity )
          goto LABEL_544;
        v270 = UserServantEntity__checkTreasureDeviceLevelUp((UserServantEntity_o *)Instance, v268, 0LL);
        v271 = tdLv[0];
        if ( tdLv[0] >= v270 )
        {
          v274 = 0;
        }
        else
        {
          v272 = tdLv[1];
          v273 = v270;
          v274 = 0;
          do
          {
            Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !Instance )
              goto LABEL_544;
            Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
            if ( !Instance )
              goto LABEL_544;
            Instance = (int64_t)TreasureDvcLvMaster__GetEntity((TreasureDvcLvMaster_o *)Instance, v272, v271, 0LL);
            if ( Instance )
              v274 += *(_DWORD *)(Instance + 92);
            ++v271;
          }
          while ( v271 < v273 );
          baseUsrSvtData = v378;
          if ( !this )
            goto LABEL_544;
        }
        v269 = v370 >= v274;
      }
      else
      {
        v269 = 1;
      }
      this->fields.isSameSvt = v269;
    }
  }
  v220 = this->fields.type;
LABEL_387:
  if ( v220 != 5 )
    goto LABEL_437;
  this->fields.isParty = v221;
  this->fields.isMaterialSvt = isMtSvt;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_544;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantLeaderMaster___);
  if ( !Instance )
    goto LABEL_544;
  Instance = *(_QWORD *)(Instance + 32);
  if ( !Instance )
    goto LABEL_544;
  v277 = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
           (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
           (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !v277 )
    sub_B2C434(0LL, v275);
  while ( 1 )
  {
    v278 = v277->klass;
    if ( *(_WORD *)&v277->klass->_2.bitflags1 )
    {
      v279 = 0LL;
      v280 = &v278->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)v280 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v279;
        v280 += 4;
        if ( v279 >= *(unsigned __int16 *)&v277->klass->_2.bitflags1 )
          goto LABEL_396;
      }
      v281 = (__int64)&v278->vtable[*v280].method;
    }
    else
    {
LABEL_396:
      v281 = sub_AC5258(v277, System_Collections_IEnumerator_TypeInfo, 0LL, v276);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v281)(
            v277,
            *(_QWORD *)(v281 + 8)) & 1) == 0 )
      break;
    v282 = v277->klass;
    if ( *(_WORD *)&v277->klass->_2.bitflags1 )
    {
      v283 = 0LL;
      v284 = &v282->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v284 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v283;
        v284 += 4;
        if ( v283 >= *(unsigned __int16 *)&v277->klass->_2.bitflags1 )
          goto LABEL_403;
      }
      v285 = (__int64)&v282->vtable[*v284].method;
    }
    else
    {
LABEL_403:
      v285 = sub_AC5258(v277, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v276);
    }
    v286 = (_QWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v285)(
                       v277,
                       *(_QWORD *)(v285 + 8));
    if ( !v286 )
      sub_B2C434(0LL, v287);
    v288 = *(&UserServantLeaderEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*v286 + 300LL) < (unsigned int)v288
      || *(UserServantLeaderEntity_c **)(*(_QWORD *)(*v286 + 200LL) + 8 * v288 - 8) != UserServantLeaderEntity_TypeInfo )
    {
      goto LABEL_548;
    }
    v289 = (UserServantEntity_o *)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      sub_B2C434(v286, UserServantLeaderEntity_TypeInfo);
    v290 = *(_OWORD *)&v289->fields.id.fields.fakeValue;
    v291 = v286[7];
    *(_OWORD *)&v408.fields.currentCryptoKey = *(_OWORD *)&v289->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v408.fields.fakeValue = v290;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v390 = v408;
    if ( v291 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v390, 0LL) )
    {
      this->fields.isUseSupport = 1;
      break;
    }
  }
  v409[v410++] = 3557;
  v292 = v277->klass;
  if ( *(_WORD *)&v277->klass->_2.bitflags1 )
  {
    v293 = 0LL;
    v294 = &v292->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v294 - 1) != System_IDisposable_TypeInfo )
    {
      ++v293;
      v294 += 4;
      if ( v293 >= *(unsigned __int16 *)&v277->klass->_2.bitflags1 )
        goto LABEL_418;
    }
    v295 = (__int64)&v292->vtable[*v294].method;
  }
  else
  {
LABEL_418:
    v295 = sub_AC5258(v277, System_IDisposable_TypeInfo, 0LL, v276);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v295)(v277, *(_QWORD *)(v295 + 8));
  if ( v410 && v409[v410 - 1] == 3557 )
    --v410;
  IsLock = (int64_t)this->fields.userSvtEntity;
  this->fields.isFavorite = isFavorite;
  if ( !IsLock )
    goto LABEL_545;
  IsLock = UserServantEntity__IsLock((UserServantEntity_o *)IsLock, 0LL);
  v297 = this->fields.userSvtEntity;
  this->fields.isLock = IsLock & 1;
  if ( !v297 )
    goto LABEL_545;
  *p_isChoice = UserServantEntity__IsChoice(v297, 0LL);
  IsLock = (int64_t)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_545;
  this->fields.isEventJoin = UserServantEntity__IsEventJoin((UserServantEntity_o *)IsLock, 0LL);
  v298 = baseUsrSvtData && UserServantEntity__IsEventJoin(baseUsrSvtData, 0LL);
  IsLock = (int64_t)this->fields.userSvtEntity;
  this->fields.isEventJoinBaseSvt = v298;
  if ( !IsLock )
    goto LABEL_545;
  IsLock = UserServantEntity__IsMaterialTd((UserServantEntity_o *)IsLock, 0LL);
  this->fields.isMaterialTdSvt = IsLock & 1;
  if ( baseUsrSvtData )
  {
    v299 = (UserServantEntity_o *)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_545;
    v300 = *(_OWORD *)&v299->fields.id.fields.fakeValue;
    *(_OWORD *)&v408.fields.currentCryptoKey = *(_OWORD *)&v299->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v408.fields.fakeValue = v300;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v389 = v408;
    v301 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v389, 0LL);
    v302 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
    *(_OWORD *)&v388.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v388.fields.fakeValue = v302;
    if ( v301 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v388, 0LL) )
      this->fields.isBaseSvt = 1;
  }
LABEL_437:
  v303 = this->fields.type;
  if ( v303 == 6 )
  {
    IsLock = (int64_t)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_545;
    IsLock = UserServantEntity__isExceedLvMax((UserServantEntity_o *)IsLock, 0LL);
    v304 = this->fields.userSvtEntity;
    this->fields.isLvExceedMax = IsLock & 1;
    if ( !v304 )
      goto LABEL_545;
    IsLock = UserServantEntity__isLimitCountMax(v304, 0LL);
    v305 = this->fields.userSvtEntity;
    this->fields.isLimitCntMax = IsLock & 1;
    if ( !v305 )
      goto LABEL_545;
    v306 = UserServantEntity__isLevelMax(v305, 0LL);
    IsLock = (int64_t)this->fields.userSvtEntity;
    this->fields.isLvMax = v306;
    this->fields.isParty = v221;
    if ( !IsLock )
      goto LABEL_545;
    IsLock = UserServantEntity__IsLock((UserServantEntity_o *)IsLock, 0LL);
    v307 = this->fields.userSvtEntity;
    this->fields.isLock = IsLock & 1;
    if ( !v307 )
      goto LABEL_545;
    *p_isChoice = UserServantEntity__IsChoice(v307, 0LL);
    IsLock = (int64_t)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_545;
    IsLock = UserServantEntity__IsEventJoin((UserServantEntity_o *)IsLock, 0LL);
    this->fields.isEventJoin = IsLock & 1;
    if ( baseUsrSvtData )
    {
      v308 = (UserServantEntity_o *)*p_userSvtEntity;
      if ( !*p_userSvtEntity )
        goto LABEL_545;
      v309 = *(_OWORD *)&v308->fields.id.fields.fakeValue;
      *(_OWORD *)&v408.fields.currentCryptoKey = *(_OWORD *)&v308->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v408.fields.fakeValue = v309;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v387 = v408;
      v310 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v387, 0LL);
      v311 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
      *(_OWORD *)&v386.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v386.fields.fakeValue = v311;
      if ( v310 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v386, 0LL) )
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
        v313 = (int32_t *)SvtExceedEnt;
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        IsLock = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_CommonConsumeMaster___);
        if ( !IsLock )
          goto LABEL_545;
        IdEntityList = CommonConsumeMaster__GetIdEntityList((CommonConsumeMaster_o *)IsLock, v313[12], 0LL);
        if ( IdEntityList )
        {
          v315 = IdEntityList;
          v316 = (System_Collections_Generic_HashSet_int__o *)sub_B2C42C(System_Collections_Generic_HashSet_int__TypeInfo);
          System_Collections_Generic_HashSet_int____ctor(
            v316,
            (const MethodInfo_2D85080 *)Method_System_Collections_Generic_HashSet_int___ctor___67287824);
          v317 = (System_Collections_Generic_HashSet_int__o *)sub_B2C42C(System_Collections_Generic_HashSet_int__TypeInfo);
          System_Collections_Generic_HashSet_int____ctor(
            v317,
            (const MethodInfo_2D85080 *)Method_System_Collections_Generic_HashSet_int___ctor___67287824);
          v318 = v315->max_length;
          if ( v318 >= 1 )
          {
            v319 = 0LL;
            do
            {
              if ( (unsigned int)v319 >= v318 )
              {
LABEL_555:
                v368 = sub_B2C460(IsLock);
                sub_B2C400(v368, 0LL);
              }
              v320 = v315->m_Items[v319];
              if ( !v320 )
                goto LABEL_545;
              if ( !v316 )
                goto LABEL_545;
              IsLock = System_Collections_Generic_HashSet_int___Add(
                         v316,
                         v320->fields.objectId,
                         (const MethodInfo_2D8625C *)Method_System_Collections_Generic_HashSet_int__Add__);
              if ( !v317 )
                goto LABEL_545;
              IsLock = System_Collections_Generic_HashSet_int___Add(
                         v317,
                         v320->fields.num,
                         (const MethodInfo_2D8625C *)Method_System_Collections_Generic_HashSet_int__Add__);
              v318 = v315->max_length;
            }
            while ( (int)++v319 < v318 );
          }
          if ( v313[13] >= 1 )
          {
            if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !DataManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            }
            IsLock = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_SvtCoinMaster___);
            v321 = (UserServantEntity_o *)*p_userSvtEntity;
            if ( !*p_userSvtEntity )
              goto LABEL_545;
            v322 = (DataMasterBase_WarMaster__WarEntity__int__o *)IsLock;
            v323 = *(_QWORD *)&v321->fields.svtId.fields.currentCryptoKey;
            v324 = *(_QWORD *)&v321->fields.svtId.fields.fakeValue;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v426.fields.currentCryptoKey = v323;
            *(_QWORD *)&v426.fields.fakeValue = v324;
            IsLock = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v426, 0LL);
            if ( !v322 )
              goto LABEL_545;
            IsLock = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                v322,
                                IsLock,
                                (const MethodInfo_24E40D0 *)Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__GetEntity__);
            if ( !IsLock )
              goto LABEL_545;
            if ( !v316 )
              goto LABEL_545;
            IsLock = System_Collections_Generic_HashSet_int___Add(
                       v316,
                       *(_DWORD *)(IsLock + 24),
                       (const MethodInfo_2D8625C *)Method_System_Collections_Generic_HashSet_int__Add__);
            if ( !v317 )
              goto LABEL_545;
            System_Collections_Generic_HashSet_int___Add(
              v317,
              v313[13],
              (const MethodInfo_2D8625C *)Method_System_Collections_Generic_HashSet_int__Add__);
          }
          v325 = this->fields.userSvtEntity;
          v326 = System_Linq_Enumerable__ToArray_int_(
                   (System_Collections_Generic_IEnumerable_TSource__o *)v316,
                   (const MethodInfo_1A9AE24 *)Method_System_Linq_Enumerable_ToArray_int___);
          v327 = System_Linq_Enumerable__ToArray_int_(
                   (System_Collections_Generic_IEnumerable_TSource__o *)v317,
                   (const MethodInfo_1A9AE24 *)Method_System_Linq_Enumerable_ToArray_int___);
          baseUsrSvtData = v378;
          v221 = v381;
          this->fields.isLvExceedItemNum = CombineUtility__CheckCombineNeedItemsEnough(
                                             v325,
                                             v326,
                                             v327,
                                             *(_DWORD *)(v372 + 96),
                                             v313[8],
                                             0LL);
        }
      }
    }
    v303 = this->fields.type;
  }
  if ( v303 != 8 )
    goto LABEL_530;
  IsLock = (int64_t)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_545;
  this->fields.isFriendshipExceedMax = UserServantEntity__isExceedFriendshipMax((UserServantEntity_o *)IsLock, 0LL);
  v328 = *(_QWORD *)(v377 + 100);
  v329 = *(_QWORD *)(v377 + 108);
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v427.fields.currentCryptoKey = v328;
  *(_QWORD *)&v427.fields.fakeValue = v329;
  IsLock = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v427, 0LL);
  if ( !*p_servantEntity )
    goto LABEL_545;
  maxFriendshipRank = (*p_servantEntity)->fields.maxFriendshipRank;
  v331 = *(_DWORD *)(v377 + 116);
  v332 = this->fields.userSvtEntity;
  this->fields.isParty = v221;
  this->fields.isFriendshipRankMax = (_DWORD)IsLock == v331 + maxFriendshipRank;
  if ( !v332 )
    goto LABEL_545;
  IsLock = UserServantEntity__IsLock(v332, 0LL);
  v333 = this->fields.userSvtEntity;
  this->fields.isLock = IsLock & 1;
  if ( !v333 )
    goto LABEL_545;
  *p_isChoice = UserServantEntity__IsChoice(v333, 0LL);
  IsLock = (int64_t)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_545;
  IsLock = UserServantEntity__IsEventJoin((UserServantEntity_o *)IsLock, 0LL);
  this->fields.isEventJoin = IsLock & 1;
  if ( baseUsrSvtData )
  {
    v334 = (UserServantEntity_o *)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_545;
    v335 = *(_OWORD *)&v334->fields.id.fields.fakeValue;
    *(_OWORD *)&v408.fields.currentCryptoKey = *(_OWORD *)&v334->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v408.fields.fakeValue = v335;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v385 = v408;
    v336 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v385, 0LL);
    v337 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
    *(_OWORD *)&v384.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v384.fields.fakeValue = v337;
    if ( v336 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v384, 0LL) )
      this->fields.isBaseSvt = 1;
  }
  IsLock = (int64_t)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
LABEL_545:
    sub_B2C434(IsLock, v90);
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
  v338 = (*p_servantEntity)->fields.maxFriendshipRank;
  v339 = *(_DWORD *)(v377 + 116);
  IsLock = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !IsLock )
    goto LABEL_545;
  IsLock = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                      (DataManager_o *)IsLock,
                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_FriendshipMaster___);
  if ( !*p_servantEntity )
    goto LABEL_545;
  if ( !IsLock )
    goto LABEL_545;
  IsLock = (int64_t)FriendshipMaster__GetEntity(
                      (FriendshipMaster_o *)IsLock,
                      (*p_servantEntity)->fields.friendshipId,
                      v338 + v339 + 1,
                      0LL);
  if ( !IsLock )
    goto LABEL_545;
  v340 = IsLock;
  v341 = *(_QWORD *)(IsLock + 32);
  v342 = *(_QWORD *)(IsLock + 40);
  IsLock = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !IsLock )
    goto LABEL_545;
  IsLock = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                      (DataManager_o *)IsLock,
                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !v342 )
    goto LABEL_545;
  if ( *(int *)(v342 + 24) >= 1 )
  {
    v343 = (UserItemMaster_o *)IsLock;
    v344 = 0LL;
    v345 = v342 + 32;
    while ( 1 )
    {
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      IsLock = NetworkManager__get_UserId(0LL);
      if ( v344 >= *(unsigned int *)(v342 + 24) )
        goto LABEL_555;
      if ( !v343 )
        goto LABEL_545;
      IsLock = UserItemMaster__TryGetEntity(v343, &v411, IsLock, *(_DWORD *)(v345 + 4 * v344), 0LL);
      if ( (IsLock & 1) == 0 )
        break;
      if ( v344 >= *(unsigned int *)(v342 + 24) )
        goto LABEL_555;
      if ( !v411 )
        goto LABEL_545;
      if ( *(_DWORD *)(v345 + 4 * v344) == v411->fields.itemId )
      {
        if ( !v341 )
          goto LABEL_545;
        if ( v344 >= *(unsigned int *)(v341 + 24) )
          goto LABEL_555;
        v346 = *(_DWORD *)(v341 + 32 + 4 * v344) <= v411->fields.num;
        goto LABEL_526;
      }
LABEL_527:
      if ( (__int64)++v344 >= *(int *)(v342 + 24) )
        goto LABEL_528;
    }
    v346 = 0;
LABEL_526:
    this->fields.isFriendshipExceedItemNum = v346;
    goto LABEL_527;
  }
LABEL_528:
  if ( *(_DWORD *)(v372 + 96) < *(_DWORD *)(v340 + 28) )
    this->fields.isFriendshipExceedItemNum = 0;
LABEL_530:
  IsLock = (int64_t)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_545;
  IsLock = UserServantEntity__getDispLimitCount((UserServantEntity_o *)IsLock, 0, 0LL);
  v347 = this->fields.userSvtEntity;
  this->fields.dispLimitCount = IsLock;
  if ( !v347 )
    goto LABEL_545;
  SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v347, -1, 0LL);
  this->fields.skillCategoryIdList = SkillCategoryIdList;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.skillCategoryIdList,
    (System_Int32_array **)SkillCategoryIdList,
    v349,
    v350,
    v351,
    v352,
    v353,
    v354);
  IsLock = (int64_t)this->fields.userSvtEntity;
  if ( !IsLock )
    goto LABEL_545;
  TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                   (UserServantEntity_o *)IsLock,
                                   0,
                                   0LL);
  this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.tdCategoryIdList,
    (System_Int32_array **)TreasureDeviceCategoryIdList,
    v356,
    v357,
    v358,
    v359,
    v360,
    v361);
  IsLock = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !IsLock )
    goto LABEL_545;
  IsLock = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                      (DataManager_o *)IsLock,
                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !IsLock )
    goto LABEL_545;
  IsLock = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                      (DataMasterBase_WarMaster__WarEntity__int__o *)IsLock,
                      this->fields.classId,
                      (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !IsLock )
    goto LABEL_545;
  v362 = *(int *)(IsLock + 48);
  v363 = this->fields.servantEntity;
  this->fields.priority = v362;
  this->fields.sortValue1B = v362;
  if ( !v363 )
    goto LABEL_545;
  v364 = (UserServantEntity_o *)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_545;
  this->fields.sortValue2 = ((__int64)v363->fields.collectionNo << 16) | ((unsigned __int64)(unsigned int)this->fields.rarity << 48) | v364->fields.lv;
  v366 = *(_QWORD *)&v364->fields.svtId.fields.currentCryptoKey;
  v365 = *(_QWORD *)&v364->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v428.fields.currentCryptoKey = v366;
  *(_QWORD *)&v428.fields.fakeValue = v365;
  v367 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v428, 0LL);
  IsLock = (int64_t)this->fields.iconLabelInfo1;
  this->fields.sortValue2B = v367;
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
  UserServantEntity_o *userSvtEntity; // x0
  SvtUseSkillData_o *v5; // x19

  if ( (byte_418A5EF & 1) == 0 )
  {
    sub_B2C35C(&SvtUseSkillData_TypeInfo, method);
    byte_418A5EF = 1;
  }
  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
    return UserServantEntity__getAppendSkillInfo(userSvtEntity, 0LL);
  v5 = (SvtUseSkillData_o *)sub_B2C42C(SvtUseSkillData_TypeInfo);
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
      sub_B2C434(TreasureDeviceInfo, v10);
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
  __int64 v3; // x1
  __int64 v4; // x1
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v6; // x1
  struct ServantEntity_o *servantEntity; // x8
  int32_t combineLimitId; // w2
  int32_t condTargetId; // w19
  int32_t condType; // w21
  int64_t condNum; // x20
  CombineLimitReleaseEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_418A5F0 & 1) == 0 )
  {
    sub_B2C35C(&CondType_TypeInfo, method);
    sub_B2C35C(&Method_DataManager_GetMaster_CombineLimitReleaseMaster___, v3);
    sub_B2C35C(&DataManager_TypeInfo, v4);
    byte_418A5F0 = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_CombineLimitReleaseMaster___);
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
    sub_B2C434(Master_WarQuestSelectionMaster, v6);
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

  if ( (byte_418A5EE & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, skillInfoList);
    sub_B2C35C(&SkillInfo___TypeInfo, v5);
    byte_418A5EE = 1;
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
    v9 = (SkillInfo_array *)sub_B2C374(SkillInfo___TypeInfo, (unsigned int)v8->static_fields->SvtSkillListMax);
    *skillInfoList = v9;
    sub_B2C2F8((BattleServantConfConponent_o *)skillInfoList, (System_Int32_array **)v9, v10, v11, v12, v13, v14, v15);
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
  FilterKindList_c *v19; // x0
  ListViewSort_FilterKind_array *v20; // x21
  UserServantEntity_o *v22; // x0
  int32_t dispLimitCount; // w21
  UserServantEntity_o *v24; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  _BOOL4 IsUnSelectedAllTargetFilters; // w21
  _BOOL4 v40; // w23
  _BOOL4 IsMatchEffectCategory; // w22
  _BOOL4 v42; // w0
  __int64 v43; // x0

  if ( (byte_418A5DE & 1) == 0 )
  {
    sub_B2C35C(&FilterKindList_TypeInfo, sort);
    sub_B2C35C(&ListViewSort_FilterKind___TypeInfo, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v6);
    sub_B2C35C(&ServantEventBonusFilterController_TypeInfo, v7);
    byte_418A5DE = 1;
  }
  v8 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v8 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v8->static_fields->ClassGroupFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_72;
  ClassGroupFilterKindList = (__int64)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                        (System_Collections_Generic_List_Voice_BATTLE__o *)ClassGroupFilterKindList,
                                        (const MethodInfo_2F6C0DC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_72;
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0LL) )
  {
    v10 = FilterKindList_TypeInfo;
    if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
      v10 = FilterKindList_TypeInfo;
    }
    ClassGroupFilterKindList = (__int64)v10->static_fields->ClassFilterKindList;
    if ( !ClassGroupFilterKindList )
      goto LABEL_72;
    v11 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                             (System_Collections_Generic_List_Voice_BATTLE__o *)ClassGroupFilterKindList,
                                             (const MethodInfo_2F6C0DC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v12 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v12->static_fields->NpTypeFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_72;
  v13 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           (System_Collections_Generic_List_Voice_BATTLE__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_2F6C0DC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v13, 0LL)
    && !ListViewSort__IsMatchNPTypeFilter(sort, this->fields.userSvtEntity, 0LL) )
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
  ClassGroupFilterKindList = (__int64)v14->static_fields->NpEffectFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_72;
  v15 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           (System_Collections_Generic_List_Voice_BATTLE__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_2F6C0DC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v15, 0LL)
    && !ListViewSort__IsMatchNPEffectFilter(sort, this->fields.userSvtEntity, 0LL) )
  {
    return 0;
  }
  v16 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v16 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v16->static_fields->CombineBaseServantFilterKindList;
  if ( !ClassGroupFilterKindList )
LABEL_72:
    sub_B2C434(ClassGroupFilterKindList, sort);
  v17 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           (System_Collections_Generic_List_Voice_BATTLE__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_2F6C0DC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v17, 0LL)
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
    v22 = this->fields.userSvtEntity;
    if ( v22 )
    {
      dispLimitCount = this->fields.dispLimitCount;
      if ( dispLimitCount != UserServantEntity__getDispLimitCount(v22, 0, 0LL) )
      {
        ClassGroupFilterKindList = (__int64)this->fields.userSvtEntity;
        if ( !ClassGroupFilterKindList )
          goto LABEL_72;
        ClassGroupFilterKindList = UserServantEntity__getDispLimitCount(
                                     (UserServantEntity_o *)ClassGroupFilterKindList,
                                     0,
                                     0LL);
        v24 = this->fields.userSvtEntity;
        this->fields.dispLimitCount = ClassGroupFilterKindList;
        if ( !v24 )
          goto LABEL_72;
        SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v24, -1, 0LL);
        this->fields.skillCategoryIdList = SkillCategoryIdList;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&this->fields.skillCategoryIdList,
          (System_Int32_array **)SkillCategoryIdList,
          v26,
          v27,
          v28,
          v29,
          v30,
          v31);
        ClassGroupFilterKindList = (__int64)this->fields.userSvtEntity;
        if ( !ClassGroupFilterKindList )
          goto LABEL_72;
        TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                         (UserServantEntity_o *)ClassGroupFilterKindList,
                                         0,
                                         0LL);
        this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&this->fields.tdCategoryIdList,
          (System_Int32_array **)TreasureDeviceCategoryIdList,
          v33,
          v34,
          v35,
          v36,
          v37,
          v38);
      }
    }
    ClassGroupFilterKindList = sub_B2C374(ListViewSort_FilterKind___TypeInfo, 1LL);
    if ( !ClassGroupFilterKindList )
      goto LABEL_72;
    if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
      goto LABEL_73;
    *(_DWORD *)(ClassGroupFilterKindList + 32) = 50;
    IsUnSelectedAllTargetFilters = ListViewSort__IsUnSelectedAllTargetFilters(
                                     sort,
                                     (ListViewSort_FilterKind_array *)ClassGroupFilterKindList,
                                     0LL);
    ClassGroupFilterKindList = sub_B2C374(ListViewSort_FilterKind___TypeInfo, 1LL);
    if ( !ClassGroupFilterKindList )
      goto LABEL_72;
    if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
    {
LABEL_73:
      v43 = sub_B2C460(ClassGroupFilterKindList);
      sub_B2C400(v43, 0LL);
    }
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
  ClassGroupFilterKindList = sub_B2C374(ListViewSort_FilterKind___TypeInfo, 1LL);
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
  v19 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v19 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v19->static_fields->RarityFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_72;
  v20 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           (System_Collections_Generic_List_Voice_BATTLE__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_2F6C0DC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v20, 0LL)
      || ListViewSort__IsSelectedAllTargetFilters(sort, v20, 0LL)
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
  bool IsMatchClassGroupFilter; // w0
  FilterKindList_c *v14; // x0
  ListViewSort_FilterKind_array *v15; // x0
  FilterKindList_c *v16; // x0
  ListViewSort_FilterKind_array *v17; // x0
  FilterKindList_c *v18; // x0
  ListViewSort_FilterKind_array *v19; // x0
  UserServantEntity_o *userSvtEntity; // x21
  int v21; // w21
  UserServantEntity_o *v22; // x0
  int32_t dispLimitCount; // w21
  UserServantEntity_o *v24; // x8
  System_Int32_array **SkillCategoryIdList; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_Int32_array **TreasureDeviceCategoryIdList; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  _BOOL4 IsUnSelectedAllTargetFilters; // w21
  _BOOL4 v40; // w23
  _BOOL4 IsMatchEffectCategory; // w22
  _BOOL4 v42; // w0
  bool CanNotSelect; // w0
  FilterKindList_c *v44; // x0
  ListViewSort_FilterKind_array *v45; // x21
  __int64 v47; // x0

  v4 = this;
  if ( (byte_418A5DF & 1) == 0 )
  {
    sub_B2C35C(&FilterKindList_TypeInfo, sort);
    sub_B2C35C(&ListViewSort_FilterKind___TypeInfo, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v6);
    this = (CombineServantListViewItem_o *)sub_B2C35C(&ServantEventBonusFilterController_TypeInfo, v7);
    byte_418A5DF = 1;
  }
  if ( !sort )
    goto LABEL_88;
  v8 = ListViewSort__GetFilter(sort, 28, 0LL) && v4->fields.isSameClass;
  v9 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v9 = FilterKindList_TypeInfo;
  }
  this = (CombineServantListViewItem_o *)v9->static_fields->ClassGroupFilterKindList;
  if ( !this )
    goto LABEL_88;
  v10 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           (System_Collections_Generic_List_Voice_BATTLE__o *)this,
                                           (const MethodInfo_2F6C0DC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v10, 0LL) )
  {
    IsMatchClassGroupFilter = ListViewSort__IsMatchClassGroupFilter(sort, v4->fields.servantEntity, 0LL);
    if ( v8 )
      goto LABEL_24;
    goto LABEL_21;
  }
  v11 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v11 = FilterKindList_TypeInfo;
  }
  this = (CombineServantListViewItem_o *)v11->static_fields->ClassFilterKindList;
  if ( !this )
    goto LABEL_88;
  v12 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           (System_Collections_Generic_List_Voice_BATTLE__o *)this,
                                           (const MethodInfo_2F6C0DC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v12, 0LL) )
    goto LABEL_92;
  this = (CombineServantListViewItem_o *)sub_B2C374(ListViewSort_FilterKind___TypeInfo, 1LL);
  if ( !this )
    goto LABEL_88;
  if ( !this->fields.sortIndex )
    goto LABEL_89;
  LODWORD(this->fields.sortValue0) = 28;
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)this, 0LL) )
  {
LABEL_92:
    IsMatchClassGroupFilter = ListViewSort__IsMatchClassFilter(sort, v4->fields.servantEntity, 0LL);
    if ( !v8 )
    {
LABEL_21:
      if ( !IsMatchClassGroupFilter )
        return 0;
    }
  }
LABEL_24:
  v14 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v14 = FilterKindList_TypeInfo;
  }
  this = (CombineServantListViewItem_o *)v14->static_fields->NpTypeFilterKindList;
  if ( !this )
    goto LABEL_88;
  v15 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           (System_Collections_Generic_List_Voice_BATTLE__o *)this,
                                           (const MethodInfo_2F6C0DC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v15, 0LL)
    && !ListViewSort__IsMatchNPTypeFilter(sort, v4->fields.userSvtEntity, 0LL) )
  {
    return 0;
  }
  v16 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v16 = FilterKindList_TypeInfo;
  }
  this = (CombineServantListViewItem_o *)v16->static_fields->NpEffectFilterKindList;
  if ( !this )
    goto LABEL_88;
  v17 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           (System_Collections_Generic_List_Voice_BATTLE__o *)this,
                                           (const MethodInfo_2F6C0DC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v17, 0LL)
    && !ListViewSort__IsMatchNPEffectFilter(sort, v4->fields.userSvtEntity, 0LL) )
  {
    return 0;
  }
  v18 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v18 = FilterKindList_TypeInfo;
  }
  this = (CombineServantListViewItem_o *)v18->static_fields->ServantTypeFilterKindList;
  if ( !this )
LABEL_88:
    sub_B2C434(this, sort);
  v19 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           (System_Collections_Generic_List_Voice_BATTLE__o *)this,
                                           (const MethodInfo_2F6C0DC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v19, 0LL)
    && !ListViewSort__IsMatchServantTypeFilter(sort, v4->fields.servantEntity, 0LL) )
  {
    return 0;
  }
  if ( !ListViewSort__CheckSvtEventBonusFilterDefaultAll(sort, -1, 0LL) )
  {
    userSvtEntity = v4->fields.userSvtEntity;
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
    v22 = v4->fields.userSvtEntity;
    if ( v22 )
    {
      dispLimitCount = v4->fields.dispLimitCount;
      if ( dispLimitCount != UserServantEntity__getDispLimitCount(v22, 0, 0LL) )
      {
        this = (CombineServantListViewItem_o *)v4->fields.userSvtEntity;
        if ( !this )
          goto LABEL_88;
        this = (CombineServantListViewItem_o *)UserServantEntity__getDispLimitCount((UserServantEntity_o *)this, 0, 0LL);
        v24 = v4->fields.userSvtEntity;
        v4->fields.dispLimitCount = (int)this;
        if ( !v24 )
          goto LABEL_88;
        SkillCategoryIdList = (System_Int32_array **)UserServantEntity__GetSkillCategoryIdList(v24, -1, 0LL);
        v4->fields.skillCategoryIdList = (struct System_Int32_array *)SkillCategoryIdList;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&v4->fields.skillCategoryIdList,
          SkillCategoryIdList,
          v26,
          v27,
          v28,
          v29,
          v30,
          v31);
        this = (CombineServantListViewItem_o *)v4->fields.userSvtEntity;
        if ( !this )
          goto LABEL_88;
        TreasureDeviceCategoryIdList = (System_Int32_array **)UserServantEntity__GetTreasureDeviceCategoryIdList(
                                                                (UserServantEntity_o *)this,
                                                                0,
                                                                0LL);
        v4->fields.tdCategoryIdList = (struct System_Int32_array *)TreasureDeviceCategoryIdList;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&v4->fields.tdCategoryIdList,
          TreasureDeviceCategoryIdList,
          v33,
          v34,
          v35,
          v36,
          v37,
          v38);
      }
    }
    this = (CombineServantListViewItem_o *)sub_B2C374(ListViewSort_FilterKind___TypeInfo, 1LL);
    if ( !this )
      goto LABEL_88;
    if ( !this->fields.sortIndex )
      goto LABEL_89;
    LODWORD(this->fields.sortValue0) = 50;
    IsUnSelectedAllTargetFilters = ListViewSort__IsUnSelectedAllTargetFilters(
                                     sort,
                                     (ListViewSort_FilterKind_array *)this,
                                     0LL);
    this = (CombineServantListViewItem_o *)sub_B2C374(ListViewSort_FilterKind___TypeInfo, 1LL);
    if ( !this )
      goto LABEL_88;
    if ( !this->fields.sortIndex )
      goto LABEL_89;
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
  this = (CombineServantListViewItem_o *)sub_B2C374(ListViewSort_FilterKind___TypeInfo, 1LL);
  if ( !this )
    goto LABEL_88;
  if ( !this->fields.sortIndex )
    goto LABEL_89;
  LODWORD(this->fields.sortValue0) = 39;
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)this, 0LL) )
  {
    this = (CombineServantListViewItem_o *)sub_B2C374(ListViewSort_FilterKind___TypeInfo, 1LL);
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
    v47 = sub_B2C460(this);
    sub_B2C400(v47, 0LL);
  }
LABEL_54:
  if ( ListViewSort__GetFilter(sort, 39, 0LL) )
    v21 = v4->fields.isSwapChoice ^ v4->fields.isChoice;
  else
    v21 = 0;
  if ( ListViewSort__GetFilter(sort, 29, 0LL) )
  {
    CanNotSelect = CombineServantListViewItem__get_IsCanNotSelect(v4, (const MethodInfo *)sort);
    if ( v21 )
      goto LABEL_76;
  }
  else
  {
    CanNotSelect = 1;
    if ( v21 )
      goto LABEL_76;
  }
  if ( CanNotSelect )
    return 0;
LABEL_76:
  v44 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v44 = FilterKindList_TypeInfo;
  }
  this = (CombineServantListViewItem_o *)v44->static_fields->RarityFilterKindList;
  if ( !this )
    goto LABEL_88;
  v45 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           (System_Collections_Generic_List_Voice_BATTLE__o *)this,
                                           (const MethodInfo_2F6C0DC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
  FilterKindList_c *v17; // x0
  ListViewSort_FilterKind_array *v18; // x21
  UserServantEntity_o *v20; // x0
  int32_t dispLimitCount; // w21
  UserServantEntity_o *v22; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  _BOOL4 IsUnSelectedAllTargetFilters; // w21
  _BOOL4 v38; // w23
  _BOOL4 IsMatchEffectCategory; // w22
  _BOOL4 v40; // w0
  __int64 v41; // x0

  if ( (byte_418A5DD & 1) == 0 )
  {
    sub_B2C35C(&FilterKindList_TypeInfo, sort);
    sub_B2C35C(&ListViewSort_FilterKind___TypeInfo, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v6);
    sub_B2C35C(&ServantEventBonusFilterController_TypeInfo, v7);
    byte_418A5DD = 1;
  }
  v8 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v8 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v8->static_fields->ClassGroupFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_66;
  ClassGroupFilterKindList = (__int64)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                        (System_Collections_Generic_List_Voice_BATTLE__o *)ClassGroupFilterKindList,
                                        (const MethodInfo_2F6C0DC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_66;
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0LL) )
  {
    v10 = FilterKindList_TypeInfo;
    if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
      v10 = FilterKindList_TypeInfo;
    }
    ClassGroupFilterKindList = (__int64)v10->static_fields->ClassFilterKindList;
    if ( !ClassGroupFilterKindList )
      goto LABEL_66;
    v11 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                             (System_Collections_Generic_List_Voice_BATTLE__o *)ClassGroupFilterKindList,
                                             (const MethodInfo_2F6C0DC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v12 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v12->static_fields->NpTypeFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_66;
  v13 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           (System_Collections_Generic_List_Voice_BATTLE__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_2F6C0DC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v13, 0LL)
    && !ListViewSort__IsMatchNPTypeFilter(sort, this->fields.userSvtEntity, 0LL) )
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
  ClassGroupFilterKindList = (__int64)v14->static_fields->NpEffectFilterKindList;
  if ( !ClassGroupFilterKindList )
LABEL_66:
    sub_B2C434(ClassGroupFilterKindList, sort);
  v15 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           (System_Collections_Generic_List_Voice_BATTLE__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_2F6C0DC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v15, 0LL)
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
    v20 = this->fields.userSvtEntity;
    if ( v20 )
    {
      dispLimitCount = this->fields.dispLimitCount;
      if ( dispLimitCount != UserServantEntity__getDispLimitCount(v20, 0, 0LL) )
      {
        ClassGroupFilterKindList = (__int64)this->fields.userSvtEntity;
        if ( !ClassGroupFilterKindList )
          goto LABEL_66;
        ClassGroupFilterKindList = UserServantEntity__getDispLimitCount(
                                     (UserServantEntity_o *)ClassGroupFilterKindList,
                                     0,
                                     0LL);
        v22 = this->fields.userSvtEntity;
        this->fields.dispLimitCount = ClassGroupFilterKindList;
        if ( !v22 )
          goto LABEL_66;
        SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v22, -1, 0LL);
        this->fields.skillCategoryIdList = SkillCategoryIdList;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&this->fields.skillCategoryIdList,
          (System_Int32_array **)SkillCategoryIdList,
          v24,
          v25,
          v26,
          v27,
          v28,
          v29);
        ClassGroupFilterKindList = (__int64)this->fields.userSvtEntity;
        if ( !ClassGroupFilterKindList )
          goto LABEL_66;
        TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                         (UserServantEntity_o *)ClassGroupFilterKindList,
                                         0,
                                         0LL);
        this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&this->fields.tdCategoryIdList,
          (System_Int32_array **)TreasureDeviceCategoryIdList,
          v31,
          v32,
          v33,
          v34,
          v35,
          v36);
      }
    }
    ClassGroupFilterKindList = sub_B2C374(ListViewSort_FilterKind___TypeInfo, 1LL);
    if ( !ClassGroupFilterKindList )
      goto LABEL_66;
    if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
      goto LABEL_67;
    *(_DWORD *)(ClassGroupFilterKindList + 32) = 50;
    IsUnSelectedAllTargetFilters = ListViewSort__IsUnSelectedAllTargetFilters(
                                     sort,
                                     (ListViewSort_FilterKind_array *)ClassGroupFilterKindList,
                                     0LL);
    ClassGroupFilterKindList = sub_B2C374(ListViewSort_FilterKind___TypeInfo, 1LL);
    if ( !ClassGroupFilterKindList )
      goto LABEL_66;
    if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
    {
LABEL_67:
      v41 = sub_B2C460(ClassGroupFilterKindList);
      sub_B2C400(v41, 0LL);
    }
    *(_DWORD *)(ClassGroupFilterKindList + 32) = 51;
    v38 = ListViewSort__IsUnSelectedAllTargetFilters(
            sort,
            (ListViewSort_FilterKind_array *)ClassGroupFilterKindList,
            0LL);
    IsMatchEffectCategory = ServantEquipEffectFilterController__IsMatchEffectCategory(
                              this->fields.tdCategoryIdList,
                              sort,
                              0LL);
    v40 = ServantEquipEffectFilterController__IsMatchEffectCategory(this->fields.skillCategoryIdList, sort, 0LL);
    if ( ((IsUnSelectedAllTargetFilters ^ v38) & 1) != 0 )
    {
      if ( IsUnSelectedAllTargetFilters )
      {
        if ( !v40 )
          return 0;
      }
      else if ( !IsMatchEffectCategory )
      {
        return 0;
      }
    }
    else if ( !IsMatchEffectCategory && !v40 )
    {
      return 0;
    }
  }
  ClassGroupFilterKindList = sub_B2C374(ListViewSort_FilterKind___TypeInfo, 1LL);
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
  v17 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v17 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v17->static_fields->RarityFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_66;
  v18 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           (System_Collections_Generic_List_Voice_BATTLE__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_2F6C0DC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v18, 0LL)
      || ListViewSort__IsSelectedAllTargetFilters(sort, v18, 0LL)
      || ListViewSort__IsMatchRarityFilter(sort, this->fields.rarity, 0LL);
}


void __fastcall CombineServantListViewItem__ModifyChoiceItem(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0

  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_B2C434(0LL, method);
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
    sub_B2C434(0LL, method);
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
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v8; // [xsp+0h] [xbp-50h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v9; // [xsp+20h] [xbp-30h]

  if ( (byte_418A5DC & 1) == 0 )
  {
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
    byte_418A5DC = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame || (userSvtEntity = this->fields.userSvtEntity) == 0LL )
    sub_B2C434(SelfUserGame, v4);
  v6 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  pushUserSvtId = SelfUserGame->fields.pushUserSvtId;
  *(_OWORD *)&v9.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v9.fields.fakeValue = v6;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v8 = v9;
  this->fields.isPush = pushUserSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v8, 0LL);
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
  __int64 v17; // x22
  unsigned __int64 max_length; // x9
  unsigned __int64 v19; // x25
  struct System_Int32_array *v20; // x8
  struct System_Int32_array *svtSkillLvList; // x8
  struct System_Int32_array *v22; // x8
  __int64 v23; // x27
  unsigned __int64 v24; // x9
  unsigned __int64 v25; // x22
  struct System_Int32_array *v26; // x8
  struct UserServantEntity_o *v27; // x8
  CombineAppendPassiveSkillMaster_o *v28; // x23
  __int64 v29; // x24
  __int64 v30; // x25
  struct System_Int32_array *svtSkillNumsList; // x8
  struct System_Int32_array *v32; // x9
  struct System_Int32_array *v33; // x8
  struct UserServantEntity_o *v34; // x8
  SvtAppendPassiveSkillUnlockMaster_o *v35; // x23
  __int64 v36; // x24
  __int64 v37; // x25
  struct System_Int32_array *v38; // x8
  __int64 v39; // x0
  System_Collections_Generic_List_int__o *v40; // [xsp+0h] [xbp-60h]
  CombineAppendPassiveSkillEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v42; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v43; // 0:x0.16

  if ( (byte_418A5DB & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_CombineAppendPassiveSkillMaster___, method);
    sub_B2C35C(&Method_DataManager_GetMaster_SkillMaster___, v3);
    sub_B2C35C(&Method_DataManager_GetMaster_SvtAppendPassiveSkillUnlockMaster___, v4);
    sub_B2C35C(&DataManager_TypeInfo, v5);
    sub_B2C35C(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v6);
    sub_B2C35C(&Method_System_Linq_Enumerable_Any_int___, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v9);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v10);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    byte_418A5DB = 1;
  }
  entity = 0LL;
  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_69;
  AppendSkillInfo = UserServantEntity__getAppendSkillInfo((UserServantEntity_o *)userSvtEntity, 0LL);
  if ( !AppendSkillInfo )
    return;
  v14 = AppendSkillInfo;
  userSvtEntity = UserGameMaster__getSelfUserGame(0LL);
  if ( !userSvtEntity )
    goto LABEL_69;
  v15 = *((_DWORD *)userSvtEntity + 24);
  this->fields.isAppendSkillLvMax = 1;
  svtUseSkillIdList = v14->fields.svtUseSkillIdList;
  if ( !svtUseSkillIdList )
    goto LABEL_69;
  v17 = 8LL;
  while ( 1 )
  {
    max_length = svtUseSkillIdList->max_length;
    v19 = v17 - 8;
    if ( v17 - 8 >= (int)max_length )
      break;
    if ( v19 >= max_length )
      goto LABEL_72;
    if ( *((int *)&svtUseSkillIdList->obj.klass + v17) >= 1 )
    {
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      userSvtEntity = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_SkillMaster___);
      v20 = v14->fields.svtUseSkillIdList;
      if ( !v20 )
        goto LABEL_69;
      if ( v19 >= v20->max_length )
        goto LABEL_72;
      if ( !userSvtEntity )
        goto LABEL_69;
      userSvtEntity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                        (DataMasterBase_WarMaster__WarEntity__int__o *)userSvtEntity,
                        *((_DWORD *)&v20->obj.klass + v17),
                        (const MethodInfo_24E40D0 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
      svtSkillLvList = v14->fields.svtSkillLvList;
      if ( !svtSkillLvList )
        goto LABEL_69;
      if ( v19 >= svtSkillLvList->max_length )
      {
LABEL_72:
        v39 = sub_B2C460(userSvtEntity);
        sub_B2C400(v39, 0LL);
      }
      if ( !userSvtEntity )
        goto LABEL_69;
      if ( *((_DWORD *)&svtSkillLvList->obj.klass + v17) < *((_DWORD *)userSvtEntity + 10) )
      {
        this->fields.isAppendSkillLvMax = 0;
        break;
      }
      svtUseSkillIdList = v14->fields.svtUseSkillIdList;
    }
    ++v17;
    if ( !svtUseSkillIdList )
      goto LABEL_69;
  }
  v40 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v40,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  v22 = v14->fields.svtUseSkillIdList;
  if ( !v22 )
LABEL_69:
    sub_B2C434(userSvtEntity, method);
  v23 = 8LL;
  while ( 1 )
  {
    v24 = v22->max_length;
    v25 = v23 - 8;
    if ( v23 - 8 >= (int)v24 )
      break;
    if ( v25 >= v24 )
      goto LABEL_72;
    if ( *((int *)&v22->obj.klass + v23) < 1 )
      goto LABEL_68;
    v26 = v14->fields.svtSkillLvList;
    if ( !v26 )
      goto LABEL_69;
    if ( v25 >= v26->max_length )
      goto LABEL_72;
    if ( *((_DWORD *)&v26->obj.klass + v23) )
    {
      if ( (WORD1(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      userSvtEntity = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_CombineAppendPassiveSkillMaster___);
      v27 = this->fields.userSvtEntity;
      if ( !v27 )
        goto LABEL_69;
      v28 = (CombineAppendPassiveSkillMaster_o *)userSvtEntity;
      v30 = *(_QWORD *)&v27->fields.svtId.fields.currentCryptoKey;
      v29 = *(_QWORD *)&v27->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v42.fields.currentCryptoKey = v30;
      *(_QWORD *)&v42.fields.fakeValue = v29;
      userSvtEntity = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v42, 0LL);
      svtSkillNumsList = v14->fields.svtSkillNumsList;
      if ( !svtSkillNumsList )
        goto LABEL_69;
      if ( v25 >= svtSkillNumsList->max_length )
        goto LABEL_72;
      v32 = v14->fields.svtSkillLvList;
      if ( !v32 )
        goto LABEL_69;
      if ( v25 >= v32->max_length )
        goto LABEL_72;
      if ( !v28 )
        goto LABEL_69;
      userSvtEntity = (void *)CombineAppendPassiveSkillMaster__TryGetEntityWithTryNum(
                                v28,
                                &entity,
                                (int32_t)userSvtEntity,
                                *((_DWORD *)&svtSkillNumsList->obj.klass + v23),
                                *((_DWORD *)&v32->obj.klass + v23),
                                0LL);
      if ( ((unsigned __int8)userSvtEntity & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_69;
        userSvtEntity = (void *)CombineUtility__CheckCombineNeedItemsEnough(
                                  this->fields.userSvtEntity,
                                  entity->fields.itemIds,
                                  entity->fields.itemNums,
                                  v15,
                                  entity->fields.qp,
                                  0LL);
        if ( ((unsigned __int8)userSvtEntity & 1) != 0 )
        {
          v33 = v14->fields.svtUseSkillIdList;
          if ( !v33 )
            goto LABEL_69;
          if ( v25 >= v33->max_length )
            goto LABEL_72;
          userSvtEntity = this->fields.enableAppendSkillUp;
          if ( !userSvtEntity )
            goto LABEL_69;
LABEL_67:
          System_Collections_Generic_List_int___Add(
            (System_Collections_Generic_List_int__o *)userSvtEntity,
            *((_DWORD *)&v33->obj.klass + v23),
            (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
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
      userSvtEntity = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_SvtAppendPassiveSkillUnlockMaster___);
      v34 = this->fields.userSvtEntity;
      if ( !v34 )
        goto LABEL_69;
      v35 = (SvtAppendPassiveSkillUnlockMaster_o *)userSvtEntity;
      v37 = *(_QWORD *)&v34->fields.svtId.fields.currentCryptoKey;
      v36 = *(_QWORD *)&v34->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v43.fields.currentCryptoKey = v37;
      *(_QWORD *)&v43.fields.fakeValue = v36;
      userSvtEntity = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v43, 0LL);
      v38 = v14->fields.svtSkillNumsList;
      if ( !v38 )
        goto LABEL_69;
      if ( v25 >= v38->max_length )
        goto LABEL_72;
      if ( !v35 )
        goto LABEL_69;
      userSvtEntity = SvtAppendPassiveSkillUnlockMaster__GetEntity(
                        v35,
                        (int32_t)userSvtEntity,
                        *((_DWORD *)&v38->obj.klass + v23),
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
          v33 = v14->fields.svtUseSkillIdList;
          if ( !v33 )
            goto LABEL_69;
          if ( v25 >= v33->max_length )
            goto LABEL_72;
          userSvtEntity = v40;
          if ( !v40 )
            goto LABEL_69;
          goto LABEL_67;
        }
      }
    }
LABEL_68:
    v22 = v14->fields.svtUseSkillIdList;
    ++v23;
    if ( !v22 )
      goto LABEL_69;
  }
  this->fields.isAppendSkillUpItemNum = System_Linq_Enumerable__Any_int_(
                                          (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.enableAppendSkillUp,
                                          (const MethodInfo_173832C *)Method_System_Linq_Enumerable_Any_int___);
  this->fields.isAppendSkillOpenItemNum = System_Linq_Enumerable__Any_int_(
                                            (System_Collections_Generic_IEnumerable_TSource__o *)v40,
                                            (const MethodInfo_173832C *)Method_System_Linq_Enumerable_Any_int___);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x20
  UserServantEntity_o *userSvtEntity; // x0
  __int64 v11; // x1
  int32_t size; // w8
  __int64 v13; // x22
  unsigned int v14; // w24
  __int64 v15; // x8
  int v16; // w8
  int monitor; // w23
  unsigned int v18; // w21
  EventMissionProgressRequest_Argument_ProgressData_o *v19; // x8
  EventMissionProgressRequest_Argument_ProgressData_c *klass; // x8
  int namespaze; // w9
  unsigned int v22; // w10
  EventMissionProgressRequest_Argument_ProgressData_o *v23; // x8
  EventMissionProgressRequest_Argument_ProgressData_o *v24; // x8
  __int64 v25; // x0

  if ( (byte_418A5E1 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__, eventCampaignEntities);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Count__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__, v7);
    sub_B2C35C(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo, v8);
    byte_418A5E1 = 1;
  }
  this->fields.isCombineExpCampaignTarget = 0;
  this->fields.combineExpCampaignValue = 0.0;
  if ( !eventCampaignEntities || this->fields.type )
    return;
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
  size = eventCampaignEntities->fields._size;
  if ( size >= 1 )
  {
    v13 = 4LL;
    while ( 1 )
    {
      v14 = v13 - 4;
      if ( size <= (unsigned int)(v13 - 4) )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v15 = *((_QWORD *)&eventCampaignEntities->fields._items->obj.klass + v13);
      if ( !v15 )
        break;
      if ( *(_DWORD *)(v15 + 20) == 2 )
        goto LABEL_14;
      if ( eventCampaignEntities->fields._size <= v14 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      if ( *(_DWORD *)(v15 + 20) == 27 )
      {
LABEL_14:
        if ( eventCampaignEntities->fields._size <= v14 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        if ( !v9 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v9,
          *((EventMissionProgressRequest_Argument_ProgressData_o **)&eventCampaignEntities->fields._items->obj.klass
          + v13),
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
      }
      size = eventCampaignEntities->fields._size;
      if ( (int)++v13 - 4 >= size )
        goto LABEL_19;
    }
LABEL_54:
    sub_B2C434(userSvtEntity, v11);
  }
LABEL_19:
  if ( !v9 )
    return;
  v16 = v9->fields._size;
  if ( v16 < 1 )
  {
    monitor = 0;
    goto LABEL_52;
  }
  monitor = 0;
  v18 = 0;
  while ( 1 )
  {
    if ( v16 <= v18 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    v19 = v9->fields._items->m_Items[v18];
    if ( !v19 )
      goto LABEL_54;
    if ( v19->fields.missionConditionDetailId == 27 )
      break;
    if ( v9->fields._size <= v18 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    klass = v19[1].klass;
    if ( !klass )
      goto LABEL_54;
    namespaze = (int)klass->_1.namespaze;
    if ( namespaze >= 1 )
    {
      v22 = 0;
      while ( 1 )
      {
        if ( v22 >= namespaze )
        {
          v25 = sub_B2C460(userSvtEntity);
          sub_B2C400(v25, 0LL);
        }
        if ( this->fields.svtId == *((_DWORD *)&klass->_1.byval_arg.data + (int)v22) )
          break;
        if ( (int)++v22 >= namespaze )
          goto LABEL_45;
      }
      this->fields.isCombineExpCampaignTarget = 1;
      if ( v9->fields._size <= v18 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v23 = v9->fields._items->m_Items[v18];
      if ( !v23 )
        goto LABEL_54;
      if ( SLODWORD(v23[1].monitor) > monitor )
      {
        if ( v9->fields._size <= v18 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        monitor = (int)v23[1].monitor;
      }
    }
LABEL_45:
    v16 = v9->fields._size;
    if ( (int)++v18 >= v16 )
      goto LABEL_52;
  }
  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_54;
  userSvtEntity = (UserServantEntity_o *)UserServantEntity__IsExchangeSvt(userSvtEntity, 0LL);
  if ( ((unsigned __int8)userSvtEntity & 1) == 0 )
    goto LABEL_45;
  this->fields.isCombineExpCampaignTarget = 1;
  if ( v9->fields._size <= v18 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  v24 = v9->fields._items->m_Items[v18];
  if ( !v24 )
    goto LABEL_54;
  monitor = (int)v24[1].monitor;
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
  sub_B2C2F8(
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
  __int64 SelfUserGame; // x0
  __int64 v11; // x1
  UserServantEntity_o *userSvtEntity; // x8
  struct UserServantEntity_o *v13; // x8
  __int64 v14; // x21
  __int64 v15; // x8
  __int64 v16; // x22
  unsigned __int64 v17; // x20
  int32_t v18; // w23
  int v19; // w19
  __int64 v20; // x8
  CombineServantListViewItem_o *v21; // x19
  CombineSkillMaster_o *v22; // x20
  unsigned __int64 v23; // x27
  char v24; // w26
  int32_t v25; // w24
  struct ServantEntity_o *servantEntity; // x8
  CombineSkillMaster_o *v27; // x21
  struct System_Int32_array *itemIds; // x20
  struct System_Int32_array *itemNums; // x28
  int max_length; // w8
  UserItemMaster_o *v31; // x25
  il2cpp_array_size_t v32; // w9
  il2cpp_array_size_t v33; // w23
  struct UserServantEntity_o *v34; // x8
  __int128 v35; // q1
  int32_t v36; // w26
  int32_t v37; // w19
  struct System_Collections_Generic_List_int__o **p_enableSkillUp; // x8
  struct System_Collections_Generic_List_int__o *v39; // x8
  __int64 v40; // x0
  __int64 *v41; // [xsp+0h] [xbp-C0h]
  __int64 v42; // [xsp+8h] [xbp-B8h]
  __int64 v43; // [xsp+10h] [xbp-B0h]
  CombineServantListViewItem_o *v44; // [xsp+18h] [xbp-A8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v45; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v46; // [xsp+40h] [xbp-80h]
  UserItemEntity_o *v47; // [xsp+60h] [xbp-60h] BYREF
  CombineSkillEntity_o *entity; // [xsp+68h] [xbp-58h] BYREF

  if ( (byte_418A5DA & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_CombineSkillMaster___, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_SkillMaster___, v3);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserItemMaster___, v4);
    sub_B2C35C(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Count__, v7);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_418A5DA = 1;
  }
  entity = 0LL;
  v47 = 0LL;
  SelfUserGame = (__int64)UserGameMaster__getSelfUserGame(0LL);
  userSvtEntity = this->fields.userSvtEntity;
  v43 = SelfUserGame;
  if ( !userSvtEntity )
    goto LABEL_60;
  SelfUserGame = (__int64)UserServantEntity__getSkillIdList(userSvtEntity, -1, -1, 1, 0LL);
  v13 = this->fields.userSvtEntity;
  if ( !v13 )
    goto LABEL_60;
  v14 = SelfUserGame;
  SelfUserGame = ((__int64 (__fastcall *)(struct UserServantEntity_o *, void *))v13->klass->vtable._6_getSkillLevelList.method)(
                   this->fields.userSvtEntity,
                   v13->klass[1]._1.image);
  v44 = this;
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
      {
LABEL_61:
        v40 = sub_B2C460(SelfUserGame);
        sub_B2C400(v40, 0LL);
      }
      v18 = *(_DWORD *)(v14 + 32 + 4 * v17);
      if ( v18 >= 1 )
      {
        v19 = *(_DWORD *)(v16 + 32 + 4 * v17);
        SelfUserGame = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !SelfUserGame )
          goto LABEL_60;
        SelfUserGame = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)SelfUserGame,
                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_SkillMaster___);
        if ( !SelfUserGame )
          goto LABEL_60;
        SelfUserGame = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                  (DataMasterBase_WarMaster__WarEntity__int__o *)SelfUserGame,
                                  v18,
                                  (const MethodInfo_24E40D0 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        if ( !SelfUserGame )
          goto LABEL_60;
        if ( v19 < *(_DWORD *)(SelfUserGame + 40) )
          break;
      }
      LODWORD(v15) = *(_DWORD *)(v14 + 24);
      if ( (__int64)++v17 >= (int)v15 )
        goto LABEL_19;
    }
    v44->fields.isSkillLvMax = 0;
  }
LABEL_19:
  SelfUserGame = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_60;
  SelfUserGame = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)SelfUserGame,
                            (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_CombineSkillMaster___);
  v20 = *(_QWORD *)(v14 + 24);
  v21 = v44;
  if ( (int)v20 <= 0 )
  {
    p_enableSkillUp = &v44->fields.enableSkillUp;
  }
  else
  {
    v22 = (CombineSkillMaster_o *)SelfUserGame;
    v23 = 0LL;
    v24 = 0;
    v41 = (__int64 *)&v44->fields.enableSkillUp;
    v42 = v14;
    do
    {
      if ( v23 >= (unsigned int)v20 )
        goto LABEL_61;
      if ( !v16 )
        goto LABEL_60;
      if ( v23 >= *(unsigned int *)(v16 + 24) )
        goto LABEL_61;
      v25 = *(_DWORD *)(v14 + 4 * v23 + 32);
      if ( v25 >= 1 )
      {
        servantEntity = v21->fields.servantEntity;
        if ( !servantEntity || !v22 )
          goto LABEL_60;
        SelfUserGame = CombineSkillMaster__TryGetEntity(
                         v22,
                         &entity,
                         servantEntity->fields.combineSkillId,
                         *(_DWORD *)(v16 + 4 * v23 + 32),
                         0LL);
        if ( (SelfUserGame & 1) != 0 )
        {
          if ( !entity )
            goto LABEL_60;
          v27 = v22;
          itemIds = entity->fields.itemIds;
          itemNums = entity->fields.itemNums;
          SelfUserGame = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !SelfUserGame )
            goto LABEL_60;
          SelfUserGame = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    (DataManager_o *)SelfUserGame,
                                    (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserItemMaster___);
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
              v34 = v44->fields.userSvtEntity;
              if ( !v34 )
                goto LABEL_60;
              v35 = *(_OWORD *)&v34->fields.userId.fields.fakeValue;
              v36 = itemIds->m_Items[v32 + 1];
              v37 = itemNums->m_Items[v32 + 1];
              *(_OWORD *)&v46.fields.currentCryptoKey = *(_OWORD *)&v34->fields.userId.fields.currentCryptoKey;
              *(_OWORD *)&v46.fields.fakeValue = v35;
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
              }
              v45 = v46;
              SelfUserGame = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v45, 0LL);
              if ( !v31 )
                goto LABEL_60;
              SelfUserGame = UserItemMaster__TryGetEntity(v31, &v47, SelfUserGame, v36, 0LL);
              if ( (SelfUserGame & 1) == 0 )
                break;
              if ( !v47 )
                goto LABEL_60;
              if ( v37 > v47->fields.num )
                break;
              max_length = itemIds->max_length;
              v32 = v33 + 1;
              if ( (int)(v33 + 1) >= max_length )
              {
                v24 = 1;
                goto LABEL_48;
              }
            }
            v24 = 0;
          }
LABEL_48:
          if ( !v43 )
            goto LABEL_60;
          v21 = v44;
          if ( !entity )
            goto LABEL_60;
          v22 = v27;
          v14 = v42;
          if ( *(_DWORD *)(v43 + 96) < entity->fields.qp || (v24 & 1) == 0 )
          {
            v24 = 0;
          }
          else
          {
            SelfUserGame = *v41;
            if ( !*v41 )
              goto LABEL_60;
            System_Collections_Generic_List_int___Add(
              (System_Collections_Generic_List_int__o *)SelfUserGame,
              v25,
              (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
            v24 = 1;
          }
        }
      }
      LODWORD(v20) = *(_DWORD *)(v14 + 24);
      ++v23;
    }
    while ( (__int64)v23 < (int)v20 );
    p_enableSkillUp = &v44->fields.enableSkillUp;
  }
  v39 = *p_enableSkillUp;
  if ( !v39 || !v21 )
LABEL_60:
    sub_B2C434(SelfUserGame, v11);
  v21->fields.isSkillUpItemNum = v39->fields._size > 0;
}


bool __fastcall CombineServantListViewItem__SetSortValue(
        CombineServantListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  ListViewSort_o *v3; // x20
  CombineServantListViewItem_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  const MethodInfo *v10; // x3
  int32_t bonusKind2; // w8
  struct ListViewManager_o *manager; // x8
  __int64 v13; // x11
  CombineServantListViewManager_o *v14; // x21
  int32_t *p_bonusKind2Id; // x8
  int32_t *v16; // x8
  int32_t v17; // w2
  bool EventUpVal_21652144; // w0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  int32_t svtId; // w22
  ServantFilterMaster_o *v21; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // kr00_16
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v24; // q1
  int32_t bonusKindId; // w22
  int64_t v26; // x0
  const MethodInfo *v27; // x3
  const MethodInfo *v28; // x2
  _BOOL4 isSwapLock; // w23
  _BOOL4 isLock; // w24
  int v31; // w21
  const MethodInfo *v32; // x2
  int64_t *p_sortValue0; // x22
  __int64 v34; // x8
  unsigned int type; // w8
  __int64 v36; // x8
  int32_t v37; // w8
  int v38; // w23
  __int64 v39; // x8
  int32_t rarity; // w8
  __int64 v41; // x8
  struct UserServantEntity_o *v42; // x8
  __int128 v43; // q1
  struct UserServantEntity_o *v44; // x8
  IconLabelInfo_o *iconLabelInfo1; // x20
  int32_t amountSortValue; // w21
  struct UserServantEntity_o *v47; // x8
  int32_t v48; // w8
  IconLabelInfo_o *iconLabelInfo2; // x20
  struct UserServantEntity_o *v50; // x8
  unsigned int v51; // w8
  IconLabelInfo_o *v52; // x20
  struct UserServantEntity_o *v53; // x8
  int32_t adjustHp; // w3
  int32_t hp; // w2
  int32_t v56; // w1
  struct UserServantEntity_o *v57; // x8
  IconLabelInfo_o *v58; // x19
  struct ServantEntity_o *servantEntity; // x8
  __int64 v60; // x10
  struct ServantEntity_o *v61; // x8
  __int64 collectionNo; // x10
  struct UserServantEntity_o *v63; // x8
  int32_t lv; // w20
  int64_t friendship; // x2
  int32_t friendshipMax; // w3
  int32_t v67; // w1
  int32_t v68; // w21
  __int64 v69; // x9
  bool v70; // zf
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v72; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v73; // [xsp+30h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v74; // [xsp+50h] [xbp-60h]
  int32_t tdMaxLv[2]; // [xsp+78h] [xbp-38h] BYREF

  v3 = sort;
  v4 = this;
  if ( (byte_418A5E0 & 1) == 0 )
  {
    sub_B2C35C(&CombineServantListViewManager_TypeInfo, sort);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantFilterMaster___, v5);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v7);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    this = (CombineServantListViewItem_o *)sub_B2C35C(&TutorialFlag_TypeInfo, v9);
    byte_418A5E0 = 1;
  }
  *(_QWORD *)tdMaxLv = 0LL;
  *(_WORD *)&v4->fields.isTermination = 0;
  v4->fields.sortValue1 = -1LL;
  *(_WORD *)&v4->fields.isDispAtkStatusUpInfo = 0;
  if ( !v3 )
    goto LABEL_254;
  if ( !v3->fields.isBonusKind )
    goto LABEL_41;
  if ( v4->fields.isBaseSvt )
    goto LABEL_43;
  this = (CombineServantListViewItem_o *)ListViewItem__get_IsSelect((ListViewItem_o *)v4, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
    goto LABEL_41;
  bonusKind2 = v3->fields.bonusKind2;
  switch ( bonusKind2 )
  {
    case 1:
      if ( v4->fields.bonusKind == 1 )
      {
        p_bonusKind2Id = &v3->fields.bonusKind2Id;
        if ( v4->fields.bonusKindId == v3->fields.bonusKind2Id )
          goto LABEL_40;
      }
      else
      {
        p_bonusKind2Id = &v3->fields.bonusKind2Id;
      }
      v4->fields.bonusKind = 1;
      v17 = *p_bonusKind2Id;
      this = (CombineServantListViewItem_o *)v4->fields.userSvtEntity;
      v4->fields.bonusKindId = *p_bonusKind2Id;
      if ( !this )
        goto LABEL_254;
      EventUpVal_21652144 = UserServantEntity__getEventUpVal_21652144(
                              (UserServantEntity_o *)this,
                              v4->fields.setupInfo,
                              v17,
                              0LL);
LABEL_29:
      v4->fields.isEventUpVal = EventUpVal_21652144;
      if ( !EventUpVal_21652144 )
        goto LABEL_125;
      break;
    case 2:
      if ( v4->fields.bonusKind == 2 )
      {
        v16 = &v3->fields.bonusKind2Id;
        if ( v4->fields.bonusKindId == v3->fields.bonusKind2Id )
          goto LABEL_40;
      }
      else
      {
        v16 = &v3->fields.bonusKind2Id;
      }
      v4->fields.bonusKind = 2;
      v4->fields.bonusKindId = *v16;
      this = (CombineServantListViewItem_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_254;
      MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             (DataManager_o *)this,
                                             (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantFilterMaster___);
      svtId = v4->fields.svtId;
      v21 = (ServantFilterMaster_o *)MasterData_WarQuestSelectionMaster;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(svtId, 0LL);
      sort = *(ListViewSort_o **)&v22.fields.fakeValue;
      this = *(CombineServantListViewItem_o **)&v22.fields.currentCryptoKey;
      if ( !v21 )
        goto LABEL_254;
      EventUpVal_21652144 = ServantFilterMaster__IsEnableServant(v21, v22, v4->fields.bonusKindId, 0LL);
      goto LABEL_29;
    case 3:
      manager = v3->fields.manager;
      if ( manager
        && (v13 = *(&CombineServantListViewManager_TypeInfo->_2.bitflags2 + 1),
            *(&manager->klass->_2.bitflags2 + 1) >= (unsigned int)v13) )
      {
        if ( (CombineServantListViewManager_c *)manager->klass->_2.typeHierarchy[v13 - 1] == CombineServantListViewManager_TypeInfo )
          v14 = (CombineServantListViewManager_o *)v3->fields.manager;
        else
          v14 = 0LL;
      }
      else
      {
        v14 = 0LL;
      }
      v4->fields.bonusKind = 3;
      sort = (ListViewSort_o *)(unsigned int)v3->fields.bonusKind2Id;
      v4->fields.bonusKindId = (int)sort;
      if ( !v14 )
        goto LABEL_254;
      this = (CombineServantListViewItem_o *)CombineServantListViewManager__IsLargeSuccessCampaignServantId(
                                               v14,
                                               (int32_t)sort,
                                               v4->fields.svtId,
                                               v10);
      userSvtEntity = v4->fields.userSvtEntity;
      v4->fields.isEventUpVal = (unsigned __int8)this & 1;
      if ( !userSvtEntity )
        goto LABEL_254;
      v24 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
      bonusKindId = v4->fields.bonusKindId;
      *(_OWORD *)&v74.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v74.fields.fakeValue = v24;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v73 = v74;
      v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v73, 0LL);
      if ( !CombineServantListViewManager__IsExchangeSvtExist(v14, bonusKindId, v26, v27) )
      {
LABEL_40:
        if ( !v4->fields.isEventUpVal )
          goto LABEL_125;
      }
      break;
  }
LABEL_41:
  if ( v4->fields.isBaseSvt || ListViewItem__get_IsSelect((ListViewItem_o *)v4, 0LL) )
  {
LABEL_43:
    this = (CombineServantListViewItem_o *)v4->fields.iconLabelInfo2;
    isSwapLock = v4->fields.isSwapLock;
    isLock = v4->fields.isLock;
    if ( !this )
      goto LABEL_254;
    v31 = v4->fields.isSwapChoice ^ v4->fields.isChoice;
    IconLabelInfo__Clear((IconLabelInfo_o *)this, 0LL);
    v4->fields.sortValue0 = 0LL;
    p_sortValue0 = &v4->fields.sortValue0;
    v4->fields.sortValue0B = 0LL;
    if ( !v3->fields.isSmartSort )
    {
      if ( !((v31 ^ 1) & 1 | !v3->fields.isChoiceSort) )
      {
        type = v4->fields.type;
        if ( type <= 0xB )
        {
          if ( ((1 << type) & 0xFDD) != 0 )
            v36 = 10LL;
          else
LABEL_81:
            v36 = -10LL;
          *p_sortValue0 = v36;
        }
      }
LABEL_153:
      this = (CombineServantListViewItem_o *)(&dword_0 + 1);
      switch ( v3->fields.sortKind )
      {
        case 0:
          this = (CombineServantListViewItem_o *)v4->fields.userSvtEntity;
          v41 = !v4->fields.isParty;
          goto LABEL_201;
        case 1:
          v42 = v4->fields.userSvtEntity;
          if ( !v42 )
            break;
          v43 = *(_OWORD *)&v42->fields.id.fields.fakeValue;
          *(_OWORD *)&v74.fields.currentCryptoKey = *(_OWORD *)&v42->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v74.fields.fakeValue = v43;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v72 = v74;
          this = (CombineServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(
                                                   &v72,
                                                   0LL);
          v44 = v4->fields.userSvtEntity;
          v4->fields.sortValue1 = (int64_t)this;
          if ( !v44 )
            break;
          this = (CombineServantListViewItem_o *)v4->fields.iconLabelInfo1;
          if ( !this )
            break;
          IconLabelInfo__SetTime((IconLabelInfo_o *)this, 49, v44->fields.createdAt, 0, 0, 0, 0LL);
          goto LABEL_183;
        case 2:
          this = (CombineServantListViewItem_o *)v4->fields.userSvtEntity;
          v4->fields.sortValue1 = v4->fields.rarity;
          if ( !this )
            break;
          iconLabelInfo1 = v4->fields.iconLabelInfo1;
          amountSortValue = this->fields.amountSortValue;
          this = (CombineServantListViewItem_o *)UserServantEntity__getLevelMax((UserServantEntity_o *)this, 0LL);
          v47 = v4->fields.userSvtEntity;
          if ( !v47 || !iconLabelInfo1 )
            break;
          IconLabelInfo__Set_27362128(iconLabelInfo1, 2, amountSortValue, (int32_t)this, 0, 0, 0, v47->fields.lv, 0LL);
          v48 = v4->fields.type;
          if ( v48 != 10 && v48 != 7 )
            goto LABEL_223;
          this = (CombineServantListViewItem_o *)v4->fields.userSvtEntity;
          if ( !this )
            break;
          iconLabelInfo2 = v4->fields.iconLabelInfo2;
          this = (CombineServantListViewItem_o *)UserServantEntity__getRarity((UserServantEntity_o *)this, 0LL);
          v50 = v4->fields.userSvtEntity;
          if ( !v50 || !iconLabelInfo2 )
            break;
          IconLabelInfo__Set_27362128(
            iconLabelInfo2,
            36,
            (int32_t)this,
            v50->fields.exceedCount,
            0,
            0,
            0,
            v50->fields.lv,
            0LL);
          goto LABEL_223;
        case 3:
          this = (CombineServantListViewItem_o *)v4->fields.userSvtEntity;
          if ( !this )
            break;
          v4->fields.sortValue1 = SLODWORD(this->fields.amountSortValue);
          goto LABEL_202;
        case 4:
          this = (CombineServantListViewItem_o *)v4->fields.userSvtEntity;
          if ( !this )
            break;
          v51 = v4->fields.type & 0xFFFFFFFE;
          v4->fields.sortValue1 = *(int *)&this->fields.isLvExceedMax;
          if ( v51 == 4 )
          {
            v52 = v4->fields.iconLabelInfo1;
          }
          else
          {
            UserServantEntity__getTreasureDeviceInfo_21659764((UserServantEntity_o *)this, &tdMaxLv[1], tdMaxLv, 0LL);
            LODWORD(friendship) = tdMaxLv[1];
            this = (CombineServantListViewItem_o *)v4->fields.iconLabelInfo1;
            v4->fields.sortValue1 = tdMaxLv[1];
            if ( !this )
              break;
            friendshipMax = tdMaxLv[0];
            v67 = 33;
LABEL_210:
            IconLabelInfo__Set_27362128((IconLabelInfo_o *)this, v67, friendship, friendshipMax, 0, 0, 0, 0, 0LL);
LABEL_211:
            this = (CombineServantListViewItem_o *)v4->fields.userSvtEntity;
            if ( !this )
              break;
            v52 = v4->fields.iconLabelInfo2;
          }
          v68 = this->fields.amountSortValue;
          this = (CombineServantListViewItem_o *)UserServantEntity__getLevelMax((UserServantEntity_o *)this, 0LL);
          if ( v52 )
          {
            IconLabelInfo__Set_27362128(v52, 2, v68, (int32_t)this, 0, 0, 0, 0, 0LL);
            this = (CombineServantListViewItem_o *)v4->fields.servantEntity;
            if ( this )
            {
              if ( !ServantEntity__get_IsExpUp((ServantEntity_o *)this, 0LL) )
              {
                this = (CombineServantListViewItem_o *)v4->fields.servantEntity;
                if ( !this )
                  break;
                if ( !ServantEntity__get_IsStatusUp((ServantEntity_o *)this, 0LL) )
                {
                  this = (CombineServantListViewItem_o *)v4->fields.servantEntity;
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
              this = (CombineServantListViewItem_o *)v4->fields.iconLabelInfo1;
              if ( this )
              {
                IconLabelInfo__Clear((IconLabelInfo_o *)this, 0LL);
                this = (CombineServantListViewItem_o *)v4->fields.iconLabelInfo2;
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
          v53 = v4->fields.userSvtEntity;
          if ( !v53 )
            break;
          this = (CombineServantListViewItem_o *)v4->fields.iconLabelInfo1;
          v4->fields.sortValue1 = v53->fields.hp;
          if ( !this )
            break;
          adjustHp = v53->fields.adjustHp;
          hp = v53->fields.hp;
          v56 = 3;
          goto LABEL_182;
        case 6:
          v57 = v4->fields.userSvtEntity;
          if ( !v57 )
            break;
          this = (CombineServantListViewItem_o *)v4->fields.iconLabelInfo1;
          v4->fields.sortValue1 = v57->fields.atk;
          if ( !this )
            break;
          adjustHp = v57->fields.adjustAtk;
          hp = v57->fields.atk;
          v56 = 5;
LABEL_182:
          IconLabelInfo__Set_27362128((IconLabelInfo_o *)this, v56, hp, adjustHp, 0, 0, 0, 0, 0LL);
LABEL_183:
          this = (CombineServantListViewItem_o *)v4->fields.userSvtEntity;
          if ( !this )
            break;
          v58 = v4->fields.iconLabelInfo2;
          goto LABEL_203;
        case 7:
          servantEntity = v4->fields.servantEntity;
          if ( !servantEntity )
            break;
          this = (CombineServantListViewItem_o *)v4->fields.iconLabelInfo1;
          v4->fields.sortValue1 = servantEntity->fields.cost;
          if ( !this )
            break;
          IconLabelInfo__Set_27362128((IconLabelInfo_o *)this, 7, servantEntity->fields.cost, 0, 0, 0, 0, 0, 0LL);
          goto LABEL_211;
        case 8:
          this = (CombineServantListViewItem_o *)v4->fields.userSvtEntity;
          v41 = -v4->fields.priority;
LABEL_201:
          v4->fields.sortValue1 = v41;
          if ( !this )
            break;
LABEL_202:
          v58 = v4->fields.iconLabelInfo1;
LABEL_203:
          lv = this->fields.amountSortValue;
          goto LABEL_204;
        case 0xA:
          friendship = v4->fields.friendship;
          this = (CombineServantListViewItem_o *)v4->fields.iconLabelInfo1;
          v4->fields.sortValue1 = friendship;
          if ( !this )
            break;
          friendshipMax = v4->fields.friendshipMax;
          v67 = 32;
          goto LABEL_210;
        case 0xE:
          this = (CombineServantListViewItem_o *)v4->fields.amountSortValue;
          if ( ((unsigned __int64)this & 0x8000000000000000LL) == 0 )
            goto LABEL_193;
          this = (CombineServantListViewItem_o *)v3->fields.manager;
          if ( !this )
            break;
          v60 = *(&CombineServantListViewManager_TypeInfo->_2.bitflags2 + 1);
          if ( *(&this->klass->_2.bitflags2 + 1) < (unsigned int)v60
            || (CombineServantListViewManager_c *)this->klass->_2.typeHierarchy[v60 - 1] != CombineServantListViewManager_TypeInfo )
          {
            break;
          }
          this = (CombineServantListViewItem_o *)CombineServantListViewManager__GetAmountSortValue(
                                                   (CombineServantListViewManager_o *)this,
                                                   v4->fields.svtId,
                                                   v32);
          v4->fields.amountSortValue = (int64_t)this;
LABEL_193:
          v61 = v4->fields.servantEntity;
          if ( !v61 )
            break;
          collectionNo = v61->fields.collectionNo;
          v63 = v4->fields.userSvtEntity;
          v4->fields.sortValue1 = (((unsigned __int64)(unsigned int)v4->fields.rarity << 32) + ((_QWORD)this << 48)) | collectionNo;
          if ( !v63 )
            break;
          v58 = v4->fields.iconLabelInfo1;
          lv = v63->fields.lv;
          this = (CombineServantListViewItem_o *)v63;
LABEL_204:
          this = (CombineServantListViewItem_o *)UserServantEntity__getLevelMax((UserServantEntity_o *)this, 0LL);
          if ( !v58 )
            break;
          IconLabelInfo__Set_27362128(v58, 2, lv, (int32_t)this, 0, 0, 0, 0, 0LL);
          goto LABEL_223;
        case 0xF:
          friendship = v4->fields.hpReinforceValue;
          this = (CombineServantListViewItem_o *)v4->fields.iconLabelInfo1;
          v4->fields.isDispHpStatusUpInfo = 1;
          v4->fields.sortValue1 = friendship;
          if ( !this )
            break;
          friendshipMax = v4->fields.nowMaxHpReinforceValue;
          v67 = 44;
          goto LABEL_210;
        case 0x10:
          friendship = v4->fields.atkReinforceValue;
          this = (CombineServantListViewItem_o *)v4->fields.iconLabelInfo1;
          v4->fields.isDispAtkStatusUpInfo = 1;
          v4->fields.sortValue1 = friendship;
          if ( !this )
            break;
          friendshipMax = v4->fields.nowMaxAtkReinforceValue;
          v67 = 45;
          goto LABEL_210;
        default:
          return (char)this;
      }
LABEL_254:
      sub_B2C434(this, sort);
    }
    switch ( v4->fields.type )
    {
      case 0:
        if ( v4->fields.isHeroineSvt )
        {
          if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TutorialFlag_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
          }
          if ( TutorialFlag__Get_28617756(126, 0LL) )
            goto LABEL_127;
        }
        if ( v4->fields.isParty )
        {
          v34 = 20LL;
          goto LABEL_150;
        }
        if ( !v4->fields.isLvMax )
          goto LABEL_151;
        goto LABEL_149;
      case 1:
        this = (CombineServantListViewItem_o *)v4->fields.servantEntity;
        if ( !this )
          goto LABEL_254;
        v38 = isSwapLock ^ isLock;
        if ( ServantEntity__get_IsExpUp((ServantEntity_o *)this, 0LL) )
        {
          if ( v4->fields.isBaseLvMax )
          {
            v39 = -120LL;
          }
          else
          {
            v39 = -5LL;
            if ( !(v38 | v31) )
              v39 = 30LL;
          }
          goto LABEL_246;
        }
        this = (CombineServantListViewItem_o *)v4->fields.servantEntity;
        if ( !this )
          goto LABEL_254;
        if ( ServantEntity__get_IsStatusUp((ServantEntity_o *)this, 0LL) )
        {
          if ( v4->fields.isSameClass )
          {
            rarity = v4->fields.rarity;
            if ( v4->fields.hpBase < 1 )
            {
              if ( rarity == 4 )
              {
                v39 = -90LL;
                if ( !v4->fields.isAtkSecondUpMax && v4->fields.isAtkUpMax )
                  v39 = 90LL;
                goto LABEL_244;
              }
              v69 = 70LL;
              v70 = !v4->fields.isAtkUpMax;
              v39 = -110LL;
            }
            else
            {
              if ( rarity == 4 )
              {
                v39 = -80LL;
                if ( !v4->fields.isHpSecondUpMax && v4->fields.isHpUpMax )
                  v39 = 100LL;
LABEL_244:
                *p_sortValue0 = v39;
                if ( v38 | v31 )
                  v39 = -5LL;
                goto LABEL_246;
              }
              v69 = 80LL;
              v70 = !v4->fields.isHpUpMax;
              v39 = -100LL;
            }
            if ( v70 )
              v39 = v69;
            goto LABEL_244;
          }
          v39 = -150LL;
        }
        else
        {
          if ( !CombineServantListViewItem__get_IsCanNotSelectMaterial(v4, (const MethodInfo *)sort) )
          {
LABEL_247:
            if ( v4->fields.isFortification )
              *p_sortValue0 = -10LL;
            if ( !((v31 ^ 1) & 1 | !v3->fields.isChoiceSort) )
              *(_OWORD *)p_sortValue0 = xmmword_31B33C0;
            goto LABEL_153;
          }
          if ( v4->fields.isLimitCntTarget )
          {
            v39 = -20LL;
          }
          else if ( v4->fields.isParty )
          {
            v39 = -30LL;
          }
          else
          {
            v39 = -10LL;
            if ( v4->fields.isUseSupport )
              v39 = -40LL;
          }
        }
LABEL_246:
        *p_sortValue0 = v39;
        goto LABEL_247;
      case 2:
        if ( v4->fields.isSealCombineLimit )
        {
          v34 = 0LL;
          goto LABEL_150;
        }
        if ( !CombineServantListViewItem__get_IsCanNotBaseSelect(v4, (const MethodInfo *)sort)
          && v4->fields.isLimitUpItemNum
          && v4->fields.isLvMax )
        {
LABEL_147:
          v34 = 10LL;
          goto LABEL_150;
        }
        if ( v4->fields.isHeroineSvt )
        {
LABEL_149:
          v34 = -10LL;
          goto LABEL_150;
        }
        if ( v4->fields.isLimitCntMax )
          goto LABEL_127;
        goto LABEL_151;
      case 3:
        if ( v4->fields.isHeroineSvt )
        {
          if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TutorialFlag_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
          }
          if ( TutorialFlag__Get_28617756(126, 0LL) )
            goto LABEL_127;
        }
        if ( v4->fields.isSkillUpItemNum )
          goto LABEL_147;
        if ( !v4->fields.isSkillLvMax )
          goto LABEL_151;
        goto LABEL_149;
      case 4:
        if ( v4->fields.isSameSvt )
          goto LABEL_147;
        if ( v4->fields.isHeroineSvt )
          goto LABEL_149;
        if ( !v4->fields.isTdLvMax )
          goto LABEL_151;
        goto LABEL_127;
      case 5:
        if ( !((v31 ^ 1) & 1 | !v3->fields.isChoiceSort) || v4->fields.isFortification )
          goto LABEL_81;
        goto LABEL_153;
      case 6:
        if ( !CombineServantListViewItem__get_IsCanNotBaseSelect(v4, (const MethodInfo *)sort)
          && v4->fields.isLvMax
          && v4->fields.isLimitCntMax
          && v4->fields.isLvExceedItemNum )
        {
          goto LABEL_147;
        }
        if ( v4->fields.isHeroineSvt )
          goto LABEL_149;
        if ( !v4->fields.isLvExceedMax )
          goto LABEL_151;
        goto LABEL_127;
      case 7:
        if ( v4->fields.isEventJoin )
          goto LABEL_149;
        if ( !v4->fields.isHeroineSvt )
          goto LABEL_151;
        if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TutorialFlag_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
        }
        if ( !TutorialFlag__Get_28617756(126, 0LL) )
          goto LABEL_151;
        goto LABEL_127;
      case 8:
        if ( !CombineServantListViewItem__get_IsCanNotBaseSelect(v4, (const MethodInfo *)sort)
          && v4->fields.isFriendshipRankMax
          && v4->fields.isFriendshipExceedItemNum )
        {
          goto LABEL_147;
        }
        if ( v4->fields.isHeroineSvt )
          goto LABEL_149;
        if ( !v4->fields.isFriendshipExceedMax )
          goto LABEL_151;
        goto LABEL_127;
      case 9:
        if ( !CombineServantListViewItem__get_IsCanNotBaseSelect(v4, (const MethodInfo *)sort) )
          goto LABEL_147;
        if ( v4->fields.isHeroineSvt )
          goto LABEL_149;
        if ( v4->fields.isSealCombineLimit )
        {
LABEL_121:
          v34 = -15LL;
        }
        else if ( v4->fields.isLimitCntMax )
        {
LABEL_127:
          v34 = -20LL;
        }
        else
        {
          if ( !v4->fields.isEventJoin )
            goto LABEL_151;
LABEL_114:
          v34 = -30LL;
        }
LABEL_150:
        *p_sortValue0 = v34;
LABEL_151:
        if ( !((v31 ^ 1) & 1 | !v3->fields.isChoiceSort) )
          v4->fields.sortValue0B = 10LL;
        goto LABEL_153;
      case 0xA:
        if ( v4->fields.isHeroineSvt )
        {
          if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TutorialFlag_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
          }
          if ( TutorialFlag__Get_28617756(126, 0LL) )
            goto LABEL_114;
        }
        if ( v4->fields.isEventJoin )
          goto LABEL_127;
        if ( v4->fields.isCommandCardExceedMax )
          goto LABEL_149;
        goto LABEL_151;
      case 0xB:
        if ( v4->fields.isHeroineSvt )
        {
          if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TutorialFlag_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
          }
          if ( TutorialFlag__Get_28617756(126, 0LL) )
            goto LABEL_127;
        }
        if ( v4->fields.isEventJoin )
          goto LABEL_121;
        if ( v4->fields.isAppendSkillOpenItemNum || v4->fields.isAppendSkillUpItemNum )
          goto LABEL_147;
        if ( !v4->fields.isAppendSkillLvMax )
          goto LABEL_151;
        goto LABEL_149;
      default:
        goto LABEL_153;
    }
  }
  v37 = v4->fields.type;
  if ( v37 == 1 )
  {
    if ( CombineServantListViewItem__IsMatchMaterialFilter(v4, v3, v28) )
      goto LABEL_43;
  }
  else if ( v37 )
  {
    if ( CombineServantListViewItem__IsMatchServantFilter(v4, v3, v28) )
      goto LABEL_43;
  }
  else if ( CombineServantListViewItem__IsMatchBaseServantFilter(v4, v3, v28) )
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
  System_String_o *NameText; // x0

  if ( (byte_418A5EB & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_15103/*"UserSvt "*/, method);
    byte_418A5EB = 1;
  }
  NameText = CombineServantListViewItem__get_NameText(this, method);
  return System_String__Concat_44305532((System_String_o *)StringLiteral_15103/*"UserSvt "*/, NameText, 0LL);
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

  if ( (byte_418A5E7 & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_18395/*"error"*/, v3);
    byte_418A5E7 = 1;
  }
  servantEntity = this->fields.servantEntity;
  if ( !servantEntity )
    return (System_String_o *)StringLiteral_18395/*"error"*/;
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
  if ( (byte_418A5E8 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_1/*""*/, method);
    byte_418A5E8 = 1;
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
    sub_B2C434(0LL, method);
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

  if ( (byte_418A5E9 & 1) == 0 )
  {
    sub_B2C35C(&TutorialFlag_TypeInfo, method);
    byte_418A5E9 = 1;
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
    if ( TutorialFlag__Get_28617756(126, 0LL) )
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
        v7 = TutorialFlag__Get_28617756(126, 0LL) || this->fields.isSkillLvMax;
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
            if ( TutorialFlag__Get_28617756(126, 0LL) )
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
      if ( TutorialFlag__Get_28617756(126, 0LL) )
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
      return TutorialFlag__Get_28617756(126, 0LL);
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

  if ( (byte_418A5EA & 1) == 0 )
  {
    sub_B2C35C(&TutorialFlag_TypeInfo, method);
    byte_418A5EA = 1;
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
    if ( TutorialFlag__Get_28617756(126, 0LL) )
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
    sub_B2C434(v6, v5);
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
    sub_B2C434(0LL, method);
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
    sub_B2C434(0LL, method);
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
    sub_B2C434(0LL, method);
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
    sub_B2C434(0LL, method);
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

  if ( (byte_418A5E5 & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_18395/*"error"*/, v3);
    byte_418A5E5 = 1;
  }
  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    return (System_String_o *)StringLiteral_18395/*"error"*/;
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
  CombineServantListViewItem_o *v2; // x20
  __int64 v3; // x1
  ServantEntity_o *servantEntity; // x19
  struct UserServantEntity_o *userSvtEntity; // x8
  __int64 v6; // x20
  __int64 v7; // x21
  int32_t v8; // w1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  v2 = this;
  if ( (byte_418A5E4 & 1) == 0 )
  {
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    this = (CombineServantListViewItem_o *)sub_B2C35C(&StringLiteral_18395/*"error"*/, v3);
    byte_418A5E4 = 1;
  }
  servantEntity = v2->fields.servantEntity;
  if ( !servantEntity )
    return (System_String_o *)StringLiteral_18395/*"error"*/;
  userSvtEntity = v2->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_B2C434(this, method);
  v7 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.currentCryptoKey;
  v6 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v10.fields.currentCryptoKey = v7;
  *(_QWORD *)&v10.fields.fakeValue = v6;
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v10, 0LL);
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

  if ( (byte_418A5E6 & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, method);
    byte_418A5E6 = 1;
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
  __int64 v6; // x1
  WarEntity_o *Entity; // x0

  if ( (byte_418A5EC & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_SvtCoinMaster___, method);
    sub_B2C35C(&DataManager_TypeInfo, v3);
    sub_B2C35C(&Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__GetEntity__, v4);
    byte_418A5EC = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_SvtCoinMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B2C434(0LL, v6);
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             Master_WarQuestSelectionMaster,
             this->fields.svtId,
             (const MethodInfo_24E40D0 *)Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__GetEntity__);
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
  int64_t Master_WarQuestSelectionMaster; // x0
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

  if ( (byte_418A5ED & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_UserSvtCoinMaster___, method);
    sub_B2C35C(&DataManager_TypeInfo, v3);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5);
    byte_418A5ED = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserSvtCoinMaster___);
  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_20;
  v9 = *(_OWORD *)&userSvtEntity->fields.userId.fields.fakeValue;
  v10 = (UserSvtCoinMaster_o *)Master_WarQuestSelectionMaster;
  *(_OWORD *)&v17.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v17.fields.fakeValue = v9;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v16 = v17;
  Master_WarQuestSelectionMaster = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v16, 0LL);
  v11 = this->fields.userSvtEntity;
  if ( !v11 )
    goto LABEL_20;
  v12 = Master_WarQuestSelectionMaster;
  v14 = *(_QWORD *)&v11->fields.svtId.fields.currentCryptoKey;
  v13 = *(_QWORD *)&v11->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v19.fields.currentCryptoKey = v14;
  *(_QWORD *)&v19.fields.fakeValue = v13;
  Master_WarQuestSelectionMaster = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v19, 0LL);
  if ( !v10 )
    goto LABEL_20;
  Master_WarQuestSelectionMaster = UserSvtCoinMaster__TryGetEntity(
                                     v10,
                                     &entity,
                                     v12,
                                     Master_WarQuestSelectionMaster,
                                     0LL);
  if ( (Master_WarQuestSelectionMaster & 1) != 0 )
  {
    if ( entity )
      return entity->fields.num;
LABEL_20:
    sub_B2C434(Master_WarQuestSelectionMaster, v7);
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
  BattleServantConfConponent_o *p_userSvtEntity; // x19
  struct UserServantEntity_o *userSvtEntity; // t1
  __int128 v9; // q1
  int64_t v10; // x20
  System_Int32_array **Entity; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v19; // [xsp+0h] [xbp-50h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v20; // [xsp+20h] [xbp-30h]

  v2 = this;
  if ( (byte_418A5E2 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, method);
    sub_B2C35C(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v3);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v4);
    this = (CombineServantListViewItem_o *)sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_418A5E2 = 1;
  }
  userSvtEntity = v2->fields.userSvtEntity;
  p_userSvtEntity = (BattleServantConfConponent_o *)&v2->fields.userSvtEntity;
  v6 = userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_10;
  v9 = *(_OWORD *)&v6->fields.id.fields.fakeValue;
  *(_OWORD *)&v20.fields.currentCryptoKey = *(_OWORD *)&v6->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v20.fields.fakeValue = v9;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v19 = v20;
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v19, 0LL);
  this = (CombineServantListViewItem_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (this = (CombineServantListViewItem_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                 (DataManager_o *)this,
                                                 (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
  {
LABEL_10:
    sub_B2C434(this, method);
  }
  Entity = (System_Int32_array **)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                    (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)this,
                                    v10,
                                    (const MethodInfo_24E42F8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  p_userSvtEntity->klass = (BattleServantConfConponent_c *)Entity;
  sub_B2C2F8(p_userSvtEntity, Entity, v12, v13, v14, v15, v16, v17);
  return (UserServantEntity_o *)Entity;
}


int64_t __fastcall CombineServantListViewItem__get_UserSvtId(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  CombineServantListViewItem_o *v2; // x19
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v4; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v6; // [xsp+0h] [xbp-50h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+20h] [xbp-30h]

  v2 = this;
  if ( (byte_418A5E3 & 1) == 0 )
  {
    this = (CombineServantListViewItem_o *)sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
    byte_418A5E3 = 1;
  }
  userSvtEntity = v2->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_B2C434(this, method);
  v4 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v7.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v7.fields.fakeValue = v4;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v6 = v7;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v6, 0LL);
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
  sub_B2C2F8(
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
    sub_B2C434(0LL, value);
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
    sub_B2C434(0LL, value);
  this->fields.dragSelectNum = ~value << 31 >> 31;
}


void __fastcall CombineServantListViewItem__set_IsHpStatusMax(
        CombineServantListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  if ( !this )
    sub_B2C434(0LL, value);
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
    sub_B2C434(0LL, value);
  this->fields.isNotSelectSecondStatusUpAtk = this->fields.atkBase > 0 && value;
}


void __fastcall CombineServantListViewItem__set_IsSecondHpStatusMax(
        CombineServantListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  if ( !this )
    sub_B2C434(0LL, value);
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
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._NoticeTween_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}