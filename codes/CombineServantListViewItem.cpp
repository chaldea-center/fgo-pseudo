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
  IconLabelInfo_o *v16; // x20
  int32_t v17; // w2
  int32_t v18; // w3
  IconLabelInfo_o *v19; // x20
  int32_t v20; // w2
  int32_t v21; // w3
  System_Collections_Generic_List_int__o *v22; // x20
  int32_t v23; // w2
  int32_t v24; // w3
  System_Collections_Generic_List_int__o *v25; // x20
  int32_t v26; // w2
  int32_t v27; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_userSvtEntity; // x21
  int32_t v29; // w2
  int32_t v30; // w3
  int64_t Instance; // x0
  const MethodInfo *v32; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v33; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v34; // x20
  __int64 v35; // x23
  __int64 v36; // x24
  Il2CppObject *v37; // x0
  int32_t v38; // w2
  int32_t v39; // w3
  int32_t v40; // w2
  int32_t v41; // w3
  struct UserServantEntity_o *v42; // x8
  struct ServantEntity_o *servantEntity; // x8
  ServantLimitMaster_o *v44; // x20
  int32_t v45; // w24
  int64_t v46; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v47; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v48; // q1
  UserServantCollectionMaster_o *v49; // x20
  int64_t v50; // x24
  int64_t v51; // x23
  int v52; // w8
  bool *p_isStatusUpSvt; // x26
  int64_t v54; // x22
  struct UserServantEntity_o *v55; // x8
  int32_t v56; // w20
  BalanceConfig_c *v57; // x8
  struct BalanceConfig_StaticFields *static_fields; // x8
  struct UserServantEntity_o *v59; // x8
  __int128 v60; // q1
  __int64 v61; // x20
  const MethodInfo *v62; // x1
  int64_t UserSvtId; // x0
  unsigned int v64; // w8
  bool isLimitCountMax; // w8
  UserServantEntity_o *v66; // x8
  __int64 v67; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x25
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v70; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v73; // x8
  __int64 v74; // x9
  int32_t *v75; // x10
  __int64 v76; // x0
  _QWORD *v77; // x0
  __int64 v78; // x1
  __int64 methodPtr_low; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v80; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v81; // q0
  __int64 v82; // x22
  System_Collections_Generic_IEnumerator_T__c *v83; // x8
  __int64 v84; // x9
  int32_t *v85; // x10
  __int64 v86; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v87; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v88; // q0
  UserRecommendSupportMaster_o *v89; // x20
  UserServantEntity_o *v90; // x8
  UserServantEntity_o *v91; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v92; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v93; // q0
  int64_t v94; // x0
  __int128 v95; // q1
  Il2CppObject *v96; // x20
  struct ServantEntity_o *v97; // x8
  int64_t v98; // x25
  __int64 v99; // x24
  __int64 v100; // x29
  int32_t v101; // w8
  Il2CppObject *v102; // x20
  struct ServantEntity_o *v103; // x8
  int64_t v104; // x25
  __int64 v105; // x24
  __int64 v106; // x29
  struct System_Int32_array *commandCardParam; // x20
  int max_length; // w8
  __int64 v109; // x22
  int32_t v110; // w25
  UserServantEntity_o *v111; // x23
  bool v112; // w24
  __int64 v113; // x1
  System_Collections_Generic_IEnumerator_T__o *v114; // x25
  System_Collections_Generic_IEnumerator_T__c *v115; // x8
  __int64 v116; // x9
  int32_t *v117; // x10
  __int64 v118; // x0
  System_Collections_Generic_IEnumerator_T__c *v119; // x8
  __int64 v120; // x9
  int32_t *v121; // x10
  __int64 v122; // x0
  _QWORD *v123; // x0
  __int64 v124; // x1
  __int64 v125; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v126; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v127; // q0
  __int64 v128; // x22
  System_Collections_Generic_IEnumerator_T__c *v129; // x8
  __int64 v130; // x9
  int32_t *v131; // x10
  __int64 v132; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v133; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v134; // q0
  UserRecommendSupportMaster_o *v135; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v136; // x8
  __int64 v137; // x20
  __int64 v138; // x24
  int32_t v139; // w20
  struct UserServantEntity_o *v140; // x8
  __int128 v141; // q0
  int64_t v142; // x0
  __int128 v143; // q1
  int32_t SvtClassId; // w0
  int32_t SvtClassGroupType; // w20
  int32_t materialExp; // w20
  BalanceConfig_c *v147; // x0
  int SameClassExp; // w22
  double v149; // d0
  int32_t v150; // w8
  UserServantEntity_o *v151; // x8
  int32_t v152; // w20
  bool v153; // w8
  bool v154; // w8
  bool v155; // w8
  bool v156; // w8
  Il2CppObject *v157; // x20
  struct ServantEntity_o *v158; // x8
  int64_t v159; // x25
  __int64 v160; // x24
  __int64 v161; // x26
  int32_t v162; // w8
  UserServantEntity_o *v163; // x8
  bool v164; // w8
  UserServantEntity_o *v165; // x8
  const MethodInfo *v166; // x1
  UserServantEntity_o *v167; // x8
  __int128 v168; // q0
  int64_t v169; // x0
  __int128 v170; // q1
  UserServantEntity_o *v171; // x9
  int64_t v172; // x23
  int32_t combineLimitId; // w20
  __int64 v174; // x24
  __int64 v175; // x25
  int32_t v176; // w25
  int64_t v177; // x20
  __int64 v178; // x24
  __int64 v179; // x27
  __int64 v180; // x8
  UserItemMaster_o *v181; // x25
  unsigned __int64 i; // x28
  UserServantEntity_o *v183; // x8
  __int128 v184; // q1
  int32_t v185; // w26
  int32_t v186; // w23
  UserServantEntity_o *v187; // x8
  bool isLevelMax; // w8
  UserServantEntity_o *v189; // x8
  UserServantEntity_o *v190; // x8
  const MethodInfo *v191; // x1
  UserServantEntity_o *v192; // x8
  __int128 v193; // q0
  int64_t v194; // x0
  __int128 v195; // q1
  UserServantEntity_o *v196; // x8
  UserServantEntity_o *v197; // x8
  __int128 v198; // q0
  int64_t v199; // x0
  __int128 v200; // q1
  UserServantEntity_o *v201; // x8
  UserServantEntity_o *v202; // x8
  __int128 v203; // q0
  int64_t v204; // x0
  __int128 v205; // q1
  int id; // w20
  int32_t lv; // w22
  int32_t SameSvtNpLvCache; // w0
  const MethodInfo *v209; // x4
  int32_t v210; // w20
  char v211; // w8
  int v212; // w8
  int32_t v213; // w0
  int32_t v214; // w20
  int32_t v215; // w26
  int32_t v216; // w25
  int v217; // w22
  __int64 v218; // x1
  System_Collections_Generic_IEnumerator_T__o *v219; // x25
  System_Collections_Generic_IEnumerator_T__c *v220; // x8
  __int64 v221; // x9
  int32_t *v222; // x10
  __int64 v223; // x0
  System_Collections_Generic_IEnumerator_T__c *v224; // x8
  __int64 v225; // x9
  int32_t *v226; // x10
  __int64 v227; // x0
  _QWORD *v228; // x0
  __int64 v229; // x1
  __int64 v230; // x9
  UserServantEntity_o *v231; // x8
  __int128 v232; // q0
  __int64 v233; // x22
  System_Collections_Generic_IEnumerator_T__c *v234; // x8
  __int64 v235; // x9
  int32_t *v236; // x10
  __int64 v237; // x0
  UserServantEntity_o *v238; // x8
  __int128 v239; // q0
  UserRecommendSupportMaster_o *v240; // x20
  bool IsSettingServant; // w8
  UserServantEntity_o *v242; // x8
  CombineServantListViewItem_o *v243; // x8
  CombineServantListViewItem_o *v244; // x20
  struct UserServantEntity_o *v245; // x8
  __int128 v246; // q0
  int64_t v247; // x0
  __int128 v248; // q1
  int32_t v249; // w8
  UserServantEntity_o *v250; // x8
  UserServantEntity_o *v251; // x8
  bool v252; // w8
  UserServantEntity_o *v253; // x8
  UserServantEntity_o *v254; // x8
  __int128 v255; // q0
  int64_t v256; // x0
  __int128 v257; // q1
  ServantExceedEntity_o *SvtExceedEnt; // x0
  int32_t *v259; // x25
  CommonConsumeEntity_array *IdEntityList; // x0
  CommonConsumeEntity_array *v261; // x27
  System_Collections_Generic_HashSet_int__o *v262; // x20
  System_Collections_Generic_HashSet_int__o *v263; // x26
  int v264; // w8
  __int64 v265; // x22
  CommonConsumeEntity_o *v266; // x29
  UserServantEntity_o *v267; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v268; // x27
  __int64 v269; // x24
  __int64 v270; // x28
  UserServantEntity_o *v271; // x24
  System_Int32_array *v272; // x20
  System_Int32_array *v273; // x0
  __int64 v274; // x20
  __int64 v275; // x24
  UserServantEntity_o *v276; // x8
  UserServantEntity_o *v277; // x8
  UserServantEntity_o *v278; // x8
  __int128 v279; // q0
  int64_t v280; // x0
  __int128 v281; // q1
  int32_t maxFriendshipRank; // w20
  int v283; // w22
  int64_t v284; // x20
  __int64 v285; // x23
  __int64 v286; // x24
  UserItemMaster_o *v287; // x22
  unsigned __int64 v288; // x25
  __int64 v289; // x27
  bool v290; // w8
  UserServantEntity_o *v291; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  int32_t v293; // w2
  int32_t v294; // w3
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  int32_t v296; // w2
  int32_t v297; // w3
  int64_t v298; // x8
  struct ServantEntity_o *v299; // x9
  UserServantEntity_o *v300; // x8
  __int64 v301; // x20
  __int64 v302; // x21
  int32_t v303; // w8
  int v304; // [xsp+Ch] [xbp-494h]
  UserServantMaster_o *MasterData_object; // [xsp+18h] [xbp-488h]
  int64_t v306; // [xsp+20h] [xbp-480h]
  bool *p_isLimitUpItemNum; // [xsp+28h] [xbp-478h]
  struct IconLabelInfo_o **p_iconLabelInfo2; // [xsp+30h] [xbp-470h]
  int64_t v309; // [xsp+38h] [xbp-468h]
  bool v311; // [xsp+40h] [xbp-460h]
  bool v313; // [xsp+44h] [xbp-45Ch]
  bool v314; // [xsp+44h] [xbp-45Ch]
  int64_t v315; // [xsp+48h] [xbp-458h]
  bool *p_isChoice; // [xsp+58h] [xbp-448h]
  bool v318; // [xsp+64h] [xbp-43Ch]
  struct ServantEntity_o **p_servantEntity; // [xsp+68h] [xbp-438h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v320; // [xsp+70h] [xbp-430h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v321; // [xsp+90h] [xbp-410h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v322; // [xsp+B0h] [xbp-3F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v323; // [xsp+D0h] [xbp-3D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v324; // [xsp+F0h] [xbp-3B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v325; // [xsp+110h] [xbp-390h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v326; // [xsp+130h] [xbp-370h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v327; // [xsp+150h] [xbp-350h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v328; // [xsp+170h] [xbp-330h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v329; // [xsp+190h] [xbp-310h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v330; // [xsp+1B0h] [xbp-2F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v331; // [xsp+1D0h] [xbp-2D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v332; // [xsp+1F0h] [xbp-2B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v333; // [xsp+210h] [xbp-290h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v334; // [xsp+230h] [xbp-270h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v335; // [xsp+250h] [xbp-250h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v336; // [xsp+270h] [xbp-230h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v337; // [xsp+290h] [xbp-210h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v338; // [xsp+2B0h] [xbp-1F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v339; // [xsp+2D0h] [xbp-1D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v340; // [xsp+2F0h] [xbp-1B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v341; // [xsp+310h] [xbp-190h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v342; // [xsp+330h] [xbp-170h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v343; // [xsp+350h] [xbp-150h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v344; // [xsp+370h] [xbp-130h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v345; // [xsp+390h] [xbp-110h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v346; // [xsp+3B0h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v347; // [xsp+3D0h] [xbp-D0h]
  UserItemEntity_o *v348; // [xsp+3F8h] [xbp-A8h] BYREF
  int32_t tdMaxLv; // [xsp+404h] [xbp-9Ch] BYREF
  int32_t tdLv[2]; // [xsp+408h] [xbp-98h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+410h] [xbp-90h] BYREF
  UserItemEntity_o *v352; // [xsp+418h] [xbp-88h] BYREF
  __int64 v353; // [xsp+420h] [xbp-80h] BYREF
  UserServantCommandCodeEntity_o *v354; // [xsp+428h] [xbp-78h] BYREF
  UserServantCommandCardEntity_o *v355; // [xsp+430h] [xbp-70h] BYREF
  UserServantCommandCodeEntity_o *entity; // [xsp+438h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v357; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v358; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v359; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v360; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v361; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v362; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v363; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v364; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v365; // 0:x0.16

  if ( (byte_4A5EB72 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_1B885B0(&Method_DataManager_GetMasterData_CombineLimitMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_CombineMaterialMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_FriendshipMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_TreasureDvcMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantCommandCardMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantLeaderMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_CommonConsumeMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_SvtCoinMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_UserRecommendSupportMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&IconLabelInfo_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&System_Math_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&UserServantLeaderEntity_TypeInfo);
    byte_4A5EB72 = 1;
  }
  entity = 0LL;
  v355 = 0LL;
  v354 = 0LL;
  v353 = 0LL;
  v352 = 0LL;
  tdInfo = 0LL;
  *(_QWORD *)tdLv = 0LL;
  tdMaxLv = 0;
  v348 = 0LL;
  v16 = (IconLabelInfo_o *)sub_1B887FC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v16, 0LL);
  this->fields.iconLabelInfo1 = v16;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.iconLabelInfo1, (int32_t)v16, v17, v18);
  v19 = (IconLabelInfo_o *)sub_1B887FC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v19, 0LL);
  this->fields.iconLabelInfo2 = v19;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.iconLabelInfo2, (int32_t)v19, v20, v21);
  v22 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v22,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.enableSkillUp = v22;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.enableSkillUp, (int32_t)v22, v23, v24);
  v25 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v25,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.enableAppendSkillUp = v25;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.enableAppendSkillUp, (int32_t)v25, v26, v27);
  ListViewItem___ctor((ListViewItem_o *)this, 0LL);
  this->fields.userSvtEntity = userSvtEntity;
  p_userSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userSvtEntity;
  this->fields.type = type;
  this->fields.index = index;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.userSvtEntity, (int32_t)userSvtEntity, v29, v30);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_526;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
  v33 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_526;
  v34 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v36 = *(_QWORD *)&v33[5].fields.currentCryptoKey;
  v35 = *(_QWORD *)&v33[5].fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v357.fields.currentCryptoKey = v36;
  *(_QWORD *)&v357.fields.fakeValue = v35;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v357, 0LL);
  if ( !v34 )
    goto LABEL_526;
  v37 = DataMasterBase_object__object__int___GetEntity(
          v34,
          Instance,
          (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)v37;
  p_servantEntity = &this->fields.servantEntity;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.servantEntity, (int32_t)v37, v38, v39);
  this->fields.setupInfo = setupInfo;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v40, v41);
  v42 = this->fields.userSvtEntity;
  this->fields.isEventUpVal = 0;
  *(_QWORD *)&this->fields.bonusKind = 1LL;
  if ( !v42 )
    goto LABEL_526;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v42->fields.svtId, 0LL);
  servantEntity = this->fields.servantEntity;
  this->fields.svtId = Instance;
  if ( !servantEntity )
    goto LABEL_526;
  this->fields.classId = servantEntity->fields.classId;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_526;
  MasterData_object = (UserServantMaster_o *)DataManager__GetMasterData_object_(
                                               (DataManager_o *)Instance,
                                               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_526;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtEntity )
    goto LABEL_526;
  v44 = (ServantLimitMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800((*p_userSvtEntity)[5], 0LL);
  if ( !*p_userSvtEntity )
    goto LABEL_526;
  v45 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800((*p_userSvtEntity)[6], 0LL);
  if ( !v44 )
    goto LABEL_526;
  Instance = (int64_t)ServantLimitMaster__GetEntity(v44, v45, Instance, 0LL);
  if ( !Instance )
    goto LABEL_526;
  v46 = Instance;
  this->fields.rarity = *(_DWORD *)(Instance + 24);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_526;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v47 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_526;
  v48 = v47[4];
  v49 = (UserServantCollectionMaster_o *)Instance;
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v347.fields.currentCryptoKey = v47[3];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v347.fields.fakeValue = v48;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v346 = v347;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v346, 0LL);
  if ( !*p_userSvtEntity )
    goto LABEL_526;
  v50 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800((*p_userSvtEntity)[5], 0LL);
  if ( !v49 )
    goto LABEL_526;
  Instance = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(v49, v50, Instance, 0LL);
  if ( !Instance )
    goto LABEL_526;
  v51 = Instance;
  v306 = v46;
  UserServantCollectionEntity__getFriendShipRankInfo(
    (UserServantCollectionEntity_o *)Instance,
    &this->fields.friendship,
    &this->fields.friendshipMax,
    0LL);
  Instance = (int64_t)UserGameMaster__getSelfUserGame(0LL);
  if ( !Instance )
    goto LABEL_526;
  v52 = *(_DWORD *)(Instance + 96);
  *(_DWORD *)&this->fields.isStatusUpSvt = 0;
  p_isStatusUpSvt = &this->fields.isStatusUpSvt;
  v304 = v52;
  *(_WORD *)&this->fields.isFavorite = 0;
  *(_WORD *)&this->fields.isLock = 0;
  *(_DWORD *)&this->fields.isChoice = 0;
  this->fields.isMaxSelect = 0;
  *(_QWORD *)&this->fields.isLimitUpItemNum = 0LL;
  v54 = Instance;
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
  v55 = this->fields.userSvtEntity;
  this->fields.maxLimitCnt = Instance;
  if ( !v55 )
    goto LABEL_526;
  this->fields.currentLimitCnt = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                   v55->fields.limitCount,
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
  v56 = *(_DWORD *)(Instance + 276);
  v57 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v57 = BalanceConfig_TypeInfo;
    Instance = (int64_t)*p_userSvtEntity;
  }
  static_fields = v57->static_fields;
  this->fields.hpReinforceValue = static_fields->StatusUpAdjustHp * v56;
  if ( !Instance )
    goto LABEL_526;
  v309 = v51;
  this->fields.atkReinforceValue = static_fields->StatusUpAdjustAtk * *(_DWORD *)(Instance + 272);
  UserServantEntity__getAdjustMaxData(
    (UserServantEntity_o *)Instance,
    &this->fields.nowMaxHpReinforceValue,
    &this->fields.nowMaxAtkReinforceValue,
    0LL);
  v59 = this->fields.userSvtEntity;
  *(_WORD *)&this->fields.isEquipedCmdCard = 0;
  if ( !v59 )
    goto LABEL_526;
  v60 = *(_OWORD *)&v59->fields.id.fields.fakeValue;
  v61 = *(_QWORD *)(v54 + 120);
  v318 = isParty;
  v315 = v54;
  *(_OWORD *)&v345.fields.currentCryptoKey = *(_OWORD *)&v59->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v345.fields.fakeValue = v60;
  this->fields.isPush = v61 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v345, 0LL);
  UserSvtId = CombineServantListViewItem__get_UserSvtId(this, v62);
  EventFortificationDataLogic__SetFortification(
    &this->fields.isFortification,
    &this->fields.fortificationName,
    &this->fields.fortificationDetailName,
    UserSvtId,
    0LL);
  v64 = this->fields.type;
  if ( v64 > 0xA || ((1 << v64) & 0x481) == 0 )
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
  this->fields.isParty = v318;
  if ( !Instance )
    goto LABEL_526;
  Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL);
  v66 = this->fields.userSvtEntity;
  this->fields.isLock = Instance & 1;
  if ( !v66 )
    goto LABEL_526;
  *p_isChoice = UserServantEntity__IsChoice(v66, 0LL);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_526;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantLeaderMaster___);
  if ( !Instance )
    goto LABEL_526;
  Instance = *(_QWORD *)(Instance + 32);
  if ( !Instance )
    goto LABEL_526;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 (const MethodInfo_30BAB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B8880C(0LL, v67);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v70 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v70;
        p_offset += 4;
        if ( !v70 )
          goto LABEL_55;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_55:
      p_method = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v73 = Enumerator->klass;
    v74 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v75 = &v73->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v75 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v74;
        v75 += 4;
        if ( !v74 )
          goto LABEL_62;
      }
      v76 = (__int64)&v73->vtable[*v75].method;
    }
    else
    {
LABEL_62:
      v76 = sub_1BDA590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v77 = (_QWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v76)(
                      Enumerator,
                      *(_QWORD *)(v76 + 8));
    if ( !v77 )
      goto LABEL_528;
    methodPtr_low = LOBYTE(UserServantLeaderEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*v77 + 304LL) < (unsigned int)methodPtr_low
      || *(UserServantLeaderEntity_c **)(*(_QWORD *)(*v77 + 200LL) + 8 * methodPtr_low - 8) != UserServantLeaderEntity_TypeInfo )
    {
      sub_1B88ACC(v77);
LABEL_528:
      sub_1B8880C(v77, v78);
    }
    v80 = *p_userSvtEntity;
    if ( !*p_userSvtEntity )
      sub_1B8880C(v77, UserServantLeaderEntity_TypeInfo);
    v81 = v80[2];
    v82 = v77[7];
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v347.fields.currentCryptoKey = v80[1];
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v347.fields.fakeValue = v81;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v344 = v347;
    if ( v82 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v344, 0LL) )
    {
      this->fields.isUseSupport = 1;
      break;
    }
  }
  v83 = Enumerator->klass;
  v84 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v85 = &v83->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v85 - 1) != System_IDisposable_TypeInfo )
    {
      --v84;
      v85 += 4;
      if ( !v84 )
        goto LABEL_76;
    }
    v86 = (__int64)&v83->vtable[*v85].method;
  }
  else
  {
LABEL_76:
    v86 = sub_1BDA590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v86)(Enumerator, *(_QWORD *)(v86 + 8));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserRecommendSupportMaster___);
  v87 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_526;
  v88 = v87[2];
  v89 = (UserRecommendSupportMaster_o *)Instance;
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v347.fields.currentCryptoKey = v87[1];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v347.fields.fakeValue = v88;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v343 = v347;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v343, 0LL);
  if ( !v89 )
    goto LABEL_526;
  Instance = UserRecommendSupportMaster__IsSettingServant(v89, Instance, 0, 0LL);
  v90 = this->fields.userSvtEntity;
  this->fields.isUseRecommendSupport = Instance & 1;
  if ( !v90 )
    goto LABEL_526;
  Instance = UserServantEntity__IsEventJoin(v90, 0LL);
  v91 = this->fields.userSvtEntity;
  this->fields.isEventJoin = Instance & 1;
  if ( !v91 )
    goto LABEL_526;
  Instance = UserServantEntity__IsHeroine(v91, 0LL);
  if ( (Instance & 1) != 0 )
    this->fields.isHeroineSvt = 1;
  if ( baseUsrSvtData )
  {
    v92 = *p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_526;
    v93 = v92[2];
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v347.fields.currentCryptoKey = v92[1];
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v347.fields.fakeValue = v93;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v342 = v347;
    v94 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v342, 0LL);
    v95 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
    *(_OWORD *)&v341.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v341.fields.fakeValue = v95;
    if ( v94 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v341, 0LL) )
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
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_526;
  v96 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__get_UserId(0LL);
  v97 = *p_servantEntity;
  if ( !*p_servantEntity )
    goto LABEL_526;
  v98 = Instance;
  v100 = *(_QWORD *)&v97->fields.id.fields.currentCryptoKey;
  v99 = *(_QWORD *)&v97->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v358.fields.currentCryptoKey = v100;
  *(_QWORD *)&v358.fields.fakeValue = v99;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v358, 0LL);
  if ( !v96 )
    goto LABEL_526;
  Instance = UserServantCommandCodeMaster__TryGetEntity(
               (UserServantCommandCodeMaster_o *)v96,
               &entity,
               v98,
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
  v101 = this->fields.type;
  if ( v101 == 10 )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_526;
    v102 = DataManager__GetMasterData_object_(
             (DataManager_o *)Instance,
             (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantCommandCardMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = NetworkManager__get_UserId(0LL);
    v103 = *p_servantEntity;
    if ( !*p_servantEntity )
      goto LABEL_526;
    v104 = Instance;
    v106 = *(_QWORD *)&v103->fields.id.fields.currentCryptoKey;
    v105 = *(_QWORD *)&v103->fields.id.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v359.fields.currentCryptoKey = v106;
    *(_QWORD *)&v359.fields.fakeValue = v105;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v359, 0LL);
    if ( !v102 )
      goto LABEL_526;
    Instance = UserServantCommandCardMaster__TryGetEntity(
                 (UserServantCommandCardMaster_o *)v102,
                 &v355,
                 v104,
                 (int)Instance,
                 0LL);
    if ( (Instance & 1) != 0 )
    {
      if ( !v355 )
        goto LABEL_526;
      commandCardParam = v355->fields.commandCardParam;
      if ( commandCardParam )
      {
        max_length = commandCardParam->max_length;
        if ( max_length >= 1 )
        {
          v109 = 0LL;
          while ( 1 )
          {
            if ( (unsigned int)v109 >= max_length )
              goto LABEL_536;
            Instance = (int64_t)BalanceConfig_TypeInfo;
            v110 = commandCardParam->m_Items[v109 + 1];
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              Instance = (int64_t)BalanceConfig_TypeInfo;
            }
            if ( v110 < *(_DWORD *)(*(_QWORD *)(Instance + 184) + 732LL) )
              break;
            this->fields.isCommandCardExceedMax = 1;
            max_length = commandCardParam->max_length;
            if ( (int)++v109 >= max_length )
              goto LABEL_134;
          }
          this->fields.isCommandCardExceedMax = 0;
        }
      }
    }
LABEL_134:
    v101 = this->fields.type;
  }
  v311 = isFavorite;
  v111 = baseUsrSvtData;
  v112 = isMtSvt;
  if ( v101 == 1 )
  {
    this->fields.isMaterialSvt = v112;
    this->fields.isParty = v318;
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_526;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantLeaderMaster___);
    if ( !Instance )
      goto LABEL_526;
    Instance = *(_QWORD *)(Instance + 32);
    if ( !Instance )
      goto LABEL_526;
    v313 = isMtSvt;
    v114 = System_Collections_ObjectModel_Collection_object___GetEnumerator(
             (System_Collections_ObjectModel_Collection_T__o *)Instance,
             (const MethodInfo_30BAB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    if ( !v114 )
      sub_1B8880C(0LL, v113);
    while ( 1 )
    {
      v115 = v114->klass;
      v116 = *(unsigned __int16 *)(&v114->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v114->klass->_2.bitflags2 + 3) )
      {
        v117 = &v115->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)v117 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v116;
          v117 += 4;
          if ( !v116 )
            goto LABEL_144;
        }
        v118 = (__int64)&v115->vtable[*v117].method;
      }
      else
      {
LABEL_144:
        v118 = sub_1BDA590(v114, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v118)(
              v114,
              *(_QWORD *)(v118 + 8)) & 1) == 0 )
        break;
      v119 = v114->klass;
      v120 = *(unsigned __int16 *)(&v114->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v114->klass->_2.bitflags2 + 3) )
      {
        v121 = &v119->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v121 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
        {
          --v120;
          v121 += 4;
          if ( !v120 )
            goto LABEL_151;
        }
        v122 = (__int64)&v119->vtable[*v121].method;
      }
      else
      {
LABEL_151:
        v122 = sub_1BDA590(v114, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
      }
      v123 = (_QWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v122)(
                         v114,
                         *(_QWORD *)(v122 + 8));
      if ( !v123 )
        goto LABEL_532;
      v125 = LOBYTE(UserServantLeaderEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*v123 + 304LL) < (unsigned int)v125
        || *(UserServantLeaderEntity_c **)(*(_QWORD *)(*v123 + 200LL) + 8 * v125 - 8) != UserServantLeaderEntity_TypeInfo )
      {
        sub_1B88ACC(v123);
LABEL_531:
        sub_1B88ACC(v228);
LABEL_532:
        sub_1B8880C(v123, v124);
      }
      v126 = *p_userSvtEntity;
      if ( !*p_userSvtEntity )
        sub_1B8880C(v123, UserServantLeaderEntity_TypeInfo);
      v127 = v126[2];
      v128 = v123[7];
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v347.fields.currentCryptoKey = v126[1];
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v347.fields.fakeValue = v127;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v340 = v347;
      if ( v128 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v340, 0LL) )
      {
        this->fields.isUseSupport = 1;
        break;
      }
    }
    v129 = v114->klass;
    v130 = *(unsigned __int16 *)(&v114->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v114->klass->_2.bitflags2 + 3) )
    {
      v131 = &v129->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v131 - 1) != System_IDisposable_TypeInfo )
      {
        --v130;
        v131 += 4;
        if ( !v130 )
          goto LABEL_165;
      }
      v132 = (__int64)&v129->vtable[*v131].method;
    }
    else
    {
LABEL_165:
      v132 = sub_1BDA590(v114, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v132)(v114, *(_QWORD *)(v132 + 8));
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Instance = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserRecommendSupportMaster___);
    v133 = *p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_526;
    v134 = v133[2];
    v135 = (UserRecommendSupportMaster_o *)Instance;
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v347.fields.currentCryptoKey = v133[1];
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v347.fields.fakeValue = v134;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v339 = v347;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v339, 0LL);
    if ( !v135 )
      goto LABEL_526;
    this->fields.isUseRecommendSupport = UserRecommendSupportMaster__IsSettingServant(v135, Instance, 0, 0LL);
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_526;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_CombineMaterialMaster___);
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
      v136 = *p_userSvtEntity;
      if ( !*p_userSvtEntity )
        goto LABEL_526;
      v138 = *(_QWORD *)&v136[5].fields.currentCryptoKey;
      v137 = *(_QWORD *)&v136[5].fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v360.fields.currentCryptoKey = v138;
      *(_QWORD *)&v360.fields.fakeValue = v137;
      v139 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v360, 0LL);
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(baseUsrSvtData->fields.svtId, 0LL);
      if ( v139 == (_DWORD)Instance )
      {
        v140 = this->fields.userSvtEntity;
        this->fields.isLimitCntTarget = 1;
        if ( !v140 )
          goto LABEL_526;
        v141 = *(_OWORD *)&v140->fields.id.fields.fakeValue;
        *(_OWORD *)&v347.fields.currentCryptoKey = *(_OWORD *)&v140->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v347.fields.fakeValue = v141;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v338 = v347;
        v142 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v338, 0LL);
        v143 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
        *(_OWORD *)&v337.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v337.fields.fakeValue = v143;
        if ( v142 != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v337, 0LL) )
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
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_526;
      Instance = (int64_t)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantClassMaster___);
      if ( !*p_servantEntity )
        goto LABEL_526;
      if ( !Instance )
        goto LABEL_526;
      Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                            (*p_servantEntity)->fields.classId,
                            (const MethodInfo_311D934 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_526;
      HIDWORD(v353) = *(_DWORD *)(Instance + 52);
      SvtClassId = UserServantEntity__getSvtClassId(baseUsrSvtData, 0, 0LL);
      SvtClassGroupType = UserServantEntity__getSvtClassGroupType(baseUsrSvtData, SvtClassId, 0LL);
      if ( System_Int32__Equals_62512140((int32_t)&v353 + 4, 3, 0LL)
        || System_Int32__Equals_62512140((int32_t)&v353 + 4, SvtClassGroupType, 0LL) && this->fields.isSameClass )
      {
        materialExp = this->fields.materialExp;
        v147 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v147 = BalanceConfig_TypeInfo;
        }
        SameClassExp = v147->static_fields->SameClassExp;
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        v149 = (double)materialExp * (double)SameClassExp / 1000.0;
        v150 = vcvtpd_s64_f64(v149);
        if ( ceil(v149) == INFINITY )
          v150 = 0x80000000;
        this->fields.materialExp = v150;
      }
    }
    else
    {
      this->fields.isLimitCntTarget = 0;
    }
    Instance = (int64_t)this->fields.userSvtEntity;
    this->fields.isFavorite = v311;
    if ( !Instance )
      goto LABEL_526;
    Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL);
    v151 = this->fields.userSvtEntity;
    this->fields.isLock = Instance & 1;
    if ( !v151 )
      goto LABEL_526;
    *p_isChoice = UserServantEntity__IsChoice(v151, 0LL);
    Instance = (int64_t)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_526;
    this->fields.isEventJoin = UserServantEntity__IsEventJoin((UserServantEntity_o *)Instance, 0LL);
    Instance = (int64_t)this->fields.userSvtEntity;
    this->fields.hpBase = *(_DWORD *)(v306 + 36);
    this->fields.atkBase = *(_DWORD *)(v306 + 44);
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
      v152 = UserServantEntity__getSvtClassId(baseUsrSvtData, 0, 0LL);
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_526;
      Instance = (int64_t)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantClassMaster___);
      if ( !*p_servantEntity )
        goto LABEL_526;
      if ( !Instance )
        goto LABEL_526;
      Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                            (*p_servantEntity)->fields.classId,
                            (const MethodInfo_311D934 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_526;
      LODWORD(v353) = *(_DWORD *)(Instance + 52);
      if ( !*p_servantEntity )
        goto LABEL_526;
      if ( (*p_servantEntity)->fields.classId == v152 || System_Int32__Equals_62512140((int32_t)&v353, 3, 0LL) )
      {
        this->fields.isCanStUp = 1;
        v153 = UserServantEntity__isAdjustAtkMax(baseUsrSvtData, 0LL) && this->fields.atkBase > 0;
        this->fields.isAtkUpMax = v153;
        v154 = UserServantEntity__isAdjustHpMax(baseUsrSvtData, 0LL) && this->fields.hpBase > 0;
        this->fields.isHpUpMax = v154;
        v155 = UserServantEntity__isSecondAdjustAtkMax(baseUsrSvtData, 0LL) && this->fields.atkBase > 0;
        this->fields.isAtkSecondUpMax = v155;
        v156 = UserServantEntity__isSecondAdjustHpMax(baseUsrSvtData, 0LL) && this->fields.hpBase > 0;
        this->fields.isHpSecondUpMax = v156;
      }
    }
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_526;
    v157 = DataManager__GetMasterData_object_(
             (DataManager_o *)Instance,
             (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = NetworkManager__get_UserId(0LL);
    v158 = *p_servantEntity;
    if ( !*p_servantEntity )
      goto LABEL_526;
    v159 = Instance;
    v161 = *(_QWORD *)&v158->fields.id.fields.currentCryptoKey;
    v160 = *(_QWORD *)&v158->fields.id.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v361.fields.currentCryptoKey = v161;
    *(_QWORD *)&v361.fields.fakeValue = v160;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v361, 0LL);
    if ( !v157 )
      goto LABEL_526;
    Instance = UserServantCommandCodeMaster__TryGetEntity(
                 (UserServantCommandCodeMaster_o *)v157,
                 &v354,
                 v159,
                 (int)Instance,
                 0LL);
    v112 = v313;
    if ( (Instance & 1) != 0 )
    {
      Instance = (int64_t)v354;
      if ( !v354 )
        goto LABEL_526;
      this->fields.isEquipedCmdCard = UserServantCommandCodeEntity__IsEquipedCommandCode(v354, 0LL);
      Instance = (int64_t)v354;
      if ( !v354 )
        goto LABEL_526;
      Instance = UserServantCommandCodeEntity__IsCommandCardSlotOpen(v354, 0LL);
      this->fields.isCmdCardSlotOpen = Instance & 1;
    }
  }
  v162 = this->fields.type;
  if ( v162 == 9 )
  {
    if ( !userSvtEntity )
      goto LABEL_526;
    Instance = UserServantEntity__isLimitCountMax(userSvtEntity, 0LL);
    v187 = this->fields.userSvtEntity;
    this->fields.isLimitCntMax = Instance & 1;
    if ( !v187 )
      goto LABEL_526;
    isLevelMax = UserServantEntity__isLevelMax(v187, 0LL);
    Instance = (int64_t)this->fields.userSvtEntity;
    this->fields.isLvMax = isLevelMax;
    this->fields.isParty = v318;
    if ( !Instance )
      goto LABEL_526;
    Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL);
    v189 = this->fields.userSvtEntity;
    this->fields.isLock = Instance & 1;
    if ( !v189 )
      goto LABEL_526;
    *p_isChoice = UserServantEntity__IsChoice(v189, 0LL);
    Instance = (int64_t)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_526;
    Instance = UserServantEntity__IsEventJoin((UserServantEntity_o *)Instance, 0LL);
    v190 = this->fields.userSvtEntity;
    this->fields.isEventJoin = Instance & 1;
    if ( !v190 )
      goto LABEL_526;
    this->fields.isIgnoreCombineLimitSpecial = UserServantEntity__IsIgnoreCombineLimitSpecial(v190, 0LL);
    Instance = CombineServantListViewItem__GetSealCombineLimit(this, v191);
    this->fields.isSealCombineLimit = Instance & 1;
    if ( baseUsrSvtData )
    {
      v192 = (UserServantEntity_o *)*p_userSvtEntity;
      if ( !*p_userSvtEntity )
        goto LABEL_526;
      v193 = *(_OWORD *)&v192->fields.id.fields.fakeValue;
      *(_OWORD *)&v347.fields.currentCryptoKey = *(_OWORD *)&v192->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v347.fields.fakeValue = v193;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v333 = v347;
      v194 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v333, 0LL);
      v195 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
      *(_OWORD *)&v332.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v332.fields.fakeValue = v195;
      if ( v194 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v332, 0LL) )
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
    if ( v162 != 2 )
      goto LABEL_309;
    if ( !userSvtEntity )
      goto LABEL_526;
    Instance = UserServantEntity__isLimitCountMax(userSvtEntity, 0LL);
    v163 = this->fields.userSvtEntity;
    this->fields.isLimitCntMax = Instance & 1;
    if ( !v163 )
      goto LABEL_526;
    v164 = UserServantEntity__isLevelMax(v163, 0LL);
    Instance = (int64_t)this->fields.userSvtEntity;
    this->fields.isLvMax = v164;
    this->fields.isParty = v318;
    if ( !Instance )
      goto LABEL_526;
    Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL);
    v165 = this->fields.userSvtEntity;
    this->fields.isLock = Instance & 1;
    if ( !v165 )
      goto LABEL_526;
    *p_isChoice = UserServantEntity__IsChoice(v165, 0LL);
    Instance = (int64_t)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_526;
    this->fields.isEventJoin = UserServantEntity__IsEventJoin((UserServantEntity_o *)Instance, 0LL);
    Instance = CombineServantListViewItem__GetSealCombineLimit(this, v166);
    this->fields.isSealCombineLimit = Instance & 1;
    if ( baseUsrSvtData )
    {
      v167 = (UserServantEntity_o *)*p_userSvtEntity;
      if ( !*p_userSvtEntity )
        goto LABEL_526;
      v168 = *(_OWORD *)&v167->fields.id.fields.fakeValue;
      *(_OWORD *)&v347.fields.currentCryptoKey = *(_OWORD *)&v167->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v347.fields.fakeValue = v168;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v336 = v347;
      v169 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v336, 0LL);
      v170 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
      *(_OWORD *)&v335.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v335.fields.fakeValue = v170;
      if ( v169 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v335, 0LL) )
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
      v171 = (UserServantEntity_o *)*p_userSvtEntity;
      v172 = v315;
      v314 = v112;
      if ( !*p_userSvtEntity )
        goto LABEL_526;
      combineLimitId = (*p_servantEntity)->fields.combineLimitId;
      v175 = *(_QWORD *)&v171->fields.limitCount.fields.currentCryptoKey;
      v174 = *(_QWORD *)&v171->fields.limitCount.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v362.fields.currentCryptoKey = v175;
      *(_QWORD *)&v362.fields.fakeValue = v174;
      v176 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v362, 0LL);
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_526;
      Instance = (int64_t)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_CombineLimitMaster___);
      if ( !Instance )
        goto LABEL_526;
      Instance = (int64_t)CombineLimitMaster__GetEntity((CombineLimitMaster_o *)Instance, combineLimitId, v176, 0LL);
      if ( !Instance )
        goto LABEL_526;
      v177 = Instance;
      v179 = *(_QWORD *)(Instance + 32);
      v178 = *(_QWORD *)(Instance + 40);
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_526;
      Instance = (int64_t)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserItemMaster___);
      if ( !v178 )
        goto LABEL_526;
      v180 = *(_QWORD *)(v178 + 24);
      if ( (int)v180 >= 1 )
      {
        v181 = (UserItemMaster_o *)Instance;
        for ( i = 0LL; (__int64)i < (int)v180; ++i )
        {
          if ( i >= (unsigned int)v180 )
            goto LABEL_536;
          if ( !v179 )
            goto LABEL_526;
          if ( i >= *(unsigned int *)(v179 + 24) )
            goto LABEL_536;
          v183 = (UserServantEntity_o *)*p_userSvtEntity;
          if ( !*p_userSvtEntity )
            goto LABEL_526;
          v184 = *(_OWORD *)&v183->fields.userId.fields.fakeValue;
          v185 = *(_DWORD *)(v178 + 32 + 4 * i);
          v186 = *(_DWORD *)(v179 + 32 + 4 * i);
          *(_OWORD *)&v347.fields.currentCryptoKey = *(_OWORD *)&v183->fields.userId.fields.currentCryptoKey;
          *(_OWORD *)&v347.fields.fakeValue = v184;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v334 = v347;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v334, 0LL);
          if ( !v181 )
            goto LABEL_526;
          Instance = UserItemMaster__TryGetEntity(v181, &v352, Instance, v185, 0LL);
          if ( (Instance & 1) == 0 )
            goto LABEL_352;
          if ( !v352 )
            goto LABEL_526;
          if ( v185 == v352->fields.itemId )
          {
            if ( v186 > v352->fields.num )
            {
LABEL_352:
              v172 = v315;
              *p_isLimitUpItemNum = 0;
              break;
            }
            *p_isLimitUpItemNum = 1;
          }
          LODWORD(v180) = *(_DWORD *)(v178 + 24);
          v172 = v315;
        }
      }
      v212 = *(_DWORD *)(v172 + 96);
      v111 = baseUsrSvtData;
      v112 = v314;
      if ( v212 < *(_DWORD *)(v177 + 24) )
        *p_isLimitUpItemNum = 0;
      goto LABEL_308;
    }
  }
  this->fields.isHeroineSvt = 1;
