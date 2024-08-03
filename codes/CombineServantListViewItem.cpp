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
  __int64 v54; // x1
  IconLabelInfo_o *v55; // x20
  int32_t v56; // w2
  int32_t v57; // w3
  __int64 v58; // x1
  __int64 v59; // x2
  IconLabelInfo_o *v60; // x20
  int32_t v61; // w2
  int32_t v62; // w3
  __int64 v63; // x1
  __int64 v64; // x2
  System_Collections_Generic_List_int__o *v65; // x20
  int32_t v66; // w2
  int32_t v67; // w3
  __int64 v68; // x1
  __int64 v69; // x2
  System_Collections_Generic_List_int__o *v70; // x20
  int32_t v71; // w2
  int32_t v72; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_userSvtEntity; // x21
  int32_t v74; // w2
  int32_t v75; // w3
  int64_t Instance; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v77; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v78; // x20
  __int64 v79; // x23
  __int64 v80; // x24
  Il2CppObject *v81; // x0
  int32_t v82; // w2
  int32_t v83; // w3
  int32_t v84; // w2
  int32_t v85; // w3
  struct UserServantEntity_o *v86; // x8
  struct ServantEntity_o *servantEntity; // x8
  ServantLimitMaster_o *v88; // x20
  int32_t v89; // w24
  int64_t v90; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v91; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v92; // q1
  UserServantCollectionMaster_o *v93; // x20
  int64_t v94; // x24
  int64_t v95; // x23
  int v96; // w8
  bool *p_isStatusUpSvt; // x26
  int64_t v98; // x22
  struct UserServantEntity_o *v99; // x8
  int32_t v100; // w20
  BalanceConfig_c *v101; // x8
  struct BalanceConfig_StaticFields *static_fields; // x8
  struct UserServantEntity_o *v103; // x8
  __int128 v104; // q1
  __int64 v105; // x20
  const MethodInfo *v106; // x1
  int64_t UserSvtId; // x0
  unsigned int v108; // w8
  bool isLimitCountMax; // w8
  UserServantEntity_o *v110; // x8
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x25
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v113; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v116; // x8
  __int64 v117; // x9
  int32_t *v118; // x10
  __int64 v119; // x0
  _QWORD *v120; // x0
  __int64 methodPtr_low; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v122; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v123; // q0
  __int64 v124; // x22
  System_Collections_Generic_IEnumerator_T__c *v125; // x8
  __int64 v126; // x9
  int32_t *v127; // x10
  __int64 v128; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v129; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v130; // q0
  UserRecommendSupportMaster_o *v131; // x20
  UserServantEntity_o *v132; // x8
  UserServantEntity_o *v133; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v134; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v135; // q0
  int64_t v136; // x0
  __int128 v137; // q1
  Il2CppObject *v138; // x20
  struct ServantEntity_o *v139; // x8
  int64_t v140; // x25
  __int64 v141; // x24
  __int64 v142; // x29
  int32_t v143; // w8
  Il2CppObject *v144; // x20
  struct ServantEntity_o *v145; // x8
  int64_t v146; // x25
  __int64 v147; // x24
  __int64 v148; // x29
  __int64 v149; // x1
  struct System_Int32_array *commandCardParam; // x20
  int max_length; // w8
  __int64 v152; // x22
  int32_t v153; // w25
  UserServantEntity_o *v154; // x23
  bool v155; // w24
  System_Collections_Generic_IEnumerator_T__o *v156; // x25
  System_Collections_Generic_IEnumerator_T__c *v157; // x8
  __int64 v158; // x9
  int32_t *v159; // x10
  __int64 v160; // x0
  System_Collections_Generic_IEnumerator_T__c *v161; // x8
  __int64 v162; // x9
  int32_t *v163; // x10
  __int64 v164; // x0
  _QWORD *v165; // x0
  __int64 v166; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v167; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v168; // q0
  __int64 v169; // x22
  System_Collections_Generic_IEnumerator_T__c *v170; // x8
  __int64 v171; // x9
  int32_t *v172; // x10
  __int64 v173; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v174; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v175; // q0
  UserRecommendSupportMaster_o *v176; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v177; // x8
  __int64 v178; // x20
  __int64 v179; // x24
  int32_t v180; // w20
  struct UserServantEntity_o *v181; // x8
  __int128 v182; // q0
  int64_t v183; // x0
  __int128 v184; // q1
  int32_t SvtClassId; // w0
  int32_t SvtClassGroupType; // w20
  int32_t materialExp; // w20
  BalanceConfig_c *v188; // x0
  int SameClassExp; // w22
  double v190; // d0
  int32_t v191; // w8
  UserServantEntity_o *v192; // x8
  int32_t v193; // w20
  bool v194; // w8
  bool v195; // w8
  bool v196; // w8
  bool v197; // w8
  Il2CppObject *v198; // x20
  struct ServantEntity_o *v199; // x8
  int64_t v200; // x25
  __int64 v201; // x24
  __int64 v202; // x26
  int32_t v203; // w8
  UserServantEntity_o *v204; // x8
  bool v205; // w8
  UserServantEntity_o *v206; // x8
  const MethodInfo *v207; // x1
  UserServantEntity_o *v208; // x8
  __int128 v209; // q0
  int64_t v210; // x0
  __int128 v211; // q1
  UserServantEntity_o *v212; // x9
  int64_t v213; // x23
  int32_t combineLimitId; // w20
  __int64 v215; // x24
  __int64 v216; // x25
  int32_t v217; // w25
  int64_t v218; // x20
  __int64 v219; // x24
  __int64 v220; // x27
  __int64 v221; // x8
  UserItemMaster_o *v222; // x25
  unsigned __int64 i; // x28
  UserServantEntity_o *v224; // x8
  __int128 v225; // q1
  int32_t v226; // w26
  int32_t v227; // w23
  UserServantEntity_o *v228; // x8
  bool isLevelMax; // w8
  UserServantEntity_o *v230; // x8
  UserServantEntity_o *v231; // x8
  const MethodInfo *v232; // x1
  UserServantEntity_o *v233; // x8
  __int128 v234; // q0
  int64_t v235; // x0
  __int128 v236; // q1
  UserServantEntity_o *v237; // x8
  UserServantEntity_o *v238; // x8
  __int128 v239; // q0
  int64_t v240; // x0
  __int128 v241; // q1
  const MethodInfo *v242; // x1
  UserServantEntity_o *v243; // x8
  UserServantEntity_o *v244; // x8
  __int128 v245; // q0
  int64_t v246; // x0
  __int128 v247; // q1
  int id; // w20
  int32_t lv; // w22
  int32_t SameSvtNpLvCache; // w0
  const MethodInfo *v251; // x4
  int32_t v252; // w20
  char v253; // w8
  int v254; // w8
  int32_t v255; // w0
  int32_t v256; // w20
  int32_t v257; // w26
  int32_t v258; // w25
  int v259; // w22
  System_Collections_Generic_IEnumerator_T__o *v260; // x25
  System_Collections_Generic_IEnumerator_T__c *v261; // x8
  __int64 v262; // x9
  int32_t *v263; // x10
  __int64 v264; // x0
  System_Collections_Generic_IEnumerator_T__c *v265; // x8
  __int64 v266; // x9
  int32_t *v267; // x10
  __int64 v268; // x0
  _QWORD *v269; // x0
  __int64 v270; // x9
  UserServantEntity_o *v271; // x8
  __int128 v272; // q0
  __int64 v273; // x22
  System_Collections_Generic_IEnumerator_T__c *v274; // x8
  __int64 v275; // x9
  int32_t *v276; // x10
  __int64 v277; // x0
  UserServantEntity_o *v278; // x8
  __int128 v279; // q0
  UserRecommendSupportMaster_o *v280; // x20
  bool IsSettingServant; // w8
  UserServantEntity_o *v282; // x8
  CombineServantListViewItem_o *v283; // x8
  CombineServantListViewItem_o *v284; // x20
  struct UserServantEntity_o *v285; // x8
  __int128 v286; // q0
  int64_t v287; // x0
  __int128 v288; // q1
  int32_t v289; // w8
  UserServantEntity_o *v290; // x8
  UserServantEntity_o *v291; // x8
  bool v292; // w8
  UserServantEntity_o *v293; // x8
  UserServantEntity_o *v294; // x8
  __int128 v295; // q0
  int64_t v296; // x0
  __int128 v297; // q1
  ServantExceedEntity_o *SvtExceedEnt; // x0
  int32_t *v299; // x25
  CommonConsumeEntity_array *IdEntityList; // x0
  __int64 v301; // x1
  __int64 v302; // x2
  CommonConsumeEntity_array *v303; // x27
  System_Collections_Generic_HashSet_int__o *v304; // x20
  __int64 v305; // x1
  __int64 v306; // x2
  System_Collections_Generic_HashSet_int__o *v307; // x26
  int v308; // w8
  __int64 v309; // x22
  CommonConsumeEntity_o *v310; // x29
  UserServantEntity_o *v311; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v312; // x27
  __int64 v313; // x24
  __int64 v314; // x28
  UserServantEntity_o *v315; // x24
  System_Int32_array *v316; // x20
  System_Int32_array *v317; // x0
  __int64 v318; // x20
  __int64 v319; // x24
  UserServantEntity_o *v320; // x8
  UserServantEntity_o *v321; // x8
  UserServantEntity_o *v322; // x8
  __int128 v323; // q0
  int64_t v324; // x0
  __int128 v325; // q1
  int32_t maxFriendshipRank; // w20
  int v327; // w22
  int64_t v328; // x20
  __int64 v329; // x23
  __int64 v330; // x24
  UserItemMaster_o *v331; // x22
  unsigned __int64 v332; // x25
  __int64 v333; // x27
  bool v334; // w8
  UserServantEntity_o *v335; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  int32_t v337; // w2
  int32_t v338; // w3
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  int32_t v340; // w2
  int32_t v341; // w3
  int64_t v342; // x8
  struct ServantEntity_o *v343; // x9
  UserServantEntity_o *v344; // x8
  __int64 v345; // x20
  __int64 v346; // x21
  int32_t v347; // w8
  int v348; // [xsp+Ch] [xbp-494h]
  UserServantMaster_o *MasterData_object; // [xsp+18h] [xbp-488h]
  int64_t v350; // [xsp+20h] [xbp-480h]
  bool *p_isLimitUpItemNum; // [xsp+28h] [xbp-478h]
  struct IconLabelInfo_o **p_iconLabelInfo2; // [xsp+30h] [xbp-470h]
  int64_t v353; // [xsp+38h] [xbp-468h]
  bool v355; // [xsp+40h] [xbp-460h]
  bool v357; // [xsp+44h] [xbp-45Ch]
  bool v358; // [xsp+44h] [xbp-45Ch]
  int64_t v359; // [xsp+48h] [xbp-458h]
  bool *p_isChoice; // [xsp+58h] [xbp-448h]
  bool v362; // [xsp+64h] [xbp-43Ch]
  struct ServantEntity_o **p_servantEntity; // [xsp+68h] [xbp-438h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v364; // [xsp+70h] [xbp-430h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v365; // [xsp+90h] [xbp-410h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v366; // [xsp+B0h] [xbp-3F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v367; // [xsp+D0h] [xbp-3D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v368; // [xsp+F0h] [xbp-3B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v369; // [xsp+110h] [xbp-390h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v370; // [xsp+130h] [xbp-370h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v371; // [xsp+150h] [xbp-350h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v372; // [xsp+170h] [xbp-330h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v373; // [xsp+190h] [xbp-310h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v374; // [xsp+1B0h] [xbp-2F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v375; // [xsp+1D0h] [xbp-2D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v376; // [xsp+1F0h] [xbp-2B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v377; // [xsp+210h] [xbp-290h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v378; // [xsp+230h] [xbp-270h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v379; // [xsp+250h] [xbp-250h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v380; // [xsp+270h] [xbp-230h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v381; // [xsp+290h] [xbp-210h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v382; // [xsp+2B0h] [xbp-1F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v383; // [xsp+2D0h] [xbp-1D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v384; // [xsp+2F0h] [xbp-1B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v385; // [xsp+310h] [xbp-190h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v386; // [xsp+330h] [xbp-170h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v387; // [xsp+350h] [xbp-150h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v388; // [xsp+370h] [xbp-130h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v389; // [xsp+390h] [xbp-110h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v390; // [xsp+3B0h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v391; // [xsp+3D0h] [xbp-D0h]
  UserItemEntity_o *v392; // [xsp+3F8h] [xbp-A8h] BYREF
  int32_t tdMaxLv; // [xsp+404h] [xbp-9Ch] BYREF
  int32_t tdLv[2]; // [xsp+408h] [xbp-98h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+410h] [xbp-90h] BYREF
  UserItemEntity_o *v396; // [xsp+418h] [xbp-88h] BYREF
  __int64 v397; // [xsp+420h] [xbp-80h] BYREF
  UserServantCommandCodeEntity_o *v398; // [xsp+428h] [xbp-78h] BYREF
  UserServantCommandCardEntity_o *v399; // [xsp+430h] [xbp-70h] BYREF
  UserServantCommandCodeEntity_o *entity; // [xsp+438h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v401; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v402; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v403; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v404; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v405; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v406; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v407; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v408; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v409; // 0:x0.16

  if ( (byte_49FFD89 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, *(_QWORD *)&type);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v16);
    sub_1B640C8(&Method_DataManager_GetMasterData_CombineLimitMaster___, v17);
    sub_1B640C8(&Method_DataManager_GetMasterData_CombineMaterialMaster___, v18);
    sub_1B640C8(&Method_DataManager_GetMasterData_FriendshipMaster___, v19);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantClassMaster___, v20);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantLimitMaster___, v21);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, v22);
    sub_1B640C8(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___, v23);
    sub_1B640C8(&Method_DataManager_GetMasterData_TreasureDvcMaster___, v24);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserItemMaster___, v25);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v26);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantCommandCardMaster___, v27);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___, v28);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantLeaderMaster___, v29);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantMaster___, v30);
    sub_1B640C8(&Method_DataManager_GetMaster_CommonConsumeMaster___, v31);
    sub_1B640C8(&Method_DataManager_GetMaster_SvtCoinMaster___, v32);
    sub_1B640C8(&Method_DataManager_GetMaster_UserRecommendSupportMaster___, v33);
    sub_1B640C8(&DataManager_TypeInfo, v34);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v35);
    sub_1B640C8(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v36);
    sub_1B640C8(&Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__GetEntity__, v37);
    sub_1B640C8(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__, v38);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_int___, v39);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_int__Add__, v40);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_int___ctor__, v41);
    sub_1B640C8(&System_Collections_Generic_HashSet_int__TypeInfo, v42);
    sub_1B640C8(&System_IDisposable_TypeInfo, v43);
    sub_1B640C8(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v44);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v45);
    sub_1B640C8(&IconLabelInfo_TypeInfo, v46);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v47);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v48);
    sub_1B640C8(&System_Math_TypeInfo, v49);
    sub_1B640C8(&NetworkManager_TypeInfo, v50);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v51);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v52);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v53);
    sub_1B640C8(&UserServantLeaderEntity_TypeInfo, v54);
    byte_49FFD89 = 1;
  }
  entity = 0LL;
  v399 = 0LL;
  v398 = 0LL;
  v397 = 0LL;
  v396 = 0LL;
  tdInfo = 0LL;
  *(_QWORD *)tdLv = 0LL;
  tdMaxLv = 0;
  v392 = 0LL;
  v55 = (IconLabelInfo_o *)sub_1B64314(IconLabelInfo_TypeInfo, *(_QWORD *)&type, *(_QWORD *)&index);
  IconLabelInfo___ctor(v55, 0LL);
  this->fields.iconLabelInfo1 = v55;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.iconLabelInfo1, (int32_t)v55, v56, v57);
  v60 = (IconLabelInfo_o *)sub_1B64314(IconLabelInfo_TypeInfo, v58, v59);
  IconLabelInfo___ctor(v60, 0LL);
  this->fields.iconLabelInfo2 = v60;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.iconLabelInfo2, (int32_t)v60, v61, v62);
  v65 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, v63, v64);
  System_Collections_Generic_List_int____ctor(
    v65,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.enableSkillUp = v65;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.enableSkillUp, (int32_t)v65, v66, v67);
  v70 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, v68, v69);
  System_Collections_Generic_List_int____ctor(
    v70,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.enableAppendSkillUp = v70;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.enableAppendSkillUp, (int32_t)v70, v71, v72);
  ListViewItem___ctor((ListViewItem_o *)this, 0LL);
  this->fields.userSvtEntity = userSvtEntity;
  p_userSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userSvtEntity;
  this->fields.type = type;
  this->fields.index = index;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.userSvtEntity, (int32_t)userSvtEntity, v74, v75);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_526;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
  v77 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_526;
  v78 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v80 = *(_QWORD *)&v77[5].fields.currentCryptoKey;
  v79 = *(_QWORD *)&v77[5].fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v401.fields.currentCryptoKey = v80;
  *(_QWORD *)&v401.fields.fakeValue = v79;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v401, 0LL);
  if ( !v78 )
    goto LABEL_526;
  v81 = DataMasterBase_object__object__int___GetEntity(
          v78,
          Instance,
          (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)v81;
  p_servantEntity = &this->fields.servantEntity;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.servantEntity, (int32_t)v81, v82, v83);
  this->fields.setupInfo = setupInfo;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v84, v85);
  v86 = this->fields.userSvtEntity;
  this->fields.isEventUpVal = 0;
  *(_QWORD *)&this->fields.bonusKind = 1LL;
  if ( !v86 )
    goto LABEL_526;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v86->fields.svtId, 0LL);
  servantEntity = this->fields.servantEntity;
  this->fields.svtId = Instance;
  if ( !servantEntity )
    goto LABEL_526;
  this->fields.classId = servantEntity->fields.classId;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_526;
  MasterData_object = (UserServantMaster_o *)DataManager__GetMasterData_object_(
                                               (DataManager_o *)Instance,
                                               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_526;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtEntity )
    goto LABEL_526;
  v88 = (ServantLimitMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608((*p_userSvtEntity)[5], 0LL);
  if ( !*p_userSvtEntity )
    goto LABEL_526;
  v89 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608((*p_userSvtEntity)[6], 0LL);
  if ( !v88 )
    goto LABEL_526;
  Instance = (int64_t)ServantLimitMaster__GetEntity(v88, v89, Instance, 0LL);
  if ( !Instance )
    goto LABEL_526;
  v90 = Instance;
  this->fields.rarity = *(_DWORD *)(Instance + 24);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_526;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v91 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_526;
  v92 = v91[4];
  v93 = (UserServantCollectionMaster_o *)Instance;
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v391.fields.currentCryptoKey = v91[3];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v391.fields.fakeValue = v92;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v390 = v391;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v390, 0LL);
  if ( !*p_userSvtEntity )
    goto LABEL_526;
  v94 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608((*p_userSvtEntity)[5], 0LL);
  if ( !v93 )
    goto LABEL_526;
  Instance = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(v93, v94, Instance, 0LL);
  if ( !Instance )
    goto LABEL_526;
  v95 = Instance;
  v350 = v90;
  UserServantCollectionEntity__getFriendShipRankInfo(
    (UserServantCollectionEntity_o *)Instance,
    &this->fields.friendship,
    &this->fields.friendshipMax,
    0LL);
  Instance = (int64_t)UserGameMaster__getSelfUserGame(0LL);
  if ( !Instance )
    goto LABEL_526;
  v96 = *(_DWORD *)(Instance + 96);
  *(_DWORD *)&this->fields.isStatusUpSvt = 0;
  p_isStatusUpSvt = &this->fields.isStatusUpSvt;
  v348 = v96;
  *(_WORD *)&this->fields.isFavorite = 0;
  *(_WORD *)&this->fields.isLock = 0;
  *(_DWORD *)&this->fields.isChoice = 0;
  this->fields.isMaxSelect = 0;
  *(_QWORD *)&this->fields.isLimitUpItemNum = 0LL;
  v98 = Instance;
  Instance = (int64_t)this->fields.userSvtEntity;
  p_isChoice = &this->fields.isChoice;
  p_isLimitUpItemNum = &this->fields.isLimitUpItemNum;
  this->fields.isLvMax = 0;
  *(_WORD *)&this->fields.isEventJoin = 0;
  this->fields.isHeroineSvt = 0;
  *(_WORD *)&this->fields.isSameSvt = 0;
  this->fields.isMaterialTdSvt = 0;
  if ( !Instance )
    goto LABEL_526;
  Instance = UserServantEntity__getLimitCntMax((UserServantEntity_o *)Instance, 0LL);
  v99 = this->fields.userSvtEntity;
  this->fields.maxLimitCnt = Instance;
  if ( !v99 )
    goto LABEL_526;
  this->fields.currentLimitCnt = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                   v99->fields.limitCount,
                                   0LL);
  this->fields.isLvExceedItemNum = 0;
  this->fields.isCanNotLock = 0;
  *(_DWORD *)&this->fields.isBaseLvMax = 0;
  *(_QWORD *)&this->fields.isAtkUpMax = 0LL;
  *(_DWORD *)&this->fields.isNotSelectSecondStatusUpAtk = 0;
  Instance = (int64_t)this->fields.userSvtEntity;
  this->fields.dragSelectNum = -1;
  if ( !Instance )
    goto LABEL_526;
  v100 = *(_DWORD *)(Instance + 276);
  v101 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v101 = BalanceConfig_TypeInfo;
    Instance = (int64_t)*p_userSvtEntity;
  }
  static_fields = v101->static_fields;
  this->fields.hpReinforceValue = static_fields->StatusUpAdjustHp * v100;
  if ( !Instance )
    goto LABEL_526;
  v353 = v95;
  this->fields.atkReinforceValue = static_fields->StatusUpAdjustAtk * *(_DWORD *)(Instance + 272);
  UserServantEntity__getAdjustMaxData(
    (UserServantEntity_o *)Instance,
    &this->fields.nowMaxHpReinforceValue,
    &this->fields.nowMaxAtkReinforceValue,
    0LL);
  v103 = this->fields.userSvtEntity;
  *(_WORD *)&this->fields.isEquipedCmdCard = 0;
  if ( !v103 )
    goto LABEL_526;
  v104 = *(_OWORD *)&v103->fields.id.fields.fakeValue;
  v105 = *(_QWORD *)(v98 + 120);
  v362 = isParty;
  v359 = v98;
  *(_OWORD *)&v389.fields.currentCryptoKey = *(_OWORD *)&v103->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v389.fields.fakeValue = v104;
  this->fields.isPush = v105 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v389, 0LL);
  UserSvtId = CombineServantListViewItem__get_UserSvtId(this, v106);
  EventFortificationDataLogic__SetFortification(
    &this->fields.isFortification,
    &this->fields.fortificationName,
    &this->fields.fortificationDetailName,
    UserSvtId,
    0LL);
  v108 = this->fields.type;
  if ( v108 > 0xA || ((1 << v108) & 0x481) == 0 )
    goto LABEL_134;
  Instance = (int64_t)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_526;
  Instance = UserServantEntity__isLevelMax((UserServantEntity_o *)Instance, 0LL);
  if ( (Instance & 1) != 0 )
  {
    Instance = (int64_t)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_526;
    Instance = UserServantEntity__isAdjustHpMax((UserServantEntity_o *)Instance, 0LL);
    if ( (Instance & 1) != 0 )
    {
      Instance = (int64_t)*p_userSvtEntity;
      if ( !*p_userSvtEntity )
        goto LABEL_526;
      Instance = UserServantEntity__isAdjustAtkMax((UserServantEntity_o *)Instance, 0LL);
      if ( (Instance & 1) != 0 )
      {
        Instance = (int64_t)*p_userSvtEntity;
        if ( !*p_userSvtEntity )
          goto LABEL_526;
        Instance = UserServantEntity__isSecondAdjustHpMax((UserServantEntity_o *)Instance, 0LL);
        if ( (Instance & 1) != 0 )
        {
          Instance = (int64_t)*p_userSvtEntity;
          if ( !*p_userSvtEntity )
            goto LABEL_526;
          Instance = UserServantEntity__isSecondAdjustAtkMax((UserServantEntity_o *)Instance, 0LL);
          if ( (Instance & 1) != 0 )
            this->fields.isLvMax = 1;
        }
      }
    }
  }
  if ( !userSvtEntity )
    goto LABEL_526;
  isLimitCountMax = UserServantEntity__isLimitCountMax(userSvtEntity, 0LL);
  Instance = (int64_t)this->fields.userSvtEntity;
  this->fields.isLimitCntMax = isLimitCountMax;
  this->fields.isParty = v362;
  if ( !Instance )
    goto LABEL_526;
  Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL);
  v110 = this->fields.userSvtEntity;
  this->fields.isLock = Instance & 1;
  if ( !v110 )
    goto LABEL_526;
  *p_isChoice = UserServantEntity__IsChoice(v110, 0LL);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_526;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantLeaderMaster___);
  if ( !Instance )
    goto LABEL_526;
  Instance = *(_QWORD *)(Instance + 32);
  if ( !Instance )
    goto LABEL_526;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 (const MethodInfo_30710E0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B64324(0LL);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v113 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v113;
        p_offset += 4;
        if ( !v113 )
          goto LABEL_55;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_55:
      p_method = sub_1BB60A8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v116 = Enumerator->klass;
    v117 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v118 = &v116->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v118 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v117;
        v118 += 4;
        if ( !v117 )
          goto LABEL_62;
      }
      v119 = (__int64)&v116->vtable[*v118].method;
    }
    else
    {
LABEL_62:
      v119 = sub_1BB60A8(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v120 = (_QWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v119)(
                       Enumerator,
                       *(_QWORD *)(v119 + 8));
    if ( !v120 )
      goto LABEL_528;
    methodPtr_low = LOBYTE(UserServantLeaderEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*v120 + 304LL) < (unsigned int)methodPtr_low
      || *(UserServantLeaderEntity_c **)(*(_QWORD *)(*v120 + 200LL) + 8 * methodPtr_low - 8) != UserServantLeaderEntity_TypeInfo )
    {
      sub_1B645E4(v120);
LABEL_528:
      sub_1B64324(v120);
    }
    v122 = *p_userSvtEntity;
    if ( !*p_userSvtEntity )
      sub_1B64324(v120);
    v123 = v122[2];
    v124 = v120[7];
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v391.fields.currentCryptoKey = v122[1];
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v391.fields.fakeValue = v123;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v388 = v391;
    if ( v124 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v388, 0LL) )
    {
      this->fields.isUseSupport = 1;
      break;
    }
  }
  v125 = Enumerator->klass;
  v126 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v127 = &v125->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v127 - 1) != System_IDisposable_TypeInfo )
    {
      --v126;
      v127 += 4;
      if ( !v126 )
        goto LABEL_76;
    }
    v128 = (__int64)&v125->vtable[*v127].method;
  }
  else
  {
LABEL_76:
    v128 = sub_1BB60A8(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v128)(
    Enumerator,
    *(_QWORD *)(v128 + 8));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserRecommendSupportMaster___);
  v129 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_526;
  v130 = v129[2];
  v131 = (UserRecommendSupportMaster_o *)Instance;
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v391.fields.currentCryptoKey = v129[1];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v391.fields.fakeValue = v130;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v387 = v391;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v387, 0LL);
  if ( !v131 )
    goto LABEL_526;
  Instance = UserRecommendSupportMaster__IsSettingServant(v131, Instance, 0, 0LL);
  v132 = this->fields.userSvtEntity;
  this->fields.isUseRecommendSupport = Instance & 1;
  if ( !v132 )
    goto LABEL_526;
  Instance = UserServantEntity__IsEventJoin(v132, 0LL);
  v133 = this->fields.userSvtEntity;
  this->fields.isEventJoin = Instance & 1;
  if ( !v133 )
    goto LABEL_526;
  Instance = UserServantEntity__IsHeroine(v133, 0LL);
  if ( (Instance & 1) != 0 )
    this->fields.isHeroineSvt = 1;
  if ( baseUsrSvtData )
  {
    v134 = *p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_526;
    v135 = v134[2];
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v391.fields.currentCryptoKey = v134[1];
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v391.fields.fakeValue = v135;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v386 = v391;
    v136 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v386, 0LL);
    v137 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
    *(_OWORD *)&v385.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v385.fields.fakeValue = v137;
    if ( v136 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v385, 0LL) )
      this->fields.isBaseSvt = 1;
  }
  Instance = (int64_t)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_526;
  if ( UserServantEntity__IsCombineExp((UserServantEntity_o *)Instance, 0LL) )
    this->fields.isExpUpSvt = 1;
  Instance = (int64_t)*p_servantEntity;
  if ( !*p_servantEntity )
    goto LABEL_526;
  if ( ServantEntity__get_IsStatusUp((ServantEntity_o *)Instance, 0LL) )
    *p_isStatusUpSvt = 1;
  Instance = (int64_t)*p_servantEntity;
  if ( !*p_servantEntity )
    goto LABEL_526;
  if ( ServantEntity__get_IsServantMaterialTd((ServantEntity_o *)Instance, 0LL) )
    this->fields.isMaterialTdSvt = 1;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_526;
  v138 = DataManager__GetMasterData_object_(
           (DataManager_o *)Instance,
           (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__get_UserId(0LL);
  v139 = *p_servantEntity;
  if ( !*p_servantEntity )
    goto LABEL_526;
  v140 = Instance;
  v142 = *(_QWORD *)&v139->fields.id.fields.currentCryptoKey;
  v141 = *(_QWORD *)&v139->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v402.fields.currentCryptoKey = v142;
  *(_QWORD *)&v402.fields.fakeValue = v141;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v402, 0LL);
  if ( !v138 )
    goto LABEL_526;
  Instance = UserServantCommandCodeMaster__TryGetEntity(
               (UserServantCommandCodeMaster_o *)v138,
               &entity,
               v140,
               (int)Instance,
               0LL);
  if ( (Instance & 1) != 0 )
  {
    Instance = (int64_t)entity;
    if ( !entity )
      goto LABEL_526;
    this->fields.isEquipedCmdCard = UserServantCommandCodeEntity__IsEquipedCommandCode(entity, 0LL);
    Instance = (int64_t)entity;
    if ( !entity )
      goto LABEL_526;
    Instance = UserServantCommandCodeEntity__IsCommandCardSlotOpen(entity, 0LL);
    this->fields.isCmdCardSlotOpen = Instance & 1;
  }
  v143 = this->fields.type;
  if ( v143 == 10 )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_526;
    v144 = DataManager__GetMasterData_object_(
             (DataManager_o *)Instance,
             (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantCommandCardMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = NetworkManager__get_UserId(0LL);
    v145 = *p_servantEntity;
    if ( !*p_servantEntity )
      goto LABEL_526;
    v146 = Instance;
    v148 = *(_QWORD *)&v145->fields.id.fields.currentCryptoKey;
    v147 = *(_QWORD *)&v145->fields.id.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v403.fields.currentCryptoKey = v148;
    *(_QWORD *)&v403.fields.fakeValue = v147;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v403, 0LL);
    if ( !v144 )
      goto LABEL_526;
    Instance = UserServantCommandCardMaster__TryGetEntity(
                 (UserServantCommandCardMaster_o *)v144,
                 &v399,
                 v146,
                 (int)Instance,
                 0LL);
    if ( (Instance & 1) != 0 )
    {
      if ( !v399 )
        goto LABEL_526;
      commandCardParam = v399->fields.commandCardParam;
      if ( commandCardParam )
      {
        max_length = commandCardParam->max_length;
        if ( max_length >= 1 )
        {
          v152 = 0LL;
          while ( 1 )
          {
            if ( (unsigned int)v152 >= max_length )
              goto LABEL_536;
            Instance = (int64_t)BalanceConfig_TypeInfo;
            v153 = commandCardParam->m_Items[v152 + 1];
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              Instance = (int64_t)BalanceConfig_TypeInfo;
            }
            if ( v153 < *(_DWORD *)(*(_QWORD *)(Instance + 184) + 732LL) )
              break;
            this->fields.isCommandCardExceedMax = 1;
            max_length = commandCardParam->max_length;
            if ( (int)++v152 >= max_length )
              goto LABEL_134;
          }
          this->fields.isCommandCardExceedMax = 0;
        }
      }
    }
LABEL_134:
    v143 = this->fields.type;
  }
  v355 = isFavorite;
  v154 = baseUsrSvtData;
  v155 = isMtSvt;
  if ( v143 == 1 )
  {
    this->fields.isMaterialSvt = v155;
    this->fields.isParty = v362;
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_526;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantLeaderMaster___);
    if ( !Instance )
      goto LABEL_526;
    Instance = *(_QWORD *)(Instance + 32);
    if ( !Instance )
      goto LABEL_526;
    v357 = isMtSvt;
    v156 = System_Collections_ObjectModel_Collection_object___GetEnumerator(
             (System_Collections_ObjectModel_Collection_T__o *)Instance,
             (const MethodInfo_30710E0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    if ( !v156 )
      sub_1B64324(0LL);
    while ( 1 )
    {
      v157 = v156->klass;
      v158 = *(unsigned __int16 *)(&v156->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v156->klass->_2.bitflags2 + 3) )
      {
        v159 = &v157->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)v159 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v158;
          v159 += 4;
          if ( !v158 )
            goto LABEL_144;
        }
        v160 = (__int64)&v157->vtable[*v159].method;
      }
      else
      {
LABEL_144:
        v160 = sub_1BB60A8(v156, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v160)(
              v156,
              *(_QWORD *)(v160 + 8)) & 1) == 0 )
        break;
      v161 = v156->klass;
      v162 = *(unsigned __int16 *)(&v156->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v156->klass->_2.bitflags2 + 3) )
      {
        v163 = &v161->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v163 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
        {
          --v162;
          v163 += 4;
          if ( !v162 )
            goto LABEL_151;
        }
        v164 = (__int64)&v161->vtable[*v163].method;
      }
      else
      {
LABEL_151:
        v164 = sub_1BB60A8(v156, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
      }
      v165 = (_QWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v164)(
                         v156,
                         *(_QWORD *)(v164 + 8));
      if ( !v165 )
        goto LABEL_532;
      v166 = LOBYTE(UserServantLeaderEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*v165 + 304LL) < (unsigned int)v166
        || *(UserServantLeaderEntity_c **)(*(_QWORD *)(*v165 + 200LL) + 8 * v166 - 8) != UserServantLeaderEntity_TypeInfo )
      {
        sub_1B645E4(v165);
LABEL_531:
        sub_1B645E4(v269);
LABEL_532:
        sub_1B64324(v165);
      }
      v167 = *p_userSvtEntity;
      if ( !*p_userSvtEntity )
        sub_1B64324(v165);
      v168 = v167[2];
      v169 = v165[7];
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v391.fields.currentCryptoKey = v167[1];
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v391.fields.fakeValue = v168;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v384 = v391;
      if ( v169 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v384, 0LL) )
      {
        this->fields.isUseSupport = 1;
        break;
      }
    }
    v170 = v156->klass;
    v171 = *(unsigned __int16 *)(&v156->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v156->klass->_2.bitflags2 + 3) )
    {
      v172 = &v170->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v172 - 1) != System_IDisposable_TypeInfo )
      {
        --v171;
        v172 += 4;
        if ( !v171 )
          goto LABEL_165;
      }
      v173 = (__int64)&v170->vtable[*v172].method;
    }
    else
    {
LABEL_165:
      v173 = sub_1BB60A8(v156, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v173)(v156, *(_QWORD *)(v173 + 8));
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Instance = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserRecommendSupportMaster___);
    v174 = *p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_526;
    v175 = v174[2];
    v176 = (UserRecommendSupportMaster_o *)Instance;
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v391.fields.currentCryptoKey = v174[1];
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v391.fields.fakeValue = v175;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v383 = v391;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v383, 0LL);
    if ( !v176 )
      goto LABEL_526;
    this->fields.isUseRecommendSupport = UserRecommendSupportMaster__IsSettingServant(v176, Instance, 0, 0LL);
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_526;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_CombineMaterialMaster___);
    if ( !*p_servantEntity )
      goto LABEL_526;
    if ( !*p_userSvtEntity )
      goto LABEL_526;
    if ( !Instance )
      goto LABEL_526;
    Instance = (int64_t)CombineMaterialMaster__GetEntity(
                          (CombineMaterialMaster_o *)Instance,
                          (*p_servantEntity)->fields.combineMaterialId,
                          (*p_userSvtEntity)[16].fields.currentCryptoKey,
                          0LL);
    if ( !Instance )
      goto LABEL_526;
    this->fields.materialExp = *(_DWORD *)(Instance + 24);
    if ( baseUsrSvtData )
    {
      v177 = *p_userSvtEntity;
      if ( !*p_userSvtEntity )
        goto LABEL_526;
      v179 = *(_QWORD *)&v177[5].fields.currentCryptoKey;
      v178 = *(_QWORD *)&v177[5].fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v404.fields.currentCryptoKey = v179;
      *(_QWORD *)&v404.fields.fakeValue = v178;
      v180 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v404, 0LL);
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(baseUsrSvtData->fields.svtId, 0LL);
      if ( v180 == (_DWORD)Instance )
      {
        v181 = this->fields.userSvtEntity;
        this->fields.isLimitCntTarget = 1;
        if ( !v181 )
          goto LABEL_526;
        v182 = *(_OWORD *)&v181->fields.id.fields.fakeValue;
        *(_OWORD *)&v391.fields.currentCryptoKey = *(_OWORD *)&v181->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v391.fields.fakeValue = v182;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v382 = v391;
        v183 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v382, 0LL);
        v184 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
        *(_OWORD *)&v381.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v381.fields.fakeValue = v184;
        if ( v183 != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v381, 0LL) )
          this->fields.isSameBaseSvt = 1;
      }
      Instance = UserServantEntity__getSvtClassId(baseUsrSvtData, 1, 0LL);
      if ( !*p_userSvtEntity )
        goto LABEL_526;
      if ( UserServantEntity__getSvtClassId((UserServantEntity_o *)*p_userSvtEntity, 1, 0LL) == (_DWORD)Instance )
        this->fields.isSameClass = 1;
      Instance = (int64_t)*p_servantEntity;
      if ( !*p_servantEntity )
        goto LABEL_526;
      if ( ServantEntity__get_IsStatusUp((ServantEntity_o *)Instance, 0LL) )
        goto LABEL_195;
      Instance = (int64_t)*p_servantEntity;
      if ( !*p_servantEntity )
        goto LABEL_526;
      if ( ServantEntity__get_IsCombineMaterial((ServantEntity_o *)Instance, 0LL) )
      {
LABEL_195:
        Instance = (int64_t)*p_servantEntity;
        if ( !*p_servantEntity )
          goto LABEL_526;
        if ( ServantEntity__get_IsAllClass((ServantEntity_o *)Instance, 0LL) )
          this->fields.isSameClass = 1;
      }
      this->fields.isBaseLvMax = UserServantEntity__isLevelMax(baseUsrSvtData, 0LL);
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_526;
      Instance = (int64_t)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantClassMaster___);
      if ( !*p_servantEntity )
        goto LABEL_526;
      if ( !Instance )
        goto LABEL_526;
      Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                            (*p_servantEntity)->fields.classId,
                            (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_526;
      HIDWORD(v397) = *(_DWORD *)(Instance + 52);
      SvtClassId = UserServantEntity__getSvtClassId(baseUsrSvtData, 0, 0LL);
      SvtClassGroupType = UserServantEntity__getSvtClassGroupType(baseUsrSvtData, SvtClassId, 0LL);
      if ( System_Int32__Equals_62180496((int32_t)&v397 + 4, 3, 0LL)
        || System_Int32__Equals_62180496((int32_t)&v397 + 4, SvtClassGroupType, 0LL) && this->fields.isSameClass )
      {
        materialExp = this->fields.materialExp;
        v188 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v188 = BalanceConfig_TypeInfo;
        }
        SameClassExp = v188->static_fields->SameClassExp;
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        v190 = (double)materialExp * (double)SameClassExp / 1000.0;
        v191 = vcvtpd_s64_f64(v190);
        if ( ceil(v190) == INFINITY )
          v191 = 0x80000000;
        this->fields.materialExp = v191;
      }
    }
    else
    {
      this->fields.isLimitCntTarget = 0;
    }
    Instance = (int64_t)this->fields.userSvtEntity;
    this->fields.isFavorite = v355;
    if ( !Instance )
      goto LABEL_526;
    Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL);
    v192 = this->fields.userSvtEntity;
    this->fields.isLock = Instance & 1;
    if ( !v192 )
      goto LABEL_526;
    *p_isChoice = UserServantEntity__IsChoice(v192, 0LL);
    Instance = (int64_t)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_526;
    this->fields.isEventJoin = UserServantEntity__IsEventJoin((UserServantEntity_o *)Instance, 0LL);
    Instance = (int64_t)this->fields.userSvtEntity;
    this->fields.hpBase = *(_DWORD *)(v350 + 36);
    this->fields.atkBase = *(_DWORD *)(v350 + 44);
    if ( !Instance )
      goto LABEL_526;
    if ( UserServantEntity__IsHeroine((UserServantEntity_o *)Instance, 0LL) )
      this->fields.isHeroineSvt = 1;
    Instance = (int64_t)*p_servantEntity;
    if ( !*p_servantEntity )
      goto LABEL_526;
    Instance = ServantEntity__get_IsStatusUp((ServantEntity_o *)Instance, 0LL);
    if ( (Instance & 1) != 0 )
    {
      *p_isStatusUpSvt = 1;
      if ( !baseUsrSvtData )
        goto LABEL_526;
      v193 = UserServantEntity__getSvtClassId(baseUsrSvtData, 0, 0LL);
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_526;
      Instance = (int64_t)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantClassMaster___);
      if ( !*p_servantEntity )
        goto LABEL_526;
      if ( !Instance )
        goto LABEL_526;
      Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                            (*p_servantEntity)->fields.classId,
                            (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_526;
      LODWORD(v397) = *(_DWORD *)(Instance + 52);
      if ( !*p_servantEntity )
        goto LABEL_526;
      if ( (*p_servantEntity)->fields.classId == v193 || System_Int32__Equals_62180496((int32_t)&v397, 3, 0LL) )
      {
        this->fields.isCanStUp = 1;
        v194 = UserServantEntity__isAdjustAtkMax(baseUsrSvtData, 0LL) && this->fields.atkBase > 0;
        this->fields.isAtkUpMax = v194;
        v195 = UserServantEntity__isAdjustHpMax(baseUsrSvtData, 0LL) && this->fields.hpBase > 0;
        this->fields.isHpUpMax = v195;
        v196 = UserServantEntity__isSecondAdjustAtkMax(baseUsrSvtData, 0LL) && this->fields.atkBase > 0;
        this->fields.isAtkSecondUpMax = v196;
        v197 = UserServantEntity__isSecondAdjustHpMax(baseUsrSvtData, 0LL) && this->fields.hpBase > 0;
        this->fields.isHpSecondUpMax = v197;
      }
    }
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_526;
    v198 = DataManager__GetMasterData_object_(
             (DataManager_o *)Instance,
             (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = NetworkManager__get_UserId(0LL);
    v199 = *p_servantEntity;
    if ( !*p_servantEntity )
      goto LABEL_526;
    v200 = Instance;
    v202 = *(_QWORD *)&v199->fields.id.fields.currentCryptoKey;
    v201 = *(_QWORD *)&v199->fields.id.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v405.fields.currentCryptoKey = v202;
    *(_QWORD *)&v405.fields.fakeValue = v201;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v405, 0LL);
    if ( !v198 )
      goto LABEL_526;
    Instance = UserServantCommandCodeMaster__TryGetEntity(
                 (UserServantCommandCodeMaster_o *)v198,
                 &v398,
                 v200,
                 (int)Instance,
                 0LL);
    v155 = v357;
    if ( (Instance & 1) != 0 )
    {
      Instance = (int64_t)v398;
      if ( !v398 )
        goto LABEL_526;
      this->fields.isEquipedCmdCard = UserServantCommandCodeEntity__IsEquipedCommandCode(v398, 0LL);
      Instance = (int64_t)v398;
      if ( !v398 )
        goto LABEL_526;
      Instance = UserServantCommandCodeEntity__IsCommandCardSlotOpen(v398, 0LL);
      this->fields.isCmdCardSlotOpen = Instance & 1;
    }
  }
  v203 = this->fields.type;
  if ( v203 == 9 )
  {
    if ( !userSvtEntity )
      goto LABEL_526;
    Instance = UserServantEntity__isLimitCountMax(userSvtEntity, 0LL);
    v228 = this->fields.userSvtEntity;
    this->fields.isLimitCntMax = Instance & 1;
    if ( !v228 )
      goto LABEL_526;
    isLevelMax = UserServantEntity__isLevelMax(v228, 0LL);
    Instance = (int64_t)this->fields.userSvtEntity;
    this->fields.isLvMax = isLevelMax;
    this->fields.isParty = v362;
    if ( !Instance )
      goto LABEL_526;
    Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL);
    v230 = this->fields.userSvtEntity;
    this->fields.isLock = Instance & 1;
    if ( !v230 )
      goto LABEL_526;
    *p_isChoice = UserServantEntity__IsChoice(v230, 0LL);
    Instance = (int64_t)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_526;
    Instance = UserServantEntity__IsEventJoin((UserServantEntity_o *)Instance, 0LL);
    v231 = this->fields.userSvtEntity;
    this->fields.isEventJoin = Instance & 1;
    if ( !v231 )
      goto LABEL_526;
    this->fields.isIgnoreCombineLimitSpecial = UserServantEntity__IsIgnoreCombineLimitSpecial(v231, 0LL);
    Instance = CombineServantListViewItem__GetSealCombineLimit(this, v232);
    this->fields.isSealCombineLimit = Instance & 1;
    if ( baseUsrSvtData )
    {
      v233 = (UserServantEntity_o *)*p_userSvtEntity;
      if ( !*p_userSvtEntity )
        goto LABEL_526;
      v234 = *(_OWORD *)&v233->fields.id.fields.fakeValue;
      *(_OWORD *)&v391.fields.currentCryptoKey = *(_OWORD *)&v233->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v391.fields.fakeValue = v234;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v377 = v391;
      v235 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v377, 0LL);
      v236 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
      *(_OWORD *)&v376.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v376.fields.fakeValue = v236;
      if ( v235 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v376, 0LL) )
        this->fields.isBaseSvt = 1;
    }
    Instance = (int64_t)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_526;
    if ( !UserServantEntity__IsHeroine((UserServantEntity_o *)Instance, 0LL) )
      goto LABEL_308;
  }
  else
  {
    if ( v203 != 2 )
      goto LABEL_309;
    if ( !userSvtEntity )
      goto LABEL_526;
    Instance = UserServantEntity__isLimitCountMax(userSvtEntity, 0LL);
    v204 = this->fields.userSvtEntity;
    this->fields.isLimitCntMax = Instance & 1;
    if ( !v204 )
      goto LABEL_526;
    v205 = UserServantEntity__isLevelMax(v204, 0LL);
    Instance = (int64_t)this->fields.userSvtEntity;
    this->fields.isLvMax = v205;
    this->fields.isParty = v362;
    if ( !Instance )
      goto LABEL_526;
    Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL);
    v206 = this->fields.userSvtEntity;
    this->fields.isLock = Instance & 1;
    if ( !v206 )
      goto LABEL_526;
    *p_isChoice = UserServantEntity__IsChoice(v206, 0LL);
    Instance = (int64_t)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_526;
    this->fields.isEventJoin = UserServantEntity__IsEventJoin((UserServantEntity_o *)Instance, 0LL);
    Instance = CombineServantListViewItem__GetSealCombineLimit(this, v207);
    this->fields.isSealCombineLimit = Instance & 1;
    if ( baseUsrSvtData )
    {
      v208 = (UserServantEntity_o *)*p_userSvtEntity;
      if ( !*p_userSvtEntity )
        goto LABEL_526;
      v209 = *(_OWORD *)&v208->fields.id.fields.fakeValue;
      *(_OWORD *)&v391.fields.currentCryptoKey = *(_OWORD *)&v208->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v391.fields.fakeValue = v209;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v380 = v391;
      v210 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v380, 0LL);
      v211 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
      *(_OWORD *)&v379.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v379.fields.fakeValue = v211;
      if ( v210 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v379, 0LL) )
        this->fields.isBaseSvt = 1;
    }
    Instance = (int64_t)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_526;
    Instance = UserServantEntity__IsHeroine((UserServantEntity_o *)Instance, 0LL);
    if ( (Instance & 1) == 0 )
    {
      if ( !*p_servantEntity )
        goto LABEL_526;
      v212 = (UserServantEntity_o *)*p_userSvtEntity;
      v213 = v359;
      v358 = v155;
      if ( !*p_userSvtEntity )
        goto LABEL_526;
      combineLimitId = (*p_servantEntity)->fields.combineLimitId;
      v216 = *(_QWORD *)&v212->fields.limitCount.fields.currentCryptoKey;
      v215 = *(_QWORD *)&v212->fields.limitCount.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v406.fields.currentCryptoKey = v216;
      *(_QWORD *)&v406.fields.fakeValue = v215;
      v217 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v406, 0LL);
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_526;
      Instance = (int64_t)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_CombineLimitMaster___);
      if ( !Instance )
        goto LABEL_526;
      Instance = (int64_t)CombineLimitMaster__GetEntity((CombineLimitMaster_o *)Instance, combineLimitId, v217, 0LL);
      if ( !Instance )
        goto LABEL_526;
      v218 = Instance;
      v220 = *(_QWORD *)(Instance + 32);
      v219 = *(_QWORD *)(Instance + 40);
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_526;
      Instance = (int64_t)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserItemMaster___);
      if ( !v219 )
        goto LABEL_526;
      v221 = *(_QWORD *)(v219 + 24);
      if ( (int)v221 >= 1 )
      {
        v222 = (UserItemMaster_o *)Instance;
        for ( i = 0LL; (__int64)i < (int)v221; ++i )
        {
          if ( i >= (unsigned int)v221 )
            goto LABEL_536;
          if ( !v220 )
            goto LABEL_526;
          if ( i >= *(unsigned int *)(v220 + 24) )
            goto LABEL_536;
          v224 = (UserServantEntity_o *)*p_userSvtEntity;
          if ( !*p_userSvtEntity )
            goto LABEL_526;
          v225 = *(_OWORD *)&v224->fields.userId.fields.fakeValue;
          v226 = *(_DWORD *)(v219 + 32 + 4 * i);
          v227 = *(_DWORD *)(v220 + 32 + 4 * i);
          *(_OWORD *)&v391.fields.currentCryptoKey = *(_OWORD *)&v224->fields.userId.fields.currentCryptoKey;
          *(_OWORD *)&v391.fields.fakeValue = v225;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v378 = v391;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v378, 0LL);
          if ( !v222 )
            goto LABEL_526;
          Instance = UserItemMaster__TryGetEntity(v222, &v396, Instance, v226, 0LL);
          if ( (Instance & 1) == 0 )
            goto LABEL_352;
          if ( !v396 )
            goto LABEL_526;
          if ( v226 == v396->fields.itemId )
          {
            if ( v227 > v396->fields.num )
            {
LABEL_352:
              v213 = v359;
              *p_isLimitUpItemNum = 0;
              break;
            }
            *p_isLimitUpItemNum = 1;
          }
          LODWORD(v221) = *(_DWORD *)(v219 + 24);
          v213 = v359;
        }
      }
      v254 = *(_DWORD *)(v213 + 96);
      v154 = baseUsrSvtData;
      v155 = v358;
      if ( v254 < *(_DWORD *)(v218 + 24) )
        *p_isLimitUpItemNum = 0;
      goto LABEL_308;
    }
  }
  this->fields.isHeroineSvt = 1;
