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
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v96; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v99; // x8
  unsigned __int64 v100; // x10
  int32_t *v101; // x11
  __int64 v102; // x0
  _QWORD *v103; // x0
  __int64 v104; // x1
  __int64 v105; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v106; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v107; // q0
  __int64 v108; // x22
  System_Collections_Generic_IEnumerator_T__c *v109; // x8
  unsigned __int64 v110; // x10
  int32_t *v111; // x11
  __int64 v112; // x0
  UserServantEntity_o *v113; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v114; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v115; // q0
  int64_t v116; // x0
  __int128 v117; // q0
  UserServantCommandCodeMaster_o *v118; // x20
  struct ServantEntity_o *v119; // x8
  int64_t v120; // x25
  __int64 v121; // x23
  __int64 v122; // x26
  int32_t v123; // w8
  UserServantCommandCardMaster_o *v124; // x20
  struct ServantEntity_o *v125; // x8
  int64_t v126; // x25
  __int64 v127; // x23
  __int64 v128; // x26
  struct System_Int32_array *commandCardParam; // x20
  int max_length; // w8
  __int64 v131; // x22
  int32_t v132; // w25
  __int64 v133; // x1
  System_Collections_Generic_IEnumerator_T__o *v134; // x20
  System_Collections_Generic_IEnumerator_T__c *v135; // x8
  unsigned __int64 v136; // x10
  int32_t *v137; // x11
  __int64 v138; // x0
  System_Collections_Generic_IEnumerator_T__c *v139; // x8
  unsigned __int64 v140; // x10
  int32_t *v141; // x11
  __int64 v142; // x0
  _QWORD *v143; // x0
  __int64 v144; // x1
  __int64 v145; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v146; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v147; // q0
  __int64 v148; // x22
  System_Collections_Generic_IEnumerator_T__c *v149; // x8
  unsigned __int64 v150; // x10
  int32_t *v151; // x11
  __int64 v152; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v153; // x8
  __int64 v154; // x20
  __int64 v155; // x23
  int32_t v156; // w20
  struct UserServantEntity_o *v157; // x8
  __int128 v158; // q0
  int64_t v159; // x0
  __int128 v160; // q0
  int32_t SvtClassId; // w20
  int32_t v162; // w0
  int32_t SvtClassGroupType; // w20
  int32_t materialExp; // w20
  BalanceConfig_c *v165; // x0
  int SameClassExp; // w22
  double v167; // d0
  int32_t classId; // w20
  UserServantEntity_o *v169; // x8
  int32_t v170; // w20
  bool v171; // w8
  bool v172; // w8
  bool v173; // w8
  bool v174; // w8
  UserServantCommandCodeMaster_o *v175; // x20
  struct ServantEntity_o *v176; // x8
  int64_t v177; // x25
  __int64 v178; // x23
  __int64 v179; // x26
  int32_t v180; // w8
  bool v181; // w28
  UserServantEntity_o *v182; // x8
  bool v183; // w8
  UserServantEntity_o *v184; // x8
  const MethodInfo *v185; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v186; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v187; // q0
  int64_t v188; // x0
  __int128 v189; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v190; // x9
  int32_t combineLimitId; // w20
  __int64 v192; // x23
  __int64 v193; // x25
  int32_t v194; // w25
  __int64 v195; // x23
  __int64 v196; // x26
  UserServantEntity_o *v197; // x20
  __int64 v198; // x8
  UserItemMaster_o *v199; // x27
  unsigned __int64 i; // x28
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v201; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v202; // q1
  int32_t v203; // w25
  int32_t v204; // w20
  UserServantEntity_o *v205; // x8
  bool isLevelMax; // w8
  UserServantEntity_o *v207; // x8
  UserServantEntity_o *v208; // x8
  const MethodInfo *v209; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v210; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v211; // q0
  int64_t v212; // x0
  __int128 v213; // q0
  UserServantEntity_o *v214; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v215; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v216; // q0
  int64_t v217; // x0
  __int128 v218; // q0
  UserServantEntity_o *v219; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v220; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v221; // q0
  int64_t v222; // x0
  __int128 v223; // q0
  int id; // w20
  int32_t lv; // w22
  int32_t SameSvtNpLvCache; // w0
  const MethodInfo *v227; // x4
  int32_t v228; // w20
  char v229; // w8
  int32_t v230; // w0
  int32_t v231; // w20
  int32_t v232; // w27
  int32_t v233; // w25
  int v234; // w22
  __int64 v235; // x1
  System_Collections_Generic_IEnumerator_T__o *v236; // x20
  System_Collections_Generic_IEnumerator_T__c *v237; // x8
  unsigned __int64 v238; // x10
  int32_t *v239; // x11
  __int64 v240; // x0
  System_Collections_Generic_IEnumerator_T__c *v241; // x8
  unsigned __int64 v242; // x10
  int32_t *v243; // x11
  __int64 v244; // x0
  _QWORD *v245; // x0
  __int64 v246; // x1
  __int64 v247; // x9
  UserServantEntity_o *v248; // x8
  __int128 v249; // q0
  __int64 v250; // x22
  System_Collections_Generic_IEnumerator_T__c *v251; // x8
  unsigned __int64 v252; // x10
  int32_t *v253; // x11
  __int64 v254; // x0
  int64_t IsLock; // x0
  UserServantEntity_o *v256; // x8
  bool v257; // w8
  UserServantEntity_o *v258; // x8
  __int128 v259; // q0
  int64_t v260; // x0
  __int128 v261; // q0
  int32_t v262; // w8
  UserServantEntity_o *v263; // x8
  UserServantEntity_o *v264; // x8
  bool v265; // w8
  UserServantEntity_o *v266; // x8
  UserServantEntity_o *v267; // x8
  __int128 v268; // q0
  int64_t v269; // x0
  __int128 v270; // q0
  ServantExceedEntity_o *SvtExceedEnt; // x0
  int32_t *v272; // x20
  CommonConsumeEntity_array *IdEntityList; // x0
  CommonConsumeEntity_array *v274; // x25
  System_Collections_Generic_HashSet_int__o *v275; // x27
  System_Collections_Generic_HashSet_int__o *v276; // x28
  int v277; // w8
  __int64 v278; // x22
  CommonConsumeEntity_o *v279; // x23
  UserServantEntity_o *v280; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v281; // x25
  __int64 v282; // x23
  __int64 v283; // x26
  UserServantEntity_o *v284; // x23
  System_Int32_array *v285; // x25
  System_Int32_array *v286; // x0
  __int64 v287; // x20
  __int64 v288; // x25
  int32_t maxFriendshipRank; // w9
  int v290; // w10
  UserServantEntity_o *v291; // x8
  UserServantEntity_o *v292; // x8
  UserServantEntity_o *v293; // x8
  __int128 v294; // q0
  int64_t v295; // x0
  __int128 v296; // q0
  int32_t v297; // w20
  int v298; // w22
  int64_t v299; // x20
  __int64 v300; // x23
  __int64 v301; // x24
  UserItemMaster_o *v302; // x22
  unsigned __int64 v303; // x25
  __int64 v304; // x26
  bool v305; // w8
  UserServantEntity_o *v306; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  System_String_array **v308; // x2
  System_String_array **v309; // x3
  System_Boolean_array **v310; // x4
  System_Int32_array **v311; // x5
  System_Int32_array *v312; // x6
  System_Int32_array *v313; // x7
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  System_String_array **v315; // x2
  System_String_array **v316; // x3
  System_Boolean_array **v317; // x4
  System_Int32_array **v318; // x5
  System_Int32_array *v319; // x6
  System_Int32_array *v320; // x7
  int64_t v321; // x8
  struct ServantEntity_o *v322; // x9
  UserServantEntity_o *v323; // x8
  __int64 v324; // x20
  __int64 v325; // x21
  int32_t v326; // w8
  __int64 v327; // x0
  __int64 v328; // x0
  int v329; // [xsp+Ch] [xbp-444h]
  UserServantMaster_o *MasterData_WarQuestSelectionMaster; // [xsp+10h] [xbp-440h]
  int64_t v331; // [xsp+18h] [xbp-438h]
  bool *p_isLimitUpItemNum; // [xsp+28h] [xbp-428h]
  struct IconLabelInfo_o **p_iconLabelInfo2; // [xsp+30h] [xbp-420h]
  int64_t v336; // [xsp+40h] [xbp-410h]
  UserServantEntity_o *v337; // [xsp+48h] [xbp-408h]
  UserServantEntity_o *v339; // [xsp+50h] [xbp-400h]
  bool v340; // [xsp+5Ch] [xbp-3F4h]
  bool *p_isChoice; // [xsp+60h] [xbp-3F0h]
  struct ServantEntity_o **p_servantEntity; // [xsp+68h] [xbp-3E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v343; // [xsp+70h] [xbp-3E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v344; // [xsp+90h] [xbp-3C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v345; // [xsp+B0h] [xbp-3A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v346; // [xsp+D0h] [xbp-380h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v347; // [xsp+F0h] [xbp-360h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v348; // [xsp+110h] [xbp-340h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v349; // [xsp+130h] [xbp-320h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v350; // [xsp+150h] [xbp-300h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v351; // [xsp+170h] [xbp-2E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v352; // [xsp+190h] [xbp-2C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v353; // [xsp+1B0h] [xbp-2A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v354; // [xsp+1D0h] [xbp-280h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v355; // [xsp+1F0h] [xbp-260h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v356; // [xsp+210h] [xbp-240h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v357; // [xsp+230h] [xbp-220h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v358; // [xsp+250h] [xbp-200h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v359; // [xsp+270h] [xbp-1E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v360; // [xsp+290h] [xbp-1C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v361; // [xsp+2B0h] [xbp-1A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v362; // [xsp+2D0h] [xbp-180h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v363; // [xsp+2F0h] [xbp-160h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v364; // [xsp+310h] [xbp-140h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v365; // [xsp+330h] [xbp-120h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v366; // [xsp+350h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v367; // [xsp+370h] [xbp-E0h]
  _DWORD v368[6]; // [xsp+390h] [xbp-C0h]
  int v369; // [xsp+3A8h] [xbp-A8h]
  UserItemEntity_o *v370; // [xsp+3B0h] [xbp-A0h] BYREF
  int32_t tdMaxLv; // [xsp+3BCh] [xbp-94h] BYREF
  int32_t tdLv[2]; // [xsp+3C0h] [xbp-90h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+3C8h] [xbp-88h] BYREF
  UserItemEntity_o *v374; // [xsp+3D0h] [xbp-80h] BYREF
  __int64 v375; // [xsp+3D8h] [xbp-78h] BYREF
  UserServantCommandCodeEntity_o *v376; // [xsp+3E0h] [xbp-70h] BYREF
  UserServantCommandCardEntity_o *v377; // [xsp+3E8h] [xbp-68h] BYREF
  UserServantCommandCodeEntity_o *entity; // [xsp+3F0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v379; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v380; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v381; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v382; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v383; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v384; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v385; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v386; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v387; // 0:x0.16

  if ( (byte_438E70B & 1) == 0 )
  {
    sub_B775C4(&BalanceConfig_TypeInfo);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B775C4(&Method_DataManager_GetMasterData_CombineLimitMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_CombineMaterialMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_FriendshipMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_TreasureDvcMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_UserServantCommandCardMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_UserServantLeaderMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_CommonConsumeMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_SvtCoinMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B775C4(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_B775C4(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
    sub_B775C4(&Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__GetEntity__);
    sub_B775C4(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_B775C4(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_B775C4(&Method_System_Collections_Generic_HashSet_int___ctor___69373296);
    sub_B775C4(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_B775C4(&System_IDisposable_TypeInfo);
    sub_B775C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B775C4(&System_Collections_IEnumerator_TypeInfo);
    sub_B775C4(&IconLabelInfo_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_int___ctor___69397304);
    sub_B775C4(&System_Collections_Generic_List_int__TypeInfo);
    sub_B775C4(&System_Math_TypeInfo);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&UserServantLeaderEntity_TypeInfo);
    byte_438E70B = 1;
  }
  v377 = 0LL;
  entity = 0LL;
  v375 = 0LL;
  v376 = 0LL;
  tdInfo = 0LL;
  v374 = 0LL;
  *(_QWORD *)tdLv = 0LL;
  tdMaxLv = 0;
  v370 = 0LL;
  v369 = 0;
  v16 = (IconLabelInfo_o *)sub_B77694(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v16, 0LL);
  this->fields.iconLabelInfo1 = v16;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo1,
    (System_Int32_array **)v16,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  v23 = (IconLabelInfo_o *)sub_B77694(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v23, 0LL);
  this->fields.iconLabelInfo2 = v23;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo2,
    (System_Int32_array **)v23,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  v30 = (System_Collections_Generic_List_int__o *)sub_B77694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v30,
    (const MethodInfo_30E508C *)Method_System_Collections_Generic_List_int___ctor___69397304);
  this->fields.enableSkillUp = v30;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.enableSkillUp,
    (System_Int32_array **)v30,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  v37 = (System_Collections_Generic_List_int__o *)sub_B77694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v37,
    (const MethodInfo_30E508C *)Method_System_Collections_Generic_List_int___ctor___69397304);
  this->fields.enableAppendSkillUp = v37;
  sub_B77560(
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
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.userSvtEntity,
    (System_Int32_array **)userSvtEntity,
    v45,
    v46,
    v47,
    v48,
    v49,
    v50);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_544;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantMaster___);
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
  *(_QWORD *)&v379.fields.currentCryptoKey = v56;
  *(_QWORD *)&v379.fields.fakeValue = v55;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v379, 0LL);
  if ( !v54 )
    goto LABEL_544;
  v57 = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    v54,
                                    Instance,
                                    (const MethodInfo_21FB894 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = v57;
  p_servantEntity = &this->fields.servantEntity;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.servantEntity,
    (System_Int32_array **)v57,
    v58,
    v59,
    v60,
    v61,
    v62,
    v63);
  this->fields.setupInfo = setupInfo;
  sub_B77560(
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
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v70->fields.svtId, 0LL);
  servantEntity = this->fields.servantEntity;
  this->fields.svtId = Instance;
  if ( !servantEntity )
    goto LABEL_544;
  this->fields.classId = servantEntity->fields.classId;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_544;
  MasterData_WarQuestSelectionMaster = (UserServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                (DataManager_o *)Instance,
                                                                (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_544;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtEntity )
    goto LABEL_544;
  v72 = (ServantLimitMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956((*p_userSvtEntity)[5], 0LL);
  if ( !*p_userSvtEntity )
    goto LABEL_544;
  v73 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956((*p_userSvtEntity)[6], 0LL);
  if ( !v72 )
    goto LABEL_544;
  Instance = (int64_t)ServantLimitMaster__GetEntity(v72, v73, Instance, 0LL);
  if ( !Instance )
    goto LABEL_544;
  v74 = Instance;
  this->fields.rarity = *(_DWORD *)(Instance + 24);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_544;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v75 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_544;
  v76 = v75[4];
  v77 = (UserServantCollectionMaster_o *)Instance;
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v367.fields.currentCryptoKey = v75[3];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v367.fields.fakeValue = v76;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v366 = v367;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v366, 0LL);
  if ( !*p_userSvtEntity )
    goto LABEL_544;
  v78 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956((*p_userSvtEntity)[5], 0LL);
  if ( !v77 )
    goto LABEL_544;
  Instance = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(v77, v78, Instance, 0LL);
  if ( !Instance )
    goto LABEL_544;
  v79 = Instance;
  v340 = isParty;
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
  v329 = v80;
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
  this->fields.currentLimitCnt = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(
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
  v336 = v79;
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
  v331 = v82;
  *(_OWORD *)&v365.fields.currentCryptoKey = *(_OWORD *)&v86->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v365.fields.fakeValue = v87;
  this->fields.isPush = v88 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v365, 0LL);
  UserSvtId = CombineServantListViewItem__get_UserSvtId(this, v89);
  EventFortificationDataLogic__SetFortification(
    &this->fields.isFortification,
    &this->fields.fortificationName,
    &this->fields.fortificationDetailName,
    UserSvtId,
    0LL);
  v91 = this->fields.type;
  v337 = baseUsrSvtData;
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
  this->fields.isParty = v340;
  if ( !Instance )
    goto LABEL_544;
  Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL);
  v92 = this->fields.userSvtEntity;
  this->fields.isLock = Instance & 1;
  if ( !v92 )
    goto LABEL_544;
  *p_isChoice = UserServantEntity__IsChoice(v92, 0LL);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_544;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserServantLeaderMaster___);
  if ( !Instance )
    goto LABEL_544;
  Instance = *(_QWORD *)(Instance + 32);
  if ( !Instance )
    goto LABEL_544;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                 (const MethodInfo_2CC56C8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B7769C(0LL, v93);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v96 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v96;
        p_offset += 4;
        if ( v96 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_58;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_58:
      p_method = sub_B0F4C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v99 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v100 = 0LL;
      v101 = &v99->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v101 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v100;
        v101 += 4;
        if ( v100 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_65;
      }
      v102 = (__int64)&v99->vtable[*v101].method;
    }
    else
    {
LABEL_65:
      v102 = sub_B0F4C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v103 = (_QWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v102)(
                       Enumerator,
                       *(_QWORD *)(v102 + 8));
    if ( !v103 )
      goto LABEL_549;
    v105 = *(&UserServantLeaderEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*v103 + 300LL) < (unsigned int)v105
      || *(UserServantLeaderEntity_c **)(*(_QWORD *)(*v103 + 200LL) + 8 * v105 - 8) != UserServantLeaderEntity_TypeInfo )
    {
      sub_B77990(v103);
LABEL_547:
      sub_B77990(v143);
LABEL_548:
      sub_B77990(v245);
LABEL_549:
      sub_B7769C(v103, v104);
    }
    v106 = *p_userSvtEntity;
    if ( !*p_userSvtEntity )
      sub_B7769C(v103, UserServantLeaderEntity_TypeInfo);
    v107 = v106[2];
    v108 = v103[7];
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v367.fields.currentCryptoKey = v106[1];
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v367.fields.fakeValue = v107;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v364 = v367;
    if ( v108 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v364, 0LL) )
    {
      this->fields.isUseSupport = 1;
      break;
    }
  }
  v368[v369++] = 1071;
  v109 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v110 = 0LL;
    v111 = &v109->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v111 - 1) != System_IDisposable_TypeInfo )
    {
      ++v110;
      v111 += 4;
      if ( v110 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_80;
    }
    v112 = (__int64)&v109->vtable[*v111].method;
  }
  else
  {
LABEL_80:
    v112 = sub_B0F4C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v112)(
    Enumerator,
    *(_QWORD *)(v112 + 8));
  if ( v369 && v368[v369 - 1] == 1071 )
    --v369;
  Instance = (int64_t)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_544;
  Instance = UserServantEntity__IsEventJoin((UserServantEntity_o *)Instance, 0LL);
  v113 = this->fields.userSvtEntity;
  this->fields.isEventJoin = Instance & 1;
  if ( !v113 )
    goto LABEL_544;
  Instance = UserServantEntity__IsHeroine(v113, 0LL);
  if ( (Instance & 1) != 0 )
    this->fields.isHeroineSvt = 1;
  if ( baseUsrSvtData )
  {
    v114 = *p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_544;
    v115 = v114[2];
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v367.fields.currentCryptoKey = v114[1];
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v367.fields.fakeValue = v115;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v363 = v367;
    v116 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v363, 0LL);
    v117 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
    *(_OWORD *)&v362.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v362.fields.fakeValue = v117;
    if ( v116 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v362, 0LL) )
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
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_544;
  v118 = (UserServantCommandCodeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             (DataManager_o *)Instance,
                                             (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__get_UserId(0LL);
  v119 = *p_servantEntity;
  if ( !*p_servantEntity )
    goto LABEL_544;
  v120 = Instance;
  v121 = *(_QWORD *)&v119->fields.id.fields.currentCryptoKey;
  v122 = *(_QWORD *)&v119->fields.id.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v380.fields.currentCryptoKey = v121;
  *(_QWORD *)&v380.fields.fakeValue = v122;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v380, 0LL);
  if ( !v118 )
    goto LABEL_544;
  if ( UserServantCommandCodeMaster__TryGetEntity(v118, &entity, v120, (int)Instance, 0LL) )
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
  v123 = this->fields.type;
  if ( v123 == 10 )
  {
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_544;
    v124 = (UserServantCommandCardMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)Instance,
                                               (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserServantCommandCardMaster___);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Instance = NetworkManager__get_UserId(0LL);
    v125 = *p_servantEntity;
    if ( !*p_servantEntity )
      goto LABEL_544;
    v126 = Instance;
    v127 = *(_QWORD *)&v125->fields.id.fields.currentCryptoKey;
    v128 = *(_QWORD *)&v125->fields.id.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v381.fields.currentCryptoKey = v127;
    *(_QWORD *)&v381.fields.fakeValue = v128;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v381, 0LL);
    if ( !v124 )
      goto LABEL_544;
    Instance = UserServantCommandCardMaster__TryGetEntity(v124, &v377, v126, (int)Instance, 0LL);
    if ( (Instance & 1) != 0 )
    {
      if ( !v377 )
        goto LABEL_544;
      commandCardParam = v377->fields.commandCardParam;
      if ( commandCardParam )
      {
        max_length = commandCardParam->max_length;
        if ( max_length >= 1 )
        {
          v131 = 0LL;
          while ( 1 )
          {
            if ( (unsigned int)v131 >= max_length )
            {
LABEL_556:
              v328 = sub_B776C8(Instance);
              sub_B77668(v328, 0LL);
            }
            v132 = commandCardParam->m_Items[v131 + 1];
            Instance = (int64_t)BalanceConfig_TypeInfo;
            if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              Instance = (int64_t)BalanceConfig_TypeInfo;
            }
            if ( v132 < *(_DWORD *)(*(_QWORD *)(Instance + 184) + 700LL) )
              break;
            this->fields.isCommandCardExceedMax = 1;
            max_length = commandCardParam->max_length;
            if ( (int)++v131 >= max_length )
              goto LABEL_141;
          }
          this->fields.isCommandCardExceedMax = 0;
        }
      }
    }