LABEL_308:
  v162 = this->fields.type;
LABEL_309:
  if ( (v162 | 8) == 11 )
  {
    Instance = (int64_t)this->fields.userSvtEntity;
    this->fields.isParty = v318;
    if ( !Instance )
      goto LABEL_526;
    Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL);
    v196 = this->fields.userSvtEntity;
    this->fields.isLock = Instance & 1;
    if ( !v196 )
      goto LABEL_526;
    *p_isChoice = UserServantEntity__IsChoice(v196, 0LL);
    Instance = (int64_t)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_526;
    Instance = UserServantEntity__IsEventJoin((UserServantEntity_o *)Instance, 0LL);
    this->fields.isEventJoin = Instance & 1;
    if ( v111 )
    {
      v197 = (UserServantEntity_o *)*p_userSvtEntity;
      if ( !*p_userSvtEntity )
        goto LABEL_526;
      v198 = *(_OWORD *)&v197->fields.id.fields.fakeValue;
      *(_OWORD *)&v347.fields.currentCryptoKey = *(_OWORD *)&v197->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v347.fields.fakeValue = v198;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v331 = v347;
      v199 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v331, 0LL);
      v200 = *(_OWORD *)&v111->fields.id.fields.fakeValue;
      *(_OWORD *)&v330.fields.currentCryptoKey = *(_OWORD *)&v111->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v330.fields.fakeValue = v200;
      if ( v199 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v330, 0LL) )
        this->fields.isBaseSvt = 1;
    }
    Instance = (int64_t)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_526;
    if ( UserServantEntity__IsHeroine((UserServantEntity_o *)Instance, 0LL) )
      this->fields.isHeroineSvt = 1;
    v162 = this->fields.type;
    if ( v162 == 3 )
    {
      CombineServantListViewItem__SetSkillInfo(this, v32);
      v162 = this->fields.type;
    }
    if ( v162 == 11 )
    {
      CombineServantListViewItem__SetAppendSkillInfo(this, v32);
      v162 = this->fields.type;
    }
  }
  if ( v162 == 4 )
  {
    Instance = (int64_t)this->fields.userSvtEntity;
    this->fields.isParty = v318;
    if ( !Instance )
      goto LABEL_526;
    Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL);
    v201 = this->fields.userSvtEntity;
    this->fields.isLock = Instance & 1;
    if ( !v201 )
      goto LABEL_526;
    *p_isChoice = UserServantEntity__IsChoice(v201, 0LL);
    Instance = (int64_t)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_526;
    Instance = UserServantEntity__IsEventJoin((UserServantEntity_o *)Instance, 0LL);
    this->fields.isEventJoin = Instance & 1;
    if ( v111 )
    {
      v202 = (UserServantEntity_o *)*p_userSvtEntity;
      if ( !*p_userSvtEntity )
        goto LABEL_526;
      v203 = *(_OWORD *)&v202->fields.id.fields.fakeValue;
      *(_OWORD *)&v347.fields.currentCryptoKey = *(_OWORD *)&v202->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v347.fields.fakeValue = v203;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v329 = v347;
      v204 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v329, 0LL);
      v205 = *(_OWORD *)&v111->fields.id.fields.fakeValue;
      *(_OWORD *)&v328.fields.currentCryptoKey = *(_OWORD *)&v111->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v328.fields.fakeValue = v205;
      if ( v204 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v328, 0LL) )
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
        Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_526;
        Instance = (int64_t)DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
        if ( !Instance )
          goto LABEL_526;
        Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                              id,
                              (const MethodInfo_311D934 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
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
        v210 = SameSvtNpLvCache;
        CombineServantListViewItem__GetNpInfo(this, &tdLv[1], tdLv, &tdMaxLv, v209);
        if ( v304 <= 1200000 )
        {
          Instance = (int64_t)*p_userSvtEntity;
          if ( !*p_userSvtEntity )
            goto LABEL_526;
          v213 = UserServantEntity__checkTreasureDeviceLevelUp((UserServantEntity_o *)Instance, v210, 0LL);
          v214 = tdLv[0];
          if ( tdLv[0] >= v213 )
          {
            v217 = 0;
          }
          else
          {
            v215 = tdLv[1];
            v216 = v213;
            v217 = 0;
            do
            {
              Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !Instance )
                goto LABEL_526;
              Instance = (int64_t)DataManager__GetMasterData_object_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
              if ( !Instance )
                goto LABEL_526;
              Instance = (int64_t)TreasureDvcLvMaster__GetEntity((TreasureDvcLvMaster_o *)Instance, v215, v214, 0LL);
              if ( Instance )
                v217 += *(_DWORD *)(Instance + 92);
              ++v214;
            }
            while ( v216 != v214 );
            if ( !this )
              goto LABEL_526;
          }
          v211 = v304 >= v217;
        }
        else
        {
          v211 = 1;
        }
        this->fields.isSameSvt = v211;
      }
    }
    v162 = this->fields.type;
  }
  if ( v162 == 5 )
  {
    this->fields.isMaterialSvt = v112;
    this->fields.isParty = v318;
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_526;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantLeaderMaster___);
    if ( !Instance )
      goto LABEL_526;
    Instance = *(_QWORD *)(Instance + 32);
    if ( !Instance )
      goto LABEL_526;
    v219 = System_Collections_ObjectModel_Collection_object___GetEnumerator(
             (System_Collections_ObjectModel_Collection_T__o *)Instance,
             (const MethodInfo_30BAB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    if ( !v219 )
      sub_1B8880C(0LL, v218);
    while ( 1 )
    {
      v220 = v219->klass;
      v221 = *(unsigned __int16 *)(&v219->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v219->klass->_2.bitflags2 + 3) )
      {
        v222 = &v220->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)v222 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v221;
          v222 += 4;
          if ( !v221 )
            goto LABEL_378;
        }
        v223 = (__int64)&v220->vtable[*v222].method;
      }
      else
      {
LABEL_378:
        v223 = sub_1BDA590(v219, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v223)(
              v219,
              *(_QWORD *)(v223 + 8)) & 1) == 0 )
        break;
      v224 = v219->klass;
      v225 = *(unsigned __int16 *)(&v219->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v219->klass->_2.bitflags2 + 3) )
      {
        v226 = &v224->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v226 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
        {
          --v225;
          v226 += 4;
          if ( !v225 )
            goto LABEL_385;
        }
        v227 = (__int64)&v224->vtable[*v226].method;
      }
      else
      {
LABEL_385:
        v227 = sub_1BDA590(v219, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
      }
      v228 = (_QWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v227)(
                         v219,
                         *(_QWORD *)(v227 + 8));
      if ( !v228 )
        sub_1B8880C(0LL, v229);
      v230 = LOBYTE(UserServantLeaderEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*v228 + 304LL) < (unsigned int)v230
        || *(UserServantLeaderEntity_c **)(*(_QWORD *)(*v228 + 200LL) + 8 * v230 - 8) != UserServantLeaderEntity_TypeInfo )
      {
        goto LABEL_531;
      }
      v231 = (UserServantEntity_o *)*p_userSvtEntity;
      if ( !*p_userSvtEntity )
        sub_1B8880C(v228, UserServantLeaderEntity_TypeInfo);
      v232 = *(_OWORD *)&v231->fields.id.fields.fakeValue;
      v233 = v228[7];
      *(_OWORD *)&v347.fields.currentCryptoKey = *(_OWORD *)&v231->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v347.fields.fakeValue = v232;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v327 = v347;
      if ( v233 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v327, 0LL) )
      {
        this->fields.isUseSupport = 1;
        break;
      }
    }
    v234 = v219->klass;
    v235 = *(unsigned __int16 *)(&v219->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v219->klass->_2.bitflags2 + 3) )
    {
      v236 = &v234->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v236 - 1) != System_IDisposable_TypeInfo )
      {
        --v235;
        v236 += 4;
        if ( !v235 )
          goto LABEL_399;
      }
      v237 = (__int64)&v234->vtable[*v236].method;
    }
    else
    {
LABEL_399:
      v237 = sub_1BDA590(v219, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v237)(v219, *(_QWORD *)(v237 + 8));
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Instance = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserRecommendSupportMaster___);
    v238 = (UserServantEntity_o *)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_526;
    v239 = *(_OWORD *)&v238->fields.id.fields.fakeValue;
    v240 = (UserRecommendSupportMaster_o *)Instance;
    *(_OWORD *)&v347.fields.currentCryptoKey = *(_OWORD *)&v238->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v347.fields.fakeValue = v239;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v326 = v347;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v326, 0LL);
    if ( !v240 )
      goto LABEL_526;
    IsSettingServant = UserRecommendSupportMaster__IsSettingServant(v240, Instance, 0, 0LL);
    Instance = (int64_t)this->fields.userSvtEntity;
    this->fields.isUseRecommendSupport = IsSettingServant;
    this->fields.isFavorite = v311;
    if ( !Instance )
      goto LABEL_526;
    Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL);
    v242 = this->fields.userSvtEntity;
    this->fields.isLock = Instance & 1;
    if ( !v242 )
      goto LABEL_526;
    *p_isChoice = UserServantEntity__IsChoice(v242, 0LL);
    Instance = (int64_t)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_526;
    Instance = UserServantEntity__IsEventJoin((UserServantEntity_o *)Instance, 0LL);
    this->fields.isEventJoin = Instance & 1;
    if ( v111 )
      v243 = 0LL;
    else
      v243 = this;
    if ( v111 )
      v244 = this;
    else
      v244 = 0LL;
    if ( v111 )
    {
      Instance = UserServantEntity__IsEventJoin(v111, 0LL);
      if ( !v244 )
        goto LABEL_526;
      v244->fields.isEventJoinBaseSvt = Instance & 1;
      Instance = (int64_t)*p_userSvtEntity;
      if ( !*p_userSvtEntity )
        goto LABEL_526;
      Instance = UserServantEntity__IsMaterialTd((UserServantEntity_o *)Instance, 0LL);
      v245 = this->fields.userSvtEntity;
      this->fields.isMaterialTdSvt = Instance & 1;
      if ( !v245 )
        goto LABEL_526;
      v246 = *(_OWORD *)&v245->fields.id.fields.fakeValue;
      *(_OWORD *)&v347.fields.currentCryptoKey = *(_OWORD *)&v245->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v347.fields.fakeValue = v246;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v325 = v347;
      v247 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v325, 0LL);
      v248 = *(_OWORD *)&v111->fields.id.fields.fakeValue;
      *(_OWORD *)&v324.fields.currentCryptoKey = *(_OWORD *)&v111->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v324.fields.fakeValue = v248;
      if ( v247 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v324, 0LL) )
        this->fields.isBaseSvt = 1;
    }
    else
    {
      if ( !v243 )
        goto LABEL_526;
      v243->fields.isEventJoinBaseSvt = 0;
      Instance = (int64_t)*p_userSvtEntity;
      if ( !*p_userSvtEntity )
        goto LABEL_526;
      this->fields.isMaterialTdSvt = UserServantEntity__IsMaterialTd((UserServantEntity_o *)Instance, 0LL);
    }
  }
  v249 = this->fields.type;
  if ( v249 == 6 )
  {
    Instance = (int64_t)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_526;
    Instance = UserServantEntity__isExceedLvMax((UserServantEntity_o *)Instance, 0LL);
    v250 = this->fields.userSvtEntity;
    this->fields.isLvExceedMax = Instance & 1;
    if ( !v250 )
      goto LABEL_526;
    Instance = UserServantEntity__isLimitCountMax(v250, 0LL);
    v251 = this->fields.userSvtEntity;
    this->fields.isLimitCntMax = Instance & 1;
    if ( !v251 )
      goto LABEL_526;
    v252 = UserServantEntity__isLevelMax(v251, 0LL);
    Instance = (int64_t)this->fields.userSvtEntity;
    this->fields.isLvMax = v252;
    this->fields.isParty = v318;
    if ( !Instance )
      goto LABEL_526;
    Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL);
    v253 = this->fields.userSvtEntity;
    this->fields.isLock = Instance & 1;
    if ( !v253 )
      goto LABEL_526;
    *p_isChoice = UserServantEntity__IsChoice(v253, 0LL);
    Instance = (int64_t)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_526;
    Instance = UserServantEntity__IsEventJoin((UserServantEntity_o *)Instance, 0LL);
    this->fields.isEventJoin = Instance & 1;
    if ( v111 )
    {
      v254 = (UserServantEntity_o *)*p_userSvtEntity;
      if ( !*p_userSvtEntity )
        goto LABEL_526;
      v255 = *(_OWORD *)&v254->fields.id.fields.fakeValue;
      *(_OWORD *)&v347.fields.currentCryptoKey = *(_OWORD *)&v254->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v347.fields.fakeValue = v255;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v323 = v347;
      v256 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v323, 0LL);
      v257 = *(_OWORD *)&v111->fields.id.fields.fakeValue;
      *(_OWORD *)&v322.fields.currentCryptoKey = *(_OWORD *)&v111->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v322.fields.fakeValue = v257;
      if ( v256 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v322, 0LL) )
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
        v259 = (int32_t *)SvtExceedEnt;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Instance = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_CommonConsumeMaster___);
        if ( !Instance )
          goto LABEL_526;
        IdEntityList = CommonConsumeMaster__GetIdEntityList((CommonConsumeMaster_o *)Instance, v259[12], 0LL);
        if ( IdEntityList )
        {
          v261 = IdEntityList;
          v262 = (System_Collections_Generic_HashSet_int__o *)sub_1B887FC(System_Collections_Generic_HashSet_int__TypeInfo);
          System_Collections_Generic_HashSet_int____ctor(
            v262,
            (const MethodInfo_33B2B7C *)Method_System_Collections_Generic_HashSet_int___ctor__);
          v263 = (System_Collections_Generic_HashSet_int__o *)sub_1B887FC(System_Collections_Generic_HashSet_int__TypeInfo);
          System_Collections_Generic_HashSet_int____ctor(
            v263,
            (const MethodInfo_33B2B7C *)Method_System_Collections_Generic_HashSet_int___ctor__);
          v264 = v261->max_length;
          if ( v264 >= 1 )
          {
            v265 = 0LL;
            while ( (unsigned int)v265 < v264 )
            {
              v266 = v261->m_Items[v265];
              if ( !v266 )
                goto LABEL_526;
              if ( !v262 )
                goto LABEL_526;
              Instance = System_Collections_Generic_HashSet_int___Add(
                           v262,
                           v266->fields.objectId,
                           (const MethodInfo_33B3D80 *)Method_System_Collections_Generic_HashSet_int__Add__);
              if ( !v263 )
                goto LABEL_526;
              Instance = System_Collections_Generic_HashSet_int___Add(
                           v263,
                           v266->fields.num,
                           (const MethodInfo_33B3D80 *)Method_System_Collections_Generic_HashSet_int__Add__);
              v264 = v261->max_length;
              if ( (int)++v265 >= v264 )
                goto LABEL_456;
            }
LABEL_536:
            sub_1B88814(Instance, v32);
          }
LABEL_456:
          v111 = baseUsrSvtData;
          if ( v259[13] >= 1 )
          {
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            Instance = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_SvtCoinMaster___);
            v267 = (UserServantEntity_o *)*p_userSvtEntity;
            if ( !*p_userSvtEntity )
              goto LABEL_526;
            v268 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
            v270 = *(_QWORD *)&v267->fields.svtId.fields.currentCryptoKey;
            v269 = *(_QWORD *)&v267->fields.svtId.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v363.fields.currentCryptoKey = v270;
            *(_QWORD *)&v363.fields.fakeValue = v269;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v363, 0LL);
            if ( !v268 )
              goto LABEL_526;
            Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                  v268,
                                  Instance,
                                  (const MethodInfo_311D934 *)Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__GetEntity__);
            v111 = baseUsrSvtData;
            if ( !Instance )
              goto LABEL_526;
            if ( !v262 )
              goto LABEL_526;
            Instance = System_Collections_Generic_HashSet_int___Add(
                         v262,
                         *(_DWORD *)(Instance + 24),
                         (const MethodInfo_33B3D80 *)Method_System_Collections_Generic_HashSet_int__Add__);
            if ( !v263 )
              goto LABEL_526;
            System_Collections_Generic_HashSet_int___Add(
              v263,
              v259[13],
              (const MethodInfo_33B3D80 *)Method_System_Collections_Generic_HashSet_int__Add__);
          }
          v271 = this->fields.userSvtEntity;
          v272 = System_Linq_Enumerable__ToArray_int_(
                   (System_Collections_Generic_IEnumerable_TSource__o *)v262,
                   (const MethodInfo_2EB854C *)Method_System_Linq_Enumerable_ToArray_int___);
          v273 = System_Linq_Enumerable__ToArray_int_(
                   (System_Collections_Generic_IEnumerable_TSource__o *)v263,
                   (const MethodInfo_2EB854C *)Method_System_Linq_Enumerable_ToArray_int___);
          this->fields.isLvExceedItemNum = CombineUtility__CheckCombineNeedItemsEnough(
                                             v271,
                                             v272,
                                             v273,
                                             *(_DWORD *)(v315 + 96),
                                             v259[8],
                                             0LL);
        }
      }
    }
    v249 = this->fields.type;
  }
  if ( v249 != 8 )
    goto LABEL_513;
  Instance = (int64_t)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_526;
  this->fields.isFriendshipExceedMax = UserServantEntity__isExceedFriendshipMax((UserServantEntity_o *)Instance, 0LL);
  v274 = *(_QWORD *)(v309 + 100);
  v275 = *(_QWORD *)(v309 + 108);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v364.fields.currentCryptoKey = v274;
  *(_QWORD *)&v364.fields.fakeValue = v275;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v364, 0LL);
  if ( !*p_servantEntity )
    goto LABEL_526;
  v276 = this->fields.userSvtEntity;
  this->fields.isFriendshipRankMax = (_DWORD)Instance == *(_DWORD *)(v309 + 116)
                                                       + (*p_servantEntity)->fields.maxFriendshipRank;
  this->fields.isParty = v318;
  if ( !v276 )
    goto LABEL_526;
  Instance = UserServantEntity__IsLock(v276, 0LL);
  v277 = this->fields.userSvtEntity;
  this->fields.isLock = Instance & 1;
  if ( !v277 )
    goto LABEL_526;
  *p_isChoice = UserServantEntity__IsChoice(v277, 0LL);
  Instance = (int64_t)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_526;
  Instance = UserServantEntity__IsEventJoin((UserServantEntity_o *)Instance, 0LL);
  this->fields.isEventJoin = Instance & 1;
  if ( v111 )
  {
    v278 = (UserServantEntity_o *)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_526;
    v279 = *(_OWORD *)&v278->fields.id.fields.fakeValue;
    *(_OWORD *)&v347.fields.currentCryptoKey = *(_OWORD *)&v278->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v347.fields.fakeValue = v279;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v321 = v347;
    v280 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v321, 0LL);
    v281 = *(_OWORD *)&v111->fields.id.fields.fakeValue;
    *(_OWORD *)&v320.fields.currentCryptoKey = *(_OWORD *)&v111->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v320.fields.fakeValue = v281;
    if ( v280 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v320, 0LL) )
      this->fields.isBaseSvt = 1;
  }
  Instance = (int64_t)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
