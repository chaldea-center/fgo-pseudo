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
  IconLabelInfo_o *v16; // x21
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  IconLabelInfo_o *v23; // x21
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_Collections_Generic_List_int__o *v30; // x21
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_Collections_Generic_List_int__o *v37; // x21
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_userSvtEntity; // x21
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  int64_t Instance; // x0
  const MethodInfo *v52; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v53; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v54; // x20
  __int64 v55; // x24
  __int64 v56; // x25
  struct ServantEntity_o *v57; // x0
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  struct UserServantEntity_o *v70; // x8
  struct ServantEntity_o *servantEntity; // x8
  ServantLimitMaster_o *v72; // x20
  int32_t v73; // w25
  int64_t v74; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v75; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v76; // q1
  UserServantCollectionMaster_o *v77; // x20
  int64_t v78; // x25
  int64_t v79; // x23
  int v80; // w8
  bool *p_isStatusUpSvt; // x28
  int64_t v82; // x22
  struct UserServantEntity_o *v83; // x8
  int32_t v84; // w20
  BalanceConfig_c *v85; // x8
  struct UserServantEntity_o *v86; // x8
  __int128 v87; // q0
  __int64 v88; // x20
  const MethodInfo *v89; // x1
  int64_t UserSvtId; // x0
  unsigned int v91; // w8
  UserServantEntity_o *v92; // x8
  __int64 v93; // x1
  __int64 v94; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v97; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v100; // x8
  unsigned __int64 v101; // x10
  int32_t *v102; // x11
  __int64 v103; // x0
  _QWORD *v104; // x0
  __int64 v105; // x1
  __int64 v106; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v107; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v108; // q0
  __int64 v109; // x22
  System_Collections_Generic_IEnumerator_T__c *v110; // x8
  unsigned __int64 v111; // x10
  int32_t *v112; // x11
  __int64 v113; // x0
  UserServantEntity_o *v114; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v115; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v116; // q0
  int64_t v117; // x0
  __int128 v118; // q0
  UserServantCommandCodeMaster_o *v119; // x20
  struct ServantEntity_o *v120; // x8
  int64_t v121; // x25
  __int64 v122; // x23
  __int64 v123; // x26
  int32_t v124; // w8
  UserServantCommandCardMaster_o *v125; // x20
  struct ServantEntity_o *v126; // x8
  int64_t v127; // x25
  __int64 v128; // x23
  __int64 v129; // x26
  struct System_Int32_array *commandCardParam; // x20
  int max_length; // w8
  __int64 v132; // x22
  int32_t v133; // w25
  __int64 v134; // x1
  __int64 v135; // x3
  System_Collections_Generic_IEnumerator_T__o *v136; // x20
  System_Collections_Generic_IEnumerator_T__c *v137; // x8
  unsigned __int64 v138; // x10
  int32_t *v139; // x11
  __int64 v140; // x0
  System_Collections_Generic_IEnumerator_T__c *v141; // x8
  unsigned __int64 v142; // x10
  int32_t *v143; // x11
  __int64 v144; // x0
  _QWORD *v145; // x0
  __int64 v146; // x1
  __int64 v147; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v148; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v149; // q0
  __int64 v150; // x22
  System_Collections_Generic_IEnumerator_T__c *v151; // x8
  unsigned __int64 v152; // x10
  int32_t *v153; // x11
  __int64 v154; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v155; // x8
  __int64 v156; // x20
  __int64 v157; // x23
  int32_t v158; // w20
  struct UserServantEntity_o *v159; // x8
  __int128 v160; // q0
  int64_t v161; // x0
  __int128 v162; // q0
  int32_t SvtClassId; // w20
  int32_t v164; // w0
  int32_t SvtClassGroupType; // w20
  int32_t materialExp; // w20
  BalanceConfig_c *v167; // x0
  int SameClassExp; // w22
  double v169; // d0
  int32_t classId; // w20
  UserServantEntity_o *v171; // x8
  int32_t v172; // w20
  bool v173; // w8
  bool v174; // w8
  bool v175; // w8
  bool v176; // w8
  UserServantCommandCodeMaster_o *v177; // x20
  struct ServantEntity_o *v178; // x8
  int64_t v179; // x25
  __int64 v180; // x23
  __int64 v181; // x26
  int32_t v182; // w8
  bool v183; // w28
  UserServantEntity_o *v184; // x8
  bool v185; // w8
  UserServantEntity_o *v186; // x8
  const MethodInfo *v187; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v188; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v189; // q0
  int64_t v190; // x0
  __int128 v191; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v192; // x9
  int32_t combineLimitId; // w20
  __int64 v194; // x23
  __int64 v195; // x25
  int32_t v196; // w25
  __int64 v197; // x23
  __int64 v198; // x26
  UserServantEntity_o *v199; // x20
  __int64 v200; // x8
  UserItemMaster_o *v201; // x27
  unsigned __int64 i; // x28
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v203; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v204; // q1
  int32_t v205; // w25
  int32_t v206; // w20
  UserServantEntity_o *v207; // x8
  bool isLevelMax; // w8
  UserServantEntity_o *v209; // x8
  UserServantEntity_o *v210; // x8
  const MethodInfo *v211; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v212; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v213; // q0
  int64_t v214; // x0
  __int128 v215; // q0
  UserServantEntity_o *v216; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v217; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v218; // q0
  int64_t v219; // x0
  __int128 v220; // q0
  UserServantEntity_o *v221; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v222; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v223; // q0
  int64_t v224; // x0
  __int128 v225; // q0
  int id; // w20
  int32_t lv; // w22
  int32_t SameSvtNpLvCache; // w0
  const MethodInfo *v229; // x4
  int32_t v230; // w20
  char v231; // w8
  int32_t v232; // w0
  int32_t v233; // w20
  int32_t v234; // w27
  int32_t v235; // w25
  int v236; // w22
  __int64 v237; // x1
  __int64 v238; // x3
  System_Collections_Generic_IEnumerator_T__o *v239; // x20
  System_Collections_Generic_IEnumerator_T__c *v240; // x8
  unsigned __int64 v241; // x10
  int32_t *v242; // x11
  __int64 v243; // x0
  System_Collections_Generic_IEnumerator_T__c *v244; // x8
  unsigned __int64 v245; // x10
  int32_t *v246; // x11
  __int64 v247; // x0
  _QWORD *v248; // x0
  __int64 v249; // x1
  __int64 v250; // x9
  UserServantEntity_o *v251; // x8
  __int128 v252; // q0
  __int64 v253; // x22
  System_Collections_Generic_IEnumerator_T__c *v254; // x8
  unsigned __int64 v255; // x10
  int32_t *v256; // x11
  __int64 v257; // x0
  int64_t IsLock; // x0
  UserServantEntity_o *v259; // x8
  bool v260; // w8
  UserServantEntity_o *v261; // x8
  __int128 v262; // q0
  int64_t v263; // x0
  __int128 v264; // q0
  int32_t v265; // w8
  UserServantEntity_o *v266; // x8
  UserServantEntity_o *v267; // x8
  bool v268; // w8
  UserServantEntity_o *v269; // x8
  UserServantEntity_o *v270; // x8
  __int128 v271; // q0
  int64_t v272; // x0
  __int128 v273; // q0
  ServantExceedEntity_o *SvtExceedEnt; // x0
  int32_t *v275; // x20
  CommonConsumeEntity_array *IdEntityList; // x0
  CommonConsumeEntity_array *v277; // x25
  System_Collections_Generic_HashSet_int__o *v278; // x27
  System_Collections_Generic_HashSet_int__o *v279; // x28
  int v280; // w8
  __int64 v281; // x22
  CommonConsumeEntity_o *v282; // x23
  UserServantEntity_o *v283; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v284; // x25
  __int64 v285; // x23
  __int64 v286; // x26
  UserServantEntity_o *v287; // x23
  System_Int32_array *v288; // x25
  System_Int32_array *v289; // x0
  __int64 v290; // x20
  __int64 v291; // x25
  int32_t maxFriendshipRank; // w9
  int v293; // w10
  UserServantEntity_o *v294; // x8
  UserServantEntity_o *v295; // x8
  UserServantEntity_o *v296; // x8
  __int128 v297; // q0
  int64_t v298; // x0
  __int128 v299; // q0
  int32_t v300; // w20
  int v301; // w22
  int64_t v302; // x20
  __int64 v303; // x23
  __int64 v304; // x24
  UserItemMaster_o *v305; // x22
  unsigned __int64 v306; // x25
  __int64 v307; // x26
  bool v308; // w8
  UserServantEntity_o *v309; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  System_String_array **v311; // x2
  System_String_array **v312; // x3
  System_Boolean_array **v313; // x4
  System_Int32_array **v314; // x5
  System_Int32_array *v315; // x6
  System_Int32_array *v316; // x7
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  System_String_array **v318; // x2
  System_String_array **v319; // x3
  System_Boolean_array **v320; // x4
  System_Int32_array **v321; // x5
  System_Int32_array *v322; // x6
  System_Int32_array *v323; // x7
  int64_t v324; // x8
  struct ServantEntity_o *v325; // x9
  UserServantEntity_o *v326; // x8
  __int64 v327; // x20
  __int64 v328; // x21
  int32_t v329; // w8
  __int64 v330; // x0
  __int64 v331; // x0
  int v332; // [xsp+Ch] [xbp-444h]
  UserServantMaster_o *MasterData_WarQuestSelectionMaster; // [xsp+10h] [xbp-440h]
  int64_t v334; // [xsp+18h] [xbp-438h]
  bool *p_isLimitUpItemNum; // [xsp+28h] [xbp-428h]
  struct IconLabelInfo_o **p_iconLabelInfo2; // [xsp+30h] [xbp-420h]
  int64_t v339; // [xsp+40h] [xbp-410h]
  UserServantEntity_o *v340; // [xsp+48h] [xbp-408h]
  UserServantEntity_o *v342; // [xsp+50h] [xbp-400h]
  bool v343; // [xsp+5Ch] [xbp-3F4h]
  bool *p_isChoice; // [xsp+60h] [xbp-3F0h]
  struct ServantEntity_o **p_servantEntity; // [xsp+68h] [xbp-3E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v346; // [xsp+70h] [xbp-3E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v347; // [xsp+90h] [xbp-3C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v348; // [xsp+B0h] [xbp-3A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v349; // [xsp+D0h] [xbp-380h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v350; // [xsp+F0h] [xbp-360h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v351; // [xsp+110h] [xbp-340h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v352; // [xsp+130h] [xbp-320h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v353; // [xsp+150h] [xbp-300h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v354; // [xsp+170h] [xbp-2E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v355; // [xsp+190h] [xbp-2C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v356; // [xsp+1B0h] [xbp-2A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v357; // [xsp+1D0h] [xbp-280h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v358; // [xsp+1F0h] [xbp-260h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v359; // [xsp+210h] [xbp-240h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v360; // [xsp+230h] [xbp-220h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v361; // [xsp+250h] [xbp-200h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v362; // [xsp+270h] [xbp-1E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v363; // [xsp+290h] [xbp-1C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v364; // [xsp+2B0h] [xbp-1A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v365; // [xsp+2D0h] [xbp-180h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v366; // [xsp+2F0h] [xbp-160h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v367; // [xsp+310h] [xbp-140h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v368; // [xsp+330h] [xbp-120h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v369; // [xsp+350h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v370; // [xsp+370h] [xbp-E0h]
  _DWORD v371[6]; // [xsp+390h] [xbp-C0h]
  int v372; // [xsp+3A8h] [xbp-A8h]
  UserItemEntity_o *v373; // [xsp+3B0h] [xbp-A0h] BYREF
  int32_t tdMaxLv; // [xsp+3BCh] [xbp-94h] BYREF
  int32_t tdLv[2]; // [xsp+3C0h] [xbp-90h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+3C8h] [xbp-88h] BYREF
  UserItemEntity_o *v377; // [xsp+3D0h] [xbp-80h] BYREF
  __int64 v378; // [xsp+3D8h] [xbp-78h] BYREF
  UserServantCommandCodeEntity_o *v379; // [xsp+3E0h] [xbp-70h] BYREF
  UserServantCommandCardEntity_o *v380; // [xsp+3E8h] [xbp-68h] BYREF
  UserServantCommandCodeEntity_o *entity; // [xsp+3F0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v382; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v383; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v384; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v385; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v386; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v387; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v388; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v389; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v390; // 0:x0.16

  if ( (byte_42B2CB5 & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B52984(&Method_DataManager_GetMasterData_CombineLimitMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_CombineMaterialMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_FriendshipMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_TreasureDvcMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_UserServantCommandCardMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_UserServantLeaderMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B52984(&Method_DataManager_GetMaster_CommonConsumeMaster___);
    sub_B52984(&Method_DataManager_GetMaster_SvtCoinMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B52984(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_B52984(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
    sub_B52984(&Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__GetEntity__);
    sub_B52984(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_B52984(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_B52984(&Method_System_Collections_Generic_HashSet_int___ctor___68488952);
    sub_B52984(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&IconLabelInfo_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B52984(&System_Collections_Generic_List_int__TypeInfo);
    sub_B52984(&System_Math_TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&UserServantLeaderEntity_TypeInfo);
    byte_42B2CB5 = 1;
  }
  v380 = 0LL;
  entity = 0LL;
  v378 = 0LL;
  v379 = 0LL;
  tdInfo = 0LL;
  v377 = 0LL;
  *(_QWORD *)tdLv = 0LL;
  tdMaxLv = 0;
  v373 = 0LL;
  v372 = 0;
  v16 = (IconLabelInfo_o *)sub_B52A54(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v16, 0LL);
  this->fields.iconLabelInfo1 = v16;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo1,
    (System_Int32_array **)v16,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  v23 = (IconLabelInfo_o *)sub_B52A54(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v23, 0LL);
  this->fields.iconLabelInfo2 = v23;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo2,
    (System_Int32_array **)v23,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  v30 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v30,
    (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.enableSkillUp = v30;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.enableSkillUp,
    (System_Int32_array **)v30,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  v37 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v37,
    (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.enableAppendSkillUp = v37;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.enableAppendSkillUp,
    (System_Int32_array **)v37,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  ListViewItem___ctor((ListViewItem_o *)this, 0LL);
  this->fields.userSvtEntity = userSvtEntity;
  p_userSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userSvtEntity;
  this->fields.type = type;
  this->fields.index = index;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.userSvtEntity,
    (System_Int32_array **)userSvtEntity,
    v45,
    v46,
    v47,
    v48,
    v49,
    v50);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_544;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantMaster___);
  v53 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_544;
  v54 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v56 = *(_QWORD *)&v53[5].fields.currentCryptoKey;
  v55 = *(_QWORD *)&v53[5].fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v382.fields.currentCryptoKey = v56;
  *(_QWORD *)&v382.fields.fakeValue = v55;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v382, 0LL);
  if ( !v54 )
    goto LABEL_544;
  v57 = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    v54,
                                    Instance,
                                    (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = v57;
  p_servantEntity = &this->fields.servantEntity;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.servantEntity,
    (System_Int32_array **)v57,
    v58,
    v59,
    v60,
    v61,
    v62,
    v63);
  this->fields.setupInfo = setupInfo;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.setupInfo,
    (System_Int32_array **)setupInfo,
    v64,
    v65,
    v66,
    v67,
    v68,
    v69);
  v70 = this->fields.userSvtEntity;
  this->fields.isEventUpVal = 0;
  *(_QWORD *)&this->fields.bonusKind = 0LL;
  if ( !v70 )
    goto LABEL_544;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v70->fields.svtId, 0LL);
  servantEntity = this->fields.servantEntity;
  this->fields.svtId = Instance;
  if ( !servantEntity )
    goto LABEL_544;
  this->fields.classId = servantEntity->fields.classId;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_544;
  MasterData_WarQuestSelectionMaster = (UserServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                (DataManager_o *)Instance,
                                                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_544;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtEntity )
    goto LABEL_544;
  v72 = (ServantLimitMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420((*p_userSvtEntity)[5], 0LL);
  if ( !*p_userSvtEntity )
    goto LABEL_544;
  v73 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420((*p_userSvtEntity)[6], 0LL);
  if ( !v72 )
    goto LABEL_544;
  Instance = (int64_t)ServantLimitMaster__GetEntity(v72, v73, Instance, 0LL);
  if ( !Instance )
    goto LABEL_544;
  v74 = Instance;
  this->fields.rarity = *(_DWORD *)(Instance + 24);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_544;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v75 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_544;
  v76 = v75[4];
  v77 = (UserServantCollectionMaster_o *)Instance;
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v370.fields.currentCryptoKey = v75[3];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v370.fields.fakeValue = v76;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v369 = v370;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v369, 0LL);
  if ( !*p_userSvtEntity )
    goto LABEL_544;
  v78 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420((*p_userSvtEntity)[5], 0LL);
  if ( !v77 )
    goto LABEL_544;
  Instance = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(v77, v78, Instance, 0LL);
  if ( !Instance )
    goto LABEL_544;
  v79 = Instance;
  v343 = isParty;
  UserServantCollectionEntity__getFriendShipRankInfo(
    (UserServantCollectionEntity_o *)Instance,
    &this->fields.friendship,
    &this->fields.friendshipMax,
    0LL);
  Instance = (int64_t)UserGameMaster__getSelfUserGame(0LL);
  if ( !Instance )
    goto LABEL_544;
  v80 = *(_DWORD *)(Instance + 96);
  *(_DWORD *)&this->fields.isStatusUpSvt = 0;
  p_isStatusUpSvt = &this->fields.isStatusUpSvt;
  v332 = v80;
  *(_WORD *)&this->fields.isFavorite = 0;
  *(_WORD *)&this->fields.isLock = 0;
  *(_DWORD *)&this->fields.isChoice = 0;
  this->fields.isMaxSelect = 0;
  *(_QWORD *)&this->fields.isLimitUpItemNum = 0LL;
  v82 = Instance;
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
  v83 = this->fields.userSvtEntity;
  this->fields.maxLimitCnt = Instance;
  if ( !v83 )
    goto LABEL_544;
  this->fields.currentLimitCnt = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(
                                   v83->fields.limitCount,
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
  v84 = *(_DWORD *)(Instance + 276);
  v85 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    Instance = (int64_t)*p_userSvtEntity;
    v85 = BalanceConfig_TypeInfo;
  }
  this->fields.hpReinforceValue = v85->static_fields->StatusUpAdjustHp * v84;
  if ( !Instance )
    goto LABEL_544;
  v339 = v79;
  this->fields.atkReinforceValue = v85->static_fields->StatusUpAdjustAtk * *(_DWORD *)(Instance + 272);
  UserServantEntity__getAdjustMaxData(
    (UserServantEntity_o *)Instance,
    &this->fields.nowMaxHpReinforceValue,
    &this->fields.nowMaxAtkReinforceValue,
    0LL);
  v86 = this->fields.userSvtEntity;
  *(_WORD *)&this->fields.isEquipedCmdCard = 0;
  if ( !v86 )
    goto LABEL_544;
  v87 = *(_OWORD *)&v86->fields.id.fields.fakeValue;
  v88 = *(_QWORD *)(v82 + 120);
  v334 = v82;
  *(_OWORD *)&v368.fields.currentCryptoKey = *(_OWORD *)&v86->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v368.fields.fakeValue = v87;
  this->fields.isPush = v88 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v368, 0LL);
  UserSvtId = CombineServantListViewItem__get_UserSvtId(this, v89);
  EventFortificationDataLogic__SetFortification(
    &this->fields.isFortification,
    &this->fields.fortificationName,
    &this->fields.fortificationDetailName,
    UserSvtId,
    0LL);
  v91 = this->fields.type;
  v340 = baseUsrSvtData;
  if ( v91 > 0xA || ((1 << v91) & 0x481) == 0 )
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
  this->fields.isParty = v343;
  if ( !Instance )
    goto LABEL_544;
  Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL);
  v92 = this->fields.userSvtEntity;
  this->fields.isLock = Instance & 1;
  if ( !v92 )
    goto LABEL_544;
  *p_isChoice = UserServantEntity__IsChoice(v92, 0LL);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_544;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantLeaderMaster___);
  if ( !Instance )
    goto LABEL_544;
  Instance = *(_QWORD *)(Instance + 32);
  if ( !Instance )
    goto LABEL_544;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                 (const MethodInfo_2B98BDC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B52A5C(0LL, v93);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v97 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v97;
        p_offset += 4;
        if ( v97 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_58;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_58:
      p_method = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v94);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v100 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v101 = 0LL;
      v102 = &v100->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v102 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v101;
        v102 += 4;
        if ( v101 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_65;
      }
      v103 = (__int64)&v100->vtable[*v102].method;
    }
    else
    {
LABEL_65:
      v103 = sub_AEB880(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v94);
    }
    v104 = (_QWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v103)(
                       Enumerator,
                       *(_QWORD *)(v103 + 8));
    if ( !v104 )
      goto LABEL_549;
    v106 = *(&UserServantLeaderEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*v104 + 300LL) < (unsigned int)v106
      || *(UserServantLeaderEntity_c **)(*(_QWORD *)(*v104 + 200LL) + 8 * v106 - 8) != UserServantLeaderEntity_TypeInfo )
    {
      sub_B52D50(v104);
LABEL_547:
      sub_B52D50(v145);
LABEL_548:
      sub_B52D50(v248);
LABEL_549:
      sub_B52A5C(v104, v105);
    }
    v107 = *p_userSvtEntity;
    if ( !*p_userSvtEntity )
      sub_B52A5C(v104, UserServantLeaderEntity_TypeInfo);
    v108 = v107[2];
    v109 = v104[7];
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v370.fields.currentCryptoKey = v107[1];
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v370.fields.fakeValue = v108;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v367 = v370;
    if ( v109 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v367, 0LL) )
    {
      this->fields.isUseSupport = 1;
      break;
    }
  }
  v371[v372++] = 1071;
  v110 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v111 = 0LL;
    v112 = &v110->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v112 - 1) != System_IDisposable_TypeInfo )
    {
      ++v111;
      v112 += 4;
      if ( v111 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_80;
    }
    v113 = (__int64)&v110->vtable[*v112].method;
  }
  else
  {
LABEL_80:
    v113 = sub_AEB880(Enumerator, System_IDisposable_TypeInfo, 0LL, v94);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v113)(
    Enumerator,
    *(_QWORD *)(v113 + 8));
  if ( v372 && v371[v372 - 1] == 1071 )
    --v372;
  Instance = (int64_t)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_544;
  Instance = UserServantEntity__IsEventJoin((UserServantEntity_o *)Instance, 0LL);
  v114 = this->fields.userSvtEntity;
  this->fields.isEventJoin = Instance & 1;
  if ( !v114 )
    goto LABEL_544;
  Instance = UserServantEntity__IsHeroine(v114, 0LL);
  if ( (Instance & 1) != 0 )
    this->fields.isHeroineSvt = 1;
  if ( baseUsrSvtData )
  {
    v115 = *p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_544;
    v116 = v115[2];
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v370.fields.currentCryptoKey = v115[1];
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v370.fields.fakeValue = v116;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v366 = v370;
    v117 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v366, 0LL);
    v118 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
    *(_OWORD *)&v365.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v365.fields.fakeValue = v118;
    if ( v117 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v365, 0LL) )
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
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_544;
  v119 = (UserServantCommandCodeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             (DataManager_o *)Instance,
                                             (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__get_UserId(0LL);
  v120 = *p_servantEntity;
  if ( !*p_servantEntity )
    goto LABEL_544;
  v121 = Instance;
  v122 = *(_QWORD *)&v120->fields.id.fields.currentCryptoKey;
  v123 = *(_QWORD *)&v120->fields.id.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v383.fields.currentCryptoKey = v122;
  *(_QWORD *)&v383.fields.fakeValue = v123;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v383, 0LL);
  if ( !v119 )
    goto LABEL_544;
  if ( UserServantCommandCodeMaster__TryGetEntity(v119, &entity, v121, (int)Instance, 0LL) )
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
  v124 = this->fields.type;
  if ( v124 == 10 )
  {
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_544;
    v125 = (UserServantCommandCardMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)Instance,
                                               (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantCommandCardMaster___);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Instance = NetworkManager__get_UserId(0LL);
    v126 = *p_servantEntity;
    if ( !*p_servantEntity )
      goto LABEL_544;
    v127 = Instance;
    v128 = *(_QWORD *)&v126->fields.id.fields.currentCryptoKey;
    v129 = *(_QWORD *)&v126->fields.id.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v384.fields.currentCryptoKey = v128;
    *(_QWORD *)&v384.fields.fakeValue = v129;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v384, 0LL);
    if ( !v125 )
      goto LABEL_544;
    Instance = UserServantCommandCardMaster__TryGetEntity(v125, &v380, v127, (int)Instance, 0LL);
    if ( (Instance & 1) != 0 )
    {
      if ( !v380 )
        goto LABEL_544;
      commandCardParam = v380->fields.commandCardParam;
      if ( commandCardParam )
      {
        max_length = commandCardParam->max_length;
        if ( max_length >= 1 )
        {
          v132 = 0LL;
          while ( 1 )
          {
            if ( (unsigned int)v132 >= max_length )
            {
LABEL_556:
              v331 = sub_B52A88(Instance);
              sub_B52A28(v331, 0LL);
            }
            v133 = commandCardParam->m_Items[v132 + 1];
            Instance = (int64_t)BalanceConfig_TypeInfo;
            if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              Instance = (int64_t)BalanceConfig_TypeInfo;
            }
            if ( v133 < *(_DWORD *)(*(_QWORD *)(Instance + 184) + 700LL) )
              break;
            this->fields.isCommandCardExceedMax = 1;
            max_length = commandCardParam->max_length;
            if ( (int)++v132 >= max_length )
              goto LABEL_141;
          }
          this->fields.isCommandCardExceedMax = 0;
        }
      }
    }