LABEL_141:
    v123 = this->fields.type;
  }
  if ( v123 == 1 )
  {
    this->fields.isMaterialSvt = isMtSvt;
    this->fields.isParty = v340;
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_544;
    Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserServantLeaderMaster___);
    if ( !Instance )
      goto LABEL_544;
    Instance = *(_QWORD *)(Instance + 32);
    if ( !Instance )
      goto LABEL_544;
    v134 = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
             (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
             (const MethodInfo_2CC56C8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    if ( !v134 )
      sub_B7769C(0LL, v133);
    while ( 1 )
    {
      v135 = v134->klass;
      if ( *(_WORD *)&v134->klass->_2.bitflags1 )
      {
        v136 = 0LL;
        v137 = &v135->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)v137 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v136;
          v137 += 4;
          if ( v136 >= *(unsigned __int16 *)&v134->klass->_2.bitflags1 )
            goto LABEL_151;
        }
        v138 = (__int64)&v135->vtable[*v137].method;
      }
      else
      {
LABEL_151:
        v138 = sub_B0F4C0(v134, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v138)(
              v134,
              *(_QWORD *)(v138 + 8)) & 1) == 0 )
        break;
      v139 = v134->klass;
      if ( *(_WORD *)&v134->klass->_2.bitflags1 )
      {
        v140 = 0LL;
        v141 = &v139->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v141 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
        {
          ++v140;
          v141 += 4;
          if ( v140 >= *(unsigned __int16 *)&v134->klass->_2.bitflags1 )
            goto LABEL_158;
        }
        v142 = (__int64)&v139->vtable[*v141].method;
      }
      else
      {
LABEL_158:
        v142 = sub_B0F4C0(v134, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
      }
      v143 = (_QWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v142)(
                         v134,
                         *(_QWORD *)(v142 + 8));
      if ( !v143 )
        sub_B7769C(0LL, v144);
      v145 = *(&UserServantLeaderEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*v143 + 300LL) < (unsigned int)v145
        || *(UserServantLeaderEntity_c **)(*(_QWORD *)(*v143 + 200LL) + 8 * v145 - 8) != UserServantLeaderEntity_TypeInfo )
      {
        goto LABEL_547;
      }
      v146 = *p_userSvtEntity;
      if ( !*p_userSvtEntity )
        sub_B7769C(v143, UserServantLeaderEntity_TypeInfo);
      v147 = v146[2];
      v148 = v143[7];
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v367.fields.currentCryptoKey = v146[1];
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v367.fields.fakeValue = v147;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v361 = v367;
      if ( v148 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v361, 0LL) )
      {
        this->fields.isUseSupport = 1;
        break;
      }
    }
    v368[v369++] = 1511;
    v149 = v134->klass;
    if ( *(_WORD *)&v134->klass->_2.bitflags1 )
    {
      v150 = 0LL;
      v151 = &v149->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v151 - 1) != System_IDisposable_TypeInfo )
      {
        ++v150;
        v151 += 4;
        if ( v150 >= *(unsigned __int16 *)&v134->klass->_2.bitflags1 )
          goto LABEL_173;
      }
      v152 = (__int64)&v149->vtable[*v151].method;
    }
    else
    {
LABEL_173:
      v152 = sub_B0F4C0(v134, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v152)(v134, *(_QWORD *)(v152 + 8));
    if ( v369 && v368[v369 - 1] == 1511 )
      --v369;
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_544;
    Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_CombineMaterialMaster___);
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
      v153 = *p_userSvtEntity;
      if ( !*p_userSvtEntity )
        goto LABEL_544;
      v155 = *(_QWORD *)&v153[5].fields.currentCryptoKey;
      v154 = *(_QWORD *)&v153[5].fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v382.fields.currentCryptoKey = v155;
      *(_QWORD *)&v382.fields.fakeValue = v154;
      v156 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v382, 0LL);
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(baseUsrSvtData->fields.svtId, 0LL);
      if ( v156 == (_DWORD)Instance )
      {
        v157 = this->fields.userSvtEntity;
        this->fields.isLimitCntTarget = 1;
        if ( !v157 )
          goto LABEL_544;
        v158 = *(_OWORD *)&v157->fields.id.fields.fakeValue;
        *(_OWORD *)&v367.fields.currentCryptoKey = *(_OWORD *)&v157->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v367.fields.fakeValue = v158;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v360 = v367;
        v159 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v360, 0LL);
        v160 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
        *(_OWORD *)&v359.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v359.fields.fakeValue = v160;
        if ( v159 != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v359, 0LL) )
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
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_544;
      Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantClassMaster___);
      if ( !*p_servantEntity )
        goto LABEL_544;
      if ( !Instance )
        goto LABEL_544;
      Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                            (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                            (*p_servantEntity)->fields.classId,
                            (const MethodInfo_21FB894 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_544;
      HIDWORD(v375) = *(_DWORD *)(Instance + 52);
      v162 = UserServantEntity__getSvtClassId(baseUsrSvtData, 0LL);
      SvtClassGroupType = UserServantEntity__getSvtClassGroupType(baseUsrSvtData, v162, 0LL);
      if ( System_Int32__Equals_39547160((int32_t)&v375 + 4, 3, 0LL) )
        goto LABEL_210;
      Instance = System_Int32__Equals_39547160((int32_t)&v375 + 4, SvtClassGroupType, 0LL);
      if ( (Instance & 1) != 0 )
      {
        if ( !*p_servantEntity )
          goto LABEL_544;
        classId = (*p_servantEntity)->fields.classId;
        if ( classId == UserServantEntity__getSvtClassId(baseUsrSvtData, 0LL) )
        {
LABEL_210:
          materialExp = this->fields.materialExp;
          v165 = BalanceConfig_TypeInfo;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v165 = BalanceConfig_TypeInfo;
          }
          SameClassExp = v165->static_fields->SameClassExp;
          if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !System_Math_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
          }
          v167 = ceil((double)materialExp * (double)SameClassExp / 1000.0);
          if ( v167 == INFINITY )
            v167 = -v167;
          this->fields.materialExp = (int)v167;
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
    v169 = this->fields.userSvtEntity;
    this->fields.isLock = Instance & 1;
    if ( !v169 )
      goto LABEL_544;
    *p_isChoice = UserServantEntity__IsChoice(v169, 0LL);
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
      v170 = UserServantEntity__getSvtClassId(baseUsrSvtData, 0LL);
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_544;
      Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantClassMaster___);
      if ( !*p_servantEntity )
        goto LABEL_544;
      if ( !Instance )
        goto LABEL_544;
      Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                            (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                            (*p_servantEntity)->fields.classId,
                            (const MethodInfo_21FB894 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_544;
      LODWORD(v375) = *(_DWORD *)(Instance + 52);
      if ( !*p_servantEntity )
        goto LABEL_544;
      if ( (*p_servantEntity)->fields.classId == v170 || System_Int32__Equals_39547160((int32_t)&v375, 3, 0LL) )
      {
        this->fields.isCanStUp = 1;
        v171 = UserServantEntity__isAdjustAtkMax(baseUsrSvtData, 0LL) && this->fields.atkBase > 0;
        this->fields.isAtkUpMax = v171;
        v172 = UserServantEntity__isAdjustHpMax(baseUsrSvtData, 0LL) && this->fields.hpBase > 0;
        this->fields.isHpUpMax = v172;
        v173 = UserServantEntity__isSecondAdjustAtkMax(baseUsrSvtData, 0LL) && this->fields.atkBase > 0;
        this->fields.isAtkSecondUpMax = v173;
        v174 = UserServantEntity__isSecondAdjustHpMax(baseUsrSvtData, 0LL) && this->fields.hpBase > 0;
        this->fields.isHpSecondUpMax = v174;
      }
    }
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_544;
    v175 = (UserServantCommandCodeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)Instance,
                                               (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Instance = NetworkManager__get_UserId(0LL);
    v176 = *p_servantEntity;
    if ( !*p_servantEntity )
      goto LABEL_544;
    v177 = Instance;
    v178 = *(_QWORD *)&v176->fields.id.fields.currentCryptoKey;
    v179 = *(_QWORD *)&v176->fields.id.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v383.fields.currentCryptoKey = v178;
    *(_QWORD *)&v383.fields.fakeValue = v179;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v383, 0LL);
    if ( !v175 )
      goto LABEL_544;
    if ( UserServantCommandCodeMaster__TryGetEntity(v175, &v376, v177, (int)Instance, 0LL) )
    {
      Instance = (int64_t)v376;
      if ( !v376 )
        goto LABEL_544;
      this->fields.isEquipedCmdCard = UserServantCommandCodeEntity__IsEquipedCommandCode(v376, 0LL);
      Instance = (int64_t)v376;
      if ( !v376 )
        goto LABEL_544;
      this->fields.isCmdCardSlotOpen = UserServantCommandCodeEntity__IsCommandCardSlotOpen(v376, 0LL);
    }
  }
  v180 = this->fields.type;
  if ( v180 == 9 )
  {
    v181 = v340;
    Instance = (int64_t)userSvtEntity;
    if ( !userSvtEntity )
      goto LABEL_544;
    Instance = UserServantEntity__isLimitCountMax(userSvtEntity, 0LL);
    v205 = this->fields.userSvtEntity;
    this->fields.isLimitCntMax = Instance & 1;
    if ( !v205 )
      goto LABEL_544;
    isLevelMax = UserServantEntity__isLevelMax(v205, 0LL);
    Instance = (int64_t)this->fields.userSvtEntity;
    this->fields.isLvMax = isLevelMax;
    this->fields.isParty = v340;
    if ( !Instance )
      goto LABEL_544;
    Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL);
    v207 = this->fields.userSvtEntity;
    this->fields.isLock = Instance & 1;
    if ( !v207 )
      goto LABEL_544;
    *p_isChoice = UserServantEntity__IsChoice(v207, 0LL);
    Instance = (int64_t)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_544;
    Instance = UserServantEntity__IsEventJoin((UserServantEntity_o *)Instance, 0LL);
    v208 = this->fields.userSvtEntity;
    this->fields.isEventJoin = Instance & 1;
    if ( !v208 )
      goto LABEL_544;
    this->fields.isIgnoreCombineLimitSpecial = UserServantEntity__IsIgnoreCombineLimitSpecial(v208, 0LL);
    Instance = CombineServantListViewItem__GetSealCombineLimit(this, v209);
    this->fields.isSealCombineLimit = Instance & 1;
    if ( baseUsrSvtData )
    {
      v210 = *p_userSvtEntity;
      if ( !*p_userSvtEntity )
        goto LABEL_544;
      v211 = v210[2];
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v367.fields.currentCryptoKey = v210[1];
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v367.fields.fakeValue = v211;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v355 = v367;
      v212 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v355, 0LL);
      v213 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
      *(_OWORD *)&v354.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v354.fields.fakeValue = v213;
      if ( v212 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v354, 0LL) )
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
    v181 = v340;
    if ( v180 != 2 )
      goto LABEL_325;
    Instance = (int64_t)userSvtEntity;
    if ( !userSvtEntity )
      goto LABEL_544;
    Instance = UserServantEntity__isLimitCountMax(userSvtEntity, 0LL);
    v182 = this->fields.userSvtEntity;
    this->fields.isLimitCntMax = Instance & 1;
    if ( !v182 )
      goto LABEL_544;
    v183 = UserServantEntity__isLevelMax(v182, 0LL);
    Instance = (int64_t)this->fields.userSvtEntity;
    this->fields.isLvMax = v183;
    this->fields.isParty = v340;
    if ( !Instance )
      goto LABEL_544;
    Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL);
    v184 = this->fields.userSvtEntity;
    this->fields.isLock = Instance & 1;
    if ( !v184 )
      goto LABEL_544;
    *p_isChoice = UserServantEntity__IsChoice(v184, 0LL);
    Instance = (int64_t)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_544;
    this->fields.isEventJoin = UserServantEntity__IsEventJoin((UserServantEntity_o *)Instance, 0LL);
    Instance = CombineServantListViewItem__GetSealCombineLimit(this, v185);
    this->fields.isSealCombineLimit = Instance & 1;
    if ( baseUsrSvtData )
    {
      v186 = *p_userSvtEntity;
      if ( !*p_userSvtEntity )
        goto LABEL_544;
      v187 = v186[2];
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v367.fields.currentCryptoKey = v186[1];
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v367.fields.fakeValue = v187;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v358 = v367;
      v188 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v358, 0LL);
      v189 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
      *(_OWORD *)&v357.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v357.fields.fakeValue = v189;
      if ( v188 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v357, 0LL) )
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
      v190 = *p_userSvtEntity;
      if ( !*p_userSvtEntity )
        goto LABEL_544;
      combineLimitId = (*p_servantEntity)->fields.combineLimitId;
      v192 = *(_QWORD *)&v190[6].fields.currentCryptoKey;
      v193 = *(_QWORD *)&v190[6].fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v384.fields.currentCryptoKey = v192;
      *(_QWORD *)&v384.fields.fakeValue = v193;
      v194 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v384, 0LL);
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_544;
      Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_CombineLimitMaster___);
      if ( !Instance )
        goto LABEL_544;
      Instance = (int64_t)CombineLimitMaster__GetEntity((CombineLimitMaster_o *)Instance, combineLimitId, v194, 0LL);
      if ( !Instance )
        goto LABEL_544;
      v195 = *(_QWORD *)(Instance + 32);
      v196 = *(_QWORD *)(Instance + 40);
      v197 = (UserServantEntity_o *)Instance;
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_544;
      v339 = v197;
      Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserItemMaster___);
      if ( !v196 )
        goto LABEL_544;
      v198 = *(_QWORD *)(v196 + 24);
      if ( (int)v198 >= 1 )
      {
        v199 = (UserItemMaster_o *)Instance;
        for ( i = 0LL; (__int64)i < (int)v198; ++i )
        {
          if ( i >= (unsigned int)v198 )
            goto LABEL_556;
          if ( !v195 )
            goto LABEL_544;
          if ( i >= *(unsigned int *)(v195 + 24) )
            goto LABEL_556;
          v201 = *p_userSvtEntity;
          if ( !*p_userSvtEntity )
            goto LABEL_544;
          v202 = v201[4];
          v203 = *(_DWORD *)(v196 + 32 + 4 * i);
          v204 = *(_DWORD *)(v195 + 32 + 4 * i);
          *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v367.fields.currentCryptoKey = v201[3];
          *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v367.fields.fakeValue = v202;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v356 = v367;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v356, 0LL);
          if ( !v199 )
            goto LABEL_544;
          Instance = UserItemMaster__TryGetEntity(v199, &v374, Instance, v203, 0LL);
          if ( (Instance & 1) == 0 )
            goto LABEL_370;
          if ( !v374 )
            goto LABEL_544;
          if ( v203 == v374->fields.itemId )
          {
            if ( v204 > v374->fields.num )
            {
LABEL_370:
              *p_isLimitUpItemNum = 0;
              break;
            }
            *p_isLimitUpItemNum = 1;
          }
          LODWORD(v198) = *(_DWORD *)(v196 + 24);
        }
      }
      baseUsrSvtData = v337;
      v181 = v340;
      if ( *(_DWORD *)(v331 + 96) < SLODWORD(v339->fields.id.fields.hiddenValue) )
        *p_isLimitUpItemNum = 0;
      goto LABEL_324;
    }
  }
  this->fields.isHeroineSvt = 1;