LABEL_526:
    sub_1B8880C(Instance, v32);
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
  v283 = *(_DWORD *)(v309 + 116);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_526;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_FriendshipMaster___);
  if ( !*p_servantEntity )
    goto LABEL_526;
  if ( !Instance )
    goto LABEL_526;
  Instance = (int64_t)FriendshipMaster__GetEntity(
                        (FriendshipMaster_o *)Instance,
                        (*p_servantEntity)->fields.friendshipId,
                        maxFriendshipRank + v283 + 1,
                        0LL);
  if ( !Instance )
    goto LABEL_526;
  v284 = Instance;
  v286 = *(_QWORD *)(Instance + 32);
  v285 = *(_QWORD *)(Instance + 40);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_526;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !v285 )
    goto LABEL_526;
  if ( *(int *)(v285 + 24) >= 1 )
  {
    v287 = (UserItemMaster_o *)Instance;
    v288 = 0LL;
    v289 = v285 + 32;
    while ( 1 )
    {
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = NetworkManager__get_UserId(0LL);
      if ( v288 >= *(unsigned int *)(v285 + 24) )
        goto LABEL_536;
      if ( !v287 )
        goto LABEL_526;
      Instance = UserItemMaster__TryGetEntity(v287, &v348, Instance, *(_DWORD *)(v289 + 4 * v288), 0LL);
      if ( (Instance & 1) == 0 )
        break;
      if ( v288 >= *(unsigned int *)(v285 + 24) )
        goto LABEL_536;
      if ( !v348 )
        goto LABEL_526;
      if ( *(_DWORD *)(v289 + 4 * v288) == v348->fields.itemId )
      {
        if ( !v286 )
          goto LABEL_526;
        if ( v288 >= *(unsigned int *)(v286 + 24) )
          goto LABEL_536;
        v290 = *(_DWORD *)(v286 + 32 + 4 * v288) <= v348->fields.num;
        goto LABEL_509;
      }
LABEL_510:
      if ( (__int64)++v288 >= *(int *)(v285 + 24) )
        goto LABEL_511;
    }
    v290 = 0;
LABEL_509:
    this->fields.isFriendshipExceedItemNum = v290;
    goto LABEL_510;
  }