LABEL_308:
  v203 = this->fields.type;
LABEL_309:
  if ( (v203 | 8) == 11 )
  {
    Instance = (int64_t)this->fields.userSvtEntity;
    this->fields.isParty = v362;
    if ( !Instance )
      goto LABEL_526;
    Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL);
    v237 = this->fields.userSvtEntity;
    this->fields.isLock = Instance & 1;
    if ( !v237 )
      goto LABEL_526;
    *p_isChoice = UserServantEntity__IsChoice(v237, 0LL);
    Instance = (int64_t)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_526;
    Instance = UserServantEntity__IsEventJoin((UserServantEntity_o *)Instance, 0LL);
    this->fields.isEventJoin = Instance & 1;
    if ( v154 )
    {
      v238 = (UserServantEntity_o *)*p_userSvtEntity;
      if ( !*p_userSvtEntity )
        goto LABEL_526;
      v239 = *(_OWORD *)&v238->fields.id.fields.fakeValue;
      *(_OWORD *)&v391.fields.currentCryptoKey = *(_OWORD *)&v238->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v391.fields.fakeValue = v239;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v375 = v391;
      v240 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v375, 0LL);
      v241 = *(_OWORD *)&v154->fields.id.fields.fakeValue;
      *(_OWORD *)&v374.fields.currentCryptoKey = *(_OWORD *)&v154->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v374.fields.fakeValue = v241;
      if ( v240 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v374, 0LL) )
        this->fields.isBaseSvt = 1;
    }
    Instance = (int64_t)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_526;
    if ( UserServantEntity__IsHeroine((UserServantEntity_o *)Instance, 0LL) )
      this->fields.isHeroineSvt = 1;
    v203 = this->fields.type;
    if ( v203 == 3 )
    {
      CombineServantListViewItem__SetSkillInfo(this, v242);
      v203 = this->fields.type;
    }
    if ( v203 == 11 )
    {
      CombineServantListViewItem__SetAppendSkillInfo(this, v242);
      v203 = this->fields.type;
    }
  }
  if ( v203 == 4 )
  {
    Instance = (int64_t)this->fields.userSvtEntity;
    this->fields.isParty = v362;
    if ( !Instance )
      goto LABEL_526;
    Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL);
    v243 = this->fields.userSvtEntity;
    this->fields.isLock = Instance & 1;
    if ( !v243 )
      goto LABEL_526;
    *p_isChoice = UserServantEntity__IsChoice(v243, 0LL);
    Instance = (int64_t)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_526;
    Instance = UserServantEntity__IsEventJoin((UserServantEntity_o *)Instance, 0LL);
    this->fields.isEventJoin = Instance & 1;
    if ( v154 )
    {
      v244 = (UserServantEntity_o *)*p_userSvtEntity;
      if ( !*p_userSvtEntity )
        goto LABEL_526;
      v245 = *(_OWORD *)&v244->fields.id.fields.fakeValue;
      *(_OWORD *)&v391.fields.currentCryptoKey = *(_OWORD *)&v244->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v391.fields.fakeValue = v245;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v373 = v391;
      v246 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v373, 0LL);
      v247 = *(_OWORD *)&v154->fields.id.fields.fakeValue;
      *(_OWORD *)&v372.fields.currentCryptoKey = *(_OWORD *)&v154->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v372.fields.fakeValue = v247;
      if ( v246 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v372, 0LL) )
        this->fields.isBaseSvt = 1;
    }
    Instance = (int64_t)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_526;
    if ( UserServantEntity__IsHeroine((UserServantEntity_o *)Instance, 0LL) )
    {
      this->fields.isHeroineSvt = 1;
    }
    else
    {
      Instance = (int64_t)*p_userSvtEntity;
      if ( !*p_userSvtEntity )
        goto LABEL_526;
      Instance = UserServantEntity__getTreasureDeviceInfo((UserServantEntity_o *)Instance, &tdInfo, -1, -1, 0, 0LL);
      this->fields.isTdLvMax = 1;
      if ( !tdInfo )
        goto LABEL_526;
      id = tdInfo->fields.id;
      if ( id >= 1 )
      {
        lv = tdInfo->fields.lv;
        Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_526;
        Instance = (int64_t)DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
        if ( !Instance )
          goto LABEL_526;
        Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                              id,
                              (const MethodInfo_30D3EA4 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_526;
        if ( lv < *(_DWORD *)(Instance + 48) )
          this->fields.isTdLvMax = 0;
      }
      Instance = (int64_t)MasterData_object;
      if ( !MasterData_object )
        goto LABEL_526;
      SameSvtNpLvCache = UserServantMaster__getSameSvtNpLvCache(
                           MasterData_object,
                           (UserServantEntity_o *)*p_userSvtEntity,
                           &cachedUserServantNpLvDict,
                           0LL);
      if ( SameSvtNpLvCache >= 1 && !this->fields.isTdLvMax )
      {
        v252 = SameSvtNpLvCache;
        CombineServantListViewItem__GetNpInfo(this, &tdLv[1], tdLv, &tdMaxLv, v251);
        if ( v348 <= 1200000 )
        {
          Instance = (int64_t)*p_userSvtEntity;
          if ( !*p_userSvtEntity )
            goto LABEL_526;
          v255 = UserServantEntity__checkTreasureDeviceLevelUp((UserServantEntity_o *)Instance, v252, 0LL);
          v256 = tdLv[0];
          if ( tdLv[0] >= v255 )
          {
            v259 = 0;
          }
          else
          {
            v257 = tdLv[1];
            v258 = v255;
            v259 = 0;
            do
            {
              Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !Instance )
                goto LABEL_526;
              Instance = (int64_t)DataManager__GetMasterData_object_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
              if ( !Instance )
                goto LABEL_526;
              Instance = (int64_t)TreasureDvcLvMaster__GetEntity((TreasureDvcLvMaster_o *)Instance, v257, v256, 0LL);
              if ( Instance )
                v259 += *(_DWORD *)(Instance + 92);
              ++v256;
            }
            while ( v258 != v256 );
            if ( !this )
              goto LABEL_526;
          }
          v253 = v348 >= v259;
        }
        else
        {
          v253 = 1;
        }
        this->fields.isSameSvt = v253;
      }
    }
    v203 = this->fields.type;
  }
  if ( v203 == 5 )
  {
    this->fields.isMaterialSvt = v155;
    this->fields.isParty = v362;
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_526;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantLeaderMaster___);
    if ( !Instance )
      goto LABEL_526;
    Instance = *(_QWORD *)(Instance + 32);
    if ( !Instance )
      goto LABEL_526;
    v260 = System_Collections_ObjectModel_Collection_object___GetEnumerator(
             (System_Collections_ObjectModel_Collection_T__o *)Instance,
             (const MethodInfo_30710E0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    if ( !v260 )
      sub_1B64324(0LL);
    while ( 1 )
    {
      v261 = v260->klass;
      v262 = *(unsigned __int16 *)(&v260->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v260->klass->_2.bitflags2 + 3) )
      {
        v263 = &v261->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)v263 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v262;
          v263 += 4;
          if ( !v262 )
            goto LABEL_378;
        }
        v264 = (__int64)&v261->vtable[*v263].method;
      }
      else
      {
LABEL_378:
        v264 = sub_1BB60A8(v260, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v264)(
              v260,
              *(_QWORD *)(v264 + 8)) & 1) == 0 )
        break;
      v265 = v260->klass;
      v266 = *(unsigned __int16 *)(&v260->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v260->klass->_2.bitflags2 + 3) )
      {
        v267 = &v265->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v267 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
        {
          --v266;
          v267 += 4;
          if ( !v266 )
            goto LABEL_385;
        }
        v268 = (__int64)&v265->vtable[*v267].method;
      }
      else
      {
LABEL_385:
        v268 = sub_1BB60A8(v260, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
      }
      v269 = (_QWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v268)(
                         v260,
                         *(_QWORD *)(v268 + 8));
      if ( !v269 )
        sub_1B64324(0LL);
      v270 = LOBYTE(UserServantLeaderEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*v269 + 304LL) < (unsigned int)v270
        || *(UserServantLeaderEntity_c **)(*(_QWORD *)(*v269 + 200LL) + 8 * v270 - 8) != UserServantLeaderEntity_TypeInfo )
      {
        goto LABEL_531;
      }
      v271 = (UserServantEntity_o *)*p_userSvtEntity;
      if ( !*p_userSvtEntity )
        sub_1B64324(v269);
      v272 = *(_OWORD *)&v271->fields.id.fields.fakeValue;
      v273 = v269[7];
      *(_OWORD *)&v391.fields.currentCryptoKey = *(_OWORD *)&v271->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v391.fields.fakeValue = v272;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v371 = v391;
      if ( v273 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v371, 0LL) )
      {
        this->fields.isUseSupport = 1;
        break;
      }
    }
    v274 = v260->klass;
    v275 = *(unsigned __int16 *)(&v260->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v260->klass->_2.bitflags2 + 3) )
    {
      v276 = &v274->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v276 - 1) != System_IDisposable_TypeInfo )
      {
        --v275;
        v276 += 4;
        if ( !v275 )
          goto LABEL_399;
      }
      v277 = (__int64)&v274->vtable[*v276].method;
    }
    else
    {
LABEL_399:
      v277 = sub_1BB60A8(v260, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v277)(v260, *(_QWORD *)(v277 + 8));
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Instance = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserRecommendSupportMaster___);
    v278 = (UserServantEntity_o *)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_526;
    v279 = *(_OWORD *)&v278->fields.id.fields.fakeValue;
    v280 = (UserRecommendSupportMaster_o *)Instance;
    *(_OWORD *)&v391.fields.currentCryptoKey = *(_OWORD *)&v278->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v391.fields.fakeValue = v279;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v370 = v391;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v370, 0LL);
    if ( !v280 )
      goto LABEL_526;
    IsSettingServant = UserRecommendSupportMaster__IsSettingServant(v280, Instance, 0, 0LL);
    Instance = (int64_t)this->fields.userSvtEntity;
    this->fields.isUseRecommendSupport = IsSettingServant;
    this->fields.isFavorite = v355;
    if ( !Instance )
      goto LABEL_526;
    Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL);
    v282 = this->fields.userSvtEntity;
    this->fields.isLock = Instance & 1;
    if ( !v282 )
      goto LABEL_526;
    *p_isChoice = UserServantEntity__IsChoice(v282, 0LL);
    Instance = (int64_t)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_526;
    Instance = UserServantEntity__IsEventJoin((UserServantEntity_o *)Instance, 0LL);
    this->fields.isEventJoin = Instance & 1;
    if ( v154 )
      v283 = 0LL;
    else
      v283 = this;
    if ( v154 )
      v284 = this;
    else
      v284 = 0LL;
    if ( v154 )
    {
      Instance = UserServantEntity__IsEventJoin(v154, 0LL);
      if ( !v284 )
        goto LABEL_526;
      v284->fields.isEventJoinBaseSvt = Instance & 1;
      Instance = (int64_t)*p_userSvtEntity;
      if ( !*p_userSvtEntity )
        goto LABEL_526;
      Instance = UserServantEntity__IsMaterialTd((UserServantEntity_o *)Instance, 0LL);
      v285 = this->fields.userSvtEntity;
      this->fields.isMaterialTdSvt = Instance & 1;
      if ( !v285 )
        goto LABEL_526;
      v286 = *(_OWORD *)&v285->fields.id.fields.fakeValue;
      *(_OWORD *)&v391.fields.currentCryptoKey = *(_OWORD *)&v285->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v391.fields.fakeValue = v286;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v369 = v391;
      v287 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v369, 0LL);
      v288 = *(_OWORD *)&v154->fields.id.fields.fakeValue;
      *(_OWORD *)&v368.fields.currentCryptoKey = *(_OWORD *)&v154->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v368.fields.fakeValue = v288;
      if ( v287 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v368, 0LL) )
        this->fields.isBaseSvt = 1;
    }
    else
    {
      if ( !v283 )
        goto LABEL_526;
      v283->fields.isEventJoinBaseSvt = 0;
      Instance = (int64_t)*p_userSvtEntity;
      if ( !*p_userSvtEntity )
        goto LABEL_526;
      this->fields.isMaterialTdSvt = UserServantEntity__IsMaterialTd((UserServantEntity_o *)Instance, 0LL);
    }
  }
  v289 = this->fields.type;
  if ( v289 == 6 )
  {
    Instance = (int64_t)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_526;
    Instance = UserServantEntity__isExceedLvMax((UserServantEntity_o *)Instance, 0LL);
    v290 = this->fields.userSvtEntity;
    this->fields.isLvExceedMax = Instance & 1;
    if ( !v290 )
      goto LABEL_526;
    Instance = UserServantEntity__isLimitCountMax(v290, 0LL);
    v291 = this->fields.userSvtEntity;
    this->fields.isLimitCntMax = Instance & 1;
    if ( !v291 )
      goto LABEL_526;
    v292 = UserServantEntity__isLevelMax(v291, 0LL);
    Instance = (int64_t)this->fields.userSvtEntity;
    this->fields.isLvMax = v292;
    this->fields.isParty = v362;
    if ( !Instance )
      goto LABEL_526;
    Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL);
    v293 = this->fields.userSvtEntity;
    this->fields.isLock = Instance & 1;
    if ( !v293 )
      goto LABEL_526;
    *p_isChoice = UserServantEntity__IsChoice(v293, 0LL);
    Instance = (int64_t)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_526;
    Instance = UserServantEntity__IsEventJoin((UserServantEntity_o *)Instance, 0LL);
    this->fields.isEventJoin = Instance & 1;
    if ( v154 )
    {
      v294 = (UserServantEntity_o *)*p_userSvtEntity;
      if ( !*p_userSvtEntity )
        goto LABEL_526;
      v295 = *(_OWORD *)&v294->fields.id.fields.fakeValue;
      *(_OWORD *)&v391.fields.currentCryptoKey = *(_OWORD *)&v294->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v391.fields.fakeValue = v295;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v367 = v391;
      v296 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v367, 0LL);
      v297 = *(_OWORD *)&v154->fields.id.fields.fakeValue;
      *(_OWORD *)&v366.fields.currentCryptoKey = *(_OWORD *)&v154->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v366.fields.fakeValue = v297;
      if ( v296 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v366, 0LL) )
        this->fields.isBaseSvt = 1;
    }
    Instance = (int64_t)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_526;
    if ( UserServantEntity__IsHeroine((UserServantEntity_o *)Instance, 0LL) )
    {
      this->fields.isHeroineSvt = 1;
    }
    else
    {
      Instance = (int64_t)*p_userSvtEntity;
      if ( !*p_userSvtEntity )
        goto LABEL_526;
      SvtExceedEnt = UserServantEntity__getSvtExceedEnt((UserServantEntity_o *)Instance, 0LL);
      if ( SvtExceedEnt )
      {
        v299 = (int32_t *)SvtExceedEnt;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Instance = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_CommonConsumeMaster___);
        if ( !Instance )
          goto LABEL_526;
        IdEntityList = CommonConsumeMaster__GetIdEntityList((CommonConsumeMaster_o *)Instance, v299[12], 0LL);
        if ( IdEntityList )
        {
          v303 = IdEntityList;
          v304 = (System_Collections_Generic_HashSet_int__o *)sub_1B64314(
                                                                System_Collections_Generic_HashSet_int__TypeInfo,
                                                                v301,
                                                                v302);
          System_Collections_Generic_HashSet_int____ctor(
            v304,
            (const MethodInfo_33639AC *)Method_System_Collections_Generic_HashSet_int___ctor__);
          v307 = (System_Collections_Generic_HashSet_int__o *)sub_1B64314(
                                                                System_Collections_Generic_HashSet_int__TypeInfo,
                                                                v305,
                                                                v306);
          System_Collections_Generic_HashSet_int____ctor(
            v307,
            (const MethodInfo_33639AC *)Method_System_Collections_Generic_HashSet_int___ctor__);
          v308 = v303->max_length;
          if ( v308 >= 1 )
          {
            v309 = 0LL;
            while ( (unsigned int)v309 < v308 )
            {
              v310 = v303->m_Items[v309];
              if ( !v310 )
                goto LABEL_526;
              if ( !v304 )
                goto LABEL_526;
              Instance = System_Collections_Generic_HashSet_int___Add(
                           v304,
                           v310->fields.objectId,
                           (const MethodInfo_3364BB0 *)Method_System_Collections_Generic_HashSet_int__Add__);
              if ( !v307 )
                goto LABEL_526;
              Instance = System_Collections_Generic_HashSet_int___Add(
                           v307,
                           v310->fields.num,
                           (const MethodInfo_3364BB0 *)Method_System_Collections_Generic_HashSet_int__Add__);
              v308 = v303->max_length;
              if ( (int)++v309 >= v308 )
                goto LABEL_456;
            }
LABEL_536:
            sub_1B6432C(Instance, v149);
          }
LABEL_456:
          v154 = baseUsrSvtData;
          if ( v299[13] >= 1 )
          {
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            Instance = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_SvtCoinMaster___);
            v311 = (UserServantEntity_o *)*p_userSvtEntity;
            if ( !*p_userSvtEntity )
              goto LABEL_526;
            v312 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
            v314 = *(_QWORD *)&v311->fields.svtId.fields.currentCryptoKey;
            v313 = *(_QWORD *)&v311->fields.svtId.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v407.fields.currentCryptoKey = v314;
            *(_QWORD *)&v407.fields.fakeValue = v313;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v407, 0LL);
            if ( !v312 )
              goto LABEL_526;
            Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                  v312,
                                  Instance,
                                  (const MethodInfo_30D3EA4 *)Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__GetEntity__);
            v154 = baseUsrSvtData;
            if ( !Instance )
              goto LABEL_526;
            if ( !v304 )
              goto LABEL_526;
            Instance = System_Collections_Generic_HashSet_int___Add(
                         v304,
                         *(_DWORD *)(Instance + 24),
                         (const MethodInfo_3364BB0 *)Method_System_Collections_Generic_HashSet_int__Add__);
            if ( !v307 )
              goto LABEL_526;
            System_Collections_Generic_HashSet_int___Add(
              v307,
              v299[13],
              (const MethodInfo_3364BB0 *)Method_System_Collections_Generic_HashSet_int__Add__);
          }
          v315 = this->fields.userSvtEntity;
          v316 = System_Linq_Enumerable__ToArray_int_(
                   (System_Collections_Generic_IEnumerable_TSource__o *)v304,
                   (const MethodInfo_2E7122C *)Method_System_Linq_Enumerable_ToArray_int___);
          v317 = System_Linq_Enumerable__ToArray_int_(
                   (System_Collections_Generic_IEnumerable_TSource__o *)v307,
                   (const MethodInfo_2E7122C *)Method_System_Linq_Enumerable_ToArray_int___);
          this->fields.isLvExceedItemNum = CombineUtility__CheckCombineNeedItemsEnough(
                                             v315,
                                             v316,
                                             v317,
                                             *(_DWORD *)(v359 + 96),
                                             v299[8],
                                             0LL);
        }
      }
    }
    v289 = this->fields.type;
  }
  if ( v289 != 8 )
    goto LABEL_513;
  Instance = (int64_t)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_526;
  this->fields.isFriendshipExceedMax = UserServantEntity__isExceedFriendshipMax((UserServantEntity_o *)Instance, 0LL);
  v318 = *(_QWORD *)(v353 + 100);
  v319 = *(_QWORD *)(v353 + 108);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v408.fields.currentCryptoKey = v318;
  *(_QWORD *)&v408.fields.fakeValue = v319;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v408, 0LL);
  if ( !*p_servantEntity )
    goto LABEL_526;
  v320 = this->fields.userSvtEntity;
  this->fields.isFriendshipRankMax = (_DWORD)Instance == *(_DWORD *)(v353 + 116)
                                                       + (*p_servantEntity)->fields.maxFriendshipRank;
  this->fields.isParty = v362;
  if ( !v320 )
    goto LABEL_526;
  Instance = UserServantEntity__IsLock(v320, 0LL);
  v321 = this->fields.userSvtEntity;
  this->fields.isLock = Instance & 1;
  if ( !v321 )
    goto LABEL_526;
  *p_isChoice = UserServantEntity__IsChoice(v321, 0LL);
  Instance = (int64_t)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_526;
  Instance = UserServantEntity__IsEventJoin((UserServantEntity_o *)Instance, 0LL);
  this->fields.isEventJoin = Instance & 1;
  if ( v154 )
  {
    v322 = (UserServantEntity_o *)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_526;
    v323 = *(_OWORD *)&v322->fields.id.fields.fakeValue;
    *(_OWORD *)&v391.fields.currentCryptoKey = *(_OWORD *)&v322->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v391.fields.fakeValue = v323;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v365 = v391;
    v324 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v365, 0LL);
    v325 = *(_OWORD *)&v154->fields.id.fields.fakeValue;
    *(_OWORD *)&v364.fields.currentCryptoKey = *(_OWORD *)&v154->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v364.fields.fakeValue = v325;
    if ( v324 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v364, 0LL) )
      this->fields.isBaseSvt = 1;
  }
  Instance = (int64_t)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