LABEL_324:
  v180 = this->fields.type;
LABEL_325:
  if ( (v180 | 8) == 11 )
  {
    Instance = (int64_t)this->fields.userSvtEntity;
    this->fields.isParty = v181;
    if ( !Instance )
      goto LABEL_544;
    Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL);
    v214 = this->fields.userSvtEntity;
    this->fields.isLock = Instance & 1;
    if ( !v214 )
      goto LABEL_544;
    *p_isChoice = UserServantEntity__IsChoice(v214, 0LL);
    Instance = (int64_t)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_544;
    Instance = UserServantEntity__IsEventJoin((UserServantEntity_o *)Instance, 0LL);
    this->fields.isEventJoin = Instance & 1;
    if ( baseUsrSvtData )
    {
      v215 = *p_userSvtEntity;
      if ( !*p_userSvtEntity )
        goto LABEL_544;
      v216 = v215[2];
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v367.fields.currentCryptoKey = v215[1];
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v367.fields.fakeValue = v216;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v353 = v367;
      v217 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v353, 0LL);
      v218 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
      *(_OWORD *)&v352.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v352.fields.fakeValue = v218;
      if ( v217 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v352, 0LL) )
        this->fields.isBaseSvt = 1;
    }
    Instance = (int64_t)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_544;
    if ( UserServantEntity__IsHeroine((UserServantEntity_o *)Instance, 0LL) )
      this->fields.isHeroineSvt = 1;
    v180 = this->fields.type;
    if ( v180 == 3 )
    {
      CombineServantListViewItem__SetSkillInfo(this, v52);
      v180 = this->fields.type;
    }
    if ( v180 == 11 )
    {
      CombineServantListViewItem__SetAppendSkillInfo(this, v52);
      v180 = this->fields.type;
    }
  }
  if ( v180 != 4 )
    goto LABEL_387;
  Instance = (int64_t)this->fields.userSvtEntity;
  this->fields.isParty = v181;
  if ( !Instance )
    goto LABEL_544;
  Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL);
  v219 = this->fields.userSvtEntity;
  this->fields.isLock = Instance & 1;
  if ( !v219 )
    goto LABEL_544;
  *p_isChoice = UserServantEntity__IsChoice(v219, 0LL);
  Instance = (int64_t)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_544;
  Instance = UserServantEntity__IsEventJoin((UserServantEntity_o *)Instance, 0LL);
  this->fields.isEventJoin = Instance & 1;
  if ( baseUsrSvtData )
  {
    v220 = *p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_544;
    v221 = v220[2];
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v367.fields.currentCryptoKey = v220[1];
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v367.fields.fakeValue = v221;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v351 = v367;
    v222 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v351, 0LL);
    v223 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
    *(_OWORD *)&v350.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v350.fields.fakeValue = v223;
    if ( v222 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v350, 0LL) )
      this->fields.isBaseSvt = 1;
  }
  Instance = (int64_t)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