LABEL_141:
    v124 = this->fields.type;
  }
  if ( v124 == 1 )
  {
    this->fields.isMaterialSvt = isMtSvt;
    this->fields.isParty = v343;
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_544;
    Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantLeaderMaster___);
    if ( !Instance )
      goto LABEL_544;
    Instance = *(_QWORD *)(Instance + 32);
    if ( !Instance )
      goto LABEL_544;
    v136 = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
             (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
             (const MethodInfo_2B98BDC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    if ( !v136 )
      sub_B52A5C(0LL, v134);
    while ( 1 )
    {
      v137 = v136->klass;
      if ( *(_WORD *)&v136->klass->_2.bitflags1 )
      {
        v138 = 0LL;
        v139 = &v137->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)v139 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v138;
          v139 += 4;
          if ( v138 >= *(unsigned __int16 *)&v136->klass->_2.bitflags1 )
            goto LABEL_151;
        }
        v140 = (__int64)&v137->vtable[*v139].method;
      }
      else
      {
LABEL_151:
        v140 = sub_AEB880(v136, System_Collections_IEnumerator_TypeInfo, 0LL, v135);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v140)(
              v136,
              *(_QWORD *)(v140 + 8)) & 1) == 0 )
        break;
      v141 = v136->klass;
      if ( *(_WORD *)&v136->klass->_2.bitflags1 )
      {
        v142 = 0LL;
        v143 = &v141->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v143 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
        {
          ++v142;
          v143 += 4;
          if ( v142 >= *(unsigned __int16 *)&v136->klass->_2.bitflags1 )
            goto LABEL_158;
        }
        v144 = (__int64)&v141->vtable[*v143].method;
      }
      else
      {
LABEL_158:
        v144 = sub_AEB880(v136, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v135);
      }
      v145 = (_QWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v144)(
                         v136,
                         *(_QWORD *)(v144 + 8));
      if ( !v145 )
        sub_B52A5C(0LL, v146);
      v147 = *(&UserServantLeaderEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*v145 + 300LL) < (unsigned int)v147
        || *(UserServantLeaderEntity_c **)(*(_QWORD *)(*v145 + 200LL) + 8 * v147 - 8) != UserServantLeaderEntity_TypeInfo )
      {
        goto LABEL_547;
      }
      v148 = *p_userSvtEntity;
      if ( !*p_userSvtEntity )
        sub_B52A5C(v145, UserServantLeaderEntity_TypeInfo);
      v149 = v148[2];
      v150 = v145[7];
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v370.fields.currentCryptoKey = v148[1];
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v370.fields.fakeValue = v149;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v364 = v370;
      if ( v150 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v364, 0LL) )
      {
        this->fields.isUseSupport = 1;
        break;
      }
    }
    v371[v372++] = 1511;
    v151 = v136->klass;
    if ( *(_WORD *)&v136->klass->_2.bitflags1 )
    {
      v152 = 0LL;
      v153 = &v151->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v153 - 1) != System_IDisposable_TypeInfo )
      {
        ++v152;
        v153 += 4;
        if ( v152 >= *(unsigned __int16 *)&v136->klass->_2.bitflags1 )
          goto LABEL_173;
      }
      v154 = (__int64)&v151->vtable[*v153].method;
    }
    else
    {
LABEL_173:
      v154 = sub_AEB880(v136, System_IDisposable_TypeInfo, 0LL, v135);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v154)(v136, *(_QWORD *)(v154 + 8));
    if ( v372 && v371[v372 - 1] == 1511 )
      --v372;
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_544;
    Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_CombineMaterialMaster___);
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
      v155 = *p_userSvtEntity;
      if ( !*p_userSvtEntity )
        goto LABEL_544;
      v157 = *(_QWORD *)&v155[5].fields.currentCryptoKey;
      v156 = *(_QWORD *)&v155[5].fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v385.fields.currentCryptoKey = v157;
      *(_QWORD *)&v385.fields.fakeValue = v156;
      v158 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v385, 0LL);
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(baseUsrSvtData->fields.svtId, 0LL);
      if ( v158 == (_DWORD)Instance )
      {
        v159 = this->fields.userSvtEntity;
        this->fields.isLimitCntTarget = 1;
        if ( !v159 )
          goto LABEL_544;
        v160 = *(_OWORD *)&v159->fields.id.fields.fakeValue;
        *(_OWORD *)&v370.fields.currentCryptoKey = *(_OWORD *)&v159->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v370.fields.fakeValue = v160;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v363 = v370;
        v161 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v363, 0LL);
        v162 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
        *(_OWORD *)&v362.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v362.fields.fakeValue = v162;
        if ( v161 != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v362, 0LL) )
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
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_544;
      Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantClassMaster___);
      if ( !*p_servantEntity )
        goto LABEL_544;
      if ( !Instance )
        goto LABEL_544;
      Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                            (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                            (*p_servantEntity)->fields.classId,
                            (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_544;
      HIDWORD(v378) = *(_DWORD *)(Instance + 52);
      v164 = UserServantEntity__getSvtClassId(baseUsrSvtData, 0LL);
      SvtClassGroupType = UserServantEntity__getSvtClassGroupType(baseUsrSvtData, v164, 0LL);
      if ( System_Int32__Equals_39386936((int32_t)&v378 + 4, 3, 0LL) )
        goto LABEL_210;
      Instance = System_Int32__Equals_39386936((int32_t)&v378 + 4, SvtClassGroupType, 0LL);
      if ( (Instance & 1) != 0 )
      {
        if ( !*p_servantEntity )
          goto LABEL_544;
        classId = (*p_servantEntity)->fields.classId;
        if ( classId == UserServantEntity__getSvtClassId(baseUsrSvtData, 0LL) )
        {
LABEL_210:
          materialExp = this->fields.materialExp;
          v167 = BalanceConfig_TypeInfo;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v167 = BalanceConfig_TypeInfo;
          }
          SameClassExp = v167->static_fields->SameClassExp;
          if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !System_Math_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
          }
          v169 = ceil((double)materialExp * (double)SameClassExp / 1000.0);
          if ( v169 == INFINITY )
            v169 = -v169;
          this->fields.materialExp = (int)v169;
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
    v171 = this->fields.userSvtEntity;
    this->fields.isLock = Instance & 1;
    if ( !v171 )
      goto LABEL_544;
    *p_isChoice = UserServantEntity__IsChoice(v171, 0LL);
    Instance = (int64_t)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_544;
    this->fields.isEventJoin = UserServantEntity__IsEventJoin((UserServantEntity_o *)Instance, 0LL);
    Instance = (int64_t)this->fields.userSvtEntity;
    this->fields.hpBase = *(_DWORD *)(v74 + 36);
    this->fields.atkBase = *(_DWORD *)(v74 + 44);
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
      v172 = UserServantEntity__getSvtClassId(baseUsrSvtData, 0LL);
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_544;
      Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantClassMaster___);
      if ( !*p_servantEntity )
        goto LABEL_544;
      if ( !Instance )
        goto LABEL_544;
      Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                            (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                            (*p_servantEntity)->fields.classId,
                            (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_544;
      LODWORD(v378) = *(_DWORD *)(Instance + 52);
      if ( !*p_servantEntity )
        goto LABEL_544;
      if ( (*p_servantEntity)->fields.classId == v172 || System_Int32__Equals_39386936((int32_t)&v378, 3, 0LL) )
      {
        this->fields.isCanStUp = 1;
        v173 = UserServantEntity__isAdjustAtkMax(baseUsrSvtData, 0LL) && this->fields.atkBase > 0;
        this->fields.isAtkUpMax = v173;
        v174 = UserServantEntity__isAdjustHpMax(baseUsrSvtData, 0LL) && this->fields.hpBase > 0;
        this->fields.isHpUpMax = v174;
        v175 = UserServantEntity__isSecondAdjustAtkMax(baseUsrSvtData, 0LL) && this->fields.atkBase > 0;
        this->fields.isAtkSecondUpMax = v175;
        v176 = UserServantEntity__isSecondAdjustHpMax(baseUsrSvtData, 0LL) && this->fields.hpBase > 0;
        this->fields.isHpSecondUpMax = v176;
      }
    }
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_544;
    v177 = (UserServantCommandCodeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)Instance,
                                               (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Instance = NetworkManager__get_UserId(0LL);
    v178 = *p_servantEntity;
    if ( !*p_servantEntity )
      goto LABEL_544;
    v179 = Instance;
    v180 = *(_QWORD *)&v178->fields.id.fields.currentCryptoKey;
    v181 = *(_QWORD *)&v178->fields.id.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v386.fields.currentCryptoKey = v180;
    *(_QWORD *)&v386.fields.fakeValue = v181;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v386, 0LL);
    if ( !v177 )
      goto LABEL_544;
    if ( UserServantCommandCodeMaster__TryGetEntity(v177, &v379, v179, (int)Instance, 0LL) )
    {
      Instance = (int64_t)v379;
      if ( !v379 )
        goto LABEL_544;
      this->fields.isEquipedCmdCard = UserServantCommandCodeEntity__IsEquipedCommandCode(v379, 0LL);
      Instance = (int64_t)v379;
      if ( !v379 )
        goto LABEL_544;
      this->fields.isCmdCardSlotOpen = UserServantCommandCodeEntity__IsCommandCardSlotOpen(v379, 0LL);
    }
  }
  v182 = this->fields.type;
  if ( v182 == 9 )
  {
    v183 = v343;
    Instance = (int64_t)userSvtEntity;
    if ( !userSvtEntity )
      goto LABEL_544;
    Instance = UserServantEntity__isLimitCountMax(userSvtEntity, 0LL);
    v207 = this->fields.userSvtEntity;
    this->fields.isLimitCntMax = Instance & 1;
    if ( !v207 )
      goto LABEL_544;
    isLevelMax = UserServantEntity__isLevelMax(v207, 0LL);
    Instance = (int64_t)this->fields.userSvtEntity;
    this->fields.isLvMax = isLevelMax;
    this->fields.isParty = v343;
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
    Instance = UserServantEntity__IsEventJoin((UserServantEntity_o *)Instance, 0LL);
    v210 = this->fields.userSvtEntity;
    this->fields.isEventJoin = Instance & 1;
    if ( !v210 )
      goto LABEL_544;
    this->fields.isIgnoreCombineLimitSpecial = UserServantEntity__IsIgnoreCombineLimitSpecial(v210, 0LL);
    Instance = CombineServantListViewItem__GetSealCombineLimit(this, v211);
    this->fields.isSealCombineLimit = Instance & 1;
    if ( baseUsrSvtData )
    {
      v212 = *p_userSvtEntity;
      if ( !*p_userSvtEntity )
        goto LABEL_544;
      v213 = v212[2];
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v370.fields.currentCryptoKey = v212[1];
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v370.fields.fakeValue = v213;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v358 = v370;
      v214 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v358, 0LL);
      v215 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
      *(_OWORD *)&v357.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v357.fields.fakeValue = v215;
      if ( v214 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v357, 0LL) )
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
    v183 = v343;
    if ( v182 != 2 )
      goto LABEL_325;
    Instance = (int64_t)userSvtEntity;
    if ( !userSvtEntity )
      goto LABEL_544;
    Instance = UserServantEntity__isLimitCountMax(userSvtEntity, 0LL);
    v184 = this->fields.userSvtEntity;
    this->fields.isLimitCntMax = Instance & 1;
    if ( !v184 )
      goto LABEL_544;
    v185 = UserServantEntity__isLevelMax(v184, 0LL);
    Instance = (int64_t)this->fields.userSvtEntity;
    this->fields.isLvMax = v185;
    this->fields.isParty = v343;
    if ( !Instance )
      goto LABEL_544;
    Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL);
    v186 = this->fields.userSvtEntity;
    this->fields.isLock = Instance & 1;
    if ( !v186 )
      goto LABEL_544;
    *p_isChoice = UserServantEntity__IsChoice(v186, 0LL);
    Instance = (int64_t)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_544;
    this->fields.isEventJoin = UserServantEntity__IsEventJoin((UserServantEntity_o *)Instance, 0LL);
    Instance = CombineServantListViewItem__GetSealCombineLimit(this, v187);
    this->fields.isSealCombineLimit = Instance & 1;
    if ( baseUsrSvtData )
    {
      v188 = *p_userSvtEntity;
      if ( !*p_userSvtEntity )
        goto LABEL_544;
      v189 = v188[2];
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v370.fields.currentCryptoKey = v188[1];
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v370.fields.fakeValue = v189;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v361 = v370;
      v190 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v361, 0LL);
      v191 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
      *(_OWORD *)&v360.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v360.fields.fakeValue = v191;
      if ( v190 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v360, 0LL) )
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
      v192 = *p_userSvtEntity;
      if ( !*p_userSvtEntity )
        goto LABEL_544;
      combineLimitId = (*p_servantEntity)->fields.combineLimitId;
      v194 = *(_QWORD *)&v192[6].fields.currentCryptoKey;
      v195 = *(_QWORD *)&v192[6].fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v387.fields.currentCryptoKey = v194;
      *(_QWORD *)&v387.fields.fakeValue = v195;
      v196 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v387, 0LL);
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_544;
      Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_CombineLimitMaster___);
      if ( !Instance )
        goto LABEL_544;
      Instance = (int64_t)CombineLimitMaster__GetEntity((CombineLimitMaster_o *)Instance, combineLimitId, v196, 0LL);
      if ( !Instance )
        goto LABEL_544;
      v197 = *(_QWORD *)(Instance + 32);
      v198 = *(_QWORD *)(Instance + 40);
      v199 = (UserServantEntity_o *)Instance;
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_544;
      v342 = v199;
      Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserItemMaster___);
      if ( !v198 )
        goto LABEL_544;
      v200 = *(_QWORD *)(v198 + 24);
      if ( (int)v200 >= 1 )
      {
        v201 = (UserItemMaster_o *)Instance;
        for ( i = 0LL; (__int64)i < (int)v200; ++i )
        {
          if ( i >= (unsigned int)v200 )
            goto LABEL_556;
          if ( !v197 )
            goto LABEL_544;
          if ( i >= *(unsigned int *)(v197 + 24) )
            goto LABEL_556;
          v203 = *p_userSvtEntity;
          if ( !*p_userSvtEntity )
            goto LABEL_544;
          v204 = v203[4];
          v205 = *(_DWORD *)(v198 + 32 + 4 * i);
          v206 = *(_DWORD *)(v197 + 32 + 4 * i);
          *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v370.fields.currentCryptoKey = v203[3];
          *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v370.fields.fakeValue = v204;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v359 = v370;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v359, 0LL);
          if ( !v201 )
            goto LABEL_544;
          Instance = UserItemMaster__TryGetEntity(v201, &v377, Instance, v205, 0LL);
          if ( (Instance & 1) == 0 )
            goto LABEL_370;
          if ( !v377 )
            goto LABEL_544;
          if ( v205 == v377->fields.itemId )
          {
            if ( v206 > v377->fields.num )
            {
LABEL_370:
              *p_isLimitUpItemNum = 0;
              break;
            }
            *p_isLimitUpItemNum = 1;
          }
          LODWORD(v200) = *(_DWORD *)(v198 + 24);
        }
      }
      baseUsrSvtData = v340;
      v183 = v343;
      if ( *(_DWORD *)(v334 + 96) < SLODWORD(v342->fields.id.fields.hiddenValue) )
        *p_isLimitUpItemNum = 0;
      goto LABEL_324;
    }
  }
  this->fields.isHeroineSvt = 1;