LABEL_526:
    sub_1B64324(Instance);
  Instance = UserServantEntity__IsHeroine((UserServantEntity_o *)Instance, 0LL);
  if ( (Instance & 1) != 0 )
  {
    this->fields.isHeroineSvt = 1;
    goto LABEL_513;
  }
  if ( !this->fields.isFriendshipRankMax || this->fields.isFriendshipExceedMax )
    goto LABEL_513;
  if ( !*p_servantEntity )
    goto LABEL_526;
  maxFriendshipRank = (*p_servantEntity)->fields.maxFriendshipRank;
  v327 = *(_DWORD *)(v353 + 116);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_526;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_FriendshipMaster___);
  if ( !*p_servantEntity )
    goto LABEL_526;
  if ( !Instance )
    goto LABEL_526;
  Instance = (int64_t)FriendshipMaster__GetEntity(
                        (FriendshipMaster_o *)Instance,
                        (*p_servantEntity)->fields.friendshipId,
                        maxFriendshipRank + v327 + 1,
                        0LL);
  if ( !Instance )
    goto LABEL_526;
  v328 = Instance;
  v330 = *(_QWORD *)(Instance + 32);
  v329 = *(_QWORD *)(Instance + 40);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_526;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !v329 )
    goto LABEL_526;
  if ( *(int *)(v329 + 24) >= 1 )
  {
    v331 = (UserItemMaster_o *)Instance;
    v332 = 0LL;
    v333 = v329 + 32;
    while ( 1 )
    {
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = NetworkManager__get_UserId(0LL);
      if ( v332 >= *(unsigned int *)(v329 + 24) )
        goto LABEL_536;
      if ( !v331 )
        goto LABEL_526;
      Instance = UserItemMaster__TryGetEntity(v331, &v392, Instance, *(_DWORD *)(v333 + 4 * v332), 0LL);
      if ( (Instance & 1) == 0 )
        break;
      if ( v332 >= *(unsigned int *)(v329 + 24) )
        goto LABEL_536;
      if ( !v392 )
        goto LABEL_526;
      if ( *(_DWORD *)(v333 + 4 * v332) == v392->fields.itemId )
      {
        if ( !v330 )
          goto LABEL_526;
        if ( v332 >= *(unsigned int *)(v330 + 24) )
          goto LABEL_536;
        v334 = *(_DWORD *)(v330 + 32 + 4 * v332) <= v392->fields.num;
        goto LABEL_509;
      }
LABEL_510:
      if ( (__int64)++v332 >= *(int *)(v329 + 24) )
        goto LABEL_511;
    }
    v334 = 0;
LABEL_509:
    this->fields.isFriendshipExceedItemNum = v334;
    goto LABEL_510;
  }
