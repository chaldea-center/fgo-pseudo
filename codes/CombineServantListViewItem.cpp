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
  IconLabelInfo_o *v58; // x20
  int32_t v59; // w2
  int32_t v60; // w3
  System_Collections_Generic_List_int__o *v61; // x20
  int32_t v62; // w2
  int32_t v63; // w3
  System_Collections_Generic_List_int__o *v64; // x20
  int32_t v65; // w2
  int32_t v66; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_userSvtEntity; // x21
  int32_t v68; // w2
  int32_t v69; // w3
  int64_t Instance; // x0
  const MethodInfo *v71; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v72; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v73; // x20
  __int64 v74; // x23
  __int64 v75; // x24
  Il2CppObject *v76; // x0
  int32_t v77; // w2
  int32_t v78; // w3
  int32_t v79; // w2
  int32_t v80; // w3
  struct UserServantEntity_o *v81; // x8
  struct ServantEntity_o *servantEntity; // x8
  ServantLimitMaster_o *v83; // x20
  int32_t v84; // w24
  int64_t v85; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v86; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v87; // q1
  UserServantCollectionMaster_o *v88; // x20
  int64_t v89; // x24
  int64_t v90; // x23
  int v91; // w8
  bool *p_isStatusUpSvt; // x26
  int64_t v93; // x22
  struct UserServantEntity_o *v94; // x8
  int32_t v95; // w20
  BalanceConfig_c *v96; // x8
  struct BalanceConfig_StaticFields *static_fields; // x8
  struct UserServantEntity_o *v98; // x8
  __int128 v99; // q1
  __int64 v100; // x20
  const MethodInfo *v101; // x1
  int64_t UserSvtId; // x0
  unsigned int v103; // w8
  bool isLimitCountMax; // w8
  UserServantEntity_o *v105; // x8
  __int64 v106; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x25
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v109; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v112; // x8
  __int64 v113; // x9
  int32_t *v114; // x10
  __int64 v115; // x0
  _QWORD *v116; // x0
  __int64 v117; // x1
  __int64 methodPtr_low; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v119; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v120; // q0
  __int64 v121; // x22
  System_Collections_Generic_IEnumerator_T__c *v122; // x8
  __int64 v123; // x9
  int32_t *v124; // x10
  __int64 v125; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v126; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v127; // q0
  UserRecommendSupportMaster_o *v128; // x20
  UserServantEntity_o *v129; // x8
  UserServantEntity_o *v130; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v131; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v132; // q0
  int64_t v133; // x0
  __int128 v134; // q1
  Il2CppObject *v135; // x20
  struct ServantEntity_o *v136; // x8
  int64_t v137; // x25
  __int64 v138; // x24
  __int64 v139; // x29
  int32_t v140; // w8
  Il2CppObject *v141; // x20
  struct ServantEntity_o *v142; // x8
  int64_t v143; // x25
  __int64 v144; // x24
  __int64 v145; // x29
  struct System_Int32_array *commandCardParam; // x20
  int max_length; // w8
  __int64 v148; // x22
  int32_t v149; // w25
  UserServantEntity_o *v150; // x23
  bool v151; // w24
  __int64 v152; // x1
  System_Collections_Generic_IEnumerator_T__o *v153; // x25
  System_Collections_Generic_IEnumerator_T__c *v154; // x8
  __int64 v155; // x9
  int32_t *v156; // x10
  __int64 v157; // x0
  System_Collections_Generic_IEnumerator_T__c *v158; // x8
  __int64 v159; // x9
  int32_t *v160; // x10
  __int64 v161; // x0
  _QWORD *v162; // x0
  __int64 v163; // x1
  __int64 v164; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v165; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v166; // q0
  __int64 v167; // x22
  System_Collections_Generic_IEnumerator_T__c *v168; // x8
  __int64 v169; // x9
  int32_t *v170; // x10
  __int64 v171; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v172; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v173; // q0
  UserRecommendSupportMaster_o *v174; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v175; // x8
  __int64 v176; // x20
  __int64 v177; // x24
  int32_t v178; // w20
  struct UserServantEntity_o *v179; // x8
  __int128 v180; // q0
  int64_t v181; // x0
  __int128 v182; // q1
  int32_t SvtClassId; // w0
  int32_t SvtClassGroupType; // w20
  int32_t materialExp; // w20
  BalanceConfig_c *v186; // x0
  int SameClassExp; // w22
  double v188; // d0
  int32_t v189; // w8
  UserServantEntity_o *v190; // x8
  int32_t v191; // w20
  bool v192; // w8
  bool v193; // w8
  bool v194; // w8
  bool v195; // w8
  Il2CppObject *v196; // x20
  struct ServantEntity_o *v197; // x8
  int64_t v198; // x25
  __int64 v199; // x24
  __int64 v200; // x26
  int32_t v201; // w8
  UserServantEntity_o *v202; // x8
  bool v203; // w8
  UserServantEntity_o *v204; // x8
  const MethodInfo *v205; // x1
  UserServantEntity_o *v206; // x8
  __int128 v207; // q0
  int64_t v208; // x0
  __int128 v209; // q1
  UserServantEntity_o *v210; // x9
  int64_t v211; // x23
  int32_t combineLimitId; // w20
  __int64 v213; // x24
  __int64 v214; // x25
  int32_t v215; // w25
  int64_t v216; // x20
  __int64 v217; // x24
  __int64 v218; // x27
  __int64 v219; // x8
  UserItemMaster_o *v220; // x25
  unsigned __int64 i; // x28
  UserServantEntity_o *v222; // x8
  __int128 v223; // q1
  int32_t v224; // w26
  int32_t v225; // w23
  UserServantEntity_o *v226; // x8
  bool isLevelMax; // w8
  UserServantEntity_o *v228; // x8
  UserServantEntity_o *v229; // x8
  const MethodInfo *v230; // x1
  UserServantEntity_o *v231; // x8
  __int128 v232; // q0
  int64_t v233; // x0
  __int128 v234; // q1
  UserServantEntity_o *v235; // x8
  UserServantEntity_o *v236; // x8
  __int128 v237; // q0
  int64_t v238; // x0
  __int128 v239; // q1
  UserServantEntity_o *v240; // x8
  UserServantEntity_o *v241; // x8
  __int128 v242; // q0
  int64_t v243; // x0
  __int128 v244; // q1
  int id; // w20
  int32_t lv; // w22
  int32_t SameSvtNpLvCache; // w0
  const MethodInfo *v248; // x4
  int32_t v249; // w20
  char v250; // w8
  int v251; // w8
  int32_t v252; // w0
  int32_t v253; // w20
  int32_t v254; // w26
  int32_t v255; // w25
  int v256; // w22
  __int64 v257; // x1
  System_Collections_Generic_IEnumerator_T__o *v258; // x25
  System_Collections_Generic_IEnumerator_T__c *v259; // x8
  __int64 v260; // x9
  int32_t *v261; // x10
  __int64 v262; // x0
  System_Collections_Generic_IEnumerator_T__c *v263; // x8
  __int64 v264; // x9
  int32_t *v265; // x10
  __int64 v266; // x0
  _QWORD *v267; // x0
  __int64 v268; // x1
  __int64 v269; // x9
  UserServantEntity_o *v270; // x8
  __int128 v271; // q0
  __int64 v272; // x22
  System_Collections_Generic_IEnumerator_T__c *v273; // x8
  __int64 v274; // x9
  int32_t *v275; // x10
  __int64 v276; // x0
  UserServantEntity_o *v277; // x8
  __int128 v278; // q0
  UserRecommendSupportMaster_o *v279; // x20
  bool IsSettingServant; // w8
  UserServantEntity_o *v281; // x8
  CombineServantListViewItem_o *v282; // x8
  CombineServantListViewItem_o *v283; // x20
  struct UserServantEntity_o *v284; // x8
  __int128 v285; // q0
  int64_t v286; // x0
  __int128 v287; // q1
  int32_t v288; // w8
  UserServantEntity_o *v289; // x8
  UserServantEntity_o *v290; // x8
  bool v291; // w8
  UserServantEntity_o *v292; // x8
  UserServantEntity_o *v293; // x8
  __int128 v294; // q0
  int64_t v295; // x0
  __int128 v296; // q1
  ServantExceedEntity_o *SvtExceedEnt; // x0
  int32_t *v298; // x25
  CommonConsumeEntity_array *IdEntityList; // x0
  CommonConsumeEntity_array *v300; // x27
  System_Collections_Generic_HashSet_int__o *v301; // x20
  System_Collections_Generic_HashSet_int__o *v302; // x26
  int v303; // w8
  __int64 v304; // x22
  CommonConsumeEntity_o *v305; // x29
  UserServantEntity_o *v306; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v307; // x27
  __int64 v308; // x24
  __int64 v309; // x28
  UserServantEntity_o *v310; // x24
  System_Int32_array *v311; // x20
  System_Int32_array *v312; // x0
  __int64 v313; // x20
  __int64 v314; // x24
  UserServantEntity_o *v315; // x8
  UserServantEntity_o *v316; // x8
  UserServantEntity_o *v317; // x8
  __int128 v318; // q0
  int64_t v319; // x0
  __int128 v320; // q1
  int32_t maxFriendshipRank; // w20
  int v322; // w22
  int64_t v323; // x20
  __int64 v324; // x23
  __int64 v325; // x24
  UserItemMaster_o *v326; // x22
  unsigned __int64 v327; // x25
  __int64 v328; // x27
  bool v329; // w8
  UserServantEntity_o *v330; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  int32_t v332; // w2
  int32_t v333; // w3
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  int32_t v335; // w2
  int32_t v336; // w3
  int64_t v337; // x8
  struct ServantEntity_o *v338; // x9
  UserServantEntity_o *v339; // x8
  __int64 v340; // x20
  __int64 v341; // x21
  int32_t v342; // w8
  int v343; // [xsp+Ch] [xbp-494h]
  UserServantMaster_o *MasterData_object; // [xsp+18h] [xbp-488h]
  int64_t v345; // [xsp+20h] [xbp-480h]
  bool *p_isLimitUpItemNum; // [xsp+28h] [xbp-478h]
  struct IconLabelInfo_o **p_iconLabelInfo2; // [xsp+30h] [xbp-470h]
  int64_t v348; // [xsp+38h] [xbp-468h]
  bool v350; // [xsp+40h] [xbp-460h]
  bool v352; // [xsp+44h] [xbp-45Ch]
  bool v353; // [xsp+44h] [xbp-45Ch]
  int64_t v354; // [xsp+48h] [xbp-458h]
  bool *p_isChoice; // [xsp+58h] [xbp-448h]
  bool v357; // [xsp+64h] [xbp-43Ch]
  struct ServantEntity_o **p_servantEntity; // [xsp+68h] [xbp-438h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v359; // [xsp+70h] [xbp-430h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v360; // [xsp+90h] [xbp-410h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v361; // [xsp+B0h] [xbp-3F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v362; // [xsp+D0h] [xbp-3D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v363; // [xsp+F0h] [xbp-3B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v364; // [xsp+110h] [xbp-390h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v365; // [xsp+130h] [xbp-370h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v366; // [xsp+150h] [xbp-350h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v367; // [xsp+170h] [xbp-330h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v368; // [xsp+190h] [xbp-310h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v369; // [xsp+1B0h] [xbp-2F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v370; // [xsp+1D0h] [xbp-2D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v371; // [xsp+1F0h] [xbp-2B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v372; // [xsp+210h] [xbp-290h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v373; // [xsp+230h] [xbp-270h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v374; // [xsp+250h] [xbp-250h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v375; // [xsp+270h] [xbp-230h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v376; // [xsp+290h] [xbp-210h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v377; // [xsp+2B0h] [xbp-1F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v378; // [xsp+2D0h] [xbp-1D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v379; // [xsp+2F0h] [xbp-1B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v380; // [xsp+310h] [xbp-190h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v381; // [xsp+330h] [xbp-170h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v382; // [xsp+350h] [xbp-150h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v383; // [xsp+370h] [xbp-130h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v384; // [xsp+390h] [xbp-110h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v385; // [xsp+3B0h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v386; // [xsp+3D0h] [xbp-D0h]
  UserItemEntity_o *v387; // [xsp+3F8h] [xbp-A8h] BYREF
  int32_t tdMaxLv; // [xsp+404h] [xbp-9Ch] BYREF
  int32_t tdLv[2]; // [xsp+408h] [xbp-98h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+410h] [xbp-90h] BYREF
  UserItemEntity_o *v391; // [xsp+418h] [xbp-88h] BYREF
  __int64 v392; // [xsp+420h] [xbp-80h] BYREF
  UserServantCommandCodeEntity_o *v393; // [xsp+428h] [xbp-78h] BYREF
  UserServantCommandCardEntity_o *v394; // [xsp+430h] [xbp-70h] BYREF
  UserServantCommandCodeEntity_o *entity; // [xsp+438h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v396; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v397; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v398; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v399; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v400; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v401; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v402; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v403; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v404; // 0:x0.16

  if ( (byte_4A0C604 & 1) == 0 )
  {
    sub_1B686D4(&BalanceConfig_TypeInfo, *(_QWORD *)&type);
    sub_1B686D4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v16);
    sub_1B686D4(&Method_DataManager_GetMasterData_CombineLimitMaster___, v17);
    sub_1B686D4(&Method_DataManager_GetMasterData_CombineMaterialMaster___, v18);
    sub_1B686D4(&Method_DataManager_GetMasterData_FriendshipMaster___, v19);
    sub_1B686D4(&Method_DataManager_GetMasterData_ServantClassMaster___, v20);
    sub_1B686D4(&Method_DataManager_GetMasterData_ServantLimitMaster___, v21);
    sub_1B686D4(&Method_DataManager_GetMasterData_ServantMaster___, v22);
    sub_1B686D4(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___, v23);
    sub_1B686D4(&Method_DataManager_GetMasterData_TreasureDvcMaster___, v24);
    sub_1B686D4(&Method_DataManager_GetMasterData_UserItemMaster___, v25);
    sub_1B686D4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v26);
    sub_1B686D4(&Method_DataManager_GetMasterData_UserServantCommandCardMaster___, v27);
    sub_1B686D4(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___, v28);
    sub_1B686D4(&Method_DataManager_GetMasterData_UserServantLeaderMaster___, v29);
    sub_1B686D4(&Method_DataManager_GetMasterData_UserServantMaster___, v30);
    sub_1B686D4(&Method_DataManager_GetMaster_CommonConsumeMaster___, v31);
    sub_1B686D4(&Method_DataManager_GetMaster_SvtCoinMaster___, v32);
    sub_1B686D4(&Method_DataManager_GetMaster_UserRecommendSupportMaster___, v33);
    sub_1B686D4(&DataManager_TypeInfo, v34);
    sub_1B686D4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v35);
    sub_1B686D4(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v36);
    sub_1B686D4(&Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__GetEntity__, v37);
    sub_1B686D4(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__, v38);
    sub_1B686D4(&Method_System_Linq_Enumerable_ToArray_int___, v39);
    sub_1B686D4(&Method_System_Collections_Generic_HashSet_int__Add__, v40);
    sub_1B686D4(&Method_System_Collections_Generic_HashSet_int___ctor__, v41);
    sub_1B686D4(&System_Collections_Generic_HashSet_int__TypeInfo, v42);
    sub_1B686D4(&System_IDisposable_TypeInfo, v43);
    sub_1B686D4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v44);
    sub_1B686D4(&System_Collections_IEnumerator_TypeInfo, v45);
    sub_1B686D4(&IconLabelInfo_TypeInfo, v46);
    sub_1B686D4(&Method_System_Collections_Generic_List_int___ctor__, v47);
    sub_1B686D4(&System_Collections_Generic_List_int__TypeInfo, v48);
    sub_1B686D4(&System_Math_TypeInfo, v49);
    sub_1B686D4(&NetworkManager_TypeInfo, v50);
    sub_1B686D4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v51);
    sub_1B686D4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v52);
    sub_1B686D4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v53);
    sub_1B686D4(&UserServantLeaderEntity_TypeInfo, v54);
    byte_4A0C604 = 1;
  }
  entity = 0LL;
  v394 = 0LL;
  v393 = 0LL;
  v392 = 0LL;
  v391 = 0LL;
  tdInfo = 0LL;
  *(_QWORD *)tdLv = 0LL;
  tdMaxLv = 0;
  v387 = 0LL;
  v55 = (IconLabelInfo_o *)sub_1B68920(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v55, 0LL);
  this->fields.iconLabelInfo1 = v55;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.iconLabelInfo1, (int32_t)v55, v56, v57);
  v58 = (IconLabelInfo_o *)sub_1B68920(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v58, 0LL);
  this->fields.iconLabelInfo2 = v58;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.iconLabelInfo2, (int32_t)v58, v59, v60);
  v61 = (System_Collections_Generic_List_int__o *)sub_1B68920(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v61,
    (const MethodInfo_349EA00 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.enableSkillUp = v61;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.enableSkillUp, (int32_t)v61, v62, v63);
  v64 = (System_Collections_Generic_List_int__o *)sub_1B68920(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v64,
    (const MethodInfo_349EA00 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.enableAppendSkillUp = v64;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.enableAppendSkillUp, (int32_t)v64, v65, v66);
  ListViewItem___ctor((ListViewItem_o *)this, 0LL);
  this->fields.userSvtEntity = userSvtEntity;
  p_userSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userSvtEntity;
  this->fields.type = type;
  this->fields.index = index;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.userSvtEntity, (int32_t)userSvtEntity, v68, v69);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_526;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_ServantMaster___);
  v72 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_526;
  v73 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v75 = *(_QWORD *)&v72[5].fields.currentCryptoKey;
  v74 = *(_QWORD *)&v72[5].fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v396.fields.currentCryptoKey = v75;
  *(_QWORD *)&v396.fields.fakeValue = v74;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(v396, 0LL);
  if ( !v73 )
    goto LABEL_526;
  v76 = DataMasterBase_object__object__int___GetEntity(
          v73,
          Instance,
          (const MethodInfo_30E44C0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)v76;
  p_servantEntity = &this->fields.servantEntity;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.servantEntity, (int32_t)v76, v77, v78);
  this->fields.setupInfo = setupInfo;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v79, v80);
  v81 = this->fields.userSvtEntity;
  this->fields.isEventUpVal = 0;
  *(_QWORD *)&this->fields.bonusKind = 1LL;
  if ( !v81 )
    goto LABEL_526;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(v81->fields.svtId, 0LL);
  servantEntity = this->fields.servantEntity;
  this->fields.svtId = Instance;
  if ( !servantEntity )
    goto LABEL_526;
  this->fields.classId = servantEntity->fields.classId;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_526;
  MasterData_object = (UserServantMaster_o *)DataManager__GetMasterData_object_(
                                               (DataManager_o *)Instance,
                                               (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_526;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtEntity )
    goto LABEL_526;
  v83 = (ServantLimitMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416((*p_userSvtEntity)[5], 0LL);
  if ( !*p_userSvtEntity )
    goto LABEL_526;
  v84 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416((*p_userSvtEntity)[6], 0LL);
  if ( !v83 )
    goto LABEL_526;
  Instance = (int64_t)ServantLimitMaster__GetEntity(v83, v84, Instance, 0LL);
  if ( !Instance )
    goto LABEL_526;
  v85 = Instance;
  this->fields.rarity = *(_DWORD *)(Instance + 24);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_526;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v86 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_526;
  v87 = v86[4];
  v88 = (UserServantCollectionMaster_o *)Instance;
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v386.fields.currentCryptoKey = v86[3];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v386.fields.fakeValue = v87;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v385 = v386;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46242940(&v385, 0LL);
  if ( !*p_userSvtEntity )
    goto LABEL_526;
  v89 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416((*p_userSvtEntity)[5], 0LL);
  if ( !v88 )
    goto LABEL_526;
  Instance = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(v88, v89, Instance, 0LL);
  if ( !Instance )
    goto LABEL_526;
  v90 = Instance;
  v345 = v85;
  UserServantCollectionEntity__getFriendShipRankInfo(
    (UserServantCollectionEntity_o *)Instance,
    &this->fields.friendship,
    &this->fields.friendshipMax,
    0LL);
  Instance = (int64_t)UserGameMaster__getSelfUserGame(0LL);
  if ( !Instance )
    goto LABEL_526;
  v91 = *(_DWORD *)(Instance + 96);
  *(_DWORD *)&this->fields.isStatusUpSvt = 0;
  p_isStatusUpSvt = &this->fields.isStatusUpSvt;
  v343 = v91;
  *(_WORD *)&this->fields.isFavorite = 0;
  *(_WORD *)&this->fields.isLock = 0;
  *(_DWORD *)&this->fields.isChoice = 0;
  this->fields.isMaxSelect = 0;
  *(_QWORD *)&this->fields.isLimitUpItemNum = 0LL;
  v93 = Instance;
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
  v94 = this->fields.userSvtEntity;
  this->fields.maxLimitCnt = Instance;
  if ( !v94 )
    goto LABEL_526;
  this->fields.currentLimitCnt = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(
                                   v94->fields.limitCount,
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
  v95 = *(_DWORD *)(Instance + 276);
  v96 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v96 = BalanceConfig_TypeInfo;
    Instance = (int64_t)*p_userSvtEntity;
  }
  static_fields = v96->static_fields;
  this->fields.hpReinforceValue = static_fields->StatusUpAdjustHp * v95;
  if ( !Instance )
    goto LABEL_526;
  v348 = v90;
  this->fields.atkReinforceValue = static_fields->StatusUpAdjustAtk * *(_DWORD *)(Instance + 272);
  UserServantEntity__getAdjustMaxData(
    (UserServantEntity_o *)Instance,
    &this->fields.nowMaxHpReinforceValue,
    &this->fields.nowMaxAtkReinforceValue,
    0LL);
  v98 = this->fields.userSvtEntity;
  *(_WORD *)&this->fields.isEquipedCmdCard = 0;
  if ( !v98 )
    goto LABEL_526;
  v99 = *(_OWORD *)&v98->fields.id.fields.fakeValue;
  v100 = *(_QWORD *)(v93 + 120);
  v357 = isParty;
  v354 = v93;
  *(_OWORD *)&v384.fields.currentCryptoKey = *(_OWORD *)&v98->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v384.fields.fakeValue = v99;
  this->fields.isPush = v100 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46242940(&v384, 0LL);
  UserSvtId = CombineServantListViewItem__get_UserSvtId(this, v101);
  EventFortificationDataLogic__SetFortification(
    &this->fields.isFortification,
    &this->fields.fortificationName,
    &this->fields.fortificationDetailName,
    UserSvtId,
    0LL);
  v103 = this->fields.type;
  if ( v103 > 0xA || ((1 << v103) & 0x481) == 0 )
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
  this->fields.isParty = v357;
  if ( !Instance )
    goto LABEL_526;
  Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL);
  v105 = this->fields.userSvtEntity;
  this->fields.isLock = Instance & 1;
  if ( !v105 )
    goto LABEL_526;
  *p_isChoice = UserServantEntity__IsChoice(v105, 0LL);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_526;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_UserServantLeaderMaster___);
  if ( !Instance )
    goto LABEL_526;
  Instance = *(_QWORD *)(Instance + 32);
  if ( !Instance )
    goto LABEL_526;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 (const MethodInfo_30816FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B68930(0LL, v106);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v109 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v109;
        p_offset += 4;
        if ( !v109 )
          goto LABEL_55;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_55:
      p_method = sub_1BBA6B4(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v112 = Enumerator->klass;
    v113 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v114 = &v112->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v114 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v113;
        v114 += 4;
        if ( !v113 )
          goto LABEL_62;
      }
      v115 = (__int64)&v112->vtable[*v114].method;
    }
    else
    {
LABEL_62:
      v115 = sub_1BBA6B4(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v116 = (_QWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v115)(
                       Enumerator,
                       *(_QWORD *)(v115 + 8));
    if ( !v116 )
      goto LABEL_528;
    methodPtr_low = LOBYTE(UserServantLeaderEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*v116 + 304LL) < (unsigned int)methodPtr_low
      || *(UserServantLeaderEntity_c **)(*(_QWORD *)(*v116 + 200LL) + 8 * methodPtr_low - 8) != UserServantLeaderEntity_TypeInfo )
    {
      sub_1B68BF0(v116);
LABEL_528:
      sub_1B68930(v116, v117);
    }
    v119 = *p_userSvtEntity;
    if ( !*p_userSvtEntity )
      sub_1B68930(v116, UserServantLeaderEntity_TypeInfo);
    v120 = v119[2];
    v121 = v116[7];
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v386.fields.currentCryptoKey = v119[1];
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v386.fields.fakeValue = v120;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v383 = v386;
    if ( v121 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46242940(&v383, 0LL) )
    {
      this->fields.isUseSupport = 1;
      break;
    }
  }
  v122 = Enumerator->klass;
  v123 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v124 = &v122->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v124 - 1) != System_IDisposable_TypeInfo )
    {
      --v123;
      v124 += 4;
      if ( !v123 )
        goto LABEL_76;
    }
    v125 = (__int64)&v122->vtable[*v124].method;
  }
  else
  {
LABEL_76:
    v125 = sub_1BBA6B4(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v125)(
    Enumerator,
    *(_QWORD *)(v125 + 8));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E49CFC *)Method_DataManager_GetMaster_UserRecommendSupportMaster___);
  v126 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_526;
  v127 = v126[2];
  v128 = (UserRecommendSupportMaster_o *)Instance;
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v386.fields.currentCryptoKey = v126[1];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v386.fields.fakeValue = v127;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v382 = v386;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46242940(&v382, 0LL);
  if ( !v128 )
    goto LABEL_526;
  Instance = UserRecommendSupportMaster__IsSettingServant(v128, Instance, 0, 0LL);
  v129 = this->fields.userSvtEntity;
  this->fields.isUseRecommendSupport = Instance & 1;
  if ( !v129 )
    goto LABEL_526;
  Instance = UserServantEntity__IsEventJoin(v129, 0LL);
  v130 = this->fields.userSvtEntity;
  this->fields.isEventJoin = Instance & 1;
  if ( !v130 )
    goto LABEL_526;
  Instance = UserServantEntity__IsHeroine(v130, 0LL);
  if ( (Instance & 1) != 0 )
    this->fields.isHeroineSvt = 1;
  if ( baseUsrSvtData )
  {
    v131 = *p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_526;
    v132 = v131[2];
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v386.fields.currentCryptoKey = v131[1];
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v386.fields.fakeValue = v132;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v381 = v386;
    v133 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46242940(&v381, 0LL);
    v134 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
    *(_OWORD *)&v380.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v380.fields.fakeValue = v134;
    if ( v133 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46242940(&v380, 0LL) )
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
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_526;
  v135 = DataManager__GetMasterData_object_(
           (DataManager_o *)Instance,
           (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__get_UserId(0LL);
  v136 = *p_servantEntity;
  if ( !*p_servantEntity )
    goto LABEL_526;
  v137 = Instance;
  v139 = *(_QWORD *)&v136->fields.id.fields.currentCryptoKey;
  v138 = *(_QWORD *)&v136->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v397.fields.currentCryptoKey = v139;
  *(_QWORD *)&v397.fields.fakeValue = v138;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(v397, 0LL);
  if ( !v135 )
    goto LABEL_526;
  Instance = UserServantCommandCodeMaster__TryGetEntity(
               (UserServantCommandCodeMaster_o *)v135,
               &entity,
               v137,
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
  v140 = this->fields.type;
  if ( v140 == 10 )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_526;
    v141 = DataManager__GetMasterData_object_(
             (DataManager_o *)Instance,
             (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_UserServantCommandCardMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = NetworkManager__get_UserId(0LL);
    v142 = *p_servantEntity;
    if ( !*p_servantEntity )
      goto LABEL_526;
    v143 = Instance;
    v145 = *(_QWORD *)&v142->fields.id.fields.currentCryptoKey;
    v144 = *(_QWORD *)&v142->fields.id.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v398.fields.currentCryptoKey = v145;
    *(_QWORD *)&v398.fields.fakeValue = v144;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(v398, 0LL);
    if ( !v141 )
      goto LABEL_526;
    Instance = UserServantCommandCardMaster__TryGetEntity(
                 (UserServantCommandCardMaster_o *)v141,
                 &v394,
                 v143,
                 (int)Instance,
                 0LL);
    if ( (Instance & 1) != 0 )
    {
      if ( !v394 )
        goto LABEL_526;
      commandCardParam = v394->fields.commandCardParam;
      if ( commandCardParam )
      {
        max_length = commandCardParam->max_length;
        if ( max_length >= 1 )
        {
          v148 = 0LL;
          while ( 1 )
          {
            if ( (unsigned int)v148 >= max_length )
              goto LABEL_536;
            Instance = (int64_t)BalanceConfig_TypeInfo;
            v149 = commandCardParam->m_Items[v148 + 1];
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              Instance = (int64_t)BalanceConfig_TypeInfo;
            }
            if ( v149 < *(_DWORD *)(*(_QWORD *)(Instance + 184) + 732LL) )
              break;
            this->fields.isCommandCardExceedMax = 1;
            max_length = commandCardParam->max_length;
            if ( (int)++v148 >= max_length )
              goto LABEL_134;
          }
          this->fields.isCommandCardExceedMax = 0;
        }
      }
    }
LABEL_134:
    v140 = this->fields.type;
  }
  v350 = isFavorite;
  v150 = baseUsrSvtData;
  v151 = isMtSvt;
  if ( v140 == 1 )
  {
    this->fields.isMaterialSvt = v151;
    this->fields.isParty = v357;
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_526;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_UserServantLeaderMaster___);
    if ( !Instance )
      goto LABEL_526;
    Instance = *(_QWORD *)(Instance + 32);
    if ( !Instance )
      goto LABEL_526;
    v352 = isMtSvt;
    v153 = System_Collections_ObjectModel_Collection_object___GetEnumerator(
             (System_Collections_ObjectModel_Collection_T__o *)Instance,
             (const MethodInfo_30816FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    if ( !v153 )
      sub_1B68930(0LL, v152);
    while ( 1 )
    {
      v154 = v153->klass;
      v155 = *(unsigned __int16 *)(&v153->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v153->klass->_2.bitflags2 + 3) )
      {
        v156 = &v154->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)v156 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v155;
          v156 += 4;
          if ( !v155 )
            goto LABEL_144;
        }
        v157 = (__int64)&v154->vtable[*v156].method;
      }
      else
      {
LABEL_144:
        v157 = sub_1BBA6B4(v153, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v157)(
              v153,
              *(_QWORD *)(v157 + 8)) & 1) == 0 )
        break;
      v158 = v153->klass;
      v159 = *(unsigned __int16 *)(&v153->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v153->klass->_2.bitflags2 + 3) )
      {
        v160 = &v158->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v160 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
        {
          --v159;
          v160 += 4;
          if ( !v159 )
            goto LABEL_151;
        }
        v161 = (__int64)&v158->vtable[*v160].method;
      }
      else
      {
LABEL_151:
        v161 = sub_1BBA6B4(v153, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
      }
      v162 = (_QWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v161)(
                         v153,
                         *(_QWORD *)(v161 + 8));
      if ( !v162 )
        goto LABEL_532;
      v164 = LOBYTE(UserServantLeaderEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*v162 + 304LL) < (unsigned int)v164
        || *(UserServantLeaderEntity_c **)(*(_QWORD *)(*v162 + 200LL) + 8 * v164 - 8) != UserServantLeaderEntity_TypeInfo )
      {
        sub_1B68BF0(v162);
LABEL_531:
        sub_1B68BF0(v267);
LABEL_532:
        sub_1B68930(v162, v163);
      }
      v165 = *p_userSvtEntity;
      if ( !*p_userSvtEntity )
        sub_1B68930(v162, UserServantLeaderEntity_TypeInfo);
      v166 = v165[2];
      v167 = v162[7];
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v386.fields.currentCryptoKey = v165[1];
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v386.fields.fakeValue = v166;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v379 = v386;
      if ( v167 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46242940(&v379, 0LL) )
      {
        this->fields.isUseSupport = 1;
        break;
      }
    }
    v168 = v153->klass;
    v169 = *(unsigned __int16 *)(&v153->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v153->klass->_2.bitflags2 + 3) )
    {
      v170 = &v168->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v170 - 1) != System_IDisposable_TypeInfo )
      {
        --v169;
        v170 += 4;
        if ( !v169 )
          goto LABEL_165;
      }
      v171 = (__int64)&v168->vtable[*v170].method;
    }
    else
    {
LABEL_165:
      v171 = sub_1BBA6B4(v153, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v171)(v153, *(_QWORD *)(v171 + 8));
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Instance = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E49CFC *)Method_DataManager_GetMaster_UserRecommendSupportMaster___);
    v172 = *p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_526;
    v173 = v172[2];
    v174 = (UserRecommendSupportMaster_o *)Instance;
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v386.fields.currentCryptoKey = v172[1];
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v386.fields.fakeValue = v173;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v378 = v386;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46242940(&v378, 0LL);
    if ( !v174 )
      goto LABEL_526;
    this->fields.isUseRecommendSupport = UserRecommendSupportMaster__IsSettingServant(v174, Instance, 0, 0LL);
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_526;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_CombineMaterialMaster___);
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
      v175 = *p_userSvtEntity;
      if ( !*p_userSvtEntity )
        goto LABEL_526;
      v177 = *(_QWORD *)&v175[5].fields.currentCryptoKey;
      v176 = *(_QWORD *)&v175[5].fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v399.fields.currentCryptoKey = v177;
      *(_QWORD *)&v399.fields.fakeValue = v176;
      v178 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(v399, 0LL);
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(baseUsrSvtData->fields.svtId, 0LL);
      if ( v178 == (_DWORD)Instance )
      {
        v179 = this->fields.userSvtEntity;
        this->fields.isLimitCntTarget = 1;
        if ( !v179 )
          goto LABEL_526;
        v180 = *(_OWORD *)&v179->fields.id.fields.fakeValue;
        *(_OWORD *)&v386.fields.currentCryptoKey = *(_OWORD *)&v179->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v386.fields.fakeValue = v180;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v377 = v386;
        v181 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46242940(&v377, 0LL);
        v182 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
        *(_OWORD *)&v376.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v376.fields.fakeValue = v182;
        if ( v181 != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46242940(&v376, 0LL) )
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
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_526;
      Instance = (int64_t)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_ServantClassMaster___);
      if ( !*p_servantEntity )
        goto LABEL_526;
      if ( !Instance )
        goto LABEL_526;
      Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                            (*p_servantEntity)->fields.classId,
                            (const MethodInfo_30E44C0 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_526;
      HIDWORD(v392) = *(_DWORD *)(Instance + 52);
      SvtClassId = UserServantEntity__getSvtClassId(baseUsrSvtData, 0, 0LL);
      SvtClassGroupType = UserServantEntity__getSvtClassGroupType(baseUsrSvtData, SvtClassId, 0LL);
      if ( System_Int32__Equals_62224576((int32_t)&v392 + 4, 3, 0LL)
        || System_Int32__Equals_62224576((int32_t)&v392 + 4, SvtClassGroupType, 0LL) && this->fields.isSameClass )
      {
        materialExp = this->fields.materialExp;
        v186 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v186 = BalanceConfig_TypeInfo;
        }
        SameClassExp = v186->static_fields->SameClassExp;
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        v188 = (double)materialExp * (double)SameClassExp / 1000.0;
        v189 = vcvtpd_s64_f64(v188);
        if ( ceil(v188) == INFINITY )
          v189 = 0x80000000;
        this->fields.materialExp = v189;
      }
    }
    else
    {
      this->fields.isLimitCntTarget = 0;
    }
    Instance = (int64_t)this->fields.userSvtEntity;
    this->fields.isFavorite = v350;
    if ( !Instance )
      goto LABEL_526;
    Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL);
    v190 = this->fields.userSvtEntity;
    this->fields.isLock = Instance & 1;
    if ( !v190 )
      goto LABEL_526;
    *p_isChoice = UserServantEntity__IsChoice(v190, 0LL);
    Instance = (int64_t)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_526;
    this->fields.isEventJoin = UserServantEntity__IsEventJoin((UserServantEntity_o *)Instance, 0LL);
    Instance = (int64_t)this->fields.userSvtEntity;
    this->fields.hpBase = *(_DWORD *)(v345 + 36);
    this->fields.atkBase = *(_DWORD *)(v345 + 44);
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
      v191 = UserServantEntity__getSvtClassId(baseUsrSvtData, 0, 0LL);
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_526;
      Instance = (int64_t)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_ServantClassMaster___);
      if ( !*p_servantEntity )
        goto LABEL_526;
      if ( !Instance )
        goto LABEL_526;
      Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                            (*p_servantEntity)->fields.classId,
                            (const MethodInfo_30E44C0 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_526;
      LODWORD(v392) = *(_DWORD *)(Instance + 52);
      if ( !*p_servantEntity )
        goto LABEL_526;
      if ( (*p_servantEntity)->fields.classId == v191 || System_Int32__Equals_62224576((int32_t)&v392, 3, 0LL) )
      {
        this->fields.isCanStUp = 1;
        v192 = UserServantEntity__isAdjustAtkMax(baseUsrSvtData, 0LL) && this->fields.atkBase > 0;
        this->fields.isAtkUpMax = v192;
        v193 = UserServantEntity__isAdjustHpMax(baseUsrSvtData, 0LL) && this->fields.hpBase > 0;
        this->fields.isHpUpMax = v193;
        v194 = UserServantEntity__isSecondAdjustAtkMax(baseUsrSvtData, 0LL) && this->fields.atkBase > 0;
        this->fields.isAtkSecondUpMax = v194;
        v195 = UserServantEntity__isSecondAdjustHpMax(baseUsrSvtData, 0LL) && this->fields.hpBase > 0;
        this->fields.isHpSecondUpMax = v195;
      }
    }
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_526;
    v196 = DataManager__GetMasterData_object_(
             (DataManager_o *)Instance,
             (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = NetworkManager__get_UserId(0LL);
    v197 = *p_servantEntity;
    if ( !*p_servantEntity )
      goto LABEL_526;
    v198 = Instance;
    v200 = *(_QWORD *)&v197->fields.id.fields.currentCryptoKey;
    v199 = *(_QWORD *)&v197->fields.id.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v400.fields.currentCryptoKey = v200;
    *(_QWORD *)&v400.fields.fakeValue = v199;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(v400, 0LL);
    if ( !v196 )
      goto LABEL_526;
    Instance = UserServantCommandCodeMaster__TryGetEntity(
                 (UserServantCommandCodeMaster_o *)v196,
                 &v393,
                 v198,
                 (int)Instance,
                 0LL);
    v151 = v352;
    if ( (Instance & 1) != 0 )
    {
      Instance = (int64_t)v393;
      if ( !v393 )
        goto LABEL_526;
      this->fields.isEquipedCmdCard = UserServantCommandCodeEntity__IsEquipedCommandCode(v393, 0LL);
      Instance = (int64_t)v393;
      if ( !v393 )
        goto LABEL_526;
      Instance = UserServantCommandCodeEntity__IsCommandCardSlotOpen(v393, 0LL);
      this->fields.isCmdCardSlotOpen = Instance & 1;
    }
  }
  v201 = this->fields.type;
  if ( v201 == 9 )
  {
    if ( !userSvtEntity )
      goto LABEL_526;
    Instance = UserServantEntity__isLimitCountMax(userSvtEntity, 0LL);
    v226 = this->fields.userSvtEntity;
    this->fields.isLimitCntMax = Instance & 1;
    if ( !v226 )
      goto LABEL_526;
    isLevelMax = UserServantEntity__isLevelMax(v226, 0LL);
    Instance = (int64_t)this->fields.userSvtEntity;
    this->fields.isLvMax = isLevelMax;
    this->fields.isParty = v357;
    if ( !Instance )
      goto LABEL_526;
    Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL);
    v228 = this->fields.userSvtEntity;
    this->fields.isLock = Instance & 1;
    if ( !v228 )
      goto LABEL_526;
    *p_isChoice = UserServantEntity__IsChoice(v228, 0LL);
    Instance = (int64_t)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_526;
    Instance = UserServantEntity__IsEventJoin((UserServantEntity_o *)Instance, 0LL);
    v229 = this->fields.userSvtEntity;
    this->fields.isEventJoin = Instance & 1;
    if ( !v229 )
      goto LABEL_526;
    this->fields.isIgnoreCombineLimitSpecial = UserServantEntity__IsIgnoreCombineLimitSpecial(v229, 0LL);
    Instance = CombineServantListViewItem__GetSealCombineLimit(this, v230);
    this->fields.isSealCombineLimit = Instance & 1;
    if ( baseUsrSvtData )
    {
      v231 = (UserServantEntity_o *)*p_userSvtEntity;
      if ( !*p_userSvtEntity )
        goto LABEL_526;
      v232 = *(_OWORD *)&v231->fields.id.fields.fakeValue;
      *(_OWORD *)&v386.fields.currentCryptoKey = *(_OWORD *)&v231->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v386.fields.fakeValue = v232;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v372 = v386;
      v233 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46242940(&v372, 0LL);
      v234 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
      *(_OWORD *)&v371.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v371.fields.fakeValue = v234;
      if ( v233 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46242940(&v371, 0LL) )
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
    if ( v201 != 2 )
      goto LABEL_309;
    if ( !userSvtEntity )
      goto LABEL_526;
    Instance = UserServantEntity__isLimitCountMax(userSvtEntity, 0LL);
    v202 = this->fields.userSvtEntity;
    this->fields.isLimitCntMax = Instance & 1;
    if ( !v202 )
      goto LABEL_526;
    v203 = UserServantEntity__isLevelMax(v202, 0LL);
    Instance = (int64_t)this->fields.userSvtEntity;
    this->fields.isLvMax = v203;
    this->fields.isParty = v357;
    if ( !Instance )
      goto LABEL_526;
    Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL);
    v204 = this->fields.userSvtEntity;
    this->fields.isLock = Instance & 1;
    if ( !v204 )
      goto LABEL_526;
    *p_isChoice = UserServantEntity__IsChoice(v204, 0LL);
    Instance = (int64_t)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_526;
    this->fields.isEventJoin = UserServantEntity__IsEventJoin((UserServantEntity_o *)Instance, 0LL);
    Instance = CombineServantListViewItem__GetSealCombineLimit(this, v205);
    this->fields.isSealCombineLimit = Instance & 1;
    if ( baseUsrSvtData )
    {
      v206 = (UserServantEntity_o *)*p_userSvtEntity;
      if ( !*p_userSvtEntity )
        goto LABEL_526;
      v207 = *(_OWORD *)&v206->fields.id.fields.fakeValue;
      *(_OWORD *)&v386.fields.currentCryptoKey = *(_OWORD *)&v206->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v386.fields.fakeValue = v207;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v375 = v386;
      v208 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46242940(&v375, 0LL);
      v209 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
      *(_OWORD *)&v374.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v374.fields.fakeValue = v209;
      if ( v208 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46242940(&v374, 0LL) )
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
      v210 = (UserServantEntity_o *)*p_userSvtEntity;
      v211 = v354;
      v353 = v151;
      if ( !*p_userSvtEntity )
        goto LABEL_526;
      combineLimitId = (*p_servantEntity)->fields.combineLimitId;
      v214 = *(_QWORD *)&v210->fields.limitCount.fields.currentCryptoKey;
      v213 = *(_QWORD *)&v210->fields.limitCount.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v401.fields.currentCryptoKey = v214;
      *(_QWORD *)&v401.fields.fakeValue = v213;
      v215 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(v401, 0LL);
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_526;
      Instance = (int64_t)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_CombineLimitMaster___);
      if ( !Instance )
        goto LABEL_526;
      Instance = (int64_t)CombineLimitMaster__GetEntity((CombineLimitMaster_o *)Instance, combineLimitId, v215, 0LL);
      if ( !Instance )
        goto LABEL_526;
      v216 = Instance;
      v218 = *(_QWORD *)(Instance + 32);
      v217 = *(_QWORD *)(Instance + 40);
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_526;
      Instance = (int64_t)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_UserItemMaster___);
      if ( !v217 )
        goto LABEL_526;
      v219 = *(_QWORD *)(v217 + 24);
      if ( (int)v219 >= 1 )
      {
        v220 = (UserItemMaster_o *)Instance;
        for ( i = 0LL; (__int64)i < (int)v219; ++i )
        {
          if ( i >= (unsigned int)v219 )
            goto LABEL_536;
          if ( !v218 )
            goto LABEL_526;
          if ( i >= *(unsigned int *)(v218 + 24) )
            goto LABEL_536;
          v222 = (UserServantEntity_o *)*p_userSvtEntity;
          if ( !*p_userSvtEntity )
            goto LABEL_526;
          v223 = *(_OWORD *)&v222->fields.userId.fields.fakeValue;
          v224 = *(_DWORD *)(v217 + 32 + 4 * i);
          v225 = *(_DWORD *)(v218 + 32 + 4 * i);
          *(_OWORD *)&v386.fields.currentCryptoKey = *(_OWORD *)&v222->fields.userId.fields.currentCryptoKey;
          *(_OWORD *)&v386.fields.fakeValue = v223;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v373 = v386;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46242940(&v373, 0LL);
          if ( !v220 )
            goto LABEL_526;
          Instance = UserItemMaster__TryGetEntity(v220, &v391, Instance, v224, 0LL);
          if ( (Instance & 1) == 0 )
            goto LABEL_352;
          if ( !v391 )
            goto LABEL_526;
          if ( v224 == v391->fields.itemId )
          {
            if ( v225 > v391->fields.num )
            {
LABEL_352:
              v211 = v354;
              *p_isLimitUpItemNum = 0;
              break;
            }
            *p_isLimitUpItemNum = 1;
          }
          LODWORD(v219) = *(_DWORD *)(v217 + 24);
          v211 = v354;
        }
      }
      v251 = *(_DWORD *)(v211 + 96);
      v150 = baseUsrSvtData;
      v151 = v353;
      if ( v251 < *(_DWORD *)(v216 + 24) )
        *p_isLimitUpItemNum = 0;
      goto LABEL_308;
    }
  }
  this->fields.isHeroineSvt = 1;