LABEL_511:
  if ( *(_DWORD *)(v315 + 96) < *(_DWORD *)(v284 + 28) )
    this->fields.isFriendshipExceedItemNum = 0;
LABEL_513:
  Instance = (int64_t)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_526;
  Instance = UserServantEntity__getDispLimitCount((UserServantEntity_o *)Instance, 0, 0LL);
  v291 = this->fields.userSvtEntity;
  this->fields.dispLimitCount = Instance;
  if ( !v291 )
    goto LABEL_526;
  SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v291, -1, 0LL);
  this->fields.skillCategoryIdList = SkillCategoryIdList;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.skillCategoryIdList,
    (int32_t)SkillCategoryIdList,
    v293,
    v294);
  Instance = (int64_t)this->fields.userSvtEntity;
  if ( !Instance )
    goto LABEL_526;
  TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                   (UserServantEntity_o *)Instance,
                                   0,
                                   0LL);
  this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.tdCategoryIdList,
    (int32_t)TreasureDeviceCategoryIdList,
    v296,
    v297);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_526;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Instance )
    goto LABEL_526;
  Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                        this->fields.classId,
                        (const MethodInfo_311D934 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_526;
  v298 = *(int *)(Instance + 48);
  v299 = this->fields.servantEntity;
  this->fields.priority = v298;
  this->fields.sortValue1B = v298;
  if ( !v299 )
    goto LABEL_526;
  v300 = (UserServantEntity_o *)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_526;
  this->fields.sortValue2 = ((__int64)v299->fields.collectionNo << 16) | ((unsigned __int64)(unsigned int)this->fields.rarity << 48) | v300->fields.lv;
  v302 = *(_QWORD *)&v300->fields.svtId.fields.currentCryptoKey;
  v301 = *(_QWORD *)&v300->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v365.fields.currentCryptoKey = v302;
  *(_QWORD *)&v365.fields.fakeValue = v301;
  v303 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v365, 0LL);
  Instance = (int64_t)this->fields.iconLabelInfo1;
  this->fields.sortValue2B = v303;
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

  if ( (byte_4A5EB88 & 1) == 0 )
  {
    sub_1B885B0(&SvtUseSkillData_TypeInfo);
    byte_4A5EB88 = 1;
  }
  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
    return UserServantEntity__getAppendSkillInfo(userSvtEntity, 0LL);
  v5 = (SvtUseSkillData_o *)sub_1B887FC(SvtUseSkillData_TypeInfo);
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
      sub_1B8880C(TreasureDeviceInfo, v10);
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
  Il2CppObject *Master_object; // x0
  __int64 v4; // x1
  struct ServantEntity_o *servantEntity; // x8
  int32_t combineLimitId; // w2
  int32_t condTargetId; // w19
  int32_t condType; // w21
  int64_t condNum; // x20
  CombineLimitReleaseEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5EB89 & 1) == 0 )
  {
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMaster_CombineLimitReleaseMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    byte_4A5EB89 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_CombineLimitReleaseMaster___);
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
    sub_1B8880C(Master_object, v4);
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
  UserServantEntity_o *userSvtEntity; // x20
  BalanceConfig_c *v6; // x0
  SkillInfo_array *v7; // x0
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_4A5EB87 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&SkillInfo___TypeInfo);
    byte_4A5EB87 = 1;
  }
  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
  {
    UserServantEntity__getSkillInfo(userSvtEntity, skillInfoList, -1, -1, 1, 0, -1, 0LL);
  }
  else
  {
    v6 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v6 = BalanceConfig_TypeInfo;
    }
    v7 = (SkillInfo_array *)sub_1B88658(SkillInfo___TypeInfo, (unsigned int)v6->static_fields->SvtSkillListMax);
    *skillInfoList = v7;
    sub_1B88554((ServantStatusBattleListViewItem_o *)skillInfoList, (int32_t)v7, v8, v9);
  }
  return userSvtEntity != 0LL;
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
  __int64 v16; // x1
  _BOOL4 isChoice; // w8
  FilterKindList_c *v18; // x0
  ListViewSort_FilterKind_array *v19; // x21
  UserServantEntity_o *v21; // x0
  int32_t dispLimitCount; // w21
  UserServantEntity_o *v23; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  _BOOL4 IsUnSelectedAllTargetFilters; // w21
  _BOOL4 v31; // w23
  _BOOL4 IsMatchEffectCategory; // w22
  _BOOL4 v33; // w0

  if ( (byte_4A5EB77 & 1) == 0 )
  {
    sub_1B885B0(&FilterKindList_TypeInfo);
    sub_1B885B0(&ListViewSort_FilterKind___TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    sub_1B885B0(&ServantEventBonusFilterController_TypeInfo);
    byte_4A5EB77 = 1;
  }
  v5 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v5 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v5->static_fields->ClassGroupFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_67;
  ClassGroupFilterKindList = (__int64)System_Collections_Generic_List_Int32Enum___ToArray(
                                        (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                        (const MethodInfo_34E4AF4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_67;
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0LL) )
  {
    v7 = FilterKindList_TypeInfo;
    if ( !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
      v7 = FilterKindList_TypeInfo;
    }
    ClassGroupFilterKindList = (__int64)v7->static_fields->ClassFilterKindList;
    if ( !ClassGroupFilterKindList )
      goto LABEL_67;
    v8 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                            (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                            (const MethodInfo_34E4AF4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v9 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v9->static_fields->NpTypeFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_67;
  v10 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_34E4AF4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v10, 0LL)
    && !ListViewSort__IsMatchNPTypeFilter(sort, this->fields.userSvtEntity, 0LL) )
  {
    return 0;
  }
  v11 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v11 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v11->static_fields->NpEffectFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_67;
  v12 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_34E4AF4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v12, 0LL)
    && !ListViewSort__IsMatchNPEffectFilter(sort, this->fields.userSvtEntity, 0LL) )
  {
    return 0;
  }
  v13 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v13 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v13->static_fields->CombineBaseServantFilterKindList;
  if ( !ClassGroupFilterKindList )
LABEL_67:
    sub_1B8880C(ClassGroupFilterKindList, sort);
  v14 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_34E4AF4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v14, 0LL)
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
    v21 = this->fields.userSvtEntity;
    if ( v21 )
    {
      dispLimitCount = this->fields.dispLimitCount;
      if ( dispLimitCount != UserServantEntity__getDispLimitCount(v21, 0, 0LL) )
      {
        ClassGroupFilterKindList = (__int64)this->fields.userSvtEntity;
        if ( !ClassGroupFilterKindList )
          goto LABEL_67;
        ClassGroupFilterKindList = UserServantEntity__getDispLimitCount(
                                     (UserServantEntity_o *)ClassGroupFilterKindList,
                                     0,
                                     0LL);
        v23 = this->fields.userSvtEntity;
        this->fields.dispLimitCount = ClassGroupFilterKindList;
        if ( !v23 )
          goto LABEL_67;
        SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v23, -1, 0LL);
        this->fields.skillCategoryIdList = SkillCategoryIdList;
        sub_1B88554(
          (ServantStatusBattleListViewItem_o *)&this->fields.skillCategoryIdList,
          (int32_t)SkillCategoryIdList,
          v25,
          v26);
        ClassGroupFilterKindList = (__int64)this->fields.userSvtEntity;
        if ( !ClassGroupFilterKindList )
          goto LABEL_67;
        TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                         (UserServantEntity_o *)ClassGroupFilterKindList,
                                         0,
                                         0LL);
        this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
        sub_1B88554(
          (ServantStatusBattleListViewItem_o *)&this->fields.tdCategoryIdList,
          (int32_t)TreasureDeviceCategoryIdList,
          v28,
          v29);
      }
    }
    ClassGroupFilterKindList = sub_1B88658(ListViewSort_FilterKind___TypeInfo, 1LL);
    if ( !ClassGroupFilterKindList )
      goto LABEL_67;
    v16 = ClassGroupFilterKindList;
    if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
      goto LABEL_68;
    *(_DWORD *)(ClassGroupFilterKindList + 32) = 50;
    IsUnSelectedAllTargetFilters = ListViewSort__IsUnSelectedAllTargetFilters(
                                     sort,
                                     (ListViewSort_FilterKind_array *)ClassGroupFilterKindList,
                                     0LL);
    ClassGroupFilterKindList = sub_1B88658(ListViewSort_FilterKind___TypeInfo, 1LL);
    if ( !ClassGroupFilterKindList )
      goto LABEL_67;
    v16 = ClassGroupFilterKindList;
    if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