LABEL_511:
  if ( *(_DWORD *)(v359 + 96) < *(_DWORD *)(v328 + 28) )
    this->fields.isFriendshipExceedItemNum = 0;
LABEL_513:
  Instance = (int64_t)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_526;
  Instance = UserServantEntity__getDispLimitCount((UserServantEntity_o *)Instance, 0, 0LL);
  v335 = this->fields.userSvtEntity;
  this->fields.dispLimitCount = Instance;
  if ( !v335 )
    goto LABEL_526;
  SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v335, -1, 0LL);
  this->fields.skillCategoryIdList = SkillCategoryIdList;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.skillCategoryIdList,
    (int32_t)SkillCategoryIdList,
    v337,
    v338);
  Instance = (int64_t)this->fields.userSvtEntity;
  if ( !Instance )
    goto LABEL_526;
  TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                   (UserServantEntity_o *)Instance,
                                   0,
                                   0LL);
  this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.tdCategoryIdList,
    (int32_t)TreasureDeviceCategoryIdList,
    v340,
    v341);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_526;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Instance )
    goto LABEL_526;
  Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                        this->fields.classId,
                        (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_526;
  v342 = *(int *)(Instance + 48);
  v343 = this->fields.servantEntity;
  this->fields.priority = v342;
  this->fields.sortValue1B = v342;
  if ( !v343 )
    goto LABEL_526;
  v344 = (UserServantEntity_o *)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_526;
  this->fields.sortValue2 = ((__int64)v343->fields.collectionNo << 16) | ((unsigned __int64)(unsigned int)this->fields.rarity << 48) | v344->fields.lv;
  v346 = *(_QWORD *)&v344->fields.svtId.fields.currentCryptoKey;
  v345 = *(_QWORD *)&v344->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v409.fields.currentCryptoKey = v346;
  *(_QWORD *)&v409.fields.fakeValue = v345;
  v347 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v409, 0LL);
  Instance = (int64_t)this->fields.iconLabelInfo1;
  this->fields.sortValue2B = v347;
  this->fields.amountSortValue = -1LL;
  if ( !Instance )
    goto LABEL_526;
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0LL);
  Instance = (int64_t)*p_iconLabelInfo2;
  if ( !*p_iconLabelInfo2 )
    goto LABEL_526;
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
  UserServantEntity_o *userSvtEntity; // x0
  SvtUseSkillData_o *v6; // x19

  if ( (byte_49FFD9F & 1) == 0 )
  {
    sub_1B640C8(&SvtUseSkillData_TypeInfo, method);
    byte_49FFD9F = 1;
  }
  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
    return UserServantEntity__getAppendSkillInfo(userSvtEntity, 0LL);
  v6 = (SvtUseSkillData_o *)sub_1B64314(SvtUseSkillData_TypeInfo, method, v2);
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
  struct UserServantEntity_o *userSvtEntity; // x20
  _BOOL8 TreasureDeviceInfo; // x0
  TreasureDvcInfo_o *v10; // x8
  int32_t maxLv; // w8
  TreasureDvcInfo_o *tdInfo; // [xsp+8h] [xbp-28h] BYREF

  tdInfo = 0LL;
  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
  {
    TreasureDeviceInfo = UserServantEntity__getTreasureDeviceInfo(this->fields.userSvtEntity, &tdInfo, -1, -1, 0, 0LL);
    v10 = tdInfo;
    if ( !tdInfo )
      sub_1B64324(TreasureDeviceInfo);
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
  return userSvtEntity != 0LL;
}