LABEL_544:
    sub_B7769C(Instance, v52);
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
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_544;
      Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
      if ( !Instance )
        goto LABEL_544;
      Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                            (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                            id,
                            (const MethodInfo_21FB894 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
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
      v228 = SameSvtNpLvCache;
      CombineServantListViewItem__GetNpInfo(this, &tdLv[1], tdLv, &tdMaxLv, v227);
      if ( v329 <= 1200000 )
      {
        Instance = (int64_t)*p_userSvtEntity;
        if ( !*p_userSvtEntity )
          goto LABEL_544;
        v230 = UserServantEntity__checkTreasureDeviceLevelUp((UserServantEntity_o *)Instance, v228, 0LL);
        v231 = tdLv[0];
        if ( tdLv[0] >= v230 )
        {
          v234 = 0;
        }
        else
        {
          v232 = tdLv[1];
          v233 = v230;
          v234 = 0;
          do
          {
            Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !Instance )
              goto LABEL_544;
            Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
            if ( !Instance )
              goto LABEL_544;
            Instance = (int64_t)TreasureDvcLvMaster__GetEntity((TreasureDvcLvMaster_o *)Instance, v232, v231, 0LL);
            if ( Instance )
              v234 += *(_DWORD *)(Instance + 92);
            ++v231;
          }
          while ( v231 < v233 );
          baseUsrSvtData = v337;
          if ( !this )
            goto LABEL_544;
        }
        v229 = v329 >= v234;
      }
      else
      {
        v229 = 1;
      }
      this->fields.isSameSvt = v229;
    }
  }
  v180 = this->fields.type;
