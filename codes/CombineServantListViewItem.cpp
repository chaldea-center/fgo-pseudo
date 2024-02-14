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
  IconLabelInfo_o *v63; // x21
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  __int64 v70; // x1
  __int64 v71; // x2
  System_Collections_Generic_List_int__o *v72; // x21
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  __int64 v79; // x1
  __int64 v80; // x2
  System_Collections_Generic_List_int__o *v81; // x21
  System_String_array **v82; // x2
  System_String_array **v83; // x3
  System_Boolean_array **v84; // x4
  System_Int32_array **v85; // x5
  System_Int32_array *v86; // x6
  System_Int32_array *v87; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_userSvtEntity; // x21
  System_String_array **v89; // x2
  System_String_array **v90; // x3
  System_Boolean_array **v91; // x4
  System_Int32_array **v92; // x5
  System_Int32_array *v93; // x6
  System_Int32_array *v94; // x7
  int64_t Instance; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v96; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v97; // x20
  __int64 v98; // x24
  __int64 v99; // x25
  struct ServantEntity_o *v100; // x0
  System_String_array **v101; // x2
  System_String_array **v102; // x3
  System_Boolean_array **v103; // x4
  System_Int32_array **v104; // x5
  System_Int32_array *v105; // x6
  System_Int32_array *v106; // x7
  System_String_array **v107; // x2
  System_String_array **v108; // x3
  System_Boolean_array **v109; // x4
  System_Int32_array **v110; // x5
  System_Int32_array *v111; // x6
  System_Int32_array *v112; // x7
  struct UserServantEntity_o *v113; // x8
  struct ServantEntity_o *servantEntity; // x8
  ServantLimitMaster_o *v115; // x20
  int32_t v116; // w25
  int64_t v117; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v118; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v119; // q1
  UserServantCollectionMaster_o *v120; // x20
  int64_t v121; // x25
  int64_t v122; // x23
  int v123; // w8
  bool *p_isStatusUpSvt; // x28
  int64_t v125; // x22
  struct UserServantEntity_o *v126; // x8
  int32_t v127; // w20
  BalanceConfig_c *v128; // x8
  struct UserServantEntity_o *v129; // x8
  __int128 v130; // q0
  __int64 v131; // x20
  const MethodInfo *v132; // x1
  int64_t UserSvtId; // x0
  unsigned int v134; // w8
  UserServantEntity_o *v135; // x8
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v138; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v141; // x8
  unsigned __int64 v142; // x10
  int32_t *v143; // x11
  __int64 v144; // x0
  _QWORD *v145; // x0
  __int64 v146; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v147; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v148; // q0
  __int64 v149; // x22
  System_Collections_Generic_IEnumerator_T__c *v150; // x8
  unsigned __int64 v151; // x10
  int32_t *v152; // x11
  __int64 v153; // x0
  UserServantEntity_o *v154; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v155; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v156; // q0
  int64_t v157; // x0
  __int128 v158; // q0
  UserServantCommandCodeMaster_o *v159; // x20
  struct ServantEntity_o *v160; // x8
  int64_t v161; // x25
  __int64 v162; // x23
  __int64 v163; // x26
  int32_t v164; // w8
  UserServantCommandCardMaster_o *v165; // x20
  struct ServantEntity_o *v166; // x8
  int64_t v167; // x25
  __int64 v168; // x23
  __int64 v169; // x26
  struct System_Int32_array *commandCardParam; // x20
  int max_length; // w8
  __int64 v172; // x22
  int32_t v173; // w25
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
  __int64 v184; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v185; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v186; // q0
  __int64 v187; // x22
  System_Collections_Generic_IEnumerator_T__c *v188; // x8
  unsigned __int64 v189; // x10
  int32_t *v190; // x11
  __int64 v191; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v192; // x8
  __int64 v193; // x20
  __int64 v194; // x23
  int32_t v195; // w20
  struct UserServantEntity_o *v196; // x8
  __int128 v197; // q0
  int64_t v198; // x0
  __int128 v199; // q0
  int32_t SvtClassId; // w20
  int32_t v201; // w0
  int32_t SvtClassGroupType; // w20
  int32_t materialExp; // w20
  BalanceConfig_c *v204; // x0
  int SameClassExp; // w22
  double v206; // d0
  int32_t classId; // w20
  UserServantEntity_o *v208; // x8
  int32_t v209; // w20
  bool v210; // w8
  bool v211; // w8
  bool v212; // w8
  bool v213; // w8
  UserServantCommandCodeMaster_o *v214; // x20
  struct ServantEntity_o *v215; // x8
  int64_t v216; // x25
  __int64 v217; // x23
  __int64 v218; // x26
  int32_t v219; // w8
  bool v220; // w28
  UserServantEntity_o *v221; // x8
  bool v222; // w8
  UserServantEntity_o *v223; // x8
  const MethodInfo *v224; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v225; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v226; // q0
  int64_t v227; // x0
  __int128 v228; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v229; // x9
  int32_t combineLimitId; // w20
  __int64 v231; // x23
  __int64 v232; // x25
  int32_t v233; // w25
  __int64 v234; // x23
  __int64 v235; // x26
  UserServantEntity_o *v236; // x20
  __int64 v237; // x8
  UserItemMaster_o *v238; // x27
  unsigned __int64 i; // x28
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v240; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v241; // q1
  int32_t v242; // w25
  int32_t v243; // w20
  UserServantEntity_o *v244; // x8
  bool isLevelMax; // w8
  UserServantEntity_o *v246; // x8
  UserServantEntity_o *v247; // x8
  const MethodInfo *v248; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v249; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v250; // q0
  int64_t v251; // x0
  __int128 v252; // q0
  UserServantEntity_o *v253; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v254; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v255; // q0
  int64_t v256; // x0
  __int128 v257; // q0
  const MethodInfo *v258; // x1
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
  System_Collections_Generic_IEnumerator_T__o *v275; // x20
  System_Collections_Generic_IEnumerator_T__c *v276; // x8
  unsigned __int64 v277; // x10
  int32_t *v278; // x11
  __int64 v279; // x0
  System_Collections_Generic_IEnumerator_T__c *v280; // x8
  unsigned __int64 v281; // x10
  int32_t *v282; // x11
  __int64 v283; // x0
  _QWORD *v284; // x0
  __int64 v285; // x9
  UserServantEntity_o *v286; // x8
  __int128 v287; // q0
  __int64 v288; // x22
  System_Collections_Generic_IEnumerator_T__c *v289; // x8
  unsigned __int64 v290; // x10
  int32_t *v291; // x11
  __int64 v292; // x0
  int64_t IsLock; // x0
  UserServantEntity_o *v294; // x8
  bool v295; // w8
  UserServantEntity_o *v296; // x8
  __int128 v297; // q0
  int64_t v298; // x0
  __int128 v299; // q0
  int32_t v300; // w8
  UserServantEntity_o *v301; // x8
  UserServantEntity_o *v302; // x8
  bool v303; // w8
  UserServantEntity_o *v304; // x8
  UserServantEntity_o *v305; // x8
  __int128 v306; // q0
  int64_t v307; // x0
  __int128 v308; // q0
  ServantExceedEntity_o *SvtExceedEnt; // x0
  int32_t *v310; // x20
  CommonConsumeEntity_array *IdEntityList; // x0
  __int64 v312; // x1
  __int64 v313; // x2
  CommonConsumeEntity_array *v314; // x25
  System_Collections_Generic_HashSet_int__o *v315; // x27
  __int64 v316; // x1
  __int64 v317; // x2
  System_Collections_Generic_HashSet_int__o *v318; // x28
  int v319; // w8
  __int64 v320; // x22
  CommonConsumeEntity_o *v321; // x23
  UserServantEntity_o *v322; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v323; // x25
  __int64 v324; // x23
  __int64 v325; // x26
  UserServantEntity_o *v326; // x23
  System_Int32_array *v327; // x25
  System_Int32_array *v328; // x0
  __int64 v329; // x20
  __int64 v330; // x25
  int32_t maxFriendshipRank; // w9
  int v332; // w10
  UserServantEntity_o *v333; // x8
  UserServantEntity_o *v334; // x8
  UserServantEntity_o *v335; // x8
  __int128 v336; // q0
  int64_t v337; // x0
  __int128 v338; // q0
  int32_t v339; // w20
  int v340; // w22
  int64_t v341; // x20
  __int64 v342; // x23
  __int64 v343; // x24
  UserItemMaster_o *v344; // x22
  unsigned __int64 v345; // x25
  __int64 v346; // x26
  bool v347; // w8
  UserServantEntity_o *v348; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  System_String_array **v350; // x2
  System_String_array **v351; // x3
  System_Boolean_array **v352; // x4
  System_Int32_array **v353; // x5
  System_Int32_array *v354; // x6
  System_Int32_array *v355; // x7
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  System_String_array **v357; // x2
  System_String_array **v358; // x3
  System_Boolean_array **v359; // x4
  System_Int32_array **v360; // x5
  System_Int32_array *v361; // x6
  System_Int32_array *v362; // x7
  int64_t v363; // x8
  struct ServantEntity_o *v364; // x9
  UserServantEntity_o *v365; // x8
  __int64 v366; // x20
  __int64 v367; // x21
  int32_t v368; // w8
  __int64 v369; // x0
  __int64 v370; // x0
  int v371; // [xsp+Ch] [xbp-444h]
  UserServantMaster_o *MasterData_WarQuestSelectionMaster; // [xsp+10h] [xbp-440h]
  int64_t v373; // [xsp+18h] [xbp-438h]
  bool *p_isLimitUpItemNum; // [xsp+28h] [xbp-428h]
  struct IconLabelInfo_o **p_iconLabelInfo2; // [xsp+30h] [xbp-420h]
  int64_t v378; // [xsp+40h] [xbp-410h]
  UserServantEntity_o *v379; // [xsp+48h] [xbp-408h]
  UserServantEntity_o *v381; // [xsp+50h] [xbp-400h]
  bool v382; // [xsp+5Ch] [xbp-3F4h]
  bool *p_isChoice; // [xsp+60h] [xbp-3F0h]
  struct ServantEntity_o **p_servantEntity; // [xsp+68h] [xbp-3E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v385; // [xsp+70h] [xbp-3E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v386; // [xsp+90h] [xbp-3C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v387; // [xsp+B0h] [xbp-3A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v388; // [xsp+D0h] [xbp-380h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v389; // [xsp+F0h] [xbp-360h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v390; // [xsp+110h] [xbp-340h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v391; // [xsp+130h] [xbp-320h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v392; // [xsp+150h] [xbp-300h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v393; // [xsp+170h] [xbp-2E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v394; // [xsp+190h] [xbp-2C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v395; // [xsp+1B0h] [xbp-2A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v396; // [xsp+1D0h] [xbp-280h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v397; // [xsp+1F0h] [xbp-260h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v398; // [xsp+210h] [xbp-240h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v399; // [xsp+230h] [xbp-220h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v400; // [xsp+250h] [xbp-200h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v401; // [xsp+270h] [xbp-1E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v402; // [xsp+290h] [xbp-1C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v403; // [xsp+2B0h] [xbp-1A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v404; // [xsp+2D0h] [xbp-180h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v405; // [xsp+2F0h] [xbp-160h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v406; // [xsp+310h] [xbp-140h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v407; // [xsp+330h] [xbp-120h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v408; // [xsp+350h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v409; // [xsp+370h] [xbp-E0h]
  _DWORD v410[6]; // [xsp+390h] [xbp-C0h]
  int v411; // [xsp+3A8h] [xbp-A8h]
  UserItemEntity_o *v412; // [xsp+3B0h] [xbp-A0h] BYREF
  int32_t tdMaxLv; // [xsp+3BCh] [xbp-94h] BYREF
  int32_t tdLv[2]; // [xsp+3C0h] [xbp-90h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+3C8h] [xbp-88h] BYREF
  UserItemEntity_o *v416; // [xsp+3D0h] [xbp-80h] BYREF
  __int64 v417; // [xsp+3D8h] [xbp-78h] BYREF
  UserServantCommandCodeEntity_o *v418; // [xsp+3E0h] [xbp-70h] BYREF
  UserServantCommandCardEntity_o *v419; // [xsp+3E8h] [xbp-68h] BYREF
  UserServantCommandCodeEntity_o *entity; // [xsp+3F0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v421; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v422; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v423; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v424; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v425; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v426; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v427; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v428; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v429; // 0:x0.16

  if ( (byte_4217301 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, *(_QWORD *)&type);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v16);
    sub_B0D8A4(&Method_DataManager_GetMasterData_CombineLimitMaster___, v17);
    sub_B0D8A4(&Method_DataManager_GetMasterData_CombineMaterialMaster___, v18);
    sub_B0D8A4(&Method_DataManager_GetMasterData_FriendshipMaster___, v19);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantClassMaster___, v20);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantLimitMaster___, v21);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, v22);
    sub_B0D8A4(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___, v23);
    sub_B0D8A4(&Method_DataManager_GetMasterData_TreasureDvcMaster___, v24);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserItemMaster___, v25);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v26);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantCommandCardMaster___, v27);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___, v28);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantLeaderMaster___, v29);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantMaster___, v30);
    sub_B0D8A4(&Method_DataManager_GetMaster_CommonConsumeMaster___, v31);
    sub_B0D8A4(&Method_DataManager_GetMaster_SvtCoinMaster___, v32);
    sub_B0D8A4(&DataManager_TypeInfo, v33);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v34);
    sub_B0D8A4(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v35);
    sub_B0D8A4(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__, v36);
    sub_B0D8A4(&Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__GetEntity__, v37);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_int___, v38);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_int__Add__, v39);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_int___ctor___67861296, v40);
    sub_B0D8A4(&System_Collections_Generic_HashSet_int__TypeInfo, v41);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v42);
    sub_B0D8A4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v43);
    sub_B0D8A4(&System_Collections_IEnumerator_TypeInfo, v44);
    sub_B0D8A4(&IconLabelInfo_TypeInfo, v45);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v46);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v47);
    sub_B0D8A4(&System_Math_TypeInfo, v48);
    sub_B0D8A4(&NetworkManager_TypeInfo, v49);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v50);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v51);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v52);
    sub_B0D8A4(&UserServantLeaderEntity_TypeInfo, v53);
    byte_4217301 = 1;
  }
  v419 = 0LL;
  entity = 0LL;
  v417 = 0LL;
  v418 = 0LL;
  tdInfo = 0LL;
  v416 = 0LL;
  *(_QWORD *)tdLv = 0LL;
  tdMaxLv = 0;
  v412 = 0LL;
  v411 = 0;
  v54 = (IconLabelInfo_o *)sub_B0D974(IconLabelInfo_TypeInfo, *(_QWORD *)&type, *(_QWORD *)&index);
  IconLabelInfo___ctor(v54, 0LL);
  this->fields.iconLabelInfo1 = v54;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo1,
    (System_Int32_array **)v54,
    v55,
    v56,
    v57,
    v58,
    v59,
    v60);
  v63 = (IconLabelInfo_o *)sub_B0D974(IconLabelInfo_TypeInfo, v61, v62);
  IconLabelInfo___ctor(v63, 0LL);
  this->fields.iconLabelInfo2 = v63;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo2,
    (System_Int32_array **)v63,
    v64,
    v65,
    v66,
    v67,
    v68,
    v69);
  v72 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, v70, v71);
  System_Collections_Generic_List_int____ctor(
    v72,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.enableSkillUp = v72;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.enableSkillUp,
    (System_Int32_array **)v72,
    v73,
    v74,
    v75,
    v76,
    v77,
    v78);
  v81 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, v79, v80);
  System_Collections_Generic_List_int____ctor(
    v81,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.enableAppendSkillUp = v81;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.enableAppendSkillUp,
    (System_Int32_array **)v81,
    v82,
    v83,
    v84,
    v85,
    v86,
    v87);
  ListViewItem___ctor((ListViewItem_o *)this, 0LL);
  this->fields.userSvtEntity = userSvtEntity;
  p_userSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userSvtEntity;
  this->fields.type = type;
  this->fields.index = index;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.userSvtEntity,
    (System_Int32_array **)userSvtEntity,
    v89,
    v90,
    v91,
    v92,
    v93,
    v94);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_544;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___);
  v96 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_544;
  v97 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v99 = *(_QWORD *)&v96[5].fields.currentCryptoKey;
  v98 = *(_QWORD *)&v96[5].fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v421.fields.currentCryptoKey = v99;
  *(_QWORD *)&v421.fields.fakeValue = v98;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v421, 0LL);
  if ( !v97 )
    goto LABEL_544;
  v100 = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                     v97,
                                     Instance,
                                     (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = v100;
  p_servantEntity = &this->fields.servantEntity;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.servantEntity,
    (System_Int32_array **)v100,
    v101,
    v102,
    v103,
    v104,
    v105,
    v106);
  this->fields.setupInfo = setupInfo;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.setupInfo,
    (System_Int32_array **)setupInfo,
    v107,
    v108,
    v109,
    v110,
    v111,
    v112);
  v113 = this->fields.userSvtEntity;
  this->fields.isEventUpVal = 0;
  *(_QWORD *)&this->fields.bonusKind = 0LL;
  if ( !v113 )
    goto LABEL_544;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v113->fields.svtId, 0LL);
  servantEntity = this->fields.servantEntity;
  this->fields.svtId = Instance;
  if ( !servantEntity )
    goto LABEL_544;
  this->fields.classId = servantEntity->fields.classId;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_544;
  MasterData_WarQuestSelectionMaster = (UserServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                (DataManager_o *)Instance,
                                                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_544;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtEntity )
    goto LABEL_544;
  v115 = (ServantLimitMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576((*p_userSvtEntity)[5], 0LL);
  if ( !*p_userSvtEntity )
    goto LABEL_544;
  v116 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576((*p_userSvtEntity)[6], 0LL);
  if ( !v115 )
    goto LABEL_544;
  Instance = (int64_t)ServantLimitMaster__GetEntity(v115, v116, Instance, 0LL);
  if ( !Instance )
    goto LABEL_544;
  v117 = Instance;
  this->fields.rarity = *(_DWORD *)(Instance + 24);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_544;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v118 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_544;
  v119 = v118[4];
  v120 = (UserServantCollectionMaster_o *)Instance;
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v409.fields.currentCryptoKey = v118[3];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v409.fields.fakeValue = v119;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v408 = v409;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v408, 0LL);
  if ( !*p_userSvtEntity )
    goto LABEL_544;
  v121 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576((*p_userSvtEntity)[5], 0LL);
  if ( !v120 )
    goto LABEL_544;
  Instance = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(v120, v121, Instance, 0LL);
  if ( !Instance )
    goto LABEL_544;
  v122 = Instance;
  v382 = isParty;
  UserServantCollectionEntity__getFriendShipRankInfo(
    (UserServantCollectionEntity_o *)Instance,
    &this->fields.friendship,
    &this->fields.friendshipMax,
    0LL);
  Instance = (int64_t)UserGameMaster__getSelfUserGame(0LL);
  if ( !Instance )
    goto LABEL_544;
  v123 = *(_DWORD *)(Instance + 96);
  *(_DWORD *)&this->fields.isStatusUpSvt = 0;
  p_isStatusUpSvt = &this->fields.isStatusUpSvt;
  v371 = v123;
  *(_WORD *)&this->fields.isFavorite = 0;
  *(_WORD *)&this->fields.isLock = 0;
  *(_DWORD *)&this->fields.isChoice = 0;
  this->fields.isMaxSelect = 0;
  *(_QWORD *)&this->fields.isLimitUpItemNum = 0LL;
  v125 = Instance;
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
  v126 = this->fields.userSvtEntity;
  this->fields.maxLimitCnt = Instance;
  if ( !v126 )
    goto LABEL_544;
  this->fields.currentLimitCnt = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                   v126->fields.limitCount,
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
  v127 = *(_DWORD *)(Instance + 276);
  v128 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    Instance = (int64_t)*p_userSvtEntity;
    v128 = BalanceConfig_TypeInfo;
  }
  this->fields.hpReinforceValue = v128->static_fields->StatusUpAdjustHp * v127;
  if ( !Instance )
    goto LABEL_544;
  v378 = v122;
  this->fields.atkReinforceValue = v128->static_fields->StatusUpAdjustAtk * *(_DWORD *)(Instance + 272);
  UserServantEntity__getAdjustMaxData(
    (UserServantEntity_o *)Instance,
    &this->fields.nowMaxHpReinforceValue,
    &this->fields.nowMaxAtkReinforceValue,
    0LL);
  v129 = this->fields.userSvtEntity;
  *(_WORD *)&this->fields.isEquipedCmdCard = 0;
  if ( !v129 )
    goto LABEL_544;
  v130 = *(_OWORD *)&v129->fields.id.fields.fakeValue;
  v131 = *(_QWORD *)(v125 + 120);
  v373 = v125;
  *(_OWORD *)&v407.fields.currentCryptoKey = *(_OWORD *)&v129->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v407.fields.fakeValue = v130;
  this->fields.isPush = v131 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v407, 0LL);
  UserSvtId = CombineServantListViewItem__get_UserSvtId(this, v132);
  EventFortificationDataLogic__SetFortification(
    &this->fields.isFortification,
    &this->fields.fortificationName,
    &this->fields.fortificationDetailName,
    UserSvtId,
    0LL);
  v134 = this->fields.type;
  v379 = baseUsrSvtData;
  if ( v134 > 0xA || ((1 << v134) & 0x481) == 0 )
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
  this->fields.isParty = v382;
  if ( !Instance )
    goto LABEL_544;
  Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL);
  v135 = this->fields.userSvtEntity;
  this->fields.isLock = Instance & 1;
  if ( !v135 )
    goto LABEL_544;
  *p_isChoice = UserServantEntity__IsChoice(v135, 0LL);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_544;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantLeaderMaster___);
  if ( !Instance )
    goto LABEL_544;
  Instance = *(_QWORD *)(Instance + 32);
  if ( !Instance )
    goto LABEL_544;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                 (const MethodInfo_2AB5D9C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B0D97C(0LL);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v138 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v138;
        p_offset += 4;
        if ( v138 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_58;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_58:
      p_method = sub_AA67A0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v141 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v142 = 0LL;
      v143 = &v141->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v143 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v142;
        v143 += 4;
        if ( v142 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_65;
      }
      v144 = (__int64)&v141->vtable[*v143].method;
    }
    else
    {
LABEL_65:
      v144 = sub_AA67A0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v145 = (_QWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v144)(
                       Enumerator,
                       *(_QWORD *)(v144 + 8));
    if ( !v145 )
      goto LABEL_549;
    v146 = *(&UserServantLeaderEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*v145 + 300LL) < (unsigned int)v146
      || *(UserServantLeaderEntity_c **)(*(_QWORD *)(*v145 + 200LL) + 8 * v146 - 8) != UserServantLeaderEntity_TypeInfo )
    {
      sub_B0DC70(v145);
LABEL_547:
      sub_B0DC70(v183);
LABEL_548:
      sub_B0DC70(v284);
LABEL_549:
      sub_B0D97C(v145);
    }
    v147 = *p_userSvtEntity;
    if ( !*p_userSvtEntity )
      sub_B0D97C(v145);
    v148 = v147[2];
    v149 = v145[7];
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v409.fields.currentCryptoKey = v147[1];
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v409.fields.fakeValue = v148;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v406 = v409;
    if ( v149 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v406, 0LL) )
    {
      this->fields.isUseSupport = 1;
      break;
    }
  }
  v410[v411++] = 1071;
  v150 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v151 = 0LL;
    v152 = &v150->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v152 - 1) != System_IDisposable_TypeInfo )
    {
      ++v151;
      v152 += 4;
      if ( v151 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_80;
    }
    v153 = (__int64)&v150->vtable[*v152].method;
  }
  else
  {
LABEL_80:
    v153 = sub_AA67A0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v153)(
    Enumerator,
    *(_QWORD *)(v153 + 8));
  if ( v411 && v410[v411 - 1] == 1071 )
    --v411;
  Instance = (int64_t)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_544;
  Instance = UserServantEntity__IsEventJoin((UserServantEntity_o *)Instance, 0LL);
  v154 = this->fields.userSvtEntity;
  this->fields.isEventJoin = Instance & 1;
  if ( !v154 )
    goto LABEL_544;
  Instance = UserServantEntity__IsHeroine(v154, 0LL);
  if ( (Instance & 1) != 0 )
    this->fields.isHeroineSvt = 1;
  if ( baseUsrSvtData )
  {
    v155 = *p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_544;
    v156 = v155[2];
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v409.fields.currentCryptoKey = v155[1];
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v409.fields.fakeValue = v156;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v405 = v409;
    v157 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v405, 0LL);
    v158 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
    *(_OWORD *)&v404.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v404.fields.fakeValue = v158;
    if ( v157 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v404, 0LL) )
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
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_544;
  v159 = (UserServantCommandCodeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             (DataManager_o *)Instance,
                                             (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__get_UserId(0LL);
  v160 = *p_servantEntity;
  if ( !*p_servantEntity )
    goto LABEL_544;
  v161 = Instance;
  v162 = *(_QWORD *)&v160->fields.id.fields.currentCryptoKey;
  v163 = *(_QWORD *)&v160->fields.id.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v422.fields.currentCryptoKey = v162;
  *(_QWORD *)&v422.fields.fakeValue = v163;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v422, 0LL);
  if ( !v159 )
    goto LABEL_544;
  if ( UserServantCommandCodeMaster__TryGetEntity(v159, &entity, v161, (int)Instance, 0LL) )
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
  v164 = this->fields.type;
  if ( v164 == 10 )
  {
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_544;
    v165 = (UserServantCommandCardMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)Instance,
                                               (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantCommandCardMaster___);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Instance = NetworkManager__get_UserId(0LL);
    v166 = *p_servantEntity;
    if ( !*p_servantEntity )
      goto LABEL_544;
    v167 = Instance;
    v168 = *(_QWORD *)&v166->fields.id.fields.currentCryptoKey;
    v169 = *(_QWORD *)&v166->fields.id.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v423.fields.currentCryptoKey = v168;
    *(_QWORD *)&v423.fields.fakeValue = v169;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v423, 0LL);
    if ( !v165 )
      goto LABEL_544;
    Instance = UserServantCommandCardMaster__TryGetEntity(v165, &v419, v167, (int)Instance, 0LL);
    if ( (Instance & 1) != 0 )
    {
      if ( !v419 )
        goto LABEL_544;
      commandCardParam = v419->fields.commandCardParam;
      if ( commandCardParam )
      {
        max_length = commandCardParam->max_length;
        if ( max_length >= 1 )
        {
          v172 = 0LL;
          while ( 1 )
          {
            if ( (unsigned int)v172 >= max_length )
            {
LABEL_556:
              v370 = sub_B0D9A8(Instance);
              sub_B0D948(v370, 0LL);
            }
            v173 = commandCardParam->m_Items[v172 + 1];
            Instance = (int64_t)BalanceConfig_TypeInfo;
            if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              Instance = (int64_t)BalanceConfig_TypeInfo;
            }
            if ( v173 < *(_DWORD *)(*(_QWORD *)(Instance + 184) + 700LL) )
              break;
            this->fields.isCommandCardExceedMax = 1;
            max_length = commandCardParam->max_length;
            if ( (int)++v172 >= max_length )
              goto LABEL_141;
          }
          this->fields.isCommandCardExceedMax = 0;
        }
      }
    }