LABEL_68:
      sub_1B88814(ClassGroupFilterKindList, v16);
    *(_DWORD *)(ClassGroupFilterKindList + 32) = 51;
    v31 = ListViewSort__IsUnSelectedAllTargetFilters(
            sort,
            (ListViewSort_FilterKind_array *)ClassGroupFilterKindList,
            0LL);
    IsMatchEffectCategory = ServantEquipEffectFilterController__IsMatchEffectCategory(
                              this->fields.tdCategoryIdList,
                              sort,
                              0LL);
    v33 = ServantEquipEffectFilterController__IsMatchEffectCategory(this->fields.skillCategoryIdList, sort, 0LL);
    if ( ((IsUnSelectedAllTargetFilters ^ v31) & 1) != 0 )
    {
      if ( IsUnSelectedAllTargetFilters )
      {
        if ( !v33 )
          return 0;
      }
      else if ( !IsMatchEffectCategory )
      {
        return 0;
      }
    }
    else if ( !IsMatchEffectCategory && !v33 )
    {
      return 0;
    }
  }
  ClassGroupFilterKindList = sub_1B88658(ListViewSort_FilterKind___TypeInfo, 1LL);
  if ( !ClassGroupFilterKindList )
    goto LABEL_67;
  v16 = ClassGroupFilterKindList;
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
  v18 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v18 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v18->static_fields->RarityFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_67;
  v19 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_34E4AF4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v19, 0LL)
      || ListViewSort__IsSelectedAllTargetFilters(sort, v19, 0LL)
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
  CombineServantListViewItem_o *v10; // x1
  FilterKindList_c *v11; // x0
  ListViewSort_FilterKind_array *v12; // x0
  FilterKindList_c *v13; // x0
  ListViewSort_FilterKind_array *v14; // x0
  FilterKindList_c *v15; // x0
  ListViewSort_FilterKind_array *v16; // x0
  UserServantEntity_o *userSvtEntity; // x21
  _BOOL4 isChoice; // w21
  UserServantEntity_o *v19; // x0
  int32_t dispLimitCount; // w21
  UserServantEntity_o *v21; // x8
  System_Int32_array *SkillCategoryIdList; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  System_Int32_array *TreasureDeviceCategoryIdList; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  _BOOL4 IsUnSelectedAllTargetFilters; // w21
  _BOOL4 v29; // w23
  _BOOL4 IsMatchEffectCategory; // w22
  _BOOL4 v31; // w0
  bool CanNotSelect; // w0
  FilterKindList_c *v33; // x0
  ListViewSort_FilterKind_array *v34; // x21

  v4 = this;
  if ( (byte_4A5EB78 & 1) == 0 )
  {
    sub_1B885B0(&FilterKindList_TypeInfo);
    sub_1B885B0(&ListViewSort_FilterKind___TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    this = (CombineServantListViewItem_o *)sub_1B885B0(&ServantEventBonusFilterController_TypeInfo);
    byte_4A5EB78 = 1;
  }
  if ( !sort )
    goto LABEL_83;
  v5 = ListViewSort__GetFilter(sort, 28, 0LL) && v4->fields.isSameClass;
  v6 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v6 = FilterKindList_TypeInfo;
  }
  this = (CombineServantListViewItem_o *)v6->static_fields->ClassGroupFilterKindList;
  if ( !this )
    goto LABEL_83;
  v7 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                          (System_Collections_Generic_List_T__o *)this,
                                          (const MethodInfo_34E4AF4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v7, 0LL) )
  {
    if ( ListViewSort__IsMatchClassGroupFilter(sort, v4->fields.servantEntity, 0LL) )
      goto LABEL_22;
    goto LABEL_21;
  }
  v8 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v8 = FilterKindList_TypeInfo;
  }
  this = (CombineServantListViewItem_o *)v8->static_fields->ClassFilterKindList;
  if ( !this )
    goto LABEL_83;
  v9 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                          (System_Collections_Generic_List_T__o *)this,
                                          (const MethodInfo_34E4AF4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v9, 0LL) )
    goto LABEL_18;
  this = (CombineServantListViewItem_o *)sub_1B88658(ListViewSort_FilterKind___TypeInfo, 1LL);
  if ( !this )
    goto LABEL_83;
  v10 = this;
  if ( !this->fields.sortIndex )
    goto LABEL_84;
  LODWORD(this->fields.sortValue0) = 28;
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)this, 0LL) )
  {
LABEL_18:
    if ( !ListViewSort__IsMatchClassFilter(sort, v4->fields.servantEntity, 0LL) )
    {
LABEL_21:
      if ( !v5 )
        return 0;
    }
  }
LABEL_22:
  v11 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v11 = FilterKindList_TypeInfo;
  }
  this = (CombineServantListViewItem_o *)v11->static_fields->NpTypeFilterKindList;
  if ( !this )
    goto LABEL_83;
  v12 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)this,
                                           (const MethodInfo_34E4AF4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v12, 0LL)
    && !ListViewSort__IsMatchNPTypeFilter(sort, v4->fields.userSvtEntity, 0LL) )
  {
    return 0;
  }
  v13 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v13 = FilterKindList_TypeInfo;
  }
  this = (CombineServantListViewItem_o *)v13->static_fields->NpEffectFilterKindList;
  if ( !this )
    goto LABEL_83;
  v14 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)this,
                                           (const MethodInfo_34E4AF4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v14, 0LL)
    && !ListViewSort__IsMatchNPEffectFilter(sort, v4->fields.userSvtEntity, 0LL) )
  {
    return 0;
  }
  v15 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v15 = FilterKindList_TypeInfo;
  }
  this = (CombineServantListViewItem_o *)v15->static_fields->ServantTypeFilterKindList;
  if ( !this )
LABEL_83:
    sub_1B8880C(this, sort);
  v16 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)this,
                                           (const MethodInfo_34E4AF4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v16, 0LL)
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
    v19 = v4->fields.userSvtEntity;
    if ( v19 )
    {
      dispLimitCount = v4->fields.dispLimitCount;
      if ( dispLimitCount != UserServantEntity__getDispLimitCount(v19, 0, 0LL) )
      {
        this = (CombineServantListViewItem_o *)v4->fields.userSvtEntity;
        if ( !this )
          goto LABEL_83;
        this = (CombineServantListViewItem_o *)UserServantEntity__getDispLimitCount((UserServantEntity_o *)this, 0, 0LL);
        v21 = v4->fields.userSvtEntity;
        v4->fields.dispLimitCount = (int)this;
        if ( !v21 )
          goto LABEL_83;
        SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v21, -1, 0LL);
        v4->fields.skillCategoryIdList = SkillCategoryIdList;
        sub_1B88554(
          (ServantStatusBattleListViewItem_o *)&v4->fields.skillCategoryIdList,
          (int32_t)SkillCategoryIdList,
          v23,
          v24);
        this = (CombineServantListViewItem_o *)v4->fields.userSvtEntity;
        if ( !this )
          goto LABEL_83;
        TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                         (UserServantEntity_o *)this,
                                         0,
                                         0LL);
        v4->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
        sub_1B88554(
          (ServantStatusBattleListViewItem_o *)&v4->fields.tdCategoryIdList,
          (int32_t)TreasureDeviceCategoryIdList,
          v26,
          v27);
      }
    }
    this = (CombineServantListViewItem_o *)sub_1B88658(ListViewSort_FilterKind___TypeInfo, 1LL);
    if ( !this )
      goto LABEL_83;
    v10 = this;
    if ( !this->fields.sortIndex )
      goto LABEL_84;
    LODWORD(this->fields.sortValue0) = 50;
    IsUnSelectedAllTargetFilters = ListViewSort__IsUnSelectedAllTargetFilters(
                                     sort,
                                     (ListViewSort_FilterKind_array *)this,
                                     0LL);
    this = (CombineServantListViewItem_o *)sub_1B88658(ListViewSort_FilterKind___TypeInfo, 1LL);
    if ( !this )
      goto LABEL_83;
    v10 = this;
    if ( !this->fields.sortIndex )
      goto LABEL_84;
    LODWORD(this->fields.sortValue0) = 51;
    v29 = ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)this, 0LL);
    IsMatchEffectCategory = ServantEquipEffectFilterController__IsMatchEffectCategory(
                              v4->fields.tdCategoryIdList,
                              sort,
                              0LL);
    v31 = ServantEquipEffectFilterController__IsMatchEffectCategory(v4->fields.skillCategoryIdList, sort, 0LL);
    if ( ((IsUnSelectedAllTargetFilters ^ v29) & 1) != 0 )
    {
      if ( IsUnSelectedAllTargetFilters )
      {
        if ( !v31 )
          return 0;
      }
      else if ( !IsMatchEffectCategory )
      {
        return 0;
      }
    }
    else if ( !IsMatchEffectCategory && !v31 )
    {
      return 0;
    }
  }
  this = (CombineServantListViewItem_o *)sub_1B88658(ListViewSort_FilterKind___TypeInfo, 1LL);
  if ( !this )
    goto LABEL_83;
  v10 = this;
  if ( !this->fields.sortIndex )
    goto LABEL_84;
  LODWORD(this->fields.sortValue0) = 39;
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)this, 0LL) )
    goto LABEL_48;
  this = (CombineServantListViewItem_o *)sub_1B88658(ListViewSort_FilterKind___TypeInfo, 1LL);
  if ( !this )
    goto LABEL_83;
  v10 = this;
  if ( !this->fields.sortIndex )
LABEL_84:
    sub_1B88814(this, v10);
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
  v33 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v33 = FilterKindList_TypeInfo;
  }
  this = (CombineServantListViewItem_o *)v33->static_fields->RarityFilterKindList;
  if ( !this )
    goto LABEL_83;
  v34 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)this,
                                           (const MethodInfo_34E4AF4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v34, 0LL)
      || ListViewSort__IsSelectedAllTargetFilters(sort, v34, 0LL)
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
  __int64 v14; // x1
  _BOOL4 isChoice; // w8
  FilterKindList_c *v16; // x0
  ListViewSort_FilterKind_array *v17; // x21
  UserServantEntity_o *v19; // x0
  int32_t dispLimitCount; // w21
  UserServantEntity_o *v21; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  _BOOL4 IsUnSelectedAllTargetFilters; // w21
  _BOOL4 v29; // w23
  _BOOL4 IsMatchEffectCategory; // w22
  _BOOL4 v31; // w0

  if ( (byte_4A5EB76 & 1) == 0 )
  {
    sub_1B885B0(&FilterKindList_TypeInfo);
    sub_1B885B0(&ListViewSort_FilterKind___TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    sub_1B885B0(&ServantEventBonusFilterController_TypeInfo);
    byte_4A5EB76 = 1;
  }
  v5 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v5 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v5->static_fields->ClassGroupFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_62;
  ClassGroupFilterKindList = (__int64)System_Collections_Generic_List_Int32Enum___ToArray(
                                        (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                        (const MethodInfo_34E4AF4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_62;
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0LL) )
  {
    v7 = FilterKindList_TypeInfo;
    if ( !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
      v7 = FilterKindList_TypeInfo;
    }
    ClassGroupFilterKindList = (__int64)v7->static_fields->ClassFilterKindList;
    if ( !ClassGroupFilterKindList )
      goto LABEL_62;
    v8 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                            (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                            (const MethodInfo_34E4AF4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v9 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v9->static_fields->NpTypeFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_62;
  v10 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_34E4AF4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v10, 0LL)
    && !ListViewSort__IsMatchNPTypeFilter(sort, this->fields.userSvtEntity, 0LL) )
  {
    return 0;
  }
  v11 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v11 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v11->static_fields->NpEffectFilterKindList;
  if ( !ClassGroupFilterKindList )
LABEL_62:
    sub_1B8880C(ClassGroupFilterKindList, sort);
  v12 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_34E4AF4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v12, 0LL)
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
    v19 = this->fields.userSvtEntity;
    if ( v19 )
    {
      dispLimitCount = this->fields.dispLimitCount;
      if ( dispLimitCount != UserServantEntity__getDispLimitCount(v19, 0, 0LL) )
      {
        ClassGroupFilterKindList = (__int64)this->fields.userSvtEntity;
        if ( !ClassGroupFilterKindList )
          goto LABEL_62;
        ClassGroupFilterKindList = UserServantEntity__getDispLimitCount(
                                     (UserServantEntity_o *)ClassGroupFilterKindList,
                                     0,
                                     0LL);
        v21 = this->fields.userSvtEntity;
        this->fields.dispLimitCount = ClassGroupFilterKindList;
        if ( !v21 )
          goto LABEL_62;
        SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v21, -1, 0LL);
        this->fields.skillCategoryIdList = SkillCategoryIdList;
        sub_1B88554(
          (ServantStatusBattleListViewItem_o *)&this->fields.skillCategoryIdList,
          (int32_t)SkillCategoryIdList,
          v23,
          v24);
        ClassGroupFilterKindList = (__int64)this->fields.userSvtEntity;
        if ( !ClassGroupFilterKindList )
          goto LABEL_62;
        TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                         (UserServantEntity_o *)ClassGroupFilterKindList,
                                         0,
                                         0LL);
        this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
        sub_1B88554(
          (ServantStatusBattleListViewItem_o *)&this->fields.tdCategoryIdList,
          (int32_t)TreasureDeviceCategoryIdList,
          v26,
          v27);
      }
    }
    ClassGroupFilterKindList = sub_1B88658(ListViewSort_FilterKind___TypeInfo, 1LL);
    if ( !ClassGroupFilterKindList )
      goto LABEL_62;
    v14 = ClassGroupFilterKindList;
    if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
      goto LABEL_63;
    *(_DWORD *)(ClassGroupFilterKindList + 32) = 50;
    IsUnSelectedAllTargetFilters = ListViewSort__IsUnSelectedAllTargetFilters(
                                     sort,
                                     (ListViewSort_FilterKind_array *)ClassGroupFilterKindList,
                                     0LL);
    ClassGroupFilterKindList = sub_1B88658(ListViewSort_FilterKind___TypeInfo, 1LL);
    if ( !ClassGroupFilterKindList )
      goto LABEL_62;
    v14 = ClassGroupFilterKindList;
    if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
LABEL_63:
      sub_1B88814(ClassGroupFilterKindList, v14);
    *(_DWORD *)(ClassGroupFilterKindList + 32) = 51;
    v29 = ListViewSort__IsUnSelectedAllTargetFilters(
            sort,
            (ListViewSort_FilterKind_array *)ClassGroupFilterKindList,
            0LL);
    IsMatchEffectCategory = ServantEquipEffectFilterController__IsMatchEffectCategory(
                              this->fields.tdCategoryIdList,
                              sort,
                              0LL);
    v31 = ServantEquipEffectFilterController__IsMatchEffectCategory(this->fields.skillCategoryIdList, sort, 0LL);
    if ( ((IsUnSelectedAllTargetFilters ^ v29) & 1) != 0 )
    {
      if ( IsUnSelectedAllTargetFilters )
      {
        if ( !v31 )
          return 0;
      }
      else if ( !IsMatchEffectCategory )
      {
        return 0;
      }
    }
    else if ( !IsMatchEffectCategory && !v31 )
    {
      return 0;
    }
  }
  ClassGroupFilterKindList = sub_1B88658(ListViewSort_FilterKind___TypeInfo, 1LL);
  if ( !ClassGroupFilterKindList )
    goto LABEL_62;
  v14 = ClassGroupFilterKindList;
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
  v16 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v16 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v16->static_fields->RarityFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_62;
  v17 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_34E4AF4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v17, 0LL)
      || ListViewSort__IsSelectedAllTargetFilters(sort, v17, 0LL)
      || ListViewSort__IsMatchRarityFilter(sort, this->fields.rarity, 0LL);
}