LABEL_308:
  v201 = this->fields.type;
LABEL_309:
  if ( (v201 | 8) == 11 )
  {
    Instance = (int64_t)this->fields.userSvtEntity;
    this->fields.isParty = v357;
    if ( !Instance )
      goto LABEL_526;
    Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL);
    v235 = this->fields.userSvtEntity;
    this->fields.isLock = Instance & 1;
    if ( !v235 )
      goto LABEL_526;
    *p_isChoice = UserServantEntity__IsChoice(v235, 0LL);
    Instance = (int64_t)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_526;
    Instance = UserServantEntity__IsEventJoin((UserServantEntity_o *)Instance, 0LL);
    this->fields.isEventJoin = Instance & 1;
    if ( v150 )
    {
      v236 = (UserServantEntity_o *)*p_userSvtEntity;
      if ( !*p_userSvtEntity )
        goto LABEL_526;
      v237 = *(_OWORD *)&v236->fields.id.fields.fakeValue;
      *(_OWORD *)&v386.fields.currentCryptoKey = *(_OWORD *)&v236->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v386.fields.fakeValue = v237;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v370 = v386;
      v238 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46242940(&v370, 0LL);
      v239 = *(_OWORD *)&v150->fields.id.fields.fakeValue;
      *(_OWORD *)&v369.fields.currentCryptoKey = *(_OWORD *)&v150->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v369.fields.fakeValue = v239;
      if ( v238 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46242940(&v369, 0LL) )
        this->fields.isBaseSvt = 1;
    }
    Instance = (int64_t)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_526;
    if ( UserServantEntity__IsHeroine((UserServantEntity_o *)Instance, 0LL) )
      this->fields.isHeroineSvt = 1;
    v201 = this->fields.type;
    if ( v201 == 3 )
    {
      CombineServantListViewItem__SetSkillInfo(this, v71);
      v201 = this->fields.type;
    }
    if ( v201 == 11 )
    {
      CombineServantListViewItem__SetAppendSkillInfo(this, v71);
      v201 = this->fields.type;
    }
  }
  if ( v201 == 4 )
  {
    Instance = (int64_t)this->fields.userSvtEntity;
    this->fields.isParty = v357;
    if ( !Instance )
      goto LABEL_526;
    Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL);
    v240 = this->fields.userSvtEntity;
    this->fields.isLock = Instance & 1;
    if ( !v240 )
      goto LABEL_526;
    *p_isChoice = UserServantEntity__IsChoice(v240, 0LL);
    Instance = (int64_t)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_526;
    Instance = UserServantEntity__IsEventJoin((UserServantEntity_o *)Instance, 0LL);
    this->fields.isEventJoin = Instance & 1;
    if ( v150 )
    {
      v241 = (UserServantEntity_o *)*p_userSvtEntity;
      if ( !*p_userSvtEntity )
        goto LABEL_526;
      v242 = *(_OWORD *)&v241->fields.id.fields.fakeValue;
      *(_OWORD *)&v386.fields.currentCryptoKey = *(_OWORD *)&v241->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v386.fields.fakeValue = v242;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v368 = v386;
      v243 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46242940(&v368, 0LL);
      v244 = *(_OWORD *)&v150->fields.id.fields.fakeValue;
      *(_OWORD *)&v367.fields.currentCryptoKey = *(_OWORD *)&v150->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v367.fields.fakeValue = v244;
      if ( v243 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46242940(&v367, 0LL) )
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
        Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_526;
        Instance = (int64_t)DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
        if ( !Instance )
          goto LABEL_526;
        Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                              id,
                              (const MethodInfo_30E44C0 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
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
        v249 = SameSvtNpLvCache;
        CombineServantListViewItem__GetNpInfo(this, &tdLv[1], tdLv, &tdMaxLv, v248);
        if ( v343 <= 1200000 )
        {
          Instance = (int64_t)*p_userSvtEntity;
          if ( !*p_userSvtEntity )
            goto LABEL_526;
          v252 = UserServantEntity__checkTreasureDeviceLevelUp((UserServantEntity_o *)Instance, v249, 0LL);
          v253 = tdLv[0];
          if ( tdLv[0] >= v252 )
          {
            v256 = 0;
          }
          else
          {
            v254 = tdLv[1];
            v255 = v252;
            v256 = 0;
            do
            {
              Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !Instance )
                goto LABEL_526;
              Instance = (int64_t)DataManager__GetMasterData_object_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
              if ( !Instance )
                goto LABEL_526;
              Instance = (int64_t)TreasureDvcLvMaster__GetEntity((TreasureDvcLvMaster_o *)Instance, v254, v253, 0LL);
              if ( Instance )
                v256 += *(_DWORD *)(Instance + 92);
              ++v253;
            }
            while ( v255 != v253 );
            if ( !this )
              goto LABEL_526;
          }
          v250 = v343 >= v256;
        }
        else
        {
          v250 = 1;
        }
        this->fields.isSameSvt = v250;
      }
    }
    v201 = this->fields.type;
  }
  if ( v201 == 5 )
  {
    this->fields.isMaterialSvt = v151;
    this->fields.isParty = v357;
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_526;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_UserServantLeaderMaster___);
    if ( !Instance )
      goto LABEL_526;
    Instance = *(_QWORD *)(Instance + 32);
    if ( !Instance )
      goto LABEL_526;
    v258 = System_Collections_ObjectModel_Collection_object___GetEnumerator(
             (System_Collections_ObjectModel_Collection_T__o *)Instance,
             (const MethodInfo_30816FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    if ( !v258 )
      sub_1B68930(0LL, v257);
    while ( 1 )
    {
      v259 = v258->klass;
      v260 = *(unsigned __int16 *)(&v258->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v258->klass->_2.bitflags2 + 3) )
      {
        v261 = &v259->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)v261 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v260;
          v261 += 4;
          if ( !v260 )
            goto LABEL_378;
        }
        v262 = (__int64)&v259->vtable[*v261].method;
      }
      else
      {
LABEL_378:
        v262 = sub_1BBA6B4(v258, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v262)(
              v258,
              *(_QWORD *)(v262 + 8)) & 1) == 0 )
        break;
      v263 = v258->klass;
      v264 = *(unsigned __int16 *)(&v258->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v258->klass->_2.bitflags2 + 3) )
      {
        v265 = &v263->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v265 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
        {
          --v264;
          v265 += 4;
          if ( !v264 )
            goto LABEL_385;
        }
        v266 = (__int64)&v263->vtable[*v265].method;
      }
      else
      {
LABEL_385:
        v266 = sub_1BBA6B4(v258, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
      }
      v267 = (_QWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v266)(
                         v258,
                         *(_QWORD *)(v266 + 8));
      if ( !v267 )
        sub_1B68930(0LL, v268);
      v269 = LOBYTE(UserServantLeaderEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*v267 + 304LL) < (unsigned int)v269
        || *(UserServantLeaderEntity_c **)(*(_QWORD *)(*v267 + 200LL) + 8 * v269 - 8) != UserServantLeaderEntity_TypeInfo )
      {
        goto LABEL_531;
      }
      v270 = (UserServantEntity_o *)*p_userSvtEntity;
      if ( !*p_userSvtEntity )
        sub_1B68930(v267, UserServantLeaderEntity_TypeInfo);
      v271 = *(_OWORD *)&v270->fields.id.fields.fakeValue;
      v272 = v267[7];
      *(_OWORD *)&v386.fields.currentCryptoKey = *(_OWORD *)&v270->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v386.fields.fakeValue = v271;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v366 = v386;
      if ( v272 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46242940(&v366, 0LL) )
      {
        this->fields.isUseSupport = 1;
        break;
      }
    }
    v273 = v258->klass;
    v274 = *(unsigned __int16 *)(&v258->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v258->klass->_2.bitflags2 + 3) )
    {
      v275 = &v273->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v275 - 1) != System_IDisposable_TypeInfo )
      {
        --v274;
        v275 += 4;
        if ( !v274 )
          goto LABEL_399;
      }
      v276 = (__int64)&v273->vtable[*v275].method;
    }
    else
    {
LABEL_399:
      v276 = sub_1BBA6B4(v258, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v276)(v258, *(_QWORD *)(v276 + 8));
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Instance = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E49CFC *)Method_DataManager_GetMaster_UserRecommendSupportMaster___);
    v277 = (UserServantEntity_o *)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_526;
    v278 = *(_OWORD *)&v277->fields.id.fields.fakeValue;
    v279 = (UserRecommendSupportMaster_o *)Instance;
    *(_OWORD *)&v386.fields.currentCryptoKey = *(_OWORD *)&v277->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v386.fields.fakeValue = v278;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v365 = v386;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46242940(&v365, 0LL);
    if ( !v279 )
      goto LABEL_526;
    IsSettingServant = UserRecommendSupportMaster__IsSettingServant(v279, Instance, 0, 0LL);
    Instance = (int64_t)this->fields.userSvtEntity;
    this->fields.isUseRecommendSupport = IsSettingServant;
    this->fields.isFavorite = v350;
    if ( !Instance )
      goto LABEL_526;
    Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL);
    v281 = this->fields.userSvtEntity;
    this->fields.isLock = Instance & 1;
    if ( !v281 )
      goto LABEL_526;
    *p_isChoice = UserServantEntity__IsChoice(v281, 0LL);
    Instance = (int64_t)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_526;
    Instance = UserServantEntity__IsEventJoin((UserServantEntity_o *)Instance, 0LL);
    this->fields.isEventJoin = Instance & 1;
    if ( v150 )
      v282 = 0LL;
    else
      v282 = this;
    if ( v150 )
      v283 = this;
    else
      v283 = 0LL;
    if ( v150 )
    {
      Instance = UserServantEntity__IsEventJoin(v150, 0LL);
      if ( !v283 )
        goto LABEL_526;
      v283->fields.isEventJoinBaseSvt = Instance & 1;
      Instance = (int64_t)*p_userSvtEntity;
      if ( !*p_userSvtEntity )
        goto LABEL_526;
      Instance = UserServantEntity__IsMaterialTd((UserServantEntity_o *)Instance, 0LL);
      v284 = this->fields.userSvtEntity;
      this->fields.isMaterialTdSvt = Instance & 1;
      if ( !v284 )
        goto LABEL_526;
      v285 = *(_OWORD *)&v284->fields.id.fields.fakeValue;
      *(_OWORD *)&v386.fields.currentCryptoKey = *(_OWORD *)&v284->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v386.fields.fakeValue = v285;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v364 = v386;
      v286 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46242940(&v364, 0LL);
      v287 = *(_OWORD *)&v150->fields.id.fields.fakeValue;
      *(_OWORD *)&v363.fields.currentCryptoKey = *(_OWORD *)&v150->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v363.fields.fakeValue = v287;
      if ( v286 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46242940(&v363, 0LL) )
        this->fields.isBaseSvt = 1;
    }
    else
    {
      if ( !v282 )
        goto LABEL_526;
      v282->fields.isEventJoinBaseSvt = 0;
      Instance = (int64_t)*p_userSvtEntity;
      if ( !*p_userSvtEntity )
        goto LABEL_526;
      this->fields.isMaterialTdSvt = UserServantEntity__IsMaterialTd((UserServantEntity_o *)Instance, 0LL);
    }
  }
  v288 = this->fields.type;
  if ( v288 == 6 )
  {
    Instance = (int64_t)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_526;
    Instance = UserServantEntity__isExceedLvMax((UserServantEntity_o *)Instance, 0LL);
    v289 = this->fields.userSvtEntity;
    this->fields.isLvExceedMax = Instance & 1;
    if ( !v289 )
      goto LABEL_526;
    Instance = UserServantEntity__isLimitCountMax(v289, 0LL);
    v290 = this->fields.userSvtEntity;
    this->fields.isLimitCntMax = Instance & 1;
    if ( !v290 )
      goto LABEL_526;
    v291 = UserServantEntity__isLevelMax(v290, 0LL);
    Instance = (int64_t)this->fields.userSvtEntity;
    this->fields.isLvMax = v291;
    this->fields.isParty = v357;
    if ( !Instance )
      goto LABEL_526;
    Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL);
    v292 = this->fields.userSvtEntity;
    this->fields.isLock = Instance & 1;
    if ( !v292 )
      goto LABEL_526;
    *p_isChoice = UserServantEntity__IsChoice(v292, 0LL);
    Instance = (int64_t)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_526;
    Instance = UserServantEntity__IsEventJoin((UserServantEntity_o *)Instance, 0LL);
    this->fields.isEventJoin = Instance & 1;
    if ( v150 )
    {
      v293 = (UserServantEntity_o *)*p_userSvtEntity;
      if ( !*p_userSvtEntity )
        goto LABEL_526;
      v294 = *(_OWORD *)&v293->fields.id.fields.fakeValue;
      *(_OWORD *)&v386.fields.currentCryptoKey = *(_OWORD *)&v293->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v386.fields.fakeValue = v294;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v362 = v386;
      v295 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46242940(&v362, 0LL);
      v296 = *(_OWORD *)&v150->fields.id.fields.fakeValue;
      *(_OWORD *)&v361.fields.currentCryptoKey = *(_OWORD *)&v150->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v361.fields.fakeValue = v296;
      if ( v295 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46242940(&v361, 0LL) )
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
        v298 = (int32_t *)SvtExceedEnt;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Instance = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E49CFC *)Method_DataManager_GetMaster_CommonConsumeMaster___);
        if ( !Instance )
          goto LABEL_526;
        IdEntityList = CommonConsumeMaster__GetIdEntityList((CommonConsumeMaster_o *)Instance, v298[12], 0LL);
        if ( IdEntityList )
        {
          v300 = IdEntityList;
          v301 = (System_Collections_Generic_HashSet_int__o *)sub_1B68920(System_Collections_Generic_HashSet_int__TypeInfo);
          System_Collections_Generic_HashSet_int____ctor(
            v301,
            (const MethodInfo_3374AEC *)Method_System_Collections_Generic_HashSet_int___ctor__);
          v302 = (System_Collections_Generic_HashSet_int__o *)sub_1B68920(System_Collections_Generic_HashSet_int__TypeInfo);
          System_Collections_Generic_HashSet_int____ctor(
            v302,
            (const MethodInfo_3374AEC *)Method_System_Collections_Generic_HashSet_int___ctor__);
          v303 = v300->max_length;
          if ( v303 >= 1 )
          {
            v304 = 0LL;
            while ( (unsigned int)v304 < v303 )
            {
              v305 = v300->m_Items[v304];
              if ( !v305 )
                goto LABEL_526;
              if ( !v301 )
                goto LABEL_526;
              Instance = System_Collections_Generic_HashSet_int___Add(
                           v301,
                           v305->fields.objectId,
                           (const MethodInfo_3375CF0 *)Method_System_Collections_Generic_HashSet_int__Add__);
              if ( !v302 )
                goto LABEL_526;
              Instance = System_Collections_Generic_HashSet_int___Add(
                           v302,
                           v305->fields.num,
                           (const MethodInfo_3375CF0 *)Method_System_Collections_Generic_HashSet_int__Add__);
              v303 = v300->max_length;
              if ( (int)++v304 >= v303 )
                goto LABEL_456;
            }
LABEL_536:
            sub_1B68938(Instance, v71);
          }
LABEL_456:
          v150 = baseUsrSvtData;
          if ( v298[13] >= 1 )
          {
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            Instance = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E49CFC *)Method_DataManager_GetMaster_SvtCoinMaster___);
            v306 = (UserServantEntity_o *)*p_userSvtEntity;
            if ( !*p_userSvtEntity )
              goto LABEL_526;
            v307 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
            v309 = *(_QWORD *)&v306->fields.svtId.fields.currentCryptoKey;
            v308 = *(_QWORD *)&v306->fields.svtId.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v402.fields.currentCryptoKey = v309;
            *(_QWORD *)&v402.fields.fakeValue = v308;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(v402, 0LL);
            if ( !v307 )
              goto LABEL_526;
            Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                  v307,
                                  Instance,
                                  (const MethodInfo_30E44C0 *)Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__GetEntity__);
            v150 = baseUsrSvtData;
            if ( !Instance )
              goto LABEL_526;
            if ( !v301 )
              goto LABEL_526;
            Instance = System_Collections_Generic_HashSet_int___Add(
                         v301,
                         *(_DWORD *)(Instance + 24),
                         (const MethodInfo_3375CF0 *)Method_System_Collections_Generic_HashSet_int__Add__);
            if ( !v302 )
              goto LABEL_526;
            System_Collections_Generic_HashSet_int___Add(
              v302,
              v298[13],
              (const MethodInfo_3375CF0 *)Method_System_Collections_Generic_HashSet_int__Add__);
          }
          v310 = this->fields.userSvtEntity;
          v311 = System_Linq_Enumerable__ToArray_int_(
                   (System_Collections_Generic_IEnumerable_TSource__o *)v301,
                   (const MethodInfo_2E81CA4 *)Method_System_Linq_Enumerable_ToArray_int___);
          v312 = System_Linq_Enumerable__ToArray_int_(
                   (System_Collections_Generic_IEnumerable_TSource__o *)v302,
                   (const MethodInfo_2E81CA4 *)Method_System_Linq_Enumerable_ToArray_int___);
          this->fields.isLvExceedItemNum = CombineUtility__CheckCombineNeedItemsEnough(
                                             v310,
                                             v311,
                                             v312,
                                             *(_DWORD *)(v354 + 96),
                                             v298[8],
                                             0LL);
        }
      }
    }
    v288 = this->fields.type;
  }
  if ( v288 != 8 )
    goto LABEL_513;
  Instance = (int64_t)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_526;
  this->fields.isFriendshipExceedMax = UserServantEntity__isExceedFriendshipMax((UserServantEntity_o *)Instance, 0LL);
  v313 = *(_QWORD *)(v348 + 100);
  v314 = *(_QWORD *)(v348 + 108);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v403.fields.currentCryptoKey = v313;
  *(_QWORD *)&v403.fields.fakeValue = v314;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(v403, 0LL);
  if ( !*p_servantEntity )
    goto LABEL_526;
  v315 = this->fields.userSvtEntity;
  this->fields.isFriendshipRankMax = (_DWORD)Instance == *(_DWORD *)(v348 + 116)
                                                       + (*p_servantEntity)->fields.maxFriendshipRank;
  this->fields.isParty = v357;
  if ( !v315 )
    goto LABEL_526;
  Instance = UserServantEntity__IsLock(v315, 0LL);
  v316 = this->fields.userSvtEntity;
  this->fields.isLock = Instance & 1;
  if ( !v316 )
    goto LABEL_526;
  *p_isChoice = UserServantEntity__IsChoice(v316, 0LL);
  Instance = (int64_t)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_526;
  Instance = UserServantEntity__IsEventJoin((UserServantEntity_o *)Instance, 0LL);
  this->fields.isEventJoin = Instance & 1;
  if ( v150 )
  {
    v317 = (UserServantEntity_o *)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_526;
    v318 = *(_OWORD *)&v317->fields.id.fields.fakeValue;
    *(_OWORD *)&v386.fields.currentCryptoKey = *(_OWORD *)&v317->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v386.fields.fakeValue = v318;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v360 = v386;
    v319 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46242940(&v360, 0LL);
    v320 = *(_OWORD *)&v150->fields.id.fields.fakeValue;
    *(_OWORD *)&v359.fields.currentCryptoKey = *(_OWORD *)&v150->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v359.fields.fakeValue = v320;
    if ( v319 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46242940(&v359, 0LL) )
      this->fields.isBaseSvt = 1;
  }
  Instance = (int64_t)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