LABEL_141:
    v164 = this->fields.type;
  }
  if ( v164 == 1 )
  {
    this->fields.isMaterialSvt = isMtSvt;
    this->fields.isParty = v382;
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_544;
    Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantLeaderMaster___);
    if ( !Instance )
      goto LABEL_544;
    Instance = *(_QWORD *)(Instance + 32);
    if ( !Instance )
      goto LABEL_544;
    v174 = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
             (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
             (const MethodInfo_2AB5D9C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    if ( !v174 )
      sub_B0D97C(0LL);
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
        v178 = sub_AA67A0(v174, System_Collections_IEnumerator_TypeInfo, 0LL);
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
        v182 = sub_AA67A0(v174, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
      }
      v183 = (_QWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v182)(
                         v174,
                         *(_QWORD *)(v182 + 8));
      if ( !v183 )
        sub_B0D97C(0LL);
      v184 = *(&UserServantLeaderEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*v183 + 300LL) < (unsigned int)v184
        || *(UserServantLeaderEntity_c **)(*(_QWORD *)(*v183 + 200LL) + 8 * v184 - 8) != UserServantLeaderEntity_TypeInfo )
      {
        goto LABEL_547;
      }
      v185 = *p_userSvtEntity;
      if ( !*p_userSvtEntity )
        sub_B0D97C(v183);
      v186 = v185[2];
      v187 = v183[7];
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v409.fields.currentCryptoKey = v185[1];
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v409.fields.fakeValue = v186;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v403 = v409;
      if ( v187 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v403, 0LL) )
      {
        this->fields.isUseSupport = 1;
        break;
      }
    }
    v410[v411++] = 1511;
    v188 = v174->klass;
    if ( *(_WORD *)&v174->klass->_2.bitflags1 )
    {
      v189 = 0LL;
      v190 = &v188->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v190 - 1) != System_IDisposable_TypeInfo )
      {
        ++v189;
        v190 += 4;
        if ( v189 >= *(unsigned __int16 *)&v174->klass->_2.bitflags1 )
          goto LABEL_173;
      }
      v191 = (__int64)&v188->vtable[*v190].method;
    }
    else
    {
LABEL_173:
      v191 = sub_AA67A0(v174, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v191)(v174, *(_QWORD *)(v191 + 8));
    if ( v411 && v410[v411 - 1] == 1511 )
      --v411;
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_544;
    Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_CombineMaterialMaster___);
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
      v192 = *p_userSvtEntity;
      if ( !*p_userSvtEntity )
        goto LABEL_544;
      v194 = *(_QWORD *)&v192[5].fields.currentCryptoKey;
      v193 = *(_QWORD *)&v192[5].fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v424.fields.currentCryptoKey = v194;
      *(_QWORD *)&v424.fields.fakeValue = v193;
      v195 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v424, 0LL);
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(baseUsrSvtData->fields.svtId, 0LL);
      if ( v195 == (_DWORD)Instance )
      {
        v196 = this->fields.userSvtEntity;
        this->fields.isLimitCntTarget = 1;
        if ( !v196 )
          goto LABEL_544;
        v197 = *(_OWORD *)&v196->fields.id.fields.fakeValue;
        *(_OWORD *)&v409.fields.currentCryptoKey = *(_OWORD *)&v196->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v409.fields.fakeValue = v197;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v402 = v409;
        v198 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v402, 0LL);
        v199 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
        *(_OWORD *)&v401.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v401.fields.fakeValue = v199;
        if ( v198 != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v401, 0LL) )
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
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_544;
      Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantClassMaster___);
      if ( !*p_servantEntity )
        goto LABEL_544;
      if ( !Instance )
        goto LABEL_544;
      Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                            (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                            (*p_servantEntity)->fields.classId,
                            (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_544;
      HIDWORD(v417) = *(_DWORD *)(Instance + 52);
      v201 = UserServantEntity__getSvtClassId(baseUsrSvtData, 0LL);
      SvtClassGroupType = UserServantEntity__getSvtClassGroupType(baseUsrSvtData, v201, 0LL);
      if ( System_Int32__Equals_38472956((int32_t)&v417 + 4, 3, 0LL) )
        goto LABEL_210;
      Instance = System_Int32__Equals_38472956((int32_t)&v417 + 4, SvtClassGroupType, 0LL);
      if ( (Instance & 1) != 0 )
      {
        if ( !*p_servantEntity )
          goto LABEL_544;
        classId = (*p_servantEntity)->fields.classId;
        if ( classId == UserServantEntity__getSvtClassId(baseUsrSvtData, 0LL) )
        {
LABEL_210:
          materialExp = this->fields.materialExp;
          v204 = BalanceConfig_TypeInfo;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v204 = BalanceConfig_TypeInfo;
          }
          SameClassExp = v204->static_fields->SameClassExp;
          if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !System_Math_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
          }
          v206 = ceil((double)materialExp * (double)SameClassExp / 1000.0);
          if ( v206 == INFINITY )
            v206 = -v206;
          this->fields.materialExp = (int)v206;
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
    v208 = this->fields.userSvtEntity;
    this->fields.isLock = Instance & 1;
    if ( !v208 )
      goto LABEL_544;
    *p_isChoice = UserServantEntity__IsChoice(v208, 0LL);
    Instance = (int64_t)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_544;
    this->fields.isEventJoin = UserServantEntity__IsEventJoin((UserServantEntity_o *)Instance, 0LL);
    Instance = (int64_t)this->fields.userSvtEntity;
    this->fields.hpBase = *(_DWORD *)(v117 + 36);
    this->fields.atkBase = *(_DWORD *)(v117 + 44);
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
      v209 = UserServantEntity__getSvtClassId(baseUsrSvtData, 0LL);
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_544;
      Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantClassMaster___);
      if ( !*p_servantEntity )
        goto LABEL_544;
      if ( !Instance )
        goto LABEL_544;
      Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                            (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                            (*p_servantEntity)->fields.classId,
                            (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_544;
      LODWORD(v417) = *(_DWORD *)(Instance + 52);
      if ( !*p_servantEntity )
        goto LABEL_544;
      if ( (*p_servantEntity)->fields.classId == v209 || System_Int32__Equals_38472956((int32_t)&v417, 3, 0LL) )
      {
        this->fields.isCanStUp = 1;
        v210 = UserServantEntity__isAdjustAtkMax(baseUsrSvtData, 0LL) && this->fields.atkBase > 0;
        this->fields.isAtkUpMax = v210;
        v211 = UserServantEntity__isAdjustHpMax(baseUsrSvtData, 0LL) && this->fields.hpBase > 0;
        this->fields.isHpUpMax = v211;
        v212 = UserServantEntity__isSecondAdjustAtkMax(baseUsrSvtData, 0LL) && this->fields.atkBase > 0;
        this->fields.isAtkSecondUpMax = v212;
        v213 = UserServantEntity__isSecondAdjustHpMax(baseUsrSvtData, 0LL) && this->fields.hpBase > 0;
        this->fields.isHpSecondUpMax = v213;
      }
    }
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_544;
    v214 = (UserServantCommandCodeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)Instance,
                                               (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Instance = NetworkManager__get_UserId(0LL);
    v215 = *p_servantEntity;
    if ( !*p_servantEntity )
      goto LABEL_544;
    v216 = Instance;
    v217 = *(_QWORD *)&v215->fields.id.fields.currentCryptoKey;
    v218 = *(_QWORD *)&v215->fields.id.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v425.fields.currentCryptoKey = v217;
    *(_QWORD *)&v425.fields.fakeValue = v218;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v425, 0LL);
    if ( !v214 )
      goto LABEL_544;
    if ( UserServantCommandCodeMaster__TryGetEntity(v214, &v418, v216, (int)Instance, 0LL) )
    {
      Instance = (int64_t)v418;
      if ( !v418 )
        goto LABEL_544;
      this->fields.isEquipedCmdCard = UserServantCommandCodeEntity__IsEquipedCommandCode(v418, 0LL);
      Instance = (int64_t)v418;
      if ( !v418 )
        goto LABEL_544;
      this->fields.isCmdCardSlotOpen = UserServantCommandCodeEntity__IsCommandCardSlotOpen(v418, 0LL);
    }
  }
  v219 = this->fields.type;
  if ( v219 == 9 )
  {
    v220 = v382;
    Instance = (int64_t)userSvtEntity;
    if ( !userSvtEntity )
      goto LABEL_544;
    Instance = UserServantEntity__isLimitCountMax(userSvtEntity, 0LL);
    v244 = this->fields.userSvtEntity;
    this->fields.isLimitCntMax = Instance & 1;
    if ( !v244 )
      goto LABEL_544;
    isLevelMax = UserServantEntity__isLevelMax(v244, 0LL);
    Instance = (int64_t)this->fields.userSvtEntity;
    this->fields.isLvMax = isLevelMax;
    this->fields.isParty = v382;
    if ( !Instance )
      goto LABEL_544;
    Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL);
    v246 = this->fields.userSvtEntity;
    this->fields.isLock = Instance & 1;
    if ( !v246 )
      goto LABEL_544;
    *p_isChoice = UserServantEntity__IsChoice(v246, 0LL);
    Instance = (int64_t)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_544;
    Instance = UserServantEntity__IsEventJoin((UserServantEntity_o *)Instance, 0LL);
    v247 = this->fields.userSvtEntity;
    this->fields.isEventJoin = Instance & 1;
    if ( !v247 )
      goto LABEL_544;
    this->fields.isIgnoreCombineLimitSpecial = UserServantEntity__IsIgnoreCombineLimitSpecial(v247, 0LL);
    Instance = CombineServantListViewItem__GetSealCombineLimit(this, v248);
    this->fields.isSealCombineLimit = Instance & 1;
    if ( baseUsrSvtData )
    {
      v249 = *p_userSvtEntity;
      if ( !*p_userSvtEntity )
        goto LABEL_544;
      v250 = v249[2];
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v409.fields.currentCryptoKey = v249[1];
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v409.fields.fakeValue = v250;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v397 = v409;
      v251 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v397, 0LL);
      v252 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
      *(_OWORD *)&v396.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v396.fields.fakeValue = v252;
      if ( v251 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v396, 0LL) )
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
    v220 = v382;
    if ( v219 != 2 )
      goto LABEL_325;
    Instance = (int64_t)userSvtEntity;
    if ( !userSvtEntity )
      goto LABEL_544;
    Instance = UserServantEntity__isLimitCountMax(userSvtEntity, 0LL);
    v221 = this->fields.userSvtEntity;
    this->fields.isLimitCntMax = Instance & 1;
    if ( !v221 )
      goto LABEL_544;
    v222 = UserServantEntity__isLevelMax(v221, 0LL);
    Instance = (int64_t)this->fields.userSvtEntity;
    this->fields.isLvMax = v222;
    this->fields.isParty = v382;
    if ( !Instance )
      goto LABEL_544;
    Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL);
    v223 = this->fields.userSvtEntity;
    this->fields.isLock = Instance & 1;
    if ( !v223 )
      goto LABEL_544;
    *p_isChoice = UserServantEntity__IsChoice(v223, 0LL);
    Instance = (int64_t)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_544;
    this->fields.isEventJoin = UserServantEntity__IsEventJoin((UserServantEntity_o *)Instance, 0LL);
    Instance = CombineServantListViewItem__GetSealCombineLimit(this, v224);
    this->fields.isSealCombineLimit = Instance & 1;
    if ( baseUsrSvtData )
    {
      v225 = *p_userSvtEntity;
      if ( !*p_userSvtEntity )
        goto LABEL_544;
      v226 = v225[2];
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v409.fields.currentCryptoKey = v225[1];
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v409.fields.fakeValue = v226;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v400 = v409;
      v227 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v400, 0LL);
      v228 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
      *(_OWORD *)&v399.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v399.fields.fakeValue = v228;
      if ( v227 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v399, 0LL) )
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
      v229 = *p_userSvtEntity;
      if ( !*p_userSvtEntity )
        goto LABEL_544;
      combineLimitId = (*p_servantEntity)->fields.combineLimitId;
      v231 = *(_QWORD *)&v229[6].fields.currentCryptoKey;
      v232 = *(_QWORD *)&v229[6].fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v426.fields.currentCryptoKey = v231;
      *(_QWORD *)&v426.fields.fakeValue = v232;
      v233 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v426, 0LL);
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_544;
      Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_CombineLimitMaster___);
      if ( !Instance )
        goto LABEL_544;
      Instance = (int64_t)CombineLimitMaster__GetEntity((CombineLimitMaster_o *)Instance, combineLimitId, v233, 0LL);
      if ( !Instance )
        goto LABEL_544;
      v234 = *(_QWORD *)(Instance + 32);
      v235 = *(_QWORD *)(Instance + 40);
      v236 = (UserServantEntity_o *)Instance;
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_544;
      v381 = v236;
      Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserItemMaster___);
      if ( !v235 )
        goto LABEL_544;
      v237 = *(_QWORD *)(v235 + 24);
      if ( (int)v237 >= 1 )
      {
        v238 = (UserItemMaster_o *)Instance;
        for ( i = 0LL; (__int64)i < (int)v237; ++i )
        {
          if ( i >= (unsigned int)v237 )
            goto LABEL_556;
          if ( !v234 )
            goto LABEL_544;
          if ( i >= *(unsigned int *)(v234 + 24) )
            goto LABEL_556;
          v240 = *p_userSvtEntity;
          if ( !*p_userSvtEntity )
            goto LABEL_544;
          v241 = v240[4];
          v242 = *(_DWORD *)(v235 + 32 + 4 * i);
          v243 = *(_DWORD *)(v234 + 32 + 4 * i);
          *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v409.fields.currentCryptoKey = v240[3];
          *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v409.fields.fakeValue = v241;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v398 = v409;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v398, 0LL);
          if ( !v238 )
            goto LABEL_544;
          Instance = UserItemMaster__TryGetEntity(v238, &v416, Instance, v242, 0LL);
          if ( (Instance & 1) == 0 )
            goto LABEL_370;
          if ( !v416 )
            goto LABEL_544;
          if ( v242 == v416->fields.itemId )
          {
            if ( v243 > v416->fields.num )
            {
LABEL_370:
              *p_isLimitUpItemNum = 0;
              break;
            }
            *p_isLimitUpItemNum = 1;
          }
          LODWORD(v237) = *(_DWORD *)(v235 + 24);
        }
      }
      baseUsrSvtData = v379;
      v220 = v382;
      if ( *(_DWORD *)(v373 + 96) < SLODWORD(v381->fields.id.fields.hiddenValue) )
        *p_isLimitUpItemNum = 0;
      goto LABEL_324;
    }
  }
  this->fields.isHeroineSvt = 1;