LABEL_324:
  v182 = this->fields.type;
LABEL_325:
  if ( (v182 | 8) == 11 )
  {
    Instance = (int64_t)this->fields.userSvtEntity;
    this->fields.isParty = v183;
    if ( !Instance )
      goto LABEL_544;
    Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL);
    v216 = this->fields.userSvtEntity;
    this->fields.isLock = Instance & 1;
    if ( !v216 )
      goto LABEL_544;
    *p_isChoice = UserServantEntity__IsChoice(v216, 0LL);
    Instance = (int64_t)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_544;
    Instance = UserServantEntity__IsEventJoin((UserServantEntity_o *)Instance, 0LL);
    this->fields.isEventJoin = Instance & 1;
    if ( baseUsrSvtData )
    {
      v217 = *p_userSvtEntity;
      if ( !*p_userSvtEntity )
        goto LABEL_544;
      v218 = v217[2];
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v370.fields.currentCryptoKey = v217[1];
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v370.fields.fakeValue = v218;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v356 = v370;
      v219 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v356, 0LL);
      v220 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
      *(_OWORD *)&v355.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v355.fields.fakeValue = v220;
      if ( v219 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v355, 0LL) )
        this->fields.isBaseSvt = 1;
    }
    Instance = (int64_t)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_544;
    if ( UserServantEntity__IsHeroine((UserServantEntity_o *)Instance, 0LL) )
      this->fields.isHeroineSvt = 1;
    v182 = this->fields.type;
    if ( v182 == 3 )
    {
      CombineServantListViewItem__SetSkillInfo(this, v52);
      v182 = this->fields.type;
    }
    if ( v182 == 11 )
    {
      CombineServantListViewItem__SetAppendSkillInfo(this, v52);
      v182 = this->fields.type;
    }
  }
  if ( v182 != 4 )
    goto LABEL_387;
  Instance = (int64_t)this->fields.userSvtEntity;
  this->fields.isParty = v183;
  if ( !Instance )
    goto LABEL_544;
  Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL);
  v221 = this->fields.userSvtEntity;
  this->fields.isLock = Instance & 1;
  if ( !v221 )
    goto LABEL_544;
  *p_isChoice = UserServantEntity__IsChoice(v221, 0LL);
  Instance = (int64_t)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_544;
  Instance = UserServantEntity__IsEventJoin((UserServantEntity_o *)Instance, 0LL);
  this->fields.isEventJoin = Instance & 1;
  if ( baseUsrSvtData )
  {
    v222 = *p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_544;
    v223 = v222[2];
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v370.fields.currentCryptoKey = v222[1];
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v370.fields.fakeValue = v223;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v354 = v370;
    v224 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v354, 0LL);
    v225 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
    *(_OWORD *)&v353.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v353.fields.fakeValue = v225;
    if ( v224 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v353, 0LL) )
      this->fields.isBaseSvt = 1;
  }
  Instance = (int64_t)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
LABEL_544:
    sub_B52A5C(Instance, v52);
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
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_544;
      Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
      if ( !Instance )
        goto LABEL_544;
      Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                            (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                            id,
                            (const MethodInfo_23E22D8 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
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
      v230 = SameSvtNpLvCache;
      CombineServantListViewItem__GetNpInfo(this, &tdLv[1], tdLv, &tdMaxLv, v229);
      if ( v332 <= 1200000 )
      {
        Instance = (int64_t)*p_userSvtEntity;
        if ( !*p_userSvtEntity )
          goto LABEL_544;
        v232 = UserServantEntity__checkTreasureDeviceLevelUp((UserServantEntity_o *)Instance, v230, 0LL);
        v233 = tdLv[0];
        if ( tdLv[0] >= v232 )
        {
          v236 = 0;
        }
        else
        {
          v234 = tdLv[1];
          v235 = v232;
          v236 = 0;
          do
          {
            Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !Instance )
              goto LABEL_544;
            Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
            if ( !Instance )
              goto LABEL_544;
            Instance = (int64_t)TreasureDvcLvMaster__GetEntity((TreasureDvcLvMaster_o *)Instance, v234, v233, 0LL);
            if ( Instance )
              v236 += *(_DWORD *)(Instance + 92);
            ++v233;
          }
          while ( v233 < v235 );
          baseUsrSvtData = v340;
          if ( !this )
            goto LABEL_544;
        }
        v231 = v332 >= v236;
      }
      else
      {
        v231 = 1;
      }
      this->fields.isSameSvt = v231;
    }
  }
  v182 = this->fields.type;
LABEL_387:
  if ( v182 != 5 )
    goto LABEL_437;
  this->fields.isParty = v183;
  this->fields.isMaterialSvt = isMtSvt;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_544;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantLeaderMaster___);
  if ( !Instance )
    goto LABEL_544;
  Instance = *(_QWORD *)(Instance + 32);
  if ( !Instance )
    goto LABEL_544;
  v239 = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
           (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
           (const MethodInfo_2B98BDC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !v239 )
    sub_B52A5C(0LL, v237);
  while ( 1 )
  {
    v240 = v239->klass;
    if ( *(_WORD *)&v239->klass->_2.bitflags1 )
    {
      v241 = 0LL;
      v242 = &v240->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)v242 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v241;
        v242 += 4;
        if ( v241 >= *(unsigned __int16 *)&v239->klass->_2.bitflags1 )
          goto LABEL_396;
      }
      v243 = (__int64)&v240->vtable[*v242].method;
    }
    else
    {
LABEL_396:
      v243 = sub_AEB880(v239, System_Collections_IEnumerator_TypeInfo, 0LL, v238);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v243)(
            v239,
            *(_QWORD *)(v243 + 8)) & 1) == 0 )
      break;
    v244 = v239->klass;
    if ( *(_WORD *)&v239->klass->_2.bitflags1 )
    {
      v245 = 0LL;
      v246 = &v244->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v246 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v245;
        v246 += 4;
        if ( v245 >= *(unsigned __int16 *)&v239->klass->_2.bitflags1 )
          goto LABEL_403;
      }
      v247 = (__int64)&v244->vtable[*v246].method;
    }
    else
    {
LABEL_403:
      v247 = sub_AEB880(v239, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v238);
    }
    v248 = (_QWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v247)(
                       v239,
                       *(_QWORD *)(v247 + 8));
    if ( !v248 )
      sub_B52A5C(0LL, v249);
    v250 = *(&UserServantLeaderEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*v248 + 300LL) < (unsigned int)v250
      || *(UserServantLeaderEntity_c **)(*(_QWORD *)(*v248 + 200LL) + 8 * v250 - 8) != UserServantLeaderEntity_TypeInfo )
    {
      goto LABEL_548;
    }
    v251 = (UserServantEntity_o *)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      sub_B52A5C(v248, UserServantLeaderEntity_TypeInfo);
    v252 = *(_OWORD *)&v251->fields.id.fields.fakeValue;
    v253 = v248[7];
    *(_OWORD *)&v370.fields.currentCryptoKey = *(_OWORD *)&v251->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v370.fields.fakeValue = v252;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v352 = v370;
    if ( v253 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v352, 0LL) )
    {
      this->fields.isUseSupport = 1;
      break;
    }
  }
  v371[v372++] = 3557;
  v254 = v239->klass;
  if ( *(_WORD *)&v239->klass->_2.bitflags1 )
  {
    v255 = 0LL;
    v256 = &v254->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v256 - 1) != System_IDisposable_TypeInfo )
    {
      ++v255;
      v256 += 4;
      if ( v255 >= *(unsigned __int16 *)&v239->klass->_2.bitflags1 )
        goto LABEL_418;
    }
    v257 = (__int64)&v254->vtable[*v256].method;
  }
  else
  {
LABEL_418:
    v257 = sub_AEB880(v239, System_IDisposable_TypeInfo, 0LL, v238);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v257)(v239, *(_QWORD *)(v257 + 8));
  if ( v372 && v371[v372 - 1] == 3557 )
    --v372;
  IsLock = (int64_t)this->fields.userSvtEntity;
  this->fields.isFavorite = isFavorite;
  if ( !IsLock )
    goto LABEL_545;
  IsLock = UserServantEntity__IsLock((UserServantEntity_o *)IsLock, 0LL);
  v259 = this->fields.userSvtEntity;
  this->fields.isLock = IsLock & 1;
  if ( !v259 )
    goto LABEL_545;
  *p_isChoice = UserServantEntity__IsChoice(v259, 0LL);
  IsLock = (int64_t)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_545;
  this->fields.isEventJoin = UserServantEntity__IsEventJoin((UserServantEntity_o *)IsLock, 0LL);
  v260 = baseUsrSvtData && UserServantEntity__IsEventJoin(baseUsrSvtData, 0LL);
  IsLock = (int64_t)this->fields.userSvtEntity;
  this->fields.isEventJoinBaseSvt = v260;
  if ( !IsLock )
    goto LABEL_545;
  IsLock = UserServantEntity__IsMaterialTd((UserServantEntity_o *)IsLock, 0LL);
  this->fields.isMaterialTdSvt = IsLock & 1;
  if ( baseUsrSvtData )
  {
    v261 = (UserServantEntity_o *)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_545;
    v262 = *(_OWORD *)&v261->fields.id.fields.fakeValue;
    *(_OWORD *)&v370.fields.currentCryptoKey = *(_OWORD *)&v261->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v370.fields.fakeValue = v262;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v351 = v370;
    v263 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v351, 0LL);
    v264 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
    *(_OWORD *)&v350.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v350.fields.fakeValue = v264;
    if ( v263 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v350, 0LL) )
      this->fields.isBaseSvt = 1;
  }