LABEL_387:
  if ( v180 != 5 )
    goto LABEL_437;
  this->fields.isParty = v181;
  this->fields.isMaterialSvt = isMtSvt;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_544;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserServantLeaderMaster___);
  if ( !Instance )
    goto LABEL_544;
  Instance = *(_QWORD *)(Instance + 32);
  if ( !Instance )
    goto LABEL_544;
  v236 = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
           (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
           (const MethodInfo_2CC56C8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !v236 )
    sub_B7769C(0LL, v235);
  while ( 1 )
  {
    v237 = v236->klass;
    if ( *(_WORD *)&v236->klass->_2.bitflags1 )
    {
      v238 = 0LL;
      v239 = &v237->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)v239 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v238;
        v239 += 4;
        if ( v238 >= *(unsigned __int16 *)&v236->klass->_2.bitflags1 )
          goto LABEL_396;
      }
      v240 = (__int64)&v237->vtable[*v239].method;
    }
    else
    {
LABEL_396:
      v240 = sub_B0F4C0(v236, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v240)(
            v236,
            *(_QWORD *)(v240 + 8)) & 1) == 0 )
      break;
    v241 = v236->klass;
    if ( *(_WORD *)&v236->klass->_2.bitflags1 )
    {
      v242 = 0LL;
      v243 = &v241->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v243 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v242;
        v243 += 4;
        if ( v242 >= *(unsigned __int16 *)&v236->klass->_2.bitflags1 )
          goto LABEL_403;
      }
      v244 = (__int64)&v241->vtable[*v243].method;
    }
    else
    {
LABEL_403:
      v244 = sub_B0F4C0(v236, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v245 = (_QWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v244)(
                       v236,
                       *(_QWORD *)(v244 + 8));
    if ( !v245 )
      sub_B7769C(0LL, v246);
    v247 = *(&UserServantLeaderEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*v245 + 300LL) < (unsigned int)v247
      || *(UserServantLeaderEntity_c **)(*(_QWORD *)(*v245 + 200LL) + 8 * v247 - 8) != UserServantLeaderEntity_TypeInfo )
    {
      goto LABEL_548;
    }
    v248 = (UserServantEntity_o *)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      sub_B7769C(v245, UserServantLeaderEntity_TypeInfo);
    v249 = *(_OWORD *)&v248->fields.id.fields.fakeValue;
    v250 = v245[7];
    *(_OWORD *)&v367.fields.currentCryptoKey = *(_OWORD *)&v248->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v367.fields.fakeValue = v249;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v349 = v367;
    if ( v250 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v349, 0LL) )
    {
      this->fields.isUseSupport = 1;
      break;
    }
  }
  v368[v369++] = 3557;
  v251 = v236->klass;
  if ( *(_WORD *)&v236->klass->_2.bitflags1 )
  {
    v252 = 0LL;
    v253 = &v251->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v253 - 1) != System_IDisposable_TypeInfo )
    {
      ++v252;
      v253 += 4;
      if ( v252 >= *(unsigned __int16 *)&v236->klass->_2.bitflags1 )
        goto LABEL_418;
    }
    v254 = (__int64)&v251->vtable[*v253].method;
  }
  else
  {
LABEL_418:
    v254 = sub_B0F4C0(v236, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v254)(v236, *(_QWORD *)(v254 + 8));
  if ( v369 && v368[v369 - 1] == 3557 )
    --v369;
  IsLock = (int64_t)this->fields.userSvtEntity;
  this->fields.isFavorite = isFavorite;
  if ( !IsLock )
    goto LABEL_545;
  IsLock = UserServantEntity__IsLock((UserServantEntity_o *)IsLock, 0LL);
  v256 = this->fields.userSvtEntity;
  this->fields.isLock = IsLock & 1;
  if ( !v256 )
    goto LABEL_545;
  *p_isChoice = UserServantEntity__IsChoice(v256, 0LL);
  IsLock = (int64_t)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_545;
  this->fields.isEventJoin = UserServantEntity__IsEventJoin((UserServantEntity_o *)IsLock, 0LL);
  v257 = baseUsrSvtData && UserServantEntity__IsEventJoin(baseUsrSvtData, 0LL);
  IsLock = (int64_t)this->fields.userSvtEntity;
  this->fields.isEventJoinBaseSvt = v257;
  if ( !IsLock )
    goto LABEL_545;
  IsLock = UserServantEntity__IsMaterialTd((UserServantEntity_o *)IsLock, 0LL);
  this->fields.isMaterialTdSvt = IsLock & 1;
  if ( baseUsrSvtData )
  {
    v258 = (UserServantEntity_o *)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_545;
    v259 = *(_OWORD *)&v258->fields.id.fields.fakeValue;
    *(_OWORD *)&v367.fields.currentCryptoKey = *(_OWORD *)&v258->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v367.fields.fakeValue = v259;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v348 = v367;
    v260 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v348, 0LL);
    v261 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
    *(_OWORD *)&v347.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v347.fields.fakeValue = v261;
    if ( v260 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v347, 0LL) )
      this->fields.isBaseSvt = 1;
  }