LABEL_324:
  v219 = this->fields.type;
LABEL_325:
  if ( (v219 | 8) == 11 )
  {
    Instance = (int64_t)this->fields.userSvtEntity;
    this->fields.isParty = v220;
    if ( !Instance )
      goto LABEL_544;
    Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL);
    v253 = this->fields.userSvtEntity;
    this->fields.isLock = Instance & 1;
    if ( !v253 )
      goto LABEL_544;
    *p_isChoice = UserServantEntity__IsChoice(v253, 0LL);
    Instance = (int64_t)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_544;
    Instance = UserServantEntity__IsEventJoin((UserServantEntity_o *)Instance, 0LL);
    this->fields.isEventJoin = Instance & 1;
    if ( baseUsrSvtData )
    {
      v254 = *p_userSvtEntity;
      if ( !*p_userSvtEntity )
        goto LABEL_544;
      v255 = v254[2];
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v409.fields.currentCryptoKey = v254[1];
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v409.fields.fakeValue = v255;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v395 = v409;
      v256 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v395, 0LL);
      v257 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
      *(_OWORD *)&v394.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v394.fields.fakeValue = v257;
      if ( v256 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v394, 0LL) )
        this->fields.isBaseSvt = 1;
    }
    Instance = (int64_t)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_544;
    if ( UserServantEntity__IsHeroine((UserServantEntity_o *)Instance, 0LL) )
      this->fields.isHeroineSvt = 1;
    v219 = this->fields.type;
    if ( v219 == 3 )
    {
      CombineServantListViewItem__SetSkillInfo(this, v258);
      v219 = this->fields.type;
    }
    if ( v219 == 11 )
    {
      CombineServantListViewItem__SetAppendSkillInfo(this, v258);
      v219 = this->fields.type;
    }
  }
  if ( v219 != 4 )
    goto LABEL_387;
  Instance = (int64_t)this->fields.userSvtEntity;
  this->fields.isParty = v220;
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
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v409.fields.currentCryptoKey = v260[1];
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v409.fields.fakeValue = v261;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v393 = v409;
    v262 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v393, 0LL);
    v263 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
    *(_OWORD *)&v392.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v392.fields.fakeValue = v263;
    if ( v262 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v392, 0LL) )
      this->fields.isBaseSvt = 1;
  }
  Instance = (int64_t)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
LABEL_544:
    sub_B0D97C(Instance);
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
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_544;
      Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
      if ( !Instance )
        goto LABEL_544;
      Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                            (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                            id,
                            (const MethodInfo_2669BD4 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
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
      if ( v371 <= 1200000 )
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
            Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !Instance )
              goto LABEL_544;
            Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
            if ( !Instance )
              goto LABEL_544;
            Instance = (int64_t)TreasureDvcLvMaster__GetEntity((TreasureDvcLvMaster_o *)Instance, v272, v271, 0LL);
            if ( Instance )
              v274 += *(_DWORD *)(Instance + 92);
            ++v271;
          }
          while ( v271 < v273 );
          baseUsrSvtData = v379;
          if ( !this )
            goto LABEL_544;
        }
        v269 = v371 >= v274;
      }
      else
      {
        v269 = 1;
      }
      this->fields.isSameSvt = v269;
    }
  }
  v219 = this->fields.type;