LABEL_437:
  v265 = this->fields.type;
  if ( v265 == 6 )
  {
    IsLock = (int64_t)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_545;
    IsLock = UserServantEntity__isExceedLvMax((UserServantEntity_o *)IsLock, 0LL);
    v266 = this->fields.userSvtEntity;
    this->fields.isLvExceedMax = IsLock & 1;
    if ( !v266 )
      goto LABEL_545;
    IsLock = UserServantEntity__isLimitCountMax(v266, 0LL);
    v267 = this->fields.userSvtEntity;
    this->fields.isLimitCntMax = IsLock & 1;
    if ( !v267 )
      goto LABEL_545;
    v268 = UserServantEntity__isLevelMax(v267, 0LL);
    IsLock = (int64_t)this->fields.userSvtEntity;
    this->fields.isLvMax = v268;
    this->fields.isParty = v183;
    if ( !IsLock )
      goto LABEL_545;
    IsLock = UserServantEntity__IsLock((UserServantEntity_o *)IsLock, 0LL);
    v269 = this->fields.userSvtEntity;
    this->fields.isLock = IsLock & 1;
    if ( !v269 )
      goto LABEL_545;
    *p_isChoice = UserServantEntity__IsChoice(v269, 0LL);
    IsLock = (int64_t)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_545;
    IsLock = UserServantEntity__IsEventJoin((UserServantEntity_o *)IsLock, 0LL);
    this->fields.isEventJoin = IsLock & 1;
    if ( baseUsrSvtData )
    {
      v270 = (UserServantEntity_o *)*p_userSvtEntity;
      if ( !*p_userSvtEntity )
        goto LABEL_545;
      v271 = *(_OWORD *)&v270->fields.id.fields.fakeValue;
      *(_OWORD *)&v370.fields.currentCryptoKey = *(_OWORD *)&v270->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v370.fields.fakeValue = v271;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v349 = v370;
      v272 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v349, 0LL);
      v273 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
      *(_OWORD *)&v348.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v348.fields.fakeValue = v273;
      if ( v272 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v348, 0LL) )
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
        v275 = (int32_t *)SvtExceedEnt;
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        IsLock = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_CommonConsumeMaster___);
        if ( !IsLock )
          goto LABEL_545;
        IdEntityList = CommonConsumeMaster__GetIdEntityList((CommonConsumeMaster_o *)IsLock, v275[12], 0LL);
        if ( IdEntityList )
        {
          v277 = IdEntityList;
          v278 = (System_Collections_Generic_HashSet_int__o *)sub_B52A54(System_Collections_Generic_HashSet_int__TypeInfo);
          System_Collections_Generic_HashSet_int____ctor(
            v278,
            (const MethodInfo_24D9648 *)Method_System_Collections_Generic_HashSet_int___ctor___68488952);
          v279 = (System_Collections_Generic_HashSet_int__o *)sub_B52A54(System_Collections_Generic_HashSet_int__TypeInfo);
          System_Collections_Generic_HashSet_int____ctor(
            v279,
            (const MethodInfo_24D9648 *)Method_System_Collections_Generic_HashSet_int___ctor___68488952);
          v280 = v277->max_length;
          if ( v280 >= 1 )
          {
            v281 = 0LL;
            do
            {
              if ( (unsigned int)v281 >= v280 )
              {
LABEL_555:
                v330 = sub_B52A88(IsLock);
                sub_B52A28(v330, 0LL);
              }
              v282 = v277->m_Items[v281];
              if ( !v282 )
                goto LABEL_545;
              if ( !v278 )
                goto LABEL_545;
              IsLock = System_Collections_Generic_HashSet_int___Add(
                         v278,
                         v282->fields.objectId,
                         (const MethodInfo_24DA824 *)Method_System_Collections_Generic_HashSet_int__Add__);
              if ( !v279 )
                goto LABEL_545;
              IsLock = System_Collections_Generic_HashSet_int___Add(
                         v279,
                         v282->fields.num,
                         (const MethodInfo_24DA824 *)Method_System_Collections_Generic_HashSet_int__Add__);
              v280 = v277->max_length;
            }
            while ( (int)++v281 < v280 );
          }
          if ( v275[13] >= 1 )
          {
            if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !DataManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            }
            IsLock = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_SvtCoinMaster___);
            v283 = (UserServantEntity_o *)*p_userSvtEntity;
            if ( !*p_userSvtEntity )
              goto LABEL_545;
            v284 = (DataMasterBase_WarMaster__WarEntity__int__o *)IsLock;
            v285 = *(_QWORD *)&v283->fields.svtId.fields.currentCryptoKey;
            v286 = *(_QWORD *)&v283->fields.svtId.fields.fakeValue;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v388.fields.currentCryptoKey = v285;
            *(_QWORD *)&v388.fields.fakeValue = v286;
            IsLock = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v388, 0LL);
            if ( !v284 )
              goto LABEL_545;
            IsLock = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                v284,
                                IsLock,
                                (const MethodInfo_23E22D8 *)Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__GetEntity__);
            if ( !IsLock )
              goto LABEL_545;
            if ( !v278 )
              goto LABEL_545;
            IsLock = System_Collections_Generic_HashSet_int___Add(
                       v278,
                       *(_DWORD *)(IsLock + 24),
                       (const MethodInfo_24DA824 *)Method_System_Collections_Generic_HashSet_int__Add__);
            if ( !v279 )
              goto LABEL_545;
            System_Collections_Generic_HashSet_int___Add(
              v279,
              v275[13],
              (const MethodInfo_24DA824 *)Method_System_Collections_Generic_HashSet_int__Add__);
          }
          v287 = this->fields.userSvtEntity;
          v288 = System_Linq_Enumerable__ToArray_int_(
                   (System_Collections_Generic_IEnumerable_TSource__o *)v278,
                   (const MethodInfo_1B6E46C *)Method_System_Linq_Enumerable_ToArray_int___);
          v289 = System_Linq_Enumerable__ToArray_int_(
                   (System_Collections_Generic_IEnumerable_TSource__o *)v279,
                   (const MethodInfo_1B6E46C *)Method_System_Linq_Enumerable_ToArray_int___);
          baseUsrSvtData = v340;
          v183 = v343;
          this->fields.isLvExceedItemNum = CombineUtility__CheckCombineNeedItemsEnough(
                                             v287,
                                             v288,
                                             v289,
                                             *(_DWORD *)(v334 + 96),
                                             v275[8],
                                             0LL);
        }
      }
    }
    v265 = this->fields.type;
  }
  if ( v265 != 8 )
    goto LABEL_530;
  IsLock = (int64_t)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_545;
  this->fields.isFriendshipExceedMax = UserServantEntity__isExceedFriendshipMax((UserServantEntity_o *)IsLock, 0LL);
  v290 = *(_QWORD *)(v339 + 100);
  v291 = *(_QWORD *)(v339 + 108);
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v389.fields.currentCryptoKey = v290;
  *(_QWORD *)&v389.fields.fakeValue = v291;
  IsLock = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v389, 0LL);
  if ( !*p_servantEntity )
    goto LABEL_545;
  maxFriendshipRank = (*p_servantEntity)->fields.maxFriendshipRank;
  v293 = *(_DWORD *)(v339 + 116);
  v294 = this->fields.userSvtEntity;
  this->fields.isParty = v183;
  this->fields.isFriendshipRankMax = (_DWORD)IsLock == v293 + maxFriendshipRank;
  if ( !v294 )
    goto LABEL_545;
  IsLock = UserServantEntity__IsLock(v294, 0LL);
  v295 = this->fields.userSvtEntity;
  this->fields.isLock = IsLock & 1;
  if ( !v295 )
    goto LABEL_545;
  *p_isChoice = UserServantEntity__IsChoice(v295, 0LL);
  IsLock = (int64_t)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_545;
  IsLock = UserServantEntity__IsEventJoin((UserServantEntity_o *)IsLock, 0LL);
  this->fields.isEventJoin = IsLock & 1;
  if ( baseUsrSvtData )
  {
    v296 = (UserServantEntity_o *)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_545;
    v297 = *(_OWORD *)&v296->fields.id.fields.fakeValue;
    *(_OWORD *)&v370.fields.currentCryptoKey = *(_OWORD *)&v296->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v370.fields.fakeValue = v297;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v347 = v370;
    v298 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v347, 0LL);
    v299 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
    *(_OWORD *)&v346.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v346.fields.fakeValue = v299;
    if ( v298 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v346, 0LL) )
      this->fields.isBaseSvt = 1;
  }
  IsLock = (int64_t)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
LABEL_545:
    sub_B52A5C(IsLock, v52);
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
  v300 = (*p_servantEntity)->fields.maxFriendshipRank;
  v301 = *(_DWORD *)(v339 + 116);
  IsLock = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !IsLock )
    goto LABEL_545;
  IsLock = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                      (DataManager_o *)IsLock,
                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_FriendshipMaster___);
  if ( !*p_servantEntity )
    goto LABEL_545;
  if ( !IsLock )
    goto LABEL_545;
  IsLock = (int64_t)FriendshipMaster__GetEntity(
                      (FriendshipMaster_o *)IsLock,
                      (*p_servantEntity)->fields.friendshipId,
                      v300 + v301 + 1,
                      0LL);
  if ( !IsLock )
    goto LABEL_545;
  v302 = IsLock;
  v303 = *(_QWORD *)(IsLock + 32);
  v304 = *(_QWORD *)(IsLock + 40);
  IsLock = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !IsLock )
    goto LABEL_545;
  IsLock = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                      (DataManager_o *)IsLock,
                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !v304 )
    goto LABEL_545;
  if ( *(int *)(v304 + 24) >= 1 )
  {
    v305 = (UserItemMaster_o *)IsLock;
    v306 = 0LL;
    v307 = v304 + 32;
    while ( 1 )
    {
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      IsLock = NetworkManager__get_UserId(0LL);
      if ( v306 >= *(unsigned int *)(v304 + 24) )
        goto LABEL_555;
      if ( !v305 )
        goto LABEL_545;
      IsLock = UserItemMaster__TryGetEntity(v305, &v373, IsLock, *(_DWORD *)(v307 + 4 * v306), 0LL);
      if ( (IsLock & 1) == 0 )
        break;
      if ( v306 >= *(unsigned int *)(v304 + 24) )
        goto LABEL_555;
      if ( !v373 )
        goto LABEL_545;
      if ( *(_DWORD *)(v307 + 4 * v306) == v373->fields.itemId )
      {
        if ( !v303 )
          goto LABEL_545;
        if ( v306 >= *(unsigned int *)(v303 + 24) )
          goto LABEL_555;
        v308 = *(_DWORD *)(v303 + 32 + 4 * v306) <= v373->fields.num;
        goto LABEL_526;
      }
LABEL_527:
      if ( (__int64)++v306 >= *(int *)(v304 + 24) )
        goto LABEL_528;
    }
    v308 = 0;
LABEL_526:
    this->fields.isFriendshipExceedItemNum = v308;
    goto LABEL_527;
  }
LABEL_528:
  if ( *(_DWORD *)(v334 + 96) < *(_DWORD *)(v302 + 28) )
    this->fields.isFriendshipExceedItemNum = 0;
LABEL_530:
  IsLock = (int64_t)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_545;
  IsLock = UserServantEntity__getDispLimitCount((UserServantEntity_o *)IsLock, 0, 0LL);
  v309 = this->fields.userSvtEntity;
  this->fields.dispLimitCount = IsLock;
  if ( !v309 )
    goto LABEL_545;
  SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v309, -1, 0LL);
  this->fields.skillCategoryIdList = SkillCategoryIdList;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.skillCategoryIdList,
    (System_Int32_array **)SkillCategoryIdList,
    v311,
    v312,
    v313,
    v314,
    v315,
    v316);
  IsLock = (int64_t)this->fields.userSvtEntity;
  if ( !IsLock )
    goto LABEL_545;
  TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                   (UserServantEntity_o *)IsLock,
                                   0,
                                   0LL);
  this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.tdCategoryIdList,
    (System_Int32_array **)TreasureDeviceCategoryIdList,
    v318,
    v319,
    v320,
    v321,
    v322,
    v323);
  IsLock = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !IsLock )
    goto LABEL_545;
  IsLock = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                      (DataManager_o *)IsLock,
                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !IsLock )
    goto LABEL_545;
  IsLock = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                      (DataMasterBase_WarMaster__WarEntity__int__o *)IsLock,
                      this->fields.classId,
                      (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !IsLock )
    goto LABEL_545;
  v324 = *(int *)(IsLock + 48);
  v325 = this->fields.servantEntity;
  this->fields.priority = v324;
  this->fields.sortValue1B = v324;
  if ( !v325 )
    goto LABEL_545;
  v326 = (UserServantEntity_o *)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_545;
  this->fields.sortValue2 = ((__int64)v325->fields.collectionNo << 16) | ((unsigned __int64)(unsigned int)this->fields.rarity << 48) | v326->fields.lv;
  v328 = *(_QWORD *)&v326->fields.svtId.fields.currentCryptoKey;
  v327 = *(_QWORD *)&v326->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v390.fields.currentCryptoKey = v328;
  *(_QWORD *)&v390.fields.fakeValue = v327;
  v329 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v390, 0LL);
  IsLock = (int64_t)this->fields.iconLabelInfo1;
  this->fields.sortValue2B = v329;
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

  if ( (byte_42B2CCB & 1) == 0 )
  {
    sub_B52984(&SvtUseSkillData_TypeInfo);
    byte_42B2CCB = 1;
  }
  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
    return UserServantEntity__getAppendSkillInfo(userSvtEntity, 0LL);
  v5 = (SvtUseSkillData_o *)sub_B52A54(SvtUseSkillData_TypeInfo);
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
      sub_B52A5C(TreasureDeviceInfo, v10);
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
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v4; // x1
  struct ServantEntity_o *servantEntity; // x8
  int32_t combineLimitId; // w2
  int32_t condTargetId; // w19
  int32_t condType; // w21
  int64_t condNum; // x20
  CombineLimitReleaseEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42B2CCC & 1) == 0 )
  {
    sub_B52984(&CondType_TypeInfo);
    sub_B52984(&Method_DataManager_GetMaster_CombineLimitReleaseMaster___);
    sub_B52984(&DataManager_TypeInfo);
    byte_42B2CCC = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_CombineLimitReleaseMaster___);
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
    sub_B52A5C(Master_WarQuestSelectionMaster, v4);
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
  UserServantEntity_o *userSvtEntity; // x0
  bool v6; // w20
  BalanceConfig_c *v7; // x0
  SkillInfo_array *v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_42B2CCA & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&SkillInfo___TypeInfo);
    byte_42B2CCA = 1;
  }
  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
  {
    v6 = 1;
    UserServantEntity__getSkillInfo(userSvtEntity, skillInfoList, -1, -1, 1, 0, -1, 0LL);
  }
  else
  {
    v7 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v7 = BalanceConfig_TypeInfo;
    }
    v8 = (SkillInfo_array *)sub_B5299C(SkillInfo___TypeInfo, (unsigned int)v7->static_fields->SvtSkillListMax);
    *skillInfoList = v8;
    sub_B52920((BattleServantConfConponent_o *)skillInfoList, (System_Int32_array **)v8, v9, v10, v11, v12, v13, v14);
    return 0;
  }
  return v6;
}


bool __fastcall CombineServantListViewItem__IsMatchBaseServantFilter(
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
  FilterKindList_c *v16; // x0
  ListViewSort_FilterKind_array *v17; // x21
  UserServantEntity_o *v19; // x0
  int32_t dispLimitCount; // w21
  UserServantEntity_o *v21; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  _BOOL4 IsUnSelectedAllTargetFilters; // w21
  _BOOL4 v37; // w23
  _BOOL4 IsMatchEffectCategory; // w22
  _BOOL4 v39; // w0
  __int64 v40; // x0

  if ( (byte_42B2CBA & 1) == 0 )
  {
    sub_B52984(&FilterKindList_TypeInfo);
    sub_B52984(&ListViewSort_FilterKind___TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    sub_B52984(&ServantEventBonusFilterController_TypeInfo);
    byte_42B2CBA = 1;
  }
  v5 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v5 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v5->static_fields->ClassGroupFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_72;
  ClassGroupFilterKindList = (__int64)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                        (System_Collections_Generic_List_Voice_BATTLE__o *)ClassGroupFilterKindList,
                                        (const MethodInfo_305C094 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_72;
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0LL) )
  {
    v7 = FilterKindList_TypeInfo;
    if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
      v7 = FilterKindList_TypeInfo;
    }
    ClassGroupFilterKindList = (__int64)v7->static_fields->ClassFilterKindList;
    if ( !ClassGroupFilterKindList )
      goto LABEL_72;
    v8 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                            (System_Collections_Generic_List_Voice_BATTLE__o *)ClassGroupFilterKindList,
                                            (const MethodInfo_305C094 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v8, 0LL)
      && !ListViewSort__IsMatchClassFilter(sort, this->fields.servantEntity, 0LL) )
    {
      return 0;
    }
  }
  else if ( !ListViewSort__IsMatchClassGroupFilter(sort, this->fields.servantEntity, 0LL) )
  {
    return 0;
  }
  v9 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v9 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v9->static_fields->NpTypeFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_72;
  v10 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           (System_Collections_Generic_List_Voice_BATTLE__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_305C094 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v10, 0LL)
    && !ListViewSort__IsMatchNPTypeFilter(sort, this->fields.userSvtEntity, 0LL) )
  {
    return 0;
  }
  v11 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v11 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v11->static_fields->NpEffectFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_72;
  v12 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           (System_Collections_Generic_List_Voice_BATTLE__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_305C094 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v12, 0LL)
    && !ListViewSort__IsMatchNPEffectFilter(sort, this->fields.userSvtEntity, 0LL) )
  {
    return 0;
  }
  v13 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v13 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v13->static_fields->CombineBaseServantFilterKindList;
  if ( !ClassGroupFilterKindList )