LABEL_526:
    sub_1B68930(Instance, v71);
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
  v322 = *(_DWORD *)(v348 + 116);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_526;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_FriendshipMaster___);
  if ( !*p_servantEntity )
    goto LABEL_526;
  if ( !Instance )
    goto LABEL_526;
  Instance = (int64_t)FriendshipMaster__GetEntity(
                        (FriendshipMaster_o *)Instance,
                        (*p_servantEntity)->fields.friendshipId,
                        maxFriendshipRank + v322 + 1,
                        0LL);
  if ( !Instance )
    goto LABEL_526;
  v323 = Instance;
  v325 = *(_QWORD *)(Instance + 32);
  v324 = *(_QWORD *)(Instance + 40);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_526;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !v324 )
    goto LABEL_526;
  if ( *(int *)(v324 + 24) >= 1 )
  {
    v326 = (UserItemMaster_o *)Instance;
    v327 = 0LL;
    v328 = v324 + 32;
    while ( 1 )
    {
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = NetworkManager__get_UserId(0LL);
      if ( v327 >= *(unsigned int *)(v324 + 24) )
        goto LABEL_536;
      if ( !v326 )
        goto LABEL_526;
      Instance = UserItemMaster__TryGetEntity(v326, &v387, Instance, *(_DWORD *)(v328 + 4 * v327), 0LL);
      if ( (Instance & 1) == 0 )
        break;
      if ( v327 >= *(unsigned int *)(v324 + 24) )
        goto LABEL_536;
      if ( !v387 )
        goto LABEL_526;
      if ( *(_DWORD *)(v328 + 4 * v327) == v387->fields.itemId )
      {
        if ( !v325 )
          goto LABEL_526;
        if ( v327 >= *(unsigned int *)(v325 + 24) )
          goto LABEL_536;
        v329 = *(_DWORD *)(v325 + 32 + 4 * v327) <= v387->fields.num;
        goto LABEL_509;
      }
LABEL_510:
      if ( (__int64)++v327 >= *(int *)(v324 + 24) )
        goto LABEL_511;
    }
    v329 = 0;
LABEL_509:
    this->fields.isFriendshipExceedItemNum = v329;
    goto LABEL_510;
  }