LABEL_387:
  if ( v219 != 5 )
    goto LABEL_437;
  this->fields.isParty = v220;
  this->fields.isMaterialSvt = isMtSvt;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_544;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantLeaderMaster___);
  if ( !Instance )
    goto LABEL_544;
  Instance = *(_QWORD *)(Instance + 32);
  if ( !Instance )
    goto LABEL_544;
  v275 = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
           (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
           (const MethodInfo_2AB5D9C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !v275 )
    sub_B0D97C(0LL);
  while ( 1 )
  {
    v276 = v275->klass;
    if ( *(_WORD *)&v275->klass->_2.bitflags1 )
    {
      v277 = 0LL;
      v278 = &v276->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)v278 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v277;
        v278 += 4;
        if ( v277 >= *(unsigned __int16 *)&v275->klass->_2.bitflags1 )
          goto LABEL_396;
      }
      v279 = (__int64)&v276->vtable[*v278].method;
    }
    else
    {
LABEL_396:
      v279 = sub_AA67A0(v275, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v279)(
            v275,
            *(_QWORD *)(v279 + 8)) & 1) == 0 )
      break;
    v280 = v275->klass;
    if ( *(_WORD *)&v275->klass->_2.bitflags1 )
    {
      v281 = 0LL;
      v282 = &v280->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v282 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v281;
        v282 += 4;
        if ( v281 >= *(unsigned __int16 *)&v275->klass->_2.bitflags1 )
          goto LABEL_403;
      }
      v283 = (__int64)&v280->vtable[*v282].method;
    }
    else
    {
LABEL_403:
      v283 = sub_AA67A0(v275, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v284 = (_QWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v283)(
                       v275,
                       *(_QWORD *)(v283 + 8));
    if ( !v284 )
      sub_B0D97C(0LL);
    v285 = *(&UserServantLeaderEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*v284 + 300LL) < (unsigned int)v285
      || *(UserServantLeaderEntity_c **)(*(_QWORD *)(*v284 + 200LL) + 8 * v285 - 8) != UserServantLeaderEntity_TypeInfo )
    {
      goto LABEL_548;
    }
    v286 = (UserServantEntity_o *)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      sub_B0D97C(v284);
    v287 = *(_OWORD *)&v286->fields.id.fields.fakeValue;
    v288 = v284[7];
    *(_OWORD *)&v409.fields.currentCryptoKey = *(_OWORD *)&v286->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v409.fields.fakeValue = v287;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v391 = v409;
    if ( v288 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v391, 0LL) )
    {
      this->fields.isUseSupport = 1;
      break;
    }
  }
  v410[v411++] = 3557;
  v289 = v275->klass;
  if ( *(_WORD *)&v275->klass->_2.bitflags1 )
  {
    v290 = 0LL;
    v291 = &v289->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v291 - 1) != System_IDisposable_TypeInfo )
    {
      ++v290;
      v291 += 4;
      if ( v290 >= *(unsigned __int16 *)&v275->klass->_2.bitflags1 )
        goto LABEL_418;
    }
    v292 = (__int64)&v289->vtable[*v291].method;
  }
  else
  {
LABEL_418:
    v292 = sub_AA67A0(v275, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v292)(v275, *(_QWORD *)(v292 + 8));
  if ( v411 && v410[v411 - 1] == 3557 )
    --v411;
  IsLock = (int64_t)this->fields.userSvtEntity;
  this->fields.isFavorite = isFavorite;
  if ( !IsLock )
    goto LABEL_545;
  IsLock = UserServantEntity__IsLock((UserServantEntity_o *)IsLock, 0LL);
  v294 = this->fields.userSvtEntity;
  this->fields.isLock = IsLock & 1;
  if ( !v294 )
    goto LABEL_545;
  *p_isChoice = UserServantEntity__IsChoice(v294, 0LL);
  IsLock = (int64_t)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_545;
  this->fields.isEventJoin = UserServantEntity__IsEventJoin((UserServantEntity_o *)IsLock, 0LL);
  v295 = baseUsrSvtData && UserServantEntity__IsEventJoin(baseUsrSvtData, 0LL);
  IsLock = (int64_t)this->fields.userSvtEntity;
  this->fields.isEventJoinBaseSvt = v295;
  if ( !IsLock )
    goto LABEL_545;
  IsLock = UserServantEntity__IsMaterialTd((UserServantEntity_o *)IsLock, 0LL);
  this->fields.isMaterialTdSvt = IsLock & 1;
  if ( baseUsrSvtData )
  {
    v296 = (UserServantEntity_o *)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_545;
    v297 = *(_OWORD *)&v296->fields.id.fields.fakeValue;
    *(_OWORD *)&v409.fields.currentCryptoKey = *(_OWORD *)&v296->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v409.fields.fakeValue = v297;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v390 = v409;
    v298 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v390, 0LL);
    v299 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
    *(_OWORD *)&v389.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v389.fields.fakeValue = v299;
    if ( v298 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v389, 0LL) )
      this->fields.isBaseSvt = 1;
  }
LABEL_437:
  v300 = this->fields.type;
  if ( v300 == 6 )
  {
    IsLock = (int64_t)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_545;
    IsLock = UserServantEntity__isExceedLvMax((UserServantEntity_o *)IsLock, 0LL);
    v301 = this->fields.userSvtEntity;
    this->fields.isLvExceedMax = IsLock & 1;
    if ( !v301 )
      goto LABEL_545;
    IsLock = UserServantEntity__isLimitCountMax(v301, 0LL);
    v302 = this->fields.userSvtEntity;
    this->fields.isLimitCntMax = IsLock & 1;
    if ( !v302 )
      goto LABEL_545;
    v303 = UserServantEntity__isLevelMax(v302, 0LL);
    IsLock = (int64_t)this->fields.userSvtEntity;
    this->fields.isLvMax = v303;
    this->fields.isParty = v220;
    if ( !IsLock )
      goto LABEL_545;
    IsLock = UserServantEntity__IsLock((UserServantEntity_o *)IsLock, 0LL);
    v304 = this->fields.userSvtEntity;
    this->fields.isLock = IsLock & 1;
    if ( !v304 )
      goto LABEL_545;
    *p_isChoice = UserServantEntity__IsChoice(v304, 0LL);
    IsLock = (int64_t)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_545;
    IsLock = UserServantEntity__IsEventJoin((UserServantEntity_o *)IsLock, 0LL);
    this->fields.isEventJoin = IsLock & 1;
    if ( baseUsrSvtData )
    {
      v305 = (UserServantEntity_o *)*p_userSvtEntity;
      if ( !*p_userSvtEntity )
        goto LABEL_545;
      v306 = *(_OWORD *)&v305->fields.id.fields.fakeValue;
      *(_OWORD *)&v409.fields.currentCryptoKey = *(_OWORD *)&v305->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v409.fields.fakeValue = v306;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v388 = v409;
      v307 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v388, 0LL);
      v308 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
      *(_OWORD *)&v387.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v387.fields.fakeValue = v308;
      if ( v307 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v387, 0LL) )
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
        v310 = (int32_t *)SvtExceedEnt;
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        IsLock = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_CommonConsumeMaster___);
        if ( !IsLock )
          goto LABEL_545;
        IdEntityList = CommonConsumeMaster__GetIdEntityList((CommonConsumeMaster_o *)IsLock, v310[12], 0LL);
        if ( IdEntityList )
        {
          v314 = IdEntityList;
          v315 = (System_Collections_Generic_HashSet_int__o *)sub_B0D974(
                                                                System_Collections_Generic_HashSet_int__TypeInfo,
                                                                v312,
                                                                v313);
          System_Collections_Generic_HashSet_int____ctor(
            v315,
            (const MethodInfo_2C74FFC *)Method_System_Collections_Generic_HashSet_int___ctor___67861296);
          v318 = (System_Collections_Generic_HashSet_int__o *)sub_B0D974(
                                                                System_Collections_Generic_HashSet_int__TypeInfo,
                                                                v316,
                                                                v317);
          System_Collections_Generic_HashSet_int____ctor(
            v318,
            (const MethodInfo_2C74FFC *)Method_System_Collections_Generic_HashSet_int___ctor___67861296);
          v319 = v314->max_length;
          if ( v319 >= 1 )
          {
            v320 = 0LL;
            do
            {
              if ( (unsigned int)v320 >= v319 )
              {
LABEL_555:
                v369 = sub_B0D9A8(IsLock);
                sub_B0D948(v369, 0LL);
              }
              v321 = v314->m_Items[v320];
              if ( !v321 )
                goto LABEL_545;
              if ( !v315 )
                goto LABEL_545;
              IsLock = System_Collections_Generic_HashSet_int___Add(
                         v315,
                         v321->fields.objectId,
                         (const MethodInfo_2C761D8 *)Method_System_Collections_Generic_HashSet_int__Add__);
              if ( !v318 )
                goto LABEL_545;
              IsLock = System_Collections_Generic_HashSet_int___Add(
                         v318,
                         v321->fields.num,
                         (const MethodInfo_2C761D8 *)Method_System_Collections_Generic_HashSet_int__Add__);
              v319 = v314->max_length;
            }
            while ( (int)++v320 < v319 );
          }
          if ( v310[13] >= 1 )
          {
            if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !DataManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            }
            IsLock = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_SvtCoinMaster___);
            v322 = (UserServantEntity_o *)*p_userSvtEntity;
            if ( !*p_userSvtEntity )
              goto LABEL_545;
            v323 = (DataMasterBase_WarMaster__WarEntity__int__o *)IsLock;
            v324 = *(_QWORD *)&v322->fields.svtId.fields.currentCryptoKey;
            v325 = *(_QWORD *)&v322->fields.svtId.fields.fakeValue;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v427.fields.currentCryptoKey = v324;
            *(_QWORD *)&v427.fields.fakeValue = v325;
            IsLock = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v427, 0LL);
            if ( !v323 )
              goto LABEL_545;
            IsLock = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                v323,
                                IsLock,
                                (const MethodInfo_2669BD4 *)Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__GetEntity__);
            if ( !IsLock )
              goto LABEL_545;
            if ( !v315 )
              goto LABEL_545;
            IsLock = System_Collections_Generic_HashSet_int___Add(
                       v315,
                       *(_DWORD *)(IsLock + 24),
                       (const MethodInfo_2C761D8 *)Method_System_Collections_Generic_HashSet_int__Add__);
            if ( !v318 )
              goto LABEL_545;
            System_Collections_Generic_HashSet_int___Add(
              v318,
              v310[13],
              (const MethodInfo_2C761D8 *)Method_System_Collections_Generic_HashSet_int__Add__);
          }
          v326 = this->fields.userSvtEntity;
          v327 = System_Linq_Enumerable__ToArray_int_(
                   (System_Collections_Generic_IEnumerable_TSource__o *)v315,
                   (const MethodInfo_1B560F0 *)Method_System_Linq_Enumerable_ToArray_int___);
          v328 = System_Linq_Enumerable__ToArray_int_(
                   (System_Collections_Generic_IEnumerable_TSource__o *)v318,
                   (const MethodInfo_1B560F0 *)Method_System_Linq_Enumerable_ToArray_int___);
          baseUsrSvtData = v379;
          v220 = v382;
          this->fields.isLvExceedItemNum = CombineUtility__CheckCombineNeedItemsEnough(
                                             v326,
                                             v327,
                                             v328,
                                             *(_DWORD *)(v373 + 96),
                                             v310[8],
                                             0LL);
        }
      }
    }
    v300 = this->fields.type;
  }
  if ( v300 != 8 )
    goto LABEL_530;
  IsLock = (int64_t)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_545;
  this->fields.isFriendshipExceedMax = UserServantEntity__isExceedFriendshipMax((UserServantEntity_o *)IsLock, 0LL);
  v329 = *(_QWORD *)(v378 + 100);
  v330 = *(_QWORD *)(v378 + 108);
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v428.fields.currentCryptoKey = v329;
  *(_QWORD *)&v428.fields.fakeValue = v330;
  IsLock = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v428, 0LL);
  if ( !*p_servantEntity )
    goto LABEL_545;
  maxFriendshipRank = (*p_servantEntity)->fields.maxFriendshipRank;
  v332 = *(_DWORD *)(v378 + 116);
  v333 = this->fields.userSvtEntity;
  this->fields.isParty = v220;
  this->fields.isFriendshipRankMax = (_DWORD)IsLock == v332 + maxFriendshipRank;
  if ( !v333 )
    goto LABEL_545;
  IsLock = UserServantEntity__IsLock(v333, 0LL);
  v334 = this->fields.userSvtEntity;
  this->fields.isLock = IsLock & 1;
  if ( !v334 )
    goto LABEL_545;
  *p_isChoice = UserServantEntity__IsChoice(v334, 0LL);
  IsLock = (int64_t)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_545;
  IsLock = UserServantEntity__IsEventJoin((UserServantEntity_o *)IsLock, 0LL);
  this->fields.isEventJoin = IsLock & 1;
  if ( baseUsrSvtData )
  {
    v335 = (UserServantEntity_o *)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_545;
    v336 = *(_OWORD *)&v335->fields.id.fields.fakeValue;
    *(_OWORD *)&v409.fields.currentCryptoKey = *(_OWORD *)&v335->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v409.fields.fakeValue = v336;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v386 = v409;
    v337 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v386, 0LL);
    v338 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
    *(_OWORD *)&v385.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v385.fields.fakeValue = v338;
    if ( v337 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v385, 0LL) )
      this->fields.isBaseSvt = 1;
  }
  IsLock = (int64_t)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
LABEL_545:
    sub_B0D97C(IsLock);
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
  v339 = (*p_servantEntity)->fields.maxFriendshipRank;
  v340 = *(_DWORD *)(v378 + 116);
  IsLock = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !IsLock )
    goto LABEL_545;
  IsLock = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                      (DataManager_o *)IsLock,
                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_FriendshipMaster___);
  if ( !*p_servantEntity )
    goto LABEL_545;
  if ( !IsLock )
    goto LABEL_545;
  IsLock = (int64_t)FriendshipMaster__GetEntity(
                      (FriendshipMaster_o *)IsLock,
                      (*p_servantEntity)->fields.friendshipId,
                      v339 + v340 + 1,
                      0LL);
  if ( !IsLock )
    goto LABEL_545;
  v341 = IsLock;
  v342 = *(_QWORD *)(IsLock + 32);
  v343 = *(_QWORD *)(IsLock + 40);
  IsLock = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !IsLock )
    goto LABEL_545;
  IsLock = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                      (DataManager_o *)IsLock,
                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !v343 )
    goto LABEL_545;
  if ( *(int *)(v343 + 24) >= 1 )
  {
    v344 = (UserItemMaster_o *)IsLock;
    v345 = 0LL;
    v346 = v343 + 32;
    while ( 1 )
    {
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      IsLock = NetworkManager__get_UserId(0LL);
      if ( v345 >= *(unsigned int *)(v343 + 24) )
        goto LABEL_555;
      if ( !v344 )
        goto LABEL_545;
      IsLock = UserItemMaster__TryGetEntity(v344, &v412, IsLock, *(_DWORD *)(v346 + 4 * v345), 0LL);
      if ( (IsLock & 1) == 0 )
        break;
      if ( v345 >= *(unsigned int *)(v343 + 24) )
        goto LABEL_555;
      if ( !v412 )
        goto LABEL_545;
      if ( *(_DWORD *)(v346 + 4 * v345) == v412->fields.itemId )
      {
        if ( !v342 )
          goto LABEL_545;
        if ( v345 >= *(unsigned int *)(v342 + 24) )
          goto LABEL_555;
        v347 = *(_DWORD *)(v342 + 32 + 4 * v345) <= v412->fields.num;
        goto LABEL_526;
      }
LABEL_527:
      if ( (__int64)++v345 >= *(int *)(v343 + 24) )
        goto LABEL_528;
    }
    v347 = 0;
LABEL_526:
    this->fields.isFriendshipExceedItemNum = v347;
    goto LABEL_527;
  }
LABEL_528:
  if ( *(_DWORD *)(v373 + 96) < *(_DWORD *)(v341 + 28) )
    this->fields.isFriendshipExceedItemNum = 0;