LABEL_72:
    sub_B52A5C(ClassGroupFilterKindList, sort);
  v14 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           (System_Collections_Generic_List_Voice_BATTLE__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_305C094 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v14, 0LL)
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
    v19 = this->fields.userSvtEntity;
    if ( v19 )
    {
      dispLimitCount = this->fields.dispLimitCount;
      if ( dispLimitCount != UserServantEntity__getDispLimitCount(v19, 0, 0LL) )
      {
        ClassGroupFilterKindList = (__int64)this->fields.userSvtEntity;
        if ( !ClassGroupFilterKindList )
          goto LABEL_72;
        ClassGroupFilterKindList = UserServantEntity__getDispLimitCount(
                                     (UserServantEntity_o *)ClassGroupFilterKindList,
                                     0,
                                     0LL);
        v21 = this->fields.userSvtEntity;
        this->fields.dispLimitCount = ClassGroupFilterKindList;
        if ( !v21 )
          goto LABEL_72;
        SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v21, -1, 0LL);
        this->fields.skillCategoryIdList = SkillCategoryIdList;
        sub_B52920(
          (BattleServantConfConponent_o *)&this->fields.skillCategoryIdList,
          (System_Int32_array **)SkillCategoryIdList,
          v23,
          v24,
          v25,
          v26,
          v27,
          v28);
        ClassGroupFilterKindList = (__int64)this->fields.userSvtEntity;
        if ( !ClassGroupFilterKindList )
          goto LABEL_72;
        TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                         (UserServantEntity_o *)ClassGroupFilterKindList,
                                         0,
                                         0LL);
        this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
        sub_B52920(
          (BattleServantConfConponent_o *)&this->fields.tdCategoryIdList,
          (System_Int32_array **)TreasureDeviceCategoryIdList,
          v30,
          v31,
          v32,
          v33,
          v34,
          v35);
      }
    }
    ClassGroupFilterKindList = sub_B5299C(ListViewSort_FilterKind___TypeInfo, 1LL);
    if ( !ClassGroupFilterKindList )
      goto LABEL_72;
    if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
      goto LABEL_73;
    *(_DWORD *)(ClassGroupFilterKindList + 32) = 50;
    IsUnSelectedAllTargetFilters = ListViewSort__IsUnSelectedAllTargetFilters(
                                     sort,
                                     (ListViewSort_FilterKind_array *)ClassGroupFilterKindList,
                                     0LL);
    ClassGroupFilterKindList = sub_B5299C(ListViewSort_FilterKind___TypeInfo, 1LL);
    if ( !ClassGroupFilterKindList )
      goto LABEL_72;
    if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
    {
LABEL_73:
      v40 = sub_B52A88(ClassGroupFilterKindList);
      sub_B52A28(v40, 0LL);
    }
    *(_DWORD *)(ClassGroupFilterKindList + 32) = 51;
    v37 = ListViewSort__IsUnSelectedAllTargetFilters(
            sort,
            (ListViewSort_FilterKind_array *)ClassGroupFilterKindList,
            0LL);
    IsMatchEffectCategory = ServantEquipEffectFilterController__IsMatchEffectCategory(
                              this->fields.tdCategoryIdList,
                              sort,
                              0LL);
    v39 = ServantEquipEffectFilterController__IsMatchEffectCategory(this->fields.skillCategoryIdList, sort, 0LL);
    if ( ((IsUnSelectedAllTargetFilters ^ v37) & 1) != 0 )
    {
      if ( IsUnSelectedAllTargetFilters )
      {
        if ( !v39 )
          return 0;
      }
      else if ( !IsMatchEffectCategory )
      {
        return 0;
      }
    }
    else if ( !IsMatchEffectCategory && !v39 )
    {
      return 0;
    }
  }
  ClassGroupFilterKindList = sub_B5299C(ListViewSort_FilterKind___TypeInfo, 1LL);
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
  v16 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v16 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v16->static_fields->RarityFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_72;
  v17 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           (System_Collections_Generic_List_Voice_BATTLE__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_305C094 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v17, 0LL)
      || ListViewSort__IsSelectedAllTargetFilters(sort, v17, 0LL)
      || ListViewSort__IsMatchRarityFilter(sort, this->fields.rarity, 0LL);
}


bool __fastcall CombineServantListViewItem__IsMatchMaterialFilter(
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
  bool IsMatchClassGroupFilter; // w0
  FilterKindList_c *v11; // x0
  ListViewSort_FilterKind_array *v12; // x0
  FilterKindList_c *v13; // x0
  ListViewSort_FilterKind_array *v14; // x0
  FilterKindList_c *v15; // x0
  ListViewSort_FilterKind_array *v16; // x0
  UserServantEntity_o *userSvtEntity; // x21
  int v18; // w21
  UserServantEntity_o *v19; // x0
  int32_t dispLimitCount; // w21
  UserServantEntity_o *v21; // x8
  System_Int32_array **SkillCategoryIdList; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Int32_array **TreasureDeviceCategoryIdList; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  _BOOL4 IsUnSelectedAllTargetFilters; // w21
  _BOOL4 v37; // w23
  _BOOL4 IsMatchEffectCategory; // w22
  _BOOL4 v39; // w0
  bool CanNotSelect; // w0
  FilterKindList_c *v41; // x0
  ListViewSort_FilterKind_array *v42; // x21
  __int64 v44; // x0

  v4 = this;
  if ( (byte_42B2CBB & 1) == 0 )
  {
    sub_B52984(&FilterKindList_TypeInfo);
    sub_B52984(&ListViewSort_FilterKind___TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    this = (CombineServantListViewItem_o *)sub_B52984(&ServantEventBonusFilterController_TypeInfo);
    byte_42B2CBB = 1;
  }
  if ( !sort )
    goto LABEL_88;
  v5 = ListViewSort__GetFilter(sort, 28, 0LL) && v4->fields.isSameClass;
  v6 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v6 = FilterKindList_TypeInfo;
  }
  this = (CombineServantListViewItem_o *)v6->static_fields->ClassGroupFilterKindList;
  if ( !this )
    goto LABEL_88;
  v7 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                          (System_Collections_Generic_List_Voice_BATTLE__o *)this,
                                          (const MethodInfo_305C094 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v7, 0LL) )
  {
    IsMatchClassGroupFilter = ListViewSort__IsMatchClassGroupFilter(sort, v4->fields.servantEntity, 0LL);
    if ( v5 )
      goto LABEL_24;
    goto LABEL_21;
  }
  v8 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v8 = FilterKindList_TypeInfo;
  }
  this = (CombineServantListViewItem_o *)v8->static_fields->ClassFilterKindList;
  if ( !this )
    goto LABEL_88;
  v9 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                          (System_Collections_Generic_List_Voice_BATTLE__o *)this,
                                          (const MethodInfo_305C094 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v9, 0LL) )
    goto LABEL_92;
  this = (CombineServantListViewItem_o *)sub_B5299C(ListViewSort_FilterKind___TypeInfo, 1LL);
  if ( !this )
    goto LABEL_88;
  if ( !this->fields.sortIndex )
    goto LABEL_89;
  LODWORD(this->fields.sortValue0) = 28;
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)this, 0LL) )
  {
LABEL_92:
    IsMatchClassGroupFilter = ListViewSort__IsMatchClassFilter(sort, v4->fields.servantEntity, 0LL);
    if ( !v5 )
    {
LABEL_21:
      if ( !IsMatchClassGroupFilter )
        return 0;
    }
  }
LABEL_24:
  v11 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v11 = FilterKindList_TypeInfo;
  }
  this = (CombineServantListViewItem_o *)v11->static_fields->NpTypeFilterKindList;
  if ( !this )
    goto LABEL_88;
  v12 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           (System_Collections_Generic_List_Voice_BATTLE__o *)this,
                                           (const MethodInfo_305C094 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v12, 0LL)
    && !ListViewSort__IsMatchNPTypeFilter(sort, v4->fields.userSvtEntity, 0LL) )
  {
    return 0;
  }
  v13 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v13 = FilterKindList_TypeInfo;
  }
  this = (CombineServantListViewItem_o *)v13->static_fields->NpEffectFilterKindList;
  if ( !this )
    goto LABEL_88;
  v14 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           (System_Collections_Generic_List_Voice_BATTLE__o *)this,
                                           (const MethodInfo_305C094 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v14, 0LL)
    && !ListViewSort__IsMatchNPEffectFilter(sort, v4->fields.userSvtEntity, 0LL) )
  {
    return 0;
  }
  v15 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v15 = FilterKindList_TypeInfo;
  }
  this = (CombineServantListViewItem_o *)v15->static_fields->ServantTypeFilterKindList;
  if ( !this )
LABEL_88:
    sub_B52A5C(this, sort);
  v16 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           (System_Collections_Generic_List_Voice_BATTLE__o *)this,
                                           (const MethodInfo_305C094 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v16, 0LL)
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
    v19 = v4->fields.userSvtEntity;
    if ( v19 )
    {
      dispLimitCount = v4->fields.dispLimitCount;
      if ( dispLimitCount != UserServantEntity__getDispLimitCount(v19, 0, 0LL) )
      {
        this = (CombineServantListViewItem_o *)v4->fields.userSvtEntity;
        if ( !this )
          goto LABEL_88;
        this = (CombineServantListViewItem_o *)UserServantEntity__getDispLimitCount((UserServantEntity_o *)this, 0, 0LL);
        v21 = v4->fields.userSvtEntity;
        v4->fields.dispLimitCount = (int)this;
        if ( !v21 )
          goto LABEL_88;
        SkillCategoryIdList = (System_Int32_array **)UserServantEntity__GetSkillCategoryIdList(v21, -1, 0LL);
        v4->fields.skillCategoryIdList = (struct System_Int32_array *)SkillCategoryIdList;
        sub_B52920(
          (BattleServantConfConponent_o *)&v4->fields.skillCategoryIdList,
          SkillCategoryIdList,
          v23,
          v24,
          v25,
          v26,
          v27,
          v28);
        this = (CombineServantListViewItem_o *)v4->fields.userSvtEntity;
        if ( !this )
          goto LABEL_88;
        TreasureDeviceCategoryIdList = (System_Int32_array **)UserServantEntity__GetTreasureDeviceCategoryIdList(
                                                                (UserServantEntity_o *)this,
                                                                0,
                                                                0LL);
        v4->fields.tdCategoryIdList = (struct System_Int32_array *)TreasureDeviceCategoryIdList;
        sub_B52920(
          (BattleServantConfConponent_o *)&v4->fields.tdCategoryIdList,
          TreasureDeviceCategoryIdList,
          v30,
          v31,
          v32,
          v33,
          v34,
          v35);
      }
    }
    this = (CombineServantListViewItem_o *)sub_B5299C(ListViewSort_FilterKind___TypeInfo, 1LL);
    if ( !this )
      goto LABEL_88;
    if ( !this->fields.sortIndex )
      goto LABEL_89;
    LODWORD(this->fields.sortValue0) = 50;
    IsUnSelectedAllTargetFilters = ListViewSort__IsUnSelectedAllTargetFilters(
                                     sort,
                                     (ListViewSort_FilterKind_array *)this,
                                     0LL);
    this = (CombineServantListViewItem_o *)sub_B5299C(ListViewSort_FilterKind___TypeInfo, 1LL);
    if ( !this )
      goto LABEL_88;
    if ( !this->fields.sortIndex )
      goto LABEL_89;
    LODWORD(this->fields.sortValue0) = 51;
    v37 = ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)this, 0LL);
    IsMatchEffectCategory = ServantEquipEffectFilterController__IsMatchEffectCategory(
                              v4->fields.tdCategoryIdList,
                              sort,
                              0LL);
    v39 = ServantEquipEffectFilterController__IsMatchEffectCategory(v4->fields.skillCategoryIdList, sort, 0LL);
    if ( ((IsUnSelectedAllTargetFilters ^ v37) & 1) != 0 )
    {
      if ( IsUnSelectedAllTargetFilters )
      {
        if ( !v39 )
          return 0;
      }
      else if ( !IsMatchEffectCategory )
      {
        return 0;
      }
    }
    else if ( !IsMatchEffectCategory && !v39 )
    {
      return 0;
    }
  }
  this = (CombineServantListViewItem_o *)sub_B5299C(ListViewSort_FilterKind___TypeInfo, 1LL);
  if ( !this )
    goto LABEL_88;
  if ( !this->fields.sortIndex )
    goto LABEL_89;
  LODWORD(this->fields.sortValue0) = 39;
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)this, 0LL) )
  {
    this = (CombineServantListViewItem_o *)sub_B5299C(ListViewSort_FilterKind___TypeInfo, 1LL);
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
    v44 = sub_B52A88(this);
    sub_B52A28(v44, 0LL);
  }
LABEL_54:
  if ( ListViewSort__GetFilter(sort, 39, 0LL) )
    v18 = v4->fields.isSwapChoice ^ v4->fields.isChoice;
  else
    v18 = 0;
  if ( ListViewSort__GetFilter(sort, 29, 0LL) )
  {
    CanNotSelect = CombineServantListViewItem__get_IsCanNotSelect(v4, (const MethodInfo *)sort);
    if ( v18 )
      goto LABEL_76;
  }
  else
  {
    CanNotSelect = 1;
    if ( v18 )
      goto LABEL_76;
  }
  if ( CanNotSelect )
    return 0;
LABEL_76:
  v41 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v41 = FilterKindList_TypeInfo;
  }
  this = (CombineServantListViewItem_o *)v41->static_fields->RarityFilterKindList;
  if ( !this )
    goto LABEL_88;
  v42 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           (System_Collections_Generic_List_Voice_BATTLE__o *)this,
                                           (const MethodInfo_305C094 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v42, 0LL)
      || ListViewSort__IsSelectedAllTargetFilters(sort, v42, 0LL)
      || ListViewSort__IsMatchRarityFilter(sort, v4->fields.rarity, 0LL);
}


bool __fastcall CombineServantListViewItem__IsMatchServantFilter(
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
  FilterKindList_c *v14; // x0
  ListViewSort_FilterKind_array *v15; // x21
  UserServantEntity_o *v17; // x0
  int32_t dispLimitCount; // w21
  UserServantEntity_o *v19; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  _BOOL4 IsUnSelectedAllTargetFilters; // w21
  _BOOL4 v35; // w23
  _BOOL4 IsMatchEffectCategory; // w22
  _BOOL4 v37; // w0
  __int64 v38; // x0

  if ( (byte_42B2CB9 & 1) == 0 )
  {
    sub_B52984(&FilterKindList_TypeInfo);
    sub_B52984(&ListViewSort_FilterKind___TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    sub_B52984(&ServantEventBonusFilterController_TypeInfo);
    byte_42B2CB9 = 1;
  }
  v5 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v5 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v5->static_fields->ClassGroupFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_66;
  ClassGroupFilterKindList = (__int64)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                        (System_Collections_Generic_List_Voice_BATTLE__o *)ClassGroupFilterKindList,
                                        (const MethodInfo_305C094 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_66;
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0LL) )
  {
    v7 = FilterKindList_TypeInfo;
    if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
      v7 = FilterKindList_TypeInfo;
    }
    ClassGroupFilterKindList = (__int64)v7->static_fields->ClassFilterKindList;
    if ( !ClassGroupFilterKindList )
      goto LABEL_66;
    v8 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                            (System_Collections_Generic_List_Voice_BATTLE__o *)ClassGroupFilterKindList,
                                            (const MethodInfo_305C094 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v8, 0LL)
      && !ListViewSort__IsMatchClassFilter(sort, this->fields.servantEntity, 0LL) )
    {
      return 0;
    }
  }
  else if ( !ListViewSort__IsMatchClassGroupFilter(sort, this->fields.servantEntity, 0LL) )
  {
    return 0;
  }
  v9 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v9 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v9->static_fields->NpTypeFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_66;
  v10 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           (System_Collections_Generic_List_Voice_BATTLE__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_305C094 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v10, 0LL)
    && !ListViewSort__IsMatchNPTypeFilter(sort, this->fields.userSvtEntity, 0LL) )
  {
    return 0;
  }
  v11 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v11 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v11->static_fields->NpEffectFilterKindList;
  if ( !ClassGroupFilterKindList )
LABEL_66:
    sub_B52A5C(ClassGroupFilterKindList, sort);
  v12 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           (System_Collections_Generic_List_Voice_BATTLE__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_305C094 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v12, 0LL)
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
    v17 = this->fields.userSvtEntity;
    if ( v17 )
    {
      dispLimitCount = this->fields.dispLimitCount;
      if ( dispLimitCount != UserServantEntity__getDispLimitCount(v17, 0, 0LL) )
      {
        ClassGroupFilterKindList = (__int64)this->fields.userSvtEntity;
        if ( !ClassGroupFilterKindList )
          goto LABEL_66;
        ClassGroupFilterKindList = UserServantEntity__getDispLimitCount(
                                     (UserServantEntity_o *)ClassGroupFilterKindList,
                                     0,
                                     0LL);
        v19 = this->fields.userSvtEntity;
        this->fields.dispLimitCount = ClassGroupFilterKindList;
        if ( !v19 )
          goto LABEL_66;
        SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v19, -1, 0LL);
        this->fields.skillCategoryIdList = SkillCategoryIdList;
        sub_B52920(
          (BattleServantConfConponent_o *)&this->fields.skillCategoryIdList,
          (System_Int32_array **)SkillCategoryIdList,
          v21,
          v22,
          v23,
          v24,
          v25,
          v26);
        ClassGroupFilterKindList = (__int64)this->fields.userSvtEntity;
        if ( !ClassGroupFilterKindList )
          goto LABEL_66;
        TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                         (UserServantEntity_o *)ClassGroupFilterKindList,
                                         0,
                                         0LL);
        this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
        sub_B52920(
          (BattleServantConfConponent_o *)&this->fields.tdCategoryIdList,
          (System_Int32_array **)TreasureDeviceCategoryIdList,
          v28,
          v29,
          v30,
          v31,
          v32,
          v33);
      }
    }
    ClassGroupFilterKindList = sub_B5299C(ListViewSort_FilterKind___TypeInfo, 1LL);
    if ( !ClassGroupFilterKindList )
      goto LABEL_66;
    if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
      goto LABEL_67;
    *(_DWORD *)(ClassGroupFilterKindList + 32) = 50;
    IsUnSelectedAllTargetFilters = ListViewSort__IsUnSelectedAllTargetFilters(
                                     sort,
                                     (ListViewSort_FilterKind_array *)ClassGroupFilterKindList,
                                     0LL);
    ClassGroupFilterKindList = sub_B5299C(ListViewSort_FilterKind___TypeInfo, 1LL);
    if ( !ClassGroupFilterKindList )
      goto LABEL_66;
    if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
    {
LABEL_67:
      v38 = sub_B52A88(ClassGroupFilterKindList);
      sub_B52A28(v38, 0LL);
    }
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
  ClassGroupFilterKindList = sub_B5299C(ListViewSort_FilterKind___TypeInfo, 1LL);
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
  v14 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v14 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v14->static_fields->RarityFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_66;
  v15 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           (System_Collections_Generic_List_Voice_BATTLE__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_305C094 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v15, 0LL)
      || ListViewSort__IsSelectedAllTargetFilters(sort, v15, 0LL)
      || ListViewSort__IsMatchRarityFilter(sort, this->fields.rarity, 0LL);
}