bool __fastcall CombineServantListViewItem__GetSealCombineLimit(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Master_object; // x0
  struct ServantEntity_o *servantEntity; // x8
  int32_t combineLimitId; // w2
  int32_t condTargetId; // w19
  int32_t condType; // w21
  int64_t condNum; // x20
  CombineLimitReleaseEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49FFDA0 & 1) == 0 )
  {
    sub_1B640C8(&CondType_TypeInfo, method);
    sub_1B640C8(&Method_DataManager_GetMaster_CombineLimitReleaseMaster___, v3);
    sub_1B640C8(&DataManager_TypeInfo, v4);
    byte_49FFDA0 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_CombineLimitReleaseMaster___);
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
        return !CondType__IsOpen(condType, condTargetId, condNum, 0, 0LL);
      }
    }
LABEL_18:
    sub_1B64324(Master_object);
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
  int32_t v10; // w3

  if ( (byte_49FFD9E & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, skillInfoList);
    sub_1B640C8(&SkillInfo___TypeInfo, v5);
    byte_49FFD9E = 1;
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
    v8 = (SkillInfo_array *)sub_1B64170(SkillInfo___TypeInfo, (unsigned int)v7->static_fields->SvtSkillListMax);
    *skillInfoList = v8;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)skillInfoList, (int32_t)v8, v9, v10);
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
  int32_t v29; // w3
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  int32_t v31; // w2
  int32_t v32; // w3
  _BOOL4 IsUnSelectedAllTargetFilters; // w21
  _BOOL4 v34; // w23
  _BOOL4 IsMatchEffectCategory; // w22
  _BOOL4 v36; // w0

  if ( (byte_49FFD8E & 1) == 0 )
  {
    sub_1B640C8(&FilterKindList_TypeInfo, sort);
    sub_1B640C8(&ListViewSort_FilterKind___TypeInfo, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v6);
    sub_1B640C8(&ServantEventBonusFilterController_TypeInfo, v7);
    byte_49FFD8E = 1;
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
                                        (const MethodInfo_3494300 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                             (const MethodInfo_3494300 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                           (const MethodInfo_3494300 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                           (const MethodInfo_3494300 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
    sub_1B64324(ClassGroupFilterKindList);
  v17 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_3494300 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
        sub_1B6406C(
          (ServantStatusBattleListViewItem_o *)&this->fields.skillCategoryIdList,
          (int32_t)SkillCategoryIdList,
          v28,
          v29);
        ClassGroupFilterKindList = (__int64)this->fields.userSvtEntity;
        if ( !ClassGroupFilterKindList )
          goto LABEL_67;
        TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                         (UserServantEntity_o *)ClassGroupFilterKindList,
                                         0,
                                         0LL);
        this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
        sub_1B6406C(
          (ServantStatusBattleListViewItem_o *)&this->fields.tdCategoryIdList,
          (int32_t)TreasureDeviceCategoryIdList,
          v31,
          v32);
      }
    }
    ClassGroupFilterKindList = sub_1B64170(ListViewSort_FilterKind___TypeInfo, 1LL);
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
    ClassGroupFilterKindList = sub_1B64170(ListViewSort_FilterKind___TypeInfo, 1LL);
    if ( !ClassGroupFilterKindList )
      goto LABEL_67;
    v19 = ClassGroupFilterKindList;
    if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
LABEL_68:
      sub_1B6432C(ClassGroupFilterKindList, v19);
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
  ClassGroupFilterKindList = sub_1B64170(ListViewSort_FilterKind___TypeInfo, 1LL);
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
                                           (const MethodInfo_3494300 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
  int32_t v27; // w3
  System_Int32_array *TreasureDeviceCategoryIdList; // x0
  int32_t v29; // w2
  int32_t v30; // w3
  _BOOL4 IsUnSelectedAllTargetFilters; // w21
  _BOOL4 v32; // w23
  _BOOL4 IsMatchEffectCategory; // w22
  _BOOL4 v34; // w0
  const MethodInfo *v35; // x1
  bool CanNotSelect; // w0
  FilterKindList_c *v37; // x0
  ListViewSort_FilterKind_array *v38; // x21

  v4 = this;
  if ( (byte_49FFD8F & 1) == 0 )
  {
    sub_1B640C8(&FilterKindList_TypeInfo, sort);
    sub_1B640C8(&ListViewSort_FilterKind___TypeInfo, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v6);
    this = (CombineServantListViewItem_o *)sub_1B640C8(&ServantEventBonusFilterController_TypeInfo, v7);
    byte_49FFD8F = 1;
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
                                           (const MethodInfo_3494300 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                           (const MethodInfo_3494300 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v12, 0LL) )
    goto LABEL_18;
  this = (CombineServantListViewItem_o *)sub_1B64170(ListViewSort_FilterKind___TypeInfo, 1LL);
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
                                           (const MethodInfo_3494300 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                           (const MethodInfo_3494300 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
    sub_1B64324(this);
  v19 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)this,
                                           (const MethodInfo_3494300 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
        sub_1B6406C(
          (ServantStatusBattleListViewItem_o *)&v4->fields.skillCategoryIdList,
          (int32_t)SkillCategoryIdList,
          v26,
          v27);
        this = (CombineServantListViewItem_o *)v4->fields.userSvtEntity;
        if ( !this )
          goto LABEL_83;
        TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                         (UserServantEntity_o *)this,
                                         0,
                                         0LL);
        v4->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
        sub_1B6406C(
          (ServantStatusBattleListViewItem_o *)&v4->fields.tdCategoryIdList,
          (int32_t)TreasureDeviceCategoryIdList,
          v29,
          v30);
      }
    }
    this = (CombineServantListViewItem_o *)sub_1B64170(ListViewSort_FilterKind___TypeInfo, 1LL);
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
    this = (CombineServantListViewItem_o *)sub_1B64170(ListViewSort_FilterKind___TypeInfo, 1LL);
    if ( !this )
      goto LABEL_83;
    v13 = this;
    if ( !this->fields.sortIndex )
      goto LABEL_84;
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
  }
  this = (CombineServantListViewItem_o *)sub_1B64170(ListViewSort_FilterKind___TypeInfo, 1LL);
  if ( !this )
    goto LABEL_83;
  v13 = this;
  if ( !this->fields.sortIndex )
    goto LABEL_84;
  LODWORD(this->fields.sortValue0) = 39;
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)this, 0LL) )
    goto LABEL_48;
  this = (CombineServantListViewItem_o *)sub_1B64170(ListViewSort_FilterKind___TypeInfo, 1LL);
  if ( !this )
    goto LABEL_83;
  v13 = this;
  if ( !this->fields.sortIndex )
LABEL_84:
    sub_1B6432C(this, v13);
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
    CanNotSelect = CombineServantListViewItem__get_IsCanNotSelect(v4, v35);
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
  v37 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v37 = FilterKindList_TypeInfo;
  }
  this = (CombineServantListViewItem_o *)v37->static_fields->RarityFilterKindList;
  if ( !this )
    goto LABEL_83;
  v38 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)this,
                                           (const MethodInfo_3494300 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
  int32_t v27; // w3
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  int32_t v29; // w2
  int32_t v30; // w3
  _BOOL4 IsUnSelectedAllTargetFilters; // w21
  _BOOL4 v32; // w23
  _BOOL4 IsMatchEffectCategory; // w22
  _BOOL4 v34; // w0

  if ( (byte_49FFD8D & 1) == 0 )
  {
    sub_1B640C8(&FilterKindList_TypeInfo, sort);
    sub_1B640C8(&ListViewSort_FilterKind___TypeInfo, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v6);
    sub_1B640C8(&ServantEventBonusFilterController_TypeInfo, v7);
    byte_49FFD8D = 1;
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
                                        (const MethodInfo_3494300 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                             (const MethodInfo_3494300 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                           (const MethodInfo_3494300 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
    sub_1B64324(ClassGroupFilterKindList);
  v15 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_3494300 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
        sub_1B6406C(
          (ServantStatusBattleListViewItem_o *)&this->fields.skillCategoryIdList,
          (int32_t)SkillCategoryIdList,
          v26,
          v27);
        ClassGroupFilterKindList = (__int64)this->fields.userSvtEntity;
        if ( !ClassGroupFilterKindList )
          goto LABEL_62;
        TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                         (UserServantEntity_o *)ClassGroupFilterKindList,
                                         0,
                                         0LL);
        this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
        sub_1B6406C(
          (ServantStatusBattleListViewItem_o *)&this->fields.tdCategoryIdList,
          (int32_t)TreasureDeviceCategoryIdList,
          v29,
          v30);
      }
    }
    ClassGroupFilterKindList = sub_1B64170(ListViewSort_FilterKind___TypeInfo, 1LL);
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
    ClassGroupFilterKindList = sub_1B64170(ListViewSort_FilterKind___TypeInfo, 1LL);
    if ( !ClassGroupFilterKindList )
      goto LABEL_62;
    v17 = ClassGroupFilterKindList;
    if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
LABEL_63:
      sub_1B6432C(ClassGroupFilterKindList, v17);
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
  ClassGroupFilterKindList = sub_1B64170(ListViewSort_FilterKind___TypeInfo, 1LL);
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
                                           (const MethodInfo_3494300 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
    sub_1B64324(0LL);
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
    sub_1B64324(0LL);
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
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v8; // [xsp+20h] [xbp-40h]

  if ( (byte_49FFD8C & 1) == 0 )
  {
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
    byte_49FFD8C = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame || (userSvtEntity = this->fields.userSvtEntity) == 0LL )
    sub_1B64324(SelfUserGame);
  v5 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  pushUserSvtId = SelfUserGame->fields.pushUserSvtId;
  *(_OWORD *)&v8.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v8.fields.fakeValue = v5;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v7 = v8;
  this->fields.isPush = pushUserSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v7, 0LL);
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
  __int64 v19; // x26
  unsigned __int64 max_length; // x9
  unsigned __int64 v21; // x28
  struct System_Int32_array *v22; // x8
  struct System_Int32_array *svtSkillLvList; // x8
  System_Collections_Generic_List_int__o *v24; // x22
  struct System_Int32_array *v25; // x8
  __int64 v26; // x28
  unsigned __int64 v27; // x9
  unsigned __int64 v28; // x26
  struct System_Int32_array *v29; // x8
  int v30; // w23
  struct UserServantEntity_o *v31; // x8
  CombineAppendPassiveSkillMaster_o *v32; // x23
  __int64 v33; // x24
  __int64 v34; // x25
  struct System_Int32_array *svtSkillNumsList; // x8
  struct System_Int32_array *v36; // x9
  struct System_Int32_array *v37; // x8
  __int64 v38; // x8
  _QWORD *v39; // x9
  __int64 v40; // x10
  char *v41; // x8
  struct UserServantEntity_o *v42; // x8
  SvtAppendPassiveSkillUnlockMaster_o *v43; // x23
  __int64 v44; // x24
  __int64 v45; // x25
  struct System_Int32_array *v46; // x8
  struct System_Int32_array *v47; // x8
  struct System_Int32_array *items; // x8
  _QWORD *v49; // x9
  __int64 size; // x10
  __int64 v51; // x8
  CombineAppendPassiveSkillEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v53; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v54; // 0:x0.16

  if ( (byte_49FFD8B & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_CombineAppendPassiveSkillMaster___, method);
    sub_1B640C8(&Method_DataManager_GetMaster_SkillMaster___, v3);
    sub_1B640C8(&Method_DataManager_GetMaster_SvtAppendPassiveSkillUnlockMaster___, v4);
    sub_1B640C8(&DataManager_TypeInfo, v5);
    sub_1B640C8(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v6);
    sub_1B640C8(&Method_System_Linq_Enumerable_Any_int___, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v9);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v10);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    byte_49FFD8B = 1;
  }
  entity = 0LL;
  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_70;
  AppendSkillInfo = UserServantEntity__getAppendSkillInfo((UserServantEntity_o *)userSvtEntity, 0LL);
  if ( !AppendSkillInfo )
    return;
  v14 = AppendSkillInfo;
  userSvtEntity = UserGameMaster__getSelfUserGame(0LL);
  if ( !userSvtEntity )
    goto LABEL_70;
  v17 = *((_DWORD *)userSvtEntity + 24);
  this->fields.isAppendSkillLvMax = 1;
  svtUseSkillIdList = v14->fields.svtUseSkillIdList;
  if ( !svtUseSkillIdList )
    goto LABEL_70;
  v19 = 8LL;
  while ( 1 )
  {
    max_length = svtUseSkillIdList->max_length;
    v21 = v19 - 8;
    if ( v19 - 8 >= (int)max_length )
      break;
    if ( v21 >= max_length )
      goto LABEL_73;
    if ( *((int *)&svtUseSkillIdList->obj.klass + v19) >= 1 )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      userSvtEntity = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_SkillMaster___);
      v22 = v14->fields.svtUseSkillIdList;
      if ( !v22 )
        goto LABEL_70;
      if ( v21 >= v22->max_length )
        goto LABEL_73;
      if ( !userSvtEntity )
        goto LABEL_70;
      userSvtEntity = DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)userSvtEntity,
                        *((_DWORD *)&v22->obj.klass + v19),
                        (const MethodInfo_30D3EA4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
      svtSkillLvList = v14->fields.svtSkillLvList;
      if ( !svtSkillLvList )
        goto LABEL_70;
      if ( v21 >= svtSkillLvList->max_length )
LABEL_73:
        sub_1B6432C(userSvtEntity, v15);
      if ( !userSvtEntity )
        goto LABEL_70;
      if ( *((_DWORD *)&svtSkillLvList->obj.klass + v19) < *((_DWORD *)userSvtEntity + 10) )
      {
        this->fields.isAppendSkillLvMax = 0;
        break;
      }
      svtUseSkillIdList = v14->fields.svtUseSkillIdList;
    }
    ++v19;
    if ( !svtUseSkillIdList )
      goto LABEL_70;
  }
  v24 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, v15, v16);
  System_Collections_Generic_List_int____ctor(
    v24,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  v25 = v14->fields.svtUseSkillIdList;
  if ( !v25 )
LABEL_70:
    sub_1B64324(userSvtEntity);
  v26 = 8LL;
  while ( 1 )
  {
    v27 = v25->max_length;
    v28 = v26 - 8;
    if ( v26 - 8 >= (int)v27 )
      break;
    if ( v28 >= v27 )
      goto LABEL_73;
    if ( *((int *)&v25->obj.klass + v26) < 1 )
      goto LABEL_69;
    v29 = v14->fields.svtSkillLvList;
    if ( !v29 )
      goto LABEL_70;
    if ( v28 >= v29->max_length )
      goto LABEL_73;
    v30 = *((_DWORD *)&v29->obj.klass + v26);
    if ( DataManager_TypeInfo->_2.cctor_finished )
    {
      if ( v30 )
        goto LABEL_33;
    }
    else
    {
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      if ( v30 )
      {
LABEL_33:
        userSvtEntity = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_CombineAppendPassiveSkillMaster___);
        v31 = this->fields.userSvtEntity;
        if ( !v31 )
          goto LABEL_70;
        v32 = (CombineAppendPassiveSkillMaster_o *)userSvtEntity;
        v34 = *(_QWORD *)&v31->fields.svtId.fields.currentCryptoKey;
        v33 = *(_QWORD *)&v31->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v53.fields.currentCryptoKey = v34;
        *(_QWORD *)&v53.fields.fakeValue = v33;
        userSvtEntity = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v53, 0LL);
        svtSkillNumsList = v14->fields.svtSkillNumsList;
        if ( !svtSkillNumsList )
          goto LABEL_70;
        if ( v28 >= svtSkillNumsList->max_length )
          goto LABEL_73;
        v36 = v14->fields.svtSkillLvList;
        if ( !v36 )
          goto LABEL_70;
        if ( v28 >= v36->max_length )
          goto LABEL_73;
        if ( !v32 )
          goto LABEL_70;
        userSvtEntity = (void *)CombineAppendPassiveSkillMaster__TryGetEntityWithTryNum(
                                  v32,
                                  &entity,
                                  (int32_t)userSvtEntity,
                                  *((_DWORD *)&svtSkillNumsList->obj.klass + v26),
                                  *((_DWORD *)&v36->obj.klass + v26),
                                  0LL);
        if ( ((unsigned __int8)userSvtEntity & 1) != 0 )
        {
          if ( !entity )
            goto LABEL_70;
          userSvtEntity = (void *)CombineUtility__CheckCombineNeedItemsEnough(
                                    this->fields.userSvtEntity,
                                    entity->fields.itemIds,
                                    entity->fields.itemNums,
                                    v17,
                                    entity->fields.qp,
                                    0LL);
          if ( ((unsigned __int8)userSvtEntity & 1) != 0 )
          {
            v37 = v14->fields.svtUseSkillIdList;
            if ( !v37 )
              goto LABEL_70;
            if ( v28 >= v37->max_length )
              goto LABEL_73;
            userSvtEntity = this->fields.enableAppendSkillUp;
            if ( !userSvtEntity )
              goto LABEL_70;
            v15 = *((unsigned int *)&v37->obj.klass + v26);
            v38 = *((_QWORD *)userSvtEntity + 2);
            v39 = Method_System_Collections_Generic_List_int__Add__;
            ++*((_DWORD *)userSvtEntity + 7);
            if ( !v38 )
              goto LABEL_70;
            v40 = *((int *)userSvtEntity + 6);
            if ( (unsigned int)v40 >= *(_DWORD *)(v38 + 24) )
            {
              v51 = v39[4];
LABEL_68:
              System_Collections_Generic_List_int___AddWithResize(
                (System_Collections_Generic_List_int__o *)userSvtEntity,
                v15,
                *(const MethodInfo_348FEDC **)(*(_QWORD *)(v51 + 192) + 112LL));
              goto LABEL_69;
            }
            v41 = (char *)(v38 + 4 * v40);
            *((_DWORD *)userSvtEntity + 6) = v40 + 1;
LABEL_65:
            *((_DWORD *)v41 + 8) = v15;
            goto LABEL_69;
          }
        }
        goto LABEL_69;
      }
    }
    userSvtEntity = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_SvtAppendPassiveSkillUnlockMaster___);
    v42 = this->fields.userSvtEntity;
    if ( !v42 )
      goto LABEL_70;
    v43 = (SvtAppendPassiveSkillUnlockMaster_o *)userSvtEntity;
    v45 = *(_QWORD *)&v42->fields.svtId.fields.currentCryptoKey;
    v44 = *(_QWORD *)&v42->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v54.fields.currentCryptoKey = v45;
    *(_QWORD *)&v54.fields.fakeValue = v44;
    userSvtEntity = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v54, 0LL);
    v46 = v14->fields.svtSkillNumsList;
    if ( !v46 )
      goto LABEL_70;
    if ( v28 >= v46->max_length )
      goto LABEL_73;
    if ( !v43 )
      goto LABEL_70;
    userSvtEntity = SvtAppendPassiveSkillUnlockMaster__GetEntity(
                      v43,
                      (int32_t)userSvtEntity,
                      *((_DWORD *)&v46->obj.klass + v26),
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
        v47 = v14->fields.svtUseSkillIdList;
        if ( !v47 )
          goto LABEL_70;
        if ( v28 >= v47->max_length )
          goto LABEL_73;
        if ( !v24 )
          goto LABEL_70;
        v15 = *((unsigned int *)&v47->obj.klass + v26);
        items = v24->fields._items;
        v49 = Method_System_Collections_Generic_List_int__Add__;
        ++v24->fields._version;
        if ( !items )
          goto LABEL_70;
        size = v24->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          v51 = v49[4];
          userSvtEntity = v24;
          goto LABEL_68;
        }
        v41 = (char *)items + 4 * size;
        v24->fields._size = size + 1;
        goto LABEL_65;
      }
    }