void __fastcall CombineServantListViewItem__ModifyChoiceItem(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0

  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_1B8880C(0LL, method);
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
    sub_1B8880C(0LL, method);
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

  if ( (byte_4A5EB75 & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4A5EB75 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame || (userSvtEntity = this->fields.userSvtEntity) == 0LL )
    sub_1B8880C(SelfUserGame, v4);
  v6 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  pushUserSvtId = SelfUserGame->fields.pushUserSvtId;
  *(_OWORD *)&v9.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v9.fields.fakeValue = v6;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v8 = v9;
  this->fields.isPush = pushUserSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v8, 0LL);
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
  __int64 v8; // x26
  unsigned __int64 max_length; // x9
  unsigned __int64 v10; // x28
  struct System_Int32_array *v11; // x8
  struct System_Int32_array *svtSkillLvList; // x8
  System_Collections_Generic_List_int__o *v13; // x22
  struct System_Int32_array *v14; // x8
  __int64 v15; // x28
  unsigned __int64 v16; // x9
  unsigned __int64 v17; // x26
  struct System_Int32_array *v18; // x8
  int v19; // w23
  struct UserServantEntity_o *v20; // x8
  CombineAppendPassiveSkillMaster_o *v21; // x23
  __int64 v22; // x24
  __int64 v23; // x25
  struct System_Int32_array *svtSkillNumsList; // x8
  struct System_Int32_array *v25; // x9
  struct System_Int32_array *v26; // x8
  __int64 v27; // x8
  _QWORD *v28; // x9
  __int64 v29; // x10
  char *v30; // x8
  struct UserServantEntity_o *v31; // x8
  SvtAppendPassiveSkillUnlockMaster_o *v32; // x23
  __int64 v33; // x24
  __int64 v34; // x25
  struct System_Int32_array *v35; // x8
  struct System_Int32_array *v36; // x8
  struct System_Int32_array *items; // x8
  _QWORD *v38; // x9
  __int64 size; // x10
  __int64 v40; // x8
  CombineAppendPassiveSkillEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v42; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v43; // 0:x0.16

  if ( (byte_4A5EB74 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_CombineAppendPassiveSkillMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_SkillMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_SvtAppendPassiveSkillUnlockMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1B885B0(&Method_System_Linq_Enumerable_Any_int___);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5EB74 = 1;
  }
  entity = 0LL;
  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_70;
  AppendSkillInfo = UserServantEntity__getAppendSkillInfo((UserServantEntity_o *)userSvtEntity, 0LL);
  if ( !AppendSkillInfo )
    return;
  v5 = AppendSkillInfo;
  userSvtEntity = UserGameMaster__getSelfUserGame(0LL);
  if ( !userSvtEntity )
    goto LABEL_70;
  v6 = *((_DWORD *)userSvtEntity + 24);
  this->fields.isAppendSkillLvMax = 1;
  svtUseSkillIdList = v5->fields.svtUseSkillIdList;
  if ( !svtUseSkillIdList )
    goto LABEL_70;
  v8 = 8LL;
  while ( 1 )
  {
    max_length = svtUseSkillIdList->max_length;
    v10 = v8 - 8;
    if ( v8 - 8 >= (int)max_length )
      break;
    if ( v10 >= max_length )
      goto LABEL_73;
    if ( *((int *)&svtUseSkillIdList->obj.klass + v8) >= 1 )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      userSvtEntity = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_SkillMaster___);
      v11 = v5->fields.svtUseSkillIdList;
      if ( !v11 )
        goto LABEL_70;
      if ( v10 >= v11->max_length )
        goto LABEL_73;
      if ( !userSvtEntity )
        goto LABEL_70;
      userSvtEntity = DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)userSvtEntity,
                        *((_DWORD *)&v11->obj.klass + v8),
                        (const MethodInfo_311D934 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
      svtSkillLvList = v5->fields.svtSkillLvList;
      if ( !svtSkillLvList )
        goto LABEL_70;
      if ( v10 >= svtSkillLvList->max_length )
LABEL_73:
        sub_1B88814(userSvtEntity, method);
      if ( !userSvtEntity )
        goto LABEL_70;
      if ( *((_DWORD *)&svtSkillLvList->obj.klass + v8) < *((_DWORD *)userSvtEntity + 10) )
      {
        this->fields.isAppendSkillLvMax = 0;
        break;
      }
      svtUseSkillIdList = v5->fields.svtUseSkillIdList;
    }
    ++v8;
    if ( !svtUseSkillIdList )
      goto LABEL_70;
  }
  v13 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v13,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  v14 = v5->fields.svtUseSkillIdList;
  if ( !v14 )
LABEL_70:
    sub_1B8880C(userSvtEntity, method);
  v15 = 8LL;
  while ( 1 )
  {
    v16 = v14->max_length;
    v17 = v15 - 8;
    if ( v15 - 8 >= (int)v16 )
      break;
    if ( v17 >= v16 )
      goto LABEL_73;
    if ( *((int *)&v14->obj.klass + v15) < 1 )
      goto LABEL_69;
    v18 = v5->fields.svtSkillLvList;
    if ( !v18 )
      goto LABEL_70;
    if ( v17 >= v18->max_length )
      goto LABEL_73;
    v19 = *((_DWORD *)&v18->obj.klass + v15);
    if ( DataManager_TypeInfo->_2.cctor_finished )
    {
      if ( v19 )
        goto LABEL_33;
    }
    else
    {
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      if ( v19 )
      {
LABEL_33:
        userSvtEntity = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_CombineAppendPassiveSkillMaster___);
        v20 = this->fields.userSvtEntity;
        if ( !v20 )
          goto LABEL_70;
        v21 = (CombineAppendPassiveSkillMaster_o *)userSvtEntity;
        v23 = *(_QWORD *)&v20->fields.svtId.fields.currentCryptoKey;
        v22 = *(_QWORD *)&v20->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v42.fields.currentCryptoKey = v23;
        *(_QWORD *)&v42.fields.fakeValue = v22;
        userSvtEntity = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v42, 0LL);
        svtSkillNumsList = v5->fields.svtSkillNumsList;
        if ( !svtSkillNumsList )
          goto LABEL_70;
        if ( v17 >= svtSkillNumsList->max_length )
          goto LABEL_73;
        v25 = v5->fields.svtSkillLvList;
        if ( !v25 )
          goto LABEL_70;
        if ( v17 >= v25->max_length )
          goto LABEL_73;
        if ( !v21 )
          goto LABEL_70;
        userSvtEntity = (void *)CombineAppendPassiveSkillMaster__TryGetEntityWithTryNum(
                                  v21,
                                  &entity,
                                  (int32_t)userSvtEntity,
                                  *((_DWORD *)&svtSkillNumsList->obj.klass + v15),
                                  *((_DWORD *)&v25->obj.klass + v15),
                                  0LL);
        if ( ((unsigned __int8)userSvtEntity & 1) != 0 )
        {
          if ( !entity )
            goto LABEL_70;
          userSvtEntity = (void *)CombineUtility__CheckCombineNeedItemsEnough(
                                    this->fields.userSvtEntity,
                                    entity->fields.itemIds,
                                    entity->fields.itemNums,
                                    v6,
                                    entity->fields.qp,
                                    0LL);
          if ( ((unsigned __int8)userSvtEntity & 1) != 0 )
          {
            v26 = v5->fields.svtUseSkillIdList;
            if ( !v26 )
              goto LABEL_70;
            if ( v17 >= v26->max_length )
              goto LABEL_73;
            userSvtEntity = this->fields.enableAppendSkillUp;
            if ( !userSvtEntity )
              goto LABEL_70;
            method = (const MethodInfo *)*((unsigned int *)&v26->obj.klass + v15);
            v27 = *((_QWORD *)userSvtEntity + 2);
            v28 = Method_System_Collections_Generic_List_int__Add__;
            ++*((_DWORD *)userSvtEntity + 7);
            if ( !v27 )
              goto LABEL_70;
            v29 = *((int *)userSvtEntity + 6);
            if ( (unsigned int)v29 >= *(_DWORD *)(v27 + 24) )
            {
              v40 = v28[4];
LABEL_68:
              System_Collections_Generic_List_int___AddWithResize(
                (System_Collections_Generic_List_int__o *)userSvtEntity,
                (int32_t)method,
                *(const MethodInfo_34E0810 **)(*(_QWORD *)(v40 + 192) + 112LL));
              goto LABEL_69;
            }
            v30 = (char *)(v27 + 4 * v29);
            *((_DWORD *)userSvtEntity + 6) = v29 + 1;
LABEL_65:
            *((_DWORD *)v30 + 8) = (_DWORD)method;
            goto LABEL_69;
          }
        }
        goto LABEL_69;
      }
    }
    userSvtEntity = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_SvtAppendPassiveSkillUnlockMaster___);
    v31 = this->fields.userSvtEntity;
    if ( !v31 )
      goto LABEL_70;
    v32 = (SvtAppendPassiveSkillUnlockMaster_o *)userSvtEntity;
    v34 = *(_QWORD *)&v31->fields.svtId.fields.currentCryptoKey;
    v33 = *(_QWORD *)&v31->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v43.fields.currentCryptoKey = v34;
    *(_QWORD *)&v43.fields.fakeValue = v33;
    userSvtEntity = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v43, 0LL);
    v35 = v5->fields.svtSkillNumsList;
    if ( !v35 )
      goto LABEL_70;
    if ( v17 >= v35->max_length )
      goto LABEL_73;
    if ( !v32 )
      goto LABEL_70;
    userSvtEntity = SvtAppendPassiveSkillUnlockMaster__GetEntity(
                      v32,
                      (int32_t)userSvtEntity,
                      *((_DWORD *)&v35->obj.klass + v15),
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
        v36 = v5->fields.svtUseSkillIdList;
        if ( !v36 )
          goto LABEL_70;
        if ( v17 >= v36->max_length )
          goto LABEL_73;
        if ( !v13 )
          goto LABEL_70;
        method = (const MethodInfo *)*((unsigned int *)&v36->obj.klass + v15);
        items = v13->fields._items;
        v38 = Method_System_Collections_Generic_List_int__Add__;
        ++v13->fields._version;
        if ( !items )
          goto LABEL_70;
        size = v13->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          v40 = v38[4];
          userSvtEntity = v13;
          goto LABEL_68;
        }
        v30 = (char *)items + 4 * size;
        v13->fields._size = size + 1;
        goto LABEL_65;
      }
    }
LABEL_69:
    v14 = v5->fields.svtUseSkillIdList;
    ++v15;
    if ( !v14 )
      goto LABEL_70;
  }
  this->fields.isAppendSkillUpItemNum = System_Linq_Enumerable__Any_int_(
                                          (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.enableAppendSkillUp,
                                          (const MethodInfo_2E8CDAC *)Method_System_Linq_Enumerable_Any_int___);
  this->fields.isAppendSkillOpenItemNum = System_Linq_Enumerable__Any_int_(
                                            (System_Collections_Generic_IEnumerable_TSource__o *)v13,
                                            (const MethodInfo_2E8CDAC *)Method_System_Linq_Enumerable_Any_int___);
}