void __fastcall CombineServantListViewItem__ModifyChoiceItem(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0

  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_B52A5C(0LL, method);
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
    sub_B52A5C(0LL, method);
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

  if ( (byte_42B2CB8 & 1) == 0 )
  {
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_42B2CB8 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame || (userSvtEntity = this->fields.userSvtEntity) == 0LL )
    sub_B52A5C(SelfUserGame, v4);
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
  this->fields.isPush = pushUserSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v8, 0LL);
}


void __fastcall CombineServantListViewItem__SetAppendSkillInfo(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  void *userSvtEntity; // x0
  SvtUseSkillData_o *AppendSkillInfo; // x0
  SvtUseSkillData_o *v5; // x20
  int32_t v6; // w21
  struct System_Int32_array *svtUseSkillIdList; // x8
  __int64 v8; // x22
  unsigned __int64 max_length; // x9
  unsigned __int64 v10; // x25
  struct System_Int32_array *v11; // x8
  struct System_Int32_array *svtSkillLvList; // x8
  struct System_Int32_array *v13; // x8
  __int64 v14; // x27
  unsigned __int64 v15; // x9
  unsigned __int64 v16; // x22
  struct System_Int32_array *v17; // x8
  struct UserServantEntity_o *v18; // x8
  CombineAppendPassiveSkillMaster_o *v19; // x23
  __int64 v20; // x24
  __int64 v21; // x25
  struct System_Int32_array *svtSkillNumsList; // x8
  struct System_Int32_array *v23; // x9
  struct System_Int32_array *v24; // x8
  struct UserServantEntity_o *v25; // x8
  SvtAppendPassiveSkillUnlockMaster_o *v26; // x23
  __int64 v27; // x24
  __int64 v28; // x25
  struct System_Int32_array *v29; // x8
  __int64 v30; // x0
  System_Collections_Generic_List_int__o *v31; // [xsp+0h] [xbp-60h]
  CombineAppendPassiveSkillEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v33; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16

  if ( (byte_42B2CB7 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_CombineAppendPassiveSkillMaster___);
    sub_B52984(&Method_DataManager_GetMaster_SkillMaster___);
    sub_B52984(&Method_DataManager_GetMaster_SvtAppendPassiveSkillUnlockMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_B52984(&Method_System_Linq_Enumerable_Any_int___);
    sub_B52984(&Method_System_Collections_Generic_List_int__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B52984(&System_Collections_Generic_List_int__TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_42B2CB7 = 1;
  }
  entity = 0LL;
  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_69;
  AppendSkillInfo = UserServantEntity__getAppendSkillInfo((UserServantEntity_o *)userSvtEntity, 0LL);
  if ( !AppendSkillInfo )
    return;
  v5 = AppendSkillInfo;
  userSvtEntity = UserGameMaster__getSelfUserGame(0LL);
  if ( !userSvtEntity )
    goto LABEL_69;
  v6 = *((_DWORD *)userSvtEntity + 24);
  this->fields.isAppendSkillLvMax = 1;
  svtUseSkillIdList = v5->fields.svtUseSkillIdList;
  if ( !svtUseSkillIdList )
    goto LABEL_69;
  v8 = 8LL;
  while ( 1 )
  {
    max_length = svtUseSkillIdList->max_length;
    v10 = v8 - 8;
    if ( v8 - 8 >= (int)max_length )
      break;
    if ( v10 >= max_length )
      goto LABEL_72;
    if ( *((int *)&svtUseSkillIdList->obj.klass + v8) >= 1 )
    {
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      userSvtEntity = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_SkillMaster___);
      v11 = v5->fields.svtUseSkillIdList;
      if ( !v11 )
        goto LABEL_69;
      if ( v10 >= v11->max_length )
        goto LABEL_72;
      if ( !userSvtEntity )
        goto LABEL_69;
      userSvtEntity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                        (DataMasterBase_WarMaster__WarEntity__int__o *)userSvtEntity,
                        *((_DWORD *)&v11->obj.klass + v8),
                        (const MethodInfo_23E22D8 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
      svtSkillLvList = v5->fields.svtSkillLvList;
      if ( !svtSkillLvList )
        goto LABEL_69;
      if ( v10 >= svtSkillLvList->max_length )
      {
LABEL_72:
        v30 = sub_B52A88(userSvtEntity);
        sub_B52A28(v30, 0LL);
      }
      if ( !userSvtEntity )
        goto LABEL_69;
      if ( *((_DWORD *)&svtSkillLvList->obj.klass + v8) < *((_DWORD *)userSvtEntity + 10) )
      {
        this->fields.isAppendSkillLvMax = 0;
        break;
      }
      svtUseSkillIdList = v5->fields.svtUseSkillIdList;
    }
    ++v8;
    if ( !svtUseSkillIdList )
      goto LABEL_69;
  }
  v31 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v31,
    (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
  v13 = v5->fields.svtUseSkillIdList;
  if ( !v13 )
LABEL_69:
    sub_B52A5C(userSvtEntity, method);
  v14 = 8LL;
  while ( 1 )
  {
    v15 = v13->max_length;
    v16 = v14 - 8;
    if ( v14 - 8 >= (int)v15 )
      break;
    if ( v16 >= v15 )
      goto LABEL_72;
    if ( *((int *)&v13->obj.klass + v14) < 1 )
      goto LABEL_68;
    v17 = v5->fields.svtSkillLvList;
    if ( !v17 )
      goto LABEL_69;
    if ( v16 >= v17->max_length )
      goto LABEL_72;
    if ( *((_DWORD *)&v17->obj.klass + v14) )
    {
      if ( (WORD1(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      userSvtEntity = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_CombineAppendPassiveSkillMaster___);
      v18 = this->fields.userSvtEntity;
      if ( !v18 )
        goto LABEL_69;
      v19 = (CombineAppendPassiveSkillMaster_o *)userSvtEntity;
      v21 = *(_QWORD *)&v18->fields.svtId.fields.currentCryptoKey;
      v20 = *(_QWORD *)&v18->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v33.fields.currentCryptoKey = v21;
      *(_QWORD *)&v33.fields.fakeValue = v20;
      userSvtEntity = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v33, 0LL);
      svtSkillNumsList = v5->fields.svtSkillNumsList;
      if ( !svtSkillNumsList )
        goto LABEL_69;
      if ( v16 >= svtSkillNumsList->max_length )
        goto LABEL_72;
      v23 = v5->fields.svtSkillLvList;
      if ( !v23 )
        goto LABEL_69;
      if ( v16 >= v23->max_length )
        goto LABEL_72;
      if ( !v19 )
        goto LABEL_69;
      userSvtEntity = (void *)CombineAppendPassiveSkillMaster__TryGetEntityWithTryNum(
                                v19,
                                &entity,
                                (int32_t)userSvtEntity,
                                *((_DWORD *)&svtSkillNumsList->obj.klass + v14),
                                *((_DWORD *)&v23->obj.klass + v14),
                                0LL);
      if ( ((unsigned __int8)userSvtEntity & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_69;
        userSvtEntity = (void *)CombineUtility__CheckCombineNeedItemsEnough(
                                  this->fields.userSvtEntity,
                                  entity->fields.itemIds,
                                  entity->fields.itemNums,
                                  v6,
                                  entity->fields.qp,
                                  0LL);
        if ( ((unsigned __int8)userSvtEntity & 1) != 0 )
        {
          v24 = v5->fields.svtUseSkillIdList;
          if ( !v24 )
            goto LABEL_69;
          if ( v16 >= v24->max_length )
            goto LABEL_72;
          userSvtEntity = this->fields.enableAppendSkillUp;
          if ( !userSvtEntity )
            goto LABEL_69;
LABEL_67:
          System_Collections_Generic_List_int___Add(
            (System_Collections_Generic_List_int__o *)userSvtEntity,
            *((_DWORD *)&v24->obj.klass + v14),
            (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
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
      userSvtEntity = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_SvtAppendPassiveSkillUnlockMaster___);
      v25 = this->fields.userSvtEntity;
      if ( !v25 )
        goto LABEL_69;
      v26 = (SvtAppendPassiveSkillUnlockMaster_o *)userSvtEntity;
      v28 = *(_QWORD *)&v25->fields.svtId.fields.currentCryptoKey;
      v27 = *(_QWORD *)&v25->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v34.fields.currentCryptoKey = v28;
      *(_QWORD *)&v34.fields.fakeValue = v27;
      userSvtEntity = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v34, 0LL);
      v29 = v5->fields.svtSkillNumsList;
      if ( !v29 )
        goto LABEL_69;
      if ( v16 >= v29->max_length )
        goto LABEL_72;
      if ( !v26 )
        goto LABEL_69;
      userSvtEntity = SvtAppendPassiveSkillUnlockMaster__GetEntity(
                        v26,
                        (int32_t)userSvtEntity,
                        *((_DWORD *)&v29->obj.klass + v14),
                        0LL);
      if ( userSvtEntity )
      {
        userSvtEntity = (void *)CombineUtility__CheckCombineNeedItemsEnough(
                                  this->fields.userSvtEntity,
                                  *((System_Int32_array **)userSvtEntity + 3),
                                  *((System_Int32_array **)userSvtEntity + 4),
                                  v6,
                                  0,
                                  0LL);
        if ( ((unsigned __int8)userSvtEntity & 1) != 0 )
        {
          v24 = v5->fields.svtUseSkillIdList;
          if ( !v24 )
            goto LABEL_69;
          if ( v16 >= v24->max_length )
            goto LABEL_72;
          userSvtEntity = v31;
          if ( !v31 )
            goto LABEL_69;
          goto LABEL_67;
        }
      }
    }
LABEL_68:
    v13 = v5->fields.svtUseSkillIdList;
    ++v14;
    if ( !v13 )
      goto LABEL_69;
  }
  this->fields.isAppendSkillUpItemNum = System_Linq_Enumerable__Any_int_(
                                          (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.enableAppendSkillUp,
                                          (const MethodInfo_1B50578 *)Method_System_Linq_Enumerable_Any_int___);
  this->fields.isAppendSkillOpenItemNum = System_Linq_Enumerable__Any_int_(
                                            (System_Collections_Generic_IEnumerable_TSource__o *)v31,
                                            (const MethodInfo_1B50578 *)Method_System_Linq_Enumerable_Any_int___);
}


void __fastcall CombineServantListViewItem__SetIsCombineExpCampaignTarget(
        CombineServantListViewItem_o *this,
        System_Collections_Generic_List_EventCampaignEntity__o *eventCampaignEntities,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x20
  UserServantEntity_o *userSvtEntity; // x0
  __int64 v7; // x1
  int32_t size; // w8
  __int64 v9; // x22
  unsigned int v10; // w24
  __int64 v11; // x8
  int v12; // w8
  int monitor; // w23
  unsigned int v14; // w21
  EventMissionProgressRequest_Argument_ProgressData_o *v15; // x8
  EventMissionProgressRequest_Argument_ProgressData_c *klass; // x8
  int namespaze; // w9
  unsigned int v18; // w10
  EventMissionProgressRequest_Argument_ProgressData_o *v19; // x8
  EventMissionProgressRequest_Argument_ProgressData_o *v20; // x8
  __int64 v21; // x0

  if ( (byte_42B2CBD & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
    sub_B52984(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
    byte_42B2CBD = 1;
  }
  this->fields.isCombineExpCampaignTarget = 0;
  this->fields.combineExpCampaignValue = 0.0;
  if ( !eventCampaignEntities || this->fields.type )
    return;
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
  size = eventCampaignEntities->fields._size;
  if ( size >= 1 )
  {
    v9 = 4LL;
    while ( 1 )
    {
      v10 = v9 - 4;
      if ( size <= (unsigned int)(v9 - 4) )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
      v11 = *((_QWORD *)&eventCampaignEntities->fields._items->obj.klass + v9);
      if ( !v11 )
        break;
      if ( *(_DWORD *)(v11 + 20) == 2 )
        goto LABEL_14;
      if ( eventCampaignEntities->fields._size <= v10 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
      if ( *(_DWORD *)(v11 + 20) == 27 )
      {
LABEL_14:
        if ( eventCampaignEntities->fields._size <= v10 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
        if ( !v5 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v5,
          *((EventMissionProgressRequest_Argument_ProgressData_o **)&eventCampaignEntities->fields._items->obj.klass + v9),
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
      }
      size = eventCampaignEntities->fields._size;
      if ( (int)++v9 - 4 >= size )
        goto LABEL_19;
    }
LABEL_54:
    sub_B52A5C(userSvtEntity, v7);
  }
LABEL_19:
  if ( !v5 )
    return;
  v12 = v5->fields._size;
  if ( v12 < 1 )
  {
    monitor = 0;
    goto LABEL_52;
  }
  monitor = 0;
  v14 = 0;
  while ( 1 )
  {
    if ( v12 <= v14 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
    v15 = v5->fields._items->m_Items[v14];
    if ( !v15 )
      goto LABEL_54;
    if ( v15->fields.missionConditionDetailId == 27 )
      break;
    if ( v5->fields._size <= v14 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
    klass = v15[1].klass;
    if ( !klass )
      goto LABEL_54;
    namespaze = (int)klass->_1.namespaze;
    if ( namespaze >= 1 )
    {
      v18 = 0;
      while ( 1 )
      {
        if ( v18 >= namespaze )
        {
          v21 = sub_B52A88(userSvtEntity);
          sub_B52A28(v21, 0LL);
        }
        if ( this->fields.svtId == *((_DWORD *)&klass->_1.byval_arg.data + (int)v18) )
          break;
        if ( (int)++v18 >= namespaze )
          goto LABEL_45;
      }
      this->fields.isCombineExpCampaignTarget = 1;
      if ( v5->fields._size <= v14 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
      v19 = v5->fields._items->m_Items[v14];
      if ( !v19 )
        goto LABEL_54;
      if ( SLODWORD(v19[1].monitor) > monitor )
      {
        if ( v5->fields._size <= v14 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
        monitor = (int)v19[1].monitor;
      }
    }
LABEL_45:
    v12 = v5->fields._size;
    if ( (int)++v14 >= v12 )
      goto LABEL_52;
  }
  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_54;
  userSvtEntity = (UserServantEntity_o *)UserServantEntity__IsExchangeSvt(userSvtEntity, 0LL);
  if ( ((unsigned __int8)userSvtEntity & 1) == 0 )
    goto LABEL_45;
  this->fields.isCombineExpCampaignTarget = 1;
  if ( v5->fields._size <= v14 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
  v20 = v5->fields._items->m_Items[v14];
  if ( !v20 )
    goto LABEL_54;
  monitor = (int)v20[1].monitor;
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
  sub_B52920(
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
  __int64 SelfUserGame; // x0
  __int64 v4; // x1
  UserServantEntity_o *userSvtEntity; // x8
  struct UserServantEntity_o *v6; // x8
  __int64 v7; // x21
  __int64 v8; // x8
  __int64 v9; // x22
  unsigned __int64 v10; // x20
  int32_t v11; // w23
  int v12; // w19
  __int64 v13; // x8
  CombineServantListViewItem_o *v14; // x19
  CombineSkillMaster_o *v15; // x20
  unsigned __int64 v16; // x27
  char v17; // w26
  int32_t v18; // w24
  struct ServantEntity_o *servantEntity; // x8
  CombineSkillMaster_o *v20; // x21
  struct System_Int32_array *itemIds; // x20
  struct System_Int32_array *itemNums; // x28
  int max_length; // w8
  UserItemMaster_o *v24; // x25
  il2cpp_array_size_t v25; // w9
  il2cpp_array_size_t v26; // w23
  struct UserServantEntity_o *v27; // x8
  __int128 v28; // q1
  int32_t v29; // w26
  int32_t v30; // w19
  struct System_Collections_Generic_List_int__o **p_enableSkillUp; // x8
  struct System_Collections_Generic_List_int__o *v32; // x8
  __int64 v33; // x0
  __int64 *v34; // [xsp+0h] [xbp-C0h]
  __int64 v35; // [xsp+8h] [xbp-B8h]
  __int64 v36; // [xsp+10h] [xbp-B0h]
  CombineServantListViewItem_o *v37; // [xsp+18h] [xbp-A8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+40h] [xbp-80h]
  UserItemEntity_o *v40; // [xsp+60h] [xbp-60h] BYREF
  CombineSkillEntity_o *entity; // [xsp+68h] [xbp-58h] BYREF

  if ( (byte_42B2CB6 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_CombineSkillMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_B52984(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_B52984(&Method_System_Collections_Generic_List_int__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B2CB6 = 1;
  }
  entity = 0LL;
  v40 = 0LL;
  SelfUserGame = (__int64)UserGameMaster__getSelfUserGame(0LL);
  userSvtEntity = this->fields.userSvtEntity;
  v36 = SelfUserGame;
  if ( !userSvtEntity )
    goto LABEL_60;
  SelfUserGame = (__int64)UserServantEntity__getSkillIdList(userSvtEntity, -1, -1, 1, 0LL);
  v6 = this->fields.userSvtEntity;
  if ( !v6 )
    goto LABEL_60;
  v7 = SelfUserGame;
  SelfUserGame = ((__int64 (__fastcall *)(struct UserServantEntity_o *, void *))v6->klass->vtable._6_getSkillLevelList.method)(
                   this->fields.userSvtEntity,
                   v6->klass[1]._1.image);
  v37 = this;
  this->fields.isSkillLvMax = 1;
  if ( !v7 )
    goto LABEL_60;
  v8 = *(_QWORD *)(v7 + 24);
  v9 = SelfUserGame;
  if ( (int)v8 >= 1 )
  {
    v10 = 0LL;
    while ( 1 )
    {
      if ( v10 >= (unsigned int)v8 )
        goto LABEL_61;
      if ( !v9 )
        goto LABEL_60;
      if ( v10 >= *(unsigned int *)(v9 + 24) )
      {
LABEL_61:
        v33 = sub_B52A88(SelfUserGame);
        sub_B52A28(v33, 0LL);
      }
      v11 = *(_DWORD *)(v7 + 32 + 4 * v10);
      if ( v11 >= 1 )
      {
        v12 = *(_DWORD *)(v9 + 32 + 4 * v10);
        SelfUserGame = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !SelfUserGame )
          goto LABEL_60;
        SelfUserGame = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)SelfUserGame,
                                  (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_SkillMaster___);
        if ( !SelfUserGame )
          goto LABEL_60;
        SelfUserGame = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                  (DataMasterBase_WarMaster__WarEntity__int__o *)SelfUserGame,
                                  v11,
                                  (const MethodInfo_23E22D8 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        if ( !SelfUserGame )
          goto LABEL_60;
        if ( v12 < *(_DWORD *)(SelfUserGame + 40) )
          break;
      }
      LODWORD(v8) = *(_DWORD *)(v7 + 24);
      if ( (__int64)++v10 >= (int)v8 )
        goto LABEL_19;
    }
    v37->fields.isSkillLvMax = 0;
  }
LABEL_19:
  SelfUserGame = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_60;
  SelfUserGame = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)SelfUserGame,
                            (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_CombineSkillMaster___);
  v13 = *(_QWORD *)(v7 + 24);
  v14 = v37;
  if ( (int)v13 <= 0 )
  {
    p_enableSkillUp = &v37->fields.enableSkillUp;
  }
  else
  {
    v15 = (CombineSkillMaster_o *)SelfUserGame;
    v16 = 0LL;
    v17 = 0;
    v34 = (__int64 *)&v37->fields.enableSkillUp;
    v35 = v7;
    do
    {
      if ( v16 >= (unsigned int)v13 )
        goto LABEL_61;
      if ( !v9 )
        goto LABEL_60;
      if ( v16 >= *(unsigned int *)(v9 + 24) )
        goto LABEL_61;
      v18 = *(_DWORD *)(v7 + 4 * v16 + 32);
      if ( v18 >= 1 )
      {
        servantEntity = v14->fields.servantEntity;
        if ( !servantEntity || !v15 )
          goto LABEL_60;
        SelfUserGame = CombineSkillMaster__TryGetEntity(
                         v15,
                         &entity,
                         servantEntity->fields.combineSkillId,
                         *(_DWORD *)(v9 + 4 * v16 + 32),
                         0LL);
        if ( (SelfUserGame & 1) != 0 )
        {
          if ( !entity )
            goto LABEL_60;
          v20 = v15;
          itemIds = entity->fields.itemIds;
          itemNums = entity->fields.itemNums;
          SelfUserGame = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !SelfUserGame )
            goto LABEL_60;
          SelfUserGame = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    (DataManager_o *)SelfUserGame,
                                    (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserItemMaster___);
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
              if ( v25 >= itemNums->max_length )
                goto LABEL_61;
              v27 = v37->fields.userSvtEntity;
              if ( !v27 )
                goto LABEL_60;
              v28 = *(_OWORD *)&v27->fields.userId.fields.fakeValue;
              v29 = itemIds->m_Items[v25 + 1];
              v30 = itemNums->m_Items[v25 + 1];
              *(_OWORD *)&v39.fields.currentCryptoKey = *(_OWORD *)&v27->fields.userId.fields.currentCryptoKey;
              *(_OWORD *)&v39.fields.fakeValue = v28;
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
              }
              v38 = v39;
              SelfUserGame = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v38, 0LL);
              if ( !v24 )
                goto LABEL_60;
              SelfUserGame = UserItemMaster__TryGetEntity(v24, &v40, SelfUserGame, v29, 0LL);
              if ( (SelfUserGame & 1) == 0 )
                break;
              if ( !v40 )
                goto LABEL_60;
              if ( v30 > v40->fields.num )
                break;
              max_length = itemIds->max_length;
              v25 = v26 + 1;
              if ( (int)(v26 + 1) >= max_length )
              {
                v17 = 1;
                goto LABEL_48;
              }
            }
            v17 = 0;
          }
LABEL_48:
          if ( !v36 )
            goto LABEL_60;
          v14 = v37;
          if ( !entity )
            goto LABEL_60;
          v15 = v20;
          v7 = v35;
          if ( *(_DWORD *)(v36 + 96) < entity->fields.qp || (v17 & 1) == 0 )
          {
            v17 = 0;
          }
          else
          {
            SelfUserGame = *v34;
            if ( !*v34 )
              goto LABEL_60;
            System_Collections_Generic_List_int___Add(
              (System_Collections_Generic_List_int__o *)SelfUserGame,
              v18,
              (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
            v17 = 1;
          }
        }
      }
      LODWORD(v13) = *(_DWORD *)(v7 + 24);
      ++v16;
    }
    while ( (__int64)v16 < (int)v13 );
    p_enableSkillUp = &v37->fields.enableSkillUp;
  }
  v32 = *p_enableSkillUp;
  if ( !v32 || !v14 )
LABEL_60:
    sub_B52A5C(SelfUserGame, v4);
  v14->fields.isSkillUpItemNum = v32->fields._size > 0;
}


bool __fastcall CombineServantListViewItem__SetSortValue(
        CombineServantListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  ListViewSort_o *v3; // x20
  CombineServantListViewItem_o *v4; // x19
  const MethodInfo *v5; // x3
  int32_t bonusKind2; // w8
  struct ListViewManager_o *manager; // x8
  __int64 v8; // x11
  CombineServantListViewManager_o *v9; // x21
  int32_t *p_bonusKind2Id; // x8
  int32_t *v11; // x8
  int32_t v12; // w2
  bool EventUpVal_21508832; // w0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  int32_t svtId; // w22
  ServantFilterMaster_o *v16; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // kr00_16
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v19; // q1
  int32_t bonusKindId; // w22
  int64_t v21; // x0
  const MethodInfo *v22; // x3
  const MethodInfo *v23; // x2
  _BOOL4 isSwapLock; // w23
  _BOOL4 isLock; // w24
  int v26; // w21
  const MethodInfo *v27; // x2
  int64_t *p_sortValue0; // x22
  __int64 v29; // x8
  unsigned int type; // w8
  __int64 v31; // x8
  int32_t v32; // w8
  int v33; // w23
  __int64 v34; // x8
  int32_t rarity; // w8
  __int64 v36; // x8
  struct UserServantEntity_o *v37; // x8
  __int128 v38; // q1
  struct UserServantEntity_o *v39; // x8
  IconLabelInfo_o *iconLabelInfo1; // x20
  int32_t amountSortValue; // w21
  struct UserServantEntity_o *v42; // x8
  int32_t v43; // w8
  IconLabelInfo_o *iconLabelInfo2; // x20
  struct UserServantEntity_o *v45; // x8
  unsigned int v46; // w8
  IconLabelInfo_o *v47; // x20
  struct UserServantEntity_o *v48; // x8
  int32_t adjustHp; // w3
  int32_t hp; // w2
  int32_t v51; // w1
  struct UserServantEntity_o *v52; // x8
  IconLabelInfo_o *v53; // x19
  struct ServantEntity_o *servantEntity; // x8
  __int64 v55; // x10
  struct ServantEntity_o *v56; // x8
  __int64 collectionNo; // x10
  struct UserServantEntity_o *v58; // x8
  int32_t lv; // w20
  int64_t friendship; // x2
  int32_t friendshipMax; // w3
  int32_t v62; // w1
  int32_t v63; // w21
  __int64 v64; // x9
  bool v65; // zf
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v67; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v68; // [xsp+30h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v69; // [xsp+50h] [xbp-60h]
  int32_t tdMaxLv[2]; // [xsp+78h] [xbp-38h] BYREF

  v3 = sort;
  v4 = this;
  if ( (byte_42B2CBC & 1) == 0 )
  {
    sub_B52984(&CombineServantListViewManager_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_ServantFilterMaster___);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    this = (CombineServantListViewItem_o *)sub_B52984(&TutorialFlag_TypeInfo);
    byte_42B2CBC = 1;
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
      v12 = *p_bonusKind2Id;
      this = (CombineServantListViewItem_o *)v4->fields.userSvtEntity;
      v4->fields.bonusKindId = *p_bonusKind2Id;
      if ( !this )
        goto LABEL_254;
      EventUpVal_21508832 = UserServantEntity__getEventUpVal_21508832(
                              (UserServantEntity_o *)this,
                              v4->fields.setupInfo,
                              v12,
                              0LL);
LABEL_29:
      v4->fields.isEventUpVal = EventUpVal_21508832;
      if ( !EventUpVal_21508832 )
        goto LABEL_125;
      break;
    case 2:
      if ( v4->fields.bonusKind == 2 )
      {
        v11 = &v3->fields.bonusKind2Id;
        if ( v4->fields.bonusKindId == v3->fields.bonusKind2Id )
          goto LABEL_40;
      }
      else
      {
        v11 = &v3->fields.bonusKind2Id;
      }
      v4->fields.bonusKind = 2;
      v4->fields.bonusKindId = *v11;
      this = (CombineServantListViewItem_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_254;
      MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             (DataManager_o *)this,
                                             (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantFilterMaster___);
      svtId = v4->fields.svtId;
      v16 = (ServantFilterMaster_o *)MasterData_WarQuestSelectionMaster;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(svtId, 0LL);
      sort = *(ListViewSort_o **)&v17.fields.fakeValue;
      this = *(CombineServantListViewItem_o **)&v17.fields.currentCryptoKey;
      if ( !v16 )
        goto LABEL_254;
      EventUpVal_21508832 = ServantFilterMaster__IsEnableServant(v16, v17, v4->fields.bonusKindId, 0LL);
      goto LABEL_29;
    case 3:
      manager = v3->fields.manager;
      if ( manager
        && (v8 = *(&CombineServantListViewManager_TypeInfo->_2.bitflags2 + 1),
            *(&manager->klass->_2.bitflags2 + 1) >= (unsigned int)v8) )
      {
        if ( (CombineServantListViewManager_c *)manager->klass->_2.typeHierarchy[v8 - 1] == CombineServantListViewManager_TypeInfo )
          v9 = (CombineServantListViewManager_o *)v3->fields.manager;
        else
          v9 = 0LL;
      }
      else
      {
        v9 = 0LL;
      }
      v4->fields.bonusKind = 3;
      sort = (ListViewSort_o *)(unsigned int)v3->fields.bonusKind2Id;
      v4->fields.bonusKindId = (int)sort;
      if ( !v9 )
        goto LABEL_254;
      this = (CombineServantListViewItem_o *)CombineServantListViewManager__IsLargeSuccessCampaignServantId(
                                               v9,
                                               (int32_t)sort,
                                               v4->fields.svtId,
                                               v5);
      userSvtEntity = v4->fields.userSvtEntity;
      v4->fields.isEventUpVal = (unsigned __int8)this & 1;
      if ( !userSvtEntity )
        goto LABEL_254;
      v19 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
      bonusKindId = v4->fields.bonusKindId;
      *(_OWORD *)&v69.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v69.fields.fakeValue = v19;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v68 = v69;
      v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v68, 0LL);
      if ( !CombineServantListViewManager__IsExchangeSvtExist(v9, bonusKindId, v21, v22) )
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
    v26 = v4->fields.isSwapChoice ^ v4->fields.isChoice;
    IconLabelInfo__Clear((IconLabelInfo_o *)this, 0LL);
    v4->fields.sortValue0 = 0LL;
    p_sortValue0 = &v4->fields.sortValue0;
    v4->fields.sortValue0B = 0LL;
    if ( !v3->fields.isSmartSort )
    {
      if ( !((v26 ^ 1) & 1 | !v3->fields.isChoiceSort) )
      {
        type = v4->fields.type;
        if ( type <= 0xB )
        {
          if ( ((1 << type) & 0xFDD) != 0 )
            v31 = 10LL;
          else
LABEL_81:
            v31 = -10LL;
          *p_sortValue0 = v31;
        }
      }
LABEL_153:
      this = (CombineServantListViewItem_o *)(&dword_0 + 1);
      switch ( v3->fields.sortKind )
      {
        case 0:
          this = (CombineServantListViewItem_o *)v4->fields.userSvtEntity;
          v36 = !v4->fields.isParty;
          goto LABEL_201;
        case 1:
          v37 = v4->fields.userSvtEntity;
          if ( !v37 )
            break;
          v38 = *(_OWORD *)&v37->fields.id.fields.fakeValue;
          *(_OWORD *)&v69.fields.currentCryptoKey = *(_OWORD *)&v37->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v69.fields.fakeValue = v38;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v67 = v69;
          this = (CombineServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(
                                                   &v67,
                                                   0LL);
          v39 = v4->fields.userSvtEntity;
          v4->fields.sortValue1 = (int64_t)this;
          if ( !v39 )
            break;
          this = (CombineServantListViewItem_o *)v4->fields.iconLabelInfo1;
          if ( !this )
            break;
          IconLabelInfo__SetTime((IconLabelInfo_o *)this, 49, v39->fields.createdAt, 0, 0, 0, 0LL);
          goto LABEL_183;
        case 2:
          this = (CombineServantListViewItem_o *)v4->fields.userSvtEntity;
          v4->fields.sortValue1 = v4->fields.rarity;
          if ( !this )
            break;
          iconLabelInfo1 = v4->fields.iconLabelInfo1;
          amountSortValue = this->fields.amountSortValue;
          this = (CombineServantListViewItem_o *)UserServantEntity__getLevelMax((UserServantEntity_o *)this, 0LL);
          v42 = v4->fields.userSvtEntity;
          if ( !v42 || !iconLabelInfo1 )
            break;
          IconLabelInfo__Set_28274368(iconLabelInfo1, 2, amountSortValue, (int32_t)this, 0, 0, 0, v42->fields.lv, 0LL);
          v43 = v4->fields.type;
          if ( v43 != 10 && v43 != 7 )
            goto LABEL_223;
          this = (CombineServantListViewItem_o *)v4->fields.userSvtEntity;
          if ( !this )
            break;
          iconLabelInfo2 = v4->fields.iconLabelInfo2;
          this = (CombineServantListViewItem_o *)UserServantEntity__getRarity((UserServantEntity_o *)this, 0LL);
          v45 = v4->fields.userSvtEntity;
          if ( !v45 || !iconLabelInfo2 )
            break;
          IconLabelInfo__Set_28274368(
            iconLabelInfo2,
            36,
            (int32_t)this,
            v45->fields.exceedCount,
            0,
            0,
            0,
            v45->fields.lv,
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
          v46 = v4->fields.type & 0xFFFFFFFE;
          v4->fields.sortValue1 = *(int *)&this->fields.isLvExceedMax;
          if ( v46 == 4 )
          {
            v47 = v4->fields.iconLabelInfo1;
          }
          else
          {
            UserServantEntity__getTreasureDeviceInfo_21516452((UserServantEntity_o *)this, &tdMaxLv[1], tdMaxLv, 0LL);
            LODWORD(friendship) = tdMaxLv[1];
            this = (CombineServantListViewItem_o *)v4->fields.iconLabelInfo1;
            v4->fields.sortValue1 = tdMaxLv[1];
            if ( !this )
              break;
            friendshipMax = tdMaxLv[0];
            v62 = 33;
LABEL_210:
            IconLabelInfo__Set_28274368((IconLabelInfo_o *)this, v62, friendship, friendshipMax, 0, 0, 0, 0, 0LL);
LABEL_211:
            this = (CombineServantListViewItem_o *)v4->fields.userSvtEntity;
            if ( !this )
              break;
            v47 = v4->fields.iconLabelInfo2;
          }
          v63 = this->fields.amountSortValue;
          this = (CombineServantListViewItem_o *)UserServantEntity__getLevelMax((UserServantEntity_o *)this, 0LL);
          if ( v47 )
          {
            IconLabelInfo__Set_28274368(v47, 2, v63, (int32_t)this, 0, 0, 0, 0, 0LL);
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
          v48 = v4->fields.userSvtEntity;
          if ( !v48 )
            break;
          this = (CombineServantListViewItem_o *)v4->fields.iconLabelInfo1;
          v4->fields.sortValue1 = v48->fields.hp;
          if ( !this )
            break;
          adjustHp = v48->fields.adjustHp;
          hp = v48->fields.hp;
          v51 = 3;
          goto LABEL_182;
        case 6:
          v52 = v4->fields.userSvtEntity;
          if ( !v52 )
            break;
          this = (CombineServantListViewItem_o *)v4->fields.iconLabelInfo1;
          v4->fields.sortValue1 = v52->fields.atk;
          if ( !this )
            break;
          adjustHp = v52->fields.adjustAtk;
          hp = v52->fields.atk;
          v51 = 5;
LABEL_182:
          IconLabelInfo__Set_28274368((IconLabelInfo_o *)this, v51, hp, adjustHp, 0, 0, 0, 0, 0LL);
LABEL_183:
          this = (CombineServantListViewItem_o *)v4->fields.userSvtEntity;
          if ( !this )
            break;
          v53 = v4->fields.iconLabelInfo2;
          goto LABEL_203;
        case 7:
          servantEntity = v4->fields.servantEntity;
          if ( !servantEntity )
            break;
          this = (CombineServantListViewItem_o *)v4->fields.iconLabelInfo1;
          v4->fields.sortValue1 = servantEntity->fields.cost;
          if ( !this )
            break;
          IconLabelInfo__Set_28274368((IconLabelInfo_o *)this, 7, servantEntity->fields.cost, 0, 0, 0, 0, 0, 0LL);
          goto LABEL_211;
        case 8:
          this = (CombineServantListViewItem_o *)v4->fields.userSvtEntity;
          v36 = -v4->fields.priority;
LABEL_201:
          v4->fields.sortValue1 = v36;
          if ( !this )
            break;
LABEL_202:
          v53 = v4->fields.iconLabelInfo1;
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
          v62 = 32;
          goto LABEL_210;
        case 0xE:
          this = (CombineServantListViewItem_o *)v4->fields.amountSortValue;
          if ( ((unsigned __int64)this & 0x8000000000000000LL) == 0 )
            goto LABEL_193;
          this = (CombineServantListViewItem_o *)v3->fields.manager;
          if ( !this )
            break;
          v55 = *(&CombineServantListViewManager_TypeInfo->_2.bitflags2 + 1);
          if ( *(&this->klass->_2.bitflags2 + 1) < (unsigned int)v55
            || (CombineServantListViewManager_c *)this->klass->_2.typeHierarchy[v55 - 1] != CombineServantListViewManager_TypeInfo )
          {
            break;
          }
          this = (CombineServantListViewItem_o *)CombineServantListViewManager__GetAmountSortValue(
                                                   (CombineServantListViewManager_o *)this,
                                                   v4->fields.svtId,
                                                   v27);
          v4->fields.amountSortValue = (int64_t)this;
LABEL_193:
          v56 = v4->fields.servantEntity;
          if ( !v56 )
            break;
          collectionNo = v56->fields.collectionNo;
          v58 = v4->fields.userSvtEntity;
          v4->fields.sortValue1 = (((unsigned __int64)(unsigned int)v4->fields.rarity << 32) + ((_QWORD)this << 48)) | collectionNo;
          if ( !v58 )
            break;
          v53 = v4->fields.iconLabelInfo1;
          lv = v58->fields.lv;
          this = (CombineServantListViewItem_o *)v58;
LABEL_204:
          this = (CombineServantListViewItem_o *)UserServantEntity__getLevelMax((UserServantEntity_o *)this, 0LL);
          if ( !v53 )
            break;
          IconLabelInfo__Set_28274368(v53, 2, lv, (int32_t)this, 0, 0, 0, 0, 0LL);
          goto LABEL_223;
        case 0xF:
          friendship = v4->fields.hpReinforceValue;
          this = (CombineServantListViewItem_o *)v4->fields.iconLabelInfo1;
          v4->fields.isDispHpStatusUpInfo = 1;
          v4->fields.sortValue1 = friendship;
          if ( !this )
            break;
          friendshipMax = v4->fields.nowMaxHpReinforceValue;
          v62 = 44;
          goto LABEL_210;
        case 0x10:
          friendship = v4->fields.atkReinforceValue;
          this = (CombineServantListViewItem_o *)v4->fields.iconLabelInfo1;
          v4->fields.isDispAtkStatusUpInfo = 1;
          v4->fields.sortValue1 = friendship;
          if ( !this )
            break;
          friendshipMax = v4->fields.nowMaxAtkReinforceValue;
          v62 = 45;
          goto LABEL_210;
        default:
          return (char)this;
      }
LABEL_254:
      sub_B52A5C(this, sort);
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
          if ( TutorialFlag__Get_29217932(126, 0LL) )
            goto LABEL_127;
        }
        if ( v4->fields.isParty )
        {
          v29 = 20LL;
          goto LABEL_150;
        }
        if ( !v4->fields.isLvMax )
          goto LABEL_151;
        goto LABEL_149;
      case 1:
        this = (CombineServantListViewItem_o *)v4->fields.servantEntity;
        if ( !this )
          goto LABEL_254;
        v33 = isSwapLock ^ isLock;
        if ( ServantEntity__get_IsExpUp((ServantEntity_o *)this, 0LL) )
        {
          if ( v4->fields.isBaseLvMax )
          {
            v34 = -120LL;
          }
          else
          {
            v34 = -5LL;
            if ( !(v33 | v26) )
              v34 = 30LL;
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
                v34 = -90LL;
                if ( !v4->fields.isAtkSecondUpMax && v4->fields.isAtkUpMax )
                  v34 = 90LL;
                goto LABEL_244;
              }
              v64 = 70LL;
              v65 = !v4->fields.isAtkUpMax;
              v34 = -110LL;
            }
            else
            {
              if ( rarity == 4 )
              {
                v34 = -80LL;
                if ( !v4->fields.isHpSecondUpMax && v4->fields.isHpUpMax )
                  v34 = 100LL;
LABEL_244:
                *p_sortValue0 = v34;
                if ( v33 | v26 )
                  v34 = -5LL;
                goto LABEL_246;
              }
              v64 = 80LL;
              v65 = !v4->fields.isHpUpMax;
              v34 = -100LL;
            }
            if ( v65 )
              v34 = v64;
            goto LABEL_244;
          }
          v34 = -150LL;
        }
        else
        {
          if ( !CombineServantListViewItem__get_IsCanNotSelectMaterial(v4, (const MethodInfo *)sort) )
          {
LABEL_247:
            if ( v4->fields.isFortification )
              *p_sortValue0 = -10LL;
            if ( !((v26 ^ 1) & 1 | !v3->fields.isChoiceSort) )
              *(_OWORD *)p_sortValue0 = xmmword_328D5F0;
            goto LABEL_153;
          }
          if ( v4->fields.isLimitCntTarget )
          {
            v34 = -20LL;
          }
          else if ( v4->fields.isParty )
          {
            v34 = -30LL;
          }
          else
          {
            v34 = -10LL;
            if ( v4->fields.isUseSupport )
              v34 = -40LL;
          }
        }
LABEL_246:
        *p_sortValue0 = v34;
        goto LABEL_247;
      case 2:
        if ( v4->fields.isSealCombineLimit )
        {
          v29 = 0LL;
          goto LABEL_150;
        }
        if ( !CombineServantListViewItem__get_IsCanNotBaseSelect(v4, (const MethodInfo *)sort)
          && v4->fields.isLimitUpItemNum
          && v4->fields.isLvMax )
        {
LABEL_147:
          v29 = 10LL;
          goto LABEL_150;
        }
        if ( v4->fields.isHeroineSvt )
        {
LABEL_149:
          v29 = -10LL;
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
          if ( TutorialFlag__Get_29217932(126, 0LL) )
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
        if ( !((v26 ^ 1) & 1 | !v3->fields.isChoiceSort) || v4->fields.isFortification )
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
        if ( !TutorialFlag__Get_29217932(126, 0LL) )
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
          v29 = -15LL;
        }
        else if ( v4->fields.isLimitCntMax )
        {
LABEL_127:
          v29 = -20LL;
        }
        else
        {
          if ( !v4->fields.isEventJoin )
            goto LABEL_151;
LABEL_114:
          v29 = -30LL;
        }
LABEL_150:
        *p_sortValue0 = v29;
LABEL_151:
        if ( !((v26 ^ 1) & 1 | !v3->fields.isChoiceSort) )
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
          if ( TutorialFlag__Get_29217932(126, 0LL) )
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
          if ( TutorialFlag__Get_29217932(126, 0LL) )
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
  v32 = v4->fields.type;
  if ( v32 == 1 )
  {
    if ( CombineServantListViewItem__IsMatchMaterialFilter(v4, v3, v23) )
      goto LABEL_43;
  }
  else if ( v32 )
  {
    if ( CombineServantListViewItem__IsMatchServantFilter(v4, v3, v23) )
      goto LABEL_43;
  }
  else if ( CombineServantListViewItem__IsMatchBaseServantFilter(v4, v3, v23) )
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

  if ( (byte_42B2CC7 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_15202/*"UserSvt "*/);
    byte_42B2CC7 = 1;
  }
  NameText = CombineServantListViewItem__get_NameText(this, method);
  return System_String__Concat_44568316((System_String_o *)StringLiteral_15202/*"UserSvt "*/, NameText, 0LL);
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
  struct ServantEntity_o *servantEntity; // x8
  int32_t cost; // w19

  if ( (byte_42B2CC3 & 1) == 0 )
  {
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_18529/*"error"*/);
    byte_42B2CC3 = 1;
  }
  servantEntity = this->fields.servantEntity;
  if ( !servantEntity )
    return (System_String_o *)StringLiteral_18529/*"error"*/;
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
  if ( (byte_42B2CC4 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B2CC4 = 1;
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
    sub_B52A5C(0LL, method);
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

  if ( (byte_42B2CC5 & 1) == 0 )
  {
    sub_B52984(&TutorialFlag_TypeInfo);
    byte_42B2CC5 = 1;
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
    if ( TutorialFlag__Get_29217932(126, 0LL) )
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
        v7 = TutorialFlag__Get_29217932(126, 0LL) || this->fields.isSkillLvMax;
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
            if ( TutorialFlag__Get_29217932(126, 0LL) )
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
      if ( TutorialFlag__Get_29217932(126, 0LL) )
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
      return TutorialFlag__Get_29217932(126, 0LL);
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

  if ( (byte_42B2CC6 & 1) == 0 )
  {
    sub_B52984(&TutorialFlag_TypeInfo);
    byte_42B2CC6 = 1;
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
    if ( TutorialFlag__Get_29217932(126, 0LL) )
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
    sub_B52A5C(v6, v5);
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
    sub_B52A5C(0LL, method);
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
    sub_B52A5C(0LL, method);
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
    sub_B52A5C(0LL, method);
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
    sub_B52A5C(0LL, method);
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
  struct UserServantEntity_o *userSvtEntity; // x8
  int32_t lv; // w19

  if ( (byte_42B2CC1 & 1) == 0 )
  {
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_18529/*"error"*/);
    byte_42B2CC1 = 1;
  }
  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    return (System_String_o *)StringLiteral_18529/*"error"*/;
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
  ServantEntity_o *servantEntity; // x19
  struct UserServantEntity_o *userSvtEntity; // x8
  __int64 v5; // x20
  __int64 v6; // x21
  int32_t v7; // w1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  v2 = this;
  if ( (byte_42B2CC0 & 1) == 0 )
  {
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (CombineServantListViewItem_o *)sub_B52984(&StringLiteral_18529/*"error"*/);
    byte_42B2CC0 = 1;
  }
  servantEntity = v2->fields.servantEntity;
  if ( !servantEntity )
    return (System_String_o *)StringLiteral_18529/*"error"*/;
  userSvtEntity = v2->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_B52A5C(this, method);
  v6 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.currentCryptoKey;
  v5 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v9.fields.currentCryptoKey = v6;
  *(_QWORD *)&v9.fields.fakeValue = v5;
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v9, 0LL);
  return ServantEntity__getName(servantEntity, v7, -1, 0LL);
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

  if ( (byte_42B2CC2 & 1) == 0 )
  {
    sub_B52984(&LocalizationManager_TypeInfo);
    byte_42B2CC2 = 1;
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
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  __int64 v4; // x1
  WarEntity_o *Entity; // x0

  if ( (byte_42B2CC8 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_SvtCoinMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__GetEntity__);
    byte_42B2CC8 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_SvtCoinMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B52A5C(0LL, v4);
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             Master_WarQuestSelectionMaster,
             this->fields.svtId,
             (const MethodInfo_23E22D8 *)Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__GetEntity__);
  if ( Entity )
    return (int32_t)Entity->fields.age;
  else
    return -1;
}


int32_t __fastcall CombineServantListViewItem__get_SkillOpenItemNum(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  int64_t Master_WarQuestSelectionMaster; // x0
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

  if ( (byte_42B2CC9 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_UserSvtCoinMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_42B2CC9 = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_UserSvtCoinMaster___);
  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_20;
  v6 = *(_OWORD *)&userSvtEntity->fields.userId.fields.fakeValue;
  v7 = (UserSvtCoinMaster_o *)Master_WarQuestSelectionMaster;
  *(_OWORD *)&v14.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v14.fields.fakeValue = v6;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v13 = v14;
  Master_WarQuestSelectionMaster = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v13, 0LL);
  v8 = this->fields.userSvtEntity;
  if ( !v8 )
    goto LABEL_20;
  v9 = Master_WarQuestSelectionMaster;
  v11 = *(_QWORD *)&v8->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&v8->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v16.fields.currentCryptoKey = v11;
  *(_QWORD *)&v16.fields.fakeValue = v10;
  Master_WarQuestSelectionMaster = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v16, 0LL);
  if ( !v7 )
    goto LABEL_20;
  Master_WarQuestSelectionMaster = UserSvtCoinMaster__TryGetEntity(v7, &entity, v9, Master_WarQuestSelectionMaster, 0LL);
  if ( (Master_WarQuestSelectionMaster & 1) != 0 )
  {
    if ( entity )
      return entity->fields.num;
LABEL_20:
    sub_B52A5C(Master_WarQuestSelectionMaster, v4);
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
  struct UserServantEntity_o *v3; // x8
  BattleServantConfConponent_o *p_userSvtEntity; // x19
  struct UserServantEntity_o *userSvtEntity; // t1
  __int128 v6; // q1
  int64_t v7; // x20
  System_Int32_array **Entity; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v16; // [xsp+0h] [xbp-50h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v17; // [xsp+20h] [xbp-30h]

  v2 = this;
  if ( (byte_42B2CBE & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B52984(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    this = (CombineServantListViewItem_o *)sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B2CBE = 1;
  }
  userSvtEntity = v2->fields.userSvtEntity;
  p_userSvtEntity = (BattleServantConfConponent_o *)&v2->fields.userSvtEntity;
  v3 = userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_10;
  v6 = *(_OWORD *)&v3->fields.id.fields.fakeValue;
  *(_OWORD *)&v17.fields.currentCryptoKey = *(_OWORD *)&v3->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v17.fields.fakeValue = v6;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v16 = v17;
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v16, 0LL);
  this = (CombineServantListViewItem_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (this = (CombineServantListViewItem_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                 (DataManager_o *)this,
                                                 (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
  {
LABEL_10:
    sub_B52A5C(this, method);
  }
  Entity = (System_Int32_array **)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                    (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)this,
                                    v7,
                                    (const MethodInfo_23E2500 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  p_userSvtEntity->klass = (BattleServantConfConponent_c *)Entity;
  sub_B52920(p_userSvtEntity, Entity, v9, v10, v11, v12, v13, v14);
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
  if ( (byte_42B2CBF & 1) == 0 )
  {
    this = (CombineServantListViewItem_o *)sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_42B2CBF = 1;
  }
  userSvtEntity = v2->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_B52A5C(this, method);
  v4 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v7.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v7.fields.fakeValue = v4;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v6 = v7;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v6, 0LL);
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
  sub_B52920(
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
    sub_B52A5C(0LL, value);
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
    sub_B52A5C(0LL, value);
  this->fields.dragSelectNum = ~value << 31 >> 31;
}


void __fastcall CombineServantListViewItem__set_IsHpStatusMax(
        CombineServantListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  if ( !this )
    sub_B52A5C(0LL, value);
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
    sub_B52A5C(0LL, value);
  this->fields.isNotSelectSecondStatusUpAtk = this->fields.atkBase > 0 && value;
}


void __fastcall CombineServantListViewItem__set_IsSecondHpStatusMax(
        CombineServantListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  if ( !this )
    sub_B52A5C(0LL, value);
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
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields._NoticeTween_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}