LABEL_437:
  v262 = this->fields.type;
  if ( v262 == 6 )
  {
    IsLock = (int64_t)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_545;
    IsLock = UserServantEntity__isExceedLvMax((UserServantEntity_o *)IsLock, 0LL);
    v263 = this->fields.userSvtEntity;
    this->fields.isLvExceedMax = IsLock & 1;
    if ( !v263 )
      goto LABEL_545;
    IsLock = UserServantEntity__isLimitCountMax(v263, 0LL);
    v264 = this->fields.userSvtEntity;
    this->fields.isLimitCntMax = IsLock & 1;
    if ( !v264 )
      goto LABEL_545;
    v265 = UserServantEntity__isLevelMax(v264, 0LL);
    IsLock = (int64_t)this->fields.userSvtEntity;
    this->fields.isLvMax = v265;
    this->fields.isParty = v181;
    if ( !IsLock )
      goto LABEL_545;
    IsLock = UserServantEntity__IsLock((UserServantEntity_o *)IsLock, 0LL);
    v266 = this->fields.userSvtEntity;
    this->fields.isLock = IsLock & 1;
    if ( !v266 )
      goto LABEL_545;
    *p_isChoice = UserServantEntity__IsChoice(v266, 0LL);
    IsLock = (int64_t)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_545;
    IsLock = UserServantEntity__IsEventJoin((UserServantEntity_o *)IsLock, 0LL);
    this->fields.isEventJoin = IsLock & 1;
    if ( baseUsrSvtData )
    {
      v267 = (UserServantEntity_o *)*p_userSvtEntity;
      if ( !*p_userSvtEntity )
        goto LABEL_545;
      v268 = *(_OWORD *)&v267->fields.id.fields.fakeValue;
      *(_OWORD *)&v367.fields.currentCryptoKey = *(_OWORD *)&v267->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v367.fields.fakeValue = v268;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v346 = v367;
      v269 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v346, 0LL);
      v270 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
      *(_OWORD *)&v345.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v345.fields.fakeValue = v270;
      if ( v269 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v345, 0LL) )
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
        v272 = (int32_t *)SvtExceedEnt;
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        IsLock = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_CommonConsumeMaster___);
        if ( !IsLock )
          goto LABEL_545;
        IdEntityList = CommonConsumeMaster__GetIdEntityList((CommonConsumeMaster_o *)IsLock, v272[12], 0LL);
        if ( IdEntityList )
        {
          v274 = IdEntityList;
          v275 = (System_Collections_Generic_HashSet_int__o *)sub_B77694(System_Collections_Generic_HashSet_int__TypeInfo);
          System_Collections_Generic_HashSet_int____ctor(
            v275,
            (const MethodInfo_2EDBA84 *)Method_System_Collections_Generic_HashSet_int___ctor___69373296);
          v276 = (System_Collections_Generic_HashSet_int__o *)sub_B77694(System_Collections_Generic_HashSet_int__TypeInfo);
          System_Collections_Generic_HashSet_int____ctor(
            v276,
            (const MethodInfo_2EDBA84 *)Method_System_Collections_Generic_HashSet_int___ctor___69373296);
          v277 = v274->max_length;
          if ( v277 >= 1 )
          {
            v278 = 0LL;
            do
            {
              if ( (unsigned int)v278 >= v277 )
              {
LABEL_555:
                v327 = sub_B776C8(IsLock);
                sub_B77668(v327, 0LL);
              }
              v279 = v274->m_Items[v278];
              if ( !v279 )
                goto LABEL_545;
              if ( !v275 )
                goto LABEL_545;
              IsLock = System_Collections_Generic_HashSet_int___Add(
                         v275,
                         v279->fields.objectId,
                         (const MethodInfo_2EDCC60 *)Method_System_Collections_Generic_HashSet_int__Add__);
              if ( !v276 )
                goto LABEL_545;
              IsLock = System_Collections_Generic_HashSet_int___Add(
                         v276,
                         v279->fields.num,
                         (const MethodInfo_2EDCC60 *)Method_System_Collections_Generic_HashSet_int__Add__);
              v277 = v274->max_length;
            }
            while ( (int)++v278 < v277 );
          }
          if ( v272[13] >= 1 )
          {
            if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !DataManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            }
            IsLock = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_SvtCoinMaster___);
            v280 = (UserServantEntity_o *)*p_userSvtEntity;
            if ( !*p_userSvtEntity )
              goto LABEL_545;
            v281 = (DataMasterBase_WarMaster__WarEntity__int__o *)IsLock;
            v282 = *(_QWORD *)&v280->fields.svtId.fields.currentCryptoKey;
            v283 = *(_QWORD *)&v280->fields.svtId.fields.fakeValue;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v385.fields.currentCryptoKey = v282;
            *(_QWORD *)&v385.fields.fakeValue = v283;
            IsLock = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v385, 0LL);
            if ( !v281 )
              goto LABEL_545;
            IsLock = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                v281,
                                IsLock,
                                (const MethodInfo_21FB894 *)Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__GetEntity__);
            if ( !IsLock )
              goto LABEL_545;
            if ( !v275 )
              goto LABEL_545;
            IsLock = System_Collections_Generic_HashSet_int___Add(
                       v275,
                       *(_DWORD *)(IsLock + 24),
                       (const MethodInfo_2EDCC60 *)Method_System_Collections_Generic_HashSet_int__Add__);
            if ( !v276 )
              goto LABEL_545;
            System_Collections_Generic_HashSet_int___Add(
              v276,
              v272[13],
              (const MethodInfo_2EDCC60 *)Method_System_Collections_Generic_HashSet_int__Add__);
          }
          v284 = this->fields.userSvtEntity;
          v285 = System_Linq_Enumerable__ToArray_int_(
                   (System_Collections_Generic_IEnumerable_TSource__o *)v275,
                   (const MethodInfo_1D3D440 *)Method_System_Linq_Enumerable_ToArray_int___);
          v286 = System_Linq_Enumerable__ToArray_int_(
                   (System_Collections_Generic_IEnumerable_TSource__o *)v276,
                   (const MethodInfo_1D3D440 *)Method_System_Linq_Enumerable_ToArray_int___);
          baseUsrSvtData = v337;
          v181 = v340;
          this->fields.isLvExceedItemNum = CombineUtility__CheckCombineNeedItemsEnough(
                                             v284,
                                             v285,
                                             v286,
                                             *(_DWORD *)(v331 + 96),
                                             v272[8],
                                             0LL);
        }
      }
    }
    v262 = this->fields.type;
  }
  if ( v262 != 8 )
    goto LABEL_530;
  IsLock = (int64_t)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_545;
  this->fields.isFriendshipExceedMax = UserServantEntity__isExceedFriendshipMax((UserServantEntity_o *)IsLock, 0LL);
  v287 = *(_QWORD *)(v336 + 100);
  v288 = *(_QWORD *)(v336 + 108);
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v386.fields.currentCryptoKey = v287;
  *(_QWORD *)&v386.fields.fakeValue = v288;
  IsLock = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v386, 0LL);
  if ( !*p_servantEntity )
    goto LABEL_545;
  maxFriendshipRank = (*p_servantEntity)->fields.maxFriendshipRank;
  v290 = *(_DWORD *)(v336 + 116);
  v291 = this->fields.userSvtEntity;
  this->fields.isParty = v181;
  this->fields.isFriendshipRankMax = (_DWORD)IsLock == v290 + maxFriendshipRank;
  if ( !v291 )
    goto LABEL_545;
  IsLock = UserServantEntity__IsLock(v291, 0LL);
  v292 = this->fields.userSvtEntity;
  this->fields.isLock = IsLock & 1;
  if ( !v292 )
    goto LABEL_545;
  *p_isChoice = UserServantEntity__IsChoice(v292, 0LL);
  IsLock = (int64_t)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_545;
  IsLock = UserServantEntity__IsEventJoin((UserServantEntity_o *)IsLock, 0LL);
  this->fields.isEventJoin = IsLock & 1;
  if ( baseUsrSvtData )
  {
    v293 = (UserServantEntity_o *)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_545;
    v294 = *(_OWORD *)&v293->fields.id.fields.fakeValue;
    *(_OWORD *)&v367.fields.currentCryptoKey = *(_OWORD *)&v293->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v367.fields.fakeValue = v294;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v344 = v367;
    v295 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v344, 0LL);
    v296 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
    *(_OWORD *)&v343.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v343.fields.fakeValue = v296;
    if ( v295 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v343, 0LL) )
      this->fields.isBaseSvt = 1;
  }
  IsLock = (int64_t)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
LABEL_545:
    sub_B7769C(IsLock, v52);
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
  v297 = (*p_servantEntity)->fields.maxFriendshipRank;
  v298 = *(_DWORD *)(v336 + 116);
  IsLock = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !IsLock )
    goto LABEL_545;
  IsLock = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                      (DataManager_o *)IsLock,
                      (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_FriendshipMaster___);
  if ( !*p_servantEntity )
    goto LABEL_545;
  if ( !IsLock )
    goto LABEL_545;
  IsLock = (int64_t)FriendshipMaster__GetEntity(
                      (FriendshipMaster_o *)IsLock,
                      (*p_servantEntity)->fields.friendshipId,
                      v297 + v298 + 1,
                      0LL);
  if ( !IsLock )
    goto LABEL_545;
  v299 = IsLock;
  v300 = *(_QWORD *)(IsLock + 32);
  v301 = *(_QWORD *)(IsLock + 40);
  IsLock = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !IsLock )
    goto LABEL_545;
  IsLock = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                      (DataManager_o *)IsLock,
                      (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !v301 )
    goto LABEL_545;
  if ( *(int *)(v301 + 24) >= 1 )
  {
    v302 = (UserItemMaster_o *)IsLock;
    v303 = 0LL;
    v304 = v301 + 32;
    while ( 1 )
    {
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      IsLock = NetworkManager__get_UserId(0LL);
      if ( v303 >= *(unsigned int *)(v301 + 24) )
        goto LABEL_555;
      if ( !v302 )
        goto LABEL_545;
      IsLock = UserItemMaster__TryGetEntity(v302, &v370, IsLock, *(_DWORD *)(v304 + 4 * v303), 0LL);
      if ( (IsLock & 1) == 0 )
        break;
      if ( v303 >= *(unsigned int *)(v301 + 24) )
        goto LABEL_555;
      if ( !v370 )
        goto LABEL_545;
      if ( *(_DWORD *)(v304 + 4 * v303) == v370->fields.itemId )
      {
        if ( !v300 )
          goto LABEL_545;
        if ( v303 >= *(unsigned int *)(v300 + 24) )
          goto LABEL_555;
        v305 = *(_DWORD *)(v300 + 32 + 4 * v303) <= v370->fields.num;
        goto LABEL_526;
      }
LABEL_527:
      if ( (__int64)++v303 >= *(int *)(v301 + 24) )
        goto LABEL_528;
    }
    v305 = 0;
LABEL_526:
    this->fields.isFriendshipExceedItemNum = v305;
    goto LABEL_527;
  }
LABEL_528:
  if ( *(_DWORD *)(v331 + 96) < *(_DWORD *)(v299 + 28) )
    this->fields.isFriendshipExceedItemNum = 0;