LABEL_69:
    v25 = v14->fields.svtUseSkillIdList;
    ++v26;
    if ( !v25 )
      goto LABEL_70;
  }
  this->fields.isAppendSkillUpItemNum = System_Linq_Enumerable__Any_int_(
                                          (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.enableAppendSkillUp,
                                          (const MethodInfo_2E46564 *)Method_System_Linq_Enumerable_Any_int___);
  this->fields.isAppendSkillOpenItemNum = System_Linq_Enumerable__Any_int_(
                                            (System_Collections_Generic_IEnumerable_TSource__o *)v24,
                                            (const MethodInfo_2E46564 *)Method_System_Linq_Enumerable_Any_int___);
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
  System_Collections_Generic_List_object__o *v9; // x20
  int32_t v10; // w22
  Il2CppClass *Item; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  Il2CppClass *v17; // x1
  Il2CppClass **v18; // x0
  int data; // w24
  int32_t v20; // w21
  __int64 v21; // x1
  __int64 v22; // x8
  int v23; // w9
  int v24; // w11

  if ( (byte_49FFD91 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__, eventCampaignEntities);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Count__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__, v7);
    sub_1B640C8(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo, v8);
    byte_49FFD91 = 1;
  }
  this->fields.isCombineExpCampaignTarget = 0;
  this->fields.combineExpCampaignValue = 0.0;
  if ( !eventCampaignEntities || this->fields.type )
    return;
  v9 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                      System_Collections_Generic_List_EventCampaignEntity__TypeInfo,
                                                      eventCampaignEntities,
                                                      method);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
  if ( eventCampaignEntities->fields._size >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      Item = (Il2CppClass *)System_Collections_Generic_List_object___get_Item(
                              (System_Collections_Generic_List_object__o *)eventCampaignEntities,
                              v10,
                              (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
      if ( !Item )
        break;
      if ( HIDWORD(Item->_1.name) == 2 )
        goto LABEL_11;
      Item = (Il2CppClass *)System_Collections_Generic_List_object___get_Item(
                              (System_Collections_Generic_List_object__o *)eventCampaignEntities,
                              v10,
                              (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
      if ( !Item )
        break;
      if ( HIDWORD(Item->_1.name) == 27 )
      {
LABEL_11:
        Item = (Il2CppClass *)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)eventCampaignEntities,
                                v10,
                                (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
        if ( !v9 )
          break;
        items = v9->fields._items;
        v15 = Method_System_Collections_Generic_List_EventCampaignEntity__Add__;
        ++v9->fields._version;
        if ( !items )
          break;
        size = v9->fields._size;
        v17 = Item;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v9,
            (Il2CppObject *)Item,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
        }
        else
        {
          v18 = &items->obj.klass + size;
          v9->fields._size = size + 1;
          v18[4] = v17;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v18 + 4), (int32_t)v17, v12, v13);
        }
      }
      if ( ++v10 >= eventCampaignEntities->fields._size )
        goto LABEL_17;
    }
LABEL_44:
    sub_1B64324(Item);
  }