void __fastcall CombineServantListViewItem__SetIsCombineExpCampaignTarget(
        CombineServantListViewItem_o *this,
        System_Collections_Generic_List_EventCampaignEntity__o *eventCampaignEntities,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x20
  int32_t v6; // w22
  Il2CppClass *Item; // x0
  __int64 v8; // x1
  int32_t v9; // w2
  int32_t v10; // w3
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass *v14; // x1
  Il2CppClass **v15; // x0
  int data; // w24
  int32_t v17; // w21
  __int64 v18; // x8
  int v19; // w9
  int v20; // w11

  if ( (byte_4A5EB7A & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
    byte_4A5EB7A = 1;
  }
  this->fields.isCombineExpCampaignTarget = 0;
  this->fields.combineExpCampaignValue = 0.0;
  if ( !eventCampaignEntities || this->fields.type )
    return;
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
  if ( eventCampaignEntities->fields._size >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      Item = (Il2CppClass *)System_Collections_Generic_List_object___get_Item(
                              (System_Collections_Generic_List_object__o *)eventCampaignEntities,
                              v6,
                              (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
      if ( !Item )
        break;
      if ( HIDWORD(Item->_1.name) == 2 )
        goto LABEL_11;
      Item = (Il2CppClass *)System_Collections_Generic_List_object___get_Item(
                              (System_Collections_Generic_List_object__o *)eventCampaignEntities,
                              v6,
                              (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
      if ( !Item )
        break;
      if ( HIDWORD(Item->_1.name) == 27 )
      {
LABEL_11:
        Item = (Il2CppClass *)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)eventCampaignEntities,
                                v6,
                                (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
        if ( !v5 )
          break;
        items = v5->fields._items;
        v12 = Method_System_Collections_Generic_List_EventCampaignEntity__Add__;
        ++v5->fields._version;
        if ( !items )
          break;
        size = v5->fields._size;
        v14 = Item;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v5,
            (Il2CppObject *)Item,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
        }
        else
        {
          v15 = &items->obj.klass + size;
          v5->fields._size = size + 1;
          v15[4] = v14;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v15 + 4), (int32_t)v14, v9, v10);
        }
      }
      if ( ++v6 >= eventCampaignEntities->fields._size )
        goto LABEL_17;
    }
LABEL_44:
    sub_1B8880C(Item, v8);
  }
LABEL_17:
  if ( !v5 )
    return;
  if ( v5->fields._size < 1 )
  {
    data = 0;
    goto LABEL_42;
  }
  data = 0;
  v17 = 0;
  while ( 1 )
  {
    Item = (Il2CppClass *)System_Collections_Generic_List_object___get_Item(
                            v5,
                            v17,
                            (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
    if ( !Item )
      goto LABEL_44;
    if ( HIDWORD(Item->_1.name) == 27 )
      break;
    Item = (Il2CppClass *)System_Collections_Generic_List_object___get_Item(
                            v5,
                            v17,
                            (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
    if ( !Item )
      goto LABEL_44;
    v18 = *(_QWORD *)&Item->_1.byval_arg.bits;
    if ( !v18 )
      goto LABEL_44;
    v19 = *(_DWORD *)(v18 + 24);
    if ( v19 >= 1 )
    {
      v20 = 0;
      while ( 1 )
      {
        if ( v19 == v20 )
          sub_1B88814(Item, v8);
        if ( this->fields.svtId == *(_DWORD *)(v18 + 4LL * v20 + 32) )
          break;
        if ( v19 == ++v20 )
          goto LABEL_37;
      }
      this->fields.isCombineExpCampaignTarget = 1;
      Item = (Il2CppClass *)System_Collections_Generic_List_object___get_Item(
                              v5,
                              v17,
                              (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
      if ( !Item )
        goto LABEL_44;
      if ( SLODWORD(Item->_1.this_arg.data) > data )
      {
        Item = (Il2CppClass *)System_Collections_Generic_List_object___get_Item(
                                v5,
                                v17,
                                (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
        if ( !Item )
          goto LABEL_44;
        data = (int)Item->_1.this_arg.data;
      }
    }
LABEL_37:
    if ( ++v17 >= v5->fields._size )
      goto LABEL_42;
  }
  Item = (Il2CppClass *)this->fields.userSvtEntity;
  if ( !Item )
    goto LABEL_44;
  if ( !UserServantEntity__IsExchangeSvt((UserServantEntity_o *)Item, 0LL) )
    goto LABEL_37;
  this->fields.isCombineExpCampaignTarget = 1;
  Item = (Il2CppClass *)System_Collections_Generic_List_object___get_Item(
                          v5,
                          v17,
                          (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
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
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._NoticeTween_k__BackingField,
    (int32_t)noticeTween,
    (int32_t)method,
    v3);
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
  int max_length; // w8
  UserItemMaster_o *v23; // x25
  il2cpp_array_size_t v24; // w9
  il2cpp_array_size_t v25; // w29
  struct UserServantEntity_o *v26; // x8
  __int128 v27; // q1
  int32_t v28; // w26
  int32_t v29; // w23
  __int64 v30; // x8
  _QWORD *v31; // x9
  __int64 v32; // x10
  struct System_Collections_Generic_List_int__o *enableSkillUp; // x8
  __int64 v34; // [xsp+0h] [xbp-C0h]
  __int64 v35; // [xsp+8h] [xbp-B8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v36; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v37; // [xsp+30h] [xbp-90h]
  UserItemEntity_o *v38; // [xsp+50h] [xbp-70h] BYREF
  CombineSkillEntity_o *entity; // [xsp+58h] [xbp-68h] BYREF

  if ( (byte_4A5EB73 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_CombineSkillMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1B885B0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5EB73 = 1;
  }
  v38 = 0LL;
  entity = 0LL;
  SelfUserGame = (__int64)UserGameMaster__getSelfUserGame(0LL);
  userSvtEntity = this->fields.userSvtEntity;
  v35 = SelfUserGame;
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
        goto LABEL_61;
      v11 = *(_DWORD *)(v7 + 32 + 4 * v10);
      if ( v11 >= 1 )
      {
        v12 = *(_DWORD *)(v9 + 32 + 4 * v10);
        SelfUserGame = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !SelfUserGame )
          goto LABEL_60;
        SelfUserGame = (__int64)DataManager__GetMasterData_object_(
                                  (DataManager_o *)SelfUserGame,
                                  (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_SkillMaster___);
        if ( !SelfUserGame )
          goto LABEL_60;
        SelfUserGame = (__int64)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)SelfUserGame,
                                  v11,
                                  (const MethodInfo_311D934 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
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
  SelfUserGame = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_60;
  SelfUserGame = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)SelfUserGame,
                            (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_CombineSkillMaster___);
  v13 = *(_QWORD *)(v7 + 24);
  if ( (int)v13 >= 1 )
  {
    v14 = (CombineSkillMaster_o *)SelfUserGame;
    v15 = 0LL;
    v16 = 0;
    v34 = v7;
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
                         0LL);
        if ( (SelfUserGame & 1) != 0 )
        {
          if ( !entity )
            goto LABEL_60;
          v19 = v14;
          itemIds = entity->fields.itemIds;
          itemNums = entity->fields.itemNums;
          SelfUserGame = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !SelfUserGame )
            goto LABEL_60;
          SelfUserGame = (__int64)DataManager__GetMasterData_object_(
                                    (DataManager_o *)SelfUserGame,
                                    (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserItemMaster___);
          if ( !itemIds )
            goto LABEL_60;
          max_length = itemIds->max_length;
          if ( max_length >= 1 )
          {
            v23 = (UserItemMaster_o *)SelfUserGame;
            v24 = 0;
            while ( 1 )
            {
              if ( v24 >= max_length )
                goto LABEL_61;
              if ( !itemNums )
                goto LABEL_60;
              v25 = v24;
              if ( v24 >= itemNums->max_length )
                goto LABEL_61;
              v26 = this->fields.userSvtEntity;
              if ( !v26 )
                goto LABEL_60;
              v27 = *(_OWORD *)&v26->fields.userId.fields.fakeValue;
              v28 = itemIds->m_Items[v24 + 1];
              v29 = itemNums->m_Items[v24 + 1];
              *(_OWORD *)&v37.fields.currentCryptoKey = *(_OWORD *)&v26->fields.userId.fields.currentCryptoKey;
              *(_OWORD *)&v37.fields.fakeValue = v27;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
              v36 = v37;
              SelfUserGame = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v36, 0LL);
              if ( !v23 )
                goto LABEL_60;
              SelfUserGame = UserItemMaster__TryGetEntity(v23, &v38, SelfUserGame, v28, 0LL);
              if ( (SelfUserGame & 1) == 0 )
                break;
              if ( !v38 )
                goto LABEL_60;
              if ( v29 > v38->fields.num )
                break;
              max_length = itemIds->max_length;
              v24 = v25 + 1;
              if ( (int)(v25 + 1) >= max_length )
              {
                v16 = 1;
                goto LABEL_47;
              }
            }
            v16 = 0;
          }
LABEL_47:
          if ( !v35 || !entity )
            goto LABEL_60;
          v14 = v19;
          v7 = v34;
          if ( *(_DWORD *)(v35 + 96) < entity->fields.qp || (v16 & 1) == 0 )
          {
            v16 = 0;
          }
          else
          {
            SelfUserGame = (__int64)this->fields.enableSkillUp;
            if ( !SelfUserGame )
              goto LABEL_60;
            v30 = *(_QWORD *)(SelfUserGame + 16);
            v31 = Method_System_Collections_Generic_List_int__Add__;
            ++*(_DWORD *)(SelfUserGame + 28);
            if ( !v30 )
              goto LABEL_60;
            v32 = *(int *)(SelfUserGame + 24);
            if ( (unsigned int)v32 >= *(_DWORD *)(v30 + 24) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                (System_Collections_Generic_List_int__o *)SelfUserGame,
                v17,
                *(const MethodInfo_34E0810 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
            }
            else
            {
              *(_DWORD *)(SelfUserGame + 24) = v32 + 1;
              *(_DWORD *)(v30 + 4 * v32 + 32) = v17;
            }
            v16 = 1;
          }
        }
      }
      LODWORD(v13) = *(_DWORD *)(v7 + 24);
      if ( (__int64)++v15 >= (int)v13 )
        goto LABEL_58;
    }
LABEL_61:
    sub_1B88814(SelfUserGame, v4);
  }
LABEL_58:
  enableSkillUp = this->fields.enableSkillUp;
  if ( !enableSkillUp )
LABEL_60:
    sub_1B8880C(SelfUserGame, v4);
  this->fields.isSkillUpItemNum = enableSkillUp->fields._size > 0;
}


bool __fastcall CombineServantListViewItem__SetSortValue(
        CombineServantListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int64_t iconLabelInfo2; // x0
  const MethodInfo *v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t bonusKind2; // w8
  int32_t v11; // w2
  int32_t bonusKind2Id; // w8
  struct ListViewManager_o *v13; // x8
  __int64 v14; // x11
  UnityEngine_Object_o *v15; // x21
  int32_t v16; // w8
  int32_t v17; // w8
  bool IsEnableServant; // w0
  Il2CppObject *MasterData_object; // x0
  int32_t svtId; // w22
  ServantFilterMaster_o *v21; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // kr00_16
  System_Collections_Generic_List_EventGroupEntity__o *EntitiesByGroupId; // x22
  int32_t v24; // w2
  int32_t v25; // w3
  struct ListViewManager_o *manager; // x8
  CombineServantListViewManager_c *v27; // x9
  __int64 v28; // x10
  struct ListViewManager_o *v29; // x11
  int32_t v30; // w8
  struct UserServantEntity_o *v31; // x8
  __int128 v32; // q1
  int32_t bonusKindId; // w22
  int64_t v34; // x0
  int32_t v35; // w1
  ServantStatusBattleListViewItem_o *v36; // x0
  System_Func_object__bool__o *v37; // x23
  const MethodInfo *v38; // x2
  _BOOL4 isChoice; // w11
  _BOOL4 isLock; // w23
  _BOOL4 v41; // w21
  int64_t *p_sortValue0; // x22
  __int64 v43; // x8
  unsigned int v44; // w8
  __int64 v45; // x8
  int32_t type; // w8
  __int64 v47; // x8
  int32_t rarity; // w8
  int64_t v49; // x8
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v51; // q1
  struct UserServantEntity_o *v52; // x8
  IconLabelInfo_o *iconLabelInfo1; // x20
  int32_t v54; // w21
  struct UserServantEntity_o *v55; // x8
  int32_t v56; // w8
  IconLabelInfo_o *v57; // x20
  struct UserServantEntity_o *v58; // x8
  int64_t v59; // x20
  struct IconLabelInfo_o *v60; // x21
  int32_t v61; // w3
  IconLabelInfo_o *v62; // x0
  int32_t v63; // w2
  unsigned int v64; // w8
  IconLabelInfo_o *v65; // x20
  struct UserServantEntity_o *v66; // x8
  int64_t hp; // x2
  int32_t adjustHp; // w3
  int32_t v69; // w1
  struct UserServantEntity_o *v70; // x8
  struct IconLabelInfo_o *v71; // x19
  struct ServantEntity_o *servantEntity; // x8
  int64_t cost; // x2
  int32_t lv; // w20
  int64_t friendship; // x2
  int32_t friendshipMax; // w3
  int32_t v77; // w1
  __int64 methodPtr_low; // x10
  struct ServantEntity_o *v79; // x8
  __int64 collectionNo; // x10
  struct UserServantEntity_o *v81; // x8
  int32_t v82; // w21
  __int64 v83; // x9
  bool v84; // zf
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v86; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v87; // [xsp+30h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v88; // [xsp+50h] [xbp-60h]
  int32_t tdMaxLv[2]; // [xsp+78h] [xbp-38h] BYREF

  if ( (byte_4A5EB79 & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_Any_EventGroupEntity___);
    sub_1B885B0(&CombineServantListViewManager_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantFilterMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_EventGroupMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&System_Func_EventGroupEntity__bool__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventGroupEntity__get_Count__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&TutorialFlag_TypeInfo);
    sub_1B885B0(&Method_CombineServantListViewItem___c__DisplayClass114_0__SetSortValue_b__0__);
    sub_1B885B0(&CombineServantListViewItem___c__DisplayClass114_0_TypeInfo);
    byte_4A5EB79 = 1;
  }
  *(_QWORD *)tdMaxLv = 0LL;
  v5 = sub_1B887FC(CombineServantListViewItem___c__DisplayClass114_0_TypeInfo);
  CombineServantListViewItem___c__DisplayClass114_0___ctor(
    (CombineServantListViewItem___c__DisplayClass114_0_o *)v5,
    0LL);
  if ( !v5 )
    goto LABEL_293;
  *(_QWORD *)(v5 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)this, v8, v9);
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
      if ( !CombineServantListViewItem__IsMatchMaterialFilter(this, sort, v38) )
        goto LABEL_104;
      goto LABEL_78;
    }
    if ( !type )
    {
      if ( !CombineServantListViewItem__IsMatchBaseServantFilter(this, sort, v38) )
        goto LABEL_104;
LABEL_78:
      isChoice = this->fields.isChoice;
      iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo2;
      if ( this->fields.isSwapLock )
        isLock = !this->fields.isLock;
      else
        isLock = this->fields.isLock;
      if ( this->fields.isSwapChoice )
        v41 = !isChoice;
      else
        v41 = isChoice;
      if ( !iconLabelInfo2 )
        goto LABEL_293;
      IconLabelInfo__Clear((IconLabelInfo_o *)iconLabelInfo2, 0LL);
      this->fields.sortValue0 = 0LL;
      p_sortValue0 = &this->fields.sortValue0;
      this->fields.sortValue0B = 0LL;
      if ( !sort->fields.isSmartSort )
      {
        if ( v41 && sort->fields.isChoiceSort )
        {
          v44 = this->fields.type;
          if ( v44 <= 0xB )
          {
            if ( ((1 << v44) & 0xFDD) != 0 )
              v45 = 10LL;
            else
LABEL_124:
              v45 = -10LL;
            *p_sortValue0 = v45;
          }
        }
LABEL_189:
        iconLabelInfo2 = 1LL;
        switch ( sort->fields.sortKind )
        {
          case 0:
            iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
            v49 = !this->fields.isParty;
            goto LABEL_225;
          case 1:
            userSvtEntity = this->fields.userSvtEntity;
            if ( !userSvtEntity )
              break;
            v51 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
            *(_OWORD *)&v88.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v88.fields.fakeValue = v51;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v86 = v88;
            iconLabelInfo2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v86, 0LL);
            v52 = this->fields.userSvtEntity;
            this->fields.sortValue1 = iconLabelInfo2;
            if ( !v52 )
              break;
            iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
            if ( !iconLabelInfo2 )
              break;
            IconLabelInfo__SetTime((IconLabelInfo_o *)iconLabelInfo2, 49, v52->fields.createdAt, 0, 0, 0, 0LL);
            goto LABEL_219;
          case 2:
            iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
            this->fields.sortValue1 = this->fields.rarity;
            if ( !iconLabelInfo2 )
              break;
            iconLabelInfo1 = this->fields.iconLabelInfo1;
            v54 = *(_DWORD *)(iconLabelInfo2 + 256);
            iconLabelInfo2 = UserServantEntity__getLevelMax((UserServantEntity_o *)iconLabelInfo2, 0LL);
            v55 = this->fields.userSvtEntity;
            if ( !v55 || !iconLabelInfo1 )
              break;
            IconLabelInfo__Set_38140136(iconLabelInfo1, 2, v54, iconLabelInfo2, 0, 0, 0, v55->fields.lv, 0LL);
            v56 = this->fields.type;
            if ( v56 != 10 && v56 != 7 )
              goto LABEL_260;
            iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
            if ( !iconLabelInfo2 )
              break;
            v57 = this->fields.iconLabelInfo2;
            iconLabelInfo2 = UserServantEntity__getRarity((UserServantEntity_o *)iconLabelInfo2, 0LL);
            v58 = this->fields.userSvtEntity;
            if ( !v58 || !v57 )
              break;
            IconLabelInfo__Set_38140136(v57, 36, iconLabelInfo2, v58->fields.exceedCount, 0, 0, 0, v58->fields.lv, 0LL);
            goto LABEL_260;
          case 3:
            iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
            if ( !iconLabelInfo2 )
              break;
            v59 = *(int *)(iconLabelInfo2 + 256);
            v60 = this->fields.iconLabelInfo1;
            this->fields.sortValue1 = v59;
            iconLabelInfo2 = UserServantEntity__getLevelMax((UserServantEntity_o *)iconLabelInfo2, 0LL);
            if ( !v60 )
              break;
            v61 = iconLabelInfo2;
            v62 = v60;
            v63 = v59;
            goto LABEL_230;
          case 4:
            iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
            if ( !iconLabelInfo2 )
              break;
            v64 = this->fields.type & 0xFFFFFFFE;
            this->fields.sortValue1 = *(int *)(iconLabelInfo2 + 292);
            if ( v64 == 4 )
            {
              v65 = this->fields.iconLabelInfo1;
            }
            else
            {
              UserServantEntity__getTreasureDeviceInfo_40212352(
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
              v77 = 33;
LABEL_247:
              IconLabelInfo__Set_38140136(
                (IconLabelInfo_o *)iconLabelInfo2,
                v77,
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
              v65 = this->fields.iconLabelInfo2;
            }
            v82 = *(_DWORD *)(iconLabelInfo2 + 256);
            iconLabelInfo2 = UserServantEntity__getLevelMax((UserServantEntity_o *)iconLabelInfo2, 0LL);
            if ( v65 )
            {
              IconLabelInfo__Set_38140136(v65, 2, v82, iconLabelInfo2, 0, 0, 0, 0, 0LL);
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
            v66 = this->fields.userSvtEntity;
            if ( !v66 )
              break;
            hp = v66->fields.hp;
            iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
            this->fields.sortValue1 = hp;
            if ( !iconLabelInfo2 )
              break;
            adjustHp = v66->fields.adjustHp;
            v69 = 3;
            goto LABEL_218;
          case 6:
            v70 = this->fields.userSvtEntity;
            if ( !v70 )
              break;
            hp = v70->fields.atk;
            iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
            this->fields.sortValue1 = hp;
            if ( !iconLabelInfo2 )
              break;
            adjustHp = v70->fields.adjustAtk;
            v69 = 5;
LABEL_218:
            IconLabelInfo__Set_38140136((IconLabelInfo_o *)iconLabelInfo2, v69, hp, adjustHp, 0, 0, 0, 0, 0LL);
LABEL_219:
            iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
            if ( !iconLabelInfo2 )
              break;
            v71 = this->fields.iconLabelInfo2;
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
            IconLabelInfo__Set_38140136((IconLabelInfo_o *)iconLabelInfo2, 7, cost, 0, 0, 0, 0, 0, 0LL);
            goto LABEL_248;
          case 8:
            iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
            v49 = -this->fields.priority;
LABEL_225:
            this->fields.sortValue1 = v49;
            if ( !iconLabelInfo2 )
              break;
            v71 = this->fields.iconLabelInfo1;
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
            v77 = 32;
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
            v79 = this->fields.servantEntity;
            if ( !v79 )
              break;
            collectionNo = v79->fields.collectionNo;
            v81 = this->fields.userSvtEntity;
            this->fields.sortValue1 = (((unsigned __int64)(unsigned int)this->fields.rarity << 32)
                                     + (iconLabelInfo2 << 48)) | collectionNo;
            if ( !v81 )
              break;
            v71 = this->fields.iconLabelInfo1;
            lv = v81->fields.lv;
            iconLabelInfo2 = (int64_t)v81;
LABEL_228:
            iconLabelInfo2 = UserServantEntity__getLevelMax((UserServantEntity_o *)iconLabelInfo2, 0LL);
            if ( !v71 )
              break;
            v61 = iconLabelInfo2;
            v62 = v71;
            v63 = lv;
LABEL_230:
            IconLabelInfo__Set_38140136(v62, 2, v63, v61, 0, 0, 0, 0, 0LL);
            goto LABEL_260;
          case 0xF:
            friendship = this->fields.hpReinforceValue;
            iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
            this->fields.isDispHpStatusUpInfo = 1;
            this->fields.sortValue1 = friendship;
            if ( !iconLabelInfo2 )
              break;
            friendshipMax = this->fields.nowMaxHpReinforceValue;
            v77 = 44;
            goto LABEL_247;
          case 0x10:
            friendship = this->fields.atkReinforceValue;
            iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
            this->fields.isDispAtkStatusUpInfo = 1;
            this->fields.sortValue1 = friendship;
            if ( !iconLabelInfo2 )
              break;
            friendshipMax = this->fields.nowMaxAtkReinforceValue;
            v77 = 45;
            goto LABEL_247;
          default:
            return iconLabelInfo2;
        }
LABEL_293:
        sub_1B8880C(iconLabelInfo2, v7);
      }
      switch ( this->fields.type )
      {
        case 0:
          if ( this->fields.isHeroineSvt )
          {
            if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
            if ( TutorialFlag__Get_37688364(126, 0LL) )
              goto LABEL_163;
          }
          if ( this->fields.isParty )
          {
            v43 = 20LL;
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
              v47 = -120LL;
            }
            else
            {
              v47 = -5LL;
              if ( !isLock && !v41 )
                v47 = 30LL;
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
                  v47 = -90LL;
                  if ( !this->fields.isAtkSecondUpMax && this->fields.isAtkUpMax )
                    v47 = 90LL;
                  goto LABEL_281;
                }
                v83 = 70LL;
                v84 = !this->fields.isAtkUpMax;
                v47 = -110LL;
              }
              else
              {
                if ( rarity == 4 )
                {
                  v47 = -80LL;
                  if ( !this->fields.isHpSecondUpMax && this->fields.isHpUpMax )
                    v47 = 100LL;
LABEL_281:
                  *p_sortValue0 = v47;
                  if ( isLock || v41 )
                    v47 = -5LL;
                  goto LABEL_283;
                }
                v83 = 80LL;
                v84 = !this->fields.isHpUpMax;
                v47 = -100LL;
              }
              if ( v84 )
                v47 = v83;
              goto LABEL_281;
            }
            v47 = -150LL;
          }
          else
          {
            if ( !CombineServantListViewItem__get_IsCanNotSelectMaterial(this, v7) )
            {
LABEL_284:
              if ( this->fields.isFortification )
                *p_sortValue0 = -10LL;
              if ( v41 && sort->fields.isChoiceSort )
                *(_OWORD *)p_sortValue0 = xmmword_BB4090;
              goto LABEL_189;
            }
            if ( this->fields.isLimitCntTarget )
            {
              v47 = -20LL;
            }
            else if ( this->fields.isParty )
            {
              v47 = -30LL;
            }
            else if ( this->fields.isUseSupport )
            {
              v47 = -40LL;
            }
            else
            {
              v47 = -10LL;
              if ( this->fields.isUseRecommendSupport )
                v47 = -50LL;
            }
          }
LABEL_283:
          *p_sortValue0 = v47;
          goto LABEL_284;
        case 2:
          if ( this->fields.isSealCombineLimit )
          {
            v43 = 0LL;
            goto LABEL_186;
          }
          if ( !CombineServantListViewItem__get_IsCanNotBaseSelect(this, v7)
            && this->fields.isLimitUpItemNum
            && this->fields.isLvMax )
          {
LABEL_183:
            v43 = 10LL;
            goto LABEL_186;
          }
          if ( this->fields.isHeroineSvt )
          {
LABEL_185:
            v43 = -10LL;
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
            if ( TutorialFlag__Get_37688364(126, 0LL) )
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
          if ( v41 && sort->fields.isChoiceSort || this->fields.isFortification )
            goto LABEL_124;
          goto LABEL_189;
        case 6:
          if ( !CombineServantListViewItem__get_IsCanNotBaseSelect(this, v7)
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
          if ( !TutorialFlag__Get_37688364(126, 0LL) )
            goto LABEL_187;
          goto LABEL_163;
        case 8:
          if ( !CombineServantListViewItem__get_IsCanNotBaseSelect(this, v7)
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
          if ( !CombineServantListViewItem__get_IsCanNotBaseSelect(this, v7) )
            goto LABEL_183;
          if ( this->fields.isHeroineSvt )
            goto LABEL_185;
          if ( this->fields.isSealCombineLimit )
          {
LABEL_161:
            v43 = -15LL;
          }
          else if ( this->fields.isLimitCntMax )
          {
LABEL_163:
            v43 = -20LL;
          }
          else
          {
            if ( !this->fields.isEventJoin )
              goto LABEL_187;
LABEL_155:
            v43 = -30LL;
          }
LABEL_186:
          *p_sortValue0 = v43;
LABEL_187:
          if ( v41 && sort->fields.isChoiceSort )
            this->fields.sortValue0B = 10LL;
          goto LABEL_189;
        case 0xA:
          if ( this->fields.isHeroineSvt )
          {
            if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
            if ( TutorialFlag__Get_37688364(126, 0LL) )
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
            if ( TutorialFlag__Get_37688364(126, 0LL) )
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
    if ( CombineServantListViewItem__IsMatchServantFilter(this, sort, v38) )
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
        iconLabelInfo2 = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventGroupMaster___);
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
              v27 = CombineServantListViewManager_TypeInfo;
              v28 = LOBYTE(CombineServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
              if ( LOBYTE(manager->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v28 )
              {
                if ( (CombineServantListViewManager_c *)manager->klass->_2.typeHierarchy[v28 - 1] == CombineServantListViewManager_TypeInfo )
                  v29 = sort->fields.manager;
                else
                  v29 = 0LL;
              }
              else
              {
                v29 = 0LL;
              }
              *(_QWORD *)(v5 + 24) = v29;
              v36 = (ServantStatusBattleListViewItem_o *)(v5 + 24);
              if ( LOBYTE(manager->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v28 )
              {
                if ( (CombineServantListViewManager_c *)manager->klass->_2.typeHierarchy[v28 - 1] == v27 )
                  v35 = (int)manager;
                else
                  v35 = 0;
              }
              else
              {
                v35 = 0;
              }
            }
            else
            {
              v35 = 0;
              *(_QWORD *)(v5 + 24) = 0LL;
              v36 = (ServantStatusBattleListViewItem_o *)(v5 + 24);
            }
            sub_1B88554(v36, v35, v24, v25);
            v37 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_EventGroupEntity__bool__TypeInfo);
            System_Func_object__bool____ctor(
              v37,
              (Il2CppObject *)v5,
              Method_CombineServantListViewItem___c__DisplayClass114_0__SetSortValue_b__0__,
              0LL);
            this->fields.isEventUpVal = BasicHelper__Any_object_(
                                          (System_Collections_Generic_List_T__o *)EntitiesByGroupId,
                                          (System_Func_T__bool__o *)v37,
                                          (const MethodInfo_2E6ACD0 *)Method_BasicHelper_Any_EventGroupEntity___);
          }
        }
        goto LABEL_75;
      case 2:
        v13 = sort->fields.manager;
        if ( v13
          && (v14 = LOBYTE(CombineServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr),
              LOBYTE(v13->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v14) )
        {
          if ( (CombineServantListViewManager_c *)v13->klass->_2.typeHierarchy[v14 - 1] == CombineServantListViewManager_TypeInfo )
            v15 = (UnityEngine_Object_o *)sort->fields.manager;
          else
            v15 = 0LL;
        }
        else
        {
          v15 = 0LL;
        }
        if ( this->fields.bonusKind == 2 )
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
        this->fields.bonusKind = 2;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        iconLabelInfo2 = UnityEngine_Object__op_Implicit(v15, 0LL);
        if ( (iconLabelInfo2 & 1) != 0 )
        {
          if ( !v15 )
            goto LABEL_293;
          iconLabelInfo2 = CombineServantListViewManager__IsLargeSuccessCampaignClassId(
                             (CombineServantListViewManager_o *)v15,
                             this->fields.bonusKindId,
                             this->fields.svtId,
                             0LL);
          v31 = this->fields.userSvtEntity;
          this->fields.isEventUpVal = iconLabelInfo2 & 1;
          if ( !v31 )
            goto LABEL_293;
          v32 = *(_OWORD *)&v31->fields.id.fields.fakeValue;
          bonusKindId = this->fields.bonusKindId;
          *(_OWORD *)&v88.fields.currentCryptoKey = *(_OWORD *)&v31->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v88.fields.fakeValue = v32;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v87 = v88;
          v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v87, 0LL);
          if ( CombineServantListViewManager__IsExchangeSvtExist(
                 (CombineServantListViewManager_o *)v15,
                 bonusKindId,
                 v34,
                 0LL) )
          {
            goto LABEL_76;
          }
        }
        goto LABEL_75;
      case 3:
        if ( this->fields.bonusKind == 3 )
        {
          v16 = sort->fields.bonusKind2Id;
          if ( this->fields.bonusKindId == v16 )
            goto LABEL_75;
        }
        else
        {
          v16 = sort->fields.bonusKind2Id;
        }
        this->fields.bonusKindId = v16;
        this->fields.bonusKind = 3;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        iconLabelInfo2 = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventCampaignMaster___);
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
          v11 = sort->fields.bonusKind2Id;
          if ( this->fields.bonusKindId == v11 )
            goto LABEL_75;
        }
        else
        {
          v11 = sort->fields.bonusKind2Id;
        }
        iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
        this->fields.bonusKind = bonusKind2;
        this->fields.bonusKindId = v11;
        if ( !iconLabelInfo2 )
          goto LABEL_293;
        IsEnableServant = UserServantEntity__getEventUpVal_40205120(
                            (UserServantEntity_o *)iconLabelInfo2,
                            this->fields.setupInfo,
                            v11,
                            0LL,
                            0LL);
        goto LABEL_37;
      case 7:
        if ( this->fields.bonusKind == 7 )
        {
          v17 = sort->fields.bonusKind2Id;
          if ( this->fields.bonusKindId == v17 )
          {
LABEL_75:
            if ( !this->fields.isEventUpVal )
              break;
            goto LABEL_76;
          }
        }
        else
        {
          v17 = sort->fields.bonusKind2Id;
        }
        this->fields.bonusKindId = v17;
        this->fields.bonusKind = 7;
        iconLabelInfo2 = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !iconLabelInfo2 )
          goto LABEL_293;
        MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)iconLabelInfo2,
                              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantFilterMaster___);
        svtId = this->fields.svtId;
        v21 = (ServantFilterMaster_o *)MasterData_object;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(svtId, 0LL);
        v7 = *(const MethodInfo **)&v22.fields.fakeValue;
        iconLabelInfo2 = *(_QWORD *)&v22.fields.currentCryptoKey;
        if ( !v21 )
          goto LABEL_293;
        IsEnableServant = ServantFilterMaster__IsEnableServant(v21, v22, this->fields.bonusKindId, 0LL);
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

  if ( (byte_4A5EB84 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_15226/*"UserSvt "*/);
    byte_4A5EB84 = 1;
  }
  NameText = CombineServantListViewItem__get_NameText(this, method);
  return System_String__Concat_61707032((System_String_o *)StringLiteral_15226/*"UserSvt "*/, NameText, 0LL);
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

  if ( (byte_4A5EB80 & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_19052/*"error"*/);
    byte_4A5EB80 = 1;
  }
  servantEntity = this->fields.servantEntity;
  if ( !servantEntity )
    return (System_String_o *)StringLiteral_19052/*"error"*/;
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
  if ( (byte_4A5EB81 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5EB81 = 1;
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
    sub_1B8880C(0LL, method);
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

  if ( (byte_4A5EB82 & 1) == 0 )
  {
    sub_1B885B0(&TutorialFlag_TypeInfo);
    byte_4A5EB82 = 1;
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
    if ( TutorialFlag__Get_37688364(126, 0LL) )
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
        result = TutorialFlag__Get_37688364(126, 0LL) || this->fields.isSkillLvMax;
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
            if ( TutorialFlag__Get_37688364(126, 0LL) )
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
      if ( TutorialFlag__Get_37688364(126, 0LL) )
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
      return TutorialFlag__Get_37688364(126, 0LL);
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

  if ( (byte_4A5EB83 & 1) == 0 )
  {
    sub_1B885B0(&TutorialFlag_TypeInfo);
    byte_4A5EB83 = 1;
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
    if ( TutorialFlag__Get_37688364(126, 0LL) )
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
    sub_1B8880C(v6, v5);
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
    sub_1B8880C(0LL, method);
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
    sub_1B8880C(0LL, method);
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
    sub_1B8880C(0LL, method);
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
    sub_1B8880C(0LL, method);
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
  struct UserServantEntity_o *userSvtEntity; // x8
  int32_t lv; // w19

  if ( (byte_4A5EB7E & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_19052/*"error"*/);
    byte_4A5EB7E = 1;
  }
  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    return (System_String_o *)StringLiteral_19052/*"error"*/;
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
  ServantEntity_o *servantEntity; // x19
  struct UserServantEntity_o *userSvtEntity; // x8
  __int64 v5; // x20
  __int64 v6; // x21
  int32_t v7; // w1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  v2 = this;
  if ( (byte_4A5EB7D & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (CombineServantListViewItem_o *)sub_1B885B0(&StringLiteral_19052/*"error"*/);
    byte_4A5EB7D = 1;
  }
  servantEntity = v2->fields.servantEntity;
  if ( !servantEntity )
    return (System_String_o *)StringLiteral_19052/*"error"*/;
  userSvtEntity = v2->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_1B8880C(this, method);
  v6 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.currentCryptoKey;
  v5 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v9.fields.currentCryptoKey = v6;
  *(_QWORD *)&v9.fields.fakeValue = v5;
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v9, 0LL);
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

  if ( (byte_4A5EB7F & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    byte_4A5EB7F = 1;
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
  Il2CppObject *Master_object; // x0
  __int64 v4; // x1
  Il2CppObject *Entity; // x0

  if ( (byte_4A5EB85 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_SvtCoinMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__GetEntity__);
    byte_4A5EB85 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_SvtCoinMaster___);
  if ( !Master_object )
    sub_1B8880C(0LL, v4);
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             this->fields.svtId,
             (const MethodInfo_311D934 *)Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__GetEntity__);
  if ( Entity )
    return (int32_t)Entity[1].monitor;
  else
    return -1;
}


int32_t __fastcall CombineServantListViewItem__get_SkillOpenItemNum(
        CombineServantListViewItem_o *this,
        const MethodInfo *method)
{
  int64_t Master_object; // x0
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

  if ( (byte_4A5EB86 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_UserSvtCoinMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4A5EB86 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserSvtCoinMaster___);
  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_17;
  v6 = *(_OWORD *)&userSvtEntity->fields.userId.fields.fakeValue;
  v7 = (UserSvtCoinMaster_o *)Master_object;
  *(_OWORD *)&v14.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v14.fields.fakeValue = v6;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v13 = v14;
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v13, 0LL);
  v8 = this->fields.userSvtEntity;
  if ( !v8 )
    goto LABEL_17;
  v9 = Master_object;
  v11 = *(_QWORD *)&v8->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&v8->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v16.fields.currentCryptoKey = v11;
  *(_QWORD *)&v16.fields.fakeValue = v10;
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v16, 0LL);
  if ( !v7 )
    goto LABEL_17;
  Master_object = UserSvtCoinMaster__TryGetEntity(v7, &entity, v9, Master_object, 0LL);
  if ( (Master_object & 1) != 0 )
  {
    if ( entity )
      return entity->fields.num;
LABEL_17:
    sub_1B8880C(Master_object, v4);
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
  ServantStatusBattleListViewItem_o *p_userSvtEntity; // x19
  struct UserServantEntity_o *userSvtEntity; // t1
  __int128 v6; // q1
  int64_t v7; // x20
  Il2CppObject *Entity; // x20
  int32_t v9; // w2
  int32_t v10; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v12; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v13; // [xsp+20h] [xbp-40h]

  v2 = this;
  if ( (byte_4A5EB7B & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    this = (CombineServantListViewItem_o *)sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5EB7B = 1;
  }
  userSvtEntity = v2->fields.userSvtEntity;
  p_userSvtEntity = (ServantStatusBattleListViewItem_o *)&v2->fields.userSvtEntity;
  v3 = userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_9;
  v6 = *(_OWORD *)&v3->fields.id.fields.fakeValue;
  *(_OWORD *)&v13.fields.currentCryptoKey = *(_OWORD *)&v3->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v13.fields.fakeValue = v6;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v12 = v13;
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v12, 0LL);
  this = (CombineServantListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (this = (CombineServantListViewItem_o *)DataManager__GetMasterData_object_(
                                                 (DataManager_o *)this,
                                                 (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
  {
LABEL_9:
    sub_1B8880C(this, method);
  }
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             v7,
             (const MethodInfo_311DAE0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  p_userSvtEntity->klass = (ServantStatusBattleListViewItem_c *)Entity;
  sub_1B88554(p_userSvtEntity, (int32_t)Entity, v9, v10);
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
  if ( (byte_4A5EB7C & 1) == 0 )
  {
    this = (CombineServantListViewItem_o *)sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4A5EB7C = 1;
  }
  userSvtEntity = v2->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_1B8880C(this, method);
  v4 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v7.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v7.fields.fakeValue = v4;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v6 = v7;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v6, 0LL);
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.userSvtEntity, (int32_t)entity, (int32_t)method, v3);
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
    sub_1B8880C(0LL, value);
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
    sub_1B8880C(0LL, value);
  this->fields.dragSelectNum = value - 1;
}


void __fastcall CombineServantListViewItem__set_IsHpStatusMax(
        CombineServantListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  if ( !this )
    sub_1B8880C(0LL, value);
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
    sub_1B8880C(0LL, value);
  this->fields.isNotSelectSecondStatusUpAtk = this->fields.atkBase > 0 && value;
}


void __fastcall CombineServantListViewItem__set_IsSecondHpStatusMax(
        CombineServantListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  if ( !this )
    sub_1B8880C(0LL, value);
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
  sub_1B88554(
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
  UnityEngine_Object_o *manager; // x21
  int64_t IsLargeSuccessCampaignClassId; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3
  struct CombineServantListViewItem_o *_4__this; // x8
  struct CombineServantListViewItem_o *v10; // x8
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v12; // q1
  struct CombineServantListViewManager_o *v13; // x22
  int32_t eventId; // w21
  const MethodInfo *v15; // x3
  struct CombineServantListViewItem_o *v16; // x8
  struct CombineServantListViewItem_o *v17; // x8
  ServantFilterMaster_o *v18; // x21
  int32_t svtId; // w22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // kr00_16
  struct CombineServantListViewItem_o *v23; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v24; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v25; // [xsp+20h] [xbp-50h]

  if ( (byte_4A5EB8A & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ServantFilterMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4A5EB8A = 1;
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
                                    v8);
  if ( (IsLargeSuccessCampaignClassId & 1) == 0 )
  {
    v10 = this->fields.__4__this;
    if ( !v10 )
      goto LABEL_34;
    userSvtEntity = v10->fields.userSvtEntity;
    if ( !userSvtEntity )
      goto LABEL_34;
    v12 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
    v13 = this->fields.manager;
    eventId = entity->fields.eventId;
    *(_OWORD *)&v25.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v25.fields.fakeValue = v12;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v24 = v25;
    IsLargeSuccessCampaignClassId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v24, 0LL);
    if ( !v13 )
      goto LABEL_34;
    if ( !CombineServantListViewManager__IsExchangeSvtExist(
            (CombineServantListViewManager_o *)IsLargeSuccessCampaignClassId,
            eventId,
            IsLargeSuccessCampaignClassId,
            v15) )
    {
LABEL_37:
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      IsLargeSuccessCampaignClassId = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventCampaignMaster___);
      v16 = this->fields.__4__this;
      if ( !v16 || !entity || !IsLargeSuccessCampaignClassId )
        goto LABEL_34;
      if ( !EventCampaignMaster__IsEnableServant(
              (EventCampaignMaster_o *)IsLargeSuccessCampaignClassId,
              v16->fields.svtId,
              entity->fields.eventId,
              0LL) )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        IsLargeSuccessCampaignClassId = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantFilterMaster___);
        v17 = this->fields.__4__this;
        if ( v17 )
        {
          v18 = (ServantFilterMaster_o *)IsLargeSuccessCampaignClassId;
          svtId = v17->fields.svtId;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(svtId, 0LL);
          v7 = *(_QWORD *)&v20.fields.fakeValue;
          IsLargeSuccessCampaignClassId = *(_QWORD *)&v20.fields.currentCryptoKey;
          if ( v18 )
          {
            IsLargeSuccessCampaignClassId = ServantFilterMaster__IsEnableServant(v18, v20, entity->fields.eventId, 0LL);
            if ( (IsLargeSuccessCampaignClassId & 1) != 0 )
              return 1;
            v23 = this->fields.__4__this;
            if ( v23 )
            {
              IsLargeSuccessCampaignClassId = (int64_t)v23->fields.userSvtEntity;
              if ( IsLargeSuccessCampaignClassId )
                return UserServantEntity__getEventUpVal_40205120(
                         (UserServantEntity_o *)IsLargeSuccessCampaignClassId,
                         v23->fields.setupInfo,
                         entity->fields.eventId,
                         0LL,
                         0LL);
            }
          }
        }
LABEL_34:
        sub_1B8880C(IsLargeSuccessCampaignClassId, v7);
      }
    }
  }
  return 1;
}