LABEL_530:
  IsLock = (int64_t)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_545;
  IsLock = UserServantEntity__getDispLimitCount((UserServantEntity_o *)IsLock, 0, 0LL);
  v306 = this->fields.userSvtEntity;
  this->fields.dispLimitCount = IsLock;
  if ( !v306 )
    goto LABEL_545;
  SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v306, -1, 0LL);
  this->fields.skillCategoryIdList = SkillCategoryIdList;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.skillCategoryIdList,
    (System_Int32_array **)SkillCategoryIdList,
    v308,
    v309,
    v310,
    v311,
    v312,
    v313);
  IsLock = (int64_t)this->fields.userSvtEntity;
  if ( !IsLock )
    goto LABEL_545;
  TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                   (UserServantEntity_o *)IsLock,
                                   0,
                                   0LL);
  this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.tdCategoryIdList,
    (System_Int32_array **)TreasureDeviceCategoryIdList,
    v315,
    v316,
    v317,
    v318,
    v319,
    v320);
  IsLock = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !IsLock )
    goto LABEL_545;
  IsLock = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                      (DataManager_o *)IsLock,
                      (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !IsLock )
    goto LABEL_545;
  IsLock = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                      (DataMasterBase_WarMaster__WarEntity__int__o *)IsLock,
                      this->fields.classId,
                      (const MethodInfo_21FB894 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !IsLock )
    goto LABEL_545;
  v321 = *(int *)(IsLock + 48);
  v322 = this->fields.servantEntity;
  this->fields.priority = v321;
  this->fields.sortValue1B = v321;
  if ( !v322 )
    goto LABEL_545;
  v323 = (UserServantEntity_o *)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_545;
  this->fields.sortValue2 = ((__int64)v322->fields.collectionNo << 16) | ((unsigned __int64)(unsigned int)this->fields.rarity << 48) | v323->fields.lv;
  v325 = *(_QWORD *)&v323->fields.svtId.fields.currentCryptoKey;
  v324 = *(_QWORD *)&v323->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v387.fields.currentCryptoKey = v325;
  *(_QWORD *)&v387.fields.fakeValue = v324;
  v326 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v387, 0LL);
  IsLock = (int64_t)this->fields.iconLabelInfo1;
  this->fields.sortValue2B = v326;
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

  if ( (byte_438E721 & 1) == 0 )
  {
    sub_B775C4(&SvtUseSkillData_TypeInfo);
    byte_438E721 = 1;
  }
  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
    return UserServantEntity__getAppendSkillInfo(userSvtEntity, 0LL);
  v5 = (SvtUseSkillData_o *)sub_B77694(SvtUseSkillData_TypeInfo);
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
      sub_B7769C(TreasureDeviceInfo, v10);
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

  if ( (byte_438E722 & 1) == 0 )
  {
    sub_B775C4(&CondType_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMaster_CombineLimitReleaseMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    byte_438E722 = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_CombineLimitReleaseMaster___);
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
    sub_B7769C(Master_WarQuestSelectionMaster, v4);
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

  if ( (byte_438E720 & 1) == 0 )
  {
    sub_B775C4(&BalanceConfig_TypeInfo);
    sub_B775C4(&SkillInfo___TypeInfo);
    byte_438E720 = 1;
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
    v8 = (SkillInfo_array *)sub_B775DC(SkillInfo___TypeInfo, (unsigned int)v7->static_fields->SvtSkillListMax);
    *skillInfoList = v8;
    sub_B77560((BattleServantConfConponent_o *)skillInfoList, (System_Int32_array **)v8, v9, v10, v11, v12, v13, v14);
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

  if ( (byte_438E710 & 1) == 0 )
  {
    sub_B775C4(&FilterKindList_TypeInfo);
    sub_B775C4(&ListViewSort_FilterKind___TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    sub_B775C4(&ServantEventBonusFilterController_TypeInfo);
    byte_438E710 = 1;
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
                                        (const MethodInfo_30EAECC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                            (const MethodInfo_30EAECC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                           (const MethodInfo_30EAECC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                           (const MethodInfo_30EAECC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
    sub_B7769C(ClassGroupFilterKindList, sort);
  v14 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           (System_Collections_Generic_List_Voice_BATTLE__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_30EAECC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
        sub_B77560(
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
        sub_B77560(
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
    ClassGroupFilterKindList = sub_B775DC(ListViewSort_FilterKind___TypeInfo, 1LL);
    if ( !ClassGroupFilterKindList )
      goto LABEL_72;
    if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
      goto LABEL_73;
    *(_DWORD *)(ClassGroupFilterKindList + 32) = 50;
    IsUnSelectedAllTargetFilters = ListViewSort__IsUnSelectedAllTargetFilters(
                                     sort,
                                     (ListViewSort_FilterKind_array *)ClassGroupFilterKindList,
                                     0LL);
    ClassGroupFilterKindList = sub_B775DC(ListViewSort_FilterKind___TypeInfo, 1LL);
    if ( !ClassGroupFilterKindList )
      goto LABEL_72;
    if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
    {
LABEL_73:
      v40 = sub_B776C8(ClassGroupFilterKindList);
      sub_B77668(v40, 0LL);
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
  ClassGroupFilterKindList = sub_B775DC(ListViewSort_FilterKind___TypeInfo, 1LL);
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
                                           (const MethodInfo_30EAECC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
  if ( (byte_438E711 & 1) == 0 )
  {
    sub_B775C4(&FilterKindList_TypeInfo);
    sub_B775C4(&ListViewSort_FilterKind___TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    this = (CombineServantListViewItem_o *)sub_B775C4(&ServantEventBonusFilterController_TypeInfo);
    byte_438E711 = 1;
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
                                          (const MethodInfo_30EAECC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                          (const MethodInfo_30EAECC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v9, 0LL) )
    goto LABEL_92;
  this = (CombineServantListViewItem_o *)sub_B775DC(ListViewSort_FilterKind___TypeInfo, 1LL);
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
                                           (const MethodInfo_30EAECC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                           (const MethodInfo_30EAECC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
    sub_B7769C(this, sort);
  v16 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           (System_Collections_Generic_List_Voice_BATTLE__o *)this,
                                           (const MethodInfo_30EAECC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
        sub_B77560(
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
        sub_B77560(
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
    this = (CombineServantListViewItem_o *)sub_B775DC(ListViewSort_FilterKind___TypeInfo, 1LL);
    if ( !this )
      goto LABEL_88;
    if ( !this->fields.sortIndex )
      goto LABEL_89;
    LODWORD(this->fields.sortValue0) = 50;
    IsUnSelectedAllTargetFilters = ListViewSort__IsUnSelectedAllTargetFilters(
                                     sort,
                                     (ListViewSort_FilterKind_array *)this,
                                     0LL);
    this = (CombineServantListViewItem_o *)sub_B775DC(ListViewSort_FilterKind___TypeInfo, 1LL);
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
  this = (CombineServantListViewItem_o *)sub_B775DC(ListViewSort_FilterKind___TypeInfo, 1LL);
  if ( !this )
    goto LABEL_88;
  if ( !this->fields.sortIndex )
    goto LABEL_89;
  LODWORD(this->fields.sortValue0) = 39;
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)this, 0LL) )
  {
    this = (CombineServantListViewItem_o *)sub_B775DC(ListViewSort_FilterKind___TypeInfo, 1LL);
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
    v44 = sub_B776C8(this);
    sub_B77668(v44, 0LL);
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
                                           (const MethodInfo_30EAECC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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

  if ( (byte_438E70F & 1) == 0 )
  {
    sub_B775C4(&FilterKindList_TypeInfo);
    sub_B775C4(&ListViewSort_FilterKind___TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    sub_B775C4(&ServantEventBonusFilterController_TypeInfo);
    byte_438E70F = 1;
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
                                        (const MethodInfo_30EAECC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                            (const MethodInfo_30EAECC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                           (const MethodInfo_30EAECC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
    sub_B7769C(ClassGroupFilterKindList, sort);
  v12 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           (System_Collections_Generic_List_Voice_BATTLE__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_30EAECC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
        sub_B77560(
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
        sub_B77560(
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
    ClassGroupFilterKindList = sub_B775DC(ListViewSort_FilterKind___TypeInfo, 1LL);
    if ( !ClassGroupFilterKindList )
      goto LABEL_66;
    if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
      goto LABEL_67;
    *(_DWORD *)(ClassGroupFilterKindList + 32) = 50;
    IsUnSelectedAllTargetFilters = ListViewSort__IsUnSelectedAllTargetFilters(
                                     sort,
                                     (ListViewSort_FilterKind_array *)ClassGroupFilterKindList,
                                     0LL);
    ClassGroupFilterKindList = sub_B775DC(ListViewSort_FilterKind___TypeInfo, 1LL);
    if ( !ClassGroupFilterKindList )
      goto LABEL_66;
    if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
    {
LABEL_67:
      v38 = sub_B776C8(ClassGroupFilterKindList);
      sub_B77668(v38, 0LL);
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
  ClassGroupFilterKindList = sub_B775DC(ListViewSort_FilterKind___TypeInfo, 1LL);
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
                                           (const MethodInfo_30EAECC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
    sub_B7769C(0LL, method);
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
    sub_B7769C(0LL, method);
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

  if ( (byte_438E70E & 1) == 0 )
  {
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_438E70E = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame || (userSvtEntity = this->fields.userSvtEntity) == 0LL )
    sub_B7769C(SelfUserGame, v4);
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
  this->fields.isPush = pushUserSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v8, 0LL);
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

  if ( (byte_438E70D & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMaster_CombineAppendPassiveSkillMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_SkillMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_SvtAppendPassiveSkillUnlockMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_B775C4(&Method_System_Linq_Enumerable_Any_int___);
    sub_B775C4(&Method_System_Collections_Generic_List_int__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_int___ctor___69397304);
    sub_B775C4(&System_Collections_Generic_List_int__TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_438E70D = 1;
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
      userSvtEntity = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_SkillMaster___);
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
                        (const MethodInfo_21FB894 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
      svtSkillLvList = v5->fields.svtSkillLvList;
      if ( !svtSkillLvList )
        goto LABEL_69;
      if ( v10 >= svtSkillLvList->max_length )
      {
LABEL_72:
        v30 = sub_B776C8(userSvtEntity);
        sub_B77668(v30, 0LL);
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
  v31 = (System_Collections_Generic_List_int__o *)sub_B77694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v31,
    (const MethodInfo_30E508C *)Method_System_Collections_Generic_List_int___ctor___69397304);
  v13 = v5->fields.svtUseSkillIdList;
  if ( !v13 )
LABEL_69:
    sub_B7769C(userSvtEntity, method);
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
      userSvtEntity = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_CombineAppendPassiveSkillMaster___);
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
      userSvtEntity = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v33, 0LL);
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
            (const MethodInfo_30E5DE8 *)Method_System_Collections_Generic_List_int__Add__);
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
      userSvtEntity = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_SvtAppendPassiveSkillUnlockMaster___);
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
      userSvtEntity = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v34, 0LL);
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
                                          (const MethodInfo_1D1D6CC *)Method_System_Linq_Enumerable_Any_int___);
  this->fields.isAppendSkillOpenItemNum = System_Linq_Enumerable__Any_int_(
                                            (System_Collections_Generic_IEnumerable_TSource__o *)v31,
                                            (const MethodInfo_1D1D6CC *)Method_System_Linq_Enumerable_Any_int___);
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

  if ( (byte_438E713 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
    sub_B775C4(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
    byte_438E713 = 1;
  }
  this->fields.isCombineExpCampaignTarget = 0;
  this->fields.combineExpCampaignValue = 0.0;
  if ( !eventCampaignEntities || this->fields.type )
    return;
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
  size = eventCampaignEntities->fields._size;
  if ( size >= 1 )
  {
    v9 = 4LL;
    while ( 1 )
    {
      v10 = v9 - 4;
      if ( size <= (unsigned int)(v9 - 4) )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
      v11 = *((_QWORD *)&eventCampaignEntities->fields._items->obj.klass + v9);
      if ( !v11 )
        break;
      if ( *(_DWORD *)(v11 + 20) == 2 )
        goto LABEL_14;
      if ( eventCampaignEntities->fields._size <= v10 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
      if ( *(_DWORD *)(v11 + 20) == 27 )
      {
LABEL_14:
        if ( eventCampaignEntities->fields._size <= v10 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
        if ( !v5 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v5,
          *((EventMissionProgressRequest_Argument_ProgressData_o **)&eventCampaignEntities->fields._items->obj.klass + v9),
          (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
      }
      size = eventCampaignEntities->fields._size;
      if ( (int)++v9 - 4 >= size )
        goto LABEL_19;
    }
LABEL_54:
    sub_B7769C(userSvtEntity, v7);
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
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
    v15 = v5->fields._items->m_Items[v14];
    if ( !v15 )
      goto LABEL_54;
    if ( v15->fields.missionConditionDetailId == 27 )
      break;
    if ( v5->fields._size <= v14 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
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
          v21 = sub_B776C8(userSvtEntity);
          sub_B77668(v21, 0LL);
        }
        if ( this->fields.svtId == *((_DWORD *)&klass->_1.byval_arg.data + (int)v18) )
          break;
        if ( (int)++v18 >= namespaze )
          goto LABEL_45;
      }
      this->fields.isCombineExpCampaignTarget = 1;
      if ( v5->fields._size <= v14 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
      v19 = v5->fields._items->m_Items[v14];
      if ( !v19 )
        goto LABEL_54;
      if ( SLODWORD(v19[1].monitor) > monitor )
      {
        if ( v5->fields._size <= v14 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
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
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
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
  sub_B77560(
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

  if ( (byte_438E70C & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_CombineSkillMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_B775C4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438E70C = 1;
  }
  entity = 0LL;
  v40 = 0LL;
  SelfUserGame = (__int64)UserGameMaster__getSelfUserGame(0LL);
  userSvtEntity = this->fields.userSvtEntity;
  v36 = SelfUserGame;
  if ( !userSvtEntity )
    goto LABEL_60;
  SelfUserGame = (__int64)UserServantEntity__getSkillIdList(userSvtEntity, -1, -1, 1, -1, 0LL);
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
        v33 = sub_B776C8(SelfUserGame);
        sub_B77668(v33, 0LL);
      }
      v11 = *(_DWORD *)(v7 + 32 + 4 * v10);
      if ( v11 >= 1 )
      {
        v12 = *(_DWORD *)(v9 + 32 + 4 * v10);
        SelfUserGame = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !SelfUserGame )
          goto LABEL_60;
        SelfUserGame = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)SelfUserGame,
                                  (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_SkillMaster___);
        if ( !SelfUserGame )
          goto LABEL_60;
        SelfUserGame = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                  (DataMasterBase_WarMaster__WarEntity__int__o *)SelfUserGame,
                                  v11,
                                  (const MethodInfo_21FB894 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
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
  SelfUserGame = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_60;
  SelfUserGame = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)SelfUserGame,
                            (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_CombineSkillMaster___);
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
          SelfUserGame = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !SelfUserGame )
            goto LABEL_60;
          SelfUserGame = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    (DataManager_o *)SelfUserGame,
                                    (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserItemMaster___);
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
              SelfUserGame = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v38, 0LL);
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
              (const MethodInfo_30E5DE8 *)Method_System_Collections_Generic_List_int__Add__);
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
    sub_B7769C(SelfUserGame, v4);
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
  bool EventUpVal_21829156; // w0
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
  if ( (byte_438E712 & 1) == 0 )
  {
    sub_B775C4(&CombineServantListViewManager_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMasterData_ServantFilterMaster___);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    this = (CombineServantListViewItem_o *)sub_B775C4(&TutorialFlag_TypeInfo);
    byte_438E712 = 1;
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
      EventUpVal_21829156 = UserServantEntity__getEventUpVal_21829156(
                              (UserServantEntity_o *)this,
                              v4->fields.setupInfo,
                              v12,
                              0LL,
                              0LL);
LABEL_29:
      v4->fields.isEventUpVal = EventUpVal_21829156;
      if ( !EventUpVal_21829156 )
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
      this = (CombineServantListViewItem_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_254;
      MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             (DataManager_o *)this,
                                             (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantFilterMaster___);
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
      EventUpVal_21829156 = ServantFilterMaster__IsEnableServant(v16, v17, v4->fields.bonusKindId, 0LL);
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
      v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v68, 0LL);
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
          this = (CombineServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(
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
          IconLabelInfo__Set_28141596(iconLabelInfo1, 2, amountSortValue, (int32_t)this, 0, 0, 0, v42->fields.lv, 0LL);
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
          IconLabelInfo__Set_28141596(
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
            UserServantEntity__getTreasureDeviceInfo_21836884((UserServantEntity_o *)this, &tdMaxLv[1], tdMaxLv, 0LL);
            LODWORD(friendship) = tdMaxLv[1];
            this = (CombineServantListViewItem_o *)v4->fields.iconLabelInfo1;
            v4->fields.sortValue1 = tdMaxLv[1];
            if ( !this )
              break;
            friendshipMax = tdMaxLv[0];
            v62 = 33;
LABEL_210:
            IconLabelInfo__Set_28141596((IconLabelInfo_o *)this, v62, friendship, friendshipMax, 0, 0, 0, 0, 0LL);
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
            IconLabelInfo__Set_28141596(v47, 2, v63, (int32_t)this, 0, 0, 0, 0, 0LL);
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
          IconLabelInfo__Set_28141596((IconLabelInfo_o *)this, v51, hp, adjustHp, 0, 0, 0, 0, 0LL);
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
          IconLabelInfo__Set_28141596((IconLabelInfo_o *)this, 7, servantEntity->fields.cost, 0, 0, 0, 0, 0, 0LL);
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
          IconLabelInfo__Set_28141596(v53, 2, lv, (int32_t)this, 0, 0, 0, 0, 0LL);
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
      sub_B7769C(this, sort);
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
          if ( TutorialFlag__Get_29515752(126, 0LL) )
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
              *(_OWORD *)p_sortValue0 = xmmword_332FC30;
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
          if ( TutorialFlag__Get_29515752(126, 0LL) )
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
        if ( !TutorialFlag__Get_29515752(126, 0LL) )
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
          if ( TutorialFlag__Get_29515752(126, 0LL) )
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
          if ( TutorialFlag__Get_29515752(126, 0LL) )
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

  if ( (byte_438E71D & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_15362/*"UserSvt "*/);
    byte_438E71D = 1;
  }
  NameText = CombineServantListViewItem__get_NameText(this, method);
  return System_String__Concat_44901936((System_String_o *)StringLiteral_15362/*"UserSvt "*/, NameText, 0LL);
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

  if ( (byte_438E719 & 1) == 0 )
  {
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&StringLiteral_18762/*"error"*/);
    byte_438E719 = 1;
  }
  servantEntity = this->fields.servantEntity;
  if ( !servantEntity )
    return (System_String_o *)StringLiteral_18762/*"error"*/;
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
  if ( (byte_438E71A & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438E71A = 1;
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
    sub_B7769C(0LL, method);
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

  if ( (byte_438E71B & 1) == 0 )
  {
    sub_B775C4(&TutorialFlag_TypeInfo);
    byte_438E71B = 1;
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
    if ( TutorialFlag__Get_29515752(126, 0LL) )
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
        v7 = TutorialFlag__Get_29515752(126, 0LL) || this->fields.isSkillLvMax;
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
            if ( TutorialFlag__Get_29515752(126, 0LL) )
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
      if ( TutorialFlag__Get_29515752(126, 0LL) )
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
      return TutorialFlag__Get_29515752(126, 0LL);
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

  if ( (byte_438E71C & 1) == 0 )
  {
    sub_B775C4(&TutorialFlag_TypeInfo);
    byte_438E71C = 1;
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
    if ( TutorialFlag__Get_29515752(126, 0LL) )
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
    sub_B7769C(v6, v5);
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
    sub_B7769C(0LL, method);
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
    sub_B7769C(0LL, method);
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
    sub_B7769C(0LL, method);
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
    sub_B7769C(0LL, method);
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

  if ( (byte_438E717 & 1) == 0 )
  {
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&StringLiteral_18762/*"error"*/);
    byte_438E717 = 1;
  }
  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    return (System_String_o *)StringLiteral_18762/*"error"*/;
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
  if ( (byte_438E716 & 1) == 0 )
  {
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (CombineServantListViewItem_o *)sub_B775C4(&StringLiteral_18762/*"error"*/);
    byte_438E716 = 1;
  }
  servantEntity = v2->fields.servantEntity;
  if ( !servantEntity )
    return (System_String_o *)StringLiteral_18762/*"error"*/;
  userSvtEntity = v2->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_B7769C(this, method);
  v6 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.currentCryptoKey;
  v5 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v9.fields.currentCryptoKey = v6;
  *(_QWORD *)&v9.fields.fakeValue = v5;
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v9, 0LL);
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

  if ( (byte_438E718 & 1) == 0 )
  {
    sub_B775C4(&LocalizationManager_TypeInfo);
    byte_438E718 = 1;
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

  if ( (byte_438E71E & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMaster_SvtCoinMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__GetEntity__);
    byte_438E71E = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_SvtCoinMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B7769C(0LL, v4);
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             Master_WarQuestSelectionMaster,
             this->fields.svtId,
             (const MethodInfo_21FB894 *)Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__GetEntity__);
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

  if ( (byte_438E71F & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMaster_UserSvtCoinMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_438E71F = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_UserSvtCoinMaster___);
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
  Master_WarQuestSelectionMaster = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v13, 0LL);
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
  Master_WarQuestSelectionMaster = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v16, 0LL);
  if ( !v7 )
    goto LABEL_20;
  Master_WarQuestSelectionMaster = UserSvtCoinMaster__TryGetEntity(v7, &entity, v9, Master_WarQuestSelectionMaster, 0LL);
  if ( (Master_WarQuestSelectionMaster & 1) != 0 )
  {
    if ( entity )
      return entity->fields.num;
LABEL_20:
    sub_B7769C(Master_WarQuestSelectionMaster, v4);
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
  if ( (byte_438E714 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B775C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    this = (CombineServantListViewItem_o *)sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438E714 = 1;
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
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v16, 0LL);
  this = (CombineServantListViewItem_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (this = (CombineServantListViewItem_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                 (DataManager_o *)this,
                                                 (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
  {
LABEL_10:
    sub_B7769C(this, method);
  }
  Entity = (System_Int32_array **)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                    (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)this,
                                    v7,
                                    (const MethodInfo_21FBABC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  p_userSvtEntity->klass = (BattleServantConfConponent_c *)Entity;
  sub_B77560(p_userSvtEntity, Entity, v9, v10, v11, v12, v13, v14);
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
  if ( (byte_438E715 & 1) == 0 )
  {
    this = (CombineServantListViewItem_o *)sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_438E715 = 1;
  }
  userSvtEntity = v2->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_B7769C(this, method);
  v4 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v7.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v7.fields.fakeValue = v4;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v6 = v7;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v6, 0LL);
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
  sub_B77560(
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
    sub_B7769C(0LL, value);
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
    sub_B7769C(0LL, value);
  this->fields.dragSelectNum = ~value << 31 >> 31;
}


void __fastcall CombineServantListViewItem__set_IsHpStatusMax(
        CombineServantListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  if ( !this )
    sub_B7769C(0LL, value);
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
    sub_B7769C(0LL, value);
  this->fields.isNotSelectSecondStatusUpAtk = this->fields.atkBase > 0 && value;
}


void __fastcall CombineServantListViewItem__set_IsSecondHpStatusMax(
        CombineServantListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  if ( !this )
    sub_B7769C(0LL, value);
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
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields._NoticeTween_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}