LABEL_17:
  if ( !v9 )
    return;
  if ( v9->fields._size < 1 )
  {
    data = 0;
    goto LABEL_42;
  }
  data = 0;
  v20 = 0;
  while ( 1 )
  {
    Item = (Il2CppClass *)System_Collections_Generic_List_object___get_Item(
                            v9,
                            v20,
                            (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
    if ( !Item )
      goto LABEL_44;
    if ( HIDWORD(Item->_1.name) == 27 )
      break;
    Item = (Il2CppClass *)System_Collections_Generic_List_object___get_Item(
                            v9,
                            v20,
                            (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
    if ( !Item )
      goto LABEL_44;
    v22 = *(_QWORD *)&Item->_1.byval_arg.bits;
    if ( !v22 )
      goto LABEL_44;
    v23 = *(_DWORD *)(v22 + 24);
    if ( v23 >= 1 )
    {
      v24 = 0;
      while ( 1 )
      {
        if ( v23 == v24 )
          sub_1B6432C(Item, v21);
        if ( this->fields.svtId == *(_DWORD *)(v22 + 4LL * v24 + 32) )
          break;
        if ( v23 == ++v24 )
          goto LABEL_37;
      }
      this->fields.isCombineExpCampaignTarget = 1;
      Item = (Il2CppClass *)System_Collections_Generic_List_object___get_Item(
                              v9,
                              v20,
                              (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
      if ( !Item )
        goto LABEL_44;
      if ( SLODWORD(Item->_1.this_arg.data) > data )
      {
        Item = (Il2CppClass *)System_Collections_Generic_List_object___get_Item(
                                v9,
                                v20,
                                (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
        if ( !Item )
          goto LABEL_44;
        data = (int)Item->_1.this_arg.data;
      }
    }
LABEL_37:
    if ( ++v20 >= v9->fields._size )
      goto LABEL_42;
  }
  Item = (Il2CppClass *)this->fields.userSvtEntity;
  if ( !Item )
    goto LABEL_44;
  if ( !UserServantEntity__IsExchangeSvt((UserServantEntity_o *)Item, 0LL) )
    goto LABEL_37;
  this->fields.isCombineExpCampaignTarget = 1;
  Item = (Il2CppClass *)System_Collections_Generic_List_object___get_Item(
                          v9,
                          v20,
                          (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
  if ( !Item )
    goto LABEL_44;
  data = (int)Item->_1.this_arg.data;
LABEL_42:
  this->fields.combineExpCampaignValue = (float)data / 1000.0;
}


void __fastcall CombineServantListViewItem__SetNoticeTween(
        CombineServantListViewItem_o *this,
        CombineServantListViewNoticeTween_o *noticeTween,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._NoticeTween_k__BackingField = noticeTween;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields._NoticeTween_k__BackingField,
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
  UserServantEntity_o *userSvtEntity; // x8
  struct UserServantEntity_o *v12; // x8
  __int64 v13; // x21
  __int64 v14; // x1
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

  if ( (byte_49FFD8A & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_CombineSkillMaster___, method);
    sub_1B640C8(&Method_DataManager_GetMasterData_SkillMaster___, v3);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserItemMaster___, v4);
    sub_1B640C8(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__get_Count__, v7);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_49FFD8A = 1;
  }
  v45 = 0LL;
  entity = 0LL;
  SelfUserGame = (__int64)UserGameMaster__getSelfUserGame(0LL);
  userSvtEntity = this->fields.userSvtEntity;
  v42 = SelfUserGame;
  if ( !userSvtEntity )
    goto LABEL_60;
  SelfUserGame = (__int64)UserServantEntity__getSkillIdList(userSvtEntity, -1, -1, 1, -1, 0LL);
  v12 = this->fields.userSvtEntity;
  if ( !v12 )
    goto LABEL_60;
  v13 = SelfUserGame;
  SelfUserGame = ((__int64 (__fastcall *)(struct UserServantEntity_o *, void *))v12->klass->vtable._6_getSkillLevelList.method)(
                   this->fields.userSvtEntity,
                   v12->klass[1]._1.image);
  this->fields.isSkillLvMax = 1;
  if ( !v13 )
    goto LABEL_60;
  v15 = *(_QWORD *)(v13 + 24);
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
      v18 = *(_DWORD *)(v13 + 32 + 4 * v17);
      if ( v18 >= 1 )
      {
        v19 = *(_DWORD *)(v16 + 32 + 4 * v17);
        SelfUserGame = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !SelfUserGame )
          goto LABEL_60;
        SelfUserGame = (__int64)DataManager__GetMasterData_object_(
                                  (DataManager_o *)SelfUserGame,
                                  (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_SkillMaster___);
        if ( !SelfUserGame )
          goto LABEL_60;
        SelfUserGame = (__int64)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)SelfUserGame,
                                  v18,
                                  (const MethodInfo_30D3EA4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        if ( !SelfUserGame )
          goto LABEL_60;
        if ( v19 < *(_DWORD *)(SelfUserGame + 40) )
          break;
      }
      LODWORD(v15) = *(_DWORD *)(v13 + 24);
      if ( (__int64)++v17 >= (int)v15 )
        goto LABEL_19;
    }
    this->fields.isSkillLvMax = 0;
  }
LABEL_19:
  SelfUserGame = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_60;
  SelfUserGame = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)SelfUserGame,
                            (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_CombineSkillMaster___);
  v20 = *(_QWORD *)(v13 + 24);
  if ( (int)v20 >= 1 )
  {
    v21 = (CombineSkillMaster_o *)SelfUserGame;
    v22 = 0LL;
    v23 = 0;
    v41 = v13;
    while ( v22 < (unsigned int)v20 )
    {
      if ( !v16 )
        goto LABEL_60;
      if ( v22 >= *(unsigned int *)(v16 + 24) )
        break;
      v24 = *(_DWORD *)(v13 + 4 * v22 + 32);
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
          SelfUserGame = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !SelfUserGame )
            goto LABEL_60;
          SelfUserGame = (__int64)DataManager__GetMasterData_object_(
                                    (DataManager_o *)SelfUserGame,
                                    (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserItemMaster___);
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
              SelfUserGame = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v43, 0LL);
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
          v13 = v41;
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
                *(const MethodInfo_348FEDC **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
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
      LODWORD(v20) = *(_DWORD *)(v13 + 24);
      if ( (__int64)++v22 >= (int)v20 )
        goto LABEL_58;
    }
LABEL_61:
    sub_1B6432C(SelfUserGame, v14);
  }
LABEL_58:
  enableSkillUp = this->fields.enableSkillUp;
  if ( !enableSkillUp )
LABEL_60:
    sub_1B64324(SelfUserGame);
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
  int32_t v21; // w2
  int32_t v22; // w3
  int32_t bonusKind2; // w8
  int32_t v24; // w2
  int32_t bonusKind2Id; // w8
  struct ListViewManager_o *v26; // x8
  __int64 v27; // x11
  UnityEngine_Object_o *v28; // x21
  int32_t v29; // w8
  int32_t v30; // w8
  bool IsEnableServant; // w0
  Il2CppObject *MasterData_object; // x0
  int32_t svtId; // w22
  ServantFilterMaster_o *v34; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v35; // kr00_16
  System_Collections_Generic_List_EventGroupEntity__o *EntitiesByGroupId; // x22
  int32_t v37; // w2
  int32_t v38; // w3
  struct ListViewManager_o *manager; // x8
  CombineServantListViewManager_c *v40; // x9
  __int64 v41; // x10
  struct ListViewManager_o *v42; // x11
  int32_t v43; // w8
  struct UserServantEntity_o *v44; // x8
  __int128 v45; // q1
  int32_t bonusKindId; // w22
  int64_t v47; // x0
  int32_t v48; // w1
  ServantStatusBattleListViewItem_o *v49; // x0
  __int64 v50; // x1
  __int64 v51; // x2
  System_Func_object__bool__o *v52; // x23
  const MethodInfo *v53; // x2
  _BOOL4 isChoice; // w11
  _BOOL4 isLock; // w23
  _BOOL4 v56; // w21
  const MethodInfo *v57; // x1
  int64_t *p_sortValue0; // x22
  __int64 v59; // x8
  unsigned int v60; // w8
  __int64 v61; // x8
  int32_t type; // w8
  __int64 v63; // x8
  const MethodInfo *v64; // x1
  int32_t rarity; // w8
  int64_t v66; // x8
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v68; // q1
  struct UserServantEntity_o *v69; // x8
  IconLabelInfo_o *iconLabelInfo1; // x20
  int32_t v71; // w21
  struct UserServantEntity_o *v72; // x8
  int32_t v73; // w8
  IconLabelInfo_o *v74; // x20
  struct UserServantEntity_o *v75; // x8
  int64_t v76; // x20
  struct IconLabelInfo_o *v77; // x21
  int32_t v78; // w3
  IconLabelInfo_o *v79; // x0
  int32_t v80; // w2
  unsigned int v81; // w8
  IconLabelInfo_o *v82; // x20
  struct UserServantEntity_o *v83; // x8
  int64_t hp; // x2
  int32_t adjustHp; // w3
  int32_t v86; // w1
  struct UserServantEntity_o *v87; // x8
  struct IconLabelInfo_o *v88; // x19
  struct ServantEntity_o *servantEntity; // x8
  int64_t cost; // x2
  int32_t lv; // w20
  int64_t friendship; // x2
  int32_t friendshipMax; // w3
  int32_t v94; // w1
  __int64 methodPtr_low; // x10
  struct ServantEntity_o *v96; // x8
  __int64 collectionNo; // x10
  struct UserServantEntity_o *v98; // x8
  int32_t v99; // w21
  __int64 v100; // x9
  bool v101; // zf
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v103; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v104; // [xsp+30h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v105; // [xsp+50h] [xbp-60h]
  int32_t tdMaxLv[2]; // [xsp+78h] [xbp-38h] BYREF

  if ( (byte_49FFD90 & 1) == 0 )
  {
    sub_1B640C8(&Method_BasicHelper_Any_EventGroupEntity___, sort);
    sub_1B640C8(&CombineServantListViewManager_TypeInfo, v5);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantFilterMaster___, v6);
    sub_1B640C8(&Method_DataManager_GetMaster_EventCampaignMaster___, v7);
    sub_1B640C8(&Method_DataManager_GetMaster_EventGroupMaster___, v8);
    sub_1B640C8(&DataManager_TypeInfo, v9);
    sub_1B640C8(&System_Func_EventGroupEntity__bool__TypeInfo, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventGroupEntity__get_Count__, v11);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v12);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v14);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_1B640C8(&TutorialFlag_TypeInfo, v16);
    sub_1B640C8(&Method_CombineServantListViewItem___c__DisplayClass114_0__SetSortValue_b__0__, v17);
    sub_1B640C8(&CombineServantListViewItem___c__DisplayClass114_0_TypeInfo, v18);
    byte_49FFD90 = 1;
  }
  *(_QWORD *)tdMaxLv = 0LL;
  v19 = sub_1B64314(CombineServantListViewItem___c__DisplayClass114_0_TypeInfo, sort, method);
  System_Object___ctor((Il2CppObject *)v19, 0LL);
  if ( !v19 )
    goto LABEL_293;
  *(_QWORD *)(v19 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v19 + 16), (int32_t)this, v21, v22);
  *(_WORD *)&this->fields.isTermination = 0;
  this->fields.sortValue1 = -1LL;
  *(_WORD *)&this->fields.isDispAtkStatusUpInfo = 0;
  if ( !sort )
    goto LABEL_293;
  if ( !sort->fields.isBonusKind || this->fields.isBaseSvt || ListViewItem__get_IsSelect((ListViewItem_o *)this, 0LL) )
  {
LABEL_76:
    if ( this->fields.isBaseSvt || ListViewItem__get_IsSelect((ListViewItem_o *)this, 0LL) )
      goto LABEL_78;
    type = this->fields.type;
    if ( type == 1 )
    {
      if ( !CombineServantListViewItem__IsMatchMaterialFilter(this, sort, v53) )
        goto LABEL_104;
      goto LABEL_78;
    }
    if ( !type )
    {
      if ( !CombineServantListViewItem__IsMatchBaseServantFilter(this, sort, v53) )
        goto LABEL_104;
LABEL_78:
      isChoice = this->fields.isChoice;
      iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo2;
      if ( this->fields.isSwapLock )
        isLock = !this->fields.isLock;
      else
        isLock = this->fields.isLock;
      if ( this->fields.isSwapChoice )
        v56 = !isChoice;
      else
        v56 = isChoice;
      if ( !iconLabelInfo2 )
        goto LABEL_293;
      IconLabelInfo__Clear((IconLabelInfo_o *)iconLabelInfo2, 0LL);
      this->fields.sortValue0 = 0LL;
      p_sortValue0 = &this->fields.sortValue0;
      this->fields.sortValue0B = 0LL;
      if ( !sort->fields.isSmartSort )
      {
        if ( v56 && sort->fields.isChoiceSort )
        {
          v60 = this->fields.type;
          if ( v60 <= 0xB )
          {
            if ( ((1 << v60) & 0xFDD) != 0 )
              v61 = 10LL;
            else
LABEL_124:
              v61 = -10LL;
            *p_sortValue0 = v61;
          }
        }
LABEL_189:
        iconLabelInfo2 = 1LL;
        switch ( sort->fields.sortKind )
        {
          case 0:
            iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
            v66 = !this->fields.isParty;
            goto LABEL_225;
          case 1:
            userSvtEntity = this->fields.userSvtEntity;
            if ( !userSvtEntity )
              break;
            v68 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
            *(_OWORD *)&v105.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v105.fields.fakeValue = v68;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v103 = v105;
            iconLabelInfo2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v103, 0LL);
            v69 = this->fields.userSvtEntity;
            this->fields.sortValue1 = iconLabelInfo2;
            if ( !v69 )
              break;
            iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
            if ( !iconLabelInfo2 )
              break;
            IconLabelInfo__SetTime((IconLabelInfo_o *)iconLabelInfo2, 49, v69->fields.createdAt, 0, 0, 0, 0LL);
            goto LABEL_219;
          case 2:
            iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
            this->fields.sortValue1 = this->fields.rarity;
            if ( !iconLabelInfo2 )
              break;
            iconLabelInfo1 = this->fields.iconLabelInfo1;
            v71 = *(_DWORD *)(iconLabelInfo2 + 256);
            iconLabelInfo2 = UserServantEntity__getLevelMax((UserServantEntity_o *)iconLabelInfo2, 0LL);
            v72 = this->fields.userSvtEntity;
            if ( !v72 || !iconLabelInfo1 )
              break;
            IconLabelInfo__Set_37825360(iconLabelInfo1, 2, v71, iconLabelInfo2, 0, 0, 0, v72->fields.lv, 0LL);
            v73 = this->fields.type;
            if ( v73 != 10 && v73 != 7 )
              goto LABEL_260;
            iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
            if ( !iconLabelInfo2 )
              break;
            v74 = this->fields.iconLabelInfo2;
            iconLabelInfo2 = UserServantEntity__getRarity((UserServantEntity_o *)iconLabelInfo2, 0LL);
            v75 = this->fields.userSvtEntity;
            if ( !v75 || !v74 )
              break;
            IconLabelInfo__Set_37825360(v74, 36, iconLabelInfo2, v75->fields.exceedCount, 0, 0, 0, v75->fields.lv, 0LL);
            goto LABEL_260;
          case 3:
            iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
            if ( !iconLabelInfo2 )
              break;
            v76 = *(int *)(iconLabelInfo2 + 256);
            v77 = this->fields.iconLabelInfo1;
            this->fields.sortValue1 = v76;
            iconLabelInfo2 = UserServantEntity__getLevelMax((UserServantEntity_o *)iconLabelInfo2, 0LL);
            if ( !v77 )
              break;
            v78 = iconLabelInfo2;
            v79 = v77;
            v80 = v76;
            goto LABEL_230;
          case 4:
            iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
            if ( !iconLabelInfo2 )
              break;
            v81 = this->fields.type & 0xFFFFFFFE;
            this->fields.sortValue1 = *(int *)(iconLabelInfo2 + 292);
            if ( v81 == 4 )
            {
              v82 = this->fields.iconLabelInfo1;
            }
            else
            {
              UserServantEntity__getTreasureDeviceInfo_39878768(
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
              v94 = 33;
LABEL_247:
              IconLabelInfo__Set_37825360(
                (IconLabelInfo_o *)iconLabelInfo2,
                v94,
                friendship,
                friendshipMax,
                0,
                0,
                0,
                0,
                0LL);
LABEL_248:
              iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
              if ( !iconLabelInfo2 )
                break;
              v82 = this->fields.iconLabelInfo2;
            }
            v99 = *(_DWORD *)(iconLabelInfo2 + 256);
            iconLabelInfo2 = UserServantEntity__getLevelMax((UserServantEntity_o *)iconLabelInfo2, 0LL);
            if ( v82 )
            {
              IconLabelInfo__Set_37825360(v82, 2, v99, iconLabelInfo2, 0, 0, 0, 0, 0LL);
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
LABEL_260:
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
                    goto LABEL_260;
                  }
                }
              }
            }
            break;
          case 5:
            v83 = this->fields.userSvtEntity;
            if ( !v83 )
              break;
            hp = v83->fields.hp;
            iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
            this->fields.sortValue1 = hp;
            if ( !iconLabelInfo2 )
              break;
            adjustHp = v83->fields.adjustHp;
            v86 = 3;
            goto LABEL_218;
          case 6:
            v87 = this->fields.userSvtEntity;
            if ( !v87 )
              break;
            hp = v87->fields.atk;
            iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
            this->fields.sortValue1 = hp;
            if ( !iconLabelInfo2 )
              break;
            adjustHp = v87->fields.adjustAtk;
            v86 = 5;
LABEL_218:
            IconLabelInfo__Set_37825360((IconLabelInfo_o *)iconLabelInfo2, v86, hp, adjustHp, 0, 0, 0, 0, 0LL);
LABEL_219:
            iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
            if ( !iconLabelInfo2 )
              break;
            v88 = this->fields.iconLabelInfo2;
            goto LABEL_227;
          case 7:
            servantEntity = this->fields.servantEntity;
            if ( !servantEntity )
              break;
            cost = servantEntity->fields.cost;
            iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
            this->fields.sortValue1 = cost;
            if ( !iconLabelInfo2 )
              break;
            IconLabelInfo__Set_37825360((IconLabelInfo_o *)iconLabelInfo2, 7, cost, 0, 0, 0, 0, 0, 0LL);
            goto LABEL_248;
          case 8:
            iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
            v66 = -this->fields.priority;
LABEL_225:
            this->fields.sortValue1 = v66;
            if ( !iconLabelInfo2 )
              break;
            v88 = this->fields.iconLabelInfo1;
LABEL_227:
            lv = *(_DWORD *)(iconLabelInfo2 + 256);
            goto LABEL_228;
          case 0xA:
            friendship = this->fields.friendship;
            iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
            this->fields.sortValue1 = friendship;
            if ( !iconLabelInfo2 )
              break;
            friendshipMax = this->fields.friendshipMax;
            v94 = 32;
            goto LABEL_247;
          case 0xE:
            iconLabelInfo2 = this->fields.amountSortValue;
            if ( (iconLabelInfo2 & 0x8000000000000000LL) == 0 )
              goto LABEL_238;
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
LABEL_238:
            v96 = this->fields.servantEntity;
            if ( !v96 )
              break;
            collectionNo = v96->fields.collectionNo;
            v98 = this->fields.userSvtEntity;
            this->fields.sortValue1 = (((unsigned __int64)(unsigned int)this->fields.rarity << 32)
                                     + (iconLabelInfo2 << 48)) | collectionNo;
            if ( !v98 )
              break;
            v88 = this->fields.iconLabelInfo1;
            lv = v98->fields.lv;
            iconLabelInfo2 = (int64_t)v98;
LABEL_228:
            iconLabelInfo2 = UserServantEntity__getLevelMax((UserServantEntity_o *)iconLabelInfo2, 0LL);
            if ( !v88 )
              break;
            v78 = iconLabelInfo2;
            v79 = v88;
            v80 = lv;
LABEL_230:
            IconLabelInfo__Set_37825360(v79, 2, v80, v78, 0, 0, 0, 0, 0LL);
            goto LABEL_260;
          case 0xF:
            friendship = this->fields.hpReinforceValue;
            iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
            this->fields.isDispHpStatusUpInfo = 1;
            this->fields.sortValue1 = friendship;
            if ( !iconLabelInfo2 )
              break;
            friendshipMax = this->fields.nowMaxHpReinforceValue;
            v94 = 44;
            goto LABEL_247;
          case 0x10:
            friendship = this->fields.atkReinforceValue;
            iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
            this->fields.isDispAtkStatusUpInfo = 1;
            this->fields.sortValue1 = friendship;
            if ( !iconLabelInfo2 )
              break;
            friendshipMax = this->fields.nowMaxAtkReinforceValue;
            v94 = 45;
            goto LABEL_247;
          default:
            return iconLabelInfo2;
        }
LABEL_293:
        sub_1B64324(iconLabelInfo2);
      }
      switch ( this->fields.type )
      {
        case 0:
          if ( this->fields.isHeroineSvt )
          {
            if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
            if ( TutorialFlag__Get_37376848(126, 0LL) )
              goto LABEL_163;
          }
          if ( this->fields.isParty )
          {
            v59 = 20LL;
            goto LABEL_186;
          }
          if ( !this->fields.isLvMax )
            goto LABEL_187;
          goto LABEL_185;
        case 1:
          iconLabelInfo2 = (int64_t)this->fields.servantEntity;
          if ( !iconLabelInfo2 )
            goto LABEL_293;
          if ( ServantEntity__get_IsExpUp((ServantEntity_o *)iconLabelInfo2, 0LL) )
          {
            if ( this->fields.isBaseLvMax )
            {
              v63 = -120LL;
            }
            else
            {
              v63 = -5LL;
              if ( !isLock && !v56 )
                v63 = 30LL;
            }
            goto LABEL_283;
          }
          iconLabelInfo2 = (int64_t)this->fields.servantEntity;
          if ( !iconLabelInfo2 )
            goto LABEL_293;
          if ( ServantEntity__get_IsStatusUp((ServantEntity_o *)iconLabelInfo2, 0LL) )
          {
            if ( this->fields.isSameClass )
            {
              rarity = this->fields.rarity;
              if ( this->fields.hpBase < 1 )
              {
                if ( rarity == 4 )
                {
                  v63 = -90LL;
                  if ( !this->fields.isAtkSecondUpMax && this->fields.isAtkUpMax )
                    v63 = 90LL;
                  goto LABEL_281;
                }
                v100 = 70LL;
                v101 = !this->fields.isAtkUpMax;
                v63 = -110LL;
              }
              else
              {
                if ( rarity == 4 )
                {
                  v63 = -80LL;
                  if ( !this->fields.isHpSecondUpMax && this->fields.isHpUpMax )
                    v63 = 100LL;
LABEL_281:
                  *p_sortValue0 = v63;
                  if ( isLock || v56 )
                    v63 = -5LL;
                  goto LABEL_283;
                }
                v100 = 80LL;
                v101 = !this->fields.isHpUpMax;
                v63 = -100LL;
              }
              if ( v101 )
                v63 = v100;
              goto LABEL_281;
            }
            v63 = -150LL;
          }
          else
          {
            if ( !CombineServantListViewItem__get_IsCanNotSelectMaterial(this, v64) )
            {
LABEL_284:
              if ( this->fields.isFortification )
                *p_sortValue0 = -10LL;
              if ( v56 && sort->fields.isChoiceSort )
                *(_OWORD *)p_sortValue0 = xmmword_BA2890;
              goto LABEL_189;
            }
            if ( this->fields.isLimitCntTarget )
            {
              v63 = -20LL;
            }
            else if ( this->fields.isParty )
            {
              v63 = -30LL;
            }
            else if ( this->fields.isUseSupport )
            {
              v63 = -40LL;
            }
            else
            {
              v63 = -10LL;
              if ( this->fields.isUseRecommendSupport )
                v63 = -50LL;
            }
          }
LABEL_283:
          *p_sortValue0 = v63;
          goto LABEL_284;
        case 2:
          if ( this->fields.isSealCombineLimit )
          {
            v59 = 0LL;
            goto LABEL_186;
          }
          if ( !CombineServantListViewItem__get_IsCanNotBaseSelect(this, v57)
            && this->fields.isLimitUpItemNum
            && this->fields.isLvMax )
          {
LABEL_183:
            v59 = 10LL;
            goto LABEL_186;
          }
          if ( this->fields.isHeroineSvt )
          {
LABEL_185:
            v59 = -10LL;
            goto LABEL_186;
          }
          if ( this->fields.isLimitCntMax )
            goto LABEL_163;
          goto LABEL_187;
        case 3:
          if ( this->fields.isHeroineSvt )
          {
            if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
            if ( TutorialFlag__Get_37376848(126, 0LL) )
              goto LABEL_163;
          }
          if ( this->fields.isSkillUpItemNum )
            goto LABEL_183;
          if ( !this->fields.isSkillLvMax )
            goto LABEL_187;
          goto LABEL_185;
        case 4:
          if ( this->fields.isSameSvt )
            goto LABEL_183;
          if ( this->fields.isHeroineSvt )
            goto LABEL_185;
          if ( !this->fields.isTdLvMax )
            goto LABEL_187;
          goto LABEL_163;
        case 5:
          if ( v56 && sort->fields.isChoiceSort || this->fields.isFortification )
            goto LABEL_124;
          goto LABEL_189;
        case 6:
          if ( !CombineServantListViewItem__get_IsCanNotBaseSelect(this, v57)
            && this->fields.isLvMax
            && this->fields.isLimitCntMax
            && this->fields.isLvExceedItemNum )
          {
            goto LABEL_183;
          }
          if ( this->fields.isHeroineSvt )
            goto LABEL_185;
          if ( !this->fields.isLvExceedMax )
            goto LABEL_187;
          goto LABEL_163;
        case 7:
          if ( this->fields.isEventJoin )
            goto LABEL_185;
          if ( !this->fields.isHeroineSvt )
            goto LABEL_187;
          if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
          if ( !TutorialFlag__Get_37376848(126, 0LL) )
            goto LABEL_187;
          goto LABEL_163;
        case 8:
          if ( !CombineServantListViewItem__get_IsCanNotBaseSelect(this, v57)
            && this->fields.isFriendshipRankMax
            && this->fields.isFriendshipExceedItemNum )
          {
            goto LABEL_183;
          }
          if ( this->fields.isHeroineSvt )
            goto LABEL_185;
          if ( !this->fields.isFriendshipExceedMax )
            goto LABEL_187;
          goto LABEL_163;
        case 9:
          if ( !CombineServantListViewItem__get_IsCanNotBaseSelect(this, v57) )
            goto LABEL_183;
          if ( this->fields.isHeroineSvt )
            goto LABEL_185;
          if ( this->fields.isSealCombineLimit )
          {
LABEL_161:
            v59 = -15LL;
          }
          else if ( this->fields.isLimitCntMax )
          {
LABEL_163:
            v59 = -20LL;
          }
          else
          {
            if ( !this->fields.isEventJoin )
              goto LABEL_187;
LABEL_155:
            v59 = -30LL;
          }
LABEL_186:
          *p_sortValue0 = v59;
LABEL_187:
          if ( v56 && sort->fields.isChoiceSort )
            this->fields.sortValue0B = 10LL;
          goto LABEL_189;
        case 0xA:
          if ( this->fields.isHeroineSvt )
          {
            if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
            if ( TutorialFlag__Get_37376848(126, 0LL) )
              goto LABEL_155;
          }
          if ( this->fields.isEventJoin )
            goto LABEL_163;
          if ( this->fields.isCommandCardExceedMax )
            goto LABEL_185;
          goto LABEL_187;
        case 0xB:
          if ( this->fields.isHeroineSvt )
          {
            if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
            if ( TutorialFlag__Get_37376848(126, 0LL) )
              goto LABEL_163;
          }
          if ( this->fields.isEventJoin )
            goto LABEL_161;
          if ( this->fields.isAppendSkillOpenItemNum || this->fields.isAppendSkillUpItemNum )
            goto LABEL_183;
          if ( !this->fields.isAppendSkillLvMax )
            goto LABEL_187;
          goto LABEL_185;
        default:
          goto LABEL_189;
      }
    }
    if ( CombineServantListViewItem__IsMatchServantFilter(this, sort, v53) )
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
        iconLabelInfo2 = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_EventGroupMaster___);
        if ( !iconLabelInfo2 )
          goto LABEL_293;
        EntitiesByGroupId = EventGroupMaster__GetEntitiesByGroupId(
                              (EventGroupMaster_o *)iconLabelInfo2,
                              this->fields.bonusKindId,
                              0LL);
        iconLabelInfo2 = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)EntitiesByGroupId, 0LL);
        if ( (iconLabelInfo2 & 1) == 0 )
        {
          if ( !EntitiesByGroupId )
            goto LABEL_293;
          if ( EntitiesByGroupId->fields._size >= 2 )
          {
            manager = sort->fields.manager;
            if ( manager )
            {
              v40 = CombineServantListViewManager_TypeInfo;
              v41 = LOBYTE(CombineServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
              if ( LOBYTE(manager->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v41 )
              {
                if ( (CombineServantListViewManager_c *)manager->klass->_2.typeHierarchy[v41 - 1] == CombineServantListViewManager_TypeInfo )
                  v42 = sort->fields.manager;
                else
                  v42 = 0LL;
              }
              else
              {
                v42 = 0LL;
              }
              *(_QWORD *)(v19 + 24) = v42;
              v49 = (ServantStatusBattleListViewItem_o *)(v19 + 24);
              if ( LOBYTE(manager->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v41 )
              {
                if ( (CombineServantListViewManager_c *)manager->klass->_2.typeHierarchy[v41 - 1] == v40 )
                  v48 = (int)manager;
                else
                  v48 = 0;
              }
              else
              {
                v48 = 0;
              }
            }
            else
            {
              v48 = 0;
              *(_QWORD *)(v19 + 24) = 0LL;
              v49 = (ServantStatusBattleListViewItem_o *)(v19 + 24);
            }
            sub_1B6406C(v49, v48, v37, v38);
            v52 = (System_Func_object__bool__o *)sub_1B64314(System_Func_EventGroupEntity__bool__TypeInfo, v50, v51);
            System_Func_object__bool____ctor(
              v52,
              (Il2CppObject *)v19,
              Method_CombineServantListViewItem___c__DisplayClass114_0__SetSortValue_b__0__,
              0LL);
            this->fields.isEventUpVal = BasicHelper__Any_object_(
                                          (System_Collections_Generic_List_T__o *)EntitiesByGroupId,
                                          (System_Func_T__bool__o *)v52,
                                          (const MethodInfo_2E24870 *)Method_BasicHelper_Any_EventGroupEntity___);
          }
        }
        goto LABEL_75;
      case 2:
        v26 = sort->fields.manager;
        if ( v26
          && (v27 = LOBYTE(CombineServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr),
              LOBYTE(v26->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v27) )
        {
          if ( (CombineServantListViewManager_c *)v26->klass->_2.typeHierarchy[v27 - 1] == CombineServantListViewManager_TypeInfo )
            v28 = (UnityEngine_Object_o *)sort->fields.manager;
          else
            v28 = 0LL;
        }
        else
        {
          v28 = 0LL;
        }
        if ( this->fields.bonusKind == 2 )
        {
          v43 = sort->fields.bonusKind2Id;
          if ( this->fields.bonusKindId == v43 )
            goto LABEL_75;
        }
        else
        {
          v43 = sort->fields.bonusKind2Id;
        }
        this->fields.bonusKindId = v43;
        this->fields.bonusKind = 2;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        iconLabelInfo2 = UnityEngine_Object__op_Implicit(v28, 0LL);
        if ( (iconLabelInfo2 & 1) != 0 )
        {
          if ( !v28 )
            goto LABEL_293;
          iconLabelInfo2 = CombineServantListViewManager__IsLargeSuccessCampaignClassId(
                             (CombineServantListViewManager_o *)v28,
                             this->fields.bonusKindId,
                             this->fields.svtId,
                             0LL);
          v44 = this->fields.userSvtEntity;
          this->fields.isEventUpVal = iconLabelInfo2 & 1;
          if ( !v44 )
            goto LABEL_293;
          v45 = *(_OWORD *)&v44->fields.id.fields.fakeValue;
          bonusKindId = this->fields.bonusKindId;
          *(_OWORD *)&v105.fields.currentCryptoKey = *(_OWORD *)&v44->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v105.fields.fakeValue = v45;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v104 = v105;
          v47 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v104, 0LL);
          if ( CombineServantListViewManager__IsExchangeSvtExist(
                 (CombineServantListViewManager_o *)v28,
                 bonusKindId,
                 v47,
                 0LL) )
          {
            goto LABEL_76;
          }
        }
        goto LABEL_75;
      case 3:
        if ( this->fields.bonusKind == 3 )
        {
          v29 = sort->fields.bonusKind2Id;
          if ( this->fields.bonusKindId == v29 )
            goto LABEL_75;
        }
        else
        {
          v29 = sort->fields.bonusKind2Id;
        }
        this->fields.bonusKindId = v29;
        this->fields.bonusKind = 3;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        iconLabelInfo2 = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_EventCampaignMaster___);
        if ( !iconLabelInfo2 )
          goto LABEL_293;
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
          v24 = sort->fields.bonusKind2Id;
          if ( this->fields.bonusKindId == v24 )
            goto LABEL_75;
        }
        else
        {
          v24 = sort->fields.bonusKind2Id;
        }
        iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
        this->fields.bonusKind = bonusKind2;
        this->fields.bonusKindId = v24;
        if ( !iconLabelInfo2 )
          goto LABEL_293;
        IsEnableServant = UserServantEntity__getEventUpVal_39871536(
                            (UserServantEntity_o *)iconLabelInfo2,
                            this->fields.setupInfo,
                            v24,
                            0LL,
                            0LL);
        goto LABEL_37;
      case 7:
        if ( this->fields.bonusKind == 7 )
        {
          v30 = sort->fields.bonusKind2Id;
          if ( this->fields.bonusKindId == v30 )
          {
LABEL_75:
            if ( !this->fields.isEventUpVal )
              break;
            goto LABEL_76;
          }
        }
        else
        {
          v30 = sort->fields.bonusKind2Id;
        }
        this->fields.bonusKindId = v30;
        this->fields.bonusKind = 7;
        iconLabelInfo2 = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !iconLabelInfo2 )
          goto LABEL_293;
        MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)iconLabelInfo2,
                              (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantFilterMaster___);
        svtId = this->fields.svtId;
        v34 = (ServantFilterMaster_o *)MasterData_object;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(svtId, 0LL);
        iconLabelInfo2 = *(_QWORD *)&v35.fields.currentCryptoKey;
        if ( !v34 )
          goto LABEL_293;
        IsEnableServant = ServantFilterMaster__IsEnableServant(v34, v35, this->fields.bonusKindId, 0LL);
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

  if ( (byte_49FFD9B & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_15157/*"UserSvt "*/, method);
    byte_49FFD9B = 1;
  }
  NameText = CombineServantListViewItem__get_NameText(this, method);
  return System_String__Concat_61375396((System_String_o *)StringLiteral_15157/*"UserSvt "*/, NameText, 0LL);
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

  if ( (byte_49FFD97 & 1) == 0 )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, method);
    sub_1B640C8(&StringLiteral_18979/*"error"*/, v3);
    byte_49FFD97 = 1;
  }
  servantEntity = this->fields.servantEntity;
  if ( !servantEntity )
    return (System_String_o *)StringLiteral_18979/*"error"*/;
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
  if ( (byte_49FFD98 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_1/*""*/, method);
    byte_49FFD98 = 1;
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
    sub_1B64324(0LL);
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
  int32_t v7; // w8

  if ( (byte_49FFD99 & 1) == 0 )
  {
    sub_1B640C8(&TutorialFlag_TypeInfo, method);
    byte_49FFD99 = 1;
  }
  type = this->fields.type;
  if ( type )
  {
    result = 1;
  }
  else
  {
    if ( !this->fields.isHeroineSvt )
      goto LABEL_72;
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    if ( TutorialFlag__Get_37376848(126, 0LL) )
    {
      result = 1;
    }
    else
    {
LABEL_72:
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
        goto LABEL_45;
      }
      isSealCombineLimit = this->fields.isSealCombineLimit;
      break;
    case 3:
      if ( this->fields.isHeroineSvt )
      {
        if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
        result = TutorialFlag__Get_37376848(126, 0LL) || this->fields.isSkillLvMax;
        type = this->fields.type;
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
      result = 1;
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
            if ( TutorialFlag__Get_37376848(126, 0LL) )
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
  result = isSealCombineLimit;
LABEL_48:
  v7 = this->fields.type;
  if ( v7 == 10 )
  {
    if ( this->fields.isHeroineSvt )
    {
      if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
      if ( TutorialFlag__Get_37376848(126, 0LL) )
        goto LABEL_54;
    }
    if ( this->fields.isCommandCardExceedMax )
LABEL_54:
      result = 1;
    else
      result = this->fields.isEventJoin;
    v7 = this->fields.type;
  }
  if ( v7 == 11 )
  {
    if ( this->fields.isAppendSkillLvMax || this->fields.isEventJoin )
    {
      return 1;
    }
    else if ( this->fields.isHeroineSvt )
    {
      if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
      return TutorialFlag__Get_37376848(126, 0LL);
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

  if ( (byte_49FFD9A & 1) == 0 )
  {
    sub_1B640C8(&TutorialFlag_TypeInfo, method);
    byte_49FFD9A = 1;
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
    if ( TutorialFlag__Get_37376848(126, 0LL) )
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
    sub_1B64324(v5);
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
    sub_1B64324(0LL);
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
    sub_1B64324(0LL);
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
    sub_1B64324(0LL);
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
    sub_1B64324(0LL);
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

  if ( (byte_49FFD95 & 1) == 0 )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, method);
    sub_1B640C8(&StringLiteral_18979/*"error"*/, v3);
    byte_49FFD95 = 1;
  }
  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    return (System_String_o *)StringLiteral_18979/*"error"*/;
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
  if ( (byte_49FFD94 & 1) == 0 )
  {
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    this = (CombineServantListViewItem_o *)sub_1B640C8(&StringLiteral_18979/*"error"*/, v3);
    byte_49FFD94 = 1;
  }
  servantEntity = v2->fields.servantEntity;
  if ( !servantEntity )
    return (System_String_o *)StringLiteral_18979/*"error"*/;
  userSvtEntity = v2->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_1B64324(this);
  v7 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.currentCryptoKey;
  v6 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v10.fields.currentCryptoKey = v7;
  *(_QWORD *)&v10.fields.fakeValue = v6;
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v10, 0LL);
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

  if ( (byte_49FFD96 & 1) == 0 )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, method);
    byte_49FFD96 = 1;
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
  Il2CppObject *Entity; // x0

  if ( (byte_49FFD9C & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_SvtCoinMaster___, method);
    sub_1B640C8(&DataManager_TypeInfo, v3);
    sub_1B640C8(&Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__GetEntity__, v4);
    byte_49FFD9C = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_SvtCoinMaster___);
  if ( !Master_object )
    sub_1B64324(0LL);
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             this->fields.svtId,
             (const MethodInfo_30D3EA4 *)Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__GetEntity__);
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

  if ( (byte_49FFD9D & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_UserSvtCoinMaster___, method);
    sub_1B640C8(&DataManager_TypeInfo, v3);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5);
    byte_49FFD9D = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserSvtCoinMaster___);
  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_17;
  v8 = *(_OWORD *)&userSvtEntity->fields.userId.fields.fakeValue;
  v9 = (UserSvtCoinMaster_o *)Master_object;
  *(_OWORD *)&v16.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v16.fields.fakeValue = v8;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v15 = v16;
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v15, 0LL);
  v10 = this->fields.userSvtEntity;
  if ( !v10 )
    goto LABEL_17;
  v11 = Master_object;
  v13 = *(_QWORD *)&v10->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&v10->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v18.fields.currentCryptoKey = v13;
  *(_QWORD *)&v18.fields.fakeValue = v12;
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v18, 0LL);
  if ( !v9 )
    goto LABEL_17;
  Master_object = UserSvtCoinMaster__TryGetEntity(v9, &entity, v11, Master_object, 0LL);
  if ( (Master_object & 1) != 0 )
  {
    if ( entity )
      return entity->fields.num;
LABEL_17:
    sub_1B64324(Master_object);
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
  ServantStatusBattleListViewItem_o *p_userSvtEntity; // x19
  struct UserServantEntity_o *userSvtEntity; // t1
  __int128 v9; // q1
  int64_t v10; // x20
  Il2CppObject *Entity; // x20
  int32_t v12; // w2
  int32_t v13; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v15; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v16; // [xsp+20h] [xbp-40h]

  v2 = this;
  if ( (byte_49FFD92 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantMaster___, method);
    sub_1B640C8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v3);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v4);
    this = (CombineServantListViewItem_o *)sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_49FFD92 = 1;
  }
  userSvtEntity = v2->fields.userSvtEntity;
  p_userSvtEntity = (ServantStatusBattleListViewItem_o *)&v2->fields.userSvtEntity;
  v6 = userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_9;
  v9 = *(_OWORD *)&v6->fields.id.fields.fakeValue;
  *(_OWORD *)&v16.fields.currentCryptoKey = *(_OWORD *)&v6->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v16.fields.fakeValue = v9;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v15 = v16;
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v15, 0LL);
  this = (CombineServantListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (this = (CombineServantListViewItem_o *)DataManager__GetMasterData_object_(
                                                 (DataManager_o *)this,
                                                 (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
  {
LABEL_9:
    sub_1B64324(this);
  }
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             v10,
             (const MethodInfo_30D4050 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  p_userSvtEntity->klass = (ServantStatusBattleListViewItem_c *)Entity;
  sub_1B6406C(p_userSvtEntity, (int32_t)Entity, v12, v13);
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
  if ( (byte_49FFD93 & 1) == 0 )
  {
    this = (CombineServantListViewItem_o *)sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
    byte_49FFD93 = 1;
  }
  userSvtEntity = v2->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_1B64324(this);
  v4 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v7.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v7.fields.fakeValue = v4;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v6 = v7;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v6, 0LL);
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

  this->fields.userSvtEntity = entity;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.userSvtEntity, (int32_t)entity, (int32_t)method, v3);
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
    sub_1B64324(0LL);
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
    sub_1B64324(0LL);
  this->fields.dragSelectNum = value - 1;
}


void __fastcall CombineServantListViewItem__set_IsHpStatusMax(
        CombineServantListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  if ( !this )
    sub_1B64324(0LL);
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
    sub_1B64324(0LL);
  this->fields.isNotSelectSecondStatusUpAtk = this->fields.atkBase > 0 && value;
}


void __fastcall CombineServantListViewItem__set_IsSecondHpStatusMax(
        CombineServantListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  if ( !this )
    sub_1B64324(0LL);
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

  this->fields._NoticeTween_k__BackingField = value;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields._NoticeTween_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall CombineServantListViewItem___c__DisplayClass114_0___ctor(
        CombineServantListViewItem___c__DisplayClass114_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall CombineServantListViewItem___c__DisplayClass114_0___SetSortValue_b__0(
        CombineServantListViewItem___c__DisplayClass114_0_o *this,
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
  struct CombineServantListViewItem_o *_4__this; // x8
  struct CombineServantListViewItem_o *v13; // x8
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v15; // q1
  CombineServantListViewManager_o *v16; // x21
  int32_t eventId; // w22
  struct CombineServantListViewItem_o *v18; // x8
  struct CombineServantListViewItem_o *v19; // x8
  ServantFilterMaster_o *v20; // x21
  int32_t svtId; // w22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // kr00_16
  struct CombineServantListViewItem_o *v25; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+20h] [xbp-50h]

  if ( (byte_49FFDA1 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_EventCampaignMaster___, entity);
    sub_1B640C8(&Method_DataManager_GetMaster_ServantFilterMaster___, v5);
    sub_1B640C8(&DataManager_TypeInfo, v6);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v7);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9);
    byte_49FFDA1 = 1;
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
                                    0LL);
  if ( (IsLargeSuccessCampaignClassId & 1) == 0 )
  {
    v13 = this->fields.__4__this;
    if ( !v13 )
      goto LABEL_34;
    userSvtEntity = v13->fields.userSvtEntity;
    if ( !userSvtEntity )
      goto LABEL_34;
    v15 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
    v16 = this->fields.manager;
    eventId = entity->fields.eventId;
    *(_OWORD *)&v27.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v27.fields.fakeValue = v15;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v26 = v27;
    IsLargeSuccessCampaignClassId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v26, 0LL);
    if ( !v16 )
      goto LABEL_34;
    if ( !CombineServantListViewManager__IsExchangeSvtExist(v16, eventId, IsLargeSuccessCampaignClassId, 0LL) )
    {
LABEL_37:
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      IsLargeSuccessCampaignClassId = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_EventCampaignMaster___);
      v18 = this->fields.__4__this;
      if ( !v18 || !entity || !IsLargeSuccessCampaignClassId )
        goto LABEL_34;
      if ( !EventCampaignMaster__IsEnableServant(
              (EventCampaignMaster_o *)IsLargeSuccessCampaignClassId,
              v18->fields.svtId,
              entity->fields.eventId,
              0LL) )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        IsLargeSuccessCampaignClassId = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantFilterMaster___);
        v19 = this->fields.__4__this;
        if ( v19 )
        {
          v20 = (ServantFilterMaster_o *)IsLargeSuccessCampaignClassId;
          svtId = v19->fields.svtId;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(svtId, 0LL);
          IsLargeSuccessCampaignClassId = *(_QWORD *)&v22.fields.currentCryptoKey;
          if ( v20 )
          {
            IsLargeSuccessCampaignClassId = ServantFilterMaster__IsEnableServant(v20, v22, entity->fields.eventId, 0LL);
            if ( (IsLargeSuccessCampaignClassId & 1) != 0 )
              return 1;
            v25 = this->fields.__4__this;
            if ( v25 )
            {
              IsLargeSuccessCampaignClassId = (int64_t)v25->fields.userSvtEntity;
              if ( IsLargeSuccessCampaignClassId )
                return UserServantEntity__getEventUpVal_39871536(
                         (UserServantEntity_o *)IsLargeSuccessCampaignClassId,
                         v25->fields.setupInfo,
                         entity->fields.eventId,
                         0LL,
                         0LL);
            }
          }
        }
LABEL_34:
        sub_1B64324(IsLargeSuccessCampaignClassId);
      }
    }
  }
  return 1;
}