LABEL_511:
  if ( *(_DWORD *)(v354 + 96) < *(_DWORD *)(v323 + 28) )
    this->fields.isFriendshipExceedItemNum = 0;
LABEL_513:
  Instance = (int64_t)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_526;
  Instance = UserServantEntity__getDispLimitCount((UserServantEntity_o *)Instance, 0, 0LL);
  v330 = this->fields.userSvtEntity;
  this->fields.dispLimitCount = Instance;
  if ( !v330 )
    goto LABEL_526;
  SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v330, -1, 0LL);
  this->fields.skillCategoryIdList = SkillCategoryIdList;
  sub_1B68678(
    (ServantStatusBattleListViewItem_o *)&this->fields.skillCategoryIdList,
    (int32_t)SkillCategoryIdList,
    v332,
    v333);
  Instance = (int64_t)this->fields.userSvtEntity;
  if ( !Instance )
    goto LABEL_526;
  TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                   (UserServantEntity_o *)Instance,
                                   0,
                                   0LL);
  this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
  sub_1B68678(
    (ServantStatusBattleListViewItem_o *)&this->fields.tdCategoryIdList,
    (int32_t)TreasureDeviceCategoryIdList,
    v335,
    v336);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_526;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Instance )
    goto LABEL_526;
  Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                        this->fields.classId,
                        (const MethodInfo_30E44C0 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_526;
  v337 = *(int *)(Instance + 48);
  v338 = this->fields.servantEntity;
  this->fields.priority = v337;
  this->fields.sortValue1B = v337;
  if ( !v338 )
    goto LABEL_526;
  v339 = (UserServantEntity_o *)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_526;
  this->fields.sortValue2 = ((__int64)v338->fields.collectionNo << 16) | ((unsigned __int64)(unsigned int)this->fields.rarity << 48) | v339->fields.lv;
  v341 = *(_QWORD *)&v339->fields.svtId.fields.currentCryptoKey;
  v340 = *(_QWORD *)&v339->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v404.fields.currentCryptoKey = v341;
  *(_QWORD *)&v404.fields.fakeValue = v340;
  v342 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(v404, 0LL);
  Instance = (int64_t)this->fields.iconLabelInfo1;
  this->fields.sortValue2B = v342;
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
  UserServantEntity_o *userSvtEntity; // x0
  SvtUseSkillData_o *v5; // x19

  if ( (byte_4A0C61A & 1) == 0 )
  {
    sub_1B686D4(&SvtUseSkillData_TypeInfo, method);
    byte_4A0C61A = 1;
  }
  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
    return UserServantEntity__getAppendSkillInfo(userSvtEntity, 0LL);
  v5 = (SvtUseSkillData_o *)sub_1B68920(SvtUseSkillData_TypeInfo);
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
      sub_1B68930(TreasureDeviceInfo, v10);
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

  if ( (byte_4A0C61B & 1) == 0 )
  {
    sub_1B686D4(&CondType_TypeInfo, method);
    sub_1B686D4(&Method_DataManager_GetMaster_CombineLimitReleaseMaster___, v3);
    sub_1B686D4(&DataManager_TypeInfo, v4);
    byte_4A0C61B = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E49CFC *)Method_DataManager_GetMaster_CombineLimitReleaseMaster___);
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
    sub_1B68930(Master_object, v6);
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

  if ( (byte_4A0C619 & 1) == 0 )
  {
    sub_1B686D4(&BalanceConfig_TypeInfo, skillInfoList);
    sub_1B686D4(&SkillInfo___TypeInfo, v5);
    byte_4A0C619 = 1;
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
    v8 = (SkillInfo_array *)sub_1B6877C(SkillInfo___TypeInfo, (unsigned int)v7->static_fields->SvtSkillListMax);
    *skillInfoList = v8;
    sub_1B68678((ServantStatusBattleListViewItem_o *)skillInfoList, (int32_t)v8, v9, v10);
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

  if ( (byte_4A0C609 & 1) == 0 )
  {
    sub_1B686D4(&FilterKindList_TypeInfo, sort);
    sub_1B686D4(&ListViewSort_FilterKind___TypeInfo, v5);
    sub_1B686D4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v6);
    sub_1B686D4(&ServantEventBonusFilterController_TypeInfo, v7);
    byte_4A0C609 = 1;
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
                                        (const MethodInfo_34A3538 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                             (const MethodInfo_34A3538 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                           (const MethodInfo_34A3538 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                           (const MethodInfo_34A3538 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
    sub_1B68930(ClassGroupFilterKindList, sort);
  v17 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_34A3538 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
        sub_1B68678(
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
        sub_1B68678(
          (ServantStatusBattleListViewItem_o *)&this->fields.tdCategoryIdList,
          (int32_t)TreasureDeviceCategoryIdList,
          v31,
          v32);
      }
    }
    ClassGroupFilterKindList = sub_1B6877C(ListViewSort_FilterKind___TypeInfo, 1LL);
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
    ClassGroupFilterKindList = sub_1B6877C(ListViewSort_FilterKind___TypeInfo, 1LL);
    if ( !ClassGroupFilterKindList )
      goto LABEL_67;
    v19 = ClassGroupFilterKindList;
    if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
LABEL_68:
      sub_1B68938(ClassGroupFilterKindList, v19);
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
  ClassGroupFilterKindList = sub_1B6877C(ListViewSort_FilterKind___TypeInfo, 1LL);
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
                                           (const MethodInfo_34A3538 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
  bool CanNotSelect; // w0
  FilterKindList_c *v36; // x0
  ListViewSort_FilterKind_array *v37; // x21

  v4 = this;
  if ( (byte_4A0C60A & 1) == 0 )
  {
    sub_1B686D4(&FilterKindList_TypeInfo, sort);
    sub_1B686D4(&ListViewSort_FilterKind___TypeInfo, v5);
    sub_1B686D4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v6);
    this = (CombineServantListViewItem_o *)sub_1B686D4(&ServantEventBonusFilterController_TypeInfo, v7);
    byte_4A0C60A = 1;
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
                                           (const MethodInfo_34A3538 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                           (const MethodInfo_34A3538 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v12, 0LL) )
    goto LABEL_18;
  this = (CombineServantListViewItem_o *)sub_1B6877C(ListViewSort_FilterKind___TypeInfo, 1LL);
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
                                           (const MethodInfo_34A3538 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                           (const MethodInfo_34A3538 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
    sub_1B68930(this, sort);
  v19 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)this,
                                           (const MethodInfo_34A3538 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
        sub_1B68678(
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
        sub_1B68678(
          (ServantStatusBattleListViewItem_o *)&v4->fields.tdCategoryIdList,
          (int32_t)TreasureDeviceCategoryIdList,
          v29,
          v30);
      }
    }
    this = (CombineServantListViewItem_o *)sub_1B6877C(ListViewSort_FilterKind___TypeInfo, 1LL);
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
    this = (CombineServantListViewItem_o *)sub_1B6877C(ListViewSort_FilterKind___TypeInfo, 1LL);
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
  this = (CombineServantListViewItem_o *)sub_1B6877C(ListViewSort_FilterKind___TypeInfo, 1LL);
  if ( !this )
    goto LABEL_83;
  v13 = this;
  if ( !this->fields.sortIndex )
    goto LABEL_84;
  LODWORD(this->fields.sortValue0) = 39;
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)this, 0LL) )
    goto LABEL_48;
  this = (CombineServantListViewItem_o *)sub_1B6877C(ListViewSort_FilterKind___TypeInfo, 1LL);
  if ( !this )
    goto LABEL_83;
  v13 = this;
  if ( !this->fields.sortIndex )
LABEL_84:
    sub_1B68938(this, v13);
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
  v36 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v36 = FilterKindList_TypeInfo;
  }
  this = (CombineServantListViewItem_o *)v36->static_fields->RarityFilterKindList;
  if ( !this )
    goto LABEL_83;
  v37 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)this,
                                           (const MethodInfo_34A3538 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v37, 0LL)
      || ListViewSort__IsSelectedAllTargetFilters(sort, v37, 0LL)
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

  if ( (byte_4A0C608 & 1) == 0 )
  {
    sub_1B686D4(&FilterKindList_TypeInfo, sort);
    sub_1B686D4(&ListViewSort_FilterKind___TypeInfo, v5);
    sub_1B686D4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v6);
    sub_1B686D4(&ServantEventBonusFilterController_TypeInfo, v7);
    byte_4A0C608 = 1;
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
                                        (const MethodInfo_34A3538 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                             (const MethodInfo_34A3538 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                           (const MethodInfo_34A3538 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
    sub_1B68930(ClassGroupFilterKindList, sort);
  v15 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_34A3538 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
        sub_1B68678(
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
        sub_1B68678(
          (ServantStatusBattleListViewItem_o *)&this->fields.tdCategoryIdList,
          (int32_t)TreasureDeviceCategoryIdList,
          v29,
          v30);
      }
    }
    ClassGroupFilterKindList = sub_1B6877C(ListViewSort_FilterKind___TypeInfo, 1LL);
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
    ClassGroupFilterKindList = sub_1B6877C(ListViewSort_FilterKind___TypeInfo, 1LL);
    if ( !ClassGroupFilterKindList )
      goto LABEL_62;
    v17 = ClassGroupFilterKindList;
    if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
LABEL_63:
      sub_1B68938(ClassGroupFilterKindList, v17);
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
  ClassGroupFilterKindList = sub_1B6877C(ListViewSort_FilterKind___TypeInfo, 1LL);
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
                                           (const MethodInfo_34A3538 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
    sub_1B68930(0LL, method);
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
    sub_1B68930(0LL, method);
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

  if ( (byte_4A0C607 & 1) == 0 )
  {
    sub_1B686D4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
    byte_4A0C607 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame || (userSvtEntity = this->fields.userSvtEntity) == 0LL )
    sub_1B68930(SelfUserGame, v4);
  v6 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  pushUserSvtId = SelfUserGame->fields.pushUserSvtId;
  *(_OWORD *)&v9.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v9.fields.fakeValue = v6;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v8 = v9;
  this->fields.isPush = pushUserSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46242940(&v8, 0LL);
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
  unsigned __int64 v19; // x28
  struct System_Int32_array *v20; // x8
  struct System_Int32_array *svtSkillLvList; // x8
  System_Collections_Generic_List_int__o *v22; // x22
  struct System_Int32_array *v23; // x8
  __int64 v24; // x28
  unsigned __int64 v25; // x9
  unsigned __int64 v26; // x26
  struct System_Int32_array *v27; // x8
  int v28; // w23
  struct UserServantEntity_o *v29; // x8
  CombineAppendPassiveSkillMaster_o *v30; // x23
  __int64 v31; // x24
  __int64 v32; // x25
  struct System_Int32_array *svtSkillNumsList; // x8
  struct System_Int32_array *v34; // x9
  struct System_Int32_array *v35; // x8
  __int64 v36; // x8
  _QWORD *v37; // x9
  __int64 v38; // x10
  char *v39; // x8
  struct UserServantEntity_o *v40; // x8
  SvtAppendPassiveSkillUnlockMaster_o *v41; // x23
  __int64 v42; // x24
  __int64 v43; // x25
  struct System_Int32_array *v44; // x8
  struct System_Int32_array *v45; // x8
  struct System_Int32_array *items; // x8
  _QWORD *v47; // x9
  __int64 size; // x10
  __int64 v49; // x8
  CombineAppendPassiveSkillEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v51; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v52; // 0:x0.16

  if ( (byte_4A0C606 & 1) == 0 )
  {
    sub_1B686D4(&Method_DataManager_GetMaster_CombineAppendPassiveSkillMaster___, method);
    sub_1B686D4(&Method_DataManager_GetMaster_SkillMaster___, v3);
    sub_1B686D4(&Method_DataManager_GetMaster_SvtAppendPassiveSkillUnlockMaster___, v4);
    sub_1B686D4(&DataManager_TypeInfo, v5);
    sub_1B686D4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v6);
    sub_1B686D4(&Method_System_Linq_Enumerable_Any_int___, v7);
    sub_1B686D4(&Method_System_Collections_Generic_List_int__Add__, v8);
    sub_1B686D4(&Method_System_Collections_Generic_List_int___ctor__, v9);
    sub_1B686D4(&System_Collections_Generic_List_int__TypeInfo, v10);
    sub_1B686D4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    byte_4A0C606 = 1;
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
  v15 = *((_DWORD *)userSvtEntity + 24);
  this->fields.isAppendSkillLvMax = 1;
  svtUseSkillIdList = v14->fields.svtUseSkillIdList;
  if ( !svtUseSkillIdList )
    goto LABEL_70;
  v17 = 8LL;
  while ( 1 )
  {
    max_length = svtUseSkillIdList->max_length;
    v19 = v17 - 8;
    if ( v17 - 8 >= (int)max_length )
      break;
    if ( v19 >= max_length )
      goto LABEL_73;
    if ( *((int *)&svtUseSkillIdList->obj.klass + v17) >= 1 )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      userSvtEntity = DataManager__GetMaster_object_((const MethodInfo_2E49CFC *)Method_DataManager_GetMaster_SkillMaster___);
      v20 = v14->fields.svtUseSkillIdList;
      if ( !v20 )
        goto LABEL_70;
      if ( v19 >= v20->max_length )
        goto LABEL_73;
      if ( !userSvtEntity )
        goto LABEL_70;
      userSvtEntity = DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)userSvtEntity,
                        *((_DWORD *)&v20->obj.klass + v17),
                        (const MethodInfo_30E44C0 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
      svtSkillLvList = v14->fields.svtSkillLvList;
      if ( !svtSkillLvList )
        goto LABEL_70;
      if ( v19 >= svtSkillLvList->max_length )
LABEL_73:
        sub_1B68938(userSvtEntity, method);
      if ( !userSvtEntity )
        goto LABEL_70;
      if ( *((_DWORD *)&svtSkillLvList->obj.klass + v17) < *((_DWORD *)userSvtEntity + 10) )
      {
        this->fields.isAppendSkillLvMax = 0;
        break;
      }
      svtUseSkillIdList = v14->fields.svtUseSkillIdList;
    }
    ++v17;
    if ( !svtUseSkillIdList )
      goto LABEL_70;
  }
  v22 = (System_Collections_Generic_List_int__o *)sub_1B68920(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v22,
    (const MethodInfo_349EA00 *)Method_System_Collections_Generic_List_int___ctor__);
  v23 = v14->fields.svtUseSkillIdList;
  if ( !v23 )
LABEL_70:
    sub_1B68930(userSvtEntity, method);
  v24 = 8LL;
  while ( 1 )
  {
    v25 = v23->max_length;
    v26 = v24 - 8;
    if ( v24 - 8 >= (int)v25 )
      break;
    if ( v26 >= v25 )
      goto LABEL_73;
    if ( *((int *)&v23->obj.klass + v24) < 1 )
      goto LABEL_69;
    v27 = v14->fields.svtSkillLvList;
    if ( !v27 )
      goto LABEL_70;
    if ( v26 >= v27->max_length )
      goto LABEL_73;
    v28 = *((_DWORD *)&v27->obj.klass + v24);
    if ( DataManager_TypeInfo->_2.cctor_finished )
    {
      if ( v28 )
        goto LABEL_33;
    }
    else
    {
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      if ( v28 )
      {
LABEL_33:
        userSvtEntity = DataManager__GetMaster_object_((const MethodInfo_2E49CFC *)Method_DataManager_GetMaster_CombineAppendPassiveSkillMaster___);
        v29 = this->fields.userSvtEntity;
        if ( !v29 )
          goto LABEL_70;
        v30 = (CombineAppendPassiveSkillMaster_o *)userSvtEntity;
        v32 = *(_QWORD *)&v29->fields.svtId.fields.currentCryptoKey;
        v31 = *(_QWORD *)&v29->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v51.fields.currentCryptoKey = v32;
        *(_QWORD *)&v51.fields.fakeValue = v31;
        userSvtEntity = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(v51, 0LL);
        svtSkillNumsList = v14->fields.svtSkillNumsList;
        if ( !svtSkillNumsList )
          goto LABEL_70;
        if ( v26 >= svtSkillNumsList->max_length )
          goto LABEL_73;
        v34 = v14->fields.svtSkillLvList;
        if ( !v34 )
          goto LABEL_70;
        if ( v26 >= v34->max_length )
          goto LABEL_73;
        if ( !v30 )
          goto LABEL_70;
        userSvtEntity = (void *)CombineAppendPassiveSkillMaster__TryGetEntityWithTryNum(
                                  v30,
                                  &entity,
                                  (int32_t)userSvtEntity,
                                  *((_DWORD *)&svtSkillNumsList->obj.klass + v24),
                                  *((_DWORD *)&v34->obj.klass + v24),
                                  0LL);
        if ( ((unsigned __int8)userSvtEntity & 1) != 0 )
        {
          if ( !entity )
            goto LABEL_70;
          userSvtEntity = (void *)CombineUtility__CheckCombineNeedItemsEnough(
                                    this->fields.userSvtEntity,
                                    entity->fields.itemIds,
                                    entity->fields.itemNums,
                                    v15,
                                    entity->fields.qp,
                                    0LL);
          if ( ((unsigned __int8)userSvtEntity & 1) != 0 )
          {
            v35 = v14->fields.svtUseSkillIdList;
            if ( !v35 )
              goto LABEL_70;
            if ( v26 >= v35->max_length )
              goto LABEL_73;
            userSvtEntity = this->fields.enableAppendSkillUp;
            if ( !userSvtEntity )
              goto LABEL_70;
            method = (const MethodInfo *)*((unsigned int *)&v35->obj.klass + v24);
            v36 = *((_QWORD *)userSvtEntity + 2);
            v37 = Method_System_Collections_Generic_List_int__Add__;
            ++*((_DWORD *)userSvtEntity + 7);
            if ( !v36 )
              goto LABEL_70;
            v38 = *((int *)userSvtEntity + 6);
            if ( (unsigned int)v38 >= *(_DWORD *)(v36 + 24) )
            {
              v49 = v37[4];
LABEL_68:
              System_Collections_Generic_List_int___AddWithResize(
                (System_Collections_Generic_List_int__o *)userSvtEntity,
                (int32_t)method,
                *(const MethodInfo_349F254 **)(*(_QWORD *)(v49 + 192) + 112LL));
              goto LABEL_69;
            }
            v39 = (char *)(v36 + 4 * v38);
            *((_DWORD *)userSvtEntity + 6) = v38 + 1;
LABEL_65:
            *((_DWORD *)v39 + 8) = (_DWORD)method;
            goto LABEL_69;
          }
        }
        goto LABEL_69;
      }
    }
    userSvtEntity = DataManager__GetMaster_object_((const MethodInfo_2E49CFC *)Method_DataManager_GetMaster_SvtAppendPassiveSkillUnlockMaster___);
    v40 = this->fields.userSvtEntity;
    if ( !v40 )
      goto LABEL_70;
    v41 = (SvtAppendPassiveSkillUnlockMaster_o *)userSvtEntity;
    v43 = *(_QWORD *)&v40->fields.svtId.fields.currentCryptoKey;
    v42 = *(_QWORD *)&v40->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v52.fields.currentCryptoKey = v43;
    *(_QWORD *)&v52.fields.fakeValue = v42;
    userSvtEntity = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(v52, 0LL);
    v44 = v14->fields.svtSkillNumsList;
    if ( !v44 )
      goto LABEL_70;
    if ( v26 >= v44->max_length )
      goto LABEL_73;
    if ( !v41 )
      goto LABEL_70;
    userSvtEntity = SvtAppendPassiveSkillUnlockMaster__GetEntity(
                      v41,
                      (int32_t)userSvtEntity,
                      *((_DWORD *)&v44->obj.klass + v24),
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
        v45 = v14->fields.svtUseSkillIdList;
        if ( !v45 )
          goto LABEL_70;
        if ( v26 >= v45->max_length )
          goto LABEL_73;
        if ( !v22 )
          goto LABEL_70;
        method = (const MethodInfo *)*((unsigned int *)&v45->obj.klass + v24);
        items = v22->fields._items;
        v47 = Method_System_Collections_Generic_List_int__Add__;
        ++v22->fields._version;
        if ( !items )
          goto LABEL_70;
        size = v22->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          v49 = v47[4];
          userSvtEntity = v22;
          goto LABEL_68;
        }
        v39 = (char *)items + 4 * size;
        v22->fields._size = size + 1;
        goto LABEL_65;
      }
    }
LABEL_69:
    v23 = v14->fields.svtUseSkillIdList;
    ++v24;
    if ( !v23 )
      goto LABEL_70;
  }
  this->fields.isAppendSkillUpItemNum = System_Linq_Enumerable__Any_int_(
                                          (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.enableAppendSkillUp,
                                          (const MethodInfo_2E571F4 *)Method_System_Linq_Enumerable_Any_int___);
  this->fields.isAppendSkillOpenItemNum = System_Linq_Enumerable__Any_int_(
                                            (System_Collections_Generic_IEnumerable_TSource__o *)v22,
                                            (const MethodInfo_2E571F4 *)Method_System_Linq_Enumerable_Any_int___);
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
  __int64 v12; // x1
  int32_t v13; // w2
  int32_t v14; // w3
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass *v18; // x1
  Il2CppClass **v19; // x0
  int data; // w24
  int32_t v21; // w21
  __int64 v22; // x8
  int v23; // w9
  int v24; // w11

  if ( (byte_4A0C60C & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__, eventCampaignEntities);
    sub_1B686D4(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__, v5);
    sub_1B686D4(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Count__, v6);
    sub_1B686D4(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__, v7);
    sub_1B686D4(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo, v8);
    byte_4A0C60C = 1;
  }
  this->fields.isCombineExpCampaignTarget = 0;
  this->fields.combineExpCampaignValue = 0.0;
  if ( !eventCampaignEntities || this->fields.type )
    return;
  v9 = (System_Collections_Generic_List_object__o *)sub_1B68920(System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_34BBA44 *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
  if ( eventCampaignEntities->fields._size >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      Item = (Il2CppClass *)System_Collections_Generic_List_object___get_Item(
                              (System_Collections_Generic_List_object__o *)eventCampaignEntities,
                              v10,
                              (const MethodInfo_34BBFA8 *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
      if ( !Item )
        break;
      if ( HIDWORD(Item->_1.name) == 2 )
        goto LABEL_11;
      Item = (Il2CppClass *)System_Collections_Generic_List_object___get_Item(
                              (System_Collections_Generic_List_object__o *)eventCampaignEntities,
                              v10,
                              (const MethodInfo_34BBFA8 *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
      if ( !Item )
        break;
      if ( HIDWORD(Item->_1.name) == 27 )
      {
LABEL_11:
        Item = (Il2CppClass *)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)eventCampaignEntities,
                                v10,
                                (const MethodInfo_34BBFA8 *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
        if ( !v9 )
          break;
        items = v9->fields._items;
        v16 = Method_System_Collections_Generic_List_EventCampaignEntity__Add__;
        ++v9->fields._version;
        if ( !items )
          break;
        size = v9->fields._size;
        v18 = Item;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v9,
            (Il2CppObject *)Item,
            *(const MethodInfo_34BC278 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
        }
        else
        {
          v19 = &items->obj.klass + size;
          v9->fields._size = size + 1;
          v19[4] = v18;
          sub_1B68678((ServantStatusBattleListViewItem_o *)(v19 + 4), (int32_t)v18, v13, v14);
        }
      }
      if ( ++v10 >= eventCampaignEntities->fields._size )
        goto LABEL_17;
    }
LABEL_44:
    sub_1B68930(Item, v12);
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
  v21 = 0;
  while ( 1 )
  {
    Item = (Il2CppClass *)System_Collections_Generic_List_object___get_Item(
                            v9,
                            v21,
                            (const MethodInfo_34BBFA8 *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
    if ( !Item )
      goto LABEL_44;
    if ( HIDWORD(Item->_1.name) == 27 )
      break;
    Item = (Il2CppClass *)System_Collections_Generic_List_object___get_Item(
                            v9,
                            v21,
                            (const MethodInfo_34BBFA8 *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
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
          sub_1B68938(Item, v12);
        if ( this->fields.svtId == *(_DWORD *)(v22 + 4LL * v24 + 32) )
          break;
        if ( v23 == ++v24 )
          goto LABEL_37;
      }
      this->fields.isCombineExpCampaignTarget = 1;
      Item = (Il2CppClass *)System_Collections_Generic_List_object___get_Item(
                              v9,
                              v21,
                              (const MethodInfo_34BBFA8 *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
      if ( !Item )
        goto LABEL_44;
      if ( SLODWORD(Item->_1.this_arg.data) > data )
      {
        Item = (Il2CppClass *)System_Collections_Generic_List_object___get_Item(
                                v9,
                                v21,
                                (const MethodInfo_34BBFA8 *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
        if ( !Item )
          goto LABEL_44;
        data = (int)Item->_1.this_arg.data;
      }
    }
LABEL_37:
    if ( ++v21 >= v9->fields._size )
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
                          v21,
                          (const MethodInfo_34BBFA8 *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
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
  sub_1B68678(
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

  if ( (byte_4A0C605 & 1) == 0 )
  {
    sub_1B686D4(&Method_DataManager_GetMasterData_CombineSkillMaster___, method);
    sub_1B686D4(&Method_DataManager_GetMasterData_SkillMaster___, v3);
    sub_1B686D4(&Method_DataManager_GetMasterData_UserItemMaster___, v4);
    sub_1B686D4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v5);
    sub_1B686D4(&Method_System_Collections_Generic_List_int__Add__, v6);
    sub_1B686D4(&Method_System_Collections_Generic_List_int__get_Count__, v7);
    sub_1B686D4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_1B686D4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4A0C605 = 1;
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
        SelfUserGame = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !SelfUserGame )
          goto LABEL_60;
        SelfUserGame = (__int64)DataManager__GetMasterData_object_(
                                  (DataManager_o *)SelfUserGame,
                                  (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_SkillMaster___);
        if ( !SelfUserGame )
          goto LABEL_60;
        SelfUserGame = (__int64)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)SelfUserGame,
                                  v18,
                                  (const MethodInfo_30E44C0 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
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
  SelfUserGame = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_60;
  SelfUserGame = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)SelfUserGame,
                            (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_CombineSkillMaster___);
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
          SelfUserGame = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !SelfUserGame )
            goto LABEL_60;
          SelfUserGame = (__int64)DataManager__GetMasterData_object_(
                                    (DataManager_o *)SelfUserGame,
                                    (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_UserItemMaster___);
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
              SelfUserGame = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46242940(&v43, 0LL);
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
                *(const MethodInfo_349F254 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
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
    sub_1B68938(SelfUserGame, v11);
  }
LABEL_58:
  enableSkillUp = this->fields.enableSkillUp;
  if ( !enableSkillUp )
LABEL_60:
    sub_1B68930(SelfUserGame, v11);
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
  int32_t v22; // w2
  int32_t v23; // w3
  int32_t bonusKind2; // w8
  int32_t v25; // w2
  int32_t bonusKind2Id; // w8
  struct ListViewManager_o *v27; // x8
  __int64 v28; // x11
  UnityEngine_Object_o *v29; // x21
  int32_t v30; // w8
  int32_t v31; // w8
  bool IsEnableServant; // w0
  Il2CppObject *MasterData_object; // x0
  int32_t svtId; // w22
  ServantFilterMaster_o *v35; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v36; // kr00_16
  System_Collections_Generic_List_EventGroupEntity__o *EntitiesByGroupId; // x22
  int32_t v38; // w2
  int32_t v39; // w3
  struct ListViewManager_o *manager; // x8
  CombineServantListViewManager_c *v41; // x9
  __int64 v42; // x10
  struct ListViewManager_o *v43; // x11
  int32_t v44; // w8
  struct UserServantEntity_o *v45; // x8
  __int128 v46; // q1
  int32_t bonusKindId; // w22
  int64_t v48; // x0
  int32_t v49; // w1
  ServantStatusBattleListViewItem_o *v50; // x0
  System_Func_object__bool__o *v51; // x23
  const MethodInfo *v52; // x2
  _BOOL4 isChoice; // w11
  _BOOL4 isLock; // w23
  _BOOL4 v55; // w21
  int64_t *p_sortValue0; // x22
  __int64 v57; // x8
  unsigned int v58; // w8
  __int64 v59; // x8
  int32_t type; // w8
  __int64 v61; // x8
  int32_t rarity; // w8
  int64_t v63; // x8
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v65; // q1
  struct UserServantEntity_o *v66; // x8
  IconLabelInfo_o *iconLabelInfo1; // x20
  int32_t v68; // w21
  struct UserServantEntity_o *v69; // x8
  int32_t v70; // w8
  IconLabelInfo_o *v71; // x20
  struct UserServantEntity_o *v72; // x8
  int64_t v73; // x20
  struct IconLabelInfo_o *v74; // x21
  int32_t v75; // w3
  IconLabelInfo_o *v76; // x0
  int32_t v77; // w2
  unsigned int v78; // w8
  IconLabelInfo_o *v79; // x20
  struct UserServantEntity_o *v80; // x8
  int64_t hp; // x2
  int32_t adjustHp; // w3
  int32_t v83; // w1
  struct UserServantEntity_o *v84; // x8
  struct IconLabelInfo_o *v85; // x19
  struct ServantEntity_o *servantEntity; // x8
  int64_t cost; // x2
  int32_t lv; // w20
  int64_t friendship; // x2
  int32_t friendshipMax; // w3
  int32_t v91; // w1
  __int64 methodPtr_low; // x10
  struct ServantEntity_o *v93; // x8
  __int64 collectionNo; // x10
  struct UserServantEntity_o *v95; // x8
  int32_t v96; // w21
  __int64 v97; // x9
  bool v98; // zf
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v100; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v101; // [xsp+30h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v102; // [xsp+50h] [xbp-60h]
  int32_t tdMaxLv[2]; // [xsp+78h] [xbp-38h] BYREF

  if ( (byte_4A0C60B & 1) == 0 )
  {
    sub_1B686D4(&Method_BasicHelper_Any_EventGroupEntity___, sort);
    sub_1B686D4(&CombineServantListViewManager_TypeInfo, v5);
    sub_1B686D4(&Method_DataManager_GetMasterData_ServantFilterMaster___, v6);
    sub_1B686D4(&Method_DataManager_GetMaster_EventCampaignMaster___, v7);
    sub_1B686D4(&Method_DataManager_GetMaster_EventGroupMaster___, v8);
    sub_1B686D4(&DataManager_TypeInfo, v9);
    sub_1B686D4(&System_Func_EventGroupEntity__bool__TypeInfo, v10);
    sub_1B686D4(&Method_System_Collections_Generic_List_EventGroupEntity__get_Count__, v11);
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v12);
    sub_1B686D4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
    sub_1B686D4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v14);
    sub_1B686D4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_1B686D4(&TutorialFlag_TypeInfo, v16);
    sub_1B686D4(&Method_CombineServantListViewItem___c__DisplayClass114_0__SetSortValue_b__0__, v17);
    sub_1B686D4(&CombineServantListViewItem___c__DisplayClass114_0_TypeInfo, v18);
    byte_4A0C60B = 1;
  }
  *(_QWORD *)tdMaxLv = 0LL;
  v19 = sub_1B68920(CombineServantListViewItem___c__DisplayClass114_0_TypeInfo);
  CombineServantListViewItem___c__DisplayClass114_0___ctor(
    (CombineServantListViewItem___c__DisplayClass114_0_o *)v19,
    0LL);
  if ( !v19 )
    goto LABEL_293;
  *(_QWORD *)(v19 + 16) = this;
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v19 + 16), (int32_t)this, v22, v23);
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
      if ( !CombineServantListViewItem__IsMatchMaterialFilter(this, sort, v52) )
        goto LABEL_104;
      goto LABEL_78;
    }
    if ( !type )
    {
      if ( !CombineServantListViewItem__IsMatchBaseServantFilter(this, sort, v52) )
        goto LABEL_104;
LABEL_78:
      isChoice = this->fields.isChoice;
      iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo2;
      if ( this->fields.isSwapLock )
        isLock = !this->fields.isLock;
      else
        isLock = this->fields.isLock;
      if ( this->fields.isSwapChoice )
        v55 = !isChoice;
      else
        v55 = isChoice;
      if ( !iconLabelInfo2 )
        goto LABEL_293;
      IconLabelInfo__Clear((IconLabelInfo_o *)iconLabelInfo2, 0LL);
      this->fields.sortValue0 = 0LL;
      p_sortValue0 = &this->fields.sortValue0;
      this->fields.sortValue0B = 0LL;
      if ( !sort->fields.isSmartSort )
      {
        if ( v55 && sort->fields.isChoiceSort )
        {
          v58 = this->fields.type;
          if ( v58 <= 0xB )
          {
            if ( ((1 << v58) & 0xFDD) != 0 )
              v59 = 10LL;
            else
LABEL_124:
              v59 = -10LL;
            *p_sortValue0 = v59;
          }
        }
LABEL_189:
        iconLabelInfo2 = 1LL;
        switch ( sort->fields.sortKind )
        {
          case 0:
            iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
            v63 = !this->fields.isParty;
            goto LABEL_225;
          case 1:
            userSvtEntity = this->fields.userSvtEntity;
            if ( !userSvtEntity )
              break;
            v65 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
            *(_OWORD *)&v102.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v102.fields.fakeValue = v65;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v100 = v102;
            iconLabelInfo2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46242940(&v100, 0LL);
            v66 = this->fields.userSvtEntity;
            this->fields.sortValue1 = iconLabelInfo2;
            if ( !v66 )
              break;
            iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
            if ( !iconLabelInfo2 )
              break;
            IconLabelInfo__SetTime((IconLabelInfo_o *)iconLabelInfo2, 49, v66->fields.createdAt, 0, 0, 0, 0LL);
            goto LABEL_219;
          case 2:
            iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
            this->fields.sortValue1 = this->fields.rarity;
            if ( !iconLabelInfo2 )
              break;
            iconLabelInfo1 = this->fields.iconLabelInfo1;
            v68 = *(_DWORD *)(iconLabelInfo2 + 256);
            iconLabelInfo2 = UserServantEntity__getLevelMax((UserServantEntity_o *)iconLabelInfo2, 0LL);
            v69 = this->fields.userSvtEntity;
            if ( !v69 || !iconLabelInfo1 )
              break;
            IconLabelInfo__Set_37887348(iconLabelInfo1, 2, v68, iconLabelInfo2, 0, 0, 0, v69->fields.lv, 0LL);
            v70 = this->fields.type;
            if ( v70 != 10 && v70 != 7 )
              goto LABEL_260;
            iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
            if ( !iconLabelInfo2 )
              break;
            v71 = this->fields.iconLabelInfo2;
            iconLabelInfo2 = UserServantEntity__getRarity((UserServantEntity_o *)iconLabelInfo2, 0LL);
            v72 = this->fields.userSvtEntity;
            if ( !v72 || !v71 )
              break;
            IconLabelInfo__Set_37887348(v71, 36, iconLabelInfo2, v72->fields.exceedCount, 0, 0, 0, v72->fields.lv, 0LL);
            goto LABEL_260;
          case 3:
            iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
            if ( !iconLabelInfo2 )
              break;
            v73 = *(int *)(iconLabelInfo2 + 256);
            v74 = this->fields.iconLabelInfo1;
            this->fields.sortValue1 = v73;
            iconLabelInfo2 = UserServantEntity__getLevelMax((UserServantEntity_o *)iconLabelInfo2, 0LL);
            if ( !v74 )
              break;
            v75 = iconLabelInfo2;
            v76 = v74;
            v77 = v73;
            goto LABEL_230;
          case 4:
            iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
            if ( !iconLabelInfo2 )
              break;
            v78 = this->fields.type & 0xFFFFFFFE;
            this->fields.sortValue1 = *(int *)(iconLabelInfo2 + 292);
            if ( v78 == 4 )
            {
              v79 = this->fields.iconLabelInfo1;
            }
            else
            {
              UserServantEntity__getTreasureDeviceInfo_39946160(
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
              v91 = 33;
LABEL_247:
              IconLabelInfo__Set_37887348(
                (IconLabelInfo_o *)iconLabelInfo2,
                v91,
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
              v79 = this->fields.iconLabelInfo2;
            }
            v96 = *(_DWORD *)(iconLabelInfo2 + 256);
            iconLabelInfo2 = UserServantEntity__getLevelMax((UserServantEntity_o *)iconLabelInfo2, 0LL);
            if ( v79 )
            {
              IconLabelInfo__Set_37887348(v79, 2, v96, iconLabelInfo2, 0, 0, 0, 0, 0LL);
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
            v80 = this->fields.userSvtEntity;
            if ( !v80 )
              break;
            hp = v80->fields.hp;
            iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
            this->fields.sortValue1 = hp;
            if ( !iconLabelInfo2 )
              break;
            adjustHp = v80->fields.adjustHp;
            v83 = 3;
            goto LABEL_218;
          case 6:
            v84 = this->fields.userSvtEntity;
            if ( !v84 )
              break;
            hp = v84->fields.atk;
            iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
            this->fields.sortValue1 = hp;
            if ( !iconLabelInfo2 )
              break;
            adjustHp = v84->fields.adjustAtk;
            v83 = 5;
LABEL_218:
            IconLabelInfo__Set_37887348((IconLabelInfo_o *)iconLabelInfo2, v83, hp, adjustHp, 0, 0, 0, 0, 0LL);
LABEL_219:
            iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
            if ( !iconLabelInfo2 )
              break;
            v85 = this->fields.iconLabelInfo2;
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
            IconLabelInfo__Set_37887348((IconLabelInfo_o *)iconLabelInfo2, 7, cost, 0, 0, 0, 0, 0, 0LL);
            goto LABEL_248;
          case 8:
            iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
            v63 = -this->fields.priority;
LABEL_225:
            this->fields.sortValue1 = v63;
            if ( !iconLabelInfo2 )
              break;
            v85 = this->fields.iconLabelInfo1;
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
            v91 = 32;
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
            v93 = this->fields.servantEntity;
            if ( !v93 )
              break;
            collectionNo = v93->fields.collectionNo;
            v95 = this->fields.userSvtEntity;
            this->fields.sortValue1 = (((unsigned __int64)(unsigned int)this->fields.rarity << 32)
                                     + (iconLabelInfo2 << 48)) | collectionNo;
            if ( !v95 )
              break;
            v85 = this->fields.iconLabelInfo1;
            lv = v95->fields.lv;
            iconLabelInfo2 = (int64_t)v95;
LABEL_228:
            iconLabelInfo2 = UserServantEntity__getLevelMax((UserServantEntity_o *)iconLabelInfo2, 0LL);
            if ( !v85 )
              break;
            v75 = iconLabelInfo2;
            v76 = v85;
            v77 = lv;
LABEL_230:
            IconLabelInfo__Set_37887348(v76, 2, v77, v75, 0, 0, 0, 0, 0LL);
            goto LABEL_260;
          case 0xF:
            friendship = this->fields.hpReinforceValue;
            iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
            this->fields.isDispHpStatusUpInfo = 1;
            this->fields.sortValue1 = friendship;
            if ( !iconLabelInfo2 )
              break;
            friendshipMax = this->fields.nowMaxHpReinforceValue;
            v91 = 44;
            goto LABEL_247;
          case 0x10:
            friendship = this->fields.atkReinforceValue;
            iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
            this->fields.isDispAtkStatusUpInfo = 1;
            this->fields.sortValue1 = friendship;
            if ( !iconLabelInfo2 )
              break;
            friendshipMax = this->fields.nowMaxAtkReinforceValue;
            v91 = 45;
            goto LABEL_247;
          default:
            return iconLabelInfo2;
        }
LABEL_293:
        sub_1B68930(iconLabelInfo2, v21);
      }
      switch ( this->fields.type )
      {
        case 0:
          if ( this->fields.isHeroineSvt )
          {
            if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
            if ( TutorialFlag__Get_37438804(126, 0LL) )
              goto LABEL_163;
          }
          if ( this->fields.isParty )
          {
            v57 = 20LL;
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
              v61 = -120LL;
            }
            else
            {
              v61 = -5LL;
              if ( !isLock && !v55 )
                v61 = 30LL;
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
                  v61 = -90LL;
                  if ( !this->fields.isAtkSecondUpMax && this->fields.isAtkUpMax )
                    v61 = 90LL;
                  goto LABEL_281;
                }
                v97 = 70LL;
                v98 = !this->fields.isAtkUpMax;
                v61 = -110LL;
              }
              else
              {
                if ( rarity == 4 )
                {
                  v61 = -80LL;
                  if ( !this->fields.isHpSecondUpMax && this->fields.isHpUpMax )
                    v61 = 100LL;
LABEL_281:
                  *p_sortValue0 = v61;
                  if ( isLock || v55 )
                    v61 = -5LL;
                  goto LABEL_283;
                }
                v97 = 80LL;
                v98 = !this->fields.isHpUpMax;
                v61 = -100LL;
              }
              if ( v98 )
                v61 = v97;
              goto LABEL_281;
            }
            v61 = -150LL;
          }
          else
          {
            if ( !CombineServantListViewItem__get_IsCanNotSelectMaterial(this, v21) )
            {
LABEL_284:
              if ( this->fields.isFortification )
                *p_sortValue0 = -10LL;
              if ( v55 && sort->fields.isChoiceSort )
                *(_OWORD *)p_sortValue0 = xmmword_BA5D30;
              goto LABEL_189;
            }
            if ( this->fields.isLimitCntTarget )
            {
              v61 = -20LL;
            }
            else if ( this->fields.isParty )
            {
              v61 = -30LL;
            }
            else if ( this->fields.isUseSupport )
            {
              v61 = -40LL;
            }
            else
            {
              v61 = -10LL;
              if ( this->fields.isUseRecommendSupport )
                v61 = -50LL;
            }
          }
LABEL_283:
          *p_sortValue0 = v61;
          goto LABEL_284;
        case 2:
          if ( this->fields.isSealCombineLimit )
          {
            v57 = 0LL;
            goto LABEL_186;
          }
          if ( !CombineServantListViewItem__get_IsCanNotBaseSelect(this, v21)
            && this->fields.isLimitUpItemNum
            && this->fields.isLvMax )
          {
LABEL_183:
            v57 = 10LL;
            goto LABEL_186;
          }
          if ( this->fields.isHeroineSvt )
          {
LABEL_185:
            v57 = -10LL;
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
            if ( TutorialFlag__Get_37438804(126, 0LL) )
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
          if ( v55 && sort->fields.isChoiceSort || this->fields.isFortification )
            goto LABEL_124;
          goto LABEL_189;
        case 6:
          if ( !CombineServantListViewItem__get_IsCanNotBaseSelect(this, v21)
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
          if ( !TutorialFlag__Get_37438804(126, 0LL) )
            goto LABEL_187;
          goto LABEL_163;
        case 8:
          if ( !CombineServantListViewItem__get_IsCanNotBaseSelect(this, v21)
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
          if ( !CombineServantListViewItem__get_IsCanNotBaseSelect(this, v21) )
            goto LABEL_183;
          if ( this->fields.isHeroineSvt )
            goto LABEL_185;
          if ( this->fields.isSealCombineLimit )
          {
LABEL_161:
            v57 = -15LL;
          }
          else if ( this->fields.isLimitCntMax )
          {
LABEL_163:
            v57 = -20LL;
          }
          else
          {
            if ( !this->fields.isEventJoin )
              goto LABEL_187;
LABEL_155:
            v57 = -30LL;
          }
LABEL_186:
          *p_sortValue0 = v57;
LABEL_187:
          if ( v55 && sort->fields.isChoiceSort )
            this->fields.sortValue0B = 10LL;
          goto LABEL_189;
        case 0xA:
          if ( this->fields.isHeroineSvt )
          {
            if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
            if ( TutorialFlag__Get_37438804(126, 0LL) )
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
            if ( TutorialFlag__Get_37438804(126, 0LL) )
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
    if ( CombineServantListViewItem__IsMatchServantFilter(this, sort, v52) )
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
        iconLabelInfo2 = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E49CFC *)Method_DataManager_GetMaster_EventGroupMaster___);
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
              v41 = CombineServantListViewManager_TypeInfo;
              v42 = LOBYTE(CombineServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
              if ( LOBYTE(manager->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v42 )
              {
                if ( (CombineServantListViewManager_c *)manager->klass->_2.typeHierarchy[v42 - 1] == CombineServantListViewManager_TypeInfo )
                  v43 = sort->fields.manager;
                else
                  v43 = 0LL;
              }
              else
              {
                v43 = 0LL;
              }
              *(_QWORD *)(v19 + 24) = v43;
              v50 = (ServantStatusBattleListViewItem_o *)(v19 + 24);
              if ( LOBYTE(manager->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v42 )
              {
                if ( (CombineServantListViewManager_c *)manager->klass->_2.typeHierarchy[v42 - 1] == v41 )
                  v49 = (int)manager;
                else
                  v49 = 0;
              }
              else
              {
                v49 = 0;
              }
            }
            else
            {
              v49 = 0;
              *(_QWORD *)(v19 + 24) = 0LL;
              v50 = (ServantStatusBattleListViewItem_o *)(v19 + 24);
            }
            sub_1B68678(v50, v49, v38, v39);
            v51 = (System_Func_object__bool__o *)sub_1B68920(System_Func_EventGroupEntity__bool__TypeInfo);
            System_Func_object__bool____ctor(
              v51,
              (Il2CppObject *)v19,
              Method_CombineServantListViewItem___c__DisplayClass114_0__SetSortValue_b__0__,
              0LL);
            this->fields.isEventUpVal = BasicHelper__Any_object_(
                                          (System_Collections_Generic_List_T__o *)EntitiesByGroupId,
                                          (System_Func_T__bool__o *)v51,
                                          (const MethodInfo_2E35150 *)Method_BasicHelper_Any_EventGroupEntity___);
          }
        }
        goto LABEL_75;
      case 2:
        v27 = sort->fields.manager;
        if ( v27
          && (v28 = LOBYTE(CombineServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr),
              LOBYTE(v27->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v28) )
        {
          if ( (CombineServantListViewManager_c *)v27->klass->_2.typeHierarchy[v28 - 1] == CombineServantListViewManager_TypeInfo )
            v29 = (UnityEngine_Object_o *)sort->fields.manager;
          else
            v29 = 0LL;
        }
        else
        {
          v29 = 0LL;
        }
        if ( this->fields.bonusKind == 2 )
        {
          v44 = sort->fields.bonusKind2Id;
          if ( this->fields.bonusKindId == v44 )
            goto LABEL_75;
        }
        else
        {
          v44 = sort->fields.bonusKind2Id;
        }
        this->fields.bonusKindId = v44;
        this->fields.bonusKind = 2;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        iconLabelInfo2 = UnityEngine_Object__op_Implicit(v29, 0LL);
        if ( (iconLabelInfo2 & 1) != 0 )
        {
          if ( !v29 )
            goto LABEL_293;
          iconLabelInfo2 = CombineServantListViewManager__IsLargeSuccessCampaignClassId(
                             (CombineServantListViewManager_o *)v29,
                             this->fields.bonusKindId,
                             this->fields.svtId,
                             0LL);
          v45 = this->fields.userSvtEntity;
          this->fields.isEventUpVal = iconLabelInfo2 & 1;
          if ( !v45 )
            goto LABEL_293;
          v46 = *(_OWORD *)&v45->fields.id.fields.fakeValue;
          bonusKindId = this->fields.bonusKindId;
          *(_OWORD *)&v102.fields.currentCryptoKey = *(_OWORD *)&v45->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v102.fields.fakeValue = v46;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v101 = v102;
          v48 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46242940(&v101, 0LL);
          if ( CombineServantListViewManager__IsExchangeSvtExist(
                 (CombineServantListViewManager_o *)v29,
                 bonusKindId,
                 v48,
                 0LL) )
          {
            goto LABEL_76;
          }
        }
        goto LABEL_75;
      case 3:
        if ( this->fields.bonusKind == 3 )
        {
          v30 = sort->fields.bonusKind2Id;
          if ( this->fields.bonusKindId == v30 )
            goto LABEL_75;
        }
        else
        {
          v30 = sort->fields.bonusKind2Id;
        }
        this->fields.bonusKindId = v30;
        this->fields.bonusKind = 3;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        iconLabelInfo2 = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E49CFC *)Method_DataManager_GetMaster_EventCampaignMaster___);
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
          v25 = sort->fields.bonusKind2Id;
          if ( this->fields.bonusKindId == v25 )
            goto LABEL_75;
        }
        else
        {
          v25 = sort->fields.bonusKind2Id;
        }
        iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
        this->fields.bonusKind = bonusKind2;
        this->fields.bonusKindId = v25;
        if ( !iconLabelInfo2 )
          goto LABEL_293;
        IsEnableServant = UserServantEntity__getEventUpVal_39938928(
                            (UserServantEntity_o *)iconLabelInfo2,
                            this->fields.setupInfo,
                            v25,
                            0LL,
                            0LL);
        goto LABEL_37;
      case 7:
        if ( this->fields.bonusKind == 7 )
        {
          v31 = sort->fields.bonusKind2Id;
          if ( this->fields.bonusKindId == v31 )
          {
LABEL_75:
            if ( !this->fields.isEventUpVal )
              break;
            goto LABEL_76;
          }
        }
        else
        {
          v31 = sort->fields.bonusKind2Id;
        }
        this->fields.bonusKindId = v31;
        this->fields.bonusKind = 7;
        iconLabelInfo2 = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !iconLabelInfo2 )
          goto LABEL_293;
        MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)iconLabelInfo2,
                              (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_ServantFilterMaster___);
        svtId = this->fields.svtId;
        v35 = (ServantFilterMaster_o *)MasterData_object;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        v36 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(svtId, 0LL);
        v21 = *(const MethodInfo **)&v36.fields.fakeValue;
        iconLabelInfo2 = *(_QWORD *)&v36.fields.currentCryptoKey;
        if ( !v35 )
          goto LABEL_293;
        IsEnableServant = ServantFilterMaster__IsEnableServant(v35, v36, this->fields.bonusKindId, 0LL);
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

  if ( (byte_4A0C616 & 1) == 0 )
  {
    sub_1B686D4(&StringLiteral_15161/*"UserSvt "*/, method);
    byte_4A0C616 = 1;
  }
  NameText = CombineServantListViewItem__get_NameText(this, method);
  return System_String__Concat_61419468((System_String_o *)StringLiteral_15161/*"UserSvt "*/, NameText, 0LL);
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

  if ( (byte_4A0C612 & 1) == 0 )
  {
    sub_1B686D4(&LocalizationManager_TypeInfo, method);
    sub_1B686D4(&StringLiteral_18984/*"error"*/, v3);
    byte_4A0C612 = 1;
  }
  servantEntity = this->fields.servantEntity;
  if ( !servantEntity )
    return (System_String_o *)StringLiteral_18984/*"error"*/;
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
  if ( (byte_4A0C613 & 1) == 0 )
  {
    sub_1B686D4(&StringLiteral_1/*""*/, method);
    byte_4A0C613 = 1;
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
    sub_1B68930(0LL, method);
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

  if ( (byte_4A0C614 & 1) == 0 )
  {
    sub_1B686D4(&TutorialFlag_TypeInfo, method);
    byte_4A0C614 = 1;
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
    if ( TutorialFlag__Get_37438804(126, 0LL) )
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
        result = TutorialFlag__Get_37438804(126, 0LL) || this->fields.isSkillLvMax;
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
            if ( TutorialFlag__Get_37438804(126, 0LL) )
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
      if ( TutorialFlag__Get_37438804(126, 0LL) )
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
      return TutorialFlag__Get_37438804(126, 0LL);
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

  if ( (byte_4A0C615 & 1) == 0 )
  {
    sub_1B686D4(&TutorialFlag_TypeInfo, method);
    byte_4A0C615 = 1;
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
    if ( TutorialFlag__Get_37438804(126, 0LL) )
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
    sub_1B68930(v6, v5);
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
    sub_1B68930(0LL, method);
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
    sub_1B68930(0LL, method);
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
    sub_1B68930(0LL, method);
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
    sub_1B68930(0LL, method);
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

  if ( (byte_4A0C610 & 1) == 0 )
  {
    sub_1B686D4(&LocalizationManager_TypeInfo, method);
    sub_1B686D4(&StringLiteral_18984/*"error"*/, v3);
    byte_4A0C610 = 1;
  }
  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    return (System_String_o *)StringLiteral_18984/*"error"*/;
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
  if ( (byte_4A0C60F & 1) == 0 )
  {
    sub_1B686D4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    this = (CombineServantListViewItem_o *)sub_1B686D4(&StringLiteral_18984/*"error"*/, v3);
    byte_4A0C60F = 1;
  }
  servantEntity = v2->fields.servantEntity;
  if ( !servantEntity )
    return (System_String_o *)StringLiteral_18984/*"error"*/;
  userSvtEntity = v2->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_1B68930(this, method);
  v7 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.currentCryptoKey;
  v6 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v10.fields.currentCryptoKey = v7;
  *(_QWORD *)&v10.fields.fakeValue = v6;
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(v10, 0LL);
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

  if ( (byte_4A0C611 & 1) == 0 )
  {
    sub_1B686D4(&LocalizationManager_TypeInfo, method);
    byte_4A0C611 = 1;
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

  if ( (byte_4A0C617 & 1) == 0 )
  {
    sub_1B686D4(&Method_DataManager_GetMaster_SvtCoinMaster___, method);
    sub_1B686D4(&DataManager_TypeInfo, v3);
    sub_1B686D4(&Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__GetEntity__, v4);
    byte_4A0C617 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E49CFC *)Method_DataManager_GetMaster_SvtCoinMaster___);
  if ( !Master_object )
    sub_1B68930(0LL, v6);
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             this->fields.svtId,
             (const MethodInfo_30E44C0 *)Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__GetEntity__);
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

  if ( (byte_4A0C618 & 1) == 0 )
  {
    sub_1B686D4(&Method_DataManager_GetMaster_UserSvtCoinMaster___, method);
    sub_1B686D4(&DataManager_TypeInfo, v3);
    sub_1B686D4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_1B686D4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5);
    byte_4A0C618 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E49CFC *)Method_DataManager_GetMaster_UserSvtCoinMaster___);
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
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46242940(&v16, 0LL);
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
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(v19, 0LL);
  if ( !v10 )
    goto LABEL_17;
  Master_object = UserSvtCoinMaster__TryGetEntity(v10, &entity, v12, Master_object, 0LL);
  if ( (Master_object & 1) != 0 )
  {
    if ( entity )
      return entity->fields.num;
LABEL_17:
    sub_1B68930(Master_object, v7);
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
  if ( (byte_4A0C60D & 1) == 0 )
  {
    sub_1B686D4(&Method_DataManager_GetMasterData_UserServantMaster___, method);
    sub_1B686D4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v3);
    sub_1B686D4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v4);
    this = (CombineServantListViewItem_o *)sub_1B686D4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4A0C60D = 1;
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
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46242940(&v15, 0LL);
  this = (CombineServantListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (this = (CombineServantListViewItem_o *)DataManager__GetMasterData_object_(
                                                 (DataManager_o *)this,
                                                 (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
  {
LABEL_9:
    sub_1B68930(this, method);
  }
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             v10,
             (const MethodInfo_30E466C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  p_userSvtEntity->klass = (ServantStatusBattleListViewItem_c *)Entity;
  sub_1B68678(p_userSvtEntity, (int32_t)Entity, v12, v13);
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
  if ( (byte_4A0C60E & 1) == 0 )
  {
    this = (CombineServantListViewItem_o *)sub_1B686D4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
    byte_4A0C60E = 1;
  }
  userSvtEntity = v2->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_1B68930(this, method);
  v4 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v7.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v7.fields.fakeValue = v4;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v6 = v7;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46242940(&v6, 0LL);
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
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.userSvtEntity, (int32_t)entity, (int32_t)method, v3);
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
    sub_1B68930(0LL, value);
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
    sub_1B68930(0LL, value);
  this->fields.dragSelectNum = value - 1;
}


void __fastcall CombineServantListViewItem__set_IsHpStatusMax(
        CombineServantListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  if ( !this )
    sub_1B68930(0LL, value);
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
    sub_1B68930(0LL, value);
  this->fields.isNotSelectSecondStatusUpAtk = this->fields.atkBase > 0 && value;
}


void __fastcall CombineServantListViewItem__set_IsSecondHpStatusMax(
        CombineServantListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  if ( !this )
    sub_1B68930(0LL, value);
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
  sub_1B68678(
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

  if ( (byte_4A0C61C & 1) == 0 )
  {
    sub_1B686D4(&Method_DataManager_GetMaster_EventCampaignMaster___, entity);
    sub_1B686D4(&Method_DataManager_GetMaster_ServantFilterMaster___, v5);
    sub_1B686D4(&DataManager_TypeInfo, v6);
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v7);
    sub_1B686D4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_1B686D4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9);
    byte_4A0C61C = 1;
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
    IsLargeSuccessCampaignClassId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46242940(&v29, 0LL);
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
      IsLargeSuccessCampaignClassId = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E49CFC *)Method_DataManager_GetMaster_EventCampaignMaster___);
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
        IsLargeSuccessCampaignClassId = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E49CFC *)Method_DataManager_GetMaster_ServantFilterMaster___);
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
                return UserServantEntity__getEventUpVal_39938928(
                         (UserServantEntity_o *)IsLargeSuccessCampaignClassId,
                         v28->fields.setupInfo,
                         entity->fields.eventId,
                         0LL,
                         0LL);
            }
          }
        }
LABEL_34:
        sub_1B68930(IsLargeSuccessCampaignClassId, v12);
      }
    }
  }
  return 1;
}