LABEL_530:
  IsLock = (int64_t)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_545;
  IsLock = UserServantEntity__getDispLimitCount((UserServantEntity_o *)IsLock, 0, 0LL);
  v348 = this->fields.userSvtEntity;
  this->fields.dispLimitCount = IsLock;
  if ( !v348 )
    goto LABEL_545;
  SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v348, -1, 0LL);
  this->fields.skillCategoryIdList = SkillCategoryIdList;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.skillCategoryIdList,
    (System_Int32_array **)SkillCategoryIdList,
    v350,
    v351,
    v352,
    v353,
    v354,
    v355);
  IsLock = (int64_t)this->fields.userSvtEntity;
  if ( !IsLock )
    goto LABEL_545;
  TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                   (UserServantEntity_o *)IsLock,
                                   0,
                                   0LL);
  this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.tdCategoryIdList,
    (System_Int32_array **)TreasureDeviceCategoryIdList,
    v357,
    v358,
    v359,
    v360,
    v361,
    v362);
  IsLock = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !IsLock )
    goto LABEL_545;
  IsLock = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                      (DataManager_o *)IsLock,
                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !IsLock )
    goto LABEL_545;
  IsLock = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                      (DataMasterBase_WarMaster__WarEntity__int__o *)IsLock,
                      this->fields.classId,
                      (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !IsLock )
    goto LABEL_545;
  v363 = *(int *)(IsLock + 48);
  v364 = this->fields.servantEntity;
  this->fields.priority = v363;
  this->fields.sortValue1B = v363;
  if ( !v364 )
    goto LABEL_545;
  v365 = (UserServantEntity_o *)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_545;
  this->fields.sortValue2 = ((__int64)v364->fields.collectionNo << 16) | ((unsigned __int64)(unsigned int)this->fields.rarity << 48) | v365->fields.lv;
  v367 = *(_QWORD *)&v365->fields.svtId.fields.currentCryptoKey;
  v366 = *(_QWORD *)&v365->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v429.fields.currentCryptoKey = v367;
  *(_QWORD *)&v429.fields.fakeValue = v366;
  v368 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v429, 0LL);
  IsLock = (int64_t)this->fields.iconLabelInfo1;
  this->fields.sortValue2B = v368;
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
  __int64 v2; // x2
  UserServantEntity_o *userSvtEntity; // x0
  SvtUseSkillData_o *v6; // x19

  if ( (byte_4217317 & 1) == 0 )
  {
    sub_B0D8A4(&SvtUseSkillData_TypeInfo, method);
    byte_4217317 = 1;
  }
  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
    return UserServantEntity__getAppendSkillInfo(userSvtEntity, 0LL);
  v6 = (SvtUseSkillData_o *)sub_B0D974(SvtUseSkillData_TypeInfo, method, v2);
  SvtUseSkillData___ctor(v6, 0LL);
  return v6;
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
  TreasureDvcInfo_o *v10; // x8
  int32_t maxLv; // w8
  TreasureDvcInfo_o *tdInfo; // [xsp+8h] [xbp-18h] BYREF

  tdInfo = 0LL;
  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
  {
    TreasureDeviceInfo = UserServantEntity__getTreasureDeviceInfo(userSvtEntity, &tdInfo, -1, -1, 0, 0LL);
    v10 = tdInfo;
    if ( !tdInfo )
      sub_B0D97C(TreasureDeviceInfo);
    LOBYTE(userSvtEntity) = 1;
    *tdId = tdInfo->fields.id;
    *tdLv = v10->fields.lv;
    maxLv = v10->fields.maxLv;
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
  struct ServantEntity_o *servantEntity; // x8
  int32_t combineLimitId; // w2
  int32_t condTargetId; // w19
  int32_t condType; // w21
  int64_t condNum; // x20
  CombineLimitReleaseEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4217318 & 1) == 0 )
  {
    sub_B0D8A4(&CondType_TypeInfo, method);
    sub_B0D8A4(&Method_DataManager_GetMaster_CombineLimitReleaseMaster___, v3);
    sub_B0D8A4(&DataManager_TypeInfo, v4);
    byte_4217318 = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_CombineLimitReleaseMaster___);
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
    sub_B0D97C(Master_WarQuestSelectionMaster);
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

  if ( (byte_4217316 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, skillInfoList);
    sub_B0D8A4(&SkillInfo___TypeInfo, v5);
    byte_4217316 = 1;
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
    v9 = (SkillInfo_array *)sub_B0D8BC(SkillInfo___TypeInfo, (unsigned int)v8->static_fields->SvtSkillListMax);
    *skillInfoList = v9;
    sub_B0D840((BattleServantConfConponent_o *)skillInfoList, (System_Int32_array **)v9, v10, v11, v12, v13, v14, v15);
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

  if ( (byte_4217306 & 1) == 0 )
  {
    sub_B0D8A4(&FilterKindList_TypeInfo, sort);
    sub_B0D8A4(&ListViewSort_FilterKind___TypeInfo, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v6);
    sub_B0D8A4(&ServantEventBonusFilterController_TypeInfo, v7);
    byte_4217306 = 1;
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
                                        (const MethodInfo_2FB4FE4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                             (const MethodInfo_2FB4FE4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                           (const MethodInfo_2FB4FE4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                           (const MethodInfo_2FB4FE4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
    sub_B0D97C(ClassGroupFilterKindList);
  v17 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           (System_Collections_Generic_List_Voice_BATTLE__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_2FB4FE4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
        sub_B0D840(
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
        sub_B0D840(
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
    ClassGroupFilterKindList = sub_B0D8BC(ListViewSort_FilterKind___TypeInfo, 1LL);
    if ( !ClassGroupFilterKindList )
      goto LABEL_72;
    if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
      goto LABEL_73;
    *(_DWORD *)(ClassGroupFilterKindList + 32) = 50;
    IsUnSelectedAllTargetFilters = ListViewSort__IsUnSelectedAllTargetFilters(
                                     sort,
                                     (ListViewSort_FilterKind_array *)ClassGroupFilterKindList,
                                     0LL);
    ClassGroupFilterKindList = sub_B0D8BC(ListViewSort_FilterKind___TypeInfo, 1LL);
    if ( !ClassGroupFilterKindList )
      goto LABEL_72;
    if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
    {
LABEL_73:
      v43 = sub_B0D9A8(ClassGroupFilterKindList);
      sub_B0D948(v43, 0LL);
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
  ClassGroupFilterKindList = sub_B0D8BC(ListViewSort_FilterKind___TypeInfo, 1LL);
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
                                           (const MethodInfo_2FB4FE4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
  const MethodInfo *v43; // x1
  bool CanNotSelect; // w0
  FilterKindList_c *v45; // x0
  ListViewSort_FilterKind_array *v46; // x21
  __int64 v48; // x0

  v4 = this;
  if ( (byte_4217307 & 1) == 0 )
  {
    sub_B0D8A4(&FilterKindList_TypeInfo, sort);
    sub_B0D8A4(&ListViewSort_FilterKind___TypeInfo, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v6);
    this = (CombineServantListViewItem_o *)sub_B0D8A4(&ServantEventBonusFilterController_TypeInfo, v7);
    byte_4217307 = 1;
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
                                           (const MethodInfo_2FB4FE4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                           (const MethodInfo_2FB4FE4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v12, 0LL) )
    goto LABEL_92;
  this = (CombineServantListViewItem_o *)sub_B0D8BC(ListViewSort_FilterKind___TypeInfo, 1LL);
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
                                           (const MethodInfo_2FB4FE4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                           (const MethodInfo_2FB4FE4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
    sub_B0D97C(this);
  v19 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           (System_Collections_Generic_List_Voice_BATTLE__o *)this,
                                           (const MethodInfo_2FB4FE4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
        sub_B0D840(
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
        sub_B0D840(
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
    this = (CombineServantListViewItem_o *)sub_B0D8BC(ListViewSort_FilterKind___TypeInfo, 1LL);
    if ( !this )
      goto LABEL_88;
    if ( !this->fields.sortIndex )
      goto LABEL_89;
    LODWORD(this->fields.sortValue0) = 50;
    IsUnSelectedAllTargetFilters = ListViewSort__IsUnSelectedAllTargetFilters(
                                     sort,
                                     (ListViewSort_FilterKind_array *)this,
                                     0LL);
    this = (CombineServantListViewItem_o *)sub_B0D8BC(ListViewSort_FilterKind___TypeInfo, 1LL);
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
  this = (CombineServantListViewItem_o *)sub_B0D8BC(ListViewSort_FilterKind___TypeInfo, 1LL);
  if ( !this )
    goto LABEL_88;
  if ( !this->fields.sortIndex )
    goto LABEL_89;
  LODWORD(this->fields.sortValue0) = 39;
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)this, 0LL) )
  {
    this = (CombineServantListViewItem_o *)sub_B0D8BC(ListViewSort_FilterKind___TypeInfo, 1LL);
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
    v48 = sub_B0D9A8(this);
    sub_B0D948(v48, 0LL);
  }
LABEL_54:
  if ( ListViewSort__GetFilter(sort, 39, 0LL) )
    v21 = v4->fields.isSwapChoice ^ v4->fields.isChoice;
  else
    v21 = 0;
  if ( ListViewSort__GetFilter(sort, 29, 0LL) )
  {
    CanNotSelect = CombineServantListViewItem__get_IsCanNotSelect(v4, v43);
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
  v45 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v45 = FilterKindList_TypeInfo;
  }
  this = (CombineServantListViewItem_o *)v45->static_fields->RarityFilterKindList;
  if ( !this )
    goto LABEL_88;
  v46 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           (System_Collections_Generic_List_Voice_BATTLE__o *)this,
                                           (const MethodInfo_2FB4FE4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v46, 0LL)
      || ListViewSort__IsSelectedAllTargetFilters(sort, v46, 0LL)
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

  if ( (byte_4217305 & 1) == 0 )
  {
    sub_B0D8A4(&FilterKindList_TypeInfo, sort);
    sub_B0D8A4(&ListViewSort_FilterKind___TypeInfo, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v6);
    sub_B0D8A4(&ServantEventBonusFilterController_TypeInfo, v7);
    byte_4217305 = 1;
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
                                        (const MethodInfo_2FB4FE4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                             (const MethodInfo_2FB4FE4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                           (const MethodInfo_2FB4FE4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
    sub_B0D97C(ClassGroupFilterKindList);
  v15 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           (System_Collections_Generic_List_Voice_BATTLE__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_2FB4FE4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
        sub_B0D840(
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
        sub_B0D840(
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
    ClassGroupFilterKindList = sub_B0D8BC(ListViewSort_FilterKind___TypeInfo, 1LL);
    if ( !ClassGroupFilterKindList )
      goto LABEL_66;
    if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
      goto LABEL_67;
    *(_DWORD *)(ClassGroupFilterKindList + 32) = 50;
    IsUnSelectedAllTargetFilters = ListViewSort__IsUnSelectedAllTargetFilters(
                                     sort,
                                     (ListViewSort_FilterKind_array *)ClassGroupFilterKindList,
                                     0LL);
    ClassGroupFilterKindList = sub_B0D8BC(ListViewSort_FilterKind___TypeInfo, 1LL);
    if ( !ClassGroupFilterKindList )
      goto LABEL_66;
    if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
    {
LABEL_67:
      v41 = sub_B0D9A8(ClassGroupFilterKindList);
      sub_B0D948(v41, 0LL);
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
  ClassGroupFilterKindList = sub_B0D8BC(ListViewSort_FilterKind___TypeInfo, 1LL);
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
                                           (const MethodInfo_2FB4FE4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
    sub_B0D97C(0LL);
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
    sub_B0D97C(0LL);
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

  if ( (byte_4217304 & 1) == 0 )
  {
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
    byte_4217304 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame || (userSvtEntity = this->fields.userSvtEntity) == 0LL )
    sub_B0D97C(SelfUserGame);
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
  this->fields.isPush = pushUserSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v7, 0LL);
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
  __int64 v15; // x1
  __int64 v16; // x2
  int32_t v17; // w21
  struct System_Int32_array *svtUseSkillIdList; // x8
  __int64 v19; // x22
  unsigned __int64 max_length; // x9
  unsigned __int64 v21; // x25
  struct System_Int32_array *v22; // x8
  struct System_Int32_array *svtSkillLvList; // x8
  struct System_Int32_array *v24; // x8
  __int64 v25; // x27
  unsigned __int64 v26; // x9
  unsigned __int64 v27; // x22
  struct System_Int32_array *v28; // x8
  struct UserServantEntity_o *v29; // x8
  CombineAppendPassiveSkillMaster_o *v30; // x23
  __int64 v31; // x24
  __int64 v32; // x25
  struct System_Int32_array *svtSkillNumsList; // x8
  struct System_Int32_array *v34; // x9
  struct System_Int32_array *v35; // x8
  struct UserServantEntity_o *v36; // x8
  SvtAppendPassiveSkillUnlockMaster_o *v37; // x23
  __int64 v38; // x24
  __int64 v39; // x25
  struct System_Int32_array *v40; // x8
  __int64 v41; // x0
  System_Collections_Generic_List_int__o *v42; // [xsp+0h] [xbp-60h]
  CombineAppendPassiveSkillEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v44; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16

  if ( (byte_4217303 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_CombineAppendPassiveSkillMaster___, method);
    sub_B0D8A4(&Method_DataManager_GetMaster_SkillMaster___, v3);
    sub_B0D8A4(&Method_DataManager_GetMaster_SvtAppendPassiveSkillUnlockMaster___, v4);
    sub_B0D8A4(&DataManager_TypeInfo, v5);
    sub_B0D8A4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v6);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Any_int___, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v9);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v10);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    byte_4217303 = 1;
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
  v17 = *((_DWORD *)userSvtEntity + 24);
  this->fields.isAppendSkillLvMax = 1;
  svtUseSkillIdList = v14->fields.svtUseSkillIdList;
  if ( !svtUseSkillIdList )
    goto LABEL_69;
  v19 = 8LL;
  while ( 1 )
  {
    max_length = svtUseSkillIdList->max_length;
    v21 = v19 - 8;
    if ( v19 - 8 >= (int)max_length )
      break;
    if ( v21 >= max_length )
      goto LABEL_72;
    if ( *((int *)&svtUseSkillIdList->obj.klass + v19) >= 1 )
    {
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      userSvtEntity = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_SkillMaster___);
      v22 = v14->fields.svtUseSkillIdList;
      if ( !v22 )
        goto LABEL_69;
      if ( v21 >= v22->max_length )
        goto LABEL_72;
      if ( !userSvtEntity )
        goto LABEL_69;
      userSvtEntity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                        (DataMasterBase_WarMaster__WarEntity__int__o *)userSvtEntity,
                        *((_DWORD *)&v22->obj.klass + v19),
                        (const MethodInfo_2669BD4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
      svtSkillLvList = v14->fields.svtSkillLvList;
      if ( !svtSkillLvList )
        goto LABEL_69;
      if ( v21 >= svtSkillLvList->max_length )
      {
LABEL_72:
        v41 = sub_B0D9A8(userSvtEntity);
        sub_B0D948(v41, 0LL);
      }
      if ( !userSvtEntity )
        goto LABEL_69;
      if ( *((_DWORD *)&svtSkillLvList->obj.klass + v19) < *((_DWORD *)userSvtEntity + 10) )
      {
        this->fields.isAppendSkillLvMax = 0;
        break;
      }
      svtUseSkillIdList = v14->fields.svtUseSkillIdList;
    }
    ++v19;
    if ( !svtUseSkillIdList )
      goto LABEL_69;
  }
  v42 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, v15, v16);
  System_Collections_Generic_List_int____ctor(
    v42,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  v24 = v14->fields.svtUseSkillIdList;
  if ( !v24 )
LABEL_69:
    sub_B0D97C(userSvtEntity);
  v25 = 8LL;
  while ( 1 )
  {
    v26 = v24->max_length;
    v27 = v25 - 8;
    if ( v25 - 8 >= (int)v26 )
      break;
    if ( v27 >= v26 )
      goto LABEL_72;
    if ( *((int *)&v24->obj.klass + v25) < 1 )
      goto LABEL_68;
    v28 = v14->fields.svtSkillLvList;
    if ( !v28 )
      goto LABEL_69;
    if ( v27 >= v28->max_length )
      goto LABEL_72;
    if ( *((_DWORD *)&v28->obj.klass + v25) )
    {
      if ( (WORD1(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      userSvtEntity = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_CombineAppendPassiveSkillMaster___);
      v29 = this->fields.userSvtEntity;
      if ( !v29 )
        goto LABEL_69;
      v30 = (CombineAppendPassiveSkillMaster_o *)userSvtEntity;
      v32 = *(_QWORD *)&v29->fields.svtId.fields.currentCryptoKey;
      v31 = *(_QWORD *)&v29->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v44.fields.currentCryptoKey = v32;
      *(_QWORD *)&v44.fields.fakeValue = v31;
      userSvtEntity = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v44, 0LL);
      svtSkillNumsList = v14->fields.svtSkillNumsList;
      if ( !svtSkillNumsList )
        goto LABEL_69;
      if ( v27 >= svtSkillNumsList->max_length )
        goto LABEL_72;
      v34 = v14->fields.svtSkillLvList;
      if ( !v34 )
        goto LABEL_69;
      if ( v27 >= v34->max_length )
        goto LABEL_72;
      if ( !v30 )
        goto LABEL_69;
      userSvtEntity = (void *)CombineAppendPassiveSkillMaster__TryGetEntityWithTryNum(
                                v30,
                                &entity,
                                (int32_t)userSvtEntity,
                                *((_DWORD *)&svtSkillNumsList->obj.klass + v25),
                                *((_DWORD *)&v34->obj.klass + v25),
                                0LL);
      if ( ((unsigned __int8)userSvtEntity & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_69;
        userSvtEntity = (void *)CombineUtility__CheckCombineNeedItemsEnough(
                                  this->fields.userSvtEntity,
                                  entity->fields.itemIds,
                                  entity->fields.itemNums,
                                  v17,
                                  entity->fields.qp,
                                  0LL);
        if ( ((unsigned __int8)userSvtEntity & 1) != 0 )
        {
          v35 = v14->fields.svtUseSkillIdList;
          if ( !v35 )
            goto LABEL_69;
          if ( v27 >= v35->max_length )
            goto LABEL_72;
          userSvtEntity = this->fields.enableAppendSkillUp;
          if ( !userSvtEntity )
            goto LABEL_69;
LABEL_67:
          System_Collections_Generic_List_int___Add(
            (System_Collections_Generic_List_int__o *)userSvtEntity,
            *((_DWORD *)&v35->obj.klass + v25),
            (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
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
      userSvtEntity = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_SvtAppendPassiveSkillUnlockMaster___);
      v36 = this->fields.userSvtEntity;
      if ( !v36 )
        goto LABEL_69;
      v37 = (SvtAppendPassiveSkillUnlockMaster_o *)userSvtEntity;
      v39 = *(_QWORD *)&v36->fields.svtId.fields.currentCryptoKey;
      v38 = *(_QWORD *)&v36->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v45.fields.currentCryptoKey = v39;
      *(_QWORD *)&v45.fields.fakeValue = v38;
      userSvtEntity = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v45, 0LL);
      v40 = v14->fields.svtSkillNumsList;
      if ( !v40 )
        goto LABEL_69;
      if ( v27 >= v40->max_length )
        goto LABEL_72;
      if ( !v37 )
        goto LABEL_69;
      userSvtEntity = SvtAppendPassiveSkillUnlockMaster__GetEntity(
                        v37,
                        (int32_t)userSvtEntity,
                        *((_DWORD *)&v40->obj.klass + v25),
                        0LL);
      if ( userSvtEntity )
      {
        userSvtEntity = (void *)CombineUtility__CheckCombineNeedItemsEnough(
                                  this->fields.userSvtEntity,
                                  *((System_Int32_array **)userSvtEntity + 3),
                                  *((System_Int32_array **)userSvtEntity + 4),
                                  v17,
                                  0,
                                  0LL);
        if ( ((unsigned __int8)userSvtEntity & 1) != 0 )
        {
          v35 = v14->fields.svtUseSkillIdList;
          if ( !v35 )
            goto LABEL_69;
          if ( v27 >= v35->max_length )
            goto LABEL_72;
          userSvtEntity = v42;
          if ( !v42 )
            goto LABEL_69;
          goto LABEL_67;
        }
      }
    }
LABEL_68:
    v24 = v14->fields.svtUseSkillIdList;
    ++v25;
    if ( !v24 )
      goto LABEL_69;
  }
  this->fields.isAppendSkillUpItemNum = System_Linq_Enumerable__Any_int_(
                                          (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.enableAppendSkillUp,
                                          (const MethodInfo_171921C *)Method_System_Linq_Enumerable_Any_int___);
  this->fields.isAppendSkillOpenItemNum = System_Linq_Enumerable__Any_int_(
                                            (System_Collections_Generic_IEnumerable_TSource__o *)v42,
                                            (const MethodInfo_171921C *)Method_System_Linq_Enumerable_Any_int___);
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
  int32_t size; // w8
  __int64 v12; // x22
  unsigned int v13; // w24
  __int64 v14; // x8
  int v15; // w8
  int monitor; // w23
  unsigned int v17; // w21
  EventMissionProgressRequest_Argument_ProgressData_o *v18; // x8
  EventMissionProgressRequest_Argument_ProgressData_c *klass; // x8
  int namespaze; // w9
  unsigned int v21; // w10
  EventMissionProgressRequest_Argument_ProgressData_o *v22; // x8
  EventMissionProgressRequest_Argument_ProgressData_o *v23; // x8
  __int64 v24; // x0

  if ( (byte_4217309 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__, eventCampaignEntities);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Count__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__, v7);
    sub_B0D8A4(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo, v8);
    byte_4217309 = 1;
  }
  this->fields.isCombineExpCampaignTarget = 0;
  this->fields.combineExpCampaignValue = 0.0;
  if ( !eventCampaignEntities || this->fields.type )
    return;
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                 System_Collections_Generic_List_EventCampaignEntity__TypeInfo,
                                                                                                 eventCampaignEntities,
                                                                                                 method);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
  size = eventCampaignEntities->fields._size;
  if ( size >= 1 )
  {
    v12 = 4LL;
    while ( 1 )
    {
      v13 = v12 - 4;
      if ( size <= (unsigned int)(v12 - 4) )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v14 = *((_QWORD *)&eventCampaignEntities->fields._items->obj.klass + v12);
      if ( !v14 )
        break;
      if ( *(_DWORD *)(v14 + 20) == 2 )
        goto LABEL_14;
      if ( eventCampaignEntities->fields._size <= v13 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      if ( *(_DWORD *)(v14 + 20) == 27 )
      {
LABEL_14:
        if ( eventCampaignEntities->fields._size <= v13 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        if ( !v9 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v9,
          *((EventMissionProgressRequest_Argument_ProgressData_o **)&eventCampaignEntities->fields._items->obj.klass
          + v12),
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
      }
      size = eventCampaignEntities->fields._size;
      if ( (int)++v12 - 4 >= size )
        goto LABEL_19;
    }
LABEL_54:
    sub_B0D97C(userSvtEntity);
  }
LABEL_19:
  if ( !v9 )
    return;
  v15 = v9->fields._size;
  if ( v15 < 1 )
  {
    monitor = 0;
    goto LABEL_52;
  }
  monitor = 0;
  v17 = 0;
  while ( 1 )
  {
    if ( v15 <= v17 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    v18 = v9->fields._items->m_Items[v17];
    if ( !v18 )
      goto LABEL_54;
    if ( v18->fields.missionConditionDetailId == 27 )
      break;
    if ( v9->fields._size <= v17 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    klass = v18[1].klass;
    if ( !klass )
      goto LABEL_54;
    namespaze = (int)klass->_1.namespaze;
    if ( namespaze >= 1 )
    {
      v21 = 0;
      while ( 1 )
      {
        if ( v21 >= namespaze )
        {
          v24 = sub_B0D9A8(userSvtEntity);
          sub_B0D948(v24, 0LL);
        }
        if ( this->fields.svtId == *((_DWORD *)&klass->_1.byval_arg.data + (int)v21) )
          break;
        if ( (int)++v21 >= namespaze )
          goto LABEL_45;
      }
      this->fields.isCombineExpCampaignTarget = 1;
      if ( v9->fields._size <= v17 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v22 = v9->fields._items->m_Items[v17];
      if ( !v22 )
        goto LABEL_54;
      if ( SLODWORD(v22[1].monitor) > monitor )
      {
        if ( v9->fields._size <= v17 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        monitor = (int)v22[1].monitor;
      }
    }
LABEL_45:
    v15 = v9->fields._size;
    if ( (int)++v17 >= v15 )
      goto LABEL_52;
  }
  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_54;
  userSvtEntity = (UserServantEntity_o *)UserServantEntity__IsExchangeSvt(userSvtEntity, 0LL);
  if ( ((unsigned __int8)userSvtEntity & 1) == 0 )
    goto LABEL_45;
  this->fields.isCombineExpCampaignTarget = 1;
  if ( v9->fields._size <= v17 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  v23 = v9->fields._items->m_Items[v17];
  if ( !v23 )
    goto LABEL_54;
  monitor = (int)v23[1].monitor;
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
  sub_B0D840(
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
  UserServantEntity_o *userSvtEntity; // x8
  struct UserServantEntity_o *v12; // x8
  __int64 v13; // x21
  __int64 v14; // x8
  __int64 v15; // x22
  unsigned __int64 v16; // x20
  int32_t v17; // w23
  int v18; // w19
  __int64 v19; // x8
  CombineServantListViewItem_o *v20; // x19
  CombineSkillMaster_o *v21; // x20
  unsigned __int64 v22; // x27
  char v23; // w26
  int32_t v24; // w24
  struct ServantEntity_o *servantEntity; // x8
  CombineSkillMaster_o *v26; // x21
  struct System_Int32_array *itemIds; // x20
  struct System_Int32_array *itemNums; // x28
  int max_length; // w8
  UserItemMaster_o *v30; // x25
  il2cpp_array_size_t v31; // w9
  il2cpp_array_size_t v32; // w23
  struct UserServantEntity_o *v33; // x8
  __int128 v34; // q1
  int32_t v35; // w26
  int32_t v36; // w19
  struct System_Collections_Generic_List_int__o **p_enableSkillUp; // x8
  struct System_Collections_Generic_List_int__o *v38; // x8
  __int64 v39; // x0
  __int64 *v40; // [xsp+0h] [xbp-C0h]
  __int64 v41; // [xsp+8h] [xbp-B8h]
  __int64 v42; // [xsp+10h] [xbp-B0h]
  CombineServantListViewItem_o *v43; // [xsp+18h] [xbp-A8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v44; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v45; // [xsp+40h] [xbp-80h]
  UserItemEntity_o *v46; // [xsp+60h] [xbp-60h] BYREF
  CombineSkillEntity_o *entity; // [xsp+68h] [xbp-58h] BYREF

  if ( (byte_4217302 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_CombineSkillMaster___, method);
    sub_B0D8A4(&Method_DataManager_GetMasterData_SkillMaster___, v3);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserItemMaster___, v4);
    sub_B0D8A4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__get_Count__, v7);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4217302 = 1;
  }
  entity = 0LL;
  v46 = 0LL;
  SelfUserGame = (__int64)UserGameMaster__getSelfUserGame(0LL);
  userSvtEntity = this->fields.userSvtEntity;
  v42 = SelfUserGame;
  if ( !userSvtEntity )
    goto LABEL_60;
  SelfUserGame = (__int64)UserServantEntity__getSkillIdList(userSvtEntity, -1, -1, 1, 0LL);
  v12 = this->fields.userSvtEntity;
  if ( !v12 )
    goto LABEL_60;
  v13 = SelfUserGame;
  SelfUserGame = ((__int64 (__fastcall *)(struct UserServantEntity_o *, void *))v12->klass->vtable._6_getSkillLevelList.method)(
                   this->fields.userSvtEntity,
                   v12->klass[1]._1.image);
  v43 = this;
  this->fields.isSkillLvMax = 1;
  if ( !v13 )
    goto LABEL_60;
  v14 = *(_QWORD *)(v13 + 24);
  v15 = SelfUserGame;
  if ( (int)v14 >= 1 )
  {
    v16 = 0LL;
    while ( 1 )
    {
      if ( v16 >= (unsigned int)v14 )
        goto LABEL_61;
      if ( !v15 )
        goto LABEL_60;
      if ( v16 >= *(unsigned int *)(v15 + 24) )
      {
LABEL_61:
        v39 = sub_B0D9A8(SelfUserGame);
        sub_B0D948(v39, 0LL);
      }
      v17 = *(_DWORD *)(v13 + 32 + 4 * v16);
      if ( v17 >= 1 )
      {
        v18 = *(_DWORD *)(v15 + 32 + 4 * v16);
        SelfUserGame = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !SelfUserGame )
          goto LABEL_60;
        SelfUserGame = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)SelfUserGame,
                                  (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_SkillMaster___);
        if ( !SelfUserGame )
          goto LABEL_60;
        SelfUserGame = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                  (DataMasterBase_WarMaster__WarEntity__int__o *)SelfUserGame,
                                  v17,
                                  (const MethodInfo_2669BD4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        if ( !SelfUserGame )
          goto LABEL_60;
        if ( v18 < *(_DWORD *)(SelfUserGame + 40) )
          break;
      }
      LODWORD(v14) = *(_DWORD *)(v13 + 24);
      if ( (__int64)++v16 >= (int)v14 )
        goto LABEL_19;
    }
    v43->fields.isSkillLvMax = 0;
  }
LABEL_19:
  SelfUserGame = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_60;
  SelfUserGame = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)SelfUserGame,
                            (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_CombineSkillMaster___);
  v19 = *(_QWORD *)(v13 + 24);
  v20 = v43;
  if ( (int)v19 <= 0 )
  {
    p_enableSkillUp = &v43->fields.enableSkillUp;
  }
  else
  {
    v21 = (CombineSkillMaster_o *)SelfUserGame;
    v22 = 0LL;
    v23 = 0;
    v40 = (__int64 *)&v43->fields.enableSkillUp;
    v41 = v13;
    do
    {
      if ( v22 >= (unsigned int)v19 )
        goto LABEL_61;
      if ( !v15 )
        goto LABEL_60;
      if ( v22 >= *(unsigned int *)(v15 + 24) )
        goto LABEL_61;
      v24 = *(_DWORD *)(v13 + 4 * v22 + 32);
      if ( v24 >= 1 )
      {
        servantEntity = v20->fields.servantEntity;
        if ( !servantEntity || !v21 )
          goto LABEL_60;
        SelfUserGame = CombineSkillMaster__TryGetEntity(
                         v21,
                         &entity,
                         servantEntity->fields.combineSkillId,
                         *(_DWORD *)(v15 + 4 * v22 + 32),
                         0LL);
        if ( (SelfUserGame & 1) != 0 )
        {
          if ( !entity )
            goto LABEL_60;
          v26 = v21;
          itemIds = entity->fields.itemIds;
          itemNums = entity->fields.itemNums;
          SelfUserGame = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !SelfUserGame )
            goto LABEL_60;
          SelfUserGame = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    (DataManager_o *)SelfUserGame,
                                    (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserItemMaster___);
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
              v33 = v43->fields.userSvtEntity;
              if ( !v33 )
                goto LABEL_60;
              v34 = *(_OWORD *)&v33->fields.userId.fields.fakeValue;
              v35 = itemIds->m_Items[v31 + 1];
              v36 = itemNums->m_Items[v31 + 1];
              *(_OWORD *)&v45.fields.currentCryptoKey = *(_OWORD *)&v33->fields.userId.fields.currentCryptoKey;
              *(_OWORD *)&v45.fields.fakeValue = v34;
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
              }
              v44 = v45;
              SelfUserGame = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v44, 0LL);
              if ( !v30 )
                goto LABEL_60;
              SelfUserGame = UserItemMaster__TryGetEntity(v30, &v46, SelfUserGame, v35, 0LL);
              if ( (SelfUserGame & 1) == 0 )
                break;
              if ( !v46 )
                goto LABEL_60;
              if ( v36 > v46->fields.num )
                break;
              max_length = itemIds->max_length;
              v31 = v32 + 1;
              if ( (int)(v32 + 1) >= max_length )
              {
                v23 = 1;
                goto LABEL_48;
              }
            }
            v23 = 0;
          }
LABEL_48:
          if ( !v42 )
            goto LABEL_60;
          v20 = v43;
          if ( !entity )
            goto LABEL_60;
          v21 = v26;
          v13 = v41;
          if ( *(_DWORD *)(v42 + 96) < entity->fields.qp || (v23 & 1) == 0 )
          {
            v23 = 0;
          }
          else
          {
            SelfUserGame = *v40;
            if ( !*v40 )
              goto LABEL_60;
            System_Collections_Generic_List_int___Add(
              (System_Collections_Generic_List_int__o *)SelfUserGame,
              v24,
              (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
            v23 = 1;
          }
        }
      }
      LODWORD(v19) = *(_DWORD *)(v13 + 24);
      ++v22;
    }
    while ( (__int64)v22 < (int)v19 );
    p_enableSkillUp = &v43->fields.enableSkillUp;
  }
  v38 = *p_enableSkillUp;
  if ( !v38 || !v20 )
LABEL_60:
    sub_B0D97C(SelfUserGame);
  v20->fields.isSkillUpItemNum = v38->fields._size > 0;
}


bool __fastcall CombineServantListViewItem__SetSortValue(
        CombineServantListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
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
  struct ListViewManager_o *v14; // x21
  int32_t *p_bonusKind2Id; // x8
  int32_t *v16; // x8
  int32_t v17; // w2
  bool EventUpVal_21263896; // w0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  int32_t svtId; // w22
  ServantFilterMaster_o *v21; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // kr00_16
  int32_t bonusKind2Id; // w1
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v25; // q1
  int32_t bonusKindId; // w22
  int64_t v27; // x0
  const MethodInfo *v28; // x3
  const MethodInfo *v29; // x2
  _BOOL4 isSwapLock; // w23
  _BOOL4 isLock; // w24
  int v32; // w21
  const MethodInfo *v33; // x1
  const MethodInfo *v34; // x2
  int64_t *p_sortValue0; // x22
  __int64 v36; // x8
  unsigned int type; // w8
  __int64 v38; // x8
  int32_t v39; // w8
  int v40; // w23
  __int64 v41; // x8
  const MethodInfo *v42; // x1
  int32_t rarity; // w8
  __int64 v44; // x8
  struct UserServantEntity_o *v45; // x8
  __int128 v46; // q1
  struct UserServantEntity_o *v47; // x8
  IconLabelInfo_o *iconLabelInfo1; // x20
  int32_t amountSortValue; // w21
  struct UserServantEntity_o *v50; // x8
  int32_t v51; // w8
  IconLabelInfo_o *iconLabelInfo2; // x20
  struct UserServantEntity_o *v53; // x8
  unsigned int v54; // w8
  IconLabelInfo_o *v55; // x20
  struct UserServantEntity_o *v56; // x8
  int32_t adjustHp; // w3
  int32_t hp; // w2
  int32_t v59; // w1
  struct UserServantEntity_o *v60; // x8
  IconLabelInfo_o *v61; // x19
  struct ServantEntity_o *servantEntity; // x8
  __int64 v63; // x10
  struct ServantEntity_o *v64; // x8
  __int64 collectionNo; // x10
  struct UserServantEntity_o *v66; // x8
  int32_t lv; // w20
  int64_t friendship; // x2
  int32_t friendshipMax; // w3
  int32_t v70; // w1
  int32_t v71; // w21
  __int64 v72; // x9
  bool v73; // zf
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v75; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v76; // [xsp+30h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v77; // [xsp+50h] [xbp-60h]
  int32_t tdMaxLv[2]; // [xsp+78h] [xbp-38h] BYREF

  v4 = this;
  if ( (byte_4217308 & 1) == 0 )
  {
    sub_B0D8A4(&CombineServantListViewManager_TypeInfo, sort);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantFilterMaster___, v5);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v7);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    this = (CombineServantListViewItem_o *)sub_B0D8A4(&TutorialFlag_TypeInfo, v9);
    byte_4217308 = 1;
  }
  *(_QWORD *)tdMaxLv = 0LL;
  *(_WORD *)&v4->fields.isTermination = 0;
  v4->fields.sortValue1 = -1LL;
  *(_WORD *)&v4->fields.isDispAtkStatusUpInfo = 0;
  if ( !sort )
    goto LABEL_254;
  if ( !sort->fields.isBonusKind )
    goto LABEL_41;
  if ( v4->fields.isBaseSvt )
    goto LABEL_43;
  this = (CombineServantListViewItem_o *)ListViewItem__get_IsSelect((ListViewItem_o *)v4, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
    goto LABEL_41;
  bonusKind2 = sort->fields.bonusKind2;
  switch ( bonusKind2 )
  {
    case 1:
      if ( v4->fields.bonusKind == 1 )
      {
        p_bonusKind2Id = &sort->fields.bonusKind2Id;
        if ( v4->fields.bonusKindId == sort->fields.bonusKind2Id )
          goto LABEL_40;
      }
      else
      {
        p_bonusKind2Id = &sort->fields.bonusKind2Id;
      }
      v4->fields.bonusKind = 1;
      v17 = *p_bonusKind2Id;
      this = (CombineServantListViewItem_o *)v4->fields.userSvtEntity;
      v4->fields.bonusKindId = *p_bonusKind2Id;
      if ( !this )
        goto LABEL_254;
      EventUpVal_21263896 = UserServantEntity__getEventUpVal_21263896(
                              (UserServantEntity_o *)this,
                              v4->fields.setupInfo,
                              v17,
                              0LL);
LABEL_29:
      v4->fields.isEventUpVal = EventUpVal_21263896;
      if ( !EventUpVal_21263896 )
        goto LABEL_125;
      break;
    case 2:
      if ( v4->fields.bonusKind == 2 )
      {
        v16 = &sort->fields.bonusKind2Id;
        if ( v4->fields.bonusKindId == sort->fields.bonusKind2Id )
          goto LABEL_40;
      }
      else
      {
        v16 = &sort->fields.bonusKind2Id;
      }
      v4->fields.bonusKind = 2;
      v4->fields.bonusKindId = *v16;
      this = (CombineServantListViewItem_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_254;
      MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             (DataManager_o *)this,
                                             (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantFilterMaster___);
      svtId = v4->fields.svtId;
      v21 = (ServantFilterMaster_o *)MasterData_WarQuestSelectionMaster;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(svtId, 0LL);
      this = *(CombineServantListViewItem_o **)&v22.fields.currentCryptoKey;
      if ( !v21 )
        goto LABEL_254;
      EventUpVal_21263896 = ServantFilterMaster__IsEnableServant(v21, v22, v4->fields.bonusKindId, 0LL);
      goto LABEL_29;
    case 3:
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
      v4->fields.bonusKind = 3;
      bonusKind2Id = sort->fields.bonusKind2Id;
      v4->fields.bonusKindId = bonusKind2Id;
      if ( !v14 )
        goto LABEL_254;
      this = (CombineServantListViewItem_o *)CombineServantListViewManager__IsLargeSuccessCampaignServantId(
                                               (CombineServantListViewManager_o *)v14,
                                               bonusKind2Id,
                                               v4->fields.svtId,
                                               v10);
      userSvtEntity = v4->fields.userSvtEntity;
      v4->fields.isEventUpVal = (unsigned __int8)this & 1;
      if ( !userSvtEntity )
        goto LABEL_254;
      v25 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
      bonusKindId = v4->fields.bonusKindId;
      *(_OWORD *)&v77.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v77.fields.fakeValue = v25;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v76 = v77;
      v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v76, 0LL);
      if ( !CombineServantListViewManager__IsExchangeSvtExist(
              (CombineServantListViewManager_o *)v14,
              bonusKindId,
              v27,
              v28) )
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
    v32 = v4->fields.isSwapChoice ^ v4->fields.isChoice;
    IconLabelInfo__Clear((IconLabelInfo_o *)this, 0LL);
    v4->fields.sortValue0 = 0LL;
    p_sortValue0 = &v4->fields.sortValue0;
    v4->fields.sortValue0B = 0LL;
    if ( !sort->fields.isSmartSort )
    {
      if ( !((v32 ^ 1) & 1 | !sort->fields.isChoiceSort) )
      {
        type = v4->fields.type;
        if ( type <= 0xB )
        {
          if ( ((1 << type) & 0xFDD) != 0 )
            v38 = 10LL;
          else
LABEL_81:
            v38 = -10LL;
          *p_sortValue0 = v38;
        }
      }
LABEL_153:
      this = (CombineServantListViewItem_o *)(&dword_0 + 1);
      switch ( sort->fields.sortKind )
      {
        case 0:
          this = (CombineServantListViewItem_o *)v4->fields.userSvtEntity;
          v44 = !v4->fields.isParty;
          goto LABEL_201;
        case 1:
          v45 = v4->fields.userSvtEntity;
          if ( !v45 )
            break;
          v46 = *(_OWORD *)&v45->fields.id.fields.fakeValue;
          *(_OWORD *)&v77.fields.currentCryptoKey = *(_OWORD *)&v45->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v77.fields.fakeValue = v46;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v75 = v77;
          this = (CombineServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(
                                                   &v75,
                                                   0LL);
          v47 = v4->fields.userSvtEntity;
          v4->fields.sortValue1 = (int64_t)this;
          if ( !v47 )
            break;
          this = (CombineServantListViewItem_o *)v4->fields.iconLabelInfo1;
          if ( !this )
            break;
          IconLabelInfo__SetTime((IconLabelInfo_o *)this, 49, v47->fields.createdAt, 0, 0, 0, 0LL);
          goto LABEL_183;
        case 2:
          this = (CombineServantListViewItem_o *)v4->fields.userSvtEntity;
          v4->fields.sortValue1 = v4->fields.rarity;
          if ( !this )
            break;
          iconLabelInfo1 = v4->fields.iconLabelInfo1;
          amountSortValue = this->fields.amountSortValue;
          this = (CombineServantListViewItem_o *)UserServantEntity__getLevelMax((UserServantEntity_o *)this, 0LL);
          v50 = v4->fields.userSvtEntity;
          if ( !v50 || !iconLabelInfo1 )
            break;
          IconLabelInfo__Set_26821248(iconLabelInfo1, 2, amountSortValue, (int32_t)this, 0, 0, 0, v50->fields.lv, 0LL);
          v51 = v4->fields.type;
          if ( v51 != 10 && v51 != 7 )
            goto LABEL_223;
          this = (CombineServantListViewItem_o *)v4->fields.userSvtEntity;
          if ( !this )
            break;
          iconLabelInfo2 = v4->fields.iconLabelInfo2;
          this = (CombineServantListViewItem_o *)UserServantEntity__getRarity((UserServantEntity_o *)this, 0LL);
          v53 = v4->fields.userSvtEntity;
          if ( !v53 || !iconLabelInfo2 )
            break;
          IconLabelInfo__Set_26821248(
            iconLabelInfo2,
            36,
            (int32_t)this,
            v53->fields.exceedCount,
            0,
            0,
            0,
            v53->fields.lv,
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
          v54 = v4->fields.type & 0xFFFFFFFE;
          v4->fields.sortValue1 = *(int *)&this->fields.isLvExceedMax;
          if ( v54 == 4 )
          {
            v55 = v4->fields.iconLabelInfo1;
          }
          else
          {
            UserServantEntity__getTreasureDeviceInfo_21271516((UserServantEntity_o *)this, &tdMaxLv[1], tdMaxLv, 0LL);
            LODWORD(friendship) = tdMaxLv[1];
            this = (CombineServantListViewItem_o *)v4->fields.iconLabelInfo1;
            v4->fields.sortValue1 = tdMaxLv[1];
            if ( !this )
              break;
            friendshipMax = tdMaxLv[0];
            v70 = 33;
LABEL_210:
            IconLabelInfo__Set_26821248((IconLabelInfo_o *)this, v70, friendship, friendshipMax, 0, 0, 0, 0, 0LL);
LABEL_211:
            this = (CombineServantListViewItem_o *)v4->fields.userSvtEntity;
            if ( !this )
              break;
            v55 = v4->fields.iconLabelInfo2;
          }
          v71 = this->fields.amountSortValue;
          this = (CombineServantListViewItem_o *)UserServantEntity__getLevelMax((UserServantEntity_o *)this, 0LL);
          if ( v55 )
          {
            IconLabelInfo__Set_26821248(v55, 2, v71, (int32_t)this, 0, 0, 0, 0, 0LL);
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
          v56 = v4->fields.userSvtEntity;
          if ( !v56 )
            break;
          this = (CombineServantListViewItem_o *)v4->fields.iconLabelInfo1;
          v4->fields.sortValue1 = v56->fields.hp;
          if ( !this )
            break;
          adjustHp = v56->fields.adjustHp;
          hp = v56->fields.hp;
          v59 = 3;
          goto LABEL_182;
        case 6:
          v60 = v4->fields.userSvtEntity;
          if ( !v60 )
            break;
          this = (CombineServantListViewItem_o *)v4->fields.iconLabelInfo1;
          v4->fields.sortValue1 = v60->fields.atk;
          if ( !this )
            break;
          adjustHp = v60->fields.adjustAtk;
          hp = v60->fields.atk;
          v59 = 5;
LABEL_182:
          IconLabelInfo__Set_26821248((IconLabelInfo_o *)this, v59, hp, adjustHp, 0, 0, 0, 0, 0LL);
LABEL_183:
          this = (CombineServantListViewItem_o *)v4->fields.userSvtEntity;
          if ( !this )
            break;
          v61 = v4->fields.iconLabelInfo2;
          goto LABEL_203;
        case 7:
          servantEntity = v4->fields.servantEntity;
          if ( !servantEntity )
            break;
          this = (CombineServantListViewItem_o *)v4->fields.iconLabelInfo1;
          v4->fields.sortValue1 = servantEntity->fields.cost;
          if ( !this )
            break;
          IconLabelInfo__Set_26821248((IconLabelInfo_o *)this, 7, servantEntity->fields.cost, 0, 0, 0, 0, 0, 0LL);
          goto LABEL_211;
        case 8:
          this = (CombineServantListViewItem_o *)v4->fields.userSvtEntity;
          v44 = -v4->fields.priority;
LABEL_201:
          v4->fields.sortValue1 = v44;
          if ( !this )
            break;
LABEL_202:
          v61 = v4->fields.iconLabelInfo1;
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
          v70 = 32;
          goto LABEL_210;
        case 0xE:
          this = (CombineServantListViewItem_o *)v4->fields.amountSortValue;
          if ( ((unsigned __int64)this & 0x8000000000000000LL) == 0 )
            goto LABEL_193;
          this = (CombineServantListViewItem_o *)sort->fields.manager;
          if ( !this )
            break;
          v63 = *(&CombineServantListViewManager_TypeInfo->_2.bitflags2 + 1);
          if ( *(&this->klass->_2.bitflags2 + 1) < (unsigned int)v63
            || (CombineServantListViewManager_c *)this->klass->_2.typeHierarchy[v63 - 1] != CombineServantListViewManager_TypeInfo )
          {
            break;
          }
          this = (CombineServantListViewItem_o *)CombineServantListViewManager__GetAmountSortValue(
                                                   (CombineServantListViewManager_o *)this,
                                                   v4->fields.svtId,
                                                   v34);
          v4->fields.amountSortValue = (int64_t)this;
LABEL_193:
          v64 = v4->fields.servantEntity;
          if ( !v64 )
            break;
          collectionNo = v64->fields.collectionNo;
          v66 = v4->fields.userSvtEntity;
          v4->fields.sortValue1 = (((unsigned __int64)(unsigned int)v4->fields.rarity << 32) + ((_QWORD)this << 48)) | collectionNo;
          if ( !v66 )
            break;
          v61 = v4->fields.iconLabelInfo1;
          lv = v66->fields.lv;
          this = (CombineServantListViewItem_o *)v66;
LABEL_204:
          this = (CombineServantListViewItem_o *)UserServantEntity__getLevelMax((UserServantEntity_o *)this, 0LL);
          if ( !v61 )
            break;
          IconLabelInfo__Set_26821248(v61, 2, lv, (int32_t)this, 0, 0, 0, 0, 0LL);
          goto LABEL_223;
        case 0xF:
          friendship = v4->fields.hpReinforceValue;
          this = (CombineServantListViewItem_o *)v4->fields.iconLabelInfo1;
          v4->fields.isDispHpStatusUpInfo = 1;
          v4->fields.sortValue1 = friendship;
          if ( !this )
            break;
          friendshipMax = v4->fields.nowMaxHpReinforceValue;
          v70 = 44;
          goto LABEL_210;
        case 0x10:
          friendship = v4->fields.atkReinforceValue;
          this = (CombineServantListViewItem_o *)v4->fields.iconLabelInfo1;
          v4->fields.isDispAtkStatusUpInfo = 1;
          v4->fields.sortValue1 = friendship;
          if ( !this )
            break;
          friendshipMax = v4->fields.nowMaxAtkReinforceValue;
          v70 = 45;
          goto LABEL_210;
        default:
          return (char)this;
      }
LABEL_254:
      sub_B0D97C(this);
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
          if ( TutorialFlag__Get_28088484(126, 0LL) )
            goto LABEL_127;
        }
        if ( v4->fields.isParty )
        {
          v36 = 20LL;
          goto LABEL_150;
        }
        if ( !v4->fields.isLvMax )
          goto LABEL_151;
        goto LABEL_149;
      case 1:
        this = (CombineServantListViewItem_o *)v4->fields.servantEntity;
        if ( !this )
          goto LABEL_254;
        v40 = isSwapLock ^ isLock;
        if ( ServantEntity__get_IsExpUp((ServantEntity_o *)this, 0LL) )
        {
          if ( v4->fields.isBaseLvMax )
          {
            v41 = -120LL;
          }
          else
          {
            v41 = -5LL;
            if ( !(v40 | v32) )
              v41 = 30LL;
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
                v41 = -90LL;
                if ( !v4->fields.isAtkSecondUpMax && v4->fields.isAtkUpMax )
                  v41 = 90LL;
                goto LABEL_244;
              }
              v72 = 70LL;
              v73 = !v4->fields.isAtkUpMax;
              v41 = -110LL;
            }
            else
            {
              if ( rarity == 4 )
              {
                v41 = -80LL;
                if ( !v4->fields.isHpSecondUpMax && v4->fields.isHpUpMax )
                  v41 = 100LL;
LABEL_244:
                *p_sortValue0 = v41;
                if ( v40 | v32 )
                  v41 = -5LL;
                goto LABEL_246;
              }
              v72 = 80LL;
              v73 = !v4->fields.isHpUpMax;
              v41 = -100LL;
            }
            if ( v73 )
              v41 = v72;
            goto LABEL_244;
          }
          v41 = -150LL;
        }
        else
        {
          if ( !CombineServantListViewItem__get_IsCanNotSelectMaterial(v4, v42) )
          {
LABEL_247:
            if ( v4->fields.isFortification )
              *p_sortValue0 = -10LL;
            if ( !((v32 ^ 1) & 1 | !sort->fields.isChoiceSort) )
              *(_OWORD *)p_sortValue0 = xmmword_3214F00;
            goto LABEL_153;
          }
          if ( v4->fields.isLimitCntTarget )
          {
            v41 = -20LL;
          }
          else if ( v4->fields.isParty )
          {
            v41 = -30LL;
          }
          else
          {
            v41 = -10LL;
            if ( v4->fields.isUseSupport )
              v41 = -40LL;
          }
        }
LABEL_246:
        *p_sortValue0 = v41;
        goto LABEL_247;
      case 2:
        if ( v4->fields.isSealCombineLimit )
        {
          v36 = 0LL;
          goto LABEL_150;
        }
        if ( !CombineServantListViewItem__get_IsCanNotBaseSelect(v4, v33)
          && v4->fields.isLimitUpItemNum
          && v4->fields.isLvMax )
        {
LABEL_147:
          v36 = 10LL;
          goto LABEL_150;
        }
        if ( v4->fields.isHeroineSvt )
        {
LABEL_149:
          v36 = -10LL;
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
          if ( TutorialFlag__Get_28088484(126, 0LL) )
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
        if ( !((v32 ^ 1) & 1 | !sort->fields.isChoiceSort) || v4->fields.isFortification )
          goto LABEL_81;
        goto LABEL_153;
      case 6:
        if ( !CombineServantListViewItem__get_IsCanNotBaseSelect(v4, v33)
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
        if ( !TutorialFlag__Get_28088484(126, 0LL) )
          goto LABEL_151;
        goto LABEL_127;
      case 8:
        if ( !CombineServantListViewItem__get_IsCanNotBaseSelect(v4, v33)
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
        if ( !CombineServantListViewItem__get_IsCanNotBaseSelect(v4, v33) )
          goto LABEL_147;
        if ( v4->fields.isHeroineSvt )
          goto LABEL_149;
        if ( v4->fields.isSealCombineLimit )
        {
LABEL_121:
          v36 = -15LL;
        }
        else if ( v4->fields.isLimitCntMax )
        {
LABEL_127:
          v36 = -20LL;
        }
        else
        {
          if ( !v4->fields.isEventJoin )
            goto LABEL_151;
LABEL_114:
          v36 = -30LL;
        }
LABEL_150:
        *p_sortValue0 = v36;
LABEL_151:
        if ( !((v32 ^ 1) & 1 | !sort->fields.isChoiceSort) )
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
          if ( TutorialFlag__Get_28088484(126, 0LL) )
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
          if ( TutorialFlag__Get_28088484(126, 0LL) )
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
  v39 = v4->fields.type;
  if ( v39 == 1 )
  {
    if ( CombineServantListViewItem__IsMatchMaterialFilter(v4, sort, v29) )
      goto LABEL_43;
  }
  else if ( v39 )
  {
    if ( CombineServantListViewItem__IsMatchServantFilter(v4, sort, v29) )
      goto LABEL_43;
  }
  else if ( CombineServantListViewItem__IsMatchBaseServantFilter(v4, sort, v29) )
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

  if ( (byte_4217313 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_15149/*"UserSvt "*/, method);
    byte_4217313 = 1;
  }
  NameText = CombineServantListViewItem__get_NameText(this, method);
  return System_String__Concat_43849904((System_String_o *)StringLiteral_15149/*"UserSvt "*/, NameText, 0LL);
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

  if ( (byte_421730F & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_18452/*"error"*/, v3);
    byte_421730F = 1;
  }
  servantEntity = this->fields.servantEntity;
  if ( !servantEntity )
    return (System_String_o *)StringLiteral_18452/*"error"*/;
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
  if ( (byte_4217310 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_1/*""*/, method);
    byte_4217310 = 1;
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
    sub_B0D97C(0LL);
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

  if ( (byte_4217311 & 1) == 0 )
  {
    sub_B0D8A4(&TutorialFlag_TypeInfo, method);
    byte_4217311 = 1;
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
    if ( TutorialFlag__Get_28088484(126, 0LL) )
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
        v7 = TutorialFlag__Get_28088484(126, 0LL) || this->fields.isSkillLvMax;
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
            if ( TutorialFlag__Get_28088484(126, 0LL) )
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
      if ( TutorialFlag__Get_28088484(126, 0LL) )
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
      return TutorialFlag__Get_28088484(126, 0LL);
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

  if ( (byte_4217312 & 1) == 0 )
  {
    sub_B0D8A4(&TutorialFlag_TypeInfo, method);
    byte_4217312 = 1;
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
    if ( TutorialFlag__Get_28088484(126, 0LL) )
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
  v5 = this->fields.userSvtEntity;
  if ( !v5 )
    goto LABEL_12;
  if ( UserServantEntity__IsStatusUp(v5, 0LL) )
    return 1;
  v5 = this->fields.userSvtEntity;
  if ( !v5 )
LABEL_12:
    sub_B0D97C(v5);
  return UserServantEntity__IsMaterialTd(v5, 0LL);
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
    sub_B0D97C(0LL);
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
    sub_B0D97C(0LL);
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
    sub_B0D97C(0LL);
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
    sub_B0D97C(0LL);
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

  if ( (byte_421730D & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_18452/*"error"*/, v3);
    byte_421730D = 1;
  }
  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    return (System_String_o *)StringLiteral_18452/*"error"*/;
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
  if ( (byte_421730C & 1) == 0 )
  {
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    this = (CombineServantListViewItem_o *)sub_B0D8A4(&StringLiteral_18452/*"error"*/, v3);
    byte_421730C = 1;
  }
  servantEntity = v2->fields.servantEntity;
  if ( !servantEntity )
    return (System_String_o *)StringLiteral_18452/*"error"*/;
  userSvtEntity = v2->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_B0D97C(this);
  v7 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.currentCryptoKey;
  v6 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v10.fields.currentCryptoKey = v7;
  *(_QWORD *)&v10.fields.fakeValue = v6;
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v10, 0LL);
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

  if ( (byte_421730E & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, method);
    byte_421730E = 1;
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

  if ( (byte_4217314 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_SvtCoinMaster___, method);
    sub_B0D8A4(&DataManager_TypeInfo, v3);
    sub_B0D8A4(&Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__GetEntity__, v4);
    byte_4217314 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_SvtCoinMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B0D97C(0LL);
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             Master_WarQuestSelectionMaster,
             this->fields.svtId,
             (const MethodInfo_2669BD4 *)Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__GetEntity__);
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
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v8; // q1
  UserSvtCoinMaster_o *v9; // x20
  struct UserServantEntity_o *v10; // x8
  int64_t v11; // x19
  __int64 v12; // x21
  __int64 v13; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v15; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v16; // [xsp+20h] [xbp-50h]
  UserSvtCoinEntity_o *entity; // [xsp+48h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_4217315 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_UserSvtCoinMaster___, method);
    sub_B0D8A4(&DataManager_TypeInfo, v3);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5);
    byte_4217315 = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_UserSvtCoinMaster___);
  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_20;
  v8 = *(_OWORD *)&userSvtEntity->fields.userId.fields.fakeValue;
  v9 = (UserSvtCoinMaster_o *)Master_WarQuestSelectionMaster;
  *(_OWORD *)&v16.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v16.fields.fakeValue = v8;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v15 = v16;
  Master_WarQuestSelectionMaster = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v15, 0LL);
  v10 = this->fields.userSvtEntity;
  if ( !v10 )
    goto LABEL_20;
  v11 = Master_WarQuestSelectionMaster;
  v13 = *(_QWORD *)&v10->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&v10->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v18.fields.currentCryptoKey = v13;
  *(_QWORD *)&v18.fields.fakeValue = v12;
  Master_WarQuestSelectionMaster = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v18, 0LL);
  if ( !v9 )
    goto LABEL_20;
  Master_WarQuestSelectionMaster = UserSvtCoinMaster__TryGetEntity(
                                     v9,
                                     &entity,
                                     v11,
                                     Master_WarQuestSelectionMaster,
                                     0LL);
  if ( (Master_WarQuestSelectionMaster & 1) != 0 )
  {
    if ( entity )
      return entity->fields.num;
LABEL_20:
    sub_B0D97C(Master_WarQuestSelectionMaster);
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
  if ( (byte_421730A & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantMaster___, method);
    sub_B0D8A4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v3);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v4);
    this = (CombineServantListViewItem_o *)sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_421730A = 1;
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
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v19, 0LL);
  this = (CombineServantListViewItem_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (this = (CombineServantListViewItem_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                 (DataManager_o *)this,
                                                 (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
  {
LABEL_10:
    sub_B0D97C(this);
  }
  Entity = (System_Int32_array **)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                    (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)this,
                                    v10,
                                    (const MethodInfo_2669DFC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  p_userSvtEntity->klass = (BattleServantConfConponent_c *)Entity;
  sub_B0D840(p_userSvtEntity, Entity, v12, v13, v14, v15, v16, v17);
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
  if ( (byte_421730B & 1) == 0 )
  {
    this = (CombineServantListViewItem_o *)sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
    byte_421730B = 1;
  }
  userSvtEntity = v2->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_B0D97C(this);
  v4 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v7.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v7.fields.fakeValue = v4;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v6 = v7;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v6, 0LL);
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
  sub_B0D840(
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
    sub_B0D97C(0LL);
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
    sub_B0D97C(0LL);
  this->fields.dragSelectNum = ~value << 31 >> 31;
}


void __fastcall CombineServantListViewItem__set_IsHpStatusMax(
        CombineServantListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  if ( !this )
    sub_B0D97C(0LL);
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
    sub_B0D97C(0LL);
  this->fields.isNotSelectSecondStatusUpAtk = this->fields.atkBase > 0 && value;
}


void __fastcall CombineServantListViewItem__set_IsSecondHpStatusMax(
        CombineServantListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  if ( !this )
    sub_B0D97C(0LL);
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
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._NoticeTween_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}